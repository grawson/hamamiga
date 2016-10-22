#pragma once
#include "Types.h"
#include "TileMap.h"

struct _Mix_Music;
struct Texture;

const uint8 MaxSlides_ = 16;

struct CutScene {
	uint16 slideCount;
	uint16 current;
	Texture* slides[MaxSlides_];
};

struct Zone {
	String128 name;		/* The name of the current zone. */
	TileMap tileMap;
	_Mix_Music* music;

	CutScene startScene;
	CutScene endScene;
};

void Zone_Create(const char* name, Zone* embeddedZones);