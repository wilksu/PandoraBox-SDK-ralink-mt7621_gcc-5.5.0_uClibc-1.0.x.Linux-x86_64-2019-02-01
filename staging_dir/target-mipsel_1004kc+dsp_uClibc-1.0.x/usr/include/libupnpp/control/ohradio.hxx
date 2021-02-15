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
#ifndef _OHRADIO_HXX_INCLUDED_
#define _OHRADIO_HXX_INCLUDED_

#include "libupnpp/config.h"

#include <string>
#include <vector>

#include "libupnpp/control/service.hxx"
#include "libupnpp/control/cdircontent.hxx"
#include "ohplaylist.hxx"

namespace UPnPClient {

class OHRadio;
class UPnPDeviceDesc;
class UPnPServiceDesc;

typedef STD_SHARED_PTR<OHRadio> OHRDH;

/**
 * OHRadio Service client class.
 *
 */
class OHRadio : public Service {
public:

    OHRadio(const UPnPDeviceDesc& device, const UPnPServiceDesc& service)
        : Service(device, service) {
        registerCallback();
    }
    virtual ~OHRadio() {
    }

    OHRadio() {}

    /** Test service type from discovery message */
    static bool isOHRdService(const std::string& st);

    int channel(std::string* uri, UPnPDirObject *dirent);
    int channelsMax(int *);
    int id(int *value);
    int idArray(std::vector<int> *ids, int *tokp);
    int idArrayChanged(int token, bool *changed);
    int pause();
    int play();
    int protocolInfo(std::string *proto);
    int read(int id, UPnPDirObject *dirent);
    int readList(const std::vector<int>& ids, 
                 std::vector<OHPlaylist::TrackListEntry>* entsp);
    int setChannel(const std::string& uri, const std::string& didl);
    int setId(int id, const std::string& uri);
    int stop();
    int transportState(OHPlaylist::TPState *tps);

    // This is for the benefit of ohinfo, no outside use
    static int decodeMetadata(const std::string& fromwho,
                              const std::string &rawdidl, UPnPDirObject *de);

protected:
    /* My service type string */
    static const std::string SType;

private:
    void evtCallback(const STD_UNORDERED_MAP<std::string, std::string>&);
    void registerCallback();
};

} // namespace UPnPClient

#endif /* _OHRADIO_HXX_INCLUDED_ */
