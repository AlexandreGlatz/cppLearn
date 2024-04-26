#pragma once
#include<vector>
#include<string>
#include<iostream>

void FifoInsert(std::vector<std::vector<std::string>> &vect, std::vector<std::string> &insertVect)
{
	for (int i = vect.size()-2; i >0; i--)
		vect[i] = vect[i - 1];
	
	vect[0] = insertVect;
}