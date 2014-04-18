#include "ScriptPCH.h"
#include "ScriptMgr.h"
#include "Config.h"

class Reset_OnDuelEnd : public PlayerScript
{
    public:
        Reset_OnDuelEnd() : PlayerScript("Reset_OnDuelEnd") {}

    void OnDuelEnd(Player *winner, Player *looser, DuelCompleteType /*type*/)
    {
	    // reset cooldowns in global duel zone
        if (winner->GetZoneId() == 2037)
        {
            winner->RemoveArenaSpellCooldowns();
            looser->RemoveArenaSpellCooldowns();
            winner->SetHealth(winner->GetMaxHealth());
            looser->SetHealth(looser->GetMaxHealth());
            if (winner->getPowerType() == POWER_MANA)
                winner->SetPower(POWER_MANA, winner->GetMaxPower(POWER_MANA));
            if (looser->getPowerType() == POWER_MANA) 
                looser->SetPower(POWER_MANA, looser->GetMaxPower(POWER_MANA));
			if (winner->getClass() == 9)
				if (!winner->HasItemCount(6265,32))
					winner->AddItem(6265,1); // add soulshard for warlocks
			if (looser->getClass() == 9)
				if (!looser->HasItemCount(6265,32))
					looser->AddItem(6265,1); // add soulshard for warlocks

            winner->HandleEmoteCommand(EMOTE_ONESHOT_CHEER);
        }
    }
};

void AddSC_DuelReset()
{
    new Reset_OnDuelEnd();
}