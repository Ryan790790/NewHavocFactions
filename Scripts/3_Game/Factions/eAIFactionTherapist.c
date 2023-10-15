[eAIRegisterFaction(eAIFactionTherapist)]
class eAIFactionTherapist : eAIFaction
{
	void eAIFactionTherapist()
	{
		m_Loadout = "SurvivorLoadout";
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		return true;
	}
};