// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 83

// SetContinentEvent_WrapperImpl @ 14b6fa4a0

void __cdecl UDS_VM_WorldMap::SetContinentEvent_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WorldMapManager *this;
  FDS_MapIndoorGroupTableRow *pFVar1;
  UDS_WorldMapEvent *pUVar2;
  TVector2<double>_u_0 TStack_18;
  
  if (*(char *)((longlong)param_1 + 0x4c4) == '\x01') {
    this = UDS_WorldMapManager::GetInst();
    if ((this != (UDS_WorldMapManager *)0x0) &&
       (pFVar1 = FDS_MapIndoorGroupTableRow::Get((longlong)*(int *)((longlong)param_1 + 900),true),
       pFVar1 != (FDS_MapIndoorGroupTableRow *)0x0)) {
      TStack_18._s_0.X = (pFVar1->ZoneIslandPosition).field0_0x0._s_0.X;
      TStack_18._s_0.Y = (pFVar1->ZoneIslandPosition).field0_0x0._s_0.Y;
      UDS_WorldMapManager::SetContentsFocusPosition(this,(TVector2<double> *)&TStack_18._s_0);
      IslandIDChanged(param_1,pFVar1->ID_ZoneIsland);
    }
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x1e0) = 0;
    TStack_18._8_4_ = FFieldNotificationClassDescriptor::ContinentUIVisibility.BitNumber;
    TStack_18._s_0.X = (double)FFieldNotificationClassDescriptor::ContinentUIVisibility.FieldName;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&TStack_18);
    pUVar2 = UDS_WorldMapEvent::GetEvent();
    if (pUVar2 != (UDS_WorldMapEvent *)0x0) {
      FDS_EventDelegate<bool_const_>::Broadcast(&pUVar2->IsContinentDelegate,true);
      return;
    }
  }
  return;
}

// SetSkyMapButtonEvent_WrapperImpl @ 14b6fa4b0

void __cdecl UDS_VM_WorldMap::SetSkyMapButtonEvent_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  if ((*(char *)((longlong)param_1 + 0x39c) != '\x01') && (*(int *)((longlong)param_1 + 0x490) != 0)
     ) {
    OnChangeIndoorGroupID(param_1,*(int *)((longlong)param_1 + 0x490));
    *(undefined1 *)((longlong)param_1 + 0x39c) = 1;
    iStack_10 = FFieldNotificationClassDescriptor::IsSkyMap.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::IsSkyMap.FieldName;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// SetGroundMapButtonClicked_WrapperImpl @ 14b6fa4c0

void __cdecl UDS_VM_WorldMap::SetGroundMapButtonClicked_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  if ((*(char *)((longlong)param_1 + 0x39c) != '\0') && (*(int *)((longlong)param_1 + 0x48c) != 0))
  {
    IslandIDChanged(param_1,*(int *)((longlong)param_1 + 0x48c));
    *(undefined1 *)((longlong)param_1 + 0x39c) = 0;
    iStack_10 = FFieldNotificationClassDescriptor::IsSkyMap.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::IsSkyMap.FieldName;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// SetSelectedUpButtonClicked_WrapperImpl @ 14b6fa4d0

void __cdecl UDS_VM_WorldMap::SetSelectedUpButtonClicked_WrapperImpl(void *param_1,void *param_2)

{
  InputActionSelectedUpDownEvent(param_1,true);
  return;
}

// SetSelectedUpDownClicked_WrapperImpl @ 14b6fa4e0

void __cdecl UDS_VM_WorldMap::SetSelectedUpDownClicked_WrapperImpl(void *param_1,void *param_2)

{
  InputActionSelectedUpDownEvent(param_1,false);
  return;
}

// StaticClass @ 14b6fa4f0

UClass * __cdecl UDS_VM_WorldMap::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMap.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMap",
               &Z_Registration_Info_UClass_UDS_VM_WorldMap.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMap,0x4d0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_WorldMap>,InternalVTableHelperCtorCaller<UDS_VM_WorldMap>
               ,local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMap.InnerSingleton;
}

// UDS_VM_WorldMap @ 14b701260

UDS_VM_WorldMap * __thiscall
UDS_VM_WorldMap::UDS_VM_WorldMap(UDS_VM_WorldMap *this,FVTableHelper *param_1)

{
  TVector2<double> TVar1;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ContinentEvent)._padding_ = '\0';
  (this->ContinentEvent).bIsCustomSelected = false;
  (this->ContinentEvent).bIsLacked = false;
  (this->ContinentEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ContinentEvent).Delegate = 0;
  *(undefined4 *)&(this->ContinentEvent).Delegate.field_0x10 = 0;
  (this->SkyMapButtonEvent)._padding_ = '\0';
  (this->SkyMapButtonEvent).bIsCustomSelected = false;
  (this->SkyMapButtonEvent).bIsLacked = false;
  (this->SkyMapButtonEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->SkyMapButtonEvent).Delegate = 0;
  *(undefined4 *)&(this->SkyMapButtonEvent).Delegate.field_0x10 = 0;
  (this->GroundMapButtonClicked)._padding_ = '\0';
  (this->GroundMapButtonClicked).bIsCustomSelected = false;
  (this->GroundMapButtonClicked).bIsLacked = false;
  (this->GroundMapButtonClicked).bIsCustomDisabled = false;
  *(undefined8 *)&(this->GroundMapButtonClicked).Delegate = 0;
  *(undefined4 *)&(this->GroundMapButtonClicked).Delegate.field_0x10 = 0;
  (this->SelectedUpButtonClicked)._padding_ = '\0';
  (this->SelectedUpButtonClicked).bIsCustomSelected = false;
  (this->SelectedUpButtonClicked).bIsLacked = false;
  (this->SelectedUpButtonClicked).bIsCustomDisabled = false;
  *(undefined8 *)&(this->SelectedUpButtonClicked).Delegate = 0;
  *(undefined4 *)&(this->SelectedUpButtonClicked).Delegate.field_0x10 = 0;
  (this->SelectedUpDownClicked)._padding_ = '\0';
  (this->SelectedUpDownClicked).bIsCustomSelected = false;
  (this->SelectedUpDownClicked).bIsLacked = false;
  (this->SelectedUpDownClicked).bIsCustomDisabled = false;
  *(undefined8 *)&(this->SelectedUpDownClicked).Delegate = 0;
  *(undefined4 *)&(this->SelectedUpDownClicked).Delegate.field_0x10 = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap__6B_;
  *(undefined8 *)&(this->ContinentEvent).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->SkyMapButtonEvent).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->GroundMapButtonClicked).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->SelectedUpButtonClicked).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->SelectedUpDownClicked).Delegate.field_0x8 = 0;
  (this->VM_MinimapTexture).field0_0x0.DebugPtr = (UDS_VM_MapTexture *)0x0;
  (this->VM_MinimapSpawnUnScaled).field0_0x0.DebugPtr = (UDS_VM_MapSpawn *)0x0;
  (this->VM_WorldMap_MapIndexFilter).field0_0x0.DebugPtr = (UDS_VM_WorldMap_MapIndexFilter *)0x0;
  (this->VM_WorldMap_IndoorFloorInfoList).field0_0x0.DebugPtr =
       (UDS_VM_WorldMap_IndoorFloorInfoList *)0x0;
  (this->VM_InputKey_IA_UI_SelectUp).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->VM_InputKey_IA_UI_SelectDown).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->VM_EnviromentInfo).field0_0x0.DebugPtr = (UDS_VM_EnvironmentInfo *)0x0;
  (this->VM_WorldMapMarkerList).field0_0x0.DebugPtr = (UDS_VM_WorldMapMarkerList *)0x0;
  (this->VM_WorldMapZoneList).field0_0x0.DebugPtr = (UDS_VM_WorldMapZoneList *)0x0;
  this->CameraAngle = 0.0;
  this->PlayerAngle = 0.0;
  this->LastPlayerAngle = 0.0;
  this->MapAngle = 0.0;
  this->MapScaleFloat = 0.0;
  (this->MapLocation).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->ContinentUIVisibility = Collapsed;
  this->RightMiddleUIVisibility = Collapsed;
  (this->MapPositionOffset).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->MapScale2D).field0_0x0._s_0.X = 1.0;
  (this->MapScale2D).field0_0x0._s_0.Y = 1.0;
  (this->OwnerMovementCore).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwnerCameraComponent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->TextInGameDateTime).StringTableType = None;
  (this->TextInGameDateTime).StringTableID = 0;
  (this->TextInGameDateTime).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TextInGameDateTime).StringEnumTableNameID.Number = 0;
  (this->TextInGameDateTime).DateTime.Ticks = 0;
  (this->TextInGameDateTime).TimeSpan.Ticks = 0;
  (this->TextInGameDateTime).TimeExpressionType = None;
  (this->TextInGameDateTime).IsExpression = false;
  (this->TextInGameDateTime).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TextInGameDateTime).UniqueString.Data.ArrayNum = 0;
  (this->TextInGameDateTime).UniqueString.Data.ArrayMax = 0;
  (this->TextInGameDateTime).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextInGameDateTime).FormatArgs.ArrayNum = 0;
  (this->TextInGameDateTime).FormatArgs.ArrayMax = 0;
  (this->TextServerDateTime).StringTableType = None;
  (this->TextServerDateTime).StringTableID = 0;
  (this->TextServerDateTime).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TextServerDateTime).StringEnumTableNameID.Number = 0;
  (this->TextServerDateTime).DateTime.Ticks = 0;
  (this->TextServerDateTime).TimeSpan.Ticks = 0;
  (this->TextServerDateTime).TimeExpressionType = None;
  (this->TextServerDateTime).IsExpression = false;
  (this->TextServerDateTime).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TextServerDateTime).UniqueString.Data.ArrayNum = 0;
  (this->TextServerDateTime).UniqueString.Data.ArrayMax = 0;
  (this->TextServerDateTime).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextServerDateTime).FormatArgs.ArrayNum = 0;
  (this->TextServerDateTime).FormatArgs.ArrayMax = 0;
  (this->TextIslandName).StringTableType = None;
  (this->TextIslandName).StringTableID = 0;
  (this->TextIslandName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TextIslandName).StringEnumTableNameID.Number = 0;
  (this->TextIslandName).DateTime.Ticks = 0;
  (this->TextIslandName).TimeSpan.Ticks = 0;
  (this->TextIslandName).TimeExpressionType = None;
  (this->TextIslandName).IsExpression = false;
  (this->TextIslandName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextIslandName).UniqueString.Data.ArrayNum = 0;
  (this->TextIslandName).UniqueString.Data.ArrayMax = 0;
  (this->TextIslandName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextIslandName).FormatArgs.ArrayNum = 0;
  (this->TextIslandName).FormatArgs.ArrayMax = 0;
  (this->TextMyMarkerCount).StringTableType = None;
  (this->TextMyMarkerCount).StringTableID = 0;
  (this->TextMyMarkerCount).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TextMyMarkerCount).StringEnumTableNameID.Number = 0;
  (this->TextMyMarkerCount).DateTime.Ticks = 0;
  (this->TextMyMarkerCount).TimeSpan.Ticks = 0;
  (this->TextMyMarkerCount).TimeExpressionType = None;
  (this->TextMyMarkerCount).IsExpression = false;
  (this->TextMyMarkerCount).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TextMyMarkerCount).UniqueString.Data.ArrayNum = 0;
  (this->TextMyMarkerCount).UniqueString.Data.ArrayMax = 0;
  (this->TextMyMarkerCount).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextMyMarkerCount).FormatArgs.ArrayNum = 0;
  (this->TextMyMarkerCount).FormatArgs.ArrayMax = 0;
  (this->TextZoneName).StringTableType = None;
  (this->TextZoneName).StringTableID = 0;
  (this->TextZoneName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TextZoneName).StringEnumTableNameID.Number = 0;
  (this->TextZoneName).DateTime.Ticks = 0;
  (this->TextZoneName).TimeSpan.Ticks = 0;
  (this->TextZoneName).TimeExpressionType = None;
  (this->TextZoneName).IsExpression = false;
  (this->TextZoneName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextZoneName).UniqueString.Data.ArrayNum = 0;
  (this->TextZoneName).UniqueString.Data.ArrayMax = 0;
  (this->TextZoneName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextZoneName).FormatArgs.ArrayNum = 0;
  (this->TextZoneName).FormatArgs.ArrayMax = 0;
  this->MapType = 0;
  this->CurCharIslandID = 0;
  this->CurLookIslandID = 0;
  this->CurLookIndoorGroupID = 0;
  this->RightMiddleUISwicher = 0;
  this->CurLookIslandIDByMapTexture = 0;
  this->CurLookIslandIDByMapSpawn = 0;
  this->OrthoWidth = 0.0;
  this->TextureSize = 1024.0;
  this->IsSkyMap = false;
  this->WorldIslandZoneIDMap = (UWN_Island_ZoneIDMap *)0x0;
  this->WorldMapZoomStep = LEVEL1;
  this->SelectUpDownFocusType = NONE;
  (this->MapStartPos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MapEndPos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MapSize).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->IndoorMapStartPos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->IndoorMapEndPos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->ReferencePosition).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->WorldMapPanelSize).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MaxCell).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->PrevMousePositioin).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->DragOffsetValue).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->InGameHour = 0;
  this->InGameMin = 0;
  this->InGameSec = 0;
  this->WorldMapZoomStepID = 0;
  (this->TargetMapPositionOffset).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  this->CurCharIndoorGroupID = 0;
  this->ZoomLevelValue1 = 0;
  this->ZoomLevelValue2 = 0;
  this->ZoomLevelValue3 = 0;
  this->DefaultWorldMapWheelCount = 0;
  this->WheelMaxCount = 1;
  this->BaseCellValueY = 0;
  this->GroundIslandID = 0;
  this->SkyIndoorGroupID = 0;
  this->IndoorVolumGroupID = 0;
  this->ScaleMaxValue = 0.0;
  this->ScaleMinValue = 0.0;
  this->BeforeUserScale = 0.0;
  this->PadCursorSensitivity = 0.0;
  this->DefaultScale = 2.0;
  this->DefaultScaleMinSize = 0.0;
  this->WheelSensitivity = 0.0;
  this->DefaultPadSpeed = 0.0;
  this->BaseScale = 1.0;
  this->UserScale = 1.0;
  this->TargetScale = 1.0;
  this->IsIndoor = false;
  this->IsMarkerDeleteButtonLongPressed = false;
  this->IsMarkerShareButtonLongPressed = false;
  this->IsMarkerObjectHoverd = false;
  this->IsOpenIndexFilterUI = false;
  this->IsZoomInOut = false;
  this->IsFocusLerpStart = false;
  return this;
}

// UDS_VM_WorldMap @ 14b7016a0

UDS_VM_WorldMap * __thiscall
UDS_VM_WorldMap::UDS_VM_WorldMap(UDS_VM_WorldMap *this,FObjectInitializer *param_1)

{
  TVector2<double> TVar1;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ContinentEvent)._padding_ = '\0';
  (this->ContinentEvent).bIsCustomSelected = false;
  (this->ContinentEvent).bIsLacked = false;
  (this->ContinentEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ContinentEvent).Delegate = 0;
  *(undefined4 *)&(this->ContinentEvent).Delegate.field_0x10 = 0;
  (this->SkyMapButtonEvent)._padding_ = '\0';
  (this->SkyMapButtonEvent).bIsCustomSelected = false;
  (this->SkyMapButtonEvent).bIsLacked = false;
  (this->SkyMapButtonEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->SkyMapButtonEvent).Delegate = 0;
  *(undefined4 *)&(this->SkyMapButtonEvent).Delegate.field_0x10 = 0;
  (this->GroundMapButtonClicked)._padding_ = '\0';
  (this->GroundMapButtonClicked).bIsCustomSelected = false;
  (this->GroundMapButtonClicked).bIsLacked = false;
  (this->GroundMapButtonClicked).bIsCustomDisabled = false;
  *(undefined8 *)&(this->GroundMapButtonClicked).Delegate = 0;
  *(undefined4 *)&(this->GroundMapButtonClicked).Delegate.field_0x10 = 0;
  (this->SelectedUpButtonClicked)._padding_ = '\0';
  (this->SelectedUpButtonClicked).bIsCustomSelected = false;
  (this->SelectedUpButtonClicked).bIsLacked = false;
  (this->SelectedUpButtonClicked).bIsCustomDisabled = false;
  *(undefined8 *)&(this->SelectedUpButtonClicked).Delegate = 0;
  *(undefined4 *)&(this->SelectedUpButtonClicked).Delegate.field_0x10 = 0;
  (this->SelectedUpDownClicked)._padding_ = '\0';
  (this->SelectedUpDownClicked).bIsCustomSelected = false;
  (this->SelectedUpDownClicked).bIsLacked = false;
  (this->SelectedUpDownClicked).bIsCustomDisabled = false;
  *(undefined8 *)&(this->SelectedUpDownClicked).Delegate = 0;
  *(undefined4 *)&(this->SelectedUpDownClicked).Delegate.field_0x10 = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap__6B_;
  *(undefined8 *)&(this->ContinentEvent).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->SkyMapButtonEvent).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->GroundMapButtonClicked).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->SelectedUpButtonClicked).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->SelectedUpDownClicked).Delegate.field_0x8 = 0;
  (this->VM_MinimapTexture).field0_0x0.DebugPtr = (UDS_VM_MapTexture *)0x0;
  (this->VM_MinimapSpawnUnScaled).field0_0x0.DebugPtr = (UDS_VM_MapSpawn *)0x0;
  (this->VM_WorldMap_MapIndexFilter).field0_0x0.DebugPtr = (UDS_VM_WorldMap_MapIndexFilter *)0x0;
  (this->VM_WorldMap_IndoorFloorInfoList).field0_0x0.DebugPtr =
       (UDS_VM_WorldMap_IndoorFloorInfoList *)0x0;
  (this->VM_InputKey_IA_UI_SelectUp).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->VM_InputKey_IA_UI_SelectDown).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->VM_EnviromentInfo).field0_0x0.DebugPtr = (UDS_VM_EnvironmentInfo *)0x0;
  (this->VM_WorldMapMarkerList).field0_0x0.DebugPtr = (UDS_VM_WorldMapMarkerList *)0x0;
  (this->VM_WorldMapZoneList).field0_0x0.DebugPtr = (UDS_VM_WorldMapZoneList *)0x0;
  this->CameraAngle = 0.0;
  this->PlayerAngle = 0.0;
  this->LastPlayerAngle = 0.0;
  this->MapAngle = 0.0;
  this->MapScaleFloat = 0.0;
  (this->MapLocation).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->ContinentUIVisibility = Collapsed;
  this->RightMiddleUIVisibility = Collapsed;
  (this->MapPositionOffset).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->MapScale2D).field0_0x0._s_0.X = 1.0;
  (this->MapScale2D).field0_0x0._s_0.Y = 1.0;
  (this->OwnerMovementCore).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwnerCameraComponent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->TextInGameDateTime).StringTableType = None;
  (this->TextInGameDateTime).StringTableID = 0;
  (this->TextInGameDateTime).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TextInGameDateTime).StringEnumTableNameID.Number = 0;
  (this->TextInGameDateTime).DateTime.Ticks = 0;
  (this->TextInGameDateTime).TimeSpan.Ticks = 0;
  (this->TextInGameDateTime).TimeExpressionType = None;
  (this->TextInGameDateTime).IsExpression = false;
  (this->TextInGameDateTime).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TextInGameDateTime).UniqueString.Data.ArrayNum = 0;
  (this->TextInGameDateTime).UniqueString.Data.ArrayMax = 0;
  (this->TextInGameDateTime).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextInGameDateTime).FormatArgs.ArrayNum = 0;
  (this->TextInGameDateTime).FormatArgs.ArrayMax = 0;
  (this->TextServerDateTime).StringTableType = None;
  (this->TextServerDateTime).StringTableID = 0;
  (this->TextServerDateTime).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TextServerDateTime).StringEnumTableNameID.Number = 0;
  (this->TextServerDateTime).DateTime.Ticks = 0;
  (this->TextServerDateTime).TimeSpan.Ticks = 0;
  (this->TextServerDateTime).TimeExpressionType = None;
  (this->TextServerDateTime).IsExpression = false;
  (this->TextServerDateTime).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TextServerDateTime).UniqueString.Data.ArrayNum = 0;
  (this->TextServerDateTime).UniqueString.Data.ArrayMax = 0;
  (this->TextServerDateTime).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextServerDateTime).FormatArgs.ArrayNum = 0;
  (this->TextServerDateTime).FormatArgs.ArrayMax = 0;
  (this->TextIslandName).StringTableType = None;
  (this->TextIslandName).StringTableID = 0;
  (this->TextIslandName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TextIslandName).StringEnumTableNameID.Number = 0;
  (this->TextIslandName).DateTime.Ticks = 0;
  (this->TextIslandName).TimeSpan.Ticks = 0;
  (this->TextIslandName).TimeExpressionType = None;
  (this->TextIslandName).IsExpression = false;
  (this->TextIslandName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextIslandName).UniqueString.Data.ArrayNum = 0;
  (this->TextIslandName).UniqueString.Data.ArrayMax = 0;
  (this->TextIslandName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextIslandName).FormatArgs.ArrayNum = 0;
  (this->TextIslandName).FormatArgs.ArrayMax = 0;
  (this->TextMyMarkerCount).StringTableType = None;
  (this->TextMyMarkerCount).StringTableID = 0;
  (this->TextMyMarkerCount).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TextMyMarkerCount).StringEnumTableNameID.Number = 0;
  (this->TextMyMarkerCount).DateTime.Ticks = 0;
  (this->TextMyMarkerCount).TimeSpan.Ticks = 0;
  (this->TextMyMarkerCount).TimeExpressionType = None;
  (this->TextMyMarkerCount).IsExpression = false;
  (this->TextMyMarkerCount).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TextMyMarkerCount).UniqueString.Data.ArrayNum = 0;
  (this->TextMyMarkerCount).UniqueString.Data.ArrayMax = 0;
  (this->TextMyMarkerCount).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextMyMarkerCount).FormatArgs.ArrayNum = 0;
  (this->TextMyMarkerCount).FormatArgs.ArrayMax = 0;
  (this->TextZoneName).StringTableType = None;
  (this->TextZoneName).StringTableID = 0;
  (this->TextZoneName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TextZoneName).StringEnumTableNameID.Number = 0;
  (this->TextZoneName).DateTime.Ticks = 0;
  (this->TextZoneName).TimeSpan.Ticks = 0;
  (this->TextZoneName).TimeExpressionType = None;
  (this->TextZoneName).IsExpression = false;
  (this->TextZoneName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextZoneName).UniqueString.Data.ArrayNum = 0;
  (this->TextZoneName).UniqueString.Data.ArrayMax = 0;
  (this->TextZoneName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextZoneName).FormatArgs.ArrayNum = 0;
  (this->TextZoneName).FormatArgs.ArrayMax = 0;
  this->MapType = 0;
  this->CurCharIslandID = 0;
  this->CurLookIslandID = 0;
  this->CurLookIndoorGroupID = 0;
  this->RightMiddleUISwicher = 0;
  this->CurLookIslandIDByMapTexture = 0;
  this->CurLookIslandIDByMapSpawn = 0;
  this->OrthoWidth = 0.0;
  this->TextureSize = 1024.0;
  this->IsSkyMap = false;
  this->WorldIslandZoneIDMap = (UWN_Island_ZoneIDMap *)0x0;
  this->WorldMapZoomStep = LEVEL1;
  this->SelectUpDownFocusType = NONE;
  (this->MapStartPos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MapEndPos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MapSize).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->IndoorMapStartPos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->IndoorMapEndPos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->ReferencePosition).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->WorldMapPanelSize).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MaxCell).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->PrevMousePositioin).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->DragOffsetValue).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->InGameHour = 0;
  this->InGameMin = 0;
  this->InGameSec = 0;
  this->WorldMapZoomStepID = 0;
  (this->TargetMapPositionOffset).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  this->CurCharIndoorGroupID = 0;
  this->ZoomLevelValue1 = 0;
  this->ZoomLevelValue2 = 0;
  this->ZoomLevelValue3 = 0;
  this->DefaultWorldMapWheelCount = 0;
  this->WheelMaxCount = 1;
  this->BaseCellValueY = 0;
  this->GroundIslandID = 0;
  this->SkyIndoorGroupID = 0;
  this->IndoorVolumGroupID = 0;
  this->ScaleMaxValue = 0.0;
  this->ScaleMinValue = 0.0;
  this->BeforeUserScale = 0.0;
  this->PadCursorSensitivity = 0.0;
  this->DefaultScale = 2.0;
  this->DefaultScaleMinSize = 0.0;
  this->WheelSensitivity = 0.0;
  this->DefaultPadSpeed = 0.0;
  this->BaseScale = 1.0;
  this->UserScale = 1.0;
  this->TargetScale = 1.0;
  this->IsIndoor = false;
  this->IsMarkerDeleteButtonLongPressed = false;
  this->IsMarkerShareButtonLongPressed = false;
  this->IsMarkerObjectHoverd = false;
  this->IsOpenIndexFilterUI = false;
  this->IsZoomInOut = false;
  this->IsFocusLerpStart = false;
  return this;
}

// ~UDS_VM_WorldMap @ 14b7032c0

