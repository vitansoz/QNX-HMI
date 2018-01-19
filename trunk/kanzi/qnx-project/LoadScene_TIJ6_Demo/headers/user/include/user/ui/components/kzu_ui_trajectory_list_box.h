/**
* \file
* Trajectory list box component for user interface.
*
* KzuUiTrajectoryListBox is a KzuUiListBox that has its own KzuUiTrajectoryLayout, KzuUiScrollView and KzuPresenter. The KzuUiTrajectoryLayout lays out the children of
* KzuUiTrajectoryListBox on a user-specified ::KzuTrajectory based on the internal KzuPresenter's decisions. The KzuUiScrollView provides scrolling functionality for
* the KzuUiTrajectoryLayout.
*
* Trajectory List Box Messages
* ----
* KzuUiTrajectoryListBox does not send or receive any messages.
*
* Trajectory List Box Properties
* ----
* ::KZU_PROPERTY_TYPE_TRAJECTORY_LIST_BOX_TRAJECTORY string property can be set to change the internal KzuUiTrajectoryLayout's ::KZU_PROPERTY_TYPE_TRAJECTORY property.
* It specifies the resource ID of the ::KzuTrajectory to use in the trajectory layout.
*
* ::KZU_PROPERTY_TYPE_TRAJECTORY_LIST_BOX_ALIGN_TO_TANGENT Boolean property can be set to change the internal KzuUiTrajectoryLayout's
* ::KZU_PROPERTY_TYPE_TRAJECTORY_LAYOUT_ALIGN_TO_TANGENT property. It specifies whether the children are aligned according to the tangent of
* the trajectory in the child's offset. The default value is ::KZ_FALSE.
*
* ::KZU_PROPERTY_TYPE_TRAJECTORY_LIST_BOX_CLIP_START_OFFSET_PROPORTIONAL float property can be set to change the internal KzuUiTrajectoryLayout's
* ::KZU_PROPERTY_TYPE_TRAJECTORY_LAYOUT_CLIP_START_OFFSET_PROPORTIONAL property. It specifies an offset (in proportional range [0, 1])
* to the beginning of the clipping area of the trajectory layout. This property affects the ::KZU_PROPERTY_TYPE_VISIBLE_AMOUNT_IN_PARENT
* property setting only (see \ref kzu_ui_trajectory_layout.h). The default value is 0.
*
* ::KZU_PROPERTY_TYPE_TRAJECTORY_LIST_BOX_CLIP_END_OFFSET_PROPORTIONAL float property can be set to change the internal KzuUiTrajectoryLayout's
* ::KZU_PROPERTY_TYPE_TRAJECTORY_LAYOUT_CLIP_END_OFFSET_PROPORTIONAL property. It specifies an offset (in proportional range [0, 1])
* to the end of the clipping area of the trajectory layout. This property affects the ::KZU_PROPERTY_TYPE_VISIBLE_AMOUNT_IN_PARENT
* property setting only (see \ref kzu_ui_trajectory_layout.h). The default value is 1.
*
* ::KZU_PROPERTY_TYPE_TRAJECTORY_LIST_BOX_SCROLL_AXIS ::KzcVector2 property can be set to change the internal KzuUiScrollView's ::KZU_PROPERTY_TYPE_SCROLL_VIEW_SCROLL_AXIS property.
* The property specifies what is the direction of the scroll view's X-axis. This has an effect on the coordinates sent out from the scroll view. The default value is {1.0, 0}.
*
* ::KZU_PROPERTY_TYPE_TRAJECTORY_LIST_BOX_RECOGNITION_THRESHOLD float property can be set to change the internal KzuUiScrollView's
* ::KZU_PROPERTY_TYPE_SCROLL_VIEW_RECOGNITION_THRESHOLD property. It specifies how much the pointing device has to move before the scrolling starts. The default value is 5.0.
*
* ::KZU_PROPERTY_TYPE_TRAJECTORY_LIST_BOX_SENSITIVITY float property can be set to change the internal KzuUiScrollView's ::KZU_PROPERTY_TYPE_SCROLL_VIEW_SENSITIVITY property.
* It acts as a multiplier for the scrolling distance relative to the pointing device movement. The default value is 1.0.
*
* ::KZU_PROPERTY_TYPE_TRAJECTORY_LIST_BOX_SLIDING_ACCELERATION_COEFFICIENT float property can be set to change the internal KzuUiScrollView's 
* ::KZU_PROPERTY_TYPE_SCROLL_VIEW_SLIDING_ACCELERATION_COEFFICIENT property. It specifies how fast scrolling accelerates when sliding. The default value is 40.0.
*
* ::KZU_PROPERTY_TYPE_TRAJECTORY_LIST_BOX_SLIDING_DRAG_COEFFICIENT float property can be set to change the internal KzuUiScrollView's
* ::KZU_PROPERTY_TYPE_SCROLL_VIEW_SLIDING_DRAG_COEFFICIENT property. It specifies how much drag affects scrolling when sliding. The default value is 80.0.
*
* ::KZU_PROPERTY_TYPE_TRAJECTORY_LIST_BOX_DRAGGING_ACCELERATION_COEFFICIENT float property can be set to change the internal KzuUiScrollView's
* ::KZU_PROPERTY_TYPE_SCROLL_VIEW_DRAGGING_ACCELERATION_COEFFICIENT property. The value specifies how fast scrolling accelerates when dragging.
* The value should be in the range [0, 500.0]. The default value is 80.0.
*
* ::KZU_PROPERTY_TYPE_TRAJECTORY_LIST_BOX_DRAGGING_DRAG_COEFFICIENT float property can be set to change the internal KzuUiScrollView's
* ::KZU_PROPERTY_TYPE_SCROLL_VIEW_DRAGGING_DRAG_COEFFICIENT property. The value specifies how much drag affects scrolling when dragging. The value
* should be in the range [0, 500.0]. The default value is 150.0.
*
* ::KZU_PROPERTY_TYPE_TRAJECTORY_LIST_BOX_DRAGGING_IMPULSE_FACTOR float property can be set to change the internal KzuUiScrollView's
* ::KZU_PROPERTY_TYPE_SCROLL_VIEW_DRAGGING_IMPULSE_FACTOR property. The value specifies how much impulse is generated by the pointing device movement when dragging.
* The default value is 2.0.
*
* ::KZU_PROPERTY_TYPE_TRAJECTORY_LIST_BOX_SWIPE_DISTANCE float property can be set to change the internal KzuUiScrollView's
* ::KZU_PROPERTY_TYPE_SCROLL_VIEW_SWIPE_DISTANCE property. It specifies how much a swipe affects the scrolling distance, relative to the speed of the swipe.
* The default value is 0.005.
*
* \see \ref kzu_ui_list_box.h, \ref kzu_ui_scroll_view.h, \ref kzu_ui_trajectory_layout.h, \ref kzu_trajectory_layout_presenter.h.
*
* Copyright 2008-2014 by Rightware. All rights reserved.
*/
#ifndef KZU_UI_TRAJECTORY_LIST_BOX_H
#define KZU_UI_TRAJECTORY_LIST_BOX_H


