#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0095[4060] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 4, 0, 0, 5, 0, 6, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0,
    0, 0, 10, 0, 0, 0, 11, 0, 0, 12, 0, 0, 13, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0,
    0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 20, 0, 21, 0, 22, 0, 23, 0, 24, 0, 25, 0, 26, 0,
    27, 0, 0, 28, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 33, 0, 0, 0, 34, 35,
    0, 0, 36, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0,
    43, 0, 44, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0,
    52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0,
    0, 0, 59, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 62, 0, 0, 63, 64, 0, 65, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0,
    0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 71, 0, 0, 72, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78,
    0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83,
    0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87,
    0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 92, 0, 0, 93, 0, 94, 0, 0, 95, 0, 96, 0,
    0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 99, 0, 0, 0, 100, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0,
    104, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 107, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 110, 0, 111, 112, 113, 0, 114, 0, 0,
    0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    118, 119, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 129, 0, 0, 130, 0, 0,
    0, 0, 0, 0, 0, 131, 0, 132, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    135, 0, 0, 136, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0,
    0, 0, 0, 0, 0, 143, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 148, 0,
    149, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 154, 155, 0,
    156, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 161, 162, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 165,
    0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 170, 171, 0, 172, 0,
    0, 173, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 177, 178, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0,
    0, 0, 181, 0, 0, 182, 0, 183, 0, 0, 184, 0, 185, 0, 0, 186, 187, 0, 0, 188, 189, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0,
    0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    209, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0,
    212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 224, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 229, 0, 230, 0, 0, 0, 231, 232, 0, 233, 0, 0, 234,
    0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 237, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 241, 0, 242, 243, 0, 0, 0,
    0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 249, 0, 250,
    0, 0, 0, 251, 252, 0, 253, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0,
    260, 0, 261, 0, 0, 262, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 266, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 269, 0,
    0, 0, 0, 270, 0, 271, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 275, 0, 276, 0, 0, 0, 277, 278, 0, 279, 0, 0, 280,
    0, 281, 0, 0, 282, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 286, 0, 0, 0, 287, 0,
    0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 293, 0, 294,
    0, 0, 295, 0, 0, 296, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 300, 0, 0, 0, 0, 301, 0, 0, 302, 0, 0, 0, 0,
    303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0, 0, 307,
    0, 0, 308, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 313,
    0, 314, 0, 0, 315, 0, 316, 0, 0, 317, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 326, 0, 0, 0, 0, 0, 0, 327,
    0, 0, 328, 0, 329, 0, 0, 0, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0,
    0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0,
    0, 0, 339, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 347, 0, 0, 0, 0,
    0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0,
    0, 0, 0, 0, 0, 353, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 356, 0, 0, 0, 0,
    0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 359, 0, 0, 360, 0, 361, 362, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 365, 0, 366, 0, 367,
    0, 368, 0, 0, 0, 369, 0, 370, 0, 0, 371, 0, 372, 0, 373, 0, 374, 0, 375, 0, 376, 0, 377, 0, 378, 0, 379, 0, 0, 0, 0, 0,
    0, 380, 0, 0, 0, 381, 0, 382, 0, 383, 0, 384, 0, 385, 0, 0, 386, 0, 387, 0, 388, 0, 0, 389, 390, 0, 0, 391, 0, 392, 0, 0,
    0, 0, 0, 0, 393, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 397, 0, 398, 0, 399, 0, 0, 0, 0, 0, 0, 0,
    400, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 402, 0, 403, 0, 404, 0, 0, 0, 0, 405, 0, 0, 406, 0, 0, 407, 0, 0, 0, 0,
    0, 408, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 412, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0,
    0, 415, 0, 416, 0, 417, 0, 418, 0, 0, 419, 0, 420, 421, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0,
    0, 424, 425, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 428, 0, 429, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 431, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 436, 0, 437, 0, 0, 0, 438, 0, 0, 0, 0,
    439, 0, 0, 440, 0, 441, 0, 0, 0, 442, 0, 0, 0, 0, 443, 0, 0, 0, 444, 0, 445, 0, 0, 0, 446, 0, 0, 0, 447, 0, 448, 0,
    0, 0, 0, 0, 0, 0, 449, 0, 450, 0, 451, 0, 0, 0, 452, 0, 0, 0, 453, 0, 454, 0, 0, 0, 0, 0, 0, 0, 455, 0, 456, 0,
    0, 0, 457, 0, 0, 0, 0, 458, 0, 0, 459, 460, 0, 0, 461, 0, 0, 462, 0, 463, 0, 0, 464, 0, 0, 0, 465, 0, 0, 0, 466, 0,
    0, 0, 467, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 469, 0, 470, 471, 0, 0, 0, 0, 0, 0, 0, 472, 0, 473, 0, 0, 0, 474, 0,
    0, 0, 0, 475, 0, 0, 476, 0, 477, 0, 0, 0, 478, 0, 0, 0, 0, 479, 0, 0, 0, 480, 0, 481, 0, 0, 0, 482, 0, 0, 0, 0,
    0, 483, 0, 0, 484, 0, 485, 0, 0, 0, 486, 0, 0, 0, 0, 0, 487, 0, 0, 488, 489, 0, 0, 490, 0, 491, 0, 492, 0, 0, 493, 0,
    494, 0, 0, 495, 0, 0, 0, 496, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 499, 500, 501, 0, 502, 0, 0, 0, 503, 0,
    0, 0, 0, 504, 0, 0, 505, 0, 506, 0, 0, 0, 507, 0, 0, 0, 0, 508, 0, 0, 509, 0, 0, 0, 0, 0, 0, 510, 0, 511, 0, 0,
    0, 512, 0, 0, 0, 0, 513, 0, 0, 514, 0, 515, 0, 0, 0, 516, 0, 0, 0, 0, 517, 0, 0, 518, 0, 0, 519, 0, 0, 520, 521, 0,
    0, 0, 522, 0, 0, 523, 0, 0, 0, 524, 0, 0, 0, 0, 525, 0, 0, 526, 0, 527, 0, 0, 0, 528, 0, 0, 0, 0, 529, 0, 530, 0,
    531, 0, 0, 0, 532, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 534, 0, 535, 0, 0, 0, 536, 0, 0, 0, 0, 0, 537, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 539, 0, 0, 0, 540, 0, 0, 0, 0, 541, 0, 0, 0, 542, 0, 0, 0, 0, 0, 543,
    0, 544, 0, 0, 0, 0, 545, 0, 546, 0, 0, 0, 0, 0, 547, 0, 548, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 552, 0, 0, 553, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 555, 556, 557, 0, 558, 0, 0, 0, 0, 0, 0, 559, 0,
    0, 0, 0, 0, 0, 560, 561, 562, 0, 563, 0, 0, 0, 564, 0, 0, 0, 0, 0, 565, 0, 0, 0, 566, 0, 0, 567, 0, 0, 0, 568, 0,
    0, 569, 0, 0, 0, 570, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 573, 574, 575, 0, 576, 0, 0, 0, 577,
    0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 580, 581, 582, 0, 583, 0, 0, 0, 584, 0, 585, 0, 0,
    0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 587, 588, 589, 0, 590, 0, 0, 0, 591, 0, 592, 0, 0, 0, 593, 0, 0, 594, 0, 0, 0,
    0, 595, 0, 0, 596, 0, 0, 0, 597, 0, 0, 0, 0, 598, 0, 599, 600, 0, 0, 601, 0, 0, 0, 602, 0, 0, 0, 0, 0, 603, 0, 0,
    0, 604, 0, 0, 605, 0, 0, 0, 606, 0, 0, 0, 607, 0, 0, 608, 0, 0, 0, 609, 0, 0, 0, 610, 0, 0, 0, 611, 0, 0, 0, 612,
    0, 0, 0, 613, 0, 0, 0, 614, 0, 0, 0, 615, 0, 0, 0, 616, 0, 0, 0, 617, 0, 0, 0, 618, 0, 0, 0, 619, 0, 0, 0, 620,
    0, 0, 0, 621, 0, 622, 0, 0, 623, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0, 625, 626, 627, 0, 628, 0, 0, 0, 0, 0,
    0, 629, 0, 0, 0, 0, 0, 0, 630, 631, 632, 0, 633, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 635, 636, 637, 0, 638, 0,
    0, 0, 0, 639, 0, 0, 0, 640, 0, 0, 0, 641, 0, 0, 0, 642, 0, 0, 0, 643, 0, 0, 0, 644, 0, 0, 0, 645, 0, 0, 0, 646,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 648, 649, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 654, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0,
    0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 661, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 663, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 666,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 669, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0, 0, 672, 673, 0, 0, 0, 674, 0, 0, 0, 0, 0, 675, 0,
    0, 0, 0, 676, 0, 0, 677, 0, 0, 0, 0, 0, 0, 0, 0, 0, 678, 0, 0, 679, 0, 0, 0, 0, 680, 0, 0, 0, 681, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 682, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 0, 0, 0, 684, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 686, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 689, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 690, 0, 0, 0, 691, 0, 0, 0, 0, 0, 0, 0, 0, 0, 692, 0, 0, 0, 693, 0, 0,
    694, 0, 0, 0, 695, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 697, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 698, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 701, 0,
    0, 0, 0, 0, 702, 0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0,
    0, 0, 707, 0, 0, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 709, 0, 0, 0, 0, 710, 0, 711, 0, 712, 0, 0, 0, 0, 0, 713, 0, 0, 0, 0, 0, 714, 0, 0, 0, 715, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 717, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 718,
};
void recomp_unit_0095_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08980000u;
        entry_id = (entry_delta < 16240u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0095[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08980000;
    case 2u: goto L_08980048;
    case 3u: goto L_08980058;
    case 4u: goto L_08980064;
    case 5u: goto L_08980070;
    case 6u: goto L_08980078;
    case 7u: goto L_089800D0;
    case 8u: goto L_089800E8;
    case 9u: goto L_089800F4;
    case 10u: goto L_08980108;
    case 11u: goto L_08980118;
    case 12u: goto L_08980124;
    case 13u: goto L_08980130;
    case 14u: goto L_08980134;
    case 15u: goto L_08980144;
    case 16u: goto L_08980164;
    case 17u: goto L_08980184;
    case 18u: goto L_089801B0;
    case 19u: goto L_089801C0;
    case 20u: goto L_089801C8;
    case 21u: goto L_089801D0;
    case 22u: goto L_089801D8;
    case 23u: goto L_089801E0;
    case 24u: goto L_089801E8;
    case 25u: goto L_089801F0;
    case 26u: goto L_089801F8;
    case 27u: goto L_08980200;
    case 28u: goto L_0898020C;
    case 29u: goto L_08980210;
    case 30u: goto L_08980234;
    case 31u: goto L_08980254;
    case 32u: goto L_08980260;
    case 33u: goto L_08980268;
    case 34u: goto L_08980278;
    case 35u: goto L_0898027C;
    case 36u: goto L_08980288;
    case 37u: goto L_08980298;
    case 38u: goto L_089802A0;
    case 39u: goto L_089802B8;
    case 40u: goto L_089802D0;
    case 41u: goto L_089802E4;
    case 42u: goto L_089802F8;
    case 43u: goto L_08980300;
    case 44u: goto L_08980308;
    case 45u: goto L_08980310;
    case 46u: goto L_08980318;
    case 47u: goto L_08980334;
    case 48u: goto L_0898034C;
    case 49u: goto L_08980354;
    case 50u: goto L_08980364;
    case 51u: goto L_0898036C;
    case 52u: goto L_08980380;
    case 53u: goto L_08980394;
    case 54u: goto L_089803AC;
    case 55u: goto L_089803B0;
    case 56u: goto L_089803D4;
    case 57u: goto L_089803D8;
    case 58u: goto L_089803F4;
    case 59u: goto L_08980408;
    case 60u: goto L_0898041C;
    case 61u: goto L_08980424;
    case 62u: goto L_08980438;
    case 63u: goto L_08980444;
    case 64u: goto L_08980448;
    case 65u: goto L_08980450;
    case 66u: goto L_08980458;
    case 67u: goto L_08980470;
    case 68u: goto L_08980494;
    case 69u: goto L_089804A8;
    case 70u: goto L_089804B8;
    case 71u: goto L_089804C4;
    case 72u: goto L_089804D0;
    case 73u: goto L_089804D4;
    case 74u: goto L_089804E4;
    case 75u: goto L_089804FC;
    case 76u: goto L_08980550;
    case 77u: goto L_08980564;
    case 78u: goto L_0898057C;
    case 79u: goto L_08980590;
    case 80u: goto L_08980598;
    case 81u: goto L_089805AC;
    case 82u: goto L_089805C4;
    case 83u: goto L_089805FC;
    case 84u: goto L_08980618;
    case 85u: goto L_08980620;
    case 86u: goto L_08980664;
    case 87u: goto L_0898067C;
    case 88u: goto L_08980694;
    case 89u: goto L_089806A4;
    case 90u: goto L_089806B4;
    case 91u: goto L_089806C0;
    case 92u: goto L_089806D0;
    case 93u: goto L_089806DC;
    case 94u: goto L_089806E4;
    case 95u: goto L_089806F0;
    case 96u: goto L_089806F8;
    case 97u: goto L_08980718;
    case 98u: goto L_08980728;
    case 99u: goto L_08980730;
    case 100u: goto L_08980740;
    case 101u: goto L_08980744;
    case 102u: goto L_0898075C;
    case 103u: goto L_0898076C;
    case 104u: goto L_08980780;
    case 105u: goto L_08980790;
    case 106u: goto L_089807A4;
    case 107u: goto L_089807AC;
    case 108u: goto L_089807BC;
    case 109u: goto L_089807CC;
    case 110u: goto L_089807DC;
    case 111u: goto L_089807E4;
    case 112u: goto L_089807E8;
    case 113u: goto L_089807EC;
    case 114u: goto L_089807F4;
    case 115u: goto L_08980808;
    case 116u: goto L_08980834;
    case 117u: goto L_08980858;
    case 118u: goto L_08980880;
    case 119u: goto L_08980884;
    case 120u: goto L_08980894;
    case 121u: goto L_089808A8;
    case 122u: goto L_089808BC;
    case 123u: goto L_089808D0;
    case 124u: goto L_08980914;
    case 125u: goto L_08980928;
    case 126u: goto L_08980934;
    case 127u: goto L_0898094C;
    case 128u: goto L_08980958;
    case 129u: goto L_08980968;
    case 130u: goto L_08980974;
    case 131u: goto L_08980994;
    case 132u: goto L_0898099C;
    case 133u: goto L_089809A0;
    case 134u: goto L_089809C0;
    case 135u: goto L_08980A00;
    case 136u: goto L_08980A0C;
    case 137u: goto L_08980A1C;
    case 138u: goto L_08980A28;
    case 139u: goto L_08980A44;
    case 140u: goto L_08980A50;
    case 141u: goto L_08980A68;
    case 142u: goto L_08980A74;
    case 143u: goto L_08980A94;
    case 144u: goto L_08980A9C;
    case 145u: goto L_08980AA4;
    case 146u: goto L_08980AD8;
    case 147u: goto L_08980AE4;
    case 148u: goto L_08980AF8;
    case 149u: goto L_08980B00;
    case 150u: goto L_08980B04;
    case 151u: goto L_08980B20;
    case 152u: goto L_08980B54;
    case 153u: goto L_08980B70;
    case 154u: goto L_08980B74;
    case 155u: goto L_08980B78;
    case 156u: goto L_08980B80;
    case 157u: goto L_08980B8C;
    case 158u: goto L_08980B94;
    case 159u: goto L_08980BAC;
    case 160u: goto L_08980BC8;
    case 161u: goto L_08980BCC;
    case 162u: goto L_08980BD0;
    case 163u: goto L_08980BD8;
    case 164u: goto L_08980BEC;
    case 165u: goto L_08980BFC;
    case 166u: goto L_08980C04;
    case 167u: goto L_08980C28;
    case 168u: goto L_08980C4C;
    case 169u: goto L_08980C68;
    case 170u: goto L_08980C6C;
    case 171u: goto L_08980C70;
    case 172u: goto L_08980C78;
    case 173u: goto L_08980C84;
    case 174u: goto L_08980C8C;
    case 175u: goto L_08980CA8;
    case 176u: goto L_08980CC4;
    case 177u: goto L_08980CC8;
    case 178u: goto L_08980CCC;
    case 179u: goto L_08980CD4;
    case 180u: goto L_08980CF0;
    case 181u: goto L_08980D08;
    case 182u: goto L_08980D14;
    case 183u: goto L_08980D1C;
    case 184u: goto L_08980D28;
    case 185u: goto L_08980D30;
    case 186u: goto L_08980D3C;
    case 187u: goto L_08980D40;
    case 188u: goto L_08980D4C;
    case 189u: goto L_08980D50;
    case 190u: goto L_08980D58;
    case 191u: goto L_08980D8C;
    case 192u: goto L_08980E4C;
    case 193u: goto L_08980E58;
    case 194u: goto L_08980F18;
    case 195u: goto L_08980F24;
    case 196u: goto L_08980FE4;
    case 197u: goto L_08980FF0;
    case 198u: goto L_089810B0;
    case 199u: goto L_089810BC;
    case 200u: goto L_08981124;
    case 201u: goto L_08981130;
    case 202u: goto L_08981198;
    case 203u: goto L_089811A4;
    case 204u: goto L_08981204;
    case 205u: goto L_08981210;
    case 206u: goto L_08981270;
    case 207u: goto L_08981278;
    case 208u: goto L_08981298;
    case 209u: goto L_08981300;
    case 210u: goto L_0898130C;
    case 211u: goto L_08981374;
    case 212u: goto L_08981380;
    case 213u: goto L_089813E8;
    case 214u: goto L_089813F4;
    case 215u: goto L_0898145C;
    case 216u: goto L_08981468;
    case 217u: goto L_08981494;
    case 218u: goto L_089814A0;
    case 219u: goto L_089814CC;
    case 220u: goto L_089814D8;
    case 221u: goto L_08981518;
    case 222u: goto L_08981524;
    case 223u: goto L_08981564;
    case 224u: goto L_0898156C;
    case 225u: goto L_08981594;
    case 226u: goto L_089815A0;
    case 227u: goto L_089815B0;
    case 228u: goto L_089815C0;
    case 229u: goto L_089815CC;
    case 230u: goto L_089815D4;
    case 231u: goto L_089815E4;
    case 232u: goto L_089815E8;
    case 233u: goto L_089815F0;
    case 234u: goto L_089815FC;
    case 235u: goto L_0898160C;
    case 236u: goto L_08981620;
    case 237u: goto L_08981628;
    case 238u: goto L_08981638;
    case 239u: goto L_08981648;
    case 240u: goto L_08981654;
    case 241u: goto L_08981664;
    case 242u: goto L_0898166C;
    case 243u: goto L_08981670;
    case 244u: goto L_0898168C;
    case 245u: goto L_089816BC;
    case 246u: goto L_089816C8;
    case 247u: goto L_089816D8;
    case 248u: goto L_089816E8;
    case 249u: goto L_089816F4;
    case 250u: goto L_089816FC;
    case 251u: goto L_0898170C;
    case 252u: goto L_08981710;
    case 253u: goto L_08981718;
    case 254u: goto L_08981724;
    case 255u: goto L_08981734;
    case 256u: goto L_08981748;
    case 257u: goto L_08981750;
    case 258u: goto L_08981764;
    case 259u: goto L_08981774;
    case 260u: goto L_08981780;
    case 261u: goto L_08981788;
    case 262u: goto L_08981794;
    case 263u: goto L_089817A0;
    case 264u: goto L_089817B0;
    case 265u: goto L_089817C4;
    case 266u: goto L_089817CC;
    case 267u: goto L_089817DC;
    case 268u: goto L_089817EC;
    case 269u: goto L_089817F8;
    case 270u: goto L_0898180C;
    case 271u: goto L_08981814;
    case 272u: goto L_08981820;
    case 273u: goto L_08981830;
    case 274u: goto L_08981844;
    case 275u: goto L_0898184C;
    case 276u: goto L_08981854;
    case 277u: goto L_08981864;
    case 278u: goto L_08981868;
    case 279u: goto L_08981870;
    case 280u: goto L_0898187C;
    case 281u: goto L_08981884;
    case 282u: goto L_08981890;
    case 283u: goto L_0898189C;
    case 284u: goto L_089818B4;
    case 285u: goto L_089818DC;
    case 286u: goto L_089818E8;
    case 287u: goto L_089818F8;
    case 288u: goto L_08981914;
    case 289u: goto L_08981984;
    case 290u: goto L_089819A8;
    case 291u: goto L_089819BC;
    case 292u: goto L_089819D8;
    case 293u: goto L_089819F4;
    case 294u: goto L_089819FC;
    case 295u: goto L_08981A08;
    case 296u: goto L_08981A14;
    case 297u: goto L_08981A20;
    case 298u: goto L_08981A34;
    case 299u: goto L_08981A44;
    case 300u: goto L_08981A4C;
    case 301u: goto L_08981A60;
    case 302u: goto L_08981A6C;
    case 303u: goto L_08981A80;
    case 304u: goto L_08981AB8;
    case 305u: goto L_08981AD4;
    case 306u: goto L_08981AF0;
    case 307u: goto L_08981AFC;
    case 308u: goto L_08981B08;
    case 309u: goto L_08981B10;
    case 310u: goto L_08981B24;
    case 311u: goto L_08981B44;
    case 312u: goto L_08981B74;
    case 313u: goto L_08981B7C;
    case 314u: goto L_08981B84;
    case 315u: goto L_08981B90;
    case 316u: goto L_08981B98;
    case 317u: goto L_08981BA4;
    case 318u: goto L_08981BAC;
    case 319u: goto L_08981BBC;
    case 320u: goto L_08981BD4;
    case 321u: goto L_08981BE8;
    case 322u: goto L_08981C38;
    case 323u: goto L_08981C58;
    case 324u: goto L_08981C6C;
    case 325u: goto L_08981CD8;
    case 326u: goto L_08981CE0;
    case 327u: goto L_08981CFC;
    case 328u: goto L_08981D08;
    case 329u: goto L_08981D10;
    case 330u: goto L_08981D2C;
    case 331u: goto L_08981D38;
    case 332u: goto L_08981D5C;
    case 333u: goto L_08981D78;
    case 334u: goto L_08981D84;
    case 335u: goto L_08981DA0;
    case 336u: goto L_08981DAC;
    case 337u: goto L_08981DC0;
    case 338u: goto L_08981DEC;
    case 339u: goto L_08981E08;
    case 340u: goto L_08981E14;
    case 341u: goto L_08981E2C;
    case 342u: goto L_08981E60;
    case 343u: goto L_08981E88;
    case 344u: goto L_08981E9C;
    case 345u: goto L_08981EBC;
    case 346u: goto L_08981EE4;
    case 347u: goto L_08981EEC;
    case 348u: goto L_08981F08;
    case 349u: goto L_08981F44;
    case 350u: goto L_08981F54;
    case 351u: goto L_08981F60;
    case 352u: goto L_08981F74;
    case 353u: goto L_08981F94;
    case 354u: goto L_08981F9C;
    case 355u: goto L_08981FE8;
    case 356u: goto L_08981FEC;
    case 357u: goto L_08982004;
    case 358u: goto L_08982048;
    case 359u: goto L_08982054;
    case 360u: goto L_08982060;
    case 361u: goto L_08982068;
    case 362u: goto L_0898206C;
    case 363u: goto L_089820D0;
    case 364u: goto L_089820E8;
    case 365u: goto L_089820EC;
    case 366u: goto L_089820F4;
    case 367u: goto L_089820FC;
    case 368u: goto L_08982104;
    case 369u: goto L_08982114;
    case 370u: goto L_0898211C;
    case 371u: goto L_08982128;
    case 372u: goto L_08982130;
    case 373u: goto L_08982138;
    case 374u: goto L_08982140;
    case 375u: goto L_08982148;
    case 376u: goto L_08982150;
    case 377u: goto L_08982158;
    case 378u: goto L_08982160;
    case 379u: goto L_08982168;
    case 380u: goto L_08982184;
    case 381u: goto L_08982194;
    case 382u: goto L_0898219C;
    case 383u: goto L_089821A4;
    case 384u: goto L_089821AC;
    case 385u: goto L_089821B4;
    case 386u: goto L_089821C0;
    case 387u: goto L_089821C8;
    case 388u: goto L_089821D0;
    case 389u: goto L_089821DC;
    case 390u: goto L_089821E0;
    case 391u: goto L_089821EC;
    case 392u: goto L_089821F4;
    case 393u: goto L_08982210;
    case 394u: goto L_0898221C;
    case 395u: goto L_089822B8;
    case 396u: goto L_089822C8;
    case 397u: goto L_089822D0;
    case 398u: goto L_089822D8;
    case 399u: goto L_089822E0;
    case 400u: goto L_08982300;
    case 401u: goto L_0898231C;
    case 402u: goto L_08982330;
    case 403u: goto L_08982338;
    case 404u: goto L_08982340;
    case 405u: goto L_08982354;
    case 406u: goto L_08982360;
    case 407u: goto L_0898236C;
    case 408u: goto L_08982384;
    case 409u: goto L_08982390;
    case 410u: goto L_089823A4;
    case 411u: goto L_089823C4;
    case 412u: goto L_089823D0;
    case 413u: goto L_089823D8;
    case 414u: goto L_089823F0;
    case 415u: goto L_08982404;
    case 416u: goto L_0898240C;
    case 417u: goto L_08982414;
    case 418u: goto L_0898241C;
    case 419u: goto L_08982428;
    case 420u: goto L_08982430;
    case 421u: goto L_08982434;
    case 422u: goto L_08982448;
    case 423u: goto L_08982474;
    case 424u: goto L_08982484;
    case 425u: goto L_08982488;
    case 426u: goto L_08982490;
    case 427u: goto L_089824BC;
    case 428u: goto L_089824C4;
    case 429u: goto L_089824CC;
    case 430u: goto L_089824EC;
    case 431u: goto L_089824F8;
    case 432u: goto L_08982524;
    case 433u: goto L_08982550;
    case 434u: goto L_0898258C;
    case 435u: goto L_089825B4;
    case 436u: goto L_089825D4;
    case 437u: goto L_089825DC;
    case 438u: goto L_089825EC;
    case 439u: goto L_08982600;
    case 440u: goto L_0898260C;
    case 441u: goto L_08982614;
    case 442u: goto L_08982624;
    case 443u: goto L_08982638;
    case 444u: goto L_08982648;
    case 445u: goto L_08982650;
    case 446u: goto L_08982660;
    case 447u: goto L_08982670;
    case 448u: goto L_08982678;
    case 449u: goto L_08982698;
    case 450u: goto L_089826A0;
    case 451u: goto L_089826A8;
    case 452u: goto L_089826B8;
    case 453u: goto L_089826C8;
    case 454u: goto L_089826D0;
    case 455u: goto L_089826F0;
    case 456u: goto L_089826F8;
    case 457u: goto L_08982708;
    case 458u: goto L_0898271C;
    case 459u: goto L_08982728;
    case 460u: goto L_0898272C;
    case 461u: goto L_08982738;
    case 462u: goto L_08982744;
    case 463u: goto L_0898274C;
    case 464u: goto L_08982758;
    case 465u: goto L_08982768;
    case 466u: goto L_08982778;
    case 467u: goto L_08982788;
    case 468u: goto L_089827A4;
    case 469u: goto L_089827B4;
    case 470u: goto L_089827BC;
    case 471u: goto L_089827C0;
    case 472u: goto L_089827E0;
    case 473u: goto L_089827E8;
    case 474u: goto L_089827F8;
    case 475u: goto L_0898280C;
    case 476u: goto L_08982818;
    case 477u: goto L_08982820;
    case 478u: goto L_08982830;
    case 479u: goto L_08982844;
    case 480u: goto L_08982854;
    case 481u: goto L_0898285C;
    case 482u: goto L_0898286C;
    case 483u: goto L_08982884;
    case 484u: goto L_08982890;
    case 485u: goto L_08982898;
    case 486u: goto L_089828A8;
    case 487u: goto L_089828C0;
    case 488u: goto L_089828CC;
    case 489u: goto L_089828D0;
    case 490u: goto L_089828DC;
    case 491u: goto L_089828E4;
    case 492u: goto L_089828EC;
    case 493u: goto L_089828F8;
    case 494u: goto L_08982900;
    case 495u: goto L_0898290C;
    case 496u: goto L_0898291C;
    case 497u: goto L_0898292C;
    case 498u: goto L_0898293C;
    case 499u: goto L_08982958;
    case 500u: goto L_0898295C;
    case 501u: goto L_08982960;
    case 502u: goto L_08982968;
    case 503u: goto L_08982978;
    case 504u: goto L_0898298C;
    case 505u: goto L_08982998;
    case 506u: goto L_089829A0;
    case 507u: goto L_089829B0;
    case 508u: goto L_089829C4;
    case 509u: goto L_089829D0;
    case 510u: goto L_089829EC;
    case 511u: goto L_089829F4;
    case 512u: goto L_08982A04;
    case 513u: goto L_08982A18;
    case 514u: goto L_08982A24;
    case 515u: goto L_08982A2C;
    case 516u: goto L_08982A3C;
    case 517u: goto L_08982A50;
    case 518u: goto L_08982A5C;
    case 519u: goto L_08982A68;
    case 520u: goto L_08982A74;
    case 521u: goto L_08982A78;
    case 522u: goto L_08982A88;
    case 523u: goto L_08982A94;
    case 524u: goto L_08982AA4;
    case 525u: goto L_08982AB8;
    case 526u: goto L_08982AC4;
    case 527u: goto L_08982ACC;
    case 528u: goto L_08982ADC;
    case 529u: goto L_08982AF0;
    case 530u: goto L_08982AF8;
    case 531u: goto L_08982B00;
    case 532u: goto L_08982B10;
    case 533u: goto L_08982B24;
    case 534u: goto L_08982B44;
    case 535u: goto L_08982B4C;
    case 536u: goto L_08982B5C;
    case 537u: goto L_08982B74;
    case 538u: goto L_08982BA8;
    case 539u: goto L_08982BB0;
    case 540u: goto L_08982BC0;
    case 541u: goto L_08982BD4;
    case 542u: goto L_08982BE4;
    case 543u: goto L_08982BFC;
    case 544u: goto L_08982C04;
    case 545u: goto L_08982C18;
    case 546u: goto L_08982C20;
    case 547u: goto L_08982C38;
    case 548u: goto L_08982C40;
    case 549u: goto L_08982C58;
    case 550u: goto L_08982C88;
    case 551u: goto L_08982CE0;
    case 552u: goto L_08982D08;
    case 553u: goto L_08982D14;
    case 554u: goto L_08982D30;
    case 555u: goto L_08982D4C;
    case 556u: goto L_08982D50;
    case 557u: goto L_08982D54;
    case 558u: goto L_08982D5C;
    case 559u: goto L_08982D78;
    case 560u: goto L_08982D94;
    case 561u: goto L_08982D98;
    case 562u: goto L_08982D9C;
    case 563u: goto L_08982DA4;
    case 564u: goto L_08982DB4;
    case 565u: goto L_08982DCC;
    case 566u: goto L_08982DDC;
    case 567u: goto L_08982DE8;
    case 568u: goto L_08982DF8;
    case 569u: goto L_08982E04;
    case 570u: goto L_08982E14;
    case 571u: goto L_08982E28;
    case 572u: goto L_08982E40;
    case 573u: goto L_08982E5C;
    case 574u: goto L_08982E60;
    case 575u: goto L_08982E64;
    case 576u: goto L_08982E6C;
    case 577u: goto L_08982E7C;
    case 578u: goto L_08982E94;
    case 579u: goto L_08982EB0;
    case 580u: goto L_08982ECC;
    case 581u: goto L_08982ED0;
    case 582u: goto L_08982ED4;
    case 583u: goto L_08982EDC;
    case 584u: goto L_08982EEC;
    case 585u: goto L_08982EF4;
    case 586u: goto L_08982F10;
    case 587u: goto L_08982F2C;
    case 588u: goto L_08982F30;
    case 589u: goto L_08982F34;
    case 590u: goto L_08982F3C;
    case 591u: goto L_08982F4C;
    case 592u: goto L_08982F54;
    case 593u: goto L_08982F64;
    case 594u: goto L_08982F70;
    case 595u: goto L_08982F84;
    case 596u: goto L_08982F90;
    case 597u: goto L_08982FA0;
    case 598u: goto L_08982FB4;
    case 599u: goto L_08982FBC;
    case 600u: goto L_08982FC0;
    case 601u: goto L_08982FCC;
    case 602u: goto L_08982FDC;
    case 603u: goto L_08982FF4;
    case 604u: goto L_08983004;
    case 605u: goto L_08983010;
    case 606u: goto L_08983020;
    case 607u: goto L_08983030;
    case 608u: goto L_0898303C;
    case 609u: goto L_0898304C;
    case 610u: goto L_0898305C;
    case 611u: goto L_0898306C;
    case 612u: goto L_0898307C;
    case 613u: goto L_0898308C;
    case 614u: goto L_0898309C;
    case 615u: goto L_089830AC;
    case 616u: goto L_089830BC;
    case 617u: goto L_089830CC;
    case 618u: goto L_089830DC;
    case 619u: goto L_089830EC;
    case 620u: goto L_089830FC;
    case 621u: goto L_0898310C;
    case 622u: goto L_08983114;
    case 623u: goto L_08983120;
    case 624u: goto L_0898313C;
    case 625u: goto L_08983158;
    case 626u: goto L_0898315C;
    case 627u: goto L_08983160;
    case 628u: goto L_08983168;
    case 629u: goto L_08983184;
    case 630u: goto L_089831A0;
    case 631u: goto L_089831A4;
    case 632u: goto L_089831A8;
    case 633u: goto L_089831B0;
    case 634u: goto L_089831CC;
    case 635u: goto L_089831E8;
    case 636u: goto L_089831EC;
    case 637u: goto L_089831F0;
    case 638u: goto L_089831F8;
    case 639u: goto L_0898320C;
    case 640u: goto L_0898321C;
    case 641u: goto L_0898322C;
    case 642u: goto L_0898323C;
    case 643u: goto L_0898324C;
    case 644u: goto L_0898325C;
    case 645u: goto L_0898326C;
    case 646u: goto L_0898327C;
    case 647u: goto L_089832CC;
    case 648u: goto L_0898332C;
    case 649u: goto L_08983330;
    case 650u: goto L_0898334C;
    case 651u: goto L_08983410;
    case 652u: goto L_089834AC;
    case 653u: goto L_089834DC;
    case 654u: goto L_089834E8;
    case 655u: goto L_08983544;
    case 656u: goto L_08983550;
    case 657u: goto L_08983578;
    case 658u: goto L_08983588;
    case 659u: goto L_089835B0;
    case 660u: goto L_089835BC;
    case 661u: goto L_08983618;
    case 662u: goto L_08983624;
    case 663u: goto L_089837A4;
    case 664u: goto L_089837B0;
    case 665u: goto L_08983870;
    case 666u: goto L_0898387C;
    case 667u: goto L_0898393C;
    case 668u: goto L_08983948;
    case 669u: goto L_08983A08;
    case 670u: goto L_08983A14;
    case 671u: goto L_08983A3C;
    case 672u: goto L_08983A4C;
    case 673u: goto L_08983A50;
    case 674u: goto L_08983A60;
    case 675u: goto L_08983A78;
    case 676u: goto L_08983A8C;
    case 677u: goto L_08983A98;
    case 678u: goto L_08983AC0;
    case 679u: goto L_08983ACC;
    case 680u: goto L_08983AE0;
    case 681u: goto L_08983AF0;
    case 682u: goto L_08983B18;
    case 683u: goto L_08983B28;
    case 684u: goto L_08983B50;
    case 685u: goto L_08983B60;
    case 686u: goto L_08983B88;
    case 687u: goto L_08983B98;
    case 688u: goto L_08983BC0;
    case 689u: goto L_08983BD0;
    case 690u: goto L_08983C2C;
    case 691u: goto L_08983C3C;
    case 692u: goto L_08983C64;
    case 693u: goto L_08983C74;
    case 694u: goto L_08983C80;
    case 695u: goto L_08983C90;
    case 696u: goto L_08983CC4;
    case 697u: goto L_08983CD4;
    case 698u: goto L_08983D30;
    case 699u: goto L_08983D40;
    case 700u: goto L_08983D68;
    case 701u: goto L_08983D78;
    case 702u: goto L_08983D90;
    case 703u: goto L_08983DA0;
    case 704u: goto L_08983DBC;
    case 705u: goto L_08983DD4;
    case 706u: goto L_08983DEC;
    case 707u: goto L_08983E08;
    case 708u: goto L_08983E18;
    case 709u: goto L_08983E84;
    case 710u: goto L_08983E98;
    case 711u: goto L_08983EA0;
    case 712u: goto L_08983EA8;
    case 713u: goto L_08983EC0;
    case 714u: goto L_08983ED8;
    case 715u: goto L_08983EE8;
    case 716u: goto L_08983F2C;
    case 717u: goto L_08983F40;
    case 718u: goto L_08983F6C;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08980000:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16956));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(120), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(214), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(215), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26404)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-26404), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08980048u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 426u, 0x088A9DD4u>(ctx, &aot_mem) && ctx.pc == 0x08980048u) goto L_08980048;
    return;