void __thiscall UDS_VM_WorldMap::~UDS_VM_WorldMap(UDS_VM_WorldMap *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TextZoneName).FormatArgs.AllocatorInstance.Data,
             (this->TextZoneName).FormatArgs.ArrayNum);
  pFVar1 = (this->TextZoneName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TextZoneName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TextMyMarkerCount).FormatArgs.AllocatorInstance.Data,
             (this->TextMyMarkerCount).FormatArgs.ArrayNum);
  pFVar1 = (this->TextMyMarkerCount).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TextMyMarkerCount).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TextIslandName).FormatArgs.AllocatorInstance.Data,
             (this->TextIslandName).FormatArgs.ArrayNum);
  pFVar1 = (this->TextIslandName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TextIslandName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TextServerDateTime).FormatArgs.AllocatorInstance.Data,
             (this->TextServerDateTime).FormatArgs.ArrayNum);
  pFVar1 = (this->TextServerDateTime).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TextServerDateTime).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TextInGameDateTime).FormatArgs.AllocatorInstance.Data,
             (this->TextInGameDateTime).FormatArgs.ArrayNum);
  pFVar1 = (this->TextInGameDateTime).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TextInGameDateTime).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SelectedUpDownClicked).Delegate);
  pvVar2 = *(void **)&(this->SelectedUpDownClicked).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SelectedUpDownClicked).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SelectedUpButtonClicked).Delegate)
  ;
  pvVar2 = *(void **)&(this->SelectedUpButtonClicked).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SelectedUpButtonClicked).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->GroundMapButtonClicked).Delegate);
  pvVar2 = *(void **)&(this->GroundMapButtonClicked).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->GroundMapButtonClicked).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SkyMapButtonEvent).Delegate);
  pvVar2 = *(void **)&(this->SkyMapButtonEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SkyMapButtonEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ContinentEvent).Delegate);
  pvVar2 = *(void **)&(this->ContinentEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ContinentEvent).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b706150

IClassDescriptor * __thiscall UDS_VM_WorldMap::GetFieldNotificationDescriptor(UDS_VM_WorldMap *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_WorldMap::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b706f50

UClass * __cdecl UDS_VM_WorldMap::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMap.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMap",
               &Z_Registration_Info_UClass_UDS_VM_WorldMap.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMap,0x4d0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_WorldMap>,InternalVTableHelperCtorCaller<UDS_VM_WorldMap>
               ,local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMap.InnerSingleton;
}

// GetTickableTickType @ 14b707550

ETickableTickType __thiscall UDS_VM_WorldMap::GetTickableTickType(UDS_VM_WorldMap *this)

{
  return Conditional;
}

// StaticRegisterNativesUDS_VM_WorldMap @ 14b707700

void __cdecl UDS_VM_WorldMap::StaticRegisterNativesUDS_VM_WorldMap(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_WorldMap_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnUpdateCameraDirection @ 14b7088e0

void __cdecl
UDS_VM_WorldMap::execOnUpdateCameraDirection(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float *pfVar2;
  float local_res10 [2];
  
  local_res10[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pfVar2 = local_res10;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar2 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnUpdateCameraDirection((UDS_VM_WorldMap *)param_1,pfVar2);
  return;
}

// execOnUpdateDirection @ 14b708980

void __cdecl UDS_VM_WorldMap::execOnUpdateDirection(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float *pfVar2;
  float local_res10 [2];
  
  local_res10[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pfVar2 = local_res10;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar2 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnUpdateDirection((UDS_VM_WorldMap *)param_1,pfVar2);
  return;
}

// execOnZoneIDChanged @ 14b708a20

void __cdecl UDS_VM_WorldMap::execOnZoneIDChanged(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint *puVar2;
  uint local_res10 [2];
  
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar2 = local_res10;
  if ((uint *)param_2->MostRecentPropertyAddress != (uint *)0x0) {
    puVar2 = (uint *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnZoneIDChanged((UDS_VM_WorldMap *)param_1,puVar2);
  return;
}

// BindModel @ 14c003e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_VM_WorldMap::BindModel(UDS_VM_WorldMap *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_EnvironmentEvent *pUVar3;
  UDS_ZoneManager *pUVar4;
  UDS_LogManager *pUVar5;
  ADS_PlayerController *this_00;
  ADS_PlayerController *this_01;
  char *pcVar6;
  UObject *this_02;
  UFunction *pUVar7;
  UDS_WorldMapEvent *pUVar8;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_03;
  char *pcVar9;
  undefined1 auStackY_358 [32];
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_328;
  <lambda_1> local_318 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_310;
  FWeakObjectPtr local_308;
  FName local_300;
  FWeakObjectPtr local_2f8;
  FName local_2f0;
  FName local_2e8;
  UDS_VM_WorldMap *local_2e0;
  FName *local_2d8 [2];
  undefined1 local_2c8 [24];
  FMRSWRecursiveAccessDetector *local_2b0;
  char local_2a8;
  undefined1 local_2a0 [16];
  undefined1 local_290 [16];
  undefined1 local_280 [16];
  undefined1 local_270 [16];
  undefined1 local_260 [168];
  FWeakObjectPtr local_1b8;
  FName FStack_1b0;
  code *local_1a8;
  FName FStack_1a0;
  undefined1 local_198 [16];
  FReadAccessScope local_188;
  FReadAccessScope local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  TObjectPtr<UDS_VM_InputKey>_u_0 local_38;
  
  local_38.DebugPtr = (UDS_VM_InputKey *)(__security_cookie.value ^ (ulonglong)auStackY_358);
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar3 = UDS_EnvironmentEvent::GetEvent();
  if (pUVar3 != (UDS_EnvironmentEvent *)0x0) {
    local_2c8._8_4_ = 0;
    local_2c8._0_8_ = OnUpdateGameTime;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3->OnUpdateGameTime,this)
    ;
    local_260._16_8_ = CONCAT44(local_2c8._12_4_,local_2c8._8_4_);
    local_260._8_8_ = local_2c8._0_8_;
    TMulticastDelegateRegistration<void___cdecl(FDS_InGameTimeData_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_WorldMap>
              ((TMulticastDelegateRegistration<void___cdecl(FDS_InGameTimeData_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar3->OnUpdateGameTime,(UDS_VM_WorldMap *)local_198,(pmf_37ab818d *)this);
  }
  pUVar4 = UDS_ZoneManager::GetInst();
  if (pUVar4 == (UDS_ZoneManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_VM_WorldMap::BindModel",0x1a,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_158.Ptr,0xa7,L"zoneManager nullptr");
    if ((UDS_VM_MapTexture *)local_158._padding_ == (UDS_VM_MapTexture *)0x0) {
      return;
    }
    FMemory::Free((void *)local_158._padding_);
    return;
  }
  ADS_PlayerController::GetPlayerController();
  bVar2 = FWeakObjectPtr::IsValid(&local_2f8);
  if (bVar2) {
    this_00 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_2f8);
    this_01 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_2f8);
    bVar2 = ADS_PlayerController::GetCursorLock(this_01);
    ADS_PlayerController::SetCursorLock(this_00,!bVar2);
  }
  pcVar6 = strstr("&UDS_VM_WorldMap::OnZoneIDChanged","::");
  if (pcVar6 == (char *)0x0) {
LAB_14c003fdb:
    pcVar9 = &DAT_00000002;
LAB_14c003fe0:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar9 = pcVar6;
      pcVar6 = strstr(pcVar9 + 1,"::");
    } while (pcVar6 != (char *)0x0);
    if (pcVar9 == (char *)0x0) goto LAB_14c003fdb;
    pcVar9 = pcVar9 + 2;
    if (*pcVar9 == '0') goto LAB_14c003fe0;
  }
  ::FName::FName(&local_2e8,pcVar9);
  if ((this == (UDS_VM_WorldMap *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_310.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_308.ObjectIndex = 0;
  local_308.ObjectSerialNumber = 0;
  local_300.ComparisonIndex.Value = 0;
  local_300.Number = 0;
  local_2f0 = local_2e8;
  if ((this == (UDS_VM_WorldMap *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_2e0 = this;
  if (this == (UDS_VM_WorldMap *)0x0) {
    local_2e0 = (UDS_VM_WorldMap *)0x0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_2e0 != (UDS_VM_WorldMap *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_2e0);
  }
  FWeakObjectPtr::operator=(&local_308,(FObjectPtr)&local_2e0);
  local_300 = local_2f0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_310,&local_188);
  if ((local_300 == (FName)0x0) ||
     (this_02 = FWeakObjectPtr::Get(&local_308), this_02 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_188);
  }
  else {
    pUVar7 = UObject::FindFunction(this_02,local_300);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_188);
    if (pUVar7 != (UFunction *)0x0) goto LAB_14c004135;
  }
  local_2d8[0] = &local_2f0;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,unsigned_int_const_&>::
  __Internal_BindDynamic<UDS_VM_WorldMap>'::__l2::<lambda_1>::operator()(local_2d8);
LAB_14c004135:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_310,&local_170);
  local_328.Object = local_308;
  local_328.FunctionName = local_300;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_170);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar4->ZoneIdChangeDelegate
             ,(FWriteAccessScope *)(local_2c8 + 0x10));
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&(pUVar4->ZoneIdChangeDelegate).field_0x8,local_318,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar4->ZoneIdChangeDelegate,
             &local_328);
  if (local_2a8 == '\0') {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              (local_2b0,(FDestructionSentinel *)(local_2c8 + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_310.AccessDetector);
  pUVar8 = UDS_WorldMapEvent::GetEvent();
  if (pUVar8 != (UDS_WorldMapEvent *)0x0) {
    FDS_FilteredEventDelegate<int_const_,int_const_>::Remove<UDS_VM_WorldMap>
              (&pUVar8->IndoorChangeDelegate,this);
    local_328.Object = (FWeakObjectPtr)OnChangeIndoorGroupID;
    local_328.FunctionName = (FName)((ulonglong)local_328.FunctionName & 0xffffffff00000000);
    this_03 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
              TMapBase<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>_>
              ::FindOrAddImpl<int_const_&>
                        ((TMapBase<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>_>
                          *)&(pUVar8->IndoorChangeDelegate).Subscriptions,this->MapType,
                         &this->MapType);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_03,this);
    local_260._24_4_ = local_328.Object.ObjectIndex;
    local_260._28_4_ = local_328.Object.ObjectSerialNumber;
    local_260._32_4_ = local_328.FunctionName.ComparisonIndex.Value;
    local_260._36_4_ = local_328.FunctionName.Number;
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultTSDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMap>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultTSDelegateUserPolicy> *)
               this_03,(UDS_VM_WorldMap *)(local_198 + 8),(pmf_dd5bbb53 *)this);
    local_328.FunctionName = (FName)((ulonglong)local_328.FunctionName & 0xffffffff00000000);
    local_328.Object = (FWeakObjectPtr)OnUpdateMyMarkerCountText;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar8->MarkerCountDelegate,
               this);
    local_260._40_4_ = local_328.Object.ObjectIndex;
    local_260._44_4_ = local_328.Object.ObjectSerialNumber;
    local_260._48_4_ = local_328.FunctionName.ComparisonIndex.Value;
    local_260._52_4_ = local_328.FunctionName.Number;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMap>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar8->MarkerCountDelegate,(UDS_VM_WorldMap *)local_2a0,(pmf_9d0b7fe3 *)this);
    local_328.FunctionName = (FName)((ulonglong)local_328.FunctionName & 0xffffffff00000000);
    local_328.Object = (FWeakObjectPtr)OnMarkerHoverStateChanged;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar8->MarkerHoverDelegate,
               this);
    local_260._56_4_ = local_328.Object.ObjectIndex;
    local_260._60_4_ = local_328.Object.ObjectSerialNumber;
    local_260._64_4_ = local_328.FunctionName.ComparisonIndex.Value;
    local_260._68_4_ = local_328.FunctionName.Number;
    TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMap>
              ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
               &pUVar8->MarkerHoverDelegate,(UDS_VM_WorldMap *)(local_2a0 + 8),(pmf_3bf0f1e1 *)this)
    ;
    local_328.FunctionName = (FName)((ulonglong)local_328.FunctionName & 0xffffffff00000000);
    local_328.Object = (FWeakObjectPtr)OnIslandClickEvent;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar8->IsladnChangeFromWorldMapViewDelegate,this);
    local_260._72_4_ = local_328.Object.ObjectIndex;
    local_260._76_4_ = local_328.Object.ObjectSerialNumber;
    local_260._80_4_ = local_328.FunctionName.ComparisonIndex.Value;
    local_260._84_4_ = local_328.FunctionName.Number;
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMap>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar8->IsladnChangeFromWorldMapViewDelegate,(UDS_VM_WorldMap *)local_290,
               (pmf_dd5bbb53 *)this);
    local_328.FunctionName = (FName)((ulonglong)local_328.FunctionName & 0xffffffff00000000);
    local_328.Object = (FWeakObjectPtr)OnWarpDeviceClick;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar8->WarpDeviceClickDelegate,this);
    local_260._88_4_ = local_328.Object.ObjectIndex;
    local_260._92_4_ = local_328.Object.ObjectSerialNumber;
    local_260._96_4_ = local_328.FunctionName.ComparisonIndex.Value;
    local_260._100_4_ = local_328.FunctionName.Number;
    TMulticastDelegateRegistration<void___cdecl(FDS_WarpDeviceIconData),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_WorldMap>
              ((TMulticastDelegateRegistration<void___cdecl(FDS_WarpDeviceIconData),FDefaultDelegateUserPolicy>
                *)&pUVar8->WarpDeviceClickDelegate,(UDS_VM_WorldMap *)(local_290 + 8),
               (pmf_fc05b91c *)this);
    local_328.Object = (FWeakObjectPtr)OnChangeIndoorGroupID;
    local_328.FunctionName = (FName)((ulonglong)local_328.FunctionName & 0xffffffff00000000);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar8->ChangeIndoorGroupID,
               this);
    local_260._104_4_ = local_328.Object.ObjectIndex;
    local_260._108_4_ = local_328.Object.ObjectSerialNumber;
    local_260._112_4_ = local_328.FunctionName.ComparisonIndex.Value;
    local_260._116_4_ = local_328.FunctionName.Number;
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMap>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar8->ChangeIndoorGroupID,(UDS_VM_WorldMap *)local_280,(pmf_dd5bbb53 *)this);
    local_328.FunctionName = (FName)((ulonglong)local_328.FunctionName & 0xffffffff00000000);
    local_328.Object = (FWeakObjectPtr)OnSetIsOpenIndexFilterUI;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar8->IndexFilterIsOpenNotifyDelegate,this);
    local_260._120_4_ = local_328.Object.ObjectIndex;
    local_260._124_4_ = local_328.Object.ObjectSerialNumber;
    local_260._128_4_ = local_328.FunctionName.ComparisonIndex.Value;
    local_260._132_4_ = local_328.FunctionName.Number;
    TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMap>
              ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
               &pUVar8->IndexFilterIsOpenNotifyDelegate,(UDS_VM_WorldMap *)(local_280 + 8),
               (pmf_3bf0f1e1 *)this);
    local_328.FunctionName = (FName)((ulonglong)local_328.FunctionName & 0xffffffff00000000);
    local_328.Object = (FWeakObjectPtr)OnFocusMapChanged;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar8->MapFocuseDelgate,this)
    ;
    local_260._136_4_ = local_328.Object.ObjectIndex;
    local_260._140_4_ = local_328.Object.ObjectSerialNumber;
    local_260._144_4_ = local_328.FunctionName.ComparisonIndex.Value;
    local_260._148_4_ = local_328.FunctionName.Number;
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMap>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar8->MapFocuseDelgate,(UDS_VM_WorldMap *)local_270,(pmf_dd5bbb53 *)this);
    local_328.FunctionName = (FName)((ulonglong)local_328.FunctionName & 0xffffffff00000000);
    local_328.Object = (FWeakObjectPtr)OnFocusMarkerInfoBaseChanged;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar8->MarkerInfoBasedFocusDelegate,this);
    local_260._152_4_ = local_328.Object.ObjectIndex;
    local_260._156_4_ = local_328.Object.ObjectSerialNumber;
    local_260._160_4_ = local_328.FunctionName.ComparisonIndex.Value;
    local_260._164_4_ = local_328.FunctionName.Number;
    TMulticastDelegateRegistration<void___cdecl(FDS_WorldMapMarkerInfo_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_WorldMap>
              ((TMulticastDelegateRegistration<void___cdecl(FDS_WorldMapMarkerInfo_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar8->MarkerInfoBasedFocusDelegate,(UDS_VM_WorldMap *)(local_270 + 8),
               (pmf_fb9319b1 *)this);
    local_328.FunctionName = (FName)((ulonglong)local_328.FunctionName & 0xffffffff00000000);
    local_328.Object = (FWeakObjectPtr)OnIconClickedMapFocusChanged;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar8->IconClickMapFocusDelegate,this);
    local_1b8 = local_328.Object;
    FStack_1b0 = local_328.FunctionName;
    TMulticastDelegateRegistration<void___cdecl(UE::Math::TVector2<double>_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_WorldMap>
              ((TMulticastDelegateRegistration<void___cdecl(UE::Math::TVector2<double>_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar8->IconClickMapFocusDelegate,(UDS_VM_WorldMap *)local_260,
               (pmf_5432f3b9 *)this);
  }
  local_328.FunctionName = (FName)((ulonglong)local_328.FunctionName & 0xffffffff00000000);
  local_328.Object = (FWeakObjectPtr)OnMainCharChanged;
  local_1a8 = OnMainCharChanged;
  FStack_1a0 = local_328.FunctionName;
  TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_VM_WorldMap>
            ((TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
              *)&ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,(UDS_VM_WorldMap *)local_2c8
             ,(pmf_393ac411 *)this);
  return;
}

// CalDragOffsetPosition @ 14c005e40

TVector2<double> * __thiscall
UDS_VM_WorldMap::CalDragOffsetPosition
          (UDS_VM_WorldMap *this,TVector2<double> *__return_storage_ptr__)

{
  float fVar1;
  double dVar2;
  UDS_MovementCore *pUVar3;
  TVector<double> *pTVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  TVector<double> local_58;
  TVector<double> local_40 [2];
  
  bVar5 = this->IsIndoor;
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  if (bVar5 == true) {
    bVar5 = this->CurLookIndoorGroupID == this->CurCharIndoorGroupID;
  }
  else {
    bVar5 = this->CurCharIslandID == this->CurLookIslandIDByMapTexture;
  }
  if (bVar5) {
    pUVar3 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->OwnerMovementCore).WeakPtr);
    pTVar4 = UDS_MovementCore::GetActorLocation(pUVar3,&local_58);
    dVar2 = (pTVar4->field0_0x0)._s_0.Y;
    pUVar3 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->OwnerMovementCore).WeakPtr);
    pTVar4 = UDS_MovementCore::GetActorLocation(pUVar3,local_40);
    if (this->IsIndoor == true) {
      dVar7 = (this->IndoorMapStartPos).field0_0x0._s_0.X;
      dVar9 = (this->IndoorMapStartPos).field0_0x0._s_0.Y;
      dVar6 = dVar7 - (this->IndoorMapEndPos).field0_0x0._s_0.X;
      dVar8 = dVar9 - (this->IndoorMapEndPos).field0_0x0._s_0.Y;
      dVar7 = (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
              __real_3fe0000000000000 + dVar7;
      dVar9 = (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
              __real_3fe0000000000000 + dVar9;
    }
    else {
      dVar7 = (this->MapSize).field0_0x0._s_0.X * __real_3fe0000000000000 +
              (this->MapStartPos).field0_0x0._s_0.X;
      dVar9 = (this->MapSize).field0_0x0._s_0.Y * __real_3fe0000000000000 +
              (this->MapStartPos).field0_0x0._s_0.Y;
    }
    fVar1 = this->TextureSize;
    dVar6 = __real_3ff0000000000000 / (double)this->OrthoWidth;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         ((pTVar4->field0_0x0)._s_0.X - dVar7) * dVar6 * (double)fVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (dVar2 - dVar9) * dVar6 * (double)fVar1;
  }
  return __return_storage_ptr__;
}

// CalMapRangeMinMax @ 14c005fd0

void __thiscall
UDS_VM_WorldMap::CalMapRangeMinMax
          (UDS_VM_WorldMap *this,float *param_1,float *param_2,float *param_3,float *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar6 = (this->WorldMapPanelSize).field0_0x0._s_0.Y * __real_3fe0000000000000;
  if (this->IsIndoor == true) {
    dVar6 = (this->ReferencePosition).field0_0x0._s_0.X;
    dVar7 = (this->MaxCell).field0_0x0._s_0.X;
    dVar1 = (this->ReferencePosition).field0_0x0._s_0.Y;
    dVar2 = (this->MaxCell).field0_0x0._s_0.Y;
    dVar5 = (double)this->TextureSize;
    dVar3 = (double)this->OrthoWidth;
    dVar4 = (__real_3ff0000000000000 / dVar3) * dVar5 * __real_3fe0000000000000;
    dVar8 = dVar6 - (__real_3ff0000000000000 / dVar3) * dVar5 * __real_3fe0000000000000 *
                    dVar7 * dVar3;
    *param_1 = (float)((dVar8 - (dVar6 - dVar5)) + (this->DragOffsetValue).field0_0x0._s_0.X);
    *param_3 = (float)(((dVar5 * dVar7 - dVar5) - dVar6) + dVar8 +
                      (this->DragOffsetValue).field0_0x0._s_0.X);
    dVar6 = (dVar1 - dVar4 * dVar2 * dVar3) + ((dVar5 * dVar2 - dVar5) - dVar1);
    *param_2 = (float)((this->DragOffsetValue).field0_0x0._s_0.Y - dVar6);
    *param_4 = (float)(dVar6 + (this->DragOffsetValue).field0_0x0._s_0.Y);
    return;
  }
  dVar7 = (double)(float)((this->WorldMapPanelSize).field0_0x0._s_0.X * __real_3fe0000000000000);
  *param_1 = (float)(dVar7 / (this->MapScale2D).field0_0x0._s_0.X -
                    ((double)this->TextureSize * (this->MaxCell).field0_0x0._s_0.X -
                    (this->ReferencePosition).field0_0x0._s_0.X));
  dVar6 = (double)(float)dVar6;
  *param_3 = (float)((this->ReferencePosition).field0_0x0._s_0.X -
                    dVar7 / (this->MapScale2D).field0_0x0._s_0.X);
  *param_2 = (float)(dVar6 / (this->MapScale2D).field0_0x0._s_0.Y -
                    ((double)this->TextureSize * (this->MaxCell).field0_0x0._s_0.Y -
                    (this->ReferencePosition).field0_0x0._s_0.Y));
  *param_4 = (float)((this->ReferencePosition).field0_0x0._s_0.Y -
                    dVar6 / (this->MapScale2D).field0_0x0._s_0.Y);
  return;
}

// CalReferencePosition @ 14c006220

TVector2<double> * __thiscall
UDS_VM_WorldMap::CalReferencePosition
          (UDS_VM_WorldMap *this,TVector2<double> *__return_storage_ptr__)

{
  float fVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  UDS_MovementCore *pUVar5;
  TVector<double> *pTVar6;
  bool bVar7;
  double dVar8;
  double dVar9;
  TVector<double> local_48;
  TVector<double> local_30;
  
  bVar4 = this->IsIndoor;
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  if (bVar4 == true) {
    bVar7 = this->CurLookIndoorGroupID == this->CurCharIndoorGroupID;
  }
  else {
    bVar7 = this->CurCharIslandID == this->CurLookIslandIDByMapTexture;
  }
  if (bVar7) {
    pUVar5 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->OwnerMovementCore).WeakPtr);
    pTVar6 = UDS_MovementCore::GetActorLocation(pUVar5,&local_48);
    dVar2 = (pTVar6->field0_0x0)._s_0.Y;
    pUVar5 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->OwnerMovementCore).WeakPtr);
    pTVar6 = UDS_MovementCore::GetActorLocation(pUVar5,&local_30);
    dVar9 = (pTVar6->field0_0x0)._s_0.X;
  }
  else if (bVar4 == true) {
    dVar9 = (this->IndoorMapStartPos).field0_0x0._s_0.X;
    dVar2 = (this->IndoorMapStartPos).field0_0x0._s_0.Y;
    dVar8 = dVar9 - (this->IndoorMapEndPos).field0_0x0._s_0.X;
    dVar3 = dVar2 - (this->IndoorMapEndPos).field0_0x0._s_0.Y;
    dVar9 = (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
            __real_3fe0000000000000 + dVar9;
    dVar2 = (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
            __real_3fe0000000000000 + dVar2;
  }
  else {
    dVar9 = (this->MapSize).field0_0x0._s_0.X * __real_3fe0000000000000 +
            (this->MapStartPos).field0_0x0._s_0.X;
    dVar2 = (this->MapSize).field0_0x0._s_0.Y * __real_3fe0000000000000 +
            (this->MapStartPos).field0_0x0._s_0.Y;
  }
  dVar3 = (this->MapStartPos).field0_0x0._s_0.Y;
  fVar1 = this->TextureSize;
  dVar8 = __real_3ff0000000000000 / (double)this->OrthoWidth;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (dVar9 - (this->MapStartPos).field0_0x0._s_0.X) * dVar8 * (double)fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (dVar2 - dVar3) * dVar8 * (double)fVar1;
  return __return_storage_ptr__;
}

// ContentFocusMapOffSet @ 14c006bc0

void __thiscall UDS_VM_WorldMap::ContentFocusMapOffSet(UDS_VM_WorldMap *this)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FName FVar5;
  int iVar6;
  UDS_WorldMapManager *this_00;
  UDS_WorldMapEvent *pUVar7;
  double dVar8;
  TVector2<double>_u_0 local_28;
  TVector2<double>_u_0 local_18;
  
  this_00 = UDS_WorldMapManager::GetInst();
  if ((this_00 != (UDS_WorldMapManager *)0x0) && (this_00->IsValidContentsFocusPosition == true)) {
    dVar4 = (this_00->ContentsFocusPosition).field0_0x0._s_0.Y;
    fVar1 = this->TextureSize;
    dVar2 = (this->ReferencePosition).field0_0x0._s_0.Y;
    dVar8 = __real_3ff0000000000000 / (double)this->OrthoWidth;
    dVar3 = (this->MapStartPos).field0_0x0._s_0.Y;
    (this->MapPositionOffset).field0_0x0._s_0.X =
         (this->ReferencePosition).field0_0x0._s_0.X -
         ((this_00->ContentsFocusPosition).field0_0x0._s_0.X - (this->MapStartPos).field0_0x0._s_0.X
         ) * dVar8 * (double)fVar1;
    (this->MapPositionOffset).field0_0x0._s_0.Y = dVar2 - (dVar4 - dVar3) * dVar8 * (double)fVar1;
    pUVar7 = UDS_WorldMapEvent::GetEvent();
    if (pUVar7 != (UDS_WorldMapEvent *)0x0) {
      local_28._s_0.X = (this->ReferencePosition).field0_0x0._s_0.X;
      local_28._s_0.Y = *(double *)((longlong)&(this->ReferencePosition).field0_0x0 + 8);
      local_18._s_0.X = (this->MapPositionOffset).field0_0x0._s_0.X;
      local_18._s_0.Y = (this->MapPositionOffset).field0_0x0._s_0.Y;
      FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
      ::Broadcast(&pUVar7->ChangeMapPositionOffsetDelegate,&this->MapType,
                  (float)(this->MapScale2D).field0_0x0._s_0.X,(TVector2<double> *)&local_18._s_0,
                  (TVector2<double> *)&local_28._s_0);
    }
    iVar6 = FFieldNotificationClassDescriptor::MapLocation.BitNumber;
    FVar5 = FFieldNotificationClassDescriptor::MapLocation.FieldName;
    dVar2 = (this->MapScale2D).field0_0x0._s_0.X;
    dVar3 = dVar2 * (this->MapPositionOffset).field0_0x0._s_0.X;
    dVar2 = dVar2 * (this->MapPositionOffset).field0_0x0._s_0.Y;
    if ((dVar3 != (this->MapLocation).field0_0x0._s_0.X) ||
       (dVar2 != (this->MapLocation).field0_0x0._s_0.Y)) {
      (this->MapLocation).field0_0x0._s_0.X = dVar3;
      (this->MapLocation).field0_0x0._s_0.Y = dVar2;
      local_28._8_4_ = iVar6;
      local_28._s_0.X = (double)FVar5;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    }
    UDS_WorldMapManager::ResetContentsFocusPosition(this_00);
  }
  return;
}

