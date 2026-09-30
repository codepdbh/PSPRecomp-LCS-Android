#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0043[4095] = {
    1, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 7, 0, 8, 0,
    0, 9, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 12, 0, 13, 0, 14, 15, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0,
    0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 24, 0, 25, 0, 0, 26, 0, 0, 27, 0,
    0, 0, 28, 0, 29, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32,
    0, 33, 0, 34, 0, 0, 35, 0, 36, 0, 37, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0,
    0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 46, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0,
    53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 55, 0, 0, 0, 56, 0, 57, 0, 0, 0, 58, 0, 59, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0,
    67, 0, 0, 0, 0, 0, 68, 0, 69, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 74, 75, 0, 76,
    77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 81, 82, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0,
    0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 95,
    0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0,
    0, 0, 103, 0, 0, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108,
    0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 116, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0,
    119, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 125, 0, 0, 0, 0,
    0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 132, 0, 0,
    133, 0, 134, 0, 135, 0, 0, 136, 0, 137, 0, 0, 138, 0, 139, 0, 140, 0, 141, 0, 0, 142, 0, 143, 0, 144, 0, 0, 145, 0, 146, 0,
    147, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 152, 0, 153, 0, 0, 154, 0, 155, 0, 156,
    0, 0, 157, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 162, 0, 0, 163, 164, 0, 0, 0, 0, 165, 0, 0,
    0, 166, 0, 167, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0,
    0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 176, 0, 177, 0, 0, 178, 0, 0, 0, 0, 179, 0, 180, 0, 181, 0, 182, 0, 183, 0, 184,
    0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0,
    190, 0, 0, 191, 0, 192, 0, 0, 193, 0, 194, 0, 0, 195, 0, 196, 0, 0, 197, 0, 198, 0, 0, 199, 0, 200, 0, 0, 201, 0, 202, 0,
    0, 203, 0, 204, 0, 0, 205, 0, 206, 0, 0, 207, 0, 208, 0, 0, 209, 0, 210, 0, 0, 211, 0, 212, 0, 0, 213, 0, 214, 0, 0, 215,
    0, 216, 0, 0, 217, 0, 218, 0, 0, 219, 0, 220, 0, 0, 221, 0, 222, 0, 0, 0, 223, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 228, 0, 0, 229, 0, 0, 0, 230, 231, 0, 0, 232, 0, 0, 0, 233, 234, 0, 0, 235, 0, 0,
    0, 236, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240,
    0, 241, 0, 0, 242, 0, 0, 243, 0, 244, 0, 0, 245, 246, 0, 247, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 251, 0, 252,
    253, 0, 0, 254, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 260,
    261, 0, 262, 0, 263, 0, 264, 265, 0, 266, 0, 267, 0, 268, 0, 269, 0, 270, 0, 0, 0, 0, 271, 0, 272, 0, 0, 0, 0, 273, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 0, 277, 0, 278, 0, 0, 279, 0, 0, 280, 0, 281, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 284, 0, 0, 285, 0, 0, 0, 286, 0, 287, 0, 0, 0, 288, 0,
    289, 0, 0, 290, 0, 0, 0, 291, 292, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 311, 0, 312, 0, 313, 0, 314,
    0, 315, 0, 0, 316, 0, 0, 317, 0, 318, 319, 0, 0, 320, 0, 321, 322, 0, 0, 323, 0, 324, 325, 0, 326, 0, 0, 327, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 332, 0, 0,
    0, 333, 0, 334, 0, 335, 0, 336, 0, 337, 0, 0, 338, 0, 339, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0,
    0, 0, 342, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 345, 0, 346, 0, 0, 347, 0, 0, 348, 0, 349, 350, 0, 351, 0, 0, 0, 0, 352,
    0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 355, 0, 0, 356, 0, 0, 357, 0, 358, 0, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 361, 0,
    0, 0, 0, 362, 0, 363, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 365, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 368,
    0, 0, 369, 0, 370, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 0, 373, 0, 374, 0, 375, 0, 0, 376, 0, 377, 0, 378, 0,
    379, 380, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 0,
    0, 384, 0, 0, 0, 0, 385, 0, 0, 386, 0, 0, 387, 0, 0, 388, 0, 389, 0, 0, 0, 390, 0, 0, 391, 0, 0, 0, 392, 0, 393, 0,
    0, 394, 0, 395, 0, 0, 396, 0, 397, 0, 398, 0, 399, 0, 400, 0, 401, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 410, 0, 411, 0, 412, 0, 413, 0, 414, 0, 415, 0, 0, 416,
    0, 417, 0, 418, 0, 0, 0, 0, 0, 0, 419, 0, 420, 0, 0, 421, 0, 422, 0, 423, 0, 0, 424, 0, 425, 0, 426, 0, 0, 0, 427, 0,
    0, 0, 428, 0, 0, 0, 0, 429, 0, 430, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0,
    0, 0, 0, 435, 0, 0, 436, 0, 0, 0, 0, 437, 0, 438, 0, 439, 440, 0, 441, 0, 442, 0, 443, 0, 444, 0, 445, 0, 0, 0, 0, 446,
    0, 447, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 450, 0, 451, 0, 0, 452, 0, 453,
    0, 0, 454, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 457, 0, 458, 0, 0, 0, 0, 459, 0, 460, 0, 0, 0, 461,
    0, 462, 0, 463, 0, 0, 464, 0, 465, 0, 0, 466, 0, 467, 0, 468, 0, 0, 469, 0, 0, 0, 470, 0, 0, 471, 0, 0, 0, 472, 0, 473,
    474, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 479, 0, 0, 480, 0, 481, 0, 0, 0, 482, 0, 483, 0, 484, 0, 485, 486, 0, 487,
    0, 488, 0, 489, 0, 490, 491, 0, 492, 0, 493, 0, 494, 0, 495, 496, 0, 497, 498, 0, 499, 0, 0, 500, 0, 0, 0, 0, 501, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0, 504, 0,
    0, 505, 0, 0, 0, 0, 506, 0, 0, 507, 0, 0, 0, 508, 0, 0, 0, 0, 509, 0, 0, 510, 0, 0, 0, 511, 0, 0, 0, 0, 512, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 514, 0, 0, 0, 0, 515, 0, 0, 516, 0, 0, 0, 517, 0, 0, 0, 0,
    518, 0, 0, 519, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 522, 0, 0, 523, 0, 524, 525, 526, 0, 0, 0,
    0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 529, 0, 530, 0, 531, 0, 0, 532, 0, 533, 0, 534,
    0, 0, 535, 0, 0, 536, 0, 0, 537, 0, 538, 539, 0, 540, 0, 0, 0, 0, 541, 0, 542, 0, 0, 543, 0, 0, 544, 0, 0, 545, 0, 546,
    547, 0, 548, 0, 0, 0, 0, 549, 0, 550, 0, 0, 551, 0, 0, 552, 0, 0, 553, 0, 554, 555, 0, 556, 0, 0, 0, 0, 557, 0, 558, 0,
    0, 0, 0, 0, 0, 559, 0, 560, 0, 0, 561, 0, 0, 562, 0, 563, 564, 0, 565, 0, 0, 0, 0, 0, 566, 0, 0, 567, 0, 0, 568, 0,
    0, 569, 0, 570, 571, 0, 572, 0, 0, 0, 0, 573, 0, 0, 574, 0, 0, 575, 0, 0, 576, 0, 577, 578, 0, 579, 0, 0, 0, 0, 0, 580,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 582, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0,
    0, 0, 0, 585, 0, 0, 0, 586, 0, 587, 0, 588, 0, 589, 0, 590, 0, 0, 0, 591, 0, 592, 0, 0, 0, 0, 593, 0, 594, 0, 0, 595,
    0, 596, 0, 597, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 600, 0, 0, 0, 601, 0, 0, 602, 0, 0, 0, 0, 0,
    603, 0, 0, 604, 0, 605, 0, 606, 0, 607, 0, 0, 0, 608, 0, 609, 0, 0, 0, 610, 0, 0, 0, 611, 0, 0, 0, 612, 0, 0, 613, 0,
    614, 0, 0, 615, 0, 0, 0, 616, 0, 0, 0, 617, 0, 0, 618, 0, 0, 619, 0, 0, 620, 0, 0, 0, 0, 0, 621, 0, 0, 622, 0, 0,
    0, 623, 0, 0, 624, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 628, 0, 629, 0,
    0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 632, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 634, 0, 0, 635, 0, 0,
    0, 636, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 0, 638, 0, 639, 0, 640, 0, 0, 641, 0, 642, 0, 643, 0, 0, 0, 644, 0, 0, 0,
    645, 0, 0, 0, 646, 0, 0, 0, 647, 0, 0, 0, 0, 648, 0, 649, 0, 0, 650, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 654, 0, 655, 0, 656, 0, 657, 0, 658, 0, 659, 0, 660, 0, 661,
    0, 662, 663, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 666, 0, 667, 0, 0,
    0, 0, 668, 0, 0, 669, 0, 0, 670, 0, 671, 0, 672, 0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 675,
    0, 0, 0, 0, 676, 0, 0, 0, 677, 0, 0, 0, 0, 678, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 680,
    0, 0, 0, 0, 681, 0, 0, 0, 682, 0, 0, 0, 683, 0, 0, 0, 0, 684, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 687, 0, 688, 0, 0, 0, 0, 0, 689, 0, 0, 0,
    0, 690, 0, 0, 0, 0, 691, 0, 0, 0, 0, 0, 692, 0, 0, 0, 0, 0, 693, 0, 694, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 696,
    0, 0, 0, 0, 697, 0, 0, 0, 0, 0, 698, 0, 699, 0, 0, 0, 0, 0, 700, 0, 0, 0, 701, 0, 0, 0, 0, 702, 0, 703, 0, 0,
    0, 704, 0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 706, 0, 707, 0, 0, 0, 708, 0, 0, 0, 0, 709, 0, 710, 0, 0, 711, 0, 712,
    0, 0, 0, 713, 0, 0, 714, 0, 0, 715, 0, 716, 717, 0, 0, 718, 0, 0, 0, 0, 0, 0, 719, 0, 0, 720, 0, 0, 0, 721, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 722, 0, 0, 0, 723,
    0, 724, 0, 0, 0, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0, 726, 0, 0, 0, 0, 727, 0, 0, 0, 0, 728, 0, 0, 0, 0, 729, 0,
    0, 0, 0, 0, 730, 0, 731, 0, 0, 0, 0, 732, 0, 0, 0, 0, 0, 733, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0, 735, 0, 736, 0,
    0, 0, 0, 0, 737, 0, 0, 0, 738, 0, 0, 0, 0, 739, 0, 740, 0, 0, 0, 741, 0, 0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 743,
    0, 744, 0, 0, 0, 745, 0, 0, 0, 0, 746, 0, 747, 0, 0, 748, 0, 749, 0, 0, 750, 0, 0, 751, 0, 0, 0, 752, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 753, 0, 0, 0, 754, 0, 755,
    0, 0, 0, 0, 0, 0, 0, 0, 756, 0, 0, 0, 0, 757, 0, 0, 0, 0, 758, 0, 0, 0, 0, 759, 0, 0, 0, 0, 760, 0, 0, 0,
    0, 0, 761, 0, 762, 0, 0, 0, 0, 763, 0, 0, 0, 0, 0, 764, 0, 0, 0, 0, 765, 0, 0, 0, 0, 0, 766, 0, 767, 0, 0, 0,
    0, 0, 768, 0, 0, 0, 769, 0, 0, 0, 0, 770, 0, 771, 0, 0, 0, 772, 0, 0, 0, 0, 0, 0, 773, 0, 0, 0, 0, 774, 0, 775,
    0, 0, 0, 776, 0, 0, 0, 0, 777, 0, 778, 0, 0, 779, 0, 780, 0, 0, 781, 0, 0, 782, 0, 0, 0, 783, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 784, 0, 0, 0, 785, 0, 0, 0,
    0, 786, 0, 0, 0, 0, 787, 0, 0, 0, 0, 788, 0, 0, 0, 0, 789, 0, 0, 0, 0, 0, 790, 0, 791, 0, 0, 0, 0, 792, 0, 0,
    0, 0, 0, 793, 0, 0, 0, 0, 794, 0, 0, 0, 0, 0, 795, 0, 796, 0, 0, 0, 0, 0, 797, 0, 0, 0, 798, 0, 0, 0, 0, 799,
    0, 800, 0, 0, 0, 801, 0, 0, 0, 0, 0, 0, 802, 0, 0, 0, 0, 803, 0, 804, 0, 0, 0, 805, 0, 0, 0, 0, 806, 0, 807, 0,
    0, 808, 0, 809, 0, 0, 810, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 811, 0, 0, 812, 0, 0, 0, 0, 0, 813, 0, 0, 814, 0, 815, 0, 0, 0, 816, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 817, 0, 0, 0, 0, 818, 0, 0, 0, 819, 0, 0, 0, 0, 820, 0, 0, 0, 821, 0, 0, 0, 0, 822, 0, 0, 0,
    823, 0, 0, 0, 824, 0, 0, 825, 0, 0, 826, 0, 0, 0, 0, 0, 827, 0, 0, 828, 0, 829, 0, 0, 0, 830, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 831, 0, 0, 0, 0, 832, 0, 0, 0, 833, 0, 0, 0, 0, 834, 0, 0, 0, 835, 0, 0, 0, 0, 836, 0, 0, 0,
    837, 0, 0, 838, 0, 839, 0, 0, 840, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 841, 0, 842, 0, 0, 0, 0, 0, 843, 0, 0,
    0, 0, 844, 0, 0, 0, 0, 0, 845, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 846, 0, 0, 0, 0, 847, 0, 0, 0, 848, 0,
    0, 0, 0, 849, 0, 0, 0, 850, 0, 0, 0, 0, 851, 0, 0, 0, 852, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 853, 0, 0, 854, 0, 0, 855, 0, 856, 0, 857, 0, 0, 858, 0, 0, 0, 0, 0, 0, 0,
    0, 859, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 860, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 861, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 862, 0, 0, 0, 0, 863, 0, 0, 0, 0, 0, 0, 864, 0, 865, 0, 0, 866, 0, 867, 0, 868, 0, 0, 869, 0, 0, 870,
    0, 871, 0, 0, 0, 0, 872, 0, 0, 0, 0, 0, 873, 0, 874, 0, 875, 0, 876, 0, 0, 877, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 878, 0, 0, 0, 0, 879, 0, 0, 0, 0, 0, 0, 0, 880, 0, 0, 0, 0, 0, 881, 882,
};
void recomp_unit_0043_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088B0000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0043[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088B0000;
    case 2u: goto L_088B000C;
    case 3u: goto L_088B0020;
    case 4u: goto L_088B0044;
    case 5u: goto L_088B0058;
    case 6u: goto L_088B0068;
    case 7u: goto L_088B0070;
    case 8u: goto L_088B0078;
    case 9u: goto L_088B0084;
    case 10u: goto L_088B0090;
    case 11u: goto L_088B009C;
    case 12u: goto L_088B00B0;
    case 13u: goto L_088B00B8;
    case 14u: goto L_088B00C0;
    case 15u: goto L_088B00C4;
    case 16u: goto L_088B00CC;
    case 17u: goto L_088B00F0;
    case 18u: goto L_088B00F8;
    case 19u: goto L_088B0108;
    case 20u: goto L_088B011C;
    case 21u: goto L_088B012C;
    case 22u: goto L_088B0140;
    case 23u: goto L_088B0150;
    case 24u: goto L_088B0158;
    case 25u: goto L_088B0160;
    case 26u: goto L_088B016C;
    case 27u: goto L_088B0178;
    case 28u: goto L_088B0188;
    case 29u: goto L_088B0190;
    case 30u: goto L_088B0198;
    case 31u: goto L_088B01A4;
    case 32u: goto L_088B01FC;
    case 33u: goto L_088B0204;
    case 34u: goto L_088B020C;
    case 35u: goto L_088B0218;
    case 36u: goto L_088B0220;
    case 37u: goto L_088B0228;
    case 38u: goto L_088B0230;
    case 39u: goto L_088B0240;
    case 40u: goto L_088B0254;
    case 41u: goto L_088B026C;
    case 42u: goto L_088B0288;
    case 43u: goto L_088B0290;
    case 44u: goto L_088B02B4;
    case 45u: goto L_088B02C0;
    case 46u: goto L_088B02CC;
    case 47u: goto L_088B02D4;
    case 48u: goto L_088B02E4;
    case 49u: goto L_088B0344;
    case 50u: goto L_088B0354;
    case 51u: goto L_088B0360;
    case 52u: goto L_088B036C;
    case 53u: goto L_088B0380;
    case 54u: goto L_088B038C;
    case 55u: goto L_088B040C;
    case 56u: goto L_088B041C;
    case 57u: goto L_088B0424;
    case 58u: goto L_088B0434;
    case 59u: goto L_088B043C;
    case 60u: goto L_088B044C;
    case 61u: goto L_088B0454;
    case 62u: goto L_088B0498;
    case 63u: goto L_088B04C8;
    case 64u: goto L_088B04D0;
    case 65u: goto L_088B04D8;
    case 66u: goto L_088B04F4;
    case 67u: goto L_088B0500;
    case 68u: goto L_088B0518;
    case 69u: goto L_088B0520;
    case 70u: goto L_088B0524;
    case 71u: goto L_088B0540;
    case 72u: goto L_088B0550;
    case 73u: goto L_088B0568;
    case 74u: goto L_088B0570;
    case 75u: goto L_088B0574;
    case 76u: goto L_088B057C;
    case 77u: goto L_088B0580;
    case 78u: goto L_088B059C;
    case 79u: goto L_088B05A8;
    case 80u: goto L_088B05C0;
    case 81u: goto L_088B05C8;
    case 82u: goto L_088B05CC;
    case 83u: goto L_088B05D4;
    case 84u: goto L_088B065C;
    case 85u: goto L_088B0668;
    case 86u: goto L_088B0674;
    case 87u: goto L_088B0698;
    case 88u: goto L_088B06B4;
    case 89u: goto L_088B06C0;
    case 90u: goto L_088B06EC;
    case 91u: goto L_088B0714;
    case 92u: goto L_088B0724;
    case 93u: goto L_088B0758;
    case 94u: goto L_088B0764;
    case 95u: goto L_088B077C;
    case 96u: goto L_088B07A0;
    case 97u: goto L_088B07A8;
    case 98u: goto L_088B07B0;
    case 99u: goto L_088B082C;
    case 100u: goto L_088B083C;
    case 101u: goto L_088B0848;
    case 102u: goto L_088B0864;
    case 103u: goto L_088B0888;
    case 104u: goto L_088B089C;
    case 105u: goto L_088B08A4;
    case 106u: goto L_088B08D4;
    case 107u: goto L_088B08E8;
    case 108u: goto L_088B08FC;
    case 109u: goto L_088B090C;
    case 110u: goto L_088B0944;
    case 111u: goto L_088B0948;
    case 112u: goto L_088B0958;
    case 113u: goto L_088B0980;
    case 114u: goto L_088B09AC;
    case 115u: goto L_088B09C0;
    case 116u: goto L_088B09C8;
    case 117u: goto L_088B09D4;
    case 118u: goto L_088B09E0;
    case 119u: goto L_088B0A00;
    case 120u: goto L_088B0A08;
    case 121u: goto L_088B0A18;
    case 122u: goto L_088B0BF0;
    case 123u: goto L_088B0C5C;
    case 124u: goto L_088B0C64;
    case 125u: goto L_088B0C6C;
    case 126u: goto L_088B0C90;
    case 127u: goto L_088B0CA0;
    case 128u: goto L_088B0CB4;
    case 129u: goto L_088B0CBC;
    case 130u: goto L_088B0CD8;
    case 131u: goto L_088B0CE4;
    case 132u: goto L_088B0CF4;
    case 133u: goto L_088B0D00;
    case 134u: goto L_088B0D08;
    case 135u: goto L_088B0D10;
    case 136u: goto L_088B0D1C;
    case 137u: goto L_088B0D24;
    case 138u: goto L_088B0D30;
    case 139u: goto L_088B0D38;
    case 140u: goto L_088B0D40;
    case 141u: goto L_088B0D48;
    case 142u: goto L_088B0D54;
    case 143u: goto L_088B0D5C;
    case 144u: goto L_088B0D64;
    case 145u: goto L_088B0D70;
    case 146u: goto L_088B0D78;
    case 147u: goto L_088B0D80;
    case 148u: goto L_088B0D88;
    case 149u: goto L_088B0D94;
    case 150u: goto L_088B0DC0;
    case 151u: goto L_088B0DC8;
    case 152u: goto L_088B0DD8;
    case 153u: goto L_088B0DE0;
    case 154u: goto L_088B0DEC;
    case 155u: goto L_088B0DF4;
    case 156u: goto L_088B0DFC;
    case 157u: goto L_088B0E08;
    case 158u: goto L_088B0E10;
    case 159u: goto L_088B0E18;
    case 160u: goto L_088B0E34;
    case 161u: goto L_088B0E48;
    case 162u: goto L_088B0E50;
    case 163u: goto L_088B0E5C;
    case 164u: goto L_088B0E60;
    case 165u: goto L_088B0E74;
    case 166u: goto L_088B0E84;
    case 167u: goto L_088B0E8C;
    case 168u: goto L_088B0EA0;
    case 169u: goto L_088B0EAC;
    case 170u: goto L_088B0EC8;
    case 171u: goto L_088B0ED0;
    case 172u: goto L_088B0ED8;
    case 173u: goto L_088B0EF8;
    case 174u: goto L_088B0F0C;
    case 175u: goto L_088B0F20;
    case 176u: goto L_088B0F2C;
    case 177u: goto L_088B0F34;
    case 178u: goto L_088B0F40;
    case 179u: goto L_088B0F54;
    case 180u: goto L_088B0F5C;
    case 181u: goto L_088B0F64;
    case 182u: goto L_088B0F6C;
    case 183u: goto L_088B0F74;
    case 184u: goto L_088B0F7C;
    case 185u: goto L_088B0F8C;
    case 186u: goto L_088B0FA0;
    case 187u: goto L_088B0FC0;
    case 188u: goto L_088B0FD0;
    case 189u: goto L_088B0FE0;
    case 190u: goto L_088B1000;
    case 191u: goto L_088B100C;
    case 192u: goto L_088B1014;
    case 193u: goto L_088B1020;
    case 194u: goto L_088B1028;
    case 195u: goto L_088B1034;
    case 196u: goto L_088B103C;
    case 197u: goto L_088B1048;
    case 198u: goto L_088B1050;
    case 199u: goto L_088B105C;
    case 200u: goto L_088B1064;
    case 201u: goto L_088B1070;
    case 202u: goto L_088B1078;
    case 203u: goto L_088B1084;
    case 204u: goto L_088B108C;
    case 205u: goto L_088B1098;
    case 206u: goto L_088B10A0;
    case 207u: goto L_088B10AC;
    case 208u: goto L_088B10B4;
    case 209u: goto L_088B10C0;
    case 210u: goto L_088B10C8;
    case 211u: goto L_088B10D4;
    case 212u: goto L_088B10DC;
    case 213u: goto L_088B10E8;
    case 214u: goto L_088B10F0;
    case 215u: goto L_088B10FC;
    case 216u: goto L_088B1104;
    case 217u: goto L_088B1110;
    case 218u: goto L_088B1118;
    case 219u: goto L_088B1124;
    case 220u: goto L_088B112C;
    case 221u: goto L_088B1138;
    case 222u: goto L_088B1140;
    case 223u: goto L_088B1150;
    case 224u: goto L_088B1158;
    case 225u: goto L_088B1164;
    case 226u: goto L_088B1194;
    case 227u: goto L_088B11A4;
    case 228u: goto L_088B11A8;
    case 229u: goto L_088B11B4;
    case 230u: goto L_088B11C4;
    case 231u: goto L_088B11C8;
    case 232u: goto L_088B11D4;
    case 233u: goto L_088B11E4;
    case 234u: goto L_088B11E8;
    case 235u: goto L_088B11F4;
    case 236u: goto L_088B1204;
    case 237u: goto L_088B1208;
    case 238u: goto L_088B1224;
    case 239u: goto L_088B126C;
    case 240u: goto L_088B127C;
    case 241u: goto L_088B1284;
    case 242u: goto L_088B1290;
    case 243u: goto L_088B129C;
    case 244u: goto L_088B12A4;
    case 245u: goto L_088B12B0;
    case 246u: goto L_088B12B4;
    case 247u: goto L_088B12BC;
    case 248u: goto L_088B12C8;
    case 249u: goto L_088B12DC;
    case 250u: goto L_088B12E8;
    case 251u: goto L_088B12F4;
    case 252u: goto L_088B12FC;
    case 253u: goto L_088B1300;
    case 254u: goto L_088B130C;
    case 255u: goto L_088B1314;
    case 256u: goto L_088B1324;
    case 257u: goto L_088B1338;
    case 258u: goto L_088B135C;
    case 259u: goto L_088B1374;
    case 260u: goto L_088B137C;
    case 261u: goto L_088B1380;
    case 262u: goto L_088B1388;
    case 263u: goto L_088B1390;
    case 264u: goto L_088B1398;
    case 265u: goto L_088B139C;
    case 266u: goto L_088B13A4;
    case 267u: goto L_088B13AC;
    case 268u: goto L_088B13B4;
    case 269u: goto L_088B13BC;
    case 270u: goto L_088B13C4;
    case 271u: goto L_088B13D8;
    case 272u: goto L_088B13E0;
    case 273u: goto L_088B13F4;
    case 274u: goto L_088B141C;
    case 275u: goto L_088B1438;
    case 276u: goto L_088B1440;
    case 277u: goto L_088B144C;
    case 278u: goto L_088B1454;
    case 279u: goto L_088B1460;
    case 280u: goto L_088B146C;
    case 281u: goto L_088B1474;
    case 282u: goto L_088B14AC;
    case 283u: goto L_088B14BC;
    case 284u: goto L_088B14C4;
    case 285u: goto L_088B14D0;
    case 286u: goto L_088B14E0;
    case 287u: goto L_088B14E8;
    case 288u: goto L_088B14F8;
    case 289u: goto L_088B1500;
    case 290u: goto L_088B150C;
    case 291u: goto L_088B151C;
    case 292u: goto L_088B1520;
    case 293u: goto L_088B1528;
    case 294u: goto L_088B1538;
    case 295u: goto L_088B1550;
    case 296u: goto L_088B1560;
    case 297u: goto L_088B1588;
    case 298u: goto L_088B1598;
    case 299u: goto L_088B15C0;
    case 300u: goto L_088B15DC;
    case 301u: goto L_088B1604;
    case 302u: goto L_088B1630;
    case 303u: goto L_088B1638;
    case 304u: goto L_088B1664;
    case 305u: goto L_088B16A4;
    case 306u: goto L_088B16CC;
    case 307u: goto L_088B1720;
    case 308u: goto L_088B172C;
    case 309u: goto L_088B1744;
    case 310u: goto L_088B1754;
    case 311u: goto L_088B1764;
    case 312u: goto L_088B176C;
    case 313u: goto L_088B1774;
    case 314u: goto L_088B177C;
    case 315u: goto L_088B1784;
    case 316u: goto L_088B1790;
    case 317u: goto L_088B179C;
    case 318u: goto L_088B17A4;
    case 319u: goto L_088B17A8;
    case 320u: goto L_088B17B4;
    case 321u: goto L_088B17BC;
    case 322u: goto L_088B17C0;
    case 323u: goto L_088B17CC;
    case 324u: goto L_088B17D4;
    case 325u: goto L_088B17D8;
    case 326u: goto L_088B17E0;
    case 327u: goto L_088B17EC;
    case 328u: goto L_088B181C;
    case 329u: goto L_088B1848;
    case 330u: goto L_088B1854;
    case 331u: goto L_088B186C;
    case 332u: goto L_088B1874;
    case 333u: goto L_088B1884;
    case 334u: goto L_088B188C;
    case 335u: goto L_088B1894;
    case 336u: goto L_088B189C;
    case 337u: goto L_088B18A4;
    case 338u: goto L_088B18B0;
    case 339u: goto L_088B18B8;
    case 340u: goto L_088B18C4;
    case 341u: goto L_088B18E4;
    case 342u: goto L_088B1908;
    case 343u: goto L_088B1914;
    case 344u: goto L_088B1924;
    case 345u: goto L_088B1934;
    case 346u: goto L_088B193C;
    case 347u: goto L_088B1948;
    case 348u: goto L_088B1954;
    case 349u: goto L_088B195C;
    case 350u: goto L_088B1960;
    case 351u: goto L_088B1968;
    case 352u: goto L_088B197C;
    case 353u: goto L_088B198C;
    case 354u: goto L_088B199C;
    case 355u: goto L_088B19A8;
    case 356u: goto L_088B19B4;
    case 357u: goto L_088B19C0;
    case 358u: goto L_088B19C8;
    case 359u: goto L_088B19DC;
    case 360u: goto L_088B19F0;
    case 361u: goto L_088B19F8;
    case 362u: goto L_088B1A0C;
    case 363u: goto L_088B1A14;
    case 364u: goto L_088B1A34;
    case 365u: goto L_088B1A40;
    case 366u: goto L_088B1A48;
    case 367u: goto L_088B1A6C;
    case 368u: goto L_088B1A7C;
    case 369u: goto L_088B1A88;
    case 370u: goto L_088B1A90;
    case 371u: goto L_088B1AA4;
    case 372u: goto L_088B1AC0;
    case 373u: goto L_088B1ACC;
    case 374u: goto L_088B1AD4;
    case 375u: goto L_088B1ADC;
    case 376u: goto L_088B1AE8;
    case 377u: goto L_088B1AF0;
    case 378u: goto L_088B1AF8;
    case 379u: goto L_088B1B00;
    case 380u: goto L_088B1B04;
    case 381u: goto L_088B1B20;
    case 382u: goto L_088B1B5C;
    case 383u: goto L_088B1B70;
    case 384u: goto L_088B1B84;
    case 385u: goto L_088B1B98;
    case 386u: goto L_088B1BA4;
    case 387u: goto L_088B1BB0;
    case 388u: goto L_088B1BBC;
    case 389u: goto L_088B1BC4;
    case 390u: goto L_088B1BD4;
    case 391u: goto L_088B1BE0;
    case 392u: goto L_088B1BF0;
    case 393u: goto L_088B1BF8;
    case 394u: goto L_088B1C04;
    case 395u: goto L_088B1C0C;
    case 396u: goto L_088B1C18;
    case 397u: goto L_088B1C20;
    case 398u: goto L_088B1C28;
    case 399u: goto L_088B1C30;
    case 400u: goto L_088B1C38;
    case 401u: goto L_088B1C40;
    case 402u: goto L_088B1C44;
    case 403u: goto L_088B1C74;
    case 404u: goto L_088B1CA8;
    case 405u: goto L_088B1CBC;
    case 406u: goto L_088B1CD0;
    case 407u: goto L_088B1D1C;
    case 408u: goto L_088B1D30;
    case 409u: goto L_088B1D40;
    case 410u: goto L_088B1D48;
    case 411u: goto L_088B1D50;
    case 412u: goto L_088B1D58;
    case 413u: goto L_088B1D60;
    case 414u: goto L_088B1D68;
    case 415u: goto L_088B1D70;
    case 416u: goto L_088B1D7C;
    case 417u: goto L_088B1D84;
    case 418u: goto L_088B1D8C;
    case 419u: goto L_088B1DA8;
    case 420u: goto L_088B1DB0;
    case 421u: goto L_088B1DBC;
    case 422u: goto L_088B1DC4;
    case 423u: goto L_088B1DCC;
    case 424u: goto L_088B1DD8;
    case 425u: goto L_088B1DE0;
    case 426u: goto L_088B1DE8;
    case 427u: goto L_088B1DF8;
    case 428u: goto L_088B1E08;
    case 429u: goto L_088B1E1C;
    case 430u: goto L_088B1E24;
    case 431u: goto L_088B1E30;
    case 432u: goto L_088B1E44;
    case 433u: goto L_088B1E5C;
    case 434u: goto L_088B1E6C;
    case 435u: goto L_088B1E8C;
    case 436u: goto L_088B1E98;
    case 437u: goto L_088B1EAC;
    case 438u: goto L_088B1EB4;
    case 439u: goto L_088B1EBC;
    case 440u: goto L_088B1EC0;
    case 441u: goto L_088B1EC8;
    case 442u: goto L_088B1ED0;
    case 443u: goto L_088B1ED8;
    case 444u: goto L_088B1EE0;
    case 445u: goto L_088B1EE8;
    case 446u: goto L_088B1EFC;
    case 447u: goto L_088B1F04;
    case 448u: goto L_088B1F14;
    case 449u: goto L_088B1F44;
    case 450u: goto L_088B1F60;
    case 451u: goto L_088B1F68;
    case 452u: goto L_088B1F74;
    case 453u: goto L_088B1F7C;
    case 454u: goto L_088B1F88;
    case 455u: goto L_088B1F94;
    case 456u: goto L_088B1FB8;
    case 457u: goto L_088B1FC8;
    case 458u: goto L_088B1FD0;
    case 459u: goto L_088B1FE4;
    case 460u: goto L_088B1FEC;
    case 461u: goto L_088B1FFC;
    case 462u: goto L_088B2004;
    case 463u: goto L_088B200C;
    case 464u: goto L_088B2018;
    case 465u: goto L_088B2020;
    case 466u: goto L_088B202C;
    case 467u: goto L_088B2034;
    case 468u: goto L_088B203C;
    case 469u: goto L_088B2048;
    case 470u: goto L_088B2058;
    case 471u: goto L_088B2064;
    case 472u: goto L_088B2074;
    case 473u: goto L_088B207C;
    case 474u: goto L_088B2080;
    case 475u: goto L_088B209C;
    case 476u: goto L_088B221C;
    case 477u: goto L_088B2260;
    case 478u: goto L_088B22A4;
    case 479u: goto L_088B22B4;
    case 480u: goto L_088B22C0;
    case 481u: goto L_088B22C8;
    case 482u: goto L_088B22D8;
    case 483u: goto L_088B22E0;
    case 484u: goto L_088B22E8;
    case 485u: goto L_088B22F0;
    case 486u: goto L_088B22F4;
    case 487u: goto L_088B22FC;
    case 488u: goto L_088B2304;
    case 489u: goto L_088B230C;
    case 490u: goto L_088B2314;
    case 491u: goto L_088B2318;
    case 492u: goto L_088B2320;
    case 493u: goto L_088B2328;
    case 494u: goto L_088B2330;
    case 495u: goto L_088B2338;
    case 496u: goto L_088B233C;
    case 497u: goto L_088B2344;
    case 498u: goto L_088B2348;
    case 499u: goto L_088B2350;
    case 500u: goto L_088B235C;
    case 501u: goto L_088B2370;
    case 502u: goto L_088B23DC;
    case 503u: goto L_088B23EC;
    case 504u: goto L_088B23F8;
    case 505u: goto L_088B2404;
    case 506u: goto L_088B2418;
    case 507u: goto L_088B2424;
    case 508u: goto L_088B2434;
    case 509u: goto L_088B2448;
    case 510u: goto L_088B2454;
    case 511u: goto L_088B2464;
    case 512u: goto L_088B2478;
    case 513u: goto L_088B24AC;
    case 514u: goto L_088B24BC;
    case 515u: goto L_088B24D0;
    case 516u: goto L_088B24DC;
    case 517u: goto L_088B24EC;
    case 518u: goto L_088B2500;
    case 519u: goto L_088B250C;
    case 520u: goto L_088B2518;
    case 521u: goto L_088B2548;
    case 522u: goto L_088B2554;
    case 523u: goto L_088B2560;
    case 524u: goto L_088B2568;
    case 525u: goto L_088B256C;
    case 526u: goto L_088B2570;
    case 527u: goto L_088B2584;
    case 528u: goto L_088B25B8;
    case 529u: goto L_088B25D0;
    case 530u: goto L_088B25D8;
    case 531u: goto L_088B25E0;
    case 532u: goto L_088B25EC;
    case 533u: goto L_088B25F4;
    case 534u: goto L_088B25FC;
    case 535u: goto L_088B2608;
    case 536u: goto L_088B2614;
    case 537u: goto L_088B2620;
    case 538u: goto L_088B2628;
    case 539u: goto L_088B262C;
    case 540u: goto L_088B2634;
    case 541u: goto L_088B2648;
    case 542u: goto L_088B2650;
    case 543u: goto L_088B265C;
    case 544u: goto L_088B2668;
    case 545u: goto L_088B2674;
    case 546u: goto L_088B267C;
    case 547u: goto L_088B2680;
    case 548u: goto L_088B2688;
    case 549u: goto L_088B269C;
    case 550u: goto L_088B26A4;
    case 551u: goto L_088B26B0;
    case 552u: goto L_088B26BC;
    case 553u: goto L_088B26C8;
    case 554u: goto L_088B26D0;
    case 555u: goto L_088B26D4;
    case 556u: goto L_088B26DC;
    case 557u: goto L_088B26F0;
    case 558u: goto L_088B26F8;
    case 559u: goto L_088B2714;
    case 560u: goto L_088B271C;
    case 561u: goto L_088B2728;
    case 562u: goto L_088B2734;
    case 563u: goto L_088B273C;
    case 564u: goto L_088B2740;
    case 565u: goto L_088B2748;
    case 566u: goto L_088B2760;
    case 567u: goto L_088B276C;
    case 568u: goto L_088B2778;
    case 569u: goto L_088B2784;
    case 570u: goto L_088B278C;
    case 571u: goto L_088B2790;
    case 572u: goto L_088B2798;
    case 573u: goto L_088B27AC;
    case 574u: goto L_088B27B8;
    case 575u: goto L_088B27C4;
    case 576u: goto L_088B27D0;
    case 577u: goto L_088B27D8;
    case 578u: goto L_088B27DC;
    case 579u: goto L_088B27E4;
    case 580u: goto L_088B27FC;
    case 581u: goto L_088B282C;
    case 582u: goto L_088B2834;
    case 583u: goto L_088B283C;
    case 584u: goto L_088B2870;
    case 585u: goto L_088B288C;
    case 586u: goto L_088B289C;
    case 587u: goto L_088B28A4;
    case 588u: goto L_088B28AC;
    case 589u: goto L_088B28B4;
    case 590u: goto L_088B28BC;
    case 591u: goto L_088B28CC;
    case 592u: goto L_088B28D4;
    case 593u: goto L_088B28E8;
    case 594u: goto L_088B28F0;
    case 595u: goto L_088B28FC;
    case 596u: goto L_088B2904;
    case 597u: goto L_088B290C;
    case 598u: goto L_088B291C;
    case 599u: goto L_088B2938;
    case 600u: goto L_088B294C;
    case 601u: goto L_088B295C;
    case 602u: goto L_088B2968;
    case 603u: goto L_088B2980;
    case 604u: goto L_088B298C;
    case 605u: goto L_088B2994;
    case 606u: goto L_088B299C;
    case 607u: goto L_088B29A4;
    case 608u: goto L_088B29B4;
    case 609u: goto L_088B29BC;
    case 610u: goto L_088B29CC;
    case 611u: goto L_088B29DC;
    case 612u: goto L_088B29EC;
    case 613u: goto L_088B29F8;
    case 614u: goto L_088B2A00;
    case 615u: goto L_088B2A0C;
    case 616u: goto L_088B2A1C;
    case 617u: goto L_088B2A2C;
    case 618u: goto L_088B2A38;
    case 619u: goto L_088B2A44;
    case 620u: goto L_088B2A50;
    case 621u: goto L_088B2A68;
    case 622u: goto L_088B2A74;
    case 623u: goto L_088B2A84;
    case 624u: goto L_088B2A90;
    case 625u: goto L_088B2AAC;
    case 626u: goto L_088B2AC4;
    case 627u: goto L_088B2AE8;
    case 628u: goto L_088B2AF0;
    case 629u: goto L_088B2AF8;
    case 630u: goto L_088B2B0C;
    case 631u: goto L_088B2B28;
    case 632u: goto L_088B2B3C;
    case 633u: goto L_088B2B4C;
    case 634u: goto L_088B2B68;
    case 635u: goto L_088B2B74;
    case 636u: goto L_088B2B84;
    case 637u: goto L_088B2B8C;
    case 638u: goto L_088B2BB4;
    case 639u: goto L_088B2BBC;
    case 640u: goto L_088B2BC4;
    case 641u: goto L_088B2BD0;
    case 642u: goto L_088B2BD8;
    case 643u: goto L_088B2BE0;
    case 644u: goto L_088B2BF0;
    case 645u: goto L_088B2C00;
    case 646u: goto L_088B2C10;
    case 647u: goto L_088B2C20;
    case 648u: goto L_088B2C34;
    case 649u: goto L_088B2C3C;
    case 650u: goto L_088B2C48;
    case 651u: goto L_088B2C60;
    case 652u: goto L_088B2C98;
    case 653u: goto L_088B2CB4;
    case 654u: goto L_088B2CC4;
    case 655u: goto L_088B2CCC;
    case 656u: goto L_088B2CD4;
    case 657u: goto L_088B2CDC;
    case 658u: goto L_088B2CE4;
    case 659u: goto L_088B2CEC;
    case 660u: goto L_088B2CF4;
    case 661u: goto L_088B2CFC;
    case 662u: goto L_088B2D04;
    case 663u: goto L_088B2D08;
    case 664u: goto L_088B2D24;
    case 665u: goto L_088B2D58;
    case 666u: goto L_088B2D6C;
    case 667u: goto L_088B2D74;
    case 668u: goto L_088B2D88;
    case 669u: goto L_088B2D94;
    case 670u: goto L_088B2DA0;
    case 671u: goto L_088B2DA8;
    case 672u: goto L_088B2DB0;
    case 673u: goto L_088B2DB8;
    case 674u: goto L_088B2DEC;
    case 675u: goto L_088B2DFC;
    case 676u: goto L_088B2E10;
    case 677u: goto L_088B2E20;
    case 678u: goto L_088B2E34;
    case 679u: goto L_088B2E44;
    case 680u: goto L_088B2E7C;
    case 681u: goto L_088B2E90;
    case 682u: goto L_088B2EA0;
    case 683u: goto L_088B2EB0;
    case 684u: goto L_088B2EC4;
    case 685u: goto L_088B2ED4;
    case 686u: goto L_088B2F40;
    case 687u: goto L_088B2F50;
    case 688u: goto L_088B2F58;
    case 689u: goto L_088B2F70;
    case 690u: goto L_088B2F84;
    case 691u: goto L_088B2F98;
    case 692u: goto L_088B2FB0;
    case 693u: goto L_088B2FC8;
    case 694u: goto L_088B2FD0;
    case 695u: goto L_088B2FE4;
    case 696u: goto L_088B2FFC;
    case 697u: goto L_088B3010;
    case 698u: goto L_088B3028;
    case 699u: goto L_088B3030;
    case 700u: goto L_088B3048;
    case 701u: goto L_088B3058;
    case 702u: goto L_088B306C;
    case 703u: goto L_088B3074;
    case 704u: goto L_088B3084;
    case 705u: goto L_088B30A0;
    case 706u: goto L_088B30B4;
    case 707u: goto L_088B30BC;
    case 708u: goto L_088B30CC;
    case 709u: goto L_088B30E0;
    case 710u: goto L_088B30E8;
    case 711u: goto L_088B30F4;
    case 712u: goto L_088B30FC;
    case 713u: goto L_088B310C;
    case 714u: goto L_088B3118;
    case 715u: goto L_088B3124;
    case 716u: goto L_088B312C;
    case 717u: goto L_088B3130;
    case 718u: goto L_088B313C;
    case 719u: goto L_088B3158;
    case 720u: goto L_088B3164;
    case 721u: goto L_088B3174;
    case 722u: goto L_088B31EC;
    case 723u: goto L_088B31FC;
    case 724u: goto L_088B3204;
    case 725u: goto L_088B3228;
    case 726u: goto L_088B323C;
    case 727u: goto L_088B3250;
    case 728u: goto L_088B3264;
    case 729u: goto L_088B3278;
    case 730u: goto L_088B3290;
    case 731u: goto L_088B3298;
    case 732u: goto L_088B32AC;
    case 733u: goto L_088B32C4;
    case 734u: goto L_088B32D8;
    case 735u: goto L_088B32F0;
    case 736u: goto L_088B32F8;
    case 737u: goto L_088B3310;
    case 738u: goto L_088B3320;
    case 739u: goto L_088B3334;
    case 740u: goto L_088B333C;
    case 741u: goto L_088B334C;
    case 742u: goto L_088B3368;
    case 743u: goto L_088B337C;
    case 744u: goto L_088B3384;
    case 745u: goto L_088B3394;
    case 746u: goto L_088B33A8;
    case 747u: goto L_088B33B0;
    case 748u: goto L_088B33BC;
    case 749u: goto L_088B33C4;
    case 750u: goto L_088B33D0;
    case 751u: goto L_088B33DC;
    case 752u: goto L_088B33EC;
    case 753u: goto L_088B3464;
    case 754u: goto L_088B3474;
    case 755u: goto L_088B347C;
    case 756u: goto L_088B34A0;
    case 757u: goto L_088B34B4;
    case 758u: goto L_088B34C8;
    case 759u: goto L_088B34DC;
    case 760u: goto L_088B34F0;
    case 761u: goto L_088B3508;
    case 762u: goto L_088B3510;
    case 763u: goto L_088B3524;
    case 764u: goto L_088B353C;
    case 765u: goto L_088B3550;
    case 766u: goto L_088B3568;
    case 767u: goto L_088B3570;
    case 768u: goto L_088B3588;
    case 769u: goto L_088B3598;
    case 770u: goto L_088B35AC;
    case 771u: goto L_088B35B4;
    case 772u: goto L_088B35C4;
    case 773u: goto L_088B35E0;
    case 774u: goto L_088B35F4;
    case 775u: goto L_088B35FC;
    case 776u: goto L_088B360C;
    case 777u: goto L_088B3620;
    case 778u: goto L_088B3628;
    case 779u: goto L_088B3634;
    case 780u: goto L_088B363C;
    case 781u: goto L_088B3648;
    case 782u: goto L_088B3654;
    case 783u: goto L_088B3664;
    case 784u: goto L_088B36E0;
    case 785u: goto L_088B36F0;
    case 786u: goto L_088B3704;
    case 787u: goto L_088B3718;
    case 788u: goto L_088B372C;
    case 789u: goto L_088B3740;
    case 790u: goto L_088B3758;
    case 791u: goto L_088B3760;
    case 792u: goto L_088B3774;
    case 793u: goto L_088B378C;
    case 794u: goto L_088B37A0;
    case 795u: goto L_088B37B8;
    case 796u: goto L_088B37C0;
    case 797u: goto L_088B37D8;
    case 798u: goto L_088B37E8;
    case 799u: goto L_088B37FC;
    case 800u: goto L_088B3804;
    case 801u: goto L_088B3814;
    case 802u: goto L_088B3830;
    case 803u: goto L_088B3844;
    case 804u: goto L_088B384C;
    case 805u: goto L_088B385C;
    case 806u: goto L_088B3870;
    case 807u: goto L_088B3878;
    case 808u: goto L_088B3884;
    case 809u: goto L_088B388C;
    case 810u: goto L_088B3898;
    case 811u: goto L_088B3918;
    case 812u: goto L_088B3924;
    case 813u: goto L_088B393C;
    case 814u: goto L_088B3948;
    case 815u: goto L_088B3950;
    case 816u: goto L_088B3960;
    case 817u: goto L_088B3994;
    case 818u: goto L_088B39A8;
    case 819u: goto L_088B39B8;
    case 820u: goto L_088B39CC;
    case 821u: goto L_088B39DC;
    case 822u: goto L_088B39F0;
    case 823u: goto L_088B3A00;
    case 824u: goto L_088B3A10;
    case 825u: goto L_088B3A1C;
    case 826u: goto L_088B3A28;
    case 827u: goto L_088B3A40;
    case 828u: goto L_088B3A4C;
    case 829u: goto L_088B3A54;
    case 830u: goto L_088B3A64;
    case 831u: goto L_088B3A94;
    case 832u: goto L_088B3AA8;
    case 833u: goto L_088B3AB8;
    case 834u: goto L_088B3ACC;
    case 835u: goto L_088B3ADC;
    case 836u: goto L_088B3AF0;
    case 837u: goto L_088B3B00;
    case 838u: goto L_088B3B0C;
    case 839u: goto L_088B3B14;
    case 840u: goto L_088B3B20;
    case 841u: goto L_088B3B54;
    case 842u: goto L_088B3B5C;
    case 843u: goto L_088B3B74;
    case 844u: goto L_088B3B88;
    case 845u: goto L_088B3BA0;
    case 846u: goto L_088B3BD4;
    case 847u: goto L_088B3BE8;
    case 848u: goto L_088B3BF8;
    case 849u: goto L_088B3C0C;
    case 850u: goto L_088B3C1C;
    case 851u: goto L_088B3C30;
    case 852u: goto L_088B3C40;
    case 853u: goto L_088B3CAC;
    case 854u: goto L_088B3CB8;
    case 855u: goto L_088B3CC4;
    case 856u: goto L_088B3CCC;
    case 857u: goto L_088B3CD4;
    case 858u: goto L_088B3CE0;
    case 859u: goto L_088B3D04;
    case 860u: goto L_088B3DF8;
    case 861u: goto L_088B3E44;
    case 862u: goto L_088B3E90;
    case 863u: goto L_088B3EA4;
    case 864u: goto L_088B3EC0;
    case 865u: goto L_088B3EC8;
    case 866u: goto L_088B3ED4;
    case 867u: goto L_088B3EDC;
    case 868u: goto L_088B3EE4;
    case 869u: goto L_088B3EF0;
    case 870u: goto L_088B3EFC;
    case 871u: goto L_088B3F04;
    case 872u: goto L_088B3F18;
    case 873u: goto L_088B3F30;
    case 874u: goto L_088B3F38;
    case 875u: goto L_088B3F40;
    case 876u: goto L_088B3F48;
    case 877u: goto L_088B3F54;
    case 878u: goto L_088B3FA8;
    case 879u: goto L_088B3FBC;
    case 880u: goto L_088B3FDC;
    case 881u: goto L_088B3FF4;
    case 882u: goto L_088B3FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088B0000:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B000C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0020:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[7] = (2187u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 20u);
    ctx.gpr[6] = (0u | 12u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B0044u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x088B0044u) goto L_088B0044;
    return;
L_088B0044:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0058:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
      if (branch_taken) {
          goto L_088B0078;
      }
      goto L_088B0068;
    }
