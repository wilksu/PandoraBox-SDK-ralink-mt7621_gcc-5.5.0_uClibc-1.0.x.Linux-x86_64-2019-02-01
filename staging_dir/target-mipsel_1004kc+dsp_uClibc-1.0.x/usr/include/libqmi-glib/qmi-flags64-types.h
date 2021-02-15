
/* Generated data (by glib-mkenums) */

#ifndef __LIBQMI_GLIB_FLAGS64_TYPES_H__
#define __LIBQMI_GLIB_FLAGS64_TYPES_H__
#include "qmi-flags64-dms.h"
#include "qmi-flags64-nas.h"

#include <glib-object.h>

G_BEGIN_DECLS

/* enumerations from "../../../src/libqmi-glib/qmi-flags64-dms.h" */

#define __QMI_DMS_BAND_CAPABILITY_IS_FLAGS__

#if defined __QMI_DMS_BAND_CAPABILITY_IS_ENUM__
#error Only flags expected, QmiDmsBandCapability is an enumeration
#endif

/**
 * qmi_dms_band_capability_build_string_from_mask:
 * @mask: bitmask of QmiDmsBandCapability values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiDmsBandCapability in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_dms_band_capability_build_string_from_mask (QmiDmsBandCapability mask);


#define __QMI_DMS_LTE_BAND_CAPABILITY_IS_FLAGS__

#if defined __QMI_DMS_LTE_BAND_CAPABILITY_IS_ENUM__
#error Only flags expected, QmiDmsLteBandCapability is an enumeration
#endif

/**
 * qmi_dms_lte_band_capability_build_string_from_mask:
 * @mask: bitmask of QmiDmsLteBandCapability values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiDmsLteBandCapability in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_dms_lte_band_capability_build_string_from_mask (QmiDmsLteBandCapability mask);


/* enumerations from "../../../src/libqmi-glib/qmi-flags64-nas.h" */

#define __QMI_NAS_BAND_PREFERENCE_IS_FLAGS__

#if defined __QMI_NAS_BAND_PREFERENCE_IS_ENUM__
#error Only flags expected, QmiNasBandPreference is an enumeration
#endif

/**
 * qmi_nas_band_preference_build_string_from_mask:
 * @mask: bitmask of QmiNasBandPreference values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasBandPreference in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_band_preference_build_string_from_mask (QmiNasBandPreference mask);


#define __QMI_NAS_LTE_BAND_PREFERENCE_IS_FLAGS__

#if defined __QMI_NAS_LTE_BAND_PREFERENCE_IS_ENUM__
#error Only flags expected, QmiNasLteBandPreference is an enumeration
#endif

/**
 * qmi_nas_lte_band_preference_build_string_from_mask:
 * @mask: bitmask of QmiNasLteBandPreference values.
 *
 * Builds a string containing a comma-separated list of nicknames for
 * each #QmiNasLteBandPreference in @mask.
 *
 * Returns: (transfer full): a string with the list of nicknames, or %NULL if none given. The returned value should be freed with g_free().
 */
gchar *qmi_nas_lte_band_preference_build_string_from_mask (QmiNasLteBandPreference mask);

G_END_DECLS

#endif /* __LIBQMI_GLIB_FLAGS64_TYPES_H__ */

/* Generated data ends here */

