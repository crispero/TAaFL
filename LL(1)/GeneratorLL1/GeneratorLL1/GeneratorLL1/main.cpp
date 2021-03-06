﻿#include "GeneratorLL1.h"
#include "GuideSets.h"
#include <iostream>

int main(int argc, char* argv[])
{
	if (argc != 3)
	{
		std::cerr << "The number of arguments does not match the task condition\n"
					 "Input should look: GeneratorLL1.exe <input file> <output file>\n";
		return 1;
	}

	std::ifstream fileInput(argv[1]);
	std::ofstream fileOutput(argv[2]);

	std::ofstream fileGuideSets("output_guideSets.txt");

	if (!fileInput.is_open())
	{
		std::cerr << "This file does not exist" << std::endl;
		return 1;
	}

	std::srand(unsigned(std::time(0)));

	std::vector<OutputDataGuideSets> outputDatasSets = GetFormingGuideSets(fileInput);
	PrintResultGuideSets(fileGuideSets, outputDatasSets);

	std::vector<OutputData> outputDatas = GetGenerateData(outputDatasSets);
	PrintResult(fileOutput, outputDatas);
}