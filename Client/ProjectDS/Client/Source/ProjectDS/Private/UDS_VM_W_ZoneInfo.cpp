// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 40

// SetZoneName_WrapperImpl @ 14b7556e0

void __cdecl UDS_VM_W_ZoneInfo::SetZoneName_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 200),param_2);
  iStack_10 = FFieldNotificationClassDescriptor::ZoneName.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::ZoneName.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetZoneIslandName_WrapperImpl @ 14b7556f0

void __cdecl UDS_VM_W_ZoneInfo::SetZoneIslandName_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0x118),param_2);
  iStack_10 = FFieldNotificationClassDescriptor::ZoneIslandName.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::ZoneIslandName.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetZoneDistrictName_WrapperImpl @ 14b755700

void __cdecl UDS_VM_W_ZoneInfo::SetZoneDistrictName_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0x168),param_2);
  iStack_10 = FFieldNotificationClassDescriptor::ZoneDistrictName.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::ZoneDistrictName.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetZoneResourcePath_WrapperImpl @ 14b755710

void __cdecl UDS_VM_W_ZoneInfo::SetZoneResourcePath_WrapperImpl(void *param_1,void *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  undefined8 uVar3;
  FName FVar4;
  int iVar5;
  bool bVar6;
  ForAnyElementType *pFVar7;
  FName FStack_28;
  int iStack_20;
  
  iVar5 = FFieldNotificationClassDescriptor::ZoneResourcePath.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::ZoneResourcePath.FieldName;
  bVar6 = FSoftObjectPath::operator==((FSoftObjectPath *)((longlong)param_1 + 0x1b8),param_2);
  if (!bVar6) {
    uVar3 = *(undefined8 *)((longlong)param_2 + 8);
    (((FSoftObjectPath *)((longlong)param_1 + 0x1b8))->AssetPath).PackageName = *(FName *)param_2;
    *(undefined8 *)((longlong)param_1 + 0x1c0) = uVar3;
    pFVar7 = (ForAnyElementType *)((longlong)param_1 + 0x1c8);
    if (pFVar7 != (ForAnyElementType *)((longlong)param_2 + 0x10)) {
      iVar2 = *(int *)((longlong)param_2 + 0x18);
      piVar1 = (int *)((longlong)param_1 + 0x1d4);
      _Src = ((ForAnyElementType *)((longlong)param_2 + 0x10))->Data;
      *(int *)((longlong)param_1 + 0x1d0) = iVar2;
      if ((iVar2 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar2,*piVar1,pFVar7,iVar2,piVar1);
        if (iVar2 != 0) {
          memcpy(pFVar7->Data,_Src,(longlong)iVar2);
        }
      }
    }
    FStack_28 = FVar4;
    iStack_20 = iVar5;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_28);
  }
  return;
}

// SetZoneAnimationFinishEvent_WrapperImpl @ 14b755720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_W_ZoneInfo::SetZoneAnimationFinishEvent_WrapperImpl(void *param_1,void *param_2)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *this;
  char cVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_WindowManager *this_00;
  longlong *plVar4;
  undefined1 auStackY_198 [32];
  FReadAccessScope FStack_168;
  float afStack_148 [2];
  UDS_WindowManager *pUStack_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  FDS_WidgetAnimationEventField::operator=
            ((FDS_WidgetAnimationEventField *)((longlong)param_1 + 0x220),param_2);
  this = (TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0xb0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&FStack_168);
  if (((*(int *)((longlong)param_1 + 0xc0) != 0) &&
      (*(longlong **)((longlong)param_1 + 0xb8) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)((longlong)param_1 + 0xb8) + 0x38))(), cVar1 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&FStack_168);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&FStack_168);
    if (*(int *)((longlong)param_1 + 0xc0) == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = *(longlong **)((longlong)param_1 + 0xb8);
    }
    (**(code **)(*plVar4 + 0x60))(plVar4);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&FStack_168);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this);
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&FStack_168);
  if ((*(int *)((longlong)param_1 + 0x220) == *(int *)((longlong)param_1 + 0xa8)) &&
     (*(int *)((longlong)param_1 + 0x224) == *(int *)((longlong)param_1 + 0xac))) {
    pUStack_140 = UDS_WindowManager::GetInst();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUStack_140 != (UDS_WindowManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUStack_140);
    }
    FStack_168.DestructionSentinel.AccessType = 0;
    FStack_168.DestructionSentinel._4_4_ = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUStack_140 != (UDS_WindowManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUStack_140);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&FStack_168,(FObjectPtr)&pUStack_140);
    bVar2 = TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr> *)&FStack_168,(void *)0x0);
    if (bVar2) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        TStack_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_138,"UDS_VM_W_ZoneInfo::OnZoneAnimationFinishEvent",0x2d,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,TStack_138.Ptr,0x111,L"windowManager is nullptr.")
        ;
        if ((void *)TStack_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)TStack_138._padding_);
        }
      }
    }
    else {
      this_00 = (UDS_WindowManager *)FWeakObjectPtr::Get((FWeakObjectPtr *)&FStack_168);
      afStack_148[0] = 0.0;
      pUStack_140 = (UDS_WindowManager *)((ulonglong)pUStack_140 & 0xffffffff00000000);
      UDS_WindowManager::CloseWindow(this_00,HUDZoneInfo,(uint *)&pUStack_140,afStack_148);
    }
  }
  else {
    *(undefined8 *)((longlong)param_1 + 0x1d8) = *(undefined8 *)((longlong)param_1 + 0xa8);
    *(undefined1 *)((longlong)param_1 + 0x1e4) = 2;
    FStack_168.DestructionSentinel.Accessor._0_4_ =
         FFieldNotificationClassDescriptor::ZoneAnimationEvent.BitNumber;
    FStack_168.DestructionSentinel.AccessType =
         FFieldNotificationClassDescriptor::ZoneAnimationEvent.FieldName.ComparisonIndex.Value;
    FStack_168.DestructionSentinel._4_4_ =
         FFieldNotificationClassDescriptor::ZoneAnimationEvent.FieldName.Number;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_168);
  }
  return;
}

// SetDistrictAnimationFinishEvent_WrapperImpl @ 14b755730

void __cdecl
UDS_VM_W_ZoneInfo::SetDistrictAnimationFinishEvent_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  FDS_WidgetAnimationEventField::operator=
            ((FDS_WidgetAnimationEventField *)((longlong)param_1 + 0x268),param_2);
  if ((*(int *)((longlong)param_1 + 0x268) != *(int *)((longlong)param_1 + 0xa8)) ||
     (*(int *)((longlong)param_1 + 0x26c) != *(int *)((longlong)param_1 + 0xac))) {
    *(undefined8 *)((longlong)param_1 + 0x268) = *(undefined8 *)((longlong)param_1 + 0xa8);
    *(undefined1 *)((longlong)param_1 + 0x274) = 2;
    iStack_10 = FFieldNotificationClassDescriptor::DistrictAnimationEvent.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::DistrictAnimationEvent.FieldName;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// SetZoneNameResourcePathID_WrapperImpl @ 14b755740

void __cdecl UDS_VM_W_ZoneInfo::SetZoneNameResourcePathID_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::ZoneNameResourcePathID.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::ZoneNameResourcePathID.FieldName;
  if (*(int *)((longlong)param_1 + 0x2f8) != *(int *)param_2) {
    *(int *)((longlong)param_1 + 0x2f8) = *(int *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetDistrictNameResourcePathID_WrapperImpl @ 14b7557c0

void __cdecl
UDS_VM_W_ZoneInfo::SetDistrictNameResourcePathID_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined4 *)((longlong)param_1 + 0x2fc) = *(undefined4 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::DistrictNameResourcePathID.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::DistrictNameResourcePathID.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetZoneNameVisibility_WrapperImpl @ 14b7557d0

void __cdecl UDS_VM_W_ZoneInfo::SetZoneNameVisibility_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0x300) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::ZoneNameVisibility.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::ZoneNameVisibility.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetIslandNameVisibility_WrapperImpl @ 14b7557e0

void __cdecl UDS_VM_W_ZoneInfo::SetIslandNameVisibility_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0x301) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::IslandNameVisibility.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IslandNameVisibility.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetDistrictNameVisibility_WrapperImpl @ 14b7558b0

void __cdecl UDS_VM_W_ZoneInfo::SetDistrictNameVisibility_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0x302) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::DistrictNameVisibility.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::DistrictNameVisibility.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// StaticClass @ 14b7558c0

