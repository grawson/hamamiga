#include "Constants.h"
#include "Types.h"
#include "ComponentBag.h"
#include "Zone.h"

#include "AISystem.h"
#include "CameraSystem.h"
#include "InputSystem.h"
#include "MovementSystem.h"
#include "PhysicsSystem.h"
#include "RenderSystem.h"
#include "GoalSystem.h"
#include "SoundSystem.h"
#include "KillSystem.h"
#include "BulletSystem.h"

// Forward Declarations
struct SDL_Window;
struct SDL_Renderer;
struct _TTF_Font;
struct _Mix_Music;

struct CutScene {
	uint16 slideCount;			/* Number of slides. */
	uint16 current;				/* Current slide index. */
	Texture* slides[MaxSlides_];/* Slides. */
};

enum GameState {
	GameState_Intro = 0,
	GameState_Title,
	GameState_ZoneIntro,
	GameState_LoadPlay,
	GameState_LoadTutorial,
	GameState_Play,
	GameState_HighScore,
	GameState_Options,
	GameState_Pause,
	GameState_Win,
	GameState_Lose,
	GameState_Returning,
	GameState_Closing,
};

struct IntroState {
	float alpha;		/* Current opacity of introduction. */
	uint32 elapsed;		/* Time keeper of introduction. */
};

struct TitleState {
	const char* selectionStrings[Constants::TitleScreenTextures_];	/* Strings of title options. */
	uint8 selection;		/* Current title selection. */
	_TTF_Font* titleFont;	/* Used title font. */
	_Mix_Music* titleMusic;	/* Title music. */
};

struct HighScoreState {
	const char* scoreType[Constants::MaxHighScores_];
	int scores[Constants::MaxHighScores_];
	_TTF_Font* font;
};

struct OptionState {
	uint16 musicVolume = 128;		/* Current music volume. */
	float windowBrightness = 1.0f;	/* Current window brightness. */
	const char* selectionStrings[Constants::TitleScreenSelections_]; /* Options strings. */
	uint8 selection;				/* Current selection. */
	_TTF_Font* font;				/* Font used by options. */
};

struct ZoneIntroState {
	float alpha;			/* Opacity of intro. */
	uint32 elapsed;			/* Time elapsed in intro state. */
	_TTF_Font* font;		/* Font for chapter name. */

	bool sliding;			/* Check if we're in transition. */
	CutScene startScene;	/* Scenes at start of chapter. */
	CutScene endScene;		/* Scenes at end of chapter. */
};

struct PauseState {
	Texture** pauseTextures;	/* Pointer to an array of textures to display. */
	int pauseIndex;				/* Index inside array of textures. */
};

struct PlayState {
	/* Fonts */
	_TTF_Font* scoreFont;
	_TTF_Font* healthFont;

	bool loaded; 		/* Ensure file loaded properly. */
	uint8 currentLevel; /* Keeps track of player progress. TO-DO: Read from file! */
	Zone chapter;		/* The current level, loaded by FileLoader. */
	ComponentBag cBag;	/* All components. */

	/* Systems */
	AISystem aiSystem;
	CameraSystem cameraSystem;
	InputSystem inputSystem;
	MovementSystem movementSystem;
	PhysicsSystem physicsSystem;
	RenderSystem renderSystem;
	GoalSystem goalSystem;
	SoundSystem soundSystem;
	KillSystem killSystem;
	BulletSystem bulletSystem;
};

struct Game {
	// Game globals
	bool running;
	SDL_Window* window;
	SDL_Renderer* renderer;
	GameState gameState;

	// State structs to keep things coupled correctly
	ZoneIntroState zoneIntroState;
	IntroState introState;
	TitleState titleState;
	HighScoreState highScoreState;
	PlayState playState;
	OptionState optionState;
	PauseState pauseState;
};

bool Game_Initialize(Game* game);
void Game_RunLoop(Game* game);
void Game_Close(Game* game);
void Game_TriggerPause(Game* game, Texture** pauseTextures);


