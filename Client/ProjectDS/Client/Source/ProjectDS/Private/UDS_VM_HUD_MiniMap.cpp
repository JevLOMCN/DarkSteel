// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 49

// SetMapScale_WrapperImpl @ 14b6670b0

void __cdecl UDS_VM_HUD_MiniMap::SetMapScale_WrapperImpl(void *param_1,void *param_2)

{
  OnMapScaleChangedEvent(param_1,*(float *)param_2);
  return;
}

// SetMousePressedEvent_WrapperImpl @ 14b6670c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_HUD_MiniMap::SetMousePressedEvent_WrapperImpl(void *param_1,void *param_2)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  *(undefined1 *)((longlong)param_1 + 0x331) = 1;
  pUVar1 = UDS_LogManager::GetInst();
  if (pUVar1 != (UDS_LogManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    TStack_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_138,"UDS_VM_HUD_MiniMap::OnMousePressedEvent",0x27,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Display,TStack_138.Ptr,0x182,L"Mouse OnMousePressedEvent");
    if ((void *)TStack_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)TStack_138._padding_);
    }
  }
  return;
}

// SetMouseReleasedEvent_WrapperImpl @ 14b6670d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_HUD_MiniMap::SetMouseReleasedEvent_WrapperImpl(void *param_1,void *param_2)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  *(undefined1 *)((longlong)param_1 + 0x331) = 0;
  pUVar1 = UDS_LogManager::GetInst();
  if (pUVar1 != (UDS_LogManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    TStack_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_138,"UDS_VM_HUD_MiniMap::OnMouseReleasedEvent",0x28,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Display,TStack_138.Ptr,0x189,L"Mouse OnMouseReleasedEvent");
    if ((void *)TStack_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)TStack_138._padding_);
    }
  }
  return;
}

// SetMapHoverEvent_WrapperImpl @ 14b6670e0

void __cdecl UDS_VM_HUD_MiniMap::SetMapHoverEvent_WrapperImpl(void *param_1,void *param_2)

{
  return;
}

// SetMapUnHoverEvent_WrapperImpl @ 14b6670f0

void __cdecl UDS_VM_HUD_MiniMap::SetMapUnHoverEvent_WrapperImpl(void *param_1,void *param_2)

{
  return;
}

// SetMapRotationFixedEvent_WrapperImpl @ 14b667100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_HUD_MiniMap::SetMapRotationFixedEvent_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_WorldMapLocalSave *this;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr aFStack_158 [2];
  FName FStack_148;
  int iStack_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  *(uint *)((longlong)param_1 + 0x13c) = (uint)(*(int *)((longlong)param_1 + 0x13c) == 0);
  UDS_WorldMapLocalSave::GetInst();
  bVar1 = FWeakObjectPtr::IsValid(aFStack_158);
  if (bVar1) {
    this = (UDS_WorldMapLocalSave *)FWeakObjectPtr::Get(aFStack_158);
    UDS_WorldMapLocalSave::SetLocationSwitcherIndex(this,*(int *)((longlong)param_1 + 0x13c));
    iStack_140 = FFieldNotificationClassDescriptor::LocationSwitcherIndex.BitNumber;
    FStack_148 = FFieldNotificationClassDescriptor::LocationSwitcherIndex.FieldName;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_148);
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_HUD_MiniMap::OnMapRotationFixedEvent",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,TStack_138.Ptr,0x1ab,L"localSave IsValid = false");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  return;
}

// SetResetMapLocationOffset_WrapperImpl @ 14b667110

