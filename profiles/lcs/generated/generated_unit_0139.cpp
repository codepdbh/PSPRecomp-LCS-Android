#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0139[4095] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6,
    0, 7, 0, 0, 0, 8, 0, 0, 9, 0, 10, 0, 11, 0, 12, 0, 0, 13, 0, 0, 14, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 0,
    0, 18, 0, 0, 19, 0, 20, 0, 21, 0, 22, 0, 0, 23, 0, 0, 24, 0, 0, 25, 0, 0, 26, 27, 0, 0, 28, 0, 0, 29, 0, 30,
    0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41,
    0, 42, 0, 0, 0, 43, 0, 0, 44, 0, 45, 0, 46, 0, 47, 0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 0, 51, 0, 0, 52, 0, 0,
    0, 53, 0, 0, 54, 0, 55, 0, 56, 0, 57, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0, 0, 61, 62, 0, 0, 63, 0, 0, 64, 0, 0,
    0, 0, 0, 65, 0, 66, 0, 0, 67, 0, 68, 0, 69, 0, 70, 0, 71, 0, 72, 0, 73, 74, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0,
    0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83,
    0, 0, 84, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 89, 0, 90, 0, 91, 0, 92, 0, 93, 0, 0, 0, 0,
    94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 98,
    0, 99, 0, 100, 0, 101, 0, 102, 0, 0, 0, 0, 103, 0, 104, 0, 105, 0, 106, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0,
    0, 0, 0, 110, 0, 0, 0, 111, 0, 112, 0, 113, 0, 114, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 125, 0, 126, 0, 0, 127, 0, 0, 0,
    128, 0, 129, 0, 130, 0, 131, 0, 132, 0, 0, 0, 133, 0, 134, 0, 135, 0, 136, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 139, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 150,
    0, 0, 0, 0, 151, 0, 152, 0, 153, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0,
    157, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0,
    0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 177, 0, 0, 178, 0, 179, 0, 180, 0, 181,
    0, 182, 0, 183, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 194, 0, 195, 0, 0, 0, 0, 0,
    196, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 201, 0, 202, 0, 0, 0, 203, 0, 0, 204, 0, 0, 205, 0,
    0, 206, 207, 0, 208, 0, 0, 0, 0, 209, 0, 0, 210, 0, 211, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 214, 0, 215, 0, 0, 0, 216,
    0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 221, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0,
    226, 0, 0, 0, 0, 0, 0, 227, 228, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 232, 0, 0, 233, 0, 234, 0, 0, 0, 0,
    0, 235, 0, 0, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 0, 0, 240, 0, 241, 0, 242, 0, 0, 0, 0, 0,
    0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0,
    247, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 251, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 256, 0, 0, 257, 0, 258, 0, 0, 0, 0, 259, 0, 260, 0, 261, 0, 0, 0, 0, 262,
    0, 263, 0, 0, 264, 0, 0, 0, 265, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 271,
    0, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 281,
    0, 282, 283, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0,
    288, 289, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 293, 0, 294, 0, 0, 0, 295, 0, 296, 0, 297, 0, 298, 0, 299,
    0, 300, 301, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0,
    306, 307, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 311, 312, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 314, 0, 0,
    0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 317, 318, 0, 319, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0,
    0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 324, 0, 0, 0, 0, 325, 0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0,
    328, 0, 0, 0, 329, 0, 330, 0, 331, 0, 332, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 336, 0, 0, 0, 0, 0,
    0, 337, 0, 338, 0, 0, 0, 0, 339, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 344,
    0, 345, 0, 346, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 350, 0, 0,
    0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 353, 354, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 356, 0, 0, 0, 0, 0, 0, 357, 0,
    0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 360, 0, 361, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 364, 0, 0, 0, 0, 0,
    0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0,
    370, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 373, 0, 374, 0, 0, 375, 0, 0, 0, 0, 0, 0, 376,
    0, 377, 0, 0, 0, 0, 0, 378, 0, 379, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 382, 0, 383, 0, 384, 0, 0, 0, 385, 0, 0,
    0, 0, 386, 0, 0, 387, 0, 0, 0, 388, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 390, 0, 391, 0, 0, 0, 392, 0, 0, 393, 0, 0,
    0, 0, 0, 394, 0, 395, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 400, 0, 401, 0, 0, 0, 0, 0, 402, 0, 403, 0, 0, 0, 0,
    0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    408, 0, 409, 0, 0, 0, 0, 0, 410, 0, 411, 0, 412, 0, 0, 413, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0,
    417, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 422,
    0, 423, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0, 426, 0, 427, 0, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 430, 0, 0,
    0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434, 435, 0, 0, 0, 0,
    0, 0, 0, 0, 436, 0, 437, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 440, 441, 0, 442, 0, 0, 0,
    0, 0, 443, 0, 0, 0, 444, 0, 0, 445, 0, 446, 0, 447, 448, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 450, 0, 0, 0, 0, 0, 0,
    451, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 453, 454, 0, 455, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 457, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 459, 0, 460, 0, 461, 0, 0, 0, 0, 462, 463, 0, 0, 0, 0, 0,
    464, 0, 0, 0, 465, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 469, 0, 0, 470, 0,
    0, 0, 0, 0, 0, 471, 0, 472, 0, 0, 0, 0, 0, 473, 0, 474, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 477, 0, 0,
    0, 0, 0, 0, 478, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 480, 481, 0, 482, 0, 0, 0, 0, 0, 483, 0, 0, 0, 484, 0, 0,
    0, 485, 0, 0, 0, 486, 0, 0, 0, 0, 487, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 490, 0, 0, 0, 0, 0, 0, 491,
    0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 493, 494, 0, 495, 0, 0, 0, 0, 0, 496, 0, 497, 0, 0, 0, 0, 0, 0, 0, 498, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    499, 0, 500, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 503, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 505, 0, 506, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 508, 0, 509, 0, 510, 0, 511, 0, 512, 0, 0, 0, 0, 0, 513, 0, 0, 0, 514, 0, 0, 0, 0, 0, 515, 0,
    516, 0, 517, 0, 0, 518, 0, 519, 0, 520, 0, 0, 521, 0, 522, 0, 523, 0, 0, 524, 0, 525, 0, 526, 0, 0, 527, 0, 528, 0, 0, 529,
    0, 0, 530, 0, 531, 0, 532, 0, 0, 533, 0, 534, 0, 535, 0, 0, 536, 0, 537, 0, 538, 0, 0, 539, 0, 540, 0, 541, 0, 0, 542, 0,
    543, 0, 544, 0, 0, 545, 0, 546, 0, 547, 0, 0, 548, 0, 549, 0, 550, 0, 0, 551, 0, 552, 0, 553, 0, 0, 554, 0, 555, 0, 556, 0,
    0, 557, 0, 558, 0, 559, 0, 0, 560, 0, 561, 0, 562, 0, 0, 563, 0, 564, 0, 565, 0, 0, 566, 0, 567, 0, 568, 0, 0, 569, 0, 570,
    0, 571, 0, 0, 572, 0, 573, 0, 574, 0, 0, 575, 0, 576, 0, 577, 0, 0, 578, 0, 579, 0, 580, 0, 0, 581, 0, 582, 0, 583, 0, 0,
    584, 0, 585, 0, 586, 0, 0, 587, 0, 588, 0, 589, 0, 0, 590, 0, 591, 0, 592, 0, 0, 593, 0, 594, 0, 595, 0, 0, 596, 0, 597, 0,
    598, 0, 0, 599, 0, 600, 0, 601, 0, 0, 602, 0, 603, 0, 604, 0, 0, 605, 0, 606, 0, 607, 0, 0, 608, 0, 609, 0, 610, 0, 0, 611,
    0, 612, 0, 613, 0, 0, 614, 0, 615, 0, 616, 0, 0, 617, 0, 618, 0, 619, 0, 0, 620, 0, 621, 0, 622, 0, 0, 623, 0, 624, 0, 625,
    0, 0, 626, 0, 627, 0, 628, 0, 0, 629, 0, 630, 0, 631, 0, 0, 632, 0, 633, 0, 634, 0, 0, 635, 0, 636, 0, 637, 0, 0, 638, 0,
    639, 0, 640, 0, 0, 641, 0, 642, 0, 643, 0, 0, 644, 0, 645, 0, 646, 0, 0, 647, 0, 648, 0, 649, 0, 0, 650, 0, 0, 0, 651, 0,
    652, 0, 0, 0, 653, 0, 654, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 656, 0, 657, 0, 658, 0, 659, 0, 0, 660, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 663, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 666, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 667, 0, 0, 0, 0, 0, 0, 668, 0, 0, 669, 0, 670, 0, 0, 0, 0, 0, 671, 0, 0, 0, 672, 0, 0, 0, 0, 673, 0, 0,
    0, 674, 675, 0, 0, 0, 0, 0, 0, 0, 0, 676, 0, 677, 0, 0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0,
    680, 681, 0, 682, 0, 0, 0, 0, 0, 683, 0, 0, 0, 684, 0, 0, 0, 0, 685, 0, 0, 0, 686, 687, 0, 0, 0, 0, 0, 0, 0, 0,
    688, 0, 689, 0, 0, 0, 0, 0, 0, 690, 0, 0, 0, 0, 691, 0, 0, 0, 0, 0, 0, 692, 693, 0, 694, 0, 0, 0, 0, 0, 695, 0,
    0, 0, 696, 0, 0, 0, 0, 697, 0, 0, 0, 698, 699, 0, 0, 0, 0, 0, 0, 0, 0, 700, 0, 701, 0, 0, 0, 0, 0, 0, 702, 0,
    0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 704, 705, 0, 706, 0, 0, 0, 0, 0, 707, 0, 0, 0, 708, 0, 0, 0, 0, 709, 0, 0, 0,
    710, 711, 0, 0, 0, 0, 0, 0, 0, 0, 712, 0, 713, 0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 716,
    717, 0, 718, 0, 719, 0, 0, 720, 0, 721, 0, 722, 0, 0, 723, 0, 0, 0, 0, 0, 0, 724, 0, 725, 0, 0, 0, 0, 0, 0, 726, 0,
    0, 0, 0, 727, 0, 0, 0, 0, 0, 0, 728, 729, 0, 730, 0, 731, 0, 0, 0, 0, 0, 0, 732, 0, 0, 0, 733, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0, 735, 0, 0, 0, 0, 736, 0, 0, 0, 0, 0, 737, 0, 0, 738, 0, 0, 739, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 740, 0, 0, 741, 742, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 743, 0, 744, 0, 0, 0, 0, 0, 745, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 746, 0, 0, 0, 0, 0, 747, 0, 0, 0, 748, 0, 749, 0, 750, 0, 751, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 752, 0, 753, 0, 0, 0, 0, 0, 754, 0, 0, 0, 755, 0, 0, 0, 756, 757, 0, 0, 0, 0, 0, 0, 0, 0, 758, 0, 759,
    0, 0, 0, 0, 0, 0, 760, 0, 0, 0, 0, 761, 0, 0, 0, 0, 0, 0, 762, 763, 0, 764, 0, 0, 0, 0, 0, 765, 0, 0, 0, 766,
    0, 0, 0, 767, 768, 0, 0, 0, 0, 0, 0, 0, 0, 769, 0, 770, 0, 0, 0, 0, 0, 0, 771, 0, 0, 0, 0, 772, 0, 0, 0, 0,
    0, 0, 773, 774, 0, 775, 0, 0, 0, 0, 0, 0, 776, 0, 0, 0, 777, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 778, 0, 0,
    0, 0, 0, 0, 779, 0, 0, 0, 780, 0, 0, 0, 0, 781, 0, 0, 0, 0, 0, 0, 0, 782, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 783, 0, 0, 0, 0, 0, 784, 0, 785, 0, 0, 0, 0, 0, 0, 0, 786, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 787, 0, 0, 788, 0, 789, 0, 0, 0, 0, 0, 0, 0, 790, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 791, 0, 0, 0, 0, 0, 0, 0, 0, 0, 792, 0, 0, 0, 0, 0, 0, 0, 793, 0, 0, 0, 0, 0, 0, 0, 0, 794,
    795, 0, 796, 0, 0, 0, 0, 0, 797, 0, 798, 0, 0, 0, 0, 0, 799, 0, 0, 0, 800, 0, 801, 802, 0, 0, 0, 0, 0, 0, 0, 0,
    803, 0, 804, 0, 0, 0, 0, 0, 0, 805, 0, 0, 0, 0, 806, 0, 0, 0, 0, 0, 0, 807, 808, 0, 809, 0, 810, 0, 811, 0, 0, 0,
    0, 0, 812, 0, 0, 0, 0, 0, 0, 813, 0, 0, 0, 0, 0, 814, 0, 0, 0, 0, 0, 815, 0, 0, 0, 0, 0, 0, 816, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 817, 0, 818, 0, 819, 0, 0, 820, 0, 0, 0, 0, 0, 0, 821, 0, 822, 0, 0, 0, 0, 0, 823, 0, 824, 0,
    0, 0, 825, 0, 0, 0, 0, 826, 0, 0, 827, 0, 0, 0, 0, 0, 828, 0, 829, 0, 0, 0, 0, 0, 0, 0, 830, 0, 0, 0, 0, 0,
    831, 0, 0, 0, 832, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 833, 0, 0, 0, 0, 834,
};
void recomp_unit_0139_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A30000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0139[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A30000;
    case 2u: goto L_08A300A0;
    case 3u: goto L_08A300B4;
    case 4u: goto L_08A300C8;
    case 5u: goto L_08A300E0;
    case 6u: goto L_08A300FC;
    case 7u: goto L_08A30104;
    case 8u: goto L_08A30114;
    case 9u: goto L_08A30120;
    case 10u: goto L_08A30128;
    case 11u: goto L_08A30130;
    case 12u: goto L_08A30138;
    case 13u: goto L_08A30144;
    case 14u: goto L_08A30150;
    case 15u: goto L_08A3015C;
    case 16u: goto L_08A30168;
    case 17u: goto L_08A30174;
    case 18u: goto L_08A30184;
    case 19u: goto L_08A30190;
    case 20u: goto L_08A30198;
    case 21u: goto L_08A301A0;
    case 22u: goto L_08A301A8;
    case 23u: goto L_08A301B4;
    case 24u: goto L_08A301C0;
    case 25u: goto L_08A301CC;
    case 26u: goto L_08A301D8;
    case 27u: goto L_08A301DC;
    case 28u: goto L_08A301E8;
    case 29u: goto L_08A301F4;
    case 30u: goto L_08A301FC;
    case 31u: goto L_08A3020C;
    case 32u: goto L_08A30214;
    case 33u: goto L_08A30228;
    case 34u: goto L_08A30244;
    case 35u: goto L_08A30274;
    case 36u: goto L_08A302C0;
    case 37u: goto L_08A303A0;
    case 38u: goto L_08A303B4;
    case 39u: goto L_08A303C8;
    case 40u: goto L_08A303E0;
    case 41u: goto L_08A303FC;
    case 42u: goto L_08A30404;
    case 43u: goto L_08A30414;
    case 44u: goto L_08A30420;
    case 45u: goto L_08A30428;
    case 46u: goto L_08A30430;
    case 47u: goto L_08A30438;
    case 48u: goto L_08A30444;
    case 49u: goto L_08A30450;
    case 50u: goto L_08A3045C;
    case 51u: goto L_08A30468;
    case 52u: goto L_08A30474;
    case 53u: goto L_08A30484;
    case 54u: goto L_08A30490;
    case 55u: goto L_08A30498;
    case 56u: goto L_08A304A0;
    case 57u: goto L_08A304A8;
    case 58u: goto L_08A304B4;
    case 59u: goto L_08A304C0;
    case 60u: goto L_08A304CC;
    case 61u: goto L_08A304D8;
    case 62u: goto L_08A304DC;
    case 63u: goto L_08A304E8;
    case 64u: goto L_08A304F4;
    case 65u: goto L_08A3050C;
    case 66u: goto L_08A30514;
    case 67u: goto L_08A30520;
    case 68u: goto L_08A30528;
    case 69u: goto L_08A30530;
    case 70u: goto L_08A30538;
    case 71u: goto L_08A30540;
    case 72u: goto L_08A30548;
    case 73u: goto L_08A30550;
    case 74u: goto L_08A30554;
    case 75u: goto L_08A3055C;
    case 76u: goto L_08A3056C;
    case 77u: goto L_08A30588;
    case 78u: goto L_08A305B8;
    case 79u: goto L_08A305D0;
    case 80u: goto L_08A30790;
    case 81u: goto L_08A307AC;
    case 82u: goto L_08A307E8;
    case 83u: goto L_08A307FC;
    case 84u: goto L_08A30808;
    case 85u: goto L_08A30810;
    case 86u: goto L_08A30820;
    case 87u: goto L_08A30838;
    case 88u: goto L_08A30844;
    case 89u: goto L_08A3084C;
    case 90u: goto L_08A30854;
    case 91u: goto L_08A3085C;
    case 92u: goto L_08A30864;
    case 93u: goto L_08A3086C;
    case 94u: goto L_08A30880;
    case 95u: goto L_08A308D0;
    case 96u: goto L_08A308DC;
    case 97u: goto L_08A308E4;
    case 98u: goto L_08A308FC;
    case 99u: goto L_08A30904;
    case 100u: goto L_08A3090C;
    case 101u: goto L_08A30914;
    case 102u: goto L_08A3091C;
    case 103u: goto L_08A30930;
    case 104u: goto L_08A30938;
    case 105u: goto L_08A30940;
    case 106u: goto L_08A30948;
    case 107u: goto L_08A30950;
    case 108u: goto L_08A30964;
    case 109u: goto L_08A30978;
    case 110u: goto L_08A3098C;
    case 111u: goto L_08A3099C;
    case 112u: goto L_08A309A4;
    case 113u: goto L_08A309AC;
    case 114u: goto L_08A309B4;
    case 115u: goto L_08A309BC;
    case 116u: goto L_08A309CC;
    case 117u: goto L_08A309E4;
    case 118u: goto L_08A30AA0;
    case 119u: goto L_08A30AF8;
    case 120u: goto L_08A30B8C;
    case 121u: goto L_08A30B94;
    case 122u: goto L_08A30BA8;
    case 123u: goto L_08A30BBC;
    case 124u: goto L_08A30BCC;
    case 125u: goto L_08A30BDC;
    case 126u: goto L_08A30BE4;
    case 127u: goto L_08A30BF0;
    case 128u: goto L_08A30C00;
    case 129u: goto L_08A30C08;
    case 130u: goto L_08A30C10;
    case 131u: goto L_08A30C18;
    case 132u: goto L_08A30C20;
    case 133u: goto L_08A30C30;
    case 134u: goto L_08A30C38;
    case 135u: goto L_08A30C40;
    case 136u: goto L_08A30C48;
    case 137u: goto L_08A30C50;
    case 138u: goto L_08A30C60;
    case 139u: goto L_08A30D04;
    case 140u: goto L_08A30D0C;
    case 141u: goto L_08A30D1C;
    case 142u: goto L_08A30DC0;
    case 143u: goto L_08A30DC8;
    case 144u: goto L_08A30DDC;
    case 145u: goto L_08A30E2C;
    case 146u: goto L_08A30E98;
    case 147u: goto L_08A30EB0;
    case 148u: goto L_08A30EB8;
    case 149u: goto L_08A30EF4;
    case 150u: goto L_08A30EFC;
    case 151u: goto L_08A30F10;
    case 152u: goto L_08A30F18;
    case 153u: goto L_08A30F20;
    case 154u: goto L_08A30F34;
    case 155u: goto L_08A30F3C;
    case 156u: goto L_08A30F78;
    case 157u: goto L_08A30F80;
    case 158u: goto L_08A30F94;
    case 159u: goto L_08A30F9C;
    case 160u: goto L_08A30FD0;
    case 161u: goto L_08A30FD8;
    case 162u: goto L_08A30FEC;
    case 163u: goto L_08A31020;
    case 164u: goto L_08A31028;
    case 165u: goto L_08A3103C;
    case 166u: goto L_08A31070;
    case 167u: goto L_08A31078;
    case 168u: goto L_08A3108C;
    case 169u: goto L_08A310C8;
    case 170u: goto L_08A310D0;
    case 171u: goto L_08A310E4;
    case 172u: goto L_08A31118;
    case 173u: goto L_08A3113C;
    case 174u: goto L_08A31220;
    case 175u: goto L_08A3123C;
    case 176u: goto L_08A31250;
    case 177u: goto L_08A31258;
    case 178u: goto L_08A31264;
    case 179u: goto L_08A3126C;
    case 180u: goto L_08A31274;
    case 181u: goto L_08A3127C;
    case 182u: goto L_08A31284;
    case 183u: goto L_08A3128C;
    case 184u: goto L_08A31294;
    case 185u: goto L_08A312A8;
    case 186u: goto L_08A312BC;
    case 187u: goto L_08A312C8;
    case 188u: goto L_08A312E0;
    case 189u: goto L_08A312EC;
    case 190u: goto L_08A31364;
    case 191u: goto L_08A313A4;
    case 192u: goto L_08A313C0;
    case 193u: goto L_08A313D8;
    case 194u: goto L_08A313E0;
    case 195u: goto L_08A313E8;
    case 196u: goto L_08A31400;
    case 197u: goto L_08A31410;
    case 198u: goto L_08A3141C;
    case 199u: goto L_08A3142C;
    case 200u: goto L_08A3143C;
    case 201u: goto L_08A31448;
    case 202u: goto L_08A31450;
    case 203u: goto L_08A31460;
    case 204u: goto L_08A3146C;
    case 205u: goto L_08A31478;
    case 206u: goto L_08A31484;
    case 207u: goto L_08A31488;
    case 208u: goto L_08A31490;
    case 209u: goto L_08A314A4;
    case 210u: goto L_08A314B0;
    case 211u: goto L_08A314B8;
    case 212u: goto L_08A314D0;
    case 213u: goto L_08A314D8;
    case 214u: goto L_08A314E4;
    case 215u: goto L_08A314EC;
    case 216u: goto L_08A314FC;
    case 217u: goto L_08A31510;
    case 218u: goto L_08A31518;
    case 219u: goto L_08A31534;
    case 220u: goto L_08A31560;
    case 221u: goto L_08A315A0;
    case 222u: goto L_08A315A4;
    case 223u: goto L_08A315C8;
    case 224u: goto L_08A315D0;
    case 225u: goto L_08A315EC;
    case 226u: goto L_08A31600;
    case 227u: goto L_08A3161C;
    case 228u: goto L_08A31620;
    case 229u: goto L_08A31628;
    case 230u: goto L_08A31640;
    case 231u: goto L_08A3164C;
    case 232u: goto L_08A31658;
    case 233u: goto L_08A31664;
    case 234u: goto L_08A3166C;
    case 235u: goto L_08A31684;
    case 236u: goto L_08A3169C;
    case 237u: goto L_08A316A4;
    case 238u: goto L_08A316BC;
    case 239u: goto L_08A316C8;
    case 240u: goto L_08A316D8;
    case 241u: goto L_08A316E0;
    case 242u: goto L_08A316E8;
    case 243u: goto L_08A31704;
    case 244u: goto L_08A3174C;
    case 245u: goto L_08A31754;
    case 246u: goto L_08A31770;
    case 247u: goto L_08A31780;
    case 248u: goto L_08A31794;
    case 249u: goto L_08A317A4;
    case 250u: goto L_08A317B4;
    case 251u: goto L_08A317C0;
    case 252u: goto L_08A317D0;
    case 253u: goto L_08A317DC;
    case 254u: goto L_08A317F0;
    case 255u: goto L_08A31828;
    case 256u: goto L_08A31830;
    case 257u: goto L_08A3183C;
    case 258u: goto L_08A31844;
    case 259u: goto L_08A31858;
    case 260u: goto L_08A31860;
    case 261u: goto L_08A31868;
    case 262u: goto L_08A3187C;
    case 263u: goto L_08A31884;
    case 264u: goto L_08A31890;
    case 265u: goto L_08A318A0;
    case 266u: goto L_08A318A8;
    case 267u: goto L_08A318C0;
    case 268u: goto L_08A318CC;
    case 269u: goto L_08A318E0;
    case 270u: goto L_08A318F4;
    case 271u: goto L_08A318FC;
    case 272u: goto L_08A31918;
    case 273u: goto L_08A31924;
    case 274u: goto L_08A3192C;
    case 275u: goto L_08A31944;
    case 276u: goto L_08A31988;
    case 277u: goto L_08A319B4;
    case 278u: goto L_08A319C4;
    case 279u: goto L_08A319DC;
    case 280u: goto L_08A319F4;
    case 281u: goto L_08A319FC;
    case 282u: goto L_08A31A04;
    case 283u: goto L_08A31A08;
    case 284u: goto L_08A31A2C;
    case 285u: goto L_08A31A34;
    case 286u: goto L_08A31A50;
    case 287u: goto L_08A31A64;
    case 288u: goto L_08A31A80;
    case 289u: goto L_08A31A84;
    case 290u: goto L_08A31A8C;
    case 291u: goto L_08A31AA4;
    case 292u: goto L_08A31AB4;
    case 293u: goto L_08A31AC4;
    case 294u: goto L_08A31ACC;
    case 295u: goto L_08A31ADC;
    case 296u: goto L_08A31AE4;
    case 297u: goto L_08A31AEC;
    case 298u: goto L_08A31AF4;
    case 299u: goto L_08A31AFC;
    case 300u: goto L_08A31B04;
    case 301u: goto L_08A31B08;
    case 302u: goto L_08A31B2C;
    case 303u: goto L_08A31B34;
    case 304u: goto L_08A31B50;
    case 305u: goto L_08A31B64;
    case 306u: goto L_08A31B80;
    case 307u: goto L_08A31B84;
    case 308u: goto L_08A31B8C;
    case 309u: goto L_08A31BA4;
    case 310u: goto L_08A31BB4;
    case 311u: goto L_08A31BC4;
    case 312u: goto L_08A31BC8;
    case 313u: goto L_08A31BEC;
    case 314u: goto L_08A31BF4;
    case 315u: goto L_08A31C10;
    case 316u: goto L_08A31C24;
    case 317u: goto L_08A31C40;
    case 318u: goto L_08A31C44;
    case 319u: goto L_08A31C4C;
    case 320u: goto L_08A31C68;
    case 321u: goto L_08A31C78;
    case 322u: goto L_08A31C84;
    case 323u: goto L_08A31CA0;
    case 324u: goto L_08A31CA8;
    case 325u: goto L_08A31CBC;
    case 326u: goto L_08A31CC4;
    case 327u: goto L_08A31CE0;
    case 328u: goto L_08A31D00;
    case 329u: goto L_08A31D10;
    case 330u: goto L_08A31D18;
    case 331u: goto L_08A31D20;
    case 332u: goto L_08A31D28;
    case 333u: goto L_08A31D30;
    case 334u: goto L_08A31D4C;
    case 335u: goto L_08A31D5C;
    case 336u: goto L_08A31D68;
    case 337u: goto L_08A31D84;
    case 338u: goto L_08A31D8C;
    case 339u: goto L_08A31DA0;
    case 340u: goto L_08A31DA8;
    case 341u: goto L_08A31DC4;
    case 342u: goto L_08A31DE4;
    case 343u: goto L_08A31DF4;
    case 344u: goto L_08A31DFC;
    case 345u: goto L_08A31E04;
    case 346u: goto L_08A31E0C;
    case 347u: goto L_08A31E14;
    case 348u: goto L_08A31E30;
    case 349u: goto L_08A31E6C;
    case 350u: goto L_08A31E74;
    case 351u: goto L_08A31E8C;
    case 352u: goto L_08A31E9C;
    case 353u: goto L_08A31EAC;
    case 354u: goto L_08A31EB0;
    case 355u: goto L_08A31ED4;
    case 356u: goto L_08A31EDC;
    case 357u: goto L_08A31EF8;
    case 358u: goto L_08A31F0C;
    case 359u: goto L_08A31F28;
    case 360u: goto L_08A31F2C;
    case 361u: goto L_08A31F34;
    case 362u: goto L_08A31F3C;
    case 363u: goto L_08A31F60;
    case 364u: goto L_08A31F68;
    case 365u: goto L_08A31F84;
    case 366u: goto L_08A31FAC;
    case 367u: goto L_08A31FB4;
    case 368u: goto L_08A31FD0;
    case 369u: goto L_08A31FF8;
    case 370u: goto L_08A32000;
    case 371u: goto L_08A3201C;
    case 372u: goto L_08A32044;
    case 373u: goto L_08A3204C;
    case 374u: goto L_08A32054;
    case 375u: goto L_08A32060;
    case 376u: goto L_08A3207C;
    case 377u: goto L_08A32084;
    case 378u: goto L_08A3209C;
    case 379u: goto L_08A320A4;
    case 380u: goto L_08A320B4;
    case 381u: goto L_08A320C4;
    case 382u: goto L_08A320D4;
    case 383u: goto L_08A320DC;
    case 384u: goto L_08A320E4;
    case 385u: goto L_08A320F4;
    case 386u: goto L_08A32108;
    case 387u: goto L_08A32114;
    case 388u: goto L_08A32124;
    case 389u: goto L_08A32130;
    case 390u: goto L_08A32150;
    case 391u: goto L_08A32158;
    case 392u: goto L_08A32168;
    case 393u: goto L_08A32174;
    case 394u: goto L_08A3218C;
    case 395u: goto L_08A32194;
    case 396u: goto L_08A321B4;
    case 397u: goto L_08A321CC;
    case 398u: goto L_08A321DC;
    case 399u: goto L_08A32230;
    case 400u: goto L_08A32244;
    case 401u: goto L_08A3224C;
    case 402u: goto L_08A32264;
    case 403u: goto L_08A3226C;
    case 404u: goto L_08A32288;
    case 405u: goto L_08A322AC;
    case 406u: goto L_08A322CC;
    case 407u: goto L_08A322D4;
    case 408u: goto L_08A32300;
    case 409u: goto L_08A32308;
    case 410u: goto L_08A32320;
    case 411u: goto L_08A32328;
    case 412u: goto L_08A32330;
    case 413u: goto L_08A3233C;
    case 414u: goto L_08A32344;
    case 415u: goto L_08A32360;
    case 416u: goto L_08A32378;
    case 417u: goto L_08A32380;
    case 418u: goto L_08A3239C;
    case 419u: goto L_08A323AC;
    case 420u: goto L_08A323B8;
    case 421u: goto L_08A323D8;
    case 422u: goto L_08A323FC;
    case 423u: goto L_08A32404;
    case 424u: goto L_08A32420;
    case 425u: goto L_08A32430;
    case 426u: goto L_08A3243C;
    case 427u: goto L_08A32444;
    case 428u: goto L_08A32458;
    case 429u: goto L_08A3246C;
    case 430u: goto L_08A32474;
    case 431u: goto L_08A3248C;
    case 432u: goto L_08A324C0;
    case 433u: goto L_08A324D0;
    case 434u: goto L_08A324E8;
    case 435u: goto L_08A324EC;
    case 436u: goto L_08A32510;
    case 437u: goto L_08A32518;
    case 438u: goto L_08A32534;
    case 439u: goto L_08A32548;
    case 440u: goto L_08A32564;
    case 441u: goto L_08A32568;
    case 442u: goto L_08A32570;
    case 443u: goto L_08A32588;
    case 444u: goto L_08A32598;
    case 445u: goto L_08A325A4;
    case 446u: goto L_08A325AC;
    case 447u: goto L_08A325B4;
    case 448u: goto L_08A325B8;
    case 449u: goto L_08A325DC;
    case 450u: goto L_08A325E4;
    case 451u: goto L_08A32600;
    case 452u: goto L_08A32614;
    case 453u: goto L_08A32630;
    case 454u: goto L_08A32634;
    case 455u: goto L_08A3263C;
    case 456u: goto L_08A32658;
    case 457u: goto L_08A32668;
    case 458u: goto L_08A326A4;
    case 459u: goto L_08A326C0;
    case 460u: goto L_08A326C8;
    case 461u: goto L_08A326D0;
    case 462u: goto L_08A326E4;
    case 463u: goto L_08A326E8;
    case 464u: goto L_08A32700;
    case 465u: goto L_08A32710;
    case 466u: goto L_08A32718;
    case 467u: goto L_08A32740;
    case 468u: goto L_08A32758;
    case 469u: goto L_08A3276C;
    case 470u: goto L_08A32778;
    case 471u: goto L_08A32794;
    case 472u: goto L_08A3279C;
    case 473u: goto L_08A327B4;
    case 474u: goto L_08A327BC;
    case 475u: goto L_08A327C4;
    case 476u: goto L_08A327EC;
    case 477u: goto L_08A327F4;
    case 478u: goto L_08A32810;
    case 479u: goto L_08A32824;
    case 480u: goto L_08A32840;
    case 481u: goto L_08A32844;
    case 482u: goto L_08A3284C;
    case 483u: goto L_08A32864;
    case 484u: goto L_08A32874;
    case 485u: goto L_08A32884;
    case 486u: goto L_08A32894;
    case 487u: goto L_08A328A8;
    case 488u: goto L_08A328B0;
    case 489u: goto L_08A328D8;
    case 490u: goto L_08A328E0;
    case 491u: goto L_08A328FC;
    case 492u: goto L_08A32910;
    case 493u: goto L_08A3292C;
    case 494u: goto L_08A32930;
    case 495u: goto L_08A32938;
    case 496u: goto L_08A32950;
    case 497u: goto L_08A32958;
    case 498u: goto L_08A32978;
    case 499u: goto L_08A32A00;
    case 500u: goto L_08A32A08;
    case 501u: goto L_08A32A28;
    case 502u: goto L_08A32AA0;
    case 503u: goto L_08A32AA8;
    case 504u: goto L_08A32AC8;
    case 505u: goto L_08A32B0C;
    case 506u: goto L_08A32B14;
    case 507u: goto L_08A32B34;
    case 508u: goto L_08A32B98;
    case 509u: goto L_08A32BA0;
    case 510u: goto L_08A32BA8;
    case 511u: goto L_08A32BB0;
    case 512u: goto L_08A32BB8;
    case 513u: goto L_08A32BD0;
    case 514u: goto L_08A32BE0;
    case 515u: goto L_08A32BF8;
    case 516u: goto L_08A32C00;
    case 517u: goto L_08A32C08;
    case 518u: goto L_08A32C14;
    case 519u: goto L_08A32C1C;
    case 520u: goto L_08A32C24;
    case 521u: goto L_08A32C30;
    case 522u: goto L_08A32C38;
    case 523u: goto L_08A32C40;
    case 524u: goto L_08A32C4C;
    case 525u: goto L_08A32C54;
    case 526u: goto L_08A32C5C;
    case 527u: goto L_08A32C68;
    case 528u: goto L_08A32C70;
    case 529u: goto L_08A32C7C;
    case 530u: goto L_08A32C88;
    case 531u: goto L_08A32C90;
    case 532u: goto L_08A32C98;
    case 533u: goto L_08A32CA4;
    case 534u: goto L_08A32CAC;
    case 535u: goto L_08A32CB4;
    case 536u: goto L_08A32CC0;
    case 537u: goto L_08A32CC8;
    case 538u: goto L_08A32CD0;
    case 539u: goto L_08A32CDC;
    case 540u: goto L_08A32CE4;
    case 541u: goto L_08A32CEC;
    case 542u: goto L_08A32CF8;
    case 543u: goto L_08A32D00;
    case 544u: goto L_08A32D08;
    case 545u: goto L_08A32D14;
    case 546u: goto L_08A32D1C;
    case 547u: goto L_08A32D24;
    case 548u: goto L_08A32D30;
    case 549u: goto L_08A32D38;
    case 550u: goto L_08A32D40;
    case 551u: goto L_08A32D4C;
    case 552u: goto L_08A32D54;
    case 553u: goto L_08A32D5C;
    case 554u: goto L_08A32D68;
    case 555u: goto L_08A32D70;
    case 556u: goto L_08A32D78;
    case 557u: goto L_08A32D84;
    case 558u: goto L_08A32D8C;
    case 559u: goto L_08A32D94;
    case 560u: goto L_08A32DA0;
    case 561u: goto L_08A32DA8;
    case 562u: goto L_08A32DB0;
    case 563u: goto L_08A32DBC;
    case 564u: goto L_08A32DC4;
    case 565u: goto L_08A32DCC;
    case 566u: goto L_08A32DD8;
    case 567u: goto L_08A32DE0;
    case 568u: goto L_08A32DE8;
    case 569u: goto L_08A32DF4;
    case 570u: goto L_08A32DFC;
    case 571u: goto L_08A32E04;
    case 572u: goto L_08A32E10;
    case 573u: goto L_08A32E18;
    case 574u: goto L_08A32E20;
    case 575u: goto L_08A32E2C;
    case 576u: goto L_08A32E34;
    case 577u: goto L_08A32E3C;
    case 578u: goto L_08A32E48;
    case 579u: goto L_08A32E50;
    case 580u: goto L_08A32E58;
    case 581u: goto L_08A32E64;
    case 582u: goto L_08A32E6C;
    case 583u: goto L_08A32E74;
    case 584u: goto L_08A32E80;
    case 585u: goto L_08A32E88;
    case 586u: goto L_08A32E90;
    case 587u: goto L_08A32E9C;
    case 588u: goto L_08A32EA4;
    case 589u: goto L_08A32EAC;
    case 590u: goto L_08A32EB8;
    case 591u: goto L_08A32EC0;
    case 592u: goto L_08A32EC8;
    case 593u: goto L_08A32ED4;
    case 594u: goto L_08A32EDC;
    case 595u: goto L_08A32EE4;
    case 596u: goto L_08A32EF0;
    case 597u: goto L_08A32EF8;
    case 598u: goto L_08A32F00;
    case 599u: goto L_08A32F0C;
    case 600u: goto L_08A32F14;
    case 601u: goto L_08A32F1C;
    case 602u: goto L_08A32F28;
    case 603u: goto L_08A32F30;
    case 604u: goto L_08A32F38;
    case 605u: goto L_08A32F44;
    case 606u: goto L_08A32F4C;
    case 607u: goto L_08A32F54;
    case 608u: goto L_08A32F60;
    case 609u: goto L_08A32F68;
    case 610u: goto L_08A32F70;
    case 611u: goto L_08A32F7C;
    case 612u: goto L_08A32F84;
    case 613u: goto L_08A32F8C;
    case 614u: goto L_08A32F98;
    case 615u: goto L_08A32FA0;
    case 616u: goto L_08A32FA8;
    case 617u: goto L_08A32FB4;
    case 618u: goto L_08A32FBC;
    case 619u: goto L_08A32FC4;
    case 620u: goto L_08A32FD0;
    case 621u: goto L_08A32FD8;
    case 622u: goto L_08A32FE0;
    case 623u: goto L_08A32FEC;
    case 624u: goto L_08A32FF4;
    case 625u: goto L_08A32FFC;
    case 626u: goto L_08A33008;
    case 627u: goto L_08A33010;
    case 628u: goto L_08A33018;
    case 629u: goto L_08A33024;
    case 630u: goto L_08A3302C;
    case 631u: goto L_08A33034;
    case 632u: goto L_08A33040;
    case 633u: goto L_08A33048;
    case 634u: goto L_08A33050;
    case 635u: goto L_08A3305C;
    case 636u: goto L_08A33064;
    case 637u: goto L_08A3306C;
    case 638u: goto L_08A33078;
    case 639u: goto L_08A33080;
    case 640u: goto L_08A33088;
    case 641u: goto L_08A33094;
    case 642u: goto L_08A3309C;
    case 643u: goto L_08A330A4;
    case 644u: goto L_08A330B0;
    case 645u: goto L_08A330B8;
    case 646u: goto L_08A330C0;
    case 647u: goto L_08A330CC;
    case 648u: goto L_08A330D4;
    case 649u: goto L_08A330DC;
    case 650u: goto L_08A330E8;
    case 651u: goto L_08A330F8;
    case 652u: goto L_08A33100;
    case 653u: goto L_08A33110;
    case 654u: goto L_08A33118;
    case 655u: goto L_08A33134;
    case 656u: goto L_08A33144;
    case 657u: goto L_08A3314C;
    case 658u: goto L_08A33154;
    case 659u: goto L_08A3315C;
    case 660u: goto L_08A33168;
    case 661u: goto L_08A33194;
    case 662u: goto L_08A331BC;
    case 663u: goto L_08A33218;
    case 664u: goto L_08A33220;
    case 665u: goto L_08A33248;
    case 666u: goto L_08A3324C;
    case 667u: goto L_08A33288;
    case 668u: goto L_08A332A4;
    case 669u: goto L_08A332B0;
    case 670u: goto L_08A332B8;
    case 671u: goto L_08A332D0;
    case 672u: goto L_08A332E0;
    case 673u: goto L_08A332F4;
    case 674u: goto L_08A33304;
    case 675u: goto L_08A33308;
    case 676u: goto L_08A3332C;
    case 677u: goto L_08A33334;
    case 678u: goto L_08A33350;
    case 679u: goto L_08A33364;
    case 680u: goto L_08A33380;
    case 681u: goto L_08A33384;
    case 682u: goto L_08A3338C;
    case 683u: goto L_08A333A4;
    case 684u: goto L_08A333B4;
    case 685u: goto L_08A333C8;
    case 686u: goto L_08A333D8;
    case 687u: goto L_08A333DC;
    case 688u: goto L_08A33400;
    case 689u: goto L_08A33408;
    case 690u: goto L_08A33424;
    case 691u: goto L_08A33438;
    case 692u: goto L_08A33454;
    case 693u: goto L_08A33458;
    case 694u: goto L_08A33460;
    case 695u: goto L_08A33478;
    case 696u: goto L_08A33488;
    case 697u: goto L_08A3349C;
    case 698u: goto L_08A334AC;
    case 699u: goto L_08A334B0;
    case 700u: goto L_08A334D4;
    case 701u: goto L_08A334DC;
    case 702u: goto L_08A334F8;
    case 703u: goto L_08A3350C;
    case 704u: goto L_08A33528;
    case 705u: goto L_08A3352C;
    case 706u: goto L_08A33534;
    case 707u: goto L_08A3354C;
    case 708u: goto L_08A3355C;
    case 709u: goto L_08A33570;
    case 710u: goto L_08A33580;
    case 711u: goto L_08A33584;
    case 712u: goto L_08A335A8;
    case 713u: goto L_08A335B0;
    case 714u: goto L_08A335CC;
    case 715u: goto L_08A335E0;
    case 716u: goto L_08A335FC;
    case 717u: goto L_08A33600;
    case 718u: goto L_08A33608;
    case 719u: goto L_08A33610;
    case 720u: goto L_08A3361C;
    case 721u: goto L_08A33624;
    case 722u: goto L_08A3362C;
    case 723u: goto L_08A33638;
    case 724u: goto L_08A33654;
    case 725u: goto L_08A3365C;
    case 726u: goto L_08A33678;
    case 727u: goto L_08A3368C;
    case 728u: goto L_08A336A8;
    case 729u: goto L_08A336AC;
    case 730u: goto L_08A336B4;
    case 731u: goto L_08A336BC;
    case 732u: goto L_08A336D8;
    case 733u: goto L_08A336E8;
    case 734u: goto L_08A3371C;
    case 735u: goto L_08A33734;
    case 736u: goto L_08A33748;
    case 737u: goto L_08A33760;
    case 738u: goto L_08A3376C;
    case 739u: goto L_08A33778;
    case 740u: goto L_08A337C0;
    case 741u: goto L_08A337CC;
    case 742u: goto L_08A337D0;
    case 743u: goto L_08A33830;
    case 744u: goto L_08A33838;
    case 745u: goto L_08A33850;
    case 746u: goto L_08A33894;
    case 747u: goto L_08A338AC;
    case 748u: goto L_08A338BC;
    case 749u: goto L_08A338C4;
    case 750u: goto L_08A338CC;
    case 751u: goto L_08A338D4;
    case 752u: goto L_08A3390C;
    case 753u: goto L_08A33914;
    case 754u: goto L_08A3392C;
    case 755u: goto L_08A3393C;
    case 756u: goto L_08A3394C;
    case 757u: goto L_08A33950;
    case 758u: goto L_08A33974;
    case 759u: goto L_08A3397C;
    case 760u: goto L_08A33998;
    case 761u: goto L_08A339AC;
    case 762u: goto L_08A339C8;
    case 763u: goto L_08A339CC;
    case 764u: goto L_08A339D4;
    case 765u: goto L_08A339EC;
    case 766u: goto L_08A339FC;
    case 767u: goto L_08A33A0C;
    case 768u: goto L_08A33A10;
    case 769u: goto L_08A33A34;
    case 770u: goto L_08A33A3C;
    case 771u: goto L_08A33A58;
    case 772u: goto L_08A33A6C;
    case 773u: goto L_08A33A88;
    case 774u: goto L_08A33A8C;
    case 775u: goto L_08A33A94;
    case 776u: goto L_08A33AB0;
    case 777u: goto L_08A33AC0;
    case 778u: goto L_08A33AF4;
    case 779u: goto L_08A33B10;
    case 780u: goto L_08A33B20;
    case 781u: goto L_08A33B34;
    case 782u: goto L_08A33B54;
    case 783u: goto L_08A33B98;
    case 784u: goto L_08A33BB0;
    case 785u: goto L_08A33BB8;
    case 786u: goto L_08A33BD8;
    case 787u: goto L_08A33C0C;
    case 788u: goto L_08A33C18;
    case 789u: goto L_08A33C20;
    case 790u: goto L_08A33C40;
    case 791u: goto L_08A33C90;
    case 792u: goto L_08A33CB8;
    case 793u: goto L_08A33CD8;
    case 794u: goto L_08A33CFC;
    case 795u: goto L_08A33D00;
    case 796u: goto L_08A33D08;
    case 797u: goto L_08A33D20;
    case 798u: goto L_08A33D28;
    case 799u: goto L_08A33D40;
    case 800u: goto L_08A33D50;
    case 801u: goto L_08A33D58;
    case 802u: goto L_08A33D5C;
    case 803u: goto L_08A33D80;
    case 804u: goto L_08A33D88;
    case 805u: goto L_08A33DA4;
    case 806u: goto L_08A33DB8;
    case 807u: goto L_08A33DD4;
    case 808u: goto L_08A33DD8;
    case 809u: goto L_08A33DE0;
    case 810u: goto L_08A33DE8;
    case 811u: goto L_08A33DF0;
    case 812u: goto L_08A33E08;
    case 813u: goto L_08A33E24;
    case 814u: goto L_08A33E3C;
    case 815u: goto L_08A33E54;
    case 816u: goto L_08A33E70;
    case 817u: goto L_08A33E98;
    case 818u: goto L_08A33EA0;
    case 819u: goto L_08A33EA8;
    case 820u: goto L_08A33EB4;
    case 821u: goto L_08A33ED0;
    case 822u: goto L_08A33ED8;
    case 823u: goto L_08A33EF0;
    case 824u: goto L_08A33EF8;
    case 825u: goto L_08A33F08;
    case 826u: goto L_08A33F1C;
    case 827u: goto L_08A33F28;
    case 828u: goto L_08A33F40;
    case 829u: goto L_08A33F48;
    case 830u: goto L_08A33F68;
    case 831u: goto L_08A33F80;
    case 832u: goto L_08A33F90;
    case 833u: goto L_08A33FE4;
    case 834u: goto L_08A33FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A30000:
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] + ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.fpr[18] = ctx.fpr[17] / ctx.fpr[13];
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[14];
    ctx.fpr[18] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[18]));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[13];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[22] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[18] = ctx.fpr[19] / ctx.fpr[13];
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[14];
    ctx.fpr[18] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[18]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = ctx.fpr[17] + ctx.fpr[19];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[15] / ctx.fpr[13];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[30] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A30244;
      }
      goto L_08A300A0;
    }