L_088B0068:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B0078;
      }
      goto L_088B0070;
    }
L_088B0070:
    ctx.gpr[31] = (0x088B0078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088B0078u) goto L_088B0078;
    return;
L_088B0078:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0084:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_088B0090;
L_088B0090:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B00B8;
      }
      goto L_088B009C;
    }
L_088B009C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_088B0090;
      }
      goto L_088B00B0;
    }
L_088B00B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B00C0;
      }
      goto L_088B00B8;
    }
L_088B00B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_088B00C4;
      }
      goto L_088B00C0;
    }
L_088B00C0:
    ctx.gpr[2] = (0u | 0u);
    goto L_088B00C4;
L_088B00C4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B00CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B00F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088B00F0u) goto L_088B00F0;
    return;
L_088B00F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B0150;
      }
      goto L_088B00F8;
    }
L_088B00F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088B0150;
      }
      goto L_088B0108;
    }
L_088B0108:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (32u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B0150;
      }
      goto L_088B011C;
    }
L_088B011C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B0150;
      }
      goto L_088B012C;
    }
L_088B012C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B0150;
      }
      goto L_088B0140;
    }
L_088B0140:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B0158;
      }
      goto L_088B0150;
    }
L_088B0150:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B0254;
      }
      goto L_088B0158;
    }
