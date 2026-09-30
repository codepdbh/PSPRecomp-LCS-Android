#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0154[4091] = {
    1, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0,
    0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 11, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0,
    0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0,
    0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 29, 0,
    0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 36, 0, 37,
    0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43,
    0, 44, 0, 0, 0, 45, 0, 46, 0, 0, 47, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51,
    0, 0, 0, 0, 0, 0, 52, 53, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0,
    0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 66,
    0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0,
    0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0,
    0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 86, 0, 87, 0,
    0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0,
    94, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 101, 0, 0,
    0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 0, 0, 0, 0, 0, 108,
    0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 0, 0,
    0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 125, 0, 0, 126, 0, 127, 0, 128, 0, 129, 0, 0, 130, 0, 131, 0, 132,
    0, 133, 0, 0, 134, 0, 135, 0, 0, 136, 0, 137, 0, 138, 0, 139, 0, 0, 140, 0, 141, 0, 142, 0, 143, 0, 0, 144, 0, 145, 0, 0,
    146, 0, 147, 0, 0, 148, 0, 149, 0, 0, 150, 0, 151, 0, 0, 152, 0, 153, 0, 0, 0, 154, 0, 155, 0, 0, 0, 156, 0, 157, 0, 0,
    0, 158, 0, 159, 0, 0, 0, 160, 0, 161, 0, 0, 0, 162, 0, 163, 0, 0, 0, 164, 0, 165, 0, 0, 0, 166, 0, 167, 0, 0, 0, 168,
    0, 169, 0, 0, 0, 170, 0, 171, 0, 0, 0, 172, 0, 173, 0, 0, 0, 174, 0, 175, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 181, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 184,
    0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 188, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 194, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0,
    198, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 203, 204, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0,
    0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0,
    0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 221,
    0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 225,
    0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 231, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 235,
    0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 242, 0,
    0, 243, 0, 0, 244, 245, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 251, 0, 0, 252,
    0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 257, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 260,
    0, 261, 0, 262, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 265, 0, 266, 0, 267, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0,
    270, 0, 271, 0, 272, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 275, 0, 276, 0, 277, 0, 0, 0, 0, 278, 0, 0, 279, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 281, 0, 282, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0,
    286, 0, 287, 0, 0, 0, 288, 0, 289, 0, 290, 291, 0, 0, 292, 0, 0, 0, 0, 0, 0, 293, 294, 0, 0, 295, 0, 0, 0, 0, 296, 0,
    0, 297, 0, 0, 298, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 302, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306,
    0, 0, 0, 0, 307, 0, 308, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0,
    311, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0,
    314, 0, 0, 0, 315, 0, 0, 316, 0, 0, 0, 317, 0, 0, 318, 0, 0, 319, 0, 320, 0, 321, 0, 322, 0, 323, 0, 324, 0, 325, 0, 326,
    0, 327, 0, 0, 0, 328, 0, 329, 0, 0, 330, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 336, 0, 0, 337, 0, 338, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 341,
    0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0,
    0, 0, 346, 0, 347, 0, 0, 0, 0, 0, 0, 348, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    351, 0, 0, 0, 352, 0, 0, 353, 0, 354, 0, 0, 355, 0, 356, 0, 0, 357, 0, 0, 358, 0, 0, 359, 0, 360, 0, 361, 0, 0, 362, 0,
    363, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 366, 0, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 369,
    0, 370, 0, 0, 371, 0, 372, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 376, 0, 377, 0, 0, 378, 0, 0, 379, 0, 0, 380, 0, 381, 0, 382, 0, 0, 0, 0, 383, 384, 0, 0, 385, 0, 0, 386, 0,
    387, 0, 0, 0, 388, 0, 389, 0, 390, 0, 0, 391, 0, 392, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0, 395, 0, 396, 0, 397, 0,
    0, 398, 0, 399, 0, 0, 0, 400, 0, 401, 0, 402, 0, 403, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 406, 0, 407, 0, 408,
    0, 409, 0, 410, 0, 411, 0, 412, 413, 0, 414, 0, 0, 415, 0, 0, 416, 0, 417, 418, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 423,
    0, 424, 0, 425, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 428, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0,
    0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 434, 0, 0, 435, 0, 0, 0, 436, 0, 0,
    0, 0, 0, 437, 0, 0, 438, 0, 0, 439, 0, 0, 440, 0, 441, 0, 0, 442, 0, 0, 443, 0, 444, 0, 0, 445, 0, 0, 446, 0, 447, 0,
    0, 448, 0, 0, 449, 0, 450, 0, 0, 451, 0, 0, 452, 0, 0, 453, 0, 454, 0, 0, 0, 0, 455, 0, 0, 456, 0, 457, 0, 0, 458, 0,
    0, 459, 0, 0, 460, 0, 461, 0, 0, 0, 462, 0, 0, 463, 0, 464, 0, 0, 0, 0, 0, 465, 0, 0, 466, 0, 0, 0, 0, 0, 467, 0,
    468, 0, 0, 469, 0, 0, 470, 0, 0, 471, 0, 0, 472, 0, 0, 473, 0, 0, 474, 0, 0, 475, 0, 0, 476, 0, 0, 0, 477, 0, 0, 0,
    478, 0, 479, 0, 0, 480, 0, 0, 481, 0, 0, 482, 0, 483, 0, 484, 0, 485, 0, 0, 486, 0, 0, 487, 0, 0, 488, 0, 489, 0, 490, 0,
    0, 0, 491, 0, 0, 492, 0, 0, 493, 0, 0, 494, 0, 0, 495, 0, 496, 0, 497, 0, 498, 0, 0, 499, 0, 500, 0, 0, 501, 0, 0, 0,
    0, 0, 502, 0, 0, 503, 0, 0, 504, 0, 0, 505, 0, 0, 506, 0, 0, 507, 0, 0, 508, 0, 509, 0, 0, 510, 0, 0, 511, 0, 512, 0,
    0, 513, 0, 0, 514, 0, 0, 515, 0, 0, 516, 0, 0, 517, 0, 0, 518, 0, 519, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 523, 0,
    0, 524, 0, 0, 0, 525, 0, 0, 526, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 529, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    532, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 534, 0, 0, 535, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 537, 0, 0, 0, 538, 0,
    0, 539, 0, 540, 0, 541, 0, 0, 0, 0, 0, 542, 0, 543, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 546,
    0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 549, 0, 550, 0, 0, 0, 0, 0, 551, 0, 0, 0,
    552, 0, 0, 553, 0, 0, 0, 0, 554, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 557, 0, 0, 558, 0, 0, 0, 0, 0, 559, 0, 0, 560, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0,
    0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 565, 0, 0, 566, 0, 0, 0, 0, 0, 567, 568, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 570, 0, 0, 0, 0, 0, 0, 0, 571, 0, 572, 0, 0, 0, 573, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0,
    0, 0, 0, 577, 0, 578, 0, 0, 0, 0, 0, 0, 0, 579, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0,
    582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 584, 0, 585, 0, 0, 586, 0, 587, 0, 588, 0, 0, 589, 590, 0, 0, 0, 0,
    591, 0, 0, 0, 0, 592, 0, 0, 593, 0, 594, 0, 595, 0, 0, 596, 0, 0, 0, 597, 0, 0, 0, 598, 0, 0, 599, 0, 0, 0, 600, 0,
    0, 0, 601, 0, 0, 602, 0, 603, 0, 604, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 607, 0, 608, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 611, 0, 0, 0, 0, 0, 612, 0, 0, 613, 0, 0,
    614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0,
    618, 0, 619, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 621, 0, 0, 622, 0, 0, 0, 0, 623, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0,
    625, 0, 0, 626, 0, 0, 0, 0, 0, 627, 628, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 630, 0, 631, 0, 0, 0, 0, 0, 0,
    632, 633, 0, 0, 634, 0, 0, 0, 0, 0, 635, 0, 0, 0, 636, 0, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 638, 0,
    0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 641, 0, 642, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 649, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 652, 0, 0, 0, 0, 0,
    653, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 655, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 660, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 663, 0, 664, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 666, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 667, 0, 668, 0, 669, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0, 672, 0, 0, 0, 0, 0, 673, 0,
    0, 674, 0, 0, 675, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 678, 0, 0, 679, 0, 680, 0, 0, 0, 0, 0, 681, 0, 0, 0, 0, 682, 0, 0, 683, 0, 0, 0, 0, 684, 0, 0, 685, 0, 0, 0,
    0, 0, 0, 0, 686, 0, 0, 687, 0, 0, 0, 0, 0, 688, 689, 0, 0, 0, 0, 0, 690, 0, 0, 0, 0, 0, 0, 691, 0, 692, 0, 0,
    0, 0, 0, 0, 693, 694, 0, 0, 695, 0, 0, 0, 0, 0, 696, 0, 0, 0, 697, 0, 0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 699, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 0, 0, 0, 701, 0, 0, 0, 0, 702, 0, 703, 0, 0, 0, 0, 704, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 708, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 709, 0, 710, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 0,
    0, 0, 0, 712, 0, 0, 0, 0, 713, 0, 0, 0, 0, 0, 0, 0, 0, 0, 714, 0, 715, 0, 716, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 717, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 718, 0, 0, 719, 0, 0, 0, 0, 0, 720, 0, 0, 721, 0, 0, 722, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 723, 0, 0, 0, 0, 0, 0, 724, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 725, 0, 0, 726, 0,
    727, 0, 0, 0, 0, 0, 728, 0, 0, 0, 0, 729, 0, 0, 730, 0, 0, 0, 0, 731, 0, 0, 732, 0, 0, 0, 0, 0, 0, 0, 733, 0,
    0, 734, 0, 0, 0, 0, 0, 735, 736, 0, 0, 0, 0, 0, 737, 0, 0, 0, 0, 0, 0, 738, 0, 739, 0, 0, 0, 0, 0, 0, 740, 741,
    0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 743, 0, 744, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 745, 0, 0, 0, 0, 746, 0, 0, 0, 747, 0, 0, 748, 0, 749, 0, 750, 0, 0, 0, 751,
    0, 0, 752, 0, 753, 754, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 756, 0, 0, 0, 0, 757, 0, 0, 758, 0, 0, 0, 759, 0, 0, 760, 0, 761, 0, 762,
    0, 0, 763, 0, 0, 764, 0, 765, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 766, 0, 767, 768, 0, 0, 769, 0, 0, 0, 770, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 771, 0, 0, 0, 772, 0, 0, 0, 773, 0, 0, 0, 0, 774, 0,
    775, 0, 776, 0, 0, 0, 0, 0, 0, 0, 777, 0, 0, 0, 0, 0, 0, 0, 778, 0, 0, 0, 0, 0, 779, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 780, 0, 0, 0, 781, 0, 0, 0, 782, 0, 0, 0, 0, 783, 0, 784, 0, 0, 0, 0,
    785, 0, 0, 0, 0, 0, 786, 0, 787, 0, 0, 0, 0, 0, 788, 789, 0, 0, 0, 0, 790, 0, 0, 0, 0, 0, 791, 0, 792, 0, 0, 0,
    0, 0, 793, 794, 0, 795, 0, 0, 0, 796, 0, 0, 0, 0, 0, 0, 797, 0, 0, 0, 798, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 799, 0, 800, 0, 0, 0, 0, 801, 0, 0, 802, 0, 803, 0, 0, 0, 804, 0, 0, 805, 0, 0, 806,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 807, 0, 808, 0, 0, 0, 0, 0, 809, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 810, 811, 0, 812, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 813, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 814, 0, 0, 815, 0, 0, 0, 0, 0, 816, 0, 817, 0, 0, 818, 0, 819, 0, 820, 0, 0, 0, 0, 821,
    0, 0, 0, 0, 0, 822, 0, 823, 0, 0, 0, 0, 0, 824, 825, 0, 0, 0, 0, 826, 0, 0, 0, 0, 0, 827, 0, 828, 0, 0, 0, 0,
    0, 829, 830, 0, 831, 0, 0, 0, 0, 0, 0, 0, 832, 0, 0, 0, 833, 0, 0, 0, 0, 834, 0, 0, 0, 0, 835, 836, 0, 837, 0, 0,
    0, 838, 0, 0, 0, 0, 0, 0, 839, 0, 0, 0, 840, 0, 841, 0, 0, 0, 0, 0, 842, 0, 0, 0, 0, 0, 843,
};
void recomp_unit_0154_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A6C000u;
        entry_id = (entry_delta < 16364u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0154[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A6C000;
    case 2u: goto L_08A6C014;
    case 3u: goto L_08A6C01C;
    case 4u: goto L_08A6C038;
    case 5u: goto L_08A6C040;
    case 6u: goto L_08A6C054;
    case 7u: goto L_08A6C060;
    case 8u: goto L_08A6C084;
    case 9u: goto L_08A6C09C;
    case 10u: goto L_08A6C0B8;
    case 11u: goto L_08A6C0BC;
    case 12u: goto L_08A6C0C4;
    case 13u: goto L_08A6C0E0;
    case 14u: goto L_08A6C0E8;
    case 15u: goto L_08A6C104;
    case 16u: goto L_08A6C10C;
    case 17u: goto L_08A6C128;
    case 18u: goto L_08A6C130;
    case 19u: goto L_08A6C14C;
    case 20u: goto L_08A6C154;
    case 21u: goto L_08A6C170;
    case 22u: goto L_08A6C178;
    case 23u: goto L_08A6C194;
    case 24u: goto L_08A6C19C;
    case 25u: goto L_08A6C1B8;
    case 26u: goto L_08A6C1C0;
    case 27u: goto L_08A6C1DC;
    case 28u: goto L_08A6C1E4;
    case 29u: goto L_08A6C1F8;
    case 30u: goto L_08A6C204;
    case 31u: goto L_08A6C228;
    case 32u: goto L_08A6C234;
    case 33u: goto L_08A6C24C;
    case 34u: goto L_08A6C25C;
    case 35u: goto L_08A6C26C;
    case 36u: goto L_08A6C274;
    case 37u: goto L_08A6C27C;
    case 38u: goto L_08A6C290;
    case 39u: goto L_08A6C2A4;
    case 40u: goto L_08A6C2B4;
    case 41u: goto L_08A6C2D4;
    case 42u: goto L_08A6C2E0;
    case 43u: goto L_08A6C2FC;
    case 44u: goto L_08A6C304;
    case 45u: goto L_08A6C314;
    case 46u: goto L_08A6C31C;
    case 47u: goto L_08A6C328;
    case 48u: goto L_08A6C334;
    case 49u: goto L_08A6C340;
    case 50u: goto L_08A6C364;
    case 51u: goto L_08A6C37C;
    case 52u: goto L_08A6C398;
    case 53u: goto L_08A6C39C;
    case 54u: goto L_08A6C3A4;
    case 55u: goto L_08A6C3C0;
    case 56u: goto L_08A6C3C8;
    case 57u: goto L_08A6C3E4;
    case 58u: goto L_08A6C3EC;
    case 59u: goto L_08A6C408;
    case 60u: goto L_08A6C410;
    case 61u: goto L_08A6C42C;
    case 62u: goto L_08A6C434;
    case 63u: goto L_08A6C450;
    case 64u: goto L_08A6C458;
    case 65u: goto L_08A6C474;
    case 66u: goto L_08A6C47C;
    case 67u: goto L_08A6C498;
    case 68u: goto L_08A6C4A0;
    case 69u: goto L_08A6C4BC;
    case 70u: goto L_08A6C4C4;
    case 71u: goto L_08A6C4E0;
    case 72u: goto L_08A6C4E8;
    case 73u: goto L_08A6C504;
    case 74u: goto L_08A6C50C;
    case 75u: goto L_08A6C528;
    case 76u: goto L_08A6C530;
    case 77u: goto L_08A6C54C;
    case 78u: goto L_08A6C554;
    case 79u: goto L_08A6C564;
    case 80u: goto L_08A6C574;
    case 81u: goto L_08A6C588;
    case 82u: goto L_08A6C594;
    case 83u: goto L_08A6C5B8;
    case 84u: goto L_08A6C5D0;
    case 85u: goto L_08A6C5EC;
    case 86u: goto L_08A6C5F0;
    case 87u: goto L_08A6C5F8;
    case 88u: goto L_08A6C614;
    case 89u: goto L_08A6C61C;
    case 90u: goto L_08A6C638;
    case 91u: goto L_08A6C640;
    case 92u: goto L_08A6C65C;
    case 93u: goto L_08A6C664;
    case 94u: goto L_08A6C680;
    case 95u: goto L_08A6C688;
    case 96u: goto L_08A6C6A4;
    case 97u: goto L_08A6C6AC;
    case 98u: goto L_08A6C6C8;
    case 99u: goto L_08A6C6D0;
    case 100u: goto L_08A6C6EC;
    case 101u: goto L_08A6C6F4;
    case 102u: goto L_08A6C710;
    case 103u: goto L_08A6C718;
    case 104u: goto L_08A6C734;
    case 105u: goto L_08A6C73C;
    case 106u: goto L_08A6C758;
    case 107u: goto L_08A6C760;
    case 108u: goto L_08A6C77C;
    case 109u: goto L_08A6C784;
    case 110u: goto L_08A6C7A0;
    case 111u: goto L_08A6C7A8;
    case 112u: goto L_08A6C7C4;
    case 113u: goto L_08A6C7CC;
    case 114u: goto L_08A6C7E8;
    case 115u: goto L_08A6C7F0;
    case 116u: goto L_08A6C80C;
    case 117u: goto L_08A6C814;
    case 118u: goto L_08A6C830;
    case 119u: goto L_08A6C838;
    case 120u: goto L_08A6C84C;
    case 121u: goto L_08A6C858;
    case 122u: goto L_08A6C890;
    case 123u: goto L_08A6C8A4;
    case 124u: goto L_08A6C8B4;
    case 125u: goto L_08A6C8BC;
    case 126u: goto L_08A6C8C8;
    case 127u: goto L_08A6C8D0;
    case 128u: goto L_08A6C8D8;
    case 129u: goto L_08A6C8E0;
    case 130u: goto L_08A6C8EC;
    case 131u: goto L_08A6C8F4;
    case 132u: goto L_08A6C8FC;
    case 133u: goto L_08A6C904;
    case 134u: goto L_08A6C910;
    case 135u: goto L_08A6C918;
    case 136u: goto L_08A6C924;
    case 137u: goto L_08A6C92C;
    case 138u: goto L_08A6C934;
    case 139u: goto L_08A6C93C;
    case 140u: goto L_08A6C948;
    case 141u: goto L_08A6C950;
    case 142u: goto L_08A6C958;
    case 143u: goto L_08A6C960;
    case 144u: goto L_08A6C96C;
    case 145u: goto L_08A6C974;
    case 146u: goto L_08A6C980;
    case 147u: goto L_08A6C988;
    case 148u: goto L_08A6C994;
    case 149u: goto L_08A6C99C;
    case 150u: goto L_08A6C9A8;
    case 151u: goto L_08A6C9B0;
    case 152u: goto L_08A6C9BC;
    case 153u: goto L_08A6C9C4;
    case 154u: goto L_08A6C9D4;
    case 155u: goto L_08A6C9DC;
    case 156u: goto L_08A6C9EC;
    case 157u: goto L_08A6C9F4;
    case 158u: goto L_08A6CA04;
    case 159u: goto L_08A6CA0C;
    case 160u: goto L_08A6CA1C;
    case 161u: goto L_08A6CA24;
    case 162u: goto L_08A6CA34;
    case 163u: goto L_08A6CA3C;
    case 164u: goto L_08A6CA4C;
    case 165u: goto L_08A6CA54;
    case 166u: goto L_08A6CA64;
    case 167u: goto L_08A6CA6C;
    case 168u: goto L_08A6CA7C;
    case 169u: goto L_08A6CA84;
    case 170u: goto L_08A6CA94;
    case 171u: goto L_08A6CA9C;
    case 172u: goto L_08A6CAAC;
    case 173u: goto L_08A6CAB4;
    case 174u: goto L_08A6CAC4;
    case 175u: goto L_08A6CACC;
    case 176u: goto L_08A6CAD0;
    case 177u: goto L_08A6CAEC;
    case 178u: goto L_08A6CB18;
    case 179u: goto L_08A6CB30;
    case 180u: goto L_08A6CB4C;
    case 181u: goto L_08A6CB50;
    case 182u: goto L_08A6CB58;
    case 183u: goto L_08A6CB74;
    case 184u: goto L_08A6CB7C;
    case 185u: goto L_08A6CB98;
    case 186u: goto L_08A6CBA0;
    case 187u: goto L_08A6CBBC;
    case 188u: goto L_08A6CBC4;
    case 189u: goto L_08A6CBC8;
    case 190u: goto L_08A6CBD4;
    case 191u: goto L_08A6CC00;
    case 192u: goto L_08A6CC18;
    case 193u: goto L_08A6CC34;
    case 194u: goto L_08A6CC38;
    case 195u: goto L_08A6CC40;
    case 196u: goto L_08A6CC5C;
    case 197u: goto L_08A6CC64;
    case 198u: goto L_08A6CC80;
    case 199u: goto L_08A6CC88;
    case 200u: goto L_08A6CCA4;
    case 201u: goto L_08A6CCAC;
    case 202u: goto L_08A6CCC8;
    case 203u: goto L_08A6CCD0;
    case 204u: goto L_08A6CCD4;
    case 205u: goto L_08A6CCE0;
    case 206u: goto L_08A6CD64;
    case 207u: goto L_08A6CD84;
    case 208u: goto L_08A6CDAC;
    case 209u: goto L_08A6CDC0;
    case 210u: goto L_08A6CDD8;
    case 211u: goto L_08A6CDE8;
    case 212u: goto L_08A6CE24;
    case 213u: goto L_08A6CE38;
    case 214u: goto L_08A6CE74;
    case 215u: goto L_08A6CE94;
    case 216u: goto L_08A6CEA0;
    case 217u: goto L_08A6CEB0;
    case 218u: goto L_08A6CECC;
    case 219u: goto L_08A6CEE8;
    case 220u: goto L_08A6CEF4;
    case 221u: goto L_08A6CEFC;
    case 222u: goto L_08A6CF08;
    case 223u: goto L_08A6CF14;
    case 224u: goto L_08A6CF5C;
    case 225u: goto L_08A6CF7C;
    case 226u: goto L_08A6CF8C;
    case 227u: goto L_08A6CFA8;
    case 228u: goto L_08A6CFB8;
    case 229u: goto L_08A6D010;
    case 230u: goto L_08A6D024;
    case 231u: goto L_08A6D02C;
    case 232u: goto L_08A6D034;
    case 233u: goto L_08A6D068;
    case 234u: goto L_08A6D074;
    case 235u: goto L_08A6D07C;
    case 236u: goto L_08A6D08C;
    case 237u: goto L_08A6D0BC;
    case 238u: goto L_08A6D0CC;
    case 239u: goto L_08A6D128;
    case 240u: goto L_08A6D14C;
    case 241u: goto L_08A6D16C;
    case 242u: goto L_08A6D178;
    case 243u: goto L_08A6D184;
    case 244u: goto L_08A6D190;
    case 245u: goto L_08A6D194;
    case 246u: goto L_08A6D1A8;
    case 247u: goto L_08A6D1B4;
    case 248u: goto L_08A6D1C0;
    case 249u: goto L_08A6D1DC;
    case 250u: goto L_08A6D1E4;
    case 251u: goto L_08A6D1F0;
    case 252u: goto L_08A6D1FC;
    case 253u: goto L_08A6D214;
    case 254u: goto L_08A6D224;
    case 255u: goto L_08A6D230;
    case 256u: goto L_08A6D248;
    case 257u: goto L_08A6D250;
    case 258u: goto L_08A6D25C;
    case 259u: goto L_08A6D268;
    case 260u: goto L_08A6D27C;
    case 261u: goto L_08A6D284;
    case 262u: goto L_08A6D28C;
    case 263u: goto L_08A6D294;
    case 264u: goto L_08A6D2BC;
    case 265u: goto L_08A6D2C4;
    case 266u: goto L_08A6D2CC;
    case 267u: goto L_08A6D2D4;
    case 268u: goto L_08A6D2E0;
    case 269u: goto L_08A6D2EC;
    case 270u: goto L_08A6D300;
    case 271u: goto L_08A6D308;
    case 272u: goto L_08A6D310;
    case 273u: goto L_08A6D318;
    case 274u: goto L_08A6D340;
    case 275u: goto L_08A6D348;
    case 276u: goto L_08A6D350;
    case 277u: goto L_08A6D358;
    case 278u: goto L_08A6D36C;
    case 279u: goto L_08A6D378;
    case 280u: goto L_08A6D3B8;
    case 281u: goto L_08A6D3C0;
    case 282u: goto L_08A6D3C8;
    case 283u: goto L_08A6D3D0;
    case 284u: goto L_08A6D3DC;
    case 285u: goto L_08A6D3F8;
    case 286u: goto L_08A6D400;
    case 287u: goto L_08A6D408;
    case 288u: goto L_08A6D418;
    case 289u: goto L_08A6D420;
    case 290u: goto L_08A6D428;
    case 291u: goto L_08A6D42C;
    case 292u: goto L_08A6D438;
    case 293u: goto L_08A6D454;
    case 294u: goto L_08A6D458;
    case 295u: goto L_08A6D464;
    case 296u: goto L_08A6D478;
    case 297u: goto L_08A6D484;
    case 298u: goto L_08A6D490;
    case 299u: goto L_08A6D49C;
    case 300u: goto L_08A6D4AC;
    case 301u: goto L_08A6D4C4;
    case 302u: goto L_08A6D4CC;
    case 303u: goto L_08A6D4E0;
    case 304u: goto L_08A6D4E8;
    case 305u: goto L_08A6D54C;
    case 306u: goto L_08A6D57C;
    case 307u: goto L_08A6D590;
    case 308u: goto L_08A6D598;
    case 309u: goto L_08A6D5A0;
    case 310u: goto L_08A6D5E8;
    case 311u: goto L_08A6D600;
    case 312u: goto L_08A6D624;
    case 313u: goto L_08A6D66C;
    case 314u: goto L_08A6D680;
    case 315u: goto L_08A6D690;
    case 316u: goto L_08A6D69C;
    case 317u: goto L_08A6D6AC;
    case 318u: goto L_08A6D6B8;
    case 319u: goto L_08A6D6C4;
    case 320u: goto L_08A6D6CC;
    case 321u: goto L_08A6D6D4;
    case 322u: goto L_08A6D6DC;
    case 323u: goto L_08A6D6E4;
    case 324u: goto L_08A6D6EC;
    case 325u: goto L_08A6D6F4;
    case 326u: goto L_08A6D6FC;
    case 327u: goto L_08A6D704;
    case 328u: goto L_08A6D714;
    case 329u: goto L_08A6D71C;
    case 330u: goto L_08A6D728;
    case 331u: goto L_08A6D730;
    case 332u: goto L_08A6D898;
    case 333u: goto L_08A6D8A8;
    case 334u: goto L_08A6D900;
    case 335u: goto L_08A6D930;
    case 336u: goto L_08A6D934;
    case 337u: goto L_08A6D940;
    case 338u: goto L_08A6D948;
    case 339u: goto L_08A6D954;
    case 340u: goto L_08A6D96C;
    case 341u: goto L_08A6D97C;
    case 342u: goto L_08A6D990;
    case 343u: goto L_08A6D9A4;
    case 344u: goto L_08A6D9C4;
    case 345u: goto L_08A6D9F0;
    case 346u: goto L_08A6DA08;
    case 347u: goto L_08A6DA10;
    case 348u: goto L_08A6DA2C;
    case 349u: goto L_08A6DA30;
    case 350u: goto L_08A6DA50;
    case 351u: goto L_08A6DA80;
    case 352u: goto L_08A6DA90;
    case 353u: goto L_08A6DA9C;
    case 354u: goto L_08A6DAA4;
    case 355u: goto L_08A6DAB0;
    case 356u: goto L_08A6DAB8;
    case 357u: goto L_08A6DAC4;
    case 358u: goto L_08A6DAD0;
    case 359u: goto L_08A6DADC;
    case 360u: goto L_08A6DAE4;
    case 361u: goto L_08A6DAEC;
    case 362u: goto L_08A6DAF8;
    case 363u: goto L_08A6DB00;
    case 364u: goto L_08A6DB08;
    case 365u: goto L_08A6DB38;
    case 366u: goto L_08A6DB44;
    case 367u: goto L_08A6DB50;
    case 368u: goto L_08A6DB6C;
    case 369u: goto L_08A6DB7C;
    case 370u: goto L_08A6DB84;
    case 371u: goto L_08A6DB90;
    case 372u: goto L_08A6DB98;
    case 373u: goto L_08A6DBA0;
    case 374u: goto L_08A6DBD0;
    case 375u: goto L_08A6DBDC;
    case 376u: goto L_08A6DC0C;
    case 377u: goto L_08A6DC14;
    case 378u: goto L_08A6DC20;
    case 379u: goto L_08A6DC2C;
    case 380u: goto L_08A6DC38;
    case 381u: goto L_08A6DC40;
    case 382u: goto L_08A6DC48;
    case 383u: goto L_08A6DC5C;
    case 384u: goto L_08A6DC60;
    case 385u: goto L_08A6DC6C;
    case 386u: goto L_08A6DC78;
    case 387u: goto L_08A6DC80;
    case 388u: goto L_08A6DC90;
    case 389u: goto L_08A6DC98;
    case 390u: goto L_08A6DCA0;
    case 391u: goto L_08A6DCAC;
    case 392u: goto L_08A6DCB4;
    case 393u: goto L_08A6DCD0;
    case 394u: goto L_08A6DCE0;
    case 395u: goto L_08A6DCE8;
    case 396u: goto L_08A6DCF0;
    case 397u: goto L_08A6DCF8;
    case 398u: goto L_08A6DD04;
    case 399u: goto L_08A6DD0C;
    case 400u: goto L_08A6DD1C;
    case 401u: goto L_08A6DD24;
    case 402u: goto L_08A6DD2C;
    case 403u: goto L_08A6DD34;
    case 404u: goto L_08A6DD40;
    case 405u: goto L_08A6DD54;
    case 406u: goto L_08A6DD6C;
    case 407u: goto L_08A6DD74;
    case 408u: goto L_08A6DD7C;
    case 409u: goto L_08A6DD84;
    case 410u: goto L_08A6DD8C;
    case 411u: goto L_08A6DD94;
    case 412u: goto L_08A6DD9C;
    case 413u: goto L_08A6DDA0;
    case 414u: goto L_08A6DDA8;
    case 415u: goto L_08A6DDB4;
    case 416u: goto L_08A6DDC0;
    case 417u: goto L_08A6DDC8;
    case 418u: goto L_08A6DDCC;
    case 419u: goto L_08A6DDF0;
    case 420u: goto L_08A6DE48;
    case 421u: goto L_08A6DE50;
    case 422u: goto L_08A6DE60;
    case 423u: goto L_08A6DE7C;
    case 424u: goto L_08A6DE84;
    case 425u: goto L_08A6DE8C;
    case 426u: goto L_08A6DEA8;
    case 427u: goto L_08A6DEBC;
    case 428u: goto L_08A6DEC8;
    case 429u: goto L_08A6DECC;
    case 430u: goto L_08A6DEF4;
    case 431u: goto L_08A6DF10;
    case 432u: goto L_08A6DF34;
    case 433u: goto L_08A6DF50;
    case 434u: goto L_08A6DF58;
    case 435u: goto L_08A6DF64;
    case 436u: goto L_08A6DF74;
    case 437u: goto L_08A6DF8C;
    case 438u: goto L_08A6DF98;
    case 439u: goto L_08A6DFA4;
    case 440u: goto L_08A6DFB0;
    case 441u: goto L_08A6DFB8;
    case 442u: goto L_08A6DFC4;
    case 443u: goto L_08A6DFD0;
    case 444u: goto L_08A6DFD8;
    case 445u: goto L_08A6DFE4;
    case 446u: goto L_08A6DFF0;
    case 447u: goto L_08A6DFF8;
    case 448u: goto L_08A6E004;
    case 449u: goto L_08A6E010;
    case 450u: goto L_08A6E018;
    case 451u: goto L_08A6E024;
    case 452u: goto L_08A6E030;
    case 453u: goto L_08A6E03C;
    case 454u: goto L_08A6E044;
    case 455u: goto L_08A6E058;
    case 456u: goto L_08A6E064;
    case 457u: goto L_08A6E06C;
    case 458u: goto L_08A6E078;
    case 459u: goto L_08A6E084;
    case 460u: goto L_08A6E090;
    case 461u: goto L_08A6E098;
    case 462u: goto L_08A6E0A8;
    case 463u: goto L_08A6E0B4;
    case 464u: goto L_08A6E0BC;
    case 465u: goto L_08A6E0D4;
    case 466u: goto L_08A6E0E0;
    case 467u: goto L_08A6E0F8;
    case 468u: goto L_08A6E100;
    case 469u: goto L_08A6E10C;
    case 470u: goto L_08A6E118;
    case 471u: goto L_08A6E124;
    case 472u: goto L_08A6E130;
    case 473u: goto L_08A6E13C;
    case 474u: goto L_08A6E148;
    case 475u: goto L_08A6E154;
    case 476u: goto L_08A6E160;
    case 477u: goto L_08A6E170;
    case 478u: goto L_08A6E180;
    case 479u: goto L_08A6E188;
    case 480u: goto L_08A6E194;
    case 481u: goto L_08A6E1A0;
    case 482u: goto L_08A6E1AC;
    case 483u: goto L_08A6E1B4;
    case 484u: goto L_08A6E1BC;
    case 485u: goto L_08A6E1C4;
    case 486u: goto L_08A6E1D0;
    case 487u: goto L_08A6E1DC;
    case 488u: goto L_08A6E1E8;
    case 489u: goto L_08A6E1F0;
    case 490u: goto L_08A6E1F8;
    case 491u: goto L_08A6E208;
    case 492u: goto L_08A6E214;
    case 493u: goto L_08A6E220;
    case 494u: goto L_08A6E22C;
    case 495u: goto L_08A6E238;
    case 496u: goto L_08A6E240;
    case 497u: goto L_08A6E248;
    case 498u: goto L_08A6E250;
    case 499u: goto L_08A6E25C;
    case 500u: goto L_08A6E264;
    case 501u: goto L_08A6E270;
    case 502u: goto L_08A6E288;
    case 503u: goto L_08A6E294;
    case 504u: goto L_08A6E2A0;
    case 505u: goto L_08A6E2AC;
    case 506u: goto L_08A6E2B8;
    case 507u: goto L_08A6E2C4;
    case 508u: goto L_08A6E2D0;
    case 509u: goto L_08A6E2D8;
    case 510u: goto L_08A6E2E4;
    case 511u: goto L_08A6E2F0;
    case 512u: goto L_08A6E2F8;
    case 513u: goto L_08A6E304;
    case 514u: goto L_08A6E310;
    case 515u: goto L_08A6E31C;
    case 516u: goto L_08A6E328;
    case 517u: goto L_08A6E334;
    case 518u: goto L_08A6E340;
    case 519u: goto L_08A6E348;
    case 520u: goto L_08A6E354;
    case 521u: goto L_08A6E378;
    case 522u: goto L_08A6E3F0;
    case 523u: goto L_08A6E3F8;
    case 524u: goto L_08A6E404;
    case 525u: goto L_08A6E414;
    case 526u: goto L_08A6E420;
    case 527u: goto L_08A6E428;
    case 528u: goto L_08A6E460;
    case 529u: goto L_08A6E470;
    case 530u: goto L_08A6E4D4;
    case 531u: goto L_08A6E4D8;
    case 532u: goto L_08A6E500;
    case 533u: goto L_08A6E520;
    case 534u: goto L_08A6E530;
    case 535u: goto L_08A6E53C;
    case 536u: goto L_08A6E554;
    case 537u: goto L_08A6E568;
    case 538u: goto L_08A6E578;
    case 539u: goto L_08A6E584;
    case 540u: goto L_08A6E58C;
    case 541u: goto L_08A6E594;
    case 542u: goto L_08A6E5AC;
    case 543u: goto L_08A6E5B4;
    case 544u: goto L_08A6E5C4;
    case 545u: goto L_08A6E5E0;
    case 546u: goto L_08A6E5FC;
    case 547u: goto L_08A6E604;
    case 548u: goto L_08A6E63C;
    case 549u: goto L_08A6E650;
    case 550u: goto L_08A6E658;
    case 551u: goto L_08A6E670;
    case 552u: goto L_08A6E680;
    case 553u: goto L_08A6E68C;
    case 554u: goto L_08A6E6A0;
    case 555u: goto L_08A6E6A8;
    case 556u: goto L_08A6E6D4;
    case 557u: goto L_08A6E70C;
    case 558u: goto L_08A6E718;
    case 559u: goto L_08A6E730;
    case 560u: goto L_08A6E73C;
    case 561u: goto L_08A6E748;
    case 562u: goto L_08A6E774;
    case 563u: goto L_08A6E790;
    case 564u: goto L_08A6E7BC;
    case 565u: goto L_08A6E7C8;
    case 566u: goto L_08A6E7D4;
    case 567u: goto L_08A6E7EC;
    case 568u: goto L_08A6E7F0;
    case 569u: goto L_08A6E834;
    case 570u: goto L_08A6E83C;
    case 571u: goto L_08A6E85C;
    case 572u: goto L_08A6E864;
    case 573u: goto L_08A6E874;
    case 574u: goto L_08A6E8C0;
    case 575u: goto L_08A6E8D0;
    case 576u: goto L_08A6E8F0;
    case 577u: goto L_08A6E90C;
    case 578u: goto L_08A6E914;
    case 579u: goto L_08A6E934;
    case 580u: goto L_08A6E93C;
    case 581u: goto L_08A6E964;
    case 582u: goto L_08A6E980;
    case 583u: goto L_08A6E9AC;
    case 584u: goto L_08A6E9B8;
    case 585u: goto L_08A6E9C0;
    case 586u: goto L_08A6E9CC;
    case 587u: goto L_08A6E9D4;
    case 588u: goto L_08A6E9DC;
    case 589u: goto L_08A6E9E8;
    case 590u: goto L_08A6E9EC;
    case 591u: goto L_08A6EA00;
    case 592u: goto L_08A6EA14;
    case 593u: goto L_08A6EA20;
    case 594u: goto L_08A6EA28;
    case 595u: goto L_08A6EA30;
    case 596u: goto L_08A6EA3C;
    case 597u: goto L_08A6EA4C;
    case 598u: goto L_08A6EA5C;
    case 599u: goto L_08A6EA68;
    case 600u: goto L_08A6EA78;
    case 601u: goto L_08A6EA88;
    case 602u: goto L_08A6EA94;
    case 603u: goto L_08A6EA9C;
    case 604u: goto L_08A6EAA4;
    case 605u: goto L_08A6EAA8;
    case 606u: goto L_08A6EAD0;
    case 607u: goto L_08A6EAD8;
    case 608u: goto L_08A6EAE0;
    case 609u: goto L_08A6EB0C;
    case 610u: goto L_08A6EB44;
    case 611u: goto L_08A6EB50;
    case 612u: goto L_08A6EB68;
    case 613u: goto L_08A6EB74;
    case 614u: goto L_08A6EB80;
    case 615u: goto L_08A6EBAC;
    case 616u: goto L_08A6EBC8;
    case 617u: goto L_08A6EBF4;
    case 618u: goto L_08A6EC00;
    case 619u: goto L_08A6EC08;
    case 620u: goto L_08A6EC20;
    case 621u: goto L_08A6EC34;
    case 622u: goto L_08A6EC40;
    case 623u: goto L_08A6EC54;
    case 624u: goto L_08A6EC60;
    case 625u: goto L_08A6EC80;
    case 626u: goto L_08A6EC8C;
    case 627u: goto L_08A6ECA4;
    case 628u: goto L_08A6ECA8;
    case 629u: goto L_08A6ECC0;
    case 630u: goto L_08A6ECDC;
    case 631u: goto L_08A6ECE4;
    case 632u: goto L_08A6ED00;
    case 633u: goto L_08A6ED04;
    case 634u: goto L_08A6ED10;
    case 635u: goto L_08A6ED28;
    case 636u: goto L_08A6ED38;
    case 637u: goto L_08A6ED44;
    case 638u: goto L_08A6ED78;
    case 639u: goto L_08A6ED90;
    case 640u: goto L_08A6EDB4;
    case 641u: goto L_08A6EDC8;
    case 642u: goto L_08A6EDD0;
    case 643u: goto L_08A6EDE4;
    case 644u: goto L_08A6EE10;
    case 645u: goto L_08A6EE28;
    case 646u: goto L_08A6EE50;
    case 647u: goto L_08A6EE60;
    case 648u: goto L_08A6EEA4;
    case 649u: goto L_08A6EEAC;
    case 650u: goto L_08A6EEBC;
    case 651u: goto L_08A6EED8;
    case 652u: goto L_08A6EEE8;
    case 653u: goto L_08A6EF00;
    case 654u: goto L_08A6EF44;
    case 655u: goto L_08A6EF54;
    case 656u: goto L_08A6EF5C;
    case 657u: goto L_08A6EF94;
    case 658u: goto L_08A6EFB0;
    case 659u: goto L_08A6EFD8;
    case 660u: goto L_08A6EFE4;
    case 661u: goto L_08A6F010;
    case 662u: goto L_08A6F02C;
    case 663u: goto L_08A6F058;
    case 664u: goto L_08A6F060;
    case 665u: goto L_08A6F0B0;
    case 666u: goto L_08A6F0B4;
    case 667u: goto L_08A6F0E0;
    case 668u: goto L_08A6F0E8;
    case 669u: goto L_08A6F0F0;
    case 670u: goto L_08A6F11C;
    case 671u: goto L_08A6F154;
    case 672u: goto L_08A6F160;
    case 673u: goto L_08A6F178;
    case 674u: goto L_08A6F184;
    case 675u: goto L_08A6F190;
    case 676u: goto L_08A6F1BC;
    case 677u: goto L_08A6F1D8;
    case 678u: goto L_08A6F204;
    case 679u: goto L_08A6F210;
    case 680u: goto L_08A6F218;
    case 681u: goto L_08A6F230;
    case 682u: goto L_08A6F244;
    case 683u: goto L_08A6F250;
    case 684u: goto L_08A6F264;
    case 685u: goto L_08A6F270;
    case 686u: goto L_08A6F290;
    case 687u: goto L_08A6F29C;
    case 688u: goto L_08A6F2B4;
    case 689u: goto L_08A6F2B8;
    case 690u: goto L_08A6F2D0;
    case 691u: goto L_08A6F2EC;
    case 692u: goto L_08A6F2F4;
    case 693u: goto L_08A6F310;
    case 694u: goto L_08A6F314;
    case 695u: goto L_08A6F320;
    case 696u: goto L_08A6F338;
    case 697u: goto L_08A6F348;
    case 698u: goto L_08A6F354;
    case 699u: goto L_08A6F388;
    case 700u: goto L_08A6F3A0;
    case 701u: goto L_08A6F3C4;
    case 702u: goto L_08A6F3D8;
    case 703u: goto L_08A6F3E0;
    case 704u: goto L_08A6F3F4;
    case 705u: goto L_08A6F420;
    case 706u: goto L_08A6F438;
    case 707u: goto L_08A6F460;
    case 708u: goto L_08A6F470;
    case 709u: goto L_08A6F4B4;
    case 710u: goto L_08A6F4BC;
    case 711u: goto L_08A6F4F0;
    case 712u: goto L_08A6F50C;
    case 713u: goto L_08A6F520;
    case 714u: goto L_08A6F548;
    case 715u: goto L_08A6F550;
    case 716u: goto L_08A6F558;
    case 717u: goto L_08A6F584;
    case 718u: goto L_08A6F5BC;
    case 719u: goto L_08A6F5C8;
    case 720u: goto L_08A6F5E0;
    case 721u: goto L_08A6F5EC;
    case 722u: goto L_08A6F5F8;
    case 723u: goto L_08A6F624;
    case 724u: goto L_08A6F640;
    case 725u: goto L_08A6F66C;
    case 726u: goto L_08A6F678;
    case 727u: goto L_08A6F680;
    case 728u: goto L_08A6F698;
    case 729u: goto L_08A6F6AC;
    case 730u: goto L_08A6F6B8;
    case 731u: goto L_08A6F6CC;
    case 732u: goto L_08A6F6D8;
    case 733u: goto L_08A6F6F8;
    case 734u: goto L_08A6F704;
    case 735u: goto L_08A6F71C;
    case 736u: goto L_08A6F720;
    case 737u: goto L_08A6F738;
    case 738u: goto L_08A6F754;
    case 739u: goto L_08A6F75C;
    case 740u: goto L_08A6F778;
    case 741u: goto L_08A6F77C;
    case 742u: goto L_08A6F794;
    case 743u: goto L_08A6F7F0;
    case 744u: goto L_08A6F7F8;
    case 745u: goto L_08A6F82C;
    case 746u: goto L_08A6F840;
    case 747u: goto L_08A6F850;
    case 748u: goto L_08A6F85C;
    case 749u: goto L_08A6F864;
    case 750u: goto L_08A6F86C;
    case 751u: goto L_08A6F87C;
    case 752u: goto L_08A6F888;
    case 753u: goto L_08A6F890;
    case 754u: goto L_08A6F894;
    case 755u: goto L_08A6F8D0;
    case 756u: goto L_08A6F930;
    case 757u: goto L_08A6F944;
    case 758u: goto L_08A6F950;
    case 759u: goto L_08A6F960;
    case 760u: goto L_08A6F96C;
    case 761u: goto L_08A6F974;
    case 762u: goto L_08A6F97C;
    case 763u: goto L_08A6F988;
    case 764u: goto L_08A6F994;
    case 765u: goto L_08A6F99C;
    case 766u: goto L_08A6F9CC;
    case 767u: goto L_08A6F9D4;
    case 768u: goto L_08A6F9D8;
    case 769u: goto L_08A6F9E4;
    case 770u: goto L_08A6F9F4;
    case 771u: goto L_08A6FA44;
    case 772u: goto L_08A6FA54;
    case 773u: goto L_08A6FA64;
    case 774u: goto L_08A6FA78;
    case 775u: goto L_08A6FA80;
    case 776u: goto L_08A6FA88;
    case 777u: goto L_08A6FAA8;
    case 778u: goto L_08A6FAC8;
    case 779u: goto L_08A6FAE0;
    case 780u: goto L_08A6FB30;
    case 781u: goto L_08A6FB40;
    case 782u: goto L_08A6FB50;
    case 783u: goto L_08A6FB64;
    case 784u: goto L_08A6FB6C;
    case 785u: goto L_08A6FB80;
    case 786u: goto L_08A6FB98;
    case 787u: goto L_08A6FBA0;
    case 788u: goto L_08A6FBB8;
    case 789u: goto L_08A6FBBC;
    case 790u: goto L_08A6FBD0;
    case 791u: goto L_08A6FBE8;
    case 792u: goto L_08A6FBF0;
    case 793u: goto L_08A6FC08;
    case 794u: goto L_08A6FC0C;
    case 795u: goto L_08A6FC14;
    case 796u: goto L_08A6FC24;
    case 797u: goto L_08A6FC40;
    case 798u: goto L_08A6FC50;
    case 799u: goto L_08A6FCA4;
    case 800u: goto L_08A6FCAC;
    case 801u: goto L_08A6FCC0;
    case 802u: goto L_08A6FCCC;
    case 803u: goto L_08A6FCD4;
    case 804u: goto L_08A6FCE4;
    case 805u: goto L_08A6FCF0;
    case 806u: goto L_08A6FCFC;
    case 807u: goto L_08A6FD38;
    case 808u: goto L_08A6FD40;
    case 809u: goto L_08A6FD58;
    case 810u: goto L_08A6FDA0;
    case 811u: goto L_08A6FDA4;
    case 812u: goto L_08A6FDAC;
    case 813u: goto L_08A6FDEC;
    case 814u: goto L_08A6FE20;
    case 815u: goto L_08A6FE2C;
    case 816u: goto L_08A6FE44;
    case 817u: goto L_08A6FE4C;
    case 818u: goto L_08A6FE58;
    case 819u: goto L_08A6FE60;
    case 820u: goto L_08A6FE68;
    case 821u: goto L_08A6FE7C;
    case 822u: goto L_08A6FE94;
    case 823u: goto L_08A6FE9C;
    case 824u: goto L_08A6FEB4;
    case 825u: goto L_08A6FEB8;
    case 826u: goto L_08A6FECC;
    case 827u: goto L_08A6FEE4;
    case 828u: goto L_08A6FEEC;
    case 829u: goto L_08A6FF04;
    case 830u: goto L_08A6FF08;
    case 831u: goto L_08A6FF10;
    case 832u: goto L_08A6FF30;
    case 833u: goto L_08A6FF40;
    case 834u: goto L_08A6FF54;
    case 835u: goto L_08A6FF68;
    case 836u: goto L_08A6FF6C;
    case 837u: goto L_08A6FF74;
    case 838u: goto L_08A6FF84;
    case 839u: goto L_08A6FFA0;
    case 840u: goto L_08A6FFB0;
    case 841u: goto L_08A6FFB8;
    case 842u: goto L_08A6FFD0;
    case 843u: goto L_08A6FFE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A6C000:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 644u);
    ctx.gpr[31] = (0x08A6C014u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C014u) goto L_08A6C014;
    return;
L_08A6C014:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 893u, 0x08A6BF18u>(ctx, &aot_mem); return;
      }
      goto L_08A6C01C;
    }