L_08A300A0:
    ctx.gpr[4] = (ctx.gpr[21] << 5u);
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A300B4;
L_08A300B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A30228;
      }
      goto L_08A300C8;
    }
L_08A300C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[19] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[19] = (ctx.gpr[4] - ctx.gpr[19]);
    goto L_08A300E0;
L_08A300E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[18];
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
      if (branch_taken) {
          goto L_08A30174;
      }
      goto L_08A300FC;
    }
L_08A300FC:
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A30174;
      }
      goto L_08A30104;
    }
L_08A30104:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A301DC;
      }
      goto L_08A30114;
    }
L_08A30114:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A30144;
      }
      goto L_08A30120;
    }
L_08A30120:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A30150;
      }
      goto L_08A30128;
    }
L_08A30128:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A3015C;
      }
      goto L_08A30130;
    }
L_08A30130:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A30168;
      }
      goto L_08A30138;
    }
L_08A30138:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A301DC;
      }
      goto L_08A30144;
    }
L_08A30144:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A301DC;
      }
      goto L_08A30150;
    }
L_08A30150:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A301DC;
      }
      goto L_08A3015C;
    }
L_08A3015C:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A301DC;
      }
      goto L_08A30168;
    }
L_08A30168:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A301DC;
      }
      goto L_08A30174;
    }
