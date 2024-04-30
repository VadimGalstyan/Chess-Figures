#ifndef _KINGHT_
#define _KNIGHT_

#include <iostream>

class Knight
{
public:
        Knight(const std::string&,const int&,const int&);
        ~Knight();
public:
        void printPosition() const;
        void printFigure() const;
        void setY(const int&);
        void setX(const int&);
        int getY() const;
        int getX() const;
private:
    std::string m_name = "The Knight";
    std::string m_color;
    std::string m_movement = "An 'L-shaped' move";
    int m_x = 0;
    int m_y = 0;
};



#endif // _KNIGHT_

