#include "Camera.h"

Camera::Camera(int x, int y)
{
	m_posX = x;
	m_posY = y;
}

Camera::Camera()
{
	m_posX = 0;
	m_posY = 0;
}

Camera::~Camera()
{
}

void Camera::MoveForward()
{
	m_posY += 1;
}

void Camera::MoveSide(int direction)
{
	m_posX += direction;
}

void Camera::SetCameraPos(int x, int y)
{
	m_posX = x;
	m_posY = y;
}

int* Camera::GetCameraPos()
{
	int pos[2] = { m_posX, m_posY };
	return pos;
}