L_08A6C01C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 647u);
    ctx.gpr[31] = (0x08A6C038u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C038u) goto L_08A6C038;
    return;
L_08A6C038:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 893u, 0x08A6BF18u>(ctx, &aot_mem); return;
      }
      goto L_08A6C040;
    }
L_08A6C040:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6C054u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_08A6CAEC;
L_08A6C054:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6C060:
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
          goto L_08A6C1E4;
      }
      goto L_08A6C084;
    }
L_08A6C084:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-28048)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6C09C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 648u);
    ctx.gpr[31] = (0x08A6C0B8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C0B8u) goto L_08A6C0B8;
    return;
L_08A6C0B8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6C0BC;
L_08A6C0BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C1F8;
      }
      goto L_08A6C0C4;
    }
L_08A6C0C4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 662u);
    ctx.gpr[31] = (0x08A6C0E0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C0E0u) goto L_08A6C0E0;
    return;
L_08A6C0E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C0BC;
      }
      goto L_08A6C0E8;
    }
L_08A6C0E8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 665u);
    ctx.gpr[31] = (0x08A6C104u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C104u) goto L_08A6C104;
    return;
L_08A6C104:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C0BC;
      }
      goto L_08A6C10C;
    }
L_08A6C10C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 660u);
    ctx.gpr[31] = (0x08A6C128u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C128u) goto L_08A6C128;
    return;
