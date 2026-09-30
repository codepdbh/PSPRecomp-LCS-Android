#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0025[4090] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 7,
    0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 11, 0, 12, 0, 13, 0, 14, 0, 0, 15, 0, 0, 16, 0, 0, 17,
    0, 0, 18, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 32, 0, 33, 0, 34, 0, 35, 0, 0, 36, 0, 0, 37, 0, 0, 38, 0,
    0, 39, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0,
    0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0,
    57, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0,
    0, 0, 75, 0, 76, 0, 77, 0, 78, 0, 79, 0, 80, 0, 81, 0, 0, 82, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 87,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 98, 0, 0, 99, 0, 100, 0, 101, 0, 102,
    0, 103, 0, 0, 104, 0, 0, 105, 0, 0, 106, 0, 0, 107, 0, 0, 108, 109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113,
    0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0,
    0, 120, 0, 0, 121, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 131,
    0, 132, 0, 133, 0, 134, 0, 135, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 139, 0, 140, 0, 141, 0, 142, 143, 0, 0, 0,
    144, 0, 145, 0, 0, 0, 146, 0, 147, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 155, 0, 0,
    156, 0, 157, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 164, 0,
    0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0,
    173, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 0, 181,
    0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0,
    0, 189, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 0,
    196, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0,
    202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 208, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0,
    214, 0, 215, 0, 0, 216, 0, 0, 217, 0, 0, 218, 0, 0, 219, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 222, 0, 0, 223, 0, 0, 0, 224, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 229, 230,
    0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0,
    237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 239, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244,
    0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 249, 0, 250, 0, 0, 0, 251,
    0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 258, 0, 259, 0, 260, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 265, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 271, 0, 0,
    0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 275, 0, 0, 276, 0, 0, 277, 0, 0, 278, 0, 0, 279, 0, 0, 0, 0,
    280, 0, 0, 281, 0, 282, 0, 0, 283, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 288, 0, 289, 0, 0,
    0, 0, 0, 290, 0, 291, 0, 0, 0, 0, 0, 292, 0, 293, 0, 0, 294, 0, 0, 0, 295, 0, 296, 0, 297, 0, 0, 298, 0, 0, 0, 299,
    0, 0, 0, 0, 0, 300, 0, 301, 0, 0, 302, 0, 0, 303, 0, 0, 304, 0, 305, 306, 0, 307, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309,
    0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 319, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 324, 0,
    0, 0, 0, 325, 0, 0, 326, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 331, 0, 332, 0, 0, 333, 0, 0,
    0, 334, 0, 335, 336, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 340, 0, 0, 341, 0, 342,
    0, 0, 343, 0, 0, 344, 0, 0, 345, 0, 0, 0, 346, 0, 0, 347, 0, 348, 0, 0, 349, 0, 350, 0, 351, 352, 0, 0, 0, 0, 353, 0,
    0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 359, 0,
    0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 364, 0, 0, 365, 0, 366, 0,
    0, 367, 0, 0, 0, 0, 368, 369, 370, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0,
    0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 380, 0, 0,
    0, 0, 0, 381, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 385, 0, 386, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0,
    0, 0, 390, 0, 391, 0, 0, 0, 392, 393, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    395, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 398, 0, 399, 0, 0, 400, 401, 0, 0, 402, 0, 0, 403,
    404, 0, 0, 0, 405, 0, 0, 406, 0, 407, 0, 0, 408, 0, 409, 0, 410, 0, 0, 0, 411, 0, 0, 0, 412, 0, 413, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 418, 0, 419, 0, 0, 420, 0, 0, 421, 0, 0, 422, 0, 0, 0, 423, 0, 0, 424, 0, 0, 0, 425, 0, 426, 0, 0, 0, 427, 0, 0,
    0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 430, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0,
    0, 433, 0, 434, 0, 0, 0, 435, 0, 436, 0, 0, 437, 0, 0, 438, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 441, 0,
    0, 0, 442, 0, 443, 0, 0, 0, 444, 0, 445, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0, 448, 0, 449, 0, 0, 0, 450, 0, 451, 0, 0,
    452, 0, 0, 453, 0, 454, 0, 0, 0, 455, 0, 0, 456, 0, 0, 0, 0, 457, 0, 0, 0, 458, 0, 459, 460, 0, 0, 0, 461, 0, 0, 0,
    462, 0, 463, 0, 0, 464, 0, 0, 465, 0, 0, 466, 0, 467, 468, 0, 0, 0, 469, 0, 0, 0, 470, 0, 471, 0, 0, 472, 0, 0, 473, 0,
    0, 474, 0, 475, 0, 0, 476, 0, 0, 477, 0, 0, 0, 478, 0, 0, 0, 479, 0, 0, 0, 480, 0, 0, 0, 0, 481, 0, 0, 0, 0, 482,
    0, 0, 0, 483, 0, 0, 484, 0, 0, 0, 485, 0, 0, 0, 486, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0,
    0, 0, 0, 0, 489, 0, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 492, 0, 493, 0, 0, 0, 494, 0, 0, 495, 0, 0, 0, 496, 0, 0,
    0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 499, 0, 0, 500, 0, 0, 0, 0, 0, 0, 501, 0, 502, 0, 0, 503, 0,
    504, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 506, 0, 507, 0, 508, 0, 509, 0, 0, 510, 511, 0, 0, 0, 0, 512, 0, 513, 0,
    0, 0, 0, 0, 0, 514, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 517,
    0, 518, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 521, 0, 522, 0, 0, 0, 0, 523, 0, 524, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 525, 0, 0, 0, 526, 0, 527, 528, 0, 529, 0, 0, 0, 530, 0, 531, 532, 533, 0, 0, 0, 534, 0, 0, 0, 0, 535, 0,
    0, 0, 0, 536, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 539, 0, 540, 541, 0, 542, 0, 0, 0, 543, 0, 544, 545, 546,
    0, 0, 0, 547, 0, 0, 0, 0, 548, 0, 0, 0, 0, 549, 0, 0, 0, 0, 550, 0, 0, 551, 0, 0, 0, 0, 552, 0, 0, 553, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 556, 0, 0,
    0, 557, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 561, 0, 0, 562, 0,
    0, 0, 0, 0, 0, 563, 0, 0, 0, 564, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 566, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    568, 0, 0, 0, 0, 0, 0, 0, 569, 570, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 572, 573, 0, 0, 0, 0, 0, 0, 0, 574, 0,
    0, 0, 0, 575, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 578, 0, 0, 0, 0, 0, 0, 579, 0, 0, 580, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 581, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 585, 0, 586, 0, 0, 0, 0, 0, 0, 587, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 590, 0, 591, 0, 592,
    0, 0, 0, 0, 0, 593, 0, 0, 594, 0, 0, 595, 0, 0, 596, 0, 0, 0, 597, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 601, 0, 0, 602, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 604, 0, 605, 0, 0,
    0, 606, 0, 0, 0, 0, 0, 0, 0, 607, 0, 608, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0,
    0, 611, 0, 0, 0, 612, 0, 0, 0, 0, 0, 613, 0, 0, 0, 614, 0, 615, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0,
    0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 622, 0, 623, 0, 624, 0, 625, 0,
    626, 0, 627, 0, 628, 0, 0, 629, 0, 0, 630, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0,
    633, 0, 634, 0, 635, 0, 0, 636, 0, 637, 0, 638, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0,
    641, 0, 642, 0, 0, 643, 0, 644, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 647, 0, 0, 648, 0, 0, 0, 0, 0, 649,
    0, 650, 651, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 658, 0, 0, 0, 659, 0, 0, 0, 660, 0, 0, 0, 661, 0, 0, 0, 0, 0, 662, 0, 0, 0, 663, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 666, 0, 0, 0, 667, 0, 0, 0, 0,
    0, 0, 0, 0, 668, 0, 669, 670, 0, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 672, 0, 673, 674, 0, 0, 0, 675, 0, 0, 0, 0, 0,
    676, 0, 677, 0, 0, 0, 0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0,
    0, 0, 0, 680, 0, 0, 0, 0, 0, 681, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 684, 0, 685, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 687, 0, 688, 0, 0, 0, 0, 0, 0, 0, 689, 0, 690, 0, 691, 0, 692,
    0, 0, 0, 0, 0, 0, 693, 0, 0, 0, 0, 694, 0, 695, 0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 0, 697, 0, 0, 0, 0, 0, 0,
    698, 0, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 700, 0, 701, 0, 0, 0, 0, 0, 702, 0, 0, 0, 0, 703, 0, 0, 0,
    0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 0, 705, 0, 706, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 708, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 709, 0, 0, 710, 0, 0, 711, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 0, 714, 0, 0, 0, 0, 715, 716, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 717, 0, 0, 0, 0, 0, 718, 0, 719, 0, 0, 0, 0, 720, 0, 0, 721, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 722, 0, 0, 0, 723, 0, 0, 0, 724, 0, 0, 0, 0, 0, 725, 0, 0, 726, 0, 0, 727, 728, 0, 729,
};
void recomp_unit_0025_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08868000u;
        entry_id = (entry_delta < 16360u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0025[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08868000;
    case 2u: goto L_0886803C;
    case 3u: goto L_08868074;
    case 4u: goto L_088680AC;
    case 5u: goto L_088680D8;
    case 6u: goto L_088680E8;
    case 7u: goto L_088680FC;
    case 8u: goto L_08868104;
    case 9u: goto L_0886812C;
    case 10u: goto L_08868138;
    case 11u: goto L_08868140;
    case 12u: goto L_08868148;
    case 13u: goto L_08868150;
    case 14u: goto L_08868158;
    case 15u: goto L_08868164;
    case 16u: goto L_08868170;
    case 17u: goto L_0886817C;
    case 18u: goto L_08868188;
    case 19u: goto L_08868194;
    case 20u: goto L_0886819C;
    case 21u: goto L_088681B8;
    case 22u: goto L_08868204;
    case 23u: goto L_0886823C;
    case 24u: goto L_08868288;
    case 25u: goto L_088682B4;
    case 26u: goto L_088682C4;
    case 27u: goto L_088682D8;
    case 28u: goto L_088682E0;
    case 29u: goto L_08868308;
    case 30u: goto L_08868328;
    case 31u: goto L_08868334;
    case 32u: goto L_0886833C;
    case 33u: goto L_08868344;
    case 34u: goto L_0886834C;
    case 35u: goto L_08868354;
    case 36u: goto L_08868360;
    case 37u: goto L_0886836C;
    case 38u: goto L_08868378;
    case 39u: goto L_08868384;
    case 40u: goto L_08868390;
    case 41u: goto L_08868398;
    case 42u: goto L_088683B4;
    case 43u: goto L_08868400;
    case 44u: goto L_08868408;
    case 45u: goto L_08868450;
    case 46u: goto L_08868494;
    case 47u: goto L_088684A4;
    case 48u: goto L_08868518;
    case 49u: goto L_08868558;
    case 50u: goto L_08868560;
    case 51u: goto L_08868584;
    case 52u: goto L_088685B8;
    case 53u: goto L_088685C8;
    case 54u: goto L_088685D0;
    case 55u: goto L_088685D8;
    case 56u: goto L_088685F4;
    case 57u: goto L_08868600;
    case 58u: goto L_08868608;
    case 59u: goto L_08868640;
    case 60u: goto L_08868658;
    case 61u: goto L_08868674;
    case 62u: goto L_08868718;
    case 63u: goto L_08868740;
    case 64u: goto L_0886877C;
    case 65u: goto L_088687B0;
    case 66u: goto L_088687B8;
    case 67u: goto L_088687C0;
    case 68u: goto L_0886880C;
    case 69u: goto L_08868828;
    case 70u: goto L_08868844;
    case 71u: goto L_0886885C;
    case 72u: goto L_08868898;
    case 73u: goto L_088688D4;
    case 74u: goto L_088688F8;
    case 75u: goto L_08868908;
    case 76u: goto L_08868910;
    case 77u: goto L_08868918;
    case 78u: goto L_08868920;
    case 79u: goto L_08868928;
    case 80u: goto L_08868930;
    case 81u: goto L_08868938;
    case 82u: goto L_08868944;
    case 83u: goto L_08868950;
    case 84u: goto L_0886895C;
    case 85u: goto L_08868968;
    case 86u: goto L_08868974;
    case 87u: goto L_0886897C;
    case 88u: goto L_088689A8;
    case 89u: goto L_088689F4;
    case 90u: goto L_088689FC;
    case 91u: goto L_08868A44;
    case 92u: goto L_08868A58;
    case 93u: goto L_08868A80;
    case 94u: goto L_08868AA0;
    case 95u: goto L_08868AF8;
    case 96u: goto L_08868B2C;
    case 97u: goto L_08868B54;
    case 98u: goto L_08868B58;
    case 99u: goto L_08868B64;
    case 100u: goto L_08868B6C;
    case 101u: goto L_08868B74;
    case 102u: goto L_08868B7C;
    case 103u: goto L_08868B84;
    case 104u: goto L_08868B90;
    case 105u: goto L_08868B9C;
    case 106u: goto L_08868BA8;
    case 107u: goto L_08868BB4;
    case 108u: goto L_08868BC0;
    case 109u: goto L_08868BC4;
    case 110u: goto L_08868BE8;
    case 111u: goto L_08868C38;
    case 112u: goto L_08868C64;
    case 113u: goto L_08868C7C;
    case 114u: goto L_08868C9C;
    case 115u: goto L_08868CAC;
    case 116u: goto L_08868CC0;
    case 117u: goto L_08868CD4;
    case 118u: goto L_08868CE4;
    case 119u: goto L_08868CEC;
    case 120u: goto L_08868D04;
    case 121u: goto L_08868D10;
    case 122u: goto L_08868D18;
    case 123u: goto L_08868D2C;
    case 124u: goto L_08868D40;
    case 125u: goto L_08868D50;
    case 126u: goto L_08868D58;
    case 127u: goto L_08868D90;
    case 128u: goto L_08868DD0;
    case 129u: goto L_08868DEC;
    case 130u: goto L_08868DF4;
    case 131u: goto L_08868DFC;
    case 132u: goto L_08868E04;
    case 133u: goto L_08868E0C;
    case 134u: goto L_08868E14;
    case 135u: goto L_08868E1C;
    case 136u: goto L_08868E28;
    case 137u: goto L_08868E34;
    case 138u: goto L_08868E4C;
    case 139u: goto L_08868E54;
    case 140u: goto L_08868E5C;
    case 141u: goto L_08868E64;
    case 142u: goto L_08868E6C;
    case 143u: goto L_08868E70;
    case 144u: goto L_08868E80;
    case 145u: goto L_08868E88;
    case 146u: goto L_08868E98;
    case 147u: goto L_08868EA0;
    case 148u: goto L_08868EA8;
    case 149u: goto L_08868EB4;
    case 150u: goto L_08868F34;
    case 151u: goto L_08868F40;
    case 152u: goto L_08868F48;
    case 153u: goto L_08868F5C;
    case 154u: goto L_08868F6C;
    case 155u: goto L_08868F74;
    case 156u: goto L_08868F80;
    case 157u: goto L_08868F88;
    case 158u: goto L_08868F98;
    case 159u: goto L_08868FA8;
    case 160u: goto L_08868FB4;
    case 161u: goto L_08868FC8;
    case 162u: goto L_08868FE4;
    case 163u: goto L_08868FF0;
    case 164u: goto L_08868FF8;
    case 165u: goto L_08869010;
    case 166u: goto L_08869034;
    case 167u: goto L_0886903C;
    case 168u: goto L_0886904C;
    case 169u: goto L_08869088;
    case 170u: goto L_0886909C;
    case 171u: goto L_088690F0;
    case 172u: goto L_088690F8;
    case 173u: goto L_08869100;
    case 174u: goto L_0886910C;
    case 175u: goto L_08869118;
    case 176u: goto L_08869130;
    case 177u: goto L_08869138;
    case 178u: goto L_08869144;
    case 179u: goto L_08869168;
    case 180u: goto L_08869170;
    case 181u: goto L_0886917C;
    case 182u: goto L_0886919C;
    case 183u: goto L_088691A8;
    case 184u: goto L_088691B4;
    case 185u: goto L_088691C0;
    case 186u: goto L_088691CC;
    case 187u: goto L_088691DC;
    case 188u: goto L_088691EC;
    case 189u: goto L_08869204;
    case 190u: goto L_0886920C;
    case 191u: goto L_08869218;
    case 192u: goto L_08869238;
    case 193u: goto L_08869258;
    case 194u: goto L_08869264;
    case 195u: goto L_08869270;
    case 196u: goto L_08869280;
    case 197u: goto L_0886928C;
    case 198u: goto L_088692A4;
    case 199u: goto L_088692AC;
    case 200u: goto L_088692C8;
    case 201u: goto L_088692EC;
    case 202u: goto L_08869300;
    case 203u: goto L_08869318;
    case 204u: goto L_0886932C;
    case 205u: goto L_0886934C;
    case 206u: goto L_08869394;
    case 207u: goto L_088693B4;
    case 208u: goto L_088693BC;
    case 209u: goto L_088693C4;
    case 210u: goto L_088693D0;
    case 211u: goto L_08869414;
    case 212u: goto L_08869444;
    case 213u: goto L_08869474;
    case 214u: goto L_08869480;
    case 215u: goto L_08869488;
    case 216u: goto L_08869494;
    case 217u: goto L_088694A0;
    case 218u: goto L_088694AC;
    case 219u: goto L_088694B8;
    case 220u: goto L_088694C4;
    case 221u: goto L_088694D4;
    case 222u: goto L_08869504;
    case 223u: goto L_08869510;
    case 224u: goto L_08869520;
    case 225u: goto L_08869524;
    case 226u: goto L_08869540;
    case 227u: goto L_08869554;
    case 228u: goto L_08869570;
    case 229u: goto L_08869578;
    case 230u: goto L_0886957C;
    case 231u: goto L_08869598;
    case 232u: goto L_088695B8;
    case 233u: goto L_088695C4;
    case 234u: goto L_088695D4;
    case 235u: goto L_088695E0;
    case 236u: goto L_088695F0;
    case 237u: goto L_08869600;
    case 238u: goto L_08869628;
    case 239u: goto L_08869630;
    case 240u: goto L_08869634;
    case 241u: goto L_08869650;
    case 242u: goto L_08869670;
    case 243u: goto L_088696D4;
    case 244u: goto L_088696FC;
    case 245u: goto L_08869710;
    case 246u: goto L_08869730;
    case 247u: goto L_08869744;
    case 248u: goto L_0886975C;
    case 249u: goto L_08869764;
    case 250u: goto L_0886976C;
    case 251u: goto L_0886977C;
    case 252u: goto L_08869790;
    case 253u: goto L_088697D0;
    case 254u: goto L_088697D8;
    case 255u: goto L_088697EC;
    case 256u: goto L_08869824;
    case 257u: goto L_08869830;
    case 258u: goto L_08869838;
    case 259u: goto L_08869840;
    case 260u: goto L_08869848;
    case 261u: goto L_08869850;
    case 262u: goto L_088698D8;
    case 263u: goto L_08869928;
    case 264u: goto L_0886996C;
    case 265u: goto L_08869974;
    case 266u: goto L_088699A8;
    case 267u: goto L_088699C8;
    case 268u: goto L_08869A48;
    case 269u: goto L_08869AA4;
    case 270u: goto L_08869AF0;
    case 271u: goto L_08869AF4;
    case 272u: goto L_08869B0C;
    case 273u: goto L_08869B20;
    case 274u: goto L_08869B38;
    case 275u: goto L_08869B3C;
    case 276u: goto L_08869B48;
    case 277u: goto L_08869B54;
    case 278u: goto L_08869B60;
    case 279u: goto L_08869B6C;
    case 280u: goto L_08869B80;
    case 281u: goto L_08869B8C;
    case 282u: goto L_08869B94;
    case 283u: goto L_08869BA0;
    case 284u: goto L_08869BAC;
    case 285u: goto L_08869BBC;
    case 286u: goto L_08869BCC;
    case 287u: goto L_08869BE4;
    case 288u: goto L_08869BEC;
    case 289u: goto L_08869BF4;
    case 290u: goto L_08869C0C;
    case 291u: goto L_08869C14;
    case 292u: goto L_08869C2C;
    case 293u: goto L_08869C34;
    case 294u: goto L_08869C40;
    case 295u: goto L_08869C50;
    case 296u: goto L_08869C58;
    case 297u: goto L_08869C60;
    case 298u: goto L_08869C6C;
    case 299u: goto L_08869C7C;
    case 300u: goto L_08869C94;
    case 301u: goto L_08869C9C;
    case 302u: goto L_08869CA8;
    case 303u: goto L_08869CB4;
    case 304u: goto L_08869CC0;
    case 305u: goto L_08869CC8;
    case 306u: goto L_08869CCC;
    case 307u: goto L_08869CD4;
    case 308u: goto L_08869CE0;
    case 309u: goto L_08869CFC;
    case 310u: goto L_08869D04;
    case 311u: goto L_08869D3C;
    case 312u: goto L_08869E38;
    case 313u: goto L_08869E44;
    case 314u: goto L_08869E58;
    case 315u: goto L_08869F20;
    case 316u: goto L_08869F4C;
    case 317u: goto L_08869F80;
    case 318u: goto L_0886A028;
    case 319u: goto L_0886A030;
    case 320u: goto L_0886A038;
    case 321u: goto L_0886A0A4;
    case 322u: goto L_0886A0C0;
    case 323u: goto L_0886A0EC;
    case 324u: goto L_0886A0F8;
    case 325u: goto L_0886A10C;
    case 326u: goto L_0886A118;
    case 327u: goto L_0886A124;
    case 328u: goto L_0886A134;
    case 329u: goto L_0886A144;
    case 330u: goto L_0886A154;
    case 331u: goto L_0886A160;
    case 332u: goto L_0886A168;
    case 333u: goto L_0886A174;
    case 334u: goto L_0886A184;
    case 335u: goto L_0886A18C;
    case 336u: goto L_0886A190;
    case 337u: goto L_0886A1AC;
    case 338u: goto L_0886A1D0;
    case 339u: goto L_0886A1E0;
    case 340u: goto L_0886A1E8;
    case 341u: goto L_0886A1F4;
    case 342u: goto L_0886A1FC;
    case 343u: goto L_0886A208;
    case 344u: goto L_0886A214;
    case 345u: goto L_0886A220;
    case 346u: goto L_0886A230;
    case 347u: goto L_0886A23C;
    case 348u: goto L_0886A244;
    case 349u: goto L_0886A250;
    case 350u: goto L_0886A258;
    case 351u: goto L_0886A260;
    case 352u: goto L_0886A264;
    case 353u: goto L_0886A278;
    case 354u: goto L_0886A29C;
    case 355u: goto L_0886A2A8;
    case 356u: goto L_0886A2B8;
    case 357u: goto L_0886A2D0;
    case 358u: goto L_0886A2EC;
    case 359u: goto L_0886A2F8;
    case 360u: goto L_0886A30C;
    case 361u: goto L_0886A320;
    case 362u: goto L_0886A344;
    case 363u: goto L_0886A358;
    case 364u: goto L_0886A364;
    case 365u: goto L_0886A370;
    case 366u: goto L_0886A378;
    case 367u: goto L_0886A384;
    case 368u: goto L_0886A398;
    case 369u: goto L_0886A39C;
    case 370u: goto L_0886A3A0;
    case 371u: goto L_0886A3B0;
    case 372u: goto L_0886A3C4;
    case 373u: goto L_0886A3D4;
    case 374u: goto L_0886A3E4;
    case 375u: goto L_0886A3F8;
    case 376u: goto L_0886A404;
    case 377u: goto L_0886A414;
    case 378u: goto L_0886A438;
    case 379u: goto L_0886A468;
    case 380u: goto L_0886A474;
    case 381u: goto L_0886A48C;
    case 382u: goto L_0886A498;
    case 383u: goto L_0886A4A8;
    case 384u: goto L_0886A4B8;
    case 385u: goto L_0886A4C4;
    case 386u: goto L_0886A4CC;
    case 387u: goto L_0886A4D4;
    case 388u: goto L_0886A4E8;
    case 389u: goto L_0886A4F8;
    case 390u: goto L_0886A508;
    case 391u: goto L_0886A510;
    case 392u: goto L_0886A520;
    case 393u: goto L_0886A524;
    case 394u: goto L_0886A544;
    case 395u: goto L_0886A580;
    case 396u: goto L_0886A598;
    case 397u: goto L_0886A5B0;
    case 398u: goto L_0886A5CC;
    case 399u: goto L_0886A5D4;
    case 400u: goto L_0886A5E0;
    case 401u: goto L_0886A5E4;
    case 402u: goto L_0886A5F0;
    case 403u: goto L_0886A5FC;
    case 404u: goto L_0886A600;
    case 405u: goto L_0886A610;
    case 406u: goto L_0886A61C;
    case 407u: goto L_0886A624;
    case 408u: goto L_0886A630;
    case 409u: goto L_0886A638;
    case 410u: goto L_0886A640;
    case 411u: goto L_0886A650;
    case 412u: goto L_0886A660;
    case 413u: goto L_0886A668;
    case 414u: goto L_0886A694;
    case 415u: goto L_0886A6B8;
    case 416u: goto L_0886A6C8;
    case 417u: goto L_0886A6DC;
    case 418u: goto L_0886A704;
    case 419u: goto L_0886A70C;
    case 420u: goto L_0886A718;
    case 421u: goto L_0886A724;
    case 422u: goto L_0886A730;
    case 423u: goto L_0886A740;
    case 424u: goto L_0886A74C;
    case 425u: goto L_0886A75C;
    case 426u: goto L_0886A764;
    case 427u: goto L_0886A774;
    case 428u: goto L_0886A78C;
    case 429u: goto L_0886A7CC;
    case 430u: goto L_0886A7D4;
    case 431u: goto L_0886A7E4;
    case 432u: goto L_0886A7F4;
    case 433u: goto L_0886A804;
    case 434u: goto L_0886A80C;
    case 435u: goto L_0886A81C;
    case 436u: goto L_0886A824;
    case 437u: goto L_0886A830;
    case 438u: goto L_0886A83C;
    case 439u: goto L_0886A844;
    case 440u: goto L_0886A868;
    case 441u: goto L_0886A878;
    case 442u: goto L_0886A888;
    case 443u: goto L_0886A890;
    case 444u: goto L_0886A8A0;
    case 445u: goto L_0886A8A8;
    case 446u: goto L_0886A8B4;
    case 447u: goto L_0886A8C4;
    case 448u: goto L_0886A8D4;
    case 449u: goto L_0886A8DC;
    case 450u: goto L_0886A8EC;
    case 451u: goto L_0886A8F4;
    case 452u: goto L_0886A900;
    case 453u: goto L_0886A90C;
    case 454u: goto L_0886A914;
    case 455u: goto L_0886A924;
    case 456u: goto L_0886A930;
    case 457u: goto L_0886A944;
    case 458u: goto L_0886A954;
    case 459u: goto L_0886A95C;
    case 460u: goto L_0886A960;
    case 461u: goto L_0886A970;
    case 462u: goto L_0886A980;
    case 463u: goto L_0886A988;
    case 464u: goto L_0886A994;
    case 465u: goto L_0886A9A0;
    case 466u: goto L_0886A9AC;
    case 467u: goto L_0886A9B4;
    case 468u: goto L_0886A9B8;
    case 469u: goto L_0886A9C8;
    case 470u: goto L_0886A9D8;
    case 471u: goto L_0886A9E0;
    case 472u: goto L_0886A9EC;
    case 473u: goto L_0886A9F8;
    case 474u: goto L_0886AA04;
    case 475u: goto L_0886AA0C;
    case 476u: goto L_0886AA18;
    case 477u: goto L_0886AA24;
    case 478u: goto L_0886AA34;
    case 479u: goto L_0886AA44;
    case 480u: goto L_0886AA54;
    case 481u: goto L_0886AA68;
    case 482u: goto L_0886AA7C;
    case 483u: goto L_0886AA8C;
    case 484u: goto L_0886AA98;
    case 485u: goto L_0886AAA8;
    case 486u: goto L_0886AAB8;
    case 487u: goto L_0886AAC0;
    case 488u: goto L_0886AAF0;
    case 489u: goto L_0886AB10;
    case 490u: goto L_0886AB1C;
    case 491u: goto L_0886AB34;
    case 492u: goto L_0886AB40;
    case 493u: goto L_0886AB48;
    case 494u: goto L_0886AB58;
    case 495u: goto L_0886AB64;
    case 496u: goto L_0886AB74;
    case 497u: goto L_0886AB8C;
    case 498u: goto L_0886ABAC;
    case 499u: goto L_0886ABBC;
    case 500u: goto L_0886ABC8;
    case 501u: goto L_0886ABE4;
    case 502u: goto L_0886ABEC;
    case 503u: goto L_0886ABF8;
    case 504u: goto L_0886AC00;
    case 505u: goto L_0886AC14;
    case 506u: goto L_0886AC34;
    case 507u: goto L_0886AC3C;
    case 508u: goto L_0886AC44;
    case 509u: goto L_0886AC4C;
    case 510u: goto L_0886AC58;
    case 511u: goto L_0886AC5C;
    case 512u: goto L_0886AC70;
    case 513u: goto L_0886AC78;
    case 514u: goto L_0886AC94;
    case 515u: goto L_0886ACA4;
    case 516u: goto L_0886ACE4;
    case 517u: goto L_0886ACFC;
    case 518u: goto L_0886AD04;
    case 519u: goto L_0886AD10;
    case 520u: goto L_0886AD34;
    case 521u: goto L_0886AD44;
    case 522u: goto L_0886AD4C;
    case 523u: goto L_0886AD60;
    case 524u: goto L_0886AD68;
    case 525u: goto L_0886AD90;
    case 526u: goto L_0886ADA0;
    case 527u: goto L_0886ADA8;
    case 528u: goto L_0886ADAC;
    case 529u: goto L_0886ADB4;
    case 530u: goto L_0886ADC4;
    case 531u: goto L_0886ADCC;
    case 532u: goto L_0886ADD0;
    case 533u: goto L_0886ADD4;
    case 534u: goto L_0886ADE4;
    case 535u: goto L_0886ADF8;
    case 536u: goto L_0886AE0C;
    case 537u: goto L_0886AE10;
    case 538u: goto L_0886AE38;
    case 539u: goto L_0886AE48;
    case 540u: goto L_0886AE50;
    case 541u: goto L_0886AE54;
    case 542u: goto L_0886AE5C;
    case 543u: goto L_0886AE6C;
    case 544u: goto L_0886AE74;
    case 545u: goto L_0886AE78;
    case 546u: goto L_0886AE7C;
    case 547u: goto L_0886AE8C;
    case 548u: goto L_0886AEA0;
    case 549u: goto L_0886AEB4;
    case 550u: goto L_0886AEC8;
    case 551u: goto L_0886AED4;
    case 552u: goto L_0886AEE8;
    case 553u: goto L_0886AEF4;
    case 554u: goto L_0886AF20;
    case 555u: goto L_0886AF6C;
    case 556u: goto L_0886AF74;
    case 557u: goto L_0886AF84;
    case 558u: goto L_0886AFA4;
    case 559u: goto L_0886AFC0;
    case 560u: goto L_0886AFE4;
    case 561u: goto L_0886AFEC;
    case 562u: goto L_0886AFF8;
    case 563u: goto L_0886B014;
    case 564u: goto L_0886B024;
    case 565u: goto L_0886B030;
    case 566u: goto L_0886B054;
    case 567u: goto L_0886B058;
    case 568u: goto L_0886B080;
    case 569u: goto L_0886B0A0;
    case 570u: goto L_0886B0A4;
    case 571u: goto L_0886B0C0;
    case 572u: goto L_0886B0D4;
    case 573u: goto L_0886B0D8;
    case 574u: goto L_0886B0F8;
    case 575u: goto L_0886B10C;
    case 576u: goto L_0886B118;
    case 577u: goto L_0886B144;
    case 578u: goto L_0886B14C;
    case 579u: goto L_0886B168;
    case 580u: goto L_0886B174;
    case 581u: goto L_0886B19C;
    case 582u: goto L_0886B1A4;
    case 583u: goto L_0886B1D0;
    case 584u: goto L_0886B1D8;
    case 585u: goto L_0886B210;
    case 586u: goto L_0886B218;
    case 587u: goto L_0886B234;
    case 588u: goto L_0886B240;
    case 589u: goto L_0886B260;
    case 590u: goto L_0886B26C;
    case 591u: goto L_0886B274;
    case 592u: goto L_0886B27C;
    case 593u: goto L_0886B294;
    case 594u: goto L_0886B2A0;
    case 595u: goto L_0886B2AC;
    case 596u: goto L_0886B2B8;
    case 597u: goto L_0886B2C8;
    case 598u: goto L_0886B2DC;
    case 599u: goto L_0886B304;
    case 600u: goto L_0886B328;
    case 601u: goto L_0886B330;
    case 602u: goto L_0886B33C;
    case 603u: goto L_0886B354;
    case 604u: goto L_0886B36C;
    case 605u: goto L_0886B374;
    case 606u: goto L_0886B384;
    case 607u: goto L_0886B3A4;
    case 608u: goto L_0886B3AC;
    case 609u: goto L_0886B3BC;
    case 610u: goto L_0886B3F4;
    case 611u: goto L_0886B404;
    case 612u: goto L_0886B414;
    case 613u: goto L_0886B42C;
    case 614u: goto L_0886B43C;
    case 615u: goto L_0886B444;
    case 616u: goto L_0886B454;
    case 617u: goto L_0886B474;
    case 618u: goto L_0886B488;
    case 619u: goto L_0886B51C;
    case 620u: goto L_0886B534;
    case 621u: goto L_0886B54C;
    case 622u: goto L_0886B560;
    case 623u: goto L_0886B568;
    case 624u: goto L_0886B570;
    case 625u: goto L_0886B578;
    case 626u: goto L_0886B580;
    case 627u: goto L_0886B588;
    case 628u: goto L_0886B590;
    case 629u: goto L_0886B59C;
    case 630u: goto L_0886B5A8;
    case 631u: goto L_0886B5B4;
    case 632u: goto L_0886B5E0;
    case 633u: goto L_0886B600;
    case 634u: goto L_0886B608;
    case 635u: goto L_0886B610;
    case 636u: goto L_0886B61C;
    case 637u: goto L_0886B624;
    case 638u: goto L_0886B62C;
    case 639u: goto L_0886B634;
    case 640u: goto L_0886B668;
    case 641u: goto L_0886B680;
    case 642u: goto L_0886B688;
    case 643u: goto L_0886B694;
    case 644u: goto L_0886B69C;
    case 645u: goto L_0886B6AC;
    case 646u: goto L_0886B6C8;
    case 647u: goto L_0886B6D8;
    case 648u: goto L_0886B6E4;
    case 649u: goto L_0886B6FC;
    case 650u: goto L_0886B704;
    case 651u: goto L_0886B708;
    case 652u: goto L_0886B728;
    case 653u: goto L_0886B7F0;
    case 654u: goto L_0886B818;
    case 655u: goto L_0886B830;
    case 656u: goto L_0886B850;
    case 657u: goto L_0886B8CC;
    case 658u: goto L_0886B910;
    case 659u: goto L_0886B920;
    case 660u: goto L_0886B930;
    case 661u: goto L_0886B940;
    case 662u: goto L_0886B958;
    case 663u: goto L_0886B968;
    case 664u: goto L_0886B9AC;
    case 665u: goto L_0886B9C4;
    case 666u: goto L_0886B9DC;
    case 667u: goto L_0886B9EC;
    case 668u: goto L_0886BA10;
    case 669u: goto L_0886BA18;
    case 670u: goto L_0886BA1C;
    case 671u: goto L_0886BA34;
    case 672u: goto L_0886BA4C;
    case 673u: goto L_0886BA54;
    case 674u: goto L_0886BA58;
    case 675u: goto L_0886BA68;
    case 676u: goto L_0886BA80;
    case 677u: goto L_0886BA88;
    case 678u: goto L_0886BAAC;
    case 679u: goto L_0886BAF0;
    case 680u: goto L_0886BB0C;
    case 681u: goto L_0886BB24;
    case 682u: goto L_0886BB3C;
    case 683u: goto L_0886BB50;
    case 684u: goto L_0886BB84;
    case 685u: goto L_0886BB8C;
    case 686u: goto L_0886BBA8;
    case 687u: goto L_0886BBBC;
    case 688u: goto L_0886BBC4;
    case 689u: goto L_0886BBE4;
    case 690u: goto L_0886BBEC;
    case 691u: goto L_0886BBF4;
    case 692u: goto L_0886BBFC;
    case 693u: goto L_0886BC18;
    case 694u: goto L_0886BC2C;
    case 695u: goto L_0886BC34;
    case 696u: goto L_0886BC50;
    case 697u: goto L_0886BC64;
    case 698u: goto L_0886BC80;
    case 699u: goto L_0886BC9C;
    case 700u: goto L_0886BCBC;
    case 701u: goto L_0886BCC4;
    case 702u: goto L_0886BCDC;
    case 703u: goto L_0886BCF0;
    case 704u: goto L_0886BD0C;
    case 705u: goto L_0886BD2C;
    case 706u: goto L_0886BD34;
    case 707u: goto L_0886BD4C;
    case 708u: goto L_0886BD60;
    case 709u: goto L_0886BDB4;
    case 710u: goto L_0886BDC0;
    case 711u: goto L_0886BDCC;
    case 712u: goto L_0886BDDC;
    case 713u: goto L_0886BE28;
    case 714u: goto L_0886BE34;
    case 715u: goto L_0886BE48;
    case 716u: goto L_0886BE4C;
    case 717u: goto L_0886BE90;
    case 718u: goto L_0886BEA8;
    case 719u: goto L_0886BEB0;
    case 720u: goto L_0886BEC4;
    case 721u: goto L_0886BED0;
    case 722u: goto L_0886BF88;
    case 723u: goto L_0886BF98;
    case 724u: goto L_0886BFA8;
    case 725u: goto L_0886BFC0;
    case 726u: goto L_0886BFCC;
    case 727u: goto L_0886BFD8;
    case 728u: goto L_0886BFDC;
    case 729u: goto L_0886BFE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08868000:
    ctx.gpr[6] = (4096u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[18] & ctx.gpr[5]);
    ctx.gpr[6] = (256u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    goto L_0886803C;
L_0886803C:
    ctx.gpr[5] = (1026u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
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
L_08868074:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x088680ACu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 648u, 0x08867E10u>(ctx, &aot_mem) && ctx.pc == 0x088680ACu) goto L_088680AC;
    return;
L_088680AC:
    ctx.gpr[18] = (2233u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-4912));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[16] << 4u);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[17] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088680D8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088680D8u) goto L_088680D8;
    return;
