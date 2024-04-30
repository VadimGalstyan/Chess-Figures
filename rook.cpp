#include "rook.h"

Rook::Rook(const std::string& color,const int& x,const int& y)
               :
               m_color(color),m_x(x),m_y(y)
{
}

Rook::~Rook()
{
}

void Rook::printPosition() const
{
        std::cout<<"X: "<<m_x<<",Y: "<<m_y<<std::endl;
}

void Rook::printFigure() const
{
        std::cout<<"Name: "<<m_name<<std::endl;
        std::cout<<"Color: "<<m_color<<std::endl;
        std::cout<<"Movement: "<<m_movement<<std::endl;
        std::cout<<"X: "<<m_x<<",Y: "<<m_y<<std::endl;
         std::cout<<std::endl;

}

void Rook::setY(const int& y)
{
       m_y = y;
}

void Rook::setX(const int& x)
{
       m_x = x;
}

int Rook::getY() const
{
        return m_y;
}

int Rook::getX() const
{
        return m_x;
}

