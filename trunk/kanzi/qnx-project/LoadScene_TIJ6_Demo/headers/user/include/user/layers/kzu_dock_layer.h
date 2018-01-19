/**
* \file
* 2D dock (layout) layer.
* 
* KzuDockLayer lays out its children left, right, top or bottom side of the layout area according to the child's ::KZU_PROPERTY_TYPE_DOCK_LAYOUT_DOCKING_SIDE property
* in the order the children were added. The children do not overlap each other, however, they will be assigned zero sizes after the space runs out.
*
* Dock Layer Messages
* ----
* KzuDockLayer does not send or receive any messages.
*
* Dock Layer Properties
* ----
* ::KZU_PROPERTY_TYPE_DOCK_LAYOUT_LAST_CHILD_FILL Boolean property specifies whether the last child should be given all the remaining space
* (::KZ_TRUE) or just the desired size (::KZ_FALSE). The default value is ::KZ_FALSE.
*
* ::KZU_PROPERTY_TYPE_DOCK_LAYOUT_DOCKING_SIDE integer property can be set in a child of KzuUiDockLayout to specify which side of the remaining layout area the child
* should be placed. The value should be one of the ::KzuDockLayoutDockingSide values. The default value is ::KZU_DOCK_LAYOUT_DOCK_LEFT.
*
* ::KZU_PROPERTY_TYPE_LAYOUT_WIDTH float property specifies the size of the layout area in X-axis direction.
*
* ::KZU_PROPERTY_TYPE_LAYOUT_HEIGHT float property specifies the size of the layout area in Y-axis direction.
*
* \see \ref kzu_ui_dock_layout.h for the 3D version of this layout. 
*
* Copyright 2008-2014 by Rightware. All rights reserved.
*/
#ifndef KZU_DOCK_LAYER_H
#define KZU_DOCK_LAYER_H


#include <user/scene_graph/kzu_object_common.h>

#include <system/debug/kzs_error.h>
#include <system/kzs_header.h>
#include <system/kzs_types.h>


KZ_HEADER_BEGIN


/** Docking side of a child of the dock layer. */
enum KzuDockLayoutDockingSide {
    KZU_DOCK_LAYOUT_DOCK_LEFT,      /**< Dock left. */
    KZU_DOCK_LAYOUT_DOCK_RIGHT,     /**< Dock right. */
    KZU_DOCK_LAYOUT_DOCK_TOP,       /**< Dock top. */
    KZU_DOCK_LAYOUT_DOCK_BOTTOM     /**< Dock bottom. */
};


/* Forward declarations. */
struct KzcMemoryManager;
struct KzuFactory;
struct KzuLayer;
struct KzuUIDomain;


/**
 * \struct KzuDockLayer
 * Dock layout layer.
 */
struct KzuDockLayer;


/** Object type for dock layout. */
extern const KzuObjectType KZU_OBJECT_TYPE_DOCK_LAYER;


/** Creates a dock layer. */
kzsError kzuDockLayerCreate(const struct KzcMemoryManager* memoryManager, kzString name,
                            struct KzuUIDomain* uiDomain, struct KzuDockLayer** out_dockLayer);
/** Registers dock layer to the factory. */
kzsError kzuDockLayerRegisterToFactory(const struct KzuFactory* factory);

/** Converts layer to dock layer. */
struct KzuDockLayer* kzuDockLayerFromLayer(const struct KzuLayer* layer);
/** Converts dock layer to layer. */
struct KzuLayer* kzuDockLayerToLayer(const struct KzuDockLayer* dockLayer);

/** Returns the last child fill flag. If true, the last child of the dock is given all the remaining free space. */
kzBool kzuDockLayerGetLastChildFill(const struct KzuDockLayer* dockLayer);

/** Returns the docking side property value of a child of the dock. */
enum KzuDockLayoutDockingSide kzuDockLayerGetDockingSide(const struct KzuLayer* child);


KZ_HEADER_END


#endif
