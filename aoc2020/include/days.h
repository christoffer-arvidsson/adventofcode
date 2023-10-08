#include "problem.h"

class Day01 : public Problem {
public:
    Day01(const std::string& input) : Problem(input) {}
    std::pair<bool, std::uint64_t> part1() override;
    std::pair<bool, std::uint64_t> part2() override;
};

class Day02 : public Problem {
public:
    Day02(const std::string& input) : Problem(input) {}
    std::pair<bool, std::uint64_t> part1() override;
    std::pair<bool, std::uint64_t> part2() override;
};
