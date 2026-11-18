// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 22

// SetSlotClickEvent_WrapperImpl @ 14b6e05c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl UDS_VM_SummonBossListSlot::SetSlotClickEvent_WrapperImpl(void *param_1,void *param_2)

{
  UObject *pUVar1;
  UDS_ModelBase *this;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  longlong *plVar6;
  undefined1 auStackY_e8 [32];
  FWeakObjectPtr FStack_b8;
  FWeakObjectPtr FStack_b0;
  UObject *pUStack_a8;
  UObject *pUStack_a0;
  undefined1 auStack_98 [128];
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if (*(longlong *)((longlong)param_1 + 0xa0) == 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2431936145148346301>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\SummonBoss\\DS_VM_SummonBossListSlot.cpp"
                       ,0x43,"false");
    if (!bVar3) {
      return;
    }
  }
  else {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar4 = Z_Construct_UClass_UDS_ModelEventItemBase_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)auStack_98,pUVar4);
    auStack_98._8_8_ = param_1;
    pUVar5 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)auStack_98);
    if (auStack_98._64_8_ != 0) {
      plVar6 = (longlong *)(auStack_98 + 0x50);
      if ((longlong *)auStack_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)auStack_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar5 != (UObject *)0x0) goto LAB_14bf715ff;
    }
    else if (pUVar5 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar5);
LAB_14bf715ff:
      pUVar1 = *(UObject **)((longlong)param_1 + 0xa0);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar1 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar1);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar1);
        }
      }
      FStack_b8.ObjectIndex = 0;
      FStack_b8.ObjectSerialNumber = 0;
      pUStack_a8 = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      FWeakObjectPtr::operator=(&FStack_b8,(FObjectPtr)&pUStack_a8);
      *(int *)&pUVar5[1].field_0x0 = FStack_b8.ObjectIndex;
      *(int *)&pUVar5[1].field_0x4 = FStack_b8.ObjectSerialNumber;
      this = *(UDS_ModelBase **)((longlong)param_1 + 0xa0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (UE::GC::MarkAsReachable(pUVar5), UE::GC::GIsIncrementalReachabilityPending != false)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      FStack_b0.ObjectIndex = 0;
      FStack_b0.ObjectSerialNumber = 0;
      pUStack_a0 = pUVar5;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      FWeakObjectPtr::operator=(&FStack_b0,(FObjectPtr)&pUStack_a0);
      UDS_ModelBase::UpdateModel(this,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)FStack_b0);
      return;
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2431936145148346298>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\SummonBoss\\DS_VM_SummonBossListSlot.cpp"
                       ,0x46,"false");
    if (!bVar3) {
      return;
    }
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// StaticClass @ 14b6e05d0

UClass * __cdecl UDS_VM_SummonBossListSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_SummonBossListSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_SummonBossListSlot",
               &Z_Registration_Info_UClass_UDS_VM_SummonBossListSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_SummonBossListSlot,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_SummonBossListSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_SummonBossListSlot>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_SummonBossListSlot.InnerSingleton;
}

// UDS_VM_SummonBossListSlot @ 14b6e6a30

UDS_VM_SummonBossListSlot * __thiscall
UDS_VM_SummonBossListSlot::UDS_VM_SummonBossListSlot
          (UDS_VM_SummonBossListSlot *this,FVTableHelper *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_SummonBossListSlot__6B_;
  *(undefined8 *)&(this->SlotClickEvent).Delegate = 0;
  *(undefined8 *)&(this->SlotClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->SlotClickEvent).Delegate.field_0x10 = 0;
  (this->SlotClickEvent)._padding_ = '\0';
  (this->SlotClickEvent).bIsCustomSelected = false;
  (this->SlotClickEvent).bIsLacked = false;
  (this->SlotClickEvent).bIsCustomDisabled = false;
  return this;
}

// UDS_VM_SummonBossListSlot @ 14b6e6a90

UDS_VM_SummonBossListSlot * __thiscall
UDS_VM_SummonBossListSlot::UDS_VM_SummonBossListSlot
          (UDS_VM_SummonBossListSlot *this,FObjectInitializer *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_SummonBossListSlot__6B_;
  *(undefined8 *)&(this->SlotClickEvent).Delegate = 0;
  *(undefined8 *)&(this->SlotClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->SlotClickEvent).Delegate.field_0x10 = 0;
  (this->SlotClickEvent)._padding_ = '\0';
  (this->SlotClickEvent).bIsCustomSelected = false;
  (this->SlotClickEvent).bIsLacked = false;
  (this->SlotClickEvent).bIsCustomDisabled = false;
  return this;
}

