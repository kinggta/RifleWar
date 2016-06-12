#include <game/server/gamecontext.h>
#include <game/server/entities/character.h>
#include <engine/shared/config.h>
#include <game/version.h>
#include <game/generated/nethash.cpp>
#if defined(CONF_SQL)
#include <game/server/score/sql_score.h>
#include <engine/server/server.h>
#endif

void CGameContext::ConLogout(IConsole::IResult *pResult, void *pUserData)
{
	CGameContext *pSelf = (CGameContext *) pUserData;
	int Victim = pResult->m_ClientID;

	if(Victim)
	pSelf->Server()->Logout(Victim);
}

void CGameContext::ConTeleport(IConsole::IResult *pResult, void *pUserData)
{
	CGameContext *pSelf = (CGameContext *) pUserData;
	int TeleTo = pResult->GetInteger(0);
	int Tele = pResult->GetVictim();


	if (pSelf->m_apPlayers[TeleTo])
	{
		CCharacter* pChr = pSelf->GetPlayerChar(Tele);
		if (pChr && pSelf->GetPlayerChar(TeleTo))
		{
			pChr->m_Core.m_Pos = pSelf->m_apPlayers[TeleTo]->m_ViewPos;
		}
	}
}

void CGameContext::ConUp(IConsole::IResult *pResult, void *pUserData)
{
CGameContext *pSelf = (CGameContext *) pUserData;
	int Move = pResult->GetVictim();


	if (pSelf->m_apPlayers[Move])
	{
		CCharacter* pChr = pSelf->GetPlayerChar(Move);
		if (pChr && pSelf->GetPlayerChar(Move))
		{
			pChr->m_Core.m_Pos.y += -32;
		}
	}
}

void CGameContext::ConDown(IConsole::IResult *pResult, void *pUserData)
{
CGameContext *pSelf = (CGameContext *) pUserData;
	int Move = pResult->GetVictim();


	if (pSelf->m_apPlayers[Move])
	{
		CCharacter* pChr = pSelf->GetPlayerChar(Move);
		if (pChr && pSelf->GetPlayerChar(Move))
		{
			pChr->m_Core.m_Pos.y += 32;
		}
	}
}

void CGameContext::ConLeft(IConsole::IResult *pResult, void *pUserData)
{
CGameContext *pSelf = (CGameContext *) pUserData;
	int Move = pResult->GetVictim();


	if (pSelf->m_apPlayers[Move])
	{
		CCharacter* pChr = pSelf->GetPlayerChar(Move);
		if (pChr && pSelf->GetPlayerChar(Move))
		{
			pChr->m_Core.m_Pos.x += -32;
		}
	}
}

void CGameContext::ConRight(IConsole::IResult *pResult, void *pUserData)
{
CGameContext *pSelf = (CGameContext *) pUserData;
	int Move = pResult->GetVictim();


	if (pSelf->m_apPlayers[Move])
	{
		CCharacter* pChr = pSelf->GetPlayerChar(Move);
		if (pChr && pSelf->GetPlayerChar(Move))
		{
			pChr->m_Core.m_Pos.x += 32;
		}
	}
}
