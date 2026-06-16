class CfgPatches
{
	class SSSMusicServer
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"SSSMusic"
		};
	};
};
class CfgMods
{
	class SSSMusicServer
	{
		dir="SSSMusicServer";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="SSSMusicServer";
		credits="TailsMizu";
		author="TailsMizu";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"SSSMusicServer/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"SSSMusicServer/4_World"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"SSSMusicServer/5_Mission"
				};
			};
		};
	};
};
