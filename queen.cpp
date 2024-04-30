#include "queen.h"

Queen::Queen(const std::string& color,const int& x,const int& y)
               :
               m_color(color),m_x(x),m_y(y)
{
}

Queen::~Queen()
{
}

void Queen::printPosition() const
{
        std::cout<<"X: "<<m_x<<",Y: "<<m_y<<std::endl;
}

void Queen::printFigure() const
{
        std::cout<<"Name: "<<m_name<<std::endl;
        std::cout<<"Color: "<<m_color<<std::endl;
        std::cout<<"Movement: "<<m_movement<<std::endl;
        std::cout<<"X: "<<m_x<<",Y: "<<m_y<<std::endl;
         std::cout<<std::endl;

}

void Queen::setY(const int& y)
{
       m_y = y;
}

void Queen::setX(const int& x)
{
       m_x = x;
}

int Queen::getY() const
{
        return m_y;
}

int Queen::getX() const
{
        return m_x;
}

