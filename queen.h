#ifndef _QUEEN_
#define _QUEEN_

#include <iostream>

class Queen
{
public:
        Queen(const std::string&,const int&,const int&);
        ~Queen();
public:
        void printPosition() const;
        void printFigure() const;
        void setY(const int&);
        void setX(const int&);
        int getY() const;
        int getX() const;
private:
    std::string m_name = "The Queen";
    std::string m_color;
    std::string m_movement = "In a straight and diagonal line";
    int m_x = 0;
    int m_y = 0;
};



#endif // _QUEEN_

