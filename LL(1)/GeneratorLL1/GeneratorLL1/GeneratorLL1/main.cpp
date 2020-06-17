﻿#include "GeneratorLL1.h"
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

	if (!fileInput.is_open())
	{
		std::cerr << "This file does not exist" << std::endl;
		return 1;
	}

	std::vector<std::string> nonterminals;
	std::vector<InputData> inputDatas;
	std::vector<OutputData> outputDatas;

	FillingData(fileInput, inputDatas, nonterminals);
	Generate(inputDatas, outputDatas, nonterminals);
	PrintResult(fileOutput, outputDatas);
}