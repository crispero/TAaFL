#pragma once
#include <algorithm>
#include <regex>
#include <string>
#include <vector>

const std::string NUMBER_REGULAR_EXPRESSION = "\\d+";

const std::string AUTOMAT_MOORE = "moore";
const std::string AUTOMAT_MEALY = "mealy";

const std::string SPASE = " ";
const std::string SYMBOL_Z = "z";
const std::string SYMBOL_S = "s";
const std::string SYMBOL_X = "x";
const std::string SYMBOL_Y = "y";

const std::string ERROR_FILE_NOT_EXIST = "This file does not exist";
const std::string ERROR_NOT_ENOUGH_ARGUMENTS = "The number of arguments does not match the task condition\n"
											   "Input should look: TransformationAutomat.exe <input file> <output file>\n";
const std::string ERROR_WRONG_DATA = "Wrong data\n";
const std::string ERROR_UNKNOWN_MACHINE = "Unknown machine\n";

using Edge = std::pair<size_t, size_t>;
using VectorEdge = std::vector<Edge>;
using VectorSize_t = std::vector<size_t>;
using VectorString = std::vector<std::string>;
using DualVectorSize_t = std::vector<VectorSize_t>;