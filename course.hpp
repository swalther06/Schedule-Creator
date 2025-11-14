#ifndef COURSE_HPP
#define COURSE_HPP

#include <cstdint>
#include <string>
#include <vector>


class Course {
private:
    std::string title;
    std::string department;
    uint8_t number;
    uint8_t workload_percent;
    uint8_t num_credits;

    std::vector<Course> prerequisites;
    std::vector<Course> corequisites;

public:
    Course();

    Course(std::string& t, std::string d, uint8_t w, uint8_t n);

    void add_prereq(Course& c);

    void add_coreq(Course& c);

    void del_prereq(std::string dept, uint8_t num);

    void del_prereq(std::string& tit);
    
    Course& find_prereq(std::string& name);
    
    Course& find_coreq(std::string dept, uint8_t num);

    const uint8_t get_credits();

    const uint8_t get_workload();
};

#endif