L_08980048:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08980058u);
    ctx.gpr[4] = (0u | 416u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08980058u) goto L_08980058;
    return;
L_08980058:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (17036u << 16u);
      if (branch_taken) {
          goto L_08980078;
      }
      goto L_08980064;
    }
L_08980064:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08980070u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089818F8;
L_08980070:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (17036u << 16u);
    goto L_08980078;
L_08980078:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17096u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16076u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(40));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089800D0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089800D0u) goto L_089800D0;
    return;
L_089800D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(152));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089800E8u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089800E8u) goto L_089800E8;
    return;
L_089800E8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[31] = (0x089800F4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08980A94;
L_089800F4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[31] = (0x08980108u);
    ctx.gpr[4] = (0u | 352u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 738u, 0x089C70F0u>(ctx, &aot_mem) && ctx.pc == 0x08980108u) goto L_08980108;
    return;
L_08980108:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 352u);
    ctx.gpr[31] = (0x08980118u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x08980118u) goto L_08980118;
    return;
L_08980118:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08980134;
      }
      goto L_08980124;
    }
L_08980124:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08980130u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 685u, 0x0897F888u>(ctx, &aot_mem) && ctx.pc == 0x08980130u) goto L_08980130;
    return;
L_08980130:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08980134;
L_08980134:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08980144u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 131u, 0x08AC5034u>(ctx, &aot_mem) && ctx.pc == 0x08980144u) goto L_08980144;
    return;