void __cdecl UDS_VM_HUD_MiniMap::SetResetMapLocationOffset_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 auVar1 [16];
  FName FStack_18;
  int iStack_10;
  
  if ((UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X !=
       *(double *)((longlong)param_1 + 0x308)) ||
     (UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y !=
      *(double *)((longlong)param_1 + 0x310))) {
    auVar1._8_8_ = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
    auVar1._0_8_ = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
    iStack_10 = FFieldNotificationClassDescriptor::MapPositionOffset.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::MapPositionOffset.FieldName;
    *(undefined1 (*) [16])((longlong)param_1 + 0x308) = auVar1;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetOptionButtonEvent_WrapperImpl @ 14b667120

void __cdecl UDS_VM_HUD_MiniMap::SetOptionButtonEvent_WrapperImpl(void *param_1,void *param_2)

{
  FName *pFVar1;
  FName aFStackX_8 [4];
  FName FStack_18;
  int iStack_10;
  
  if (*(char *)((longlong)param_1 + 0xa1) == '\0') {
    if (*(char *)((longlong)param_1 + 0x330) == '\0') {
      return;
    }
    *(undefined1 *)((longlong)param_1 + 0x330) = 0;
    pFVar1 = ::FName::FName(aFStackX_8,"End_Ani");
    *(FName *)((longlong)param_1 + 0x268) = *pFVar1;
  }
  else if (*(char *)((longlong)param_1 + 0xa1) == '\x01') {
    if (*(char *)((longlong)param_1 + 0x330) == '\0') {
      return;
    }
    *(undefined1 *)((longlong)param_1 + 0x330) = 0;
    pFVar1 = ::FName::FName(aFStackX_8,"Open_Ani");
    *(FName *)((longlong)param_1 + 0x268) = *pFVar1;
    iStack_10 = FFieldNotificationClassDescriptor::ButtonFunctionVisibility.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::ButtonFunctionVisibility.FieldName;
    if (*(char *)((longlong)param_1 + 0xa1) != '\0') {
      *(undefined1 *)((longlong)param_1 + 0xa1) = 0;
      (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x274) = 2;
  iStack_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetZoomInButtonEvent_WrapperImpl @ 14b667130

void __cdecl UDS_VM_HUD_MiniMap::SetZoomInButtonEvent_WrapperImpl(void *param_1,void *param_2)

{
  float fVar1;
  FName FVar2;
  int iVar3;
  int iVar4;
  FName FVar5;
  float fVar6;
  FName FStack_28;
  int iStack_20;
  
  iVar4 = FFieldNotificationClassDescriptor::IsZoomOutDisabled.BitNumber;
  FVar5 = FFieldNotificationClassDescriptor::IsZoomOutDisabled.FieldName;
  iVar3 = FFieldNotificationClassDescriptor::IsZoomInDisabled.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::IsZoomInDisabled.FieldName;
  fVar1 = *(float *)((longlong)param_1 + 0xc0);
  fVar6 = *(float *)((longlong)param_1 + 0x32c) + *(float *)((longlong)param_1 + 0xb8);
  if (fVar6 < fVar1) {
    if (*(char *)((longlong)param_1 + 0x140) == '\0') goto LAB_14bf73225;
    *(undefined1 *)((longlong)param_1 + 0x140) = 0;
  }
  else {
    fVar6 = fVar1;
    if (*(char *)((longlong)param_1 + 0x141) == '\x01') goto LAB_14bf73225;
    *(undefined1 *)((longlong)param_1 + 0x141) = 1;
    FVar5 = FVar2;
    iVar4 = iVar3;
  }
  FStack_28 = FVar5;
  iStack_20 = iVar4;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_28);
LAB_14bf73225:
  SetMapScale(param_1,fVar6);
  return;
}

// SetZoomOutButtonEvent_WrapperImpl @ 14b667140

void __cdecl UDS_VM_HUD_MiniMap::SetZoomOutButtonEvent_WrapperImpl(void *param_1,void *param_2)

{
  float fVar1;
  FName FVar2;
  int iVar3;
  int iVar4;
  FName FVar5;
  float fVar6;
  FName FStack_28;
  int iStack_20;
  
  iVar3 = FFieldNotificationClassDescriptor::IsZoomOutDisabled.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::IsZoomOutDisabled.FieldName;
  iVar4 = FFieldNotificationClassDescriptor::IsZoomInDisabled.BitNumber;
  FVar5 = FFieldNotificationClassDescriptor::IsZoomInDisabled.FieldName;
  fVar1 = *(float *)((longlong)param_1 + 0xbc);
  fVar6 = *(float *)((longlong)param_1 + 0xb8) - *(float *)((longlong)param_1 + 0x32c);
  if (fVar1 < fVar6) {
    if (*(char *)((longlong)param_1 + 0x141) == '\0') goto LAB_14bf732c5;
    *(undefined1 *)((longlong)param_1 + 0x141) = 0;
  }
  else {
    fVar6 = fVar1;
    if (*(char *)((longlong)param_1 + 0x140) == '\x01') goto LAB_14bf732c5;
    *(undefined1 *)((longlong)param_1 + 0x140) = 1;
    FVar5 = FVar2;
    iVar4 = iVar3;
  }
  FStack_28 = FVar5;
  iStack_20 = iVar4;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_28);
LAB_14bf732c5:
  SetMapScale(param_1,fVar6);
  return;
}

// SetAnimationFinishedEvent_WrapperImpl @ 14b667150

void __cdecl UDS_VM_HUD_MiniMap::SetAnimationFinishedEvent_WrapperImpl(void *param_1,void *param_2)

{
  FName *pFVar1;
  FName FStackX_8;
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0x330) = 1;
  pFVar1 = ::FName::FName(&FStackX_8,"End_Ani");
  iStack_10 = FFieldNotificationClassDescriptor::ButtonFunctionVisibility.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::ButtonFunctionVisibility.FieldName;
  if (*(FName *)param_2 == *pFVar1) {
    if (*(char *)((longlong)param_1 + 0xa1) != '\x01') {
      *(undefined1 *)((longlong)param_1 + 0xa1) = 1;
      (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
    }
  }
  return;
}

// StaticClass @ 14b667160

UClass * __cdecl UDS_VM_HUD_MiniMap::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_MiniMap.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_MiniMap",
               &Z_Registration_Info_UClass_UDS_VM_HUD_MiniMap.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_MiniMap,0x350,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_HUD_MiniMap>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_MiniMap>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_MiniMap.InnerSingleton;
}

// UDS_VM_HUD_MiniMap @ 14b66dd80

UDS_VM_HUD_MiniMap * __thiscall
UDS_VM_HUD_MiniMap::UDS_VM_HUD_MiniMap(UDS_VM_HUD_MiniMap *this,FVTableHelper *param_1)

{
  TVector2<double> TVar1;
  undefined8 local_res8;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->SliderScaleVisibility = Collapsed;
  this->ButtonFunctionVisibility = Collapsed;
  this->MapScale = 1.5;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_MiniMap__6B_;
  this->MapMinScale = 0.3;
  this->MapMaxScale = 4.0;
  this->CameraAngle = 0.0;
  this->PlayerAngle = 0.0;
  this->LastPlayerAngle = 0.0;
  this->MapAngle = 0.0;
  (this->StrZoneName).StringTableType = None;
  (this->StrZoneName).StringTableID = 0;
  (this->StrZoneName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->StrZoneName).StringEnumTableNameID.Number = 0;
  (this->StrZoneName).DateTime.Ticks = 0;
  (this->StrZoneName).TimeSpan.Ticks = 0;
  (this->StrZoneName).TimeExpressionType = None;
  (this->StrZoneName).IsExpression = false;
  (this->StrZoneName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StrZoneName).UniqueString.Data.ArrayNum = 0;
  (this->StrZoneName).UniqueString.Data.ArrayMax = 0;
  (this->StrZoneName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StrZoneName).FormatArgs.ArrayNum = 0;
  (this->StrZoneName).FormatArgs.ArrayMax = 0;
  this->CurIslandID = 0;
  this->CurIndoorGroupID = 0;
  this->MapType = 0;
  (this->MousePressedEvent)._padding_ = '\0';
  (this->MousePressedEvent).bIsCustomSelected = false;
  (this->MousePressedEvent).bIsLacked = false;
  (this->MousePressedEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->MousePressedEvent).Delegate = 0;
  *(undefined8 *)&(this->MousePressedEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->MousePressedEvent).Delegate.field_0x10 = 0;
  (this->MouseReleasedEvent)._padding_ = '\0';
  (this->MouseReleasedEvent).bIsCustomSelected = false;
  (this->MouseReleasedEvent).bIsLacked = false;
  (this->MouseReleasedEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->MouseReleasedEvent).Delegate = 0;
  *(undefined8 *)&(this->MouseReleasedEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->MouseReleasedEvent).Delegate.field_0x10 = 0;
  (this->MapHoverEvent)._padding_ = '\0';
  (this->MapHoverEvent).bIsCustomSelected = false;
  (this->MapHoverEvent).bIsLacked = false;
  (this->MapHoverEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->MapHoverEvent).Delegate = 0;
  *(undefined8 *)&(this->MapHoverEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->MapHoverEvent).Delegate.field_0x10 = 0;
  (this->MapUnHoverEvent)._padding_ = '\0';
  (this->MapUnHoverEvent).bIsCustomSelected = false;
  (this->MapUnHoverEvent).bIsLacked = false;
  (this->MapUnHoverEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->MapUnHoverEvent).Delegate = 0;
  *(undefined8 *)&(this->MapUnHoverEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->MapUnHoverEvent).Delegate.field_0x10 = 0;
  (this->MapRotationFixedEvent)._padding_ = '\0';
  (this->MapRotationFixedEvent).bIsCustomSelected = false;
  (this->MapRotationFixedEvent).bIsLacked = false;
  (this->MapRotationFixedEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->MapRotationFixedEvent).Delegate = 0;
  *(undefined8 *)&(this->MapRotationFixedEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->MapRotationFixedEvent).Delegate.field_0x10 = 0;
  (this->ResetMapLocationOffset)._padding_ = '\0';
  (this->ResetMapLocationOffset).bIsCustomSelected = false;
  (this->ResetMapLocationOffset).bIsLacked = false;
  (this->ResetMapLocationOffset).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ResetMapLocationOffset).Delegate = 0;
  *(undefined8 *)&(this->ResetMapLocationOffset).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ResetMapLocationOffset).Delegate.field_0x10 = 0;
  (this->OptionButtonEvent)._padding_ = '\0';
  (this->OptionButtonEvent).bIsCustomSelected = false;
  (this->OptionButtonEvent).bIsLacked = false;
  (this->OptionButtonEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->OptionButtonEvent).Delegate = 0;
  *(undefined8 *)&(this->OptionButtonEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OptionButtonEvent).Delegate.field_0x10 = 0;
  (this->ZoomInButtonEvent)._padding_ = '\0';
  (this->ZoomInButtonEvent).bIsCustomSelected = false;
  (this->ZoomInButtonEvent).bIsLacked = false;
  (this->ZoomInButtonEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ZoomInButtonEvent).Delegate = 0;
  *(undefined8 *)&(this->ZoomInButtonEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ZoomInButtonEvent).Delegate.field_0x10 = 0;
  (this->ZoomOutButtonEvent)._padding_ = '\0';
  (this->ZoomOutButtonEvent).bIsCustomSelected = false;
  (this->ZoomOutButtonEvent).bIsLacked = false;
  (this->ZoomOutButtonEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ZoomOutButtonEvent).Delegate = 0;
  *(undefined8 *)&(this->ZoomOutButtonEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ZoomOutButtonEvent).Delegate.field_0x10 = 0;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  (this->AnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->AnimationFinishedEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationFinishedEvent).AnimationName.Number = 0;
  (this->AnimationFinishedEvent).AnimationPlayTime = 0.0;
  (this->AnimationFinishedEvent).AnimationEventType = None;
  (this->AnimationFinishedEvent).AnimationStateType = None;
  (this->AnimationFinishedEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->AnimationFinishedEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationFinishedEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishedEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationFinishedEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationFinishedEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishedEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->VM_MinimapTexture).field0_0x0.DebugPtr = (UDS_VM_MapTexture *)0x0;
  (this->VM_MinimapSpawn).field0_0x0.DebugPtr = (UDS_VM_MapSpawn *)0x0;
  local_res8 = 0;
  (this->MapPositionOffset).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->SecondTime = 0.0;
  this->WheelWensitivity = 0.0;
  this->IsButtonListOpenAniFinished = true;
  this->MouseRightDown = false;
  (this->MapLocation).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->PlayerController).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->PlayerController).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->OwnerMovementCore).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->OwnerMovementCore).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->OwnerCameraComponent).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->OwnerCameraComponent).WeakPtr,(FObjectPtr)&local_res8);
  return this;
}

// UDS_VM_HUD_MiniMap @ 14b66e060

