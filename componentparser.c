#include <stdio.h>
#include <stdlib.h>

void parser(char d[128])
{
	char psBuffer[128];
	FILE* pPipe = _popen(d, "rt");

	while (fgets(psBuffer, 128, pPipe))
	{
		printf(psBuffer, "\n");
	}

	int endOfFileVal = feof(pPipe);
	int closeReturnVal = _pclose(pPipe);

	if (endOfFileVal)
	{
		closeReturnVal;
	}
	else
	{
		printf("Error: Failed to read the pipe to the end.\n");
	}
}