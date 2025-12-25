#pragma once

#include <StaticAssert.h>
#include <types.h>

class gfScene {
public:
    const char* m_sceneName;
    virtual void start();
    virtual void process();
    virtual void exit();
    virtual void setModule();
};
static_assert(sizeof(gfScene) == 8, "Class is wrong size!");

class gfSequence {
public:
    const char* m_sequenceName;
    virtual void start();
    virtual void setNext();
    virtual void exit();
};
static_assert(sizeof(gfSequence) == 8, "Class is wrong size!");

class gfSceneManager {
public:
    gfScene* m_prevScene;
    gfScene* m_currentScene;
    gfScene* m_nextScene;
    gfSequence* m_prevSequence;
    gfSequence* m_currentSequence;
    gfSequence* m_nextSequence;
    gfScene* m_scenes[100];
    gfSequence* m_sequences[50];
    s32 m_sceneCount;
    s32 m_sequenceCount;
    char _spacer3[12];
    s32 unk1;
    s32 processStep;
    char _spacer4[148];

    gfScene* searchScene(const char* sceneName);
    gfSequence* searchSequence(const char* sequenceName);
    static gfSceneManager* getInstance();
    void setNextScene(const char* name, int unk);
    void changeNextScene();
    void setNextSequence(const char* name, int unk);
};
static_assert(sizeof(gfSceneManager) == 800, "Class is wrong size!");