// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b76afd0

UClass * __cdecl UDS_WorldMapEvent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WorldMapEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WorldMapEvent",
               &Z_Registration_Info_UClass_UDS_WorldMapEvent.InnerSingleton,
               StaticRegisterNativesUDS_WorldMapEvent,0x9b8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_WorldMapEvent>,
               InternalVTableHelperCtorCaller<UDS_WorldMapEvent>,local_res8,
               UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WorldMapEvent.InnerSingleton;
}

// UDS_WorldMapEvent @ 14b76e330

UDS_WorldMapEvent * __thiscall
UDS_WorldMapEvent::UDS_WorldMapEvent(UDS_WorldMapEvent *this,FVTableHelper *param_1)

{
  UDS_EventManager *pUVar1;
  
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_WorldMapEvent__6B_;
  *(undefined8 *)&(this->MarkerNumberingRefrashDelegate).Delegate = 0;
  *(undefined8 *)&(this->MarkerNumberingRefrashDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->MarkerNumberingRefrashDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->MarkerNumberingRefrashDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->MarkerCountDelegate).Delegate = 0;
  *(undefined8 *)&(this->MarkerCountDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->MarkerCountDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->MarkerCountDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->MapIndexIconVisibilityDelegate).Delegate = 0;
  *(undefined8 *)&(this->MapIndexIconVisibilityDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->MapIndexIconVisibilityDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->MapIndexIconVisibilityDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->MarkerListInfoDelegate).Delegate = 0;
  *(undefined8 *)&(this->MarkerListInfoDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->MarkerListInfoDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->MarkerListInfoDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->RequestMarkerAddDelegate).Delegate = 0;
  *(undefined8 *)&(this->RequestMarkerAddDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->RequestMarkerAddDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->RequestMarkerAddDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->RequestMarkerDeleteDelegate).Delegate = 0;
  *(undefined8 *)&(this->RequestMarkerDeleteDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->RequestMarkerDeleteDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->RequestMarkerDeleteDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->RequestAllMarkerDeleteDelegate).Delegate = 0;
  *(undefined8 *)&(this->RequestAllMarkerDeleteDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->RequestAllMarkerDeleteDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->RequestAllMarkerDeleteDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OpenMarkerNoteDelegate).Delegate = 0;
  *(undefined8 *)&(this->OpenMarkerNoteDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OpenMarkerNoteDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OpenMarkerNoteDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->MarkerSharedDelegate).Delegate = 0;
  *(undefined8 *)&(this->MarkerSharedDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->MarkerSharedDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->MarkerSharedDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->IndexFilterToggle).Delegate = 0;
  *(undefined8 *)&(this->IndexFilterToggle).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->IndexFilterToggle).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->IndexFilterToggle).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnCloseInitDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnCloseInitDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnCloseInitDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnCloseInitDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->RefrashMapAllIconDelegate).Delegate = 0;
  *(undefined8 *)&(this->RefrashMapAllIconDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->RefrashMapAllIconDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->RefrashMapAllIconDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->RefrashMarkerListUIDelegate).Delegate = 0;
  *(undefined8 *)&(this->RefrashMarkerListUIDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->RefrashMarkerListUIDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->RefrashMarkerListUIDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->ChangeIndoorGroupID_IndoorInfoListDel).Delegate = 0;
  *(undefined8 *)&(this->ChangeIndoorGroupID_IndoorInfoListDel).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->ChangeIndoorGroupID_IndoorInfoListDel).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->ChangeIndoorGroupID_IndoorInfoListDel).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->ChangedSeletedIndoorFloor).Delegate = 0;
  *(undefined8 *)&(this->ChangedSeletedIndoorFloor).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->ChangedSeletedIndoorFloor).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->ChangedSeletedIndoorFloor).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->ChangeIndoorGroupID).Delegate = 0;
  *(undefined8 *)&(this->ChangeIndoorGroupID).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->ChangeIndoorGroupID).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->ChangeIndoorGroupID).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->IsladnChangeFromWorldMapViewDelegate).Delegate = 0;
  *(undefined8 *)&(this->IsladnChangeFromWorldMapViewDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->IsladnChangeFromWorldMapViewDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->IsladnChangeFromWorldMapViewDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->RangeOverIconSpawnDelegate).Delegate = 0;
  *(undefined8 *)&(this->RangeOverIconSpawnDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->RangeOverIconSpawnDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->RangeOverIconSpawnDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->MapIndexFilterSoltSelectedIndxDelegate).Delegate = 0;
  *(undefined8 *)&(this->MapIndexFilterSoltSelectedIndxDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->MapIndexFilterSoltSelectedIndxDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->MapIndexFilterSoltSelectedIndxDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->DeleteBreachDelegate).Delegate = 0;
  *(undefined8 *)&(this->MousePosByMakerCreateDelegate).Subscriptions = 0;
  (this->MousePosByMakerCreateDelegate)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CBHU__TVector2_N_Math_UE____6B_;
  *(undefined8 *)&(this->MousePosByMakerCreateDelegate).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->MousePosByMakerCreateDelegate).Subscriptions.field_0x20 = 0;
  *(undefined8 *)&(this->DeleteBreachDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->DeleteBreachDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->DeleteBreachDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->DeleteWorldBossIconDelegate).Delegate = 0;
  *(undefined8 *)&(this->DeleteWorldBossIconDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->DeleteWorldBossIconDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->DeleteWorldBossIconDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->BreachIconUpdateDelegate).Delegate = 0;
  *(undefined8 *)&(this->BreachIconUpdateDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->BreachIconUpdateDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->BreachIconUpdateDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->MarkerHoverDelegate).Delegate = 0;
  *(undefined8 *)&(this->MarkerHoverDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->MarkerHoverDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->MarkerHoverDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->IndexFilterIsOpenNotifyDelegate).Delegate = 0;
  *(undefined8 *)&(this->IndexFilterIsOpenNotifyDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->IndexFilterIsOpenNotifyDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->IndexFilterIsOpenNotifyDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->IndoorFloorListItemIndexChangeDelegate).Delegate = 0;
  *(undefined8 *)&(this->IndoorFloorListItemIndexChangeDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->IndoorFloorListItemIndexChangeDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->IndoorFloorListItemIndexChangeDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->IndexFilterSlotIndexChangeDelegate).Delegate = 0;
  *(undefined8 *)&(this->IndexFilterSlotIndexChangeDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->IndexFilterSlotIndexChangeDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->IndexFilterSlotIndexChangeDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->IsContinentDelegate).Delegate = 0;
  *(undefined8 *)&(this->IsContinentDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->IsContinentDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->IsContinentDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->WarpDeviceClickDelegate).Delegate = 0;
  *(undefined8 *)&(this->WarpDeviceClickDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->WarpDeviceClickDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->WarpDeviceClickDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->MarkerInfoBasedDeleteDelegate).Delegate = 0;
  *(undefined8 *)&(this->MarkerInfoBasedDeleteDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->MarkerInfoBasedDeleteDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->MarkerInfoBasedDeleteDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->WorldMapLeftUITypeDelegate).Delegate = 0;
  *(undefined8 *)&(this->WorldMapLeftUITypeDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->WorldMapLeftUITypeDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->WorldMapLeftUITypeDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->MapFocuseDelgate).Delegate = 0;
  *(undefined8 *)&(this->MapFocuseDelgate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->MapFocuseDelgate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->MapFocuseDelgate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->MarkerInfoBasedFocusDelegate).Delegate = 0;
  *(undefined8 *)&(this->MarkerInfoBasedFocusDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->MarkerInfoBasedFocusDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->MarkerInfoBasedFocusDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->IconClickMapFocusDelegate).Delegate = 0;
  *(undefined8 *)&(this->IconClickMapFocusDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->IconClickMapFocusDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->IconClickMapFocusDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->MousePositionQueryDelegate).Delegate = 0;
  *(undefined8 *)&(this->MousePositionQueryDelegate).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->MousePositionQueryDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->WorldMapPanelSizeQueryDelegate).Delegate = 0;
  *(undefined8 *)&(this->WorldMapPanelSizeQueryDelegate).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->WorldMapPanelSizeQueryDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->CurIndexFilterQueryDelegate).Delegate = 0;
  *(undefined8 *)&(this->CurIndexFilterQueryDelegate).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->CurIndexFilterQueryDelegate).Delegate.field_0x10 = 0;
  *(undefined4 *)&(this->MousePosByMakerCreateDelegate).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->MousePosByMakerCreateDelegate).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->MousePosByMakerCreateDelegate).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MousePosByMakerCreateDelegate).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->MousePosByMakerCreateDelegate).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->MousePosByMakerCreateDelegate).Subscriptions.field_0x48 = 0;
  pUVar1 = UDS_EventManager::GetInst();
  if (pUVar1 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (pUVar1,(FDS_IDelegateCleanable *)&this->MousePosByMakerCreateDelegate);
  }
  *(undefined8 *)&(this->MiniMapMarkerDataRefrashDelegate).Subscriptions = 0;
  (this->MiniMapMarkerDataRefrashDelegate)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CBH__V__6B_;
  *(undefined8 *)&(this->MiniMapMarkerDataRefrashDelegate).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->MiniMapMarkerDataRefrashDelegate).Subscriptions.field_0x20 = 0;
  *(undefined4 *)&(this->MiniMapMarkerDataRefrashDelegate).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->MiniMapMarkerDataRefrashDelegate).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->MiniMapMarkerDataRefrashDelegate).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MiniMapMarkerDataRefrashDelegate).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->MiniMapMarkerDataRefrashDelegate).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->MiniMapMarkerDataRefrashDelegate).Subscriptions.field_0x48 = 0;
  pUVar1 = UDS_EventManager::GetInst();
  if (pUVar1 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (pUVar1,(FDS_IDelegateCleanable *)&this->MiniMapMarkerDataRefrashDelegate);
  }
  *(undefined8 *)&(this->ZoomStepChangeDelegate).Subscriptions = 0;
  (this->ZoomStepChangeDelegate)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CBHW4EDS_WorldMapZoomStep____6B_;
  *(undefined8 *)&(this->ZoomStepChangeDelegate).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->ZoomStepChangeDelegate).Subscriptions.field_0x20 = 0;
  *(undefined4 *)&(this->ZoomStepChangeDelegate).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->ZoomStepChangeDelegate).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->ZoomStepChangeDelegate).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ZoomStepChangeDelegate).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->ZoomStepChangeDelegate).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->ZoomStepChangeDelegate).Subscriptions.field_0x48 = 0;
  pUVar1 = UDS_EventManager::GetInst();
  if (pUVar1 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (pUVar1,(FDS_IDelegateCleanable *)&this->ZoomStepChangeDelegate);
  }
  *(undefined8 *)&(this->ChangedMapScaleDelegate).Subscriptions = 0;
  (this->ChangedMapScaleDelegate)._padding_ =
       (longlong)
       &___7__FDS_FilteredEventDelegate___CBH__CBM__CBU__TVector2_N_Math_UE____CBU123___6B_;
  *(undefined8 *)&(this->ChangedMapScaleDelegate).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->ChangedMapScaleDelegate).Subscriptions.field_0x20 = 0;
  *(undefined4 *)&(this->ChangedMapScaleDelegate).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->ChangedMapScaleDelegate).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->ChangedMapScaleDelegate).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChangedMapScaleDelegate).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->ChangedMapScaleDelegate).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->ChangedMapScaleDelegate).Subscriptions.field_0x48 = 0;
  pUVar1 = UDS_EventManager::GetInst();
  if (pUVar1 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (pUVar1,(FDS_IDelegateCleanable *)&this->ChangedMapScaleDelegate);
  }
  *(undefined8 *)&(this->MarkerNoteInfoDelegate).Subscriptions = 0;
  (this->MarkerNoteInfoDelegate)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CB_JVFString____6B_;
  *(undefined8 *)&(this->MarkerNoteInfoDelegate).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->MarkerNoteInfoDelegate).Subscriptions.field_0x20 = 0;
  *(undefined4 *)&(this->MarkerNoteInfoDelegate).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->MarkerNoteInfoDelegate).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->MarkerNoteInfoDelegate).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MarkerNoteInfoDelegate).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->MarkerNoteInfoDelegate).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->MarkerNoteInfoDelegate).Subscriptions.field_0x48 = 0;
  pUVar1 = UDS_EventManager::GetInst();
  if (pUVar1 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (pUVar1,(FDS_IDelegateCleanable *)&this->MarkerNoteInfoDelegate);
  }
  *(undefined8 *)&(this->ChangedPanelTranslationDelegate).Subscriptions = 0;
  (this->ChangedPanelTranslationDelegate)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CB_J__CBU__TVector2_N_Math_UE____CBU123___6B_;
  *(undefined8 *)&(this->ChangedPanelTranslationDelegate).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->ChangedPanelTranslationDelegate).Subscriptions.field_0x20 = 0;
  *(undefined4 *)&(this->ChangedPanelTranslationDelegate).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->ChangedPanelTranslationDelegate).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->ChangedPanelTranslationDelegate).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChangedPanelTranslationDelegate).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->ChangedPanelTranslationDelegate).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->ChangedPanelTranslationDelegate).Subscriptions.field_0x48 = 0;
  pUVar1 = UDS_EventManager::GetInst();
  if (pUVar1 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (pUVar1,(FDS_IDelegateCleanable *)&this->ChangedPanelTranslationDelegate);
  }
  FDS_FilteredEventDelegate<int_const_>::FDS_FilteredEventDelegate<int_const_>
            (&this->ReferencePosChangeDelegate);
  FDS_FilteredEventDelegate<int_const_,bool_const_,int_const_,int_const_>::
  FDS_FilteredEventDelegate<int_const_,bool_const_,int_const_,int_const_>
            (&this->IndoorDataChanageDelegate);
  FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
  ::
  FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
            (&this->ChangeMapPositionOffsetDelegate);
  FDS_FilteredEventDelegate<int_const_,int_const_>::FDS_FilteredEventDelegate<int_const_,int_const_>
            (&this->IndoorChangeDelegate);
  FDS_FilteredEventDelegate<__int64_const_>::FDS_FilteredEventDelegate<__int64_const_>
            (&this->DeleteDetectionStuffDelegate);
  FDS_FilteredEventDelegate<__int64_const_,float_const_>::
  FDS_FilteredEventDelegate<__int64_const_,float_const_>(&this->MapAngleChangeDelegate);
  FDS_FilteredEventDelegate<__int64_const_>::FDS_FilteredEventDelegate<__int64_const_>
            (&this->RangeOverIconDeleteDelegate);
  FDS_FilteredEventDelegate<__int64_const_,float_const_,UE::Math::TVector2<double>_const_>::
  FDS_FilteredEventDelegate<__int64_const_,float_const_,UE::Math::TVector2<double>_const_>
            (&this->UpdateRangeOverIconPositionDelegate);
  FDS_FilteredEventDelegate<int_const_,int>::FDS_FilteredEventDelegate<int_const_,int>
            (&this->CurIndexFilterDelegate);
  return this;
}

