/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medayi    <medayi@student.42istanbul>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 15:38:28 by medayi            #+#    #+#             */
/*   Updated: 2025/04/19 19:37:31 by medayi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	ft_usage(char *program_name)
{
	printf("\n           %sPHILOSOPHERS USAGE%s           \n\n", CYAN, RESET);
	printf("%sError:%s Invalid arguments\n", RED, RESET);
	printf("%sUsage:%s %s %s<philos> <time_die>%s", GREEN, RESET, program_name, BLUE, RESET);
	printf(" %s<time_eat> <time_sleep> [meals]%s\n\n", BLUE, RESET);
	printf("%sParameters:%s\n", MAGENTA, RESET);
	printf("  %s<philos>%s     : Number of philosophers and forks\n", BLUE, RESET);
	printf("  %s<time_die>%s   : Time in ms until a philosopher dies without eating\n", BLUE, RESET);
	printf("  %s<time_eat>%s   : Time in ms it takes to eat using two forks\n", BLUE, RESET);
	printf("  %s<time_sleep>%s : Time in ms spent sleeping\n", BLUE, RESET);
	printf("  %s[meals]%s      : Optional - number of times each philosopher must eat\n", BLUE, RESET);
}

void	*ft_philo(void *arg)
{
	int		id;

	id = *(int *)arg;
	printf("Philosopher #%d: düşünüyorum...\n", id);
	usleep(500000);
	printf("Philosopher #%d: öyleyse varım\n", id);
	return (NULL);
}

int main(int ac, char **av)
{
	pthread_t	threads[MAX_PHILOSOPHERS];
	int		id[MAX_PHILOSOPHERS];
	int i;

    // if (ac != 4 || ac != 5)
    // {
    //     ft_usage(av[0]);
    //     return (0);
    // }

	i = 0;
	while (i < MAX_PHILOSOPHERS)
	{
		id[i] = i + 1;
		pthread_create(&threads[i], NULL, ft_philo, &id[i]);
		i++;
	}
	i = 0;
	while (i < MAX_PHILOSOPHERS)
	{
		pthread_join(threads[i], NULL);
		i++;
	}
}