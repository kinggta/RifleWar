/* (c) Timo Buhrmester. See licence.txt in the root of the distribution   */
/* for more information. If you are missing that file, acquire a complete */
/* release at teeworlds.com.                                              */

#ifndef GAME_SERVER_GAMEMODES_RIFLE_H
#define GAME_SERVER_GAMEMODES_RIFLE_H
#include <game/server/gamecontroller.h>

class CGameControllerRIFLE : public IGameController
{
public:
	CGameControllerRIFLE(class CGameContext *pGameServer);
	virtual void Tick();
};
#endif