// UDS_WorldMapEvent @ 14b76e9f0

UDS_WorldMapEvent * __thiscall
UDS_WorldMapEvent::UDS_WorldMapEvent(UDS_WorldMapEvent *this,FObjectInitializer *param_1)

{
  UDS_EventManager *pUVar1;
  
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_WorldMapEvent__6B_;
  *(undefined8 *)&(this->MarkerNumberingRefrashDelegate).Delegate = 0;
  *(undefined8 *)&(this->MarkerNumberingRefrashDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->MarkerNumberingRefrashDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->MarkerNumberingRefrashDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->MarkerCountDelegate).Delegate = 0;
  *(undefined8 *)&(this->MarkerCountDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->MarkerCountDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->MarkerCountDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->MapIndexIconVisibilityDelegate).Delegate = 0;
  *(undefined8 *)&(this->MapIndexIconVisibilityDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->MapIndexIconVisibilityDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->MapIndexIconVisibilityDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->MarkerListInfoDelegate).Delegate = 0;
  *(undefined8 *)&(this->MarkerListInfoDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->MarkerListInfoDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->MarkerListInfoDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->RequestMarkerAddDelegate).Delegate = 0;
  *(undefined8 *)&(this->RequestMarkerAddDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->RequestMarkerAddDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->RequestMarkerAddDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->RequestMarkerDeleteDelegate).Delegate = 0;
  *(undefined8 *)&(this->RequestMarkerDeleteDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->RequestMarkerDeleteDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->RequestMarkerDeleteDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->RequestAllMarkerDeleteDelegate).Delegate = 0;
  *(undefined8 *)&(this->RequestAllMarkerDeleteDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->RequestAllMarkerDeleteDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->RequestAllMarkerDeleteDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OpenMarkerNoteDelegate).Delegate = 0;
  *(undefined8 *)&(this->OpenMarkerNoteDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OpenMarkerNoteDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OpenMarkerNoteDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->MarkerSharedDelegate).Delegate = 0;
  *(undefined8 *)&(this->MarkerSharedDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->MarkerSharedDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->MarkerSharedDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->IndexFilterToggle).Delegate = 0;
  *(undefined8 *)&(this->IndexFilterToggle).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->IndexFilterToggle).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->IndexFilterToggle).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnCloseInitDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnCloseInitDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnCloseInitDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnCloseInitDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->RefrashMapAllIconDelegate).Delegate = 0;
  *(undefined8 *)&(this->RefrashMapAllIconDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->RefrashMapAllIconDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->RefrashMapAllIconDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->RefrashMarkerListUIDelegate).Delegate = 0;
  *(undefined8 *)&(this->RefrashMarkerListUIDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->RefrashMarkerListUIDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->RefrashMarkerListUIDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->ChangeIndoorGroupID_IndoorInfoListDel).Delegate = 0;
  *(undefined8 *)&(this->ChangeIndoorGroupID_IndoorInfoListDel).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->ChangeIndoorGroupID_IndoorInfoListDel).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->ChangeIndoorGroupID_IndoorInfoListDel).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->ChangedSeletedIndoorFloor).Delegate = 0;
  *(undefined8 *)&(this->ChangedSeletedIndoorFloor).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->ChangedSeletedIndoorFloor).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->ChangedSeletedIndoorFloor).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->ChangeIndoorGroupID).Delegate = 0;
  *(undefined8 *)&(this->ChangeIndoorGroupID).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->ChangeIndoorGroupID).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->ChangeIndoorGroupID).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->IsladnChangeFromWorldMapViewDelegate).Delegate = 0;
  *(undefined8 *)&(this->IsladnChangeFromWorldMapViewDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->IsladnChangeFromWorldMapViewDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->IsladnChangeFromWorldMapViewDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->RangeOverIconSpawnDelegate).Delegate = 0;
  *(undefined8 *)&(this->RangeOverIconSpawnDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->RangeOverIconSpawnDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->RangeOverIconSpawnDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->MapIndexFilterSoltSelectedIndxDelegate).Delegate = 0;
  *(undefined8 *)&(this->MapIndexFilterSoltSelectedIndxDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->MapIndexFilterSoltSelectedIndxDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->MapIndexFilterSoltSelectedIndxDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->DeleteBreachDelegate).Delegate = 0;
  *(undefined8 *)&(this->MousePosByMakerCreateDelegate).Subscriptions = 0;
  (this->MousePosByMakerCreateDelegate)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CBHU__TVector2_N_Math_UE____6B_;
  *(undefined8 *)&(this->MousePosByMakerCreateDelegate).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->MousePosByMakerCreateDelegate).Subscriptions.field_0x20 = 0;
  *(undefined8 *)&(this->DeleteBreachDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->DeleteBreachDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->DeleteBreachDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->DeleteWorldBossIconDelegate).Delegate = 0;
  *(undefined8 *)&(this->DeleteWorldBossIconDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->DeleteWorldBossIconDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->DeleteWorldBossIconDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->BreachIconUpdateDelegate).Delegate = 0;
  *(undefined8 *)&(this->BreachIconUpdateDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->BreachIconUpdateDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->BreachIconUpdateDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->MarkerHoverDelegate).Delegate = 0;
  *(undefined8 *)&(this->MarkerHoverDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->MarkerHoverDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->MarkerHoverDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->IndexFilterIsOpenNotifyDelegate).Delegate = 0;
  *(undefined8 *)&(this->IndexFilterIsOpenNotifyDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->IndexFilterIsOpenNotifyDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->IndexFilterIsOpenNotifyDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->IndoorFloorListItemIndexChangeDelegate).Delegate = 0;
  *(undefined8 *)&(this->IndoorFloorListItemIndexChangeDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->IndoorFloorListItemIndexChangeDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->IndoorFloorListItemIndexChangeDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->IndexFilterSlotIndexChangeDelegate).Delegate = 0;
  *(undefined8 *)&(this->IndexFilterSlotIndexChangeDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->IndexFilterSlotIndexChangeDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->IndexFilterSlotIndexChangeDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->IsContinentDelegate).Delegate = 0;
  *(undefined8 *)&(this->IsContinentDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->IsContinentDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->IsContinentDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->WarpDeviceClickDelegate).Delegate = 0;
  *(undefined8 *)&(this->WarpDeviceClickDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->WarpDeviceClickDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->WarpDeviceClickDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->MarkerInfoBasedDeleteDelegate).Delegate = 0;
  *(undefined8 *)&(this->MarkerInfoBasedDeleteDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->MarkerInfoBasedDeleteDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->MarkerInfoBasedDeleteDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->WorldMapLeftUITypeDelegate).Delegate = 0;
  *(undefined8 *)&(this->WorldMapLeftUITypeDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->WorldMapLeftUITypeDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->WorldMapLeftUITypeDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->MapFocuseDelgate).Delegate = 0;
  *(undefined8 *)&(this->MapFocuseDelgate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->MapFocuseDelgate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->MapFocuseDelgate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->MarkerInfoBasedFocusDelegate).Delegate = 0;
  *(undefined8 *)&(this->MarkerInfoBasedFocusDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->MarkerInfoBasedFocusDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->MarkerInfoBasedFocusDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->IconClickMapFocusDelegate).Delegate = 0;
  *(undefined8 *)&(this->IconClickMapFocusDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->IconClickMapFocusDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->IconClickMapFocusDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->MousePositionQueryDelegate).Delegate = 0;
  *(undefined8 *)&(this->MousePositionQueryDelegate).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->MousePositionQueryDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->WorldMapPanelSizeQueryDelegate).Delegate = 0;
  *(undefined8 *)&(this->WorldMapPanelSizeQueryDelegate).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->WorldMapPanelSizeQueryDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->CurIndexFilterQueryDelegate).Delegate = 0;
  *(undefined8 *)&(this->CurIndexFilterQueryDelegate).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->CurIndexFilterQueryDelegate).Delegate.field_0x10 = 0;
  *(undefined4 *)&(this->MousePosByMakerCreateDelegate).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->MousePosByMakerCreateDelegate).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->MousePosByMakerCreateDelegate).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MousePosByMakerCreateDelegate).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->MousePosByMakerCreateDelegate).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->MousePosByMakerCreateDelegate).Subscriptions.field_0x48 = 0;
  pUVar1 = UDS_EventManager::GetInst();
  if (pUVar1 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (pUVar1,(FDS_IDelegateCleanable *)&this->MousePosByMakerCreateDelegate);
  }
  *(undefined8 *)&(this->MiniMapMarkerDataRefrashDelegate).Subscriptions = 0;
  (this->MiniMapMarkerDataRefrashDelegate)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CBH__V__6B_;
  *(undefined8 *)&(this->MiniMapMarkerDataRefrashDelegate).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->MiniMapMarkerDataRefrashDelegate).Subscriptions.field_0x20 = 0;
  *(undefined4 *)&(this->MiniMapMarkerDataRefrashDelegate).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->MiniMapMarkerDataRefrashDelegate).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->MiniMapMarkerDataRefrashDelegate).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MiniMapMarkerDataRefrashDelegate).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->MiniMapMarkerDataRefrashDelegate).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->MiniMapMarkerDataRefrashDelegate).Subscriptions.field_0x48 = 0;
  pUVar1 = UDS_EventManager::GetInst();
  if (pUVar1 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (pUVar1,(FDS_IDelegateCleanable *)&this->MiniMapMarkerDataRefrashDelegate);
  }
  *(undefined8 *)&(this->ZoomStepChangeDelegate).Subscriptions = 0;
  (this->ZoomStepChangeDelegate)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CBHW4EDS_WorldMapZoomStep____6B_;
  *(undefined8 *)&(this->ZoomStepChangeDelegate).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->ZoomStepChangeDelegate).Subscriptions.field_0x20 = 0;
  *(undefined4 *)&(this->ZoomStepChangeDelegate).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->ZoomStepChangeDelegate).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->ZoomStepChangeDelegate).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ZoomStepChangeDelegate).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->ZoomStepChangeDelegate).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->ZoomStepChangeDelegate).Subscriptions.field_0x48 = 0;
  pUVar1 = UDS_EventManager::GetInst();
  if (pUVar1 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (pUVar1,(FDS_IDelegateCleanable *)&this->ZoomStepChangeDelegate);
  }
  *(undefined8 *)&(this->ChangedMapScaleDelegate).Subscriptions = 0;
  (this->ChangedMapScaleDelegate)._padding_ =
       (longlong)
       &___7__FDS_FilteredEventDelegate___CBH__CBM__CBU__TVector2_N_Math_UE____CBU123___6B_;
  *(undefined8 *)&(this->ChangedMapScaleDelegate).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->ChangedMapScaleDelegate).Subscriptions.field_0x20 = 0;
  *(undefined4 *)&(this->ChangedMapScaleDelegate).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->ChangedMapScaleDelegate).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->ChangedMapScaleDelegate).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChangedMapScaleDelegate).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->ChangedMapScaleDelegate).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->ChangedMapScaleDelegate).Subscriptions.field_0x48 = 0;
  pUVar1 = UDS_EventManager::GetInst();
  if (pUVar1 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (pUVar1,(FDS_IDelegateCleanable *)&this->ChangedMapScaleDelegate);
  }
  *(undefined8 *)&(this->MarkerNoteInfoDelegate).Subscriptions = 0;
  (this->MarkerNoteInfoDelegate)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CB_JVFString____6B_;
  *(undefined8 *)&(this->MarkerNoteInfoDelegate).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->MarkerNoteInfoDelegate).Subscriptions.field_0x20 = 0;
  *(undefined4 *)&(this->MarkerNoteInfoDelegate).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->MarkerNoteInfoDelegate).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->MarkerNoteInfoDelegate).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MarkerNoteInfoDelegate).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->MarkerNoteInfoDelegate).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->MarkerNoteInfoDelegate).Subscriptions.field_0x48 = 0;
  pUVar1 = UDS_EventManager::GetInst();
  if (pUVar1 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (pUVar1,(FDS_IDelegateCleanable *)&this->MarkerNoteInfoDelegate);
  }
  *(undefined8 *)&(this->ChangedPanelTranslationDelegate).Subscriptions = 0;
  (this->ChangedPanelTranslationDelegate)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CB_J__CBU__TVector2_N_Math_UE____CBU123___6B_;
  *(undefined8 *)&(this->ChangedPanelTranslationDelegate).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->ChangedPanelTranslationDelegate).Subscriptions.field_0x20 = 0;
  *(undefined4 *)&(this->ChangedPanelTranslationDelegate).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->ChangedPanelTranslationDelegate).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->ChangedPanelTranslationDelegate).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChangedPanelTranslationDelegate).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->ChangedPanelTranslationDelegate).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->ChangedPanelTranslationDelegate).Subscriptions.field_0x48 = 0;
  pUVar1 = UDS_EventManager::GetInst();
  if (pUVar1 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (pUVar1,(FDS_IDelegateCleanable *)&this->ChangedPanelTranslationDelegate);
  }
  FDS_FilteredEventDelegate<int_const_>::FDS_FilteredEventDelegate<int_const_>
            (&this->ReferencePosChangeDelegate);
  FDS_FilteredEventDelegate<int_const_,bool_const_,int_const_,int_const_>::
  FDS_FilteredEventDelegate<int_const_,bool_const_,int_const_,int_const_>
            (&this->IndoorDataChanageDelegate);
  FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
  ::
  FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
            (&this->ChangeMapPositionOffsetDelegate);
  FDS_FilteredEventDelegate<int_const_,int_const_>::FDS_FilteredEventDelegate<int_const_,int_const_>
            (&this->IndoorChangeDelegate);
  FDS_FilteredEventDelegate<__int64_const_>::FDS_FilteredEventDelegate<__int64_const_>
            (&this->DeleteDetectionStuffDelegate);
  FDS_FilteredEventDelegate<__int64_const_,float_const_>::
  FDS_FilteredEventDelegate<__int64_const_,float_const_>(&this->MapAngleChangeDelegate);
  FDS_FilteredEventDelegate<__int64_const_>::FDS_FilteredEventDelegate<__int64_const_>
            (&this->RangeOverIconDeleteDelegate);
  FDS_FilteredEventDelegate<__int64_const_,float_const_,UE::Math::TVector2<double>_const_>::
  FDS_FilteredEventDelegate<__int64_const_,float_const_,UE::Math::TVector2<double>_const_>
            (&this->UpdateRangeOverIconPositionDelegate);
  FDS_FilteredEventDelegate<int_const_,int>::FDS_FilteredEventDelegate<int_const_,int>
            (&this->CurIndexFilterDelegate);
  return this;
}