L_08980144:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980164:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08980458;
      }
      goto L_08980184;
    }
L_08980184:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16956));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26404)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-26404), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[5] = (2232u << 16u);
      if (branch_taken) {
          goto L_08980210;
      }
      goto L_089801B0;
    }
L_089801B0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23924));
    ctx.gpr[31] = (0x089801C0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 668u, 0x0897F738u>(ctx, &aot_mem) && ctx.pc == 0x089801C0u) goto L_089801C0;
    return;
L_089801C0:
    ctx.gpr[31] = (0x089801C8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 668u, 0x0897F738u>(ctx, &aot_mem) && ctx.pc == 0x089801C8u) goto L_089801C8;
    return;
L_089801C8:
    ctx.gpr[31] = (0x089801D0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 668u, 0x0897F738u>(ctx, &aot_mem) && ctx.pc == 0x089801D0u) goto L_089801D0;
    return;
L_089801D0:
    ctx.gpr[31] = (0x089801D8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 668u, 0x0897F738u>(ctx, &aot_mem) && ctx.pc == 0x089801D8u) goto L_089801D8;
    return;
L_089801D8:
    ctx.gpr[31] = (0x089801E0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 668u, 0x0897F738u>(ctx, &aot_mem) && ctx.pc == 0x089801E0u) goto L_089801E0;
    return;
L_089801E0:
    ctx.gpr[31] = (0x089801E8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 668u, 0x0897F738u>(ctx, &aot_mem) && ctx.pc == 0x089801E8u) goto L_089801E8;
    return;
L_089801E8:
    ctx.gpr[31] = (0x089801F0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 668u, 0x0897F738u>(ctx, &aot_mem) && ctx.pc == 0x089801F0u) goto L_089801F0;
    return;
L_089801F0:
    ctx.gpr[31] = (0x089801F8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 668u, 0x0897F738u>(ctx, &aot_mem) && ctx.pc == 0x089801F8u) goto L_089801F8;
    return;
L_089801F8:
    ctx.gpr[31] = (0x08980200u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 668u, 0x0897F738u>(ctx, &aot_mem) && ctx.pc == 0x08980200u) goto L_08980200;
    return;
L_08980200:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x0898020Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23888));
    goto L_089824F8;
L_0898020C:
    ctx.gpr[5] = (2232u << 16u);
    goto L_08980210;
L_08980210:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089802F8;
      }
      goto L_08980234;
    }
L_08980234:
    ctx.gpr[4] = (2276u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-27960)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08980254u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 694u, 0x08B03308u>(ctx, &aot_mem) && ctx.pc == 0x08980254u) goto L_08980254;
    return;
L_08980254:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08980268;
      }
      goto L_08980260;
    }
L_08980260:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089802A0;
      }
      goto L_08980268;
    }
L_08980268:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089802A0;
      }
      goto L_08980278;
    }
L_08980278:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0898027C;
L_0898027C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[6] == ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08980298;
    }
    goto L_08980288;
L_08980288:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08980298;
L_08980298:
    if (ctx.gpr[4] != ctx.gpr[18]) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_0898027C;
    }
    goto L_089802A0;
L_089802A0:
    ctx.gpr[6] = (2276u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-27960));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089802E4;
      }
      goto L_089802B8;
    }
L_089802B8:
    ctx.gpr[4] = (2276u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089802E4;
      }
      goto L_089802D0;
    }
L_089802D0:
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x089802E4u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x089802E4u) goto L_089802E4;
    return;
L_089802E4:
    ctx.gpr[4] = (2276u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27960));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_089802F8;
L_089802F8:
    ctx.gpr[31] = (0x08980300u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 167u, 0x0886903Cu>(ctx, &aot_mem) && ctx.pc == 0x08980300u) goto L_08980300;
    return;
L_08980300:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08980310;
      }
      goto L_08980308;
    }
L_08980308:
    ctx.gpr[31] = (0x08980310u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 160u, 0x08868FB4u>(ctx, &aot_mem) && ctx.pc == 0x08980310u) goto L_08980310;
    return;
L_08980310:
    ctx.gpr[31] = (0x08980318u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 156u, 0x08834D1Cu>(ctx, &aot_mem) && ctx.pc == 0x08980318u) goto L_08980318;
    return;
L_08980318:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898041C;
      }
      goto L_08980334;
    }
L_08980334:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(3248));
      if (branch_taken) {
          goto L_08980354;
      }
      goto L_0898034C;
    }
L_0898034C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08980364;
      }
      goto L_08980354;
    }
L_08980354:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    goto L_08980364;
L_08980364:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980408;
      }
      goto L_0898036C;
    }
L_0898036C:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(1912)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980408;
      }
      goto L_08980380;
    }
L_08980380:
    ctx.gpr[7] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(1872)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089803F4;
      }
      goto L_08980394;
    }
