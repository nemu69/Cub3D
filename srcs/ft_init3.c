/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_init3.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/10 16:50:12 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/10 19:55:09 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/cube.h"

int			ft_init_hubdraw(t_file *file)
{
	if (!(F->HD = malloc(sizeof(t_hubdr))))
	{
		ft_free_fil(F);
		ft_printf("Error\nMalloc hub draw\n");
		return (0);
	}
	return (1);
}

int			ft_init_audio(t_file *file)
{
	if (!(F->audio = malloc(sizeof(t_audio))))
	{
		ft_free_fil(F);
		ft_printf("Error\nMalloc hub draw\n");
		return (0);
	}
	Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 1024);
	F->audio->damaged = Mix_LoadWAV("./audio/damaged.mp3");
	F->audio->music = Mix_LoadMUS("./audio/music.mp3");
	Mix_PlayMusic(F->audio->music, -1);
	Mix_VolumeMusic(10);
	return (1);
}