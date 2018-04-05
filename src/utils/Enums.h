#pragma once

#include "Arduboy2Ext.h"


#define MAX_NUMBER_OF_ENEMIES             20
#define MAX_NUMBER_OF_BULLETS             10

#define HORIZON_MIN_VALUE                 42
#define HORIZON_INCREMENT                 3
#define HORIZON_COL_COUNT                 7
#define HORIZON_ROW_COUNT                 5
#define ENEMY_FRAME_COUNT                 30
#define ENEMY_FRAME_COUNT_HALF            15

#define ENEMY_DISTANCE_HORIZON_START_1    24
#define ENEMY_DISTANCE_HORIZON_END_1      47
#define ENEMY_DISTANCE_HORIZON_START_2    48
#define ENEMY_DISTANCE_HORIZON_END_2      51
#define ENEMY_DISTANCE_FAR_START          52
#define ENEMY_DISTANCE_FAR_END            57
#define ENEMY_DISTANCE_MEDIUM_START       58
#define ENEMY_DISTANCE_MEDIUM_END         63
#define ENEMY_DISTANCE_CLOSE_START        64
#define ENEMY_DISTANCE_CLOSE_END          122

#define ENEMY_VISIBLE_HORIZON             24

#define WIDTH_HALF                        WIDTH / 2





static const int8_t ENEMY_MINIMUM_X                     = -80;
static const int8_t ENEMY_MAXIMUM_X                     = 80;
static const int8_t ENEMY_MINIMUM_Y                     = 0;
static const int8_t ENEMY_MAXIMUM_Y                     = 120;

static const uint8_t ENEMY_DISTANCE_FAR_WIDTH           = 5;
static const uint8_t ENEMY_DISTANCE_MEDIUM_WIDTH        = 8;
static const uint8_t ENEMY_DISTANCE_CLOSE_WIDTH         = 9;

static const uint8_t ENEMY_DISTANCE_FAR_HEIGHT          = 5;
static const uint8_t ENEMY_DISTANCE_MEDIUM_HEIGHT       = 7;
static const uint8_t ENEMY_DISTANCE_CLOSE_HEIGHT        = 13;

static const uint8_t ENEMY_DISTANCE_FAR_WIDTH_HALF      = 2;
static const uint8_t ENEMY_DISTANCE_MEDIUM_WIDTH_HALF   = 3;
static const uint8_t ENEMY_DISTANCE_CLOSE_WIDTH_HALF    = 6;


// ----------------------------------------------------------------------------
//  A better absolute as it uses less memory than the standard one .. 
//
template<typename T> T absT(const T & v) {
  
  return (v < 0) ? -v : v;

}


// ----------------------------------------------------------------------------
//  Clamp the value within the range .. 
//
template <typename T> T clamp(const T& value, const T& low, const T& high) 
{
  return value < low ? low : (value > high ? high : value); 
}

// ----------------------------------------------------------------------------
//  GameState defines the modes of the game ..
//
enum class GameState : uint8_t {

  Intro,
  GamePlay,
  GameOver

};


enum class ImageSize : uint8_t {

  Horizon,
  Far,
  Medium,
  Close

};


enum class EnemyType : uint8_t {

  EnemyType1,
  EnemyType2,

};


enum class MovementSequence : uint8_t {

  Sequence_1,       // Move left to right by xDelta.  When at edge of screen move forward yDelta, change x direction.  When at bottom of screen, reverse yDelta.
  Sequence_2,       // Move both X and Y simultaneously.  When at an edge of the screen, reverse direction.

};


enum class EnemyStatus : uint8_t {

  Dead,
  Explosion1,
  Explosion2,
  Explosion3,
  Explosion4,
  Active

};


// EnemyStatus ..

inline EnemyStatus operator++( EnemyStatus & c ) {

  c = static_cast<EnemyStatus>( static_cast<uint8_t>(c) + 1 );
  return c;

}

inline EnemyStatus operator++( EnemyStatus & c, int ) {

  EnemyStatus result = c;
  ++c;
  return result;

}

inline EnemyStatus operator--( EnemyStatus & c ) {
 
  c = static_cast<EnemyStatus>( static_cast<uint8_t>(c) - 1 );
  return c;

}

inline EnemyStatus operator--( EnemyStatus & c, int ) {

  EnemyStatus result = c;
  --c;
  return result;

}