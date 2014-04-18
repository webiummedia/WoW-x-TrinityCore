#include "ScriptMgr.h"

class wow_x_commandscript : public CommandScript
{
public:
    wow_x_commandscript() : CommandScript("wow_x_commandscript") { }

    ChatCommand* GetCommands() const
    {
        static ChatCommand wow_x_CommandTable[] =
        {
            { "duel",             SEC_PLAYER,  false, &HandleDuelCommand,         "", NULL },
			{ "stuck",            SEC_PLAYER,  false, &HandleUnstuckCommand,      "", NULL },
            { NULL,               0,           false, NULL,                       "", NULL }
        };
        return wow_x_CommandTable;
    }

    static bool HandleDuelCommand(ChatHandler* handler, const char* args)
    {

		Player* player = handler->GetSession()->GetPlayer();
		if (player && !player->IsInCombat() && !player->HasAura(9454))
                player->TeleportTo(0, 4299.75f, -2761.3088f, 16.776f, 3.679251f);
		else
                handler->PSendSysMessage("You are in combat or freezed.");

        return true;
    }

    static bool HandleUnstuckCommand(ChatHandler* handler, const char* args)
    {

		Player* player = handler->GetSession()->GetPlayer();
		if (player && !player->IsInCombat() && !player->HasAura(9454))
			player->TeleportTo(player->m_homebindMapId, player->m_homebindX, player->m_homebindY, player->m_homebindZ, 3.679251f);

			if (player->isDead())
					player->ResurrectPlayer(100);
		else
                handler->PSendSysMessage("You are in combat or freezed.");

        return true;
    }
};

void AddSC_wow_x_commandscript()
{
    new wow_x_commandscript();
}