// ContinentUIClosed @ 14c006d40

void __thiscall UDS_VM_WorldMap::ContinentUIClosed(UDS_VM_WorldMap *this)

{
  FName local_18;
  int local_10;
  
  this->ContinentUIVisibility = Collapsed;
  local_10 = FFieldNotificationClassDescriptor::ContinentUIVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ContinentUIVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// FocusPlayerMap @ 14c01a000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_WorldMap::FocusPlayerMap(UDS_VM_WorldMap *this)

{
  int iVar1;
  UDS_ZoneManager *pUVar2;
  UDS_LogManager *pUVar3;
  FDS_ZoneBaseTableRow *pFVar4;
  UDS_WorldMapManager *this_00;
  undefined1 auStackY_168 [32];
  uint uVar5;
  wchar_t *pwVar6;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar2 = UDS_ZoneManager::GetInst();
  if (pUVar2 == (UDS_ZoneManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_WorldMap::FocusPlayerMap",0x1f,Yes);
    pwVar6 = L"zoneManager is nullptr";
    uVar5 = 0x693;
  }
  else {
    pFVar4 = FDS_ZoneBaseTableRow::Get((ulonglong)pUVar2->ZoneID,true);
    if (pFVar4 == (FDS_ZoneBaseTableRow *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_WorldMap::FocusPlayerMap",0x1f,Yes);
      pwVar6 = L"FDS_ZoneBaseTableRow nullptr";
      uVar5 = 0x69b;
    }
    else {
      this->CurLookIslandID = 0;
      this->CurLookIndoorGroupID = 0;
      if (0 < pFVar4->ID_MapIndoorGroup) {
        this->CurCharIslandID = 0;
        this->CurCharIndoorGroupID = pFVar4->ID_MapIndoorGroup;
        OnChangeIndoorGroupID(this,pFVar4->ID_MapIndoorGroup);
        return;
      }
      this_00 = UDS_WorldMapManager::GetInst();
      if (this_00 != (UDS_WorldMapManager *)0x0) {
        this->CurCharIndoorGroupID = 0;
        this->CurCharIslandID = pUVar2->IslandID;
        iVar1 = UDS_WorldMapManager::GetIslandIDByZoneID(this_00,pUVar2->ZoneID);
        IslandIDChanged(this,iVar1);
        return;
      }
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_WorldMap::FocusPlayerMap",0x1f,Yes);
      pwVar6 = L"worldMapMgr is nullptr";
      uVar5 = 0x6ad;
    }
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar5,pwVar6);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// FocusStart @ 14c01a200

void __thiscall UDS_VM_WorldMap::FocusStart(UDS_VM_WorldMap *this,TVector2<double> *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = __real_3ff0000000000000;
  fVar1 = this->TextureSize;
  this->IsFocusLerpStart = true;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  dVar2 = (this->ReferencePosition).field0_0x0._s_0.Y;
  dVar5 = dVar5 / (double)this->OrthoWidth;
  dVar3 = (this->MapStartPos).field0_0x0._s_0.Y;
  (this->TargetMapPositionOffset).field0_0x0._s_0.X =
       (this->ReferencePosition).field0_0x0._s_0.X -
       ((param_1->field0_0x0)._s_0.X - (this->MapStartPos).field0_0x0._s_0.X) * dVar5 *
       (double)fVar1;
  (this->TargetMapPositionOffset).field0_0x0._s_0.Y =
       dVar2 - (dVar4 - dVar3) * dVar5 * (double)fVar1;
  return;
}

// GamePadScaleUpdate @ 14c01a380

void __thiscall
UDS_VM_WorldMap::GamePadScaleUpdate(UDS_VM_WorldMap *this,FInputActionValue *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (float)((double)this->UserScale + (param_1->Value).field0_0x0._s_0.X);
  if (fVar2 <= this->ScaleMinValue) {
    this->TargetScale = this->ScaleMinValue;
    return;
  }
  fVar1 = this->ScaleMaxValue;
  if (fVar2 <= this->ScaleMaxValue) {
    fVar1 = fVar2;
  }
  this->TargetScale = fVar1;
  return;
}

// GroundMapSeletedEvent @ 14c01c1d0

void __thiscall UDS_VM_WorldMap::GroundMapSeletedEvent(UDS_VM_WorldMap *this)

{
  FName local_18;
  int local_10;
  
  if ((this->IsSkyMap != false) && (this->GroundIslandID != 0)) {
    IslandIDChanged(this,this->GroundIslandID);
    this->IsSkyMap = false;
    local_10 = FFieldNotificationClassDescriptor::IsSkyMap.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::IsSkyMap.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// InitDataCenterOnReferencePos @ 14c01d8b0

void __thiscall UDS_VM_WorldMap::InitDataCenterOnReferencePos(UDS_VM_WorldMap *this)

{
  float fVar1;
  double dVar2;
  TVector2<double>_u_0 TVar3;
  double dVar4;
  double dVar5;
  TVector2<double> TVar6;
  UDS_MovementCore *pUVar7;
  TVector<double> *pTVar8;
  UDS_WorldMapEvent *pUVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_58 [3];
  
  (this->MapPositionOffset).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar6 = UE::Math::TVector2<double>::ZeroVector;
  this->IsZoomInOut = false;
  (this->MapLocation).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar6.field0_0x0;
  dVar5 = __real_3fe0000000000000;
  if (this->IsIndoor == true) {
    bVar10 = this->CurLookIndoorGroupID == this->CurCharIndoorGroupID;
  }
  else {
    bVar10 = this->CurCharIslandID == this->CurLookIslandIDByMapTexture;
  }
  if (bVar10) {
    pUVar7 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->OwnerMovementCore).WeakPtr);
    pTVar8 = UDS_MovementCore::GetActorLocation(pUVar7,(TVector<double> *)&local_58[0]._s_0);
    dVar2 = (pTVar8->field0_0x0)._s_0.Y;
    pUVar7 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->OwnerMovementCore).WeakPtr);
    pTVar8 = UDS_MovementCore::GetActorLocation(pUVar7,(TVector<double> *)&local_78._s_0);
    dVar12 = (pTVar8->field0_0x0)._s_0.X;
  }
  else if (this->IsIndoor == true) {
    dVar12 = (this->IndoorMapStartPos).field0_0x0._s_0.X;
    dVar2 = (this->IndoorMapStartPos).field0_0x0._s_0.Y;
    dVar11 = dVar12 - (this->IndoorMapEndPos).field0_0x0._s_0.X;
    dVar14 = dVar2 - (this->IndoorMapEndPos).field0_0x0._s_0.Y;
    dVar12 = (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
             __real_3fe0000000000000 + dVar12;
    dVar2 = (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
            __real_3fe0000000000000 + dVar2;
  }
  else {
    dVar12 = (this->MapSize).field0_0x0._s_0.X * __real_3fe0000000000000 +
             (this->MapStartPos).field0_0x0._s_0.X;
    dVar2 = (this->MapSize).field0_0x0._s_0.Y * __real_3fe0000000000000 +
            (this->MapStartPos).field0_0x0._s_0.Y;
  }
  dVar4 = __real_3ff0000000000000;
  dVar14 = (this->MapStartPos).field0_0x0._s_0.Y;
  dVar11 = __real_3ff0000000000000 / (double)this->OrthoWidth;
  fVar1 = this->TextureSize;
  (this->ReferencePosition).field0_0x0._s_0.X =
       (dVar12 - (this->MapStartPos).field0_0x0._s_0.X) * dVar11 * (double)fVar1;
  (this->ReferencePosition).field0_0x0._s_0.Y = (dVar2 - dVar14) * dVar11 * (double)fVar1;
  dVar12 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_8_;
  dVar2 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_8_;
  if (this->IsIndoor == true) {
    bVar10 = this->CurLookIndoorGroupID == this->CurCharIndoorGroupID;
  }
  else {
    bVar10 = this->CurCharIslandID == this->CurLookIslandIDByMapTexture;
  }
  if (bVar10) {
    pUVar7 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->OwnerMovementCore).WeakPtr);
    pTVar8 = UDS_MovementCore::GetActorLocation(pUVar7,(TVector<double> *)&local_58[0]._s_0);
    dVar2 = (pTVar8->field0_0x0)._s_0.Y;
    pUVar7 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->OwnerMovementCore).WeakPtr);
    pTVar8 = UDS_MovementCore::GetActorLocation(pUVar7,(TVector<double> *)&local_78._s_0);
    if (this->IsIndoor == true) {
      dVar12 = (this->IndoorMapStartPos).field0_0x0._s_0.X;
      dVar14 = (this->IndoorMapStartPos).field0_0x0._s_0.Y;
      dVar11 = dVar12 - (this->IndoorMapEndPos).field0_0x0._s_0.X;
      dVar13 = dVar14 - (this->IndoorMapEndPos).field0_0x0._s_0.Y;
      dVar12 = (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
               dVar5 + dVar12;
      dVar14 = (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
               dVar5 + dVar14;
    }
    else {
      dVar12 = (this->MapSize).field0_0x0._s_0.X * dVar5 + (this->MapStartPos).field0_0x0._s_0.X;
      dVar14 = (this->MapSize).field0_0x0._s_0.Y * dVar5 + (this->MapStartPos).field0_0x0._s_0.Y;
    }
    dVar4 = dVar4 / (double)this->OrthoWidth;
    dVar12 = ((pTVar8->field0_0x0)._s_0.X - dVar12) * dVar4 * (double)this->TextureSize;
    dVar2 = (dVar2 - dVar14) * dVar4 * (double)this->TextureSize;
  }
  TVar3._8_4_ = SUB84(dVar2,0);
  TVar3._s_0.X = dVar12;
  TVar3._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  (this->DragOffsetValue).field0_0x0 = TVar3;
  pUVar9 = UDS_WorldMapEvent::GetEvent();
  if (pUVar9 != (UDS_WorldMapEvent *)0x0) {
    if (this->IsIndoor == true) {
      FDS_FilteredEventDelegate<int_const_,bool_const_,int_const_,int_const_>::Broadcast
                (&pUVar9->IndoorDataChanageDelegate,&this->MapType,true,this->CurCharIndoorGroupID,
                 this->CurLookIndoorGroupID);
    }
    FDS_FilteredEventDelegate<int_const_>::Broadcast
              (&pUVar9->ReferencePosChangeDelegate,&this->MapType);
    local_78._s_0.X = (this->ReferencePosition).field0_0x0._s_0.X;
    local_78._s_0.Y = *(double *)((longlong)&(this->ReferencePosition).field0_0x0 + 8);
    local_58[0]._0_8_ = (this->MapPositionOffset).field0_0x0._s_0.X;
    local_58[0]._8_8_ = (this->MapPositionOffset).field0_0x0._s_0.Y;
    FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
    ::Broadcast(&pUVar9->ChangeMapPositionOffsetDelegate,&this->MapType,
                (float)(this->MapScale2D).field0_0x0._s_0.X,(TVector2<double> *)&local_58[0]._s_0,
                (TVector2<double> *)&local_78._s_0);
  }
  local_78._8_4_ = FFieldNotificationClassDescriptor::MapLocation.BitNumber;
  local_78._s_0.X = (double)FFieldNotificationClassDescriptor::MapLocation.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
  return;
}

// InitViewModel @ 14c01fe00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_WorldMap::InitViewModel(UDS_VM_WorldMap *this)

{
  bool bVar1;
  UClass *pUVar2;
  UClass *pUVar3;
  UDS_VM_MapTexture *pUVar4;
  UDS_VM_MapSpawn *pUVar5;
  UDS_VM_WorldMap_MapIndexFilter *pUVar6;
  UDS_VM_WorldMap_IndoorFloorInfoList *pUVar7;
  UDS_VM_InputKey *pUVar8;
  UDS_VM_EnvironmentInfo *pUVar9;
  UDS_VM_WorldMapMarkerList *pUVar10;
  UDS_VM_WorldMapZoneList *pUVar11;
  UObject *pUVar12;
  FWeakObjectPtr *pFVar13;
  ADS_MainCharacter *this_00;
  TWeakObjectPtr<UDS_MainCameraComponent,FWeakObjectPtr> this_01;
  longlong *plVar14;
  undefined1 auStack_e8 [32];
  UObject *local_c8;
  FWeakObjectPtr local_c0;
  FName local_b8;
  int local_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_c8 = (UObject *)0x0;
  pUVar2 = Z_Construct_UClass_UDS_VM_MapTexture_NoRegister();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_VM_MapTexture_NoRegister();
  CheckIsClassChildOf_Internal(pUVar3,pUVar2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar2);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._16_4_ = 0;
  local_a8._20_4_ = 0;
  local_a8._24_4_ = RF_Transient;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = this;
  pUVar4 = (UDS_VM_MapTexture *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar14 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar14 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if (pUVar4 != (UDS_VM_MapTexture *)0x0) {
    *(undefined1 *)((longlong)&pUVar4->_padding_ + 4) = 0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_VM_MapTexture *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->VM_MinimapTexture).field0_0x0.DebugPtr = pUVar4;
  local_c8 = (UObject *)0x0;
  pUVar2 = Z_Construct_UClass_UDS_VM_MapSpawn_NoRegister();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_VM_MapSpawn_NoRegister();
  CheckIsClassChildOf_Internal(pUVar3,pUVar2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar2);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._16_4_ = 0;
  local_a8._20_4_ = 0;
  local_a8._24_4_ = RF_Transient;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = this;
  pUVar5 = (UDS_VM_MapSpawn *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar14 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar14 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_MapSpawn *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UDS_VM_MapSpawn *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->VM_MinimapSpawnUnScaled).field0_0x0.DebugPtr = pUVar5;
  local_c8 = (UObject *)0x0;
  pUVar2 = Z_Construct_UClass_UDS_VM_WorldMap_MapIndexFilter_NoRegister();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_VM_WorldMap_MapIndexFilter_NoRegister();
  CheckIsClassChildOf_Internal(pUVar3,pUVar2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar2);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._16_4_ = 0;
  local_a8._20_4_ = 0;
  local_a8._24_4_ = RF_Transient;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = this;
  pUVar6 = (UDS_VM_WorldMap_MapIndexFilter *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar14 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar14 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if (pUVar6 != (UDS_VM_WorldMap_MapIndexFilter *)0x0) {
    *(undefined1 *)((longlong)&pUVar6->_padding_ + 4) = 0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UDS_VM_WorldMap_MapIndexFilter *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->VM_WorldMap_MapIndexFilter).field0_0x0.DebugPtr = pUVar6;
  local_c8 = (UObject *)0x0;
  pUVar2 = Z_Construct_UClass_UDS_VM_WorldMap_IndoorFloorInfoList_NoRegister();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_VM_WorldMap_IndoorFloorInfoList_NoRegister();
  CheckIsClassChildOf_Internal(pUVar3,pUVar2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar2);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._16_4_ = 0;
  local_a8._20_4_ = 0;
  local_a8._24_4_ = RF_Transient;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = this;
  pUVar7 = (UDS_VM_WorldMap_IndoorFloorInfoList *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar14 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar14 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if (pUVar7 != (UDS_VM_WorldMap_IndoorFloorInfoList *)0x0) {
    *(undefined1 *)((longlong)&pUVar7->_padding_ + 4) = 0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 != (UDS_VM_WorldMap_IndoorFloorInfoList *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->VM_WorldMap_IndoorFloorInfoList).field0_0x0.DebugPtr = pUVar7;
  pUVar8 = UDS_ViewModelBase::CreateViewModel<UDS_VM_InputKey>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UDS_VM_InputKey *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  (this->VM_InputKey_IA_UI_SelectUp).field0_0x0.DebugPtr = pUVar8;
  pUVar8 = UDS_ViewModelBase::CreateViewModel<UDS_VM_InputKey>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UDS_VM_InputKey *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  (this->VM_InputKey_IA_UI_SelectDown).field0_0x0.DebugPtr = pUVar8;
  local_c8 = (UObject *)0x0;
  pUVar2 = Z_Construct_UClass_UDS_VM_EnvironmentInfo_NoRegister();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_VM_EnvironmentInfo_NoRegister();
  CheckIsClassChildOf_Internal(pUVar3,pUVar2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar2);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._16_4_ = 0;
  local_a8._20_4_ = 0;
  local_a8._24_4_ = RF_Transient;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = this;
  pUVar9 = (UDS_VM_EnvironmentInfo *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar14 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar14 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if (pUVar9 != (UDS_VM_EnvironmentInfo *)0x0) {
    *(undefined1 *)((longlong)&pUVar9->_padding_ + 4) = 0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 != (UDS_VM_EnvironmentInfo *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  (this->VM_EnviromentInfo).field0_0x0.DebugPtr = pUVar9;
  local_c8 = (UObject *)0x0;
  pUVar2 = Z_Construct_UClass_UDS_VM_WorldMapMarkerList_NoRegister();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_VM_WorldMapMarkerList_NoRegister();
  CheckIsClassChildOf_Internal(pUVar3,pUVar2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar2);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._16_4_ = 0;
  local_a8._20_4_ = 0;
  local_a8._24_4_ = RF_Transient;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = this;
  pUVar10 = (UDS_VM_WorldMapMarkerList *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar14 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar14 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if (pUVar10 != (UDS_VM_WorldMapMarkerList *)0x0) {
    *(undefined1 *)((longlong)&pUVar10->_padding_ + 4) = 0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar10 != (UDS_VM_WorldMapMarkerList *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  (this->VM_WorldMapMarkerList).field0_0x0.DebugPtr = pUVar10;
  local_c8 = (UObject *)0x0;
  pUVar2 = Z_Construct_UClass_UDS_VM_WorldMapZoneList_NoRegister();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_VM_WorldMapZoneList_NoRegister();
  CheckIsClassChildOf_Internal(pUVar3,pUVar2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar2);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._16_4_ = 0;
  local_a8._20_4_ = 0;
  local_a8._24_4_ = RF_Transient;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = this;
  pUVar11 = (UDS_VM_WorldMapZoneList *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar14 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar14 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if (pUVar11 != (UDS_VM_WorldMapZoneList *)0x0) {
    *(undefined1 *)((longlong)&pUVar11->_padding_ + 4) = 0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar11 != (UDS_VM_WorldMapZoneList *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  (this->VM_WorldMapZoneList).field0_0x0.DebugPtr = pUVar11;
  UDS_WindowInfoBase::SetInputReceiveType(MapTooltip,None);
  ADS_MainCharacter::GetMainPlayer();
  bVar1 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&local_c0,(void *)0x0);
  if (!bVar1) {
    pUVar12 = FWeakObjectPtr::Get(&local_c0);
    pFVar13 = (FWeakObjectPtr *)
              (**(code **)(*(longlong *)&pUVar12[0x29].field_0x10 + 0x78))
                        (&pUVar12[0x29].field_0x10,&local_c8);
    (this->OwnerMovementCore).WeakPtr = *pFVar13;
    this_00 = (ADS_MainCharacter *)FWeakObjectPtr::Get(&local_c0);
    this_01 = ADS_MainCharacter::GetFollowCamera(this_00);
    local_c8 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.WeakPtr);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_c8);
    }
    FWeakObjectPtr::operator=(&(this->OwnerCameraComponent).WeakPtr,(FObjectPtr)&local_c8);
  }
  this->MapType = 1;
  this->ContinentUIVisibility = Collapsed;
  local_b0 = FFieldNotificationClassDescriptor::ContinentUIVisibility.BitNumber;
  local_b8 = FFieldNotificationClassDescriptor::ContinentUIVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_b8);
  return;
}

// InputActionSelectedUpDownEvent @ 14c020f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_WorldMap::InputActionSelectedUpDownEvent(UDS_VM_WorldMap *this,bool param_1)

{
  UDS_WorldMapEvent *pUVar1;
  UDS_LogManager *pUVar2;
  FDS_EventDelegate<bool_const_> *this_00;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar1 = UDS_WorldMapEvent::GetEvent();
  if (pUVar1 == (UDS_WorldMapEvent *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_WorldMap::InputActionSelectedUpDownEvent",0x2f,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x62d,L"worldMapEvent nullptr");
    if ((void *)local_138._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_138._padding_);
    return;
  }
  if (this->IsOpenIndexFilterUI == true) {
    this_00 = &pUVar1->IndexFilterSlotIndexChangeDelegate;
  }
  else {
    if (this->SelectUpDownFocusType == SKY_MAP_UI) {
      if (this->RightMiddleUIVisibility == Collapsed) {
        return;
      }
      if (param_1) {
        SkyMapSeletedEvent(this);
        return;
      }
      GroundMapSeletedEvent(this);
      return;
    }
    if (this->SelectUpDownFocusType != FLOOR_UI) {
      return;
    }
    if (this->RightMiddleUIVisibility == Collapsed) {
      return;
    }
    this_00 = &pUVar1->IndoorFloorListItemIndexChangeDelegate;
  }
  FDS_EventDelegate<bool_const_>::Broadcast(this_00,param_1);
  return;
}

// IsInSameZone @ 14c0226a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_WorldMap::IsInSameZone(UDS_VM_WorldMap *this,int param_1)

{
  int iVar1;
  UDS_WorldMapManager *this_00;
  UDS_LogManager *pUVar2;
  FDS_ZoneBaseTableRow *pFVar3;
  undefined1 auStackY_168 [32];
  uint uVar4;
  wchar_t *pwVar5;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this_00 = UDS_WorldMapManager::GetInst();
  if (this_00 == (UDS_WorldMapManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = (longlong)this_00;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_WorldMap::IsInSameZone",0x1d,Yes);
    pwVar5 = L"worldMapMgr is nullptr";
    uVar4 = 0x6ca;
  }
  else {
    pFVar3 = FDS_ZoneBaseTableRow::Get((longlong)param_1,true);
    if (pFVar3 != (FDS_ZoneBaseTableRow *)0x0) {
      if (this->IsIndoor != true) {
        iVar1 = UDS_WorldMapManager::GetIslandIDByZoneID(this_00,param_1);
        return this->CurLookIslandID == iVar1;
      }
      if (this->CurLookIndoorGroupID != pFVar3->ID_MapIndoorGroup) {
        return false;
      }
      return true;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_WorldMap::IsInSameZone",0x1d,Yes);
    pwVar5 = L"FDS_ZoneBaseTableRow nullptr";
    uVar4 = 0x6d2;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar4,pwVar5);
  if ((UDS_WorldMapManager *)local_138._padding_ == (UDS_WorldMapManager *)0x0) {
    return false;
  }
  FMemory::Free((void *)local_138._padding_);
  return false;
}

// IsUpdate @ 14c023a10

bool __thiscall UDS_VM_WorldMap::IsUpdate(UDS_VM_WorldMap *this)

{
  return true;
}

// IslandIDChanged @ 14c023ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_WorldMap::IslandIDChanged(UDS_VM_WorldMap *this,int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FDS_ZoneIslandTableRow *this_00;
  FDS_StringWorldTableRow *pFVar5;
  size_t sVar6;
  UClass *pUVar7;
  UWN_Island_ZoneIDMap *pUVar8;
  UDS_LogManager *pUVar9;
  int iVar10;
  double dVar11;
  FName FVar12;
  uint uVar13;
  double dVar14;
  uint uVar15;
  undefined1 auStackY_1c8 [32];
  FString local_188;
  TStringView<wchar_t> local_178;
  TStringView<wchar_t> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if (this->CurLookIslandID == param_1) {
    return;
  }
  this_00 = FDS_ZoneIslandTableRow::Get((longlong)param_1,true);
  if (this_00 == (FDS_ZoneIslandTableRow *)0x0) {
    return;
  }
  iVar4 = this_00->TextureOrthoWidth;
  this->IsIndoor = false;
  this->CurLookIslandID = param_1;
  this->CurLookIslandIDByMapTexture = param_1;
  this->OrthoWidth = (float)iVar4;
  this->CurLookIslandIDByMapSpawn = param_1;
  iVar10 = 0;
  this->CurLookIndoorGroupID = 0;
  pFVar5 = FDS_ZoneIslandTableRow::ID_IslandNameTable(this_00);
  FDS_Text::SetTextFromStringTable(&this->TextIslandName,pFVar5);
  dVar11 = (double)this_00->_padding_;
  (this->MapStartPos).field0_0x0._s_0.X = (double)this_00->_padding_;
  (this->MapStartPos).field0_0x0._s_0.Y = dVar11;
  dVar11 = (double)this_00->_padding_;
  (this->MapEndPos).field0_0x0._s_0.X = (double)this_00->_padding_;
  (this->MapEndPos).field0_0x0._s_0.Y = dVar11;
  dVar11 = (this->MapStartPos).field0_0x0._s_0.X - (this->MapEndPos).field0_0x0._s_0.X;
  dVar14 = (this->MapStartPos).field0_0x0._s_0.Y - (this->MapEndPos).field0_0x0._s_0.Y;
  uVar13 = SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar15 = (uint)((ulonglong)dVar14 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  (this->MapSize).field0_0x0._s_0.X =
       (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  (this->MapSize).field0_0x0._s_0.Y = (double)CONCAT44(uVar15,uVar13);
  iVar4 = this->DefaultWorldMapWheelCount;
  iVar2 = this->WorldMapZoomStepID;
  dVar11 = (this->MapSize).field0_0x0._s_0.Y;
  dVar11 = __real_bfe0000000000000 - (dVar11 + dVar11) / (double)this->OrthoWidth;
  (this->MaxCell).field0_0x0._s_0.X =
       (double)-((int)ROUND(__real_bfe0000000000000 -
                            (__real_4000000000000000 / (double)this->OrthoWidth) *
                            (this->MapSize).field0_0x0._s_0.X) >> 1);
  iVar3 = this->BaseCellValueY;
  dVar11 = (double)-((int)ROUND(dVar11) >> 1);
  (this->MaxCell).field0_0x0._s_0.Y = dVar11;
  fVar1 = this->DefaultScaleMinSize;
  UpdateZoomStepData(this,iVar2,iVar4);
  UpdateZoomStep(this);
  UpdateScaleData(this,(float)(((double)iVar3 / dVar11) * (double)fVar1));
  local_188.Data.ArrayNum = FFieldNotificationClassDescriptor::CurLookIslandIDByMapTexture.BitNumber
  ;
  local_188.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)
       FFieldNotificationClassDescriptor::CurLookIslandIDByMapTexture.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_188);
  local_188.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)
       FFieldNotificationClassDescriptor::CurLookIslandIDByMapSpawn.FieldName;
  local_188.Data.ArrayNum = FFieldNotificationClassDescriptor::CurLookIslandIDByMapSpawn.BitNumber;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_188);
  local_188.Data.ArrayNum = FFieldNotificationClassDescriptor::TextIslandName.BitNumber;
  local_188.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::TextIslandName.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_188);
  InitDataCenterOnReferencePos(this);
  if (this_00->ID_ConnectedSkyMap < 1) {
    this->SelectUpDownFocusType = NONE;
    iVar4 = FFieldNotificationClassDescriptor::RightMiddleUIVisibility.BitNumber;
    FVar12 = FFieldNotificationClassDescriptor::RightMiddleUIVisibility.FieldName;
    if (this->RightMiddleUIVisibility != Collapsed) {
      this->RightMiddleUIVisibility = Collapsed;
      goto LAB_14c023de2;
    }
  }
  else {
    this->IsSkyMap = false;
    this->SkyIndoorGroupID = this_00->ID_ConnectedSkyMap;
    this->SelectUpDownFocusType = SKY_MAP_UI;
    local_188.Data.ArrayNum = FFieldNotificationClassDescriptor::IsSkyMap.BitNumber;
    local_188.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)FFieldNotificationClassDescriptor::IsSkyMap.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_188);
    iVar4 = FFieldNotificationClassDescriptor::RightMiddleUISwicher.BitNumber;
    FVar12 = FFieldNotificationClassDescriptor::RightMiddleUISwicher.FieldName;
    if (this->RightMiddleUISwicher != 0) {
      this->RightMiddleUISwicher = 0;
      local_188.Data.ArrayNum = iVar4;
      local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar12;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_188);
    }
    iVar4 = FFieldNotificationClassDescriptor::RightMiddleUIVisibility.BitNumber;
    FVar12 = FFieldNotificationClassDescriptor::RightMiddleUIVisibility.FieldName;
    if (this->RightMiddleUIVisibility != SelfHitTestInvisible) {
      this->RightMiddleUIVisibility = SelfHitTestInvisible;
LAB_14c023de2:
      local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar12;
      local_188.Data.ArrayNum = iVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_188);
    }
  }
  ::FString::PrintfImpl
            (&local_188,
             L"/Script/WN_WorldUtils.WN_Island_ZoneIDMap\'/Game/Generated/WorldInfo/Island_%d.Island_%d\'"
            );
  local_178.Size = 0;
  local_178._12_4_ = 0;
  local_178.DataPtr = (wchar_t *)0x0;
  if (local_188.Data.ArrayNum == 0) {
    local_168.DataPtr = L"";
  }
  else {
    local_168.DataPtr = (wchar_t *)local_188.Data.AllocatorInstance.Data;
    if ((FName)local_188.Data.AllocatorInstance.Data == (FName)0x0) goto LAB_14c023e4d;
  }
  sVar6 = wcslen(local_168.DataPtr);
  iVar10 = (int)sVar6;
LAB_14c023e4d:
  local_168.Size = iVar10;
  pUVar7 = Z_Construct_UClass_UWN_Island_ZoneIDMap_NoRegister();
  pUVar8 = (UWN_Island_ZoneIDMap *)
           StaticLoadObject(pUVar7,(UObject *)0x0,&local_168,&local_178,0,(UPackageMap *)0x0,true,
                            (FLinkerInstancingContext *)0x0);
  this->WorldIslandZoneIDMap = pUVar8;
  if ((pUVar8 == (UWN_Island_ZoneIDMap *)0x0) &&
     (pUVar9 = UDS_LogManager::GetInst(), pUVar9 != (UDS_LogManager *)0x0)) {
    pUVar9 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_VM_WorldMap::SetIslandZoneIDMapObject",0x29,Yes);
    UDS_LogManager::PrintLog
              (pUVar9,1,Warning,local_158.Ptr,0x4e2,L"WorldIslandZoneIDMap is nullptr.");
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
  }
  if ((FName)local_188.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  UpdateRegionText(this,&this->ReferencePosition);
  ContentFocusMapOffSet(this);
  return;
}

// MarkerAllDelete @ 14c024820

void __thiscall UDS_VM_WorldMap::MarkerAllDelete(UDS_VM_WorldMap *this)

{
  bool bVar1;
  UDS_WorldMapEvent *pUVar2;
  UDS_WorldMapMarkerManager *this_00;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  pUVar2 = UDS_WorldMapEvent::GetEvent();
  if (pUVar2 != (UDS_WorldMapEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->RequestAllMarkerDeleteDelegate);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->RequestAllMarkerDeleteDelegate).Delegate);
    }
  }
  this_00 = UDS_WorldMapMarkerManager::GetInst();
  if (this_00 == (UDS_WorldMapMarkerManager *)0x0) {
    return;
  }
  UDS_WorldMapMarkerManager::MarkerAllDelete(this_00);
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  UDS_UIMessageManager::OpenMsgByStringUi(0x447b6,Complete_None_01,&local_28);
  OnUpdateMyMarkerCountText(this);
  return;
}

// MouseWheelScaleUpdate @ 14c024ba0

void __thiscall
UDS_VM_WorldMap::MouseWheelScaleUpdate(UDS_VM_WorldMap *this,FInputActionValue *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (float)((double)this->WheelSensitivity * (param_1->Value).field0_0x0._s_0.X +
                 (double)this->UserScale);
  fVar1 = this->ScaleMinValue;
  if ((this->ScaleMinValue < fVar2) && (fVar1 = this->ScaleMaxValue, fVar2 <= this->ScaleMaxValue))
  {
    fVar1 = fVar2;
  }
  this->TargetScale = fVar1;
  return;
}

// OnChangeIndoorGroupID @ 14c0250d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_WorldMap::OnChangeIndoorGroupID(UDS_VM_WorldMap *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  ESlateVisibility EVar6;
  FDS_MapIndoorGroupTableRow *pFVar7;
  UDS_LogManager *pUVar8;
  FDS_ZoneBaseTableRow *pFVar9;
  FDS_StringWorldTableRow *pFVar10;
  UDS_WorldMapEvent *pUVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStackY_548 [32];
  FName local_518;
  int local_510;
  FName local_508;
  int local_500;
  FName local_4f8;
  int local_4f0;
  FName local_4e8;
  int local_4e0;
  FName local_4d8;
  int local_4d0;
  FName local_4c8;
  int local_4c0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_548;
  if (this->CurLookIndoorGroupID != param_1) {
    pFVar7 = FDS_MapIndoorGroupTableRow::Get((longlong)param_1,true);
    if (pFVar7 == (FDS_MapIndoorGroupTableRow *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      if (pUVar8 != (UDS_LogManager *)0x0) {
        pUVar8 = UDS_LogManager::GetInst();
        local_4b8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_4b8,"UDS_VM_WorldMap::OnChangeIndoorGroupID",0x26,Yes);
        UDS_LogManager::PrintLog
                  (pUVar8,1,Warning,local_4b8.Ptr,0x726,L"mapIndoorGroupTableRow nullptr");
        if ((void *)local_4b8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_4b8._padding_);
        }
      }
    }
    else if ((pFVar7->ID_Zones).ArrayNum < 1) {
      pUVar8 = UDS_LogManager::GetInst();
      if (pUVar8 != (UDS_LogManager *)0x0) {
        pUVar8 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_VM_WorldMap::OnChangeIndoorGroupID",0x26,Yes);
        UDS_LogManager::PrintLog
                  (pUVar8,1,Warning,local_158.Ptr,0x72c,
                   L"mapIndoorGroupTableRow->ID_Zones not valid");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
    }
    else {
      pFVar9 = FDS_ZoneBaseTableRow::Get
                         ((longlong)*(int *)(pFVar7->ID_Zones).AllocatorInstance.Data,true);
      if (pFVar9 == (FDS_ZoneBaseTableRow *)0x0) {
        pUVar8 = UDS_LogManager::GetInst();
        if (pUVar8 != (UDS_LogManager *)0x0) {
          pUVar8 = UDS_LogManager::GetInst();
          local_398._padding_ = (longlong)pFVar9;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_398,"UDS_VM_WorldMap::OnChangeIndoorGroupID",0x26,Yes);
          UDS_LogManager::PrintLog
                    (pUVar8,1,Warning,local_398.Ptr,0x733,L"FDS_ZoneBaseTableRow nullptr");
          if ((FDS_ZoneBaseTableRow *)local_398._padding_ != (FDS_ZoneBaseTableRow *)0x0) {
            FMemory::Free((void *)local_398._padding_);
          }
        }
      }
      else {
        iVar12 = pFVar7->TextureOrthoWidth;
        this->CurLookIslandID = 0;
        this->CurLookIndoorGroupID = param_1;
        this->OrthoWidth = (float)iVar12;
        pFVar10 = FDS_MapIndoorGroupTableRow::ID_IndoorNameTable(pFVar7);
        FDS_Text::SetTextFromStringTable(&this->TextIslandName,pFVar10);
        uVar2 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        uVar1 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        this->IsIndoor = true;
        dVar15 = (pFVar7->StartPosition).field0_0x0._s_0.X;
        dVar14 = (pFVar7->StartPosition).field0_0x0._s_0.Y;
        dVar13 = dVar15 - (pFVar7->EndPosition).field0_0x0._s_0.X;
        dVar16 = (double)this->OrthoWidth;
        if (dVar16 < (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) & uVar2,
                                      SUB84(dVar13,0) & uVar1)) {
          (this->MapStartPos).field0_0x0._s_0.X = dVar15;
          (this->MapStartPos).field0_0x0._s_0.Y = dVar14;
          dVar15 = (pFVar7->EndPosition).field0_0x0._s_0.Y;
          (this->MapEndPos).field0_0x0._s_0.X = (pFVar7->EndPosition).field0_0x0._s_0.X;
          (this->MapEndPos).field0_0x0._s_0.Y = dVar15;
          dVar15 = (this->MapStartPos).field0_0x0._s_0.Y - dVar15;
        }
        else {
          (this->MapStartPos).field0_0x0._s_0.X = dVar15 - dVar16;
          (this->MapStartPos).field0_0x0._s_0.Y = dVar14 - dVar16;
          dVar15 = (pFVar7->StartPosition).field0_0x0._s_0.Y;
          (this->IndoorMapStartPos).field0_0x0._s_0.X = (pFVar7->StartPosition).field0_0x0._s_0.X;
          (this->IndoorMapStartPos).field0_0x0._s_0.Y = dVar15;
          dVar15 = (pFVar7->EndPosition).field0_0x0._s_0.Y;
          (this->MapEndPos).field0_0x0._s_0.X = (pFVar7->EndPosition).field0_0x0._s_0.X + dVar16;
          (this->MapEndPos).field0_0x0._s_0.Y = dVar15 + dVar16;
          dVar15 = (pFVar7->EndPosition).field0_0x0._s_0.Y;
          (this->IndoorMapEndPos).field0_0x0._s_0.X = (pFVar7->EndPosition).field0_0x0._s_0.X;
          (this->IndoorMapEndPos).field0_0x0._s_0.Y = dVar15;
          dVar15 = (this->MapStartPos).field0_0x0._s_0.Y - (this->MapEndPos).field0_0x0._s_0.Y;
        }
        dVar14 = (this->MapStartPos).field0_0x0._s_0.X - (this->MapEndPos).field0_0x0._s_0.X;
        (this->MapSize).field0_0x0._s_0.X =
             (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar2,SUB84(dVar14,0) & uVar1);
        (this->MapSize).field0_0x0._s_0.Y =
             (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar2,SUB84(dVar15,0) & uVar1);
        dVar15 = (this->MapSize).field0_0x0._s_0.Y;
        dVar15 = __real_bfe0000000000000 - (dVar15 + dVar15) / dVar16;
        (this->MaxCell).field0_0x0._s_0.X =
             (double)-((int)ROUND(__real_bfe0000000000000 -
                                  (__real_4000000000000000 / dVar16) *
                                  (this->MapSize).field0_0x0._s_0.X) >> 1);
        (this->MaxCell).field0_0x0._s_0.Y = (double)-((int)ROUND(dVar15) >> 1);
        UpdateZoomStepData(this,pFVar7->ID_MapZoomStep,pFVar7->WheelMaxCount);
        UpdateZoomStep(this);
        UpdateScaleData(this,(float)pFVar7->DefaultScaleMin);
        local_510 = FFieldNotificationClassDescriptor::CurLookIndoorGroupID.BitNumber;
        local_518 = FFieldNotificationClassDescriptor::CurLookIndoorGroupID.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_518);
        local_500 = FFieldNotificationClassDescriptor::TextIslandName.BitNumber;
        local_508 = FFieldNotificationClassDescriptor::TextIslandName.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_508);
        pUVar11 = UDS_WorldMapEvent::GetEvent();
        if (pUVar11 != (UDS_WorldMapEvent *)0x0) {
          iVar12 = this->CurLookIndoorGroupID;
          bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                             &pUVar11->ChangeIndoorGroupID_IndoorInfoListDel);
          if (bVar5) {
            TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                      (&(pUVar11->ChangeIndoorGroupID_IndoorInfoListDel).Delegate,iVar12);
          }
        }
        InitDataCenterOnReferencePos(this);
        iVar12 = 1;
        if (pFVar9->MapViewType == SkyMap) {
          this->GroundIslandID = pFVar7->ID_ZoneIsland;
          this->IsSkyMap = true;
          iVar12 = 0;
          this->SelectUpDownFocusType = SKY_MAP_UI;
          local_4f0 = FFieldNotificationClassDescriptor::IsSkyMap.BitNumber;
          local_4f8 = FFieldNotificationClassDescriptor::IsSkyMap.FieldName;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_4f8);
          iVar4 = FFieldNotificationClassDescriptor::RightMiddleUIVisibility.BitNumber;
          FVar3 = FFieldNotificationClassDescriptor::RightMiddleUIVisibility.FieldName;
          if (this->RightMiddleUIVisibility != SelfHitTestInvisible) {
            this->RightMiddleUIVisibility = SelfHitTestInvisible;
            local_4e0 = iVar4;
            local_4e8 = FVar3;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_4e8);
          }
        }
        else if (pFVar9->MapViewType == IndoorMap) {
          pFVar7 = FDS_MapIndoorGroupTableRow::Get((longlong)pFVar9->ID_MapIndoorGroup,true);
          iVar4 = FFieldNotificationClassDescriptor::RightMiddleUIVisibility.BitNumber;
          FVar3 = FFieldNotificationClassDescriptor::RightMiddleUIVisibility.FieldName;
          if (pFVar7 == (FDS_MapIndoorGroupTableRow *)0x0) {
            pUVar8 = UDS_LogManager::GetInst();
            if (pUVar8 != (UDS_LogManager *)0x0) {
              pUVar8 = UDS_LogManager::GetInst();
              local_278._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_278,"UDS_VM_WorldMap::UpdateIndoorFloorUI",0x24,Yes);
              UDS_LogManager::PrintLog
                        (pUVar8,1,Warning,local_278.Ptr,0x428,L"mapIndoorGroupTableRow nullptr");
              if ((void *)local_278._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_278._padding_);
              }
            }
          }
          else {
            EVar6 = SelfHitTestInvisible;
            if (pFVar7->ID_MapIndoorFloor < 1) {
              EVar6 = Collapsed;
            }
            if (this->RightMiddleUIVisibility != EVar6) {
              this->RightMiddleUIVisibility = EVar6;
              local_4d0 = iVar4;
              local_4d8 = FVar3;
              (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_4d8);
            }
          }
          this->SelectUpDownFocusType = FLOOR_UI;
        }
        local_4c0 = FFieldNotificationClassDescriptor::RightMiddleUISwicher.BitNumber;
        local_4c8 = FFieldNotificationClassDescriptor::RightMiddleUISwicher.FieldName;
        if (this->RightMiddleUISwicher != iVar12) {
          this->RightMiddleUISwicher = iVar12;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_4c8);
        }
      }
    }
  }
  return;
}

