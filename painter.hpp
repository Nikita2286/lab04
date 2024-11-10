#pragma once
#include "abstract_painter.hpp"
#include <string>
#include <vector>

class Painter : public AbstractPainter {
public:
    virtual void DrawImage(Point topLeft, Point bottomRight, std::vector<std::string>& image) override; 
    virtual void WriteText(Point position, const std::string& text) override;                     
};
