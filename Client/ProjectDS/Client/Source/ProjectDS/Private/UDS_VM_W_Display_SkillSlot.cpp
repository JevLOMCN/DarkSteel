// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b72e350

UClass * __cdecl UDS_VM_W_Display_SkillSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Display_SkillSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Display_SkillSlot",
               &Z_Registration_Info_UClass_UDS_VM_W_Display_SkillSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Display_SkillSlot,0x110,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_Display_SkillSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Display_SkillSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Display_SkillSlot.InnerSingleton;
}

// UDS_VM_W_Display_SkillSlot @ 14b734c90

UDS_VM_W_Display_SkillSlot * __thiscall
UDS_VM_W_Display_SkillSlot::UDS_VM_W_Display_SkillSlot
          (UDS_VM_W_Display_SkillSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Display_SkillSlot__6B_;
  (this->VM_SkillData).field0_0x0.DebugPtr = (UDS_VM_SkillData *)0x0;
  (this->BtnEventField)._padding_ = '\0';
  (this->BtnEventField).bIsCustomSelected = false;
  (this->BtnEventField).bIsLacked = false;
  (this->BtnEventField).bIsCustomDisabled = false;
  *(undefined8 *)&(this->BtnEventField).Delegate = 0;
  *(undefined8 *)&(this->BtnEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->BtnEventField).Delegate.field_0x10 = 0;
  (this->BtnHoveredEventField)._padding_ = '\0';
  (this->BtnHoveredEventField).bIsCustomSelected = false;
  (this->BtnHoveredEventField).bIsLacked = false;
  (this->BtnHoveredEventField).bIsCustomDisabled = false;
  *(undefined8 *)&(this->BtnHoveredEventField).Delegate = 0;
  *(undefined8 *)&(this->BtnHoveredEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->BtnHoveredEventField).Delegate.field_0x10 = 0;
  (this->BtnUnHoveredEventField)._padding_ = '\0';
  (this->BtnUnHoveredEventField).bIsCustomSelected = false;
  (this->BtnUnHoveredEventField).bIsLacked = false;
  (this->BtnUnHoveredEventField).bIsCustomDisabled = false;
  *(undefined8 *)&(this->BtnUnHoveredEventField).Delegate = 0;
  *(undefined8 *)&(this->BtnUnHoveredEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->BtnUnHoveredEventField).Delegate.field_0x10 = 0;
  return this;
}

// UDS_VM_W_Display_SkillSlot @ 14b734d30

UDS_VM_W_Display_SkillSlot * __thiscall
UDS_VM_W_Display_SkillSlot::UDS_VM_W_Display_SkillSlot
          (UDS_VM_W_Display_SkillSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Display_SkillSlot__6B_;
  (this->VM_SkillData).field0_0x0.DebugPtr = (UDS_VM_SkillData *)0x0;
  (this->BtnEventField)._padding_ = '\0';
  (this->BtnEventField).bIsCustomSelected = false;
  (this->BtnEventField).bIsLacked = false;
  (this->BtnEventField).bIsCustomDisabled = false;
  *(undefined8 *)&(this->BtnEventField).Delegate = 0;
  *(undefined8 *)&(this->BtnEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->BtnEventField).Delegate.field_0x10 = 0;
  (this->BtnHoveredEventField)._padding_ = '\0';
  (this->BtnHoveredEventField).bIsCustomSelected = false;
  (this->BtnHoveredEventField).bIsLacked = false;
  (this->BtnHoveredEventField).bIsCustomDisabled = false;
  *(undefined8 *)&(this->BtnHoveredEventField).Delegate = 0;
  *(undefined8 *)&(this->BtnHoveredEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->BtnHoveredEventField).Delegate.field_0x10 = 0;
  (this->BtnUnHoveredEventField)._padding_ = '\0';
  (this->BtnUnHoveredEventField).bIsCustomSelected = false;
  (this->BtnUnHoveredEventField).bIsLacked = false;
  (this->BtnUnHoveredEventField).bIsCustomDisabled = false;
  *(undefined8 *)&(this->BtnUnHoveredEventField).Delegate = 0;
  *(undefined8 *)&(this->BtnUnHoveredEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->BtnUnHoveredEventField).Delegate.field_0x10 = 0;
  return this;
}

// ~UDS_VM_W_Display_SkillSlot @ 14b736430

void __thiscall
UDS_VM_W_Display_SkillSlot::~UDS_VM_W_Display_SkillSlot(UDS_VM_W_Display_SkillSlot *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Display_SkillSlot__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->BtnUnHoveredEventField).Delegate);
  pvVar1 = *(void **)&(this->BtnUnHoveredEventField).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->BtnUnHoveredEventField).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->BtnHoveredEventField).Delegate);
  pvVar1 = *(void **)&(this->BtnHoveredEventField).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->BtnHoveredEventField).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->BtnEventField).Delegate);
  pvVar1 = *(void **)&(this->BtnEventField).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->BtnEventField).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b739520

