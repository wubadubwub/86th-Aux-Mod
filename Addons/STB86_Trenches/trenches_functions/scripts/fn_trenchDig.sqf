/*
author: AJ
params:
0: Player
*/

params ["_player"]; 


private _pos = getPosWorld  _player;  
_pos set [2, getTerrainHeight _pos];  
getTerrainInfo params ["_width"];  
  
  
private _heights = [];       
for "_x" from -1 to 1 do {       
    for "_y" from -1 to 1 do {       
        if (!(_x == 0 && _y == 0) && (_x == 0 || _y == 0)) then{      
            _heights pushback (getTerrainHeight (_pos vectorAdd [(_x*5),(_y*5),0]));       
        };      
     };       
};        
private _acc  = 0; 
{ 
    _acc = _acc + (_heights select _forEachIndex); 
} forEach _heights; 
_acc = _acc / 4; 
 

_newPos = +_pos; 
_newPos set [2, ((_newPos select 2) - STB86_DIG_DEPTH)] ; 
if !((_newPos select 2) < _acc - STB86_MAX_DIG_DEPTH) then{       
     [_newPos] remoteExec ["STB86_Trenches_Functions_fnc_serverDig", 0, True]        
};                          
                   


//Doesn't work on hills going north/east.
//B_Quadbike_01_F