#include "knight.h"

Knight::Knight(const std::string& color,const int& x,const int& y)
               :
               m_color(color),m_x(x),m_y(y)
{
}

Knight::~Knight()
{
}

void Knight::printPosition() const
{
        std::cout<<"X: "<<m_x<<",Y: "<<m_y<<std::endl;
}

void Knight::printFigure() const
{
        std::cout<<"Name: "<<m_name<<std::endl;
        std::cout<<"Color: "<<m_color<<std::endl;
        std::cout<<"Movement: "<<m_movement<<std::endl;
        std::cout<<"X: "<<m_x<<",Y: "<<m_y<<std::endl;
         std::cout<<std::endl;

}

void Knight::setY(const int& y)
{
       m_y = y;
}

void Knight::setX(const int& x)
{
       m_x = x;
}

int Knight::getY() const
{
        return m_y;
}

int Knight::getX() const
{
        return m_x;
}