UDS_VM_HUD_MiniMap * __thiscall
UDS_VM_HUD_MiniMap::UDS_VM_HUD_MiniMap(UDS_VM_HUD_MiniMap *this,FObjectInitializer *param_1)

{
  TVector2<double> TVar1;
  undefined8 local_res8;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->SliderScaleVisibility = Collapsed;
  this->ButtonFunctionVisibility = Collapsed;
  this->MapScale = 1.5;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_MiniMap__6B_;
  this->MapMinScale = 0.3;
  this->MapMaxScale = 4.0;
  this->CameraAngle = 0.0;
  this->PlayerAngle = 0.0;
  this->LastPlayerAngle = 0.0;
  this->MapAngle = 0.0;
  (this->StrZoneName).StringTableType = None;
  (this->StrZoneName).StringTableID = 0;
  (this->StrZoneName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->StrZoneName).StringEnumTableNameID.Number = 0;
  (this->StrZoneName).DateTime.Ticks = 0;
  (this->StrZoneName).TimeSpan.Ticks = 0;
  (this->StrZoneName).TimeExpressionType = None;
  (this->StrZoneName).IsExpression = false;
  (this->StrZoneName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StrZoneName).UniqueString.Data.ArrayNum = 0;
  (this->StrZoneName).UniqueString.Data.ArrayMax = 0;
  (this->StrZoneName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StrZoneName).FormatArgs.ArrayNum = 0;
  (this->StrZoneName).FormatArgs.ArrayMax = 0;
  this->CurIslandID = 0;
  this->CurIndoorGroupID = 0;
  this->MapType = 0;
  (this->MousePressedEvent)._padding_ = '\0';
  (this->MousePressedEvent).bIsCustomSelected = false;
  (this->MousePressedEvent).bIsLacked = false;
  (this->MousePressedEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->MousePressedEvent).Delegate = 0;
  *(undefined8 *)&(this->MousePressedEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->MousePressedEvent).Delegate.field_0x10 = 0;
  (this->MouseReleasedEvent)._padding_ = '\0';
  (this->MouseReleasedEvent).bIsCustomSelected = false;
  (this->MouseReleasedEvent).bIsLacked = false;
  (this->MouseReleasedEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->MouseReleasedEvent).Delegate = 0;
  *(undefined8 *)&(this->MouseReleasedEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->MouseReleasedEvent).Delegate.field_0x10 = 0;
  (this->MapHoverEvent)._padding_ = '\0';
  (this->MapHoverEvent).bIsCustomSelected = false;
  (this->MapHoverEvent).bIsLacked = false;
  (this->MapHoverEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->MapHoverEvent).Delegate = 0;
  *(undefined8 *)&(this->MapHoverEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->MapHoverEvent).Delegate.field_0x10 = 0;
  (this->MapUnHoverEvent)._padding_ = '\0';
  (this->MapUnHoverEvent).bIsCustomSelected = false;
  (this->MapUnHoverEvent).bIsLacked = false;
  (this->MapUnHoverEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->MapUnHoverEvent).Delegate = 0;
  *(undefined8 *)&(this->MapUnHoverEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->MapUnHoverEvent).Delegate.field_0x10 = 0;
  (this->MapRotationFixedEvent)._padding_ = '\0';
  (this->MapRotationFixedEvent).bIsCustomSelected = false;
  (this->MapRotationFixedEvent).bIsLacked = false;
  (this->MapRotationFixedEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->MapRotationFixedEvent).Delegate = 0;
  *(undefined8 *)&(this->MapRotationFixedEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->MapRotationFixedEvent).Delegate.field_0x10 = 0;
  (this->ResetMapLocationOffset)._padding_ = '\0';
  (this->ResetMapLocationOffset).bIsCustomSelected = false;
  (this->ResetMapLocationOffset).bIsLacked = false;
  (this->ResetMapLocationOffset).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ResetMapLocationOffset).Delegate = 0;
  *(undefined8 *)&(this->ResetMapLocationOffset).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ResetMapLocationOffset).Delegate.field_0x10 = 0;
  (this->OptionButtonEvent)._padding_ = '\0';
  (this->OptionButtonEvent).bIsCustomSelected = false;
  (this->OptionButtonEvent).bIsLacked = false;
  (this->OptionButtonEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->OptionButtonEvent).Delegate = 0;
  *(undefined8 *)&(this->OptionButtonEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OptionButtonEvent).Delegate.field_0x10 = 0;
  (this->ZoomInButtonEvent)._padding_ = '\0';
  (this->ZoomInButtonEvent).bIsCustomSelected = false;
  (this->ZoomInButtonEvent).bIsLacked = false;
  (this->ZoomInButtonEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ZoomInButtonEvent).Delegate = 0;
  *(undefined8 *)&(this->ZoomInButtonEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ZoomInButtonEvent).Delegate.field_0x10 = 0;
  (this->ZoomOutButtonEvent)._padding_ = '\0';
  (this->ZoomOutButtonEvent).bIsCustomSelected = false;
  (this->ZoomOutButtonEvent).bIsLacked = false;
  (this->ZoomOutButtonEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ZoomOutButtonEvent).Delegate = 0;
  *(undefined8 *)&(this->ZoomOutButtonEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ZoomOutButtonEvent).Delegate.field_0x10 = 0;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  (this->AnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->AnimationFinishedEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationFinishedEvent).AnimationName.Number = 0;
  (this->AnimationFinishedEvent).AnimationPlayTime = 0.0;
  (this->AnimationFinishedEvent).AnimationEventType = None;
  (this->AnimationFinishedEvent).AnimationStateType = None;
  (this->AnimationFinishedEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->AnimationFinishedEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationFinishedEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishedEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationFinishedEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationFinishedEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishedEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->VM_MinimapTexture).field0_0x0.DebugPtr = (UDS_VM_MapTexture *)0x0;
  (this->VM_MinimapSpawn).field0_0x0.DebugPtr = (UDS_VM_MapSpawn *)0x0;
  local_res8 = 0;
  (this->MapPositionOffset).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->SecondTime = 0.0;
  this->WheelWensitivity = 0.0;
  this->IsButtonListOpenAniFinished = true;
  this->MouseRightDown = false;
  (this->MapLocation).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->PlayerController).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->PlayerController).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->OwnerMovementCore).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->OwnerMovementCore).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->OwnerCameraComponent).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->OwnerCameraComponent).WeakPtr,(FObjectPtr)&local_res8);
  return this;
}

// ~UDS_VM_HUD_MiniMap @ 14b66f480

void __thiscall UDS_VM_HUD_MiniMap::~UDS_VM_HUD_MiniMap(UDS_VM_HUD_MiniMap *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_MiniMap__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationFinishedEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->AnimationFinishedEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationFinishedEvent).Delegate_ValidAnimation
            );
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationFinishedEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->AnimationFinishedEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->AnimationFinishedEvent).Delegate_AnimationFinish);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_AnimationFinish);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ZoomOutButtonEvent).Delegate);
  pvVar1 = *(void **)&(this->ZoomOutButtonEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ZoomOutButtonEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ZoomInButtonEvent).Delegate);
  pvVar1 = *(void **)&(this->ZoomInButtonEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ZoomInButtonEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->OptionButtonEvent).Delegate);
  pvVar1 = *(void **)&(this->OptionButtonEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OptionButtonEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ResetMapLocationOffset).Delegate);
  pvVar1 = *(void **)&(this->ResetMapLocationOffset).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ResetMapLocationOffset).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MapRotationFixedEvent).Delegate);
  pvVar1 = *(void **)&(this->MapRotationFixedEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MapRotationFixedEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MapUnHoverEvent).Delegate);
  pvVar1 = *(void **)&(this->MapUnHoverEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MapUnHoverEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MapHoverEvent).Delegate);
  pvVar1 = *(void **)&(this->MapHoverEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MapHoverEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MouseReleasedEvent).Delegate);
  pvVar1 = *(void **)&(this->MouseReleasedEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MouseReleasedEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MousePressedEvent).Delegate);
  pvVar1 = *(void **)&(this->MousePressedEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MousePressedEvent).Delegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->StrZoneName).FormatArgs.AllocatorInstance.Data,
             (this->StrZoneName).FormatArgs.ArrayNum);
  pFVar2 = (this->StrZoneName).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->StrZoneName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b671b90

