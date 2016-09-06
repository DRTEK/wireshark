/* strtoi.h
 * Utilities to convert strings to integers
 *
 * Copyright 2016, Dario Lombardo
 *
 * Wireshark - Network traffic analyzer
 * By Gerald Combs <gerald@wireshark.org>
 * Copyright 1998 Gerald Combs
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
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef _WS_STRTOI_H
#define _WS_STRTOI_H

#include <glib.h>

#include "ws_symbol_export.h"

/*
 * \brief Convert a string to a signed/unsigned int, with error checks.
 * \param str The string to convert
 * \param cint The converted integer
 * \return TRUE if the conversion suceeds, FALSE otherwise.
 * On error, errno is set to EINVAL for unrecognized input and ERANGE
 * if the resulting number does not fit in the type.
 */
WS_DLL_PUBLIC gboolean ws_strtoi64(const gchar* str, gint64* cint);
WS_DLL_PUBLIC gboolean ws_strtoi32(const gchar* str, gint32* cint);
WS_DLL_PUBLIC gboolean ws_strtoi16(const gchar* str, gint16* cint);
WS_DLL_PUBLIC gboolean ws_strtoi8 (const gchar* str, gint8*  cint);

WS_DLL_PUBLIC gboolean ws_strtou64(const gchar* str, guint64* cint);
WS_DLL_PUBLIC gboolean ws_strtou32(const gchar* str, guint32* cint);
WS_DLL_PUBLIC gboolean ws_strtou16(const gchar* str, guint16* cint);
WS_DLL_PUBLIC gboolean ws_strtou8 (const gchar* str, guint8*  cint);

#endif

/*
 * Editor modelines  -  https://www.wireshark.org/tools/modelines.html
 *
 * Local variables:
 * c-basic-offset: 4
 * tab-width: 8
 * indent-tabs-mode: t
 * End:
 *
 * vi: set shiftwidth=4 tabstop=8 noexpandtab:
 * :indentSize=4:tabSize=8:noTabs=false:
 */