UClass * __cdecl UDS_VM_W_ZoneInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_ZoneInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_ZoneInfo",
               &Z_Registration_Info_UClass_UDS_VM_W_ZoneInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_ZoneInfo,800,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_W_ZoneInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_W_ZoneInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_ZoneInfo.InnerSingleton;
}

// UDS_VM_W_ZoneInfo @ 14b75a570

UDS_VM_W_ZoneInfo * __thiscall
UDS_VM_W_ZoneInfo::UDS_VM_W_ZoneInfo(UDS_VM_W_ZoneInfo *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_ZoneInfo__6B_;
  ::FName::FName(&this->START_ANIMATION_NAME,"Open_Ani");
  ::FName::FName(&this->END_ANIMATION_NAME,"Close_Ani");
  (this->ZoneAnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&this->PlayNextAnimationDelegate = 0;
  *(undefined8 *)&(this->PlayNextAnimationDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->PlayNextAnimationDelegate).field_0x10 = 0;
  (this->ZoneName).StringTableType = None;
  (this->ZoneName).StringTableID = 0;
  (this->ZoneName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ZoneName).StringEnumTableNameID.Number = 0;
  (this->ZoneName).DateTime.Ticks = 0;
  (this->ZoneName).TimeSpan.Ticks = 0;
  (this->ZoneName).TimeExpressionType = None;
  (this->ZoneName).IsExpression = false;
  (this->ZoneName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ZoneName).UniqueString.Data.ArrayNum = 0;
  (this->ZoneName).UniqueString.Data.ArrayMax = 0;
  (this->ZoneName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ZoneName).FormatArgs.ArrayNum = 0;
  (this->ZoneName).FormatArgs.ArrayMax = 0;
  (this->ZoneIslandName).StringTableType = None;
  (this->ZoneIslandName).StringTableID = 0;
  (this->ZoneIslandName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ZoneIslandName).StringEnumTableNameID.Number = 0;
  (this->ZoneIslandName).DateTime.Ticks = 0;
  (this->ZoneIslandName).TimeSpan.Ticks = 0;
  (this->ZoneIslandName).TimeExpressionType = None;
  (this->ZoneIslandName).IsExpression = false;
  (this->ZoneIslandName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ZoneIslandName).UniqueString.Data.ArrayNum = 0;
  (this->ZoneIslandName).UniqueString.Data.ArrayMax = 0;
  (this->ZoneIslandName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ZoneIslandName).FormatArgs.ArrayNum = 0;
  (this->ZoneIslandName).FormatArgs.ArrayMax = 0;
  (this->ZoneDistrictName).StringTableType = None;
  (this->ZoneDistrictName).StringTableID = 0;
  (this->ZoneDistrictName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ZoneDistrictName).StringEnumTableNameID.Number = 0;
  (this->ZoneDistrictName).DateTime.Ticks = 0;
  (this->ZoneDistrictName).TimeSpan.Ticks = 0;
  (this->ZoneDistrictName).TimeExpressionType = None;
  (this->ZoneDistrictName).IsExpression = false;
  (this->ZoneDistrictName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->ZoneDistrictName).UniqueString.Data.ArrayNum = 0;
  (this->ZoneDistrictName).UniqueString.Data.ArrayMax = 0;
  (this->ZoneDistrictName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ZoneDistrictName).FormatArgs.ArrayNum = 0;
  (this->ZoneDistrictName).FormatArgs.ArrayMax = 0;
  (this->ZoneResourcePath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->ZoneResourcePath).AssetPath.PackageName.Number = 0;
  (this->ZoneResourcePath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->ZoneResourcePath).AssetPath.AssetName.Number = 0;
  (this->ZoneResourcePath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ZoneResourcePath).SubPathString.Data.ArrayNum = 0;
  (this->ZoneResourcePath).SubPathString.Data.ArrayMax = 0;
  (this->ZoneAnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->ZoneAnimationEvent).AnimationName.Number = 0;
  (this->ZoneAnimationEvent).AnimationPlayTime = 0.0;
  (this->ZoneAnimationEvent).AnimationEventType = None;
  (this->ZoneAnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->ZoneAnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->ZoneAnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->ZoneAnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->ZoneAnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->ZoneAnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->ZoneAnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->ZoneAnimationFinishEvent).AnimationName.ComparisonIndex = 0;
  (this->ZoneAnimationFinishEvent).AnimationName.Number = 0;
  (this->ZoneAnimationFinishEvent).AnimationPlayTime = 0.0;
  (this->ZoneAnimationFinishEvent).AnimationEventType = None;
  (this->ZoneAnimationFinishEvent).AnimationStateType = None;
  *(undefined8 *)&(this->ZoneAnimationFinishEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->ZoneAnimationFinishEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->ZoneAnimationFinishEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->ZoneAnimationFinishEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->ZoneAnimationFinishEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->ZoneAnimationFinishEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->DistrictAnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->DistrictAnimationEvent).AnimationName.Number = 0;
  (this->DistrictAnimationEvent).AnimationPlayTime = 0.0;
  (this->DistrictAnimationEvent).AnimationEventType = None;
  (this->DistrictAnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->DistrictAnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->DistrictAnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  (this->ZoneAnimationFinishEvent).NumberOfLoops = 1;
  (this->DistrictAnimationEvent).NumberOfLoops = 1;
  *(undefined4 *)&(this->DistrictAnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->DistrictAnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->DistrictAnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->DistrictAnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->DistrictAnimationFinishEvent).AnimationName.ComparisonIndex = 0;
  (this->DistrictAnimationFinishEvent).AnimationName.Number = 0;
  (this->DistrictAnimationFinishEvent).AnimationPlayTime = 0.0;
  (this->DistrictAnimationFinishEvent).AnimationEventType = None;
  (this->DistrictAnimationFinishEvent).AnimationStateType = None;
  *(undefined8 *)&(this->DistrictAnimationFinishEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->DistrictAnimationFinishEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->DistrictAnimationFinishEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->DistrictAnimationFinishEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->DistrictAnimationFinishEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->DistrictAnimationFinishEvent).Delegate_ValidAnimation.field_0x10 = 0;
  this->ZoneNameResourcePathID = 0;
  this->IslandId = 0;
  this->ZoneId = 0;
  this->DistrictId = 0;
  this->ZoneDeathPenaltyID = 0;
  this->ZoneVisibleType = 0;
  this->TableType = 0;
  (this->DistrictAnimationFinishEvent).NumberOfLoops = 1;
  return this;
}

// UDS_VM_W_ZoneInfo @ 14b75a820

UDS_VM_W_ZoneInfo * __thiscall
UDS_VM_W_ZoneInfo::UDS_VM_W_ZoneInfo(UDS_VM_W_ZoneInfo *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_ZoneInfo__6B_;
  ::FName::FName(&this->START_ANIMATION_NAME,"Open_Ani");
  ::FName::FName(&this->END_ANIMATION_NAME,"Close_Ani");
  (this->ZoneAnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&this->PlayNextAnimationDelegate = 0;
  *(undefined8 *)&(this->PlayNextAnimationDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->PlayNextAnimationDelegate).field_0x10 = 0;
  (this->ZoneName).StringTableType = None;
  (this->ZoneName).StringTableID = 0;
  (this->ZoneName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ZoneName).StringEnumTableNameID.Number = 0;
  (this->ZoneName).DateTime.Ticks = 0;
  (this->ZoneName).TimeSpan.Ticks = 0;
  (this->ZoneName).TimeExpressionType = None;
  (this->ZoneName).IsExpression = false;
  (this->ZoneName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ZoneName).UniqueString.Data.ArrayNum = 0;
  (this->ZoneName).UniqueString.Data.ArrayMax = 0;
  (this->ZoneName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ZoneName).FormatArgs.ArrayNum = 0;
  (this->ZoneName).FormatArgs.ArrayMax = 0;
  (this->ZoneIslandName).StringTableType = None;
  (this->ZoneIslandName).StringTableID = 0;
  (this->ZoneIslandName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ZoneIslandName).StringEnumTableNameID.Number = 0;
  (this->ZoneIslandName).DateTime.Ticks = 0;
  (this->ZoneIslandName).TimeSpan.Ticks = 0;
  (this->ZoneIslandName).TimeExpressionType = None;
  (this->ZoneIslandName).IsExpression = false;
  (this->ZoneIslandName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ZoneIslandName).UniqueString.Data.ArrayNum = 0;
  (this->ZoneIslandName).UniqueString.Data.ArrayMax = 0;
  (this->ZoneIslandName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ZoneIslandName).FormatArgs.ArrayNum = 0;
  (this->ZoneIslandName).FormatArgs.ArrayMax = 0;
  (this->ZoneDistrictName).StringTableType = None;
  (this->ZoneDistrictName).StringTableID = 0;
  (this->ZoneDistrictName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ZoneDistrictName).StringEnumTableNameID.Number = 0;
  (this->ZoneDistrictName).DateTime.Ticks = 0;
  (this->ZoneDistrictName).TimeSpan.Ticks = 0;
  (this->ZoneDistrictName).TimeExpressionType = None;
  (this->ZoneDistrictName).IsExpression = false;
  (this->ZoneDistrictName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->ZoneDistrictName).UniqueString.Data.ArrayNum = 0;
  (this->ZoneDistrictName).UniqueString.Data.ArrayMax = 0;
  (this->ZoneDistrictName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ZoneDistrictName).FormatArgs.ArrayNum = 0;
  (this->ZoneDistrictName).FormatArgs.ArrayMax = 0;
  (this->ZoneResourcePath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->ZoneResourcePath).AssetPath.PackageName.Number = 0;
  (this->ZoneResourcePath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->ZoneResourcePath).AssetPath.AssetName.Number = 0;
  (this->ZoneResourcePath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ZoneResourcePath).SubPathString.Data.ArrayNum = 0;
  (this->ZoneResourcePath).SubPathString.Data.ArrayMax = 0;
  (this->ZoneAnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->ZoneAnimationEvent).AnimationName.Number = 0;
  (this->ZoneAnimationEvent).AnimationPlayTime = 0.0;
  (this->ZoneAnimationEvent).AnimationEventType = None;
  (this->ZoneAnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->ZoneAnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->ZoneAnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->ZoneAnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->ZoneAnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->ZoneAnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->ZoneAnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->ZoneAnimationFinishEvent).AnimationName.ComparisonIndex = 0;
  (this->ZoneAnimationFinishEvent).AnimationName.Number = 0;
  (this->ZoneAnimationFinishEvent).AnimationPlayTime = 0.0;
  (this->ZoneAnimationFinishEvent).AnimationEventType = None;
  (this->ZoneAnimationFinishEvent).AnimationStateType = None;
  *(undefined8 *)&(this->ZoneAnimationFinishEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->ZoneAnimationFinishEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->ZoneAnimationFinishEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->ZoneAnimationFinishEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->ZoneAnimationFinishEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->ZoneAnimationFinishEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->DistrictAnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->DistrictAnimationEvent).AnimationName.Number = 0;
  (this->DistrictAnimationEvent).AnimationPlayTime = 0.0;
  (this->DistrictAnimationEvent).AnimationEventType = None;
  (this->DistrictAnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->DistrictAnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->DistrictAnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  (this->ZoneAnimationFinishEvent).NumberOfLoops = 1;
  (this->DistrictAnimationEvent).NumberOfLoops = 1;
  *(undefined4 *)&(this->DistrictAnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->DistrictAnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->DistrictAnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->DistrictAnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->DistrictAnimationFinishEvent).AnimationName.ComparisonIndex = 0;
  (this->DistrictAnimationFinishEvent).AnimationName.Number = 0;
  (this->DistrictAnimationFinishEvent).AnimationPlayTime = 0.0;
  (this->DistrictAnimationFinishEvent).AnimationEventType = None;
  (this->DistrictAnimationFinishEvent).AnimationStateType = None;
  *(undefined8 *)&(this->DistrictAnimationFinishEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->DistrictAnimationFinishEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->DistrictAnimationFinishEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->DistrictAnimationFinishEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->DistrictAnimationFinishEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->DistrictAnimationFinishEvent).Delegate_ValidAnimation.field_0x10 = 0;
  this->ZoneNameResourcePathID = 0;
  this->IslandId = 0;
  this->ZoneId = 0;
  this->DistrictId = 0;
  this->ZoneDeathPenaltyID = 0;
  this->ZoneVisibleType = 0;
  this->TableType = 0;
  (this->DistrictAnimationFinishEvent).NumberOfLoops = 1;
  return this;
}

// ~UDS_VM_W_ZoneInfo @ 14b75bde0

void __thiscall UDS_VM_W_ZoneInfo::~UDS_VM_W_ZoneInfo(UDS_VM_W_ZoneInfo *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_ZoneInfo__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->DistrictAnimationFinishEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->DistrictAnimationFinishEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->DistrictAnimationFinishEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->DistrictAnimationFinishEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->DistrictAnimationFinishEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->DistrictAnimationFinishEvent).Delegate_AnimationFinish);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->DistrictAnimationEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->DistrictAnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->DistrictAnimationEvent).Delegate_ValidAnimation
            );
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->DistrictAnimationEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->DistrictAnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->DistrictAnimationEvent).Delegate_AnimationFinish);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ZoneAnimationFinishEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->ZoneAnimationFinishEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->ZoneAnimationFinishEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ZoneAnimationFinishEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->ZoneAnimationFinishEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->ZoneAnimationFinishEvent).Delegate_AnimationFinish);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ZoneAnimationEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->ZoneAnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ZoneAnimationEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ZoneAnimationEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->ZoneAnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ZoneAnimationEvent).Delegate_AnimationFinish);
  pFVar2 = (this->ZoneResourcePath).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ZoneDistrictName).FormatArgs.AllocatorInstance.Data,
             (this->ZoneDistrictName).FormatArgs.ArrayNum);
  pFVar2 = (this->ZoneDistrictName).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ZoneDistrictName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ZoneIslandName).FormatArgs.AllocatorInstance.Data,
             (this->ZoneIslandName).FormatArgs.ArrayNum);
  pFVar2 = (this->ZoneIslandName).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ZoneIslandName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ZoneName).FormatArgs.AllocatorInstance.Data,
             (this->ZoneName).FormatArgs.ArrayNum);
  pFVar2 = (this->ZoneName).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ZoneName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->PlayNextAnimationDelegate);
  pvVar1 = *(void **)&(this->PlayNextAnimationDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PlayNextAnimationDelegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b75df90

IClassDescriptor * __thiscall
UDS_VM_W_ZoneInfo::GetFieldNotificationDescriptor(UDS_VM_W_ZoneInfo *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_ZoneInfo::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b75ea30

UClass * __cdecl UDS_VM_W_ZoneInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_ZoneInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_ZoneInfo",
               &Z_Registration_Info_UClass_UDS_VM_W_ZoneInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_ZoneInfo,800,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_W_ZoneInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_W_ZoneInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_ZoneInfo.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_ZoneInfo @ 14b75eff0

void __cdecl UDS_VM_W_ZoneInfo::StaticRegisterNativesUDS_VM_W_ZoneInfo(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_W_ZoneInfo_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execBroadcastOpenAnimationEvent @ 14b760020

void __cdecl
UDS_VM_W_ZoneInfo::execBroadcastOpenAnimationEvent(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  BroadcastOpenAnimationEvent((UDS_VM_W_ZoneInfo *)param_1);
  return;
}

// BroadcastOpenAnimationEvent @ 14c005a20

void __thiscall UDS_VM_W_ZoneInfo::BroadcastOpenAnimationEvent(UDS_VM_W_ZoneInfo *this)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  ESlateVisibility EVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  UObject *this_00;
  UFunction *pUVar7;
  FName local_res8 [3];
  UDS_VM_W_ZoneInfo *local_res20;
  FName local_b8;
  int local_b0;
  FName local_a8;
  int local_a0;
  FName local_98;
  int local_90;
  FName local_88;
  int local_80;
  FName local_78;
  int local_70;
  FName local_68;
  int local_60;
  FName local_58;
  int local_50;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  if ((this->ZoneAnimationEvent).AnimationEventType != PlayForward) {
    if ((this->ZoneVisibleType & 1) == 0) {
      EVar4 = Collapsed;
    }
    else {
      EVar4 = this->IslandNameVisibility;
    }
    this->IslandNameVisibility = EVar4;
    local_90 = FFieldNotificationClassDescriptor::IslandNameVisibility.BitNumber;
    local_98 = FFieldNotificationClassDescriptor::IslandNameVisibility.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
    if ((this->ZoneVisibleType & 2) == 0) {
      EVar4 = Collapsed;
    }
    else {
      EVar4 = this->ZoneNameVisibility;
    }
    this->ZoneNameVisibility = EVar4;
    local_80 = FFieldNotificationClassDescriptor::ZoneNameVisibility.BitNumber;
    local_88 = FFieldNotificationClassDescriptor::ZoneNameVisibility.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
    if ((this->ZoneVisibleType & 4) == 0) {
      EVar4 = Collapsed;
    }
    else {
      EVar4 = this->DistrictNameVisibility;
    }
    this->DistrictNameVisibility = EVar4;
    local_70 = FFieldNotificationClassDescriptor::DistrictNameVisibility.BitNumber;
    local_78 = FFieldNotificationClassDescriptor::DistrictNameVisibility.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
    if (((this->ZoneNameVisibility != Collapsed) || (this->IslandNameVisibility != Collapsed)) ||
       (bVar3 = false, this->DistrictNameVisibility != Collapsed)) {
      bVar3 = true;
    }
    EVar4 = Collapsed;
    if (bVar3) {
      EVar4 = SelfHitTestInvisible;
    }
    UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,EVar4);
    FVar1 = this->START_ANIMATION_NAME;
    (this->DistrictAnimationEvent).AnimationName = FVar1;
    (this->ZoneAnimationEvent).AnimationName = FVar1;
    (this->DistrictAnimationEvent).AnimationEventType = PlayForward;
    (this->DistrictAnimationEvent).AnimationPlayTime = 0.0;
    (this->ZoneAnimationEvent).AnimationEventType = PlayForward;
    (this->ZoneAnimationEvent).AnimationPlayTime = 0.0;
    local_60 = FFieldNotificationClassDescriptor::DistrictAnimationEvent.BitNumber;
    local_68 = FFieldNotificationClassDescriptor::DistrictAnimationEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
    local_50 = FFieldNotificationClassDescriptor::ZoneAnimationEvent.BitNumber;
    local_58 = FFieldNotificationClassDescriptor::ZoneAnimationEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
    return;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->PlayNextAnimationDelegate);
  ::FName::FName(local_res8,"BroadcastOpenAnimationEvent");
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->PlayNextAnimationDelegate,(FWriteAccessScope *)&local_48);
  local_30 = &(this->PlayNextAnimationDelegate).field_0x8;
  puVar5 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseUFunctionDelegateInstance_VUDS_VM_W_ZoneInfo____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar5 + 4) = local_res8[0];
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar5[5] = 0;
    local_res20 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 5),(FObjectPtr)&local_res20);
    if (local_res8[0] == (FName)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InFunctionName != NAME_None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x56,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this_00 = FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar5 + 5));
    pUVar7 = UObject::FindFunctionChecked(this_00,local_res8[0]);
    puVar5[3] = pUVar7;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  (this->DistrictAnimationEvent).AnimationEventType = StopAnimation;
  (this->ZoneAnimationEvent).AnimationEventType = StopAnimation;
  local_b0 = FFieldNotificationClassDescriptor::DistrictAnimationEvent.BitNumber;
  local_b8 = FFieldNotificationClassDescriptor::DistrictAnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_b8);
  local_a0 = FFieldNotificationClassDescriptor::ZoneAnimationEvent.BitNumber;
  local_a8 = FFieldNotificationClassDescriptor::ZoneAnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
  (this->DistrictAnimationEvent).AnimationPlayTime = 0.0;
  (this->DistrictAnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->DistrictAnimationEvent).AnimationName.Number = 0;
  (this->DistrictAnimationEvent).NumberOfLoops = 1;
  (this->DistrictAnimationEvent).AnimationEventType = None;
  (this->DistrictAnimationEvent).AnimationStateType = None;
  (this->ZoneAnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->ZoneAnimationEvent).AnimationName.Number = 0;
  (this->ZoneAnimationEvent).AnimationPlayTime = 0.0;
  (this->ZoneAnimationEvent).AnimationEventType = None;
  (this->ZoneAnimationEvent).AnimationStateType = None;
  (this->ZoneAnimationEvent).NumberOfLoops = 1;
  return;
}

