#include "road.h"
#include<stdlib.h>
#include<windows.h>

int main()
{
	bool isRunning = true;

	Road road = Road(30, 15, 10, 10);
	road.GenerateFirstDisplayedRoad();
	road.DisplayRoad();

	while (isRunning)
	{
		system("CLS");
		road.MoveForward();

		road.DisplayRoad();
		Sleep(50);
	}
	return 0;
}