// ~UDS_WorldMapEvent @ 14b771040

void __thiscall UDS_WorldMapEvent::~UDS_WorldMapEvent(UDS_WorldMapEvent *this)

{
  void *pvVar1;
  UDS_EventManager *pUVar2;
  
  this->_padding_ = (longlong)&___7UDS_WorldMapEvent__6B_;
  (this->CurIndexFilterDelegate)._padding_ = (longlong)&___7__FDS_FilteredEventDelegate___CBHH__6B_;
  pUVar2 = UDS_EventManager::GetInst();
  if (pUVar2 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate
              (pUVar2,(FDS_IDelegateCleanable *)&this->CurIndexFilterDelegate);
  }
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *)&(this->CurIndexFilterDelegate).Subscriptions);
  *(undefined4 *)&(this->CurIndexFilterDelegate).Subscriptions.field_0x48 = 0;
  pvVar1 = *(void **)&(this->CurIndexFilterDelegate).Subscriptions.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->CurIndexFilterDelegate).Subscriptions);
  (this->UpdateRangeOverIconPositionDelegate)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CB_J__CBM__CBU__TVector2_N_Math_UE____6B_;
  pUVar2 = UDS_EventManager::GetInst();
  if (pUVar2 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate
              (pUVar2,(FDS_IDelegateCleanable *)&this->UpdateRangeOverIconPositionDelegate);
  }
  TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *)&(this->UpdateRangeOverIconPositionDelegate).Subscriptions);
  *(undefined4 *)&(this->UpdateRangeOverIconPositionDelegate).Subscriptions.field_0x48 = 0;
  pvVar1 = *(void **)&(this->UpdateRangeOverIconPositionDelegate).Subscriptions.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->UpdateRangeOverIconPositionDelegate).Subscriptions);
  (this->RangeOverIconDeleteDelegate)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CB_J__V__6B_;
  pUVar2 = UDS_EventManager::GetInst();
  if (pUVar2 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate
              (pUVar2,(FDS_IDelegateCleanable *)&this->RangeOverIconDeleteDelegate);
  }
  TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *)&(this->RangeOverIconDeleteDelegate).Subscriptions);
  *(undefined4 *)&(this->RangeOverIconDeleteDelegate).Subscriptions.field_0x48 = 0;
  pvVar1 = *(void **)&(this->RangeOverIconDeleteDelegate).Subscriptions.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->RangeOverIconDeleteDelegate).Subscriptions);
  (this->MapAngleChangeDelegate)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CB_J__CBM__6B_;
  pUVar2 = UDS_EventManager::GetInst();
  if (pUVar2 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate
              (pUVar2,(FDS_IDelegateCleanable *)&this->MapAngleChangeDelegate);
  }
  TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *)&(this->MapAngleChangeDelegate).Subscriptions);
  *(undefined4 *)&(this->MapAngleChangeDelegate).Subscriptions.field_0x48 = 0;
  pvVar1 = *(void **)&(this->MapAngleChangeDelegate).Subscriptions.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->MapAngleChangeDelegate).Subscriptions);
  (this->DeleteDetectionStuffDelegate)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CB_J__V__6B_;
  pUVar2 = UDS_EventManager::GetInst();
  if (pUVar2 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate
              (pUVar2,(FDS_IDelegateCleanable *)&this->DeleteDetectionStuffDelegate);
  }
  TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *)&(this->DeleteDetectionStuffDelegate).Subscriptions);
  *(undefined4 *)&(this->DeleteDetectionStuffDelegate).Subscriptions.field_0x48 = 0;
  pvVar1 = *(void **)&(this->DeleteDetectionStuffDelegate).Subscriptions.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->DeleteDetectionStuffDelegate).Subscriptions);
  (this->IndoorChangeDelegate)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CBH__CBH__6B_;
  pUVar2 = UDS_EventManager::GetInst();
  if (pUVar2 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate
              (pUVar2,(FDS_IDelegateCleanable *)&this->IndoorChangeDelegate);
  }
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *)&(this->IndoorChangeDelegate).Subscriptions);
  *(undefined4 *)&(this->IndoorChangeDelegate).Subscriptions.field_0x48 = 0;
  pvVar1 = *(void **)&(this->IndoorChangeDelegate).Subscriptions.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->IndoorChangeDelegate).Subscriptions);
  (this->ChangeMapPositionOffsetDelegate)._padding_ =
       (longlong)
       &___7__FDS_FilteredEventDelegate___CBH__CBM__CBU__TVector2_N_Math_UE____CBU123___6B_;
  pUVar2 = UDS_EventManager::GetInst();
  if (pUVar2 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate
              (pUVar2,(FDS_IDelegateCleanable *)&this->ChangeMapPositionOffsetDelegate);
  }
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *)&(this->ChangeMapPositionOffsetDelegate).Subscriptions);
  *(undefined4 *)&(this->ChangeMapPositionOffsetDelegate).Subscriptions.field_0x48 = 0;
  pvVar1 = *(void **)&(this->ChangeMapPositionOffsetDelegate).Subscriptions.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->ChangeMapPositionOffsetDelegate).Subscriptions);
  (this->IndoorDataChanageDelegate)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CBH__CB_N__CBH__CBH__6B_;
  pUVar2 = UDS_EventManager::GetInst();
  if (pUVar2 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate
              (pUVar2,(FDS_IDelegateCleanable *)&this->IndoorDataChanageDelegate);
  }
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *)&(this->IndoorDataChanageDelegate).Subscriptions);
  *(undefined4 *)&(this->IndoorDataChanageDelegate).Subscriptions.field_0x48 = 0;
  pvVar1 = *(void **)&(this->IndoorDataChanageDelegate).Subscriptions.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->IndoorDataChanageDelegate).Subscriptions);
  (this->ReferencePosChangeDelegate)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CBH__V__6B_;
  pUVar2 = UDS_EventManager::GetInst();
  if (pUVar2 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate
              (pUVar2,(FDS_IDelegateCleanable *)&this->ReferencePosChangeDelegate);
  }
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *)&(this->ReferencePosChangeDelegate).Subscriptions);
  *(undefined4 *)&(this->ReferencePosChangeDelegate).Subscriptions.field_0x48 = 0;
  pvVar1 = *(void **)&(this->ReferencePosChangeDelegate).Subscriptions.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->ReferencePosChangeDelegate).Subscriptions);
  (this->ChangedPanelTranslationDelegate)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CB_J__CBU__TVector2_N_Math_UE____CBU123___6B_;
  pUVar2 = UDS_EventManager::GetInst();
  if (pUVar2 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate
              (pUVar2,(FDS_IDelegateCleanable *)&this->ChangedPanelTranslationDelegate);
  }
  TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *)&(this->ChangedPanelTranslationDelegate).Subscriptions);
  *(undefined4 *)&(this->ChangedPanelTranslationDelegate).Subscriptions.field_0x48 = 0;
  pvVar1 = *(void **)&(this->ChangedPanelTranslationDelegate).Subscriptions.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->ChangedPanelTranslationDelegate).Subscriptions);
  (this->MarkerNoteInfoDelegate)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CB_JVFString____6B_;
  pUVar2 = UDS_EventManager::GetInst();
  if (pUVar2 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate
              (pUVar2,(FDS_IDelegateCleanable *)&this->MarkerNoteInfoDelegate);
  }
  TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *)&(this->MarkerNoteInfoDelegate).Subscriptions);
  *(undefined4 *)&(this->MarkerNoteInfoDelegate).Subscriptions.field_0x48 = 0;
  pvVar1 = *(void **)&(this->MarkerNoteInfoDelegate).Subscriptions.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->MarkerNoteInfoDelegate).Subscriptions);
  (this->ChangedMapScaleDelegate)._padding_ =
       (longlong)
       &___7__FDS_FilteredEventDelegate___CBH__CBM__CBU__TVector2_N_Math_UE____CBU123___6B_;
  pUVar2 = UDS_EventManager::GetInst();
  if (pUVar2 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate
              (pUVar2,(FDS_IDelegateCleanable *)&this->ChangedMapScaleDelegate);
  }
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *)&(this->ChangedMapScaleDelegate).Subscriptions);
  *(undefined4 *)&(this->ChangedMapScaleDelegate).Subscriptions.field_0x48 = 0;
  pvVar1 = *(void **)&(this->ChangedMapScaleDelegate).Subscriptions.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->ChangedMapScaleDelegate).Subscriptions);
  (this->ZoomStepChangeDelegate)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CBHW4EDS_WorldMapZoomStep____6B_;
  pUVar2 = UDS_EventManager::GetInst();
  if (pUVar2 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate
              (pUVar2,(FDS_IDelegateCleanable *)&this->ZoomStepChangeDelegate);
  }
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(enum_EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(enum_EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset(&(this->ZoomStepChangeDelegate).Subscriptions);
  *(undefined4 *)&(this->ZoomStepChangeDelegate).Subscriptions.field_0x48 = 0;
  pvVar1 = *(void **)&(this->ZoomStepChangeDelegate).Subscriptions.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(enum_EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(enum_EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ZoomStepChangeDelegate).Subscriptions);
  (this->MiniMapMarkerDataRefrashDelegate)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CBH__V__6B_;
  pUVar2 = UDS_EventManager::GetInst();
  if (pUVar2 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate
              (pUVar2,(FDS_IDelegateCleanable *)&this->MiniMapMarkerDataRefrashDelegate);
  }
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *)&(this->MiniMapMarkerDataRefrashDelegate).Subscriptions);
  *(undefined4 *)&(this->MiniMapMarkerDataRefrashDelegate).Subscriptions.field_0x48 = 0;
  pvVar1 = *(void **)&(this->MiniMapMarkerDataRefrashDelegate).Subscriptions.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->MiniMapMarkerDataRefrashDelegate).Subscriptions);
  (this->MousePosByMakerCreateDelegate)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CBHU__TVector2_N_Math_UE____6B_;
  pUVar2 = UDS_EventManager::GetInst();
  if (pUVar2 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate
              (pUVar2,(FDS_IDelegateCleanable *)&this->MousePosByMakerCreateDelegate);
  }
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *)&(this->MousePosByMakerCreateDelegate).Subscriptions);
  *(undefined4 *)&(this->MousePosByMakerCreateDelegate).Subscriptions.field_0x48 = 0;
  pvVar1 = *(void **)&(this->MousePosByMakerCreateDelegate).Subscriptions.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->MousePosByMakerCreateDelegate).Subscriptions);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CurIndexFilterQueryDelegate);
  pvVar1 = *(void **)&(this->CurIndexFilterQueryDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CurIndexFilterQueryDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->WorldMapPanelSizeQueryDelegate);
  pvVar1 = *(void **)&(this->WorldMapPanelSizeQueryDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->WorldMapPanelSizeQueryDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->MousePositionQueryDelegate);
  pvVar1 = *(void **)&(this->MousePositionQueryDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MousePositionQueryDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->IconClickMapFocusDelegate).Delegate.field_0x8,
             *(int *)&(this->IconClickMapFocusDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->IconClickMapFocusDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->IconClickMapFocusDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->MarkerInfoBasedFocusDelegate).Delegate.field_0x8,
             *(int *)&(this->MarkerInfoBasedFocusDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->MarkerInfoBasedFocusDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MarkerInfoBasedFocusDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->MapFocuseDelgate).Delegate.field_0x8,
             *(int *)&(this->MapFocuseDelgate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->MapFocuseDelgate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MapFocuseDelgate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->WorldMapLeftUITypeDelegate).Delegate.field_0x8,
             *(int *)&(this->WorldMapLeftUITypeDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->WorldMapLeftUITypeDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->WorldMapLeftUITypeDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->MarkerInfoBasedDeleteDelegate).Delegate.field_0x8,
             *(int *)&(this->MarkerInfoBasedDeleteDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->MarkerInfoBasedDeleteDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MarkerInfoBasedDeleteDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->WarpDeviceClickDelegate).Delegate.field_0x8,
             *(int *)&(this->WarpDeviceClickDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->WarpDeviceClickDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->WarpDeviceClickDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->IsContinentDelegate).Delegate.field_0x8,
             *(int *)&(this->IsContinentDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->IsContinentDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->IsContinentDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->IndexFilterSlotIndexChangeDelegate).Delegate.field_0x8,
             *(int *)&(this->IndexFilterSlotIndexChangeDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->IndexFilterSlotIndexChangeDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->IndexFilterSlotIndexChangeDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->IndoorFloorListItemIndexChangeDelegate).Delegate.field_0x8,
             *(int *)&(this->IndoorFloorListItemIndexChangeDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->IndoorFloorListItemIndexChangeDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->IndoorFloorListItemIndexChangeDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->IndexFilterIsOpenNotifyDelegate).Delegate.field_0x8,
             *(int *)&(this->IndexFilterIsOpenNotifyDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->IndexFilterIsOpenNotifyDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->IndexFilterIsOpenNotifyDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->MarkerHoverDelegate).Delegate.field_0x8,
             *(int *)&(this->MarkerHoverDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->MarkerHoverDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MarkerHoverDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->BreachIconUpdateDelegate).Delegate.field_0x8,
             *(int *)&(this->BreachIconUpdateDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->BreachIconUpdateDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->BreachIconUpdateDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->DeleteWorldBossIconDelegate).Delegate.field_0x8,
             *(int *)&(this->DeleteWorldBossIconDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->DeleteWorldBossIconDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->DeleteWorldBossIconDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->DeleteBreachDelegate).Delegate.field_0x8,
             *(int *)&(this->DeleteBreachDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->DeleteBreachDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->DeleteBreachDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->MapIndexFilterSoltSelectedIndxDelegate).Delegate.field_0x8,
             *(int *)&(this->MapIndexFilterSoltSelectedIndxDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->MapIndexFilterSoltSelectedIndxDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MapIndexFilterSoltSelectedIndxDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->RangeOverIconSpawnDelegate).Delegate.field_0x8,
             *(int *)&(this->RangeOverIconSpawnDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->RangeOverIconSpawnDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->RangeOverIconSpawnDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->IsladnChangeFromWorldMapViewDelegate).Delegate.field_0x8,
             *(int *)&(this->IsladnChangeFromWorldMapViewDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->IsladnChangeFromWorldMapViewDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->IsladnChangeFromWorldMapViewDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ChangeIndoorGroupID).Delegate.field_0x8,
             *(int *)&(this->ChangeIndoorGroupID).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->ChangeIndoorGroupID).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangeIndoorGroupID);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ChangedSeletedIndoorFloor).Delegate.field_0x8,
             *(int *)&(this->ChangedSeletedIndoorFloor).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->ChangedSeletedIndoorFloor).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangedSeletedIndoorFloor);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ChangeIndoorGroupID_IndoorInfoListDel).Delegate.field_0x8,
             *(int *)&(this->ChangeIndoorGroupID_IndoorInfoListDel).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->ChangeIndoorGroupID_IndoorInfoListDel).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangeIndoorGroupID_IndoorInfoListDel);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->RefrashMarkerListUIDelegate).Delegate.field_0x8,
             *(int *)&(this->RefrashMarkerListUIDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->RefrashMarkerListUIDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->RefrashMarkerListUIDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->RefrashMapAllIconDelegate).Delegate.field_0x8,
             *(int *)&(this->RefrashMapAllIconDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->RefrashMapAllIconDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->RefrashMapAllIconDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnCloseInitDelegate).Delegate.field_0x8,
             *(int *)&(this->OnCloseInitDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnCloseInitDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCloseInitDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->IndexFilterToggle).Delegate.field_0x8,
             *(int *)&(this->IndexFilterToggle).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->IndexFilterToggle).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->IndexFilterToggle);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->MarkerSharedDelegate).Delegate.field_0x8,
             *(int *)&(this->MarkerSharedDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->MarkerSharedDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MarkerSharedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OpenMarkerNoteDelegate).Delegate.field_0x8,
             *(int *)&(this->OpenMarkerNoteDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OpenMarkerNoteDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OpenMarkerNoteDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->RequestAllMarkerDeleteDelegate).Delegate.field_0x8,
             *(int *)&(this->RequestAllMarkerDeleteDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->RequestAllMarkerDeleteDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->RequestAllMarkerDeleteDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->RequestMarkerDeleteDelegate).Delegate.field_0x8,
             *(int *)&(this->RequestMarkerDeleteDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->RequestMarkerDeleteDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->RequestMarkerDeleteDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->RequestMarkerAddDelegate).Delegate.field_0x8,
             *(int *)&(this->RequestMarkerAddDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->RequestMarkerAddDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->RequestMarkerAddDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->MarkerListInfoDelegate).Delegate.field_0x8,
             *(int *)&(this->MarkerListInfoDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->MarkerListInfoDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MarkerListInfoDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->MapIndexIconVisibilityDelegate).Delegate.field_0x8,
             *(int *)&(this->MapIndexIconVisibilityDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->MapIndexIconVisibilityDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MapIndexIconVisibilityDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->MarkerCountDelegate).Delegate.field_0x8,
             *(int *)&(this->MarkerCountDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->MarkerCountDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MarkerCountDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->MarkerNumberingRefrashDelegate).Delegate.field_0x8,
             *(int *)&(this->MarkerNumberingRefrashDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->MarkerNumberingRefrashDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MarkerNumberingRefrashDelegate);
  UDS_EventBase::~UDS_EventBase((UDS_EventBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b7758e0

UClass * __cdecl UDS_WorldMapEvent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WorldMapEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WorldMapEvent",
               &Z_Registration_Info_UClass_UDS_WorldMapEvent.InnerSingleton,
               StaticRegisterNativesUDS_WorldMapEvent,0x9b8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_WorldMapEvent>,
               InternalVTableHelperCtorCaller<UDS_WorldMapEvent>,local_res8,
               UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WorldMapEvent.InnerSingleton;
}

// StaticRegisterNativesUDS_WorldMapEvent @ 14b777c40

void __cdecl UDS_WorldMapEvent::StaticRegisterNativesUDS_WorldMapEvent(void)

{
  return;
}

// GetEvent @ 14bb655f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_WorldMapEvent * __cdecl UDS_WorldMapEvent::GetEvent(void)

{
  UDS_EventManager *this;
  UDS_LogManager *pUVar1;
  UDS_WorldMapEvent *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_EventManager::GetInst();
  if (this != (UDS_EventManager *)0x0) {
    if ((char)this->_padding_ != '\x01') {
      pUVar2 = UDS_EventManager::GetEventInternal<UDS_WorldMapEvent>(this);
      return pUVar2;
    }
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EventManager::GetEvent",0x1a,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Warning,local_138.Ptr,0x31,
                 L"Cannot access event during UDS_EventManager destruction.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return (UDS_WorldMapEvent *)0x0;
}