// IsSelfVisibility @ 14c023990

bool __thiscall UDS_VM_W_ZoneInfo::IsSelfVisibility(UDS_VM_W_ZoneInfo *this)

{
  if ((this->ZoneNameVisibility == Collapsed) && (this->IslandNameVisibility == Collapsed)) {
    return this->DistrictNameVisibility != Collapsed;
  }
  return true;
}

// OnDistrictAnimationFinishEvent @ 14c0292f0

void __thiscall
UDS_VM_W_ZoneInfo::OnDistrictAnimationFinishEvent
          (UDS_VM_W_ZoneInfo *this,FDS_WidgetAnimationEventField *param_1)

{
  FName local_18;
  int local_10;
  
  FDS_WidgetAnimationEventField::operator=(&this->DistrictAnimationEvent,param_1);
  if (((this->DistrictAnimationEvent).AnimationName.ComparisonIndex.Value !=
       (this->END_ANIMATION_NAME).ComparisonIndex.Value) ||
     ((this->DistrictAnimationEvent).AnimationName.Number != (this->END_ANIMATION_NAME).Number)) {
    (this->DistrictAnimationEvent).AnimationName = this->END_ANIMATION_NAME;
    (this->DistrictAnimationEvent).AnimationEventType = PlayForward;
    local_10 = FFieldNotificationClassDescriptor::DistrictAnimationEvent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::DistrictAnimationEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnSetViewModel @ 14c036780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_ZoneInfo::OnSetViewModel
          (UDS_VM_W_ZoneInfo *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_1c8 [32];
  TSharedPtr<FDS_ViewModelContext_ZoneInfo,1> local_198;
  FName local_188;
  int local_180;
  FName local_178;
  int local_170;
  FName local_168;
  int local_160;
  TSharedPtr<FDS_ViewModelContext,1> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_158.Object = param_1->Object;
  local_158.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_ZoneInfo>(&local_198,&local_158);
  if (local_198.Object == (FDS_ViewModelContext_ZoneInfo *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = (longlong)local_198.Object;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_W_ZoneInfo::OnSetViewModel",0x21,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,0x25,L"context is not valid.");
      if ((FDS_ViewModelContext_ZoneInfo *)local_148._padding_ !=
          (FDS_ViewModelContext_ZoneInfo *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    this->ZoneNameVisibility = Collapsed;
    local_180 = FFieldNotificationClassDescriptor::ZoneNameVisibility.BitNumber;
    local_188 = FFieldNotificationClassDescriptor::ZoneNameVisibility.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_188);
    this->IslandNameVisibility = Collapsed;
    local_170 = FFieldNotificationClassDescriptor::IslandNameVisibility.BitNumber;
    local_178 = FFieldNotificationClassDescriptor::IslandNameVisibility.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_178);
    this->DistrictNameVisibility = Collapsed;
    local_160 = FFieldNotificationClassDescriptor::DistrictNameVisibility.BitNumber;
    local_168 = FFieldNotificationClassDescriptor::DistrictNameVisibility.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
    if (local_198.Object == (FDS_ViewModelContext_ZoneInfo *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this->IslandId = (local_198.Object)->IslandId;
    this->ZoneId = (local_198.Object)->ZoneId;
    this->DistrictId = (local_198.Object)->DistrictId;
    this->ZoneVisibleType = (local_198.Object)->ZoneVisibleType;
    this->TableType = (local_198.Object)->TableType;
    this->ZoneDeathPenaltyID = (local_198.Object)->ZoneDeathPenaltyID;
    SetZoneID(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnZoneAnimationFinishEvent @ 14c03bba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_ZoneInfo::OnZoneAnimationFinishEvent
          (UDS_VM_W_ZoneInfo *this,FDS_WidgetAnimationEventField *param_1)

{
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  char cVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_WindowManager *this_01;
  longlong *plVar4;
  undefined1 auStackY_198 [32];
  FReadAccessScope local_168;
  float local_148 [2];
  UDS_WindowManager *local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  FDS_WidgetAnimationEventField::operator=(&this->ZoneAnimationFinishEvent,param_1);
  this_00 = &this->PlayNextAnimationDelegate;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_168);
  if (((*(int *)&(this->PlayNextAnimationDelegate).field_0x10 != 0) &&
      (plVar4 = *(longlong **)&(this->PlayNextAnimationDelegate).field_0x8,
      plVar4 != (longlong *)0x0)) && (cVar1 = (**(code **)(*plVar4 + 0x38))(), cVar1 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_168);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_168);
    if (*(int *)&(this->PlayNextAnimationDelegate).field_0x10 == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = *(longlong **)&(this->PlayNextAnimationDelegate).field_0x8;
    }
    (**(code **)(*plVar4 + 0x60))(plVar4);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_168);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_168);
  if (((this->ZoneAnimationFinishEvent).AnimationName.ComparisonIndex.Value ==
       (this->END_ANIMATION_NAME).ComparisonIndex.Value) &&
     ((this->ZoneAnimationFinishEvent).AnimationName.Number == (this->END_ANIMATION_NAME).Number)) {
    local_140 = UDS_WindowManager::GetInst();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_140 != (UDS_WindowManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_140);
    }
    local_168.DestructionSentinel.AccessType = 0;
    local_168.DestructionSentinel._4_4_ = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_140 != (UDS_WindowManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_140);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_168,(FObjectPtr)&local_140);
    bVar2 = TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr> *)&local_168,(void *)0x0);
    if (bVar2) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_W_ZoneInfo::OnZoneAnimationFinishEvent",0x2d,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x111,L"windowManager is nullptr.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      this_01 = (UDS_WindowManager *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_168);
      local_148[0] = 0.0;
      local_140 = (UDS_WindowManager *)((ulonglong)local_140 & 0xffffffff00000000);
      UDS_WindowManager::CloseWindow(this_01,HUDZoneInfo,(uint *)&local_140,local_148);
    }
  }
  else {
    (this->ZoneAnimationEvent).AnimationName = this->END_ANIMATION_NAME;
    (this->ZoneAnimationEvent).AnimationEventType = PlayForward;
    local_168.DestructionSentinel.Accessor._0_4_ =
         FFieldNotificationClassDescriptor::ZoneAnimationEvent.BitNumber;
    local_168.DestructionSentinel.AccessType =
         FFieldNotificationClassDescriptor::ZoneAnimationEvent.FieldName.ComparisonIndex.Value;
    local_168.DestructionSentinel._4_4_ =
         FFieldNotificationClassDescriptor::ZoneAnimationEvent.FieldName.Number;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
  }
  return;
}

