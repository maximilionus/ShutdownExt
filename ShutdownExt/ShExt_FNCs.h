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