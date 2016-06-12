#ifndef GAME_SERVER_FADMIN_H
#define GAME_SERVER_FADMIN_H
#undef GAME_SERVER_FADMIN_H // this file can be included several times
#ifndef CONSOLE_COMMAND
#define CONSOLE_COMMAND(name, params, flags, callback, userdata, help)
#endif
CONSOLE_COMMAND("up", "?v", CFGFLAG_SERVER, ConUp, this, "")
CONSOLE_COMMAND("down", "?v", CFGFLAG_SERVER, ConDown, this, "")
CONSOLE_COMMAND("left", "?v", CFGFLAG_SERVER, ConLeft, this, "")
CONSOLE_COMMAND("right", "?v", CFGFLAG_SERVER, ConRight, this, "")
CONSOLE_COMMAND("tele", "vi", CFGFLAG_SERVER, ConTeleport, this, "")
#undef CONSOLE_COMMAND

#endif