L_08A6C128:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C0BC;
      }
      goto L_08A6C130;
    }
L_08A6C130:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 656u);
    ctx.gpr[31] = (0x08A6C14Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C14Cu) goto L_08A6C14C;
    return;
L_08A6C14C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C0BC;
      }
      goto L_08A6C154;
    }
L_08A6C154:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 651u);
    ctx.gpr[31] = (0x08A6C170u);
    ctx.gpr[8] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C170u) goto L_08A6C170;
    return;
L_08A6C170:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C0BC;
      }
      goto L_08A6C178;
    }
L_08A6C178:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 658u);
    ctx.gpr[31] = (0x08A6C194u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C194u) goto L_08A6C194;
    return;
L_08A6C194:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C0BC;
      }
      goto L_08A6C19C;
    }
L_08A6C19C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 667u);
    ctx.gpr[31] = (0x08A6C1B8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C1B8u) goto L_08A6C1B8;
    return;
L_08A6C1B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C0BC;
      }
      goto L_08A6C1C0;
    }
L_08A6C1C0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 670u);
    ctx.gpr[31] = (0x08A6C1DCu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C1DCu) goto L_08A6C1DC;
    return;
L_08A6C1DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C0BC;
      }
      goto L_08A6C1E4;
    }
L_08A6C1E4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6C1F8u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_08A6CBD4;
L_08A6C1F8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6C204:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 111 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 112 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A6C274;
      }
      goto L_08A6C228;
    }
L_08A6C228:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 110 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C25C;
      }
      goto L_08A6C234;
    }
L_08A6C234:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 3997u);
    ctx.gpr[31] = (0x08A6C24Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C24Cu) goto L_08A6C24C;
    return;
L_08A6C24C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 5u);
      if (branch_taken) {
          goto L_08A6C290;
      }
      goto L_08A6C25C;
    }
L_08A6C25C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A6C26Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A6CAEC;
L_08A6C26C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C2A4;
      }
      goto L_08A6C274;
    }
L_08A6C274:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C25C;
      }
      goto L_08A6C27C;
    }
L_08A6C27C:
    ctx.gpr[4] = (0u | 4000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[2] = (0u | 4000u);
    ctx.gpr[16] = (0u | 5u);
    goto L_08A6C290;
L_08A6C290:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[16]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    goto L_08A6C2A4;
L_08A6C2A4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6C2B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 111 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A6C31C;
      }
      goto L_08A6C2D4;
    }
L_08A6C2D4:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 110 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C304;
      }
      goto L_08A6C2E0;
    }
L_08A6C2E0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4017u);
    ctx.gpr[31] = (0x08A6C2FCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C2FCu) goto L_08A6C2FC;
    return;
L_08A6C2FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C334;
      }
      goto L_08A6C304;
    }
L_08A6C304:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A6C314u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    goto L_08A6CAEC;
L_08A6C314:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C334;
      }
      goto L_08A6C31C;
    }
L_08A6C31C:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 112 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C304;
      }
      goto L_08A6C328;
    }
L_08A6C328:
    ctx.gpr[4] = (0u | 4020u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 4020u);
    goto L_08A6C334;
L_08A6C334:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6C340:
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
          goto L_08A6C574;
      }
      goto L_08A6C364;
    }
L_08A6C364:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-27888)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6C37C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 990u);
    ctx.gpr[31] = (0x08A6C398u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C398u) goto L_08A6C398;
    return;
L_08A6C398:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6C39C;
L_08A6C39C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C588;
      }
      goto L_08A6C3A4;
    }
L_08A6C3A4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 982u);
    ctx.gpr[31] = (0x08A6C3C0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C3C0u) goto L_08A6C3C0;
    return;
L_08A6C3C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C39C;
      }
      goto L_08A6C3C8;
    }
L_08A6C3C8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 972u);
    ctx.gpr[31] = (0x08A6C3E4u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C3E4u) goto L_08A6C3E4;
    return;
L_08A6C3E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C39C;
      }
      goto L_08A6C3EC;
    }
L_08A6C3EC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 980u);
    ctx.gpr[31] = (0x08A6C408u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C408u) goto L_08A6C408;
    return;
L_08A6C408:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C39C;
      }
      goto L_08A6C410;
    }
L_08A6C410:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 969u);
    ctx.gpr[31] = (0x08A6C42Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C42Cu) goto L_08A6C42C;
    return;
L_08A6C42C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C39C;
      }
      goto L_08A6C434;
    }
L_08A6C434:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 976u);
    ctx.gpr[31] = (0x08A6C450u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C450u) goto L_08A6C450;
    return;
L_08A6C450:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C39C;
      }
      goto L_08A6C458;
    }
L_08A6C458:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 978u);
    ctx.gpr[31] = (0x08A6C474u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C474u) goto L_08A6C474;
    return;
L_08A6C474:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C39C;
      }
      goto L_08A6C47C;
    }
L_08A6C47C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6C498u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C498u) goto L_08A6C498;
    return;
L_08A6C498:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C39C;
      }
      goto L_08A6C4A0;
    }
L_08A6C4A0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 985u);
    ctx.gpr[31] = (0x08A6C4BCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C4BCu) goto L_08A6C4BC;
    return;
L_08A6C4BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C39C;
      }
      goto L_08A6C4C4;
    }
L_08A6C4C4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6C4E0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C4E0u) goto L_08A6C4E0;
    return;
L_08A6C4E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C39C;
      }
      goto L_08A6C4E8;
    }
L_08A6C4E8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 987u);
    ctx.gpr[31] = (0x08A6C504u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C504u) goto L_08A6C504;
    return;
L_08A6C504:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C39C;
      }
      goto L_08A6C50C;
    }
L_08A6C50C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6C528u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C528u) goto L_08A6C528;
    return;
L_08A6C528:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C39C;
      }
      goto L_08A6C530;
    }
L_08A6C530:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6C54Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C54Cu) goto L_08A6C54C;
    return;
L_08A6C54C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C39C;
      }
      goto L_08A6C554;
    }
L_08A6C554:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A6C39C;
      }
      goto L_08A6C564;
    }
L_08A6C564:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A6C39C;
      }
      goto L_08A6C574;
    }
L_08A6C574:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6C588u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_08A6CAEC;
L_08A6C588:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6C594:
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
          goto L_08A6C838;
      }
      goto L_08A6C5B8;
    }
L_08A6C5B8:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-27728)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6C5D0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3305u);
    ctx.gpr[31] = (0x08A6C5ECu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C5ECu) goto L_08A6C5EC;
    return;
L_08A6C5EC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6C5F0;
L_08A6C5F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C84C;
      }
      goto L_08A6C5F8;
    }
L_08A6C5F8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3301u);
    ctx.gpr[31] = (0x08A6C614u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C614u) goto L_08A6C614;
    return;
