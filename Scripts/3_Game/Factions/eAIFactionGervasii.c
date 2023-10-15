[eAIRegisterFaction(eAIFactionPrapor)]
class eAIFactionGervasii : eAIFaction
{
	void eAIFactionGervasii()
	{
		m_Loadout = "SurvivorLoadout";
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		return true;
	}
};