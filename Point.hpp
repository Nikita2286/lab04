#pragma once

#include <iostream>

struct Point {
    int x;
    int y;

    Point(int _x = 0, int _y = 0);        
    Point(const Point& other);            

    Point operator=(const Point& other);  
    bool operator==(const Point& other) const;  

    friend std::istream& operator>>(std::istream& in, Point& point);  
    friend std::ostream& operator<<(std::ostream& out, const Point& point);  
};
