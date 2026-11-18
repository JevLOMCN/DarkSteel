// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b6a1ac0

UClass * __cdecl UDS_VM_MoneyGroup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_MoneyGroup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_MoneyGroup",
               &Z_Registration_Info_UClass_UDS_VM_MoneyGroup.InnerSingleton,
               StaticRegisterNativesUDS_VM_MoneyGroup,200,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_MoneyGroup>,
               InternalVTableHelperCtorCaller<UDS_VM_MoneyGroup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_MoneyGroup.InnerSingleton;
}

// UDS_VM_MoneyGroup @ 14b6a4e50

UDS_VM_MoneyGroup * __thiscall
UDS_VM_MoneyGroup::UDS_VM_MoneyGroup(UDS_VM_MoneyGroup *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MoneyGroup__6B_;
  (this->VM_MoneyData1).field0_0x0.DebugPtr = (UDS_VM_MoneyData *)0x0;
  (this->VM_MoneyData2).field0_0x0.DebugPtr = (UDS_VM_MoneyData *)0x0;
  (this->VM_MoneyData3).field0_0x0.DebugPtr = (UDS_VM_MoneyData *)0x0;
  (this->DisplayMoneyArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DisplayMoneyArray).ArrayNum = 0;
  (this->DisplayMoneyArray).ArrayMax = 0;
  return this;
}

// UDS_VM_MoneyGroup @ 14b6a4ec0

UDS_VM_MoneyGroup * __thiscall
UDS_VM_MoneyGroup::UDS_VM_MoneyGroup(UDS_VM_MoneyGroup *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MoneyGroup__6B_;
  (this->VM_MoneyData1).field0_0x0.DebugPtr = (UDS_VM_MoneyData *)0x0;
  (this->VM_MoneyData2).field0_0x0.DebugPtr = (UDS_VM_MoneyData *)0x0;
  (this->VM_MoneyData3).field0_0x0.DebugPtr = (UDS_VM_MoneyData *)0x0;
  (this->DisplayMoneyArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DisplayMoneyArray).ArrayNum = 0;
  (this->DisplayMoneyArray).ArrayMax = 0;
  return this;
}

// ~UDS_VM_MoneyGroup @ 14b6a6fd0