L_08A30174:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A301DC;
      }
      goto L_08A30184;
    }
L_08A30184:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A301B4;
      }
      goto L_08A30190;
    }
L_08A30190:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A301C0;
      }
      goto L_08A30198;
    }
L_08A30198:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A301CC;
      }
      goto L_08A301A0;
    }
L_08A301A0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A301D8;
      }
      goto L_08A301A8;
    }
L_08A301A8:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A301DC;
      }
      goto L_08A301B4;
    }
L_08A301B4:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A301DC;
      }
      goto L_08A301C0;
    }
L_08A301C0:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A301DC;
      }
      goto L_08A301CC;
    }
L_08A301CC:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A301DC;
      }
      goto L_08A301D8;
    }
L_08A301D8:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    goto L_08A301DC;
L_08A301DC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08A301E8u);
    ctx.gpr[4] = (0u | 12u);
    goto L_08A312A8;
L_08A301E8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A301FC;
      }
      goto L_08A301F4;
    }
L_08A301F4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A301FC;
L_08A301FC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A30214;
      }
      goto L_08A3020C;
    }
L_08A3020C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    goto L_08A30214;
L_08A30214:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_08A300E0;
      }
      goto L_08A30228;
    }
L_08A30228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A300B4;
      }
      goto L_08A30244;
    }
L_08A30244:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A30274:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A302C0u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A302C0u) goto L_08A302C0;
    return;
L_08A302C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] + ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.fpr[18] = ctx.fpr[17] / ctx.fpr[13];
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[14];
    ctx.fpr[18] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[18]));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[13];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[22] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[18] = ctx.fpr[19] / ctx.fpr[13];
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[14];
    ctx.fpr[18] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[18]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = ctx.fpr[17] + ctx.fpr[19];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[15] / ctx.fpr[13];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[30] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A30588;
      }
      goto L_08A303A0;
    }
L_08A303A0:
    ctx.gpr[4] = (ctx.gpr[21] << 5u);
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A303B4;
L_08A303B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3056C;
      }
      goto L_08A303C8;
    }
L_08A303C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[20] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[20] = (ctx.gpr[4] - ctx.gpr[20]);
    goto L_08A303E0;
L_08A303E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[19];
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
      if (branch_taken) {
          goto L_08A30474;
      }
      goto L_08A303FC;
    }
L_08A303FC:
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A30474;
      }
      goto L_08A30404;
    }
L_08A30404:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A304DC;
      }
      goto L_08A30414;
    }
L_08A30414:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A30444;
      }
      goto L_08A30420;
    }
L_08A30420:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A30450;
      }
      goto L_08A30428;
    }
L_08A30428:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A3045C;
      }
      goto L_08A30430;
    }
L_08A30430:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A30468;
      }
      goto L_08A30438;
    }
L_08A30438:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A304DC;
      }
      goto L_08A30444;
    }
L_08A30444:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A304DC;
      }
      goto L_08A30450;
    }
L_08A30450:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A304DC;
      }
      goto L_08A3045C;
    }
L_08A3045C:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A304DC;
      }
      goto L_08A30468;
    }
L_08A30468:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A304DC;
      }
      goto L_08A30474;
    }
L_08A30474:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A304DC;
      }
      goto L_08A30484;
    }