// OnCloseCommonPopup @ 14c028060

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMap::OnCloseCommonPopup
          (UDS_VM_WorldMap *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  UDS_WindowManager *this_00;
  float local_res18 [2];
  uint local_res20 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
  }
  else {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  local_res18[0] = 0.0;
  local_res20[0] = 0;
  UDS_WindowManager::CloseWindow(this_00,PopupCommon,local_res20,local_res18);
  return;
}

// OnCloseInit @ 14c0288d0

void __thiscall UDS_VM_WorldMap::OnCloseInit(UDS_VM_WorldMap *this)

{
  UDS_WorldMapEvent *pUVar1;
  UDS_WorldMapMarkerManager *this_00;
  UDS_WorldMapManager *this_01;
  int local_res8 [8];
  
  UDS_ViewModelBase::OnCloseInit((UDS_ViewModelBase *)this);
  this->IsZoomInOut = false;
  pUVar1 = UDS_WorldMapEvent::GetEvent();
  if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
    local_res8[0] = 0;
    FDS_FilteredEventDelegate<int_const_>::Broadcast
              (&pUVar1->MiniMapMarkerDataRefrashDelegate,local_res8);
  }
  this_00 = UDS_WorldMapMarkerManager::GetInst();
  if (this_00 != (UDS_WorldMapMarkerManager *)0x0) {
    UDS_WorldMapMarkerManager::RemoveSharedMarkerInfo(this_00);
  }
  this_01 = UDS_WorldMapManager::GetInst();
  if (this_01 != (UDS_WorldMapManager *)0x0) {
    UDS_WorldMapManager::SetWorldBossIslandID(this_01,0);
    return;
  }
  return;
}

// OnContinentEvent @ 14c028c70

void __thiscall
UDS_VM_WorldMap::OnContinentEvent(UDS_VM_WorldMap *this,FDS_ButtonEventField *param_1)

{
  UDS_WorldMapManager *this_00;
  FDS_MapIndoorGroupTableRow *pFVar1;
  UDS_WorldMapEvent *pUVar2;
  TVector2<double>_u_0 local_18;
  
  if (this->IsIndoor == true) {
    this_00 = UDS_WorldMapManager::GetInst();
    if ((this_00 != (UDS_WorldMapManager *)0x0) &&
       (pFVar1 = FDS_MapIndoorGroupTableRow::Get((longlong)this->CurLookIndoorGroupID,true),
       pFVar1 != (FDS_MapIndoorGroupTableRow *)0x0)) {
      local_18._s_0.X = (pFVar1->ZoneIslandPosition).field0_0x0._s_0.X;
      local_18._s_0.Y = (pFVar1->ZoneIslandPosition).field0_0x0._s_0.Y;
      UDS_WorldMapManager::SetContentsFocusPosition(this_00,(TVector2<double> *)&local_18._s_0);
      IslandIDChanged(this,pFVar1->ID_ZoneIsland);
    }
  }
  else {
    this->ContinentUIVisibility = Visible;
    local_18._8_4_ = FFieldNotificationClassDescriptor::ContinentUIVisibility.BitNumber;
    local_18._s_0.X = (double)FFieldNotificationClassDescriptor::ContinentUIVisibility.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    pUVar2 = UDS_WorldMapEvent::GetEvent();
    if (pUVar2 != (UDS_WorldMapEvent *)0x0) {
      FDS_EventDelegate<bool_const_>::Broadcast(&pUVar2->IsContinentDelegate,true);
      return;
    }
  }
  return;
}

// OnFocusMapChanged @ 14c02a170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_WorldMap::OnFocusMapChanged(UDS_VM_WorldMap *this,int param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  UDS_WorldMapManager *pUVar7;
  UDS_LogManager *pUVar8;
  double dVar9;
  undefined1 auStackY_188 [32];
  uint local_158 [4];
  FName local_148;
  int local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pUVar7 = UDS_WorldMapManager::GetInst();
  if (pUVar7 == (UDS_WorldMapManager *)0x0) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_138._padding_ = (longlong)pUVar7;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_WorldMap::OnFocusMapChanged",0x22,Yes);
      UDS_LogManager::PrintLog(pUVar8,1,Warning,local_138.Ptr,0x3bb,L"worldMapManager nullptr");
      if ((UDS_WorldMapManager *)local_138._padding_ != (UDS_WorldMapManager *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    bVar6 = IsInSameZone(this,param_1);
    if (bVar6) {
      dVar4 = (pUVar7->ContentsFocusPosition).field0_0x0._s_0.X;
      dVar5 = (pUVar7->ContentsFocusPosition).field0_0x0._s_0.Y;
      this->IsFocusLerpStart = bVar6;
      fVar1 = this->TextureSize;
      dVar2 = (this->ReferencePosition).field0_0x0._s_0.Y;
      dVar9 = __real_3ff0000000000000 / (double)this->OrthoWidth;
      dVar3 = (this->MapStartPos).field0_0x0._s_0.Y;
      (this->TargetMapPositionOffset).field0_0x0._s_0.X =
           (this->ReferencePosition).field0_0x0._s_0.X -
           (dVar4 - (this->MapStartPos).field0_0x0._s_0.X) * dVar9 * (double)fVar1;
      (this->TargetMapPositionOffset).field0_0x0._s_0.Y =
           dVar2 - (dVar5 - dVar3) * dVar9 * (double)fVar1;
    }
    else {
      local_158[0] = param_1;
      OnZoneIDChanged(this,local_158);
    }
    this->ContinentUIVisibility = Collapsed;
    local_140 = FFieldNotificationClassDescriptor::ContinentUIVisibility.BitNumber;
    local_148 = FFieldNotificationClassDescriptor::ContinentUIVisibility.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
  }
  return;
}

