#pragma once

#include <utility>

class Food
{
public:
    std::pair<int, int> getFoodPosition();
    void setFoodPosition(int x, int y); 

private:
    std::pair<int, int> m_foodPosition;
};