void __thiscall UDS_VM_MoneyGroup::~UDS_VM_MoneyGroup(UDS_VM_MoneyGroup *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MoneyGroup__6B_;
  pFVar1 = (this->DisplayMoneyArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6a96a0

IClassDescriptor * __thiscall
UDS_VM_MoneyGroup::GetFieldNotificationDescriptor(UDS_VM_MoneyGroup *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_MoneyGroup::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6a9ec0

UClass * __cdecl UDS_VM_MoneyGroup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_MoneyGroup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_MoneyGroup",
               &Z_Registration_Info_UClass_UDS_VM_MoneyGroup.InnerSingleton,
               StaticRegisterNativesUDS_VM_MoneyGroup,200,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_MoneyGroup>,
               InternalVTableHelperCtorCaller<UDS_VM_MoneyGroup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_MoneyGroup.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_MoneyGroup @ 14b6aac40

void __cdecl UDS_VM_MoneyGroup::StaticRegisterNativesUDS_VM_MoneyGroup(void)

{
  return;
}

// InitViewModel @ 14be25310

void __thiscall UDS_VM_MoneyGroup::InitViewModel(UDS_VM_MoneyGroup *this)

{
  UDS_VM_MoneyData *pUVar1;
  longlong *plVar2;
  FName local_18;
  int local_10;
  
  if ((this->VM_MoneyData1).field0_0x0.DebugPtr == (UDS_VM_MoneyData *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MoneyData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_VM_MoneyData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_MoneyData1).field0_0x0.DebugPtr = pUVar1;
    local_10 = FFieldNotificationClassDescriptor::VM_MoneyData1.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::VM_MoneyData1.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  plVar2 = &this->_padding_;
  if ((this->VM_MoneyData2).field0_0x0.DebugPtr == (UDS_VM_MoneyData *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MoneyData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_VM_MoneyData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_MoneyData2).field0_0x0.DebugPtr = pUVar1;
    local_10 = FFieldNotificationClassDescriptor::VM_MoneyData2.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::VM_MoneyData2.FieldName;
    (**(code **)(*plVar2 + 0x38))(plVar2,&local_18);
  }
  if ((this->VM_MoneyData3).field0_0x0.DebugPtr == (UDS_VM_MoneyData *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MoneyData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_VM_MoneyData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_MoneyData3).field0_0x0.DebugPtr = pUVar1;
    local_10 = FFieldNotificationClassDescriptor::VM_MoneyData3.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::VM_MoneyData3.FieldName;
    (**(code **)(*plVar2 + 0x38))(plVar2,&local_18);
  }
  return;
}

// OnSetViewModel @ 14be3a250

void __thiscall
UDS_VM_MoneyGroup::OnSetViewModel
          (UDS_VM_MoneyGroup *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int *piVar1;
  TArray<EDS_MoneyType,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  int local_res10 [2];
  TSharedPtr<FDS_ViewModelContext_MoneyGroup,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  
  local_28.Object = param_1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_MoneyGroup>(&local_38,&local_28);
  if (local_38.Object != (FDS_ViewModelContext_MoneyGroup *)0x0) {
    pTVar2 = &this->DisplayMoneyArray;
    if (pTVar2 != &(local_38.Object)->DisplayMoneyArray) {
      iVar3 = (this->DisplayMoneyArray).ArrayMax;
      piVar1 = &(this->DisplayMoneyArray).ArrayMax;
      iVar4 = ((local_38.Object)->DisplayMoneyArray).ArrayNum;
      _Src = ((local_38.Object)->DisplayMoneyArray).AllocatorInstance.Data;
      (this->DisplayMoneyArray).ArrayNum = iVar4;
      if ((iVar4 == 0) && (iVar3 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar4,iVar3,&pTVar2->AllocatorInstance,iVar4,piVar1);
        if (iVar4 != 0) {
          memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar4);
        }
      }
    }
    local_res10[0] = 0;
    do {
      iVar3 = local_res10[0];
      SetMoney(this,local_res10);
      local_res10[0] = iVar3 + 1;
    } while (local_res10[0] < 3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetMoney @ 14be4dec0

void __thiscall UDS_VM_MoneyGroup::SetMoney(UDS_VM_MoneyGroup *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FDS_ViewModelContext *pFVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this_00;
  UDS_VM_MoneyData *this_01;
  FScriptContainerElement FVar7;
  TSharedPtr<FDS_ViewModelContext,1> *pTVar8;
  FDS_ViewModelContext *pFVar9;
  uint uVar10;
  FDS_ViewModelContext *pFVar11;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  
  pFVar5 = ::operator_new(0x28);
  pFVar9 = (FDS_ViewModelContext *)0x0;
  pFVar11 = pFVar9;
  if (pFVar5 != (FDS_ViewModelContext *)0x0) {
    *(undefined4 *)&pFVar5->field_0x1c = 0;
    *(undefined4 *)((longlong)&pFVar5[1]._padding_ + 1) = 0;
    *(undefined2 *)((longlong)&pFVar5[1]._padding_ + 5) = 0;
    *(undefined1 *)((longlong)&pFVar5[1]._padding_ + 7) = 0;
    *(undefined8 *)&pFVar5->DerivedStaticStruct = 0;
    (pFVar5->ViewModelName).ComparisonIndex = 0;
    (pFVar5->ViewModelName).Number = 0;
    pFVar5->ViewModelTemplateKey = None;
    pFVar5->_padding_ = (longlong)&___7FDS_ViewModelContext_MoneyData__6B_;
    *(undefined1 *)&pFVar5[1]._padding_ = 0;
    pFVar11 = pFVar5;
  }
  pFVar5 = ::operator_new(0x20);
  if (pFVar5 != (FDS_ViewModelContext *)0x0) {
    *(atomic<int> *)&pFVar5->DerivedStaticStruct = (atomic<int>)0x1;
    *(code **)&(pFVar5->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
    pFVar5->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_MoneyData__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    ((atomic<int> *)&pFVar5->DerivedStaticStruct)[1] = (atomic<int>)0x1;
    *(FDS_ViewModelContext **)&pFVar5->ViewModelTemplateKey = pFVar11;
    pFVar9 = pFVar5;
  }
  if ((pFVar11 == (FDS_ViewModelContext *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar6 = FDS_ViewModelContext_MoneyData::StaticStruct();
  *(UScriptStruct **)&pFVar11->DerivedStaticStruct = pUVar6;
  this_00 = UDS_ViewModelContextManager::GetInst();
  if (this_00 != (UDS_ViewModelContextManager *)0x0) {
    if (pFVar9 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar9->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar9->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_58.Object = pFVar11;
    local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar9;
    UDS_ViewModelContextManager::RegisterContext(this_00,&local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  pFVar11->ViewModelTemplateKey = Data_Money;
  uVar1 = *param_1;
  if (((int)uVar1 < 0) || ((this->DisplayMoneyArray).ArrayNum <= (int)uVar1)) {
    FVar7 = (FScriptContainerElement)0x0;
  }
  else {
    uVar10 = 0;
    if ((int)uVar1 < (this->DisplayMoneyArray).ArrayNum) {
      uVar10 = ~uVar1 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar7 = (this->DisplayMoneyArray).AllocatorInstance.Data[(int)uVar1];
  }
  *(FScriptContainerElement *)&pFVar11[1]._padding_ = FVar7;
  iVar2 = *param_1;
  if (iVar2 == 0) {
    this_01 = (this->VM_MoneyData1).field0_0x0.DebugPtr;
    if (pFVar9 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar9->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar9->DerivedStaticStruct + 1);
      UNLOCK();
    }
    pTVar8 = &local_28;
    local_28.Object = pFVar11;
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar9;
  }
  else if (iVar2 == 1) {
    this_01 = (this->VM_MoneyData2).field0_0x0.DebugPtr;
    if (pFVar9 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar9->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar9->DerivedStaticStruct + 1);
      UNLOCK();
    }
    pTVar8 = &local_38;
    local_38.Object = pFVar11;
    local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar9;
  }
  else {
    if (iVar2 != 2) goto LAB_14be4e0c5;
    this_01 = (this->VM_MoneyData3).field0_0x0.DebugPtr;
    if (pFVar9 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar9->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar9->DerivedStaticStruct + 1);
      UNLOCK();
    }
    pTVar8 = &local_48;
    local_48.Object = pFVar11;
    local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar9;
  }
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_01,pTVar8);
LAB_14be4e0c5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar9);
  return;
}

