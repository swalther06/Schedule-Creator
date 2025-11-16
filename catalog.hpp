#ifndef CATALOG_HPP
#define CATALOG_HPP

#include "course.hpp"

namespace Catalog {
    extern std::vector<Course> all_courses;

    void load_courses(const std::string& path);

    void save_courses(const std::string& path);
}

#endif