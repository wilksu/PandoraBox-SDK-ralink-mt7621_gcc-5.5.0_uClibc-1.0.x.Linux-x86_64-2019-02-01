/* Copyright (C) 2013 J.F.Dockes
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the
 *   Free Software Foundation, Inc.,
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */
#ifndef _UPNPPUTILS_H_X_INCLUDED_
#define _UPNPPUTILS_H_X_INCLUDED_

#include <string>
#include <vector>

namespace UPnPP {

extern void timespec_addnanos(struct timespec *ts, long long nanos);

// Get the list of network adapters. Note: under Windows, this returns
// the Adapter descriptions, because the names are GUIds which appear
// nowhere in the system GUI, and what is called "name" in the GUI is
// nowhere to be seen in the API...
extern bool getAdapterNames(std::vector<std::string>& names);
}

#endif /* _UPNPPUTILS_H_X_INCLUDED_ */