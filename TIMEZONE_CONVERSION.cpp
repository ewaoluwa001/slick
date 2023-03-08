//A prog ram to view your current time in other african time zones
#include<stdio.h>
#include<time.h>

int main()
{
	//define the variables
	struct tm *gmt, *local;
	time_t now;
	int options;
	
	//reading the current system time
	now = time(NULL);
	
	//displaying the system time in a well formatted local time
	local = localtime(&now);
	printf(" Localtime= %d:%d:%d\n", local->tm_hour, local->tm_min, local->tm_sec);
	printf("\n");
	
	//converting the system time to GMT
    gmt = gmtime(&now);
    
    //displaying the timezones available
    printf(" Timezones available:\n");
    printf(" 1.Cape Verde Time(CVT)\n 2.West Africa Time(WAT)\n 3.Greenwich Mean Time(GMT)\n 4.Central Africa Time(CAT)\n 5.East Africa Time(EAT)\n 6.Mauritius & Seychelles Time(MT)\n");   
    printf("\n");
    printf("Input your preferred option:\n");
    scanf("%d", &options);
    printf("\n");
    
    //using the switch option to distinguish between the option choosen
    switch(options) {
    //displaying the time in CVT
    case 1:
    printf("Cape Verde Time(CVT)= %d:%d:%d\n", gmt->tm_hour-1, gmt->tm_min, gmt->tm_sec);
    break;
    //displaying the time in WAT
    case 2:
    printf("West Africa Time(WAT)= %d:%d:%d\n", gmt->tm_hour+1, gmt->tm_min, gmt->tm_sec);
    break;
    //displaying the time in GMT
    case 3:
    printf("Greenwich Mean Time(GMT)= %d:%d:%d\n", gmt->tm_hour, gmt->tm_min, gmt->tm_sec);
    break;
    //displaying the time in CAT
    case 4:
    printf("Central Africa Time(CAT)= %d:%d:%d\n", gmt->tm_hour+2, gmt->tm_min, gmt->tm_sec);
    break;
    //displaying the time in EAT
    case 5:
    printf("East Africa Time(EAT)= %d:%d:%d\n", gmt->tm_hour+3, gmt->tm_min, gmt->tm_sec);
    break;
    //displaying the time in MT 
    case 6:
    printf("Mauritius & Seychelles Time(MT)= %d:%d:%d\n", gmt->tm_hour+4, gmt->tm_min, gmt->tm_sec);
    break;
    //default statement
    default:
    	printf("The option you inputed is not available\n");
	}
	
    return 0;
    
}
