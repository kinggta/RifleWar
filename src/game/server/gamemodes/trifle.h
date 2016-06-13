/* (c) Timo Buhrmester. See licence.txt in the root of the distribution   */
/* for more information. If you are missing that file, acquire a complete */
/* release at teeworlds.com.                                              */

#ifndef GAME_SERVER_GAMEMODES_TRIFLE_H
#define GAME_SERVER_GAMEMODES_TRIFLE_H
#include <game/server/gamecontroller.h>

class CGameControllerTRIFLE : public IGameController
{
public:
	CGameControllerTRIFLE(class CGameContext *pGameServer);

	int OnCharacterDeath(class CCharacter *pVictim, class CPlayer *pKiller, int Weapon);
	virtual void Snap(int SnappingClient);
	virtual void Tick();
};
#endif
