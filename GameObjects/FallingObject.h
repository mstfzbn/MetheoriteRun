/*
 * FallingObject.h
 *
 *  Created on: May 10, 2016
 *      Author: default
 */

#ifndef FALLINGOBJECT_H_
#define FALLINGOBJECT_H_

#include "MovableGameObject.h"

namespace GameObjects
{

class FallingObject : public MovableGameObject
{
public:
	FallingObject(World* world = NULL, int posX = 0, int velX = 0, int velY = 0);
	virtual ~FallingObject();
	virtual void Draw(SDL_Renderer* renderer);
	virtual void OnDestroy() override;
	virtual void Collide(IColidable*) override;

private:
	static const int MAX_SPRITE_COUNT = 15;
	static const int SPRITE_PER_LINE = 5;
	static const int CLIP_SIZE = 64;
	static const std::string LOAD_PATH;

	int m_currentSprite;

	unsigned m_currentFrame;
	bool dying;
};

}



#endif /* FALLINGOBJECT_H_ */