// OnFocusMarkerInfoBaseChanged @ 14c02a330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMap::OnFocusMarkerInfoBaseChanged(UDS_VM_WorldMap *this,FDS_WorldMapMarkerInfo *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  UDS_ZoneManager *pUVar5;
  UDS_LogManager *pUVar6;
  bool bVar7;
  double dVar8;
  undefined1 auStackY_188 [32];
  FName local_158;
  int local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  dVar8 = __real_3ff0000000000000;
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (param_1->IslandID < 0) {
    bVar7 = param_1->IndoorGroupID == this->CurLookIndoorGroupID;
  }
  else {
    bVar7 = param_1->IslandID == this->CurLookIslandID;
  }
  if (bVar7) {
    fVar1 = this->TextureSize;
    this->IsFocusLerpStart = true;
    dVar4 = (param_1->MarkerGlobalPos).field0_0x0._s_0.Y;
    dVar2 = (this->ReferencePosition).field0_0x0._s_0.Y;
    dVar8 = dVar8 / (double)this->OrthoWidth;
    dVar3 = (this->MapStartPos).field0_0x0._s_0.Y;
    (this->TargetMapPositionOffset).field0_0x0._s_0.X =
         (this->ReferencePosition).field0_0x0._s_0.X -
         ((param_1->MarkerGlobalPos).field0_0x0._s_0.X - (this->MapStartPos).field0_0x0._s_0.X) *
         dVar8 * (double)fVar1;
    (this->TargetMapPositionOffset).field0_0x0._s_0.Y =
         dVar2 - (dVar4 - dVar3) * dVar8 * (double)fVar1;
  }
  else {
    pUVar5 = UDS_ZoneManager::GetInst();
    if (pUVar5 == (UDS_ZoneManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar6 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_WorldMap::OnFocusMarkerInfoBaseChanged",0x2d,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_148.Ptr,0x3e1,L"zoneMgr is nullptr");
      if ((void *)local_148._padding_ == (void *)0x0) {
        return;
      }
      FMemory::Free((void *)local_148._padding_);
      return;
    }
    this->CurLookIslandID = 0;
    this->CurLookIndoorGroupID = 0;
    if (param_1->IslandID < 1) {
      this->CurCharIslandID = 0;
      this->CurCharIndoorGroupID = pUVar5->ZoneID;
      OnChangeIndoorGroupID(this,param_1->IndoorGroupID);
    }
    else {
      this->CurCharIndoorGroupID = 0;
      this->CurCharIslandID = pUVar5->IslandID;
      IslandIDChanged(this,param_1->IslandID);
    }
  }
  this->ContinentUIVisibility = Collapsed;
  local_150 = FFieldNotificationClassDescriptor::ContinentUIVisibility.BitNumber;
  local_158 = FFieldNotificationClassDescriptor::ContinentUIVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
  return;
}

// OnGroundMapButtonClicked @ 14c02a540

void __thiscall
UDS_VM_WorldMap::OnGroundMapButtonClicked(UDS_VM_WorldMap *this,FDS_ButtonEventField *param_1)

{
  FName local_18;
  int local_10;
  
  if ((this->IsSkyMap != false) && (this->GroundIslandID != 0)) {
    IslandIDChanged(this,this->GroundIslandID);
    this->IsSkyMap = false;
    local_10 = FFieldNotificationClassDescriptor::IsSkyMap.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::IsSkyMap.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnIconClickedMapFocusChanged @ 14c02b000

void __thiscall
UDS_VM_WorldMap::OnIconClickedMapFocusChanged(UDS_VM_WorldMap *this,TVector2<double> *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = __real_3ff0000000000000;
  fVar1 = this->TextureSize;
  this->IsFocusLerpStart = true;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  dVar2 = (this->ReferencePosition).field0_0x0._s_0.Y;
  dVar5 = dVar5 / (double)this->OrthoWidth;
  dVar3 = (this->MapStartPos).field0_0x0._s_0.Y;
  (this->TargetMapPositionOffset).field0_0x0._s_0.X =
       (this->ReferencePosition).field0_0x0._s_0.X -
       ((param_1->field0_0x0)._s_0.X - (this->MapStartPos).field0_0x0._s_0.X) * dVar5 *
       (double)fVar1;
  (this->TargetMapPositionOffset).field0_0x0._s_0.Y =
       dVar2 - (dVar4 - dVar3) * dVar5 * (double)fVar1;
  return;
}

// OnInputAction @ 14c02b220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMap::OnInputAction
          (UDS_VM_WorldMap *this,EDS_KeyActionType *param_1,FDS_InputEventParams *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  ETriggerEvent EVar4;
  EDS_KeyActionType EVar5;
  TVector2<double>_u_0 TVar6;
  bool bVar7;
  UDS_WorldMapEvent *pUVar8;
  UDS_LogManager *pUVar9;
  UDS_ZoneManager *pUVar10;
  UDS_MovementCore *pUVar11;
  TVector<double> *pTVar12;
  UDS_WindowManager *this_00;
  UDS_WorldMapManager *this_01;
  UDS_WorldMapMarkerManager *this_02;
  UObject *pUVar13;
  FSlateApplication *pFVar14;
  float *pfVar15;
  FDS_MapIndoorGroupTableRow *pFVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  double dVar20;
  undefined1 auStackY_1e8 [32];
  TVector<double>_u_0 local_1a8;
  float local_188 [2];
  TVector<double>_u_0 local_180;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pUVar8 = UDS_WorldMapEvent::GetEvent();
  if (pUVar8 == (UDS_WorldMapEvent *)0x0) {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 != (UDS_LogManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_VM_WorldMap::OnInputAction",0x1e,Yes);
      UDS_LogManager::PrintLog(pUVar9,1,Warning,local_168.Ptr,0xed,L"worldMapEvent nullptr");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
  }
  else {
    EVar4 = param_2->TriggerEvent;
    if (EVar4 == Triggered) {
      EVar5 = *param_1;
      if (EVar5 == IA_Map_MoveView) {
        dVar18 = (param_2->InputActionValue).Value.field0_0x0._s_0.X;
        dVar1 = (param_2->InputActionValue).Value.field0_0x0._s_0.Y;
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 != (UDS_LogManager *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          ::FString::PrintfImpl((FString *)&local_1a8._s_0,L"X=%3.3f Y=%3.3f");
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_VM_WorldMap::OnInputAction",0x1e,Yes);
          UDS_LogManager::PrintLog(pUVar9,1,Display,local_168.Ptr,0x10d,L"%s");
          if ((void *)local_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_168._padding_);
          }
          if ((void *)local_1a8._s_0.X != (void *)0x0) {
            FMemory::Free((void *)local_1a8._s_0.X);
          }
        }
        FDS_QueryDelegate<UE::Math::TVector2<double>_>::Query
                  (&pUVar8->WorldMapPanelSizeQueryDelegate,(TVector2<double> *)&local_180._s_0);
        fVar17 = this->PadCursorSensitivity;
        (this->WorldMapPanelSize).field0_0x0._s_0.X = local_180._s_0.X;
        (this->WorldMapPanelSize).field0_0x0._s_0.Y = local_180._s_0.Y;
        local_1a8._s_0.Y = (double)fVar17 * dVar1;
        dVar18 = (double)fVar17 * dVar18;
        local_1a8._s_0.X =
             (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) ^
                              __xmm_80000000000000008000000000000000._4_4_,
                              SUB84(dVar18,0) ^ (uint)__xmm_80000000000000008000000000000000);
        UpdateMapPositionOnDrag(this,(TVector2<double> *)&local_1a8._s_0);
      }
      else if (EVar5 == IA_ZoomInOut) {
        ADS_PlayerController::GetPlayerController();
        bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_1a8._s_0);
        if ((bVar7) &&
           (pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_1a8._s_0),
           pUVar13[0x36].field_0x8 == '\x02')) {
          fVar19 = (float)((double)this->UserScale +
                          (param_2->InputActionValue).Value.field0_0x0._s_0.X);
          fVar17 = this->ScaleMinValue;
          if ((this->ScaleMinValue < fVar19) &&
             (fVar17 = this->ScaleMaxValue, fVar19 <= this->ScaleMaxValue)) {
            fVar17 = fVar19;
          }
          this->TargetScale = fVar17;
        }
      }
      else if (EVar5 == IA_MouseLeft) {
        FDS_QueryDelegate<UE::Math::TVector2<double>_>::Query
                  (&pUVar8->WorldMapPanelSizeQueryDelegate,(TVector2<double> *)&local_180._s_0);
        (this->WorldMapPanelSize).field0_0x0._s_0.X = local_180._s_0.X;
        (this->WorldMapPanelSize).field0_0x0._s_0.Y = local_180._s_0.Y;
        pFVar14 = FSlateApplication::Get();
        pfVar15 = (float *)(**(code **)(*(longlong *)pFVar14 + 0x68))(pFVar14,&local_1a8);
        dVar18 = (this->PrevMousePositioin).field0_0x0._s_0.X;
        fVar17 = *pfVar15;
        fVar19 = pfVar15[1];
        if ((dVar18 != UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X) ||
           (UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y !=
            (this->PrevMousePositioin).field0_0x0._s_0.Y)) {
          local_1a8._s_0.X = (double)fVar17 - dVar18;
          local_1a8._s_0.Y = (double)fVar19 - (this->PrevMousePositioin).field0_0x0._s_0.Y;
          UpdateMapPositionOnDrag(this,(TVector2<double> *)&local_1a8._s_0);
        }
        (this->PrevMousePositioin).field0_0x0._s_0.X = (double)fVar17;
        (this->PrevMousePositioin).field0_0x0._s_0.Y = (double)fVar19;
      }
      else if (EVar5 == IA_Map_ViewTopMap) {
        if (this->IsIndoor == true) {
          pFVar16 = FDS_MapIndoorGroupTableRow::Get((longlong)this->CurLookIndoorGroupID,true);
          if (pFVar16 != (FDS_MapIndoorGroupTableRow *)0x0) {
            IslandIDChanged(this,pFVar16->ID_ZoneIsland);
          }
        }
        else {
          this->ContinentUIVisibility = Visible;
          local_1a8._8_4_ = FFieldNotificationClassDescriptor::ContinentUIVisibility.BitNumber;
          local_1a8._s_0.X =
               (double)FFieldNotificationClassDescriptor::ContinentUIVisibility.FieldName;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1a8);
          FDS_EventDelegate<bool_const_>::Broadcast(&pUVar8->IsContinentDelegate,true);
        }
      }
    }
    else if (EVar4 == Started) {
      if (*param_1 == IA_ZoomInOut) {
        ADS_PlayerController::GetPlayerController();
        bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_1a8._s_0);
        if (!bVar7) {
          return;
        }
        pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_1a8._s_0);
        if (pUVar13[0x36].field_0x8 == '\x01') {
          fVar19 = (float)((double)this->WheelSensitivity *
                           (param_2->InputActionValue).Value.field0_0x0._s_0.X +
                          (double)this->UserScale);
          fVar17 = this->ScaleMinValue;
          if ((this->ScaleMinValue < fVar19) &&
             (fVar17 = this->ScaleMaxValue, fVar19 <= this->ScaleMaxValue)) {
            fVar17 = fVar19;
          }
          this->TargetScale = fVar17;
        }
      }
      TVar6._s_0.Y = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
      TVar6._s_0.X = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
      (this->PrevMousePositioin).field0_0x0 = TVar6;
    }
    else if (EVar4 == Completed) {
      EVar5 = *param_1;
      if (EVar5 == IA_Map_CenterOfCharacter) {
        pUVar10 = UDS_ZoneManager::GetInst();
        if (pUVar10 == (UDS_ZoneManager *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          if (pUVar9 != (UDS_LogManager *)0x0) {
            pUVar9 = UDS_LogManager::GetInst();
            local_168._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_168,"UDS_VM_WorldMap::OnInputAction",0x1e,Yes);
            UDS_LogManager::PrintLog(pUVar9,1,Warning,local_168.Ptr,0x154,L"zoneManager nullptr");
            if ((void *)local_168._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_168._padding_);
            }
          }
        }
        else {
          bVar7 = IsInSameZone(this,pUVar10->ZoneID);
          if (bVar7) {
            pUVar11 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->OwnerMovementCore).WeakPtr);
            pTVar12 = UDS_MovementCore::GetActorLocation(pUVar11,(TVector<double> *)&local_180._s_0)
            ;
            dVar18 = (pTVar12->field0_0x0)._s_0.Y;
            pUVar11 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->OwnerMovementCore).WeakPtr);
            pTVar12 = UDS_MovementCore::GetActorLocation(pUVar11,(TVector<double> *)&local_1a8._s_0)
            ;
            dVar20 = __real_3ff0000000000000;
            fVar17 = this->TextureSize;
            dVar1 = (pTVar12->field0_0x0)._s_0.X;
            this->IsFocusLerpStart = true;
            dVar2 = (this->MapStartPos).field0_0x0._s_0.Y;
            dVar3 = (this->ReferencePosition).field0_0x0._s_0.Y;
            dVar20 = dVar20 / (double)this->OrthoWidth;
            (this->TargetMapPositionOffset).field0_0x0._s_0.X =
                 (this->ReferencePosition).field0_0x0._s_0.X -
                 (dVar1 - (this->MapStartPos).field0_0x0._s_0.X) * dVar20 * (double)fVar17;
            (this->TargetMapPositionOffset).field0_0x0._s_0.Y =
                 dVar3 - (dVar18 - dVar2) * dVar20 * (double)fVar17;
          }
          else {
            FocusPlayerMap(this);
          }
          this_00 = UDS_WindowManager::GetInst();
          if (this_00 != (UDS_WindowManager *)0x0) {
            local_188[0] = 0.0;
            local_1a8._s_0.X = (double)((ulonglong)local_1a8._s_0.X & 0xffffffff00000000);
            UDS_WindowManager::CloseWindow(this_00,MapTooltip,(uint *)&local_1a8,local_188);
          }
          this_01 = UDS_WorldMapManager::GetInst();
          if (this_01 != (UDS_WorldMapManager *)0x0) {
            UDS_WorldMapManager::RemoveSelectedObj(this_01);
          }
        }
      }
      else if (EVar5 == IA_UI_SelectUp) {
        InputActionSelectedUpDownEvent(this,true);
      }
      else if (EVar5 == IA_UI_SelectDown) {
        InputActionSelectedUpDownEvent(this,false);
      }
      else if (EVar5 == IA_Map_MapIndexFilterToggle) {
        bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                           &pUVar8->IndexFilterToggle);
        if (bVar7) {
          TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                    (&(pUVar8->IndexFilterToggle).Delegate);
        }
      }
      else if (EVar5 == IA_Map_MarkerChanged) {
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 != (UDS_LogManager *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_VM_WorldMap::OnInputAction",0x1e,Yes);
          UDS_LogManager::PrintLog
                    (pUVar9,1,Warning,local_168.Ptr,0x182,
                     L"Marker Spawn EDS_KeyActionType::IA_Map_MarkerChanged");
          if ((void *)local_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_168._padding_);
          }
        }
        if (this->IsMarkerObjectHoverd == true) {
          this->IsMarkerObjectHoverd = false;
          bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                             &pUVar8->RequestMarkerDeleteDelegate);
          if (bVar7) {
            TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                      (&(pUVar8->RequestMarkerDeleteDelegate).Delegate);
          }
        }
        else {
          bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                             &pUVar8->RequestMarkerAddDelegate);
          if (bVar7) {
            TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                      (&(pUVar8->RequestMarkerAddDelegate).Delegate);
          }
        }
      }
      else if (EVar5 == IA_Map_DeleteAllMarker) {
        pUVar8 = UDS_WorldMapEvent::GetEvent();
        if (pUVar8 != (UDS_WorldMapEvent *)0x0) {
          bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                             &pUVar8->RequestAllMarkerDeleteDelegate);
          if (bVar7) {
            TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                      (&(pUVar8->RequestAllMarkerDeleteDelegate).Delegate);
          }
        }
        this_02 = UDS_WorldMapMarkerManager::GetInst();
        if (this_02 != (UDS_WorldMapMarkerManager *)0x0) {
          UDS_WorldMapMarkerManager::MarkerAllDelete(this_02);
          local_180._s_0.X = 0.0;
          local_180._s_0.Y = 0.0;
          local_180._16_4_ = 0;
          UDS_UIMessageManager::OpenMsgByStringUi
                    (0x447b6,Complete_None_01,
                     (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                      *)&local_180._s_0);
          OnUpdateMyMarkerCountText(this);
        }
      }
      else if (EVar5 == IA_Map_OpenMarkerNote) {
        if ((this->IsMarkerObjectHoverd == true) &&
           (bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                               &pUVar8->OpenMarkerNoteDelegate), bVar7)) {
          TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                    (&(pUVar8->OpenMarkerNoteDelegate).Delegate);
        }
      }
      else if (((EVar5 == IA_Map_MarkerChatLink) && (this->IsMarkerObjectHoverd == true)) &&
              (bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                                 ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                                  &pUVar8->MarkerSharedDelegate), bVar7)) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar8->MarkerSharedDelegate).Delegate);
      }
    }
  }
  return;
}

// OnIslandClickEvent @ 14c02bef0

void __thiscall UDS_VM_WorldMap::OnIslandClickEvent(UDS_VM_WorldMap *this,int param_1)

{
  UDS_WorldMapManager *this_00;
  FDS_ZoneIslandTableRow *pFVar1;
  UDS_WorldMapEvent *pUVar2;
  TVector2<double>_u_0 local_18;
  
  this_00 = UDS_WorldMapManager::GetInst();
  if (this_00 != (UDS_WorldMapManager *)0x0) {
    pFVar1 = FDS_ZoneIslandTableRow::Get((longlong)param_1,true);
    if (pFVar1 != (FDS_ZoneIslandTableRow *)0x0) {
      local_18._s_0.X = (pFVar1->DefaultMapCenterPosition).field0_0x0._s_0.X;
      local_18._s_0.Y = *(double *)((longlong)&(pFVar1->DefaultMapCenterPosition).field0_0x0 + 8);
      UDS_WorldMapManager::SetContentsFocusPosition(this_00,(TVector2<double> *)&local_18._s_0);
      IslandIDChanged(this,param_1);
      this->ContinentUIVisibility = Collapsed;
      local_18._8_4_ = FFieldNotificationClassDescriptor::ContinentUIVisibility.BitNumber;
      local_18._s_0.X = (double)FFieldNotificationClassDescriptor::ContinentUIVisibility.FieldName;
      (**(code **)(this->_padding_ + 0x38))();
      pUVar2 = UDS_WorldMapEvent::GetEvent();
      if (pUVar2 != (UDS_WorldMapEvent *)0x0) {
        FDS_EventDelegate<bool_const_>::Broadcast(&pUVar2->IsContinentDelegate,false);
      }
    }
  }
  return;
}

// OnMainCharChanged @ 14c02c8a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMap::OnMainCharChanged
          (UDS_VM_WorldMap *this,FDS_EntityBase *param_1,FDS_EntityBase *param_2)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr *pFVar3;
  ADS_MainCharacter *this_00;
  TWeakObjectPtr<UDS_MainCameraComponent,FWeakObjectPtr> this_01;
  FWeakObjectPtr local_res20;
  UObject *local_18 [2];
  
  ADS_MainCharacter::GetMainPlayer();
  bVar1 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res20);
    pFVar3 = (FWeakObjectPtr *)
             (**(code **)(*(longlong *)&pUVar2[0x29].field_0x10 + 0x78))
                       (&pUVar2[0x29].field_0x10,local_18);
    (this->OwnerMovementCore).WeakPtr = *pFVar3;
    this_00 = (ADS_MainCharacter *)FWeakObjectPtr::Get(&local_res20);
    this_01 = ADS_MainCharacter::GetFollowCamera(this_00);
    local_18[0] = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.WeakPtr);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_18[0]);
    }
    FWeakObjectPtr::operator=(&(this->OwnerCameraComponent).WeakPtr,(FObjectPtr)local_18);
  }
  return;
}

// OnMarkerHoverStateChanged @ 14c02cdc0

void __thiscall UDS_VM_WorldMap::OnMarkerHoverStateChanged(UDS_VM_WorldMap *this,bool param_1)

{
  this->IsMarkerObjectHoverd = param_1;
  return;
}

// OnSelectedUpButtonClicked @ 14c02f700

void __thiscall
UDS_VM_WorldMap::OnSelectedUpButtonClicked(UDS_VM_WorldMap *this,FDS_ButtonEventField *param_1)

{
  InputActionSelectedUpDownEvent(this,true);
  return;
}

// OnSelectedUpDownClicked @ 14c02f710

void __thiscall
UDS_VM_WorldMap::OnSelectedUpDownClicked(UDS_VM_WorldMap *this,FDS_ButtonEventField *param_1)

{
  InputActionSelectedUpDownEvent(this,false);
  return;
}

// OnSetIsOpenIndexFilterUI @ 14c030510

void __thiscall UDS_VM_WorldMap::OnSetIsOpenIndexFilterUI(UDS_VM_WorldMap *this,bool param_1)

{
  this->IsOpenIndexFilterUI = param_1;
  return;
}