// PlayAnimation @ 14c03d3e0

void __thiscall
UDS_VM_W_ZoneInfo::PlayAnimation(UDS_VM_W_ZoneInfo *this,FName *param_1,float param_2)

{
  longlong *plVar1;
  FName local_18;
  int local_10;
  
  plVar1 = &this->_padding_;
  (this->DistrictAnimationEvent).AnimationName = *param_1;
  (this->DistrictAnimationEvent).AnimationPlayTime = param_2;
  (this->DistrictAnimationEvent).AnimationEventType = PlayForward;
  (this->ZoneAnimationEvent).AnimationName = *param_1;
  (this->ZoneAnimationEvent).AnimationPlayTime = param_2;
  (this->ZoneAnimationEvent).AnimationEventType = PlayForward;
  local_10 = FFieldNotificationClassDescriptor::DistrictAnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DistrictAnimationEvent.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::ZoneAnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ZoneAnimationEvent.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  return;
}

// SetDistrictInfo @ 14c040e50

void __thiscall UDS_VM_W_ZoneInfo::SetDistrictInfo(UDS_VM_W_ZoneInfo *this)

{
  int iVar1;
  bool bVar2;
  ESlateVisibility EVar3;
  FDS_ZoneDistrictTableRow *this_00;
  FDS_StringWorldTableRow *pFVar4;
  FDS_ZoneDeathPenaltyTableRow *this_01;
  FNameEntryId FVar5;
  uint uVar6;
  FName local_68;
  int local_60;
  FDS_Text local_58;
  
  iVar1 = this->DistrictId;
  if (iVar1 == (iVar1 / 1000) * 1000) {
    this->DistrictNameVisibility = Collapsed;
    local_60 = FFieldNotificationClassDescriptor::DistrictNameVisibility.BitNumber;
    local_68 = FFieldNotificationClassDescriptor::DistrictNameVisibility.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
    return;
  }
  this_00 = FDS_ZoneDistrictTableRow::GetRef((longlong)iVar1,true);
  bVar2 = FDS_ZoneDistrictTableRow::IsValid(this_00);
  if (bVar2) {
    EVar3 = Collapsed;
    if (this_00->IsDistrictName == true) {
      EVar3 = SelfHitTestInvisible;
    }
    this->DistrictNameVisibility = EVar3;
    local_60 = FFieldNotificationClassDescriptor::DistrictNameVisibility.BitNumber;
    local_68 = FFieldNotificationClassDescriptor::DistrictNameVisibility.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
    pFVar4 = FDS_ZoneDistrictTableRow::ID_DistrictNameTable(this_00);
    local_58.StringTableType = None;
    local_58.StringTableID = 0;
    local_58.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_58.StringEnumTableNameID.Number = 0;
    local_58.TimeExpressionType = None;
    local_58.IsExpression = false;
    local_58.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.UniqueString.Data.ArrayNum = 0;
    local_58.UniqueString.Data.ArrayMax = 0;
    local_58.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.FormatArgs.ArrayNum = 0;
    local_58.FormatArgs.ArrayMax = 0;
    local_58.DateTime.Ticks = 0;
    local_58.TimeSpan.Ticks = 0;
    FDS_Text::SetTextFromStringTable(&local_58,pFVar4);
    FDS_Text::operator=(&this->ZoneDistrictName,&local_58);
    local_60 = FFieldNotificationClassDescriptor::ZoneDistrictName.BitNumber;
    local_68 = FFieldNotificationClassDescriptor::ZoneDistrictName.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
               local_58.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
    {
      FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
    }
    if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
    }
    if (this_00->Id_ZoneDeathPenalty == 0) {
      return;
    }
    this_01 = FDS_ZoneDistrictTableRow::Id_ZoneDeathPenaltyTable(this_00);
    bVar2 = FDS_ZoneDeathPenaltyTableRow::IsValid(this_01);
    if (!bVar2) {
      return;
    }
    this->DistrictNameResourcePathID = this_01->ID_FontStyle;
    FVar5 = FFieldNotificationClassDescriptor::DistrictNameResourcePathID.FieldName.ComparisonIndex.
            Value;
    uVar6 = FFieldNotificationClassDescriptor::DistrictNameResourcePathID.FieldName.Number;
    local_60 = FFieldNotificationClassDescriptor::DistrictNameResourcePathID.BitNumber;
  }
  else {
    this->DistrictNameVisibility = Collapsed;
    FVar5 = FFieldNotificationClassDescriptor::DistrictNameVisibility.FieldName.ComparisonIndex.
            Value;
    uVar6 = FFieldNotificationClassDescriptor::DistrictNameVisibility.FieldName.Number;
    local_60 = FFieldNotificationClassDescriptor::DistrictNameVisibility.BitNumber;
  }
  local_68.Number = uVar6;
  local_68.ComparisonIndex.Value = FVar5.Value;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
  return;
}

