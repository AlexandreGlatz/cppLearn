#include "Road.h"
#include"tools.h"
#include<iostream>

Road::Road(int roadWidth, int roadLenght, int offsetX, int roadSize)
{
	m_roadSize = roadSize;
	m_roadWidth = roadWidth;
	m_roadLength = roadLenght;
	m_offsetX = offsetX;
	m_initialOpen = m_roadWidth/2 - m_roadSize/2;
	m_playerPos = 0;
}

Road::Road()
{
	m_initialOpen = 12;
	m_roadSize = 5;
	m_roadWidth = 15;
	m_roadLength = 15;
	m_offsetX = 10;
}

Road::~Road()
{
}

void Road::DisplayRoad()
{
	for (int i = 0; i < m_roadLength; i++)
	{
		std::vector<std::string> line = m_displayedRoad.at(i);

		for (int j = 0; j < m_roadWidth + m_offsetX; j++)
			std::cout << line.at(j);

		std::cout << std::endl;
	}
}

std::vector<std::string> Road::GenerateLine()
{
	m_initialOpen += rand() % 3 - 1;

	std::vector<std::string> line;

	for (int j = 0; j < m_roadWidth + m_offsetX; j++)
	{
		if (j < m_initialOpen || j > m_initialOpen + m_roadSize + 1)
			line.push_back(".");

		else if (j == m_initialOpen || j == m_initialOpen + m_roadSize + 1)
			line.push_back("#");

		else
			line.push_back(" ");
	}

	return line;
}

void Road::GenerateFirstDisplayedRoad()
{
	for (int i = 0; i < m_roadLength; i++)
	{
		std::vector<std::string> line = GenerateLine();
			
		m_displayedRoad.push_back(line);
	}
}

void Road::MoveForward()
{
	std::vector<std::string> newLine = GenerateLine();
	FifoInsert(m_displayedRoad, newLine);
}