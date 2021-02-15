GENCCODE_ASSEMBLY_TYPE=-a gcc
SO=so
SOBJ=so
A=a
LIBPREFIX=lib
LIB_EXT_ORDER=.55.1
COMPILE=mipsel-openwrt-linux-uclibc-gcc -I/home/lintel/PandoraBox-MT7621/staging_dir/target-mipsel_1004kc+dsp_uClibc-1.0.x/usr/include -I/home/lintel/PandoraBox-MT7621/staging_dir/target-mipsel_1004kc+dsp_uClibc-1.0.x/include -I/home/lintel/PandoraBox-MT7621/staging_dir/toolchain-mipsel_1004kc+dsp_gcc-5.5.0_uClibc-1.0.x/usr/include -I/home/lintel/PandoraBox-MT7621/staging_dir/toolchain-mipsel_1004kc+dsp_gcc-5.5.0_uClibc-1.0.x/include  -D_REENTRANT  -DU_HAVE_ELF_H=1 -DU_HAVE_ATOMIC=1 -DU_HAVE_TIMEZONE=0  -DU_ATTRIBUTE_DEPRECATED= -Os -pipe -mno-branch-likely -mips32r2 -mtune=1004kc -mlong-calls -mdsp -fno-caller-saves -fhonour-copts -Wno-error=unused-but-set-variable -Wno-error=unused-result -msoft-float -iremap/home/lintel/PandoraBox-MT7621/build_dir/target-mipsel_1004kc+dsp_uClibc-1.0.x/icu4c-55.1:icu4c-55.1 -D_FORTIFY_SOURCE=1 -Wl,-z,now -Wl,-z,relro  -std=c99 -Wall -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings   -c
LIBFLAGS=-I/usr/include -DPIC -fPIC
GENLIB=mipsel-openwrt-linux-uclibc-gcc -Os -pipe -mno-branch-likely -mips32r2 -mtune=1004kc -mlong-calls -mdsp -fno-caller-saves -fhonour-copts -Wno-error=unused-but-set-variable -Wno-error=unused-result -msoft-float -iremap/home/lintel/PandoraBox-MT7621/build_dir/target-mipsel_1004kc+dsp_uClibc-1.0.x/icu4c-55.1:icu4c-55.1 -D_FORTIFY_SOURCE=1 -Wl,-z,now -Wl,-z,relro  -std=c99 -Wall -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings   -L/home/lintel/PandoraBox-MT7621/staging_dir/target-mipsel_1004kc+dsp_uClibc-1.0.x/usr/lib -L/home/lintel/PandoraBox-MT7621/staging_dir/target-mipsel_1004kc+dsp_uClibc-1.0.x/lib -L/home/lintel/PandoraBox-MT7621/staging_dir/toolchain-mipsel_1004kc+dsp_gcc-5.5.0_uClibc-1.0.x/usr/lib -L/home/lintel/PandoraBox-MT7621/staging_dir/toolchain-mipsel_1004kc+dsp_gcc-5.5.0_uClibc-1.0.x/lib -znow -zrelro   -shared -Wl,-Bsymbolic
LDICUDTFLAGS=-nodefaultlibs -nostdlib
LD_SONAME=-Wl,-soname -Wl,
RPATH_FLAGS=
BIR_LDFLAGS=-Wl,-Bsymbolic
AR=mipsel-openwrt-linux-uclibc-gcc-ar
ARFLAGS=r
RANLIB=mipsel-openwrt-linux-uclibc-gcc-ranlib
INSTALL_CMD=/usr/bin/install -c
