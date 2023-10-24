#pragma once
#include <vector>
#include "appframe.h"

/**
* @file ModeGameClear.h
* @author ˆäã˜aÆAÎ’Ë—Bƒ
*/

class ModeGameClear :
    public ModeBase
{
public:
    ModeGameClear();
    bool	Process();
    bool	Render();

protected:
    int _score;
    std::vector<int> _cgGameClear;
    std::unordered_map<int, int> _displayTimes;
    bool _sel = false;
    int _screenBright = 0;//‰æ–Ê‚Ì–¾‚é‚³

};

