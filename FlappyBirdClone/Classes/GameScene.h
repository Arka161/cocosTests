#ifndef __GAME_SCENE_H__
#define __GAME_SCENE_H__

#include "cocos2d.h"
#include "Pipe.h"
#include "Bird.h"

class GameScene : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    
    // implement the "static create()" method manually
    CREATE_FUNC(GameScene);

private: 
	void setPhysicsWorld(cocos2d::PhysicsWorld * world) { sceneWorld = world;  };
	void SpawnPipe(float dt);
	cocos2d::PhysicsWorld * sceneWorld;
	bool onContactBegin(cocos2d::PhysicsContact &contact);

	Pipe pipe;
	Bird *bird;
};

#endif // __GAME_SCENE_H__
