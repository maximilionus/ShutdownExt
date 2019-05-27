#pragma once
int shext_convertToSeconds(int *inputArr)
{
	/***
	0 - Days
	1 - Hours
	2 - Mins
	3 - Secs
	***/

	int seconds = (inputArr[0] * 86400) + (inputArr[1] * 3600) + (inputArr[2] * 60) + inputArr[3];
	return seconds;
}