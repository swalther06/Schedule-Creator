#ifndef SEMESTER_HPP
#define SEMESTER_HPP

#include "course.hpp"

const uint16_t MIN_CREDITS = 15;
const uint16_t MAX_CREDITS = 18;

class Semester {
private:
    std::vector<Course&> courses;
    uint16_t min_credit_threshold;
    uint16_t max_credit_threshold;


public:
    Semester();

    uint16_t total_credits();

    uint8_t average_workload();

    void add_course(Course& c);

    void del_course(std::string t);

    void del_course(std::string d, uint8_t n);
};

#endif