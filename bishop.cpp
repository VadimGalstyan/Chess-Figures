#include "bishop.h"

Bishop::Bishop(const std::string& color,const int& x,const int& y)
               :
               m_color(color),m_x(x),m_y(y)
{
}

Bishop::~Bishop()
{
}

void Bishop::printPosition() const
{
        std::cout<<"X: "<<m_x<<",Y: "<<m_y<<std::endl;
}

void Bishop::printFigure() const
{
        std::cout<<"Name: "<<m_name<<std::endl;
        std::cout<<"Color: "<<m_color<<std::endl;
        std::cout<<"Movement: "<<m_movement<<std::endl;
        std::cout<<"X: "<<m_x<<",Y: "<<m_y<<std::endl;
         std::cout<<std::endl;

}

void Bishop::setY(const int& y)
{
       m_y = y;
}

void Bishop::setX(const int& x)
{
       m_x = x;
}

int Bishop::getY() const
{
        return m_y;
}

int Bishop::getX() const
{
        return m_x;
}

