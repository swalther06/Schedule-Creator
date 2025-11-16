#include "course.hpp"


Course::Course() {}

Course::Course(std::string& t, std::string& d, uint8_t n, uint8_t w) 
        : title(t), department(d), number(n), workload_percent(w),
        prerequisites(), corequisites() {}