L_088680D8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13952)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_0886812C;
      }
      goto L_088680E8;
    }
L_088680E8:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] << 4u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[7] = (2229u << 16u);
      if (branch_taken) {
          goto L_0886812C;
      }
      goto L_088680FC;
    }
L_088680FC:
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8))))));
    goto L_08868104;
L_08868104:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[9] = (ctx.gpr[10] - ctx.gpr[9]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[9] = (ctx.gpr[9] - ctx.gpr[11]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8))))));
        goto L_08868104;
    }
    goto L_0886812C;
L_0886812C:
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
      if (branch_taken) {
          goto L_08868194;
      }
      goto L_08868138;
    }
L_08868138:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0886817C;
      }
      goto L_08868140;
    }
L_08868140:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08868170;
      }
      goto L_08868148;
    }
L_08868148:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08868164;
      }
      goto L_08868150;
    }
L_08868150:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08868188;
      }
      goto L_08868158;
    }
L_08868158:
    ctx.gpr[4] = (1028u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | ctx.gpr[16]);
      if (branch_taken) {
          goto L_0886819C;
      }
      goto L_08868164;
    }
L_08868164:
    ctx.gpr[4] = (1029u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | ctx.gpr[16]);
      if (branch_taken) {
          goto L_0886819C;
      }
      goto L_08868170;
    }