L_08A30484:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A304B4;
      }
      goto L_08A30490;
    }
L_08A30490:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A304C0;
      }
      goto L_08A30498;
    }
L_08A30498:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A304CC;
      }
      goto L_08A304A0;
    }
L_08A304A0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A304D8;
      }
      goto L_08A304A8;
    }
L_08A304A8:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A304DC;
      }
      goto L_08A304B4;
    }
L_08A304B4:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A304DC;
      }
      goto L_08A304C0;
    }
L_08A304C0:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A304DC;
      }
      goto L_08A304CC;
    }
L_08A304CC:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A304DC;
      }
      goto L_08A304D8;
    }
L_08A304D8:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    goto L_08A304DC;
L_08A304DC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3055C;
      }
      goto L_08A304E8;
    }
L_08A304E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A30550;
      }
      goto L_08A304F4;
    }
L_08A304F4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A30514;
      }
      goto L_08A3050C;
    }
L_08A3050C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_08A30514;
L_08A30514:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30528;
      }
      goto L_08A30520;
    }
L_08A30520:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_08A30528;
L_08A30528:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30538;
      }
      goto L_08A30530;
    }
L_08A30530:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08A30538;
L_08A30538:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30548;
      }
      goto L_08A30540;
    }
L_08A30540:
    ctx.gpr[31] = (0x08A30548u);
    // nop
    goto L_08A312C8;
L_08A30548:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30554;
      }
      goto L_08A30550;
    }
L_08A30550:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A30554;
L_08A30554:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A304E8;
      }
      goto L_08A3055C;
    }
L_08A3055C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_08A303E0;
      }
      goto L_08A3056C;
    }
L_08A3056C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A303B4;
      }
      goto L_08A30588;
    }
L_08A30588:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A305B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A305D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 41u, 0x08A28764u>(ctx, &aot_mem) && ctx.pc == 0x08A305D0u) goto L_08A305D0;
    return;
L_08A305D0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14964));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-15));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1025));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[8]);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-8193));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[9]);
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[10]);
    ctx.gpr[11] = (65535u << 16u);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(32767));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[11]);
    ctx.gpr[2] = (65535u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[2]);
    ctx.gpr[3] = (65534u << 16u);
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[3]);
    ctx.gpr[12] = (65532u << 16u);
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[12]);
    ctx.gpr[13] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[13]);
    ctx.gpr[13] = (65520u << 16u);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    ctx.gpr[13] = (65504u << 16u);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    ctx.gpr[13] = (65472u << 16u);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    ctx.gpr[13] = (65408u << 16u);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    ctx.gpr[13] = (65280u << 16u);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    ctx.gpr[13] = (65024u << 16u);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    ctx.gpr[13] = (64512u << 16u);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    ctx.gpr[13] = (63488u << 16u);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    ctx.gpr[13] = (61440u << 16u);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    ctx.gpr[13] = (57344u << 16u);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    ctx.gpr[13] = (49152u << 16u);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    ctx.gpr[13] = (32768u << 16u);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[13] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    ctx.gpr[13] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    ctx.gpr[13] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    ctx.gpr[13] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    ctx.gpr[13] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    ctx.gpr[13] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    ctx.gpr[13] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    ctx.gpr[13] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    ctx.gpr[13] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[11]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[2]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[3]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[12]);
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A30790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A30790u) goto L_08A30790;
    return;
L_08A30790:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(86), static_cast<std::uint16_t>(ctx.gpr[2]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), 0u);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A307AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-480));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A307FC;
      }
      goto L_08A307E8;
    }
L_08A307E8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A307FC;
L_08A307FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30810;
      }
      goto L_08A30808;
    }
L_08A30808:
    ctx.gpr[31] = (0x08A30810u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 352u, 0x089FA480u>(ctx, &aot_mem) && ctx.pc == 0x08A30810u) goto L_08A30810;
    return;
L_08A30810:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3084C;
      }
      goto L_08A30820;
    }
L_08A30820:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A30854;
      }
      goto L_08A30838;
    }
L_08A30838:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A3086C;
      }
      goto L_08A30844;
    }
L_08A30844:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31118;
      }
      goto L_08A3084C;
    }
L_08A3084C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31118;
      }
      goto L_08A30854;
    }
L_08A30854:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A308E4;
      }
      goto L_08A3085C;
    }
L_08A3085C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A30E98;
      }
      goto L_08A30864;
    }
L_08A30864:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31118;
      }
      goto L_08A3086C;
    }
L_08A3086C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A308DC;
      }
      goto L_08A30880;
    }
L_08A30880:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3544)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3544)));
        goto L_08A308D0;
    }
    goto L_08A308D0;
L_08A308D0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3544), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A308DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 848u, 0x08A2FC2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A308DCu) goto L_08A308DC;
    return;
L_08A308DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31118;
      }
      goto L_08A308E4;
    }
L_08A308E4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A3091C;
      }
      goto L_08A308FC;
    }
L_08A308FC:
    ctx.gpr[31] = (0x08A30904u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 198u, 0x08A81E8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A30904u) goto L_08A30904;
    return;
L_08A30904:
    ctx.gpr[31] = (0x08A3090Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3090Cu) goto L_08A3090C;
    return;
L_08A3090C:
    ctx.gpr[31] = (0x08A30914u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F788u>(ctx, &aot_mem) && ctx.pc == 0x08A30914u) goto L_08A30914;
    return;
L_08A30914:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30E98;
      }
      goto L_08A3091C;
    }
L_08A3091C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(122)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A30950;
      }
      goto L_08A30930;
    }
L_08A30930:
    ctx.gpr[31] = (0x08A30938u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 182u, 0x08A8197Cu>(ctx, &aot_mem) && ctx.pc == 0x08A30938u) goto L_08A30938;
    return;
L_08A30938:
    ctx.gpr[31] = (0x08A30940u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x08A30940u) goto L_08A30940;
    return;
L_08A30940:
    ctx.gpr[31] = (0x08A30948u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F788u>(ctx, &aot_mem) && ctx.pc == 0x08A30948u) goto L_08A30948;
    return;
L_08A30948:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30E98;
      }
      goto L_08A30950;
    }
L_08A30950:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A3098C;
      }
      goto L_08A30964;
    }
L_08A30964:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(206)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A3098C;
      }
      goto L_08A30978;
    }
L_08A30978:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(218)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A309BC;
      }
      goto L_08A3098C;
    }
L_08A3098C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30E98;
      }
      goto L_08A3099C;
    }
L_08A3099C:
    ctx.gpr[31] = (0x08A309A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 190u, 0x08A81C10u>(ctx, &aot_mem) && ctx.pc == 0x08A309A4u) goto L_08A309A4;
    return;
L_08A309A4:
    ctx.gpr[31] = (0x08A309ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x08A309ACu) goto L_08A309AC;
    return;
L_08A309AC:
    ctx.gpr[31] = (0x08A309B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F788u>(ctx, &aot_mem) && ctx.pc == 0x08A309B4u) goto L_08A309B4;
    return;
L_08A309B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30E98;
      }
      goto L_08A309BC;
    }
L_08A309BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 273u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A30B94;
      }
      goto L_08A309CC;
    }
L_08A309CC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08A309E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A309E4u) goto L_08A309E4;
    return;
L_08A309E4:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15744u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27924)));
    ctx.gpr[4] = (16640u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (49408u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[4] = (17184u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x08A30AA0u);
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 149u, 0x0892930Cu>(ctx, &aot_mem) && ctx.pc == 0x08A30AA0u) goto L_08A30AA0;
    return;
L_08A30AA0:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08A30AF8u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 333u, 0x08AE5D44u>(ctx, &aot_mem) && ctx.pc == 0x08A30AF8u) goto L_08A30AF8;
    return;
L_08A30AF8:
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (17244u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (17214u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[4] = (16576u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-16636)));
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A30B8Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 35u, 0x089FC928u>(ctx, &aot_mem) && ctx.pc == 0x08A30B8Cu) goto L_08A30B8C;
    return;
L_08A30B8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30E98;
      }
      goto L_08A30B94;
    }
L_08A30B94:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A30BBC;
      }
      goto L_08A30BA8;
    }
L_08A30BA8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A30BBC;
L_08A30BBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (0u | 1u);
    if (ctx.gpr[4] == ctx.gpr[7]) {
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(54)));
        goto L_08A30BE4;
    }
    goto L_08A30BCC;
L_08A30BCC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (0u | 3u);
    if (ctx.gpr[4] == ctx.gpr[7]) {
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(54)));
        goto L_08A30BE4;
    }
    goto L_08A30BDC;
L_08A30BDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A30C08;
      }
      goto L_08A30BE4;
    }
L_08A30BE4:
    ctx.gpr[7] = (ctx.gpr[7] & 8192u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A30C00;
      }
      goto L_08A30BF0;
    }
L_08A30BF0:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(54)));
    ctx.gpr[5] = (ctx.gpr[5] & 16384u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A30C08;
      }
      goto L_08A30C00;
    }
L_08A30C00:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A30C08;
L_08A30C08:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30C20;
      }
      goto L_08A30C10;
    }
L_08A30C10:
    ctx.gpr[31] = (0x08A30C18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 874u, 0x08A2FEF4u>(ctx, &aot_mem) && ctx.pc == 0x08A30C18u) goto L_08A30C18;
    return;
L_08A30C18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30E98;
      }
      goto L_08A30C20;
    }
L_08A30C20:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30C50;
      }
      goto L_08A30C30;
    }
L_08A30C30:
    ctx.gpr[31] = (0x08A30C38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 268u, 0x08A852C8u>(ctx, &aot_mem) && ctx.pc == 0x08A30C38u) goto L_08A30C38;
    return;
L_08A30C38:
    ctx.gpr[31] = (0x08A30C40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x08A30C40u) goto L_08A30C40;
    return;
L_08A30C40:
    ctx.gpr[31] = (0x08A30C48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F788u>(ctx, &aot_mem) && ctx.pc == 0x08A30C48u) goto L_08A30C48;
    return;
L_08A30C48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30E98;
      }
      goto L_08A30C50;
    }
L_08A30C50:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 270u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A30D0C;
      }
      goto L_08A30C60;
    }
L_08A30C60:
    ctx.gpr[4] = (15759u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 100u);
    ctx.gpr[6] = (0u | 100u);
    ctx.gpr[31] = (0x08A30D04u);
    ctx.gpr[7] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 138u, 0x08824D68u>(ctx, &aot_mem) && ctx.pc == 0x08A30D04u) goto L_08A30D04;
    return;
L_08A30D04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30E98;
      }
      goto L_08A30D0C;
    }
L_08A30D0C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 272u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A30DC8;
      }
      goto L_08A30D1C;
    }
L_08A30D1C:
    ctx.gpr[4] = (15759u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 100u);
    ctx.gpr[31] = (0x08A30DC0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 138u, 0x08824D68u>(ctx, &aot_mem) && ctx.pc == 0x08A30DC0u) goto L_08A30DC0;
    return;
L_08A30DC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30E98;
      }
      goto L_08A30DC8;
    }
L_08A30DC8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(440)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A30E98;
      }
      goto L_08A30DDC;
    }
L_08A30DDC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A30E98;
      }
      goto L_08A30E2C;
    }
L_08A30E2C:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27908)));
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22912)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(11140))))));
    ctx.gpr[8] = (ctx.gpr[7] & 255u);
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    ctx.gpr[10] = (ctx.gpr[8] | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x08A30E98u);
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 149u, 0x0892930Cu>(ctx, &aot_mem) && ctx.pc == 0x08A30E98u) goto L_08A30E98;
    return;
L_08A30E98:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A30EFC;
      }
      goto L_08A30EB0;
    }
L_08A30EB0:
    ctx.gpr[31] = (0x08A30EB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 477u, 0x0886621Cu>(ctx, &aot_mem) && ctx.pc == 0x08A30EB8u) goto L_08A30EB8;
    return;
L_08A30EB8:
    ctx.gpr[4] = (16445u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16253u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15894u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 34603u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A30EF4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 202u, 0x08929A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A30EF4u) goto L_08A30EF4;
    return;
L_08A30EF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31118;
      }
      goto L_08A30EFC;
    }
L_08A30EFC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(10)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A30F20;
      }
      goto L_08A30F10;
    }
L_08A30F10:
    ctx.gpr[31] = (0x08A30F18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 477u, 0x0886621Cu>(ctx, &aot_mem) && ctx.pc == 0x08A30F18u) goto L_08A30F18;
    return;
L_08A30F18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31118;
      }
      goto L_08A30F20;
    }
L_08A30F20:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A30F80;
      }
      goto L_08A30F34;
    }
L_08A30F34:
    ctx.gpr[31] = (0x08A30F3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 477u, 0x0886621Cu>(ctx, &aot_mem) && ctx.pc == 0x08A30F3Cu) goto L_08A30F3C;
    return;
L_08A30F3C:
    ctx.gpr[4] = (16538u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13631u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16296u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20972u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A30F78u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 202u, 0x08929A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A30F78u) goto L_08A30F78;
    return;
L_08A30F78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31118;
      }
      goto L_08A30F80;
    }
L_08A30F80:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(14)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A30FD8;
      }
      goto L_08A30F94;
    }
L_08A30F94:
    ctx.gpr[31] = (0x08A30F9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 477u, 0x0886621Cu>(ctx, &aot_mem) && ctx.pc == 0x08A30F9Cu) goto L_08A30F9C;
    return;
L_08A30F9C:
    ctx.gpr[4] = (16624u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 6291u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A30FD0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 202u, 0x08929A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A30FD0u) goto L_08A30FD0;
    return;
L_08A30FD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31118;
      }
      goto L_08A30FD8;
    }
L_08A30FD8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A31028;
      }
      goto L_08A30FEC;
    }
L_08A30FEC:
    ctx.gpr[4] = (16190u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 30409u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A31020u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 202u, 0x08929A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31020u) goto L_08A31020;
    return;
L_08A31020:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31118;
      }
      goto L_08A31028;
    }
L_08A31028:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(18)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A31078;
      }
      goto L_08A3103C;
    }
L_08A3103C:
    ctx.gpr[4] = (15664u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8389u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A31070u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 202u, 0x08929A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31070u) goto L_08A31070;
    return;
L_08A31070:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31118;
      }
      goto L_08A31078;
    }
L_08A31078:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A310D0;
      }
      goto L_08A3108C;
    }
L_08A3108C:
    ctx.gpr[4] = (16274u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 19923u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15892u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 31457u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A310C8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 202u, 0x08929A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A310C8u) goto L_08A310C8;
    return;
L_08A310C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31118;
      }
      goto L_08A310D0;
    }
L_08A310D0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A31118;
      }
      goto L_08A310E4;
    }
L_08A310E4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (48452u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39846u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A31118u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 202u, 0x08929A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31118u) goto L_08A31118;
    return;
L_08A31118:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3113C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10836)));
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-10832), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10840)));
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-10828), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-10824), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-10820), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14571u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-10816), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10812)));
    ctx.gpr[4] = (15744u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-10808), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10804)));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-10796), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10800)));
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-10792), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-10788), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16268u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2229u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-10784), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A31220:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A31294;
      }
      goto L_08A3123C;
    }
L_08A3123C:
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A31258;
      }
      goto L_08A31250;
    }
L_08A31250:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    goto L_08A31258;
L_08A31258:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3126C;
      }
      goto L_08A31264;
    }
L_08A31264:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    goto L_08A3126C;
L_08A3126C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3127C;
      }
      goto L_08A31274;
    }
L_08A31274:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08A3127C;
L_08A3127C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3128C;
      }
      goto L_08A31284;
    }
L_08A31284:
    ctx.gpr[31] = (0x08A3128Cu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_08A312C8;
L_08A3128C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3123C;
      }
      goto L_08A31294;
    }
L_08A31294:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A312A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A312BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15052)));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 532u, 0x08B06530u>(ctx, &aot_mem) && ctx.pc == 0x08A312BCu) goto L_08A312BC;
    return;
L_08A312BC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A312C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A312E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15052)));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 540u, 0x08B065F0u>(ctx, &aot_mem) && ctx.pc == 0x08A312E0u) goto L_08A312E0;
    return;
L_08A312E0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A312EC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10708)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-10712)));
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[9] = (2229u << 16u);
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[6] = (16672u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    ctx.gpr[11] = (2229u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-10704), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-10696), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-10700), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-10692), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-10688), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A31364:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-528));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1405));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(92) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 28u, 0x08A341B0u>(ctx, &aot_mem); return;
      }
      goto L_08A313A4;
    }
L_08A313A4:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1405));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(4792)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A313C0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A313D8u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A313D8u) goto L_08A313D8;
    return;
L_08A313D8:
    ctx.gpr[31] = (0x08A313E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 118u, 0x088449E8u>(ctx, &aot_mem) && ctx.pc == 0x08A313E0u) goto L_08A313E0;
    return;
L_08A313E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A313E8;
    }
L_08A313E8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A31400u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A31400u) goto L_08A31400;
    return;
L_08A31400:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A31410u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08A31410u) goto L_08A31410;
    return;
L_08A31410:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31510;
      }
      goto L_08A3141C;
    }
L_08A3141C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A31510;
      }
      goto L_08A3142C;
    }
L_08A3142C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A31510;
      }
      goto L_08A3143C;
    }
L_08A3143C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), 0u);
    ctx.gpr[31] = (0x08A31448u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A24D8u>(ctx, &aot_mem) && ctx.pc == 0x08A31448u) goto L_08A31448;
    return;
L_08A31448:
    ctx.gpr[31] = (0x08A31450u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 320u, 0x08865768u>(ctx, &aot_mem) && ctx.pc == 0x08A31450u) goto L_08A31450;
    return;