L_08A6C614:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C5F0;
      }
      goto L_08A6C61C;
    }
L_08A6C61C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3298u);
    ctx.gpr[31] = (0x08A6C638u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C638u) goto L_08A6C638;
    return;
L_08A6C638:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C5F0;
      }
      goto L_08A6C640;
    }
L_08A6C640:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3296u);
    ctx.gpr[31] = (0x08A6C65Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C65Cu) goto L_08A6C65C;
    return;
L_08A6C65C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C5F0;
      }
      goto L_08A6C664;
    }
L_08A6C664:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3285u);
    ctx.gpr[31] = (0x08A6C680u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C680u) goto L_08A6C680;
    return;
L_08A6C680:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C5F0;
      }
      goto L_08A6C688;
    }
L_08A6C688:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3292u);
    ctx.gpr[31] = (0x08A6C6A4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C6A4u) goto L_08A6C6A4;
    return;
L_08A6C6A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C5F0;
      }
      goto L_08A6C6AC;
    }
L_08A6C6AC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3288u);
    ctx.gpr[31] = (0x08A6C6C8u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C6C8u) goto L_08A6C6C8;
    return;
L_08A6C6C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C5F0;
      }
      goto L_08A6C6D0;
    }
L_08A6C6D0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3294u);
    ctx.gpr[31] = (0x08A6C6ECu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C6ECu) goto L_08A6C6EC;
    return;
L_08A6C6EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C5F0;
      }
      goto L_08A6C6F4;
    }
L_08A6C6F4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6C710u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C710u) goto L_08A6C710;
    return;
L_08A6C710:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C5F0;
      }
      goto L_08A6C718;
    }
L_08A6C718:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6C734u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C734u) goto L_08A6C734;
    return;
L_08A6C734:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C5F0;
      }
      goto L_08A6C73C;
    }
L_08A6C73C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3303u);
    ctx.gpr[31] = (0x08A6C758u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C758u) goto L_08A6C758;
    return;
L_08A6C758:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C5F0;
      }
      goto L_08A6C760;
    }
L_08A6C760:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6C77Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C77Cu) goto L_08A6C77C;
    return;
L_08A6C77C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C5F0;
      }
      goto L_08A6C784;
    }
L_08A6C784:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6C7A0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C7A0u) goto L_08A6C7A0;
    return;
L_08A6C7A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C5F0;
      }
      goto L_08A6C7A8;
    }
L_08A6C7A8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6C7C4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C7C4u) goto L_08A6C7C4;
    return;
L_08A6C7C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C5F0;
      }
      goto L_08A6C7CC;
    }
L_08A6C7CC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6C7E8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C7E8u) goto L_08A6C7E8;
    return;
L_08A6C7E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C5F0;
      }
      goto L_08A6C7F0;
    }
L_08A6C7F0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6C80Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C80Cu) goto L_08A6C80C;
    return;
L_08A6C80C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C5F0;
      }
      goto L_08A6C814;
    }
L_08A6C814:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6C830u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C830u) goto L_08A6C830;
    return;
L_08A6C830:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C5F0;
      }
      goto L_08A6C838;
    }
L_08A6C838:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6C84Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_08A6CBD4;
L_08A6C84C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6C858:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[7] & 65535u);
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7872)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A6C8A4;
      }
      goto L_08A6C890;
    }
L_08A6C890:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A6C8A4;
L_08A6C8A4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08A6C8B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23512));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x08986604u>(ctx, &aot_mem) && ctx.pc == 0x08A6C8B4u) goto L_08A6C8B4;
    return;
L_08A6C8B4:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A6CAB4;
      }
      goto L_08A6C8BC;
    }
L_08A6C8BC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A6C8C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23520));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x08986604u>(ctx, &aot_mem) && ctx.pc == 0x08A6C8C8u) goto L_08A6C8C8;
    return;
L_08A6C8C8:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    ctx.gpr[4] = (2226u << 16u);
      if (branch_taken) {
          goto L_08A6CA9C;
      }
      goto L_08A6C8D0;
    }
L_08A6C8D0:
    ctx.gpr[31] = (0x08A6C8D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23528));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x08986604u>(ctx, &aot_mem) && ctx.pc == 0x08A6C8D8u) goto L_08A6C8D8;
    return;
L_08A6C8D8:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A6CA9C;
      }
      goto L_08A6C8E0;
    }
L_08A6C8E0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A6C8ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23536));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x08986604u>(ctx, &aot_mem) && ctx.pc == 0x08A6C8ECu) goto L_08A6C8EC;
    return;
L_08A6C8EC:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    ctx.gpr[4] = (2226u << 16u);
      if (branch_taken) {
          goto L_08A6CA84;
      }
      goto L_08A6C8F4;
    }
L_08A6C8F4:
    ctx.gpr[31] = (0x08A6C8FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23544));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x08986604u>(ctx, &aot_mem) && ctx.pc == 0x08A6C8FCu) goto L_08A6C8FC;
    return;
L_08A6C8FC:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A6CA84;
      }
      goto L_08A6C904;
    }
L_08A6C904:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A6C910u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23552));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x08986604u>(ctx, &aot_mem) && ctx.pc == 0x08A6C910u) goto L_08A6C910;
    return;
L_08A6C910:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A6CA6C;
      }
      goto L_08A6C918;
    }
L_08A6C918:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A6C924u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23560));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x08986604u>(ctx, &aot_mem) && ctx.pc == 0x08A6C924u) goto L_08A6C924;
    return;
L_08A6C924:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    ctx.gpr[4] = (2226u << 16u);
      if (branch_taken) {
          goto L_08A6CA54;
      }
      goto L_08A6C92C;
    }
L_08A6C92C:
    ctx.gpr[31] = (0x08A6C934u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23568));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x08986604u>(ctx, &aot_mem) && ctx.pc == 0x08A6C934u) goto L_08A6C934;
    return;
L_08A6C934:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A6CA54;
      }
      goto L_08A6C93C;
    }
L_08A6C93C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A6C948u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23576));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x08986604u>(ctx, &aot_mem) && ctx.pc == 0x08A6C948u) goto L_08A6C948;
    return;
L_08A6C948:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    ctx.gpr[4] = (2226u << 16u);
      if (branch_taken) {
          goto L_08A6CA3C;
      }
      goto L_08A6C950;
    }
L_08A6C950:
    ctx.gpr[31] = (0x08A6C958u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23584));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x08986604u>(ctx, &aot_mem) && ctx.pc == 0x08A6C958u) goto L_08A6C958;
    return;
L_08A6C958:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A6CA3C;
      }
      goto L_08A6C960;
    }
L_08A6C960:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A6C96Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23592));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x08986604u>(ctx, &aot_mem) && ctx.pc == 0x08A6C96Cu) goto L_08A6C96C;
    return;
L_08A6C96C:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A6CA24;
      }
      goto L_08A6C974;
    }
L_08A6C974:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A6C980u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23600));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x08986604u>(ctx, &aot_mem) && ctx.pc == 0x08A6C980u) goto L_08A6C980;
    return;
L_08A6C980:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A6CA0C;
      }
      goto L_08A6C988;
    }
L_08A6C988:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A6C994u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23608));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x08986604u>(ctx, &aot_mem) && ctx.pc == 0x08A6C994u) goto L_08A6C994;
    return;
L_08A6C994:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A6C9F4;
      }
      goto L_08A6C99C;
    }
L_08A6C99C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A6C9A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23616));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x08986604u>(ctx, &aot_mem) && ctx.pc == 0x08A6C9A8u) goto L_08A6C9A8;
    return;
L_08A6C9A8:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A6C9DC;
      }
      goto L_08A6C9B0;
    }
L_08A6C9B0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A6C9BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23624));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x08986604u>(ctx, &aot_mem) && ctx.pc == 0x08A6C9BCu) goto L_08A6C9BC;
    return;
L_08A6C9BC:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A6CACC;
      }
      goto L_08A6C9C4;
    }
L_08A6C9C4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6C9D4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 868u, 0x08A6BD3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6C9D4u) goto L_08A6C9D4;
    return;
L_08A6C9D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CAD0;
      }
      goto L_08A6C9DC;
    }
L_08A6C9DC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6C9ECu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 847u, 0x08A6BBBCu>(ctx, &aot_mem) && ctx.pc == 0x08A6C9ECu) goto L_08A6C9EC;
    return;
L_08A6C9EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CAD0;
      }
      goto L_08A6C9F4;
    }
L_08A6C9F4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6CA04u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 824u, 0x08A6BA18u>(ctx, &aot_mem) && ctx.pc == 0x08A6CA04u) goto L_08A6CA04;
    return;
L_08A6CA04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CAD0;
      }
      goto L_08A6CA0C;
    }
L_08A6CA0C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6CA1Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 803u, 0x08A6B898u>(ctx, &aot_mem) && ctx.pc == 0x08A6CA1Cu) goto L_08A6CA1C;
    return;
L_08A6CA1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CAD0;
      }
      goto L_08A6CA24;
    }
L_08A6CA24:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6CA34u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 778u, 0x08A6B6D0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CA34u) goto L_08A6CA34;
    return;
L_08A6CA34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CAD0;
      }
      goto L_08A6CA3C;
    }
L_08A6CA3C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6CA4Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 710u, 0x08A6B240u>(ctx, &aot_mem) && ctx.pc == 0x08A6CA4Cu) goto L_08A6CA4C;
    return;
L_08A6CA4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CAD0;
      }
      goto L_08A6CA54;
    }
L_08A6CA54:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6CA64u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 724u, 0x08A6B334u>(ctx, &aot_mem) && ctx.pc == 0x08A6CA64u) goto L_08A6CA64;
    return;
L_08A6CA64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CAD0;
      }
      goto L_08A6CA6C;
    }
L_08A6CA6C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6CA7Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 738u, 0x08A6B428u>(ctx, &aot_mem) && ctx.pc == 0x08A6CA7Cu) goto L_08A6CA7C;
    return;
L_08A6CA7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CAD0;
      }
      goto L_08A6CA84;
    }
L_08A6CA84:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6CA94u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 752u, 0x08A6B51Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6CA94u) goto L_08A6CA94;
    return;
L_08A6CA94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CAD0;
      }
      goto L_08A6CA9C;
    }
L_08A6CA9C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6CAACu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 764u, 0x08A6B5DCu>(ctx, &aot_mem) && ctx.pc == 0x08A6CAACu) goto L_08A6CAAC;
    return;
L_08A6CAAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CAD0;
      }
      goto L_08A6CAB4;
    }
L_08A6CAB4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6CAC4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 696u, 0x08A6B14Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6CAC4u) goto L_08A6CAC4;
    return;
L_08A6CAC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CAD0;
      }
      goto L_08A6CACC;
    }
L_08A6CACC:
    ctx.gpr[2] = (0u | 5662u);
    goto L_08A6CAD0;
L_08A6CAD0:
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
L_08A6CAEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17236), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-103));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(37) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A6CBC4;
      }
      goto L_08A6CB18;
    }
L_08A6CB18:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-27568)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6CB30:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2615u);
    ctx.gpr[31] = (0x08A6CB4Cu);
    ctx.gpr[8] = (0u | 51u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CB4Cu) goto L_08A6CB4C;
    return;
L_08A6CB4C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6CB50;
L_08A6CB50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CBC8;
      }
      goto L_08A6CB58;
    }
L_08A6CB58:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2587u);
    ctx.gpr[31] = (0x08A6CB74u);
    ctx.gpr[8] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CB74u) goto L_08A6CB74;
    return;
L_08A6CB74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6CB50;
      }
      goto L_08A6CB7C;
    }
L_08A6CB7C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2666u);
    ctx.gpr[31] = (0x08A6CB98u);
    ctx.gpr[8] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CB98u) goto L_08A6CB98;
    return;
L_08A6CB98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6CB50;
      }
      goto L_08A6CBA0;
    }
L_08A6CBA0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2687u);
    ctx.gpr[31] = (0x08A6CBBCu);
    ctx.gpr[8] = (0u | 23u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CBBCu) goto L_08A6CBBC;
    return;
L_08A6CBBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6CB50;
      }
      goto L_08A6CBC4;
    }
L_08A6CBC4:
    ctx.gpr[2] = (0u | 5662u);
    goto L_08A6CBC8;
L_08A6CBC8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6CBD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17236), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-103));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(37) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A6CCD0;
      }
      goto L_08A6CC00;
    }
L_08A6CC00:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-27416)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6CC18:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1480u);
    ctx.gpr[31] = (0x08A6CC34u);
    ctx.gpr[8] = (0u | 34u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CC34u) goto L_08A6CC34;
    return;
L_08A6CC34:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6CC38;
L_08A6CC38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CCD4;
      }
      goto L_08A6CC40;
    }
L_08A6CC40:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1464u);
    ctx.gpr[31] = (0x08A6CC5Cu);
    ctx.gpr[8] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CC5Cu) goto L_08A6CC5C;
    return;
L_08A6CC5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6CC38;
      }
      goto L_08A6CC64;
    }
L_08A6CC64:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1514u);
    ctx.gpr[31] = (0x08A6CC80u);
    ctx.gpr[8] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CC80u) goto L_08A6CC80;
    return;
L_08A6CC80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6CC38;
      }
      goto L_08A6CC88;
    }
L_08A6CC88:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1525u);
    ctx.gpr[31] = (0x08A6CCA4u);
    ctx.gpr[8] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CCA4u) goto L_08A6CCA4;
    return;
L_08A6CCA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6CC38;
      }
      goto L_08A6CCAC;
    }
L_08A6CCAC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1538u);
    ctx.gpr[31] = (0x08A6CCC8u);
    ctx.gpr[8] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CCC8u) goto L_08A6CCC8;
    return;
L_08A6CCC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6CC38;
      }
      goto L_08A6CCD0;
    }
L_08A6CCD0:
    ctx.gpr[2] = (0u | 5662u);
    goto L_08A6CCD4;
L_08A6CCD4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6CCE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (17761u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[4] = (17008u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2512));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (16384u << 16u);
    ctx.gpr[20] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[30] = (0u | 201u);
    ctx.gpr[23] = (0u | 15591u);
    ctx.gpr[22] = (0u | 5u);
    ctx.gpr[21] = (0u | 8u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(10640));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    goto L_08A6CD64;
L_08A6CD64:
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CE24;
      }
      goto L_08A6CD84;
    }
L_08A6CD84:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
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
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6CDACu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A6D4E8;
L_08A6CDAC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6CE24;
      }
      goto L_08A6CDC0;
    }
L_08A6CDC0:
    ctx.fpr[13] = std::sqrt(ctx.fpr[12]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6CDD8u);
    ctx.gpr[5] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6CDD8u) goto L_08A6CDD8;
    return;
L_08A6CDD8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A6CE24;
      }
      goto L_08A6CDE8;
    }
L_08A6CDE8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A6CE24u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A6CE24u) goto L_08A6CE24;
    return;
L_08A6CE24:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CD64;
      }
      goto L_08A6CE38;
    }
L_08A6CE38:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6CE74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (2233u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2824));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(848)));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A6CEB0;
      }
      goto L_08A6CE94;
    }
L_08A6CE94:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(848)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A6CF08;
      }
      goto L_08A6CEA0;
    }
L_08A6CEA0:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(13216));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(117)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CF08;
      }
      goto L_08A6CEB0;
    }
L_08A6CEB0:
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(5956)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CF08;
      }
      goto L_08A6CECC;
    }
L_08A6CECC:
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(5988)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A6CEFC;
      }
      goto L_08A6CEE8;
    }
L_08A6CEE8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(5962)));
    ctx.gpr[31] = (0x08A6CEF4u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 464u, 0x08A79B68u>(ctx, &aot_mem) && ctx.pc == 0x08A6CEF4u) goto L_08A6CEF4;
    return;
L_08A6CEF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CF08;
      }
      goto L_08A6CEFC;
    }
L_08A6CEFC:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A6CF08u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 546u, 0x08A7A990u>(ctx, &aot_mem) && ctx.pc == 0x08A6CF08u) goto L_08A6CF08;
    return;
L_08A6CF08:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6CF14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5956)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08A6CF5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A6D4E8;
L_08A6CF5C:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (17561u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6D010;
      }
      goto L_08A6CF7C;
    }
L_08A6CF7C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A6CF8Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 274u, 0x08A5DC80u>(ctx, &aot_mem) && ctx.pc == 0x08A6CF8Cu) goto L_08A6CF8C;
    return;
L_08A6CF8C:
    ctx.gpr[6] = (16908u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A6CFA8u);
    ctx.gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6CFA8u) goto L_08A6CFA8;
    return;
L_08A6CFA8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A6D010;
      }
      goto L_08A6CFB8;
    }
L_08A6CFB8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[4] = (0u | 211u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 15591u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A6D010u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A6D010u) goto L_08A6D010;
    return;
L_08A6D010:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6D024:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6D02C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6D034:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A6D128;
      }
      goto L_08A6D068;
    }
L_08A6D068:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D128;
      }
      goto L_08A6D074;
    }
L_08A6D074:
    ctx.gpr[31] = (0x08A6D07Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 230u, 0x08A5D930u>(ctx, &aot_mem) && ctx.pc == 0x08A6D07Cu) goto L_08A6D07C;
    return;
L_08A6D07C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 5662u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A6D128;
      }
      goto L_08A6D08C;
    }
L_08A6D08C:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[19] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(21892), ctx.gpr[17]);
    ctx.gpr[20] = (ctx.gpr[16] + ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(21900), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(21902), static_cast<std::uint8_t>(0u));
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(21904), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A6D0BCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A6D0BCu) goto L_08A6D0BC;
    return;
L_08A6D0BC:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A6D0CCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 336u, 0x088B5EECu>(ctx, &aot_mem) && ctx.pc == 0x08A6D0CCu) goto L_08A6D0CC;
    return;
L_08A6D0CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21944)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[21]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(21916), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(21888), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11312));
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    { const std::uint32_t dividend = ctx.gpr[7]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(21908), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(21908), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08A6D128;
L_08A6D128:
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
L_08A6D14C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A6D190;
      }
      goto L_08A6D16C;
    }
L_08A6D16C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D190;
      }
      goto L_08A6D178;
    }
L_08A6D178:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6D184u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 36u, 0x08A7C40Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6D184u) goto L_08A6D184;
    return;
L_08A6D184:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(21900)));
      if (branch_taken) {
          goto L_08A6D194;
      }
      goto L_08A6D190;
    }
L_08A6D190:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A6D194;
L_08A6D194:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6D1A8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A6D1DC;
      }
      goto L_08A6D1B4;
    }
L_08A6D1B4:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D1DC;
      }
      goto L_08A6D1C0;
    }
L_08A6D1C0:
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(21888), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(21856), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(21860), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(21864), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08A6D1DC;
L_08A6D1DC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6D1E4:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A6D248;
      }
      goto L_08A6D1F0;
    }
L_08A6D1F0:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D248;
      }
      goto L_08A6D1FC;
    }
L_08A6D1FC:
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21892)));
    ctx.gpr[7] = (0u | 5662u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A6D248;
      }
      goto L_08A6D214;
    }
L_08A6D214:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(21900)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A6D248;
      }
      goto L_08A6D224;
    }
L_08A6D224:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(21902)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D248;
      }
      goto L_08A6D230;
    }
L_08A6D230:
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(21916), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(21916), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(21902), static_cast<std::uint8_t>(0u));
    goto L_08A6D248;
