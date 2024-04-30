#include "pawn.h"

Pawn::Pawn(const std::string& color,const int& x,const int& y)
               :
               m_color(color),m_x(x),m_y(y)
{
}

Pawn::~Pawn()
{
}

void Pawn::printPosition() const
{
        std::cout<<"X: "<<m_x<<",Y: "<<m_y<<std::endl;
}

void Pawn::printFigure() const
{
        std::cout<<"Name: "<<m_name<<std::endl;
        std::cout<<"Color: "<<m_color<<std::endl;
        std::cout<<"Movement: "<<m_movement<<std::endl;
        std::cout<<"X: "<<m_x<<",Y: "<<m_y<<std::endl;
         std::cout<<std::endl;

}

void Pawn::setY(const int& y)
{
       m_y = y;
}

void Pawn::setX(const int& x)
{
       m_x = x;
}

int Pawn::getY() const
{
        return m_y;
}

int Pawn::getX() const
{
        return m_x;
}

