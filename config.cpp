#define _ARMA_

class CfgPatches
{
	class DayZ_Havoc_Expansion_Factions_scripts
	{
		requiredAddons[] = {};
	};
};
class CfgMods
{
	class Havoc_More_Factions
	{
		action = "";
		hideName = 0;
		hidePicture = 0;
		name = "More Expansion Factions";
		credits = "DayZ Expansion and Schleeb";
		author = "Schleeb";
		authorID = "";
		version = "0.1";
		extra = 0;
		type = "servermod";
		dependencies[] = {"Game"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"NewHavocPack/Scripts/3_Game"};
			};
		};
	};
};