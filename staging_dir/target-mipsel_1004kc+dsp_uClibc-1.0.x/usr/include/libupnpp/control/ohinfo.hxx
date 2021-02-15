/* Copyright (C) 2014 J.F.Dockes
 *       This program is free software; you can redistribute it and/or modify
 *       it under the terms of the GNU General Public License as published by
 *       the Free Software Foundation; either version 2 of the License, or
 *       (at your option) any later version.
 *
 *       This program is distributed in the hope that it will be useful,
 *       but WITHOUT ANY WARRANTY; without even the implied warranty of
 *       MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *       GNU General Public License for more details.
 *
 *       You should have received a copy of the GNU General Public License
 *       along with this program; if not, write to the
 *       Free Software Foundation, Inc.,
 *       59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */
#ifndef _OHINFO_HXX_INCLUDED_
#define _OHINFO_HXX_INCLUDED_

#include <string>                       // for string
#include <vector>                       // for vector

#include "service.hxx"                  // for Service

namespace UPnPClient { class OHInfo; }
namespace UPnPClient { class UPnPDeviceDesc; }
namespace UPnPClient { class UPnPServiceDesc; }

namespace UPnPClient {

typedef STD_SHARED_PTR<OHInfo> OHIFH;

/**
 * OHInfo Service client class.
 */
class OHInfo : public Service {
public:

    OHInfo(const UPnPDeviceDesc& device, const UPnPServiceDesc& service)
        : Service(device, service) {
        registerCallback();
    }

    ~OHInfo() {
    }

    OHInfo() {}


    /** Test service type from discovery message */
    static bool isOHInfoService(const std::string& st);

    int metatext(UPnPDirObject *dirent);
    
protected:
    /* My service type string */
    static const std::string SType;

private:
    void evtCallback(const STD_UNORDERED_MAP<std::string, std::string>&);
    void registerCallback();
};

} // namespace UPnPClient

#endif /* _OHINFO_HXX_INCLUDED_ */
