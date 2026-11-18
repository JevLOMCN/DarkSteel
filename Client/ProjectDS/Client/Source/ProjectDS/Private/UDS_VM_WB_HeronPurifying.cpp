// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 22

// SetHeronPurifyingClickEvent_WrapperImpl @ 14b6fd480

void __cdecl
UDS_VM_WB_HeronPurifying::SetHeronPurifyingClickEvent_WrapperImpl(void *param_1,void *param_2)

{
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> TStack_38;
  FStringFormatArg FStack_28;
  
  FStringFormatArg::FStringFormatArg(&FStack_28,L"Purifying");
  TStack_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_38.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&TStack_38.AllocatorInstance,1,&TStack_38.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>
            (TStack_38.AllocatorInstance.Data,&FStack_28,1);
  UDS_UIMessageManager::OpenMsgByStringUi
            (0x57b,Alert_None_01,&TStack_38,
             (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
              *)0x0);
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)TStack_38.AllocatorInstance.Data,TStack_38.ArrayNum);
  if ((FStringFormatArg *)TStack_38.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(TStack_38.AllocatorInstance.Data);
  }
  if (FStack_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.StringValue.Data.AllocatorInstance.Data);
  }
  return;
}

// SetHeronExitClickEvent_WrapperImpl @ 14b6fd490

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_WB_HeronPurifying::SetHeronExitClickEvent_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WindowManager *this;
  UDS_HudManager *this_00;
  float afStackX_18 [2];
  uint auStackX_20 [2];
  
  this = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this == (UDS_WindowManager *)0x0) goto LAB_14bfbd712;
  }
  else {
    if (this == (UDS_WindowManager *)0x0) goto LAB_14bfbd712;
    UE::GC::MarkAsReachable((UObject *)this);
  }
  afStackX_18[0] = 0.0;
  auStackX_20[0] = 0;
  UDS_WindowManager::CloseWindow(this,HeronPurifying,auStackX_20,afStackX_18);
LAB_14bfbd712:
  this_00 = UDS_HudManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 != (UDS_HudManager *)0x0) {
      UDS_HudManager::OpenHUD(this_00);
      return;
    }
  }
  else if (this_00 != (UDS_HudManager *)0x0) {
    UE::GC::MarkAsReachable((UObject *)this_00);
    UDS_HudManager::OpenHUD(this_00);
    return;
  }
  return;
}

// SetHeronQuantity_WrapperImpl @ 14b6fd4a0