L_08A6D248:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6D250:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A6D294;
      }
      goto L_08A6D25C;
    }
L_08A6D25C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D28C;
      }
      goto L_08A6D268;
    }
L_08A6D268:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(21902)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A6D284;
      }
      goto L_08A6D27C;
    }
L_08A6D27C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A6D2CC;
      }
      goto L_08A6D284;
    }
L_08A6D284:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A6D2CC;
      }
      goto L_08A6D28C;
    }
L_08A6D28C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A6D2CC;
      }
      goto L_08A6D294;
    }
L_08A6D294:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11324));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] & 63u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D2C4;
      }
      goto L_08A6D2BC;
    }
L_08A6D2BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A6D2CC;
      }
      goto L_08A6D2C4;
    }
L_08A6D2C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A6D2CC;
      }
      goto L_08A6D2CC;
    }
L_08A6D2CC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6D2D4:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A6D318;
      }
      goto L_08A6D2E0;
    }
L_08A6D2E0:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D310;
      }
      goto L_08A6D2EC;
    }
L_08A6D2EC:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(21902)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A6D308;
      }
      goto L_08A6D300;
    }
L_08A6D300:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A6D350;
      }
      goto L_08A6D308;
    }
L_08A6D308:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A6D350;
      }
      goto L_08A6D310;
    }
L_08A6D310:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A6D350;
      }
      goto L_08A6D318;
    }
L_08A6D318:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11332));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] & 63u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D348;
      }
      goto L_08A6D340;
    }
L_08A6D340:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A6D350;
      }
      goto L_08A6D348;
    }
L_08A6D348:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A6D350;
      }
      goto L_08A6D350;
    }
L_08A6D350:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6D358:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A6D3D0;
      }
      goto L_08A6D36C;
    }
L_08A6D36C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
      if (branch_taken) {
          goto L_08A6D3D0;
      }
      goto L_08A6D378;
    }
L_08A6D378:
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(21892), ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(21900), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(21902), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(21904), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(21916), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(21888), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(21908), 0u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(21918), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (2233u << 16u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
      if (branch_taken) {
          goto L_08A6D3C8;
      }
      goto L_08A6D3B8;
    }
L_08A6D3B8:
    ctx.gpr[31] = (0x08A6D3C0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 366u, 0x088B6130u>(ctx, &aot_mem) && ctx.pc == 0x08A6D3C0u) goto L_08A6D3C0;
    return;
L_08A6D3C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D3D0;
      }
      goto L_08A6D3C8;
    }
L_08A6D3C8:
    ctx.gpr[31] = (0x08A6D3D0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 366u, 0x088B6130u>(ctx, &aot_mem) && ctx.pc == 0x08A6D3D0u) goto L_08A6D3D0;
    return;
L_08A6D3D0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6D3DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2824));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(912)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A6D420;
      }
      goto L_08A6D3F8;
    }
L_08A6D3F8:
    ctx.gpr[31] = (0x08A6D400u);
    // nop
    goto L_08A6D2D4;
L_08A6D400:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A6D418;
      }
      goto L_08A6D408;
    }
L_08A6D408:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D428;
      }
      goto L_08A6D418;
    }
L_08A6D418:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A6D42C;
      }
      goto L_08A6D420;
    }
L_08A6D420:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A6D42C;
      }
      goto L_08A6D428;
    }
L_08A6D428:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A6D42C;
L_08A6D42C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6D438:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A6D4CC;
      }
      goto L_08A6D454;
    }
L_08A6D454:
    ctx.gpr[17] = (0u | 0u);
    goto L_08A6D458;
L_08A6D458:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6D464u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 36u, 0x08A7C40Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6D464u) goto L_08A6D464;
    return;
L_08A6D464:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D458;
      }
      goto L_08A6D478;
    }
L_08A6D478:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21918)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D490;
      }
      goto L_08A6D484;
    }
L_08A6D484:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21919)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D49C;
      }
      goto L_08A6D490;
    }
L_08A6D490:
    ctx.gpr[4] = (0u | 64u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21920), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A6D4CC;
      }
      goto L_08A6D49C;
    }
L_08A6D49C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21920)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 127 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D4CC;
      }
      goto L_08A6D4AC;
    }
L_08A6D4AC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21920), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21920)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 128 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D4CC;
      }
      goto L_08A6D4C4;
    }
L_08A6D4C4:
    ctx.gpr[4] = (0u | 127u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21920), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A6D4CC;
L_08A6D4CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6D4E0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6D4E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (16166u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[0];
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6D54C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2233u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(10640));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(21945)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A6D598;
      }
      goto L_08A6D57C;
    }
L_08A6D57C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1962)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1960)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1962)));
        goto L_08A6D5A0;
    }
    goto L_08A6D590;
L_08A6D590:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D948;
      }
      goto L_08A6D598;
    }
L_08A6D598:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DA30;
      }
      goto L_08A6D5A0;
    }
L_08A6D5A0:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1920)));
    ctx.gpr[7] = (0u - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[6] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(38)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D680;
      }
      goto L_08A6D5E8;
    }
L_08A6D5E8:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11340));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(11380)));
    goto L_08A6D600;
L_08A6D600:
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[8]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[8] = (ctx.hi);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A6D66C;
      }
      goto L_08A6D624;
    }
L_08A6D624:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1962)));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[7] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1920)));
    ctx.gpr[8] = (0u - ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[7] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A6D948;
      }
      goto L_08A6D66C;
    }
L_08A6D66C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 10 ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(11380)));
        goto L_08A6D600;
    }
    goto L_08A6D680;
L_08A6D680:
    ctx.gpr[19] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(4229) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-25200));
      if (branch_taken) {
          goto L_08A6D6B8;
      }
      goto L_08A6D690;
    }
L_08A6D690:
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(5156) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D6B8;
      }
      goto L_08A6D69C;
    }
L_08A6D69C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x08A6D6ACu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 323u, 0x088B5E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6D6ACu) goto L_08A6D6AC;
    return;
L_08A6D6AC:
    ctx.gpr[4] = (ctx.gpr[2] & 255u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A6D6CC;
      }
      goto L_08A6D6B8;
    }
L_08A6D6B8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A6D6C4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 316u, 0x088B5DF8u>(ctx, &aot_mem) && ctx.pc == 0x08A6D6C4u) goto L_08A6D6C4;
    return;
L_08A6D6C4:
    ctx.gpr[4] = (ctx.gpr[2] & 255u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A6D6CC;
L_08A6D6CC:
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
        goto L_08A6D6E4;
    }
    goto L_08A6D6D4;
L_08A6D6D4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A6D948;
      }
      goto L_08A6D6DC;
    }
L_08A6D6DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D6FC;
      }
      goto L_08A6D6E4;
    }
L_08A6D6E4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A6D730;
      }
      goto L_08A6D6EC;
    }
L_08A6D6EC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D948;
      }
      goto L_08A6D6F4;
    }
L_08A6D6F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D948;
      }
      goto L_08A6D6FC;
    }
L_08A6D6FC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D71C;
      }
      goto L_08A6D704;
    }
L_08A6D704:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x08A6D714u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 318u, 0x088B5E18u>(ctx, &aot_mem) && ctx.pc == 0x08A6D714u) goto L_08A6D714;
    return;
L_08A6D714:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D728;
      }
      goto L_08A6D71C;
    }
L_08A6D71C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A6D728u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 304u, 0x088B5D6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6D728u) goto L_08A6D728;
    return;
L_08A6D728:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D948;
      }
      goto L_08A6D730;
    }
L_08A6D730:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1962)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1920)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1962)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1920)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1962)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1920)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[5] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1962)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[7] = (0u - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1920)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A6D898u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A6D898u) goto L_08A6D898;
    return;
L_08A6D898:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6D8A8u);
    ctx.gpr[5] = (0u | 750u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6D8A8u) goto L_08A6D8A8;
    return;
L_08A6D8A8:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1962)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[7] = (0u - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1920)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(38)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A6D934;
      }
      goto L_08A6D900;
    }
L_08A6D900:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11380)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11340));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11380), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11380)));
    ctx.gpr[6] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A6D934;
      }
      goto L_08A6D930;
    }
L_08A6D930:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11380), static_cast<std::uint8_t>(0u));
    goto L_08A6D934;
L_08A6D934:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6D940u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A6D940u) goto L_08A6D940;
    return;
L_08A6D940:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D948;
      }
      goto L_08A6D948;
    }
L_08A6D948:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1962)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D96C;
      }
      goto L_08A6D954;
    }
L_08A6D954:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1962), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A6D97C;
      }
      goto L_08A6D96C;
    }
L_08A6D96C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1962), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    goto L_08A6D97C;
L_08A6D97C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1960)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] << 6u);
      if (branch_taken) {
          goto L_08A6DA08;
      }
      goto L_08A6D990;
    }
L_08A6D990:
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[16] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[20]);
    goto L_08A6D9A4;
L_08A6D9A4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1920)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(37))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A6D9F0;
      }
      goto L_08A6D9C4;
    }
L_08A6D9C4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1920)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(37))))));
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[31] = (0x08A6D9F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 247u, 0x08A5DA00u>(ctx, &aot_mem) && ctx.pc == 0x08A6D9F0u) goto L_08A6D9F0;
    return;
L_08A6D9F0:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1960)));
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08A6D9A4;
      }
      goto L_08A6DA08;
    }
L_08A6DA08:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 20u);
    goto L_08A6DA10;
L_08A6DA10:
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1920), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DA10;
      }
      goto L_08A6DA2C;
    }
L_08A6DA2C:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1960), static_cast<std::uint8_t>(0u));
    goto L_08A6DA30;
L_08A6DA30:
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
L_08A6DA50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(21945)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A6DB00;
      }
      goto L_08A6DA80;
    }
L_08A6DA80:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21946)));
    ctx.gpr[16] = (2233u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-25200));
      if (branch_taken) {
          goto L_08A6DAB8;
      }
      goto L_08A6DA90;
    }
L_08A6DA90:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6DA9Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 302u, 0x088B5D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6DA9Cu) goto L_08A6DA9C;
    return;
L_08A6DA9C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DDCC;
      }
      goto L_08A6DAA4;
    }
L_08A6DAA4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6DAB0u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 296u, 0x088B5D04u>(ctx, &aot_mem) && ctx.pc == 0x08A6DAB0u) goto L_08A6DAB0;
    return;
L_08A6DAB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DDCC;
      }
      goto L_08A6DAB8;
    }
L_08A6DAB8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6DAC4u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 302u, 0x088B5D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6DAC4u) goto L_08A6DAC4;
    return;
L_08A6DAC4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A6DAE4;
      }
      goto L_08A6DAD0;
    }
L_08A6DAD0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < -1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DDCC;
      }
      goto L_08A6DADC;
    }
L_08A6DADC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DDCC;
      }
      goto L_08A6DAE4;
    }
L_08A6DAE4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A6DDCC;
      }
      goto L_08A6DAEC;
    }
L_08A6DAEC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6DAF8u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 296u, 0x088B5D04u>(ctx, &aot_mem) && ctx.pc == 0x08A6DAF8u) goto L_08A6DAF8;
    return;
L_08A6DAF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DDCC;
      }
      goto L_08A6DB00;
    }
L_08A6DB00:
    ctx.gpr[31] = (0x08A6DB08u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 147u, 0x08A60DF4u>(ctx, &aot_mem) && ctx.pc == 0x08A6DB08u) goto L_08A6DB08;
    return;
L_08A6DB08:
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
    ctx.gpr[31] = (0x08A6DB38u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A6DB38u) goto L_08A6DB38;
    return;
L_08A6DB38:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DDCC;
      }
      goto L_08A6DB44;
    }
L_08A6DB44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A6DD34;
      }
      goto L_08A6DB50;
    }
L_08A6DB50:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5960)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DD34;
      }
      goto L_08A6DB6C;
    }
L_08A6DB6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 56u);
      if (branch_taken) {
          goto L_08A6DB98;
      }
      goto L_08A6DB7C;
    }
L_08A6DB7C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A6DB98;
      }
      goto L_08A6DB84;
    }
L_08A6DB84:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DB98;
      }
      goto L_08A6DB90;
    }
L_08A6DB90:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DD0C;
      }
      goto L_08A6DB98;
    }
L_08A6DB98:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DBD0;
      }
      goto L_08A6DBA0;
    }
L_08A6DBA0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-130));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[20] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(8292));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[21] = (2233u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-25200));
      if (branch_taken) {
          goto L_08A6DC14;
      }
      goto L_08A6DBD0;
    }
L_08A6DBD0:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DC0C;
      }
      goto L_08A6DBDC;
    }
L_08A6DBDC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-130));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[20] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(8292));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[21] = (2233u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-25200));
      if (branch_taken) {
          goto L_08A6DC14;
      }
      goto L_08A6DC0C;
    }
L_08A6DC0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DDCC;
      }
      goto L_08A6DC14;
    }
L_08A6DC14:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A6DC20u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 302u, 0x088B5D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6DC20u) goto L_08A6DC20;
    return;
L_08A6DC20:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A6DC40;
      }
      goto L_08A6DC2C;
    }
L_08A6DC2C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < -1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DD34;
      }
      goto L_08A6DC38;
    }
L_08A6DC38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DD34;
      }
      goto L_08A6DC40;
    }
L_08A6DC40:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A6DD34;
      }
      goto L_08A6DC48;
    }
L_08A6DC48:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (0u | 16u);
      if (branch_taken) {
          goto L_08A6DC90;
      }
      goto L_08A6DC5C;
    }
L_08A6DC5C:
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08A6DC60;
L_08A6DC60:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(4104)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DC80;
      }
      goto L_08A6DC6C;
    }
L_08A6DC6C:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(4044)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A6DC80;
      }
      goto L_08A6DC78;
    }
L_08A6DC78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08A6DC90;
      }
      goto L_08A6DC80;
    }
L_08A6DC80:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A6DC60;
      }
      goto L_08A6DC90;
    }
L_08A6DC90:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DD04;
      }
      goto L_08A6DC98;
    }
L_08A6DC98:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
        goto L_08A6DCB4;
    }
    goto L_08A6DCA0;
L_08A6DCA0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08A6DCACu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 296u, 0x088B5D04u>(ctx, &aot_mem) && ctx.pc == 0x08A6DCACu) goto L_08A6DCAC;
    return;
L_08A6DCAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DD04;
      }
      goto L_08A6DCB4;
    }
L_08A6DCB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 4u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DD04;
      }
      goto L_08A6DCD0;
    }
L_08A6DCD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_08A6DCF0;
      }
      goto L_08A6DCE0;
    }
L_08A6DCE0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A6DD04;
      }
      goto L_08A6DCE8;
    }
L_08A6DCE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DCF8;
      }
      goto L_08A6DCF0;
    }
L_08A6DCF0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A6DD04;
      }
      goto L_08A6DCF8;
    }
L_08A6DCF8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08A6DD04u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 296u, 0x088B5D04u>(ctx, &aot_mem) && ctx.pc == 0x08A6DD04u) goto L_08A6DD04;
    return;
L_08A6DD04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DD34;
      }
      goto L_08A6DD0C;
    }
L_08A6DD0C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (2233u << 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
      if (branch_taken) {
          goto L_08A6DD2C;
      }
      goto L_08A6DD1C;
    }
L_08A6DD1C:
    ctx.gpr[31] = (0x08A6DD24u);
    ctx.gpr[5] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 366u, 0x088B6130u>(ctx, &aot_mem) && ctx.pc == 0x08A6DD24u) goto L_08A6DD24;
    return;
L_08A6DD24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DD34;
      }
      goto L_08A6DD2C;
    }
L_08A6DD2C:
    ctx.gpr[31] = (0x08A6DD34u);
    ctx.gpr[5] = (0u | 23u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 366u, 0x088B6130u>(ctx, &aot_mem) && ctx.pc == 0x08A6DD34u) goto L_08A6DD34;
    return;
L_08A6DD34:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DDCC;
      }
      goto L_08A6DD40;
    }
L_08A6DD40:
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(325)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DD9C;
      }
      goto L_08A6DD54;
    }
L_08A6DD54:
    ctx.gpr[19] = (ctx.gpr[19] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[19]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-27264)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6DD6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 61u);
      if (branch_taken) {
          goto L_08A6DDA0;
      }
      goto L_08A6DD74;
    }
L_08A6DD74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 66u);
      if (branch_taken) {
          goto L_08A6DDA0;
      }
      goto L_08A6DD7C;
    }
L_08A6DD7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 62u);
      if (branch_taken) {
          goto L_08A6DDA0;
      }
      goto L_08A6DD84;
    }
L_08A6DD84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 63u);
      if (branch_taken) {
          goto L_08A6DDA0;
      }
      goto L_08A6DD8C;
    }
L_08A6DD8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 64u);
      if (branch_taken) {
          goto L_08A6DDA0;
      }
      goto L_08A6DD94;
    }
L_08A6DD94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 65u);
      if (branch_taken) {
          goto L_08A6DDA0;
      }
      goto L_08A6DD9C;
    }
L_08A6DD9C:
    ctx.gpr[17] = (0u | 0u);
    goto L_08A6DDA0;
L_08A6DDA0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DDCC;
      }
      goto L_08A6DDA8;
    }
L_08A6DDA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21956)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A6DDCC;
      }
      goto L_08A6DDB4;
    }
L_08A6DDB4:
    ctx.gpr[5] = (ctx.gpr[17] & 255u);
    ctx.gpr[31] = (0x08A6DDC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 910u, 0x08A9B500u>(ctx, &aot_mem) && ctx.pc == 0x08A6DDC0u) goto L_08A6DDC0;
    return;
L_08A6DDC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DDCC;
      }
      goto L_08A6DDC8;
    }
L_08A6DDC8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21956), ctx.gpr[17]);
    goto L_08A6DDCC;
L_08A6DDCC:
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
L_08A6DDF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A6DE48u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 337u, 0x08A5E008u>(ctx, &aot_mem) && ctx.pc == 0x08A6DE48u) goto L_08A6DE48;
    return;
L_08A6DE48:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    ctx.gpr[20] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A6DE8C;
      }
      goto L_08A6DE50;
    }
L_08A6DE50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-29200)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DE84;
      }
      goto L_08A6DE60;
    }
L_08A6DE60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-29200)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-27136)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6DE7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DE8C;
      }
      goto L_08A6DE84;
    }
L_08A6DE84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E354;
      }
      goto L_08A6DE8C;
    }
L_08A6DE8C:
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
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A6DEA8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A6D4E8;
L_08A6DEA8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 4u);
      if (branch_taken) {
          goto L_08A6DEC8;
      }
      goto L_08A6DEBC;
    }
L_08A6DEBC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A6DECC;
      }
      goto L_08A6DEC8;
    }
L_08A6DEC8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    goto L_08A6DECC;
L_08A6DECC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-130));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[4] = (ctx.gpr[4] >> 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A6DF10;
      }
      goto L_08A6DEF4;
    }
L_08A6DEF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A6DF34;
      }
      goto L_08A6DF10;
    }
L_08A6DF10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A6DF34;
L_08A6DF34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-29200)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(612)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[19];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A6DF64;
      }
      goto L_08A6DF50;
    }
