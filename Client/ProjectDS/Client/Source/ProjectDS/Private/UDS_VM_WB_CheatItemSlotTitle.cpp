// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// SetClickTypeTagEvent_WrapperImpl @ 14b6ee230

void __cdecl
UDS_VM_WB_CheatItemSlotTitle::SetClickTypeTagEvent_WrapperImpl(void *param_1,void *param_2)

{
  char cVar1;
  longlong *plVar2;
  FReadAccessScope FStack_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0xa0),
             &FStack_28);
  if ((*(int *)((longlong)param_1 + 0xb0) != 0) &&
     (*(longlong **)((longlong)param_1 + 0xa8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)((longlong)param_1 + 0xa8) + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 ((longlong)param_1 + 0xa0),&FStack_28);
      if (*(int *)((longlong)param_1 + 0xb0) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)((longlong)param_1 + 0xa8);
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,&UDS_CheatData::TAG_ITEM_TYPE);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&FStack_28);
  return;
}

// SetClickGradeTagEvent_WrapperImpl @ 14b6ee240

void __cdecl
UDS_VM_WB_CheatItemSlotTitle::SetClickGradeTagEvent_WrapperImpl(void *param_1,void *param_2)

{
  char cVar1;
  longlong *plVar2;
  FReadAccessScope FStack_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0xa0),
             &FStack_28);
  if ((*(int *)((longlong)param_1 + 0xb0) != 0) &&
     (*(longlong **)((longlong)param_1 + 0xa8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)((longlong)param_1 + 0xa8) + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 ((longlong)param_1 + 0xa0),&FStack_28);
      if (*(int *)((longlong)param_1 + 0xb0) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)((longlong)param_1 + 0xa8);
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,&UDS_CheatData::TAG_GRADE_TYPE);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&FStack_28);
  return;
}

// SetClickEquipTypeTagEvent_WrapperImpl @ 14b6ee250

void __cdecl
UDS_VM_WB_CheatItemSlotTitle::SetClickEquipTypeTagEvent_WrapperImpl(void *param_1,void *param_2)

{
  char cVar1;
  longlong *plVar2;
  FReadAccessScope FStack_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0xa0),
             &FStack_28);
  if ((*(int *)((longlong)param_1 + 0xb0) != 0) &&
     (*(longlong **)((longlong)param_1 + 0xa8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)((longlong)param_1 + 0xa8) + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 ((longlong)param_1 + 0xa0),&FStack_28);
      if (*(int *)((longlong)param_1 + 0xb0) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)((longlong)param_1 + 0xa8);
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,&UDS_CheatData::TAG_EQUIP_TYPE);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&FStack_28);
  return;
}

// StaticClass @ 14b6ee260

UClass * __cdecl UDS_VM_WB_CheatItemSlotTitle::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WB_CheatItemSlotTitle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WB_CheatItemSlotTitle",
               &Z_Registration_Info_UClass_UDS_VM_WB_CheatItemSlotTitle.InnerSingleton,
               StaticRegisterNativesUDS_VM_WB_CheatItemSlotTitle,0x118,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_WB_CheatItemSlotTitle>,
               InternalVTableHelperCtorCaller<UDS_VM_WB_CheatItemSlotTitle>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WB_CheatItemSlotTitle.InnerSingleton;
}

// UDS_VM_WB_CheatItemSlotTitle @ 14b6f36b0

UDS_VM_WB_CheatItemSlotTitle * __thiscall
UDS_VM_WB_CheatItemSlotTitle::UDS_VM_WB_CheatItemSlotTitle
          (UDS_VM_WB_CheatItemSlotTitle *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WB_CheatItemSlotTitle__6B_;
  *(undefined8 *)&this->CheatTagButtonSelectDelegate = 0;
  *(undefined8 *)&(this->CheatTagButtonSelectDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->CheatTagButtonSelectDelegate).field_0x10 = 0;
  (this->ClickTypeTagEvent)._padding_ = '\0';
  (this->ClickTypeTagEvent).bIsCustomSelected = false;
  (this->ClickTypeTagEvent).bIsLacked = false;
  (this->ClickTypeTagEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickTypeTagEvent).Delegate = 0;
  *(undefined8 *)&(this->ClickTypeTagEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickTypeTagEvent).Delegate.field_0x10 = 0;
  (this->ClickGradeTagEvent)._padding_ = '\0';
  (this->ClickGradeTagEvent).bIsCustomSelected = false;
  (this->ClickGradeTagEvent).bIsLacked = false;
  (this->ClickGradeTagEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickGradeTagEvent).Delegate = 0;
  *(undefined8 *)&(this->ClickGradeTagEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickGradeTagEvent).Delegate.field_0x10 = 0;
  (this->ClickEquipTypeTagEvent)._padding_ = '\0';
  (this->ClickEquipTypeTagEvent).bIsCustomSelected = false;
  (this->ClickEquipTypeTagEvent).bIsLacked = false;
  (this->ClickEquipTypeTagEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickEquipTypeTagEvent).Delegate = 0;
  *(undefined8 *)&(this->ClickEquipTypeTagEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickEquipTypeTagEvent).Delegate.field_0x10 = 0;
  return this;
}

// UDS_VM_WB_CheatItemSlotTitle @ 14b6f3760

