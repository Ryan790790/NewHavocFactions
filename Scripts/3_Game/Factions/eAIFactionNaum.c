[eAIRegisterFaction(eAIFactionNaum)]
class eAIFactionNaum : eAIFaction
{
	void eAIFactionNaum()
	{
		m_Loadout = "SurvivorLoadout";
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		return true;
	}
};