L_08868170:
    ctx.gpr[4] = (1027u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | ctx.gpr[16]);
      if (branch_taken) {
          goto L_0886819C;
      }
      goto L_0886817C;
    }
L_0886817C:
    ctx.gpr[4] = (1026u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | ctx.gpr[16]);
      if (branch_taken) {
          goto L_0886819C;
      }
      goto L_08868188;
    }
L_08868188:
    ctx.gpr[4] = (1024u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | ctx.gpr[16]);
      if (branch_taken) {
          goto L_0886819C;
      }
      goto L_08868194;
    }
L_08868194:
    ctx.gpr[4] = (1025u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | ctx.gpr[16]);
    goto L_0886819C;
L_0886819C:
    ctx.gpr[4] = (4736u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(286));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08868204;
      }
      goto L_088681B8;
    }
L_088681B8:
    ctx.gpr[4] = (ctx.gpr[17] >> 8u);
    ctx.gpr[6] = (15u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[6] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[17] & ctx.gpr[5]);
    ctx.gpr[6] = (256u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    goto L_08868204;
L_08868204:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886823C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[8] | 0u);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08868288u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 648u, 0x08867E10u>(ctx, &aot_mem) && ctx.pc == 0x08868288u) goto L_08868288;
    return;
L_08868288:
    ctx.gpr[20] = (2233u << 16u);
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(-4912));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[16] << 4u);
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[19] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[19] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088682B4u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088682B4u) goto L_088682B4;
    return;
L_088682B4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13952)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (ctx.gpr[30] + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08868308;
      }
      goto L_088682C4;
    }
L_088682C4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (ctx.gpr[16] << 4u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    ctx.gpr[5] = (2229u << 16u);
      if (branch_taken) {
          goto L_08868308;
      }
      goto L_088682D8;
    }
L_088682D8:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    goto L_088682E0;
L_088682E0:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[7] = (ctx.gpr[8] - ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[9]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    if (ctx.gpr[4] != ctx.gpr[16]) {
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
        goto L_088682E0;
    }
    goto L_08868308;
L_08868308:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[22] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08868328u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08868328u) goto L_08868328;
    return;
L_08868328:
    ctx.gpr[4] = (ctx.gpr[23] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-4912)));
      if (branch_taken) {
          goto L_08868390;
      }
      goto L_08868334;
    }
L_08868334:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08868378;
      }
      goto L_0886833C;
    }
L_0886833C:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0886836C;
      }
      goto L_08868344;
    }
L_08868344:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08868360;
      }
      goto L_0886834C;
    }
L_0886834C:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08868384;
      }
      goto L_08868354;
    }
L_08868354:
    ctx.gpr[4] = (1028u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[4] | ctx.gpr[18]);
      if (branch_taken) {
          goto L_08868398;
      }
      goto L_08868360;
    }
L_08868360:
    ctx.gpr[4] = (1029u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[4] | ctx.gpr[18]);
      if (branch_taken) {
          goto L_08868398;
      }
      goto L_0886836C;
    }
L_0886836C:
    ctx.gpr[4] = (1027u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[4] | ctx.gpr[18]);
      if (branch_taken) {
          goto L_08868398;
      }
      goto L_08868378;
    }
L_08868378:
    ctx.gpr[4] = (1026u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[4] | ctx.gpr[18]);
      if (branch_taken) {
          goto L_08868398;
      }
      goto L_08868384;
    }
L_08868384:
    ctx.gpr[4] = (1024u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[4] | ctx.gpr[18]);
      if (branch_taken) {
          goto L_08868398;
      }
      goto L_08868390;
    }
L_08868390:
    ctx.gpr[4] = (1025u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] | ctx.gpr[18]);
    goto L_08868398;
L_08868398:
    ctx.gpr[4] = (4736u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4382));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-4912), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08868400;
      }
      goto L_088683B4;
    }
L_088683B4:
    ctx.gpr[4] = (ctx.gpr[22] >> 8u);
    ctx.gpr[5] = (15u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[22] & ctx.gpr[5]);
    ctx.gpr[6] = (512u << 16u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-4912), ctx.gpr[17]);
    goto L_08868400;
L_08868400:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] >> 8u);
      if (branch_taken) {
          goto L_08868450;
      }
      goto L_08868408;
    }
L_08868408:
    ctx.gpr[5] = (15u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[19] & ctx.gpr[5]);
    ctx.gpr[6] = (256u << 16u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-4912), ctx.gpr[17]);
    goto L_08868450;
L_08868450:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08868494:
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_08868518;
      }
      goto L_088684A4;
    }
L_088684A4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08868558;
      }
      goto L_08868518;
    }
L_08868518:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08868558;
L_08868558:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08868560:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088685D0;
      }
      goto L_08868584;
    }
L_08868584:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4912));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[17] << 5u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[18] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(5552), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2592));
      if (branch_taken) {
          goto L_088685D8;
      }
      goto L_088685B8;
    }
L_088685B8:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088685C8u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088685C8u) goto L_088685C8;
    return;
L_088685C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088685F4;
      }
      goto L_088685D0;
    }
L_088685D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08868658;
      }
      goto L_088685D8;
    }
L_088685D8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088685F4u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2528));
    goto L_08868C64;
L_088685F4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08868600u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08868494;
L_08868600:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868640;
      }
      goto L_08868608;
    }
L_08868608:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (2269u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2528)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2528));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08868640;
L_08868640:
    ctx.gpr[4] = (0u | 479u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(5560), ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(5552)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5556), ctx.gpr[17]);
    goto L_08868658;
L_08868658:
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
L_08868674:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(1), ctx.gpr[8]));
    ctx.gpr[9] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(5), ctx.gpr[9]));
    ctx.gpr[10] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(9), ctx.gpr[10]));
    ctx.gpr[11] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(17), ctx.gpr[11]));
    ctx.gpr[12] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(21), ctx.gpr[12]));
    ctx.gpr[13] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(25), ctx.gpr[13]));
    ctx.gpr[14] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(33), ctx.gpr[14]));
    ctx.gpr[15] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(37), ctx.gpr[15]));
    ctx.gpr[24] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(41), ctx.gpr[24]));
    ctx.gpr[25] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(49), ctx.gpr[25]));
    ctx.gpr[2] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(53), ctx.gpr[2]));
    ctx.gpr[3] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(57), ctx.gpr[3]));
    ctx.gpr[8] = ((ctx.gpr[8] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[9] = ((ctx.gpr[9] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[10] = ((ctx.gpr[10] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[11] = ((ctx.gpr[11] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[12] = ((ctx.gpr[12] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[13] = ((ctx.gpr[13] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[14] = ((ctx.gpr[14] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[15] = ((ctx.gpr[15] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[24] = ((ctx.gpr[24] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[25] = ((ctx.gpr[25] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[3] = ((ctx.gpr[3] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(24), ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(28), ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(32), ctx.gpr[24]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), ctx.gpr[25]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08868718:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(5552)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088687B8;
      }
      goto L_08868740;
    }
L_08868740:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (2233u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (14848u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(-4912));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 59u);
    ctx.gpr[31] = (0x0886877Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2592));
    goto L_08868674;
L_0886877C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5552)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(5560)));
    ctx.gpr[6] = (4608u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (ctx.gpr[19] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088687C0;
      }
      goto L_088687B0;
    }
L_088687B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886880C;
      }
      goto L_088687B8;
    }
L_088687B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08868828;
      }
      goto L_088687C0;
    }
L_088687C0:
    ctx.gpr[6] = (ctx.gpr[4] >> 8u);
    ctx.gpr[7] = (15u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[7] = (4096u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (256u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (256u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    goto L_0886880C;
L_0886880C:
    ctx.gpr[4] = (1026u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    goto L_08868828;
L_08868828:
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
L_08868844:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5552), 0u);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5556), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886885C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(5552)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08868930;
      }
      goto L_08868898;
    }
L_08868898:
    ctx.gpr[21] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (14848u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(-4912));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 59u);
    ctx.gpr[31] = (0x088688D4u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2592));
    goto L_08868674;
L_088688D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[20] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[20] = (ctx.gpr[20] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088688F8u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088688F8u) goto L_088688F8;
    return;
L_088688F8:
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(-2));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
      if (branch_taken) {
          goto L_08868974;
      }
      goto L_08868908;
    }
L_08868908:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0886895C;
      }
      goto L_08868910;
    }
L_08868910:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08868950;
      }
      goto L_08868918;
    }
L_08868918:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08868938;
      }
      goto L_08868920;
    }
L_08868920:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08868944;
      }
      goto L_08868928;
    }
L_08868928:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08868968;
      }
      goto L_08868930;
    }
L_08868930:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08868A58;
      }
      goto L_08868938;
    }
L_08868938:
    ctx.gpr[5] = (1028u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[5] | ctx.gpr[18]);
      if (branch_taken) {
          goto L_0886897C;
      }
      goto L_08868944;
    }
L_08868944:
    ctx.gpr[5] = (1029u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[5] | ctx.gpr[18]);
      if (branch_taken) {
          goto L_0886897C;
      }
      goto L_08868950;
    }
L_08868950:
    ctx.gpr[5] = (1027u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[5] | ctx.gpr[18]);
      if (branch_taken) {
          goto L_0886897C;
      }
      goto L_0886895C;
    }
L_0886895C:
    ctx.gpr[5] = (1026u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[5] | ctx.gpr[18]);
      if (branch_taken) {
          goto L_0886897C;
      }
      goto L_08868968;
    }
L_08868968:
    ctx.gpr[5] = (1024u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[5] | ctx.gpr[18]);
      if (branch_taken) {
          goto L_0886897C;
      }
      goto L_08868974;
    }
L_08868974:
    ctx.gpr[5] = (1025u << 16u);
    ctx.gpr[18] = (ctx.gpr[5] | ctx.gpr[18]);
    goto L_0886897C;
