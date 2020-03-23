/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2072.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 15:23:29 by yujo              #+#    #+#             */
/*   Updated: 2020/03/23 15:26:04 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int t;
	int n;

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		int sum = 0;
		for (int j = 0; j < 10; j++)
		{
			scanf("%d", &n);
			if (n % 2 != 0)
				sum += n;
		}
		printf("#%d %d\n", i + 1, sum);
	}

	return 0;
}
