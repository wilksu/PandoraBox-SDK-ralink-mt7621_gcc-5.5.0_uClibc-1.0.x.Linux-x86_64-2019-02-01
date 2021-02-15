/* Copyright (C) 2014 J.F.Dockes
 *	 This program is free software; you can redistribute it and/or modify
 *	 it under the terms of the GNU General Public License as published by
 *	 the Free Software Foundation; either version 2 of the License, or
 *	 (at your option) any later version.
 *
 *	 This program is distributed in the hope that it will be useful,
 *	 but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	 GNU General Public License for more details.
 *
 *	 You should have received a copy of the GNU General Public License
 *	 along with this program; if not, write to the
 *	 Free Software Foundation, Inc.,
 *	 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

#ifndef _DEVICE_H_X_INCLUDED_
#define _DEVICE_H_X_INCLUDED_

#include "libupnpp/control/description.hxx"

namespace UPnPClient {

class Device;
typedef STD_SHARED_PTR<Device> DVCH;

/** 
 * For now, the Device class is just a holder for the description object. 
 *
 * This is a pure data object, all the fun happens in the
 * Service class and its derived classes. 
 *
 * You don't even need to get the Device around once you have used it to create
 * the service, and you actually don't need it at all, you could use
 * the UPnPDeviceDesc directly. It's there just in case we want to add
 * something in there one day
 */
class Device {
public:
    Device();
    Device(const UPnPDeviceDesc& desc);

    const UPnPDeviceDesc *desc() const;

private:
    class Internal;
    Internal *m;
};

}

#endif /* _DEVICE_H_X_INCLUDED_ */
