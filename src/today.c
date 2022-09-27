#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>

int main() {
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	// char year[1500];
	// year = tm.tm_year;
	char date[1500];
	char month[5];
	char day[5];
	char year[5];
	sprintf(year, "%04d", tm.tm_year + 1900);
	sprintf(month, "%02d", tm.tm_mon + 1);
	sprintf(day, "%02d", tm.tm_mday);
	strcat(date, month);
	strcat(date, "-");
	strcat(date, day);
	strcat(date, "-");
	strcat(date, year);
	mkdir(date, 0777);
	
}