IClassDescriptor * __thiscall
UDS_VM_W_Display_SkillSlot::GetFieldNotificationDescriptor(UDS_VM_W_Display_SkillSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_Display_SkillSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b73a380

UClass * __cdecl UDS_VM_W_Display_SkillSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Display_SkillSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Display_SkillSlot",
               &Z_Registration_Info_UClass_UDS_VM_W_Display_SkillSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Display_SkillSlot,0x110,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_Display_SkillSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Display_SkillSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Display_SkillSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_Display_SkillSlot @ 14b73afb0

void __cdecl UDS_VM_W_Display_SkillSlot::StaticRegisterNativesUDS_VM_W_Display_SkillSlot(void)

{
  return;
}

// OnHovered @ 14bf63f20

void __thiscall
UDS_VM_W_Display_SkillSlot::OnHovered(UDS_VM_W_Display_SkillSlot *this,UObject *param_1)

{
  UDS_SkillData *pUVar1;
  FWeakObjectPtr local_res8;
  UDS_SkillData *local_res18 [2];
  
  pUVar1 = (((this->VM_SkillData).field0_0x0.DebugPtr)->SkillData).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UDS_SkillData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_SkillData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  UDS_VM_W_SkillDetailPopup::OpenPopup
            (param_1,(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)local_res8);
  return;
}

// OnSetViewModel @ 14bf6f5b0

void __thiscall
UDS_VM_W_Display_SkillSlot::OnSetViewModel
          (UDS_VM_W_Display_SkillSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  code *pcVar1;
  FSharedReferencer<1> FVar2;
  bool bVar3;
  UDS_VM_SkillData *pUVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  UDS_VM_W_Display_SkillSlot *local_res10;
  UDS_VM_W_Display_SkillSlot *local_res18 [2];
  TSharedPtr<FDS_ViewModelContext,1> local_b8;
  FName local_a8;
  int local_a0;
  FName local_98;
  int local_90;
  TSharedPtr<FDS_ViewModelContext_Display_SkillSlot,1> local_88;
  FDestructionSentinel local_78;
  undefined1 *local_60;
  FDestructionSentinel local_58;
  undefined1 *local_40;
  
  local_b8.Object = param_1->Object;
  local_b8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_Display_SkillSlot>(&local_88,&local_b8);
  if (local_88.Object == (FDS_ViewModelContext_Display_SkillSlot *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7894265377423622127>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Skill\\DS_VM_W_Display_SkillSlot.cpp"
                       ,0x11,"false");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pUVar4 = UDS_VM_SkillData::Create
                       ((UObject *)this,
                        (TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)
                        ((local_88.Object)->SkillData).WeakPtr);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_VM_SkillData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_SkillData).field0_0x0.DebugPtr = pUVar4;
    local_a0 = FFieldNotificationClassDescriptor::VM_SkillData.BitNumber;
    local_a8 = FFieldNotificationClassDescriptor::VM_SkillData.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
    TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              (&(this->BtnEventField).Delegate,&(local_88.Object)->BtnDelegate);
    local_90 = FFieldNotificationClassDescriptor::BtnEventField.BitNumber;
    local_98 = FFieldNotificationClassDescriptor::BtnEventField.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
    FVar2.ReferenceController = local_b8.SharedReferenceCount.ReferenceController;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(this->BtnHoveredEventField).Delegate,(FWriteAccessScope *)&local_78);
    local_60 = &(this->BtnHoveredEventField).Delegate.field_0x8;
    puVar5 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_60);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      *puVar5 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_Display_SkillSlot____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar5[3] = 0;
      local_res10 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_res10);
      puVar5[4] = OnHovered;
      puVar5[5] = (ulonglong)FVar2.ReferenceController & 0xffffffff00000000;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    FVar2.ReferenceController = local_b8.SharedReferenceCount.ReferenceController;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(this->BtnUnHoveredEventField).Delegate,(FWriteAccessScope *)&local_58);
    local_40 = &(this->BtnUnHoveredEventField).Delegate.field_0x8;
    puVar5 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_40);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      *puVar5 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_Display_SkillSlot____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar5[3] = 0;
      local_res18[0] = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)local_res18);
      puVar5[4] = OnUnHovered;
      puVar5[5] = (ulonglong)FVar2.ReferenceController & 0xffffffff00000000;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUnHovered @ 14bf71c30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_Display_SkillSlot::OnUnHovered(UDS_VM_W_Display_SkillSlot *this,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_WindowManager *this_00;
  float afStackX_8 [2];
  uint auStackX_10 [6];
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6659302704608706629>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Skill\\DS_VM_W_SkillDetailPopup.cpp"
                       ,0x45,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    afStackX_8[0] = 0.0;
    auStackX_10[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,SkillDetailInfo,auStackX_10,afStackX_8);
  }
  return;
}

// SetClickDelegate @ 14bf799c0

void __thiscall
UDS_VM_W_Display_SkillSlot::SetClickDelegate
          (UDS_VM_W_Display_SkillSlot *this,
          TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *param_1)

{
  FName local_18;
  int local_10;
  
  TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->BtnEventField).Delegate,param_1);
  local_10 = FFieldNotificationClassDescriptor::BtnEventField.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::BtnEventField.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// SetHoveredDelegate @ 14bf7b090

void __thiscall
UDS_VM_W_Display_SkillSlot::SetHoveredDelegate
          (UDS_VM_W_Display_SkillSlot *this,
          TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *param_1)

{
  FName local_18;
  int local_10;
  
  TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->BtnHoveredEventField).Delegate,param_1);
  local_10 = FFieldNotificationClassDescriptor::BtnHoveredEventField.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::BtnHoveredEventField.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// SetSkillData @ 14bf7d600

void __thiscall
UDS_VM_W_Display_SkillSlot::SetSkillData
          (UDS_VM_W_Display_SkillSlot *this,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> param_1)

{
  UDS_VM_SkillData::SetSkillData((this->VM_SkillData).field0_0x0.DebugPtr,param_1);
  return;
}

// SetUnHoveredDelegate @ 14bf7eef0

void __thiscall
UDS_VM_W_Display_SkillSlot::SetUnHoveredDelegate
          (UDS_VM_W_Display_SkillSlot *this,
          TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *param_1)

{
  FName local_18;
  int local_10;
  
  TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->BtnUnHoveredEventField).Delegate,param_1);
  local_10 = FFieldNotificationClassDescriptor::BtnUnHoveredEventField.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::BtnUnHoveredEventField.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

