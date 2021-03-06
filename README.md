Check out the [demo](https://github.com/grawson/hamamiga/blob/master/Demo.mp4)!

#include a bit of happiness

#HaMaMiGa
Harry Cohen (hcohen23)
Matt Kosarek (mkosare1)
Mindy Seto (mSeto2)
Gavi Rawson (grawson)

The Fat Hactory Game! Yay!

To run:
1. brew install sdl2 sdl2_image sdl2_mixer sdl2_ttf
2. make clean && make
3. ./fathactory
4. enjoy the splendor that is our game.

General Controls:
'ESC' at any time will exit the game.
'M' to return to the Main menu, or to skip the fade in intro (go to Main screen anytime)
'N' to go from a win screen to the next level
'R' to restart a level from the win or lose screen or while in game
'P' to skip the game backstory/intro cut scene
'SPACE' to scroll read through the cut scenes
'Enter' to select menu options


Game Controls:
'I' to make Kevin INVINCIBLE (so you don't die)
'U' to cheat and Auto-Win the level
'X' to pick up hat and wear it
'SPACE' to close the pop-up notifications after picking up a hat
'Z' to shoot enemies when wearing the "Cowboy" hat
Arrow keys to move, 'SPACE' or up arrow to jump


Notes:
---------------
Pressing the "M" key at any time will return to Main menu. This is useful
for returning to the menu after dying or winning the game.

Options:
---------------
Selecting 'Options" from the menu leads to options screen. Currently there is one option
"Background Music". When selected (use UP/DOWN to scroll through options) pressing the "LEFT" key
makes the background music quieter. Pressing "RIGHT" key increases the background music volume.

Play
-----
Use arrow keys to jump and move. 'SPACE' or 'UP' to jump. Colliding with enemies will lead to Kevin
losing health, when Kevin loses all his health he dies. :(

However, if you want to make Kevin invincible, press the 'I' key to ensure ease
of testing. :)

Platforms can be jumped on by pressing 'SPACE' or 'UP' and jumping on top of them. You cannot
jump on the platform from underneath- you will collide with the bottom of the platform.

---------
CHAPTER 1: The Mysterious, Murderous Memo
---------
Hats:
-----
Bunny Hat: Makes the player jump higher (located at the very right on ground
floor)
Strobe Hat: PARTY! (located at very bottom right of level)
Crown: Escape! (located at the top left of level)

In order to win and escape this factory, you have to dodge the demons
and reach the magical crown (located at the very top left of the screen). The
crown can only be
reached in this level after the bunny hat is obtained. After obtaining the
bunny hat, it will be displayed in
the top right hand of the screen (underneath the health bar), and Kevin will
be granted SUPER JUMP POWERS!
This allows Kevin to jump to the skies and reach the crown.

Bunny hat is located on the far right of the level. Press 'X' to pick the hat
up to wear and gain super jump powers.

Now there is additional glamour hat hiding on the level which will cause a
super cool rainbow strobe to appear on the screen.
You will keep the powers of the bunny hat but you will see the disco hat on
your head. Press 'X' to pick up the disco hat.

--------
Chapter 2: Into the Vents!
--------
Hats:
-----
Cowboy Hat: Allows player to shoot enemies with 'Z' (located at the top left)
Miner's Hat: Lights up the level (located at the start)
Crown: Escape! (located at very bottom right of level)

After winning Chapter 1 (by completing the level, or by pressing 'U' to
auto-win), selecting "Play" again will load the second chapter.

Here Kevin is lost in a dark level after he escaped the previous demons and
landed in the vents! In this level you need the "Miner Hat" in order to clear
up the darkness and escape. The "Miner Hat" is located at the very beginning
of the level. Press 'X' to pick up the miner hat and light up the level!

Navigate through the vents to reach the crown. If the demons are too tough,
there is a Cowboy Hat located on the level that will help you kill them!

This level is very tough so it will probably be easiest to press 'U' to win.
However, if you want to challenge yourself and navigate through Chapter 2, the
crown is located in the bottom right corner of the second level.

--------
Chapter 3: Scurry Out of Shipping
--------
Hats:
-----
Beer Hat: Don't drink and fly! (near top right, follow the conveyor belts)
Propellor Hat: FLYYYYY! (very right, follow conveyor upwards, past the beer hat)
Crown: Escape! (located left from start, can see it)


Kevin is now lost in the shipping room! Don't stay on any conveyor belt too
long or you might fall to your death! It is very easy to plummet to your death
so be careful! :) Keep following the belts until you find the propellor hat
that lets you fly!

After obtaining the propellor hat, move around to reach the beer hat. Be
careful though, you might regret drinking and flying!

Press 'X' to equip the propellor hat and beer hat when Kevin is standing over
it.

--------
Chapter 4: Breakroom Brawl
--------
Hats:
-----
Propellor Hat: FLYYYYY! (second level, very right)
Chef Hat: Throws knives (third level, very left) !!!!Need propellor hat to
get!!!!
Crown: Escape! (first level, very right)


Kevin is now in the break room! Avoid the demon muffins and try not to collide
into the demons that are on a date! They won't hurt you unless you try to
third wheel them!

After obtaining the propellor hat, fly to the third level to get the chef hat!
After obtaining the chef hat, press 'Z' to throw knives and defeat the
enemies. You may have noticed that there is an apple wall blocking the crown.
Defeat the apples by throwing knives at them!

Press 'X' to equip the propellor hat and chef hat when Kevin is standing over
it.


---------------
Breakdown of what each member achieved:
---------------
Harry: Placed coins on the levels, added brief invincibility after being hit,
       moved enemies around on some levels, changed the spacing and placement
       of the words on the different menus, added titles to each different
       screen that Gavi so beautifully drew, and fixed a glitch in the bullet
       and knife code.

<<<<<<< HEAD
Matt: Huge bullet overhaul, added the concept of a team, circus hat tech
=======
Matt: Implemented the circus hat and added "teams" to make collision checking better.
>>>>>>> origin

Mindy: Added more things to the StatSystem + sound effects. Now after each level, stats are displayed after you die/win displaying what you achieved in that level. These stats are included in the overall main Game Stats in the main screen.

Gavi: Designed speech bubble, invincible and falling Kevin, circus hat,
      health bar, updated keys tutorial, fixed level 2 shaders, item interaction bubble,
      menu overlays