IClassDescriptor * __thiscall
UDS_VM_HUD_MiniMap::GetFieldNotificationDescriptor(UDS_VM_HUD_MiniMap *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_HUD_MiniMap::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b672820

UClass * __cdecl UDS_VM_HUD_MiniMap::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_MiniMap.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_MiniMap",
               &Z_Registration_Info_UClass_UDS_VM_HUD_MiniMap.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_MiniMap,0x350,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_HUD_MiniMap>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_MiniMap>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_MiniMap.InnerSingleton;
}

// GetTickableTickType @ 14b672a80

ETickableTickType __thiscall UDS_VM_HUD_MiniMap::GetTickableTickType(UDS_VM_HUD_MiniMap *this)

{
  return Conditional;
}

// StaticRegisterNativesUDS_VM_HUD_MiniMap @ 14b672c20

void __cdecl UDS_VM_HUD_MiniMap::StaticRegisterNativesUDS_VM_HUD_MiniMap(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_HUD_MiniMap_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnChangedInputMode @ 14b674200

void __cdecl
UDS_VM_HUD_MiniMap::execOnChangedInputMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte *pbVar2;
  TVector<double>_u_0 *pTVar3;
  byte local_res10 [16];
  EDS_InputFlags local_res20 [2];
  TVector<double>_u_0 local_38;
  undefined1 local_20;
  
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
  local_20 = 0;
  local_38._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_38._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pbVar2 = local_res10;
  if (param_2->MostRecentPropertyAddress != (byte *)0x0) {
    pbVar2 = param_2->MostRecentPropertyAddress;
  }
  local_38._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pTVar3 = &local_38;
  if ((TVector<double>_u_0 *)param_2->MostRecentPropertyAddress != (TVector<double>_u_0 *)0x0) {
    pTVar3 = (TVector<double>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res20[0] = (EDS_InputFlags)*pbVar2;
  OnChangedInputMode((UDS_VM_HUD_MiniMap *)param_1,local_res20,(FInputActionValue *)&pTVar3->_s_0);
  return;
}

// execOnIslandIDChanged @ 14b674330

void __cdecl
UDS_VM_HUD_MiniMap::execOnIslandIDChanged(UObject *param_1,FFrame *param_2,void *param_3)

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
  OnIslandIDChanged((UDS_VM_HUD_MiniMap *)param_1,puVar2);
  return;
}

// BindModel @ 14bf40480

void __thiscall UDS_VM_HUD_MiniMap::BindModel(UDS_VM_HUD_MiniMap *this)

{
  bool bVar1;
  TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr> TVar2;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  TVar2 = ADS_PlayerController::GetPlayerController();
                    /* WARNING: Load size is inaccurate */
  (this->PlayerController).WeakPtr = *TVar2.WeakPtr;
  bVar1 = TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr>::UEOpEquals
                    (&this->PlayerController,(void *)0x0);
  if (!bVar1) {
    FWeakObjectPtr::Get(&(this->PlayerController).WeakPtr);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_InputFlags_const_&,FInputActionValue_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_HUD_MiniMap>
              (&ADS_PlayerController::ChangeInputDelegate,(UDS_VM_HUD_MiniMap *)&stack0x00000008,
               (pmf_e646b001 *)this);
  }
  TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_VM_HUD_MiniMap>
            ((TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
              *)&ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,
             (UDS_VM_HUD_MiniMap *)&stack0x00000008,(pmf_26af4582 *)this);
  return;
}

// InitViewModel @ 14bf59e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_HUD_MiniMap::InitViewModel(UDS_VM_HUD_MiniMap *this)

{
  FName FVar1;
  FName FVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UDS_VM_MapTexture *pUVar7;
  UDS_VM_MapSpawn *pUVar8;
  UObject *pUVar9;
  FWeakObjectPtr *pFVar10;
  ADS_MainCharacter *this_00;
  TWeakObjectPtr<UDS_MainCameraComponent,FWeakObjectPtr> this_01;
  UDS_ZoneManager *pUVar11;
  UDS_LogManager *pUVar12;
  UDS_WorldMapLocalSave *this_02;
  longlong *plVar13;
  undefined1 auStackY_238 [32];
  undefined1 local_208 [56];
  int local_1d0;
  undefined1 local_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_208._16_8_ = 0;
  pUVar5 = Z_Construct_UClass_UDS_VM_MapTexture_NoRegister();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = Z_Construct_UClass_UDS_VM_MapTexture_NoRegister();
  CheckIsClassChildOf_Internal(pUVar6,pUVar5);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1c8,pUVar5);
  local_1c8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_1c8._56_8_ = (UPackage *)0x0;
  local_1c8._16_4_ = 0;
  local_1c8._20_4_ = 0;
  local_1c8._24_4_ = RF_Transient;
  local_1c8._40_8_ = (UObject *)0x0;
  local_1c8[0x20] = false;
  local_1c8._8_8_ = this;
  pUVar7 = (UDS_VM_MapTexture *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
  if (local_1c8._64_8_ != 0) {
    plVar13 = (longlong *)(local_1c8 + 0x50);
    if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
      plVar13 = (longlong *)local_1c8._104_8_;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (pUVar7 != (UDS_VM_MapTexture *)0x0) {
    *(undefined1 *)((longlong)&pUVar7->_padding_ + 4) = 0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UDS_VM_MapTexture *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->VM_MinimapTexture).field0_0x0.DebugPtr = pUVar7;
  local_208._16_8_ = (UObject *)0x0;
  pUVar5 = Z_Construct_UClass_UDS_VM_MapSpawn_NoRegister();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = Z_Construct_UClass_UDS_VM_MapSpawn_NoRegister();
  CheckIsClassChildOf_Internal(pUVar6,pUVar5);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1c8,pUVar5);
  local_1c8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_1c8._56_8_ = (UPackage *)0x0;
  local_1c8._16_4_ = 0;
  local_1c8._20_4_ = 0;
  local_1c8._24_4_ = RF_Transient;
  local_1c8._40_8_ = (UObject *)0x0;
  local_1c8[0x20] = false;
  local_1c8._8_8_ = this;
  pUVar8 = (UDS_VM_MapSpawn *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
  if (local_1c8._64_8_ != 0) {
    plVar13 = (longlong *)(local_1c8 + 0x50);
    if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
      plVar13 = (longlong *)local_1c8._104_8_;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (pUVar8 != (UDS_VM_MapSpawn *)0x0) {
    *(undefined1 *)((longlong)&pUVar8->_padding_ + 4) = 0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UDS_VM_MapSpawn *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  (this->VM_MinimapSpawn).field0_0x0.DebugPtr = pUVar8;
  this->MapType = 0;
  ADS_MainCharacter::GetMainPlayer();
  bVar3 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)(local_208 + 0x20),
                     (void *)0x0);
  if (!bVar3) {
    pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_208 + 0x20));
    pFVar10 = (FWeakObjectPtr *)
              (**(code **)(*(longlong *)&pUVar9[0x29].field_0x10 + 0x78))
                        (&pUVar9[0x29].field_0x10,local_208 + 0x10);
    (this->OwnerMovementCore).WeakPtr = *pFVar10;
    this_00 = (ADS_MainCharacter *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_208 + 0x20));
    this_01 = ADS_MainCharacter::GetFollowCamera(this_00);
    local_208._16_8_ = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.WeakPtr);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)local_208._16_8_ != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_208._16_8_);
    }
    FWeakObjectPtr::operator=
              (&(this->OwnerCameraComponent).WeakPtr,(FObjectPtr)((longlong)local_208 + 0x10));
  }
  pUVar11 = UDS_ZoneManager::GetInst();
  if (pUVar11 != (UDS_ZoneManager *)0x0) {
    local_208._8_4_ = 0;
    local_208._0_8_ = OnZoneIDChanged;
    local_208._24_8_ = (ulonglong)(uint)local_208._12_4_ << 0x20;
    local_208._16_8_ = OnZoneIDChanged;
    TMulticastDelegateRegistration<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_HUD_MiniMap>
              ((TMulticastDelegateRegistration<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy>
                *)&pUVar11->ZoneDistrictChangedDelegate,(UDS_VM_HUD_MiniMap *)local_208,
               (pmf_69680cd0 *)this);
    OnZoneIDChanged(this,pUVar11->ZoneID,pUVar11->DistrictID);
  }
  UDS_WorldMapLocalSave::GetInst();
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_208 + 0x28));
  if (bVar3) {
    DS_CommonDataHelper::MinimapDefaultScale
              ((TArray<float,TSizedDefaultAllocator<32>_> *)(local_208 + 0x30));
    if (1 < local_1d0) {
      this->MapMaxScale = *(float *)(local_208._48_8_ + 4);
      this->MapMinScale = *(float *)local_208._48_8_;
    }
    iVar4 = DS_CommonDataHelper::MinimapZoomStep();
    this->WheelWensitivity =
         (this->MapMaxScale - this->MapMinScale) / ((float)iVar4 - __real_3f800000);
    this_02 = (UDS_WorldMapLocalSave *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_208 + 0x28));
    iVar4 = UDS_WorldMapLocalSave::GetLocationSwitcherIndex(this_02);
    this->LocationSwitcherIndex = iVar4;
    UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,SelfHitTestInvisible);
    SetMapScale(this,this->MapMaxScale);
    local_208._8_4_ = FFieldNotificationClassDescriptor::IsZoomOutDisabled.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::IsZoomOutDisabled.FieldName;
    if (this->IsZoomOutDisabled != false) {
      this->IsZoomOutDisabled = false;
      FVar2 = FFieldNotificationClassDescriptor::IsZoomOutDisabled.FieldName;
      FFieldNotificationClassDescriptor::IsZoomOutDisabled.FieldName.ComparisonIndex =
           FVar1.ComparisonIndex.Value;
      FFieldNotificationClassDescriptor::IsZoomOutDisabled.FieldName.Number = FVar1.Number;
      local_208._0_4_ =
           FFieldNotificationClassDescriptor::IsZoomOutDisabled.FieldName.ComparisonIndex.Value;
      local_208._4_4_ = FFieldNotificationClassDescriptor::IsZoomOutDisabled.FieldName.Number;
      FFieldNotificationClassDescriptor::IsZoomOutDisabled.FieldName = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,local_208);
    }
    local_208._8_4_ = FFieldNotificationClassDescriptor::IsZoomInDisabled.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::IsZoomInDisabled.FieldName;
    if (this->IsZoomInDisabled != true) {
      this->IsZoomInDisabled = true;
      FVar2 = FFieldNotificationClassDescriptor::IsZoomInDisabled.FieldName;
      FFieldNotificationClassDescriptor::IsZoomInDisabled.FieldName.ComparisonIndex =
           FVar1.ComparisonIndex.Value;
      FFieldNotificationClassDescriptor::IsZoomInDisabled.FieldName.Number = FVar1.Number;
      local_208._0_4_ =
           FFieldNotificationClassDescriptor::IsZoomInDisabled.FieldName.ComparisonIndex.Value;
      local_208._4_4_ = FFieldNotificationClassDescriptor::IsZoomInDisabled.FieldName.Number;
      FFieldNotificationClassDescriptor::IsZoomInDisabled.FieldName = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,local_208);
    }
    local_208._8_4_ = FFieldNotificationClassDescriptor::LocationSwitcherIndex.BitNumber;
    local_208._0_4_ =
         FFieldNotificationClassDescriptor::LocationSwitcherIndex.FieldName.ComparisonIndex.Value;
    local_208._4_4_ = FFieldNotificationClassDescriptor::LocationSwitcherIndex.FieldName.Number;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,local_208);
  }
  else {
    pUVar12 = UDS_LogManager::GetInst();
    if (pUVar12 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar12 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_HUD_MiniMap::InitViewModel",0x21,Yes);
    UDS_LogManager::PrintLog(pUVar12,1,Warning,local_148.Ptr,0x4b,L"localSave IsValid = false");
    local_208._48_8_ = local_148._padding_;
  }
  if ((float *)local_208._48_8_ != (float *)0x0) {
    FMemory::Free((void *)local_208._48_8_);
  }
  return;
}