L_0886897C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(5560)));
    ctx.gpr[6] = (4608u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4096u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(5552)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088689F4;
      }
      goto L_088689A8;
    }
L_088689A8:
    ctx.gpr[5] = (ctx.gpr[20] >> 8u);
    ctx.gpr[6] = (15u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[6] = (4096u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[20] & ctx.gpr[5]);
    ctx.gpr[6] = (512u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    goto L_088689F4;
L_088689F4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] >> 8u);
      if (branch_taken) {
          goto L_08868A44;
      }
      goto L_088689FC;
    }
L_088689FC:
    ctx.gpr[6] = (15u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[6] = (4096u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[19] & ctx.gpr[5]);
    ctx.gpr[6] = (256u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    goto L_08868A44;
L_08868A44:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    goto L_08868A58;
L_08868A58:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08868A80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2592));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08868AA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08868494;
L_08868AA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (2269u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2528)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2528));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[17];
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (0u | 479u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5560), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08868AF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[18] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08868B58;
      }
      goto L_08868B2C;
    }
L_08868B2C:
    ctx.gpr[5] = (14848u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-4912));
    ctx.gpr[5] = (0u | 59u);
    ctx.gpr[31] = (0x08868B54u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2592));
    goto L_08868674;
L_08868B54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    goto L_08868B58;
L_08868B58:
    ctx.gpr[5] = (ctx.gpr[19] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (1025u << 16u);
      if (branch_taken) {
          goto L_08868BC0;
      }
      goto L_08868B64;
    }
L_08868B64:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08868BA8;
      }
      goto L_08868B6C;
    }
L_08868B6C:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08868B9C;
      }
      goto L_08868B74;
    }
L_08868B74:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08868B90;
      }
      goto L_08868B7C;
    }
L_08868B7C:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08868BB4;
      }
      goto L_08868B84;
    }
L_08868B84:
    ctx.gpr[5] = (1028u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | ctx.gpr[16]);
      if (branch_taken) {
          goto L_08868BC4;
      }
      goto L_08868B90;
    }
L_08868B90:
    ctx.gpr[5] = (1029u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | ctx.gpr[16]);
      if (branch_taken) {
          goto L_08868BC4;
      }
      goto L_08868B9C;
    }
L_08868B9C:
    ctx.gpr[5] = (1027u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | ctx.gpr[16]);
      if (branch_taken) {
          goto L_08868BC4;
      }
      goto L_08868BA8;
    }
L_08868BA8:
    ctx.gpr[5] = (1026u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | ctx.gpr[16]);
      if (branch_taken) {
          goto L_08868BC4;
      }
      goto L_08868BB4;
    }
L_08868BB4:
    ctx.gpr[5] = (1024u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | ctx.gpr[16]);
      if (branch_taken) {
          goto L_08868BC4;
      }
      goto L_08868BC0;
    }
L_08868BC0:
    ctx.gpr[16] = (ctx.gpr[5] | ctx.gpr[16]);
    goto L_08868BC4;
L_08868BC4:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(5560)));
    ctx.gpr[6] = (4608u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08868C38;
      }
      goto L_08868BE8;
    }
L_08868BE8:
    ctx.gpr[5] = (ctx.gpr[17] >> 8u);
    ctx.gpr[6] = (15u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(-4912));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[6] = (4096u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[17] & ctx.gpr[5]);
    ctx.gpr[6] = (256u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    goto L_08868C38;
L_08868C38:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
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
L_08868C64:
    ctx.set_vfpu_scalar_bits_ct<34u>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_vfpu_scalar_bits_ct<66u>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<98u>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] << 5u);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 1u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    goto L_08868C7C;
L_08868C7C:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 4u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<2u, 4u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 4u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(-32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(-16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
      if (branch_taken) {
          goto L_08868C7C;
      }
      goto L_08868C9C;
    }
L_08868C9C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08868CAC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08868CC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08868CD4u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(5568), 0u);
    goto L_08868D2C;
L_08868CD4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08868CE4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08868CEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08868D04u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 749u, 0x08A07C08u>(ctx, &aot_mem) && ctx.pc == 0x08868D04u) goto L_08868D04;
    return;
L_08868D04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868D18;
      }
      goto L_08868D10;
    }
L_08868D10:
    ctx.gpr[31] = (0x08868D18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 357u, 0x0883989Cu>(ctx, &aot_mem) && ctx.pc == 0x08868D18u) goto L_08868D18;
    return;
L_08868D18:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08868D2C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08868D40:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[6] = (2227u << 16u);
      if (branch_taken) {
          goto L_08868D58;
      }
      goto L_08868D50;
    }
L_08868D50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(5568)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3004));
    goto L_08868D58;
L_08868D58:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(5568), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[8]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.hi);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08868D90:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.hi);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08868DD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08868DF4;
      }
      goto L_08868DEC;
    }
L_08868DEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08868E70;
      }
      goto L_08868DF4;
    }
L_08868DF4:
    ctx.gpr[31] = (0x08868DFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 354u, 0x08839870u>(ctx, &aot_mem) && ctx.pc == 0x08868DFCu) goto L_08868DFC;
    return;
L_08868DFC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868E14;
      }
      goto L_08868E04;
    }
L_08868E04:
    ctx.gpr[31] = (0x08868E0Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 706u, 0x08A07968u>(ctx, &aot_mem) && ctx.pc == 0x08868E0Cu) goto L_08868E0C;
    return;
L_08868E0C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08868E1C;
      }
      goto L_08868E14;
    }
L_08868E14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08868E70;
      }
      goto L_08868E1C;
    }
L_08868E1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08868E28u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 349u, 0x088397C8u>(ctx, &aot_mem) && ctx.pc == 0x08868E28u) goto L_08868E28;
    return;
L_08868E28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08868E34u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 701u, 0x08A07888u>(ctx, &aot_mem) && ctx.pc == 0x08868E34u) goto L_08868E34;
    return;
L_08868E34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < -6008 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (static_cast<std::int32_t>(ctx.gpr[16]) < 6009 ? 1u : 0u);
      if (branch_taken) {
          goto L_08868E5C;
      }
      goto L_08868E4C;
    }
L_08868E4C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868E5C;
      }
      goto L_08868E54;
    }
L_08868E54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08868E70;
      }
      goto L_08868E5C;
    }
L_08868E5C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08868E6C;
      }
      goto L_08868E64;
    }
L_08868E64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_08868E70;
      }
      goto L_08868E6C;
    }
L_08868E6C:
    ctx.gpr[2] = (0u | 3u);
    goto L_08868E70;
L_08868E70:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08868E80:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08868E88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
      if (branch_taken) {
          goto L_08868EA8;
      }
      goto L_08868E98;
    }
L_08868E98:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868EA8;
      }
      goto L_08868EA0;
    }
L_08868EA0:
    ctx.gpr[31] = (0x08868EA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08868EA8u) goto L_08868EA8;
    return;
L_08868EA8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08868EB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5720), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5648), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5648));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 225u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[31] = (0x08868F34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 624u, 0x0892FC30u>(ctx, &aot_mem) && ctx.pc == 0x08868F34u) goto L_08868F34;
    return;
L_08868F34:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08868F40u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4480));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 581u, 0x0892F99Cu>(ctx, &aot_mem) && ctx.pc == 0x08868F40u) goto L_08868F40;
    return;
L_08868F40:
    ctx.gpr[31] = (0x08868F48u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 619u, 0x0892FBDCu>(ctx, &aot_mem) && ctx.pc == 0x08868F48u) goto L_08868F48;
    return;
L_08868F48:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4468));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[31] = (0x08868F5Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4456));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x08868F5Cu) goto L_08868F5C;
    return;
L_08868F5C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7084), ctx.gpr[2]);
    ctx.gpr[31] = (0x08868F6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 626u, 0x0892FC54u>(ctx, &aot_mem) && ctx.pc == 0x08868F6Cu) goto L_08868F6C;
    return;
L_08868F6C:
    ctx.gpr[31] = (0x08868F74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 624u, 0x0892FC30u>(ctx, &aot_mem) && ctx.pc == 0x08868F74u) goto L_08868F74;
    return;
L_08868F74:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08868F80u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4444));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 581u, 0x0892F99Cu>(ctx, &aot_mem) && ctx.pc == 0x08868F80u) goto L_08868F80;
    return;
L_08868F80:
    ctx.gpr[31] = (0x08868F88u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 619u, 0x0892FBDCu>(ctx, &aot_mem) && ctx.pc == 0x08868F88u) goto L_08868F88;
    return;
L_08868F88:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4440));
    ctx.gpr[31] = (0x08868F98u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x08868F98u) goto L_08868F98;
    return;
L_08868F98:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7080), ctx.gpr[2]);
    ctx.gpr[31] = (0x08868FA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 626u, 0x0892FC54u>(ctx, &aot_mem) && ctx.pc == 0x08868FA8u) goto L_08868FA8;
    return;
L_08868FA8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08868FB4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5648), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5648));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08868FC8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5720)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08868FF0;
      }
      goto L_08868FE4;
    }
L_08868FE4:
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5720), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08868FF8;
      }
      goto L_08868FF0;
    }
L_08868FF0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5720), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08868FF8;
L_08868FF8:
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08869010;
    }
    goto L_08869010;
L_08869010:
    ctx.gpr[5] = (17029u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 21845u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5720), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08869034;
    }
    goto L_08869034;
L_08869034:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5720), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886903C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5648));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886904C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (ctx.gpr[7] & 255u);
    ctx.gpr[6] = (ctx.gpr[8] & 255u);
    ctx.gpr[7] = (ctx.gpr[10] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[16] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_0886932C;
      }
      goto L_08869088;
    }
L_08869088:
    ctx.gpr[8] = (2227u << 16u);
    ctx.gpr[17] = (ctx.gpr[8] + static_cast<std::uint32_t>(5648));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_0886932C;
      }
      goto L_0886909C;
    }
L_0886909C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[9] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(5648), static_cast<std::uint8_t>(ctx.gpr[9]));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886920C;
      }
      goto L_088690F0;
    }
L_088690F0:
    ctx.gpr[31] = (0x088690F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 751u, 0x08A2F74Cu>(ctx, &aot_mem) && ctx.pc == 0x088690F8u) goto L_088690F8;
    return;
L_088690F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886920C;
      }
      goto L_08869100;
    }
L_08869100:
    ctx.gpr[16] = (2232u << 16u);
    ctx.gpr[31] = (0x0886910Cu);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0886910Cu) goto L_0886910C;
    return;
L_0886910C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(664))))));
    ctx.gpr[31] = (0x08869118u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 646u, 0x088A7DB8u>(ctx, &aot_mem) && ctx.pc == 0x08869118u) goto L_08869118;
    return;
L_08869118:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08869168;
      }
      goto L_08869130;
    }
L_08869130:
    ctx.gpr[31] = (0x08869138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 195u, 0x08A35304u>(ctx, &aot_mem) && ctx.pc == 0x08869138u) goto L_08869138;
    return;
L_08869138:
    ctx.gpr[5] = (ctx.gpr[2] & 255u);
    ctx.gpr[31] = (0x08869144u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 102u, 0x088A8548u>(ctx, &aot_mem) && ctx.pc == 0x08869144u) goto L_08869144;
    return;
L_08869144:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0886919C;
      }
      goto L_08869168;
    }
L_08869168:
    ctx.gpr[31] = (0x08869170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 195u, 0x08A35304u>(ctx, &aot_mem) && ctx.pc == 0x08869170u) goto L_08869170;
    return;
L_08869170:
    ctx.gpr[5] = (ctx.gpr[2] & 255u);
    ctx.gpr[31] = (0x0886917Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 113u, 0x088A85F0u>(ctx, &aot_mem) && ctx.pc == 0x0886917Cu) goto L_0886917C;
    return;
L_0886917C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0886919C;
L_0886919C:
    ctx.gpr[4] = (0u | 225u);
    ctx.gpr[31] = (0x088691A8u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088691A8u) goto L_088691A8;
    return;
L_088691A8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(664))))));
    ctx.gpr[31] = (0x088691B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 650u, 0x088A7DE8u>(ctx, &aot_mem) && ctx.pc == 0x088691B4u) goto L_088691B4;
    return;
L_088691B4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08869204;
      }
      goto L_088691C0;
    }
L_088691C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_088691EC;
    }
    goto L_088691CC;
L_088691CC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[31] = (0x088691DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x088691DCu) goto L_088691DC;
    return;
L_088691DC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_088691EC;
L_088691EC:
    ctx.gpr[5] = (17096u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(178)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[22] = ctx.fpr[12] / ctx.fpr[22];
    goto L_08869204;
L_08869204:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088692EC;
      }
      goto L_0886920C;
    }
L_0886920C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088692AC;
      }
      goto L_08869218;
    }
L_08869218:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 12u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088692AC;
      }
      goto L_08869238;
    }
L_08869238:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08869258u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08869258u) goto L_08869258;
    return;
L_08869258:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088692A4;
      }
      goto L_08869264;
    }
L_08869264:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886928C;
      }
      goto L_08869270;
    }
L_08869270:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(41));
    ctx.gpr[31] = (0x08869280u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08869280u) goto L_08869280;
    return;
L_08869280:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(41)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0886928C;
L_0886928C:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 225u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088692A4;
L_088692A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088692EC;
      }
      goto L_088692AC;
    }
L_088692AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088692EC;
      }
      goto L_088692C8;
    }
L_088692C8:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 225u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2044)));
    ctx.fpr[22] = ctx.fpr[22] / ctx.fpr[12];
    goto L_088692EC;
L_088692EC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_08869300;
    }
    goto L_08869300;
L_08869300:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(44));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08869318u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 441u, 0x08862A6Cu>(ctx, &aot_mem) && ctx.pc == 0x08869318u) goto L_08869318;
    return;
L_08869318:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0886932Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629E4u>(ctx, &aot_mem) && ctx.pc == 0x0886932Cu) goto L_0886932C;
    return;
L_0886932C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
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
L_0886934C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(117)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088693BC;
      }
      goto L_08869394;
    }
L_08869394:
    ctx.gpr[17] = (2227u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(5720)));
    ctx.gpr[16] = (2227u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[20] = (2229u << 16u);
      if (branch_taken) {
          goto L_088693C4;
      }
      goto L_088693B4;
    }
L_088693B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08869474;
      }
      goto L_088693BC;
    }
L_088693BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08869D04;
      }
      goto L_088693C4;
    }
L_088693C4:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x088693D0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x088693D0u) goto L_088693D0;
    return;
L_088693D0:
    ctx.gpr[4] = (16409u << 16u);
    ctx.gpr[5] = (0u | 255u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(5720)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(0u));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (17184u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08869414;
    }
    goto L_08869414;
L_08869414:
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[6] = (17392u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (17288u << 16u);
    ctx.gpr[31] = (0x08869444u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 897u, 0x08AD39E0u>(ctx, &aot_mem) && ctx.pc == 0x08869444u) goto L_08869444;
    return;
L_08869444:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(5720)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x08869474u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(5720), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 858u, 0x08AD3674u>(ctx, &aot_mem) && ctx.pc == 0x08869474u) goto L_08869474;
    return;
L_08869474:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5648)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08869B60;
      }
      goto L_08869480;
    }
L_08869480:
    ctx.gpr[31] = (0x08869488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08869488u) goto L_08869488;
    return;
L_08869488:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08869494u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08869494u) goto L_08869494;
    return;
L_08869494:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x088694A0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x088694A0u) goto L_088694A0;
    return;
L_088694A0:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088694ACu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x088694ACu) goto L_088694AC;
    return;
L_088694AC:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x088694B8u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x088694B8u) goto L_088694B8;
    return;
L_088694B8:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x088694C4u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x088694C4u) goto L_088694C4;
    return;
L_088694C4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(5648));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08869744;
      }
      goto L_088694D4;
    }
L_088694D4:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[31] = (0x08869504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08869504u) goto L_08869504;
    return;
L_08869504:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3229)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
        goto L_08869524;
    }
    goto L_08869510;
L_08869510:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_088696D4;
      }
      goto L_08869520;
    }
L_08869520:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    goto L_08869524;
L_08869524:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
        goto L_0886957C;
    }
    goto L_08869540;
L_08869540:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08869554u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 426u, 0x088D5E64u>(ctx, &aot_mem) && ctx.pc == 0x08869554u) goto L_08869554;
    return;
L_08869554:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2044)));
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
        goto L_08869570;
    }
    goto L_08869570;
L_08869570:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_088696D4;
      }
      goto L_08869578;
    }
L_08869578:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    goto L_0886957C;
L_0886957C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 12u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
        goto L_08869634;
    }
    goto L_08869598;
L_08869598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088695B8u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088695B8u) goto L_088695B8;
    return;
L_088695B8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08869628;
      }
      goto L_088695C4;
    }