void __cdecl UDS_VM_WB_HeronPurifying::SetHeronQuantity_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::HeronQuantity.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::HeronQuantity.FieldName;
  if (*(int *)((longlong)param_1 + 0xa4) != *(int *)param_2) {
    *(int *)((longlong)param_1 + 0xa4) = *(int *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetEtherQuantity_WrapperImpl @ 14b6fd4b0

void __cdecl UDS_VM_WB_HeronPurifying::SetEtherQuantity_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::EtherQuantity.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::EtherQuantity.FieldName;
  if (*(int *)((longlong)param_1 + 0xa8) != *(int *)param_2) {
    *(int *)((longlong)param_1 + 0xa8) = *(int *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetDarkSteelQuantity_WrapperImpl @ 14b6fd4c0

void __cdecl UDS_VM_WB_HeronPurifying::SetDarkSteelQuantity_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::DarkSteelQuantity.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::DarkSteelQuantity.FieldName;
  if (*(int *)((longlong)param_1 + 0xac) != *(int *)param_2) {
    *(int *)((longlong)param_1 + 0xac) = *(int *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetArtefactQuantity_WrapperImpl @ 14b6fd4d0

void __cdecl UDS_VM_WB_HeronPurifying::SetArtefactQuantity_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::ArtefactQuantity.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::ArtefactQuantity.FieldName;
  if (*(int *)((longlong)param_1 + 0xb0) != *(int *)param_2) {
    *(int *)((longlong)param_1 + 0xb0) = *(int *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetSliderValue_WrapperImpl @ 14b6fd4e0

void __cdecl UDS_VM_WB_HeronPurifying::SetSliderValue_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::SliderValue.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::SliderValue.FieldName;
  if (*(float *)param_2 != *(float *)((longlong)param_1 + 0xb4)) {
    *(float *)((longlong)param_1 + 0xb4) = *(float *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// StaticClass @ 14b6fd4f0

UClass * __cdecl UDS_VM_WB_HeronPurifying::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WB_HeronPurifying.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WB_HeronPurifying",
               &Z_Registration_Info_UClass_UDS_VM_WB_HeronPurifying.InnerSingleton,
               StaticRegisterNativesUDS_VM_WB_HeronPurifying,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_WB_HeronPurifying>,
               InternalVTableHelperCtorCaller<UDS_VM_WB_HeronPurifying>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WB_HeronPurifying.InnerSingleton;
}

// UDS_VM_WB_HeronPurifying @ 14b700200

UDS_VM_WB_HeronPurifying * __thiscall
UDS_VM_WB_HeronPurifying::UDS_VM_WB_HeronPurifying
          (UDS_VM_WB_HeronPurifying *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WB_HeronPurifying__6B_;
  return this;
}

// UDS_VM_WB_HeronPurifying @ 14b700240

UDS_VM_WB_HeronPurifying * __thiscall
UDS_VM_WB_HeronPurifying::UDS_VM_WB_HeronPurifying
          (UDS_VM_WB_HeronPurifying *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WB_HeronPurifying__6B_;
  return this;
}

// ~UDS_VM_WB_HeronPurifying @ 14b702c10

void __thiscall UDS_VM_WB_HeronPurifying::~UDS_VM_WB_HeronPurifying(UDS_VM_WB_HeronPurifying *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WB_HeronPurifying__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b705d60

IClassDescriptor * __thiscall
UDS_VM_WB_HeronPurifying::GetFieldNotificationDescriptor(UDS_VM_WB_HeronPurifying *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_WB_HeronPurifying::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b706710

UClass * __cdecl UDS_VM_WB_HeronPurifying::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WB_HeronPurifying.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WB_HeronPurifying",
               &Z_Registration_Info_UClass_UDS_VM_WB_HeronPurifying.InnerSingleton,
               StaticRegisterNativesUDS_VM_WB_HeronPurifying,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_WB_HeronPurifying>,
               InternalVTableHelperCtorCaller<UDS_VM_WB_HeronPurifying>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WB_HeronPurifying.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_WB_HeronPurifying @ 14b7075f0

void __cdecl UDS_VM_WB_HeronPurifying::StaticRegisterNativesUDS_VM_WB_HeronPurifying(void)

{
  return;
}

// OnHeronExitClickEvent @ 14bfbd6c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WB_HeronPurifying::OnHeronExitClickEvent
          (UDS_VM_WB_HeronPurifying *this,FWidgetEventField *param_1)

{
  UDS_WindowManager *this_00;
  UDS_HudManager *this_01;
  float local_res18 [2];
  uint local_res20 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 == (UDS_WindowManager *)0x0) goto LAB_14bfbd712;
  }
  else {
    if (this_00 == (UDS_WindowManager *)0x0) goto LAB_14bfbd712;
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  local_res18[0] = 0.0;
  local_res20[0] = 0;
  UDS_WindowManager::CloseWindow(this_00,HeronPurifying,local_res20,local_res18);
LAB_14bfbd712:
  this_01 = UDS_HudManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_01 != (UDS_HudManager *)0x0) {
      UDS_HudManager::OpenHUD(this_01);
      return;
    }
  }
  else if (this_01 != (UDS_HudManager *)0x0) {
    UE::GC::MarkAsReachable((UObject *)this_01);
    UDS_HudManager::OpenHUD(this_01);
    return;
  }
  return;
}

// OnHeronPurifyingClickEvent @ 14bfbd760

void __thiscall
UDS_VM_WB_HeronPurifying::OnHeronPurifyingClickEvent
          (UDS_VM_WB_HeronPurifying *this,FWidgetEventField *param_1)

{
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_38;
  FStringFormatArg local_28;
  
  FStringFormatArg::FStringFormatArg(&local_28,L"Purifying");
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_38.AllocatorInstance,1,&local_38.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_38.AllocatorInstance.Data,&local_28,1)
  ;
  UDS_UIMessageManager::OpenMsgByStringUi
            (0x57b,Alert_None_01,&local_38,
             (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
              *)0x0);
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if ((FStringFormatArg *)local_38.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
  }
  return;
}

// OnSetViewModel @ 14bfc2e90

void __thiscall
UDS_VM_WB_HeronPurifying::OnSetViewModel
          (UDS_VM_WB_HeronPurifying *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  int iVar3;
  FName local_18;
  int local_10;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  iVar3 = FFieldNotificationClassDescriptor::HeronQuantity.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::HeronQuantity.FieldName;
  if (this->HeronQuantity != 0) {
    this->HeronQuantity = 0;
    local_10 = iVar3;
    local_18 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  iVar3 = FFieldNotificationClassDescriptor::EtherQuantity.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::EtherQuantity.FieldName;
  if (this->EtherQuantity != 0) {
    this->EtherQuantity = 0;
    local_10 = iVar3;
    local_18 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  iVar3 = FFieldNotificationClassDescriptor::DarkSteelQuantity.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::DarkSteelQuantity.FieldName;
  if (this->DarkSteelQuantity != 0) {
    this->DarkSteelQuantity = 0;
    local_10 = iVar3;
    local_18 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  iVar3 = FFieldNotificationClassDescriptor::ArtefactQuantity.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::ArtefactQuantity.FieldName;
  if (this->ArtefactQuantity != 0) {
    this->ArtefactQuantity = 0;
    local_10 = iVar3;
    local_18 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  FVar2 = FFieldNotificationClassDescriptor::SliderValue.FieldName;
  if (this->SliderValue != 0.0) {
    local_10 = FFieldNotificationClassDescriptor::SliderValue.BitNumber;
    this->SliderValue = 0.0;
    local_18 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetArtefactQuantity @ 14bfd6100

void __thiscall
UDS_VM_WB_HeronPurifying::SetArtefactQuantity(UDS_VM_WB_HeronPurifying *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ArtefactQuantity.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ArtefactQuantity.FieldName;
  if (this->ArtefactQuantity != *param_1) {
    this->ArtefactQuantity = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetDarkSteelQuantity @ 14bfd9520

void __thiscall
UDS_VM_WB_HeronPurifying::SetDarkSteelQuantity(UDS_VM_WB_HeronPurifying *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::DarkSteelQuantity.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DarkSteelQuantity.FieldName;
  if (this->DarkSteelQuantity != *param_1) {
    this->DarkSteelQuantity = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetEtherQuantity @ 14bfd99b0

void __thiscall
UDS_VM_WB_HeronPurifying::SetEtherQuantity(UDS_VM_WB_HeronPurifying *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::EtherQuantity.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::EtherQuantity.FieldName;
  if (this->EtherQuantity != *param_1) {
    this->EtherQuantity = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetHeronQuantity @ 14bfda3a0

void __thiscall
UDS_VM_WB_HeronPurifying::SetHeronQuantity(UDS_VM_WB_HeronPurifying *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::HeronQuantity.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::HeronQuantity.FieldName;
  if (this->HeronQuantity != *param_1) {
    this->HeronQuantity = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetSliderValue @ 14bfdd890

void __thiscall
UDS_VM_WB_HeronPurifying::SetSliderValue(UDS_VM_WB_HeronPurifying *this,float *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::SliderValue.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SliderValue.FieldName;
  if (*param_1 != this->SliderValue) {
    this->SliderValue = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

