/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */

#ifndef XEEN_SWORDSOFXEEN_SWORDSOFXEEN_H
#define XEEN_SWORDSOFXEEN_SWORDSOFXEEN_H

#include "xeen/xeen.h"
#include "xeen/worldofxeen/worldofxeen_cutscenes.h"

namespace Xeen {
namespace SwordsOfXeen {

/**
 * Implements a descendant of the base Xeen engine to handle
 * Swords of Xeen specific game code
 */
class SwordsOfXeenEngine: public XeenEngine {
protected:
	/**
	 * Outer gameplay loop responsible for dispatching control to game-specific
	 * intros, main menus, or to play the actual game
	 */
	virtual void outerGameLoop();

	/**
	 * Death cutscene
	 */
	virtual void death();
public:
	SwordsOfXeenEngine(OSystem *syst, const XeenGameDescription *gameDesc);
	virtual ~SwordsOfXeenEngine() {}

	/**
	 * Show a cutscene
	 */
	virtual void showCutscene(const Common::String &name, int status, uint score);

	/**
	 * Dream sequence
	 */
	virtual void dream();
};

#define SWORDS_VM (*(::Xeen::SwordsOfXeen::SwordsOfXeenEngine *)g_vm)

} // End of namespace SwordsOfXeen
} // End of namespace Xeen

#endif /* XEEN_SWORDSOFXEEN_SWORDSOFXEEN_H */