L_08A31450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A31490;
      }
      goto L_08A31460;
    }
L_08A31460:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31488;
      }
      goto L_08A3146C;
    }
L_08A3146C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_08A31488;
    }
    goto L_08A31478;
L_08A31478:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x08A31484u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x08A31484u) goto L_08A31484;
    return;
L_08A31484:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_08A31488;
L_08A31488:
    ctx.gpr[31] = (0x08A31490u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31490u) goto L_08A31490;
    return;
L_08A31490:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A314A4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x08A314A4u) goto L_08A314A4;
    return;
L_08A314A4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), 0u);
    ctx.gpr[31] = (0x08A314B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 53u, 0x089A03F8u>(ctx, &aot_mem) && ctx.pc == 0x08A314B0u) goto L_08A314B0;
    return;
L_08A314B0:
    ctx.gpr[31] = (0x08A314B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 84u, 0x089A0660u>(ctx, &aot_mem) && ctx.pc == 0x08A314B8u) goto L_08A314B8;
    return;
L_08A314B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A314D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x08A314D0u) goto L_08A314D0;
    return;
L_08A314D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A314E4;
      }
      goto L_08A314D8;
    }
L_08A314D8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2932), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A314EC;
      }
      goto L_08A314E4;
    }
L_08A314E4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(856), ctx.gpr[4]);
    goto L_08A314EC;
L_08A314EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.gpr[31] = (0x08A314FCu);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A314FCu) goto L_08A314FC;
    return;
L_08A314FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (61440u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_08A31510;
L_08A31510:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A31518;
    }
L_08A31518:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A31534u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A31534u) goto L_08A31534;
    return;
L_08A31534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (2275u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11856));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A31560;
    }
L_08A31560:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A315A4;
      }
      goto L_08A315A0;
    }
L_08A315A0:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A315A4;
L_08A315A4:
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
          goto L_08A315D0;
      }
      goto L_08A315C8;
    }
L_08A315C8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A31620;
      }
      goto L_08A315D0;
    }
L_08A315D0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A31600;
    }
    goto L_08A315EC;
L_08A315EC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A31620;
      }
      goto L_08A31600;
    }
L_08A31600:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31620;
      }
      goto L_08A3161C;
    }
L_08A3161C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A31620;
L_08A31620:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A31628;
    }
L_08A31628:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A31640u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A31640u) goto L_08A31640;
    return;
L_08A31640:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31658;
      }
      goto L_08A3164C;
    }
L_08A3164C:
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7248), 0u);
      if (branch_taken) {
          goto L_08A31664;
      }
      goto L_08A31658;
    }
L_08A31658:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7248), ctx.gpr[4]);
    goto L_08A31664;
L_08A31664:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A3166C;
    }
L_08A3166C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A31684u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A31684u) goto L_08A31684;
    return;
L_08A31684:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(25));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[31] = (0x08A3169Cu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 142u, 0x08864A30u>(ctx, &aot_mem) && ctx.pc == 0x08A3169Cu) goto L_08A3169C;
    return;
L_08A3169C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A316A4;
    }
L_08A316A4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A316BCu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A316BCu) goto L_08A316BC;
    return;
L_08A316BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A316D8;
      }
      goto L_08A316C8;
    }
L_08A316C8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6536), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A316E0;
      }
      goto L_08A316D8;
    }
L_08A316D8:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6536), static_cast<std::uint8_t>(0u));
    goto L_08A316E0;
L_08A316E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A316E8;
    }
L_08A316E8:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A31704u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A31704u) goto L_08A31704;
    return;
L_08A31704:
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
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3216)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3216), 0u);
    ctx.gpr[31] = (0x08A3174Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A3174Cu) goto L_08A3174C;
    return;
L_08A3174C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A31754;
    }
L_08A31754:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A31770u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A31770u) goto L_08A31770;
    return;
L_08A31770:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A31780u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08A31780u) goto L_08A31780;
    return;
L_08A31780:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A31794u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08A31794u) goto L_08A31794;
    return;
L_08A31794:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A31890;
      }
      goto L_08A317A4;
    }
L_08A317A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A31890;
      }
      goto L_08A317B4;
    }
L_08A317B4:
    ctx.gpr[4] = (17352u << 16u);
    ctx.gpr[31] = (0x08A317C0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A295CCu>(ctx, &aot_mem) && ctx.pc == 0x08A317C0u) goto L_08A317C0;
    return;
L_08A317C0:
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A317D0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 700u, 0x08A2B3B0u>(ctx, &aot_mem) && ctx.pc == 0x08A317D0u) goto L_08A317D0;
    return;
L_08A317D0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31890;
      }
      goto L_08A317DC;
    }
L_08A317DC:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A317F0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 678u, 0x08A2B0E4u>(ctx, &aot_mem) && ctx.pc == 0x08A317F0u) goto L_08A317F0;
    return;
L_08A317F0:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A31890;
      }
      goto L_08A31828;
    }
L_08A31828:
    ctx.gpr[31] = (0x08A31830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A295CCu>(ctx, &aot_mem) && ctx.pc == 0x08A31830u) goto L_08A31830;
    return;
L_08A31830:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3183Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 650u, 0x08A2AFB0u>(ctx, &aot_mem) && ctx.pc == 0x08A3183Cu) goto L_08A3183C;
    return;
L_08A3183C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31890;
      }
      goto L_08A31844;
    }
L_08A31844:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A31858u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 682u, 0x08A2B1B8u>(ctx, &aot_mem) && ctx.pc == 0x08A31858u) goto L_08A31858;
    return;
L_08A31858:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31890;
      }
      goto L_08A31860;
    }
L_08A31860:
    ctx.gpr[31] = (0x08A31868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A295CCu>(ctx, &aot_mem) && ctx.pc == 0x08A31868u) goto L_08A31868;
    return;
L_08A31868:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3187Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 484u, 0x08A2A7ACu>(ctx, &aot_mem) && ctx.pc == 0x08A3187Cu) goto L_08A3187C;
    return;
L_08A3187C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31890;
      }
      goto L_08A31884;
    }
L_08A31884:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    goto L_08A31890;
L_08A31890:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A318A0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A318A0u) goto L_08A318A0;
    return;
L_08A318A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A318A8;
    }
L_08A318A8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A318C0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A318C0u) goto L_08A318C0;
    return;
L_08A318C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A318E0;
      }
      goto L_08A318CC;
    }
L_08A318CC:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6803), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6804), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A318F4;
      }
      goto L_08A318E0;
    }
L_08A318E0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6803), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6804), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A318F4;
L_08A318F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A318FC;
    }
L_08A318FC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A31918u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A31918u) goto L_08A31918;
    return;
L_08A31918:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[31] = (0x08A31924u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 113u, 0x08844984u>(ctx, &aot_mem) && ctx.pc == 0x08A31924u) goto L_08A31924;
    return;
L_08A31924:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A3192C;
    }
L_08A3192C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A31944u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A31944u) goto L_08A31944;
    return;
L_08A31944:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A31988u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x08A31988u) goto L_08A31988;
    return;
L_08A31988:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10612)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10616)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08A319B4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x08A319B4u) goto L_08A319B4;
    return;
L_08A319B4:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A319C4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 295u, 0x089D61ECu>(ctx, &aot_mem) && ctx.pc == 0x08A319C4u) goto L_08A319C4;
    return;
L_08A319C4:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08A319DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13820)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 302u, 0x08871C60u>(ctx, &aot_mem) && ctx.pc == 0x08A319DCu) goto L_08A319DC;
    return;
L_08A319DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A31A04;
      }
      goto L_08A319F4;
    }
L_08A319F4:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A31A04;
      }
      goto L_08A319FC;
    }
L_08A319FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A31A08;
      }
      goto L_08A31A04;
    }
L_08A31A04:
    ctx.gpr[4] = (0u | 0u);
    goto L_08A31A08;
L_08A31A08:
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
          goto L_08A31A34;
      }
      goto L_08A31A2C;
    }
L_08A31A2C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A31A84;
      }
      goto L_08A31A34;
    }
L_08A31A34:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A31A64;
    }
    goto L_08A31A50;
L_08A31A50:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A31A84;
      }
      goto L_08A31A64;
    }
L_08A31A64:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31A84;
      }
      goto L_08A31A80;
    }
L_08A31A80:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A31A84;
L_08A31A84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A31A8C;
    }
L_08A31A8C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A31AA4u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A31AA4u) goto L_08A31AA4;
    return;
L_08A31AA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A31AB4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08A31AB4u) goto L_08A31AB4;
    return;
L_08A31AB4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31ADC;
      }
      goto L_08A31AC4;
    }
L_08A31AC4:
    ctx.gpr[31] = (0x08A31ACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A295CCu>(ctx, &aot_mem) && ctx.pc == 0x08A31ACCu) goto L_08A31ACC;
    return;
L_08A31ACC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A31ADCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 510u, 0x08A2A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31ADCu) goto L_08A31ADC;
    return;
L_08A31ADC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A31AE4;
    }
L_08A31AE4:
    ctx.gpr[31] = (0x08A31AECu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A31AECu) goto L_08A31AEC;
    return;
L_08A31AEC:
    ctx.gpr[31] = (0x08A31AF4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1044u, 0x08A97D90u>(ctx, &aot_mem) && ctx.pc == 0x08A31AF4u) goto L_08A31AF4;
    return;
L_08A31AF4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31B04;
      }
      goto L_08A31AFC;
    }
L_08A31AFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A31B08;
      }
      goto L_08A31B04;
    }
L_08A31B04:
    ctx.gpr[4] = (0u | 0u);
    goto L_08A31B08;
L_08A31B08:
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
          goto L_08A31B34;
      }
      goto L_08A31B2C;
    }
L_08A31B2C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A31B84;
      }
      goto L_08A31B34;
    }
L_08A31B34:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A31B64;
    }
    goto L_08A31B50;
L_08A31B50:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A31B84;
      }
      goto L_08A31B64;
    }
L_08A31B64:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31B84;
      }
      goto L_08A31B80;
    }
L_08A31B80:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A31B84;
L_08A31B84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A31B8C;
    }
L_08A31B8C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A31BA4u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A31BA4u) goto L_08A31BA4;
    return;
L_08A31BA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A31BB4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08A31BB4u) goto L_08A31BB4;
    return;
L_08A31BB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (ctx.gpr[5] & 256u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A31BC8;
      }
      goto L_08A31BC4;
    }
L_08A31BC4:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A31BC8;
L_08A31BC8:
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
          goto L_08A31BF4;
      }
      goto L_08A31BEC;
    }
L_08A31BEC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A31C44;
      }
      goto L_08A31BF4;
    }
L_08A31BF4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A31C24;
    }
    goto L_08A31C10;
L_08A31C10:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A31C44;
      }
      goto L_08A31C24;
    }
L_08A31C24:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31C44;
      }
      goto L_08A31C40;
    }
L_08A31C40:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A31C44;
L_08A31C44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A31C4C;
    }
L_08A31C4C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A31C68u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A31C68u) goto L_08A31C68;
    return;
L_08A31C68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A31C78u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08A31C78u) goto L_08A31C78;
    return;
L_08A31C78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A31CC4;
      }
      goto L_08A31C84;
    }
L_08A31C84:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(323))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(323), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31D28;
      }
      goto L_08A31CA0;
    }
L_08A31CA0:
    ctx.gpr[31] = (0x08A31CA8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x08A31CA8u) goto L_08A31CA8;
    return;
L_08A31CA8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 4096u);
    ctx.gpr[31] = (0x08A31CBCu);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x08A31CBCu) goto L_08A31CBC;
    return;
L_08A31CBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31D28;
      }
      goto L_08A31CC4;
    }
L_08A31CC4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(323))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(323), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31D28;
      }
      goto L_08A31CE0;
    }
L_08A31CE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A31D10;
      }
      goto L_08A31D00;
    }
L_08A31D00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A31D18;
      }
      goto L_08A31D10;
    }
L_08A31D10:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A31D18;
L_08A31D18:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A31D28;
      }
      goto L_08A31D20;
    }
L_08A31D20:
    ctx.gpr[31] = (0x08A31D28u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 145u, 0x08A0D328u>(ctx, &aot_mem) && ctx.pc == 0x08A31D28u) goto L_08A31D28;
    return;
L_08A31D28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A31D30;
    }
L_08A31D30:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A31D4Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A31D4Cu) goto L_08A31D4C;
    return;
L_08A31D4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A31D5Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08A31D5Cu) goto L_08A31D5C;
    return;
L_08A31D5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A31DA8;
      }
      goto L_08A31D68;
    }
L_08A31D68:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(323))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(323), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31E0C;
      }
      goto L_08A31D84;
    }
L_08A31D84:
    ctx.gpr[31] = (0x08A31D8Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x08A31D8Cu) goto L_08A31D8C;
    return;
L_08A31D8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 4096u);
    ctx.gpr[31] = (0x08A31DA0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x08A31DA0u) goto L_08A31DA0;
    return;
L_08A31DA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31E0C;
      }
      goto L_08A31DA8;
    }
L_08A31DA8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(323))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(323), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31E0C;
      }
      goto L_08A31DC4;
    }
L_08A31DC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A31DF4;
      }
      goto L_08A31DE4;
    }
L_08A31DE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A31DFC;
      }
      goto L_08A31DF4;
    }
L_08A31DF4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A31DFC;
L_08A31DFC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A31E0C;
      }
      goto L_08A31E04;
    }
L_08A31E04:
    ctx.gpr[31] = (0x08A31E0Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 145u, 0x08A0D328u>(ctx, &aot_mem) && ctx.pc == 0x08A31E0Cu) goto L_08A31E0C;
    return;
L_08A31E0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A31E14;
    }
L_08A31E14:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08A31E30u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A31E30u) goto L_08A31E30;
    return;
L_08A31E30:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[31] = (0x08A31E6Cu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 33u, 0x088603FCu>(ctx, &aot_mem) && ctx.pc == 0x08A31E6Cu) goto L_08A31E6C;
    return;
L_08A31E6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A31E74;
    }
L_08A31E74:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A31E8Cu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A31E8Cu) goto L_08A31E8C;
    return;
L_08A31E8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A31E9Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08A31E9Cu) goto L_08A31E9C;
    return;
L_08A31E9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(416)));
    ctx.gpr[5] = (ctx.gpr[5] & 64u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A31EB0;
      }
      goto L_08A31EAC;
    }
L_08A31EAC:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A31EB0;
L_08A31EB0:
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
          goto L_08A31EDC;
      }
      goto L_08A31ED4;
    }
L_08A31ED4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A31F2C;
      }
      goto L_08A31EDC;
    }
L_08A31EDC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A31F0C;
    }
    goto L_08A31EF8;
L_08A31EF8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A31F2C;
      }
      goto L_08A31F0C;
    }
L_08A31F0C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31F2C;
      }
      goto L_08A31F28;
    }
L_08A31F28:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A31F2C;
L_08A31F2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A31F34;
    }
L_08A31F34:
    ctx.gpr[31] = (0x08A31F3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 177u, 0x08844EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A31F3Cu) goto L_08A31F3C;
    return;
L_08A31F3C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[0]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A31F60u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A31F60u) goto L_08A31F60;
    return;
L_08A31F60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A31F68;
    }
L_08A31F68:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08A31F84u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A31F84u) goto L_08A31F84;
    return;
L_08A31F84:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A31FACu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 113u, 0x08A8C8C4u>(ctx, &aot_mem) && ctx.pc == 0x08A31FACu) goto L_08A31FAC;
    return;
L_08A31FAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A31FB4;
    }
L_08A31FB4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08A31FD0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A31FD0u) goto L_08A31FD0;
    return;
L_08A31FD0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A31FF8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 116u, 0x08A8C920u>(ctx, &aot_mem) && ctx.pc == 0x08A31FF8u) goto L_08A31FF8;
    return;
L_08A31FF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A32000;
    }
L_08A32000:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x08A3201Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A3201Cu) goto L_08A3201C;
    return;
L_08A3201C:
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08A32044u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32044u) goto L_08A32044;
    return;
L_08A32044:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A3204C;
L_08A3204C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A3224C;
      }
      goto L_08A32054;
    }
L_08A32054:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A3224C;
      }
      goto L_08A32060;
    }
L_08A32060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3248));
      if (branch_taken) {
          goto L_08A32084;
      }
      goto L_08A3207C;
    }
L_08A3207C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3209C;
      }
      goto L_08A32084;
    }
L_08A32084:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    goto L_08A3209C;
L_08A3209C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32244;
      }
      goto L_08A320A4;
    }
L_08A320A4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08A320B4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 472u, 0x08AFDFC8u>(ctx, &aot_mem) && ctx.pc == 0x08A320B4u) goto L_08A320B4;
    return;
L_08A320B4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6844)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A32244;
      }
      goto L_08A320C4;
    }
L_08A320C4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A32244;
      }
      goto L_08A320D4;
    }
L_08A320D4:
    ctx.gpr[31] = (0x08A320DCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x08A320DCu) goto L_08A320DC;
    return;
L_08A320DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32244;
      }
      goto L_08A320E4;
    }
L_08A320E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A32244;
      }
      goto L_08A320F4;
    }
L_08A320F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (128u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A32244;
      }
      goto L_08A32108;
    }
L_08A32108:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(864)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A32244;
      }
      goto L_08A32114;
    }
L_08A32114:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A32244;
      }
      goto L_08A32124;
    }
L_08A32124:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1352)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A32244;
      }
      goto L_08A32130;
    }
L_08A32130:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A32150u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 28u, 0x088E41C8u>(ctx, &aot_mem) && ctx.pc == 0x08A32150u) goto L_08A32150;
    return;