// SetDistrictNameResourcePathID @ 14c041040

void __thiscall
UDS_VM_W_ZoneInfo::SetDistrictNameResourcePathID(UDS_VM_W_ZoneInfo *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  this->DistrictNameResourcePathID = *param_1;
  local_10 = FFieldNotificationClassDescriptor::DistrictNameResourcePathID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DistrictNameResourcePathID.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetDistrictNameVisibility @ 14c041080

void __thiscall
UDS_VM_W_ZoneInfo::SetDistrictNameVisibility(UDS_VM_W_ZoneInfo *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  this->DistrictNameVisibility = *param_1;
  local_10 = FFieldNotificationClassDescriptor::DistrictNameVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DistrictNameVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetIslandInfo @ 14c041a50

void __thiscall UDS_VM_W_ZoneInfo::SetIslandInfo(UDS_VM_W_ZoneInfo *this)

{
  bool bVar1;
  FDS_ZoneIslandTableRow *this_00;
  FDS_StringWorldTableRow *pFVar2;
  FName local_68;
  int local_60;
  FDS_Text local_58;
  
  this_00 = FDS_ZoneIslandTableRow::GetRef((longlong)this->IslandId,true);
  bVar1 = FDS_ZoneIslandTableRow::IsValid(this_00);
  if (bVar1) {
    this->IslandNameVisibility = SelfHitTestInvisible;
    local_60 = FFieldNotificationClassDescriptor::IslandNameVisibility.BitNumber;
    local_68 = FFieldNotificationClassDescriptor::IslandNameVisibility.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
    pFVar2 = FDS_ZoneIslandTableRow::ID_IslandNameTable(this_00);
    local_58.StringTableType = None;
    local_58.StringTableID = 0;
    local_58.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_58.StringEnumTableNameID.Number = 0;
    local_58.TimeExpressionType = None;
    local_58.IsExpression = false;
    local_58.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.UniqueString.Data.ArrayNum = 0;
    local_58.UniqueString.Data.ArrayMax = 0;
    local_58.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.FormatArgs.ArrayNum = 0;
    local_58.FormatArgs.ArrayMax = 0;
    local_58.DateTime.Ticks = 0;
    local_58.TimeSpan.Ticks = 0;
    FDS_Text::SetTextFromStringTable(&local_58,pFVar2);
    FDS_Text::operator=(&this->ZoneIslandName,&local_58);
    local_60 = FFieldNotificationClassDescriptor::ZoneIslandName.BitNumber;
    local_68 = FFieldNotificationClassDescriptor::ZoneIslandName.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
               local_58.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
    {
      FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
    }
    if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
    }
  }
  else {
    this->IslandNameVisibility = Collapsed;
    local_60 = FFieldNotificationClassDescriptor::IslandNameVisibility.BitNumber;
    local_68 = FFieldNotificationClassDescriptor::IslandNameVisibility.FieldName;
    (**(code **)(this->_padding_ + 0x38))();
  }
  return;
}

// SetIslandNameVisibility @ 14c041ba0

void __thiscall
UDS_VM_W_ZoneInfo::SetIslandNameVisibility(UDS_VM_W_ZoneInfo *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  this->IslandNameVisibility = *param_1;
  local_10 = FFieldNotificationClassDescriptor::IslandNameVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IslandNameVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetStringWorldInfo @ 14c0438f0

void __thiscall UDS_VM_W_ZoneInfo::SetStringWorldInfo(UDS_VM_W_ZoneInfo *this)

{
  bool bVar1;
  FDS_StringWorldTableRow *this_00;
  FDS_ZoneDeathPenaltyTableRow *this_01;
  FDS_ResourceImageTableRow *this_02;
  FName local_68;
  int local_60;
  FDS_Text local_58;
  
  this_00 = FDS_StringWorldTableRow::GetRef((longlong)this->ZoneId,true);
  bVar1 = FDS_StringWorldTableRow::IsValid(this_00);
  if (bVar1) {
    this->ZoneNameVisibility = SelfHitTestInvisible;
    local_60 = FFieldNotificationClassDescriptor::ZoneNameVisibility.BitNumber;
    local_68 = FFieldNotificationClassDescriptor::ZoneNameVisibility.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
    local_58.StringTableType = None;
    local_58.StringTableID = 0;
    local_58.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_58.StringEnumTableNameID.Number = 0;
    local_58.TimeExpressionType = None;
    local_58.DateTime.Ticks = 0;
    local_58.TimeSpan.Ticks = 0;
    local_58.IsExpression = false;
    local_58.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.UniqueString.Data.ArrayNum = 0;
    local_58.UniqueString.Data.ArrayMax = 0;
    local_58.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.FormatArgs.ArrayNum = 0;
    local_58.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_58,this_00);
    FDS_Text::operator=(&this->ZoneName,&local_58);
    local_60 = FFieldNotificationClassDescriptor::ZoneName.BitNumber;
    local_68 = FFieldNotificationClassDescriptor::ZoneName.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
               local_58.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
    {
      FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
    }
    if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
    }
    if (0 < this->ZoneDeathPenaltyID) {
      this_01 = FDS_ZoneDeathPenaltyTableRow::GetRef((longlong)this->ZoneDeathPenaltyID,true);
      bVar1 = FDS_ZoneDeathPenaltyTableRow::IsValid(this_01);
      if (bVar1) {
        this_02 = FDS_ResourceImageTableRow::GetRef(this_01->ID_ZoneNameMsgBg,true);
        bVar1 = FDS_ResourceImageTableRow::IsValid(this_02);
        if (bVar1) {
          SetZoneResourcePath(this,&this_02->IconPath);
        }
        SetZoneNameResourcePathID(this,&this_01->ID_FontStyle);
      }
    }
  }
  else {
    this->ZoneNameVisibility = Collapsed;
    local_60 = FFieldNotificationClassDescriptor::ZoneNameVisibility.BitNumber;
    local_68 = FFieldNotificationClassDescriptor::ZoneNameVisibility.FieldName;
    (**(code **)(this->_padding_ + 0x38))();
  }
  return;
}

