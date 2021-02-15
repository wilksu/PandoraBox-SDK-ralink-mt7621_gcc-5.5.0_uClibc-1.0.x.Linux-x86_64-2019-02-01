import sys
import gdb

# Update module path.
dir_ = '/home/lintel/PandoraBox-MT7621/staging_dir/target-mipsel_1004kc+dsp_uClibc-1.0.x/host/share/glib-2.0/gdb'
if not dir_ in sys.path:
    sys.path.insert(0, dir_)

from glib_gdb import register
register (gdb.current_objfile ())