L_08A32150:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32244;
      }
      goto L_08A32158;
    }
L_08A32158:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A32244;
      }
      goto L_08A32168;
    }
L_08A32168:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A32244;
      }
      goto L_08A32174;
    }
L_08A32174:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A3218Cu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 46u, 0x08A287F8u>(ctx, &aot_mem) && ctx.pc == 0x08A3218Cu) goto L_08A3218C;
    return;
L_08A3218C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A32244;
      }
      goto L_08A32194;
    }
L_08A32194:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16544u << 16u);
      if (branch_taken) {
          goto L_08A32244;
      }
      goto L_08A321B4;
    }
L_08A321B4:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[20] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A32244;
      }
      goto L_08A321CC;
    }
L_08A321CC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08A321DCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 472u, 0x08AFDFC8u>(ctx, &aot_mem) && ctx.pc == 0x08A321DCu) goto L_08A321DC;
    return;
L_08A321DC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6844), ctx.gpr[17]);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(428), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (65534u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
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
          goto L_08A32244;
      }
      goto L_08A32230;
    }
L_08A32230:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A32244u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16512));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 447u, 0x08957150u>(ctx, &aot_mem) && ctx.pc == 0x08A32244u) goto L_08A32244;
    return;
L_08A32244:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A3204C;
      }
      goto L_08A3224C;
    }
L_08A3224C:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A32264u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A32264u) goto L_08A32264;
    return;
L_08A32264:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A3226C;
    }
L_08A3226C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08A32288u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A32288u) goto L_08A32288;
    return;
L_08A32288:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A3233C;
      }
      goto L_08A322AC;
    }
L_08A322AC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_08A322D4;
      }
      goto L_08A322CC;
    }
L_08A322CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A32300;
      }
      goto L_08A322D4;
    }
L_08A322D4:
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_08A32300;
L_08A32300:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32330;
      }
      goto L_08A32308;
    }
L_08A32308:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A32320u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 46u, 0x08A287F8u>(ctx, &aot_mem) && ctx.pc == 0x08A32320u) goto L_08A32320;
    return;
L_08A32320:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32330;
      }
      goto L_08A32328;
    }
L_08A32328:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(660), ctx.gpr[4]);
    goto L_08A32330;
L_08A32330:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A322AC;
      }
      goto L_08A3233C;
    }
L_08A3233C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A32344;
    }
L_08A32344:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A32360u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A32360u) goto L_08A32360;
    return;
L_08A32360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[31] = (0x08A32378u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 643u, 0x08AC3CD4u>(ctx, &aot_mem) && ctx.pc == 0x08A32378u) goto L_08A32378;
    return;
L_08A32378:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A32380;
    }
L_08A32380:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A3239Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A3239Cu) goto L_08A3239C;
    return;
L_08A3239C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A323ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08A323ACu) goto L_08A323AC;
    return;
L_08A323AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A323D8;
      }
      goto L_08A323B8;
    }
L_08A323B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(420)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(420), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A323FC;
      }
      goto L_08A323D8;
    }
L_08A323D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(420)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(420), ctx.gpr[4]);
    goto L_08A323FC;
L_08A323FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A32404;
    }
L_08A32404:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A32420u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A32420u) goto L_08A32420;
    return;
L_08A32420:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A32430u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08A32430u) goto L_08A32430;
    return;
L_08A32430:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08A3243Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 313u, 0x08925F24u>(ctx, &aot_mem) && ctx.pc == 0x08A3243Cu) goto L_08A3243C;
    return;
L_08A3243C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A32444;
    }
L_08A32444:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7488)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08A32458u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7488), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 186u, 0x08844F84u>(ctx, &aot_mem) && ctx.pc == 0x08A32458u) goto L_08A32458;
    return;
L_08A32458:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[31] = (0x08A3246Cu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6988), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 117u, 0x08A8C948u>(ctx, &aot_mem) && ctx.pc == 0x08A3246Cu) goto L_08A3246C;
    return;
L_08A3246C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A32474;
    }
L_08A32474:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A3248Cu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A3248Cu) goto L_08A3248C;
    return;
L_08A3248C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A324EC;
      }
      goto L_08A324C0;
    }
L_08A324C0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A324EC;
      }
      goto L_08A324D0;
    }
L_08A324D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7624)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A324EC;
      }
      goto L_08A324E8;
    }
L_08A324E8:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A324EC;
L_08A324EC:
    ctx.gpr[4] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A32518;
      }
      goto L_08A32510;
    }
L_08A32510:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A32568;
      }
      goto L_08A32518;
    }
L_08A32518:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A32548;
    }
    goto L_08A32534;
L_08A32534:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A32568;
      }
      goto L_08A32548;
    }
L_08A32548:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32568;
      }
      goto L_08A32564;
    }
L_08A32564:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A32568;
L_08A32568:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A32570;
    }
L_08A32570:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A32588u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A32588u) goto L_08A32588;
    return;
L_08A32588:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A32598u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08A32598u) goto L_08A32598;
    return;
L_08A32598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08A325A4u);
    ctx.gpr[5] = (0u | 153u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x08A325A4u) goto L_08A325A4;
    return;
L_08A325A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A325B4;
      }
      goto L_08A325AC;
    }
L_08A325AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A325B8;
      }
      goto L_08A325B4;
    }
L_08A325B4:
    ctx.gpr[4] = (0u | 0u);
    goto L_08A325B8;
L_08A325B8:
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
          goto L_08A325E4;
      }
      goto L_08A325DC;
    }
L_08A325DC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A32634;
      }
      goto L_08A325E4;
    }
L_08A325E4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A32614;
    }
    goto L_08A32600;
L_08A32600:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A32634;
      }
      goto L_08A32614;
    }
L_08A32614:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32634;
      }
      goto L_08A32630;
    }
L_08A32630:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A32634;
L_08A32634:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A3263C;
    }
L_08A3263C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08A32658u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A32658u) goto L_08A32658;
    return;
L_08A32658:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    ctx.gpr[31] = (0x08A32668u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x08A32668u) goto L_08A32668;
    return;
L_08A32668:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
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
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(144), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A326A4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2EF0u>(ctx, &aot_mem) && ctx.pc == 0x08A326A4u) goto L_08A326A4;
    return;
L_08A326A4:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.gpr[31] = (0x08A326C0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 287u, 0x0890DDACu>(ctx, &aot_mem) && ctx.pc == 0x08A326C0u) goto L_08A326C0;
    return;
L_08A326C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A326D0;
      }
      goto L_08A326C8;
    }
L_08A326C8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A326D0;
L_08A326D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A326E8;
      }
      goto L_08A326E4;
    }
L_08A326E4:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    goto L_08A326E8;
L_08A326E8:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A32710;
      }
      goto L_08A32700;
    }
L_08A32700:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08A32710;
L_08A32710:
    ctx.gpr[31] = (0x08A32718u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08A32718u) goto L_08A32718;
    return;
L_08A32718:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[31] = (0x08A32740u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08A32740u) goto L_08A32740;
    return;
L_08A32740:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10604)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10608)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A32758u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08A32758u) goto L_08A32758;
    return;
L_08A32758:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A3276Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 426u, 0x08AF6118u>(ctx, &aot_mem) && ctx.pc == 0x08A3276Cu) goto L_08A3276C;
    return;
L_08A3276C:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A32778u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x08A32778u) goto L_08A32778;
    return;
L_08A32778:
    ctx.gpr[4] = (2269u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08A32794u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 127u, 0x088A4FDCu>(ctx, &aot_mem) && ctx.pc == 0x08A32794u) goto L_08A32794;
    return;
L_08A32794:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A3279C;
    }
L_08A3279C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A327B4u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A327B4u) goto L_08A327B4;
    return;
L_08A327B4:
    ctx.gpr[31] = (0x08A327BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 122u, 0x08844A28u>(ctx, &aot_mem) && ctx.pc == 0x08A327BCu) goto L_08A327BC;
    return;
L_08A327BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A327C4;
    }
L_08A327C4:
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
          goto L_08A327F4;
      }
      goto L_08A327EC;
    }
L_08A327EC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A32844;
      }
      goto L_08A327F4;
    }
L_08A327F4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A32824;
    }
    goto L_08A32810;
L_08A32810:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A32844;
      }
      goto L_08A32824;
    }
L_08A32824:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32844;
      }
      goto L_08A32840;
    }
L_08A32840:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A32844;
L_08A32844:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A3284C;
    }
L_08A3284C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A32864u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A32864u) goto L_08A32864;
    return;
L_08A32864:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A32874u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08A32874u) goto L_08A32874;
    return;
L_08A32874:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A328A8;
      }
      goto L_08A32884;
    }
L_08A32884:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A328A8;
      }
      goto L_08A32894;
    }
L_08A32894:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-8));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1509), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1512), 0u);
    goto L_08A328A8;
L_08A328A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A328B0;
    }
L_08A328B0:
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
          goto L_08A328E0;
      }
      goto L_08A328D8;
    }
L_08A328D8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A32930;
      }
      goto L_08A328E0;
    }
L_08A328E0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A32910;
    }
    goto L_08A328FC;
L_08A328FC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A32930;
      }
      goto L_08A32910;
    }
L_08A32910:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32930;
      }
      goto L_08A3292C;
    }
L_08A3292C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A32930;
L_08A32930:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A32938;
    }
L_08A32938:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08A32950u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A32950u) goto L_08A32950;
    return;
L_08A32950:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A32958;
    }
L_08A32958:
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08A32978u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A32978u) goto L_08A32978;
    return;
L_08A32978:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.fpr[16] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[17] = ctx.fpr[13] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[4]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.fpr[12] = std::sqrt(ctx.fpr[14]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A32A00u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A32A00u) goto L_08A32A00;
    return;
L_08A32A00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A32A08;
    }
L_08A32A08:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08A32A28u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A32A28u) goto L_08A32A28;
    return;
L_08A32A28:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
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
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A32AA0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A32AA0u) goto L_08A32AA0;
    return;
L_08A32AA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A32AA8;
    }
L_08A32AA8:
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08A32AC8u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A32AC8u) goto L_08A32AC8;
    return;
L_08A32AC8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[12];
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A32B0Cu);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A32B0Cu) goto L_08A32B0C;
    return;
L_08A32B0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A32B14;
    }
L_08A32B14:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08A32B34u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A32B34u) goto L_08A32B34;
    return;
L_08A32B34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A32B98u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A32B98u) goto L_08A32B98;
    return;
L_08A32B98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A32BA0;
    }
L_08A32BA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A32BA8;
    }
L_08A32BA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A32BB0;
    }
L_08A32BB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A32BB8;
    }
L_08A32BB8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A32BD0u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A32BD0u) goto L_08A32BD0;
    return;
L_08A32BD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(45) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A32BE0;
    }
L_08A32BE0:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(5160)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A32BF8:
    ctx.gpr[31] = (0x08A32C00u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A32C00u) goto L_08A32C00;
    return;
L_08A32C00:
    ctx.gpr[31] = (0x08A32C08u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 788u, 0x08A971C8u>(ctx, &aot_mem) && ctx.pc == 0x08A32C08u) goto L_08A32C08;
    return;
L_08A32C08:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A32C14;
    }
L_08A32C14:
    ctx.gpr[31] = (0x08A32C1Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A32C1Cu) goto L_08A32C1C;
    return;
L_08A32C1C:
    ctx.gpr[31] = (0x08A32C24u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1077u, 0x08A97EB4u>(ctx, &aot_mem) && ctx.pc == 0x08A32C24u) goto L_08A32C24;
    return;
L_08A32C24:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A32C30;
    }
L_08A32C30:
    ctx.gpr[31] = (0x08A32C38u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A32C38u) goto L_08A32C38;
    return;
L_08A32C38:
    ctx.gpr[31] = (0x08A32C40u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 799u, 0x08A97230u>(ctx, &aot_mem) && ctx.pc == 0x08A32C40u) goto L_08A32C40;
    return;
L_08A32C40:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A32C4C;
    }
L_08A32C4C:
    ctx.gpr[31] = (0x08A32C54u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A32C54u) goto L_08A32C54;
    return;
L_08A32C54:
    ctx.gpr[31] = (0x08A32C5Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 812u, 0x08A972D8u>(ctx, &aot_mem) && ctx.pc == 0x08A32C5Cu) goto L_08A32C5C;
    return;
L_08A32C5C:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A32C68;
    }
L_08A32C68:
    ctx.gpr[31] = (0x08A32C70u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A32C70u) goto L_08A32C70;
    return;
L_08A32C70:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A32C7Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 824u, 0x08A97354u>(ctx, &aot_mem) && ctx.pc == 0x08A32C7Cu) goto L_08A32C7C;
    return;
L_08A32C7C:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A32C88;
    }
L_08A32C88:
    ctx.gpr[31] = (0x08A32C90u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A32C90u) goto L_08A32C90;
    return;
L_08A32C90:
    ctx.gpr[31] = (0x08A32C98u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 835u, 0x08A97400u>(ctx, &aot_mem) && ctx.pc == 0x08A32C98u) goto L_08A32C98;
    return;
L_08A32C98:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A32CA4;
    }
L_08A32CA4:
    ctx.gpr[31] = (0x08A32CACu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A32CACu) goto L_08A32CAC;
    return;
L_08A32CAC:
    ctx.gpr[31] = (0x08A32CB4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 859u, 0x08A97538u>(ctx, &aot_mem) && ctx.pc == 0x08A32CB4u) goto L_08A32CB4;
    return;
L_08A32CB4:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A32CC0;
    }
L_08A32CC0:
    ctx.gpr[31] = (0x08A32CC8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A32CC8u) goto L_08A32CC8;
    return;
L_08A32CC8:
    ctx.gpr[31] = (0x08A32CD0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 868u, 0x08A9759Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32CD0u) goto L_08A32CD0;
    return;
L_08A32CD0:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A32CDC;
    }
L_08A32CDC:
    ctx.gpr[31] = (0x08A32CE4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A32CE4u) goto L_08A32CE4;
    return;
L_08A32CE4:
    ctx.gpr[31] = (0x08A32CECu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 891u, 0x08A976CCu>(ctx, &aot_mem) && ctx.pc == 0x08A32CECu) goto L_08A32CEC;
    return;
L_08A32CEC:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A32CF8;
    }
L_08A32CF8:
    ctx.gpr[31] = (0x08A32D00u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A32D00u) goto L_08A32D00;
    return;
L_08A32D00:
    ctx.gpr[31] = (0x08A32D08u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 931u, 0x08A978A0u>(ctx, &aot_mem) && ctx.pc == 0x08A32D08u) goto L_08A32D08;
    return;
L_08A32D08:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A32D14;
    }
L_08A32D14:
    ctx.gpr[31] = (0x08A32D1Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A32D1Cu) goto L_08A32D1C;
    return;
L_08A32D1C:
    ctx.gpr[31] = (0x08A32D24u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 971u, 0x08A97A78u>(ctx, &aot_mem) && ctx.pc == 0x08A32D24u) goto L_08A32D24;
    return;
L_08A32D24:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A32D30;
    }
L_08A32D30:
    ctx.gpr[31] = (0x08A32D38u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A32D38u) goto L_08A32D38;
    return;
L_08A32D38:
    ctx.gpr[31] = (0x08A32D40u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1006u, 0x08A97C2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32D40u) goto L_08A32D40;
    return;
L_08A32D40:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A32D4C;
    }
L_08A32D4C:
    ctx.gpr[31] = (0x08A32D54u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A32D54u) goto L_08A32D54;
    return;
L_08A32D54:
    ctx.gpr[31] = (0x08A32D5Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1016u, 0x08A97C88u>(ctx, &aot_mem) && ctx.pc == 0x08A32D5Cu) goto L_08A32D5C;
    return;
L_08A32D5C:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A32D68;
    }
L_08A32D68:
    ctx.gpr[31] = (0x08A32D70u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A32D70u) goto L_08A32D70;
    return;
L_08A32D70:
    ctx.gpr[31] = (0x08A32D78u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1030u, 0x08A97D0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32D78u) goto L_08A32D78;
    return;
L_08A32D78:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A32D84;
    }
L_08A32D84:
    ctx.gpr[31] = (0x08A32D8Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A32D8Cu) goto L_08A32D8C;
    return;
L_08A32D8C:
    ctx.gpr[31] = (0x08A32D94u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1044u, 0x08A97D90u>(ctx, &aot_mem) && ctx.pc == 0x08A32D94u) goto L_08A32D94;
    return;
L_08A32D94:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A32DA0;
    }
L_08A32DA0:
    ctx.gpr[31] = (0x08A32DA8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A32DA8u) goto L_08A32DA8;
    return;
L_08A32DA8:
    ctx.gpr[31] = (0x08A32DB0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1048u, 0x08A97DB4u>(ctx, &aot_mem) && ctx.pc == 0x08A32DB0u) goto L_08A32DB0;
    return;
L_08A32DB0:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A32DBC;
    }
L_08A32DBC:
    ctx.gpr[31] = (0x08A32DC4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A32DC4u) goto L_08A32DC4;
    return;
L_08A32DC4:
    ctx.gpr[31] = (0x08A32DCCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1064u, 0x08A97E3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32DCCu) goto L_08A32DCC;
    return;
L_08A32DCC:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A32DD8;
    }
L_08A32DD8:
    ctx.gpr[31] = (0x08A32DE0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A32DE0u) goto L_08A32DE0;
    return;
L_08A32DE0:
    ctx.gpr[31] = (0x08A32DE8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1077u, 0x08A97EB4u>(ctx, &aot_mem) && ctx.pc == 0x08A32DE8u) goto L_08A32DE8;
    return;
