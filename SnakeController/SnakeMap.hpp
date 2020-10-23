#pragma once
#include <utility>

class SnakeMap {
public:
    bool isPositionOutsideMap(int x, int y) const;
    std::pair<int, int> m_mapDimension;
    std::pair<int, int> m_foodPosition;
};