L_088B0158:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088B0160;
L_088B0160:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B0178;
      }
      goto L_088B016C;
    }
L_088B016C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088B0190;
      }
      goto L_088B0178;
    }
L_088B0178:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_088B0160;
      }
      goto L_088B0188;
    }
L_088B0188:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B0198;
      }
      goto L_088B0190;
    }
L_088B0190:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B0254;
      }
      goto L_088B0198;
    }
L_088B0198:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B0228;
      }
      goto L_088B01A4;
    }
L_088B01A4:
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x088B01FCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C06D4u>(ctx, &aot_mem) && ctx.pc == 0x088B01FCu) goto L_088B01FC;
    return;
L_088B01FC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B0220;
      }
      goto L_088B0204;
    }
L_088B0204:
    ctx.gpr[31] = (0x088B020Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088B0084;
L_088B020C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B0230;
      }
      goto L_088B0218;
    }
L_088B0218:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B0254;
      }
      goto L_088B0220;
    }
L_088B0220:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B0254;
      }
      goto L_088B0228;
    }
L_088B0228:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B0254;
      }
      goto L_088B0230;
    }
L_088B0230:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B0240u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x088B0240u) goto L_088B0240;
    return;
L_088B0240:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1372), ctx.gpr[18]);
    ctx.gpr[31] = (0x088B0254u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088B0520;
L_088B0254:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B026C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B0288u);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 527u, 0x08A92624u>(ctx, &aot_mem) && ctx.pc == 0x088B0288u) goto L_088B0288;
    return;
L_088B0288:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B02D4;
      }
      goto L_088B0290;
    }
L_088B0290:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17168));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088B02B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 571u, 0x08A06CC4u>(ctx, &aot_mem) && ctx.pc == 0x088B02B4u) goto L_088B02B4;
    return;
L_088B02B4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B02D4;
      }
      goto L_088B02C0;
    }
L_088B02C0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088B02CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088B00CC;
L_088B02CC:
    ctx.gpr[31] = (0x088B02D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 539u, 0x08A92708u>(ctx, &aot_mem) && ctx.pc == 0x088B02D4u) goto L_088B02D4;
    return;
L_088B02D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B02E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.fpr[6] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[5] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[7] = std::bit_cast<float>(0u);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[10] = (18804u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[10] = (ctx.gpr[10] | 9200u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[9] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[10] = (16128u << 16u);
    ctx.gpr[8] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    goto L_088B0344;
L_088B0344:
    ctx.gpr[3] = (ctx.gpr[5] | 0u);
    ctx.fpr[8] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[9]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[11] = (ctx.gpr[4] | 0u);
    goto L_088B0354;
L_088B0354:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B0424;
      }
      goto L_088B0360;
    }
L_088B0360:
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088B0424;
      }
      goto L_088B036C;
    }
L_088B036C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(1208)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[7])) && ctx.fpr[14] == ctx.fpr[7]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B0424;
      }
      goto L_088B0380;
    }
L_088B0380:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[12] != ctx.gpr[8];
    ctx.gpr[12] = (ctx.gpr[10] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088B0424;
      }
      goto L_088B038C;
    }
L_088B038C:
    ctx.fpr[6] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.fpr[5] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    ctx.fpr[4] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    ctx.fpr[3] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[18] = ctx.fpr[4] - ctx.fpr[0];
    ctx.fpr[17] = ctx.fpr[3] - ctx.fpr[19];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[10] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[10] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[10];
    ctx.fpr[14] = std::sqrt(ctx.fpr[14]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(48));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[21] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[21] = fs * ft; }
    ctx.fpr[11] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    ctx.fpr[11] = ctx.fpr[11] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[11] < ctx.fpr[21]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B0424;
      }
      goto L_088B040C;
    }
L_088B040C:
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[8]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B0424;
      }
      goto L_088B041C;
    }
L_088B041C:
    ctx.gpr[3] = (ctx.gpr[2] | 0u);
    ctx.fpr[8] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_088B0424;
L_088B0424:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[2]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_088B0354;
      }
      goto L_088B0434;
    }
L_088B0434:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[8]));
      if (branch_taken) {
          goto L_088B0454;
      }
      goto L_088B043C;
    }
L_088B043C:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < 2 ? 1u : 0u);
    if (ctx.gpr[10] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
        goto L_088B0498;
    }
    goto L_088B044C;
L_088B044C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088B0344;
      }
      goto L_088B0454;
    }
L_088B0454:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[5] = (ctx.gpr[3] + ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[5] = (ctx.gpr[3] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[2] = (ctx.gpr[5] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_088B04C8;
      }
      goto L_088B0498;
    }
L_088B0498:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[2] = (0u | 0u);
    goto L_088B04C8;
L_088B04C8:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B04D0:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_088B04D8;
L_088B04D8:
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B0500;
      }
      goto L_088B04F4;
    }
L_088B04F4:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    goto L_088B0500;
L_088B0500:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B04D8;
      }
      goto L_088B0518;
    }
L_088B0518:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[6] & 65535u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0520:
    ctx.gpr[6] = (0u | 0u);
    goto L_088B0524;
L_088B0524:
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B0550;
      }
      goto L_088B0540;
    }
L_088B0540:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B0570;
      }
      goto L_088B0550;
    }
L_088B0550:
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B0524;
      }
      goto L_088B0568;
    }
L_088B0568:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B0574;
      }
      goto L_088B0570;
    }
L_088B0570:
    ctx.gpr[2] = (0u | 1u);
    goto L_088B0574;
L_088B0574:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B057C:
    ctx.gpr[6] = (0u | 0u);
    goto L_088B0580;
L_088B0580:
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B05A8;
      }
      goto L_088B059C;
    }
L_088B059C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B05C8;
      }
      goto L_088B05A8;
    }
L_088B05A8:
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B0580;
      }
      goto L_088B05C0;
    }
L_088B05C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B05CC;
      }
      goto L_088B05C8;
    }
L_088B05C8:
    ctx.gpr[2] = (0u | 1u);
    goto L_088B05CC;
L_088B05CC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B05D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16564)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16560)));
    ctx.gpr[8] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(16568), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[10] = (2227u << 16u);
    ctx.gpr[9] = (2227u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16576), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (16014u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(16572), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[4] | 14571u);
    ctx.gpr[11] = (2227u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (2269u << 16u);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[2] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16920));
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(16580), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B065Cu);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16584), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088B0020;
L_088B065C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x088B0668u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16588));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x088B0668u) goto L_088B0668;
    return;
L_088B0668:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0674:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B0698u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6916));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x088B0698u) goto L_088B0698;
    return;
L_088B0698:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[31] = (0x088B06B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6912));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x088B06B4u) goto L_088B06B4;
    return;
L_088B06B4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B06C0:
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
L_088B06EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16728)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088B0724;
      }
      goto L_088B0714;
    }
L_088B0714:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x088B0724u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x088B0724u) goto L_088B0724;
    return;
