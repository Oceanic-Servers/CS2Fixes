#pragma once
/**
 * =============================================================================
 * CS2Fixes
 * Copyright (C) 2023-2024 Source2ZE
 * =============================================================================
 *
 * This program is free software; you can redistribute it and/or modify it under
 * the terms of the GNU General Public License, version 3.0, as published by the
 * Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "schema.h"
#include "ccollisionproperty.h"
#include "globaltypes.h"
#include "ctakedamageinfo.h"
#include "mathlib/vector.h"
#include "ehandle.h"
#include "../detours.h"
#include "entitykeyvalues.h"
#include "../../gameconfig.h"

extern CGameConfig* g_GameConfig;

class CMessage : public CBaseEntity
{
public:
	DECLARE_SCHEMA_CLASS(CMessage)
	SCHEMA_FIELD(const char*, m_iszMessage);
};