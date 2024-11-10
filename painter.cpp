#include "painter.hpp"
#include <iostream>

void Painter::DrawImage(Point topLeft, Point bottomRight, std::vector<std::string>& image) {
    std::cout << "Drawing image from (" << topLeft.x << ", " << topLeft.y << ") to ("
              << bottomRight.x << ", " << bottomRight.y << ")" << std::endl;
}

void Painter::WriteText(Point position, const std::string& text) {
    std::cout << "Writing text at (" << position.x << ", " << position.y << "): " << text << std::endl;
}
