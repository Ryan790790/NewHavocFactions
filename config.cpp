class DayZ_Havoc_Expansion_Factions_scripts
{
    class DayZ_Havoc_Expansion_Factions_scripts
    {
        requiredAddons[] = {"DayZExpansion_AI_Scripts"};
    };
};
class CfgMods
{
    class Havoc_More_Factions
    {
        dir = "NewHavocFactions";
        action = "";
        hideName = 0;
        hidePicture = 0;
        name = "More Expansion Factions";
        credits = "DayZ Expansion and Schleeb";
        author = "Schleeb";
        authorID = "";
        version = "0.1";
        extra = 0;
        type = "mod";
        dependencies[] = { "Game", "World", "Mission" };
        class defs
        {
            class gameScriptModule
            {
                value = "";
                files[] = {"NewHavocFactions/Scripts/3_Game"};
            };
        };
    };
};