// ~UDS_VM_SummonBossListSlot @ 14b6e77e0

void __thiscall
UDS_VM_SummonBossListSlot::~UDS_VM_SummonBossListSlot(UDS_VM_SummonBossListSlot *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_SummonBossListSlot__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SlotClickEvent).Delegate);
  pvVar1 = *(void **)&(this->SlotClickEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SlotClickEvent).Delegate);
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6e9c20

IClassDescriptor * __thiscall
UDS_VM_SummonBossListSlot::GetFieldNotificationDescriptor(UDS_VM_SummonBossListSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_SummonBossListSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6ea9c0

UClass * __cdecl UDS_VM_SummonBossListSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_SummonBossListSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_SummonBossListSlot",
               &Z_Registration_Info_UClass_UDS_VM_SummonBossListSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_SummonBossListSlot,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_SummonBossListSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_SummonBossListSlot>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_SummonBossListSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_SummonBossListSlot @ 14b6ead60

void __cdecl UDS_VM_SummonBossListSlot::StaticRegisterNativesUDS_VM_SummonBossListSlot(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_SummonBossListSlot_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execIsSelected @ 14b6ec2c0

void __cdecl
UDS_VM_SummonBossListSlot::execIsSelected(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsSelected((UDS_VM_SummonBossListSlot *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execSummonBossEnable @ 14b6ec8c0

void __cdecl
UDS_VM_SummonBossListSlot::execSummonBossEnable(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = SummonBossEnable((UDS_VM_SummonBossListSlot *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execSummonBossEnableCount @ 14b6ec900

void __cdecl
UDS_VM_SummonBossListSlot::execSummonBossEnableCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = SummonBossEnableCount((UDS_VM_SummonBossListSlot *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execSummonBossIconID @ 14b6ec940

void __cdecl
UDS_VM_SummonBossListSlot::execSummonBossIconID(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = SummonBossIconID((UDS_VM_SummonBossListSlot *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execSummonBossLevel @ 14b6ec980

void __cdecl
UDS_VM_SummonBossListSlot::execSummonBossLevel(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = SummonBossLevel((UDS_VM_SummonBossListSlot *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execSummonBossName @ 14b6ec9c0

void __cdecl
UDS_VM_SummonBossListSlot::execSummonBossName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_Text *pFVar1;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = SummonBossName((UDS_VM_SummonBossListSlot *)param_1,&local_58);
  FDS_Text::operator=(param_3,pFVar1);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// IsSelected @ 14bf5dda0

bool __thiscall UDS_VM_SummonBossListSlot::IsSelected(UDS_VM_SummonBossListSlot *this)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  FName FVar7;
  FString *pFVar8;
  undefined1 local_res8 [8];
  
  lVar1 = this->_padding_;
  if (lVar1 != 0) {
    FVar7 = FDS_DataContainer::TransformIndexToName<enum_EDS_SummonBossListSlotData>
                      ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_SummonBossListSlotData)local_res8);
    uVar2 = *(undefined8 *)FVar7;
    uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar8 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)(lVar1 + 0x40),uVar6 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar7);
    if ((pFVar8->Data).ArrayNum != 0) {
      bVar4 = FToBoolHelper::FromCStringWide((wchar_t *)(pFVar8->Data).AllocatorInstance.Data);
      return bVar4;
    }
    bVar4 = FToBoolHelper::FromCStringWide(L"");
    return bVar4;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2431936145148346307>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\SummonBoss\\DS_VM_SummonBossListSlot.cpp"
                     ,0x3d,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  return false;
}

// OnSlotClickEvent @ 14bf71520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_SummonBossListSlot::OnSlotClickEvent
          (UDS_VM_SummonBossListSlot *this,FDS_ButtonEventField *param_1)

{
  UObject *pUVar1;
  UDS_ModelBase *this_00;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  longlong *plVar6;
  undefined1 auStackY_e8 [32];
  FWeakObjectPtr local_b8;
  FWeakObjectPtr local_b0;
  UObject *local_a8;
  UObject *local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if (this->_padding_ == 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2431936145148346301>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\SummonBoss\\DS_VM_SummonBossListSlot.cpp"
                       ,0x43,"false");
    if (!bVar3) {
      return;
    }
  }
  else {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar4 = Z_Construct_UClass_UDS_ModelEventItemBase_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar4);
    local_98._8_8_ = this;
    pUVar5 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar6 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar5 != (UObject *)0x0) goto LAB_14bf715ff;
    }
    else if (pUVar5 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar5);
LAB_14bf715ff:
      pUVar1 = (UObject *)this->_padding_;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar1 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar1);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar1);
        }
      }
      local_b8.ObjectIndex = 0;
      local_b8.ObjectSerialNumber = 0;
      local_a8 = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      FWeakObjectPtr::operator=(&local_b8,(FObjectPtr)&local_a8);
      *(int *)&pUVar5[1].field_0x0 = local_b8.ObjectIndex;
      *(int *)&pUVar5[1].field_0x4 = local_b8.ObjectSerialNumber;
      this_00 = (UDS_ModelBase *)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (UE::GC::MarkAsReachable(pUVar5), UE::GC::GIsIncrementalReachabilityPending != false)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      local_b0.ObjectIndex = 0;
      local_b0.ObjectSerialNumber = 0;
      local_a0 = pUVar5;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      FWeakObjectPtr::operator=(&local_b0,(FObjectPtr)&local_a0);
      UDS_ModelBase::UpdateModel
                (this_00,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_b0);
      return;
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2431936145148346298>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\SummonBoss\\DS_VM_SummonBossListSlot.cpp"
                       ,0x46,"false");
    if (!bVar3) {
      return;
    }
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// SummonBossEnable @ 14bf83580

bool __thiscall UDS_VM_SummonBossListSlot::SummonBossEnable(UDS_VM_SummonBossListSlot *this)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  FName FVar8;
  FString *pFVar9;
  undefined1 local_res8 [8];
  
  lVar1 = this->_padding_;
  if (lVar1 != 0) {
    FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_SummonBossListSlotData>
                      ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_SummonBossListSlotData)local_res8);
    uVar2 = *(undefined8 *)FVar8;
    uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)(lVar1 + 0x40),uVar6 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar8);
    if ((pFVar9->Data).ArrayNum != 0) {
      iVar7 = _wtoi((wchar_t *)(pFVar9->Data).AllocatorInstance.Data);
      return 0 < iVar7;
    }
    iVar7 = _wtoi(L"");
    return 0 < iVar7;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2431936145148346313>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\SummonBoss\\DS_VM_SummonBossListSlot.cpp"
                     ,0x37,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  return false;
}

// SummonBossEnableCount @ 14bf83650

int __thiscall UDS_VM_SummonBossListSlot::SummonBossEnableCount(UDS_VM_SummonBossListSlot *this)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FName FVar7;
  FString *pFVar8;
  undefined1 local_res8 [8];
  
  lVar1 = this->_padding_;
  if (lVar1 != 0) {
    FVar7 = FDS_DataContainer::TransformIndexToName<enum_EDS_SummonBossListSlotData>
                      ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_SummonBossListSlotData)local_res8);
    uVar2 = *(undefined8 *)FVar7;
    uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar8 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)(lVar1 + 0x40),uVar6 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar7);
    if ((pFVar8->Data).ArrayNum != 0) {
      iVar5 = _wtoi((wchar_t *)(pFVar8->Data).AllocatorInstance.Data);
      return iVar5;
    }
    iVar5 = _wtoi(L"");
    return iVar5;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2431936145148346319>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\SummonBoss\\DS_VM_SummonBossListSlot.cpp"
                     ,0x31,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  return 0;
}