L_088695C4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088695D4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 134u, 0x089809C0u>(ctx, &aot_mem) && ctx.pc == 0x088695D4u) goto L_088695D4;
    return;
L_088695D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
        goto L_08869600;
    }
    goto L_088695E0;
L_088695E0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(200));
    ctx.gpr[31] = (0x088695F0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x088695F0u) goto L_088695F0;
    return;
L_088695F0:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    goto L_08869600;
L_08869600:
    ctx.gpr[5] = (17096u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(178)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
        goto L_08869628;
    }
    goto L_08869628;
L_08869628:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_088696D4;
      }
      goto L_08869630;
    }
L_08869630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    goto L_08869634;
L_08869634:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 8u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
        goto L_088696D4;
    }
    goto L_08869650;
L_08869650:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08869670u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08869670u) goto L_08869670;
    return;
L_08869670:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[6]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[16];
    ctx.gpr[4] = (16040u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 62915u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    goto L_088696D4;
L_088696D4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[20]));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08869744;
      }
      goto L_088696FC;
    }
L_088696FC:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(168));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08869710u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 441u, 0x08862A6Cu>(ctx, &aot_mem) && ctx.pc == 0x08869710u) goto L_08869710;
    return;
L_08869710:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5716)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
        goto L_08869730;
    }
    goto L_08869730;
L_08869730:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08869744u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629E4u>(ctx, &aot_mem) && ctx.pc == 0x08869744u) goto L_08869744;
    return;
L_08869744:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0886975Cu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 277u, 0x08A25970u>(ctx, &aot_mem) && ctx.pc == 0x0886975Cu) goto L_0886975C;
    return;
L_0886975C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08869B3C;
      }
      goto L_08869764;
    }
L_08869764:
    ctx.gpr[31] = (0x0886976Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0886976Cu) goto L_0886976C;
    return;
L_0886976C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3229)));
    ctx.gpr[5] = (16256u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_088697D8;
      }
      goto L_0886977C;
    }
L_0886977C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7080)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08869790u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08869790u) goto L_08869790;
    return;
L_08869790:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.fpr[17] = ctx.fpr[22] / ctx.fpr[14];
    ctx.gpr[9] = (16736u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(45)));
    ctx.gpr[10] = (17280u << 16u);
    ctx.gpr[11] = (17184u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(46)));
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[31] = (0x088697D0u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 324u, 0x08A263E4u>(ctx, &aot_mem) && ctx.pc == 0x088697D0u) goto L_088697D0;
    return;
L_088697D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08869B3C;
      }
      goto L_088697D8;
    }
L_088697D8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7084)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x088697ECu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x088697ECu) goto L_088697EC;
    return;
L_088697EC:
    ctx.gpr[5] = (16076u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (15948u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(27772)));
    ctx.gpr[5] = (16508u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 17166u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16329u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08869974;
      }
      goto L_08869824;
    }
L_08869824:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08869974;
      }
      goto L_08869830;
    }
L_08869830:
    ctx.gpr[31] = (0x08869838u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 751u, 0x08A2F74Cu>(ctx, &aot_mem) && ctx.pc == 0x08869838u) goto L_08869838;
    return;
L_08869838:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08869974;
      }
      goto L_08869840;
    }
L_08869840:
    ctx.gpr[31] = (0x08869848u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08869848u) goto L_08869848;
    return;
L_08869848:
    ctx.gpr[31] = (0x08869850u);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3032)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08869850u) goto L_08869850;
    return;
L_08869850:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3024)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[17] = ctx.fpr[22] / ctx.fpr[14];
    ctx.gpr[4] = (16040u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] | 62915u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(45)));
    ctx.gpr[8] = (48972u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(46)));
    ctx.gpr[8] = (ctx.gpr[8] | 52429u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(47)));
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[7] = (0u | 158u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[13] = ctx.fpr[16] - ctx.fpr[13];
    ctx.gpr[8] = (16640u << 16u);
    ctx.fpr[26] = ctx.fpr[12] + ctx.fpr[28];
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[2];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[12] = ctx.fpr[19] - ctx.fpr[12];
    ctx.gpr[31] = (0x088698D8u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 324u, 0x08A263E4u>(ctx, &aot_mem) && ctx.pc == 0x088698D8u) goto L_088698D8;
    return;
L_088698D8:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[17] = ctx.fpr[22] / ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(45)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(46)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(47)));
    ctx.gpr[7] = (0u | 158u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[13] = ctx.fpr[16] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x08869928u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 324u, 0x08A263E4u>(ctx, &aot_mem) && ctx.pc == 0x08869928u) goto L_08869928;
    return;
L_08869928:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[7] = (0u | 158u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[13];
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(45)));
    ctx.fpr[17] = ctx.fpr[22] / ctx.fpr[14];
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(46)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(47)));
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[30];
    ctx.gpr[31] = (0x0886996Cu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 324u, 0x08A263E4u>(ctx, &aot_mem) && ctx.pc == 0x0886996Cu) goto L_0886996C;
    return;
L_0886996C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
      if (branch_taken) {
          goto L_08869AF4;
      }
      goto L_08869974;
    }
L_08869974:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15779u << 16u);
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
        goto L_088699A8;
    }
    goto L_088699A8;
L_088699A8:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[20] = ctx.fpr[14] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
        goto L_088699C8;
    }
    goto L_088699C8;
L_088699C8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[17] = ctx.fpr[22] / ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[9] = (16204u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[9] = (ctx.gpr[9] | 52429u);
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(45)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(46)));
    ctx.gpr[7] = (48972u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (ctx.gpr[7] | 52429u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(47)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[9]);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[16] = ctx.fpr[19] - ctx.fpr[16];
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[18];
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[18] = ctx.fpr[13] + ctx.fpr[18];
    ctx.gpr[7] = (0u | 158u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[31] = (0x08869A48u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 356u, 0x08A26954u>(ctx, &aot_mem) && ctx.pc == 0x08869A48u) goto L_08869A48;
    return;
L_08869A48:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[17] = ctx.fpr[22] / ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(45)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(46)));
    ctx.gpr[7] = (16508u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[9] = (ctx.gpr[7] | 17166u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(47)));
    ctx.gpr[7] = (0u | 158u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[19];
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[13] = ctx.fpr[16] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08869AA4u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 356u, 0x08A26954u>(ctx, &aot_mem) && ctx.pc == 0x08869AA4u) goto L_08869AA4;
    return;
L_08869AA4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[7] = (0u | 158u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[13];
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(45)));
    ctx.fpr[17] = ctx.fpr[22] / ctx.fpr[14];
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(46)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(47)));
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[30];
    ctx.gpr[31] = (0x08869AF0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 356u, 0x08A26954u>(ctx, &aot_mem) && ctx.pc == 0x08869AF0u) goto L_08869AF0;
    return;
L_08869AF0:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    goto L_08869AF4;
L_08869AF4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08869B20;
      }
      goto L_08869B0C;
    }
L_08869B0C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08869B3C;
      }
      goto L_08869B20;
    }
L_08869B20:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08869B3C;
      }
      goto L_08869B38;
    }
L_08869B38:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_08869B3C;
L_08869B3C:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08869B48u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08869B48u) goto L_08869B48;
    return;
L_08869B48:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08869B54u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08869B54u) goto L_08869B54;
    return;
L_08869B54:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08869B60u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08869B60u) goto L_08869B60;
    return;
L_08869B60:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08869D04;
      }
      goto L_08869B6C;
    }
L_08869B6C:
    ctx.gpr[16] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08869B80u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 646u, 0x088A7DB8u>(ctx, &aot_mem) && ctx.pc == 0x08869B80u) goto L_08869B80;
    return;
L_08869B80:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08869D04;
      }
      goto L_08869B8C;
    }
L_08869B8C:
    ctx.gpr[31] = (0x08869B94u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 174u, 0x08A35198u>(ctx, &aot_mem) && ctx.pc == 0x08869B94u) goto L_08869B94;
    return;
L_08869B94:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08869D04;
      }
      goto L_08869BA0;
    }
L_08869BA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_08869BCC;
    }
    goto L_08869BAC;
L_08869BAC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(201));
    ctx.gpr[31] = (0x08869BBCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08869BBCu) goto L_08869BBC;
    return;
L_08869BBC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(201)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_08869BCC;
L_08869BCC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(102)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08869D04;
      }
      goto L_08869BE4;
    }
L_08869BE4:
    ctx.gpr[31] = (0x08869BECu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x08869BECu) goto L_08869BEC;
    return;
L_08869BEC:
    ctx.gpr[31] = (0x08869BF4u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x08869BF4u) goto L_08869BF4;
    return;
L_08869BF4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08869C0Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08869C0Cu) goto L_08869C0C;
    return;
L_08869C0C:
    ctx.gpr[31] = (0x08869C14u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A550ACu>(ctx, &aot_mem) && ctx.pc == 0x08869C14u) goto L_08869C14;
    return;
L_08869C14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (2227u << 16u);
      if (branch_taken) {
          goto L_08869C58;
      }
      goto L_08869C2C;
    }
L_08869C2C:
    ctx.gpr[31] = (0x08869C34u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 195u, 0x08A35304u>(ctx, &aot_mem) && ctx.pc == 0x08869C34u) goto L_08869C34;
    return;
L_08869C34:
    ctx.gpr[5] = (ctx.gpr[2] & 255u);
    ctx.gpr[31] = (0x08869C40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 102u, 0x088A8548u>(ctx, &aot_mem) && ctx.pc == 0x08869C40u) goto L_08869C40;
    return;
L_08869C40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x08869C50u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x08869C50u) goto L_08869C50;
    return;
L_08869C50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08869C7C;
      }
      goto L_08869C58;
    }
L_08869C58:
    ctx.gpr[31] = (0x08869C60u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 195u, 0x08A35304u>(ctx, &aot_mem) && ctx.pc == 0x08869C60u) goto L_08869C60;
    return;
L_08869C60:
    ctx.gpr[5] = (ctx.gpr[2] & 255u);
    ctx.gpr[31] = (0x08869C6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 113u, 0x088A85F0u>(ctx, &aot_mem) && ctx.pc == 0x08869C6Cu) goto L_08869C6C;
    return;
L_08869C6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.gpr[31] = (0x08869C7Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x08869C7Cu) goto L_08869C7C;
    return;
L_08869C7C:
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16128u << 16u);
    ctx.gpr[31] = (0x08869C94u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x08869C94u) goto L_08869C94;
    return;
L_08869C94:
    ctx.gpr[31] = (0x08869C9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54ECCu>(ctx, &aot_mem) && ctx.pc == 0x08869C9Cu) goto L_08869C9C;
    return;
L_08869C9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_08869CD4;
      }
      goto L_08869CA8;
    }
L_08869CA8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08869CB4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08869CB4u) goto L_08869CB4;
    return;
L_08869CB4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08869CCC;
      }
      goto L_08869CC0;
    }
L_08869CC0:
    ctx.gpr[31] = (0x08869CC8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08869CC8u) goto L_08869CC8;
    return;
L_08869CC8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08869CCC;
L_08869CCC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_08869CD4;
L_08869CD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08869CE0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4424));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08869CE0u) goto L_08869CE0;
    return;
L_08869CE0:
    ctx.gpr[6] = (17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (17224u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08869CFCu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08869CFCu) goto L_08869CFC;
    return;
L_08869CFC:
    ctx.gpr[31] = (0x08869D04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 206u, 0x08A54EE8u>(ctx, &aot_mem) && ctx.pc == 0x08869D04u) goto L_08869D04;
    return;
L_08869D04:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08869D3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5588)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(5584)));
    ctx.gpr[2] = (2227u << 16u);
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(5592), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (2227u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(5612)));
    ctx.gpr[3] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(5624)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(5620)));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[16] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5628), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(5636), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[13] = (2227u << 16u);
    ctx.gpr[12] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(5600), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(5596), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[11] = (15744u << 16u);
    ctx.gpr[14] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[8] = (16281u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[15] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[8] | 39322u);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(5604), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(5608), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[9] = (16268u << 16u);
    ctx.gpr[24] = (2227u << 16u);
    ctx.gpr[7] = (ctx.gpr[9] | 52429u);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(5616), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[25] = (2227u << 16u);
    ctx.gpr[17] = (2227u << 16u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[2] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(5648));
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(5632), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08869E38u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(5640), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08868E80;
L_08869E38:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08869E44u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5744));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x08869E44u) goto L_08869E44;
    return;
L_08869E44:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08869E58:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5764)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(5760)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(5792)));
    ctx.gpr[11] = (2227u << 16u);
    ctx.gpr[14] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[15] = (2227u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[3] = (2227u << 16u);
    ctx.gpr[2] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[9] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(5768), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(5788)));
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(5796), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(5804), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (16281u << 16u);
    ctx.gpr[8] = (16268u << 16u);
    ctx.gpr[12] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[7] | 39322u);
    ctx.gpr[13] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[7] = (ctx.gpr[8] | 52429u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[24] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(5776), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[17] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(5772), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(5780), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(5784), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5800), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(5808), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08869F20:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08869F4C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[6]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[7]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08869F80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[16] - ctx.fpr[14];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x0886A028u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 249u, 0x08A1D378u>(ctx, &aot_mem) && ctx.pc == 0x0886A028u) goto L_0886A028;
    return;
L_0886A028:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886A038;
      }
      goto L_0886A030;
    }
L_0886A030:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0886A0A4;
      }
      goto L_0886A038;
    }
L_0886A038:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[2] = (0u | 1u);
    goto L_0886A0A4;
L_0886A0A4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A0C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886A0ECu);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 415u, 0x08A4B4B0u>(ctx, &aot_mem) && ctx.pc == 0x0886A0ECu) goto L_0886A0EC;
    return;
L_0886A0EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A0F8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 534u, 0x08A4BBE4u>(ctx, &aot_mem) && ctx.pc == 0x0886A0F8u) goto L_0886A0F8;
    return;
L_0886A0F8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x0886A10Cu);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 415u, 0x08A4B4B0u>(ctx, &aot_mem) && ctx.pc == 0x0886A10Cu) goto L_0886A10C;
    return;
L_0886A10C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0886A184;
      }
      goto L_0886A118;
    }
L_0886A118:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A124u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x0886A124u) goto L_0886A124;
    return;
L_0886A124:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A134u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0886A134u) goto L_0886A134;
    return;
L_0886A134:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A144u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BF54u>(ctx, &aot_mem) && ctx.pc == 0x0886A144u) goto L_0886A144;
    return;
L_0886A144:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x0886A154u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 45u, 0x0890C3ECu>(ctx, &aot_mem) && ctx.pc == 0x0886A154u) goto L_0886A154;
    return;
L_0886A154:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A160u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x0886A160u) goto L_0886A160;
    return;
L_0886A160:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886A18C;
      }
      goto L_0886A168;
    }
L_0886A168:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A174u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x0886A174u) goto L_0886A174;
    return;
L_0886A174:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A118;
      }
      goto L_0886A184;
    }
L_0886A184:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0886A190;
      }
      goto L_0886A18C;
    }
L_0886A18C:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_0886A190;
L_0886A190:
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
L_0886A1AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886A1D0u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 415u, 0x08A4B4B0u>(ctx, &aot_mem) && ctx.pc == 0x0886A1D0u) goto L_0886A1D0;
    return;
L_0886A1D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x0886A1E0u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 415u, 0x08A4B4B0u>(ctx, &aot_mem) && ctx.pc == 0x0886A1E0u) goto L_0886A1E0;
    return;
L_0886A1E0:
    ctx.gpr[31] = (0x0886A1E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 674u, 0x0890BB54u>(ctx, &aot_mem) && ctx.pc == 0x0886A1E8u) goto L_0886A1E8;
    return;
L_0886A1E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A1F4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 77u, 0x0890C66Cu>(ctx, &aot_mem) && ctx.pc == 0x0886A1F4u) goto L_0886A1F4;
    return;
L_0886A1F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A260;
      }
      goto L_0886A1FC;
    }
L_0886A1FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A208u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x0886A208u) goto L_0886A208;
    return;
L_0886A208:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A214u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x0886A214u) goto L_0886A214;
    return;
L_0886A214:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A220u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x0886A220u) goto L_0886A220;
    return;
L_0886A220:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x0886A230u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 45u, 0x0890C3ECu>(ctx, &aot_mem) && ctx.pc == 0x0886A230u) goto L_0886A230;
    return;
L_0886A230:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A23Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x0886A23Cu) goto L_0886A23C;
    return;
L_0886A23C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886A258;
      }
      goto L_0886A244;
    }
L_0886A244:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A250u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x0886A250u) goto L_0886A250;
    return;
L_0886A250:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A1E8;
      }
      goto L_0886A258;
    }
L_0886A258:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0886A264;
      }
      goto L_0886A260;
    }
