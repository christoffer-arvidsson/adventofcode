#include "problem.h"

#define DEFINE_DAY_CLASS(day)                             \
    class day : public Problem {                          \
       public:                                            \
        day(const std::string& input) : Problem(input) {} \
        std::pair<bool, std::uint64_t> part1() override;  \
        std::pair<bool, std::uint64_t> part2() override;  \
    };

DEFINE_DAY_CLASS(Day01)
DEFINE_DAY_CLASS(Day02)
DEFINE_DAY_CLASS(Day03)
DEFINE_DAY_CLASS(Day04)
DEFINE_DAY_CLASS(Day05)
DEFINE_DAY_CLASS(Day06)
DEFINE_DAY_CLASS(Day07)
DEFINE_DAY_CLASS(Day08)
DEFINE_DAY_CLASS(Day09)
DEFINE_DAY_CLASS(Day10)
DEFINE_DAY_CLASS(Day11)
DEFINE_DAY_CLASS(Day12)
DEFINE_DAY_CLASS(Day13)
DEFINE_DAY_CLASS(Day14)
DEFINE_DAY_CLASS(Day15)
DEFINE_DAY_CLASS(Day16)
DEFINE_DAY_CLASS(Day17)
DEFINE_DAY_CLASS(Day18)
DEFINE_DAY_CLASS(Day19)
DEFINE_DAY_CLASS(Day20)
DEFINE_DAY_CLASS(Day21)
DEFINE_DAY_CLASS(Day22)
DEFINE_DAY_CLASS(Day23)
DEFINE_DAY_CLASS(Day24)
DEFINE_DAY_CLASS(Day25)