// SummonBossIconID @ 14bf83710

int __thiscall UDS_VM_SummonBossListSlot::SummonBossIconID(UDS_VM_SummonBossListSlot *this)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FName FVar7;
  FString *pFVar8;
  undefined1 local_res8 [8];
  
  lVar1 = this->_padding_;
  if (lVar1 != 0) {
    FVar7 = FDS_DataContainer::TransformIndexToName<enum_EDS_SummonBossListSlotData>
                      ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_SummonBossListSlotData)local_res8);
    uVar2 = *(undefined8 *)FVar7;
    uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar8 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)(lVar1 + 0x40),uVar6 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar7);
    if ((pFVar8->Data).ArrayNum != 0) {
      iVar5 = _wtoi((wchar_t *)(pFVar8->Data).AllocatorInstance.Data);
      return iVar5;
    }
    iVar5 = _wtoi(L"");
    return iVar5;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2431936145148346343>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\SummonBoss\\DS_VM_SummonBossListSlot.cpp"
                     ,0x19,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  return 0;
}

// SummonBossLevel @ 14bf837d0

int __thiscall UDS_VM_SummonBossListSlot::SummonBossLevel(UDS_VM_SummonBossListSlot *this)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FName FVar7;
  FString *pFVar8;
  undefined1 local_res8 [8];
  
  lVar1 = this->_padding_;
  if (lVar1 != 0) {
    FVar7 = FDS_DataContainer::TransformIndexToName<enum_EDS_SummonBossListSlotData>
                      ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_SummonBossListSlotData)local_res8);
    uVar2 = *(undefined8 *)FVar7;
    uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar8 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)(lVar1 + 0x40),uVar6 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar7);
    if ((pFVar8->Data).ArrayNum != 0) {
      iVar5 = _wtoi((wchar_t *)(pFVar8->Data).AllocatorInstance.Data);
      return iVar5;
    }
    iVar5 = _wtoi(L"");
    return iVar5;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2431936145148346325>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\SummonBoss\\DS_VM_SummonBossListSlot.cpp"
                     ,0x2b,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  return 0;
}