L_0886A260:
    ctx.gpr[2] = (0u | 0u);
    goto L_0886A264;
L_0886A264:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A278:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886A29Cu);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 415u, 0x08A4B4B0u>(ctx, &aot_mem) && ctx.pc == 0x0886A29Cu) goto L_0886A29C;
    return;
L_0886A29C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A2A8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 534u, 0x08A4BBE4u>(ctx, &aot_mem) && ctx.pc == 0x0886A2A8u) goto L_0886A2A8;
    return;
L_0886A2A8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A2B8u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0886A2B8u) goto L_0886A2B8;
    return;
L_0886A2B8:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A2D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886A2ECu);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 415u, 0x08A4B4B0u>(ctx, &aot_mem) && ctx.pc == 0x0886A2ECu) goto L_0886A2EC;
    return;
L_0886A2EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A2F8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x0886A2F8u) goto L_0886A2F8;
    return;
L_0886A2F8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A30Cu);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 516u, 0x08A4BADCu>(ctx, &aot_mem) && ctx.pc == 0x0886A30Cu) goto L_0886A30C;
    return;
L_0886A30C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A320:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886A344u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x0886A344u) goto L_0886A344;
    return;
L_0886A344:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A358u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 415u, 0x08A4B4B0u>(ctx, &aot_mem) && ctx.pc == 0x0886A358u) goto L_0886A358;
    return;
L_0886A358:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A364u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 534u, 0x08A4BBE4u>(ctx, &aot_mem) && ctx.pc == 0x0886A364u) goto L_0886A364;
    return;
L_0886A364:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    ctx.gpr[19] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0886A378;
      }
      goto L_0886A370;
    }
L_0886A370:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0886A3A0;
      }
      goto L_0886A378;
    }
L_0886A378:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A384u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x0886A384u) goto L_0886A384;
    return;
L_0886A384:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A39C;
      }
      goto L_0886A398;
    }
L_0886A398:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_0886A39C;
L_0886A39C:
    ctx.gpr[20] = (0u | 3u);
    goto L_0886A3A0;
L_0886A3A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A3B0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 516u, 0x08A4BADCu>(ctx, &aot_mem) && ctx.pc == 0x0886A3B0u) goto L_0886A3B0;
    return;
L_0886A3B0:
    ctx.gpr[17] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886A3F8;
      }
      goto L_0886A3C4;
    }
L_0886A3C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A3D4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BF54u>(ctx, &aot_mem) && ctx.pc == 0x0886A3D4u) goto L_0886A3D4;
    return;
L_0886A3D4:
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A3E4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 26u, 0x0890C234u>(ctx, &aot_mem) && ctx.pc == 0x0886A3E4u) goto L_0886A3E4;
    return;
L_0886A3E4:
    ctx.gpr[17] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A3C4;
      }
      goto L_0886A3F8;
    }
L_0886A3F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A404u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x0886A404u) goto L_0886A404;
    return;
L_0886A404:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A414u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 26u, 0x0890C234u>(ctx, &aot_mem) && ctx.pc == 0x0886A414u) goto L_0886A414;
    return;
L_0886A414:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A438:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886A468u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 415u, 0x08A4B4B0u>(ctx, &aot_mem) && ctx.pc == 0x0886A468u) goto L_0886A468;
    return;
L_0886A468:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A474u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 534u, 0x08A4BBE4u>(ctx, &aot_mem) && ctx.pc == 0x0886A474u) goto L_0886A474;
    return;
L_0886A474:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x0886A48Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 446u, 0x08A4B6CCu>(ctx, &aot_mem) && ctx.pc == 0x0886A48Cu) goto L_0886A48C;
    return;
L_0886A48C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0886A4CC;
      }
      goto L_0886A498;
    }
L_0886A498:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A4A8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 516u, 0x08A4BADCu>(ctx, &aot_mem) && ctx.pc == 0x0886A4A8u) goto L_0886A4A8;
    return;
L_0886A4A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A4B8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BF54u>(ctx, &aot_mem) && ctx.pc == 0x0886A4B8u) goto L_0886A4B8;
    return;
L_0886A4B8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886A4D4;
      }
      goto L_0886A4C4;
    }
L_0886A4C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A508;
      }
      goto L_0886A4CC;
    }
L_0886A4CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0886A524;
      }
      goto L_0886A4D4;
    }
L_0886A4D4:
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A4E8u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BF54u>(ctx, &aot_mem) && ctx.pc == 0x0886A4E8u) goto L_0886A4E8;
    return;
L_0886A4E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A4F8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 26u, 0x0890C234u>(ctx, &aot_mem) && ctx.pc == 0x0886A4F8u) goto L_0886A4F8;
    return;
L_0886A4F8:
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886A4D4;
      }
      goto L_0886A508;
    }
L_0886A508:
    ctx.gpr[31] = (0x0886A510u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 674u, 0x0890BB54u>(ctx, &aot_mem) && ctx.pc == 0x0886A510u) goto L_0886A510;
    return;
L_0886A510:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A520u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 26u, 0x0890C234u>(ctx, &aot_mem) && ctx.pc == 0x0886A520u) goto L_0886A520;
    return;
L_0886A520:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_0886A524;
L_0886A524:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A544:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1088));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[16]);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(1052));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1068), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1072), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1076), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1080), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1084), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886A580u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-4340));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 430u, 0x08A4B5D0u>(ctx, &aot_mem) && ctx.pc == 0x0886A580u) goto L_0886A580;
    return;
L_0886A580:
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A598u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 446u, 0x08A4B6CCu>(ctx, &aot_mem) && ctx.pc == 0x0886A598u) goto L_0886A598;
    return;
L_0886A598:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x0886A5B0u);
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 446u, 0x08A4B6CCu>(ctx, &aot_mem) && ctx.pc == 0x0886A5B0u) goto L_0886A5B0;
    return;
L_0886A5B0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x0886A5CCu);
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 415u, 0x08A4B4B0u>(ctx, &aot_mem) && ctx.pc == 0x0886A5CCu) goto L_0886A5CC;
    return;
L_0886A5CC:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0886A5E4;
      }
      goto L_0886A5D4;
    }
L_0886A5D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A5E0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 534u, 0x08A4BBE4u>(ctx, &aot_mem) && ctx.pc == 0x0886A5E0u) goto L_0886A5E0;
    return;
L_0886A5E0:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_0886A5E4;
L_0886A5E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A5F0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 2u, 0x08A4C020u>(ctx, &aot_mem) && ctx.pc == 0x0886A5F0u) goto L_0886A5F0;
    return;
L_0886A5F0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (2225u << 16u);
      if (branch_taken) {
          goto L_0886A660;
      }
      goto L_0886A5FC;
    }
L_0886A5FC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-4336));
    goto L_0886A600;
L_0886A600:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A610u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BF54u>(ctx, &aot_mem) && ctx.pc == 0x0886A610u) goto L_0886A610;
    return;
L_0886A610:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A61Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 594u, 0x0890B730u>(ctx, &aot_mem) && ctx.pc == 0x0886A61Cu) goto L_0886A61C;
    return;
L_0886A61C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0886A630;
      }
      goto L_0886A624;
    }
L_0886A624:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A630u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 347u, 0x08A4B014u>(ctx, &aot_mem) && ctx.pc == 0x0886A630u) goto L_0886A630;
    return;
L_0886A630:
    ctx.gpr[31] = (0x0886A638u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 588u, 0x08A4BF48u>(ctx, &aot_mem) && ctx.pc == 0x0886A638u) goto L_0886A638;
    return;
L_0886A638:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0886A650;
      }
      goto L_0886A640;
    }
L_0886A640:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1052)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0886A650u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 579u, 0x08A4BE7Cu>(ctx, &aot_mem) && ctx.pc == 0x0886A650u) goto L_0886A650;
    return;
L_0886A650:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A600;
      }
      goto L_0886A660;
    }
L_0886A660:
    ctx.gpr[31] = (0x0886A668u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 585u, 0x08A4BF10u>(ctx, &aot_mem) && ctx.pc == 0x0886A668u) goto L_0886A668;
    return;
L_0886A668:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1076)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1084)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A694:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886A6B8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 26u, 0x0890C234u>(ctx, &aot_mem) && ctx.pc == 0x0886A6B8u) goto L_0886A6B8;
    return;
L_0886A6B8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A6C8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 26u, 0x0890C234u>(ctx, &aot_mem) && ctx.pc == 0x0886A6C8u) goto L_0886A6C8;
    return;
L_0886A6C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A6DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886A704u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x0886A704u) goto L_0886A704;
    return;
L_0886A704:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A764;
      }
      goto L_0886A70C;
    }
L_0886A70C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0886A718u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x0886A718u) goto L_0886A718;
    return;
L_0886A718:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0886A724u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x0886A724u) goto L_0886A724;
    return;
L_0886A724:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2));
    ctx.gpr[31] = (0x0886A730u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x0886A730u) goto L_0886A730;
    return;
L_0886A730:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x0886A740u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 45u, 0x0890C3ECu>(ctx, &aot_mem) && ctx.pc == 0x0886A740u) goto L_0886A740;
    return;
L_0886A740:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0886A74Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B88Cu>(ctx, &aot_mem) && ctx.pc == 0x0886A74Cu) goto L_0886A74C;
    return;
L_0886A74C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0886A75Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x0886A75Cu) goto L_0886A75C;
    return;
L_0886A75C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0886A774;
      }
      goto L_0886A764;
    }
L_0886A764:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0886A774u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 603u, 0x0890B7C8u>(ctx, &aot_mem) && ctx.pc == 0x0886A774u) goto L_0886A774;
    return;
L_0886A774:
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
L_0886A78C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[22] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0886AAC0;
      }
      goto L_0886A7CC;
    }
L_0886A7CC:
    ctx.gpr[21] = (2225u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-4308));
    goto L_0886A7D4;
L_0886A7D4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A7E4u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BF54u>(ctx, &aot_mem) && ctx.pc == 0x0886A7E4u) goto L_0886A7E4;
    return;
L_0886A7E4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A7F4u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BF54u>(ctx, &aot_mem) && ctx.pc == 0x0886A7F4u) goto L_0886A7F4;
    return;
L_0886A7F4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0886A804u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    goto L_0886A6DC;
L_0886A804:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (ctx.gpr[22] - ctx.gpr[23]);
      if (branch_taken) {
          goto L_0886A824;
      }
      goto L_0886A80C;
    }
L_0886A80C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0886A81Cu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    goto L_0886A694;
L_0886A81C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A830;
      }
      goto L_0886A824;
    }
L_0886A824:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0886A830u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x0886A830u) goto L_0886A830;
    return;
L_0886A830:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0886A844;
      }
      goto L_0886A83C;
    }
L_0886A83C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AAC0;
      }
      goto L_0886A844;
    }
L_0886A844:
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[22]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A868u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BF54u>(ctx, &aot_mem) && ctx.pc == 0x0886A868u) goto L_0886A868;
    return;
L_0886A868:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A878u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BF54u>(ctx, &aot_mem) && ctx.pc == 0x0886A878u) goto L_0886A878;
    return;
L_0886A878:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[31] = (0x0886A888u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0886A6DC;
L_0886A888:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A8A8;
      }
      goto L_0886A890;
    }
L_0886A890:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0886A8A0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    goto L_0886A694;
L_0886A8A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A900;
      }
      goto L_0886A8A8;
    }
L_0886A8A8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0886A8B4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x0886A8B4u) goto L_0886A8B4;
    return;
L_0886A8B4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A8C4u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BF54u>(ctx, &aot_mem) && ctx.pc == 0x0886A8C4u) goto L_0886A8C4;
    return;
L_0886A8C4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0886A8D4u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    goto L_0886A6DC;
L_0886A8D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A8F4;
      }
      goto L_0886A8DC;
    }
L_0886A8DC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0886A8ECu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    goto L_0886A694;
L_0886A8EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A900;
      }
      goto L_0886A8F4;
    }
L_0886A8F4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0886A900u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x0886A900u) goto L_0886A900;
    return;
L_0886A900:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0886A914;
      }
      goto L_0886A90C;
    }
L_0886A90C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AAC0;
      }
      goto L_0886A914;
    }
L_0886A914:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A924u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BF54u>(ctx, &aot_mem) && ctx.pc == 0x0886A924u) goto L_0886A924;
    return;
L_0886A924:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0886A930u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x0886A930u) goto L_0886A930;
    return;
L_0886A930:
    ctx.gpr[30] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A944u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BF54u>(ctx, &aot_mem) && ctx.pc == 0x0886A944u) goto L_0886A944;
    return;
L_0886A944:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0886A954u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    goto L_0886A694;
L_0886A954:
    ctx.gpr[20] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[30] + static_cast<std::uint32_t>(-1));
    goto L_0886A95C;
L_0886A95C:
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
    goto L_0886A960;
L_0886A960:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A970u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BF54u>(ctx, &aot_mem) && ctx.pc == 0x0886A970u) goto L_0886A970;
    return;
L_0886A970:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0886A980u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    goto L_0886A6DC;
L_0886A980:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A9B4;
      }
      goto L_0886A988;
    }
L_0886A988:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0886A9A0;
      }
      goto L_0886A994;
    }
L_0886A994:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0886A9A0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 375u, 0x08A4B244u>(ctx, &aot_mem) && ctx.pc == 0x0886A9A0u) goto L_0886A9A0;
    return;
L_0886A9A0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0886A9ACu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x0886A9ACu) goto L_0886A9AC;
    return;
L_0886A9AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_0886A960;
      }
      goto L_0886A9B4;
    }
L_0886A9B4:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_0886A9B8;
L_0886A9B8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A9C8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BF54u>(ctx, &aot_mem) && ctx.pc == 0x0886A9C8u) goto L_0886A9C8;
    return;
L_0886A9C8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[31] = (0x0886A9D8u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0886A6DC;
L_0886A9D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AA0C;
      }
      goto L_0886A9E0;
    }
L_0886A9E0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0886A9F8;
      }
      goto L_0886A9EC;
    }
L_0886A9EC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0886A9F8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 375u, 0x08A4B244u>(ctx, &aot_mem) && ctx.pc == 0x0886A9F8u) goto L_0886A9F8;
    return;
L_0886A9F8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0886AA04u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x0886AA04u) goto L_0886AA04;
    return;
L_0886AA04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0886A9B8;
      }
      goto L_0886AA0C;
    }
L_0886AA0C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AA7C;
      }
      goto L_0886AA18;
    }
L_0886AA18:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0886AA24u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x0886AA24u) goto L_0886AA24;
    return;
L_0886AA24:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886AA34u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BF54u>(ctx, &aot_mem) && ctx.pc == 0x0886AA34u) goto L_0886AA34;
    return;
L_0886AA34:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886AA44u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BF54u>(ctx, &aot_mem) && ctx.pc == 0x0886AA44u) goto L_0886AA44;
    return;
L_0886AA44:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0886AA54u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_0886A694;
L_0886AA54:
    ctx.gpr[4] = (ctx.gpr[20] - ctx.gpr[23]);
    ctx.gpr[5] = (ctx.gpr[22] - ctx.gpr[20]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AA98;
      }
      goto L_0886AA68;
    }
L_0886AA68:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[18] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
      if (branch_taken) {
          goto L_0886AAA8;
      }
      goto L_0886AA7C;
    }
L_0886AA7C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0886AA8Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_0886A694;
L_0886AA8C:
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0886A95C;
      }
      goto L_0886AA98;
    }
L_0886AA98:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[22] | 0u);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[20] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    goto L_0886AAA8;
L_0886AAA8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0886AAB8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_0886A78C;
L_0886AAB8:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886A7D4;
      }
      goto L_0886AAC0;
    }
L_0886AAC0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886AAF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886AB10u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 415u, 0x08A4B4B0u>(ctx, &aot_mem) && ctx.pc == 0x0886AB10u) goto L_0886AB10;
    return;
L_0886AB10:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886AB1Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 534u, 0x08A4BBE4u>(ctx, &aot_mem) && ctx.pc == 0x0886AB1Cu) goto L_0886AB1C;
    return;
L_0886AB1C:
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 40u);
    ctx.gpr[31] = (0x0886AB34u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-4340));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 411u, 0x08A4B464u>(ctx, &aot_mem) && ctx.pc == 0x0886AB34u) goto L_0886AB34;
    return;
L_0886AB34:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886AB40u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x0886AB40u) goto L_0886AB40;
    return;
L_0886AB40:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0886AB58;
      }
      goto L_0886AB48;
    }
L_0886AB48:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x0886AB58u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 415u, 0x08A4B4B0u>(ctx, &aot_mem) && ctx.pc == 0x0886AB58u) goto L_0886AB58;
    return;
L_0886AB58:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886AB64u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x0886AB64u) goto L_0886AB64;
    return;
