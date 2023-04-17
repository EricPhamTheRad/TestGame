#include <stdio.h>
#include <stdbool.h>
#include <D:\VSCODE\C_Projects\TestGame\include\glad\glad.h>
#define SDL_MAIN_HANDELED
#include <D:\VSCODE\C_Projects\TestGame\include\SDL2\SDL.h>


int main(int argc, char *argv[]){
    //Sets the Open GL version to 3
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK,SDL_GL_CONTEXT_PROFILE_CORE);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 3);
    
    //Prints effor if SDL does not intialized
    if(SDL_Init(SDL_INIT_VIDEO) < 0 ){
        printf("Cound not init SDL: %s\n", SDL_GetError());
        exit(1);
    }
    //makes pointer object to SDL window
    SDL_Window *window = SDL_CreateWindow(
        "MyGame", //name window title
        SDL_WINDOWPOS_CENTERED,   //centers window to middle of screen
        SDL_WINDOWPOS_CENTERED,
        800, //makes width 800px
        600, //makes height 600px
        SDL_WINDOW_OPENGL //use openGl
    );
    
    //Checks if window was made
    if(!window){
        printf("Failed to init window %s\n", SDL_GetError());
        exit(1);
    }

    //Loads the points in the right places in memory to be used
    SDL_GL_CreateContext(window);
    //checks if it actuall did that
    if (!gladLoadGLLoader((GLADloadproc)SDL_GL_GetProcAddress)){
        printf("Failed to load GL: %s\n", SDL_GetError());
        exit(1);
    }
    //print if succesful
    put("OpenGL Loaded");
    printf("Vendor:        %s\n", glGetString(GL_VENDOR));
    printf("Renderer:      %s\n", glGetString(GL_RENDERER));
    printf("Version:       %s\n", glGetString(GL_VERSION));



    puts("Hello there!");
    return 0;
}