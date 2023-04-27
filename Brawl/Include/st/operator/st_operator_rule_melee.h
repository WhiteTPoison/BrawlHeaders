#pragma once

#include <StaticAssert.h>
#include <gm/gm_result_info.h>
#include <st/operator/st_operator_rule.h>
#include <types.h>

class stOperatorRuleMelee : public stOperatorRule {
public:
    gmResultInfo* m_resultInfo;
    char _144[2];
    u8 m_146;
    char _147[13];
    unsigned int m_remainingFrameTime;
    unsigned int m_time;
    unsigned int m_frameCounter;
    char _172[368];

    virtual void processBegin();
    virtual ~stOperatorRuleMelee();
    virtual bool isEnd();
    virtual void startOperator();
    virtual void calcScore();
    virtual bool isSuddenDeath();
    virtual void adjustResultInfo();
    virtual void notifyEventKnockout(u32);
    virtual bool notifyEventDead(int entryId, u32 playerIndex, int);
    virtual void notifyEventStartStage();
    virtual void notifyEventSetupCorps();
    virtual void notifyEventBeat(u32 playerIndex1, u32 playerIndex2);
    virtual void networkWriteRanking();
    virtual void updateExtraInfo();
    virtual bool checkExtraRule();
    virtual void decisionExtraRule();
    virtual void calcHighScore();
    virtual bool getNextCorpsPutMemberCharaKind(u8*, u8*);
    virtual bool searchCorpsPutMember(u32, int, u32*, u32*, u8*);
    virtual void putCorpsPutMember(void*, u32 characterKind, u32 costumeId, u8, bool);
};
static_assert(sizeof(stOperatorRuleMelee) == 604, "Class is wrong size!");