L_08A6DF50:
    ctx.gpr[31] = (0x08A6DF58u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 337u, 0x08A5E008u>(ctx, &aot_mem) && ctx.pc == 0x08A6DF58u) goto L_08A6DF58;
    return;
L_08A6DF58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A6DF8C;
      }
      goto L_08A6DF64;
    }
L_08A6DF64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E348;
      }
      goto L_08A6DF74;
    }
L_08A6DF74:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-27064)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6DF8C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6DF98u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 548u, 0x08A727E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6DF98u) goto L_08A6DF98;
    return;
L_08A6DF98:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6DFA4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 500u, 0x08A724A0u>(ctx, &aot_mem) && ctx.pc == 0x08A6DFA4u) goto L_08A6DFA4;
    return;
L_08A6DFA4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6DFB0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 647u, 0x08A5F7D4u>(ctx, &aot_mem) && ctx.pc == 0x08A6DFB0u) goto L_08A6DFB0;
    return;
L_08A6DFB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E354;
      }
      goto L_08A6DFB8;
    }
L_08A6DFB8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6DFC4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 696u, 0x08A5FC48u>(ctx, &aot_mem) && ctx.pc == 0x08A6DFC4u) goto L_08A6DFC4;
    return;
L_08A6DFC4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6DFD0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 548u, 0x08A727E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6DFD0u) goto L_08A6DFD0;
    return;
L_08A6DFD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E348;
      }
      goto L_08A6DFD8;
    }
L_08A6DFD8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6DFE4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A6E378;
L_08A6DFE4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6DFF0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 548u, 0x08A727E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6DFF0u) goto L_08A6DFF0;
    return;
L_08A6DFF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E348;
      }
      goto L_08A6DFF8;
    }
L_08A6DFF8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E004u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 684u, 0x08A5FAE4u>(ctx, &aot_mem) && ctx.pc == 0x08A6E004u) goto L_08A6E004;
    return;
L_08A6E004:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E010u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 548u, 0x08A727E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6E010u) goto L_08A6E010;
    return;
L_08A6E010:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E348;
      }
      goto L_08A6E018;
    }
L_08A6E018:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E024u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 725u, 0x08A5FFE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6E024u) goto L_08A6E024;
    return;
L_08A6E024:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E030u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 548u, 0x08A727E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6E030u) goto L_08A6E030;
    return;
L_08A6E030:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E03Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 402u, 0x08A71CB0u>(ctx, &aot_mem) && ctx.pc == 0x08A6E03Cu) goto L_08A6E03C;
    return;
L_08A6E03C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E348;
      }
      goto L_08A6E044;
    }
L_08A6E044:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1000));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A6E06C;
      }
      goto L_08A6E058;
    }
L_08A6E058:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E064u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A6E378;
L_08A6E064:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E078;
      }
      goto L_08A6E06C;
    }
L_08A6E06C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E078u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 745u, 0x08A73DECu>(ctx, &aot_mem) && ctx.pc == 0x08A6E078u) goto L_08A6E078;
    return;
L_08A6E078:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E084u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 711u, 0x08A5FE3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6E084u) goto L_08A6E084;
    return;
L_08A6E084:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E090u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 548u, 0x08A727E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6E090u) goto L_08A6E090;
    return;
L_08A6E090:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E348;
      }
      goto L_08A6E098;
    }
L_08A6E098:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A6E0A8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 571u, 0x08A5F278u>(ctx, &aot_mem) && ctx.pc == 0x08A6E0A8u) goto L_08A6E0A8;
    return;
L_08A6E0A8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E0B4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 10u, 0x08A70098u>(ctx, &aot_mem) && ctx.pc == 0x08A6E0B4u) goto L_08A6E0B4;
    return;
L_08A6E0B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E148;
      }
      goto L_08A6E0BC;
    }
L_08A6E0BC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7816)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6E0E0;
      }
      goto L_08A6E0D4;
    }
L_08A6E0D4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E0E0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 12u, 0x08A700A8u>(ctx, &aot_mem) && ctx.pc == 0x08A6E0E0u) goto L_08A6E0E0;
    return;
L_08A6E0E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[4] = (ctx.gpr[4] >> 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A6E100;
      }
      goto L_08A6E0F8;
    }
L_08A6E0F8:
    ctx.gpr[31] = (0x08A6E100u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 438u, 0x08A71FC0u>(ctx, &aot_mem) && ctx.pc == 0x08A6E100u) goto L_08A6E100;
    return;
L_08A6E100:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E10Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 504u, 0x08A5EC64u>(ctx, &aot_mem) && ctx.pc == 0x08A6E10Cu) goto L_08A6E10C;
    return;
L_08A6E10C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E118u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 500u, 0x08A724A0u>(ctx, &aot_mem) && ctx.pc == 0x08A6E118u) goto L_08A6E118;
    return;
L_08A6E118:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E124u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 666u, 0x08A5F984u>(ctx, &aot_mem) && ctx.pc == 0x08A6E124u) goto L_08A6E124;
    return;
L_08A6E124:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E130u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 647u, 0x08A5F7D4u>(ctx, &aot_mem) && ctx.pc == 0x08A6E130u) goto L_08A6E130;
    return;
L_08A6E130:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E13Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 36u, 0x08A702D4u>(ctx, &aot_mem) && ctx.pc == 0x08A6E13Cu) goto L_08A6E13C;
    return;
L_08A6E13C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E148u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 402u, 0x08A71CB0u>(ctx, &aot_mem) && ctx.pc == 0x08A6E148u) goto L_08A6E148;
    return;
L_08A6E148:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E154u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 548u, 0x08A727E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6E154u) goto L_08A6E154;
    return;
L_08A6E154:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1352), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A6E348;
      }
      goto L_08A6E160;
    }
L_08A6E160:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A6E170u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 571u, 0x08A5F278u>(ctx, &aot_mem) && ctx.pc == 0x08A6E170u) goto L_08A6E170;
    return;
L_08A6E170:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 211 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -954 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A6E1C4;
      }
      goto L_08A6E180;
    }
L_08A6E180:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 169u);
      if (branch_taken) {
          goto L_08A6E1B4;
      }
      goto L_08A6E188;
    }
L_08A6E188:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < -955 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E1F0;
      }
      goto L_08A6E194;
    }
L_08A6E194:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E1A0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A6F8D0;
L_08A6E1A0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E1ACu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 647u, 0x08A5F7D4u>(ctx, &aot_mem) && ctx.pc == 0x08A6E1ACu) goto L_08A6E1AC;
    return;
L_08A6E1AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E334;
      }
      goto L_08A6E1B4;
    }
L_08A6E1B4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A6E194;
      }
      goto L_08A6E1BC;
    }
L_08A6E1BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E1F0;
      }
      goto L_08A6E1C4;
    }
L_08A6E1C4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 213 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E1F0;
      }
      goto L_08A6E1D0;
    }
L_08A6E1D0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E1DCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 422u, 0x08A5E4F4u>(ctx, &aot_mem) && ctx.pc == 0x08A6E1DCu) goto L_08A6E1DC;
    return;
L_08A6E1DC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E1E8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 647u, 0x08A5F7D4u>(ctx, &aot_mem) && ctx.pc == 0x08A6E1E8u) goto L_08A6E1E8;
    return;
L_08A6E1E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E334;
      }
      goto L_08A6E1F0;
    }
L_08A6E1F0:
    ctx.gpr[31] = (0x08A6E1F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x08A6E1F8u) goto L_08A6E1F8;
    return;
L_08A6E1F8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
        goto L_08A6E240;
    }
    goto L_08A6E208;
L_08A6E208:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E250;
      }
      goto L_08A6E214;
    }
L_08A6E214:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E220u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A6E378;
L_08A6E220:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E22Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 402u, 0x08A71CB0u>(ctx, &aot_mem) && ctx.pc == 0x08A6E22Cu) goto L_08A6E22C;
    return;
L_08A6E22C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E238u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 647u, 0x08A5F7D4u>(ctx, &aot_mem) && ctx.pc == 0x08A6E238u) goto L_08A6E238;
    return;
L_08A6E238:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E334;
      }
      goto L_08A6E240;
    }
L_08A6E240:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E250;
      }
      goto L_08A6E248;
    }
L_08A6E248:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E334;
      }
      goto L_08A6E250;
    }
L_08A6E250:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E25Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 10u, 0x08A70098u>(ctx, &aot_mem) && ctx.pc == 0x08A6E25Cu) goto L_08A6E25C;
    return;
L_08A6E25C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E334;
      }
      goto L_08A6E264;
    }
L_08A6E264:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E270u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 455u, 0x08A5E774u>(ctx, &aot_mem) && ctx.pc == 0x08A6E270u) goto L_08A6E270;
    return;
L_08A6E270:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7816)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6E294;
      }
      goto L_08A6E288;
    }
L_08A6E288:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E294u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 12u, 0x08A700A8u>(ctx, &aot_mem) && ctx.pc == 0x08A6E294u) goto L_08A6E294;
    return;
L_08A6E294:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E2A0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 438u, 0x08A71FC0u>(ctx, &aot_mem) && ctx.pc == 0x08A6E2A0u) goto L_08A6E2A0;
    return;
L_08A6E2A0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E2ACu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 402u, 0x08A71CB0u>(ctx, &aot_mem) && ctx.pc == 0x08A6E2ACu) goto L_08A6E2AC;
    return;
L_08A6E2AC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E2B8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 504u, 0x08A5EC64u>(ctx, &aot_mem) && ctx.pc == 0x08A6E2B8u) goto L_08A6E2B8;
    return;
L_08A6E2B8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E2C4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 500u, 0x08A724A0u>(ctx, &aot_mem) && ctx.pc == 0x08A6E2C4u) goto L_08A6E2C4;
    return;
L_08A6E2C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A6E2D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 608u, 0x08A5F53Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6E2D0u) goto L_08A6E2D0;
    return;
L_08A6E2D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E2E4;
      }
      goto L_08A6E2D8;
    }
L_08A6E2D8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E2E4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 537u, 0x08A5EED8u>(ctx, &aot_mem) && ctx.pc == 0x08A6E2E4u) goto L_08A6E2E4;
    return;
L_08A6E2E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A6E2F0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 642u, 0x08A5F798u>(ctx, &aot_mem) && ctx.pc == 0x08A6E2F0u) goto L_08A6E2F0;
    return;
L_08A6E2F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E304;
      }
      goto L_08A6E2F8;
    }
L_08A6E2F8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E304u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 626u, 0x08A5F5FCu>(ctx, &aot_mem) && ctx.pc == 0x08A6E304u) goto L_08A6E304;
    return;
L_08A6E304:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E310u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 666u, 0x08A5F984u>(ctx, &aot_mem) && ctx.pc == 0x08A6E310u) goto L_08A6E310;
    return;
L_08A6E310:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E31Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 36u, 0x08A702D4u>(ctx, &aot_mem) && ctx.pc == 0x08A6E31Cu) goto L_08A6E31C;
    return;
L_08A6E31C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E328u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 647u, 0x08A5F7D4u>(ctx, &aot_mem) && ctx.pc == 0x08A6E328u) goto L_08A6E328;
    return;
L_08A6E328:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E334u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 551u, 0x08A5F034u>(ctx, &aot_mem) && ctx.pc == 0x08A6E334u) goto L_08A6E334;
    return;
L_08A6E334:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E340u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 548u, 0x08A727E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6E340u) goto L_08A6E340;
    return;
L_08A6E340:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1580), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A6E348;
L_08A6E348:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E354u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 405u, 0x08A5E344u>(ctx, &aot_mem) && ctx.pc == 0x08A6E354u) goto L_08A6E354;
    return;
L_08A6E354:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E378:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-368));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[6]);
    ctx.gpr[6] = (18292u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] | 9216u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[20]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A6F86C;
      }
      goto L_08A6E3F0;
    }
L_08A6E3F0:
    ctx.gpr[31] = (0x08A6E3F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A6E3F8u) goto L_08A6E3F8;
    return;
L_08A6E3F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[2] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_08A6E428;
    }
    goto L_08A6E404;
L_08A6E404:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25184));
    ctx.gpr[31] = (0x08A6E414u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 7u, 0x08A9802Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6E414u) goto L_08A6E414;
    return;
L_08A6E414:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A6E420u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1077u, 0x08A97EB4u>(ctx, &aot_mem) && ctx.pc == 0x08A6E420u) goto L_08A6E420;
    return;
L_08A6E420:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A6E460;
      }
      goto L_08A6E428;
    }
L_08A6E428:
    ctx.gpr[5] = (17279u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(588)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[4] << 16u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[22] = (ctx.gpr[4] << 16u);
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 16u));
    goto L_08A6E460;
L_08A6E460:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[31] = (0x08A6E470u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 519u, 0x08A0695Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6E470u) goto L_08A6E470;
    return;
L_08A6E470:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6E4D8;
      }
      goto L_08A6E4D4;
    }
L_08A6E4D4:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    goto L_08A6E4D8;
L_08A6E4D8:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1000));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_08A6E520;
      }
      goto L_08A6E500;
    }
L_08A6E500:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (15969u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(852)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] / ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E554;
      }
      goto L_08A6E520;
    }
L_08A6E520:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A6E53C;
      }
      goto L_08A6E530;
    }
L_08A6E530:
    ctx.gpr[4] = (16256u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A6E554;
      }
      goto L_08A6E53C;
    }
L_08A6E53C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (15969u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1496)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] / ctx.fpr[12];
    goto L_08A6E554;
L_08A6E554:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[24]) || std::isnan(ctx.fpr[12])) && ctx.fpr[24] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6E594;
      }
      goto L_08A6E568;
    }
L_08A6E568:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E58C;
      }
      goto L_08A6E578;
    }
L_08A6E578:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E58C;
      }
      goto L_08A6E584;
    }
L_08A6E584:
    ctx.gpr[31] = (0x08A6E58Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08A6E58Cu) goto L_08A6E58C;
    return;
L_08A6E58C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A6F894;
      }
      goto L_08A6E594;
    }
L_08A6E594:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6E5B4;
      }
      goto L_08A6E5AC;
    }
L_08A6E5AC:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A6E5B4;
L_08A6E5B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A6E5C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 274u, 0x08A5DC80u>(ctx, &aot_mem) && ctx.pc == 0x08A6E5C4u) goto L_08A6E5C4;
    return;
L_08A6E5C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (17046u << 16u);
      if (branch_taken) {
          goto L_08A6E63C;
      }
      goto L_08A6E5E0;
    }
L_08A6E5E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16840u << 16u);
      if (branch_taken) {
          goto L_08A6E604;
      }
      goto L_08A6E5FC;
    }
L_08A6E5FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A6E650;
      }
      goto L_08A6E604;
    }
L_08A6E604:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (17046u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A6E650;
      }
      goto L_08A6E63C;
    }
L_08A6E63C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A6E650;
L_08A6E650:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A6E834;
      }
      goto L_08A6E658;
    }
L_08A6E658:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (17274u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A6E670u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6E670u) goto L_08A6E670;
    return;
L_08A6E670:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A6E834;
      }
      goto L_08A6E680;
    }
L_08A6E680:
    ctx.gpr[4] = (0u | 88u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A6E7D4;
      }
      goto L_08A6E68C;
    }
L_08A6E68C:
    ctx.gpr[4] = (0u | 5599u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 35u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) > 0;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A6E6A8;
      }
      goto L_08A6E6A0;
    }
L_08A6E6A0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) <= 0;
    ctx.gpr[4] = (17517u << 16u);
      if (branch_taken) {
          goto L_08A6E748;
      }
      goto L_08A6E6A8;
    }
L_08A6E6A8:
    ctx.gpr[4] = (17420u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] | 49152u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (0u | 4600u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    ctx.gpr[4] = (0u | 563u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
        goto L_08A6E6D4;
    }
    goto L_08A6E6D4;
L_08A6E6D4:
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[7] = (0u | 255u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.lo);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (20224u << 16u);
      if (branch_taken) {
          goto L_08A6E718;
      }
      goto L_08A6E70C;
    }
L_08A6E70C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A6E730;
      }
      goto L_08A6E718;
    }
L_08A6E718:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    goto L_08A6E730;
L_08A6E730:
    ctx.gpr[7] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08A6E73C;
    }
    goto L_08A6E73C;
L_08A6E73C:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A6E7F0;
      }
      goto L_08A6E748;
    }
L_08A6E748:
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (20224u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (0u | 3651u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 949u);
      if (branch_taken) {
          goto L_08A6E790;
      }
      goto L_08A6E774;
    }
L_08A6E774:
    ctx.gpr[5] = (17517u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A6E7BC;
      }
      goto L_08A6E790;
    }
L_08A6E790:
    ctx.gpr[5] = (17517u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    goto L_08A6E7BC;
L_08A6E7BC:
    ctx.gpr[7] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08A6E7C8;
    }
    goto L_08A6E7C8;
L_08A6E7C8:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A6E7F0;
      }
      goto L_08A6E7D4;
    }
L_08A6E7D4:
    ctx.gpr[5] = (0u | 199u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A6E7ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A6E7ECu) goto L_08A6E7EC;
    return;
L_08A6E7EC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    goto L_08A6E7F0;
L_08A6E7F0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[4] = (16576u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17274u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A6E834u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A6E834u) goto L_08A6E834;
    return;
L_08A6E834:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E864;
      }
      goto L_08A6E83C;
    }
L_08A6E83C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(192));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A6E85Cu);
    ctx.gpr[5] = (0u | 18u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6E85Cu) goto L_08A6E85C;
    return;
L_08A6E85C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E8D0;
      }
      goto L_08A6E864;
    }
L_08A6E864:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A6E8C0;
      }
      goto L_08A6E874;
    }
L_08A6E874:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (49440u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E8D0;
      }
      goto L_08A6E8C0;
    }
L_08A6E8C0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
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
    goto L_08A6E8D0;
L_08A6E8D0:
    ctx.gpr[4] = (18073u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6F840;
      }
      goto L_08A6E8F0;
    }
L_08A6E8F0:
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6E914;
      }
      goto L_08A6E90C;
    }
L_08A6E90C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A6E934;
      }
      goto L_08A6E914;
    }
L_08A6E914:
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16153u << 16u);
    ctx.fpr[26] = ctx.fpr[24] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = ctx.fpr[26] / ctx.fpr[13];
    goto L_08A6E934;
L_08A6E934:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_08A6EAA8;
      }
      goto L_08A6E93C;
    }
L_08A6E93C:
    ctx.gpr[4] = (17882u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49152u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (20224u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 1300u);
      if (branch_taken) {
          goto L_08A6E980;
      }
      goto L_08A6E964;
    }
L_08A6E964:
    ctx.gpr[5] = (17882u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 49152u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A6E9AC;
      }
      goto L_08A6E980;
    }
L_08A6E980:
    ctx.gpr[5] = (17882u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 49152u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[23] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[23] = (ctx.gpr[5] + ctx.gpr[23]);
    goto L_08A6E9AC;
L_08A6E9AC:
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[23] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
        goto L_08A6E9B8;
    }
    goto L_08A6E9B8;
L_08A6E9B8:
    ctx.gpr[31] = (0x08A6E9C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A6E9C0u) goto L_08A6E9C0;
    return;
L_08A6E9C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A6E9EC;
      }
      goto L_08A6E9CC;
    }
L_08A6E9CC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A6E9DC;
      }
      goto L_08A6E9D4;
    }
L_08A6E9D4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A6E9EC;
      }
      goto L_08A6E9DC;
    }
