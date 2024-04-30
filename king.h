#ifndef _KING_
#define _KING_

#include <iostream>

class King
{
public:
        King(const std::string&,const int&,const int&);
        ~King();
public:
        void printPosition() const;
        void printFigure() const;
        void setY(const int&);
        void setX(const int&);
        int getY() const;
        int getX() const;
private:
    std::string m_name = "The King";
    std::string m_color;
    std::string m_movement = "One square in any direction";
    int m_x = 0;
    int m_y = 0;
};



#endif // _KING_
