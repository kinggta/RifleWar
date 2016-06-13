/* (c) Timo Buhrmester. See licence.txt in the root of the distribution   */
/* for more information. If you are missing that file, acquire a complete */
/* release at teeworlds.com.                                              */

#include "rifle.h"


CGameControllerRIFLE::CGameControllerRIFLE(class CGameContext *pGameServer) : IGameController(pGameServer)
{
	m_pGameType = "RIFLE";
}

void CGameControllerRIFLE::Tick()
{
	IGameController::Tick();
}