// SetZoneBaseInfo @ 14c046f60

void __thiscall UDS_VM_W_ZoneInfo::SetZoneBaseInfo(UDS_VM_W_ZoneInfo *this)

{
  bool bVar1;
  ESlateVisibility EVar2;
  FDS_ZoneBaseTableRow *this_00;
  FDS_ZoneGroupTableRow *pFVar3;
  FDS_StringWorldTableRow *pFVar4;
  FDS_ZonePropInfoTableRow *this_01;
  FDS_ZoneDeathPenaltyTableRow *this_02;
  FDS_ResourceImageTableRow *this_03;
  FName local_68;
  int local_60;
  FDS_Text local_58;
  
  this_00 = FDS_ZoneBaseTableRow::GetRef((longlong)this->ZoneId,true);
  bVar1 = FDS_ZoneBaseTableRow::IsValid(this_00);
  if (bVar1) {
    if (((this->ZoneVisibleType & 8) == 0) || (*(int *)((longlong)&this_00->_padding_ + 4) == 0)) {
      EVar2 = Collapsed;
      if (this_00->IsZoneName == true) {
        EVar2 = SelfHitTestInvisible;
      }
      this->ZoneNameVisibility = EVar2;
      local_60 = FFieldNotificationClassDescriptor::ZoneNameVisibility.BitNumber;
      local_68 = FFieldNotificationClassDescriptor::ZoneNameVisibility.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
      pFVar4 = FDS_ZoneBaseTableRow::ID_ZoneNameTable(this_00);
      local_58.StringTableType = None;
      local_58.StringTableID = 0;
      local_58.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_58.StringEnumTableNameID.Number = 0;
      local_58.TimeExpressionType = None;
      local_58.IsExpression = false;
      local_58.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.UniqueString.Data.ArrayNum = 0;
      local_58.UniqueString.Data.ArrayMax = 0;
      local_58.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.FormatArgs.ArrayNum = 0;
      local_58.FormatArgs.ArrayMax = 0;
      local_58.DateTime.Ticks = 0;
      local_58.TimeSpan.Ticks = 0;
      FDS_Text::SetTextFromStringTable(&local_58,pFVar4);
      FDS_Text::operator=(&this->ZoneName,&local_58);
      local_60 = FFieldNotificationClassDescriptor::ZoneName.BitNumber;
      local_68 = FFieldNotificationClassDescriptor::ZoneName.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
                 local_58.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
      }
      if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
      }
      this_01 = FDS_ZoneBaseTableRow::ID_PropInfoTable(this_00);
      this_02 = FDS_ZonePropInfoTableRow::Id_ZoneDeathPenaltyTable(this_01);
      bVar1 = FDS_ZoneDeathPenaltyTableRow::IsValid(this_02);
      if (bVar1) {
        this_03 = FDS_ResourceImageTableRow::GetRef(this_02->ID_ZoneNameMsgBg,true);
        bVar1 = FDS_ResourceImageTableRow::IsValid(this_03);
        if (bVar1) {
          SetZoneResourcePath(this,&this_03->IconPath);
        }
        local_60 = FFieldNotificationClassDescriptor::ZoneNameResourcePathID.BitNumber;
        local_68 = FFieldNotificationClassDescriptor::ZoneNameResourcePathID.FieldName;
        if (this->ZoneNameResourcePathID != this_02->ID_FontStyle) {
          this->ZoneNameResourcePathID = this_02->ID_FontStyle;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
        }
      }
    }
    else {
      this->ZoneNameVisibility = SelfHitTestInvisible;
      local_60 = FFieldNotificationClassDescriptor::ZoneNameVisibility.BitNumber;
      local_68 = FFieldNotificationClassDescriptor::ZoneNameVisibility.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
      pFVar3 = FDS_ZoneBaseTableRow::ID_ZoneGroupTable(this_00);
      local_58.StringTableType = None;
      local_58.StringTableID = 0;
      local_58.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_58.StringEnumTableNameID.Number = 0;
      local_58.TimeExpressionType = None;
      local_58.IsExpression = false;
      local_58.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.UniqueString.Data.ArrayNum = 0;
      local_58.UniqueString.Data.ArrayMax = 0;
      local_58.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.FormatArgs.ArrayNum = 0;
      local_58.FormatArgs.ArrayMax = 0;
      local_58.DateTime.Ticks = 0;
      local_58.TimeSpan.Ticks = 0;
      FDS_Text::SetTextFromStringID(&local_58,&pFVar3->ID_ZoneGroupName);
      FDS_Text::operator=(&this->ZoneName,&local_58);
      local_60 = FFieldNotificationClassDescriptor::ZoneName.BitNumber;
      local_68 = FFieldNotificationClassDescriptor::ZoneName.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
                 local_58.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
      }
      if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    this->ZoneNameVisibility = Collapsed;
    local_60 = FFieldNotificationClassDescriptor::ZoneNameVisibility.BitNumber;
    local_68 = FFieldNotificationClassDescriptor::ZoneNameVisibility.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
  }
  return;
}