L_088B0724:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16728), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16732), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16736), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16740), ctx.gpr[16]);
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
L_088B0758:
    ctx.gpr[4] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16728)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0764:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16732)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16728)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] - ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B077C:
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
          goto L_088B07A8;
      }
      goto L_088B07A0;
    }
L_088B07A0:
    if (ctx.gpr[16] != 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
        goto L_088B07B0;
    }
    goto L_088B07A8;
L_088B07A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B0848;
      }
      goto L_088B07B0;
    }
L_088B07B0:
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16732)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16732)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16732), ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16732)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16732), ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16732)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16732), ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16732)));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(3));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16732), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16732)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[19] = (ctx.gpr[6] & ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16732), ctx.gpr[4]);
    ctx.gpr[31] = (0x088B082Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x088B082Cu) goto L_088B082C;
    return;
L_088B082C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16732)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B083Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088B083Cu) goto L_088B083C;
    return;
L_088B083C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16732)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16732), ctx.gpr[4]);
    goto L_088B0848;
L_088B0848:
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
L_088B0864:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B0888u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5676));
    goto L_088B06C0;
L_088B0888:
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16736)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B089Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 538u, 0x08AEDEDCu>(ctx, &aot_mem) && ctx.pc == 0x088B089Cu) goto L_088B089C;
    return;
L_088B089C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B08D4;
      }
      goto L_088B08A4;
    }
L_088B08A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16736)));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5704));
    ctx.gpr[31] = (0x088B08D4u);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    goto L_088B06C0;
L_088B08D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B08E8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16736)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B08FC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16736)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B090C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16736)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.gpr[9] = (ctx.gpr[6] < ctx.gpr[8] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_088B0948;
      }
      goto L_088B0944;
    }
L_088B0944:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_088B0948;
L_088B0948:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088B0958u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088B0958u) goto L_088B0958;
    return;
L_088B0958:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16736)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16736), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0980:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16736)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(3));
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16736), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B09AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B09C0u);
    // nop
    goto L_088B0758;
L_088B09C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B0A00;
      }
      goto L_088B09C8;
    }
L_088B09C8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x088B09D4u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    goto L_088B0758;
L_088B09D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B09E0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x088B09E0u) goto L_088B09E0;
    return;
L_088B09E0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16728), 0u);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16732), 0u);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16736), 0u);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16740), 0u);
    goto L_088B0A00;
L_088B0A00:
    ctx.gpr[31] = (0x088B0A08u);
    // nop
    goto L_088B1164;
L_088B0A08:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0A18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7060)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29200)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25444)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7772)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7656)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7768)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7767)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-7766)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27584)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7848)));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7840)));
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30948)));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-7036))))));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-7034))))));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-6904))))));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6940)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6900)));
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22912)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(11232)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22912)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(11236)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22912)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11240)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-25526)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-25492)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(109), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25524)));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(22240)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25476)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25480)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-25471))))));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-25472)));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B0BF0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(129), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x088B0BF0u) goto L_088B0BF0;
    return;
L_088B0BF0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(130)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(172), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25651)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(174), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25652)));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(175), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16177)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(177), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-25504)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(178), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6896));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6896)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20624)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B0C64;
      }
      goto L_088B0C5C;
    }
L_088B0C5C:
    ctx.gpr[31] = (0x088B0C64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x088B0C64u) goto L_088B0C64;
    return;
L_088B0C64:
    ctx.gpr[31] = (0x088B0C6Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20624)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 39u, 0x08838234u>(ctx, &aot_mem) && ctx.pc == 0x088B0C6Cu) goto L_088B0C6C;
    return;
L_088B0C6C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(130), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25650)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(176), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0C90:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5904));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088B0CA0;
L_088B0CA0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B0CA0;
      }
      goto L_088B0CB4;
    }
L_088B0CB4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0CBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B0CD8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6908), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 579u, 0x08A9688Cu>(ctx, &aot_mem) && ctx.pc == 0x088B0CD8u) goto L_088B0CD8;
    return;
L_088B0CD8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B0CE4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5752));
    goto L_088B0864;
L_088B0CE4:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B0CF4u);
    ctx.gpr[5] = (0u | 188u);
    goto L_088B090C;
L_088B0CF4:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B0D00u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5760));
    goto L_088B0864;
L_088B0D00:
    ctx.gpr[31] = (0x088B0D08u);
    // nop
    goto L_088B08FC;
L_088B0D08:
    ctx.gpr[31] = (0x088B0D10u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_088B08E8;
L_088B0D10:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B0D1Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 689u, 0x0887BC68u>(ctx, &aot_mem) && ctx.pc == 0x088B0D1Cu) goto L_088B0D1C;
    return;
L_088B0D1C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B0D38;
      }
      goto L_088B0D24;
    }
L_088B0D24:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B0D30u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5768));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x088B0D30u) goto L_088B0D30;
    return;
L_088B0D30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B0E60;
      }
      goto L_088B0D38;
    }
L_088B0D38:
    ctx.gpr[31] = (0x088B0D40u);
    // nop
    goto L_088B0980;
L_088B0D40:
    ctx.gpr[31] = (0x088B0D48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088B209C;
L_088B0D48:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B0D54u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5792));
    goto L_088B0864;
L_088B0D54:
    ctx.gpr[31] = (0x088B0D5Cu);
    // nop
    goto L_088B08FC;
L_088B0D5C:
    ctx.gpr[31] = (0x088B0D64u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_088B08E8;
L_088B0D64:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B0D70u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 137u, 0x0893CAB0u>(ctx, &aot_mem) && ctx.pc == 0x088B0D70u) goto L_088B0D70;
    return;
L_088B0D70:
    ctx.gpr[31] = (0x088B0D78u);
    // nop
    goto L_088B0980;
L_088B0D78:
    ctx.gpr[31] = (0x088B0D80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 140u, 0x08834B8Cu>(ctx, &aot_mem) && ctx.pc == 0x088B0D80u) goto L_088B0D80;
    return;
L_088B0D80:
    ctx.gpr[31] = (0x088B0D88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 294u, 0x0883D760u>(ctx, &aot_mem) && ctx.pc == 0x088B0D88u) goto L_088B0D88;
    return;
L_088B0D88:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B0D94u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5800));
    goto L_088B0864;
L_088B0D94:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[31] = (0x088B0DC0u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_088B08FC;
L_088B0DC0:
    ctx.gpr[31] = (0x088B0DC8u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_088B08E8;
L_088B0DC8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B0DD8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 399u, 0x089D6A5Cu>(ctx, &aot_mem) && ctx.pc == 0x088B0DD8u) goto L_088B0DD8;
    return;
L_088B0DD8:
    ctx.gpr[31] = (0x088B0DE0u);
    // nop
    goto L_088B0980;
L_088B0DE0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B0DECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5808));
    goto L_088B0864;
L_088B0DEC:
    ctx.gpr[31] = (0x088B0DF4u);
    // nop
    goto L_088B08FC;
L_088B0DF4:
    ctx.gpr[31] = (0x088B0DFCu);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_088B08E8;
L_088B0DFC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B0E08u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 20u, 0x088481A8u>(ctx, &aot_mem) && ctx.pc == 0x088B0E08u) goto L_088B0E08;
    return;
L_088B0E08:
    ctx.gpr[31] = (0x088B0E10u);
    // nop
    goto L_088B0980;
L_088B0E10:
    ctx.gpr[31] = (0x088B0E18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 370u, 0x089C5878u>(ctx, &aot_mem) && ctx.pc == 0x088B0E18u) goto L_088B0E18;
    return;
L_088B0E18:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25476)));
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B0E34u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 109u, 0x088647E8u>(ctx, &aot_mem) && ctx.pc == 0x088B0E34u) goto L_088B0E34;
    return;
L_088B0E34:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25480)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B0E48u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 105u, 0x088647B0u>(ctx, &aot_mem) && ctx.pc == 0x088B0E48u) goto L_088B0E48;
    return;
L_088B0E48:
    ctx.gpr[31] = (0x088B0E50u);
    // nop
    goto L_088B09AC;
L_088B0E50:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B0E5Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5816));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x088B0E5Cu) goto L_088B0E5C;
    return;
L_088B0E5C:
    ctx.gpr[2] = (0u | 1u);
    goto L_088B0E60;
L_088B0E60:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0E74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B0E84u);
    ctx.gpr[4] = (0u | 360u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 58u, 0x08A8C498u>(ctx, &aot_mem) && ctx.pc == 0x088B0E84u) goto L_088B0E84;
    return;
L_088B0E84:
    ctx.gpr[31] = (0x088B0E8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088B0E8Cu) goto L_088B0E8C;
    return;
L_088B0E8C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2940)));
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2936), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088B0EA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2824));
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 212u, 0x088BCCC8u>(ctx, &aot_mem) && ctx.pc == 0x088B0EA0u) goto L_088B0EA0;
    return;
L_088B0EA0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0EAC:
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[2] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20288));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0EC8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0ED0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0ED8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (32785u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(6));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (32785u << 16u);
      if (branch_taken) {
          goto L_088B0F7C;
      }
      goto L_088B0EF8;
    }
L_088B0EF8:
    ctx.gpr[6] = (32770u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(403));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (32785u << 16u);
      if (branch_taken) {
          goto L_088B0F34;
      }
      goto L_088B0F0C;
    }
L_088B0F0C:
    ctx.gpr[6] = (32770u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(402));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1140;
      }
      goto L_088B0F20;
    }
L_088B0F20:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B0F2Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5844));
    goto L_088B06C0;
L_088B0F2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1150;
      }
      goto L_088B0F34;
    }
L_088B0F34:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1140;
      }
      goto L_088B0F40;
    }
L_088B0F40:
    ctx.gpr[4] = (32751u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088B1000;
      }
      goto L_088B0F54;
    }
L_088B0F54:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088B1014;
      }
      goto L_088B0F5C;
    }
L_088B0F5C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088B1028;
      }
      goto L_088B0F64;
    }
L_088B0F64:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B103C;
      }
      goto L_088B0F6C;
    }
L_088B0F6C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_088B1050;
      }
      goto L_088B0F74;
    }
L_088B0F74:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_088B1064;
      }
      goto L_088B0F7C;
    }
L_088B0F7C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(779));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (32785u << 16u);
      if (branch_taken) {
          goto L_088B0FC0;
      }
      goto L_088B0F8C;
    }
L_088B0F8C:
    ctx.gpr[6] = (32785u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(767));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (32751u << 16u);
      if (branch_taken) {
          goto L_088B1140;
      }
      goto L_088B0FA0;
    }
L_088B0FA0:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-768));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(8032)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0FC0:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(896));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (32785u << 16u);
      if (branch_taken) {
          goto L_088B1140;
      }
      goto L_088B0FD0;
    }
L_088B0FD0:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(907));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (32751u << 16u);
      if (branch_taken) {
          goto L_088B1140;
      }
      goto L_088B0FE0;
    }
L_088B0FE0:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-897));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(8080)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1000:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B100Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5892));
    goto L_088B06C0;
L_088B100C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1150;
      }
      goto L_088B1014;
    }
L_088B1014:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B1020u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5940));
    goto L_088B06C0;
L_088B1020:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1150;
      }
      goto L_088B1028;
    }
L_088B1028:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B1034u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6000));
    goto L_088B06C0;
L_088B1034:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1150;
      }
      goto L_088B103C;
    }
L_088B103C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B1048u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6040));
    goto L_088B06C0;
L_088B1048:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1150;
      }
      goto L_088B1050;
    }
L_088B1050:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B105Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6096));
    goto L_088B06C0;
L_088B105C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1150;
      }
      goto L_088B1064;
    }
L_088B1064:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B1070u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6196));
    goto L_088B06C0;
L_088B1070:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1150;
      }
      goto L_088B1078;
    }
L_088B1078:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B1084u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6248));
    goto L_088B06C0;
L_088B1084:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1150;
      }
      goto L_088B108C;
    }
L_088B108C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B1098u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6276));
    goto L_088B06C0;
L_088B1098:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1150;
      }
      goto L_088B10A0;
    }
L_088B10A0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B10ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6312));
    goto L_088B06C0;
L_088B10AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1150;
      }
      goto L_088B10B4;
    }
L_088B10B4:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B10C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6352));
    goto L_088B06C0;
L_088B10C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1150;
      }
      goto L_088B10C8;
    }
L_088B10C8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B10D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6400));
    goto L_088B06C0;
L_088B10D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1150;
      }
      goto L_088B10DC;
    }
L_088B10DC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B10E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6436));
    goto L_088B06C0;
L_088B10E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1150;
      }
      goto L_088B10F0;
    }
L_088B10F0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B10FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6476));
    goto L_088B06C0;
L_088B10FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1150;
      }
      goto L_088B1104;
    }
L_088B1104:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B1110u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6512));
    goto L_088B06C0;
L_088B1110:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1150;
      }
      goto L_088B1118;
    }
L_088B1118:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B1124u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6540));
    goto L_088B06C0;
L_088B1124:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1150;
      }
      goto L_088B112C;
    }
L_088B112C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B1138u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6584));
    goto L_088B06C0;
L_088B1138:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1150;
      }
      goto L_088B1140;
    }
L_088B1140:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B1150u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6624));
    goto L_088B06C0;
L_088B1150:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1150;
      }
      goto L_088B1158;
    }
L_088B1158:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1164:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16780)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[17] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (2227u << 16u);
      if (branch_taken) {
          goto L_088B11A8;
      }
      goto L_088B1194;
    }
L_088B1194:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x088B11A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x088B11A4u) goto L_088B11A4;
    return;
L_088B11A4:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16780), 0u);
    goto L_088B11A8;
L_088B11A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16784)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B11C8;
      }
      goto L_088B11B4;
    }
L_088B11B4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x088B11C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x088B11C4u) goto L_088B11C4;
    return;
L_088B11C4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16784), 0u);
    goto L_088B11C8;
L_088B11C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16792)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B11E8;
      }
      goto L_088B11D4;
    }
L_088B11D4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x088B11E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x088B11E4u) goto L_088B11E4;
    return;
L_088B11E4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16792), 0u);
    goto L_088B11E8;
L_088B11E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16788)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1208;
      }
      goto L_088B11F4;
    }
L_088B11F4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x088B1204u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1204u) goto L_088B1204;
    return;
L_088B1204:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16788), 0u);
    goto L_088B1208;
L_088B1208:
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
L_088B1224:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(5944)));
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[21] = (2227u << 16u);
    ctx.gpr[19] = (2233u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-4576));
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[17] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088B127C;
      }
      goto L_088B126C;
    }
L_088B126C:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26208));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(296), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088B127C;
L_088B127C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088B12A4;
      }
      goto L_088B1284;
    }
L_088B1284:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(16796)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B12A4;
      }
      goto L_088B1290;
    }
L_088B1290:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088B129Cu);
    ctx.gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 411u, 0x08AD9BE4u>(ctx, &aot_mem) && ctx.pc == 0x088B129Cu) goto L_088B129C;
    return;
L_088B129C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(16796)));
      if (branch_taken) {
          goto L_088B12B4;
      }
      goto L_088B12A4;
    }
L_088B12A4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088B12B0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 411u, 0x08AD9BE4u>(ctx, &aot_mem) && ctx.pc == 0x088B12B0u) goto L_088B12B0;
    return;
L_088B12B0:
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(16796)));
    goto L_088B12B4;
L_088B12B4:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B12DC;
      }
      goto L_088B12BC;
    }
L_088B12BC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B12C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6664));
    goto L_088B06C0;
L_088B12C8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(16726)));
      if (branch_taken) {
          goto L_088B12F4;
      }
      goto L_088B12DC;
    }
L_088B12DC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B12E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6692));
    goto L_088B06C0;
L_088B12E8:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(16726)));
    goto L_088B12F4;
L_088B12F4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1300;
      }
      goto L_088B12FC;
    }
L_088B12FC:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-25519), static_cast<std::uint8_t>(0u));
    goto L_088B1300;
L_088B1300:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-25519)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088B1324;
      }
      goto L_088B130C;
    }
L_088B130C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[20];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088B1324;
      }
      goto L_088B1314;
    }
L_088B1314:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-28471), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_088B1324;
L_088B1324:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6720));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[31] = (0x088B1338u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16760)));
    goto L_088B06C0;
L_088B1338:
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
L_088B135C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B137C;
      }
      goto L_088B1374;
    }
L_088B1374:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_088B1380;
      }
      goto L_088B137C;
    }
L_088B137C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_088B1380;
L_088B1380:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16796), static_cast<std::uint8_t>(0u));
    goto L_088B1388;
L_088B1388:
    ctx.gpr[31] = (0x088B1390u);
    // nop
    ctx.pc = 0x08B0BBBCu;
    return;
L_088B1390:
    ctx.gpr[31] = (0x088B1398u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088B2870;
L_088B1398:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_088B139C;
L_088B139C:
    ctx.gpr[31] = (0x088B13A4u);
    ctx.gpr[4] = (0u | 1u);
    ctx.pc = 0x08B0B90Cu;
    return;
L_088B13A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B13BC;
      }
      goto L_088B13AC;
    }
L_088B13AC:
    ctx.gpr[31] = (0x088B13B4u);
    ctx.gpr[4] = (0u | 100u);
    ctx.pc = 0x08B0BBF4u;
    return;
L_088B13B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B139C;
      }
      goto L_088B13BC;
    }
L_088B13BC:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B1388;
      }
      goto L_088B13C4;
    }
L_088B13C4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16760), ctx.gpr[4]);
    ctx.gpr[31] = (0x088B13D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088B1224;
L_088B13D8:
    ctx.gpr[31] = (0x088B13E0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BBA4u;
    return;
L_088B13E0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B13F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16760)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088B1440;
      }
      goto L_088B141C;
    }
L_088B141C:
    ctx.gpr[18] = (2233u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-26208));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(297)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5944), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B1454;
      }
      goto L_088B1438;
    }
L_088B1438:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B146C;
      }
      goto L_088B1440;
    }
L_088B1440:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B144Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6764));
    goto L_088B06C0;
L_088B144C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1538;
      }
      goto L_088B1454;
    }
L_088B1454:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088B1460u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 142u, 0x089D54BCu>(ctx, &aot_mem) && ctx.pc == 0x088B1460u) goto L_088B1460;
    return;
L_088B1460:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(297)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B1454;
      }
      goto L_088B146C;
    }
L_088B146C:
    ctx.gpr[31] = (0x088B1474u);
    ctx.gpr[4] = (0u | 10u);
    ctx.pc = 0x08B0BBF4u;
    return;
L_088B1474:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27356), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6828));
    ctx.gpr[5] = (2187u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4956));
    ctx.gpr[6] = (0u | 20u);
    ctx.gpr[7] = (0u | 8192u);
    ctx.gpr[8] = (0u | 16384u);
    ctx.gpr[31] = (0x088B14ACu);
    ctx.gpr[9] = (0u | 0u);
    ctx.pc = 0x08B0BB64u;
    return;
L_088B14AC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16760), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16760)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088B14E8;
      }
      goto L_088B14BC;
    }
L_088B14BC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1500;
      }
      goto L_088B14C4;
    }
L_088B14C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088B14D0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_088B2C60;
L_088B14D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16760)));
    ctx.gpr[5] = (0u | 1200u);
    ctx.gpr[31] = (0x088B14E0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B0BB1Cu;
    return;
L_088B14E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088B1520;
      }
      goto L_088B14E8;
    }
L_088B14E8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6840));
    ctx.gpr[31] = (0x088B14F8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16760)));
    goto L_088B06C0;
L_088B14F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1538;
      }
      goto L_088B1500;
    }
L_088B1500:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x088B150Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_088B2C60;
L_088B150C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16760)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088B151Cu);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B0BB1Cu;
    return;
