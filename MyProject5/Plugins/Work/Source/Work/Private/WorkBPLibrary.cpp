// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "WorkBPLibrary.h"
#include "Work.h"
#include <iostream>
#include <fstream>
#include <string>
static TMap<FString, float> mapValues;
std::ofstream myfile;
UWorkBPLibrary::UWorkBPLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}
void UWorkBPLibrary::Input_BP(FText index, float value)
{
	mapValues.Add(index.ToString(), value);
}
void UWorkBPLibrary::Output_BP()
{
	myfile.open("C:\\Games\\test.csv", std::ofstream::app);
	FString inputs;
	inputs.Append(FString::SanitizeFloat(mapValues["Diff"]) + ",");
	inputs.Append(FString::SanitizeFloat(mapValues["DiffSquared"]) + ",");
	inputs.Append(FString::SanitizeFloat(mapValues["Velocity"]));
	inputs.Append("\n");
	myfile << TCHAR_TO_UTF8(*inputs);
	myfile.close();
}

void UWorkBPLibrary::Train(int numFeatures) {
	std::string command = "python C:\\Games\\linear_reg.py C:\\Games\\test.csv ";
	command.append(std::to_string(numFeatures));
	system(command.c_str());
}

float UWorkBPLibrary::LinearRegressionCalc(FString inputs) {
	std::string command = "python C:\\Games\\read_model.py C:\\Games\\model ";
	command.append(TCHAR_TO_UTF8(*inputs));
	system(command.c_str());
	std::ifstream file("C:\\Games\\result.txt");
	std::string txt;
	getline(file, txt);
	float val = ::atof(txt.c_str());
	return val;
}








float UWorkBPLibrary::NNCalc(FString inputs) {
	return 0;
}