L_08980394:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(1912)));
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(1912)));
        goto L_089803D8;
    }
    goto L_089803AC;
L_089803AC:
    ctx.gpr[8] = (ctx.gpr[7] << 2u);
    goto L_089803B0;
L_089803B0:
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(1876)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(1872), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(1912)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (ctx.gpr[7] << 2u);
      if (branch_taken) {
          goto L_089803B0;
      }
      goto L_089803D4;
    }
L_089803D4:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(1912)));
    goto L_089803D8;
L_089803D8:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(1912), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(1912)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(1872), 0u);
    goto L_089803F4;
L_089803F4:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(1912)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08980380;
      }
      goto L_08980408;
    }
L_08980408:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08980334;
      }
      goto L_0898041C;
    }
L_0898041C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
      if (branch_taken) {
          goto L_08980448;
      }
      goto L_08980424;
    }
L_08980424:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8980));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[31] = (0x08980438u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 99u, 0x08AC4CB8u>(ctx, &aot_mem) && ctx.pc == 0x08980438u) goto L_08980438;
    return;
L_08980438:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08980444u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 190u, 0x08A499D8u>(ctx, &aot_mem) && ctx.pc == 0x08980444u) goto L_08980444;
    return;
L_08980444:
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
    goto L_08980448;
L_08980448:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980458;
      }
      goto L_08980450;
    }
L_08980450:
    ctx.gpr[31] = (0x08980458u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08980458u) goto L_08980458;
    return;
L_08980458:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980470:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08980494u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 762u, 0x08A2F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08980494u) goto L_08980494;
    return;
L_08980494:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x089804A8u);
    ctx.gpr[4] = (0u | 352u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 738u, 0x089C70F0u>(ctx, &aot_mem) && ctx.pc == 0x089804A8u) goto L_089804A8;
    return;
L_089804A8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 352u);
    ctx.gpr[31] = (0x089804B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x089804B8u) goto L_089804B8;
    return;
L_089804B8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089804D4;
      }
      goto L_089804C4;
    }
L_089804C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x089804D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 685u, 0x0897F888u>(ctx, &aot_mem) && ctx.pc == 0x089804D0u) goto L_089804D0;
    return;
L_089804D0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089804D4;
L_089804D4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089804E4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 131u, 0x08AC5034u>(ctx, &aot_mem) && ctx.pc == 0x089804E4u) goto L_089804E4;
    return;
L_089804E4:
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
L_089804FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(84))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(46))))));
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 0 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08980598;
      }
      goto L_08980550;
    }
L_08980550:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08980564u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 114u, 0x08AC4E74u>(ctx, &aot_mem) && ctx.pc == 0x08980564u) goto L_08980564;
    return;
L_08980564:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0898057Cu);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x0898057Cu) goto L_0898057C;
    return;
L_0898057C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08980590u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_089832CC;
L_08980590:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089805FC;
      }
      goto L_08980598;
    }
L_08980598:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x089805ACu);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(50))))));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 114u, 0x08AC4E74u>(ctx, &aot_mem) && ctx.pc == 0x089805ACu) goto L_089805AC;
    return;
L_089805AC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(84))))));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[31] = (0x089805C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 114u, 0x08AC4E74u>(ctx, &aot_mem) && ctx.pc == 0x089805C4u) goto L_089805C4;
    return;
L_089805C4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(84))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(54))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[5] << 16u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089805FCu);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    goto L_08980AA4;
L_089805FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980618:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980620:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08980664u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 200u, 0x08A49A78u>(ctx, &aot_mem) && ctx.pc == 0x08980664u) goto L_08980664;
    return;
L_08980664:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(214)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[17] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
      if (branch_taken) {
          goto L_08980808;
      }
      goto L_0898067C;
    }
L_0898067C:
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    ctx.fpr[24] = ctx.fpr[24] - ctx.fpr[20];
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(24));
    goto L_08980694;
L_08980694:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(232))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089806B4;
      }
      goto L_089806A4;
    }
L_089806A4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(234))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089806E4;
      }
      goto L_089806B4;
    }
L_089806B4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089806DC;
      }
      goto L_089806C0;
    }
L_089806C0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(234))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089806DC;
      }
      goto L_089806D0;
    }
L_089806D0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_089806E4;
      }
      goto L_089806DC;
    }
L_089806DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089807F4;
      }
      goto L_089806E4;
    }
L_089806E4:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 229 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089807EC;
      }
      goto L_089806F0;
    }
L_089806F0:
    ctx.gpr[31] = (0x089806F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 476u, 0x08A8AE48u>(ctx, &aot_mem) && ctx.pc == 0x089806F8u) goto L_089806F8;
    return;
L_089806F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(228)));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(224)));
      if (branch_taken) {
          goto L_08980730;
      }
      goto L_08980718;
    }
L_08980718:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08980744;
      }
      goto L_08980728;
    }
L_08980728:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[14];
      if (branch_taken) {
          goto L_08980744;
      }
      goto L_08980730;
    }
L_08980730:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08980744;
      }
      goto L_08980740;
    }
L_08980740:
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
    goto L_08980744;
L_08980744:
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(236)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
      if (branch_taken) {
          goto L_089807AC;
      }
      goto L_0898075C;
    }
L_0898075C:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08980780;
      }
      goto L_0898076C;
    }
L_0898076C:
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898076C;
      }
      goto L_08980780;
    }
L_08980780:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089807E8;
      }
      goto L_08980790;
    }
L_08980790:
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08980790;
      }
      goto L_089807A4;
    }
L_089807A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089807E8;
      }
      goto L_089807AC;
    }
L_089807AC:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089807CC;
      }
      goto L_089807BC;
    }
L_089807BC:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089807E8;
      }
      goto L_089807CC;
    }
L_089807CC:
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089807E4;
      }
      goto L_089807DC;
    }
L_089807DC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_089807E8;
      }
      goto L_089807E4;
    }
L_089807E4:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089807E8;
L_089807E8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_089807EC;
L_089807EC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(24));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(24));
    goto L_089807F4;
L_089807F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(214)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08980694;
      }
      goto L_08980808;
    }
L_08980808:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980834:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08980858u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 37u, 0x08AC4508u>(ctx, &aot_mem) && ctx.pc == 0x08980858u) goto L_08980858;
    return;
L_08980858:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[4] = (15496u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] | 34953u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(214)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_089808BC;
      }
      goto L_08980880;
    }
L_08980880:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08980884;
L_08980884:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(236)));
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089808A8;
      }
      goto L_08980894;
    }
L_08980894:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(228)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_089808A8;
L_089808A8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(214)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08980884;
      }
      goto L_089808BC;
    }
L_089808BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089808D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x08980914u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 244u, 0x08A4D04Cu>(ctx, &aot_mem) && ctx.pc == 0x08980914u) goto L_08980914;
    return;
L_08980914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08980928u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 174u, 0x0890CF70u>(ctx, &aot_mem) && ctx.pc == 0x08980928u) goto L_08980928;
    return;
L_08980928:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08980934u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 173u, 0x0890CF68u>(ctx, &aot_mem) && ctx.pc == 0x08980934u) goto L_08980934;
    return;
L_08980934:
    ctx.gpr[7] = (ctx.gpr[18] << 6u);
    ctx.gpr[7] = (ctx.gpr[2] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0898094Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 643u, 0x088B7F1Cu>(ctx, &aot_mem) && ctx.pc == 0x0898094Cu) goto L_0898094C;
    return;
L_0898094C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08980974;
      }
      goto L_08980958;
    }
L_08980958:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08980968u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08980968u) goto L_08980968;
    return;
L_08980968:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08980974;
L_08980974:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898099C;
      }
      goto L_08980994;
    }
L_08980994:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089809A0;
      }
      goto L_0898099C;
    }
L_0898099C:
    ctx.gpr[2] = (0u | 0u);
    goto L_089809A0;
L_089809A0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089809C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08980A0C;
      }
      goto L_08980A00;
    }
L_08980A00:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 18 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08980A1C;
      }
      goto L_08980A0C;
    }
L_08980A0C:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08980A74;
      }
      goto L_08980A1C;
    }
L_08980A1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x08980A28u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 244u, 0x08A4D04Cu>(ctx, &aot_mem) && ctx.pc == 0x08980A28u) goto L_08980A28;
    return;
L_08980A28:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08980A44u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 174u, 0x0890CF70u>(ctx, &aot_mem) && ctx.pc == 0x08980A44u) goto L_08980A44;
    return;
L_08980A44:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08980A50u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 173u, 0x0890CF68u>(ctx, &aot_mem) && ctx.pc == 0x08980A50u) goto L_08980A50;
    return;
L_08980A50:
    ctx.gpr[7] = (ctx.gpr[16] << 6u);
    ctx.gpr[7] = (ctx.gpr[2] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08980A68u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 643u, 0x088B7F1Cu>(ctx, &aot_mem) && ctx.pc == 0x08980A68u) goto L_08980A68;
    return;
L_08980A68:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[2] = (0u | 1u);
    goto L_08980A74;
L_08980A74:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980A94:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(212), static_cast<std::uint16_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980A9C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980AA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x08980AD8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08982C88;
L_08980AD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980B00;
      }
      goto L_08980AE4;
    }
L_08980AE4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08980AF8u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    goto L_089832CC;
L_08980AF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08980B04;
      }
      goto L_08980B00;
    }
L_08980B00:
    ctx.gpr[2] = (0u | 0u);
    goto L_08980B04;
L_08980B04:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980B20:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (46470u << 16u);
    ctx.fpr[14] = ctx.fpr[13] - ctx.fpr[14];
    ctx.gpr[4] = (ctx.gpr[4] | 14269u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (65535u << 16u);
      if (branch_taken) {
          goto L_08980B74;
      }
      goto L_08980B54;
    }
L_08980B54:
    ctx.gpr[10] = (13702u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] | 14269u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
      if (branch_taken) {
          goto L_08980B78;
      }
      goto L_08980B70;
    }
L_08980B70:
    ctx.gpr[9] = (0u | 1u);
    goto L_08980B74;
L_08980B74:
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    goto L_08980B78;
L_08980B78:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08980B8C;
      }
      goto L_08980B80;
    }
L_08980B80:
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08980B94;
      }
      goto L_08980B8C;
    }
L_08980B8C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    goto L_08980B94;
L_08980B94:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[13] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_08980BCC;
      }
      goto L_08980BAC;
    }
L_08980BAC:
    ctx.gpr[10] = (13702u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] | 14269u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
      if (branch_taken) {
          goto L_08980BD0;
      }
      goto L_08980BC8;
    }
L_08980BC8:
    ctx.gpr[9] = (0u | 1u);
    goto L_08980BCC;
L_08980BCC:
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    goto L_08980BD0;
L_08980BD0:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08980BEC;
      }
      goto L_08980BD8;
    }
L_08980BD8:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (ctx.gpr[2] | 2u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[9] & 1u);
      if (branch_taken) {
          goto L_08980BFC;
      }
      goto L_08980BEC;
    }
L_08980BEC:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (ctx.gpr[9] & 1u);
    goto L_08980BFC;
L_08980BFC:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08980C28;
      }
      goto L_08980C04;
    }
L_08980C04:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[7] = (15496u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 34953u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    goto L_08980C28;
L_08980C28:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (48163u << 16u);
    ctx.fpr[14] = ctx.fpr[13] - ctx.fpr[14];
    ctx.gpr[9] = (ctx.gpr[7] | 55050u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08980C6C;
      }
      goto L_08980C4C;
    }
L_08980C4C:
    ctx.gpr[9] = (15395u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] | 55050u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
      if (branch_taken) {
          goto L_08980C70;
      }
      goto L_08980C68;
    }
L_08980C68:
    ctx.gpr[7] = (0u | 1u);
    goto L_08980C6C;
L_08980C6C:
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    goto L_08980C70;
L_08980C70:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08980C84;
      }
      goto L_08980C78;
    }
L_08980C78:
    ctx.gpr[2] = (ctx.gpr[2] | 4u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08980C8C;
      }
      goto L_08980C84;
    }
L_08980C84:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    goto L_08980C8C;
L_08980C8C:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08980CC8;
      }
      goto L_08980CA8;
    }
L_08980CA8:
    ctx.gpr[9] = (13702u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] | 14269u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
      if (branch_taken) {
          goto L_08980CCC;
      }
      goto L_08980CC4;
    }
L_08980CC4:
    ctx.gpr[7] = (0u | 1u);
    goto L_08980CC8;
L_08980CC8:
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    goto L_08980CCC;
L_08980CCC:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08980CF0;
      }
      goto L_08980CD4;
    }
L_08980CD4:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[2] = (ctx.gpr[2] | 8u);
    ctx.gpr[7] = (ctx.gpr[11] & 65535u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[11] & ctx.gpr[4]);
      if (branch_taken) {
          goto L_08980D08;
      }
      goto L_08980CF0;
    }
L_08980CF0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[7] = (ctx.gpr[11] & 65535u);
    ctx.gpr[6] = (ctx.gpr[11] & ctx.gpr[4]);
    goto L_08980D08;
L_08980D08:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08980D1C;
      }
      goto L_08980D14;
    }
L_08980D14:
    ctx.gpr[2] = (ctx.gpr[2] | 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 32u);
    goto L_08980D1C;
L_08980D1C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08980D30;
      }
      goto L_08980D28;
    }
L_08980D28:
    ctx.gpr[2] = (ctx.gpr[2] | 32u);
    ctx.gpr[2] = (ctx.gpr[2] | 16u);
    goto L_08980D30;
L_08980D30:
    ctx.gpr[5] = (ctx.gpr[8] & 65535u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08980D40;
      }
      goto L_08980D3C;
    }
L_08980D3C:
    ctx.gpr[2] = (ctx.gpr[2] | 64u);
    goto L_08980D40;
L_08980D40:
    ctx.gpr[4] = (ctx.gpr[8] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08980D50;
      }
      goto L_08980D4C;
    }
L_08980D4C:
    ctx.gpr[2] = (ctx.gpr[2] | 128u);
    goto L_08980D50;
L_08980D50:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980D58:
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[8] = (ctx.gpr[7] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[9] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[4] = (ctx.gpr[7] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980E4C;
      }
      goto L_08980D8C;
    }