// SetZoneDistrictName @ 14c047240

void __thiscall UDS_VM_W_ZoneInfo::SetZoneDistrictName(UDS_VM_W_ZoneInfo *this,FDS_Text *param_1)

{
  FName local_18;
  int local_10;
  
  FDS_Text::operator=(&this->ZoneDistrictName,param_1);
  local_10 = FFieldNotificationClassDescriptor::ZoneDistrictName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ZoneDistrictName.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetZoneID @ 14c047290

void __thiscall UDS_VM_W_ZoneInfo::SetZoneID(UDS_VM_W_ZoneInfo *this)

{
  bool bVar1;
  FDS_StringWorldTableRow *pFVar2;
  FDS_ZoneDeathPenaltyTableRow *this_00;
  FDS_ResourceImageTableRow *this_01;
  FDS_ZoneIslandTableRow *this_02;
  FName local_68;
  int local_60;
  FDS_Text local_58;
  
  if (this->TableType == 0x121) {
    pFVar2 = FDS_StringWorldTableRow::GetRef((longlong)this->ZoneId,true);
    bVar1 = FDS_StringWorldTableRow::IsValid(pFVar2);
    if (bVar1) {
      this->ZoneNameVisibility = SelfHitTestInvisible;
      local_60 = FFieldNotificationClassDescriptor::ZoneNameVisibility.BitNumber;
      local_68 = FFieldNotificationClassDescriptor::ZoneNameVisibility.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
      local_58.StringTableType = None;
      local_58.StringTableID = 0;
      local_58.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_58.StringEnumTableNameID.Number = 0;
      local_58.TimeExpressionType = None;
      local_58.IsExpression = false;
      local_58.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.UniqueString.Data.ArrayNum = 0;
      local_58.UniqueString.Data.ArrayMax = 0;
      local_58.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.FormatArgs.ArrayNum = 0;
      local_58.FormatArgs.ArrayMax = 0;
      local_58.DateTime.Ticks = 0;
      local_58.TimeSpan.Ticks = 0;
      FDS_Text::SetTextFromStringTable(&local_58,pFVar2);
      FDS_Text::operator=(&this->ZoneName,&local_58);
      local_60 = FFieldNotificationClassDescriptor::ZoneName.BitNumber;
      local_68 = FFieldNotificationClassDescriptor::ZoneName.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
                 local_58.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
      }
      if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
      }
      if (0 < this->ZoneDeathPenaltyID) {
        this_00 = FDS_ZoneDeathPenaltyTableRow::GetRef((longlong)this->ZoneDeathPenaltyID,true);
        bVar1 = FDS_ZoneDeathPenaltyTableRow::IsValid(this_00);
        if (bVar1) {
          this_01 = FDS_ResourceImageTableRow::GetRef(this_00->ID_ZoneNameMsgBg,true);
          bVar1 = FDS_ResourceImageTableRow::IsValid(this_01);
          if (bVar1) {
            SetZoneResourcePath(this,&this_01->IconPath);
          }
          SetZoneNameResourcePathID(this,&this_00->ID_FontStyle);
        }
      }
    }
    else {
      this->ZoneNameVisibility = Collapsed;
      local_60 = FFieldNotificationClassDescriptor::ZoneNameVisibility.BitNumber;
      local_68 = FFieldNotificationClassDescriptor::ZoneNameVisibility.FieldName;
      (**(code **)(this->_padding_ + 0x38))();
    }
  }
  else if (this->TableType == 0x149) {
    SetZoneBaseInfo(this);
    SetDistrictInfo(this);
    this_02 = FDS_ZoneIslandTableRow::GetRef((longlong)this->IslandId,true);
    bVar1 = FDS_ZoneIslandTableRow::IsValid(this_02);
    if (bVar1) {
      this->IslandNameVisibility = SelfHitTestInvisible;
      local_60 = FFieldNotificationClassDescriptor::IslandNameVisibility.BitNumber;
      local_68 = FFieldNotificationClassDescriptor::IslandNameVisibility.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
      pFVar2 = FDS_ZoneIslandTableRow::ID_IslandNameTable(this_02);
      local_58.StringTableType = None;
      local_58.StringTableID = 0;
      local_58.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_58.StringEnumTableNameID.Number = 0;
      local_58.TimeExpressionType = None;
      local_58.IsExpression = false;
      local_58.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.UniqueString.Data.ArrayNum = 0;
      local_58.UniqueString.Data.ArrayMax = 0;
      local_58.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.FormatArgs.ArrayNum = 0;
      local_58.FormatArgs.ArrayMax = 0;
      local_58.DateTime.Ticks = 0;
      local_58.TimeSpan.Ticks = 0;
      FDS_Text::SetTextFromStringTable(&local_58,pFVar2);
      FDS_Text::operator=(&this->ZoneIslandName,&local_58);
      local_60 = FFieldNotificationClassDescriptor::ZoneIslandName.BitNumber;
      local_68 = FFieldNotificationClassDescriptor::ZoneIslandName.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
                 local_58.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
      }
      if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
      }
    }
    else {
      this->IslandNameVisibility = Collapsed;
      local_60 = FFieldNotificationClassDescriptor::IslandNameVisibility.BitNumber;
      local_68 = FFieldNotificationClassDescriptor::IslandNameVisibility.FieldName;
      (**(code **)(this->_padding_ + 0x38))();
    }
  }
  BroadcastOpenAnimationEvent(this);
  return;
}