UDS_VM_WB_CheatItemSlotTitle * __thiscall
UDS_VM_WB_CheatItemSlotTitle::UDS_VM_WB_CheatItemSlotTitle
          (UDS_VM_WB_CheatItemSlotTitle *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WB_CheatItemSlotTitle__6B_;
  *(undefined8 *)&this->CheatTagButtonSelectDelegate = 0;
  *(undefined8 *)&(this->CheatTagButtonSelectDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->CheatTagButtonSelectDelegate).field_0x10 = 0;
  (this->ClickTypeTagEvent)._padding_ = '\0';
  (this->ClickTypeTagEvent).bIsCustomSelected = false;
  (this->ClickTypeTagEvent).bIsLacked = false;
  (this->ClickTypeTagEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickTypeTagEvent).Delegate = 0;
  *(undefined8 *)&(this->ClickTypeTagEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickTypeTagEvent).Delegate.field_0x10 = 0;
  (this->ClickGradeTagEvent)._padding_ = '\0';
  (this->ClickGradeTagEvent).bIsCustomSelected = false;
  (this->ClickGradeTagEvent).bIsLacked = false;
  (this->ClickGradeTagEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickGradeTagEvent).Delegate = 0;
  *(undefined8 *)&(this->ClickGradeTagEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickGradeTagEvent).Delegate.field_0x10 = 0;
  (this->ClickEquipTypeTagEvent)._padding_ = '\0';
  (this->ClickEquipTypeTagEvent).bIsCustomSelected = false;
  (this->ClickEquipTypeTagEvent).bIsLacked = false;
  (this->ClickEquipTypeTagEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickEquipTypeTagEvent).Delegate = 0;
  *(undefined8 *)&(this->ClickEquipTypeTagEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickEquipTypeTagEvent).Delegate.field_0x10 = 0;
  return this;
}

// ~UDS_VM_WB_CheatItemSlotTitle @ 14b6f49f0

void __thiscall
UDS_VM_WB_CheatItemSlotTitle::~UDS_VM_WB_CheatItemSlotTitle(UDS_VM_WB_CheatItemSlotTitle *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WB_CheatItemSlotTitle__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickEquipTypeTagEvent).Delegate);
  pvVar1 = *(void **)&(this->ClickEquipTypeTagEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickEquipTypeTagEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickGradeTagEvent).Delegate);
  pvVar1 = *(void **)&(this->ClickGradeTagEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickGradeTagEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickTypeTagEvent).Delegate);
  pvVar1 = *(void **)&(this->ClickTypeTagEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickTypeTagEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CheatTagButtonSelectDelegate);
  pvVar1 = *(void **)&(this->CheatTagButtonSelectDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CheatTagButtonSelectDelegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6f7180

IClassDescriptor * __thiscall
UDS_VM_WB_CheatItemSlotTitle::GetFieldNotificationDescriptor(UDS_VM_WB_CheatItemSlotTitle *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_WB_CheatItemSlotTitle::FFieldNotificationClassDescriptor::GetDescriptor'::__l2
             ::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6f7ea0

UClass * __cdecl UDS_VM_WB_CheatItemSlotTitle::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WB_CheatItemSlotTitle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WB_CheatItemSlotTitle",
               &Z_Registration_Info_UClass_UDS_VM_WB_CheatItemSlotTitle.InnerSingleton,
               StaticRegisterNativesUDS_VM_WB_CheatItemSlotTitle,0x118,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_WB_CheatItemSlotTitle>,
               InternalVTableHelperCtorCaller<UDS_VM_WB_CheatItemSlotTitle>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WB_CheatItemSlotTitle.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_WB_CheatItemSlotTitle @ 14b6f8570

void __cdecl UDS_VM_WB_CheatItemSlotTitle::StaticRegisterNativesUDS_VM_WB_CheatItemSlotTitle(void)

{
  return;
}

// OnClickEquipTypeTagEvent @ 14bfb99c0

void __thiscall
UDS_VM_WB_CheatItemSlotTitle::OnClickEquipTypeTagEvent
          (UDS_VM_WB_CheatItemSlotTitle *this,FDS_ButtonEventField *param_1)

{
  char cVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->CheatTagButtonSelectDelegate,&local_28);
  if ((*(int *)&(this->CheatTagButtonSelectDelegate).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->CheatTagButtonSelectDelegate).field_0x8,
     plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->CheatTagButtonSelectDelegate,&local_28);
      if (*(int *)&(this->CheatTagButtonSelectDelegate).field_0x10 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&(this->CheatTagButtonSelectDelegate).field_0x8;
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,&UDS_CheatData::TAG_EQUIP_TYPE);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnClickGradeTagEvent @ 14bfb9f00

void __thiscall
UDS_VM_WB_CheatItemSlotTitle::OnClickGradeTagEvent
          (UDS_VM_WB_CheatItemSlotTitle *this,FDS_ButtonEventField *param_1)

{
  char cVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->CheatTagButtonSelectDelegate,&local_28);
  if ((*(int *)&(this->CheatTagButtonSelectDelegate).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->CheatTagButtonSelectDelegate).field_0x8,
     plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->CheatTagButtonSelectDelegate,&local_28);
      if (*(int *)&(this->CheatTagButtonSelectDelegate).field_0x10 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&(this->CheatTagButtonSelectDelegate).field_0x8;
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,&UDS_CheatData::TAG_GRADE_TYPE);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnClickTypeTagEvent @ 14bfbafa0

void __thiscall
UDS_VM_WB_CheatItemSlotTitle::OnClickTypeTagEvent
          (UDS_VM_WB_CheatItemSlotTitle *this,FDS_ButtonEventField *param_1)

{
  char cVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->CheatTagButtonSelectDelegate,&local_28);
  if ((*(int *)&(this->CheatTagButtonSelectDelegate).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->CheatTagButtonSelectDelegate).field_0x8,
     plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->CheatTagButtonSelectDelegate,&local_28);
      if (*(int *)&(this->CheatTagButtonSelectDelegate).field_0x10 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&(this->CheatTagButtonSelectDelegate).field_0x8;
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,&UDS_CheatData::TAG_ITEM_TYPE);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