L_08A32DE8:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A32DF4;
    }
L_08A32DF4:
    ctx.gpr[31] = (0x08A32DFCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A32DFCu) goto L_08A32DFC;
    return;
L_08A32DFC:
    ctx.gpr[31] = (0x08A32E04u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1081u, 0x08A97ED4u>(ctx, &aot_mem) && ctx.pc == 0x08A32E04u) goto L_08A32E04;
    return;
L_08A32E04:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A32E10;
    }
L_08A32E10:
    ctx.gpr[31] = (0x08A32E18u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A32E18u) goto L_08A32E18;
    return;
L_08A32E18:
    ctx.gpr[31] = (0x08A32E20u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1089u, 0x08A97F24u>(ctx, &aot_mem) && ctx.pc == 0x08A32E20u) goto L_08A32E20;
    return;
L_08A32E20:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A32E2C;
    }
L_08A32E2C:
    ctx.gpr[31] = (0x08A32E34u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A32E34u) goto L_08A32E34;
    return;
L_08A32E34:
    ctx.gpr[31] = (0x08A32E3Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1101u, 0x08A97F90u>(ctx, &aot_mem) && ctx.pc == 0x08A32E3Cu) goto L_08A32E3C;
    return;
L_08A32E3C:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A32E48;
    }
L_08A32E48:
    ctx.gpr[31] = (0x08A32E50u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A32E50u) goto L_08A32E50;
    return;
L_08A32E50:
    ctx.gpr[31] = (0x08A32E58u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1108u, 0x08A97FCCu>(ctx, &aot_mem) && ctx.pc == 0x08A32E58u) goto L_08A32E58;
    return;
L_08A32E58:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A32E64;
    }
L_08A32E64:
    ctx.gpr[31] = (0x08A32E6Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A32E6Cu) goto L_08A32E6C;
    return;
L_08A32E6C:
    ctx.gpr[31] = (0x08A32E74u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 7u, 0x08A9802Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32E74u) goto L_08A32E74;
    return;
L_08A32E74:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A32E80;
    }
L_08A32E80:
    ctx.gpr[31] = (0x08A32E88u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A32E88u) goto L_08A32E88;
    return;
L_08A32E88:
    ctx.gpr[31] = (0x08A32E90u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 11u, 0x08A9804Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32E90u) goto L_08A32E90;
    return;
L_08A32E90:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A32E9C;
    }
L_08A32E9C:
    ctx.gpr[31] = (0x08A32EA4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A32EA4u) goto L_08A32EA4;
    return;
L_08A32EA4:
    ctx.gpr[31] = (0x08A32EACu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 45u, 0x08A981A8u>(ctx, &aot_mem) && ctx.pc == 0x08A32EACu) goto L_08A32EAC;
    return;
L_08A32EAC:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A32EB8;
    }
L_08A32EB8:
    ctx.gpr[31] = (0x08A32EC0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A32EC0u) goto L_08A32EC0;
    return;
L_08A32EC0:
    ctx.gpr[31] = (0x08A32EC8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 52u, 0x08A981F4u>(ctx, &aot_mem) && ctx.pc == 0x08A32EC8u) goto L_08A32EC8;
    return;
L_08A32EC8:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A32ED4;
    }
L_08A32ED4:
    ctx.gpr[31] = (0x08A32EDCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A32EDCu) goto L_08A32EDC;
    return;
L_08A32EDC:
    ctx.gpr[31] = (0x08A32EE4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 59u, 0x08A98240u>(ctx, &aot_mem) && ctx.pc == 0x08A32EE4u) goto L_08A32EE4;
    return;
L_08A32EE4:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A32EF0;
    }
L_08A32EF0:
    ctx.gpr[31] = (0x08A32EF8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A32EF8u) goto L_08A32EF8;
    return;
L_08A32EF8:
    ctx.gpr[31] = (0x08A32F00u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 66u, 0x08A98290u>(ctx, &aot_mem) && ctx.pc == 0x08A32F00u) goto L_08A32F00;
    return;
L_08A32F00:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A32F0C;
    }
L_08A32F0C:
    ctx.gpr[31] = (0x08A32F14u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A32F14u) goto L_08A32F14;
    return;
L_08A32F14:
    ctx.gpr[31] = (0x08A32F1Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 78u, 0x08A98308u>(ctx, &aot_mem) && ctx.pc == 0x08A32F1Cu) goto L_08A32F1C;
    return;
L_08A32F1C:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A32F28;
    }
L_08A32F28:
    ctx.gpr[31] = (0x08A32F30u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A32F30u) goto L_08A32F30;
    return;
L_08A32F30:
    ctx.gpr[31] = (0x08A32F38u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 116u, 0x08A984C8u>(ctx, &aot_mem) && ctx.pc == 0x08A32F38u) goto L_08A32F38;
    return;
L_08A32F38:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A32F44;
    }
L_08A32F44:
    ctx.gpr[31] = (0x08A32F4Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A32F4Cu) goto L_08A32F4C;
    return;
L_08A32F4C:
    ctx.gpr[31] = (0x08A32F54u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 134u, 0x08A9859Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32F54u) goto L_08A32F54;
    return;
L_08A32F54:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A32F60;
    }
L_08A32F60:
    ctx.gpr[31] = (0x08A32F68u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A32F68u) goto L_08A32F68;
    return;
L_08A32F68:
    ctx.gpr[31] = (0x08A32F70u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 186u, 0x08A987E0u>(ctx, &aot_mem) && ctx.pc == 0x08A32F70u) goto L_08A32F70;
    return;
L_08A32F70:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A32F7C;
    }
L_08A32F7C:
    ctx.gpr[31] = (0x08A32F84u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A32F84u) goto L_08A32F84;
    return;
L_08A32F84:
    ctx.gpr[31] = (0x08A32F8Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 232u, 0x08A989D8u>(ctx, &aot_mem) && ctx.pc == 0x08A32F8Cu) goto L_08A32F8C;
    return;
L_08A32F8C:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A32F98;
    }
L_08A32F98:
    ctx.gpr[31] = (0x08A32FA0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A32FA0u) goto L_08A32FA0;
    return;
L_08A32FA0:
    ctx.gpr[31] = (0x08A32FA8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 239u, 0x08A98A18u>(ctx, &aot_mem) && ctx.pc == 0x08A32FA8u) goto L_08A32FA8;
    return;
L_08A32FA8:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A32FB4;
    }
L_08A32FB4:
    ctx.gpr[31] = (0x08A32FBCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A32FBCu) goto L_08A32FBC;
    return;
L_08A32FBC:
    ctx.gpr[31] = (0x08A32FC4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 246u, 0x08A98A58u>(ctx, &aot_mem) && ctx.pc == 0x08A32FC4u) goto L_08A32FC4;
    return;
L_08A32FC4:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A32FD0;
    }
L_08A32FD0:
    ctx.gpr[31] = (0x08A32FD8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A32FD8u) goto L_08A32FD8;
    return;
L_08A32FD8:
    ctx.gpr[31] = (0x08A32FE0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 261u, 0x08A98B5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32FE0u) goto L_08A32FE0;
    return;
L_08A32FE0:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A32FEC;
    }
L_08A32FEC:
    ctx.gpr[31] = (0x08A32FF4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A32FF4u) goto L_08A32FF4;
    return;
L_08A32FF4:
    ctx.gpr[31] = (0x08A32FFCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 280u, 0x08A98C8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32FFCu) goto L_08A32FFC;
    return;
L_08A32FFC:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A33008;
    }
L_08A33008:
    ctx.gpr[31] = (0x08A33010u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A33010u) goto L_08A33010;
    return;
L_08A33010:
    ctx.gpr[31] = (0x08A33018u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 300u, 0x08A98D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A33018u) goto L_08A33018;
    return;
L_08A33018:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A33024;
    }
L_08A33024:
    ctx.gpr[31] = (0x08A3302Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A3302Cu) goto L_08A3302C;
    return;
L_08A3302C:
    ctx.gpr[31] = (0x08A33034u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 732u, 0x08A96FA0u>(ctx, &aot_mem) && ctx.pc == 0x08A33034u) goto L_08A33034;
    return;
L_08A33034:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A33040;
    }
L_08A33040:
    ctx.gpr[31] = (0x08A33048u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A33048u) goto L_08A33048;
    return;
L_08A33048:
    ctx.gpr[31] = (0x08A33050u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 739u, 0x08A96FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A33050u) goto L_08A33050;
    return;
L_08A33050:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A3305C;
    }
L_08A3305C:
    ctx.gpr[31] = (0x08A33064u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A33064u) goto L_08A33064;
    return;
L_08A33064:
    ctx.gpr[31] = (0x08A3306Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 746u, 0x08A97030u>(ctx, &aot_mem) && ctx.pc == 0x08A3306Cu) goto L_08A3306C;
    return;
L_08A3306C:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A33078;
    }
L_08A33078:
    ctx.gpr[31] = (0x08A33080u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A33080u) goto L_08A33080;
    return;
L_08A33080:
    ctx.gpr[31] = (0x08A33088u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 753u, 0x08A97078u>(ctx, &aot_mem) && ctx.pc == 0x08A33088u) goto L_08A33088;
    return;
L_08A33088:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A33094;
    }
L_08A33094:
    ctx.gpr[31] = (0x08A3309Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A3309Cu) goto L_08A3309C;
    return;
L_08A3309C:
    ctx.gpr[31] = (0x08A330A4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 760u, 0x08A970C0u>(ctx, &aot_mem) && ctx.pc == 0x08A330A4u) goto L_08A330A4;
    return;
L_08A330A4:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A330B0;
    }
L_08A330B0:
    ctx.gpr[31] = (0x08A330B8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A330B8u) goto L_08A330B8;
    return;
L_08A330B8:
    ctx.gpr[31] = (0x08A330C0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 761u, 0x08A970CCu>(ctx, &aot_mem) && ctx.pc == 0x08A330C0u) goto L_08A330C0;
    return;
L_08A330C0:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A330CC;
    }
L_08A330CC:
    ctx.gpr[31] = (0x08A330D4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A330D4u) goto L_08A330D4;
    return;
L_08A330D4:
    ctx.gpr[31] = (0x08A330DCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 771u, 0x08A9712Cu>(ctx, &aot_mem) && ctx.pc == 0x08A330DCu) goto L_08A330DC;
    return;
L_08A330DC:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A330F8;
      }
      goto L_08A330E8;
    }
L_08A330E8:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(93), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A330F8;
L_08A330F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A33100;
    }
L_08A33100:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A33110u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A33110u) goto L_08A33110;
    return;
L_08A33110:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A33118;
    }
L_08A33118:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08A33134u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A33134u) goto L_08A33134;
    return;
L_08A33134:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08A33144u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 643u, 0x08877EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A33144u) goto L_08A33144;
    return;
L_08A33144:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A3314C;
    }
L_08A3314C:
    ctx.gpr[31] = (0x08A33154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 647u, 0x08877F54u>(ctx, &aot_mem) && ctx.pc == 0x08A33154u) goto L_08A33154;
    return;
L_08A33154:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A3315C;
    }
L_08A3315C:
    ctx.gpr[4] = (0u | 1454u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A33194;
      }
      goto L_08A33168;
    }
L_08A33168:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (128u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A331BC;
      }
      goto L_08A33194;
    }
L_08A33194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_08A331BC;
L_08A331BC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A33218u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A33218u) goto L_08A33218;
    return;
L_08A33218:
    if (ctx.gpr[17] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(520)));
        goto L_08A3324C;
    }
    goto L_08A33220;
L_08A33220:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(520)));
    ctx.gpr[7] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A33248u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A33248u) goto L_08A33248;
    return;
L_08A33248:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(520)));
    goto L_08A3324C;
L_08A3324C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(520), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 24u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A332A4;
      }
      goto L_08A33288;
    }
L_08A33288:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6980)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A332B0;
      }
      goto L_08A332A4;
    }
L_08A332A4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    goto L_08A332B0;
L_08A332B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A332B8;
    }
L_08A332B8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A332D0u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A332D0u) goto L_08A332D0;
    return;
L_08A332D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A332E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08A332E0u) goto L_08A332E0;
    return;
L_08A332E0:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(130) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A33308;
      }
      goto L_08A332F4;
    }
L_08A332F4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(192) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33308;
      }
      goto L_08A33304;
    }
L_08A33304:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A33308;
L_08A33308:
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
          goto L_08A33334;
      }
      goto L_08A3332C;
    }
L_08A3332C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A33384;
      }
      goto L_08A33334;
    }
L_08A33334:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A33364;
    }
    goto L_08A33350;
L_08A33350:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A33384;
      }
      goto L_08A33364;
    }
L_08A33364:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33384;
      }
      goto L_08A33380;
    }
L_08A33380:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A33384;
L_08A33384:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A3338C;
    }
L_08A3338C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A333A4u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A333A4u) goto L_08A333A4;
    return;
L_08A333A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A333B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08A333B4u) goto L_08A333B4;
    return;
L_08A333B4:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(202) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A333DC;
      }
      goto L_08A333C8;
    }
L_08A333C8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(211) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A333DC;
      }
      goto L_08A333D8;
    }
L_08A333D8:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A333DC;
L_08A333DC:
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
          goto L_08A33408;
      }
      goto L_08A33400;
    }
L_08A33400:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A33458;
      }
      goto L_08A33408;
    }
L_08A33408:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A33438;
    }
    goto L_08A33424;
L_08A33424:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A33458;
      }
      goto L_08A33438;
    }
L_08A33438:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33458;
      }
      goto L_08A33454;
    }
L_08A33454:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A33458;
L_08A33458:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A33460;
    }
L_08A33460:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A33478u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A33478u) goto L_08A33478;
    return;
L_08A33478:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A33488u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08A33488u) goto L_08A33488;
    return;
L_08A33488:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(200) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A334B0;
      }
      goto L_08A3349C;
    }
L_08A3349C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(202) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A334B0;
      }
      goto L_08A334AC;
    }
L_08A334AC:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A334B0;
L_08A334B0:
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
          goto L_08A334DC;
      }
      goto L_08A334D4;
    }
L_08A334D4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A3352C;
      }
      goto L_08A334DC;
    }
L_08A334DC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A3350C;
    }
    goto L_08A334F8;
L_08A334F8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A3352C;
      }
      goto L_08A3350C;
    }
L_08A3350C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3352C;
      }
      goto L_08A33528;
    }
L_08A33528:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A3352C;
L_08A3352C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A33534;
    }
L_08A33534:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A3354Cu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A3354Cu) goto L_08A3354C;
    return;
L_08A3354C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A3355Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08A3355Cu) goto L_08A3355C;
    return;
L_08A3355C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(198) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A33584;
      }
      goto L_08A33570;
    }
L_08A33570:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(200) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33584;
      }
      goto L_08A33580;
    }
L_08A33580:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A33584;
L_08A33584:
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
          goto L_08A335B0;
      }
      goto L_08A335A8;
    }
L_08A335A8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A33600;
      }
      goto L_08A335B0;
    }
L_08A335B0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A335E0;
    }
    goto L_08A335CC;
L_08A335CC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A33600;
      }
      goto L_08A335E0;
    }
L_08A335E0:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33600;
      }
      goto L_08A335FC;
    }
L_08A335FC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A33600;
L_08A33600:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A33608;
    }
L_08A33608:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A33610;
    }
L_08A33610:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33624;
      }
      goto L_08A3361C;
    }
L_08A3361C:
    ctx.gpr[31] = (0x08A33624u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 645u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08A33624u) goto L_08A33624;
    return;
L_08A33624:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A3362C;
    }
L_08A3362C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A336B4;
      }
      goto L_08A33638;
    }
L_08A33638:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3365C;
      }
      goto L_08A33654;
    }
L_08A33654:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A336AC;
      }
      goto L_08A3365C;
    }
L_08A3365C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A3368C;
    }
    goto L_08A33678;
L_08A33678:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A336AC;
      }
      goto L_08A3368C;
    }
L_08A3368C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A336AC;
      }
      goto L_08A336A8;
    }
L_08A336A8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A336AC;
L_08A336AC:
    ctx.gpr[31] = (0x08A336B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 645u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08A336B4u) goto L_08A336B4;
    return;
L_08A336B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A336BC;
    }
L_08A336BC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A336D8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A336D8u) goto L_08A336D8;
    return;
L_08A336D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A336E8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08A336E8u) goto L_08A336E8;
    return;
L_08A336E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 9u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A3371C;
    }
L_08A3371C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A33734u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A33734u) goto L_08A33734;
    return;
L_08A33734:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16168), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A33748;
    }
L_08A33748:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 9u);
    ctx.gpr[31] = (0x08A33760u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A33760u) goto L_08A33760;
    return;
L_08A33760:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A3376Cu);
    ctx.gpr[4] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A3376Cu) goto L_08A3376C;
    return;
L_08A3376C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
        goto L_08A33778;
    }
    goto L_08A33778;
L_08A33778:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6528)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6528), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (2269u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (49864u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08A337D0;
      }
      goto L_08A337C0;
    }
L_08A337C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08A337CCu);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A337CCu) goto L_08A337CC;
    return;
L_08A337CC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A337D0;
L_08A337D0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6524)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6524), ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A33830u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A33830u) goto L_08A33830;
    return;
L_08A33830:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A33838;
    }
L_08A33838:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A33850u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A33850u) goto L_08A33850;
    return;
L_08A33850:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6524)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3390C;
      }
      goto L_08A33894;
    }
L_08A33894:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    if (ctx.gpr[5] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
        goto L_08A338D4;
    }
    goto L_08A338AC;
