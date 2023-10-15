[eAIRegisterFaction(eAIFactionJaegar)]
class eAIFactionPasha : eAIFaction
{
	void eAIFactionPasha()
	{
		m_Loadout = "SurvivorLoadout";
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		return true;
	}
};