L_088B151C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_088B1520;
L_088B1520:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088B1538;
      }
      goto L_088B1528;
    }
L_088B1528:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B1538u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6880));
    goto L_088B06C0;
L_088B1538:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1550:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B1560u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_088B13F4;
L_088B1560:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16724), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16725), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16726), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1588:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B1598u);
    ctx.gpr[4] = (0u | 0u);
    goto L_088B13F4;
L_088B1598:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16724), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16725), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16726), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B15C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(9544), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B15DCu);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(9544));
    goto L_088B13F4;
L_088B15DC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16724), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16725), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16726), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1604:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(10744), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[6] + static_cast<std::uint32_t>(10744));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B1630u);
    ctx.gpr[6] = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x088B1630u) goto L_088B1630;
    return;
L_088B1630:
    ctx.gpr[31] = (0x088B1638u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088B13F4;
L_088B1638:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16724), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16725), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16726), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1664:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (0u | 4u);
    ctx.gpr[8] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(11944), ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(11944));
    ctx.gpr[8] = (16384u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[8] = (1u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(7280));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B16A4u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    goto L_088B13F4;
L_088B16A4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16724), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16725), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16726), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B16CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[19] = (2233u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-26208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(297)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[21] = (2227u << 16u);
    ctx.gpr[22] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[23] = (2227u << 16u);
      if (branch_taken) {
          goto L_088B172C;
      }
      goto L_088B1720;
    }
L_088B1720:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088B172Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 142u, 0x089D54BCu>(ctx, &aot_mem) && ctx.pc == 0x088B172Cu) goto L_088B172C;
    return;
L_088B172C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x088B1744u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6920));
    goto L_088B06C0;
L_088B1744:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B1754u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_088B1664;
L_088B1754:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (2229u << 16u);
    goto L_088B1764;
L_088B1764:
    ctx.gpr[31] = (0x088B176Cu);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 519u, 0x08AB2E34u>(ctx, &aot_mem) && ctx.pc == 0x088B176Cu) goto L_088B176C;
    return;
L_088B176C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1784;
      }
      goto L_088B1774;
    }
L_088B1774:
    ctx.gpr[31] = (0x088B177Cu);
    ctx.gpr[4] = (0u | 10u);
    ctx.pc = 0x08B0BBF4u;
    return;
L_088B177C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(27356), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_088B1764;
      }
      goto L_088B1784;
    }
L_088B1784:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B1790u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6952));
    goto L_088B06C0;
L_088B1790:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16780)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B17A8;
      }
      goto L_088B179C;
    }
L_088B179C:
    ctx.gpr[31] = (0x088B17A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x088B17A4u) goto L_088B17A4;
    return;
L_088B17A4:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16780), 0u);
    goto L_088B17A8;
L_088B17A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16784)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B17C0;
      }
      goto L_088B17B4;
    }
L_088B17B4:
    ctx.gpr[31] = (0x088B17BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x088B17BCu) goto L_088B17BC;
    return;
L_088B17BC:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(16784), 0u);
    goto L_088B17C0;
L_088B17C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16792)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B17D8;
      }
      goto L_088B17CC;
    }
L_088B17CC:
    ctx.gpr[31] = (0x088B17D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x088B17D4u) goto L_088B17D4;
    return;
L_088B17D4:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(16792), 0u);
    goto L_088B17D8;
L_088B17D8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B17EC;
      }
      goto L_088B17E0;
    }
L_088B17E0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088B17ECu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 127u, 0x089D53ACu>(ctx, &aot_mem) && ctx.pc == 0x088B17ECu) goto L_088B17EC;
    return;
L_088B17EC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B181C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (2233u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-26208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(297)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1854;
      }
      goto L_088B1848;
    }
L_088B1848:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088B1854u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 142u, 0x089D54BCu>(ctx, &aot_mem) && ctx.pc == 0x088B1854u) goto L_088B1854;
    return;
L_088B1854:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(8944));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B186Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6980));
    goto L_088B06C0;
L_088B186C:
    ctx.gpr[31] = (0x088B1874u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088B1604;
L_088B1874:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (2229u << 16u);
    goto L_088B1884;
L_088B1884:
    ctx.gpr[31] = (0x088B188Cu);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 519u, 0x08AB2E34u>(ctx, &aot_mem) && ctx.pc == 0x088B188Cu) goto L_088B188C;
    return;
L_088B188C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B18A4;
      }
      goto L_088B1894;
    }
L_088B1894:
    ctx.gpr[31] = (0x088B189Cu);
    ctx.gpr[4] = (0u | 10u);
    ctx.pc = 0x08B0BBF4u;
    return;
L_088B189C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(27356), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_088B1884;
      }
      goto L_088B18A4;
    }
L_088B18A4:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B18B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6952));
    goto L_088B06C0;
L_088B18B0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B18C4;
      }
      goto L_088B18B8;
    }
L_088B18B8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088B18C4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 127u, 0x089D53ACu>(ctx, &aot_mem) && ctx.pc == 0x088B18C4u) goto L_088B18C4;
    return;
L_088B18C4:
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_088B18E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-768));
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(744), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(748), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(752), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(756), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(760), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B1908u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7016));
    goto L_088B06C0;
L_088B1908:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B1914u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7036));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x088B1914u) goto L_088B1914;
    return;
L_088B1914:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088B1924u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7048));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x088B1924u) goto L_088B1924;
    return;
L_088B1924:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20624)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088B193C;
      }
      goto L_088B1934;
    }
L_088B1934:
    ctx.gpr[31] = (0x088B193Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x088B193Cu) goto L_088B193C;
    return;
L_088B193C:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[31] = (0x088B1948u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20624)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 14u, 0x088380F8u>(ctx, &aot_mem) && ctx.pc == 0x088B1948u) goto L_088B1948;
    return;
L_088B1948:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20624)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088B1960;
      }
      goto L_088B1954;
    }
L_088B1954:
    ctx.gpr[31] = (0x088B195Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x088B195Cu) goto L_088B195C;
    return;
L_088B195C:
    ctx.gpr[4] = (2230u << 16u);
    goto L_088B1960;
L_088B1960:
    ctx.gpr[31] = (0x088B1968u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20624)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 59u, 0x088383B8u>(ctx, &aot_mem) && ctx.pc == 0x088B1968u) goto L_088B1968;
    return;
L_088B1968:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 20u);
    ctx.gpr[31] = (0x088B197Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8944));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x088B197Cu) goto L_088B197C;
    return;
L_088B197C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(296));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088B198Cu);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x088B198Cu) goto L_088B198C;
    return;
L_088B198C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088B199Cu);
    ctx.gpr[6] = (0u | 352u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x088B199Cu) goto L_088B199C;
    return;
L_088B199C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B19A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6960));
    ctx.pc = 0x08B0BCF4u;
    return;
L_088B19A8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_088B1B00;
      }
      goto L_088B19B4;
    }
L_088B19B4:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.gpr[31] = (0x088B19C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B0BD04u;
    return;
L_088B19C0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088B1AD4;
      }
      goto L_088B19C8;
    }
L_088B19C8:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(392));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088B19DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7052));
    goto L_088B06C0;
L_088B19DC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088B19F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7036));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 538u, 0x08AEDEDCu>(ctx, &aot_mem) && ctx.pc == 0x088B19F0u) goto L_088B19F0;
    return;
L_088B19F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_088B1AC0;
      }
      goto L_088B19F8;
    }
L_088B19F8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(392));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B1A0Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7048));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 538u, 0x08AEDEDCu>(ctx, &aot_mem) && ctx.pc == 0x088B1A0Cu) goto L_088B1A0C;
    return;
L_088B1A0C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B1AC0;
      }
      goto L_088B1A14;
    }
L_088B1A14:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(392));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7064));
    ctx.gpr[31] = (0x088B1A34u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(6960));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x088B1A34u) goto L_088B1A34;
    return;
L_088B1A34:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    ctx.gpr[31] = (0x088B1A40u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B0BCE4u;
    return;
L_088B1A40:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B1AC0;
      }
      goto L_088B1A48;
    }
L_088B1A48:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(708)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(706)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(704)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(710)));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(712)));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(714)));
    ctx.gpr[31] = (0x088B1A6Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7072));
    goto L_088B06C0;
L_088B1A6C:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    ctx.gpr[31] = (0x088B1A7Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B0B5F4u;
    return;
L_088B1A7C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(296));
    ctx.gpr[31] = (0x088B1A88u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B0B5FCu;
    return;
L_088B1A88:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088B1AC0;
      }
      goto L_088B1A90;
    }
L_088B1A90:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[18]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(392));
    ctx.gpr[31] = (0x088B1AA4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8944));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x088B1AA4u) goto L_088B1AA4;
    return;
L_088B1AA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[4]);
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[5]);
    ctx.gpr[31] = (0x088B1AC0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7112));
    goto L_088B06C0;
L_088B1AC0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.gpr[31] = (0x088B1ACCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B0BD04u;
    return;
L_088B1ACC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_088B19C8;
      }
      goto L_088B1AD4;
    }
L_088B1AD4:
    ctx.gpr[31] = (0x088B1ADCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B0BD14u;
    return;
L_088B1ADC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x088B1AE8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8944));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x088B1AE8u) goto L_088B1AE8;
    return;
L_088B1AE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1AF8;
      }
      goto L_088B1AF0;
    }
L_088B1AF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088B1B04;
      }
      goto L_088B1AF8;
    }
L_088B1AF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B1B04;
      }
      goto L_088B1B00;
    }
L_088B1B00:
    ctx.gpr[2] = (0u | 0u);
    goto L_088B1B04;
L_088B1B04:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(744)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(748)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(752)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(756)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(760)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(768));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1B20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-784));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(768), ctx.gpr[30]);
    ctx.gpr[30] = (2225u << 16u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(7036));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(736), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(740), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(744), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(748), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(752), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(756), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(760), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(764), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(772), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B1B5Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x088B1B5Cu) goto L_088B1B5C;
    return;
L_088B1B5C:
    ctx.gpr[22] = (2225u << 16u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(7048));
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088B1B70u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x088B1B70u) goto L_088B1B70;
    return;
L_088B1B70:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088B1B84u);
    ctx.gpr[6] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x088B1B84u) goto L_088B1B84;
    return;
L_088B1B84:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(296));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088B1B98u);
    ctx.gpr[6] = (0u | 352u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x088B1B98u) goto L_088B1B98;
    return;
L_088B1B98:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B1BA4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6960));
    ctx.pc = 0x08B0BCF4u;
    return;
L_088B1BA4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_088B1C40;
      }
      goto L_088B1BB0;
    }
L_088B1BB0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088B1BBCu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.pc = 0x08B0BD04u;
    return;
L_088B1BBC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.gpr[16] = (ctx.gpr[29] + ctx.gpr[23]);
      if (branch_taken) {
          goto L_088B1C38;
      }
      goto L_088B1BC4;
    }
L_088B1BC4:
    ctx.gpr[18] = (2225u << 16u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(384));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(7052));
    goto L_088B1BD4;
L_088B1BD4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088B1BE0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_088B06C0;
L_088B1BE0:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B1BF0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 538u, 0x08AEDEDCu>(ctx, &aot_mem) && ctx.pc == 0x088B1BF0u) goto L_088B1BF0;
    return;
L_088B1BF0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_088B1C0C;
      }
      goto L_088B1BF8;
    }
L_088B1BF8:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B1C04u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 538u, 0x08AEDEDCu>(ctx, &aot_mem) && ctx.pc == 0x088B1C04u) goto L_088B1C04;
    return;
L_088B1C04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1C28;
      }
      goto L_088B1C0C;
    }
L_088B1C0C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088B1C18u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.pc = 0x08B0BD04u;
    return;
L_088B1C18:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_088B1BD4;
      }
      goto L_088B1C20;
    }
L_088B1C20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1C38;
      }
      goto L_088B1C28;
    }
L_088B1C28:
    ctx.gpr[31] = (0x088B1C30u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B0BD14u;
    return;
L_088B1C30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088B1C44;
      }
      goto L_088B1C38;
    }
L_088B1C38:
    ctx.gpr[31] = (0x088B1C40u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B0BD14u;
    return;
L_088B1C40:
    ctx.gpr[2] = (0u | 0u);
    goto L_088B1C44;
L_088B1C44:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(736)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(740)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(744)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(748)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(752)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(756)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(760)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(764)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(768)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(772)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(784));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1C74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(8964));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 580u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B1CA8u);
    ctx.gpr[6] = (0u | 580u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x088B1CA8u) goto L_088B1CA8;
    return;
L_088B1CA8:
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x088B1CBCu);
    ctx.gpr[4] = (0u | 8u);
    ctx.pc = 0x08B0B794u;
    return;
L_088B1CBC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 580u);
    ctx.gpr[31] = (0x088B1CD0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6076));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x088B1CD0u) goto L_088B1CD0;
    return;
L_088B1CD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8964), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    ctx.gpr[4] = (0u | 17u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 19u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 18u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
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
L_088B1D1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B1D30u);
    ctx.gpr[16] = (0u | 1u);
    ctx.pc = 0x08B0B78Cu;
    return;
L_088B1D30:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1E08;
      }
      goto L_088B1D40;
    }
L_088B1D40:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088B1DF8;
      }
      goto L_088B1D48;
    }
L_088B1D48:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088B1D68;
      }
      goto L_088B1D50;
    }
L_088B1D50:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B1D8C;
      }
      goto L_088B1D58;
    }
L_088B1D58:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_088B1DE8;
      }
      goto L_088B1D60;
    }
L_088B1D60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1E24;
      }
      goto L_088B1D68;
    }
L_088B1D68:
    ctx.gpr[31] = (0x088B1D70u);
    ctx.gpr[4] = (0u | 1u);
    ctx.pc = 0x08B0B77Cu;
    return;
L_088B1D70:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1D84;
      }
      goto L_088B1D7C;
    }
L_088B1D7C:
    ctx.gpr[31] = (0x088B1D84u);
    // nop
    goto L_088B0ED8;
L_088B1D84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1E24;
      }
      goto L_088B1D8C;
    }
L_088B1D8C:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(16796), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6076));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (0u | 2u);
      if (branch_taken) {
          goto L_088B1DBC;
      }
      goto L_088B1DA8;
    }
L_088B1DA8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088B1DC4;
      }
      goto L_088B1DB0;
    }
L_088B1DB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1484)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B1DC4;
      }
      goto L_088B1DBC;
    }
L_088B1DBC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(16796), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088B1DC4;
L_088B1DC4:
    ctx.gpr[31] = (0x088B1DCCu);
    // nop
    ctx.pc = 0x08B0B76Cu;
    return;
L_088B1DCC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1DE0;
      }
      goto L_088B1DD8;
    }
L_088B1DD8:
    ctx.gpr[31] = (0x088B1DE0u);
    // nop
    goto L_088B0ED8;
L_088B1DE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1E24;
      }
      goto L_088B1DE8;
    }
L_088B1DE8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[16] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6888), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B1E24;
      }
      goto L_088B1DF8;
    }
L_088B1DF8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[16] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6888), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B1E24;
      }
      goto L_088B1E08;
    }
L_088B1E08:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B1E1Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7124));
    goto L_088B06C0;
L_088B1E1C:
    ctx.gpr[31] = (0x088B1E24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_088B0ED8;
L_088B1E24:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088B1E30u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27212)));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 648u, 0x08AB3980u>(ctx, &aot_mem) && ctx.pc == 0x088B1E30u) goto L_088B1E30;
    return;
L_088B1E30:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1E44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5944)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1E6C;
      }
      goto L_088B1E5C;
    }
L_088B1E5C:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26208));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(296), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088B1E6C;
L_088B1E6C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6720));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16760)));
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-4576));
    ctx.gpr[31] = (0x088B1E8Cu);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    goto L_088B06C0;
L_088B1E8C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1E98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16796), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    goto L_088B1EAC;
L_088B1EAC:
    ctx.gpr[31] = (0x088B1EB4u);
    // nop
    ctx.pc = 0x08B0BBBCu;
    return;
L_088B1EB4:
    ctx.gpr[31] = (0x088B1EBCu);
    // nop
    goto L_088B1D1C;
L_088B1EBC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_088B1EC0;
L_088B1EC0:
    ctx.gpr[31] = (0x088B1EC8u);
    ctx.gpr[4] = (0u | 1u);
    ctx.pc = 0x08B0B90Cu;
    return;
L_088B1EC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1EE0;
      }
      goto L_088B1ED0;
    }
L_088B1ED0:
    ctx.gpr[31] = (0x088B1ED8u);
    ctx.gpr[4] = (0u | 100u);
    ctx.pc = 0x08B0BBF4u;
    return;
L_088B1ED8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1EC0;
      }
      goto L_088B1EE0;
    }
L_088B1EE0:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B1EAC;
      }
      goto L_088B1EE8;
    }
L_088B1EE8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16760), ctx.gpr[4]);
    ctx.gpr[31] = (0x088B1EFCu);
    // nop
    goto L_088B1E44;
L_088B1EFC:
    ctx.gpr[31] = (0x088B1F04u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BBA4u;
    return;
L_088B1F04:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1F14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16760)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088B1F68;
      }
      goto L_088B1F44;
    }
L_088B1F44:
    ctx.gpr[19] = (2233u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-26208));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(297)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5944), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B1F7C;
      }
      goto L_088B1F60;
    }
L_088B1F60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1F94;
      }
      goto L_088B1F68;
    }
L_088B1F68:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B1F74u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6764));
    goto L_088B06C0;
L_088B1F74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B2080;
      }
      goto L_088B1F7C;
    }
L_088B1F7C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088B1F88u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 142u, 0x089D54BCu>(ctx, &aot_mem) && ctx.pc == 0x088B1F88u) goto L_088B1F88;
    return;
L_088B1F88:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(297)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B1F7C;
      }
      goto L_088B1F94;
    }
L_088B1F94:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7172));
    ctx.gpr[5] = (2187u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7832));
    ctx.gpr[6] = (0u | 20u);
    ctx.gpr[7] = (0u | 8192u);
    ctx.gpr[8] = (0u | 16384u);
    ctx.gpr[31] = (0x088B1FB8u);
    ctx.gpr[9] = (0u | 0u);
    ctx.pc = 0x08B0BB64u;
    return;
L_088B1FB8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16760), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16760)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088B1FEC;
      }
      goto L_088B1FC8;
    }
L_088B1FC8:
    ctx.gpr[31] = (0x088B1FD0u);
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_088B1C74;
L_088B1FD0:
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(8964));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B2004;
      }
      goto L_088B1FE4;
    }
L_088B1FE4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(572), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B200C;
      }
      goto L_088B1FEC;
    }
L_088B1FEC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6840));
    ctx.gpr[31] = (0x088B1FFCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16760)));
    goto L_088B06C0;
L_088B1FFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B2080;
      }
      goto L_088B2004;
    }
L_088B2004:
    ctx.gpr[4] = (0u | 273u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(572), ctx.gpr[4]);
    goto L_088B200C;
L_088B200C:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(60));
    ctx.gpr[31] = (0x088B2018u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x088B2018u) goto L_088B2018;
    return;
L_088B2018:
    ctx.gpr[31] = (0x088B2020u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08B0B74Cu;
    return;
L_088B2020:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088B203C;
      }
      goto L_088B202C;
    }
L_088B202C:
    ctx.gpr[31] = (0x088B2034u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088B0ED8;
L_088B2034:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2048;
      }
      goto L_088B203C;
    }
L_088B203C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B2048u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7180));
    goto L_088B06C0;
L_088B2048:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16760)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088B2058u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B0BB1Cu;
    return;
L_088B2058:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088B207C;
      }
      goto L_088B2064;
    }
L_088B2064:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B2074u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6880));
    goto L_088B06C0;
L_088B2074:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B2080;
      }
      goto L_088B207C;
    }
