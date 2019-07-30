#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <time.h>

int main(){

	float start_time = (float)clock()/CLOCKS_PER_SEC;

	if(access("temp.file", (R_OK|W_OK)) == 0){
		int descriptor_1 = creat("test.file", 660);

		if(descriptor_1 == -1){
			fprintf(stderr, "Creat error %s\n", strerror(errno));
		}

		int descriptor_2 = open("temp.file", 0);

		if(descriptor_2 == -1){
			fprintf(stderr, "Open error %s\n", strerror(errno));
		}

		close(descriptor_1);
		close(descriptor_2);
	}

	float end_time = (float)clock()/CLOCKS_PER_SEC;

	float time_elapsed = end_time - start_time; 

	printf("%f\n", time_elapsed);

	return 0;
}