L_0886AB64:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886AB74u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_0886A78C;
L_0886AB74:
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
L_0886AB8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4272));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886ABACu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(13600));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 474u, 0x08A4B854u>(ctx, &aot_mem) && ctx.pc == 0x0886ABACu) goto L_0886ABAC;
    return;
L_0886ABAC:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886ABBC:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886ABC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0886AC00;
      }
      goto L_0886ABE4;
    }
L_0886ABE4:
    ctx.gpr[31] = (0x0886ABECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0886AC70;
L_0886ABEC:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AC00;
      }
      goto L_0886ABF8;
    }
L_0886ABF8:
    ctx.gpr[31] = (0x0886AC00u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x0886AC00u) goto L_0886AC00;
    return;
L_0886AC00:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886AC14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0886AC3C;
      }
      goto L_0886AC34;
    }
L_0886AC34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0886AC5C;
      }
      goto L_0886AC3C;
    }
L_0886AC3C:
    ctx.gpr[31] = (0x0886AC44u);
    ctx.gpr[4] = (0u | 1u);
    ctx.pc = 0x08B0B8D4u;
    return;
L_0886AC44:
    ctx.gpr[31] = (0x0886AC4Cu);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0B8E4u;
    return;
L_0886AC4C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[31] = (0x0886AC58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0886AEC8;
L_0886AC58:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0886AC5C;
L_0886AC5C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886AC70:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886AC78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0886ACFC;
      }
      goto L_0886AC94;
    }
L_0886AC94:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[31] = (0x0886ACA4u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B0B8DCu;
    return;
L_0886ACA4:
    ctx.gpr[4] = (16298u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 43691u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15360u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[4] = (48768u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49024u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0886AD04;
      }
      goto L_0886ACE4;
    }
L_0886ACE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(29)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_0886AD10;
      }
      goto L_0886ACFC;
    }
L_0886ACFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AEB4;
      }
      goto L_0886AD04;
    }
L_0886AD04:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0886AD10;
L_0886AD10:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_0886AD34;
L_0886AD34:
    ctx.gpr[7] = (ctx.gpr[17] << (ctx.gpr[5] & 31u));
    ctx.gpr[7] = (ctx.gpr[4] & ctx.gpr[7]);
    if (ctx.gpr[7] == 0u) {
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_0886AD4C;
    }
    goto L_0886AD44;
L_0886AD44:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0886AD4C;
      }
      goto L_0886AD4C;
    }
L_0886AD4C:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0886AD34;
      }
      goto L_0886AD60;
    }
L_0886AD60:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0886AD68;
L_0886AD68:
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(18)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-128));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886ADB4;
      }
      goto L_0886AD90;
    }
L_0886AD90:
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[16]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[17];
        goto L_0886ADA8;
    }
    goto L_0886ADA0;
L_0886ADA0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0886ADAC;
      }
      goto L_0886ADA8;
    }
L_0886ADA8:
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    goto L_0886ADAC;
L_0886ADAC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
      if (branch_taken) {
          goto L_0886ADD4;
      }
      goto L_0886ADB4;
    }
L_0886ADB4:
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[17]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[17];
        goto L_0886ADCC;
    }
    goto L_0886ADC4;
L_0886ADC4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0886ADD0;
      }
      goto L_0886ADCC;
    }
L_0886ADCC:
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    goto L_0886ADD0;
L_0886ADD0:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    goto L_0886ADD4;
L_0886ADD4:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886ADF8;
      }
      goto L_0886ADE4;
    }
L_0886ADE4:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0886ADF8;
    }
    goto L_0886ADF8;
L_0886ADF8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0886AD68;
      }
      goto L_0886AE0C;
    }
L_0886AE0C:
    ctx.gpr[4] = (0u | 0u);
    goto L_0886AE10;
L_0886AE10:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-128));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886AE5C;
      }
      goto L_0886AE38;
    }
L_0886AE38:
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[16]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[17];
        goto L_0886AE50;
    }
    goto L_0886AE48;
L_0886AE48:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0886AE54;
      }
      goto L_0886AE50;
    }
L_0886AE50:
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    goto L_0886AE54;
L_0886AE54:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
      if (branch_taken) {
          goto L_0886AE7C;
      }
      goto L_0886AE5C;
    }
L_0886AE5C:
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[17]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[17];
        goto L_0886AE74;
    }
    goto L_0886AE6C;
L_0886AE6C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0886AE78;
      }
      goto L_0886AE74;
    }
L_0886AE74:
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    goto L_0886AE78;
L_0886AE78:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    goto L_0886AE7C;
L_0886AE7C:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886AEA0;
      }
      goto L_0886AE8C;
    }
L_0886AE8C:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0886AEA0;
    }
    goto L_0886AEA0;
L_0886AEA0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0886AE10;
      }
      goto L_0886AEB4;
    }
L_0886AEB4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886AEC8:
    ctx.gpr[6] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_0886AED4;
L_0886AED4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0886AED4;
      }
      goto L_0886AEE8;
    }
L_0886AEE8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886AEF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886AF20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 295u, 0x08ACA078u>(ctx, &aot_mem) && ctx.pc == 0x0886AF20u) goto L_0886AF20;
    return;
L_0886AF20:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13672)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4256));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(13672), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    goto L_0886AF6C;
L_0886AF6C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AFA4;
      }
      goto L_0886AF74;
    }
L_0886AF74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886AFA4;
      }
      goto L_0886AF84;
    }
L_0886AF84:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(3) ? 1u : 0u);
      if (branch_taken) {
          goto L_0886AF6C;
      }
      goto L_0886AFA4;
    }
L_0886AFA4:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_0886AFC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886AFE4u);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    goto L_0886B014;
L_0886AFE4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AFF8;
      }
      goto L_0886AFEC;
    }
L_0886AFEC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0886AFF8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0886B14C;
L_0886AFF8:
    ctx.gpr[2] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
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
L_0886B014:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886B024u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    goto L_0886B030;
L_0886B024:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B030:
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0886B080;
      }
      goto L_0886B054;
    }
L_0886B054:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0886B058;
L_0886B058:
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[8]);
    if (ctx.gpr[4] != ctx.gpr[8]) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_0886B058;
    }
    goto L_0886B080;
L_0886B080:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[8] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    ctx.gpr[8] = (2230u << 16u);
      if (branch_taken) {
          goto L_0886B0F8;
      }
      goto L_0886B0A0;
    }
L_0886B0A0:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4256));
    goto L_0886B0A4;
L_0886B0A4:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[8] | 0u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] == ctx.gpr[11]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_0886B0D8;
    }
    goto L_0886B0C0;
L_0886B0C0:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_0886B0C0;
      }
      goto L_0886B0D4;
    }
L_0886B0D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_0886B0D8;
L_0886B0D8:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0886B0A4;
      }
      goto L_0886B0F8;
    }
L_0886B0F8:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(30)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0886B144;
      }
      goto L_0886B10C;
    }
L_0886B10C:
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4384));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0886B118;
L_0886B118:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(30)));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[8]);
    if (ctx.gpr[4] != ctx.gpr[8]) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_0886B118;
    }
    goto L_0886B144;
L_0886B144:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B14C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886B168u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 704u, 0x08AA34C8u>(ctx, &aot_mem) && ctx.pc == 0x0886B168u) goto L_0886B168;
    return;
L_0886B168:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B174:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(13676)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4384));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(13676), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B19C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B1A4:
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
L_0886B1D0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B1D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[4] & 128u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_0886B218;
      }
      goto L_0886B210;
    }
L_0886B210:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886B2DC;
      }
      goto L_0886B218;
    }
L_0886B218:
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (2225u << 16u);
      if (branch_taken) {
          goto L_0886B2DC;
      }
      goto L_0886B234;
    }
L_0886B234:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-4236));
    ctx.gpr[19] = (2230u << 16u);
    goto L_0886B240;
L_0886B240:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28976)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886B27C;
      }
      goto L_0886B260;
    }
L_0886B260:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886B27C;
      }
      goto L_0886B26C;
    }
L_0886B26C:
    ctx.gpr[31] = (0x0886B274u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x0886B274u) goto L_0886B274;
    return;
L_0886B274:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0886B27C;
L_0886B27C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886B2C8;
      }
      goto L_0886B294;
    }
L_0886B294:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0886B2A0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x0886B2A0u) goto L_0886B2A0;
    return;
L_0886B2A0:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886B2B8;
      }
      goto L_0886B2AC;
    }
L_0886B2AC:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0886B2B8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_0886B1A4;
L_0886B2B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    goto L_0886B2C8;
L_0886B2C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0886B240;
      }
      goto L_0886B2DC;
    }
L_0886B2DC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B304:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_0886B33C;
      }
      goto L_0886B328;
    }
L_0886B328:
    ctx.gpr[31] = (0x0886B330u);
    ctx.gpr[4] = (ctx.gpr[18] - ctx.gpr[16]);
    goto L_0886B1D8;
L_0886B330:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0886B328;
      }
      goto L_0886B33C;
    }
L_0886B33C:
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
L_0886B354:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886B36Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_0886B1D0;
L_0886B36C:
    ctx.gpr[31] = (0x0886B374u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0886B1D8;
L_0886B374:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B384:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (2183u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886B3A4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20016));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 201u, 0x08AA4FD4u>(ctx, &aot_mem) && ctx.pc == 0x0886B3A4u) goto L_0886B3A4;
    return;
L_0886B3A4:
    ctx.gpr[31] = (0x0886B3ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0886B304;
L_0886B3AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B3BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[4] = (94u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16384));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886B3F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x0886B3F4u) goto L_0886B3F4;
    return;
L_0886B3F4:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0886B404u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4200));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 432u, 0x08AC6FE4u>(ctx, &aot_mem) && ctx.pc == 0x0886B404u) goto L_0886B404;
    return;
L_0886B404:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (ctx.gpr[17] + ctx.gpr[16]);
    ctx.gpr[31] = (0x0886B414u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 444u, 0x08AC70DCu>(ctx, &aot_mem) && ctx.pc == 0x0886B414u) goto L_0886B414;
    return;
L_0886B414:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(15));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[4]);
    ctx.gpr[31] = (0x0886B42Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 444u, 0x08AC70DCu>(ctx, &aot_mem) && ctx.pc == 0x0886B42Cu) goto L_0886B42C;
    return;
L_0886B42C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0886B43Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 452u, 0x08AC716Cu>(ctx, &aot_mem) && ctx.pc == 0x0886B43Cu) goto L_0886B43C;
    return;
L_0886B43C:
    ctx.gpr[31] = (0x0886B444u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 436u, 0x08AC702Cu>(ctx, &aot_mem) && ctx.pc == 0x0886B444u) goto L_0886B444;
    return;
L_0886B444:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0886B454u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 538u, 0x08AD6900u>(ctx, &aot_mem) && ctx.pc == 0x0886B454u) goto L_0886B454;
    return;
L_0886B454:
    ctx.gpr[4] = (18260u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16711));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0886B474u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_0886AFC0;
L_0886B474:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0886B688;
      }
      goto L_0886B488;
    }
L_0886B488:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26612), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-15036), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-15032), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-15024), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-15048), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-15052), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7076), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-17192), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(13820), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20972), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20980), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x0886B51Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 111u, 0x08A28CA4u>(ctx, &aot_mem) && ctx.pc == 0x0886B51Cu) goto L_0886B51C;
    return;
L_0886B51C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x0886B534u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 664u, 0x0892FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0886B534u) goto L_0886B534;
    return;
L_0886B534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(21204), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x0886B54Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 406u, 0x089864D4u>(ctx, &aot_mem) && ctx.pc == 0x0886B54Cu) goto L_0886B54C;
    return;
L_0886B54C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(5400), ctx.gpr[4]);
    ctx.gpr[31] = (0x0886B560u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 350u, 0x08876D78u>(ctx, &aot_mem) && ctx.pc == 0x0886B560u) goto L_0886B560;
    return;
L_0886B560:
    ctx.gpr[31] = (0x0886B568u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 362u, 0x089C57A4u>(ctx, &aot_mem) && ctx.pc == 0x0886B568u) goto L_0886B568;
    return;
L_0886B568:
    ctx.gpr[31] = (0x0886B570u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 409u, 0x08A8A7DCu>(ctx, &aot_mem) && ctx.pc == 0x0886B570u) goto L_0886B570;
    return;
L_0886B570:
    ctx.gpr[31] = (0x0886B578u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 255u, 0x088D52B8u>(ctx, &aot_mem) && ctx.pc == 0x0886B578u) goto L_0886B578;
    return;
L_0886B578:
    ctx.gpr[31] = (0x0886B580u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 655u, 0x088875F0u>(ctx, &aot_mem) && ctx.pc == 0x0886B580u) goto L_0886B580;
    return;
L_0886B580:
    ctx.gpr[31] = (0x0886B588u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 251u, 0x08A256BCu>(ctx, &aot_mem) && ctx.pc == 0x0886B588u) goto L_0886B588;
    return;
L_0886B588:
    ctx.gpr[31] = (0x0886B590u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 253u, 0x08A256D0u>(ctx, &aot_mem) && ctx.pc == 0x0886B590u) goto L_0886B590;
    return;
L_0886B590:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (0x0886B59Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 311u, 0x08ACA1ECu>(ctx, &aot_mem) && ctx.pc == 0x0886B59Cu) goto L_0886B59C;
    return;
L_0886B59C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    ctx.gpr[31] = (0x0886B5A8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 255u, 0x08AB1368u>(ctx, &aot_mem) && ctx.pc == 0x0886B5A8u) goto L_0886B5A8;
    return;
L_0886B5A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    ctx.gpr[31] = (0x0886B5B4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 250u, 0x0890DAD8u>(ctx, &aot_mem) && ctx.pc == 0x0886B5B4u) goto L_0886B5B4;
    return;
L_0886B5B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(136)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24340), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7072), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22912)));
    ctx.gpr[31] = (0x0886B5E0u);
    ctx.gpr[6] = (0u | 11248u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x0886B5E0u) goto L_0886B5E0;
    return;
L_0886B5E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(26124), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7124), ctx.gpr[4]);
    ctx.gpr[31] = (0x0886B600u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 286u, 0x0894D970u>(ctx, &aot_mem) && ctx.pc == 0x0886B600u) goto L_0886B600;
    return;
L_0886B600:
    ctx.gpr[31] = (0x0886B608u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 257u, 0x088258B0u>(ctx, &aot_mem) && ctx.pc == 0x0886B608u) goto L_0886B608;
    return;
L_0886B608:
    ctx.gpr[31] = (0x0886B610u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 38u, 0x08824560u>(ctx, &aot_mem) && ctx.pc == 0x0886B610u) goto L_0886B610;
    return;
L_0886B610:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x0886B61Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 81u, 0x08A28AF4u>(ctx, &aot_mem) && ctx.pc == 0x0886B61Cu) goto L_0886B61C;
    return;
L_0886B61C:
    ctx.gpr[31] = (0x0886B624u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(168)));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 728u, 0x0896F908u>(ctx, &aot_mem) && ctx.pc == 0x0886B624u) goto L_0886B624;
    return;
L_0886B624:
    ctx.gpr[31] = (0x0886B62Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 92u, 0x08914770u>(ctx, &aot_mem) && ctx.pc == 0x0886B62Cu) goto L_0886B62C;
    return;
L_0886B62C:
    ctx.gpr[31] = (0x0886B634u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 315u, 0x08AA57F4u>(ctx, &aot_mem) && ctx.pc == 0x0886B634u) goto L_0886B634;
    return;
L_0886B634:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3824), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25432), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7108), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[31] = (0x0886B668u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7112), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 429u, 0x089C5B90u>(ctx, &aot_mem) && ctx.pc == 0x0886B668u) goto L_0886B668;
    return;
L_0886B668:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[17] = (0u | 182u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0886B69C;
      }
      goto L_0886B680;
    }
L_0886B680:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_0886B6AC;
      }
      goto L_0886B688;
    }
L_0886B688:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0886B694u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4156));
    goto L_0886B1A4;
L_0886B694:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0886B708;
      }
      goto L_0886B69C;
    }
L_0886B69C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(728)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    goto L_0886B6AC;
L_0886B6AC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(56));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0886B6C8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4088));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886B6C8u) goto L_0886B6C8;
    return;
L_0886B6C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0886B6E4;
      }
      goto L_0886B6D8;
    }
L_0886B6D8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(728)));
    goto L_0886B6E4;
L_0886B6E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0886B6FCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886B6FCu) goto L_0886B6FC;
    return;
L_0886B6FC:
    ctx.gpr[31] = (0x0886B704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 397u, 0x0898641Cu>(ctx, &aot_mem) && ctx.pc == 0x0886B704u) goto L_0886B704;
    return;
