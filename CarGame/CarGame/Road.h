#pragma once
#include "Camera.h"
#include<vector>
#include<string>

class Road : public Camera
{
public:
	Road(int roadWidth, int roadLenght, int offsetX, int roadSize);
	Road();
	virtual ~Road();

	virtual void MoveForward();
	void DisplayRoad();
	void GenerateFirstDisplayedRoad();

private:
	
	std::vector<std::string> GenerateLine();

	int m_initialOpen;
	int m_roadWidth;
	int m_roadLength;
	int m_offsetX;
	int m_roadSize;
	int m_playerPos;

	std::vector<std::vector<std::string>> m_displayedRoad;
	
};