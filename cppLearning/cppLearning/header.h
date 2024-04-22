#pragma once
class Rectangle
{
public:
	Rectangle(int x, int y, int width, int height);

	int GetBottom() const;
	void SetBottom(int y);

	int GetRight() const;
	void SetRight(int x);
	
	int GetArea() const;
	virtual ~Rectangle();

private:
	int m_posX;
	int m_posY;
	int m_width;
	int m_height;

}; 
