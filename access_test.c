#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <time.h>

int main(){

	float start_time = (float)clock()/CLOCKS_PER_SEC;

	int rnt = access("temp.file", (R_OK|W_OK));

	float end_time = (float)clock()/CLOCKS_PER_SEC;

	float time_elapsed = end_time - start_time; 

	printf("%f\n", time_elapsed);

	return 0;
}