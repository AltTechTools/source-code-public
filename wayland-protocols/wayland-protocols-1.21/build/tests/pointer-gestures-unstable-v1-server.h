/* Generated by wayland-scanner 1.19.0 */

#ifndef POINTER_GESTURES_UNSTABLE_V1_SERVER_PROTOCOL_H
#define POINTER_GESTURES_UNSTABLE_V1_SERVER_PROTOCOL_H

#include <stdint.h>
#include <stddef.h>
#include "wayland-server.h"

#ifdef  __cplusplus
extern "C" {
#endif

struct wl_client;
struct wl_resource;

/**
 * @page page_pointer_gestures_unstable_v1 The pointer_gestures_unstable_v1 protocol
 * @section page_ifaces_pointer_gestures_unstable_v1 Interfaces
 * - @subpage page_iface_zwp_pointer_gestures_v1 - touchpad gestures
 * - @subpage page_iface_zwp_pointer_gesture_swipe_v1 - a swipe gesture object
 * - @subpage page_iface_zwp_pointer_gesture_pinch_v1 - a pinch gesture object
 */
struct wl_pointer;
struct wl_surface;
struct zwp_pointer_gesture_pinch_v1;
struct zwp_pointer_gesture_swipe_v1;
struct zwp_pointer_gestures_v1;

#ifndef ZWP_POINTER_GESTURES_V1_INTERFACE
#define ZWP_POINTER_GESTURES_V1_INTERFACE
/**
 * @page page_iface_zwp_pointer_gestures_v1 zwp_pointer_gestures_v1
 * @section page_iface_zwp_pointer_gestures_v1_desc Description
 *
 * A global interface to provide semantic touchpad gestures for a given
 * pointer.
 *
 * Two gestures are currently supported: swipe and pinch.
 * All gestures follow a three-stage cycle: begin, update, end and
 * are identified by a unique id.
 *
 * Warning! The protocol described in this file is experimental and
 * backward incompatible changes may be made. Backward compatible changes
 * may be added together with the corresponding interface version bump.
 * Backward incompatible changes are done by bumping the version number in
 * the protocol and interface names and resetting the interface version.
 * Once the protocol is to be declared stable, the 'z' prefix and the
 * version number in the protocol and interface names are removed and the
 * interface version number is reset.
 * @section page_iface_zwp_pointer_gestures_v1_api API
 * See @ref iface_zwp_pointer_gestures_v1.
 */
/**
 * @defgroup iface_zwp_pointer_gestures_v1 The zwp_pointer_gestures_v1 interface
 *
 * A global interface to provide semantic touchpad gestures for a given
 * pointer.
 *
 * Two gestures are currently supported: swipe and pinch.
 * All gestures follow a three-stage cycle: begin, update, end and
 * are identified by a unique id.
 *
 * Warning! The protocol described in this file is experimental and
 * backward incompatible changes may be made. Backward compatible changes
 * may be added together with the corresponding interface version bump.
 * Backward incompatible changes are done by bumping the version number in
 * the protocol and interface names and resetting the interface version.
 * Once the protocol is to be declared stable, the 'z' prefix and the
 * version number in the protocol and interface names are removed and the
 * interface version number is reset.
 */
extern const struct wl_interface zwp_pointer_gestures_v1_interface;
#endif
#ifndef ZWP_POINTER_GESTURE_SWIPE_V1_INTERFACE
#define ZWP_POINTER_GESTURE_SWIPE_V1_INTERFACE
/**
 * @page page_iface_zwp_pointer_gesture_swipe_v1 zwp_pointer_gesture_swipe_v1
 * @section page_iface_zwp_pointer_gesture_swipe_v1_desc Description
 *
 * A swipe gesture object notifies a client about a multi-finger swipe
 * gesture detected on an indirect input device such as a touchpad.
 * The gesture is usually initiated by multiple fingers moving in the
 * same direction but once initiated the direction may change.
 * The precise conditions of when such a gesture is detected are
 * implementation-dependent.
 *
 * A gesture consists of three stages: begin, update (optional) and end.
 * There cannot be multiple simultaneous pinch or swipe gestures on a
 * same pointer/seat, how compositors prevent these situations is
 * implementation-dependent.
 *
 * A gesture may be cancelled by the compositor or the hardware.
 * Clients should not consider performing permanent or irreversible
 * actions until the end of a gesture has been received.
 * @section page_iface_zwp_pointer_gesture_swipe_v1_api API
 * See @ref iface_zwp_pointer_gesture_swipe_v1.
 */
/**
 * @defgroup iface_zwp_pointer_gesture_swipe_v1 The zwp_pointer_gesture_swipe_v1 interface
 *
 * A swipe gesture object notifies a client about a multi-finger swipe
 * gesture detected on an indirect input device such as a touchpad.
 * The gesture is usually initiated by multiple fingers moving in the
 * same direction but once initiated the direction may change.
 * The precise conditions of when such a gesture is detected are
 * implementation-dependent.
 *
 * A gesture consists of three stages: begin, update (optional) and end.
 * There cannot be multiple simultaneous pinch or swipe gestures on a
 * same pointer/seat, how compositors prevent these situations is
 * implementation-dependent.
 *
 * A gesture may be cancelled by the compositor or the hardware.
 * Clients should not consider performing permanent or irreversible
 * actions until the end of a gesture has been received.
 */
extern const struct wl_interface zwp_pointer_gesture_swipe_v1_interface;
#endif
#ifndef ZWP_POINTER_GESTURE_PINCH_V1_INTERFACE
#define ZWP_POINTER_GESTURE_PINCH_V1_INTERFACE
/**
 * @page page_iface_zwp_pointer_gesture_pinch_v1 zwp_pointer_gesture_pinch_v1
 * @section page_iface_zwp_pointer_gesture_pinch_v1_desc Description
 *
 * A pinch gesture object notifies a client about a multi-finger pinch
 * gesture detected on an indirect input device such as a touchpad.
 * The gesture is usually initiated by multiple fingers moving towards
 * each other or away from each other, or by two or more fingers rotating
 * around a logical center of gravity. The precise conditions of when
 * such a gesture is detected are implementation-dependent.
 *
 * A gesture consists of three stages: begin, update (optional) and end.
 * There cannot be multiple simultaneous pinch or swipe gestures on a
 * same pointer/seat, how compositors prevent these situations is
 * implementation-dependent.
 *
 * A gesture may be cancelled by the compositor or the hardware.
 * Clients should not consider performing permanent or irreversible
 * actions until the end of a gesture has been received.
 * @section page_iface_zwp_pointer_gesture_pinch_v1_api API
 * See @ref iface_zwp_pointer_gesture_pinch_v1.
 */
/**
 * @defgroup iface_zwp_pointer_gesture_pinch_v1 The zwp_pointer_gesture_pinch_v1 interface
 *
 * A pinch gesture object notifies a client about a multi-finger pinch
 * gesture detected on an indirect input device such as a touchpad.
 * The gesture is usually initiated by multiple fingers moving towards
 * each other or away from each other, or by two or more fingers rotating
 * around a logical center of gravity. The precise conditions of when
 * such a gesture is detected are implementation-dependent.
 *
 * A gesture consists of three stages: begin, update (optional) and end.
 * There cannot be multiple simultaneous pinch or swipe gestures on a
 * same pointer/seat, how compositors prevent these situations is
 * implementation-dependent.
 *
 * A gesture may be cancelled by the compositor or the hardware.
 * Clients should not consider performing permanent or irreversible
 * actions until the end of a gesture has been received.
 */
extern const struct wl_interface zwp_pointer_gesture_pinch_v1_interface;
#endif

/**
 * @ingroup iface_zwp_pointer_gestures_v1
 * @struct zwp_pointer_gestures_v1_interface
 */
struct zwp_pointer_gestures_v1_interface {
	/**
	 * get swipe gesture
	 *
	 * Create a swipe gesture object. See the
	 * wl_pointer_gesture_swipe interface for details.
	 */
	void (*get_swipe_gesture)(struct wl_client *client,
				  struct wl_resource *resource,
				  uint32_t id,
				  struct wl_resource *pointer);
	/**
	 * get pinch gesture
	 *
	 * Create a pinch gesture object. See the
	 * wl_pointer_gesture_pinch interface for details.
	 */
	void (*get_pinch_gesture)(struct wl_client *client,
				  struct wl_resource *resource,
				  uint32_t id,
				  struct wl_resource *pointer);
	/**
	 * destroy the pointer gesture object
	 *
	 * Destroy the pointer gesture object. Swipe and pinch objects
	 * created via this gesture object remain valid.
	 * @since 2
	 */
	void (*release)(struct wl_client *client,
			struct wl_resource *resource);
};


/**
 * @ingroup iface_zwp_pointer_gestures_v1
 */
#define ZWP_POINTER_GESTURES_V1_GET_SWIPE_GESTURE_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_pointer_gestures_v1
 */
#define ZWP_POINTER_GESTURES_V1_GET_PINCH_GESTURE_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_pointer_gestures_v1
 */
#define ZWP_POINTER_GESTURES_V1_RELEASE_SINCE_VERSION 2

/**
 * @ingroup iface_zwp_pointer_gesture_swipe_v1
 * @struct zwp_pointer_gesture_swipe_v1_interface
 */
struct zwp_pointer_gesture_swipe_v1_interface {
	/**
	 * destroy the pointer swipe gesture object
	 *
	 * 
	 */
	void (*destroy)(struct wl_client *client,
			struct wl_resource *resource);
};

#define ZWP_POINTER_GESTURE_SWIPE_V1_BEGIN 0
#define ZWP_POINTER_GESTURE_SWIPE_V1_UPDATE 1
#define ZWP_POINTER_GESTURE_SWIPE_V1_END 2

/**
 * @ingroup iface_zwp_pointer_gesture_swipe_v1
 */
#define ZWP_POINTER_GESTURE_SWIPE_V1_BEGIN_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_pointer_gesture_swipe_v1
 */
#define ZWP_POINTER_GESTURE_SWIPE_V1_UPDATE_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_pointer_gesture_swipe_v1
 */
#define ZWP_POINTER_GESTURE_SWIPE_V1_END_SINCE_VERSION 1

/**
 * @ingroup iface_zwp_pointer_gesture_swipe_v1
 */
#define ZWP_POINTER_GESTURE_SWIPE_V1_DESTROY_SINCE_VERSION 1

/**
 * @ingroup iface_zwp_pointer_gesture_swipe_v1
 * Sends an begin event to the client owning the resource.
 * @param resource_ The client's resource
 * @param time timestamp with millisecond granularity
 * @param fingers number of fingers
 */
static inline void
zwp_pointer_gesture_swipe_v1_send_begin(struct wl_resource *resource_, uint32_t serial, uint32_t time, struct wl_resource *surface, uint32_t fingers)
{
	wl_resource_post_event(resource_, ZWP_POINTER_GESTURE_SWIPE_V1_BEGIN, serial, time, surface, fingers);
}

/**
 * @ingroup iface_zwp_pointer_gesture_swipe_v1
 * Sends an update event to the client owning the resource.
 * @param resource_ The client's resource
 * @param time timestamp with millisecond granularity
 * @param dx delta x coordinate in surface coordinate space
 * @param dy delta y coordinate in surface coordinate space
 */
static inline void
zwp_pointer_gesture_swipe_v1_send_update(struct wl_resource *resource_, uint32_t time, wl_fixed_t dx, wl_fixed_t dy)
{
	wl_resource_post_event(resource_, ZWP_POINTER_GESTURE_SWIPE_V1_UPDATE, time, dx, dy);
}

/**
 * @ingroup iface_zwp_pointer_gesture_swipe_v1
 * Sends an end event to the client owning the resource.
 * @param resource_ The client's resource
 * @param time timestamp with millisecond granularity
 * @param cancelled 1 if the gesture was cancelled, 0 otherwise
 */
static inline void
zwp_pointer_gesture_swipe_v1_send_end(struct wl_resource *resource_, uint32_t serial, uint32_t time, int32_t cancelled)
{
	wl_resource_post_event(resource_, ZWP_POINTER_GESTURE_SWIPE_V1_END, serial, time, cancelled);
}

/**
 * @ingroup iface_zwp_pointer_gesture_pinch_v1
 * @struct zwp_pointer_gesture_pinch_v1_interface
 */
struct zwp_pointer_gesture_pinch_v1_interface {
	/**
	 * destroy the pinch gesture object
	 *
	 * 
	 */
	void (*destroy)(struct wl_client *client,
			struct wl_resource *resource);
};

#define ZWP_POINTER_GESTURE_PINCH_V1_BEGIN 0
#define ZWP_POINTER_GESTURE_PINCH_V1_UPDATE 1
#define ZWP_POINTER_GESTURE_PINCH_V1_END 2

/**
 * @ingroup iface_zwp_pointer_gesture_pinch_v1
 */
#define ZWP_POINTER_GESTURE_PINCH_V1_BEGIN_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_pointer_gesture_pinch_v1
 */
#define ZWP_POINTER_GESTURE_PINCH_V1_UPDATE_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_pointer_gesture_pinch_v1
 */
#define ZWP_POINTER_GESTURE_PINCH_V1_END_SINCE_VERSION 1

/**
 * @ingroup iface_zwp_pointer_gesture_pinch_v1
 */
#define ZWP_POINTER_GESTURE_PINCH_V1_DESTROY_SINCE_VERSION 1

/**
 * @ingroup iface_zwp_pointer_gesture_pinch_v1
 * Sends an begin event to the client owning the resource.
 * @param resource_ The client's resource
 * @param time timestamp with millisecond granularity
 * @param fingers number of fingers
 */
static inline void
zwp_pointer_gesture_pinch_v1_send_begin(struct wl_resource *resource_, uint32_t serial, uint32_t time, struct wl_resource *surface, uint32_t fingers)
{
	wl_resource_post_event(resource_, ZWP_POINTER_GESTURE_PINCH_V1_BEGIN, serial, time, surface, fingers);
}

/**
 * @ingroup iface_zwp_pointer_gesture_pinch_v1
 * Sends an update event to the client owning the resource.
 * @param resource_ The client's resource
 * @param time timestamp with millisecond granularity
 * @param dx delta x coordinate in surface coordinate space
 * @param dy delta y coordinate in surface coordinate space
 * @param scale scale relative to the initial finger position
 * @param rotation angle in degrees cw relative to the previous event
 */
static inline void
zwp_pointer_gesture_pinch_v1_send_update(struct wl_resource *resource_, uint32_t time, wl_fixed_t dx, wl_fixed_t dy, wl_fixed_t scale, wl_fixed_t rotation)
{
	wl_resource_post_event(resource_, ZWP_POINTER_GESTURE_PINCH_V1_UPDATE, time, dx, dy, scale, rotation);
}

/**
 * @ingroup iface_zwp_pointer_gesture_pinch_v1
 * Sends an end event to the client owning the resource.
 * @param resource_ The client's resource
 * @param time timestamp with millisecond granularity
 * @param cancelled 1 if the gesture was cancelled, 0 otherwise
 */
static inline void
zwp_pointer_gesture_pinch_v1_send_end(struct wl_resource *resource_, uint32_t serial, uint32_t time, int32_t cancelled)
{
	wl_resource_post_event(resource_, ZWP_POINTER_GESTURE_PINCH_V1_END, serial, time, cancelled);
}

#ifdef  __cplusplus
}
#endif

#endif