L_08A338AC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A338BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6524));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 543u, 0x08B06634u>(ctx, &aot_mem) && ctx.pc == 0x08A338BCu) goto L_08A338BC;
    return;
L_08A338BC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A338CC;
      }
      goto L_08A338C4;
    }
L_08A338C4:
    ctx.gpr[31] = (0x08A338CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08A338CCu) goto L_08A338CC;
    return;
L_08A338CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3390C;
      }
      goto L_08A338D4;
    }
L_08A338D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A33894;
      }
      goto L_08A3390C;
    }
L_08A3390C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A33914;
    }
L_08A33914:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A3392Cu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A3392Cu) goto L_08A3392C;
    return;
L_08A3392C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A3393Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08A3393Cu) goto L_08A3393C;
    return;
L_08A3393C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(948))))));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A33950;
      }
      goto L_08A3394C;
    }
L_08A3394C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A33950;
L_08A33950:
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
          goto L_08A3397C;
      }
      goto L_08A33974;
    }
L_08A33974:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A339CC;
      }
      goto L_08A3397C;
    }
L_08A3397C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A339AC;
    }
    goto L_08A33998;
L_08A33998:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A339CC;
      }
      goto L_08A339AC;
    }
L_08A339AC:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A339CC;
      }
      goto L_08A339C8;
    }
L_08A339C8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A339CC;
L_08A339CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A339D4;
    }
L_08A339D4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A339ECu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A339ECu) goto L_08A339EC;
    return;
L_08A339EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A339FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08A339FCu) goto L_08A339FC;
    return;
L_08A339FC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[5] = (ctx.gpr[5] & 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A33A10;
      }
      goto L_08A33A0C;
    }
L_08A33A0C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A33A10;
L_08A33A10:
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
          goto L_08A33A3C;
      }
      goto L_08A33A34;
    }
L_08A33A34:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A33A8C;
      }
      goto L_08A33A3C;
    }
L_08A33A3C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A33A6C;
    }
    goto L_08A33A58;
L_08A33A58:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A33A8C;
      }
      goto L_08A33A6C;
    }
L_08A33A6C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33A8C;
      }
      goto L_08A33A88;
    }
L_08A33A88:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A33A8C;
L_08A33A8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A33A94;
    }
L_08A33A94:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A33AB0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A33AB0u) goto L_08A33AB0;
    return;
L_08A33AB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A33AC0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08A33AC0u) goto L_08A33AC0;
    return;
L_08A33AC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1025));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 10u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A33AF4;
    }
L_08A33AF4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A33B10u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A33B10u) goto L_08A33B10;
    return;
L_08A33B10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A33B20u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08A33B20u) goto L_08A33B20;
    return;
L_08A33B20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A33B34u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08A33B34u) goto L_08A33B34;
    return;
L_08A33B34:
    ctx.gpr[4] = (48972u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (49049u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.gpr[31] = (0x08A33B54u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08A33B54u) goto L_08A33B54;
    return;
L_08A33B54:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[19] = ctx.fpr[20] + ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[16] = ctx.fpr[17] - ctx.fpr[18];
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[31] = (0x08A33B98u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 280u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x08A33B98u) goto L_08A33B98;
    return;
L_08A33B98:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 23u);
    ctx.gpr[31] = (0x08A33BB0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08A33BB0u) goto L_08A33BB0;
    return;
L_08A33BB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A33BB8;
    }
L_08A33BB8:
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08A33BD8u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A33BD8u) goto L_08A33BD8;
    return;
L_08A33BD8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08A33C0C;
L_08A33C0C:
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(336) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33D08;
      }
      goto L_08A33C18;
    }
L_08A33C18:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
      if (branch_taken) {
          goto L_08A33D08;
      }
      goto L_08A33C20;
    }
L_08A33C20:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30336));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33D00;
      }
      goto L_08A33C40;
    }
L_08A33C40:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30336));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[5] & 65535u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33D00;
      }
      goto L_08A33C90;
    }
L_08A33C90:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
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
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
      if (branch_taken) {
          goto L_08A33D00;
      }
      goto L_08A33CB8;
    }
L_08A33CB8:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30336));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
      if (branch_taken) {
          goto L_08A33D00;
      }
      goto L_08A33CD8;
    }
L_08A33CD8:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30336));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[31] = (0x08A33CFCu);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 140u, 0x08A81728u>(ctx, &aot_mem) && ctx.pc == 0x08A33CFCu) goto L_08A33CFC;
    return;
L_08A33CFC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_08A33D00;
L_08A33D00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A33C0C;
      }
      goto L_08A33D08;
    }
L_08A33D08:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A33D20u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A33D20u) goto L_08A33D20;
    return;
L_08A33D20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A33D28;
    }
L_08A33D28:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A33D40u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A33D40u) goto L_08A33D40;
    return;
L_08A33D40:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A33D50u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 335u, 0x088EE37Cu>(ctx, &aot_mem) && ctx.pc == 0x08A33D50u) goto L_08A33D50;
    return;
L_08A33D50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33D5C;
      }
      goto L_08A33D58;
    }
L_08A33D58:
    ctx.gpr[17] = (0u | 1u);
    goto L_08A33D5C;
L_08A33D5C:
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
          goto L_08A33D88;
      }
      goto L_08A33D80;
    }
L_08A33D80:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08A33DD8;
      }
      goto L_08A33D88;
    }
L_08A33D88:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A33DB8;
    }
    goto L_08A33DA4;
L_08A33DA4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A33DD8;
      }
      goto L_08A33DB8;
    }
L_08A33DB8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33DD8;
      }
      goto L_08A33DD4;
    }
L_08A33DD4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A33DD8;
L_08A33DD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A33DE0;
    }
L_08A33DE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A33DE8;
    }
L_08A33DE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A33DF0;
    }
L_08A33DF0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A33E08u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A33E08u) goto L_08A33E08;
    return;
L_08A33E08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25530), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25529), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A33E24;
    }
L_08A33E24:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A33E3Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A33E3Cu) goto L_08A33E3C;
    return;
L_08A33E3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7660), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 29u, 0x08A341B4u>(ctx, &aot_mem); return;
      }
      goto L_08A33E54;
    }
L_08A33E54:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08A33E70u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A33E70u) goto L_08A33E70;
    return;
L_08A33E70:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08A33E98u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x08A33E98u) goto L_08A33E98;
    return;
L_08A33E98:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A33EA0;
L_08A33EA0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 1u, 0x08A34000u>(ctx, &aot_mem); return;
      }
      goto L_08A33EA8;
    }
L_08A33EA8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 1u, 0x08A34000u>(ctx, &aot_mem); return;
      }
      goto L_08A33EB4;
    }
L_08A33EB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3248));
      if (branch_taken) {
          goto L_08A33ED8;
      }
      goto L_08A33ED0;
    }
L_08A33ED0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A33EF0;
      }
      goto L_08A33ED8;
    }
L_08A33ED8:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    goto L_08A33EF0;
L_08A33EF0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33FF8;
      }
      goto L_08A33EF8;
    }
L_08A33EF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A33FF8;
      }
      goto L_08A33F08;
    }
L_08A33F08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (128u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A33FF8;
      }
      goto L_08A33F1C;
    }
L_08A33F1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(864)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A33FF8;
      }
      goto L_08A33F28;
    }
L_08A33F28:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08A33F40u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 46u, 0x08A287F8u>(ctx, &aot_mem) && ctx.pc == 0x08A33F40u) goto L_08A33F40;
    return;
L_08A33F40:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A33FF8;
      }
      goto L_08A33F48;
    }
L_08A33F48:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16544u << 16u);
      if (branch_taken) {
          goto L_08A33FF8;
      }
      goto L_08A33F68;
    }
L_08A33F68:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[20] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A33FF8;
      }
      goto L_08A33F80;
    }
L_08A33F80:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08A33F90u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 472u, 0x08AFDFC8u>(ctx, &aot_mem) && ctx.pc == 0x08A33F90u) goto L_08A33F90;
    return;
L_08A33F90:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6844), ctx.gpr[19]);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(428), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (65534u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 17u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7020)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7020), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33FF8;
      }
      goto L_08A33FE4;
    }
L_08A33FE4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A33FF8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16512));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 447u, 0x08957150u>(ctx, &aot_mem) && ctx.pc == 0x08A33FF8u) goto L_08A33FF8;
    return;
L_08A33FF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A33EA0;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 1u, 0x08A34000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0139(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0139_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_139(Runtime &runtime) {
    runtime.register_generated_unit(139u, 0x08A30000u, 16384u, &recomp_unit_0139, &recomp_unit_0139_entry);
    runtime.register_function(0x08A30000u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A300A0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A300B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A300C8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A300E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A300FCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30104u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30114u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30120u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30128u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30130u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30138u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30144u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30150u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3015Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30168u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30174u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30184u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30190u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30198u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A301A0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A301A8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A301B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A301C0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A301CCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A301D8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A301DCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A301E8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A301F4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A301FCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3020Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30214u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30228u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30244u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30274u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A302C0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A303A0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A303B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A303C8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A303E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A303FCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30404u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30414u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30420u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30428u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30430u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30438u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30444u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30450u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3045Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30468u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30474u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30484u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30490u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30498u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A304A0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A304A8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A304B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A304C0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A304CCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A304D8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A304DCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A304E8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A304F4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3050Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30514u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30520u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30528u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30530u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30538u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30540u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30548u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30550u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30554u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3055Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3056Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30588u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A305B8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A305D0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30790u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A307ACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A307E8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A307FCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30808u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30810u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30820u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30838u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30844u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3084Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30854u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3085Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30864u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3086Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30880u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A308D0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A308DCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A308E4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A308FCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30904u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3090Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30914u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3091Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30930u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30938u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30940u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30948u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30950u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30964u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30978u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3098Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3099Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A309A4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A309ACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A309B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A309BCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A309CCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A309E4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30AA0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30AF8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30B8Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30B94u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30BA8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30BBCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30BCCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30BDCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30BE4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30BF0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30C00u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30C08u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30C10u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30C18u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30C20u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30C30u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30C38u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30C40u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30C48u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30C50u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30C60u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30D04u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30D0Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30D1Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30DC0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30DC8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30DDCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30E2Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30E98u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30EB0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30EB8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30EF4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30EFCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30F10u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30F18u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30F20u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30F34u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30F3Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30F78u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30F80u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30F94u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30F9Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30FD0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30FD8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30FECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31020u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31028u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3103Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31070u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31078u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3108Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A310C8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A310D0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A310E4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31118u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3113Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31220u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3123Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31250u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31258u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31264u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3126Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31274u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3127Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31284u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3128Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31294u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A312A8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A312BCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A312C8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A312E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A312ECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31364u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A313A4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A313C0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A313D8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A313E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A313E8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31400u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31410u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3141Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3142Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3143Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31448u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31450u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31460u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3146Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31478u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31484u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31488u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31490u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A314A4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A314B0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A314B8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A314D0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A314D8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A314E4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A314ECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A314FCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31510u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31518u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31534u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31560u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A315A0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A315A4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A315C8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A315D0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A315ECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31600u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3161Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31620u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31628u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31640u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3164Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31658u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31664u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3166Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31684u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3169Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A316A4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A316BCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A316C8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A316D8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A316E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A316E8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31704u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3174Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31754u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31770u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31780u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31794u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A317A4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A317B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A317C0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A317D0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A317DCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A317F0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31828u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31830u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3183Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31844u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31858u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31860u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31868u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3187Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31884u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31890u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A318A0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A318A8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A318C0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A318CCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A318E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A318F4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A318FCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31918u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31924u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3192Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31944u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31988u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A319B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A319C4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A319DCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A319F4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A319FCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31A04u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31A08u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31A2Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31A34u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31A50u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31A64u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31A80u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31A84u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31A8Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31AA4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31AB4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31AC4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31ACCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31ADCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31AE4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31AECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31AF4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31AFCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31B04u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31B08u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31B2Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31B34u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31B50u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31B64u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31B80u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31B84u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31B8Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31BA4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31BB4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31BC4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31BC8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31BECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31BF4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31C10u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31C24u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31C40u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31C44u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31C4Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31C68u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31C78u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31C84u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31CA0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31CA8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31CBCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31CC4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31CE0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31D00u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31D10u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31D18u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31D20u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31D28u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31D30u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31D4Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31D5Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31D68u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31D84u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31D8Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31DA0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31DA8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31DC4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31DE4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31DF4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31DFCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31E04u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31E0Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31E14u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31E30u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31E6Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31E74u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31E8Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31E9Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31EACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31EB0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31ED4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31EDCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31EF8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31F0Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31F28u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31F2Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31F34u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31F3Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31F60u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31F68u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31F84u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31FACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31FB4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31FD0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31FF8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32000u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3201Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32044u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3204Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32054u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32060u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3207Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32084u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3209Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A320A4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A320B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A320C4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A320D4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A320DCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A320E4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A320F4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32108u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32114u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32124u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32130u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32150u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32158u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32168u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32174u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3218Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32194u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A321B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A321CCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A321DCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32230u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32244u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3224Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32264u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3226Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32288u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A322ACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A322CCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A322D4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32300u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32308u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32320u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32328u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32330u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3233Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32344u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32360u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32378u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32380u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3239Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A323ACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A323B8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A323D8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A323FCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32404u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32420u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32430u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3243Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32444u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32458u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3246Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32474u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3248Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A324C0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A324D0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A324E8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A324ECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32510u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32518u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32534u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32548u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32564u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32568u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32570u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32588u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32598u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A325A4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A325ACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A325B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A325B8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A325DCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A325E4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32600u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32614u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32630u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32634u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3263Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32658u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32668u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A326A4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A326C0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A326C8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A326D0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A326E4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A326E8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32700u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32710u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32718u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32740u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32758u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3276Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32778u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32794u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3279Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A327B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A327BCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A327C4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A327ECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A327F4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32810u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32824u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32840u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32844u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3284Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32864u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32874u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32884u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32894u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A328A8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A328B0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A328D8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A328E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A328FCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32910u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3292Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32930u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32938u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32950u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32958u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32978u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32A00u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32A08u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32A28u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32AA0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32AA8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32AC8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32B0Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32B14u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32B34u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32B98u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32BA0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32BA8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32BB0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32BB8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32BD0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32BE0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32BF8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32C00u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32C08u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32C14u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32C1Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32C24u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32C30u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32C38u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32C40u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32C4Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32C54u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32C5Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32C68u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32C70u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32C7Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32C88u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32C90u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32C98u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32CA4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32CACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32CB4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32CC0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32CC8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32CD0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32CDCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32CE4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32CECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32CF8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D00u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D08u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D14u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D1Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D24u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D30u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D38u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D40u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D4Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D54u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D5Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D68u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D70u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D78u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D84u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D8Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D94u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32DA0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32DA8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32DB0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32DBCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32DC4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32DCCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32DD8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32DE0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32DE8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32DF4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32DFCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E04u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E10u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E18u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E20u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E2Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E34u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E3Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E48u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E50u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E58u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E64u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E6Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E74u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E80u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E88u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E90u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E9Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32EA4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32EACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32EB8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32EC0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32EC8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32ED4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32EDCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32EE4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32EF0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32EF8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F00u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F0Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F14u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F1Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F28u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F30u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F38u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F44u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F4Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F54u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F60u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F68u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F70u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F7Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F84u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F8Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F98u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32FA0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32FA8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32FB4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32FBCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32FC4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32FD0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32FD8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32FE0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32FECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32FF4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32FFCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33008u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33010u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33018u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33024u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3302Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33034u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33040u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33048u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33050u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3305Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33064u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3306Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33078u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33080u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33088u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33094u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3309Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A330A4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A330B0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A330B8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A330C0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A330CCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A330D4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A330DCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A330E8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A330F8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33100u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33110u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33118u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33134u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33144u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3314Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33154u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3315Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33168u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33194u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A331BCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33218u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33220u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33248u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3324Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33288u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A332A4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A332B0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A332B8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A332D0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A332E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A332F4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33304u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33308u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3332Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33334u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33350u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33364u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33380u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33384u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3338Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A333A4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A333B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A333C8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A333D8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A333DCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33400u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33408u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33424u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33438u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33454u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33458u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33460u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33478u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33488u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3349Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A334ACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A334B0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A334D4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A334DCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A334F8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3350Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33528u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3352Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33534u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3354Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3355Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33570u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33580u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33584u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A335A8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A335B0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A335CCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A335E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A335FCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33600u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33608u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33610u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3361Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33624u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3362Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33638u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33654u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3365Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33678u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3368Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A336A8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A336ACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A336B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A336BCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A336D8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A336E8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3371Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33734u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33748u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33760u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3376Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33778u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A337C0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A337CCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A337D0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33830u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33838u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33850u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33894u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A338ACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A338BCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A338C4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A338CCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A338D4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3390Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33914u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3392Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3393Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3394Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33950u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33974u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3397Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33998u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A339ACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A339C8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A339CCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A339D4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A339ECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A339FCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33A0Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33A10u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33A34u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33A3Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33A58u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33A6Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33A88u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33A8Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33A94u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33AB0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33AC0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33AF4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33B10u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33B20u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33B34u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33B54u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33B98u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33BB0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33BB8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33BD8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33C0Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33C18u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33C20u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33C40u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33C90u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33CB8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33CD8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33CFCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33D00u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33D08u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33D20u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33D28u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33D40u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33D50u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33D58u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33D5Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33D80u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33D88u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33DA4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33DB8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33DD4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33DD8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33DE0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33DE8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33DF0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33E08u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33E24u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33E3Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33E54u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33E70u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33E98u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33EA0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33EA8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33EB4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33ED0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33ED8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33EF0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33EF8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33F08u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33F1Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33F28u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33F40u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33F48u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33F68u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33F80u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33F90u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33FE4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33FF8u, &recomp_unit_0139, "recomp_unit_0139");
}
} // namespace psprecomp
