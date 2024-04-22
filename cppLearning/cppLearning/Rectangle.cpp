#include "header.h"

Rectangle::Rectangle()
{
}

Rectangle::Rectangle(int x,int y,int width,int height)
{
	m_posX = x;
	m_posY = y;
	m_width = width;
	m_height = height;
}

Rectangle::~Rectangle()
{
}

int Rectangle::GetRight() const
{
	return m_posX + m_width;
}

int Rectangle::GetBottom() const
{
	return m_posY + m_height;
}

void Rectangle::SetRight(int x) 
{
	m_posX = x - m_width;
}

void Rectangle::SetBottom(int y)
{
	m_posY = y - m_height;
}

int Rectangle::GetArea() const
{
	return m_width * m_height;
}

void Rectangle::SetRectangle(int x, int y, int width, int height)
{
	m_posX = x;
	m_posY = y;
	m_width = width;
	m_height = height;
}

int main() 
{
	Rectangle* pRect = new Rectangle(0,0,10,10);
	Rectangle fig[10];

	fig[0].SetBottom(10);

	for (int i = 0; i < 10; i++)
	{
		fig[i].SetRectangle(0, i * 10, 10, 10);
	}
	return 0;
}