// OnSetViewModel @ 14c0374c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMap::OnSetViewModel(UDS_VM_WorldMap *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  int iVar2;
  UDS_ZoneManager *pUVar3;
  UDS_LogManager *pUVar4;
  UDS_GameOptionManager *this_00;
  UDS_GameOptionData *this_01;
  FDS_GameOptionBaseTableRow *pFVar5;
  float fVar6;
  undefined1 auStackY_1b8 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_178;
  TArray<float,TSizedDefaultAllocator<32>_> local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pUVar3 = UDS_ZoneManager::GetInst();
  if (pUVar3 == (UDS_ZoneManager *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_WorldMap::OnSetViewModel",0x1f,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,0x1c3,L"zoneManager nullptr");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    this->CurCharIslandID = pUVar3->IslandID;
    this->IsMarkerDeleteButtonLongPressed = false;
    this->IsMarkerShareButtonLongPressed = false;
    SetVMContext(this);
    DS_CommonDataHelper::WorldmapDefaultScale(&local_160);
    if (1 < local_160.ArrayNum) {
      this->DefaultScaleMinSize = *(float *)local_160.AllocatorInstance.Data;
      this->ScaleMaxValue = *(float *)(local_160.AllocatorInstance.Data + 4);
    }
    iVar2 = DS_CommonDataHelper::WorldmapDefaultCellY();
    this->BaseCellValueY = iVar2;
    fVar6 = DS_CommonDataHelper::WorldmapPadCursorSpeed();
    this->UserScale = this->ScaleMaxValue;
    this->TargetScale = this->ScaleMaxValue;
    this->DefaultPadSpeed = fVar6;
    iVar2 = DS_CommonDataHelper::WorldmapZoomStep();
    this->DefaultWorldMapWheelCount = iVar2;
    iVar2 = DS_CommonDataHelper::WorldmapZoomWheelThreshold();
    this->WorldMapZoomStepID = iVar2;
    if (local_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.AllocatorInstance.Data);
    }
    OnUpdateMyMarkerCountText(this);
    this_00 = UDS_GameOptionManager::GetInst();
    if ((this_00 != (UDS_GameOptionManager *)0x0) &&
       (this_01 = UDS_GameOptionManager::GetGameOptionData(this_00,GamepadCursorSensitivity),
       this_01 != (UDS_GameOptionData *)0x0)) {
      iVar2 = UDS_GameOptionData::GetGameOptionValue(this_01,0);
      pFVar5 = FDS_GameOptionBaseTableRow::Get(0xcf,true);
      if ((pFVar5 != (FDS_GameOptionBaseTableRow *)0x0) &&
         ((iVar2 < pFVar5->Value1 || (pFVar5->Value2 < iVar2)))) {
        if (0 < (pFVar5->DefaultValue).ArrayNum) {
          iVar2 = *(int *)(pFVar5->DefaultValue).AllocatorInstance.Data;
        }
        local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_178.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,1,0,&local_178.AllocatorInstance,1,&local_178.ArrayMax);
        *(int *)local_178.AllocatorInstance.Data = iVar2;
        UDS_GameOptionData::SetGameOptionValues(this_01,&local_178);
        UDS_GameOptionManager::SaveGameOptionDevice(this_00);
      }
      this->PadCursorSensitivity = (float)iVar2 * __real_3727c5ac;
    }
    OpenWorldMapByContent(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnSkyMapButtonEvent @ 14c0399b0

void __thiscall
UDS_VM_WorldMap::OnSkyMapButtonEvent(UDS_VM_WorldMap *this,FDS_ButtonEventField *param_1)

{
  FName local_18;
  int local_10;
  
  if ((this->IsSkyMap != true) && (this->SkyIndoorGroupID != 0)) {
    OnChangeIndoorGroupID(this,this->SkyIndoorGroupID);
    this->IsSkyMap = true;
    local_10 = FFieldNotificationClassDescriptor::IsSkyMap.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::IsSkyMap.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnUpdate @ 14c03abc0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_WorldMap::OnUpdate(UDS_VM_WorldMap *this,float param_1)

{
  float fVar1;
  uint uVar2;
  UDS_TimeUtilManager *pUVar3;
  UDS_WindowManager *this_00;
  FGeometry *pFVar4;
  UDS_WorldMapEvent *pUVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  FDateTime local_res18 [2];
  TVector2<double>_u_0 local_38;
  TVector2<double>_u_0 local_28 [2];
  
  pUVar3 = UDS_TimeUtilManager::GetInst();
  if (pUVar3 != (UDS_TimeUtilManager *)0x0) {
    UDS_TimeUtilManager::GetCurrentGMTDateTime();
    FDS_Text::SetTextFromDateTime(&this->TextServerDateTime,local_res18,HourSec,false);
    local_38._8_4_ = FFieldNotificationClassDescriptor::TextServerDateTime.BitNumber;
    local_38._s_0.X = (double)FFieldNotificationClassDescriptor::TextServerDateTime.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  }
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    pFVar4 = UDS_WindowManager::GetRootWidgetGeometry(this_00);
    fVar6 = *(float *)&pFVar4->Size / this->TextureSize;
    if (__real_322bcc77 <
        (float)((uint)(this->BaseScale - fVar6) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      this->BaseScale = fVar6;
      SetMapScale(this,this->UserScale);
      UpdateMapOffsetByZoomOut(this);
    }
    uVar2 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    if (this->IsFocusLerpStart != true) {
      fVar6 = this->TargetScale;
      fVar1 = this->UserScale;
      if (fVar1 == fVar6) {
        this->IsZoomInOut = false;
        local_38._s_0.X =
             (this->ReferencePosition).field0_0x0._s_0.X -
             (this->MapPositionOffset).field0_0x0._s_0.X;
        local_38._s_0.Y =
             (this->ReferencePosition).field0_0x0._s_0.Y -
             (this->MapPositionOffset).field0_0x0._s_0.Y;
        UpdateRegionText(this,(TVector2<double> *)&local_38._s_0);
      }
      else {
        this->BeforeUserScale = fVar1;
        fVar8 = fVar6 - fVar1;
        this->IsZoomInOut = true;
        fVar7 = fVar6;
        if (__real_322bcc77 <= fVar8 * fVar8) {
          fVar7 = param_1 * __real_40a00000;
          if (__real_3f800000 <= param_1 * __real_40a00000) {
            fVar7 = __real_3f800000;
          }
          if (fVar7 <= 0.0) {
            fVar7 = 0.0;
          }
          fVar7 = fVar7 * fVar8 + fVar1;
        }
        this->UserScale = fVar7;
        if ((float)((uint)(fVar7 - fVar6) & uVar2) < __real_3c23d70a) {
          this->UserScale = fVar6;
          fVar7 = fVar6;
        }
        SetMapScale(this,fVar7);
        UpdateZoomStep(this);
        if (this->BeforeUserScale < this->UserScale) {
          pUVar5 = UDS_WorldMapEvent::GetEvent();
          if (pUVar5 != (UDS_WorldMapEvent *)0x0) {
            FDS_QueryDelegate<UE::Math::TVector2<double>_>::Query
                      (&pUVar5->MousePositionQueryDelegate,(TVector2<double> *)&local_38._s_0);
            local_28[0]._s_0.X = local_38._s_0.X;
            local_28[0]._s_0.Y = local_38._s_0.Y;
            UpdateMapOffsetByMousePos(this,(TVector2<double> *)&local_28[0]._s_0);
          }
        }
        else {
          pUVar5 = UDS_WorldMapEvent::GetEvent();
          if (pUVar5 != (UDS_WorldMapEvent *)0x0) {
            FDS_QueryDelegate<UE::Math::TVector2<double>_>::Query
                      (&pUVar5->WorldMapPanelSizeQueryDelegate,(TVector2<double> *)&local_38._s_0);
            (this->WorldMapPanelSize).field0_0x0._s_0.X = local_38._s_0.X;
            (this->WorldMapPanelSize).field0_0x0._s_0.Y = local_38._s_0.Y;
          }
          UpdateMapOffsetByZoomOut(this);
        }
      }
    }
    UpdateLerpFocusPosition(this,param_1);
  }
  return;
}

// OnUpdateCameraDirection @ 14c03b360

void __thiscall UDS_VM_WorldMap::OnUpdateCameraDirection(UDS_VM_WorldMap *this,float *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::CameraAngle.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CameraAngle.FieldName;
  if (*param_1 + __real_42b40000 != this->CameraAngle) {
    this->CameraAngle = *param_1 + __real_42b40000;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnUpdateDirection @ 14c03b3c0

void __thiscall UDS_VM_WorldMap::OnUpdateDirection(UDS_VM_WorldMap *this,float *param_1)

{
  float fVar1;
  FName local_18;
  int local_10;
  
  fVar1 = *param_1 + __real_42b40000;
  this->LastPlayerAngle = fVar1;
  local_10 = FFieldNotificationClassDescriptor::PlayerAngle.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::PlayerAngle.FieldName;
  if (fVar1 != this->PlayerAngle) {
    this->PlayerAngle = fVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnUpdateGameTime @ 14c03b420

void __thiscall UDS_VM_WorldMap::OnUpdateGameTime(UDS_VM_WorldMap *this,FDS_InGameTimeData *param_1)

{
  FTimespan FVar1;
  FName local_18;
  int local_10;
  
  FVar1 = FDS_InGameTimeData::GetInGameTime(param_1);
  FDS_Text::SetTextFromTimespan(&this->TextInGameDateTime,(FTimespan *)FVar1.Ticks,HourSec,false);
  local_10 = FFieldNotificationClassDescriptor::TextInGameDateTime.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TextInGameDateTime.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnUpdateMyMarkerCountText @ 14c03b6d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_WorldMap::OnUpdateMyMarkerCountText(UDS_VM_WorldMap *this)

{
  UDS_WorldMapMarkerManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_188 [32];
  int local_158;
  int local_154 [3];
  FName local_148;
  int local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  this_00 = UDS_WorldMapMarkerManager::GetInst();
  if (this_00 == (UDS_WorldMapMarkerManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_WorldMap::OnUpdateMyMarkerCountText",0x2a,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x38f,L"worldMapMarkerMgr nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    local_158 = DS_CommonDataHelper::MapMarkerMaxCount();
    local_154[0] = UDS_WorldMapMarkerManager::GetWorldMapMarkerInfoCount(this_00);
    FDS_Text::SetTextFormatFromStringTable<int,int>
              (&this->TextMyMarkerCount,StringUi,0x445d0,local_154,&local_158);
    local_140 = FFieldNotificationClassDescriptor::TextMyMarkerCount.BitNumber;
    local_148 = FFieldNotificationClassDescriptor::TextMyMarkerCount.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
  }
  return;
}

// OnWarpDeviceClick @ 14c03b950

void __thiscall
UDS_VM_WorldMap::OnWarpDeviceClick(UDS_VM_WorldMap *this,FDS_WarpDeviceIconData *param_1)

{
  FDS_WarpDeviceIconData local_38;
  
  local_38.StuffTableID = param_1->StuffTableID;
  local_38.WarpLoactionID = param_1->WarpLoactionID;
  local_38.StuffWarpDeviceID = param_1->StuffWarpDeviceID;
  local_38.SpawnPosition.field0_0x0._s_0.X = (param_1->SpawnPosition).field0_0x0._s_0.X;
  local_38.SpawnPosition.field0_0x0._s_0.Y = (param_1->SpawnPosition).field0_0x0._s_0.Y;
  local_38.SpawnPosition.field0_0x0._s_0.Z = (param_1->SpawnPosition).field0_0x0._s_0.Z;
  OpenWarpDevicePopup(this,&local_38);
  return;
}

// OnWarpDeviceCommonPopupConfirm @ 14c03b990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMap::OnWarpDeviceCommonPopupConfirm
          (UDS_VM_WorldMap *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1,
          FDS_WarpDeviceIconData *param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  UDS_WindowManager *this_00;
  undefined1 auStackY_188 [32];
  uint local_158;
  float local_154;
  FWeakObjectPtr local_150;
  ulong64 local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  UDS_PlayerData::GetMainPlayerData();
  bVar1 = FWeakObjectPtr::IsValid(&local_150);
  if (bVar1) {
    local_148[0] = FDS_EntityBase::GetMainPlayerEntityID(true);
    pUVar3 = FWeakObjectPtr::Get(&local_150);
    local_158 = *(uint *)&pUVar3[9].field_0x10;
    local_154 = *(float *)&param_2->StuffTableID;
    UDS_WarpRequestAbility::TryActivate_WarpDeviceWarp
              (local_148,(int *)&local_154,(int *)&local_158);
    this_00 = UDS_WindowManager::GetInst();
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_00 == (UDS_WindowManager *)0x0) {
        return;
      }
    }
    else {
      if (this_00 == (UDS_WindowManager *)0x0) {
        return;
      }
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    local_154 = 0.0;
    local_158 = 0;
    UDS_WindowManager::CloseWindow(this_00,PopupCommon,&local_158,&local_154);
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_WorldMap::OnWarpDeviceCommonPopupConfirm",0x2f,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x39d,L"playerData is invalid");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// OnZoneIDChanged @ 14c03bdf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_WorldMap::OnZoneIDChanged(UDS_VM_WorldMap *this,uint *param_1)

{
  int iVar1;
  UDS_WorldMapManager *this_00;
  UDS_LogManager *pUVar2;
  FDS_ZoneBaseTableRow *pFVar3;
  undefined1 auStackY_168 [32];
  uint uVar4;
  wchar_t *pwVar5;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this_00 = UDS_WorldMapManager::GetInst();
  if (this_00 == (UDS_WorldMapManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = (longlong)this_00;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_WorldMap::OnZoneIDChanged",0x20,Yes);
    pwVar5 = L"worldMapMgr is nullptr";
    uVar4 = 0x701;
  }
  else {
    pFVar3 = FDS_ZoneBaseTableRow::Get((ulonglong)*param_1,true);
    if (pFVar3 != (FDS_ZoneBaseTableRow *)0x0) {
      if (pFVar3->ID_MapIndoorGroup < 1) {
        this->CurCharIndoorGroupID = 0;
        iVar1 = UDS_WorldMapManager::GetIslandIDByZoneID(this_00,*param_1);
        IslandIDChanged(this,iVar1);
      }
      else {
        this->CurCharIslandID = 0;
        this->CurCharIndoorGroupID = pFVar3->ID_MapIndoorGroup;
        OnChangeIndoorGroupID(this,pFVar3->ID_MapIndoorGroup);
      }
      ContentFocusMapOffSet(this);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_WorldMap::OnZoneIDChanged",0x20,Yes);
    pwVar5 = L"FDS_ZoneBaseTableRow nullptr";
    uVar4 = 0x708;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar4,pwVar5);
  if ((UDS_WorldMapManager *)local_138._padding_ != (UDS_WorldMapManager *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// OpenWarpDeviceActivePopup @ 14c03c190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMap::OpenWarpDeviceActivePopup(UDS_VM_WorldMap *this,FDS_WarpDeviceIconData *param_1)

{
  long64 lVar1;
  long64 lVar2;
  long64 lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  UDS_CommonPopupManager *this_00;
  UDS_LogManager *pUVar8;
  FDS_StuffBaseTableRow *pFVar9;
  FDS_StuffWarpDeviceTableRow *pFVar10;
  FDS_MoneyBaseTableRow *pFVar11;
  UDS_M_CommonPopup *pUVar12;
  FDS_Text *pFVar13;
  UObject *pUVar14;
  undefined8 *puVar15;
  ulong64 uVar16;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar17;
  undefined1 auStackY_248 [32];
  uint uVar18;
  wchar_t *pwVar19;
  FWeakObjectPtr local_218 [2];
  code *local_208;
  undefined8 uStack_200;
  FWeakObjectPtr local_1f8;
  undefined1 local_1f0 [8];
  FDelegateAllocation local_1e8;
  UDS_VM_WorldMap *local_1d8;
  FDestructionSentinel local_1d0;
  FDelegateAllocation *local_1b8;
  FDS_Text local_1b0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_248;
  this_00 = UDS_CommonPopupManager::GetInst();
  if (this_00 == (UDS_CommonPopupManager *)0x0) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar8 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_VM_WorldMap::OpenWarpDeviceActivePopup",0x2a,Yes);
    pwVar19 = L"commonPopupMng is nullptr.";
    uVar18 = 0x533;
  }
  else {
    UDS_CommonPopupManager::CreateCommonPopup(this_00);
    bVar7 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)local_218,(void *)0x0);
    if (!bVar7) {
      pFVar9 = FDS_StuffBaseTableRow::Get(param_1->StuffTableID,true);
      if (pFVar9 == (FDS_StuffBaseTableRow *)0x0) {
        pUVar8 = UDS_LogManager::GetInst();
        if (pUVar8 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar8 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_VM_WorldMap::OpenWarpDeviceActivePopup",0x2a,Yes);
        pwVar19 = L"stuffBaseTableRow is nullptr.";
        uVar18 = 0x541;
      }
      else {
        pFVar10 = FDS_StuffWarpDeviceTableRow::Get(param_1->StuffWarpDeviceID,true);
        if (pFVar10 != (FDS_StuffWarpDeviceTableRow *)0x0) {
          pFVar11 = FDS_MoneyBaseTableRow::Get((ulonglong)pFVar10->MoneyType,true);
          if (pFVar11 == (FDS_MoneyBaseTableRow *)0x0) {
            pUVar8 = UDS_LogManager::GetInst();
            if (pUVar8 == (UDS_LogManager *)0x0) {
              return;
            }
            pUVar8 = UDS_LogManager::GetInst();
            local_158._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_158,"UDS_VM_WorldMap::OpenWarpDeviceActivePopup",0x2a,Yes);
            pwVar19 = L"moneyBaseTable is nullptr.";
            uVar18 = 0x54f;
          }
          else {
            UDS_MoneyData::GetData
                      ((ulong64)&local_1f8,UDS_PlayerData::MainPlayerEntityID,
                       (bool)pFVar10->MoneyType);
            bVar7 = TWeakObjectPtr<UDS_MoneyData,FWeakObjectPtr>::UEOpEquals
                              ((TWeakObjectPtr<UDS_MoneyData,FWeakObjectPtr> *)&local_1f8,
                               (void *)0x0);
            if (!bVar7) {
              pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_218);
              pFVar13 = FDS_Text::FromStringTable(&local_1b0,StringUi,0x1adc2);
              UDS_M_CommonPopup::SetTitle(pUVar12,pFVar13);
              pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_218);
              pFVar13 = FDS_Text::FromStringID(&local_1b0,&pFVar9->ID_Name);
              UDS_M_CommonPopup::SetMainContent(pUVar12,pFVar13);
              pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_218);
              pUVar14 = FWeakObjectPtr::Get(&local_1f8);
              UDS_M_CommonPopup::SetAsset
                        (pUVar12,Asset01,pFVar11->ID_MoneyIcon,pFVar10->ID_MoneyExchange,
                         *(int *)&pUVar14[2].field_0x10,false);
              pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_218);
              UDS_M_CommonPopup::SetButton(pUVar12,ButtonCancel,StringUi,0x1adbc,false);
              pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_218);
              uStack_200 = (ulonglong)uStack_200._4_4_ << 0x20;
              local_1f0 = (undefined1  [8])0x0;
              local_208 = OnWarpDeviceCommonPopupConfirm;
              local_1e8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
              local_1e8.DelegateSize = 0;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1f0,
                         (FWriteAccessScope *)&local_1d0);
              local_1b8 = &local_1e8;
              puVar15 = UE::Core::Private::DelegateAllocate(0x58,&local_1e8);
              if (puVar15 != (undefined8 *)0x0) {
                lVar1 = param_1->StuffTableID;
                lVar2 = param_1->WarpLoactionID;
                lVar3 = param_1->StuffWarpDeviceID;
                dVar4 = (param_1->SpawnPosition).field0_0x0._s_0.X;
                *puVar15 = &
                           ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__UFDS_WarpDeviceIconData____6B_
                ;
                puVar15[1] = lVar1;
                puVar15[2] = lVar2;
                dVar5 = (param_1->SpawnPosition).field0_0x0._s_0.Y;
                dVar6 = (param_1->SpawnPosition).field0_0x0._s_0.Z;
                puVar15[3] = lVar3;
                puVar15[4] = dVar4;
                puVar15[5] = dVar5;
                puVar15[6] = dVar6;
                uVar16 = FDelegateHandle::GenerateNewID();
                puVar15[7] = uVar16;
                *puVar15 = &
                           ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_WorldMap____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__UFDS_WarpDeviceIconData____6B_
                ;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (this != (UDS_VM_WorldMap *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)this);
                }
                puVar15[8] = 0;
                local_1d8 = this;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (this != (UDS_VM_WorldMap *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)this);
                }
                FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar15 + 8),(FObjectPtr)&local_1d8);
                puVar15[9] = local_208;
                puVar15[10] = uStack_200;
              }
              if (local_1d0.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d0.Accessor,&local_1d0);
              }
              UDS_M_CommonPopup::SetDelegate
                        (pUVar12,ButtonCancel,
                         (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                          *)local_1f0);
              pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_218);
              UDS_M_CommonPopup::SetButton(pUVar12,ButtonConfirm,StringUi,0x3112c,false);
              pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_218);
              uStack_200 = uStack_200 & 0xffffffff00000000;
              local_208 = OnCloseCommonPopup;
              pTVar17 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                        ::CreateUObject<UDS_VM_WorldMap>
                                  ((TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                                    *)local_1f0,this,(pmf_78ea8beb *)&local_208);
              UDS_M_CommonPopup::SetDelegate(pUVar12,ButtonConfirm,pTVar17);
              pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_218);
              UDS_M_CommonPopup::OpenCommonPopup(pUVar12);
              return;
            }
            pUVar8 = UDS_LogManager::GetInst();
            if (pUVar8 == (UDS_LogManager *)0x0) {
              return;
            }
            pUVar8 = UDS_LogManager::GetInst();
            local_158._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_158,"UDS_VM_WorldMap::OpenWarpDeviceActivePopup",0x2a,Yes);
            pwVar19 = L"copperMoneyData is nullptr.";
            uVar18 = 0x556;
          }
          UDS_LogManager::PrintLog(pUVar8,1,Warning,local_158.Ptr,uVar18,pwVar19);
          if ((void *)local_158._padding_ == (void *)0x0) {
            return;
          }
          FMemory::Free((void *)local_158._padding_);
          return;
        }
        pUVar8 = UDS_LogManager::GetInst();
        if (pUVar8 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar8 = UDS_LogManager::GetInst();
        local_158._padding_ = (longlong)pFVar10;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_VM_WorldMap::OpenWarpDeviceActivePopup",0x2a,Yes);
        pwVar19 = L"stuffWarpDeviceTableRow is nullptr.";
        uVar18 = 0x548;
      }
      UDS_LogManager::PrintLog(pUVar8,1,Warning,local_158.Ptr,uVar18,pwVar19);
      if ((FDS_StuffWarpDeviceTableRow *)local_158._padding_ == (FDS_StuffWarpDeviceTableRow *)0x0)
      {
        return;
      }
      FMemory::Free((void *)local_158._padding_);
      return;
    }
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar8 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_VM_WorldMap::OpenWarpDeviceActivePopup",0x2a,Yes);
    pwVar19 = L"commonPopupModel is nullptr.";
    uVar18 = 0x53a;
  }
  UDS_LogManager::PrintLog(pUVar8,1,Warning,local_158.Ptr,uVar18,pwVar19);
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  return;
}

// OpenWarpDeviceCanNotUsePopup @ 14c03c740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMap::OpenWarpDeviceCanNotUsePopup(UDS_VM_WorldMap *this,FDS_WarpDeviceIconData *param_1)

{
  bool bVar1;
  UDS_CommonPopupManager *this_00;
  UDS_LogManager *pUVar2;
  FDS_StuffBaseTableRow *pFVar3;
  UDS_M_CommonPopup *pUVar4;
  FDS_Text *pFVar5;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar6;
  undefined1 auStackY_208 [32];
  uint uVar7;
  wchar_t *pwVar8;
  FWeakObjectPtr local_1d8;
  FDS_Text local_1d0;
  code *local_178;
  undefined8 uStack_170;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_208;
  this_00 = UDS_CommonPopupManager::GetInst();
  if (this_00 == (UDS_CommonPopupManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_WorldMap::OpenWarpDeviceCanNotUsePopup",0x2d,Yes);
    pwVar8 = L"commonPopupMng is nullptr.";
    uVar7 = 0x58a;
  }
  else {
    UDS_CommonPopupManager::CreateCommonPopup(this_00);
    bVar1 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)&local_1d8,(void *)0x0);
    if (!bVar1) {
      pFVar3 = FDS_StuffBaseTableRow::Get(param_1->StuffTableID,true);
      if (pFVar3 != (FDS_StuffBaseTableRow *)0x0) {
        pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1d8);
        local_1d0.StringTableType = None;
        local_1d0.StringTableID = 0;
        local_1d0.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_1d0.StringEnumTableNameID.Number = 0;
        local_1d0.TimeExpressionType = None;
        local_1d0.IsExpression = false;
        local_1d0.DateTime.Ticks = 0;
        local_1d0.TimeSpan.Ticks = 0;
        local_1d0.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1d0.UniqueString.Data.ArrayNum = 0;
        local_1d0.UniqueString.Data.ArrayMax = 0;
        local_1d0.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1d0.FormatArgs.ArrayNum = 0;
        local_1d0.FormatArgs.ArrayMax = 0;
        FDS_Text::SetTextFromStringTable(&local_1d0,StringUi,0x1adc3);
        UDS_M_CommonPopup::SetTitle(pUVar4,&local_1d0);
        pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1d8);
        pFVar5 = FDS_Text::FromStringID(&local_1d0,&pFVar3->ID_Name);
        UDS_M_CommonPopup::SetMainContent(pUVar4,pFVar5);
        pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1d8);
        local_1d0.StringTableType = None;
        local_1d0.StringTableID = 0;
        local_1d0.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_1d0.StringEnumTableNameID.Number = 0;
        local_1d0.TimeExpressionType = None;
        local_1d0.DateTime.Ticks = 0;
        local_1d0.TimeSpan.Ticks = 0;
        local_1d0.IsExpression = false;
        local_1d0.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1d0.UniqueString.Data.ArrayNum = 0;
        local_1d0.UniqueString.Data.ArrayMax = 0;
        local_1d0.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1d0.FormatArgs.ArrayNum = 0;
        local_1d0.FormatArgs.ArrayMax = 0;
        FDS_Text::SetTextFromStringTable(&local_1d0,StringUi,0x1adbe);
        UDS_M_CommonPopup::SetSubContent01(pUVar4,&local_1d0);
        pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1d8);
        UDS_M_CommonPopup::SetButton(pUVar4,ButtonCancel,StringUi,0x3112c,false);
        pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1d8);
        uStack_170 = (ulonglong)uStack_170._4_4_ << 0x20;
        local_178 = OnCloseCommonPopup;
        pTVar6 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UDS_VM_WorldMap>(&local_168,this,(pmf_78ea8beb *)&local_178);
        UDS_M_CommonPopup::SetDelegate(pUVar4,ButtonCancel,pTVar6);
        pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1d8);
        UDS_M_CommonPopup::OpenCommonPopup(pUVar4);
        return;
      }
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_WorldMap::OpenWarpDeviceCanNotUsePopup",0x2d,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_148.Ptr,0x598,L"stuffBaseTableRow is nullptr.");
      if ((void *)local_148._padding_ == (void *)0x0) {
        return;
      }
      FMemory::Free((void *)local_148._padding_);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_WorldMap::OpenWarpDeviceCanNotUsePopup",0x2d,Yes);
    pwVar8 = L"commonPopupModel is nullptr.";
    uVar7 = 0x591;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,uVar7,pwVar8);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return;
}

// OpenWarpDeviceDeActivePopup @ 14c03caa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMap::OpenWarpDeviceDeActivePopup(UDS_VM_WorldMap *this,FDS_WarpDeviceIconData *param_1)

{
  bool bVar1;
  UDS_CommonPopupManager *this_00;
  UDS_LogManager *pUVar2;
  FDS_StuffBaseTableRow *pFVar3;
  UDS_M_CommonPopup *pUVar4;
  FDS_Text *pFVar5;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar6;
  undefined1 auStackY_208 [32];
  uint uVar7;
  wchar_t *pwVar8;
  FWeakObjectPtr local_1d8;
  FDS_Text local_1d0;
  code *local_178;
  undefined8 uStack_170;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_208;
  this_00 = UDS_CommonPopupManager::GetInst();
  if (this_00 == (UDS_CommonPopupManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_WorldMap::OpenWarpDeviceDeActivePopup",0x2c,Yes);
    pwVar8 = L"commonPopupMng is nullptr.";
    uVar7 = 0x56a;
  }
  else {
    UDS_CommonPopupManager::CreateCommonPopup(this_00);
    bVar1 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)&local_1d8,(void *)0x0);
    if (!bVar1) {
      pFVar3 = FDS_StuffBaseTableRow::Get(param_1->StuffTableID,true);
      if (pFVar3 != (FDS_StuffBaseTableRow *)0x0) {
        pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1d8);
        local_1d0.StringTableType = None;
        local_1d0.StringTableID = 0;
        local_1d0.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_1d0.StringEnumTableNameID.Number = 0;
        local_1d0.TimeExpressionType = None;
        local_1d0.IsExpression = false;
        local_1d0.DateTime.Ticks = 0;
        local_1d0.TimeSpan.Ticks = 0;
        local_1d0.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1d0.UniqueString.Data.ArrayNum = 0;
        local_1d0.UniqueString.Data.ArrayMax = 0;
        local_1d0.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1d0.FormatArgs.ArrayNum = 0;
        local_1d0.FormatArgs.ArrayMax = 0;
        FDS_Text::SetTextFromStringTable(&local_1d0,StringUi,0x1adc3);
        UDS_M_CommonPopup::SetTitle(pUVar4,&local_1d0);
        pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1d8);
        pFVar5 = FDS_Text::FromStringID(&local_1d0,&pFVar3->ID_Name);
        UDS_M_CommonPopup::SetMainContent(pUVar4,pFVar5);
        pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1d8);
        local_1d0.StringTableType = None;
        local_1d0.StringTableID = 0;
        local_1d0.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_1d0.StringEnumTableNameID.Number = 0;
        local_1d0.TimeExpressionType = None;
        local_1d0.DateTime.Ticks = 0;
        local_1d0.TimeSpan.Ticks = 0;
        local_1d0.IsExpression = false;
        local_1d0.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1d0.UniqueString.Data.ArrayNum = 0;
        local_1d0.UniqueString.Data.ArrayMax = 0;
        local_1d0.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1d0.FormatArgs.ArrayNum = 0;
        local_1d0.FormatArgs.ArrayMax = 0;
        FDS_Text::SetTextFromStringTable(&local_1d0,StringUi,0x1adbd);
        UDS_M_CommonPopup::SetSubContent01(pUVar4,&local_1d0);
        pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1d8);
        UDS_M_CommonPopup::SetButton(pUVar4,ButtonCancel,StringUi,0x3112c,false);
        pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1d8);
        uStack_170 = (ulonglong)uStack_170._4_4_ << 0x20;
        local_178 = OnCloseCommonPopup;
        pTVar6 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UDS_VM_WorldMap>(&local_168,this,(pmf_78ea8beb *)&local_178);
        UDS_M_CommonPopup::SetDelegate(pUVar4,ButtonCancel,pTVar6);
        pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1d8);
        UDS_M_CommonPopup::OpenCommonPopup(pUVar4);
        return;
      }
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_WorldMap::OpenWarpDeviceDeActivePopup",0x2c,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_148.Ptr,0x578,L"stuffBaseTableRow is nullptr.");
      if ((void *)local_148._padding_ == (void *)0x0) {
        return;
      }
      FMemory::Free((void *)local_148._padding_);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_WorldMap::OpenWarpDeviceDeActivePopup",0x2c,Yes);
    pwVar8 = L"commonPopupModel is nullptr.";
    uVar7 = 0x571;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,uVar7,pwVar8);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return;
}

