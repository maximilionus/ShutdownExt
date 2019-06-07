#pragma once
int shext_convertToSeconds(int *inputArr)
{
	/********
	0 - Days
	1 - Hours
	2 - Mins
	3 - Secs
	********/

	int seconds = (inputArr[0] * 86400) + (inputArr[1] * 3600) + (inputArr[2] * 60) + inputArr[3];
	return seconds;
}
int shext_parseTime(std::string date_in)
{
	int date[4];
	int parserBegin = 0;
	int parserDetectedPos;
	std::string selectedPart;
	for (int i = 0; i <= 3; i++)
	{
		parserDetectedPos = date_in.find(":", parserBegin);
		selectedPart = date_in.substr(parserBegin, parserDetectedPos);
		date[i] = System::Convert::ToInt32(selectedPart.c_str());
		parserBegin = parserDetectedPos + 1;
	}

	return date[0];
}
std::string shext_selectExecMethod(int input_method)
{
	std::string FinalSelectedMethod;
	switch (input_method)
	{
	case 0: {FinalSelectedMethod = "s"; break; }
	case 1: {FinalSelectedMethod = "r"; break; }
	case 2: {FinalSelectedMethod = "h"; break; }
	}

	return FinalSelectedMethod;
}