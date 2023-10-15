[eAIRegisterFaction(eAIFactionMechanic)]
class eAIFactionLuka : eAIFaction
{
	void eAIFactionLuka()
	{
		m_Loadout = "SurvivorLoadout";
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		return true;
	}
};