#include "snake.hpp"

Snake::Snake() : length(1) {
    segments.push_back(Point(10, 10)); 
}

void Snake::Move(const Point& direction) {
    if (segments.empty()) return;

 
    for (int i = length - 1; i > 0; --i) {
        segments[i] = segments[i - 1];
    }

    segments[0].x += direction.x;
    segments[0].y += direction.y;
}

void Snake::Grow() {
    if (length < 100) {
        segments.push_back(segments[length - 1]); 
        length++;
    }
}

Point Snake::GetHeadPosition() const {
    return segments[0];
}
