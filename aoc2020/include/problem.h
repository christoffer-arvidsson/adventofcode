#ifndef PROBLEM_H
#define PROBLEM_H

#include <cstdint>
#include <iostream>
#include <string>
#include <vector>

class Problem {
   public:
    Problem() = default;
    ~Problem() = default;
    Problem(const std::string& input) : input_(input) {}

    virtual std::pair<bool, std::uint64_t> part1() { return {false, NULL}; }
    virtual std::pair<bool, std::uint64_t> part2() { return {false, NULL}; }

    void run();

    std::string read_file_raw(std::string const& file_name) const;

    bool read_file(std::string const& file_name,
                   std::vector<std::string>& lines);

   protected:
    std::string input_;
};

#endif /* PROBLEM_H */
