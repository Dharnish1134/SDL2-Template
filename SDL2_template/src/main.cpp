#include<stdio.h>
#include<SDL.h>

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 640;

int main(int argc,char* args[])
{
   //creating window and surface
   SDL_Window* window = NULL;
   SDL_Surface* Screensurface = NULL;

   //Initialise SDL
   if(SDL_Init(SDL_INIT_VIDEO)<0)
   {
   	 printf("SDL Could not Initialise!SDL_error:%s\n",SDL_GetError());
   } 
   else
   {
   	//create window
   	window = SDL_CreateWindow("SDL WINDOW",SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED,SCREEN_WIDTH,SCREEN_HEIGHT,SDL_WINDOW_SHOWN);
   	if(window == NULL)
   	{
   		printf("Window cannot be created!SDL_error:%s\n",SDL_GetError());
   	}
   	else
   	{
   		//get window surface
   		Screensurface = SDL_GetWindowSurface(window);

   		//Fill surface
   		SDL_FillRect(Screensurface,NULL,SDL_MapRGB(Screensurface->format,128,0,32));

   		//update window
   		SDL_UpdateWindowSurface(window);

   		//hold screen from closing
   		SDL_Event e;
   		bool quit = false;
   		while(quit == false)
   		{
   			while(SDL_PollEvent(&e))
   			{
   				if(e.type == SDL_QUIT)
   				{
   					quit = true;
   				}
   			}
   		}
   	}
   }

   //Destroy window
   SDL_DestroyWindow(window);
   //Quit SDL subsystem
   SDL_Quit();

   return 0;
}