L_08980D8C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (ctx.gpr[8] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[11] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[9] & 255u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[10] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[4] = (ctx.gpr[8] >> 16u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[10] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[4] & 255u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08980E4C;
L_08980E4C:
    ctx.gpr[4] = (ctx.gpr[7] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980F18;
      }
      goto L_08980E58;
    }
L_08980E58:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (ctx.gpr[8] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[11] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[9] & 255u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[10] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[4] = (ctx.gpr[8] >> 16u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[10] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[4] & 255u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08980F18;
L_08980F18:
    ctx.gpr[4] = (ctx.gpr[7] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980FE4;
      }
      goto L_08980F24;
    }
L_08980F24:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (ctx.gpr[8] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[11] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[9] & 255u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[10] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[4] = (ctx.gpr[8] >> 16u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[10] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[4] & 255u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08980FE4;
L_08980FE4:
    ctx.gpr[4] = (ctx.gpr[7] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089810B0;
      }
      goto L_08980FF0;
    }
L_08980FF0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (ctx.gpr[8] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[11] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[9] & 255u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[10] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[4] = (ctx.gpr[8] >> 16u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[10] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[4] & 255u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089810B0;
L_089810B0:
    ctx.gpr[4] = (ctx.gpr[7] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981124;
      }
      goto L_089810BC;
    }
L_089810BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[10] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[4] & 255u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08981124;
L_08981124:
    ctx.gpr[4] = (ctx.gpr[7] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981198;
      }
      goto L_08981130;
    }
L_08981130:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[10] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[4] & 255u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08981198;
L_08981198:
    ctx.gpr[4] = (ctx.gpr[7] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981204;
      }
      goto L_089811A4;
    }
L_089811A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[10] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[4] & 255u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08981204;
L_08981204:
    ctx.gpr[4] = (ctx.gpr[7] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981270;
      }
      goto L_08981210;
    }
L_08981210:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[4] >> 16u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08981270;
L_08981270:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08981278:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981300;
      }
      goto L_08981298;
    }
L_08981298:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] << 8u);
    ctx.gpr[10] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[8] = (ctx.gpr[8] << 8u);
    ctx.gpr[8] = (ctx.gpr[9] | ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[8] = (ctx.gpr[8] << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08981300;
L_08981300:
    ctx.gpr[7] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981374;
      }
      goto L_0898130C;
    }
L_0898130C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] << 8u);
    ctx.gpr[10] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[8] = (ctx.gpr[8] << 8u);
    ctx.gpr[8] = (ctx.gpr[9] | ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[8] = (ctx.gpr[8] << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08981374;
L_08981374:
    ctx.gpr[7] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089813E8;
      }
      goto L_08981380;
    }
L_08981380:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] << 8u);
    ctx.gpr[10] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[8] = (ctx.gpr[8] << 8u);
    ctx.gpr[8] = (ctx.gpr[9] | ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[8] = (ctx.gpr[8] << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089813E8;
L_089813E8:
    ctx.gpr[7] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898145C;
      }
      goto L_089813F4;
    }
L_089813F4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] << 8u);
    ctx.gpr[10] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[8] = (ctx.gpr[8] << 8u);
    ctx.gpr[8] = (ctx.gpr[9] | ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[8] = (ctx.gpr[8] << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0898145C;
L_0898145C:
    ctx.gpr[7] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981494;
      }
      goto L_08981468;
    }
L_08981468:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] << 8u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[7]));
    goto L_08981494;
L_08981494:
    ctx.gpr[7] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089814CC;
      }
      goto L_089814A0;
    }
L_089814A0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] << 8u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[7]));
    goto L_089814CC;
L_089814CC:
    ctx.gpr[7] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981518;
      }
      goto L_089814D8;
    }
L_089814D8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (65535u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] << 8u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[11]);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    goto L_08981518;
L_08981518:
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981564;
      }
      goto L_08981524;
    }
L_08981524:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[7] & 65535u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    goto L_08981564;
L_08981564:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898156C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08981670;
      }
      goto L_08981594;
    }
L_08981594:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u | 65535u);
      if (branch_taken) {
          goto L_089815C0;
      }
      goto L_089815A0;
    }
L_089815A0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089815B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x089815B0u) goto L_089815B0;
    return;
L_089815B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089815C0;
L_089815C0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089815D4;
      }
      goto L_089815CC;
    }
L_089815CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089815E8;
      }
      goto L_089815D4;
    }
L_089815D4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[31] = (0x089815E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x089815E4u) goto L_089815E4;
    return;
L_089815E4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089815E8;
L_089815E8:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (0u | 1u);
        goto L_08981670;
    }
    goto L_089815F0;
L_089815F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
        goto L_08981620;
    }
    goto L_089815FC;
L_089815FC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(17));
    ctx.gpr[31] = (0x0898160Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x0898160Cu) goto L_0898160C;
    return;
L_0898160C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    goto L_08981620;
L_08981620:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08981638;
      }
      goto L_08981628;
    }
L_08981628:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(136));
      if (branch_taken) {
          goto L_08981654;
      }
      goto L_08981638;
    }
L_08981638:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[31] = (0x08981648u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x08981648u) goto L_08981648;
    return;
L_08981648:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(136));
    goto L_08981654;
L_08981654:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08981664u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08981664u) goto L_08981664;
    return;
L_08981664:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981670;
      }
      goto L_0898166C;
    }
L_0898166C:
    ctx.gpr[17] = (0u | 1u);
    goto L_08981670;
L_08981670:
    ctx.gpr[2] = (ctx.gpr[17] & 255u);
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
L_0898168C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x089816BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23860));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 668u, 0x0897F738u>(ctx, &aot_mem) && ctx.pc == 0x089816BCu) goto L_089816BC;
    return;
L_089816BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u | 65535u);
      if (branch_taken) {
          goto L_089816E8;
      }
      goto L_089816C8;
    }
L_089816C8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089816D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x089816D8u) goto L_089816D8;
    return;
L_089816D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089816E8;
L_089816E8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089816FC;
      }
      goto L_089816F4;
    }
L_089816F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08981710;
      }
      goto L_089816FC;
    }
L_089816FC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[31] = (0x0898170Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x0898170Cu) goto L_0898170C;
    return;
L_0898170C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08981710;
L_08981710:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981814;
      }
      goto L_08981718;
    }
L_08981718:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
        goto L_08981748;
    }
    goto L_08981724;
L_08981724:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(17));
    ctx.gpr[31] = (0x08981734u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08981734u) goto L_08981734;
    return;
L_08981734:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    goto L_08981748;
L_08981748:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08981764;
      }
      goto L_08981750;
    }
L_08981750:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08981780;
      }
      goto L_08981764;
    }
L_08981764:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[31] = (0x08981774u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x08981774u) goto L_08981774;
    return;
L_08981774:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08981780;
L_08981780:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08981814;
      }
      goto L_08981788;
    }
L_08981788:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08981794u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23836));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 668u, 0x0897F738u>(ctx, &aot_mem) && ctx.pc == 0x08981794u) goto L_08981794;
    return;
L_08981794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
        goto L_089817C4;
    }
    goto L_089817A0;
L_089817A0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(18));
    ctx.gpr[31] = (0x089817B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x089817B0u) goto L_089817B0;
    return;
L_089817B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    goto L_089817C4;
L_089817C4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089817DC;
      }
      goto L_089817CC;
    }
L_089817CC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(144));
      if (branch_taken) {
          goto L_089817F8;
      }
      goto L_089817DC;
    }
L_089817DC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[31] = (0x089817ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x089817ECu) goto L_089817EC;
    return;
L_089817EC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(144));
    goto L_089817F8;
L_089817F8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0898180Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898180Cu) goto L_0898180C;
    return;
L_0898180C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898189C;
      }
      goto L_08981814;
    }
L_08981814:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
        goto L_08981844;
    }
    goto L_08981820;
L_08981820:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(19));
    ctx.gpr[31] = (0x08981830u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08981830u) goto L_08981830;
    return;
L_08981830:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    goto L_08981844;
L_08981844:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08981854;
      }
      goto L_0898184C;
    }
L_0898184C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08981868;
      }
      goto L_08981854;
    }
L_08981854:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[31] = (0x08981864u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x08981864u) goto L_08981864;
    return;
L_08981864:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08981868;
L_08981868:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981884;
      }
      goto L_08981870;
    }
L_08981870:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x0898187Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23796));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 668u, 0x0897F738u>(ctx, &aot_mem) && ctx.pc == 0x0898187Cu) goto L_0898187C;
    return;
L_0898187C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08981890;
      }
      goto L_08981884;
    }
L_08981884:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08981890u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23740));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 668u, 0x0897F738u>(ctx, &aot_mem) && ctx.pc == 0x08981890u) goto L_08981890;
    return;
L_08981890:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0898189Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 122u, 0x08AC4F60u>(ctx, &aot_mem) && ctx.pc == 0x0898189Cu) goto L_0898189C;
    return;
L_0898189C:
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
L_089818B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089818DCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x089818DCu) goto L_089818DC;
    return;
L_089818DC:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x089818E8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 518u, 0x0892F444u>(ctx, &aot_mem) && ctx.pc == 0x089818E8u) goto L_089818E8;
    return;
L_089818E8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089818F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08981914u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 312u, 0x08A4AC34u>(ctx, &aot_mem) && ctx.pc == 0x08981914u) goto L_08981914;
    return;
L_08981914:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17140));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(352), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(356), 0u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(360), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(364), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(368), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(372), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(376), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(400), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(402), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(402));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08981984u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 95u, 0x08864708u>(ctx, &aot_mem) && ctx.pc == 0x08981984u) goto L_08981984;
    return;
L_08981984:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(376)));
    ctx.gpr[4] = (ctx.gpr[5] ^ 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(364)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(368)));
      if (branch_taken) {
          goto L_08981A4C;
      }
      goto L_089819A8;
    }
L_089819A8:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(372)));
      if (branch_taken) {
          goto L_089819D8;
      }
      goto L_089819BC;
    }
L_089819BC:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(380));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = ctx.fpr[13] - ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
      if (branch_taken) {
          goto L_089819F4;
      }
      goto L_089819D8;
    }
L_089819D8:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(380));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    goto L_089819F4;
L_089819F4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(364), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08981A08;
      }
      goto L_089819FC;
    }
L_089819FC:
    ctx.gpr[5] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(372), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5u);
    goto L_08981A08;
L_08981A08:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(372), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08981A20;
      }
      goto L_08981A14;
    }
L_08981A14:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(368), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    goto L_08981A20;
L_08981A20:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(368), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08981A44;
      }
      goto L_08981A34;
    }
L_08981A34:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(380)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(380), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08981A44;
L_08981A44:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(380), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08981A80;
      }
      goto L_08981A4C;
    }
L_08981A4C:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(376), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(364), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08981A6C;
      }
      goto L_08981A60;
    }
L_08981A60:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(368), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    goto L_08981A6C;
L_08981A6C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(368), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(380), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08981A80;
L_08981A80:
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
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
L_08981AB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08981B10;
      }
      goto L_08981AD4;
    }
L_08981AD4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17140));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x08981AF0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 97u, 0x08864728u>(ctx, &aot_mem) && ctx.pc == 0x08981AF0u) goto L_08981AF0;
    return;
L_08981AF0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08981AFCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 315u, 0x08A4ACB8u>(ctx, &aot_mem) && ctx.pc == 0x08981AFCu) goto L_08981AFC;
    return;
L_08981AFC:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981B10;
      }
      goto L_08981B08;
    }
L_08981B08:
    ctx.gpr[31] = (0x08981B10u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08981B10u) goto L_08981B10;
    return;
L_08981B10:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08981B24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08981B7C;
      }
      goto L_08981B44;
    }
L_08981B44:
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981B84;
      }
      goto L_08981B74;
    }
L_08981B74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08981B98;
      }
      goto L_08981B7C;
    }
L_08981B7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08981C58;
      }
      goto L_08981B84;
    }
L_08981B84:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08981B90u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08981B90u) goto L_08981B90;
    return;
L_08981B90:
    ctx.gpr[31] = (0x08981B98u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 711u, 0x089CAF64u>(ctx, &aot_mem) && ctx.pc == 0x08981B98u) goto L_08981B98;
    return;
L_08981B98:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08981BA4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 598u, 0x08A2EB48u>(ctx, &aot_mem) && ctx.pc == 0x08981BA4u) goto L_08981BA4;
    return;
L_08981BA4:
    ctx.gpr[31] = (0x08981BACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 304u, 0x088656A0u>(ctx, &aot_mem) && ctx.pc == 0x08981BACu) goto L_08981BAC;
    return;
L_08981BAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.gpr[31] = (0x08981BBCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(136));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 273u, 0x08865350u>(ctx, &aot_mem) && ctx.pc == 0x08981BBCu) goto L_08981BBC;
    return;
L_08981BBC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08981BE8;
      }
      goto L_08981BD4;
    }
L_08981BD4:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08981BE8;
L_08981BE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7860)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.gpr[31] = (0x08981C38u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08981C38u) goto L_08981C38;
    return;
L_08981C38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27768)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(216));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_08981C58;
L_08981C58:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08981C6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(114), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(114))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[31]);
    ctx.gpr[31] = (0x08981CD8u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(50))))));
    goto L_089818B4;
L_08981CD8:
    ctx.gpr[31] = (0x08981CE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 762u, 0x08A2F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08981CE0u) goto L_08981CE0;
    return;
L_08981CE0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(50))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(118), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(118))))));
    ctx.gpr[31] = (0x08981CFCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08981CFCu) goto L_08981CFC;
    return;
L_08981CFC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981D5C;
      }
      goto L_08981D08;
    }
L_08981D08:
    ctx.gpr[31] = (0x08981D10u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 244u, 0x08A4D04Cu>(ctx, &aot_mem) && ctx.pc == 0x08981D10u) goto L_08981D10;
    return;
L_08981D10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(136));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08981D2Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 174u, 0x0890CF70u>(ctx, &aot_mem) && ctx.pc == 0x08981D2Cu) goto L_08981D2C;
    return;
L_08981D2C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08981D38u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 173u, 0x0890CF68u>(ctx, &aot_mem) && ctx.pc == 0x08981D38u) goto L_08981D38;
    return;
L_08981D38:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[17] << 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[31] = (0x08981D5Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 278u, 0x08A1D848u>(ctx, &aot_mem) && ctx.pc == 0x08981D5Cu) goto L_08981D5C;
    return;
L_08981D5C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(50))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(120), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(120))))));
    ctx.gpr[31] = (0x08981D78u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08981D78u) goto L_08981D78;
    return;
L_08981D78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981E9C;
      }
      goto L_08981D84;
    }
L_08981D84:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(50))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(122), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(122))))));
    ctx.gpr[31] = (0x08981DA0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08981DA0u) goto L_08981DA0;
    return;
L_08981DA0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(337)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08981E9C;
      }
      goto L_08981DAC;
    }
L_08981DAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08981E9C;
      }
      goto L_08981DC0;
    }
L_08981DC0:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x08981DECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 244u, 0x08A4D04Cu>(ctx, &aot_mem) && ctx.pc == 0x08981DECu) goto L_08981DEC;
    return;
