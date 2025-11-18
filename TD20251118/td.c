#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

double kmh_to_ms(double v_kmh);
double reaction_distance(double speed, double reaction_time);
double break_distance(double speed, double deceleration);
double total_stop_distance(double speed, double reaction_time, double deceleration);
bool stop_before_obstacle(double stop_distance, double obstacle_distance);

int main(int argc, const char *argv[])
{
	double v_kmh = 90;
	//printf(" Enter the speed (km/h):");
	//scanf("%lf", &v_kmh);
	double v_ms = kmh_to_ms(v_kmh);
	//printf("%lf\n", v_ms);

	double reaction_time = 1;
	//printf(" Enter the reaction time (s):");
	//scanf("%lf", &reaction_time);
	//printf("%.2lf\n", reaction_distance(v_ms, reaction_time));

	double deceleration = 7.5;
	double stop_distance = total_stop_distance(v_ms, reaction_time, deceleration);
	double distance_obstacle = 70;
	printf("%.2lf\n", stop_before_obstacle(stop_distance,distance_obstacle));

	return 0;
}

double kmh_to_ms(double v_kmh)
{
	assert(v_kmh >= 0);		//si vrai cela continue, si faux cela stop le porgramme / plutot pour du débueug que pour application client

	return v_kmh / 3.6;
}
double reaction_distance(double speed, double reaction_time)
{
	assert(speed >= 0);
	assert(reaction_time >= 0);

	return speed * reaction_time;
}
double break_distance(double speed, double deceleration)
{
	assert(speed >= 0);
	assert(deceleration >= 0);

	return (speed *speed) / (2*deceleration);
}
double total_stop_distance(double speed, double reaction_time, double deceleration)
{
	return reaction_distance(speed,reaction_time) + break_distance(speed, deceleration);
}
bool stop_before_obstacle(double stop_distance, double obstacle_distance)
{
	assert(stop_distance >= 0);
	assert(obstacle_distance >= 0);

	return ;
}
