#include <StaticAssert.h>
#include <gm/gm_result_info.h>
#include <st/operator/st_operator_rule.h>
#include <types.h>

class _stOperatorReadyGo : public stOperator {
public:
    char _spacer[0xB8];
};

class stOperatorReadyGo : public _stOperatorReadyGo {
public:
    virtual void processBegin();
    virtual ~stOperatorReadyGo();
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