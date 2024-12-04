#include <stdio.h>
#include <string.h>
struct Date{
	int day ;
	int month ;
	int year ;
};
struct Event{
	char event_name[20] ;
	struct Date date ;
	float longitude ;
	float latitude ;
};
int main(){
	struct Event e ;
	printf("Enter event name: ") ;
	fgets(e.event_name,20,stdin) ;
	size_t len = strlen(e.event_name);
    if (len > 0 && e.event_name[len - 1] == '\n') {
        e.event_name[len - 1] = '\0';
    }
	printf("Enter the date in format DD MM YYYY: ") ;
	scanf("%d %d %d",&e.date.day,&e.date.month,&e.date.year) ;
	printf("Enter location's longitude: ") ;
	scanf("%f",&e.longitude) ;
	printf("Enter location's latitude: ") ;
	scanf("%f",&e.latitude) ;
	printf("-----EVENT-----\nName: %s\nDate: %d/%d/%d\nLocation: %f,%f\n---------------",e.event_name,e.date.day,e.date.month,e.date.year,e.longitude,e.latitude) ;
    getchar() ;
    getchar() ;
}
