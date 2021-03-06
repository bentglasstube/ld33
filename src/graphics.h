#pragma once

#include <SDL2/SDL.h>
#include <string>
#include <map>

class Graphics {
  public:

    Graphics();
    ~Graphics();

    void blit(const std::string& file, SDL_Rect* srect, SDL_Rect* drect);
    void flip();
    void clear();

    SDL_Texture* load_image(const std::string& file, bool transparency=false);

  private:

    typedef std::map<std::string, SDL_Texture*> TextureMap;
    TextureMap textures;
    SDL_Window* window;
    SDL_Renderer* renderer;
};