L_0886B704:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_0886B708;
L_0886B708:
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
L_0886B728:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13684)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(13680)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(13712)));
    ctx.gpr[11] = (2227u << 16u);
    ctx.gpr[14] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[15] = (2227u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[3] = (2227u << 16u);
    ctx.gpr[2] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[9] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(13688), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(13708)));
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(13716), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(13724), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (16281u << 16u);
    ctx.gpr[8] = (16268u << 16u);
    ctx.gpr[12] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[7] | 39322u);
    ctx.gpr[13] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[7] = (ctx.gpr[8] | 52429u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[24] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(13696), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[17] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(13692), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(13700), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(13704), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(13720), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(13728), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B7F0:
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B818:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    goto L_0886B830;
L_0886B830:
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(528), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886B830;
      }
      goto L_0886B850;
    }
L_0886B850:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4640), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4640));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[7] = (0u | 3u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4672), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4672));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B8CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(150));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
      if (branch_taken) {
          goto L_0886B940;
      }
      goto L_0886B910;
    }
L_0886B910:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
        goto L_0886B930;
    }
    goto L_0886B920;
L_0886B920:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_0886B930;
      }
      goto L_0886B930;
    }
L_0886B930:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(528), static_cast<std::uint8_t>(0u));
    goto L_0886B940;
L_0886B940:
    ctx.gpr[4] = (15379u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 29884u);
    ctx.gpr[20] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (2230u << 16u);
    goto L_0886B958;
L_0886B958:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(528)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886B9AC;
      }
      goto L_0886B968;
    }
L_0886B968:
    ctx.gpr[4] = (ctx.gpr[20] << 4u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(280)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(272));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x0886B9ACu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x0886B9ACu) goto L_0886B9AC;
    return;
L_0886B9AC:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[4] << 16u);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886B958;
      }
      goto L_0886B9C4;
    }
L_0886B9C4:
    ctx.gpr[19] = (2233u << 16u);
    ctx.gpr[4] = (16512u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-24800));
    goto L_0886B9DC;
L_0886B9DC:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(528)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886BA1C;
      }
      goto L_0886B9EC;
    }
L_0886B9EC:
    ctx.gpr[4] = (ctx.gpr[18] << 4u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0886BA10u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 654u, 0x0884EB24u>(ctx, &aot_mem) && ctx.pc == 0x0886BA10u) goto L_0886BA10;
    return;
L_0886BA10:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886BA1C;
      }
      goto L_0886BA18;
    }
L_0886BA18:
    ctx.gpr[18] = (0u | 16u);
    goto L_0886BA1C;
L_0886BA1C:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886B9DC;
      }
      goto L_0886BA34;
    }
L_0886BA34:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886BA54;
      }
      goto L_0886BA4C;
    }
L_0886BA4C:
    ctx.gpr[31] = (0x0886BA54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 15u, 0x0886C3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886BA54u) goto L_0886BA54;
    return;
L_0886BA54:
    ctx.gpr[4] = (0u | 0u);
    goto L_0886BA58;
L_0886BA58:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(528)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886BA88;
      }
      goto L_0886BA68;
    }
L_0886BA68:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886BA58;
      }
      goto L_0886BA80;
    }
L_0886BA80:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_0886BA88;
      }
      goto L_0886BA88;
    }
L_0886BA88:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BAAC:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(272));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(528), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BAF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2512));
    goto L_0886BB0C;
L_0886BB0C:
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0886BB24u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    goto L_0886B818;
L_0886BB24:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[4] << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886BB0C;
      }
      goto L_0886BB3C;
    }
L_0886BB3C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BB50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2512));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    goto L_0886BB84;
L_0886BB84:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (ctx.gpr[6] << 5u);
      if (branch_taken) {
          goto L_0886BBBC;
      }
      goto L_0886BB8C;
    }
L_0886BB8C:
    ctx.gpr[8] = (0u + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0886BBBC;
      }
      goto L_0886BBA8;
    }
L_0886BBA8:
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0886BB84;
      }
      goto L_0886BBBC;
    }
L_0886BBBC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886BBEC;
      }
      goto L_0886BBC4;
    }
L_0886BBC4:
    ctx.gpr[5] = (ctx.gpr[6] << 5u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0886BBE4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_0886BAAC;
L_0886BBE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886BC64;
      }
      goto L_0886BBEC;
    }
L_0886BBEC:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    goto L_0886BBF4;
L_0886BBF4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (ctx.gpr[6] << 5u);
      if (branch_taken) {
          goto L_0886BC2C;
      }
      goto L_0886BBFC;
    }
L_0886BBFC:
    ctx.gpr[8] = (0u + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886BC2C;
      }
      goto L_0886BC18;
    }
L_0886BC18:
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0886BBF4;
      }
      goto L_0886BC2C;
    }
L_0886BC2C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886BC64;
      }
      goto L_0886BC34;
    }
L_0886BC34:
    ctx.gpr[5] = (ctx.gpr[6] << 5u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0886BC50u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_0886B818;
L_0886BC50:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0886BC64u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_0886BAAC;
L_0886BC64:
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
L_0886BC80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2512));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    goto L_0886BC9C;
L_0886BC9C:
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886BCC4;
      }
      goto L_0886BCBC;
    }
L_0886BCBC:
    ctx.gpr[31] = (0x0886BCC4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_0886B8CC;
L_0886BCC4:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[4] << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886BC9C;
      }
      goto L_0886BCDC;
    }
L_0886BCDC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BCF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2512));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    goto L_0886BD0C;
L_0886BD0C:
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886BD34;
      }
      goto L_0886BD2C;
    }
L_0886BD2C:
    ctx.gpr[31] = (0x0886BD34u);
    // nop
    goto L_0886BD60;
L_0886BD34:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[4] << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886BD0C;
      }
      goto L_0886BD4C;
    }
L_0886BD4C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BD60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886BDB4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0886BDB4u) goto L_0886BDB4;
    return;
L_0886BDB4:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x0886BDC0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0886BDC0u) goto L_0886BDC0;
    return;
L_0886BDC0:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x0886BDCCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0886BDCCu) goto L_0886BDCC;
    return;
L_0886BDCC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7068)));
    ctx.gpr[31] = (0x0886BDDCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0886BDDCu) goto L_0886BDDC;
    return;
L_0886BDDC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[6] = (16576u << 16u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13780)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[30] = (ctx.gpr[5] + static_cast<std::uint32_t>(4672));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(13780), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0886BE4C;
      }
      goto L_0886BE28;
    }
L_0886BE28:
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13780)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    goto L_0886BE34;
L_0886BE34:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886BE34;
      }
      goto L_0886BE48;
    }
L_0886BE48:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(13780), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0886BE4C;
L_0886BE4C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13780)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4672), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(4))))));
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
        goto L_0886BEA8;
    }
    goto L_0886BE90;
L_0886BE90:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
      if (branch_taken) {
          goto L_0886BEB0;
      }
      goto L_0886BEA8;
    }
L_0886BEA8:
    ctx.gpr[17] = (ctx.gpr[4] << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    goto L_0886BEB0;
L_0886BEB0:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.gpr[10] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0886BED0;
      }
      goto L_0886BEC4;
    }
L_0886BEC4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    goto L_0886BED0;
L_0886BED0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[30] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(40));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[30] + static_cast<std::uint32_t>(52));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(72));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[30] + static_cast<std::uint32_t>(84));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(104));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (ctx.gpr[30] + static_cast<std::uint32_t>(116));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4640));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    goto L_0886BF88;
L_0886BF88:
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(528)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 8u, 0x0886C2BCu>(ctx, &aot_mem); return;
      }
      goto L_0886BF98;
    }
L_0886BF98:
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(528)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 8u, 0x0886C2BCu>(ctx, &aot_mem); return;
      }
      goto L_0886BFA8;
    }
L_0886BFA8:
    ctx.gpr[9] = (ctx.gpr[16] << 4u);
    ctx.gpr[7] = (ctx.gpr[17] << 4u);
    ctx.gpr[12] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[20] + ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (ctx.gpr[20] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_0886BFD8;
      }
      goto L_0886BFC0;
    }
L_0886BFC0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(528)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[10]);
      if (branch_taken) {
          goto L_0886BFDC;
      }
      goto L_0886BFCC;
    }
L_0886BFCC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(528)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886BFDC;
      }
      goto L_0886BFD8;
    }
L_0886BFD8:
    ctx.gpr[12] = (0u | 1u);
    goto L_0886BFDC;
L_0886BFDC:
    if (ctx.gpr[23] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
        (void)rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 2u, 0x0886C060u>(ctx, &aot_mem); return;
    }
    goto L_0886BFE4;
L_0886BFE4:
    ctx.gpr[4] = (ctx.gpr[9] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
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
    ctx.pc = 0x0886C000u; return;
}

void recomp_unit_0025(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0025_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_25(Runtime &runtime) {
    runtime.register_generated_unit(25u, 0x08868000u, 16384u, &recomp_unit_0025, &recomp_unit_0025_entry);
    runtime.register_function(0x08868000u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886803Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868074u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088680ACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088680D8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088680E8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088680FCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868104u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886812Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868138u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868140u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868148u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868150u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868158u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868164u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868170u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886817Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868188u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868194u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886819Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088681B8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868204u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886823Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868288u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088682B4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088682C4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088682D8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088682E0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868308u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868328u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868334u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886833Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868344u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886834Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868354u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868360u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886836Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868378u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868384u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868390u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868398u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088683B4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868400u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868408u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868450u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868494u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088684A4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868518u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868558u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868560u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868584u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088685B8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088685C8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088685D0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088685D8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088685F4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868600u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868608u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868640u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868658u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868674u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868718u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868740u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886877Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088687B0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088687B8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088687C0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886880Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868828u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868844u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886885Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868898u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088688D4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088688F8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868908u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868910u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868918u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868920u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868928u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868930u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868938u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868944u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868950u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886895Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868968u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868974u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886897Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088689A8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088689F4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088689FCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868A44u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868A58u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868A80u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868AA0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868AF8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868B2Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868B54u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868B58u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868B64u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868B6Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868B74u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868B7Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868B84u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868B90u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868B9Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868BA8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868BB4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868BC0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868BC4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868BE8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868C38u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868C64u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868C7Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868C9Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868CACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868CC0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868CD4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868CE4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868CECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868D04u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868D10u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868D18u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868D2Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868D40u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868D50u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868D58u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868D90u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868DD0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868DECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868DF4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868DFCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E04u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E0Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E14u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E1Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E28u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E34u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E4Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E54u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E5Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E64u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E6Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E70u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E80u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E88u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E98u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868EA0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868EA8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868EB4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F34u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F40u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F48u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F5Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F6Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F74u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F80u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F88u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F98u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868FA8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868FB4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868FC8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868FE4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868FF0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868FF8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869010u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869034u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886903Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886904Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869088u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886909Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088690F0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088690F8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869100u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886910Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869118u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869130u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869138u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869144u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869168u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869170u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886917Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886919Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088691A8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088691B4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088691C0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088691CCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088691DCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088691ECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869204u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886920Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869218u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869238u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869258u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869264u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869270u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869280u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886928Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088692A4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088692ACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088692C8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088692ECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869300u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869318u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886932Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886934Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869394u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088693B4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088693BCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088693C4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088693D0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869414u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869444u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869474u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869480u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869488u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869494u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088694A0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088694ACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088694B8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088694C4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088694D4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869504u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869510u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869520u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869524u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869540u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869554u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869570u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869578u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886957Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869598u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088695B8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088695C4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088695D4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088695E0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088695F0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869600u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869628u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869630u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869634u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869650u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869670u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088696D4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088696FCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869710u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869730u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869744u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886975Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869764u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886976Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886977Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869790u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088697D0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088697D8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088697ECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869824u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869830u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869838u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869840u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869848u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869850u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088698D8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869928u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886996Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869974u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088699A8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088699C8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869A48u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869AA4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869AF0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869AF4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869B0Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869B20u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869B38u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869B3Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869B48u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869B54u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869B60u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869B6Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869B80u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869B8Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869B94u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869BA0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869BACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869BBCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869BCCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869BE4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869BECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869BF4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869C0Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869C14u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869C2Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869C34u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869C40u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869C50u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869C58u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869C60u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869C6Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869C7Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869C94u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869C9Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869CA8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869CB4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869CC0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869CC8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869CCCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869CD4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869CE0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869CFCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869D04u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869D3Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869E38u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869E44u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869E58u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869F20u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869F4Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869F80u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A028u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A030u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A038u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A0A4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A0C0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A0ECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A0F8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A10Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A118u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A124u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A134u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A144u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A154u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A160u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A168u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A174u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A184u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A18Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A190u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A1ACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A1D0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A1E0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A1E8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A1F4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A1FCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A208u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A214u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A220u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A230u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A23Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A244u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A250u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A258u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A260u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A264u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A278u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A29Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A2A8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A2B8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A2D0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A2ECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A2F8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A30Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A320u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A344u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A358u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A364u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A370u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A378u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A384u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A398u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A39Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A3A0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A3B0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A3C4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A3D4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A3E4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A3F8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A404u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A414u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A438u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A468u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A474u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A48Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A498u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A4A8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A4B8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A4C4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A4CCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A4D4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A4E8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A4F8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A508u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A510u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A520u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A524u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A544u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A580u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A598u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A5B0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A5CCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A5D4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A5E0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A5E4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A5F0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A5FCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A600u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A610u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A61Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A624u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A630u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A638u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A640u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A650u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A660u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A668u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A694u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A6B8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A6C8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A6DCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A704u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A70Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A718u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A724u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A730u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A740u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A74Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A75Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A764u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A774u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A78Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A7CCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A7D4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A7E4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A7F4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A804u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A80Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A81Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A824u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A830u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A83Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A844u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A868u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A878u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A888u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A890u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A8A0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A8A8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A8B4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A8C4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A8D4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A8DCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A8ECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A8F4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A900u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A90Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A914u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A924u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A930u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A944u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A954u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A95Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A960u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A970u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A980u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A988u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A994u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A9A0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A9ACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A9B4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A9B8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A9C8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A9D8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A9E0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A9ECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A9F8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AA04u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AA0Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AA18u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AA24u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AA34u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AA44u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AA54u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AA68u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AA7Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AA8Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AA98u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AAA8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AAB8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AAC0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AAF0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB10u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB1Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB34u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB40u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB48u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB58u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB64u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB74u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB8Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ABACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ABBCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ABC8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ABE4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ABECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ABF8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AC00u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AC14u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AC34u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AC3Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AC44u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AC4Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AC58u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AC5Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AC70u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AC78u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AC94u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ACA4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ACE4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ACFCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AD04u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AD10u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AD34u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AD44u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AD4Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AD60u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AD68u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AD90u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ADA0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ADA8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ADACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ADB4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ADC4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ADCCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ADD0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ADD4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ADE4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ADF8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE0Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE10u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE38u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE48u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE50u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE54u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE5Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE6Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE74u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE78u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE7Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE8Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AEA0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AEB4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AEC8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AED4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AEE8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AEF4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AF20u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AF6Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AF74u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AF84u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AFA4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AFC0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AFE4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AFECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AFF8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B014u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B024u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B030u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B054u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B058u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B080u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B0A0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B0A4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B0C0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B0D4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B0D8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B0F8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B10Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B118u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B144u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B14Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B168u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B174u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B19Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B1A4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B1D0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B1D8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B210u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B218u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B234u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B240u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B260u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B26Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B274u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B27Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B294u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B2A0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B2ACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B2B8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B2C8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B2DCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B304u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B328u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B330u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B33Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B354u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B36Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B374u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B384u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B3A4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B3ACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B3BCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B3F4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B404u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B414u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B42Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B43Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B444u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B454u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B474u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B488u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B51Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B534u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B54Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B560u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B568u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B570u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B578u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B580u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B588u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B590u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B59Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B5A8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B5B4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B5E0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B600u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B608u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B610u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B61Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B624u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B62Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B634u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B668u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B680u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B688u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B694u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B69Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B6ACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B6C8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B6D8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B6E4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B6FCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B704u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B708u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B728u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B7F0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B818u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B830u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B850u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B8CCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B910u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B920u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B930u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B940u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B958u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B968u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B9ACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B9C4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B9DCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B9ECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BA10u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BA18u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BA1Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BA34u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BA4Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BA54u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BA58u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BA68u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BA80u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BA88u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BAACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BAF0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BB0Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BB24u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BB3Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BB50u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BB84u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BB8Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BBA8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BBBCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BBC4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BBE4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BBECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BBF4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BBFCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BC18u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BC2Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BC34u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BC50u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BC64u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BC80u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BC9Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BCBCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BCC4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BCDCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BCF0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BD0Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BD2Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BD34u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BD4Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BD60u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BDB4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BDC0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BDCCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BDDCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BE28u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BE34u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BE48u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BE4Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BE90u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BEA8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BEB0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BEC4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BED0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BF88u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BF98u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BFA8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BFC0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BFCCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BFD8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BFDCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BFE4u, &recomp_unit_0025, "recomp_unit_0025");
}
} // namespace psprecomp
