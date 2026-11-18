// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// SetPlusButtonClickEvent_WrapperImpl @ 14b753df0

void __cdecl UDS_VM_W_WarMap::SetPlusButtonClickEvent_WrapperImpl(void *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  *(int *)((longlong)param_1 + 0xac) = *(int *)((longlong)param_1 + 0xac) + 1;
  iVar1 = *(int *)((longlong)param_1 + 0xb0);
  iVar2 = *(int *)((longlong)param_1 + 0xac);
  if (iVar1 < *(int *)((longlong)param_1 + 0xac)) {
    *(int *)((longlong)param_1 + 0xac) = iVar1;
    iVar2 = iVar1;
  }
  iStack_10 = FFieldNotificationClassDescriptor::WarMapSizeRatio.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::WarMapSizeRatio.FieldName;
  if ((float)iVar2 / (float)iVar1 != *(float *)((longlong)param_1 + 0xa4)) {
    *(float *)((longlong)param_1 + 0xa4) = (float)iVar2 / (float)iVar1;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  iStack_10 = FFieldNotificationClassDescriptor::SwitcherIndex.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::SwitcherIndex.FieldName;
  if (*(int *)((longlong)param_1 + 0xa8) != *(int *)((longlong)param_1 + 0xac)) {
    *(int *)((longlong)param_1 + 0xa8) = *(int *)((longlong)param_1 + 0xac);
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetMinusButtonClickEvent_WrapperImpl @ 14b753e00

void __cdecl UDS_VM_W_WarMap::SetMinusButtonClickEvent_WrapperImpl(void *param_1,void *param_2)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  FName FStack_18;
  int iStack_10;
  
  piVar1 = (int *)((longlong)param_1 + 0xac);
  *piVar1 = *piVar1 + -1;
  iVar2 = *(int *)((longlong)param_1 + 0xac);
  if (*piVar1 < 0) {
    iVar2 = 0;
    *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  }
  iStack_10 = FFieldNotificationClassDescriptor::WarMapSizeRatio.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::WarMapSizeRatio.FieldName;
  fVar3 = (float)iVar2 / (float)*(int *)((longlong)param_1 + 0xb0);
  if (fVar3 != *(float *)((longlong)param_1 + 0xa4)) {
    *(float *)((longlong)param_1 + 0xa4) = fVar3;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  iStack_10 = FFieldNotificationClassDescriptor::SwitcherIndex.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::SwitcherIndex.FieldName;
  if (*(int *)((longlong)param_1 + 0xa8) != *(int *)((longlong)param_1 + 0xac)) {
    *(int *)((longlong)param_1 + 0xa8) = *(int *)((longlong)param_1 + 0xac);
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetCloseButtonClickEvent_WrapperImpl @ 14b753e10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_W_WarMap::SetCloseButtonClickEvent_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WindowManager *this;
  UDS_HudManager *this_00;
  float afStackX_18 [2];
  uint auStackX_20 [2];
  
  this = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this == (UDS_WindowManager *)0x0) goto LAB_14c028012;
  }
  else {
    if (this == (UDS_WindowManager *)0x0) goto LAB_14c028012;
    UE::GC::MarkAsReachable((UObject *)this);
  }
  afStackX_18[0] = 0.0;
  auStackX_20[0] = 0;
  UDS_WindowManager::CloseWindow(this,ServerMap,auStackX_20,afStackX_18);
LAB_14c028012:
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

// SetWarMapSizeRatio_WrapperImpl @ 14b753e20

void __cdecl UDS_VM_W_WarMap::SetWarMapSizeRatio_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::WarMapSizeRatio.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::WarMapSizeRatio.FieldName;
  if (*(float *)param_2 != *(float *)((longlong)param_1 + 0xa4)) {
    *(float *)((longlong)param_1 + 0xa4) = *(float *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// SetSwitcherIndex_WrapperImpl @ 14b753e30

void __cdecl UDS_VM_W_WarMap::SetSwitcherIndex_WrapperImpl(void *param_1,void *param_2)

{
  SetSwitcherIndex(param_1,*(int *)param_2);
  return;
}

// StaticClass @ 14b753e40

UClass * __cdecl UDS_VM_W_WarMap::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_WarMap.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_WarMap",
               &Z_Registration_Info_UClass_UDS_VM_W_WarMap.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_WarMap,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_W_WarMap>,InternalVTableHelperCtorCaller<UDS_VM_W_WarMap>,
               local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_WarMap.InnerSingleton;
}

// UDS_VM_W_WarMap @ 14b75a010

UDS_VM_W_WarMap * __thiscall
UDS_VM_W_WarMap::UDS_VM_W_WarMap(UDS_VM_W_WarMap *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->CurrentWarMapSizeStep = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_WarMap__6B_;
  this->WarMapMaxSizeStep = 2;
  return this;
}

// UDS_VM_W_WarMap @ 14b75a070

UDS_VM_W_WarMap * __thiscall
UDS_VM_W_WarMap::UDS_VM_W_WarMap(UDS_VM_W_WarMap *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->CurrentWarMapSizeStep = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_WarMap__6B_;
  this->WarMapMaxSizeStep = 2;
  return this;
}

// ~UDS_VM_W_WarMap @ 14b75bc10

void __thiscall UDS_VM_W_WarMap::~UDS_VM_W_WarMap(UDS_VM_W_WarMap *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_WarMap__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b75deb0

IClassDescriptor * __thiscall UDS_VM_W_WarMap::GetFieldNotificationDescriptor(UDS_VM_W_WarMap *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_WarMap::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b75e8b0

UClass * __cdecl UDS_VM_W_WarMap::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_WarMap.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_WarMap",
               &Z_Registration_Info_UClass_UDS_VM_W_WarMap.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_WarMap,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_W_WarMap>,InternalVTableHelperCtorCaller<UDS_VM_W_WarMap>,
               local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_WarMap.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_WarMap @ 14b75efd0

void __cdecl UDS_VM_W_WarMap::StaticRegisterNativesUDS_VM_W_WarMap(void)

{
  return;
}

// OnCloseButtonClickEvent @ 14c027fc0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_WarMap::OnCloseButtonClickEvent(UDS_VM_W_WarMap *this,FWidgetEventField *param_1)

{
  UDS_WindowManager *this_00;
  UDS_HudManager *this_01;
  float local_res18 [2];
  uint local_res20 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 == (UDS_WindowManager *)0x0) goto LAB_14c028012;
  }
  else {
    if (this_00 == (UDS_WindowManager *)0x0) goto LAB_14c028012;
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  local_res18[0] = 0.0;
  local_res20[0] = 0;
  UDS_WindowManager::CloseWindow(this_00,ServerMap,local_res20,local_res18);
LAB_14c028012:
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

// OnMinusButtonClickEvent @ 14c02cfd0

void __thiscall
UDS_VM_W_WarMap::OnMinusButtonClickEvent(UDS_VM_W_WarMap *this,FWidgetEventField *param_1)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  FName local_18;
  int local_10;
  
  piVar1 = &this->CurrentWarMapSizeStep;
  *piVar1 = *piVar1 + -1;
  iVar2 = this->CurrentWarMapSizeStep;
  if (*piVar1 < 0) {
    iVar2 = 0;
    this->CurrentWarMapSizeStep = 0;
  }
  local_10 = FFieldNotificationClassDescriptor::WarMapSizeRatio.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::WarMapSizeRatio.FieldName;
  fVar3 = (float)iVar2 / (float)this->WarMapMaxSizeStep;
  if (fVar3 != this->WarMapSizeRatio) {
    this->WarMapSizeRatio = fVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::SwitcherIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SwitcherIndex.FieldName;
  if (this->SwitcherIndex != this->CurrentWarMapSizeStep) {
    this->SwitcherIndex = this->CurrentWarMapSizeStep;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnPlusButtonClickEvent @ 14c02df10

void __thiscall
UDS_VM_W_WarMap::OnPlusButtonClickEvent(UDS_VM_W_WarMap *this,FWidgetEventField *param_1)

{
  int iVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  this->CurrentWarMapSizeStep = this->CurrentWarMapSizeStep + 1;
  iVar1 = this->WarMapMaxSizeStep;
  iVar2 = this->CurrentWarMapSizeStep;
  if (iVar1 < this->CurrentWarMapSizeStep) {
    this->CurrentWarMapSizeStep = iVar1;
    iVar2 = iVar1;
  }
  local_10 = FFieldNotificationClassDescriptor::WarMapSizeRatio.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::WarMapSizeRatio.FieldName;
  if ((float)iVar2 / (float)iVar1 != this->WarMapSizeRatio) {
    this->WarMapSizeRatio = (float)iVar2 / (float)iVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::SwitcherIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SwitcherIndex.FieldName;
  if (this->SwitcherIndex != this->CurrentWarMapSizeStep) {
    this->SwitcherIndex = this->CurrentWarMapSizeStep;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnSetViewModel @ 14c036410

void __thiscall
UDS_VM_W_WarMap::OnSetViewModel(UDS_VM_W_WarMap *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  int iVar3;
  float fVar4;
  FName local_18;
  int local_10;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  iVar3 = FFieldNotificationClassDescriptor::WarMapSizeRatio.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::WarMapSizeRatio.FieldName;
  fVar4 = (float)this->CurrentWarMapSizeStep / (float)this->WarMapMaxSizeStep;
  if (fVar4 != this->WarMapSizeRatio) {
    this->WarMapSizeRatio = fVar4;
    local_10 = iVar3;
    local_18 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetSwitcherIndex @ 14c043a90

void __thiscall UDS_VM_W_WarMap::SetSwitcherIndex(UDS_VM_W_WarMap *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::SwitcherIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SwitcherIndex.FieldName;
  if (this->SwitcherIndex != param_1) {
    this->SwitcherIndex = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetWarMapSizeRatio @ 14c046300

void __thiscall UDS_VM_W_WarMap::SetWarMapSizeRatio(UDS_VM_W_WarMap *this,float *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::WarMapSizeRatio.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::WarMapSizeRatio.FieldName;
  if (*param_1 != this->WarMapSizeRatio) {
    this->WarMapSizeRatio = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

