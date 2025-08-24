#include <SDL3/SDL.h>
//#include <SDL3/SDL_events.h>
#include <memory>
constexpr auto SCREEN_WIDTH = 640;
constexpr auto SCREEN_HEIGHT = 480;
int main(int argc, char** argv) {
	SDL_Window* window = NULL;
	SDL_Surface *windowSurface = NULL;

	if (0 > SDL_Init(SDL_INIT_VIDEO)) {
		perror("SDL3 Initialization failed");
		return EXIT_FAILURE;
	}
	window = SDL_CreateWindow("SDL Basis",SCREEN_WIDTH,SCREEN_HEIGHT, SDL_WINDOW_OPENGL );
	if (NULL == window) {
		perror("Window Initialization Failed");
		return EXIT_FAILURE;
	}
	


	windowSurface = SDL_GetWindowSurface(window);

	if (false == SDL_FillSurfaceRect(windowSurface, NULL, 0xffffffff)) {
		perror("Surface filling failed");
		return EXIT_FAILURE;
	}
	
	// surface must be updated after each modifications
	SDL_UpdateWindowSurface(window);


	// keeping window open
	SDL_Event e;
	bool quit = false;
	while (false == quit) {
		while (false != SDL_PollEvent(&e)) {
			if (SDL_EVENT_QUIT == e.type) {
				quit = true;
			}
		}
	}


	SDL_DestroyWindow(window);
	SDL_Quit();

	return EXIT_SUCCESS;
}