// OpenWarpDevicePopup @ 14c03ce00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMap::OpenWarpDevicePopup(UDS_VM_WorldMap *this,FDS_WarpDeviceIconData *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_ActivateWarpDeviceData *this_00;
  FDS_StuffWarpDeviceTableRow *pFVar3;
  FDS_ZoneBaseTableRow *pFVar4;
  undefined1 auStackY_1a8 [32];
  uint uVar5;
  wchar_t *pwVar6;
  FDS_WarpDeviceIconData local_178;
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  UDS_ActivateWarpDeviceData::GetData((ulong64)local_148,UDS_PlayerData::MainPlayerEntityID,false);
  bVar1 = TWeakObjectPtr<UDS_ActivateWarpDeviceData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_ActivateWarpDeviceData,FWeakObjectPtr> *)local_148,
                     (void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_WorldMap::OpenWarpDevicePopup",0x24,Yes);
    pwVar6 = L"warpDeviceIconCommonDataTableRow nullptr";
    uVar5 = 0x5aa;
LAB_14c03cea7:
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar5,pwVar6);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  else {
    this_00 = (UDS_ActivateWarpDeviceData *)FWeakObjectPtr::Get(local_148);
    bVar1 = UDS_ActivateWarpDeviceData::IsActivateWarpDevice(this_00,(int)param_1->StuffTableID);
    if (!bVar1) {
      local_178.StuffTableID = param_1->StuffTableID;
      local_178.WarpLoactionID = param_1->WarpLoactionID;
      local_178.StuffWarpDeviceID = param_1->StuffWarpDeviceID;
      local_178.SpawnPosition.field0_0x0._s_0.X = (param_1->SpawnPosition).field0_0x0._s_0.X;
      local_178.SpawnPosition.field0_0x0._s_0.Y = (param_1->SpawnPosition).field0_0x0._s_0.Y;
      local_178.SpawnPosition.field0_0x0._s_0.Z = (param_1->SpawnPosition).field0_0x0._s_0.Z;
      OpenWarpDeviceDeActivePopup(this,&local_178);
      return;
    }
    pFVar3 = FDS_StuffWarpDeviceTableRow::Get(param_1->StuffWarpDeviceID,bVar1);
    if (pFVar3 == (FDS_StuffWarpDeviceTableRow *)0x0) {
      return;
    }
    if (this->IsIndoor == true) {
      pFVar4 = FDS_ZoneBaseTableRow::Get((longlong)pFVar3->ID_Zone,true);
      if (pFVar4 == (FDS_ZoneBaseTableRow *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar2 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_WorldMap::OpenWarpDevicePopup",0x24,Yes);
        pwVar6 = L"zoneBaseTableRow nullptr ";
        uVar5 = 0x5bd;
        goto LAB_14c03cea7;
      }
      local_178.StuffTableID = param_1->StuffTableID;
      local_178.WarpLoactionID = param_1->WarpLoactionID;
      local_178.StuffWarpDeviceID = param_1->StuffWarpDeviceID;
      local_178.SpawnPosition.field0_0x0._s_0.X = (param_1->SpawnPosition).field0_0x0._s_0.X;
      local_178.SpawnPosition.field0_0x0._s_0.Y = (param_1->SpawnPosition).field0_0x0._s_0.Y;
      local_178.SpawnPosition.field0_0x0._s_0.Z = (param_1->SpawnPosition).field0_0x0._s_0.Z;
      if (pFVar4->ID_MapIndoorGroup == this->CurCharIndoorGroupID) {
        OpenWarpDeviceActivePopup(this,&local_178);
        return;
      }
    }
    else {
      local_178.StuffTableID = param_1->StuffTableID;
      local_178.WarpLoactionID = param_1->WarpLoactionID;
      local_178.StuffWarpDeviceID = param_1->StuffWarpDeviceID;
      local_178.SpawnPosition.field0_0x0._s_0.X = (param_1->SpawnPosition).field0_0x0._s_0.X;
      local_178.SpawnPosition.field0_0x0._s_0.Y = (param_1->SpawnPosition).field0_0x0._s_0.Y;
      local_178.SpawnPosition.field0_0x0._s_0.Z = (param_1->SpawnPosition).field0_0x0._s_0.Z;
      if (pFVar3->ID_ZoneIsland == this->CurCharIslandID) {
        OpenWarpDeviceActivePopup(this,&local_178);
        return;
      }
    }
    OpenWarpDeviceCanNotUsePopup(this,&local_178);
  }
  return;
}

// OpenWorldMapByContent @ 14c03d040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_WorldMap::OpenWorldMapByContent(UDS_VM_WorldMap *this)

{
  UDS_ZoneManager *pUVar1;
  UDS_LogManager *pUVar2;
  UDS_WorldMapManager *pUVar3;
  UDS_WorldMapMarkerManager *pUVar4;
  int iVar5;
  undefined1 auStackY_178 [32];
  uint uVar6;
  wchar_t *pwVar7;
  uint local_148 [4];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pUVar1 = UDS_ZoneManager::GetInst();
  if (pUVar1 != (UDS_ZoneManager *)0x0) {
    pUVar3 = UDS_WorldMapManager::GetInst();
    if (pUVar3 == (UDS_WorldMapManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = (longlong)pUVar3;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_WorldMap::OpenWorldMapByContent",0x26,Yes);
      pwVar7 = L"worldMapManager nullptr";
      uVar6 = 0x5e8;
    }
    else {
      pUVar4 = UDS_WorldMapMarkerManager::GetInst();
      if (pUVar4 != (UDS_WorldMapMarkerManager *)0x0) {
        if (pUVar3->WorldBossIslandID < 1) {
          if ((UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X ==
               (pUVar4->SharedMarkInfo).MarkerGlobalPos.field0_0x0._s_0.X) &&
             (UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y ==
              (pUVar4->SharedMarkInfo).MarkerGlobalPos.field0_0x0._s_0.Y)) {
            local_148[0] = pUVar1->ZoneID;
            OnZoneIDChanged(this,local_148);
            return;
          }
          if ((pUVar4->SharedMarkInfo).IslandID < 1) {
            this->CurCharIslandID = 0;
            this->CurCharIndoorGroupID = pUVar1->ZoneID;
            OnChangeIndoorGroupID(this,(pUVar4->SharedMarkInfo).IndoorGroupID);
            return;
          }
          this->CurCharIndoorGroupID = 0;
          iVar5 = (pUVar4->SharedMarkInfo).IslandID;
        }
        else {
          this->CurCharIndoorGroupID = 0;
          iVar5 = pUVar3->WorldBossIslandID;
        }
        IslandIDChanged(this,iVar5);
        return;
      }
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_WorldMap::OpenWorldMapByContent",0x26,Yes);
      pwVar7 = L"worldMapMarkerManager nullptr";
      uVar6 = 0x5ef;
    }
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar6,pwVar7);
    if ((UDS_WorldMapManager *)local_138._padding_ != (UDS_WorldMapManager *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    return;
  }
  pUVar2 = UDS_LogManager::GetInst();
  if (pUVar2 == (UDS_LogManager *)0x0) {
    return;
  }
  pUVar2 = UDS_LogManager::GetInst();
  local_138._padding_ = (longlong)pUVar1;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_138,"UDS_VM_WorldMap::OpenWorldMapByContent",0x26,Yes);
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x5e1,L"zoneManager nullptr");
  if ((UDS_ZoneManager *)local_138._padding_ == (UDS_ZoneManager *)0x0) {
    return;
  }
  FMemory::Free((void *)local_138._padding_);
  return;
}

// ResizePanel @ 14c03fdb0

void __thiscall UDS_VM_WorldMap::ResizePanel(UDS_VM_WorldMap *this,TVector2<double> *param_1)

{
  double dVar1;
  double dVar2;
  float fVar3;
  
  if (((param_1->field0_0x0)._s_0.X != (this->WorldMapPanelSize).field0_0x0._s_0.X) ||
     ((param_1->field0_0x0)._s_0.Y != (this->WorldMapPanelSize).field0_0x0._s_0.Y)) {
    dVar1 = (param_1->field0_0x0)._s_0.X;
    dVar2 = (param_1->field0_0x0)._s_0.Y;
    fVar3 = this->TextureSize;
    (this->WorldMapPanelSize).field0_0x0._s_0.X = dVar1;
    (this->WorldMapPanelSize).field0_0x0._s_0.Y = dVar2;
    fVar3 = (float)((double)fVar3 * (this->MaxCell).field0_0x0._s_0.X);
    if (fVar3 < (float)(dVar1 / (this->MapScale2D).field0_0x0._s_0.X)) {
      UpdateScaleData(this,(float)(dVar1 / (double)fVar3));
      this->WorldMapZoomStep = LEVEL1;
    }
  }
  return;
}

// SetIslandZoneIDMapObject @ 14c041be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_WorldMap::SetIslandZoneIDMapObject(UDS_VM_WorldMap *this)

{
  size_t sVar1;
  UClass *pUVar2;
  UWN_Island_ZoneIDMap *pUVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_1a8 [32];
  TStringView<wchar_t> local_168;
  TStringView<wchar_t> local_158;
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  ::FString::PrintfImpl
            (&local_148,
             L"/Script/WN_WorldUtils.WN_Island_ZoneIDMap\'/Game/Generated/WorldInfo/Island_%d.Island_%d\'"
            );
  local_168.Size = 0;
  local_168._12_4_ = 0;
  local_168.DataPtr = (wchar_t *)0x0;
  local_158.Size = 0;
  if (local_148.Data.ArrayNum == 0) {
    local_158.DataPtr = L"";
  }
  else {
    local_158.DataPtr = (wchar_t *)local_148.Data.AllocatorInstance.Data;
    if (local_148.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14c041c53;
  }
  sVar1 = wcslen(local_158.DataPtr);
  local_158.Size = (int)sVar1;
LAB_14c041c53:
  pUVar2 = Z_Construct_UClass_UWN_Island_ZoneIDMap_NoRegister();
  pUVar3 = (UWN_Island_ZoneIDMap *)
           StaticLoadObject(pUVar2,(UObject *)0x0,&local_158,&local_168,0,(UPackageMap *)0x0,true,
                            (FLinkerInstancingContext *)0x0);
  this->WorldIslandZoneIDMap = pUVar3;
  if ((pUVar3 == (UWN_Island_ZoneIDMap *)0x0) &&
     (pUVar4 = UDS_LogManager::GetInst(), pUVar4 != (UDS_LogManager *)0x0)) {
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_WorldMap::SetIslandZoneIDMapObject",0x29,Yes);
    UDS_LogManager::PrintLog
              (pUVar4,1,Warning,local_138.Ptr,0x4e2,L"WorldIslandZoneIDMap is nullptr.");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  return;
}

// SetMapScale @ 14c042760

void __thiscall UDS_VM_WorldMap::SetMapScale(UDS_VM_WorldMap *this,float param_1)

{
  TVector2<double>_u_0 TVar1;
  double dVar2;
  longlong *plVar3;
  double dVar4;
  FName local_28;
  int local_20;
  
  local_20 = FFieldNotificationClassDescriptor::MapScale2D.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::MapScale2D.FieldName;
  dVar2 = (double)param_1;
  if ((dVar2 != (this->MapScale2D).field0_0x0._s_0.X) ||
     (dVar2 != (this->MapScale2D).field0_0x0._s_0.Y)) {
    TVar1._8_4_ = SUB84(dVar2,0);
    TVar1._s_0.X = dVar2;
    TVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    (this->MapScale2D).field0_0x0 = TVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  local_20 = FFieldNotificationClassDescriptor::MapScaleFloat.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::MapScaleFloat.FieldName;
  plVar3 = &this->_padding_;
  if (param_1 != this->MapScaleFloat) {
    this->MapScaleFloat = param_1;
    (**(code **)(*plVar3 + 0x38))(plVar3,&local_28);
  }
  local_20 = FFieldNotificationClassDescriptor::MapLocation.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::MapLocation.FieldName;
  dVar2 = (this->MapScale2D).field0_0x0._s_0.X;
  dVar4 = dVar2 * (this->MapPositionOffset).field0_0x0._s_0.X;
  dVar2 = dVar2 * (this->MapPositionOffset).field0_0x0._s_0.Y;
  if ((dVar4 != (this->MapLocation).field0_0x0._s_0.X) ||
     (dVar2 != (this->MapLocation).field0_0x0._s_0.Y)) {
    (this->MapLocation).field0_0x0._s_0.X = dVar4;
    (this->MapLocation).field0_0x0._s_0.Y = dVar2;
    (**(code **)(*plVar3 + 0x38))(plVar3,&local_28);
  }
  return;
}

// SetTableData @ 14c043b30

void __thiscall UDS_VM_WorldMap::SetTableData(UDS_VM_WorldMap *this)

{
  int iVar1;
  float fVar2;
  TArray<float,TSizedDefaultAllocator<32>_> local_18;
  
  DS_CommonDataHelper::WorldmapDefaultScale(&local_18);
  if (1 < local_18.ArrayNum) {
    this->DefaultScaleMinSize = *(float *)local_18.AllocatorInstance.Data;
    this->ScaleMaxValue = *(float *)(local_18.AllocatorInstance.Data + 4);
  }
  iVar1 = DS_CommonDataHelper::WorldmapDefaultCellY();
  this->BaseCellValueY = iVar1;
  fVar2 = DS_CommonDataHelper::WorldmapPadCursorSpeed();
  this->UserScale = this->ScaleMaxValue;
  this->TargetScale = this->ScaleMaxValue;
  this->DefaultPadSpeed = fVar2;
  iVar1 = DS_CommonDataHelper::WorldmapZoomStep();
  this->DefaultWorldMapWheelCount = iVar1;
  iVar1 = DS_CommonDataHelper::WorldmapZoomWheelThreshold();
  this->WorldMapZoomStepID = iVar1;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// SetVMContext @ 14c045370

void __thiscall UDS_VM_WorldMap::SetVMContext(UDS_VM_WorldMap *this)

{
  UDS_VM_MapTexture *this_00;
  UDS_VM_MapSpawn *this_01;
  UDS_VM_WorldMap_MapIndexFilter *this_02;
  UDS_VM_WorldMap_IndoorFloorInfoList *this_03;
  UDS_VM_InputKey *pUVar1;
  UDS_VM_EnvironmentInfo *this_04;
  UDS_VM_WorldMapMarkerList *this_05;
  UDS_VM_WorldMapZoneList *this_06;
  FSharedReferencer<1> FVar2;
  TSharedPtr<FDS_ViewModelContext_InputKey,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_MinimapTexture).field0_0x0.DebugPtr != (UDS_VM_MapTexture *)0x0) {
    MakeContext<FDS_ViewModelContext_MapTypeInfo>
              ((TSharedPtr<FDS_ViewModelContext_MapTypeInfo,1> *)&local_28);
    FVar2.ReferenceController = local_28.SharedReferenceCount.ReferenceController;
    if (local_28.Object != (FDS_ViewModelContext_InputKey *)0x0) {
      *(undefined4 *)&(local_28.Object)->_padding_ = 0x19e;
      (local_28.Object)->KeyActionType = this->MapType;
      this_00 = (this->VM_MinimapTexture).field0_0x0.DebugPtr;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext
                ((UDS_ViewModelBase *)this_00,(TSharedPtr<FDS_ViewModelContext,1> *)&local_28);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar2.ReferenceController);
  }
  if ((this->VM_MinimapSpawnUnScaled).field0_0x0.DebugPtr != (UDS_VM_MapSpawn *)0x0) {
    MakeContext<FDS_ViewModelContext_MapTypeInfo>
              ((TSharedPtr<FDS_ViewModelContext_MapTypeInfo,1> *)&local_28);
    FVar2.ReferenceController = local_28.SharedReferenceCount.ReferenceController;
    if (local_28.Object != (FDS_ViewModelContext_InputKey *)0x0) {
      *(undefined4 *)&(local_28.Object)->_padding_ = 0x19f;
      (local_28.Object)->KeyActionType = this->MapType;
      this_01 = (this->VM_MinimapSpawnUnScaled).field0_0x0.DebugPtr;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext
                ((UDS_ViewModelBase *)this_01,(TSharedPtr<FDS_ViewModelContext,1> *)&local_28);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar2.ReferenceController);
  }
  if ((this->VM_WorldMap_MapIndexFilter).field0_0x0.DebugPtr !=
      (UDS_VM_WorldMap_MapIndexFilter *)0x0) {
    MakeContext<FDS_ViewModelContext>((TSharedPtr<FDS_ViewModelContext,1> *)&local_28);
    if (local_28.Object != (FDS_ViewModelContext_InputKey *)0x0) {
      *(undefined4 *)&(local_28.Object)->_padding_ = 0x1b8;
      this_02 = (this->VM_WorldMap_MapIndexFilter).field0_0x0.DebugPtr;
      local_18.Object = (FDS_ViewModelContext *)local_28.Object;
      local_18.SharedReferenceCount.ReferenceController =
           local_28.SharedReferenceCount.ReferenceController;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_02,&local_18);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_WorldMap_IndoorFloorInfoList).field0_0x0.DebugPtr !=
      (UDS_VM_WorldMap_IndoorFloorInfoList *)0x0) {
    MakeContext<FDS_ViewModelContext>((TSharedPtr<FDS_ViewModelContext,1> *)&local_28);
    if (local_28.Object != (FDS_ViewModelContext_InputKey *)0x0) {
      *(undefined4 *)&(local_28.Object)->_padding_ = 0x1af;
      this_03 = (this->VM_WorldMap_IndoorFloorInfoList).field0_0x0.DebugPtr;
      local_18.Object = (FDS_ViewModelContext *)local_28.Object;
      local_18.SharedReferenceCount.ReferenceController =
           local_28.SharedReferenceCount.ReferenceController;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_03,&local_18);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_InputKey_IA_UI_SelectUp).field0_0x0.DebugPtr != (UDS_VM_InputKey *)0x0) {
    MakeContext<FDS_ViewModelContext_InputKey>(&local_28);
    FVar2.ReferenceController = local_28.SharedReferenceCount.ReferenceController;
    if (local_28.Object != (FDS_ViewModelContext_InputKey *)0x0) {
      *(undefined4 *)&(local_28.Object)->_padding_ = 0x15d;
      (local_28.Object)->KeyActionType = IA_UI_SelectUp;
      pUVar1 = (this->VM_InputKey_IA_UI_SelectUp).field0_0x0.DebugPtr;
      local_18.Object = (FDS_ViewModelContext *)local_28.Object;
      local_18.SharedReferenceCount.ReferenceController =
           local_28.SharedReferenceCount.ReferenceController;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar1,&local_18);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar2.ReferenceController);
  }
  if ((this->VM_InputKey_IA_UI_SelectDown).field0_0x0.DebugPtr != (UDS_VM_InputKey *)0x0) {
    MakeContext<FDS_ViewModelContext_InputKey>(&local_28);
    FVar2.ReferenceController = local_28.SharedReferenceCount.ReferenceController;
    if (local_28.Object != (FDS_ViewModelContext_InputKey *)0x0) {
      *(undefined4 *)&(local_28.Object)->_padding_ = 0x15d;
      (local_28.Object)->KeyActionType = IA_UI_SelectDown;
      pUVar1 = (this->VM_InputKey_IA_UI_SelectDown).field0_0x0.DebugPtr;
      local_18.Object = (FDS_ViewModelContext *)local_28.Object;
      local_18.SharedReferenceCount.ReferenceController =
           local_28.SharedReferenceCount.ReferenceController;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar1,&local_18);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar2.ReferenceController);
  }
  if ((this->VM_EnviromentInfo).field0_0x0.DebugPtr != (UDS_VM_EnvironmentInfo *)0x0) {
    MakeContext<FDS_ViewModelContext>((TSharedPtr<FDS_ViewModelContext,1> *)&local_28);
    if (local_28.Object != (FDS_ViewModelContext_InputKey *)0x0) {
      *(undefined4 *)&(local_28.Object)->_padding_ = 0x1a0;
      this_04 = (this->VM_EnviromentInfo).field0_0x0.DebugPtr;
      local_18.Object = (FDS_ViewModelContext *)local_28.Object;
      local_18.SharedReferenceCount.ReferenceController =
           local_28.SharedReferenceCount.ReferenceController;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_04,&local_18);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_WorldMapMarkerList).field0_0x0.DebugPtr != (UDS_VM_WorldMapMarkerList *)0x0) {
    MakeContext<FDS_ViewModelContext>((TSharedPtr<FDS_ViewModelContext,1> *)&local_28);
    if (local_28.Object != (FDS_ViewModelContext_InputKey *)0x0) {
      *(undefined4 *)&(local_28.Object)->_padding_ = 0x1b3;
      this_05 = (this->VM_WorldMapMarkerList).field0_0x0.DebugPtr;
      local_18.Object = (FDS_ViewModelContext *)local_28.Object;
      local_18.SharedReferenceCount.ReferenceController =
           local_28.SharedReferenceCount.ReferenceController;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_05,&local_18);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_WorldMapZoneList).field0_0x0.DebugPtr != (UDS_VM_WorldMapZoneList *)0x0) {
    MakeContext<FDS_ViewModelContext>((TSharedPtr<FDS_ViewModelContext,1> *)&local_28);
    if (local_28.Object != (FDS_ViewModelContext_InputKey *)0x0) {
      *(undefined4 *)&(local_28.Object)->_padding_ = 0x1b5;
      this_06 = (this->VM_WorldMapZoneList).field0_0x0.DebugPtr;
      local_18.Object = (FDS_ViewModelContext *)local_28.Object;
      local_18.SharedReferenceCount.ReferenceController =
           local_28.SharedReferenceCount.ReferenceController;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_06,&local_18);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// SkyMapSeletedEvent @ 14c047ab0

void __thiscall UDS_VM_WorldMap::SkyMapSeletedEvent(UDS_VM_WorldMap *this)

{
  FName local_18;
  int local_10;
  
  if ((this->IsSkyMap != true) && (this->SkyIndoorGroupID != 0)) {
    OnChangeIndoorGroupID(this,this->SkyIndoorGroupID);
    this->IsSkyMap = true;
    local_10 = FFieldNotificationClassDescriptor::IsSkyMap.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::IsSkyMap.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14c049190

void __thiscall UDS_VM_WorldMap::UnbindModel(UDS_VM_WorldMap *this)

{
  UDS_EnvironmentEvent *pUVar1;
  UDS_WorldMapEvent *pUVar2;
  UDS_ZoneManager *pUVar3;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_EnvironmentEvent::GetEvent();
  if (pUVar1 != (UDS_EnvironmentEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnUpdateGameTime,this)
    ;
  }
  pUVar2 = UDS_WorldMapEvent::GetEvent();
  if (pUVar2 != (UDS_WorldMapEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->MarkerCountDelegate,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->MarkerHoverDelegate,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->IsladnChangeFromWorldMapViewDelegate,this);
    FDS_FilteredEventDelegate<int_const_,int_const_>::Remove<UDS_VM_WorldMap>
              (&pUVar2->IndoorChangeDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->WarpDeviceClickDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->ChangeIndoorGroupID,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->MapFocuseDelgate,this)
    ;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->MarkerInfoBasedFocusDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->IconClickMapFocusDelegate,this);
  }
  pUVar3 = UDS_ZoneManager::GetInst();
  if (pUVar3 != (UDS_ZoneManager *)0x0) {
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &pUVar3->IslandIdChangeDelegate,(UObject *)this);
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &ADS_PlayerController::ChangeInputDelegate,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,this);
  return;
}

// UpdateIndoorFloorUI @ 14c04ae90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_WorldMap::UpdateIndoorFloorUI(UDS_VM_WorldMap *this,int param_1)

{
  ESlateVisibility EVar1;
  FDS_MapIndoorGroupTableRow *pFVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_178 [32];
  FName local_148;
  int local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = FDS_MapIndoorGroupTableRow::Get((longlong)param_1,true);
  local_148 = FFieldNotificationClassDescriptor::RightMiddleUIVisibility.FieldName;
  if (pFVar2 == (FDS_MapIndoorGroupTableRow *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_WorldMap::UpdateIndoorFloorUI",0x24,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x428,L"mapIndoorGroupTableRow nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    EVar1 = SelfHitTestInvisible;
    if (pFVar2->ID_MapIndoorFloor < 1) {
      EVar1 = Collapsed;
    }
    if (this->RightMiddleUIVisibility != EVar1) {
      local_140 = FFieldNotificationClassDescriptor::RightMiddleUIVisibility.BitNumber;
      this->RightMiddleUIVisibility = EVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
    }
  }
  return;
}

// UpdateLerpFocusPosition @ 14c04c680

void __thiscall UDS_VM_WorldMap::UpdateLerpFocusPosition(UDS_VM_WorldMap *this,float param_1)

{
  float fVar1;
  int iVar2;
  TVector<double> *pTVar3;
  UDS_WorldMapEvent *pUVar4;
  double dVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  double dVar9;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_68;
  TVector<double> local_48 [2];
  
  fVar1 = __real_40e00000;
  if (this->IsFocusLerpStart != false) {
    dVar5 = (this->TargetMapPositionOffset).field0_0x0._s_0.Y -
            (this->MapPositionOffset).field0_0x0._s_0.Y;
    dVar9 = (this->TargetMapPositionOffset).field0_0x0._s_0.X -
            (this->MapPositionOffset).field0_0x0._s_0.X;
    auVar6._0_8_ = dVar5 * dVar5 + dVar9 * dVar9;
    auVar6._8_8_ = 0;
    auVar6 = sqrtpd(auVar6,auVar6);
    if ((float)auVar6._0_8_ < __real_42480000) {
      fVar1 = this->ScaleMaxValue;
      this->UserScale = fVar1;
      this->TargetScale = fVar1;
      this->IsFocusLerpStart = false;
      SetMapScale(this,fVar1);
      UpdateZoomStep(this);
      local_88._s_0.X =
           (this->ReferencePosition).field0_0x0._s_0.X - (this->MapPositionOffset).field0_0x0._s_0.X
      ;
      local_88._s_0.Y =
           (this->ReferencePosition).field0_0x0._s_0.Y - (this->MapPositionOffset).field0_0x0._s_0.Y
      ;
      UpdateRegionText(this,(TVector2<double> *)&local_88._s_0);
      return;
    }
    local_68._s_0.X = (this->TargetMapPositionOffset).field0_0x0._s_0.X;
    local_68._s_0.Y = (this->TargetMapPositionOffset).field0_0x0._s_0.Y;
    local_88._s_0.X = (this->MapPositionOffset).field0_0x0._s_0.X;
    local_88._s_0.Y = (this->MapPositionOffset).field0_0x0._s_0.Y;
    local_68._s_0.Z = 0.0;
    local_88._s_0.Z = 0.0;
    pTVar3 = FMath::VInterpTo(local_48,(TVector<double> *)&local_88._s_0,
                              (TVector<double> *)&local_68._s_0,param_1,__real_40e00000);
    dVar5 = (pTVar3->field0_0x0)._s_0.Y;
    (this->MapPositionOffset).field0_0x0._s_0.X = (pTVar3->field0_0x0)._s_0.X;
    (this->MapPositionOffset).field0_0x0._s_0.Y = dVar5;
    fVar7 = this->ScaleMaxValue;
    fVar8 = fVar7 - this->UserScale;
    if (__real_322bcc77 <= fVar8 * fVar8) {
      fVar7 = param_1 * fVar1;
      if (__real_3f800000 <= param_1 * fVar1) {
        fVar7 = __real_3f800000;
      }
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
      fVar7 = fVar7 * fVar8 + this->UserScale;
    }
    this->UserScale = fVar7;
    SetMapScale(this,fVar7);
    UpdateZoomStep(this);
    pUVar4 = UDS_WorldMapEvent::GetEvent();
    if (pUVar4 != (UDS_WorldMapEvent *)0x0) {
      local_88._s_0.X = (this->ReferencePosition).field0_0x0._s_0.X;
      local_88._s_0.Y = *(double *)((longlong)&(this->ReferencePosition).field0_0x0 + 8);
      local_68._s_0.X = (this->MapPositionOffset).field0_0x0._s_0.X;
      local_68._s_0.Y = (this->MapPositionOffset).field0_0x0._s_0.Y;
      FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
      ::Broadcast(&pUVar4->ChangeMapPositionOffsetDelegate,&this->MapType,
                  (float)(this->MapScale2D).field0_0x0._s_0.X,(TVector2<double> *)&local_68._s_0,
                  (TVector2<double> *)&local_88._s_0);
    }
    iVar2 = FFieldNotificationClassDescriptor::MapLocation.BitNumber;
    local_88._s_0.X = (double)FFieldNotificationClassDescriptor::MapLocation.FieldName;
    dVar5 = (this->MapScale2D).field0_0x0._s_0.X;
    dVar9 = dVar5 * (this->MapPositionOffset).field0_0x0._s_0.X;
    dVar5 = dVar5 * (this->MapPositionOffset).field0_0x0._s_0.Y;
    if ((dVar9 != (this->MapLocation).field0_0x0._s_0.X) ||
       (dVar5 != (this->MapLocation).field0_0x0._s_0.Y)) {
      (this->MapLocation).field0_0x0._s_0.X = dVar9;
      (this->MapLocation).field0_0x0._s_0.Y = dVar5;
      local_88._8_4_ = iVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
    }
  }
  return;
}

// UpdateLerpZoomInOut @ 14c04c910

void __thiscall UDS_VM_WorldMap::UpdateLerpZoomInOut(UDS_VM_WorldMap *this,float param_1)

{
  float fVar1;
  float fVar2;
  UDS_WorldMapEvent *pUVar3;
  float fVar4;
  float fVar5;
  TVector2<double>_u_0 local_28;
  TVector2<double>_u_0 local_18;
  
  if (this->IsFocusLerpStart != true) {
    fVar1 = this->TargetScale;
    fVar2 = this->UserScale;
    if (fVar2 == fVar1) {
      this->IsZoomInOut = false;
      local_28._s_0.X =
           (this->ReferencePosition).field0_0x0._s_0.X - (this->MapPositionOffset).field0_0x0._s_0.X
      ;
      local_28._s_0.Y =
           (this->ReferencePosition).field0_0x0._s_0.Y - (this->MapPositionOffset).field0_0x0._s_0.Y
      ;
      UpdateRegionText(this,(TVector2<double> *)&local_28._s_0);
      return;
    }
    this->BeforeUserScale = fVar2;
    fVar5 = fVar1 - fVar2;
    this->IsZoomInOut = true;
    fVar4 = fVar1;
    if (__real_322bcc77 <= fVar5 * fVar5) {
      fVar4 = param_1 * __real_40a00000;
      if (__real_3f800000 <= param_1 * __real_40a00000) {
        fVar4 = __real_3f800000;
      }
      if (fVar4 <= 0.0) {
        fVar4 = 0.0;
      }
      fVar4 = fVar4 * fVar5 + fVar2;
    }
    this->UserScale = fVar4;
    if ((float)((uint)(fVar4 - fVar1) & __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_3c23d70a) {
      this->UserScale = fVar1;
      fVar4 = fVar1;
    }
    SetMapScale(this,fVar4);
    UpdateZoomStep(this);
    if (this->UserScale <= this->BeforeUserScale) {
      pUVar3 = UDS_WorldMapEvent::GetEvent();
      if (pUVar3 != (UDS_WorldMapEvent *)0x0) {
        FDS_QueryDelegate<UE::Math::TVector2<double>_>::Query
                  (&pUVar3->WorldMapPanelSizeQueryDelegate,(TVector2<double> *)&local_28._s_0);
        (this->WorldMapPanelSize).field0_0x0._s_0.X = local_28._s_0.X;
        (this->WorldMapPanelSize).field0_0x0._s_0.Y = local_28._s_0.Y;
      }
      UpdateMapOffsetByZoomOut(this);
      return;
    }
    pUVar3 = UDS_WorldMapEvent::GetEvent();
    if (pUVar3 != (UDS_WorldMapEvent *)0x0) {
      FDS_QueryDelegate<UE::Math::TVector2<double>_>::Query
                (&pUVar3->MousePositionQueryDelegate,(TVector2<double> *)&local_28._s_0);
      local_18._s_0.X = local_28._s_0.X;
      local_18._s_0.Y = local_28._s_0.Y;
      UpdateMapOffsetByMousePos(this,(TVector2<double> *)&local_18._s_0);
    }
  }
  return;
}

// UpdateMapOffsetByMousePos @ 14c04cc80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMap::UpdateMapOffsetByMousePos(UDS_VM_WorldMap *this,TVector2<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  UDS_WorldMapEvent *pUVar7;
  UDS_LogManager *pUVar8;
  undefined1 auStackY_1f8 [32];
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  TVector2<double>_u_0 local_1a8;
  TVector2<double>_u_0 local_198;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_188;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  dVar1 = (this->ReferencePosition).field0_0x0._s_0.X;
  dVar2 = (this->ReferencePosition).field0_0x0._s_0.Y;
  local_1ac = 0.0;
  local_1b0 = 0.0;
  local_1b4 = 0.0;
  local_1b8 = 0.0;
  dVar5 = __real_3ff0000000000000 / (double)this->BeforeUserScale;
  dVar3 = (this->MapPositionOffset).field0_0x0._s_0.Y;
  dVar4 = (this->MapPositionOffset).field0_0x0._s_0.X;
  dVar6 = (dVar1 - dVar4) - ((dVar5 * (param_1->field0_0x0)._s_0.X + dVar1) - dVar4);
  dVar2 = (dVar2 - dVar3) - ((dVar5 * (param_1->field0_0x0)._s_0.Y + dVar2) - dVar3);
  dVar1 = (double)(float)((double)this->BeforeUserScale / (this->MapScale2D).field0_0x0._s_0.X);
  CalMapRangeMinMax(this,&local_1ac,&local_1b4,&local_1b0,&local_1b8);
  dVar3 = (dVar2 - dVar1 * dVar2) + dVar3;
  dVar4 = (dVar6 - dVar1 * dVar6) + dVar4;
  if ((double)local_1b8 <= dVar3) {
    dVar3 = (double)local_1b8;
  }
  if (dVar3 <= (double)local_1b4) {
    dVar3 = (double)local_1b4;
  }
  if ((double)local_1b0 <= dVar4) {
    dVar4 = (double)local_1b0;
  }
  if (dVar4 <= (double)local_1ac) {
    dVar4 = (double)local_1ac;
  }
  (this->MapPositionOffset).field0_0x0._s_0.X = dVar4;
  (this->MapPositionOffset).field0_0x0._s_0.Y = dVar3;
  pUVar7 = UDS_WorldMapEvent::GetEvent();
  if (pUVar7 != (UDS_WorldMapEvent *)0x0) {
    local_1a8._s_0.X = (this->ReferencePosition).field0_0x0._s_0.X;
    local_1a8._s_0.Y = (this->ReferencePosition).field0_0x0._s_0.Y;
    local_198._s_0.X = (this->MapPositionOffset).field0_0x0._s_0.X;
    local_198._s_0.Y = (this->MapPositionOffset).field0_0x0._s_0.Y;
    FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
    ::Broadcast(&pUVar7->ChangeMapPositionOffsetDelegate,&this->MapType,
                (float)(this->MapScale2D).field0_0x0._s_0.X,(TVector2<double> *)&local_198._s_0,
                (TVector2<double> *)&local_1a8._s_0);
  }
  pUVar8 = UDS_LogManager::GetInst();
  if (pUVar8 != (UDS_LogManager *)0x0) {
    pUVar8 = UDS_LogManager::GetInst();
    ::FString::PrintfImpl((FString *)&local_1a8._s_0,L"X=%3.3f Y=%3.3f");
    local_188._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_188,"UDS_VM_WorldMap::UpdateMapOffsetByMousePos",0x2a,Yes);
    UDS_LogManager::PrintLog
              (pUVar8,1,Warning,local_188.Ptr,0x20b,L"aaa MapPanel In MapPositionOffset = %s ");
    if ((void *)local_188._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_188._padding_);
    }
    if ((void *)local_1a8._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_1a8._s_0.X);
    }
  }
  return;
}

