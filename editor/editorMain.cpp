#include <iostream>

#include <SDL3/SDL_error.h>
#include <SDL3/SDL_events.h>
#include <SDL3/SDL_log.h>
#include <SDL3/SDL_stdinc.h>
#include <SDL3/SDL_video.h>
int main(int argc, char* argv[]) {
    bool done = false;

    const SDL_Window *window =
        SDL_CreateWindow(
        "M-GameEngine",
        640,
        480,
        SDL_WINDOW_VULKAN);

    if (window == nullptr) {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Failed to create window: %s", SDL_GetError());
        return 1;
    }

    while (!done) {
        SDL_Event event = {};

        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_EVENT_QUIT) {
                done = true;
            }
        }
    }
    return 0;
}