L_08981DEC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(136));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08981E08u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 174u, 0x0890CF70u>(ctx, &aot_mem) && ctx.pc == 0x08981E08u) goto L_08981E08;
    return;
L_08981E08:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08981E14u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 173u, 0x0890CF68u>(ctx, &aot_mem) && ctx.pc == 0x08981E14u) goto L_08981E14;
    return;
L_08981E14:
    ctx.gpr[7] = (ctx.gpr[19] << 6u);
    ctx.gpr[7] = (ctx.gpr[2] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08981E2Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 643u, 0x088B7F1Cu>(ctx, &aot_mem) && ctx.pc == 0x08981E2Cu) goto L_08981E2C;
    return;
L_08981E2C:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.gpr[16] = (0u | 0u);
    goto L_08981E60;
L_08981E60:
    ctx.gpr[4] = (0u | 8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08981E88u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08981E88u) goto L_08981E88;
    return;
L_08981E88:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08981E60;
      }
      goto L_08981E9C;
    }
L_08981E9C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08981EBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(402));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08981F08;
      }
      goto L_08981EE4;
    }
L_08981EE4:
    ctx.gpr[31] = (0x08981EECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F69Cu>(ctx, &aot_mem) && ctx.pc == 0x08981EECu) goto L_08981EEC;
    return;
L_08981EEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 11u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_08981F08;
L_08981F08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[5] = (ctx.gpr[18] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981FEC;
      }
      goto L_08981F44;
    }
L_08981F44:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[31] = (0x08981F54u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08981F54u) goto L_08981F54;
    return;
L_08981F54:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(214)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
        goto L_08981F9C;
    }
    goto L_08981F60;
L_08981F60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[31] = (0x08981F74u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 168u, 0x08985064u>(ctx, &aot_mem) && ctx.pc == 0x08981F74u) goto L_08981F74;
    return;
L_08981F74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[31] = (0x08981F94u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 251u, 0x08971BACu>(ctx, &aot_mem) && ctx.pc == 0x08981F94u) goto L_08981F94;
    return;
L_08981F94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08981FE8;
      }
      goto L_08981F9C;
    }
L_08981F9C:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(26))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17008u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[31] = (0x08981FE8u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 251u, 0x08971BACu>(ctx, &aot_mem) && ctx.pc == 0x08981FE8u) goto L_08981FE8;
    return;
L_08981FE8:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[18]));
    goto L_08981FEC;
L_08981FEC:
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
L_08982004:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (2232u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5992));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(13216));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[20] = (0u | 16u);
      if (branch_taken) {
          goto L_0898206C;
      }
      goto L_08982048;
    }
L_08982048:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[31] = (0x08982054u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 646u, 0x088A7DB8u>(ctx, &aot_mem) && ctx.pc == 0x08982054u) goto L_08982054;
    return;
L_08982054:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982068;
      }
      goto L_08982060;
    }
L_08982060:
    ctx.gpr[31] = (0x08982068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 173u, 0x08A35190u>(ctx, &aot_mem) && ctx.pc == 0x08982068u) goto L_08982068;
    return;
L_08982068:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    goto L_0898206C;
L_0898206C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[7] = (0u + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[20];
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_089820EC;
      }
      goto L_089820D0;
    }
L_089820D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(360)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089820EC;
      }
      goto L_089820E8;
    }
L_089820E8:
    ctx.gpr[19] = (0u | 14u);
    goto L_089820EC;
L_089820EC:
    ctx.gpr[31] = (0x089820F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08982448;
L_089820F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982130;
      }
      goto L_089820FC;
    }
L_089820FC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982130;
      }
      goto L_08982104;
    }
L_08982104:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08982130;
      }
      goto L_08982114;
    }
L_08982114:
    ctx.gpr[31] = (0x0898211Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 139u, 0x088ED114u>(ctx, &aot_mem) && ctx.pc == 0x0898211Cu) goto L_0898211C;
    return;
L_0898211C:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08982130;
      }
      goto L_08982128;
    }
L_08982128:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08982148;
      }
      goto L_08982130;
    }
L_08982130:
    ctx.gpr[31] = (0x08982138u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08982448;
L_08982138:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08982150;
      }
      goto L_08982140;
    }
L_08982140:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08982160;
      }
      goto L_08982148;
    }
L_08982148:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089822E0;
      }
      goto L_08982150;
    }
L_08982150:
    ctx.gpr[31] = (0x08982158u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 335u, 0x088EE37Cu>(ctx, &aot_mem) && ctx.pc == 0x08982158u) goto L_08982158;
    return;
L_08982158:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898219C;
      }
      goto L_08982160;
    }
L_08982160:
    ctx.gpr[31] = (0x08982168u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 321u, 0x08A4AD24u>(ctx, &aot_mem) && ctx.pc == 0x08982168u) goto L_08982168;
    return;
L_08982168:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(26))))));
    ctx.gpr[31] = (0x08982184u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08982184u) goto L_08982184;
    return;
L_08982184:
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(183)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089821A4;
      }
      goto L_08982194;
    }
L_08982194:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089821E0;
      }
      goto L_0898219C;
    }
L_0898219C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089822E0;
      }
      goto L_089821A4;
    }
L_089821A4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089821C0;
      }
      goto L_089821AC;
    }
L_089821AC:
    ctx.gpr[31] = (0x089821B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x089821B4u) goto L_089821B4;
    return;
L_089821B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x089821C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089823A4;
L_089821C0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089821DC;
      }
      goto L_089821C8;
    }
L_089821C8:
    ctx.gpr[31] = (0x089821D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x089821D0u) goto L_089821D0;
    return;
L_089821D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x089821DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08982300;
L_089821DC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(352), ctx.gpr[17]);
    goto L_089821E0;
L_089821E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(356)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089822E0;
      }
      goto L_089821EC;
    }
L_089821EC:
    ctx.gpr[31] = (0x089821F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 244u, 0x08A4D04Cu>(ctx, &aot_mem) && ctx.pc == 0x089821F4u) goto L_089821F4;
    return;
L_089821F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(136));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08982210u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 174u, 0x0890CF70u>(ctx, &aot_mem) && ctx.pc == 0x08982210u) goto L_08982210;
    return;
L_08982210:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0898221Cu);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 173u, 0x0890CF68u>(ctx, &aot_mem) && ctx.pc == 0x0898221Cu) goto L_0898221C;
    return;
L_0898221C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(356)));
    ctx.gpr[4] = (ctx.gpr[17] << 6u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(40), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(44), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(52), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(56), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[31] = (0x089822B8u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 115u, 0x08A5CFD0u>(ctx, &aot_mem) && ctx.pc == 0x089822B8u) goto L_089822B8;
    return;
L_089822B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(356)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089822D8;
      }
      goto L_089822C8;
    }
L_089822C8:
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089822D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089822D0u) goto L_089822D0;
    return;
L_089822D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089822E0;
      }
      goto L_089822D8;
    }
L_089822D8:
    ctx.gpr[31] = (0x089822E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 191u, 0x08AC9104u>(ctx, &aot_mem) && ctx.pc == 0x089822E0u) goto L_089822E0;
    return;
L_089822E0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982300:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08982338;
      }
      goto L_0898231C;
    }
L_0898231C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08982340;
      }
      goto L_08982330;
    }
L_08982330:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08982354;
      }
      goto L_08982338;
    }
L_08982338:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08982390;
      }
      goto L_08982340;
    }
L_08982340:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08982354;
L_08982354:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(356)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898236C;
      }
      goto L_08982360;
    }
L_08982360:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0898236Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089823A4;
L_0898236C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08982384u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08982384u) goto L_08982384;
    return;
L_08982384:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(356), ctx.gpr[2]);
    ctx.gpr[31] = (0x08982390u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 235u, 0x08A7D460u>(ctx, &aot_mem) && ctx.pc == 0x08982390u) goto L_08982390;
    return;
L_08982390:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089823A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(356)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08982434;
      }
      goto L_089823C4;
    }
L_089823C4:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0898240C;
      }
      goto L_089823D0;
    }
L_089823D0:
    ctx.gpr[31] = (0x089823D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 303u, 0x08925E94u>(ctx, &aot_mem) && ctx.pc == 0x089823D8u) goto L_089823D8;
    return;
L_089823D8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08982404;
      }
      goto L_089823F0;
    }
L_089823F0:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08982404;
L_08982404:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08982434;
      }
      goto L_0898240C;
    }
L_0898240C:
    ctx.gpr[31] = (0x08982414u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(356)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 303u, 0x08925E94u>(ctx, &aot_mem) && ctx.pc == 0x08982414u) goto L_08982414;
    return;
L_08982414:
    ctx.gpr[31] = (0x0898241Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 237u, 0x08A7D484u>(ctx, &aot_mem) && ctx.pc == 0x0898241Cu) goto L_0898241C;
    return;
L_0898241C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(356)));
    ctx.gpr[31] = (0x08982428u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 178u, 0x08AC8E78u>(ctx, &aot_mem) && ctx.pc == 0x08982428u) goto L_08982428;
    return;
L_08982428:
    ctx.gpr[31] = (0x08982430u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 155u, 0x08A5D294u>(ctx, &aot_mem) && ctx.pc == 0x08982430u) goto L_08982430;
    return;
L_08982430:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(356), 0u);
    goto L_08982434;
L_08982434:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982448:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[6] ^ ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08982488;
      }
      goto L_08982474;
    }
L_08982474:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08982488;
      }
      goto L_08982484;
    }
L_08982484:
    ctx.gpr[5] = (0u | 1u);
    goto L_08982488;
L_08982488:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982490:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(6), ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089824C4;
      }
      goto L_089824BC;
    }
L_089824BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089824EC;
      }
      goto L_089824C4;
    }
L_089824C4:
    ctx.gpr[31] = (0x089824CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089824CCu) goto L_089824CC;
    return;
L_089824CC:
    ctx.gpr[9] = (17530u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 44u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089824ECu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 575u, 0x088DEE0Cu>(ctx, &aot_mem) && ctx.pc == 0x089824ECu) goto L_089824EC;
    return;
L_089824EC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089824F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[11]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982524:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[11]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982550:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[31] = (0x0898258Cu);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 208u, 0x08A49BE4u>(ctx, &aot_mem) && ctx.pc == 0x0898258Cu) goto L_0898258C;
    return;
L_0898258C:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08982C58;
      }
      goto L_089825B4;
    }
L_089825B4:
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(17));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(18));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(19));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.gpr[18] = (0u | 0u);
    goto L_089825D4;
L_089825D4:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(214)));
        goto L_08982600;
    }
    goto L_089825DC;
L_089825DC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089825ECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x089825ECu) goto L_089825EC;
    return;
L_089825EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(214)));
    goto L_08982600;
L_08982600:
    ctx.gpr[5] = (ctx.gpr[19] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982738;
      }
      goto L_0898260C;
    }
L_0898260C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08982638;
      }
      goto L_08982614;
    }
L_08982614:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08982624u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08982624u) goto L_08982624;
    return;
L_08982624:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[18]);
    goto L_08982638;
L_08982638:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(236)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898272C;
      }
      goto L_08982648;
    }
L_08982648:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08982670;
      }
      goto L_08982650;
    }
L_08982650:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08982660u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08982660u) goto L_08982660;
    return;
L_08982660:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08982670;
L_08982670:
    ctx.gpr[31] = (0x08982678u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(183)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08982678u) goto L_08982678;
    return;
L_08982678:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 203u);
        goto L_08982698;
    }
    goto L_08982698;
L_08982698:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898272C;
      }
      goto L_089826A0;
    }
L_089826A0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089826C8;
      }
      goto L_089826A8;
    }
L_089826A8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089826B8u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x089826B8u) goto L_089826B8;
    return;
L_089826B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089826C8;
L_089826C8:
    ctx.gpr[31] = (0x089826D0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(183)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x089826D0u) goto L_089826D0;
    return;
L_089826D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(108)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[16] = (0u | 203u);
        goto L_089826F0;
    }
    goto L_089826F0;
L_089826F0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_0898271C;
      }
      goto L_089826F8;
    }
L_089826F8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08982708u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08982708u) goto L_08982708;
    return;
L_08982708:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[18]);
    goto L_0898271C;
L_0898271C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(234))))));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0898272C;
      }
      goto L_08982728;
    }
L_08982728:
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    goto L_0898272C;
L_0898272C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_089825D4;
      }
      goto L_08982738;
    }
L_08982738:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[6];
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(214)));
      if (branch_taken) {
          goto L_089827B4;
      }
      goto L_08982744;
    }
L_08982744:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089827C0;
      }
      goto L_0898274C;
    }
L_0898274C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089827C0;
      }
      goto L_08982758;
    }
L_08982758:
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-7827));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08982788;
      }
      goto L_08982768;
    }
L_08982768:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(21));
    ctx.gpr[31] = (0x08982778u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08982778u) goto L_08982778;
    return;
L_08982778:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08982788;
L_08982788:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(183)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (0u | 56u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089827A4u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x089827A4u) goto L_089827A4;
    return;
L_089827A4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(214), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_089827C0;
      }
      goto L_089827B4;
    }
L_089827B4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089827C0;
      }
      goto L_089827BC;
    }
L_089827BC:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(214), static_cast<std::uint8_t>(0u));
    goto L_089827C0;
L_089827C0:
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[30] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(22));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(23));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(25));
    ctx.gpr[16] = (0u | 0u);
    goto L_089827E0;
L_089827E0:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(214)));
        goto L_0898280C;
    }
    goto L_089827E8;
L_089827E8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089827F8u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x089827F8u) goto L_089827F8;
    return;
L_089827F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(214)));
    goto L_0898280C;
L_0898280C:
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089828DC;
      }
      goto L_08982818;
    }
L_08982818:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_08982844;
      }
      goto L_08982820;
    }
L_08982820:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08982830u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08982830u) goto L_08982830;
    return;
L_08982830:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[16]);
    goto L_08982844;
L_08982844:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(236)));
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089828D0;
      }
      goto L_08982854;
    }
L_08982854:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(232))))));
        goto L_08982884;
    }
    goto L_0898285C;
L_0898285C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0898286Cu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x0898286Cu) goto L_0898286C;
    return;
L_0898286C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(232))))));
    goto L_08982884;
L_08982884:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089828D0;
      }
      goto L_08982890;
    }
L_08982890:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(232))))));
        goto L_089828C0;
    }
    goto L_08982898;
L_08982898:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089828A8u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x089828A8u) goto L_089828A8;
    return;
L_089828A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(232))))));
    goto L_089828C0;
L_089828C0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 24 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089828D0;
      }
      goto L_089828CC;
    }
