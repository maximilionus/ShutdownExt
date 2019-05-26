#pragma once
int shext_convertToSeconds(int inputArr[3])
{
	int seconds = (inputArr[0] * 86400) + (inputArr[1] * 3600) + (inputArr[2] * 60) + inputArr[3];
	return seconds;
}