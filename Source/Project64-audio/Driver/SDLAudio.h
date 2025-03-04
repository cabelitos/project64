/****************************************************************************
*                                                                           *
* Project64-audio - A Nintendo 64 audio plugin.                             *
* http://www.pj64-emu.com/                                                  *
* Copyright (C) 2017 Project64. All rights reserved.                        *
* Copyright (C) 2015 Gilles Siberlin                                        *
* Copyright (C) 2007-2009 Richard Goedeken                                  *
* Copyright (C) 2007-2008 Ebenblues                                         *
* Copyright (C) 2003 JttL                                                   *
* Copyright (C) 2002 Hacktarux                                              *
*                                                                           *
* License:                                                                  *
* GNU/GPLv2 http://www.gnu.org/licenses/gpl-2.0.html                        *
*                                                                           *
****************************************************************************/
#pragma once
#include <Common/SyncEvent.h>
#include <Project64-audio/Audio_1.1.h>
#include "SoundBase.h"

class SDLAudio :
    public SoundDriverBase
{
public:
    void AI_Startup(void);
    void AI_Shutdown(void);
    void AI_SetFrequency(uint32_t freq, uint32_t BufferSize);
    void AI_LenChanged(uint8_t *start, uint32_t length);
    void AI_Update(bool Wait);
};