L_088B207C:
    ctx.gpr[2] = (0u | 1u);
    goto L_088B2080;
L_088B2080:
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
L_088B209C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7060), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29200), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(27584), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7848), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7840), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30948), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7820), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-7036), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(58))))));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-7034), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(60))))));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-6904), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6940), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6900), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22912)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(11232), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22912)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(11236), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22912)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(11240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25496), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-25526), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(109)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25492), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-25524), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(22240), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-25476), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25480), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128))))));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-25471), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(129)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25472), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B221Cu);
    ctx.gpr[17] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x088B221Cu) goto L_088B221C;
    return;
L_088B221C:
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(130), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(174)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25651), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(175)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25652), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(177)));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16177), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25650), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(178)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_088B22C8;
      }
      goto L_088B2260;
    }
L_088B2260:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6896), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6896));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x088B22A4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 826u, 0x08967F38u>(ctx, &aot_mem) && ctx.pc == 0x088B22A4u) goto L_088B22A4;
    return;
L_088B22A4:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25500), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20624)));
      if (branch_taken) {
          goto L_088B22C0;
      }
      goto L_088B22B4;
    }
L_088B22B4:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-25504), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_088B22C0;
L_088B22C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(130)));
      if (branch_taken) {
          goto L_088B22D8;
      }
      goto L_088B22C8;
    }
L_088B22C8:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25504), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(130)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20624)));
    goto L_088B22D8;
L_088B22D8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2328;
      }
      goto L_088B22E0;
    }
L_088B22E0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B22F4;
      }
      goto L_088B22E8;
    }
L_088B22E8:
    ctx.gpr[31] = (0x088B22F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x088B22F0u) goto L_088B22F0;
    return;
L_088B22F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20624)));
    goto L_088B22F4;
L_088B22F4:
    ctx.gpr[31] = (0x088B22FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 157u, 0x08838A28u>(ctx, &aot_mem) && ctx.pc == 0x088B22FCu) goto L_088B22FC;
    return;
L_088B22FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20624)));
      if (branch_taken) {
          goto L_088B2328;
      }
      goto L_088B2304;
    }
L_088B2304:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B2318;
      }
      goto L_088B230C;
    }
L_088B230C:
    ctx.gpr[31] = (0x088B2314u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x088B2314u) goto L_088B2314;
    return;
L_088B2314:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20624)));
    goto L_088B2318;
L_088B2318:
    ctx.gpr[31] = (0x088B2320u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 38u, 0x0883822Cu>(ctx, &aot_mem) && ctx.pc == 0x088B2320u) goto L_088B2320;
    return;
L_088B2320:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088B2348;
      }
      goto L_088B2328;
    }
L_088B2328:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B233C;
      }
      goto L_088B2330;
    }
L_088B2330:
    ctx.gpr[31] = (0x088B2338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x088B2338u) goto L_088B2338;
    return;
L_088B2338:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20624)));
    goto L_088B233C;
L_088B233C:
    ctx.gpr[31] = (0x088B2344u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 38u, 0x0883822Cu>(ctx, &aot_mem) && ctx.pc == 0x088B2344u) goto L_088B2344;
    return;
L_088B2344:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_088B2348;
L_088B2348:
    ctx.gpr[31] = (0x088B2350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 54u, 0x0883C330u>(ctx, &aot_mem) && ctx.pc == 0x088B2350u) goto L_088B2350;
    return;
L_088B2350:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x088B235Cu);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(29)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 57u, 0x0883C3B4u>(ctx, &aot_mem) && ctx.pc == 0x088B235Cu) goto L_088B235C;
    return;
L_088B235C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B2370:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-752));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[5] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4912));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(712), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[7] + static_cast<std::uint32_t>(-32768));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(716), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] & ctx.gpr[4]);
    ctx.gpr[4] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(720), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(724), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(728), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(732), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(736), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(740), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(744), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(748), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B23DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32768));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 738u, 0x089C70F0u>(ctx, &aot_mem) && ctx.pc == 0x088B23DCu) goto L_088B23DC;
    return;
L_088B23DC:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B23ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x088B23ECu) goto L_088B23EC;
    return;
L_088B23EC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088B23F8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_088B06EC;
L_088B23F8:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x088B2404u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088B0A18;
L_088B2404:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 188u);
    ctx.gpr[31] = (0x088B2418u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5752));
    goto L_088B077C;
L_088B2418:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x088B2424u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 468u, 0x088821B8u>(ctx, &aot_mem) && ctx.pc == 0x088B2424u) goto L_088B2424;
    return;
L_088B2424:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x088B2434u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7224));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x088B2434u) goto L_088B2434;
    return;
L_088B2434:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B2448u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5760));
    goto L_088B077C;
L_088B2448:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[31] = (0x088B2454u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 122u, 0x0893C8B8u>(ctx, &aot_mem) && ctx.pc == 0x088B2454u) goto L_088B2454;
    return;
L_088B2454:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x088B2464u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7244));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x088B2464u) goto L_088B2464;
    return;
L_088B2464:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B2478u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5792));
    goto L_088B077C;
L_088B2478:
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[18] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[31] = (0x088B24ACu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 379u, 0x089D6690u>(ctx, &aot_mem) && ctx.pc == 0x088B24ACu) goto L_088B24AC;
    return;
L_088B24AC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x088B24BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7264));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x088B24BCu) goto L_088B24BC;
    return;
L_088B24BC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B24D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7288));
    goto L_088B077C;
L_088B24D0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.gpr[31] = (0x088B24DCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 890u, 0x0884746Cu>(ctx, &aot_mem) && ctx.pc == 0x088B24DCu) goto L_088B24DC;
    return;
L_088B24DC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x088B24ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7296));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x088B24ECu) goto L_088B24EC;
    return;
L_088B24EC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B2500u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7316));
    goto L_088B077C;
L_088B2500:
    ctx.gpr[22] = (2230u << 16u);
    ctx.gpr[31] = (0x088B250Cu);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(13144), 0u);
    goto L_088B0758;
L_088B250C:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(13144));
    ctx.gpr[31] = (0x088B2518u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_088B0764;
L_088B2518:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[21] = (2230u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(252));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-7272));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(572));
      if (branch_taken) {
          goto L_088B2570;
      }
      goto L_088B2548;
    }
L_088B2548:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088B2554u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088B2554u) goto L_088B2554;
    return;
L_088B2554:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B256C;
      }
      goto L_088B2560;
    }
L_088B2560:
    ctx.gpr[31] = (0x088B2568u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x088B2568u) goto L_088B2568;
    return;
L_088B2568:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_088B256C;
L_088B256C:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    goto L_088B2570;
L_088B2570:
    ctx.gpr[6] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088B2584u);
    ctx.gpr[7] = (0u | 127u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B2584u) goto L_088B2584;
    return;
L_088B2584:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7644)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(708), ctx.gpr[4]);
    ctx.gpr[31] = (0x088B25B8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(704), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 177u, 0x08844EE8u>(ctx, &aot_mem) && ctx.pc == 0x088B25B8u) goto L_088B25B8;
    return;
L_088B25B8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(700), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088B25E0;
      }
      goto L_088B25D0;
    }
L_088B25D0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088B26F8;
      }
      goto L_088B25D8;
    }
L_088B25D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B25FC;
      }
      goto L_088B25E0;
    }
L_088B25E0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088B2650;
      }
      goto L_088B25EC;
    }
L_088B25EC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B26A4;
      }
      goto L_088B25F4;
    }
L_088B25F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B26F8;
      }
      goto L_088B25FC;
    }
L_088B25FC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_088B2634;
      }
      goto L_088B2608;
    }
L_088B2608:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088B2614u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088B2614u) goto L_088B2614;
    return;
L_088B2614:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B262C;
      }
      goto L_088B2620;
    }
L_088B2620:
    ctx.gpr[31] = (0x088B2628u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x088B2628u) goto L_088B2628;
    return;
L_088B2628:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_088B262C;
L_088B262C:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_088B2634;
L_088B2634:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x088B2648u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7324));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B2648u) goto L_088B2648;
    return;
L_088B2648:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24700)));
      if (branch_taken) {
          goto L_088B2714;
      }
      goto L_088B2650;
    }
L_088B2650:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_088B2688;
      }
      goto L_088B265C;
    }
L_088B265C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088B2668u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088B2668u) goto L_088B2668;
    return;
L_088B2668:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2680;
      }
      goto L_088B2674;
    }
L_088B2674:
    ctx.gpr[31] = (0x088B267Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x088B267Cu) goto L_088B267C;
    return;
L_088B267C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_088B2680;
L_088B2680:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_088B2688;
L_088B2688:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x088B269Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7332));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B269Cu) goto L_088B269C;
    return;
L_088B269C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24700)));
      if (branch_taken) {
          goto L_088B2714;
      }
      goto L_088B26A4;
    }
L_088B26A4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_088B26DC;
      }
      goto L_088B26B0;
    }
L_088B26B0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088B26BCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088B26BCu) goto L_088B26BC;
    return;
L_088B26BC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B26D4;
      }
      goto L_088B26C8;
    }
L_088B26C8:
    ctx.gpr[31] = (0x088B26D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x088B26D0u) goto L_088B26D0;
    return;
L_088B26D0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_088B26D4;
L_088B26D4:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_088B26DC;
L_088B26DC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x088B26F0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7340));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B26F0u) goto L_088B26F0;
    return;
L_088B26F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24700)));
      if (branch_taken) {
          goto L_088B2714;
      }
      goto L_088B26F8;
    }
L_088B26F8:
    ctx.gpr[4] = (28267u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28245));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (110u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30575));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24700)));
    goto L_088B2714;
L_088B2714:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(508));
      if (branch_taken) {
          goto L_088B2748;
      }
      goto L_088B271C;
    }
L_088B271C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088B2728u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088B2728u) goto L_088B2728;
    return;
L_088B2728:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2740;
      }
      goto L_088B2734;
    }
L_088B2734:
    ctx.gpr[31] = (0x088B273Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x088B273Cu) goto L_088B273C;
    return;
L_088B273C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_088B2740;
L_088B2740:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(508));
    goto L_088B2748;
L_088B2748:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 63u);
    ctx.gpr[31] = (0x088B2760u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7348));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B2760u) goto L_088B2760;
    return;
L_088B2760:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_088B2798;
      }
      goto L_088B276C;
    }
L_088B276C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088B2778u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088B2778u) goto L_088B2778;
    return;
L_088B2778:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2790;
      }
      goto L_088B2784;
    }
L_088B2784:
    ctx.gpr[31] = (0x088B278Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x088B278Cu) goto L_088B278C;
    return;
L_088B278C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_088B2790;
L_088B2790:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_088B2798;
L_088B2798:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (0u | 63u);
    ctx.gpr[31] = (0x088B27ACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7356));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B27ACu) goto L_088B27AC;
    return;
L_088B27AC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(636));
      if (branch_taken) {
          goto L_088B27E4;
      }
      goto L_088B27B8;
    }
L_088B27B8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088B27C4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088B27C4u) goto L_088B27C4;
    return;
L_088B27C4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B27DC;
      }
      goto L_088B27D0;
    }
L_088B27D0:
    ctx.gpr[31] = (0x088B27D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x088B27D8u) goto L_088B27D8;
    return;
L_088B27D8:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_088B27DC;
L_088B27DC:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(636));
    goto L_088B27E4;
L_088B27E4:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 63u);
    ctx.gpr[31] = (0x088B27FCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7364));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B27FCu) goto L_088B27FC;
    return;
L_088B27FC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(704)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(708)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(700)));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(176));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[30] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[31] = (0x088B282Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7372));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x088B282Cu) goto L_088B282C;
    return;
L_088B282C:
    ctx.gpr[31] = (0x088B2834u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_088B1550;
L_088B2834:
    ctx.gpr[31] = (0x088B283Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A96494u>(ctx, &aot_mem) && ctx.pc == 0x088B283Cu) goto L_088B283C;
    return;
L_088B283C:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(712)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(716)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(720)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(724)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(728)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(732)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(736)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(740)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(744)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(748)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(752));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B2870:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B288Cu);
    ctx.gpr[16] = (0u | 1u);
    ctx.pc = 0x08B0B774u;
    return;
L_088B288C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2C20;
      }
      goto L_088B289C;
    }
L_088B289C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088B2C00;
      }
      goto L_088B28A4;
    }
L_088B28A4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088B28D4;
      }
      goto L_088B28AC;
    }
L_088B28AC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B290C;
      }
      goto L_088B28B4;
    }
L_088B28B4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_088B2BE0;
      }
      goto L_088B28BC;
    }
L_088B28BC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B28CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7400));
    goto L_088B06C0;
L_088B28CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2C3C;
      }
      goto L_088B28D4;
    }
L_088B28D4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088B28E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7440));
    goto L_088B06C0;
L_088B28E8:
    ctx.gpr[31] = (0x088B28F0u);
    ctx.gpr[4] = (0u | 2u);
    ctx.pc = 0x08B0B79Cu;
    return;
L_088B28F0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2904;
      }
      goto L_088B28FC;
    }
L_088B28FC:
    ctx.gpr[31] = (0x088B2904u);
    // nop
    goto L_088B0ED8;
L_088B2904:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2C3C;
      }
      goto L_088B290C;
    }
L_088B290C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B291Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7484));
    goto L_088B06C0;
L_088B291C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16796), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6076));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088B295C;
      }
      goto L_088B2938;
    }
L_088B2938:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6076));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088B2968;
      }
      goto L_088B294C;
    }
L_088B294C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6076));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1484)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B2968;
      }
      goto L_088B295C;
    }
L_088B295C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16796), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088B2968;
L_088B2968:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25519), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2BBC;
      }
      goto L_088B2980;
    }
L_088B2980:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088B29CC;
      }
      goto L_088B298C;
    }
L_088B298C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088B2A0C;
      }
      goto L_088B2994;
    }
L_088B2994:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B2B74;
      }
      goto L_088B299C;
    }
L_088B299C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_088B2A44;
      }
      goto L_088B29A4;
    }
L_088B29A4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16796)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B29BC;
      }
      goto L_088B29B4;
    }
L_088B29B4:
    ctx.gpr[31] = (0x088B29BCu);
    ctx.gpr[4] = (0u | 360u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 67u, 0x08A8C530u>(ctx, &aot_mem) && ctx.pc == 0x088B29BCu) goto L_088B29BC;
    return;
L_088B29BC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25517), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088B2BBC;
      }
      goto L_088B29CC;
    }
L_088B29CC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16796)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088B29F8;
      }
      goto L_088B29DC;
    }
L_088B29DC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6076));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B29F8;
      }
      goto L_088B29EC;
    }
L_088B29EC:
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25519), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B2A00;
      }
      goto L_088B29F8;
    }
L_088B29F8:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25519), static_cast<std::uint8_t>(0u));
    goto L_088B2A00;
L_088B2A00:
    ctx.gpr[4] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16725), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B2BBC;
      }
      goto L_088B2A0C;
    }
L_088B2A0C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16796)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088B2A38;
      }
      goto L_088B2A1C;
    }
L_088B2A1C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6076));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2A38;
      }
      goto L_088B2A2C;
    }
L_088B2A2C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-28456), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088B2A38;
L_088B2A38:
    ctx.gpr[4] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16725), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B2BBC;
      }
      goto L_088B2A44;
    }
L_088B2A44:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B2A50u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7516));
    goto L_088B06C0;
L_088B2A50:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6076));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088B2A74;
      }
      goto L_088B2A68;
    }
L_088B2A68:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6076));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1484)));
    goto L_088B2A74;
L_088B2A74:
    ctx.gpr[5] = (32785u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(961));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (32785u << 16u);
      if (branch_taken) {
          goto L_088B2A90;
      }
      goto L_088B2A84;
    }
L_088B2A84:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(962));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088B2AC4;
      }
      goto L_088B2A90;
    }
L_088B2A90:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(7744));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7716));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x088B2AACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x088B2AACu) goto L_088B2AAC;
    return;
L_088B2AAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088B2B68;
      }
      goto L_088B2AC4;
    }
L_088B2AC4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7632));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7716));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088B2B4C;
      }
      goto L_088B2AE8;
    }
L_088B2AE8:
    ctx.gpr[31] = (0x088B2AF0u);
    // nop
    goto L_088B1B20;
L_088B2AF0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2B0C;
      }
      goto L_088B2AF8;
    }
L_088B2AF8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7744));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_088B2B68;
      }
      goto L_088B2B0C;
    }
L_088B2B0C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(7744));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7716));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x088B2B28u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x088B2B28u) goto L_088B2B28;
    return;
L_088B2B28:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7632));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x088B2B3Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x088B2B3Cu) goto L_088B2B3C;
    return;
L_088B2B3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088B2B68;
      }
      goto L_088B2B4C;
    }
L_088B2B4C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7744));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_088B2B68;
L_088B2B68:
    ctx.gpr[4] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16725), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B2BBC;
      }
      goto L_088B2B74;
    }
L_088B2B74:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20624)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B2B8C;
      }
      goto L_088B2B84;
    }
L_088B2B84:
    ctx.gpr[31] = (0x088B2B8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x088B2B8Cu) goto L_088B2B8C;
    return;
L_088B2B8C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-20624)));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-25519), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x088B2BB4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4576));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 411u, 0x08AD9BE4u>(ctx, &aot_mem) && ctx.pc == 0x088B2BB4u) goto L_088B2BB4;
    return;
L_088B2BB4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16725), static_cast<std::uint8_t>(0u));
    goto L_088B2BBC;
L_088B2BBC:
    ctx.gpr[31] = (0x088B2BC4u);
    // nop
    ctx.pc = 0x08B0B784u;
    return;
L_088B2BC4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2BD8;
      }
      goto L_088B2BD0;
    }
L_088B2BD0:
    ctx.gpr[31] = (0x088B2BD8u);
    // nop
    goto L_088B0ED8;
L_088B2BD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2C3C;
      }
      goto L_088B2BE0;
    }
L_088B2BE0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B2BF0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7532));
    goto L_088B06C0;
L_088B2BF0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[16] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6888), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B2C3C;
      }
      goto L_088B2C00;
    }
L_088B2C00:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B2C10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7564));
    goto L_088B06C0;
L_088B2C10:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[16] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6888), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B2C3C;
      }
      goto L_088B2C20;
    }
L_088B2C20:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B2C34u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7600));
    goto L_088B06C0;
L_088B2C34:
    ctx.gpr[31] = (0x088B2C3Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_088B0ED8;
L_088B2C3C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088B2C48u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27212)));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 648u, 0x08AB3980u>(ctx, &aot_mem) && ctx.pc == 0x088B2C48u) goto L_088B2C48;
    return;
L_088B2C48:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B2C60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B2C98u);
    ctx.gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x088B2C98u) goto L_088B2C98;
    return;
L_088B2C98:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25517), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25440)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088B2D04;
      }
      goto L_088B2CB4;
    }
L_088B2CB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25440)));
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088B2CE4;
      }
      goto L_088B2CC4;
    }
L_088B2CC4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088B2CEC;
      }
      goto L_088B2CCC;
    }
L_088B2CCC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B2CF4;
      }
      goto L_088B2CD4;
    }
L_088B2CD4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_088B2CFC;
      }
      goto L_088B2CDC;
    }
L_088B2CDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_088B2D08;
      }
      goto L_088B2CE4;
    }
L_088B2CE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 2u);
      if (branch_taken) {
          goto L_088B2D08;
      }
      goto L_088B2CEC;
    }
L_088B2CEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 4u);
      if (branch_taken) {
          goto L_088B2D08;
      }
      goto L_088B2CF4;
    }
L_088B2CF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 5u);
      if (branch_taken) {
          goto L_088B2D08;
      }
      goto L_088B2CFC;
    }