L_08A6E9DC:
    ctx.gpr[4] = (ctx.gpr[23] < static_cast<std::uint32_t>(1300) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E9EC;
      }
      goto L_08A6E9E8;
    }
L_08A6E9E8:
    ctx.gpr[23] = (0u | 1300u);
    goto L_08A6E9EC;
L_08A6E9EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 213u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A6EAA4;
      }
      goto L_08A6EA00;
    }
L_08A6EA00:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[5] = (0u | 30u);
    ctx.gpr[31] = (0x08A6EA14u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 302u, 0x088B5D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6EA14u) goto L_08A6EA14;
    return;
L_08A6EA14:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A6EA28;
      }
      goto L_08A6EA20;
    }
L_08A6EA20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6EAA4;
      }
      goto L_08A6EA28;
    }
L_08A6EA28:
    ctx.gpr[31] = (0x08A6EA30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A6EA30u) goto L_08A6EA30;
    return;
L_08A6EA30:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6EA78;
      }
      goto L_08A6EA3C;
    }
L_08A6EA3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A6EA78;
      }
      goto L_08A6EA4C;
    }
L_08A6EA4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 56u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A6EA78;
      }
      goto L_08A6EA5C;
    }
L_08A6EA5C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6EA78;
      }
      goto L_08A6EA68;
    }
L_08A6EA68:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 30u);
    ctx.gpr[31] = (0x08A6EA78u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 296u, 0x088B5D04u>(ctx, &aot_mem) && ctx.pc == 0x08A6EA78u) goto L_08A6EA78;
    return;
L_08A6EA78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6EA9C;
      }
      goto L_08A6EA88;
    }
L_08A6EA88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6EA9C;
      }
      goto L_08A6EA94;
    }
L_08A6EA94:
    ctx.gpr[31] = (0x08A6EA9Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08A6EA9Cu) goto L_08A6EA9C;
    return;
L_08A6EA9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A6F894;
      }
      goto L_08A6EAA4;
    }
L_08A6EAA4:
    ctx.gpr[4] = (16256u << 16u);
    goto L_08A6EAA8;
L_08A6EAA8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    ctx.gpr[4] = (17150u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
      if (branch_taken) {
          goto L_08A6ED10;
      }
      goto L_08A6EAD0;
    }
L_08A6EAD0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A6EAE0;
      }
      goto L_08A6EAD8;
    }
L_08A6EAD8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) <= 0;
    ctx.gpr[4] = (17768u << 16u);
      if (branch_taken) {
          goto L_08A6EB80;
      }
      goto L_08A6EAE0;
    }
L_08A6EAE0:
    ctx.gpr[4] = (17673u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] | 49152u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (0u | 18000u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    ctx.gpr[4] = (0u | 2204u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
        goto L_08A6EB0C;
    }
    goto L_08A6EB0C;
L_08A6EB0C:
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[8] = (0u | 255u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.lo);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (20224u << 16u);
      if (branch_taken) {
          goto L_08A6EB50;
      }
      goto L_08A6EB44;
    }
L_08A6EB44:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A6EB68;
      }
      goto L_08A6EB50;
    }
L_08A6EB50:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    goto L_08A6EB68;
L_08A6EB68:
    ctx.gpr[8] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08A6EB74;
    }
    goto L_08A6EB74;
L_08A6EB74:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A6EC08;
      }
      goto L_08A6EB80;
    }
L_08A6EB80:
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (20224u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (0u | 14287u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 3713u);
      if (branch_taken) {
          goto L_08A6EBC8;
      }
      goto L_08A6EBAC;
    }
L_08A6EBAC:
    ctx.gpr[5] = (17768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4096u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A6EBF4;
      }
      goto L_08A6EBC8;
    }
L_08A6EBC8:
    ctx.gpr[5] = (17768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4096u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    goto L_08A6EBF4;
L_08A6EBF4:
    ctx.gpr[8] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08A6EC00;
    }
    goto L_08A6EC00;
L_08A6EC00:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A6EC08;
L_08A6EC08:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6ECA8;
      }
      goto L_08A6EC20;
    }
L_08A6EC20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A6EC40;
      }
      goto L_08A6EC34;
    }
L_08A6EC34:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08A6EC40;
L_08A6EC40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08A6EC60;
      }
      goto L_08A6EC54;
    }
L_08A6EC54:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_08A6EC60;
L_08A6EC60:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (20224u << 16u);
      if (branch_taken) {
          goto L_08A6EC8C;
      }
      goto L_08A6EC80;
    }
L_08A6EC80:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A6ECA4;
      }
      goto L_08A6EC8C;
    }
L_08A6EC8C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08A6ECA4;
L_08A6ECA4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A6ECA8;
L_08A6ECA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(11384)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6ECE4;
      }
      goto L_08A6ECC0;
    }
L_08A6ECC0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11384)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(197));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
        goto L_08A6ECDC;
    }
    goto L_08A6ECDC;
L_08A6ECDC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A6ED04;
      }
      goto L_08A6ECE4;
    }
L_08A6ECE4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11384)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-197));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
        goto L_08A6ED00;
    }
    goto L_08A6ED00;
L_08A6ED00:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A6ED04;
L_08A6ED04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(11384), ctx.gpr[4]);
    goto L_08A6ED10;
L_08A6ED10:
    ctx.gpr[6] = (17164u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6ED28u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6ED28u) goto L_08A6ED28;
    return;
L_08A6ED28:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A6EEA4;
      }
      goto L_08A6ED38;
    }
L_08A6ED38:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A6EDC8;
      }
      goto L_08A6ED44;
    }
L_08A6ED44:
    ctx.gpr[4] = (0u | 5590u);
    ctx.gpr[5] = (18042u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 30u);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (18042u << 16u);
      if (branch_taken) {
          goto L_08A6ED90;
      }
      goto L_08A6ED78;
    }
L_08A6ED78:
    ctx.gpr[4] = (18042u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A6EDB4;
      }
      goto L_08A6ED90;
    }
L_08A6ED90:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08A6EDB4;
L_08A6EDB4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A6EE60;
      }
      goto L_08A6EDC8;
    }
L_08A6EDC8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6EDE4;
      }
      goto L_08A6EDD0;
    }
L_08A6EDD0:
    ctx.gpr[4] = (0u | 5600u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 35u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A6EE60;
      }
      goto L_08A6EDE4;
    }
L_08A6EDE4:
    ctx.gpr[4] = (18042u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 37u);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A6EE28;
      }
      goto L_08A6EE10;
    }
L_08A6EE10:
    ctx.gpr[4] = (18042u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A6EE50;
      }
      goto L_08A6EE28;
    }
L_08A6EE28:
    ctx.gpr[4] = (18042u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08A6EE50;
L_08A6EE50:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A6EE60;
L_08A6EE60:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[4] = (16576u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17164u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A6EEA4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A6EEA4u) goto L_08A6EEA4;
    return;
L_08A6EEA4:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[4] = (16128u << 16u);
      if (branch_taken) {
          goto L_08A6F0B4;
      }
      goto L_08A6EEAC;
    }
L_08A6EEAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (16128u << 16u);
      if (branch_taken) {
          goto L_08A6F0B4;
      }
      goto L_08A6EEBC;
    }
L_08A6EEBC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16128u << 16u);
      if (branch_taken) {
          goto L_08A6F0B4;
      }
      goto L_08A6EED8;
    }
L_08A6EED8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16128u << 16u);
      if (branch_taken) {
          goto L_08A6F0B4;
      }
      goto L_08A6EEE8;
    }
L_08A6EEE8:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16128u << 16u);
      if (branch_taken) {
          goto L_08A6F0B4;
      }
      goto L_08A6EF00;
    }
L_08A6EF00:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17036u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[5] = (16880u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A6EF44u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6EF44u) goto L_08A6EF44;
    return;
L_08A6EF44:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (16128u << 16u);
      if (branch_taken) {
          goto L_08A6F0B4;
      }
      goto L_08A6EF54;
    }
L_08A6EF54:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (17723u << 16u);
      if (branch_taken) {
          goto L_08A6EFE4;
      }
      goto L_08A6EF5C;
    }
L_08A6EF5C:
    ctx.gpr[5] = (17723u << 16u);
    ctx.gpr[4] = (0u | 5592u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 30u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (17723u << 16u);
      if (branch_taken) {
          goto L_08A6EFB0;
      }
      goto L_08A6EF94;
    }
L_08A6EF94:
    ctx.gpr[4] = (17723u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A6EFD8;
      }
      goto L_08A6EFB0;
    }
L_08A6EFB0:
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08A6EFD8;
L_08A6EFD8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A6F060;
      }
      goto L_08A6EFE4;
    }
L_08A6EFE4:
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 42u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A6F02C;
      }
      goto L_08A6F010;
    }
L_08A6F010:
    ctx.gpr[4] = (17723u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A6F058;
      }
      goto L_08A6F02C;
    }
L_08A6F02C:
    ctx.gpr[4] = (17723u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08A6F058;
L_08A6F058:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A6F060;
L_08A6F060:
    ctx.gpr[4] = (0u | 12u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16576u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16880u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 30u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A6F0B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A6F0B0u) goto L_08A6F0B0;
    return;
L_08A6F0B0:
    ctx.gpr[4] = (16128u << 16u);
    goto L_08A6F0B4;
L_08A6F0B4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (17150u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A6F320;
      }
      goto L_08A6F0E0;
    }
L_08A6F0E0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A6F0F0;
      }
      goto L_08A6F0E8;
    }
L_08A6F0E8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) <= 0;
    ctx.gpr[5] = (17640u << 16u);
      if (branch_taken) {
          goto L_08A6F190;
      }
      goto L_08A6F0F0;
    }
L_08A6F0F0:
    ctx.gpr[5] = (17545u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] | 49152u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (0u | 9000u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    ctx.gpr[5] = (0u | 1102u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
        goto L_08A6F11C;
    }
    goto L_08A6F11C;
L_08A6F11C:
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[8] = (0u | 255u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (ctx.lo);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (20224u << 16u);
      if (branch_taken) {
          goto L_08A6F160;
      }
      goto L_08A6F154;
    }
L_08A6F154:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A6F178;
      }
      goto L_08A6F160;
    }
L_08A6F160:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    goto L_08A6F178;
L_08A6F178:
    ctx.gpr[8] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_08A6F184;
    }
    goto L_08A6F184;
L_08A6F184:
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A6F218;
      }
      goto L_08A6F190;
    }
L_08A6F190:
    ctx.gpr[5] = (ctx.gpr[5] | 8192u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (20224u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[7] = (0u | 7143u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (0u | 1857u);
      if (branch_taken) {
          goto L_08A6F1D8;
      }
      goto L_08A6F1BC;
    }
L_08A6F1BC:
    ctx.gpr[6] = (17640u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 8192u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A6F204;
      }
      goto L_08A6F1D8;
    }
L_08A6F1D8:
    ctx.gpr[6] = (17640u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 8192u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    goto L_08A6F204;
L_08A6F204:
    ctx.gpr[8] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_08A6F210;
    }
    goto L_08A6F210;
L_08A6F210:
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    goto L_08A6F218;
L_08A6F218:
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6F2B8;
      }
      goto L_08A6F230;
    }
L_08A6F230:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A6F250;
      }
      goto L_08A6F244;
    }
L_08A6F244:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08A6F250;
L_08A6F250:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08A6F270;
      }
      goto L_08A6F264;
    }
L_08A6F264:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_08A6F270;
L_08A6F270:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (20224u << 16u);
      if (branch_taken) {
          goto L_08A6F29C;
      }
      goto L_08A6F290;
    }
L_08A6F290:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A6F2B4;
      }
      goto L_08A6F29C;
    }
L_08A6F29C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    goto L_08A6F2B4;
L_08A6F2B4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    goto L_08A6F2B8;
L_08A6F2B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(11388)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F2F4;
      }
      goto L_08A6F2D0;
    }
L_08A6F2D0:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(11388)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(98));
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
        goto L_08A6F2EC;
    }
    goto L_08A6F2EC;
L_08A6F2EC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A6F314;
      }
      goto L_08A6F2F4;
    }
L_08A6F2F4:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(11388)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-98));
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
        goto L_08A6F310;
    }
    goto L_08A6F310;
L_08A6F310:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    goto L_08A6F314;
L_08A6F314:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(11388), ctx.gpr[5]);
    goto L_08A6F320;
L_08A6F320:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (17164u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A6F338u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6F338u) goto L_08A6F338;
    return;
L_08A6F338:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A6F4B4;
      }
      goto L_08A6F348;
    }
L_08A6F348:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A6F3D8;
      }
      goto L_08A6F354;
    }
L_08A6F354:
    ctx.gpr[4] = (0u | 5591u);
    ctx.gpr[5] = (18042u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 30u);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (18042u << 16u);
      if (branch_taken) {
          goto L_08A6F3A0;
      }
      goto L_08A6F388;
    }
L_08A6F388:
    ctx.gpr[4] = (18042u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A6F3C4;
      }
      goto L_08A6F3A0;
    }
L_08A6F3A0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08A6F3C4;
L_08A6F3C4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A6F470;
      }
      goto L_08A6F3D8;
    }
L_08A6F3D8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F3F4;
      }
      goto L_08A6F3E0;
    }
L_08A6F3E0:
    ctx.gpr[4] = (0u | 5602u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 35u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A6F470;
      }
      goto L_08A6F3F4;
    }
L_08A6F3F4:
    ctx.gpr[4] = (18042u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 38u);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A6F438;
      }
      goto L_08A6F420;
    }
L_08A6F420:
    ctx.gpr[4] = (18042u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A6F460;
      }
      goto L_08A6F438;
    }
L_08A6F438:
    ctx.gpr[4] = (18042u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08A6F460;
L_08A6F460:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A6F470;
L_08A6F470:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[4] = (16576u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17164u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A6F4B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A6F4B4u) goto L_08A6F4B4;
    return;
L_08A6F4B4:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A6F7F8;
      }
      goto L_08A6F4BC;
    }
L_08A6F4BC:
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
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A6F840;
      }
      goto L_08A6F4F0;
    }
L_08A6F4F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6F840;
      }
      goto L_08A6F50C;
    }
L_08A6F50C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (17096u << 16u);
      if (branch_taken) {
          goto L_08A6F840;
      }
      goto L_08A6F520;
    }
L_08A6F520:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A6F548u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6F548u) goto L_08A6F548;
    return;
L_08A6F548:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) > 0;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08A6F558;
      }
      goto L_08A6F550;
    }
L_08A6F550:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) <= 0;
    ctx.gpr[4] = (17768u << 16u);
      if (branch_taken) {
          goto L_08A6F5F8;
      }
      goto L_08A6F558;
    }
L_08A6F558:
    ctx.gpr[4] = (17673u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] | 49152u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (0u | 18000u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    ctx.gpr[4] = (0u | 2204u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
        goto L_08A6F584;
    }
    goto L_08A6F584;
L_08A6F584:
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[7] = (0u | 255u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.lo);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (20224u << 16u);
      if (branch_taken) {
          goto L_08A6F5C8;
      }
      goto L_08A6F5BC;
    }
L_08A6F5BC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A6F5E0;
      }
      goto L_08A6F5C8;
    }
L_08A6F5C8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    goto L_08A6F5E0;
L_08A6F5E0:
    ctx.gpr[7] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08A6F5EC;
    }
    goto L_08A6F5EC;
L_08A6F5EC:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A6F680;
      }
      goto L_08A6F5F8;
    }
L_08A6F5F8:
    ctx.gpr[5] = (ctx.gpr[4] | 4096u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (20224u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (0u | 14287u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (0u | 3713u);
      if (branch_taken) {
          goto L_08A6F640;
      }
      goto L_08A6F624;
    }
L_08A6F624:
    ctx.gpr[6] = (17768u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 4096u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A6F66C;
      }
      goto L_08A6F640;
    }
L_08A6F640:
    ctx.gpr[6] = (17768u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 4096u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    goto L_08A6F66C;
L_08A6F66C:
    ctx.gpr[7] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_08A6F678;
    }
    goto L_08A6F678;
L_08A6F678:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A6F680;
L_08A6F680:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6F720;
      }
      goto L_08A6F698;
    }
L_08A6F698:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A6F6B8;
      }
      goto L_08A6F6AC;
    }
L_08A6F6AC:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08A6F6B8;
L_08A6F6B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08A6F6D8;
      }
      goto L_08A6F6CC;
    }
L_08A6F6CC:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_08A6F6D8;
L_08A6F6D8:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[12] + ctx.fpr[24];
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (20224u << 16u);
      if (branch_taken) {
          goto L_08A6F704;
      }
      goto L_08A6F6F8;
    }
L_08A6F6F8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A6F71C;
      }
      goto L_08A6F704;
    }
L_08A6F704:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08A6F71C;
L_08A6F71C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A6F720;
L_08A6F720:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(11392)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F75C;
      }
      goto L_08A6F738;
    }
L_08A6F738:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11392)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(197));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
        goto L_08A6F754;
    }
    goto L_08A6F754;
L_08A6F754:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A6F77C;
      }
      goto L_08A6F75C;
    }
L_08A6F75C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11392)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-197));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
        goto L_08A6F778;
    }
    goto L_08A6F778;
L_08A6F778:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A6F77C;
L_08A6F77C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(11392), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 5601u);
      if (branch_taken) {
          goto L_08A6F840;
      }
      goto L_08A6F794;
    }
L_08A6F794:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 35u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 12u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16544u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16800u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A6F7F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A6F7F0u) goto L_08A6F7F0;
    return;
L_08A6F7F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F840;
      }
      goto L_08A6F7F8;
    }
L_08A6F7F8:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6F82Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A6D4E8;
L_08A6F82C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A6F840;
L_08A6F840:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F864;
      }
      goto L_08A6F850;
    }
L_08A6F850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F864;
      }
      goto L_08A6F85C;
    }
L_08A6F85C:
    ctx.gpr[31] = (0x08A6F864u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08A6F864u) goto L_08A6F864;
    return;
L_08A6F864:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A6F894;
      }
      goto L_08A6F86C;
    }
L_08A6F86C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F890;
      }
      goto L_08A6F87C;
    }
L_08A6F87C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F890;
      }
      goto L_08A6F888;
    }
L_08A6F888:
    ctx.gpr[31] = (0x08A6F890u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08A6F890u) goto L_08A6F890;
    return;
L_08A6F890:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A6F894;
L_08A6F894:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F8D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), 0u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[6]);
    ctx.gpr[6] = (17561u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] | 8192u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[18]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 5u, 0x08A70048u>(ctx, &aot_mem); return;
      }
      goto L_08A6F930;
    }
L_08A6F930:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[19] = (0u | 17u);
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[31] = (0x08A6F944u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 302u, 0x088B5D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6F944u) goto L_08A6F944;
    return;
L_08A6F944:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A6F97C;
      }
      goto L_08A6F950;
    }
L_08A6F950:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 9u, 0x08A7006Cu>(ctx, &aot_mem); return;
      }
      goto L_08A6F960;
    }
L_08A6F960:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 9u, 0x08A7006Cu>(ctx, &aot_mem); return;
      }
      goto L_08A6F96C;
    }
L_08A6F96C:
    ctx.gpr[31] = (0x08A6F974u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08A6F974u) goto L_08A6F974;
    return;
