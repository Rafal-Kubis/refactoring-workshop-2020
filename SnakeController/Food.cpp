#include "Food.hpp"

std::pair<int, int> Food::getFoodPosition()
{
    return m_foodPosition;
}

void Food::setFoodPosition(int x, int y)
{
    m_foodPosition = std::make_pair(x, y);
}