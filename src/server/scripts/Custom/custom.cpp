#include "ScriptPCH.h"

/* This is where custom scripts' loading functions should be declared. */
void AddSC_DuelReset();
void AddSC_wow_x_commandscript();
void AddSC_npc_teleport();

/* This is where custom scripts should be added. */
void AddSC_custom()
{
    AddSC_DuelReset();
    AddSC_wow_x_commandscript();
    AddSC_npc_teleport();
}