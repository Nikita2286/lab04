#pragma once
#include "point.hpp"
#include <vector>
#include <memory>

class Snake {
    std::vector<Point> segments; 
    int length;

public:
    Snake();              
    void Move(const Point& direction); 
    void Grow();         
    Point GetHeadPosition() const; 
};
