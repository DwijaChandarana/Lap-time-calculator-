#include<stdio.h>
int main()
{
    float track_length;
    float speed;
    int laps;
    float lap_time;
    float total_time;
    int lap_min, lap_sec;
    int total_hr, total_min, total_sec;

    printf("Enter track length in km = ");
    scanf("%f",&track_length);

    printf("\n");

    printf("Enter average speed in km/h = ");
    scanf("%f",&speed);

    printf("\n");

    printf("Enter number of laps = ");
    scanf("%d",&laps);

    lap_time=(track_length/speed)*60;  // time=dis/speed *60 bcs 1hr=60 min 
    total_time=lap_time*laps;  // total time = lap time*laps

     //lap time conversion 
    lap_min=lap_time;
    lap_sec=(lap_time - lap_min)*60;

    //total time conversion
    int total_seconds=total_time*60;

    total_hr = total_seconds / 3600;
    total_min = (total_seconds % 3600) / 60;
    total_sec = total_seconds % 60;

    printf("Lap time: %d minutes %d seconds \n",lap_min,lap_sec);
    printf("Total race time: %d hours %d minutes %d seconds",total_hr,total_min,total_sec);


}