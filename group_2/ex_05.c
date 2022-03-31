#include <stdio.h>

float	ft_media(float exam_1, float exam_2)
{
	float	average;

	printf ("Digite a primeira nota [0 ~ 10]: ");
	scanf ("%f", &exam_1);
	if (exam_1 == 50)
		return (0);
	printf ("Digite a segunda nota [0 ~ 10]: ");
	scanf ("%f", &exam_2);
	average = (exam_1 + exam_2) / 2;
	printf ("Média: %.1f\n", average);
	return (ft_media(exam_1, 0));
}

int	main(void)
{
	ft_media(0, 0);
	return (0);
}
