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
    void processBegin();
    ~stOperatorReadyGo();
    bool isEnd();
    void startOperator();
    void calcScore();
    bool isSuddenDeath();
    void adjustResultInfo();
    void notifyEventKnockout(u32);
    bool notifyEventDead(int entryId, u32 playerIndex, int);
    void notifyEventStartStage();
    void notifyEventSetupCorps();
    void notifyEventBeat(u32 playerIndex1, u32 playerIndex2);
    void networkWriteRanking();
    void updateExtraInfo();
    bool checkExtraRule();
    void decisionExtraRule();
    void calcHighScore();
    bool getNextCorpsPutMemberCharaKind(u8*, u8*);
    bool searchCorpsPutMember(u32, int, u32*, u32*, u8*);
    void putCorpsPutMember(void*, u32 characterKind, u32 costumeId, u8, bool);
};