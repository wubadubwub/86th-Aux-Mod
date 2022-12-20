class CfgPatches{
    class STB86_Cinematic_Bars_Info{
        name="Cinematic Bars Info";
        author = "86th Mod Team";
        units[] = {};
        weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = { "A3_Modules_F" };
    };
};

class RscText
{
  access = 0;
  type = 0;
  idc = -1;
  style = 0;
  w = 0.1; h = 0.05;
  //x and y are not part of a global class since each rsctext will be positioned 'somewhere'
  font = "TahomaB";
  sizeEx = 0.04;
  colorBackground[] = {0,0,0,0};
  colorText[] = {1,1,1,1};
  text = "";
  fixedWidth = 0;
  shadow = 0;
};
class RscTitles
{
    class STB86_cinematicBorders
    {
        idd = -1; 
        duration = 1e6; //1e6 seconds
        fadeIn = 1; //1 second to fade in
        fadeOut = 1; //1 second to fade out
        onLoad = "uiNamespace setVariable ['STB86_cinematicBorders', _this select 0]"; 
        onUnLoad = ""; 
        class Controls
        {
            class Top: RscText
            {
                idc = 1200; 
                colorText[]={0,0,0,0};
                text="";
                colorBackground[]={0,0,0,1};
                x = safezoneX;
                y = safezoneY;
                w = safezoneW;
                h = 0.15*safezoneH;
            };
            class Bottom: Top
            {
                idc = 1201; 
                y = safezoneY+0.85*safezoneH;
            };
        };
    };
};