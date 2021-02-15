GENCCODE_ASSEMBLY_TYPE=-a gcc
SO=so
SOBJ=so
A=a
LIBPREFIX=lib
LIB_EXT_ORDER=.55.1
COMPILE=gcc -I/home/lintel/PandoraBox-MT7621/staging_dir/host/include -I/home/lintel/PandoraBox-MT7621/staging_dir/host/usr/include -I/home/lintel/PandoraBox-MT7621/staging_dir/target-mipsel_1004kc+dsp_uClibc-1.0.x/host/include -D_REENTRANT  -DU_HAVE_ELF_H=1 -DU_HAVE_ATOMIC=1  -DU_ATTRIBUTE_DEPRECATED= -O2 -I/home/lintel/PandoraBox-MT7621/staging_dir/host/include -I/home/lintel/PandoraBox-MT7621/staging_dir/host/usr/include -I/home/lintel/PandoraBox-MT7621/staging_dir/target-mipsel_1004kc+dsp_uClibc-1.0.x/host/include -std=c99 -Wall -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings   -c
LIBFLAGS=-I/home/lintel/PandoraBox-MT7621/staging_dir/target-mipsel_1004kc+dsp_uClibc-1.0.x/host/include -DPIC -fPIC
GENLIB=gcc -O2 -I/home/lintel/PandoraBox-MT7621/staging_dir/host/include -I/home/lintel/PandoraBox-MT7621/staging_dir/host/usr/include -I/home/lintel/PandoraBox-MT7621/staging_dir/target-mipsel_1004kc+dsp_uClibc-1.0.x/host/include -std=c99 -Wall -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings   -L/home/lintel/PandoraBox-MT7621/staging_dir/host/lib -L/home/lintel/PandoraBox-MT7621/staging_dir/host/usr/lib -L/home/lintel/PandoraBox-MT7621/staging_dir/target-mipsel_1004kc+dsp_uClibc-1.0.x/host/lib  -shared -Wl,-Bsymbolic
LDICUDTFLAGS=-nodefaultlibs -nostdlib
LD_SONAME=-Wl,-soname -Wl,
RPATH_FLAGS=
BIR_LDFLAGS=-Wl,-Bsymbolic
AR=x86_64-linux-gnu-ar
ARFLAGS=r
RANLIB=x86_64-linux-gnu-ranlib
INSTALL_CMD=/usr/bin/install -c
