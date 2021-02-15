/*
 * Generated by gdbus-codegen 2.49.7. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __MM_GDBUS_CALL_H__
#define __MM_GDBUS_CALL_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.freedesktop.ModemManager1.Call */

#define MM_GDBUS_TYPE_CALL (mm_gdbus_call_get_type ())
#define MM_GDBUS_CALL(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), MM_GDBUS_TYPE_CALL, MmGdbusCall))
#define MM_GDBUS_IS_CALL(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), MM_GDBUS_TYPE_CALL))
#define MM_GDBUS_CALL_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), MM_GDBUS_TYPE_CALL, MmGdbusCallIface))

struct _MmGdbusCall;
typedef struct _MmGdbusCall MmGdbusCall;
typedef struct _MmGdbusCallIface MmGdbusCallIface;

struct _MmGdbusCallIface
{
  GTypeInterface parent_iface;



  gboolean (*handle_accept) (
    MmGdbusCall *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_hangup) (
    MmGdbusCall *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_send_dtmf) (
    MmGdbusCall *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_dtmf);

  gboolean (*handle_start) (
    MmGdbusCall *object,
    GDBusMethodInvocation *invocation);

  gint  (*get_direction) (MmGdbusCall *object);

  const gchar * (*get_number) (MmGdbusCall *object);

  gint  (*get_state) (MmGdbusCall *object);

  gint  (*get_state_reason) (MmGdbusCall *object);

  void (*dtmf_received) (
    MmGdbusCall *object,
    const gchar *arg_dtmf);

  void (*state_changed) (
    MmGdbusCall *object,
    gint arg_old,
    gint arg_new,
    guint arg_reason);

};

GType mm_gdbus_call_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *mm_gdbus_call_interface_info (void);
guint mm_gdbus_call_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void mm_gdbus_call_complete_start (
    MmGdbusCall *object,
    GDBusMethodInvocation *invocation);

void mm_gdbus_call_complete_accept (
    MmGdbusCall *object,
    GDBusMethodInvocation *invocation);

void mm_gdbus_call_complete_hangup (
    MmGdbusCall *object,
    GDBusMethodInvocation *invocation);

void mm_gdbus_call_complete_send_dtmf (
    MmGdbusCall *object,
    GDBusMethodInvocation *invocation);



/* D-Bus signal emissions functions: */
void mm_gdbus_call_emit_dtmf_received (
    MmGdbusCall *object,
    const gchar *arg_dtmf);

void mm_gdbus_call_emit_state_changed (
    MmGdbusCall *object,
    gint arg_old,
    gint arg_new,
    guint arg_reason);