// SummonBossName @ 14bf83890

FDS_Text * __thiscall
UDS_VM_SummonBossListSlot::SummonBossName
          (UDS_VM_SummonBossListSlot *this,FDS_Text *__return_storage_ptr__)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FName FVar5;
  FString *pFVar6;
  longlong lVar7;
  FDS_SummonBossTableRow *this_00;
  FDS_Text *pFVar8;
  FDS_NpcBaseTableRow *this_01;
  FDS_StringWorldTableRow *pFVar9;
  atomic<unsigned_char> *paVar10;
  wchar_t *_Str;
  int iVar11;
  undefined1 local_res8 [8];
  
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  lVar7 = this->_padding_;
  if (lVar7 == 0) {
    iVar11 = 0x20;
    paVar10 = &bGEnsureHasExecuted<_2431936145148346336>;
  }
  else {
    FVar5 = FDS_DataContainer::TransformIndexToName<enum_EDS_SummonBossListSlotData>
                      ((FDS_DataContainer *)(lVar7 + 0x40),(EDS_SummonBossListSlotData)local_res8);
    uVar1 = *(undefined8 *)FVar5;
    uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
    pFVar6 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)(lVar7 + 0x40),uVar4 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar5);
    if ((pFVar6->Data).ArrayNum == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    lVar7 = _wtoi64(_Str);
    this_00 = FDS_SummonBossTableRow::Get(lVar7,true);
    if (this_00 != (FDS_SummonBossTableRow *)0x0) {
      this_01 = FDS_SummonBossTableRow::ID_SummonBossTable(this_00);
      pFVar9 = FDS_NpcBaseTableRow::ID_NameSidTable(this_01);
      FDS_Text::SetTextFromStringTable(__return_storage_ptr__,pFVar9);
      return __return_storage_ptr__;
    }
    iVar11 = 0x23;
    paVar10 = &bGEnsureHasExecuted<_2431936145148346333>;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar10,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\SummonBoss\\DS_VM_SummonBossListSlot.cpp"
                     ,iVar11,"false");
  if (!bVar3) {
    return __return_storage_ptr__;
  }
  pcVar2 = (code *)swi(3);
  pFVar8 = (FDS_Text *)(*pcVar2)();
  return pFVar8;
}

// UpdateView @ 14bf8b440

void __thiscall
UDS_VM_SummonBossListSlot::UpdateView
          (UDS_VM_SummonBossListSlot *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1
          )

{
  longlong *plVar1;
  FName local_18;
  int local_10;
  
  plVar1 = &this->_padding_;
  local_10 = FFieldNotificationClassDescriptor::SummonBossIconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SummonBossIconID.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::SummonBossName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SummonBossName.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::SummonBossLevel.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SummonBossLevel.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::SummonBossEnableCount.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SummonBossEnableCount.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::SummonBossEnable.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SummonBossEnable.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::IsSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsSelected.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  return;
}