#include <user/scene_graph/kzu_object_common.h>
#include <user/scene_graph/kzu_object_common.h>
#include <user/ui/components/listbox/kzu_object_generator_common.h>
#include <user/ui/components/listbox/kzu_item_container_generator_common.h>

#include <system/kzs_types.h>
#include <system/debug/kzs_error.h>
#include <system/kzs_header.h>


KZ_HEADER_BEGIN


/* Forward declarations. */
struct KzuFactory;
struct KzcMemoryManager;
struct KzuUIDomain;
struct KzuTrajectory;
struct KzuUiListBox;
struct KzuUiTrajectoryLayout;

/**
* \struct KzuUiTrajectoryListBox
* Trajectory list box user interface component.
*/
struct KzuUiTrajectoryListBox;


/** Casts UiTrajectoryListBox to UiComponentNode. */
struct KzuUiComponentNode* kzuUiTrajectoryListBoxToUiComponentNode(const struct KzuUiTrajectoryListBox* trajectoryListBox);

/** Casts UiComponentNode to UiTrajectoryListBox. */
struct KzuUiTrajectoryListBox* kzuUiTrajectoryListBoxFromUiComponentNode(const struct KzuUiComponentNode* component);

/** Casts UiTrajectoryListBox to UiListBox. */
struct KzuUiListBox* kzuUiTrajectoryListBoxToUiListBox(const struct KzuUiTrajectoryListBox* trajectoryListBox);

/** Casts UiListBox to UiTrajectoryListBox. */
struct KzuUiTrajectoryListBox* kzuUiTrajectoryListBoxFromUiListBox(const struct KzuUiListBox* listBox);


/** Registers object to the factory. */
kzsError kzuUiTrajectoryListBoxRegisterToFactory(const struct KzuFactory* factory);

/** Creates a trajectory list box. */
kzsError kzuUiTrajectoryListBoxCreate(const struct KzcMemoryManager* memoryManager, kzString name, struct KzuUIDomain* uiDomain,
                                      KzuObjectGeneratorType objectGeneratorType, KzuItemContainerGeneratorType itemContainerGeneratorType,
                                      struct KzuUiTrajectoryListBox** out_listBox);

/** Creates a trajectory list box with default generators. */
kzsError kzuUiTrajectoryListBoxCreateDefault(const struct KzcMemoryManager* memoryManager, kzString name, struct KzuUIDomain* uiDomain,
                                             struct KzuUiTrajectoryListBox** out_listBox);

/** Sets trajectory for the list box. */
kzsError kzuUiTrajectoryListBoxSetTrajectory(const struct KzuUiTrajectoryListBox* listBox, struct KzuTrajectory* trajectory);
/** Gets trajectory from the list box. */
struct KzuTrajectory* kzuUiTrajectoryListBoxGetTrajectory(const struct KzuUiTrajectoryListBox* listBox);

/** Gets the trajectory layout corresponding to the trajectory list box. */
struct KzuUiTrajectoryLayout* kzuUiTrajectoryListBoxGetLayout(const struct KzuUiTrajectoryListBox* listBox);


/** Object type for trajectory list box. */
extern const KzuObjectType KZU_OBJECT_TYPE_UI_TRAJECTORY_LIST_BOX;


KZ_HEADER_END


#endif