/* D-Bus method calls: */
void mm_gdbus_call_call_start (
    MmGdbusCall *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean mm_gdbus_call_call_start_finish (
    MmGdbusCall *proxy,
    GAsyncResult *res,
    GError **error);

gboolean mm_gdbus_call_call_start_sync (
    MmGdbusCall *proxy,
    GCancellable *cancellable,
    GError **error);

void mm_gdbus_call_call_accept (
    MmGdbusCall *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean mm_gdbus_call_call_accept_finish (
    MmGdbusCall *proxy,
    GAsyncResult *res,
    GError **error);

gboolean mm_gdbus_call_call_accept_sync (
    MmGdbusCall *proxy,
    GCancellable *cancellable,
    GError **error);

void mm_gdbus_call_call_hangup (
    MmGdbusCall *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean mm_gdbus_call_call_hangup_finish (
    MmGdbusCall *proxy,
    GAsyncResult *res,
    GError **error);

gboolean mm_gdbus_call_call_hangup_sync (
    MmGdbusCall *proxy,
    GCancellable *cancellable,
    GError **error);

void mm_gdbus_call_call_send_dtmf (
    MmGdbusCall *proxy,
    const gchar *arg_dtmf,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean mm_gdbus_call_call_send_dtmf_finish (
    MmGdbusCall *proxy,
    GAsyncResult *res,
    GError **error);

gboolean mm_gdbus_call_call_send_dtmf_sync (
    MmGdbusCall *proxy,
    const gchar *arg_dtmf,
    GCancellable *cancellable,
    GError **error);



/* D-Bus property accessors: */
gint mm_gdbus_call_get_state (MmGdbusCall *object);
void mm_gdbus_call_set_state (MmGdbusCall *object, gint value);

gint mm_gdbus_call_get_state_reason (MmGdbusCall *object);
void mm_gdbus_call_set_state_reason (MmGdbusCall *object, gint value);

gint mm_gdbus_call_get_direction (MmGdbusCall *object);
void mm_gdbus_call_set_direction (MmGdbusCall *object, gint value);

const gchar *mm_gdbus_call_get_number (MmGdbusCall *object);
gchar *mm_gdbus_call_dup_number (MmGdbusCall *object);
void mm_gdbus_call_set_number (MmGdbusCall *object, const gchar *value);


/* ---- */

#define MM_GDBUS_TYPE_CALL_PROXY (mm_gdbus_call_proxy_get_type ())
#define MM_GDBUS_CALL_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), MM_GDBUS_TYPE_CALL_PROXY, MmGdbusCallProxy))
#define MM_GDBUS_CALL_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), MM_GDBUS_TYPE_CALL_PROXY, MmGdbusCallProxyClass))
#define MM_GDBUS_CALL_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), MM_GDBUS_TYPE_CALL_PROXY, MmGdbusCallProxyClass))
#define MM_GDBUS_IS_CALL_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), MM_GDBUS_TYPE_CALL_PROXY))
#define MM_GDBUS_IS_CALL_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), MM_GDBUS_TYPE_CALL_PROXY))

typedef struct _MmGdbusCallProxy MmGdbusCallProxy;
typedef struct _MmGdbusCallProxyClass MmGdbusCallProxyClass;
typedef struct _MmGdbusCallProxyPrivate MmGdbusCallProxyPrivate;

struct _MmGdbusCallProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  MmGdbusCallProxyPrivate *priv;
};

struct _MmGdbusCallProxyClass
{
  GDBusProxyClass parent_class;
};

GType mm_gdbus_call_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MmGdbusCallProxy, g_object_unref)
#endif

void mm_gdbus_call_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
MmGdbusCall *mm_gdbus_call_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
MmGdbusCall *mm_gdbus_call_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void mm_gdbus_call_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
MmGdbusCall *mm_gdbus_call_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
MmGdbusCall *mm_gdbus_call_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define MM_GDBUS_TYPE_CALL_SKELETON (mm_gdbus_call_skeleton_get_type ())
#define MM_GDBUS_CALL_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), MM_GDBUS_TYPE_CALL_SKELETON, MmGdbusCallSkeleton))
#define MM_GDBUS_CALL_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), MM_GDBUS_TYPE_CALL_SKELETON, MmGdbusCallSkeletonClass))
#define MM_GDBUS_CALL_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), MM_GDBUS_TYPE_CALL_SKELETON, MmGdbusCallSkeletonClass))
#define MM_GDBUS_IS_CALL_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), MM_GDBUS_TYPE_CALL_SKELETON))
#define MM_GDBUS_IS_CALL_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), MM_GDBUS_TYPE_CALL_SKELETON))

typedef struct _MmGdbusCallSkeleton MmGdbusCallSkeleton;
typedef struct _MmGdbusCallSkeletonClass MmGdbusCallSkeletonClass;
typedef struct _MmGdbusCallSkeletonPrivate MmGdbusCallSkeletonPrivate;

struct _MmGdbusCallSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  MmGdbusCallSkeletonPrivate *priv;
};

struct _MmGdbusCallSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType mm_gdbus_call_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MmGdbusCallSkeleton, g_object_unref)
#endif

MmGdbusCall *mm_gdbus_call_skeleton_new (void);


G_END_DECLS

#endif /* __MM_GDBUS_CALL_H__ */