// UpdateMapOffsetByZoomOut @ 14c04cf70

void __thiscall UDS_VM_WorldMap::UpdateMapOffsetByZoomOut(UDS_VM_WorldMap *this)

{
  double dVar1;
  double dVar2;
  UDS_WorldMapEvent *pUVar3;
  float local_res8 [2];
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  TVector2<double>_u_0 local_28;
  TVector2<double>_u_0 local_18;
  
  local_res10[0] = 0.0;
  local_res8[0] = 0.0;
  local_res20[0] = 0.0;
  local_res18[0] = 0.0;
  CalMapRangeMinMax(this,local_res10,local_res20,local_res8,local_res18);
  dVar1 = (this->MapPositionOffset).field0_0x0._s_0.X;
  dVar2 = (double)local_res8[0];
  if (dVar1 <= (double)local_res8[0]) {
    dVar2 = dVar1;
  }
  if (dVar2 <= (double)local_res10[0]) {
    dVar2 = (double)local_res10[0];
  }
  (this->MapPositionOffset).field0_0x0._s_0.X = dVar2;
  dVar1 = (this->MapPositionOffset).field0_0x0._s_0.Y;
  dVar2 = (double)local_res18[0];
  if (dVar1 <= (double)local_res18[0]) {
    dVar2 = dVar1;
  }
  if (dVar2 <= (double)local_res20[0]) {
    dVar2 = (double)local_res20[0];
  }
  (this->MapPositionOffset).field0_0x0._s_0.Y = dVar2;
  pUVar3 = UDS_WorldMapEvent::GetEvent();
  if (pUVar3 != (UDS_WorldMapEvent *)0x0) {
    local_28._s_0.X = (this->ReferencePosition).field0_0x0._s_0.X;
    local_28._s_0.Y = (this->ReferencePosition).field0_0x0._s_0.Y;
    local_18._s_0.X = (this->MapPositionOffset).field0_0x0._s_0.X;
    local_18._s_0.Y = (this->MapPositionOffset).field0_0x0._s_0.Y;
    FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
    ::Broadcast(&pUVar3->ChangeMapPositionOffsetDelegate,&this->MapType,
                (float)(this->MapScale2D).field0_0x0._s_0.X,(TVector2<double> *)&local_18._s_0,
                (TVector2<double> *)&local_28._s_0);
  }
  return;
}

// UpdateMapPositionOnDrag @ 14c04d060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMap::UpdateMapPositionOnDrag(UDS_VM_WorldMap *this,TVector2<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  UDS_WorldMapEvent *pUVar5;
  UDS_LogManager *pUVar6;
  float fVar7;
  undefined1 auStackY_1d8 [32];
  TVector2<double>_u_0 local_198;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  TVector2<double>_u_0 local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if (this->IsZoomInOut != true) {
    fVar7 = DS_Util::GetScaleToFitRatio();
    local_17c = 0.0;
    dVar1 = __real_3ff0000000000000 / (this->MapScale2D).field0_0x0._s_0.X;
    local_180 = 0.0;
    local_184 = 0.0;
    local_188 = 0.0;
    dVar2 = (__real_3ff0000000000000 / (double)fVar7) * (param_1->field0_0x0)._s_0.Y * dVar1 +
            (this->MapPositionOffset).field0_0x0._s_0.Y;
    dVar1 = (__real_3ff0000000000000 / (double)fVar7) * (param_1->field0_0x0)._s_0.X * dVar1 +
            (this->MapPositionOffset).field0_0x0._s_0.X;
    CalMapRangeMinMax(this,&local_17c,&local_184,&local_180,&local_188);
    dVar3 = (double)local_188;
    if (dVar2 <= (double)local_188) {
      dVar3 = dVar2;
    }
    dVar2 = (double)local_180;
    if (dVar1 <= (double)local_180) {
      dVar2 = dVar1;
    }
    if (dVar3 <= (double)local_184) {
      dVar3 = (double)local_184;
    }
    if (dVar2 <= (double)local_17c) {
      dVar2 = (double)local_17c;
    }
    (this->MapPositionOffset).field0_0x0._s_0.X = dVar2;
    (this->MapPositionOffset).field0_0x0._s_0.Y = dVar3;
    pUVar5 = UDS_WorldMapEvent::GetEvent();
    if (pUVar5 != (UDS_WorldMapEvent *)0x0) {
      local_198._s_0.X = (this->ReferencePosition).field0_0x0._s_0.X;
      local_198._s_0.Y = (this->ReferencePosition).field0_0x0._s_0.Y;
      local_178._s_0.X = (this->MapPositionOffset).field0_0x0._s_0.X;
      local_178._s_0.Y = (this->MapPositionOffset).field0_0x0._s_0.Y;
      FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
      ::Broadcast(&pUVar5->ChangeMapPositionOffsetDelegate,&this->MapType,
                  (float)(this->MapScale2D).field0_0x0._s_0.X,(TVector2<double> *)&local_178._s_0,
                  (TVector2<double> *)&local_198._s_0);
    }
    local_198._s_0.X =
         (this->ReferencePosition).field0_0x0._s_0.X - (this->MapPositionOffset).field0_0x0._s_0.X;
    local_198._s_0.Y =
         (this->ReferencePosition).field0_0x0._s_0.Y - (this->MapPositionOffset).field0_0x0._s_0.Y;
    UpdateRegionText(this,(TVector2<double> *)&local_198._s_0);
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      ::FString::PrintfImpl((FString *)&local_198._s_0,L"X=%3.3f Y=%3.3f");
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_VM_WorldMap::UpdateMapPositionOnDrag",0x28,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_168.Ptr,0x7c2,L"aaa MapPositionOffset = %s ");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
      if ((void *)local_198._s_0.X != (void *)0x0) {
        FMemory::Free((void *)local_198._s_0.X);
      }
    }
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      ::FString::PrintfImpl((FString *)&local_198._s_0,L"X=%3.3f Y=%3.3f");
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_VM_WorldMap::UpdateMapPositionOnDrag",0x28,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_168.Ptr,0x7c3,L"aaa ReferencePosition = %s ");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
      if ((void *)local_198._s_0.X != (void *)0x0) {
        FMemory::Free((void *)local_198._s_0.X);
      }
    }
    iVar4 = FFieldNotificationClassDescriptor::MapLocation.BitNumber;
    local_198._s_0.X = (double)FFieldNotificationClassDescriptor::MapLocation.FieldName;
    dVar1 = (this->MapScale2D).field0_0x0._s_0.X;
    dVar2 = dVar1 * (this->MapPositionOffset).field0_0x0._s_0.X;
    dVar1 = dVar1 * (this->MapPositionOffset).field0_0x0._s_0.Y;
    if ((dVar2 != (this->MapLocation).field0_0x0._s_0.X) ||
       (dVar1 != (this->MapLocation).field0_0x0._s_0.Y)) {
      (this->MapLocation).field0_0x0._s_0.X = dVar2;
      (this->MapLocation).field0_0x0._s_0.Y = dVar1;
      local_198._8_4_ = iVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_198);
    }
  }
  return;
}

// UpdatePadCursorSensitivity @ 14c04da30

void __thiscall UDS_VM_WorldMap::UpdatePadCursorSensitivity(UDS_VM_WorldMap *this)

{
  int iVar1;
  UDS_GameOptionManager *this_00;
  UDS_GameOptionData *this_01;
  FDS_GameOptionBaseTableRow *pFVar2;
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  this_00 = UDS_GameOptionManager::GetInst();
  if ((this_00 != (UDS_GameOptionManager *)0x0) &&
     (this_01 = UDS_GameOptionManager::GetGameOptionData(this_00,GamepadCursorSensitivity),
     this_01 != (UDS_GameOptionData *)0x0)) {
    iVar1 = UDS_GameOptionData::GetGameOptionValue(this_01,0);
    pFVar2 = FDS_GameOptionBaseTableRow::Get(0xcf,true);
    if ((pFVar2 != (FDS_GameOptionBaseTableRow *)0x0) &&
       ((iVar1 < pFVar2->Value1 || (pFVar2->Value2 < iVar1)))) {
      if (0 < (pFVar2->DefaultValue).ArrayNum) {
        iVar1 = *(int *)(pFVar2->DefaultValue).AllocatorInstance.Data;
      }
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,1,0,&local_18.AllocatorInstance,1,&local_18.ArrayMax);
      *(int *)local_18.AllocatorInstance.Data = iVar1;
      UDS_GameOptionData::SetGameOptionValues(this_01,&local_18);
      UDS_GameOptionManager::SaveGameOptionDevice(this_00);
    }
    this->PadCursorSensitivity = (float)iVar1 * __real_3727c5ac;
  }
  return;
}

// UpdateRegionText @ 14c04de10

void __thiscall UDS_VM_WorldMap::UpdateRegionText(UDS_VM_WorldMap *this,TVector2<double> *param_1)

{
  int iVar1;
  FDS_ZoneBaseTableRow *this_00;
  FDS_StringWorldTableRow *pFVar2;
  double dVar3;
  FName local_38;
  int local_30;
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  TVector2<double>_u_0 local_18;
  
  if (this->WorldIslandZoneIDMap != (UWN_Island_ZoneIDMap *)0x0) {
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    dVar3 = __real_3ff0000000000000 / (double)this->TextureSize;
    local_18._s_0.Y =
         (double)this->OrthoWidth * (param_1->field0_0x0)._s_0.Y * dVar3 +
         (this->MapStartPos).field0_0x0._s_0.Y;
    local_18._s_0.X =
         (double)this->OrthoWidth * (param_1->field0_0x0)._s_0.X * dVar3 +
         (this->MapStartPos).field0_0x0._s_0.X;
    iVar1 = UWN_Island_ZoneIDMap::GetZoneID
                      (this->WorldIslandZoneIDMap,(TVector2<double> *)&local_18._s_0,&local_28);
    if (-1 < iVar1) {
      this_00 = FDS_ZoneBaseTableRow::Get((longlong)iVar1,true);
      if (this_00 != (FDS_ZoneBaseTableRow *)0x0) {
        pFVar2 = FDS_ZoneBaseTableRow::ID_ZoneNameTable(this_00);
        FDS_Text::SetTextFromStringTable(&this->TextZoneName,pFVar2);
        local_30 = FFieldNotificationClassDescriptor::TextZoneName.BitNumber;
        local_38 = FFieldNotificationClassDescriptor::TextZoneName.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
      }
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return;
}

// UpdateScaleData @ 14c04e9d0

void __thiscall UDS_VM_WorldMap::UpdateScaleData(UDS_VM_WorldMap *this,float param_1)

{
  float fVar1;
  
  fVar1 = this->ScaleMaxValue;
  this->ScaleMinValue = param_1;
  this->WheelSensitivity = (fVar1 - param_1) / (float)(this->WheelMaxCount + -1);
  if (fVar1 != this->UserScale) {
    this->UserScale = fVar1;
    this->TargetScale = fVar1;
    SetMapScale(this,fVar1);
    return;
  }
  return;
}

// UpdateTickServerTime @ 14c04f110

void __thiscall UDS_VM_WorldMap::UpdateTickServerTime(UDS_VM_WorldMap *this)

{
  UDS_TimeUtilManager *pUVar1;
  FDateTime local_res10 [3];
  FName local_18;
  int local_10;
  
  pUVar1 = UDS_TimeUtilManager::GetInst();
  if (pUVar1 != (UDS_TimeUtilManager *)0x0) {
    UDS_TimeUtilManager::GetCurrentGMTDateTime();
    FDS_Text::SetTextFromDateTime(&this->TextServerDateTime,local_res10,HourSec,false);
    local_10 = FFieldNotificationClassDescriptor::TextServerDateTime.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::TextServerDateTime.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UpdateZoomStep @ 14c04fdc0

void __thiscall UDS_VM_WorldMap::UpdateZoomStep(UDS_VM_WorldMap *this)

{
  UDS_WorldMapEvent *pUVar1;
  TVector2<double>_u_0 local_28;
  TVector2<double>_u_0 local_18;
  
  if ((float)this->ZoomLevelValue1 * this->WheelSensitivity + this->ScaleMinValue < this->UserScale)
  {
    this->WorldMapZoomStep =
         ((float)this->ZoomLevelValue2 * this->WheelSensitivity + this->ScaleMinValue <
         this->UserScale) + LEVEL2;
  }
  else {
    this->WorldMapZoomStep = LEVEL1;
  }
  pUVar1 = UDS_WorldMapEvent::GetEvent();
  if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
    FDS_FilteredEventDelegate<int_const_,enum_EDS_WorldMapZoomStep>::Broadcast
              (&pUVar1->ZoomStepChangeDelegate,&this->MapType,this->WorldMapZoomStep);
    local_28._s_0.X = (this->ReferencePosition).field0_0x0._s_0.X;
    local_28._s_0.Y = (this->ReferencePosition).field0_0x0._s_0.Y;
    local_18._s_0.X = (this->MapPositionOffset).field0_0x0._s_0.X;
    local_18._s_0.Y = (this->MapPositionOffset).field0_0x0._s_0.Y;
    FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
    ::Broadcast(&pUVar1->ChangedMapScaleDelegate,&this->MapType,this->UserScale,
                (TVector2<double> *)&local_18._s_0,(TVector2<double> *)&local_28._s_0);
  }
  return;
}

// UpdateZoomStepData @ 14c04fec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_WorldMap::UpdateZoomStepData(UDS_VM_WorldMap *this,int param_1,int param_2)

{
  FDS_MapZoomStepTableRow *pFVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pFVar1 = FDS_MapZoomStepTableRow::Get((longlong)param_1,true);
  if (pFVar1 == (FDS_MapZoomStepTableRow *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_WorldMap::UpdateZoomStepData",0x23,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x254,L"mapZoomStepTableRow nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    this->ZoomLevelValue1 = pFVar1->ZoomStep1;
    this->ZoomLevelValue2 = pFVar1->ZoomStep2;
    this->ZoomLevelValue3 = pFVar1->ZoomStep3;
    this->WheelMaxCount = param_2;
  }
  return;
}

