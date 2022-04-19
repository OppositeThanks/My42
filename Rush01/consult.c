#include <unistd.h>

int	consult_pair(int *up, int *down, int *left, int *right);
int	up_dow(int *_up, int *_down, int i);
int	lef_rig(int *_left, int *_right, int i);

int	consult(char *input)
{
	int	i;
	int	j;
	int	up[4];
	int	down[4];
	int	left[4];
	int	right[4];
	int	error;

	i = 1;
	j = 0;
	while (i < 5)
	{
		up[i] = input[j];
		down[i] = input[8 + j];
		left[i] = input[16 + j];
		right[i] = input[24 + j];
		i++;
		j += 2;
	}
	error = consult_pair(up, down, left, right);
	return (error);
}

int	consult_pair(int *up, int *down, int *left, int *right)
{
	int	i;
	int	rompe;

	i = 0;
	rompe = 0;
	while (i < 4 && rompe == 0)
	{
		rompe = up_dow(up, down, i);
		if (rompe != 1)
			rompe = lef_rig(left, right, i);
		i++;
	}
	return (rompe);
}

int	up_dow(int *_up, int *_down, int i)
{
	int	falso;

	falso = 0;
	if (_up[i] == 4 && _down[i] != 1)
		falso = 1;
	if (_up[i] == 3 && (_down[i] == 3 || _down[i] == 4)) //1,2
		falso = 1;
	if (_up[i] == 2 && _down[i] == 4)
		falso = 1;
	// Ahora al revés
	if (falso != 1)
	{
		if (_down[i] == 4 && _up[i] != 1)
			falso = 1;
		if (_down[i] == 3 && (_up[i] == 3 || _up[i] == 4))
			falso = 1;
		if (_down[i] == 2 && _up[i] == 4)
			falso = 1;
	}
	return (falso);
}

int	lef_rig(int *_left, int *_right, int i)
{
	int falso;

	falso = 0;
	if (_left[i] == 4 && _right[i] != 1)
		falso = 1;
	if (_left[i] == 3 && (_right[i] == 3 || _right[i] == 4))
		falso = 1;
	if (_left[i] == 2 && _right[i] == 4)
		falso = 1;

	// Ahora al revés
	if (falso != 1)
	{
		if (_right[i] == 4 && _left[i] != 1)
			falso = 1;
		if (_right[i] == 3 && (_left[i] == 3 || _left[i] == 4))
			falso = 1;
		if (_right[i] == 2 && _left[i] == 4)
			falso = 1;
	}
	return (falso);
}