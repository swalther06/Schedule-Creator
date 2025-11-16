#include "semester.hpp"

Semester::Semester() : min_credit_threshold(MIN_CREDITS), max_credit_threshold(MAX_CREDITS) {}

void Semester::add_course(std::string& tit) {
    
}

uint16_t Semester::total_credits() {
    uint16_t sum;
    for (Course* c : courses) {
        sum += c->get_credits();
    }

    return sum;
}

uint8_t Semester::average_workload() {
    uint8_t sum;
    for (Course* c : courses) {
        sum += c->get_workload();
    }

    return sum / courses.size();
}
