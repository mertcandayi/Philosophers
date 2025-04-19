#include "philo.h"

void	ft_usage(char *program_name)
{
	printf("\n           %sPHILOSOPHERS USAGE%s           \n\n", CYAN, RESET);
	printf("%sError:%s Invalid arguments\n", RED, RESET);
	printf("%sUsage:%s %s %s<philos> <time_die> <time_eat> <time_sleep> [meals]%s\n\n", 
		GREEN, RESET, program_name, BLUE, RESET);
	printf("%sParameters:%s\n", MAGENTA, RESET);
	printf("  %s<philos>%s     : Number of philosophers and forks\n", BLUE, RESET);
	printf("  %s<time_die>%s   : Time in ms until a philosopher dies without eating\n", BLUE, RESET);
	printf("  %s<time_eat>%s   : Time in ms it takes to eat using two forks\n", BLUE, RESET);
	printf("  %s<time_sleep>%s : Time in ms spent sleeping\n", BLUE, RESET);
	printf("  %s[meals]%s      : Optional - number of times each philosopher must eat\n", BLUE, RESET);
}

int main(int ac, char **av)
{
    if(ac != 4 || ac != 5)
    {
        ft_usage(av[0]);
        return (0);
    }
}