L_088B2CFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 3u);
      if (branch_taken) {
          goto L_088B2D08;
      }
      goto L_088B2D04;
    }
L_088B2D04:
    ctx.gpr[17] = (0u | 1u);
    goto L_088B2D08;
L_088B2D08:
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(6076));
    ctx.gpr[21] = (0u | 1536u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088B2D24u);
    ctx.gpr[6] = (0u | 1536u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x088B2D24u) goto L_088B2D24;
    return;
L_088B2D24:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(6076), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 17u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 19u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 18u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B2D74;
      }
      goto L_088B2D58;
    }
L_088B2D58:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1200u);
    ctx.gpr[31] = (0x088B2D6Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7744));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x088B2D6Cu) goto L_088B2D6C;
    return;
L_088B2D6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2D88;
      }
      goto L_088B2D74;
    }
L_088B2D74:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1200u);
    ctx.gpr[31] = (0x088B2D88u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7744));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088B2D88u) goto L_088B2D88;
    return;
L_088B2D88:
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B3CAC;
      }
      goto L_088B2D94;
    }
L_088B2D94:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088B3918;
      }
      goto L_088B2DA0;
    }
L_088B2DA0:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088B3A1C;
      }
      goto L_088B2DA8;
    }
L_088B2DA8:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B3B20;
      }
      goto L_088B2DB0;
    }
L_088B2DB0:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_088B3B5C;
      }
      goto L_088B2DB8;
    }
L_088B2DB8:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(6076));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1480), ctx.gpr[4]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(7036));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(60));
    ctx.gpr[31] = (0x088B2DECu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x088B2DECu) goto L_088B2DEC;
    return;
L_088B2DEC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088B2DFCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x088B2DFCu) goto L_088B2DFC;
    return;
L_088B2DFC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(7644));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(76));
    ctx.gpr[31] = (0x088B2E10u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x088B2E10u) goto L_088B2E10;
    return;
L_088B2E10:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088B2E20u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x088B2E20u) goto L_088B2E20;
    return;
L_088B2E20:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(7648));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(100));
    ctx.gpr[31] = (0x088B2E34u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x088B2E34u) goto L_088B2E34;
    return;
L_088B2E34:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088B2E44u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x088B2E44u) goto L_088B2E44;
    return;
L_088B2E44:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16797));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1516), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1500));
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x088B2E7Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16764));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088B2E7Cu) goto L_088B2E7C;
    return;
L_088B2E7C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    ctx.gpr[6] = (0u | 127u);
    ctx.gpr[31] = (0x088B2E90u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7660));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x088B2E90u) goto L_088B2E90;
    return;
L_088B2E90:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(256));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x088B2EA0u);
    ctx.gpr[6] = (0u | 127u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x088B2EA0u) goto L_088B2EA0;
    return;
L_088B2EA0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(384));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(176));
    ctx.gpr[31] = (0x088B2EB0u);
    ctx.gpr[6] = (0u | 1023u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x088B2EB0u) goto L_088B2EB0;
    return;
L_088B2EB0:
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1408), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B2EC4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7688));
    goto L_088B06C0;
L_088B2EC4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-28448)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (25459u << 16u);
      if (branch_taken) {
          goto L_088B2F58;
      }
      goto L_088B2ED4;
    }
L_088B2ED4:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26980));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (20527u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14896));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (18271u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20563));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (12101u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19777));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (17490u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21333));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (18735u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21065));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (21326u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20291));
    ctx.gpr[5] = (0u | 47u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B2F40u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16977));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 393u, 0x08AED5D8u>(ctx, &aot_mem) && ctx.pc == 0x088B2F40u) goto L_088B2F40;
    return;
L_088B2F40:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B2F50u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7720));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 393u, 0x08AED5D8u>(ctx, &aot_mem) && ctx.pc == 0x088B2F50u) goto L_088B2F50;
    return;
L_088B2F50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2F70;
      }
      goto L_088B2F58;
    }
L_088B2F58:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7728));
    ctx.gpr[31] = (0x088B2F70u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16977));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x088B2F70u) goto L_088B2F70;
    return;
L_088B2F70:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B2F84u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7748));
    goto L_088B06C0;
L_088B2F84:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088B2F98u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7776));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 488u, 0x089661E8u>(ctx, &aot_mem) && ctx.pc == 0x088B2F98u) goto L_088B2F98;
    return;
L_088B2F98:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_088B2FD0;
    }
    goto L_088B2FB0;
L_088B2FB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17116)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17112)));
    ctx.gpr[31] = (0x088B2FC8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 459u, 0x0893600Cu>(ctx, &aot_mem) && ctx.pc == 0x088B2FC8u) goto L_088B2FC8;
    return;
L_088B2FC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2FE4;
      }
      goto L_088B2FD0;
    }
L_088B2FD0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17116)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17112)));
    ctx.gpr[31] = (0x088B2FE4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 514u, 0x08936330u>(ctx, &aot_mem) && ctx.pc == 0x088B2FE4u) goto L_088B2FE4;
    return;
L_088B2FE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17116)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17112)));
    ctx.gpr[31] = (0x088B2FFCu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 514u, 0x08936330u>(ctx, &aot_mem) && ctx.pc == 0x088B2FFCu) goto L_088B2FFC;
    return;
L_088B2FFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088B3030;
      }
      goto L_088B3010;
    }
L_088B3010:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17116)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17112)));
    ctx.gpr[31] = (0x088B3028u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 459u, 0x0893600Cu>(ctx, &aot_mem) && ctx.pc == 0x088B3028u) goto L_088B3028;
    return;
L_088B3028:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B3048;
      }
      goto L_088B3030;
    }
L_088B3030:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17116)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17112)));
    ctx.gpr[31] = (0x088B3048u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 514u, 0x08936330u>(ctx, &aot_mem) && ctx.pc == 0x088B3048u) goto L_088B3048;
    return;
L_088B3048:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16788)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B306C;
      }
      goto L_088B3058;
    }
L_088B3058:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16788)));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x088B306Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x088B306Cu) goto L_088B306C;
    return;
L_088B306C:
    ctx.gpr[31] = (0x088B3074u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 738u, 0x089C70F0u>(ctx, &aot_mem) && ctx.pc == 0x088B3074u) goto L_088B3074;
    return;
L_088B3074:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B3084u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x088B3084u) goto L_088B3084;
    return;
L_088B3084:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16788), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_088B30BC;
    }
    goto L_088B30A0;
L_088B30A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16788)));
    ctx.gpr[31] = (0x088B30B4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 414u, 0x08935DB0u>(ctx, &aot_mem) && ctx.pc == 0x088B30B4u) goto L_088B30B4;
    return;
L_088B30B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B30CC;
      }
      goto L_088B30BC;
    }
L_088B30BC:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16788)));
    ctx.gpr[31] = (0x088B30CCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 468u, 0x089360D0u>(ctx, &aot_mem) && ctx.pc == 0x088B30CCu) goto L_088B30CC;
    return;
L_088B30CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B30F4;
      }
      goto L_088B30E0;
    }
L_088B30E0:
    ctx.gpr[31] = (0x088B30E8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08B0BCCCu;
    return;
L_088B30E8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B30FC;
      }
      goto L_088B30F4;
    }
L_088B30F4:
    ctx.gpr[31] = (0x088B30FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08B0BD1Cu;
    return;
L_088B30FC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088B313C;
      }
      goto L_088B310C;
    }
L_088B310C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088B3118u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088B3118u) goto L_088B3118;
    return;
L_088B3118:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B3130;
      }
      goto L_088B3124;
    }
L_088B3124:
    ctx.gpr[31] = (0x088B312Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x088B312Cu) goto L_088B312C;
    return;
L_088B312C:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    goto L_088B3130;
L_088B3130:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_088B313C;
L_088B313C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[7] = (0u | 127u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7780));
    ctx.gpr[31] = (0x088B3158u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(5945));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B3158u) goto L_088B3158;
    return;
L_088B3158:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B3164u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7788));
    goto L_088B06C0;
L_088B3164:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-28448)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (25459u << 16u);
      if (branch_taken) {
          goto L_088B3204;
      }
      goto L_088B3174;
    }
L_088B3174:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26980));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (20527u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14896));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (18271u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20563));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (12101u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19777));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (17490u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21333));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (18735u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21065));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (21326u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20291));
    ctx.gpr[5] = (0u | 47u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16977));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B31ECu);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 393u, 0x08AED5D8u>(ctx, &aot_mem) && ctx.pc == 0x088B31ECu) goto L_088B31EC;
    return;
L_088B31EC:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B31FCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7720));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 393u, 0x08AED5D8u>(ctx, &aot_mem) && ctx.pc == 0x088B31FCu) goto L_088B31FC;
    return;
L_088B31FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B3228;
      }
      goto L_088B3204;
    }
L_088B3204:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16977));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[31] = (0x088B3228u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7728));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x088B3228u) goto L_088B3228;
    return;
L_088B3228:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B323Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7820));
    goto L_088B06C0;
L_088B323C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088B3250u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7776));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 488u, 0x089661E8u>(ctx, &aot_mem) && ctx.pc == 0x088B3250u) goto L_088B3250;
    return;
L_088B3250:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088B3264u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7848));
    goto L_088B06C0;
L_088B3264:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_088B3298;
    }
    goto L_088B3278;
L_088B3278:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17116)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17112)));
    ctx.gpr[31] = (0x088B3290u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 459u, 0x0893600Cu>(ctx, &aot_mem) && ctx.pc == 0x088B3290u) goto L_088B3290;
    return;
L_088B3290:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B32AC;
      }
      goto L_088B3298;
    }
L_088B3298:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17116)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17112)));
    ctx.gpr[31] = (0x088B32ACu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 514u, 0x08936330u>(ctx, &aot_mem) && ctx.pc == 0x088B32ACu) goto L_088B32AC;
    return;
L_088B32AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17116)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17112)));
    ctx.gpr[31] = (0x088B32C4u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 514u, 0x08936330u>(ctx, &aot_mem) && ctx.pc == 0x088B32C4u) goto L_088B32C4;
    return;
L_088B32C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088B32F8;
      }
      goto L_088B32D8;
    }
L_088B32D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17116)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17112)));
    ctx.gpr[31] = (0x088B32F0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 459u, 0x0893600Cu>(ctx, &aot_mem) && ctx.pc == 0x088B32F0u) goto L_088B32F0;
    return;
L_088B32F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B3310;
      }
      goto L_088B32F8;
    }
L_088B32F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17116)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17112)));
    ctx.gpr[31] = (0x088B3310u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 514u, 0x08936330u>(ctx, &aot_mem) && ctx.pc == 0x088B3310u) goto L_088B3310;
    return;
L_088B3310:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16780)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B3334;
      }
      goto L_088B3320;
    }
L_088B3320:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16780)));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x088B3334u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x088B3334u) goto L_088B3334;
    return;
L_088B3334:
    ctx.gpr[31] = (0x088B333Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 738u, 0x089C70F0u>(ctx, &aot_mem) && ctx.pc == 0x088B333Cu) goto L_088B333C;
    return;
L_088B333C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B334Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x088B334Cu) goto L_088B334C;
    return;
L_088B334C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16780), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_088B3384;
    }
    goto L_088B3368;
L_088B3368:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16780)));
    ctx.gpr[31] = (0x088B337Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 414u, 0x08935DB0u>(ctx, &aot_mem) && ctx.pc == 0x088B337Cu) goto L_088B337C;
    return;
L_088B337C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B3394;
      }
      goto L_088B3384;
    }
L_088B3384:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16780)));
    ctx.gpr[31] = (0x088B3394u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 468u, 0x089360D0u>(ctx, &aot_mem) && ctx.pc == 0x088B3394u) goto L_088B3394;
    return;
L_088B3394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B33BC;
      }
      goto L_088B33A8;
    }
L_088B33A8:
    ctx.gpr[31] = (0x088B33B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08B0BCCCu;
    return;
L_088B33B0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B33C4;
      }
      goto L_088B33BC;
    }
L_088B33BC:
    ctx.gpr[31] = (0x088B33C4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08B0BD1Cu;
    return;
L_088B33C4:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B33D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7872));
    goto L_088B06C0;
L_088B33D0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B33DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7788));
    goto L_088B06C0;
L_088B33DC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-28448)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (25459u << 16u);
      if (branch_taken) {
          goto L_088B347C;
      }
      goto L_088B33EC;
    }
L_088B33EC:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26980));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (20527u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14896));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (18271u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20563));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (12101u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19777));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (17490u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21333));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (18735u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21065));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (21326u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20291));
    ctx.gpr[5] = (0u | 47u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16977));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088B3464u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 393u, 0x08AED5D8u>(ctx, &aot_mem) && ctx.pc == 0x088B3464u) goto L_088B3464;
    return;
L_088B3464:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088B3474u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7884));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 393u, 0x08AED5D8u>(ctx, &aot_mem) && ctx.pc == 0x088B3474u) goto L_088B3474;
    return;
L_088B3474:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B34A0;
      }
      goto L_088B347C;
    }
L_088B347C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16977));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[31] = (0x088B34A0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7892));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x088B34A0u) goto L_088B34A0;
    return;
L_088B34A0:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088B34B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7820));
    goto L_088B06C0;
L_088B34B4:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088B34C8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7776));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 488u, 0x089661E8u>(ctx, &aot_mem) && ctx.pc == 0x088B34C8u) goto L_088B34C8;
    return;
L_088B34C8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088B34DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7848));
    goto L_088B06C0;
L_088B34DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_088B3510;
    }
    goto L_088B34F0;
L_088B34F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17116)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17112)));
    ctx.gpr[31] = (0x088B3508u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 459u, 0x0893600Cu>(ctx, &aot_mem) && ctx.pc == 0x088B3508u) goto L_088B3508;
    return;
L_088B3508:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B3524;
      }
      goto L_088B3510;
    }
L_088B3510:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17116)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17112)));
    ctx.gpr[31] = (0x088B3524u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 514u, 0x08936330u>(ctx, &aot_mem) && ctx.pc == 0x088B3524u) goto L_088B3524;
    return;
L_088B3524:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17116)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17112)));
    ctx.gpr[31] = (0x088B353Cu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 514u, 0x08936330u>(ctx, &aot_mem) && ctx.pc == 0x088B353Cu) goto L_088B353C;
    return;
L_088B353C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088B3570;
      }
      goto L_088B3550;
    }
L_088B3550:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17116)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17112)));
    ctx.gpr[31] = (0x088B3568u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 459u, 0x0893600Cu>(ctx, &aot_mem) && ctx.pc == 0x088B3568u) goto L_088B3568;
    return;
L_088B3568:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B3588;
      }
      goto L_088B3570;
    }
L_088B3570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17116)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17112)));
    ctx.gpr[31] = (0x088B3588u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 514u, 0x08936330u>(ctx, &aot_mem) && ctx.pc == 0x088B3588u) goto L_088B3588;
    return;
L_088B3588:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16784)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B35AC;
      }
      goto L_088B3598;
    }
L_088B3598:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16784)));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x088B35ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x088B35ACu) goto L_088B35AC;
    return;
L_088B35AC:
    ctx.gpr[31] = (0x088B35B4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 738u, 0x089C70F0u>(ctx, &aot_mem) && ctx.pc == 0x088B35B4u) goto L_088B35B4;
    return;
L_088B35B4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088B35C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x088B35C4u) goto L_088B35C4;
    return;
L_088B35C4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16784), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_088B35FC;
    }
    goto L_088B35E0;
L_088B35E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16784)));
    ctx.gpr[31] = (0x088B35F4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 414u, 0x08935DB0u>(ctx, &aot_mem) && ctx.pc == 0x088B35F4u) goto L_088B35F4;
    return;
L_088B35F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B360C;
      }
      goto L_088B35FC;
    }
L_088B35FC:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16784)));
    ctx.gpr[31] = (0x088B360Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 468u, 0x089360D0u>(ctx, &aot_mem) && ctx.pc == 0x088B360Cu) goto L_088B360C;
    return;
L_088B360C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B3634;
      }
      goto L_088B3620;
    }
L_088B3620:
    ctx.gpr[31] = (0x088B3628u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08B0BCCCu;
    return;
L_088B3628:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B363C;
      }
      goto L_088B3634;
    }
L_088B3634:
    ctx.gpr[31] = (0x088B363Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08B0BD1Cu;
    return;
L_088B363C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B3648u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7872));
    goto L_088B06C0;
L_088B3648:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B3654u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7912));
    goto L_088B06C0;
L_088B3654:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-28448)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (25459u << 16u);
      if (branch_taken) {
          goto L_088B36E0;
      }
      goto L_088B3664;
    }
L_088B3664:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26980));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (20527u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(14896));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (18271u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20563));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (12101u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19777));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (17490u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21333));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (18735u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21065));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (21326u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20291));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (22081u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21295));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[5] = (11847u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16965));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[5] = (71u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20048));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088B36F0;
      }
      goto L_088B36E0;
    }
L_088B36E0:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x088B36F0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7944));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x088B36F0u) goto L_088B36F0;
    return;
L_088B36F0:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088B3704u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7968));
    goto L_088B06C0;
L_088B3704:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088B3718u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7776));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 488u, 0x089661E8u>(ctx, &aot_mem) && ctx.pc == 0x088B3718u) goto L_088B3718;
    return;
L_088B3718:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088B372Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7848));
    goto L_088B06C0;
L_088B372C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_088B3760;
    }
    goto L_088B3740;
L_088B3740:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17116)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17112)));
    ctx.gpr[31] = (0x088B3758u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 459u, 0x0893600Cu>(ctx, &aot_mem) && ctx.pc == 0x088B3758u) goto L_088B3758;
    return;
L_088B3758:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B3774;
      }
      goto L_088B3760;
    }
L_088B3760:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17116)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17112)));
    ctx.gpr[31] = (0x088B3774u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 514u, 0x08936330u>(ctx, &aot_mem) && ctx.pc == 0x088B3774u) goto L_088B3774;
    return;
L_088B3774:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17116)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17112)));
    ctx.gpr[31] = (0x088B378Cu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 514u, 0x08936330u>(ctx, &aot_mem) && ctx.pc == 0x088B378Cu) goto L_088B378C;
    return;
L_088B378C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088B37C0;
      }
      goto L_088B37A0;
    }
L_088B37A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17116)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17112)));
    ctx.gpr[31] = (0x088B37B8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 459u, 0x0893600Cu>(ctx, &aot_mem) && ctx.pc == 0x088B37B8u) goto L_088B37B8;
    return;
L_088B37B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B37D8;
      }
      goto L_088B37C0;
    }
L_088B37C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17116)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17112)));
    ctx.gpr[31] = (0x088B37D8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 514u, 0x08936330u>(ctx, &aot_mem) && ctx.pc == 0x088B37D8u) goto L_088B37D8;
    return;
L_088B37D8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16792)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B37FC;
      }
      goto L_088B37E8;
    }
L_088B37E8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16792)));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x088B37FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x088B37FCu) goto L_088B37FC;
    return;
L_088B37FC:
    ctx.gpr[31] = (0x088B3804u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 738u, 0x089C70F0u>(ctx, &aot_mem) && ctx.pc == 0x088B3804u) goto L_088B3804;
    return;
L_088B3804:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088B3814u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x088B3814u) goto L_088B3814;
    return;
L_088B3814:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16792), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_088B384C;
    }
    goto L_088B3830;
L_088B3830:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16792)));
    ctx.gpr[31] = (0x088B3844u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 414u, 0x08935DB0u>(ctx, &aot_mem) && ctx.pc == 0x088B3844u) goto L_088B3844;
    return;
L_088B3844:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B385C;
      }
      goto L_088B384C;
    }