// SetZoneIslandName @ 14c0477c0

void __thiscall UDS_VM_W_ZoneInfo::SetZoneIslandName(UDS_VM_W_ZoneInfo *this,FDS_Text *param_1)

{
  FName local_18;
  int local_10;
  
  FDS_Text::operator=(&this->ZoneIslandName,param_1);
  local_10 = FFieldNotificationClassDescriptor::ZoneIslandName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ZoneIslandName.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetZoneName @ 14c047810

void __thiscall UDS_VM_W_ZoneInfo::SetZoneName(UDS_VM_W_ZoneInfo *this,FDS_Text *param_1)

{
  FName local_18;
  int local_10;
  
  FDS_Text::operator=(&this->ZoneName,param_1);
  local_10 = FFieldNotificationClassDescriptor::ZoneName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ZoneName.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetZoneNameResourcePathID @ 14c047940

void __thiscall UDS_VM_W_ZoneInfo::SetZoneNameResourcePathID(UDS_VM_W_ZoneInfo *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ZoneNameResourcePathID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ZoneNameResourcePathID.FieldName;
  if (this->ZoneNameResourcePathID != *param_1) {
    this->ZoneNameResourcePathID = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetZoneNameVisibility @ 14c047990

void __thiscall
UDS_VM_W_ZoneInfo::SetZoneNameVisibility(UDS_VM_W_ZoneInfo *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  this->ZoneNameVisibility = *param_1;
  local_10 = FFieldNotificationClassDescriptor::ZoneNameVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ZoneNameVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetZoneResourcePath @ 14c0479d0

void __thiscall
UDS_VM_W_ZoneInfo::SetZoneResourcePath(UDS_VM_W_ZoneInfo *this,FSoftObjectPath *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  FName FVar4;
  FName FVar5;
  int iVar6;
  bool bVar7;
  FUtf8String *pFVar8;
  FName local_28;
  int local_20;
  
  iVar6 = FFieldNotificationClassDescriptor::ZoneResourcePath.BitNumber;
  FVar5 = FFieldNotificationClassDescriptor::ZoneResourcePath.FieldName;
  bVar7 = FSoftObjectPath::operator==(&this->ZoneResourcePath,param_1);
  if (!bVar7) {
    FVar4 = (param_1->AssetPath).AssetName;
    (this->ZoneResourcePath).AssetPath.PackageName = (param_1->AssetPath).PackageName;
    (this->ZoneResourcePath).AssetPath.AssetName = FVar4;
    pFVar8 = &(this->ZoneResourcePath).SubPathString;
    if (pFVar8 != &param_1->SubPathString) {
      iVar2 = (param_1->SubPathString).Data.ArrayNum;
      piVar1 = &(this->ZoneResourcePath).SubPathString.Data.ArrayMax;
      iVar3 = *piVar1;
      _Src = (param_1->SubPathString).Data.AllocatorInstance.Data;
      (this->ZoneResourcePath).SubPathString.Data.ArrayNum = iVar2;
      if ((iVar2 == 0) && (iVar3 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar2,iVar3,(ForAnyElementType *)pFVar8,iVar2,piVar1);
        if (iVar2 != 0) {
          memcpy((pFVar8->Data).AllocatorInstance.Data,_Src,(longlong)iVar2);
        }
      }
    }
    local_28 = FVar5;
    local_20 = iVar6;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// StopCurrentAnimation @ 14c047b90

void __thiscall UDS_VM_W_ZoneInfo::StopCurrentAnimation(UDS_VM_W_ZoneInfo *this)

{
  FName local_18;
  int local_10;
  
  (this->DistrictAnimationEvent).AnimationEventType = StopAnimation;
  (this->ZoneAnimationEvent).AnimationEventType = StopAnimation;
  local_10 = FFieldNotificationClassDescriptor::DistrictAnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DistrictAnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  local_10 = FFieldNotificationClassDescriptor::ZoneAnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ZoneAnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  (this->DistrictAnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->DistrictAnimationEvent).AnimationName.Number = 0;
  (this->DistrictAnimationEvent).AnimationPlayTime = 0.0;
  (this->DistrictAnimationEvent).AnimationEventType = None;
  (this->DistrictAnimationEvent).AnimationStateType = None;
  (this->DistrictAnimationEvent).NumberOfLoops = 1;
  (this->ZoneAnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->ZoneAnimationEvent).AnimationName.Number = 0;
  (this->ZoneAnimationEvent).AnimationPlayTime = 0.0;
  (this->ZoneAnimationEvent).AnimationEventType = None;
  (this->ZoneAnimationEvent).AnimationStateType = None;
  (this->ZoneAnimationEvent).NumberOfLoops = 1;
  return;
}

