#ifndef _ROOK_
#define _ROOK_

#include <iostream>

class Rook
{
public:
        Rook(const std::string&,const int&,const int&);
        ~Rook();
public:
        void printPosition() const;
        void printFigure() const;
        void setY(const int&);
        void setX(const int&);
        int getY() const;
        int getX() const;
private:
    std::string m_name = "The Rook";
    std::string m_color;
    std::string m_movement = "Horizontally or vertically in a straight line";
    int m_x = 0;
    int m_y = 0;
};



#endif // _ROOK_


