#include "king.h"

King::King(const std::string& color,const int& x,const int& y)
               :
               m_color(color),m_x(x),m_y(y)
{
}

King::~King()
{
}

void King::printPosition() const
{
        std::cout<<"X: "<<m_x<<",Y: "<<m_y<<std::endl;
}

void King::printFigure() const
{
        std::cout<<"Name: "<<m_name<<std::endl;
        std::cout<<"Color: "<<m_color<<std::endl;
        std::cout<<"Movement: "<<m_movement<<std::endl;
        std::cout<<"X: "<<m_x<<",Y: "<<m_y<<std::endl;
        std::cout<<std::endl;
}

void King::setY(const int& y)
{
       m_y = y;
}

void King::setX(const int& x)
{
       m_x = x;
}

int King::getY() const
{
        return m_y;
}

int King::getX() const
{
        return m_x;
}