L_088B384C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16792)));
    ctx.gpr[31] = (0x088B385Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 468u, 0x089360D0u>(ctx, &aot_mem) && ctx.pc == 0x088B385Cu) goto L_088B385C;
    return;
L_088B385C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B3884;
      }
      goto L_088B3870;
    }
L_088B3870:
    ctx.gpr[31] = (0x088B3878u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08B0BCCCu;
    return;
L_088B3878:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B388C;
      }
      goto L_088B3884;
    }
L_088B3884:
    ctx.gpr[31] = (0x088B388Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08B0BD1Cu;
    return;
L_088B388C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B3898u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7872));
    goto L_088B06C0;
L_088B3898:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16780)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6076));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1412), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1416), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1420), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16784)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1432), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1428), ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1436), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16792)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1448), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1444), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1452), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1460), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1464), 0u);
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1468), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16788)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(7612));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(5945));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(7612), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1476), ctx.gpr[7]);
      if (branch_taken) {
          goto L_088B3CAC;
      }
      goto L_088B3918;
    }
L_088B3918:
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[31] = (0x088B3924u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32768));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 738u, 0x089C70F0u>(ctx, &aot_mem) && ctx.pc == 0x088B3924u) goto L_088B3924;
    return;
L_088B3924:
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32768));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B393Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x088B393Cu) goto L_088B393C;
    return;
L_088B393C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088B3948u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_088B06EC;
L_088B3948:
    ctx.gpr[31] = (0x088B3950u);
    // nop
    goto L_088B0758;
L_088B3950:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088B3960u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x088B3960u) goto L_088B3960;
    return;
L_088B3960:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(6076));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1480), ctx.gpr[4]);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1516), 0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1500));
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x088B3994u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16764));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088B3994u) goto L_088B3994;
    return;
L_088B3994:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(7036));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(60));
    ctx.gpr[31] = (0x088B39A8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x088B39A8u) goto L_088B39A8;
    return;
L_088B39A8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088B39B8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x088B39B8u) goto L_088B39B8;
    return;
L_088B39B8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(7644));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(76));
    ctx.gpr[31] = (0x088B39CCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x088B39CCu) goto L_088B39CC;
    return;
L_088B39CC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088B39DCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x088B39DCu) goto L_088B39DC;
    return;
L_088B39DC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(7648));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(100));
    ctx.gpr[31] = (0x088B39F0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x088B39F0u) goto L_088B39F0;
    return;
L_088B39F0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088B3A00u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x088B3A00u) goto L_088B3A00;
    return;
L_088B3A00:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16797));
    ctx.gpr[31] = (0x088B3A10u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    goto L_088B0758;
L_088B3A10:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(120), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088B3CAC;
      }
      goto L_088B3A1C;
    }
L_088B3A1C:
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[31] = (0x088B3A28u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32768));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 738u, 0x089C70F0u>(ctx, &aot_mem) && ctx.pc == 0x088B3A28u) goto L_088B3A28;
    return;
L_088B3A28:
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32768));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B3A40u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x088B3A40u) goto L_088B3A40;
    return;
L_088B3A40:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088B3A4Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_088B06EC;
L_088B3A4C:
    ctx.gpr[31] = (0x088B3A54u);
    // nop
    goto L_088B0758;
L_088B3A54:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088B3A64u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x088B3A64u) goto L_088B3A64;
    return;
L_088B3A64:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(6076));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1480), ctx.gpr[4]);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1516), 0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1500));
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x088B3A94u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16764));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088B3A94u) goto L_088B3A94;
    return;
L_088B3A94:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(7036));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(60));
    ctx.gpr[31] = (0x088B3AA8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x088B3AA8u) goto L_088B3AA8;
    return;
L_088B3AA8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088B3AB8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x088B3AB8u) goto L_088B3AB8;
    return;
L_088B3AB8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(7644));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(76));
    ctx.gpr[31] = (0x088B3ACCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x088B3ACCu) goto L_088B3ACC;
    return;
L_088B3ACC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088B3ADCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x088B3ADCu) goto L_088B3ADC;
    return;
L_088B3ADC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(7648));
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(100));
    ctx.gpr[31] = (0x088B3AF0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x088B3AF0u) goto L_088B3AF0;
    return;
L_088B3AF0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088B3B00u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x088B3B00u) goto L_088B3B00;
    return;
L_088B3B00:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (0x088B3B0Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x088B3B0Cu) goto L_088B3B0C;
    return;
L_088B3B0C:
    ctx.gpr[31] = (0x088B3B14u);
    // nop
    goto L_088B0758;
L_088B3B14:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(120), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088B3CAC;
      }
      goto L_088B3B20;
    }
L_088B3B20:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6076));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1480), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1516), 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1500));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x088B3B54u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16764));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088B3B54u) goto L_088B3B54;
    return;
L_088B3B54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B3CAC;
      }
      goto L_088B3B5C;
    }
L_088B3B5C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(7632));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088B3B74u);
    ctx.gpr[6] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x088B3B74u) goto L_088B3B74;
    return;
L_088B3B74:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 64u);
    ctx.gpr[31] = (0x088B3B88u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7652));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x088B3B88u) goto L_088B3B88;
    return;
L_088B3B88:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(7716));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088B3BA0u);
    ctx.gpr[6] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x088B3BA0u) goto L_088B3BA0;
    return;
L_088B3BA0:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(6076));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1480), ctx.gpr[4]);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1516), 0u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1500));
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x088B3BD4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16764));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088B3BD4u) goto L_088B3BD4;
    return;
L_088B3BD4:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(7036));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(60));
    ctx.gpr[31] = (0x088B3BE8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x088B3BE8u) goto L_088B3BE8;
    return;
L_088B3BE8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088B3BF8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x088B3BF8u) goto L_088B3BF8;
    return;
L_088B3BF8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(7644));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(76));
    ctx.gpr[31] = (0x088B3C0Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x088B3C0Cu) goto L_088B3C0C;
    return;
L_088B3C0C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088B3C1Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x088B3C1Cu) goto L_088B3C1C;
    return;
L_088B3C1C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(7648));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(100));
    ctx.gpr[31] = (0x088B3C30u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x088B3C30u) goto L_088B3C30;
    return;
L_088B3C30:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088B3C40u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x088B3C40u) goto L_088B3C40;
    return;
L_088B3C40:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16797));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1488), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1492), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1496), ctx.gpr[17]);
    ctx.gpr[4] = (1024u << 16u);
    ctx.gpr[5] = (1u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7280));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(124), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1412), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 21751u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1416), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1420), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1428), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 51200u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1432), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1436), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1444), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 40366u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1448), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1452), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1460), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1464), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1468), 0u);
    goto L_088B3CAC;
L_088B3CAC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x088B3CB8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6076));
    ctx.pc = 0x08B0B75Cu;
    return;
L_088B3CB8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088B3CD4;
      }
      goto L_088B3CC4;
    }
L_088B3CC4:
    ctx.gpr[31] = (0x088B3CCCu);
    // nop
    goto L_088B0ED8;
L_088B3CCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B3CE0;
      }
      goto L_088B3CD4;
    }
L_088B3CD4:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B3CE0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7992));
    goto L_088B06C0;
L_088B3CE0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3D04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16668)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16664)));
    ctx.gpr[2] = (2227u << 16u);
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16672), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (2227u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16692)));
    ctx.gpr[3] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16704)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16700)));
    ctx.gpr[24] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[16] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(16708), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16716), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[13] = (2227u << 16u);
    ctx.gpr[12] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(16680), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(16676), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[11] = (15744u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[11]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[14] = (2227u << 16u);
    ctx.gpr[8] = (16281u << 16u);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(16684), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[9] = (16268u << 16u);
    ctx.gpr[15] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[8] | 39322u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16688), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[9] | 52429u);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(16696), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[25] = (2227u << 16u);
    ctx.gpr[2] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(16712), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16720), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3DF8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3E44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B3E90u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 11u, 0x088B40C0u>(ctx, &aot_mem) && ctx.pc == 0x088B3E90u) goto L_088B3E90;
    return;
L_088B3E90:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3EA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088B3F04;
      }
      goto L_088B3EC0;
    }
L_088B3EC0:
    ctx.gpr[31] = (0x088B3EC8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 22u, 0x088B4200u>(ctx, &aot_mem) && ctx.pc == 0x088B3EC8u) goto L_088B3EC8;
    return;
L_088B3EC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088B3EDC;
      }
      goto L_088B3ED4;
    }
L_088B3ED4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_088B3EDC;
L_088B3EDC:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
        goto L_088B3EF0;
    }
    goto L_088B3EE4;
L_088B3EE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    goto L_088B3EF0;
L_088B3EF0:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_088B3F04;
      }
      goto L_088B3EFC;
    }
L_088B3EFC:
    ctx.gpr[31] = (0x088B3F04u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088B3F04u) goto L_088B3F04;
    return;
L_088B3F04:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3F18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27772)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B3F40;
      }
      goto L_088B3F30;
    }
L_088B3F30:
    ctx.gpr[31] = (0x088B3F38u);
    ctx.gpr[5] = (0u | 3u);
    goto L_088B3EA4;
L_088B3F38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B3F48;
      }
      goto L_088B3F40;
    }
L_088B3F40:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_088B3F48;
L_088B3F48:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3F54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27768)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088B3FA8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 16u, 0x088B4178u>(ctx, &aot_mem) && ctx.pc == 0x088B3FA8u) goto L_088B3FA8;
    return;
L_088B3FA8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088B3FDC;
      }
      goto L_088B3FBC;
    }
L_088B3FBC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_088B3FBC;
      }
      goto L_088B3FDC;
    }
L_088B3FDC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (0u | 24u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 10u, 0x088B4094u>(ctx, &aot_mem); return;
      }
      goto L_088B3FF4;
    }
L_088B3FF4:
    ctx.gpr[21] = (0u | 0u);
    goto L_088B3FF8;
L_088B3FF8:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[21]);
    ctx.pc = 0x088B4000u; return;
}

void recomp_unit_0043(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0043_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_43(Runtime &runtime) {
    runtime.register_generated_unit(43u, 0x088B0000u, 16384u, &recomp_unit_0043, &recomp_unit_0043_entry);
    runtime.register_function(0x088B0000u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B000Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0020u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0044u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0058u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0068u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0070u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0078u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0084u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0090u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B009Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B00B0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B00B8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B00C0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B00C4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B00CCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B00F0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B00F8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0108u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B011Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B012Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0140u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0150u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0158u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0160u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B016Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0178u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0188u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0190u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0198u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B01A4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B01FCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0204u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B020Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0218u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0220u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0228u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0230u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0240u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0254u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B026Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0288u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0290u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B02B4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B02C0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B02CCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B02D4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B02E4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0344u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0354u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0360u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B036Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0380u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B038Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B040Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B041Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0424u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0434u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B043Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B044Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0454u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0498u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B04C8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B04D0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B04D8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B04F4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0500u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0518u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0520u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0524u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0540u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0550u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0568u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0570u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0574u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B057Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0580u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B059Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B05A8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B05C0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B05C8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B05CCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B05D4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B065Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0668u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0674u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0698u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B06B4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B06C0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B06ECu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0714u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0724u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0758u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0764u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B077Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B07A0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B07A8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B07B0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B082Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B083Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0848u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0864u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0888u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B089Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B08A4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B08D4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B08E8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B08FCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B090Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0944u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0948u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0958u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0980u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B09ACu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B09C0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B09C8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B09D4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B09E0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0A00u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0A08u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0A18u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0BF0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0C5Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0C64u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0C6Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0C90u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0CA0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0CB4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0CBCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0CD8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0CE4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0CF4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0D00u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0D08u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0D10u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0D1Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0D24u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0D30u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0D38u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0D40u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0D48u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0D54u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0D5Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0D64u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0D70u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0D78u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0D80u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0D88u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0D94u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0DC0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0DC8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0DD8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0DE0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0DECu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0DF4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0DFCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0E08u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0E10u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0E18u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0E34u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0E48u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0E50u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0E5Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0E60u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0E74u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0E84u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0E8Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0EA0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0EACu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0EC8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0ED0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0ED8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0EF8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0F0Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0F20u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0F2Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0F34u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0F40u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0F54u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0F5Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0F64u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0F6Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0F74u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0F7Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0F8Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0FA0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0FC0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0FD0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0FE0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1000u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B100Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1014u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1020u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1028u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1034u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B103Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1048u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1050u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B105Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1064u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1070u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1078u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1084u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B108Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1098u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B10A0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B10ACu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B10B4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B10C0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B10C8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B10D4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B10DCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B10E8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B10F0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B10FCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1104u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1110u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1118u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1124u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B112Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1138u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1140u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1150u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1158u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1164u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1194u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B11A4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B11A8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B11B4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B11C4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B11C8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B11D4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B11E4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B11E8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B11F4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1204u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1208u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1224u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B126Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B127Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1284u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1290u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B129Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B12A4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B12B0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B12B4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B12BCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B12C8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B12DCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B12E8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B12F4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B12FCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1300u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B130Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1314u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1324u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1338u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B135Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1374u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B137Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1380u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1388u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1390u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1398u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B139Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B13A4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B13ACu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B13B4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B13BCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B13C4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B13D8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B13E0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B13F4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B141Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1438u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1440u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B144Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1454u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1460u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B146Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1474u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B14ACu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B14BCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B14C4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B14D0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B14E0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B14E8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B14F8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1500u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B150Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B151Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1520u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1528u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1538u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1550u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1560u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1588u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1598u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B15C0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B15DCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1604u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1630u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1638u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1664u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B16A4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B16CCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1720u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B172Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1744u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1754u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1764u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B176Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1774u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B177Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1784u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1790u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B179Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B17A4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B17A8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B17B4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B17BCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B17C0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B17CCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B17D4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B17D8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B17E0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B17ECu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B181Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1848u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1854u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B186Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1874u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1884u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B188Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1894u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B189Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B18A4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B18B0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B18B8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B18C4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B18E4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1908u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1914u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1924u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1934u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B193Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1948u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1954u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B195Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1960u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1968u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B197Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B198Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B199Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B19A8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B19B4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B19C0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B19C8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B19DCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B19F0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B19F8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1A0Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1A14u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1A34u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1A40u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1A48u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1A6Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1A7Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1A88u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1A90u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1AA4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1AC0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1ACCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1AD4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1ADCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1AE8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1AF0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1AF8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1B00u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1B04u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1B20u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1B5Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1B70u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1B84u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1B98u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1BA4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1BB0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1BBCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1BC4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1BD4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1BE0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1BF0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1BF8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1C04u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1C0Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1C18u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1C20u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1C28u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1C30u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1C38u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1C40u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1C44u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1C74u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1CA8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1CBCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1CD0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1D1Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1D30u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1D40u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1D48u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1D50u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1D58u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1D60u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1D68u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1D70u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1D7Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1D84u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1D8Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1DA8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1DB0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1DBCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1DC4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1DCCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1DD8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1DE0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1DE8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1DF8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1E08u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1E1Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1E24u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1E30u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1E44u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1E5Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1E6Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1E8Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1E98u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1EACu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1EB4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1EBCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1EC0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1EC8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1ED0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1ED8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1EE0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1EE8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1EFCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1F04u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1F14u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1F44u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1F60u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1F68u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1F74u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1F7Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1F88u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1F94u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1FB8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1FC8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1FD0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1FE4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1FECu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1FFCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2004u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B200Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2018u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2020u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B202Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2034u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B203Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2048u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2058u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2064u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2074u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B207Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2080u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B209Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B221Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2260u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B22A4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B22B4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B22C0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B22C8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B22D8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B22E0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B22E8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B22F0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B22F4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B22FCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2304u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B230Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2314u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2318u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2320u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2328u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2330u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2338u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B233Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2344u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2348u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2350u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B235Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2370u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B23DCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B23ECu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B23F8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2404u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2418u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2424u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2434u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2448u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2454u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2464u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2478u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B24ACu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B24BCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B24D0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B24DCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B24ECu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2500u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B250Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2518u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2548u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2554u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2560u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2568u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B256Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2570u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2584u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B25B8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B25D0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B25D8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B25E0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B25ECu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B25F4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B25FCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2608u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2614u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2620u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2628u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B262Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2634u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2648u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2650u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B265Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2668u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2674u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B267Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2680u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2688u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B269Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B26A4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B26B0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B26BCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B26C8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B26D0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B26D4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B26DCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B26F0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B26F8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2714u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B271Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2728u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2734u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B273Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2740u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2748u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2760u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B276Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2778u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2784u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B278Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2790u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2798u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B27ACu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B27B8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B27C4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B27D0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B27D8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B27DCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B27E4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B27FCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B282Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2834u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B283Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2870u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B288Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B289Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B28A4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B28ACu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B28B4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B28BCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B28CCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B28D4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B28E8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B28F0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B28FCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2904u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B290Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B291Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2938u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B294Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B295Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2968u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2980u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B298Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2994u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B299Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B29A4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B29B4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B29BCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B29CCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B29DCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B29ECu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B29F8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2A00u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2A0Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2A1Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2A2Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2A38u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2A44u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2A50u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2A68u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2A74u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2A84u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2A90u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2AACu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2AC4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2AE8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2AF0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2AF8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2B0Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2B28u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2B3Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2B4Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2B68u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2B74u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2B84u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2B8Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2BB4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2BBCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2BC4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2BD0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2BD8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2BE0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2BF0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2C00u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2C10u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2C20u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2C34u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2C3Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2C48u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2C60u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2C98u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2CB4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2CC4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2CCCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2CD4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2CDCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2CE4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2CECu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2CF4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2CFCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2D04u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2D08u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2D24u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2D58u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2D6Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2D74u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2D88u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2D94u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2DA0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2DA8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2DB0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2DB8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2DECu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2DFCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2E10u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2E20u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2E34u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2E44u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2E7Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2E90u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2EA0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2EB0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2EC4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2ED4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2F40u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2F50u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2F58u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2F70u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2F84u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2F98u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2FB0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2FC8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2FD0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2FE4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2FFCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3010u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3028u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3030u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3048u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3058u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B306Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3074u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3084u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B30A0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B30B4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B30BCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B30CCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B30E0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B30E8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B30F4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B30FCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B310Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3118u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3124u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B312Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3130u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B313Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3158u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3164u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3174u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B31ECu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B31FCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3204u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3228u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B323Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3250u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3264u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3278u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3290u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3298u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B32ACu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B32C4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B32D8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B32F0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B32F8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3310u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3320u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3334u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B333Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B334Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3368u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B337Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3384u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3394u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B33A8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B33B0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B33BCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B33C4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B33D0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B33DCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B33ECu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3464u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3474u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B347Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B34A0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B34B4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B34C8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B34DCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B34F0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3508u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3510u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3524u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B353Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3550u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3568u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3570u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3588u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3598u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B35ACu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B35B4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B35C4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B35E0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B35F4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B35FCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B360Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3620u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3628u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3634u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B363Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3648u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3654u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3664u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B36E0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B36F0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3704u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3718u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B372Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3740u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3758u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3760u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3774u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B378Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B37A0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B37B8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B37C0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B37D8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B37E8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B37FCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3804u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3814u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3830u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3844u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B384Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B385Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3870u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3878u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3884u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B388Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3898u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3918u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3924u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B393Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3948u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3950u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3960u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3994u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B39A8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B39B8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B39CCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B39DCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B39F0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3A00u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3A10u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3A1Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3A28u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3A40u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3A4Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3A54u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3A64u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3A94u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3AA8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3AB8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3ACCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3ADCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3AF0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3B00u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3B0Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3B14u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3B20u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3B54u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3B5Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3B74u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3B88u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3BA0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3BD4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3BE8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3BF8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3C0Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3C1Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3C30u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3C40u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3CACu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3CB8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3CC4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3CCCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3CD4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3CE0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3D04u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3DF8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3E44u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3E90u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3EA4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3EC0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3EC8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3ED4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3EDCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3EE4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3EF0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3EFCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3F04u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3F18u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3F30u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3F38u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3F40u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3F48u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3F54u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3FA8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3FBCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3FDCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3FF4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3FF8u, &recomp_unit_0043, "recomp_unit_0043");
}
} // namespace psprecomp