L_089828CC:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_089828D0;
L_089828D0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_089827E0;
      }
      goto L_089828DC;
    }
L_089828DC:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[30];
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(215)));
      if (branch_taken) {
          goto L_089828F8;
      }
      goto L_089828E4;
    }
L_089828E4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08982960;
      }
      goto L_089828EC;
    }
L_089828EC:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(215), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08982960;
      }
      goto L_089828F8;
    }
L_089828F8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982960;
      }
      goto L_08982900;
    }
L_08982900:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898295C;
      }
      goto L_0898290C;
    }
L_0898290C:
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-7827));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_0898293C;
      }
      goto L_0898291C;
    }
L_0898291C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(26));
    ctx.gpr[31] = (0x0898292Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x0898292Cu) goto L_0898292C;
    return;
L_0898292C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0898293C;
L_0898293C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(183)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (0u | 57u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08982958u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08982958u) goto L_08982958;
    return;
L_08982958:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_0898295C;
L_0898295C:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(215), static_cast<std::uint8_t>(0u));
    goto L_08982960;
L_08982960:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(183)));
        goto L_0898298C;
    }
    goto L_08982968;
L_08982968:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(27));
    ctx.gpr[31] = (0x08982978u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08982978u) goto L_08982978;
    return;
L_08982978:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(183)));
    goto L_0898298C;
L_0898298C:
    ctx.gpr[23] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08982C58;
      }
      goto L_08982998;
    }
L_08982998:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
        goto L_089829C4;
    }
    goto L_089829A0;
L_089829A0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (0x089829B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x089829B0u) goto L_089829B0;
    return;
L_089829B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    goto L_089829C4;
L_089829C4:
    ctx.gpr[6] = (0u | 65535u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08982C58;
      }
      goto L_089829D0;
    }
L_089829D0:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[18] = (0u | 201u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(29));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(30));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-7827));
    goto L_089829EC;
L_089829EC:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(214)));
        goto L_08982A18;
    }
    goto L_089829F4;
L_089829F4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08982A04u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08982A04u) goto L_08982A04;
    return;
L_08982A04:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(29)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(214)));
    goto L_08982A18;
L_08982A18:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
        goto L_08982A74;
    }
    goto L_08982A24;
L_08982A24:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_08982A50;
      }
      goto L_08982A2C;
    }
L_08982A2C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08982A3Cu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08982A3Cu) goto L_08982A3C;
    return;
L_08982A3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(30)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[22]);
    goto L_08982A50;
L_08982A50:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(234))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08982A68;
      }
      goto L_08982A5C;
    }
L_08982A5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08982A78;
      }
      goto L_08982A68;
    }
L_08982A68:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_089829EC;
      }
      goto L_08982A74;
    }
L_08982A74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    goto L_08982A78;
L_08982A78:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08982A88u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 99u, 0x08864748u>(ctx, &aot_mem) && ctx.pc == 0x08982A88u) goto L_08982A88;
    return;
L_08982A88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(214)));
        goto L_08982AB8;
    }
    goto L_08982A94;
L_08982A94:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(31));
    ctx.gpr[31] = (0x08982AA4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08982AA4u) goto L_08982AA4;
    return;
L_08982AA4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(214)));
    goto L_08982AB8;
L_08982AB8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982C40;
      }
      goto L_08982AC4;
    }
L_08982AC4:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(183)));
        goto L_08982AF0;
    }
    goto L_08982ACC;
L_08982ACC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08982ADCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08982ADCu) goto L_08982ADC;
    return;
L_08982ADC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(183)));
    goto L_08982AF0;
L_08982AF0:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08982C20;
      }
      goto L_08982AF8;
    }
L_08982AF8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_08982B24;
      }
      goto L_08982B00;
    }
L_08982B00:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(33));
    ctx.gpr[31] = (0x08982B10u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08982B10u) goto L_08982B10;
    return;
L_08982B10:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[22]);
    goto L_08982B24;
L_08982B24:
    ctx.gpr[6] = (48793u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    ctx.gpr[6] = (ctx.gpr[6] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08982C20;
      }
      goto L_08982B44;
    }
L_08982B44:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (2230u << 16u);
      if (branch_taken) {
          goto L_08982B74;
      }
      goto L_08982B4C;
    }
L_08982B4C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(34));
    ctx.gpr[31] = (0x08982B5Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08982B5Cu) goto L_08982B5C;
    return;
L_08982B5C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[6] = (2230u << 16u);
    goto L_08982B74;
L_08982B74:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[6] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    ctx.gpr[5] = (16153u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08982C20;
      }
      goto L_08982BA8;
    }
L_08982BA8:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(345)));
        goto L_08982BD4;
    }
    goto L_08982BB0;
L_08982BB0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(35));
    ctx.gpr[31] = (0x08982BC0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08982BC0u) goto L_08982BC0;
    return;
L_08982BC0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(345)));
    goto L_08982BD4;
L_08982BD4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08982C04;
      }
      goto L_08982BE4;
    }
L_08982BE4:
    ctx.gpr[7] = (16448u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08982BFCu);
    ctx.gpr[6] = (0u | 54u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08982BFCu) goto L_08982BFC;
    return;
L_08982BFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08982C58;
      }
      goto L_08982C04;
    }
L_08982C04:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08982C18u);
    ctx.gpr[6] = (0u | 53u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08982C18u) goto L_08982C18;
    return;
L_08982C18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08982C58;
      }
      goto L_08982C20;
    }
L_08982C20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x08982C38u);
    ctx.gpr[6] = (0u | 52u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08982C38u) goto L_08982C38;
    return;
L_08982C38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08982C58;
      }
      goto L_08982C40;
    }
L_08982C40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x08982C58u);
    ctx.gpr[6] = (0u | 52u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08982C58u) goto L_08982C58;
    return;
L_08982C58:
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
L_08982C88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    ctx.gpr[23] = (ctx.gpr[6] | 0u);
    ctx.gpr[30] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[31] = (0x08982CE0u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x08982CE0u) goto L_08982CE0;
    return;
L_08982CE0:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(176)));
    ctx.gpr[8] = (47747u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(176)));
    ctx.gpr[8] = (ctx.gpr[8] | 4719u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08982D14;
      }
      goto L_08982D08;
    }
L_08982D08:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] | 2u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08982D14;
L_08982D14:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08982D50;
      }
      goto L_08982D30;
    }
L_08982D30:
    ctx.gpr[7] = (14979u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08982D54;
      }
      goto L_08982D4C;
    }
L_08982D4C:
    ctx.gpr[6] = (0u | 1u);
    goto L_08982D50;
L_08982D50:
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    goto L_08982D54;
L_08982D54:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982DA4;
      }
      goto L_08982D5C;
    }
L_08982D5C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08982D98;
      }
      goto L_08982D78;
    }
L_08982D78:
    ctx.gpr[7] = (14979u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08982D9C;
      }
      goto L_08982D94;
    }
L_08982D94:
    ctx.gpr[6] = (0u | 1u);
    goto L_08982D98;
L_08982D98:
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    goto L_08982D9C;
L_08982D9C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08982DB4;
      }
      goto L_08982DA4;
    }
L_08982DA4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08982DCC;
      }
      goto L_08982DB4;
    }
L_08982DB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08982DCC;
L_08982DCC:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(178)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(178)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08982DE8;
      }
      goto L_08982DDC;
    }
L_08982DDC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] | 8192u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08982DE8;
L_08982DE8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(180)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08982E04;
      }
      goto L_08982DF8;
    }
L_08982DF8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] | 4096u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08982E04;
L_08982E04:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(181)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(181)));
    if (ctx.gpr[6] == ctx.gpr[7]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_08982E28;
    }
    goto L_08982E14;
L_08982E14:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (1024u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_08982E28;
L_08982E28:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08982E60;
      }
      goto L_08982E40;
    }
L_08982E40:
    ctx.gpr[7] = (14979u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08982E64;
      }
      goto L_08982E5C;
    }
L_08982E5C:
    ctx.gpr[6] = (0u | 1u);
    goto L_08982E60;
L_08982E60:
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    goto L_08982E64;
L_08982E64:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08982E7C;
      }
      goto L_08982E6C;
    }
L_08982E6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08982E94;
      }
      goto L_08982E7C;
    }
L_08982E7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08982E94;
L_08982E94:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(184)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(184)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08982ED0;
      }
      goto L_08982EB0;
    }
L_08982EB0:
    ctx.gpr[5] = (14979u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08982ED4;
      }
      goto L_08982ECC;
    }
L_08982ECC:
    ctx.gpr[4] = (0u | 1u);
    goto L_08982ED0;
L_08982ED0:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08982ED4;
L_08982ED4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08982EEC;
      }
      goto L_08982EDC;
    }
L_08982EDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08982EF4;
      }
      goto L_08982EEC;
    }
L_08982EEC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08982EF4;
L_08982EF4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(188)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(188)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08982F30;
      }
      goto L_08982F10;
    }
L_08982F10:
    ctx.gpr[5] = (14979u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08982F34;
      }
      goto L_08982F2C;
    }
L_08982F2C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08982F30;
L_08982F30:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08982F34;
L_08982F34:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08982F4C;
      }
      goto L_08982F3C;
    }
L_08982F3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08982F54;
      }
      goto L_08982F4C;
    }
L_08982F4C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(188)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08982F54;
L_08982F54:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(214)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(214)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08982F70;
      }
      goto L_08982F64;
    }
L_08982F64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08982F70;
L_08982F70:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(214)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[30] + static_cast<std::uint32_t>(216));
      if (branch_taken) {
          goto L_08982FF4;
      }
      goto L_08982F84;
    }
L_08982F84:
    ctx.gpr[21] = (0u | 255u);
    ctx.gpr[20] = (0u | 128u);
    ctx.gpr[19] = (ctx.gpr[23] + static_cast<std::uint32_t>(216));
    goto L_08982F90;
L_08982F90:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(214)));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[29] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08982FBC;
      }
      goto L_08982FA0;
    }
L_08982FA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08982FB4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08980B20;
L_08982FB4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08982FC0;
      }
      goto L_08982FBC;
    }
L_08982FBC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[21]));
    goto L_08982FC0;
L_08982FC0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982FDC;
      }
      goto L_08982FCC;
    }
L_08982FCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[20] << (ctx.gpr[17] & 31u));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08982FDC;
L_08982FDC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(214)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08982F90;
      }
      goto L_08982FF4;
    }
L_08982FF4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(192)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08983010;
      }
      goto L_08983004;
    }
L_08983004:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08983010;
L_08983010:
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(192));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x08983020u);
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(192));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 449u, 0x0892EB84u>(ctx, &aot_mem) && ctx.pc == 0x08983020u) goto L_08983020;
    return;
L_08983020:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898303C;
      }
      goto L_08983030;
    }
L_08983030:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0898303C;
L_0898303C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(183)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(183)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0898305C;
      }
      goto L_0898304C;
    }
L_0898304C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0898305C;
L_0898305C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(183)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0898308C;
      }
      goto L_0898306C;
    }
L_0898306C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(345)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(345)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0898308C;
      }
      goto L_0898307C;
    }
L_0898307C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (512u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0898308C;
L_0898308C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(336)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089830AC;
      }
      goto L_0898309C;
    }
L_0898309C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_089830AC;
L_089830AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(337)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(337)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089830CC;
      }
      goto L_089830BC;
    }
L_089830BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_089830CC;
L_089830CC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(338)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(338)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089830EC;
      }
      goto L_089830DC;
    }
L_089830DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_089830EC;
L_089830EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(340)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(340)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0898310C;
      }
      goto L_089830FC;
    }
L_089830FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (16u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0898310C;
L_0898310C:
    ctx.gpr[31] = (0x08983114u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08983114u) goto L_08983114;
    return;
L_08983114:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0898323C;
      }
      goto L_08983120;
    }
L_08983120:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0898315C;
      }
      goto L_0898313C;
    }
L_0898313C:
    ctx.gpr[5] = (14979u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08983160;
      }
      goto L_08983158;
    }
L_08983158:
    ctx.gpr[4] = (0u | 1u);
    goto L_0898315C;
L_0898315C:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08983160;
L_08983160:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089831F8;
      }
      goto L_08983168;
    }
L_08983168:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(100)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(100)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089831A4;
      }
      goto L_08983184;
    }
L_08983184:
    ctx.gpr[5] = (14979u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089831A8;
      }
      goto L_089831A0;
    }
L_089831A0:
    ctx.gpr[4] = (0u | 1u);
    goto L_089831A4;
L_089831A4:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_089831A8;
L_089831A8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089831F8;
      }
      goto L_089831B0;
    }
L_089831B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(104)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(104)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089831EC;
      }
      goto L_089831CC;
    }
L_089831CC:
    ctx.gpr[5] = (14979u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089831F0;
      }
      goto L_089831E8;
    }
L_089831E8:
    ctx.gpr[4] = (0u | 1u);
    goto L_089831EC;
L_089831EC:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_089831F0;
L_089831F0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898320C;
      }
      goto L_089831F8;
    }
L_089831F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0898321C;
      }
      goto L_0898320C;
    }
L_0898320C:
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_0898321C;
L_0898321C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(341))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(341))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0898323C;
      }
      goto L_0898322C;
    }
L_0898322C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (64u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0898323C;
L_0898323C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(342)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(342)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0898325C;
      }
      goto L_0898324C;
    }
L_0898324C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (128u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0898325C;
L_0898325C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(344)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(344)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0898327C;
      }
      goto L_0898326C;
    }
L_0898326C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0898327C;
L_0898327C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089832CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[16]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(214)));
    ctx.gpr[21] = (ctx.gpr[6] + static_cast<std::uint32_t>(64));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          goto L_0898334C;
      }
      goto L_0898332C;
    }
L_0898332C:
    ctx.gpr[5] = (0u | 128u);
    goto L_08983330;
L_08983330:
    ctx.gpr[6] = (ctx.gpr[5] << (ctx.gpr[4] & 31u));
    ctx.gpr[6] = (~(ctx.gpr[6] | 0u));
    ctx.gpr[19] = (ctx.gpr[19] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08983330;
      }
      goto L_0898334C;
    }
L_0898334C:
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[19] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[19] >> 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[19] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089834DC;
      }
      goto L_08983410;
    }
L_08983410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[7] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(182)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(182)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089834DC;
      }
      goto L_089834AC;
    }
L_089834AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2084)));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089834DC;
L_089834DC:
    ctx.gpr[4] = (ctx.gpr[19] & 8192u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983544;
      }
      goto L_089834E8;
    }
L_089834E8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(178)));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08983544;
L_08983544:
    ctx.gpr[4] = (ctx.gpr[19] & 4096u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983578;
      }
      goto L_08983550;
    }
