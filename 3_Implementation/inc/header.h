/**
 * @file operation.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef HEADER_H
#define HEADER_H
#include<stdio.h>
#include "SDL/sdl.h"
#include "sdl/sdl_image.h"

#define speed 10
#define no 1
#define yes 0

SDL_Surface*load_image(char filename[]);

void pacman_sprites(SDL_Rect location,int direction,SDL_Surface*screen,char comp[20][12]);
void moveit(int key_press);
void createmap(SDL_Surface*screen,char comp[20][12]);
void build_map(SDL_Surface*screen);
int legibility(char comp[20][12],int*direction);
void gameplay(SDL_Surface*screen);//game playing time

void load_array(char comp[20][12],SDL_Surface*screen);
int writetofile(char comp[20][12]);//write to file
void what_is_around(char a[],char comp[20][12]);
#endif//HEADER_H_INCLUDED



