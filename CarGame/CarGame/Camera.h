#pragma once

class Camera
{
public:
	Camera(int x, int y);
	Camera();
	virtual ~Camera();
	virtual void MoveForward();
	virtual void MoveSide(int direction);

	void SetCameraPos(int x, int y);
	int* GetCameraPos();

protected:
	int m_posX;
	int m_posY;

};