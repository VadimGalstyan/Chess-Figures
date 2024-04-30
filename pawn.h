#ifndef _PAWN_
#define _PAWN_

#include <iostream>

class Pawn
{
public:
        Pawn(const std::string&,const int&,const int&);
        ~Pawn();
public:
        void printPosition() const;
        void printFigure() const;
        void setY(const int&);
        void setX(const int&);
        int getY() const;
        int getX() const;
private:
    std::string m_name = "The Pawn";
    std::string m_color;
    std::string m_movement = "One square directly forward(sometimes two)";
    int m_x = 0;
    int m_y = 0;
};



#endif // _PAWN_

