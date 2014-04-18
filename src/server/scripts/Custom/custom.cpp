#include "ScriptPCH.h"

/* This is where custom scripts' loading functions should be declared. */
void AddSC_DuelReset();
void AddSC_wow_x_commandscript();

/* This is where custom scripts should be added. */
void AddSC_custom()
{
    AddSC_DuelReset();
    AddSC_wow_x_commandscript();
}