L_08A6F974:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 9u, 0x08A7006Cu>(ctx, &aot_mem); return;
      }
      goto L_08A6F97C;
    }
L_08A6F97C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08A6F988u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A6F988u) goto L_08A6F988;
    return;
L_08A6F988:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A6F99C;
      }
      goto L_08A6F994;
    }
L_08A6F994:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08A6F9D8;
      }
      goto L_08A6F99C;
    }
L_08A6F99C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F9D4;
      }
      goto L_08A6F9CC;
    }
L_08A6F9CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08A6F9D8;
      }
      goto L_08A6F9D4;
    }
L_08A6F9D4:
    ctx.gpr[20] = (0u | 0u);
    goto L_08A6F9D8;
L_08A6F9D8:
    ctx.gpr[4] = (0u | 169u);
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A6FCC0;
      }
      goto L_08A6F9E4;
    }
L_08A6F9E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1729)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A6FA80;
      }
      goto L_08A6F9F4;
    }
L_08A6F9F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (17150u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (17914u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[21] = (0u | 127u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[6] = (20224u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
        goto L_08A6FA44;
    }
    goto L_08A6FA44;
L_08A6FA44:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
        goto L_08A6FA64;
    }
    goto L_08A6FA54;
L_08A6FA54:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(14000));
      if (branch_taken) {
          goto L_08A6FA78;
      }
      goto L_08A6FA64;
    }
L_08A6FA64:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(14000));
    goto L_08A6FA78;
L_08A6FA78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6FA88;
      }
      goto L_08A6FA80;
    }
L_08A6FA80:
    ctx.gpr[21] = (0u | 127u);
    ctx.gpr[18] = (0u | 25000u);
    goto L_08A6FA88;
L_08A6FA88:
    ctx.gpr[4] = (16025u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6FB64;
      }
      goto L_08A6FAA8;
    }
L_08A6FAA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6FB64;
      }
      goto L_08A6FAC8;
    }
L_08A6FAC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(588)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6FB64;
      }
      goto L_08A6FAE0;
    }
L_08A6FAE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1732)));
    ctx.gpr[4] = (17150u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 127u);
    ctx.gpr[4] = (17914u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
        goto L_08A6FB30;
    }
    goto L_08A6FB30;
L_08A6FB30:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
        goto L_08A6FB50;
    }
    goto L_08A6FB40;
L_08A6FB40:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(14000));
      if (branch_taken) {
          goto L_08A6FB64;
      }
      goto L_08A6FB50;
    }
L_08A6FB50:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(14000));
    goto L_08A6FB64;
L_08A6FB64:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6FC0C;
      }
      goto L_08A6FB6C;
    }
L_08A6FB6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(692)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6FBA0;
      }
      goto L_08A6FB80;
    }
L_08A6FB80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(692)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
        goto L_08A6FB98;
    }
    goto L_08A6FB98;
L_08A6FB98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A6FBBC;
      }
      goto L_08A6FBA0;
    }
L_08A6FBA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(692)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
        goto L_08A6FBB8;
    }
    goto L_08A6FBB8;
L_08A6FBB8:
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    goto L_08A6FBBC;
L_08A6FBBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(688)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6FBF0;
      }
      goto L_08A6FBD0;
    }
L_08A6FBD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(688)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(800));
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
        goto L_08A6FBE8;
    }
    goto L_08A6FBE8;
L_08A6FBE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A6FC0C;
      }
      goto L_08A6FBF0;
    }
L_08A6FBF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(688)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-800));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
        goto L_08A6FC08;
    }
    goto L_08A6FC08;
L_08A6FC08:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A6FC0C;
L_08A6FC0C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A6FCA4;
      }
      goto L_08A6FC14;
    }
L_08A6FC14:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A6FC24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 274u, 0x08A5DC80u>(ctx, &aot_mem) && ctx.pc == 0x08A6FC24u) goto L_08A6FC24;
    return;
L_08A6FC24:
    ctx.gpr[6] = (16908u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[21] & 255u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A6FC40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6FC40u) goto L_08A6FC40;
    return;
L_08A6FC40:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08A6FCA4;
      }
      goto L_08A6FC50;
    }
L_08A6FC50:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5563u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A6FCA4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A6FCA4u) goto L_08A6FCA4;
    return;
L_08A6FCA4:
    if (ctx.gpr[20] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
        (void)rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 6u, 0x08A7004Cu>(ctx, &aot_mem); return;
    }
    goto L_08A6FCAC;
L_08A6FCAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(692), ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(688), ctx.gpr[18]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 5u, 0x08A70048u>(ctx, &aot_mem); return;
      }
      goto L_08A6FCC0;
    }
L_08A6FCC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
        (void)rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 6u, 0x08A7004Cu>(ctx, &aot_mem); return;
    }
    goto L_08A6FCCC;
L_08A6FCCC:
    if (ctx.gpr[20] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_08A6FCFC;
    }
    goto L_08A6FCD4;
L_08A6FCD4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25184));
    ctx.gpr[31] = (0x08A6FCE4u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 7u, 0x08A9802Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6FCE4u) goto L_08A6FCE4;
    return;
L_08A6FCE4:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A6FCF0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1077u, 0x08A97EB4u>(ctx, &aot_mem) && ctx.pc == 0x08A6FCF0u) goto L_08A6FCF0;
    return;
L_08A6FCF0:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A6FD38;
      }
      goto L_08A6FCFC;
    }
L_08A6FCFC:
    ctx.gpr[5] = (17279u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(588)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[4] << 16u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[22] = (ctx.gpr[4] << 16u);
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    goto L_08A6FD38;
L_08A6FD38:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
        goto L_08A6FD40;
    }
    goto L_08A6FD40;
L_08A6FD40:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) & 0x7FFFFFFFu);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.gpr[31] = (0x08A6FD58u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 519u, 0x08A0695Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6FD58u) goto L_08A6FD58;
    return;
L_08A6FD58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6FDA4;
      }
      goto L_08A6FDA0;
    }
L_08A6FDA0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    goto L_08A6FDA4;
L_08A6FDA4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) <= 0;
    ctx.gpr[4] = (ctx.gpr[22] << 7u);
      if (branch_taken) {
          goto L_08A6FE4C;
      }
      goto L_08A6FDAC;
    }
L_08A6FDAC:
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[22]);
    ctx.gpr[4] = (0u | 255u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[5] = (0u | 127u);
    ctx.gpr[6] = (ctx.lo);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[18] = (0u | 127u);
        goto L_08A6FDEC;
    }
    goto L_08A6FDEC;
L_08A6FDEC:
    ctx.gpr[5] = (ctx.gpr[22] << 6u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[22] = (0u | 22000u);
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14000));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08A6FE2C;
      }
      goto L_08A6FE20;
    }
L_08A6FE20:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_08A6FE2C;
L_08A6FE2C:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[21] = (0u | 22000u);
        goto L_08A6FE44;
    }
    goto L_08A6FE44;
L_08A6FE44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08A6FE58;
      }
      goto L_08A6FE4C;
    }
L_08A6FE4C:
    ctx.gpr[18] = (0u | 127u);
    ctx.gpr[21] = (0u | 18000u);
    ctx.gpr[22] = (0u | 1u);
    goto L_08A6FE58;
L_08A6FE58:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6FF08;
      }
      goto L_08A6FE60;
    }
L_08A6FE60:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6FF08;
      }
      goto L_08A6FE68;
    }
L_08A6FE68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(692)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6FE9C;
      }
      goto L_08A6FE7C;
    }
L_08A6FE7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(692)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
        goto L_08A6FE94;
    }
    goto L_08A6FE94;
L_08A6FE94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A6FEB8;
      }
      goto L_08A6FE9C;
    }
L_08A6FE9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(692)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
        goto L_08A6FEB4;
    }
    goto L_08A6FEB4;
L_08A6FEB4:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A6FEB8;
L_08A6FEB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(688)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6FEEC;
      }
      goto L_08A6FECC;
    }
L_08A6FECC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(688)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(800));
    ctx.gpr[5] = (ctx.gpr[21] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
        goto L_08A6FEE4;
    }
    goto L_08A6FEE4;
L_08A6FEE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A6FF08;
      }
      goto L_08A6FEEC;
    }
L_08A6FEEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(688)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-800));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[21] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
        goto L_08A6FF04;
    }
    goto L_08A6FF04;
L_08A6FF04:
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    goto L_08A6FF08;
L_08A6FF08:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[4] = (17914u << 16u);
      if (branch_taken) {
          goto L_08A6FF54;
      }
      goto L_08A6FF10;
    }
L_08A6FF10:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
        goto L_08A6FF40;
    }
    goto L_08A6FF30;
L_08A6FF30:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A6FF54;
      }
      goto L_08A6FF40;
    }
L_08A6FF40:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    goto L_08A6FF54;
L_08A6FF54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6FF6C;
      }
      goto L_08A6FF68;
    }
L_08A6FF68:
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 2u));
    goto L_08A6FF6C;
L_08A6FF6C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 2u, 0x08A70028u>(ctx, &aot_mem); return;
      }
      goto L_08A6FF74;
    }
L_08A6FF74:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A6FF84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 274u, 0x08A5DC80u>(ctx, &aot_mem) && ctx.pc == 0x08A6FF84u) goto L_08A6FF84;
    return;
L_08A6FF84:
    ctx.gpr[6] = (16908u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[18] & 255u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A6FFA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6FFA0u) goto L_08A6FFA0;
    return;
L_08A6FFA0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 2u, 0x08A70028u>(ctx, &aot_mem); return;
      }
      goto L_08A6FFB0;
    }
L_08A6FFB0:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6FFD0;
      }
      goto L_08A6FFB8;
    }
L_08A6FFB8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[4] = (0u | 5562u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A6FFE8;
      }
      goto L_08A6FFD0;
    }
L_08A6FFD0:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5563u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    goto L_08A6FFE8;
L_08A6FFE8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.pc = 0x08A70000u; return;
}

void recomp_unit_0154(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0154_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_154(Runtime &runtime) {
    runtime.register_generated_unit(154u, 0x08A6C000u, 16384u, &recomp_unit_0154, &recomp_unit_0154_entry);
    runtime.register_function(0x08A6C000u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C014u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C01Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C038u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C040u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C054u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C060u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C084u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C09Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C0B8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C0BCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C0C4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C0E0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C0E8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C104u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C10Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C128u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C130u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C14Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C154u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C170u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C178u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C194u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C19Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C1B8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C1C0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C1DCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C1E4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C1F8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C204u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C228u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C234u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C24Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C25Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C26Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C274u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C27Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C290u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C2A4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C2B4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C2D4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C2E0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C2FCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C304u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C314u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C31Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C328u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C334u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C340u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C364u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C37Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C398u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C39Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C3A4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C3C0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C3C8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C3E4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C3ECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C408u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C410u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C42Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C434u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C450u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C458u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C474u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C47Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C498u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C4A0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C4BCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C4C4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C4E0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C4E8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C504u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C50Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C528u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C530u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C54Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C554u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C564u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C574u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C588u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C594u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C5B8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C5D0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C5ECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C5F0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C5F8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C614u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C61Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C638u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C640u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C65Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C664u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C680u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C688u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C6A4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C6ACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C6C8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C6D0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C6ECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C6F4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C710u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C718u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C734u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C73Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C758u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C760u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C77Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C784u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C7A0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C7A8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C7C4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C7CCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C7E8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C7F0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C80Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C814u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C830u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C838u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C84Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C858u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C890u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C8A4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C8B4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C8BCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C8C8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C8D0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C8D8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C8E0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C8ECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C8F4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C8FCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C904u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C910u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C918u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C924u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C92Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C934u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C93Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C948u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C950u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C958u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C960u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C96Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C974u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C980u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C988u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C994u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C99Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C9A8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C9B0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C9BCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C9C4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C9D4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C9DCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C9ECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C9F4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA04u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA0Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA1Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA24u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA34u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA3Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA4Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA54u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA64u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA6Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA7Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA84u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA94u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA9Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CAACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CAB4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CAC4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CACCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CAD0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CAECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CB18u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CB30u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CB4Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CB50u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CB58u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CB74u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CB7Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CB98u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CBA0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CBBCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CBC4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CBC8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CBD4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CC00u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CC18u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CC34u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CC38u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CC40u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CC5Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CC64u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CC80u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CC88u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CCA4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CCACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CCC8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CCD0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CCD4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CCE0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CD64u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CD84u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CDACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CDC0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CDD8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CDE8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CE24u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CE38u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CE74u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CE94u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CEA0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CEB0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CECCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CEE8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CEF4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CEFCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CF08u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CF14u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CF5Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CF7Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CF8Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CFA8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CFB8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D010u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D024u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D02Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D034u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D068u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D074u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D07Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D08Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D0BCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D0CCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D128u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D14Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D16Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D178u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D184u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D190u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D194u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D1A8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D1B4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D1C0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D1DCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D1E4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D1F0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D1FCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D214u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D224u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D230u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D248u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D250u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D25Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D268u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D27Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D284u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D28Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D294u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D2BCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D2C4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D2CCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D2D4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D2E0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D2ECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D300u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D308u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D310u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D318u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D340u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D348u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D350u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D358u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D36Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D378u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D3B8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D3C0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D3C8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D3D0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D3DCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D3F8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D400u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D408u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D418u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D420u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D428u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D42Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D438u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D454u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D458u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D464u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D478u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D484u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D490u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D49Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D4ACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D4C4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D4CCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D4E0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D4E8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D54Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D57Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D590u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D598u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D5A0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D5E8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D600u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D624u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D66Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D680u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D690u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D69Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D6ACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D6B8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D6C4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D6CCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D6D4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D6DCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D6E4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D6ECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D6F4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D6FCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D704u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D714u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D71Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D728u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D730u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D898u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D8A8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D900u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D930u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D934u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D940u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D948u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D954u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D96Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D97Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D990u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D9A4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D9C4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D9F0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DA08u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DA10u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DA2Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DA30u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DA50u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DA80u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DA90u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DA9Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DAA4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DAB0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DAB8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DAC4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DAD0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DADCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DAE4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DAECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DAF8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DB00u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DB08u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DB38u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DB44u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DB50u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DB6Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DB7Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DB84u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DB90u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DB98u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DBA0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DBD0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DBDCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DC0Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DC14u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DC20u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DC2Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DC38u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DC40u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DC48u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DC5Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DC60u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DC6Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DC78u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DC80u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DC90u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DC98u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DCA0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DCACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DCB4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DCD0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DCE0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DCE8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DCF0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DCF8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DD04u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DD0Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DD1Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DD24u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DD2Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DD34u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DD40u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DD54u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DD6Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DD74u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DD7Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DD84u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DD8Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DD94u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DD9Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DDA0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DDA8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DDB4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DDC0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DDC8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DDCCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DDF0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DE48u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DE50u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DE60u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DE7Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DE84u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DE8Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DEA8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DEBCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DEC8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DECCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DEF4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DF10u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DF34u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DF50u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DF58u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DF64u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DF74u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DF8Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DF98u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DFA4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DFB0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DFB8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DFC4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DFD0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DFD8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DFE4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DFF0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DFF8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E004u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E010u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E018u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E024u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E030u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E03Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E044u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E058u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E064u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E06Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E078u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E084u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E090u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E098u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E0A8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E0B4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E0BCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E0D4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E0E0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E0F8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E100u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E10Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E118u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E124u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E130u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E13Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E148u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E154u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E160u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E170u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E180u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E188u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E194u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E1A0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E1ACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E1B4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E1BCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E1C4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E1D0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E1DCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E1E8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E1F0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E1F8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E208u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E214u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E220u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E22Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E238u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E240u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E248u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E250u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E25Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E264u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E270u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E288u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E294u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E2A0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E2ACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E2B8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E2C4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E2D0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E2D8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E2E4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E2F0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E2F8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E304u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E310u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E31Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E328u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E334u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E340u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E348u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E354u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E378u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E3F0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E3F8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E404u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E414u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E420u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E428u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E460u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E470u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E4D4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E4D8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E500u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E520u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E530u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E53Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E554u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E568u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E578u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E584u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E58Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E594u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E5ACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E5B4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E5C4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E5E0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E5FCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E604u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E63Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E650u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E658u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E670u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E680u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E68Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E6A0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E6A8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E6D4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E70Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E718u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E730u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E73Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E748u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E774u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E790u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E7BCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E7C8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E7D4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E7ECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E7F0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E834u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E83Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E85Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E864u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E874u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E8C0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E8D0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E8F0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E90Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E914u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E934u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E93Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E964u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E980u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E9ACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E9B8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E9C0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E9CCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E9D4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E9DCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E9E8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E9ECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EA00u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EA14u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EA20u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EA28u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EA30u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EA3Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EA4Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EA5Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EA68u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EA78u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EA88u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EA94u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EA9Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EAA4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EAA8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EAD0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EAD8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EAE0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EB0Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EB44u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EB50u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EB68u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EB74u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EB80u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EBACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EBC8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EBF4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EC00u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EC08u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EC20u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EC34u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EC40u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EC54u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EC60u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EC80u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EC8Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6ECA4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6ECA8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6ECC0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6ECDCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6ECE4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6ED00u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6ED04u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6ED10u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6ED28u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6ED38u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6ED44u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6ED78u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6ED90u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EDB4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EDC8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EDD0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EDE4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EE10u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EE28u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EE50u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EE60u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EEA4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EEACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EEBCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EED8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EEE8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EF00u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EF44u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EF54u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EF5Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EF94u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EFB0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EFD8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EFE4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F010u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F02Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F058u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F060u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F0B0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F0B4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F0E0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F0E8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F0F0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F11Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F154u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F160u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F178u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F184u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F190u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F1BCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F1D8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F204u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F210u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F218u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F230u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F244u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F250u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F264u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F270u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F290u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F29Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F2B4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F2B8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F2D0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F2ECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F2F4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F310u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F314u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F320u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F338u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F348u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F354u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F388u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F3A0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F3C4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F3D8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F3E0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F3F4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F420u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F438u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F460u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F470u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F4B4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F4BCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F4F0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F50Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F520u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F548u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F550u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F558u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F584u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F5BCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F5C8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F5E0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F5ECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F5F8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F624u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F640u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F66Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F678u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F680u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F698u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F6ACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F6B8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F6CCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F6D8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F6F8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F704u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F71Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F720u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F738u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F754u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F75Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F778u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F77Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F794u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F7F0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F7F8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F82Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F840u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F850u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F85Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F864u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F86Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F87Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F888u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F890u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F894u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F8D0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F930u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F944u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F950u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F960u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F96Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F974u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F97Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F988u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F994u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F99Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F9CCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F9D4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F9D8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F9E4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F9F4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FA44u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FA54u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FA64u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FA78u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FA80u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FA88u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FAA8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FAC8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FAE0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FB30u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FB40u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FB50u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FB64u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FB6Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FB80u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FB98u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FBA0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FBB8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FBBCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FBD0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FBE8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FBF0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FC08u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FC0Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FC14u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FC24u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FC40u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FC50u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FCA4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FCACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FCC0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FCCCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FCD4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FCE4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FCF0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FCFCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FD38u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FD40u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FD58u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FDA0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FDA4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FDACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FDECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FE20u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FE2Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FE44u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FE4Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FE58u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FE60u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FE68u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FE7Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FE94u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FE9Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FEB4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FEB8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FECCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FEE4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FEECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FF04u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FF08u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FF10u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FF30u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FF40u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FF54u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FF68u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FF6Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FF74u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FF84u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FFA0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FFB0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FFB8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FFD0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FFE8u, &recomp_unit_0154, "recomp_unit_0154");
}
} // namespace psprecomp