// IsUpdate @ 14bf5de60

bool __thiscall UDS_VM_HUD_MiniMap::IsUpdate(UDS_VM_HUD_MiniMap *this)

{
  return true;
}

// OnAnimationFinished @ 14bf5ee10

void __thiscall
UDS_VM_HUD_MiniMap::OnAnimationFinished
          (UDS_VM_HUD_MiniMap *this,FDS_WidgetAnimationEventField *param_1)

{
  FName *pFVar1;
  FName local_res8;
  FName local_18;
  int local_10;
  
  this->IsButtonListOpenAniFinished = true;
  pFVar1 = ::FName::FName(&local_res8,"End_Ani");
  local_10 = FFieldNotificationClassDescriptor::ButtonFunctionVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ButtonFunctionVisibility.FieldName;
  if (param_1->AnimationName == *pFVar1) {
    if (this->ButtonFunctionVisibility != Collapsed) {
      this->ButtonFunctionVisibility = Collapsed;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// OnChangedInputMode @ 14bf607f0

void __thiscall
UDS_VM_HUD_MiniMap::OnChangedInputMode
          (UDS_VM_HUD_MiniMap *this,EDS_InputFlags *param_1,FInputActionValue *param_2)

{
  double dVar1;
  double dVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  FName local_38;
  int local_30;
  
  if ((*param_1 == MOUSE_MOVE) && (this->MouseRightDown == true)) {
    dVar4 = (param_2->Value).field0_0x0._s_0.X;
    dVar6 = (param_2->Value).field0_0x0._s_0.Y;
    fVar3 = DS_Util::GetScaleToFitRatio();
    local_30 = FFieldNotificationClassDescriptor::MapPositionOffset.BitNumber;
    local_38 = FFieldNotificationClassDescriptor::MapPositionOffset.FieldName;
    dVar1 = (this->MapPositionOffset).field0_0x0._s_0.Y;
    dVar2 = (this->MapPositionOffset).field0_0x0._s_0.X;
    dVar5 = __real_3ff0000000000000 / (double)this->MapScale;
    dVar6 = (__real_3ff0000000000000 / (double)fVar3) * dVar6 * dVar5 + dVar1;
    dVar4 = (__real_3ff0000000000000 / (double)fVar3) * dVar4 * dVar5 + dVar2;
    if ((dVar2 != dVar4) || (dVar1 != dVar6)) {
      (this->MapPositionOffset).field0_0x0._s_0.X = dVar4;
      (this->MapPositionOffset).field0_0x0._s_0.Y = dVar6;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    }
  }
  return;
}

// OnCloseInit @ 14bf63260

void __thiscall UDS_VM_HUD_MiniMap::OnCloseInit(UDS_VM_HUD_MiniMap *this)

{
  bool bVar1;
  UDS_ZoneManager *pUVar2;
  
  UDS_ViewModelBase::OnCloseInit((UDS_ViewModelBase *)this);
  pUVar2 = UDS_ZoneManager::GetInst();
  if (pUVar2 != (UDS_ZoneManager *)0x0) {
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar2->ZoneIdChangeDelegate
               ,(UObject *)this);
  }
  bVar1 = TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr>::UEOpEquals
                    (&this->PlayerController,(void *)0x0);
  if (!bVar1) {
    FWeakObjectPtr::Get(&(this->PlayerController).WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &ADS_PlayerController::ChangeInputDelegate,this);
  }
  return;
}

// OnIndoorGroupIDChanged @ 14bf64220

void __thiscall UDS_VM_HUD_MiniMap::OnIndoorGroupIDChanged(UDS_VM_HUD_MiniMap *this,int param_1)

{
  UDS_WorldMapEvent *pUVar1;
  FName local_18;
  int local_10;
  
  if (this->CurIndoorGroupID != param_1) {
    pUVar1 = UDS_WorldMapEvent::GetEvent();
    if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
      FDS_FilteredEventDelegate<int_const_,bool_const_,int_const_,int_const_>::Broadcast
                (&pUVar1->IndoorDataChanageDelegate,&this->MapType,true,param_1,param_1);
    }
    local_10 = FFieldNotificationClassDescriptor::CurIndoorGroupID.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::CurIndoorGroupID.FieldName;
    if (this->CurIndoorGroupID != param_1) {
      this->CurIndoorGroupID = param_1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// OnIslandIDChanged @ 14bf64320

void __thiscall UDS_VM_HUD_MiniMap::OnIslandIDChanged(UDS_VM_HUD_MiniMap *this,uint *param_1)

{
  UDS_WorldMapEvent *pUVar1;
  FName local_18;
  int local_10;
  
  if (this->CurIslandID != *param_1) {
    pUVar1 = UDS_WorldMapEvent::GetEvent();
    if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
      FDS_FilteredEventDelegate<int_const_,bool_const_,int_const_,int_const_>::Broadcast
                (&pUVar1->IndoorDataChanageDelegate,&this->MapType,false,0,0);
    }
    local_18 = FFieldNotificationClassDescriptor::CurIslandID.FieldName;
    if (this->CurIslandID != *param_1) {
      local_10 = FFieldNotificationClassDescriptor::CurIslandID.BitNumber;
      this->CurIslandID = *param_1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// OnMainCharChanged @ 14bf64b10

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
UDS_VM_HUD_MiniMap::OnMainCharChanged
          (UDS_VM_HUD_MiniMap *this,FDS_EntityBase *param_1,FDS_EntityBase *param_2)

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

// OnMapHoveredEvent @ 14bf64c60

void __thiscall
UDS_VM_HUD_MiniMap::OnMapHoveredEvent(UDS_VM_HUD_MiniMap *this,FDS_ButtonEventField *param_1)

{
  return;
}

// OnMapRotationFixedEvent @ 14bf64c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_MiniMap::OnMapRotationFixedEvent(UDS_VM_HUD_MiniMap *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_WorldMapLocalSave *this_00;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158 [2];
  FName local_148;
  int local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  this->LocationSwitcherIndex = (uint)(this->LocationSwitcherIndex == 0);
  UDS_WorldMapLocalSave::GetInst();
  bVar1 = FWeakObjectPtr::IsValid(local_158);
  if (bVar1) {
    this_00 = (UDS_WorldMapLocalSave *)FWeakObjectPtr::Get(local_158);
    UDS_WorldMapLocalSave::SetLocationSwitcherIndex(this_00,this->LocationSwitcherIndex);
    local_140 = FFieldNotificationClassDescriptor::LocationSwitcherIndex.BitNumber;
    local_148 = FFieldNotificationClassDescriptor::LocationSwitcherIndex.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_HUD_MiniMap::OnMapRotationFixedEvent",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x1ab,L"localSave IsValid = false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// OnMapScaleChangedEvent @ 14bf64da0

void __thiscall UDS_VM_HUD_MiniMap::OnMapScaleChangedEvent(UDS_VM_HUD_MiniMap *this,float param_1)

{
  FName FVar1;
  int iVar2;
  UDS_WorldMapEvent *pUVar3;
  TVector2<double>_u_0 TStack_38;
  TVector2<double>_u_0 aTStack_28 [2];
  
  pUVar3 = UDS_WorldMapEvent::GetEvent();
  if (pUVar3 != (UDS_WorldMapEvent *)0x0) {
    TStack_38 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    aTStack_28[0] = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
    ::Broadcast(&pUVar3->ChangeMapPositionOffsetDelegate,&this->MapType,param_1,
                (TVector2<double> *)&aTStack_28[0]._s_0,(TVector2<double> *)&TStack_38._s_0);
  }
  iVar2 = FFieldNotificationClassDescriptor::MapScale.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::MapScale.FieldName;
  if (param_1 != this->MapScale) {
    this->MapScale = param_1;
    TStack_38._8_4_ = iVar2;
    TStack_38._s_0.X = (double)FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&TStack_38);
  }
  return;
}

// OnMapUnHoveredEvent @ 14bf64db0

void __thiscall
UDS_VM_HUD_MiniMap::OnMapUnHoveredEvent(UDS_VM_HUD_MiniMap *this,FDS_ButtonEventField *param_1)

{
  return;
}

// OnMousePressedEvent @ 14bf64dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_MiniMap::OnMousePressedEvent(UDS_VM_HUD_MiniMap *this,FDS_ButtonEventField *param_1)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this->MouseRightDown = true;
  pUVar1 = UDS_LogManager::GetInst();
  if (pUVar1 != (UDS_LogManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_HUD_MiniMap::OnMousePressedEvent",0x27,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Display,local_138.Ptr,0x182,L"Mouse OnMousePressedEvent");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return;
}

// OnMouseReleasedEvent @ 14bf64e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_MiniMap::OnMouseReleasedEvent(UDS_VM_HUD_MiniMap *this,FDS_ButtonEventField *param_1)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this->MouseRightDown = false;
  pUVar1 = UDS_LogManager::GetInst();
  if (pUVar1 != (UDS_LogManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_HUD_MiniMap::OnMouseReleasedEvent",0x28,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Display,local_138.Ptr,0x189,L"Mouse OnMouseReleasedEvent");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return;
}

// OnOptionButtonClick @ 14bf65d60

void __thiscall
UDS_VM_HUD_MiniMap::OnOptionButtonClick(UDS_VM_HUD_MiniMap *this,FDS_ButtonEventField *param_1)

{
  FName *pFVar1;
  FName local_res8 [4];
  FName local_18;
  int local_10;
  
  if (this->ButtonFunctionVisibility == Visible) {
    if (this->IsButtonListOpenAniFinished == false) {
      return;
    }
    this->IsButtonListOpenAniFinished = false;
    pFVar1 = ::FName::FName(local_res8,"End_Ani");
    (this->AnimationEvent).AnimationName = *pFVar1;
  }
  else if (this->ButtonFunctionVisibility == Collapsed) {
    if (this->IsButtonListOpenAniFinished == false) {
      return;
    }
    this->IsButtonListOpenAniFinished = false;
    pFVar1 = ::FName::FName(local_res8,"Open_Ani");
    (this->AnimationEvent).AnimationName = *pFVar1;
    local_10 = FFieldNotificationClassDescriptor::ButtonFunctionVisibility.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::ButtonFunctionVisibility.FieldName;
    if (this->ButtonFunctionVisibility != Visible) {
      this->ButtonFunctionVisibility = Visible;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  (this->AnimationEvent).AnimationEventType = PlayForward;
  local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnResetMapLocationOffset @ 14bf67420

void __thiscall
UDS_VM_HUD_MiniMap::OnResetMapLocationOffset(UDS_VM_HUD_MiniMap *this,FDS_ButtonEventField *param_1)

{
  TVector2<double>_u_0 TVar1;
  FName local_18;
  int local_10;
  
  if ((UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X !=
       (this->MapPositionOffset).field0_0x0._s_0.X) ||
     (UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y !=
      (this->MapPositionOffset).field0_0x0._s_0.Y)) {
    TVar1._s_0.Y = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
    TVar1._s_0.X = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
    local_10 = FFieldNotificationClassDescriptor::MapPositionOffset.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::MapPositionOffset.FieldName;
    (this->MapPositionOffset).field0_0x0 = TVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnSetViewModel @ 14bf686c0

void __thiscall
UDS_VM_HUD_MiniMap::OnSetViewModel
          (UDS_VM_HUD_MiniMap *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_VM_MapTexture *this_00;
  UDS_VM_MapSpawn *this_01;
  code *pcVar2;
  FDS_ViewModelContext_MapTypeInfo *pFVar3;
  bool bVar4;
  TSharedPtr<FDS_ViewModelContext_MapTypeInfo,1> local_48;
  TSharedPtr<FDS_ViewModelContext_MapTypeInfo,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if ((this->VM_MinimapTexture).field0_0x0.DebugPtr != (UDS_VM_MapTexture *)0x0) {
    MakeContext<FDS_ViewModelContext_MapTypeInfo>(&local_48);
    pFVar3 = local_48.Object;
    if (local_48.Object == (FDS_ViewModelContext_MapTypeInfo *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(undefined4 *)&pFVar3->_padding_ = 0x19e;
    pFVar3->MapType = 0;
    this_00 = (this->VM_MinimapTexture).field0_0x0.DebugPtr;
    local_28.Object = (FDS_ViewModelContext *)local_48.Object;
    local_28.SharedReferenceCount.ReferenceController =
         local_48.SharedReferenceCount.ReferenceController;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_MinimapSpawn).field0_0x0.DebugPtr != (UDS_VM_MapSpawn *)0x0) {
    MakeContext<FDS_ViewModelContext_MapTypeInfo>(&local_38);
    pFVar3 = local_38.Object;
    if (local_38.Object == (FDS_ViewModelContext_MapTypeInfo *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(undefined4 *)&pFVar3->_padding_ = 0x19f;
    pFVar3->MapType = 0;
    this_01 = (this->VM_MinimapSpawn).field0_0x0.DebugPtr;
    local_18.Object = (FDS_ViewModelContext *)local_38.Object;
    local_18.SharedReferenceCount.ReferenceController =
         local_38.SharedReferenceCount.ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_01,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14bf71e60

void __thiscall UDS_VM_HUD_MiniMap::OnUpdate(UDS_VM_HUD_MiniMap *this,float param_1)

{
  FName FVar1;
  int iVar2;
  bool bVar3;
  UDS_MovementCore *this_00;
  TRotator<double> *pTVar4;
  UObject *pUVar5;
  longlong lVar6;
  UDS_WorldMapEvent *pUVar7;
  float fVar8;
  float fVar9;
  longlong local_res8;
  TRotator<double> local_68;
  undefined1 local_48 [64];
  
  bVar3 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                    (&this->OwnerMovementCore,(void *)0x0);
  if (!bVar3) {
    this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->OwnerMovementCore).WeakPtr);
    pTVar4 = UDS_MovementCore::GetActorRotation(this_00,&local_68);
    fVar8 = (float)pTVar4->Yaw + __real_42b40000;
    this->LastPlayerAngle = fVar8;
    iVar2 = FFieldNotificationClassDescriptor::PlayerAngle.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::PlayerAngle.FieldName;
    fVar8 = fVar8 + this->MapAngle;
    if (fVar8 != this->PlayerAngle) {
      this->PlayerAngle = fVar8;
      local_68.Yaw._0_4_ = iVar2;
      local_68.Pitch = (double)FVar1;
      (**(code **)(this->_padding_ + 0x38))();
    }
  }
  bVar3 = TWeakObjectPtr<UDS_MainCameraComponent,FWeakObjectPtr>::UEOpEquals
                    (&this->OwnerCameraComponent,(void *)0x0);
  if ((!bVar3) && (bVar3 = FWeakObjectPtr::IsValid(&(this->PlayerController).WeakPtr), bVar3)) {
    pUVar5 = FWeakObjectPtr::Get(&(this->PlayerController).WeakPtr);
    fVar8 = 0.0;
    lVar6 = (**(code **)(*(longlong *)pUVar5 + 0x7a8))(pUVar5,local_48);
    fVar9 = (float)*(double *)(lVar6 + 8) + __real_42b40000;
    if (this->LocationSwitcherIndex == 0) {
      fVar8 = fVar9;
      fVar9 = 0.0;
    }
    this->MapAngle = (float)((uint)fVar8 ^ __xmm_80000000800000008000000080000000);
    pUVar7 = UDS_WorldMapEvent::GetEvent();
    if (pUVar7 != (UDS_WorldMapEvent *)0x0) {
      local_res8 = (longlong)this->MapType;
      FDS_FilteredEventDelegate<__int64_const_,float_const_>::Broadcast
                (&pUVar7->MapAngleChangeDelegate,&local_res8,this->MapAngle);
    }
    local_68.Yaw._0_4_ = FFieldNotificationClassDescriptor::CameraAngle.BitNumber;
    local_68.Pitch = (double)FFieldNotificationClassDescriptor::CameraAngle.FieldName;
    if (fVar9 != this->CameraAngle) {
      this->CameraAngle = fVar9;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
    }
    local_68.Yaw._0_4_ = FFieldNotificationClassDescriptor::MapAngle.BitNumber;
    local_68.Pitch = (double)FFieldNotificationClassDescriptor::MapAngle.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
    local_68.Yaw._0_4_ = FFieldNotificationClassDescriptor::PlayerAngle.BitNumber;
    local_68.Pitch = (double)FFieldNotificationClassDescriptor::PlayerAngle.FieldName;
    fVar8 = this->LastPlayerAngle + this->MapAngle;
    if (fVar8 != this->PlayerAngle) {
      this->PlayerAngle = fVar8;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
    }
  }
  return;
}

// OnZoneIDChanged @ 14bf72db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_MiniMap::OnZoneIDChanged(UDS_VM_HUD_MiniMap *this,uint param_1,uint param_2)

{
  int iVar1;
  FDS_ZoneBaseTableRow *this_00;
  UDS_LogManager *pUVar2;
  FDS_ZoneDistrictTableRow *this_01;
  FDS_StringWorldTableRow *pFVar3;
  FDS_ZoneDeathPenaltyTableRow *pFVar4;
  UDS_WorldMapEvent *pUVar5;
  UDS_WorldMapManager *this_02;
  undefined1 auStackY_1b8 [32];
  uint uVar6;
  wchar_t *pwVar7;
  FName local_178;
  int local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  this_00 = FDS_ZoneBaseTableRow::Get((ulonglong)param_1,true);
  if (this_00 == (FDS_ZoneBaseTableRow *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_VM_HUD_MiniMap::OnZoneIDChanged",0x23,Yes);
    UDS_LogManager::PrintLog
              (pUVar2,1,Warning,local_168.Ptr,0x107,L"zoneBase is invalid. IslandID : %d");
LAB_14bf72e5b:
    if ((void *)local_168._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_168._padding_);
    return;
  }
  if (param_2 == (param_2 / 1000) * 1000) {
    pFVar3 = FDS_ZoneBaseTableRow::ID_ZoneNameTable(this_00);
  }
  else {
    this_01 = FDS_ZoneDistrictTableRow::Get((ulonglong)param_2,true);
    if (this_01 == (FDS_ZoneDistrictTableRow *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_VM_HUD_MiniMap::OnZoneIDChanged",0x23,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_168.Ptr,0x112,L"zoneDistrictTableRow is nullptr");
      goto LAB_14bf72e5b;
    }
    pFVar3 = FDS_ZoneDistrictTableRow::ID_DistrictNameTable(this_01);
  }
  FDS_Text::SetTextFromStringTable(&this->StrZoneName,pFVar3);
  local_170 = FFieldNotificationClassDescriptor::StrZoneName.BitNumber;
  local_178 = FFieldNotificationClassDescriptor::StrZoneName.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_178);
  pFVar4 = FDS_ZoneDeathPenaltyTableRow::Get((longlong)this_00->ID_DeathPenalty,true);
  if (pFVar4 == (FDS_ZoneDeathPenaltyTableRow *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_VM_HUD_MiniMap::OnZoneIDChanged",0x23,Yes);
    pwVar7 = L"DeathPenalty is invalid";
    uVar6 = 0x122;
LAB_14bf73080:
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_168.Ptr,uVar6,pwVar7);
    if ((void *)local_168._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_168._padding_);
    }
  }
  else {
    if (this_00->ID_MapIndoorGroup < 1) {
      this_02 = UDS_WorldMapManager::GetInst();
      if (this_02 == (UDS_WorldMapManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar2 = UDS_LogManager::GetInst();
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"UDS_VM_HUD_MiniMap::OnZoneIDChanged",0x23,Yes);
        pwVar7 = L"worldMapMgr is nullptr";
        uVar6 = 0x130;
        goto LAB_14bf73080;
      }
      this->CurIndoorGroupID = 0;
      iVar1 = UDS_WorldMapManager::GetIslandIDByZoneID(this_02,param_1);
      if (this->CurIslandID != iVar1) {
        pUVar5 = UDS_WorldMapEvent::GetEvent();
        if (pUVar5 != (UDS_WorldMapEvent *)0x0) {
          FDS_FilteredEventDelegate<int_const_,bool_const_,int_const_,int_const_>::Broadcast
                    (&pUVar5->IndoorDataChanageDelegate,&this->MapType,false,0,0);
        }
        local_170 = FFieldNotificationClassDescriptor::CurIslandID.BitNumber;
        local_178 = FFieldNotificationClassDescriptor::CurIslandID.FieldName;
        if (this->CurIslandID != iVar1) {
          this->CurIslandID = iVar1;
          goto LAB_14bf7310e;
        }
      }
    }
    else {
      this->CurIslandID = 0;
      iVar1 = this_00->ID_MapIndoorGroup;
      if (this->CurIndoorGroupID != iVar1) {
        pUVar5 = UDS_WorldMapEvent::GetEvent();
        if (pUVar5 != (UDS_WorldMapEvent *)0x0) {
          FDS_FilteredEventDelegate<int_const_,bool_const_,int_const_,int_const_>::Broadcast
                    (&pUVar5->IndoorDataChanageDelegate,&this->MapType,true,iVar1,iVar1);
        }
        local_170 = FFieldNotificationClassDescriptor::CurIndoorGroupID.BitNumber;
        local_178 = FFieldNotificationClassDescriptor::CurIndoorGroupID.FieldName;
        if (this->CurIndoorGroupID != iVar1) {
          this->CurIndoorGroupID = iVar1;
LAB_14bf7310e:
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_178);
        }
      }
    }
    local_170 = FFieldNotificationClassDescriptor::ZoneInfoIcon.BitNumber;
    local_178 = FFieldNotificationClassDescriptor::ZoneInfoIcon.FieldName;
    if (this->ZoneInfoIcon != pFVar4->ID_ZonePenaltyInfoIcon) {
      this->ZoneInfoIcon = pFVar4->ID_ZonePenaltyInfoIcon;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_178);
    }
  }
  return;
}

// OnZoomInButtonClick @ 14bf731a0

void __thiscall
UDS_VM_HUD_MiniMap::OnZoomInButtonClick(UDS_VM_HUD_MiniMap *this,FDS_ButtonEventField *param_1)

{
  float fVar1;
  FName FVar2;
  int iVar3;
  int iVar4;
  FName FVar5;
  float fVar6;
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::IsZoomOutDisabled.BitNumber;
  FVar5 = FFieldNotificationClassDescriptor::IsZoomOutDisabled.FieldName;
  iVar3 = FFieldNotificationClassDescriptor::IsZoomInDisabled.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::IsZoomInDisabled.FieldName;
  fVar1 = this->MapMaxScale;
  fVar6 = this->WheelWensitivity + this->MapScale;
  if (fVar6 < fVar1) {
    if (this->IsZoomOutDisabled == false) goto LAB_14bf73225;
    this->IsZoomOutDisabled = false;
  }
  else {
    fVar6 = fVar1;
    if (this->IsZoomInDisabled == true) goto LAB_14bf73225;
    this->IsZoomInDisabled = true;
    FVar5 = FVar2;
    iVar4 = iVar3;
  }
  local_28 = FVar5;
  local_20 = iVar4;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
LAB_14bf73225:
  SetMapScale(this,fVar6);
  return;
}

// OnZoomOutButtonClick @ 14bf73240

void __thiscall
UDS_VM_HUD_MiniMap::OnZoomOutButtonClick(UDS_VM_HUD_MiniMap *this,FDS_ButtonEventField *param_1)

{
  float fVar1;
  FName FVar2;
  int iVar3;
  int iVar4;
  FName FVar5;
  float fVar6;
  FName local_28;
  int local_20;
  
  iVar3 = FFieldNotificationClassDescriptor::IsZoomOutDisabled.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::IsZoomOutDisabled.FieldName;
  iVar4 = FFieldNotificationClassDescriptor::IsZoomInDisabled.BitNumber;
  FVar5 = FFieldNotificationClassDescriptor::IsZoomInDisabled.FieldName;
  fVar1 = this->MapMinScale;
  fVar6 = this->MapScale - this->WheelWensitivity;
  if (fVar1 < fVar6) {
    if (this->IsZoomInDisabled == false) goto LAB_14bf732c5;
    this->IsZoomInDisabled = false;
  }
  else {
    fVar6 = fVar1;
    if (this->IsZoomOutDisabled == true) goto LAB_14bf732c5;
    this->IsZoomOutDisabled = true;
    FVar5 = FVar2;
    iVar4 = iVar3;
  }
  local_28 = FVar5;
  local_20 = iVar4;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
LAB_14bf732c5:
  SetMapScale(this,fVar6);
  return;
}

// SetMapScale @ 14bf7c460

void __thiscall UDS_VM_HUD_MiniMap::SetMapScale(UDS_VM_HUD_MiniMap *this,float param_1)

{
  FName FVar1;
  int iVar2;
  UDS_WorldMapEvent *pUVar3;
  TVector2<double>_u_0 local_38;
  TVector2<double>_u_0 local_28 [2];
  
  pUVar3 = UDS_WorldMapEvent::GetEvent();
  if (pUVar3 != (UDS_WorldMapEvent *)0x0) {
    local_38 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    local_28[0] = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
    ::Broadcast(&pUVar3->ChangeMapPositionOffsetDelegate,&this->MapType,param_1,
                (TVector2<double> *)&local_28[0]._s_0,(TVector2<double> *)&local_38._s_0);
  }
  iVar2 = FFieldNotificationClassDescriptor::MapScale.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::MapScale.FieldName;
  if (param_1 != this->MapScale) {
    this->MapScale = param_1;
    local_38._8_4_ = iVar2;
    local_38._s_0.X = (double)FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  }
  return;
}

// SetMaxMapScale @ 14bf7c500

void __thiscall UDS_VM_HUD_MiniMap::SetMaxMapScale(UDS_VM_HUD_MiniMap *this,float param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::MapMaxScale.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MapMaxScale.FieldName;
  if (param_1 != this->MapMaxScale) {
    this->MapMaxScale = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetMinMapScale @ 14bf7c5a0

void __thiscall UDS_VM_HUD_MiniMap::SetMinMapScale(UDS_VM_HUD_MiniMap *this,float param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::MapMinScale.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MapMinScale.FieldName;
  if (param_1 != this->MapMinScale) {
    this->MapMinScale = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14bf84850

void __thiscall UDS_VM_HUD_MiniMap::UnbindModel(UDS_VM_HUD_MiniMap *this)

{
  bool bVar1;
  UDS_ZoneManager *pUVar2;
  
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,this);
  bVar1 = TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr>::UEOpEquals
                    (&this->PlayerController,(void *)0x0);
  if (!bVar1) {
    FWeakObjectPtr::Get(&(this->PlayerController).WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &ADS_PlayerController::ChangeInputDelegate,this);
  }
  pUVar2 = UDS_ZoneManager::GetInst();
  if (pUVar2 != (UDS_ZoneManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->ZoneDistrictChangedDelegate,this);
  }
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  return;
}

// UpdateCameraDirection @ 14bf866e0

void __thiscall UDS_VM_HUD_MiniMap::UpdateCameraDirection(UDS_VM_HUD_MiniMap *this,float *param_1)

{
  UDS_WorldMapEvent *pUVar1;
  float fVar2;
  float fVar3;
  longlong local_res8;
  FName local_28;
  int local_20;
  
  fVar3 = 0.0;
  fVar2 = *param_1 + __real_42b40000;
  if (this->LocationSwitcherIndex == 0) {
    fVar2 = 0.0;
    fVar3 = *param_1 + __real_42b40000;
  }
  this->MapAngle = (float)((uint)fVar3 ^ __xmm_80000000800000008000000080000000);
  pUVar1 = UDS_WorldMapEvent::GetEvent();
  if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
    local_res8 = (longlong)this->MapType;
    FDS_FilteredEventDelegate<__int64_const_,float_const_>::Broadcast
              (&pUVar1->MapAngleChangeDelegate,&local_res8,this->MapAngle);
  }
  local_20 = FFieldNotificationClassDescriptor::CameraAngle.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::CameraAngle.FieldName;
  if (fVar2 != this->CameraAngle) {
    this->CameraAngle = fVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  local_20 = FFieldNotificationClassDescriptor::MapAngle.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::MapAngle.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  local_20 = FFieldNotificationClassDescriptor::PlayerAngle.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::PlayerAngle.FieldName;
  fVar2 = this->LastPlayerAngle + this->MapAngle;
  if (fVar2 != this->PlayerAngle) {
    this->PlayerAngle = fVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// UpdateDirection @ 14bf87940

void __thiscall UDS_VM_HUD_MiniMap::UpdateDirection(UDS_VM_HUD_MiniMap *this,float *param_1)

{
  float fVar1;
  FName local_18;
  int local_10;
  
  fVar1 = *param_1 + __real_42b40000;
  this->LastPlayerAngle = fVar1;
  local_10 = FFieldNotificationClassDescriptor::PlayerAngle.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::PlayerAngle.FieldName;
  fVar1 = fVar1 + this->MapAngle;
  if (fVar1 != this->PlayerAngle) {
    this->PlayerAngle = fVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