L_08983550:
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08983578;
L_08983578:
    ctx.gpr[4] = (1024u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089835B0;
      }
      goto L_08983588;
    }
L_08983588:
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(181)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_089835B0;
L_089835B0:
    ctx.gpr[4] = (ctx.gpr[19] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983618;
      }
      goto L_089835BC;
    }
L_089835BC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(176)));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08983618;
L_08983618:
    ctx.gpr[4] = (ctx.gpr[19] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089837A4;
      }
      goto L_08983624;
    }
L_08983624:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[5] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[5] >> 16u);
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[5] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[5] >> 16u);
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089837A4;
L_089837A4:
    ctx.gpr[4] = (ctx.gpr[19] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983870;
      }
      goto L_089837B0;
    }
L_089837B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[5] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[5] >> 16u);
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08983870;
L_08983870:
    ctx.gpr[4] = (ctx.gpr[19] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898393C;
      }
      goto L_0898387C;
    }
L_0898387C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[5] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[5] >> 16u);
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0898393C;
L_0898393C:
    ctx.gpr[4] = (ctx.gpr[19] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983A08;
      }
      goto L_08983948;
    }
L_08983948:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[5] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[5] >> 16u);
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08983A08;
L_08983A08:
    ctx.gpr[5] = (ctx.gpr[19] & 64u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(214)));
      if (branch_taken) {
          goto L_08983A3C;
      }
      goto L_08983A14;
    }
L_08983A14:
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(214)));
    goto L_08983A3C;
L_08983A3C:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[22] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 128u);
      if (branch_taken) {
          goto L_08983A8C;
      }
      goto L_08983A4C;
    }
L_08983A4C:
    ctx.gpr[23] = (ctx.gpr[18] + static_cast<std::uint32_t>(216));
    goto L_08983A50;
L_08983A50:
    ctx.gpr[4] = (ctx.gpr[20] << (ctx.gpr[22] & 31u));
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983A78;
      }
      goto L_08983A60;
    }
L_08983A60:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[22]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08983A78u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    goto L_08980D58;
L_08983A78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(214)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[22] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08983A50;
      }
      goto L_08983A8C;
    }
L_08983A8C:
    ctx.gpr[4] = (ctx.gpr[19] & 16384u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983AC0;
      }
      goto L_08983A98;
    }
L_08983A98:
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(192)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08983AC0;
L_08983AC0:
    ctx.gpr[4] = (ctx.gpr[19] & 32768u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983AE0;
      }
      goto L_08983ACC;
    }
L_08983ACC:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(117)));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(192));
    ctx.gpr[7] = (0u | 65535u);
    ctx.gpr[31] = (0x08983AE0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 474u, 0x0892ECACu>(ctx, &aot_mem) && ctx.pc == 0x08983AE0u) goto L_08983AE0;
    return;
L_08983AE0:
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983B18;
      }
      goto L_08983AF0;
    }
L_08983AF0:
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(183)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08983B18;
L_08983B18:
    ctx.gpr[4] = (512u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983B50;
      }
      goto L_08983B28;
    }
L_08983B28:
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(345)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08983B50;
L_08983B50:
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983B88;
      }
      goto L_08983B60;
    }
L_08983B60:
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08983B88;
L_08983B88:
    ctx.gpr[4] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983BC0;
      }
      goto L_08983B98;
    }
L_08983B98:
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(337)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08983BC0;
L_08983BC0:
    ctx.gpr[4] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983C2C;
      }
      goto L_08983BD0;
    }
L_08983BD0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(338)));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08983C2C;
L_08983C2C:
    ctx.gpr[4] = (16u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983C64;
      }
      goto L_08983C3C;
    }
L_08983C3C:
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08983C64;
L_08983C64:
    ctx.gpr[4] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983C80;
      }
      goto L_08983C74;
    }
L_08983C74:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x08983C80u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 93u, 0x08A5C76Cu>(ctx, &aot_mem) && ctx.pc == 0x08983C80u) goto L_08983C80;
    return;
L_08983C80:
    ctx.gpr[4] = (64u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983CC4;
      }
      goto L_08983C90;
    }
L_08983C90:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(341))))));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08983CC4;
L_08983CC4:
    ctx.gpr[4] = (128u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983D30;
      }
      goto L_08983CD4;
    }
L_08983CD4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(342)));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08983D30;
L_08983D30:
    ctx.gpr[4] = (256u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983D68;
      }
      goto L_08983D40;
    }
L_08983D40:
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(344)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08983D68;
L_08983D68:
    ctx.gpr[4] = (2226u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08983D78u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23724));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08983D78u) goto L_08983D78;
    return;
L_08983D78:
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[22]);
    ctx.gpr[31] = (0x08983D90u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08983D90u) goto L_08983D90;
    return;
L_08983D90:
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08983DA0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08983DA0u) goto L_08983DA0;
    return;
L_08983DA0:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[21]);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[20]);
    ctx.gpr[31] = (0x08983DBCu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08983DBCu) goto L_08983DBC;
    return;
L_08983DBC:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[20]);
    ctx.gpr[31] = (0x08983DD4u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08983DD4u) goto L_08983DD4;
    return;
L_08983DD4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[21]);
    ctx.gpr[31] = (0x08983DECu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08983DECu) goto L_08983DEC;
    return;
L_08983DEC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(184)));
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[20]);
    ctx.gpr[31] = (0x08983E08u);
    ctx.gpr[17] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(176)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08983E08u) goto L_08983E08;
    return;
L_08983E08:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(188)));
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08983E18u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08983E18u) goto L_08983E18;
    return;
L_08983E18:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[12]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(214)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[9] = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08983E84u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    goto L_08982524;
L_08983E84:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(214)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[21] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (2226u << 16u);
      if (branch_taken) {
          goto L_08983F40;
      }
      goto L_08983E98;
    }
L_08983E98:
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(216));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-23656));
    goto L_08983EA0;
L_08983EA0:
    ctx.gpr[31] = (0x08983EA8u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08983EA8u) goto L_08983EA8;
    return;
L_08983EA8:
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[22]);
    ctx.gpr[31] = (0x08983EC0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08983EC0u) goto L_08983EC0;
    return;
L_08983EC0:
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[22]);
    ctx.gpr[31] = (0x08983ED8u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08983ED8u) goto L_08983ED8;
    return;
L_08983ED8:
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08983EE8u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08983EE8u) goto L_08983EE8;
    return;
L_08983EE8:
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[13]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[11] = (ctx.gpr[23] | 0u);
    ctx.gpr[10] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08983F2Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[14]);
    goto L_08982524;
L_08983F2C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(214)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[21] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08983EA0;
      }
      goto L_08983F40;
    }
L_08983F40:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983F6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[31]);
    ctx.gpr[30] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[30] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[23] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] << 8u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    ctx.gpr[17] = (ctx.gpr[6] & 65535u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.pc = 0x08984000u; return;
}

void recomp_unit_0095(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0095_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_95(Runtime &runtime) {
    runtime.register_generated_unit(95u, 0x08980000u, 16384u, &recomp_unit_0095, &recomp_unit_0095_entry);
    runtime.register_function(0x08980000u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980048u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980058u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980064u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980070u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980078u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089800D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089800E8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089800F4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980108u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980118u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980124u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980130u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980134u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980144u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980164u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980184u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089801B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089801C0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089801C8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089801D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089801D8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089801E0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089801E8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089801F0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089801F8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980200u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898020Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980210u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980234u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980254u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980260u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980268u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980278u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898027Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980288u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980298u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089802A0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089802B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089802D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089802E4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089802F8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980300u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980308u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980310u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980318u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980334u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898034Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980354u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980364u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898036Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980380u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980394u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089803ACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089803B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089803D4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089803D8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089803F4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980408u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898041Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980424u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980438u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980444u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980448u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980450u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980458u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980470u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980494u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089804A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089804B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089804C4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089804D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089804D4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089804E4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089804FCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980550u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980564u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898057Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980590u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980598u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089805ACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089805C4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089805FCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980618u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980620u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980664u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898067Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980694u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089806A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089806B4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089806C0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089806D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089806DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089806E4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089806F0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089806F8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980718u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980728u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980730u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980740u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980744u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898075Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898076Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980780u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980790u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089807A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089807ACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089807BCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089807CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089807DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089807E4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089807E8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089807ECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089807F4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980808u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980834u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980858u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980880u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980884u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980894u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089808A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089808BCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089808D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980914u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980928u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980934u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898094Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980958u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980968u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980974u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980994u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898099Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089809A0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089809C0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A00u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A0Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A1Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A28u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A44u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A50u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A68u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A74u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A94u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A9Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980AA4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980AD8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980AE4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980AF8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B00u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B04u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B20u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B54u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B70u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B74u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B78u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B80u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B8Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B94u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980BACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980BC8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980BCCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980BD0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980BD8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980BECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980BFCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C04u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C28u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C4Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C68u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C6Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C70u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C78u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C84u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C8Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980CA8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980CC4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980CC8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980CCCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980CD4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980CF0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D08u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D14u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D1Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D28u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D30u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D3Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D40u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D4Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D50u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D58u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D8Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980E4Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980E58u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980F18u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980F24u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980FE4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980FF0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089810B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089810BCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981124u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981130u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981198u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089811A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981204u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981210u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981270u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981278u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981298u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981300u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898130Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981374u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981380u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089813E8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089813F4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898145Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981468u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981494u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089814A0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089814CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089814D8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981518u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981524u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981564u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898156Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981594u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089815A0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089815B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089815C0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089815CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089815D4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089815E4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089815E8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089815F0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089815FCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898160Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981620u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981628u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981638u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981648u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981654u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981664u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898166Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981670u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898168Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089816BCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089816C8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089816D8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089816E8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089816F4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089816FCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898170Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981710u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981718u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981724u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981734u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981748u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981750u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981764u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981774u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981780u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981788u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981794u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089817A0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089817B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089817C4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089817CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089817DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089817ECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089817F8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898180Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981814u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981820u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981830u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981844u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898184Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981854u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981864u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981868u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981870u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898187Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981884u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981890u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898189Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089818B4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089818DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089818E8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089818F8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981914u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981984u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089819A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089819BCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089819D8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089819F4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089819FCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A08u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A14u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A20u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A34u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A44u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A4Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A60u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A6Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A80u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981AB8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981AD4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981AF0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981AFCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B08u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B10u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B24u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B44u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B74u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B7Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B84u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B90u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B98u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981BA4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981BACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981BBCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981BD4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981BE8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C58u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C6Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981CD8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981CE0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981CFCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981D08u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981D10u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981D2Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981D38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981D5Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981D78u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981D84u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981DA0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981DACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981DC0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981DECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981E08u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981E14u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981E2Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981E60u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981E88u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981E9Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981EBCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981EE4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981EECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981F08u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981F44u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981F54u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981F60u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981F74u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981F94u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981F9Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981FE8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981FECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982004u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982048u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982054u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982060u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982068u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898206Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089820D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089820E8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089820ECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089820F4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089820FCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982104u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982114u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898211Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982128u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982130u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982138u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982140u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982148u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982150u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982158u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982160u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982168u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982184u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982194u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898219Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089821A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089821ACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089821B4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089821C0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089821C8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089821D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089821DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089821E0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089821ECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089821F4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982210u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898221Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089822B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089822C8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089822D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089822D8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089822E0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982300u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898231Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982330u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982338u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982340u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982354u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982360u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898236Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982384u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982390u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089823A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089823C4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089823D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089823D8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089823F0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982404u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898240Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982414u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898241Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982428u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982430u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982434u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982448u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982474u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982484u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982488u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982490u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089824BCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089824C4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089824CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089824ECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089824F8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982524u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982550u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898258Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089825B4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089825D4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089825DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089825ECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982600u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898260Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982614u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982624u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982638u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982648u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982650u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982660u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982670u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982678u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982698u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089826A0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089826A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089826B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089826C8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089826D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089826F0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089826F8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982708u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898271Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982728u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898272Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982738u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982744u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898274Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982758u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982768u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982778u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982788u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089827A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089827B4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089827BCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089827C0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089827E0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089827E8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089827F8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898280Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982818u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982820u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982830u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982844u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982854u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898285Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898286Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982884u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982890u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982898u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089828A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089828C0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089828CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089828D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089828DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089828E4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089828ECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089828F8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982900u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898290Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898291Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898292Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898293Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982958u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898295Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982960u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982968u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982978u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898298Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982998u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089829A0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089829B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089829C4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089829D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089829ECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089829F4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982A04u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982A18u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982A24u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982A2Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982A3Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982A50u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982A5Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982A68u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982A74u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982A78u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982A88u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982A94u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982AA4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982AB8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982AC4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982ACCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982ADCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982AF0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982AF8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B00u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B10u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B24u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B44u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B4Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B5Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B74u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982BA8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982BB0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982BC0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982BD4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982BE4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982BFCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982C04u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982C18u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982C20u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982C38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982C40u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982C58u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982C88u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982CE0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982D08u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982D14u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982D30u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982D4Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982D50u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982D54u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982D5Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982D78u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982D94u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982D98u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982D9Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982DA4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982DB4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982DCCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982DDCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982DE8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982DF8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E04u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E14u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E28u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E40u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E5Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E60u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E64u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E6Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E7Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E94u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982EB0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982ECCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982ED0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982ED4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982EDCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982EECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982EF4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F10u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F2Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F30u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F34u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F3Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F4Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F54u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F64u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F70u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F84u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F90u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982FA0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982FB4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982FBCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982FC0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982FCCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982FDCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982FF4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983004u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983010u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983020u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983030u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898303Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898304Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898305Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898306Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898307Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898308Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898309Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089830ACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089830BCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089830CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089830DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089830ECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089830FCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898310Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983114u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983120u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898313Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983158u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898315Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983160u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983168u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983184u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089831A0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089831A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089831A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089831B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089831CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089831E8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089831ECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089831F0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089831F8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898320Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898321Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898322Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898323Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898324Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898325Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898326Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898327Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089832CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898332Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983330u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898334Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983410u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089834ACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089834DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089834E8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983544u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983550u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983578u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983588u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089835B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089835BCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983618u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983624u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089837A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089837B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983870u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898387Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898393Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983948u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983A08u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983A14u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983A3Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983A4Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983A50u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983A60u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983A78u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983A8Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983A98u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983AC0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983ACCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983AE0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983AF0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983B18u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983B28u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983B50u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983B60u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983B88u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983B98u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983BC0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983BD0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C2Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C3Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C64u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C74u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C80u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C90u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983CC4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983CD4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983D30u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983D40u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983D68u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983D78u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983D90u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983DA0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983DBCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983DD4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983DECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983E08u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983E18u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983E84u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983E98u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983EA0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983EA8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983EC0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983ED8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983EE8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983F2Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983F40u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983F6Cu, &recomp_unit_0095, "recomp_unit_0095");
}
} // namespace psprecomp
