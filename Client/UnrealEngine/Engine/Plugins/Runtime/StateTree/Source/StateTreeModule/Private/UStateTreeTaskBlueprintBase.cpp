// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 24

// StaticClass @ 14d4a2210

UClass * __cdecl UStateTreeTaskBlueprintBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStateTreeTaskBlueprintBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StateTreeModule",L"StateTreeTaskBlueprintBase",
               &Z_Registration_Info_UClass_UStateTreeTaskBlueprintBase.InnerSingleton,
               StaticRegisterNativesUStateTreeTaskBlueprintBase,0x70,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UStateTreeTaskBlueprintBase>,
               InternalVTableHelperCtorCaller<UStateTreeTaskBlueprintBase>,local_res8,
               UStateTreeNodeBlueprintBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStateTreeTaskBlueprintBase.InnerSingleton;
}

// UStateTreeTaskBlueprintBase @ 14d4b2aa0

UStateTreeTaskBlueprintBase * __thiscall
UStateTreeTaskBlueprintBase::UStateTreeTaskBlueprintBase
          (UStateTreeTaskBlueprintBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0xffff;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UStateTreeTaskBlueprintBase__6B_;
  this->RunStatus = Running;
  return this;
}

// UStateTreeTaskBlueprintBase @ 14d4b2af0

UStateTreeTaskBlueprintBase * __thiscall
UStateTreeTaskBlueprintBase::UStateTreeTaskBlueprintBase
          (UStateTreeTaskBlueprintBase *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  UClass *pUVar6;
  FName *pFVar7;
  UFunction *pUVar8;
  UStateTreeTaskBlueprintBase *pUVar9;
  FName local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_38;
  FName local_30;
  FName local_28 [2];
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0xffff;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->bIsProcessingEnterStateOrTick = '\0';
  this->_padding_ = (longlong)&___7UStateTreeTaskBlueprintBase__6B_;
  this->RunStatus = Running;
  puVar2 = &this->field_0x69;
  this->bShouldStateChangeOnReselect = '\x01';
  this->bShouldCopyBoundPropertiesOnExitState = '\x01';
  this->bShouldCopyBoundPropertiesOnTick = '\x01';
  this->bShouldCallTickOnlyOnEvents = '\0';
  this->bShouldCallTick = '\0';
  pUVar6 = GetPrivateStaticClass();
  pFVar7 = ::FName::FName(local_res8,L"ReceiveExitState");
  pUVar8 = UClass::FindFunctionByName((UClass *)this->_padding_,*pFVar7,IncludeSuper);
  if (pUVar8 == (UFunction *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1455618344223768614>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Public\\BlueprintNodeHelpers.h"
                       ,0x26,"Function");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar9 = (UStateTreeTaskBlueprintBase *)(*pcVar3)();
      return pUVar9;
    }
LAB_14d4b2ba2:
    bVar5 = 0;
  }
  else {
    if ((UClass *)pUVar8->_padding_ == pUVar6) goto LAB_14d4b2ba2;
    bVar5 = 0x20;
  }
  this->bHasExitState = '\0';
  this->field_0x69 = this->field_0x69 | bVar5;
  pUVar6 = GetPrivateStaticClass();
  pFVar7 = ::FName::FName(&local_res18,L"ReceiveStateCompleted");
  pUVar8 = UClass::FindFunctionByName((UClass *)this->_padding_,*pFVar7,IncludeSuper);
  if (pUVar8 == (UFunction *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1455618344223768614>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Public\\BlueprintNodeHelpers.h"
                       ,0x26,"Function");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar9 = (UStateTreeTaskBlueprintBase *)(*pcVar3)();
      return pUVar9;
    }
LAB_14d4b2c08:
    bVar5 = 0;
  }
  else {
    if ((UClass *)pUVar8->_padding_ == pUVar6) goto LAB_14d4b2c08;
    bVar5 = 0x40;
  }
  this->bHasStateCompleted = '\0';
  this->field_0x69 = this->field_0x69 | bVar5;
  pUVar6 = GetPrivateStaticClass();
  pFVar7 = ::FName::FName(&local_res20,L"ReceiveLatentEnterState");
  pUVar8 = UClass::FindFunctionByName((UClass *)this->_padding_,*pFVar7,IncludeSuper);
  if (pUVar8 == (UFunction *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1455618344223768614>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Public\\BlueprintNodeHelpers.h"
                       ,0x26,"Function");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar9 = (UStateTreeTaskBlueprintBase *)(*pcVar3)();
      return pUVar9;
    }
LAB_14d4b2c6e:
    bVar5 = 0;
  }
  else {
    if ((UClass *)pUVar8->_padding_ == pUVar6) goto LAB_14d4b2c6e;
    bVar5 = 0x80;
  }
  this->bHasLatentEnterState = '\0';
  this->field_0x69 = this->field_0x69 | bVar5;
  pUVar6 = GetPrivateStaticClass();
  pFVar7 = ::FName::FName(&local_38,L"ReceiveLatentTick");
  pUVar8 = UClass::FindFunctionByName((UClass *)this->_padding_,*pFVar7,IncludeSuper);
  if (pUVar8 == (UFunction *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1455618344223768614>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Public\\BlueprintNodeHelpers.h"
                       ,0x26,"Function");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar9 = (UStateTreeTaskBlueprintBase *)(*pcVar3)();
      return pUVar9;
    }
LAB_14d4b2cd1:
    bVar5 = 0;
  }
  else {
    if ((UClass *)pUVar8->_padding_ == pUVar6) goto LAB_14d4b2cd1;
    bVar5 = 1;
  }
  this->bHasLatentTick = '\0';
  this->field_0x6a = this->field_0x6a | bVar5;
  pUVar6 = GetPrivateStaticClass();
  pFVar7 = ::FName::FName(&local_30,L"ReceiveEnterState");
  pUVar8 = UClass::FindFunctionByName((UClass *)this->_padding_,*pFVar7,IncludeSuper);
  if (pUVar8 == (UFunction *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1455618344223768614>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Public\\BlueprintNodeHelpers.h"
                       ,0x26,"Function");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar9 = (UStateTreeTaskBlueprintBase *)(*pcVar3)();
      return pUVar9;
    }
LAB_14d4b2d34:
    bVar5 = 0;
  }
  else {
    if ((UClass *)pUVar8->_padding_ == pUVar6) goto LAB_14d4b2d34;
    bVar5 = 2;
  }
  this->bHasEnterState_DEPRECATED = '\0';
  this->field_0x6a = this->field_0x6a | bVar5;
  pUVar6 = GetPrivateStaticClass();
  pFVar7 = ::FName::FName(local_28,L"ReceiveTick");
  pUVar8 = UClass::FindFunctionByName((UClass *)this->_padding_,*pFVar7,IncludeSuper);
  if (pUVar8 == (UFunction *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1455618344223768614>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Public\\BlueprintNodeHelpers.h"
                       ,0x26,"Function");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar9 = (UStateTreeTaskBlueprintBase *)(*pcVar3)();
      return pUVar9;
    }
  }
  else if ((UClass *)pUVar8->_padding_ != pUVar6) {
    bVar5 = 4;
    goto LAB_14d4b2d99;
  }
  bVar5 = 0;
LAB_14d4b2d99:
  this->bHasTick_DEPRECATED = '\0';
  this->field_0x6a = this->field_0x6a | bVar5;
  return this;
}

// ~UStateTreeTaskBlueprintBase @ 14d4b3f10

void __thiscall
UStateTreeTaskBlueprintBase::~UStateTreeTaskBlueprintBase(UStateTreeTaskBlueprintBase *this)

{
  this->_padding_ = (longlong)&___7UStateTreeTaskBlueprintBase__6B_;
  UStateTreeNodeBlueprintBase::~UStateTreeNodeBlueprintBase((UStateTreeNodeBlueprintBase *)this);
  return;
}

// BindDelegate @ 14d4b6dc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UStateTreeTaskBlueprintBase::BindDelegate
          (UStateTreeTaskBlueprintBase *this,FStateTreeDelegateListener *param_1,
          FStateTreeDynamicDelegate *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  UObject *pUVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  UFunction *pUVar9;
  UObject *local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_118;
  FDelegateAllocation local_110;
  undefined1 local_100 [8];
  void *local_f8;
  int local_f0;
  FStateTreeWeakExecutionContext local_e8;
  FDestructionSentinel local_a8;
  FDestructionSentinel local_90;
  FDestructionSentinel local_78;
  FDelegateAllocation *local_60;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_58);
  FVar3.ComparisonIndex.Value = *(uint *)&param_2->field_0x10;
  FVar3.Number = *(uint *)&param_2->field_0x14;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_40);
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_2->field_0x8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  local_118.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_110.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_118,(FWriteAccessScope *)&local_78);
  local_60 = &local_110;
  puVar7 = UE::Core::Private::DelegateAllocate(0x30,&local_110);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar7 + 4) = FVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    puVar7[5] = 0;
    local_res8 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 5),(FObjectPtr)&local_res8);
    if ((FVar3 == (FName)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFunctionName != NAME_None",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x56,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (pUVar6 != (UObject *)0x0) {
      pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar7 + 5));
      pUVar9 = UObject::FindFunctionChecked(pUVar6,FVar3);
      puVar7[3] = pUVar9;
    }
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  local_e8.Owner.WeakPtr = (FWeakObjectPtr)this->_padding_;
  local_e8.StateTree.WeakPtr = (FWeakObjectPtr)this->_padding_;
  local_e8.Storage.Object = (FStateTreeInstanceStorage *)this->_padding_;
  local_e8.Storage.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)this->_padding_;
  if (local_e8.Storage.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    (local_e8.Storage.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_e8.Storage.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_e8.TemporaryStorage.Object = (ITemporaryStorage *)this->_padding_;
  local_e8.TemporaryStorage.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)this->_padding_;
  if (local_e8.TemporaryStorage.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_e8.TemporaryStorage.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_e8.TemporaryStorage.WeakReferenceCount.ReferenceController)->
               WeakReferenceCount + 1);
    UNLOCK();
  }
  local_e8.FrameID.Value = (uint)this->_padding_;
  local_e8.StateID.Value = *(uint *)((longlong)&this->_padding_ + 4);
  local_e8.NodeIndex.Value = (ushort)this->_padding_;
  local_100 = (undefined1  [8])0x0;
  local_f8 = (void *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_118,(FWriteAccessScope *)&local_a8);
  if (local_f8 != (void *)0x0) {
    FMemory::Free(local_f8);
  }
  local_f8 = (void *)local_110.DelegateAllocator;
  local_f0 = local_110.DelegateSize;
  local_110.DelegateSize = 0;
  local_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  bVar5 = FStateTreeWeakExecutionContext::BindDelegate
                    (&local_e8,param_1,
                     (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_100);
  if (local_e8.TemporaryStorage.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_e8.TemporaryStorage.WeakReferenceCount.ReferenceController)->WeakReferenceCount
    ;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_e8.TemporaryStorage.WeakReferenceCount.ReferenceController)->_padding_ + 8
                  ))();
    }
  }
  if (local_e8.Storage.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    paVar1 = &(local_e8.Storage.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_e8.Storage.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_e8.Storage.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (!bVar5) {
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this,(FName *)&LogStateTree.field_0x4,Error,
                 L"Failed to bind the delegate. The instance probably stopped.");
    }
    if (1 < (byte)LogStateTree._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_118,(FWriteAccessScope *)&local_90);
  if ((local_110.DelegateSize != 0) &&
     (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_110.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_110,0,0,0x10);
    local_110.DelegateSize = 0;
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  if (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_110.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_118.AccessDetector);
  return;
}

// BroadcastDelegate @ 14d4b7580

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UStateTreeTaskBlueprintBase::BroadcastDelegate
          (UStateTreeTaskBlueprintBase *this,FStateTreeDelegateDispatcher *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  FStateTreeWeakExecutionContext local_b8;
  TStateTreeStrongExecutionContext<1> local_78;
  FGuid local_38;
  FActivePathInfo local_28;
  
  local_b8.Owner.WeakPtr = (FWeakObjectPtr)this->_padding_;
  local_b8.StateTree.WeakPtr = (FWeakObjectPtr)this->_padding_;
  local_b8.Storage.Object = (FStateTreeInstanceStorage *)this->_padding_;
  local_b8.Storage.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)this->_padding_;
  if (local_b8.Storage.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    (local_b8.Storage.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_b8.Storage.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_b8.TemporaryStorage.Object = (ITemporaryStorage *)this->_padding_;
  local_b8.TemporaryStorage.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)this->_padding_;
  if (local_b8.TemporaryStorage.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_b8.TemporaryStorage.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_b8.TemporaryStorage.WeakReferenceCount.ReferenceController)->
               WeakReferenceCount + 1);
    UNLOCK();
  }
  local_b8.FrameID.Value = (uint)this->_padding_;
  local_b8.StateID.Value = *(uint *)((longlong)&this->_padding_ + 4);
  local_b8.NodeIndex.Value = (ushort)this->_padding_;
  TStateTreeStrongExecutionContext<1>::TStateTreeStrongExecutionContext<1>(&local_78,&local_b8);
  if ((((param_1->ID).D != 0 || (param_1->ID).C != 0) || (param_1->ID).B != 0) ||
      (param_1->ID).A != 0) {
    TStateTreeStrongExecutionContext<1>::GetActivePathInfo(&local_78,&local_28);
    if (local_28.Frame == (FStateTreeExecutionFrame *)0x0) {
      bVar4 = true;
      goto LAB_14d4b771f;
    }
    if (local_78.Storage.Object == (FStateTreeInstanceStorage *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FStateTreeDelegateActiveListeners::BroadcastDelegate
              (&((local_78.Storage.Object)->ExecutionState).DelegateActiveListeners,param_1,
               &(local_78.Storage.Object)->ExecutionState);
    if (local_78.Storage.Object == (FStateTreeInstanceStorage *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_38.A = (param_1->ID).A;
    local_38.B = (param_1->ID).B;
    local_38.C = (param_1->ID).C;
    local_38.D = (param_1->ID).D;
    bVar4 = UE::StateTree::ExecutionContext::MarkDelegateAsBroadcasted
                      ((FStateTreeDelegateDispatcher *)&local_38,local_28.Frame,
                       local_78.Storage.Object);
    if (bVar4) {
      if (local_78.Storage.Object == (FStateTreeInstanceStorage *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (((UStateTree *)local_78.StateTree.Object == (UStateTree *)0x0) ||
         (local_78.Owner.Object == (UObject *)0x0)) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      TStateTreeStrongExecutionContext<1>::ScheduleNextTick<1>
                ((TNotNull<UObject_*>)local_78.Owner.Object,
                 (TNotNull<UStateTree_const_*>)local_78.StateTree.Object,local_78.Storage.Object,
                 Delegate);
      bVar4 = false;
      goto LAB_14d4b771f;
    }
  }
  bVar4 = false;
LAB_14d4b771f:
  TStateTreeStrongExecutionContext<1>::~TStateTreeStrongExecutionContext<1>(&local_78);
  if (local_b8.TemporaryStorage.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_b8.TemporaryStorage.WeakReferenceCount.ReferenceController)->WeakReferenceCount
    ;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_b8.TemporaryStorage.WeakReferenceCount.ReferenceController)->_padding_ + 8
                  ))(local_b8.TemporaryStorage.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_b8.Storage.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    paVar1 = &(local_b8.Storage.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_b8.Storage.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_b8.Storage.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (bVar4) {
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this,(FName *)&LogStateTree.field_0x4,Error,
                 L"Failed to broadcast the delegate. The instance probably stopped.");
    }
    if (1 < (byte)LogStateTree._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
    }
  }
  return;
}

// EnterState @ 14d4bb1c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EStateTreeRunStatus __thiscall
UStateTreeTaskBlueprintBase::EnterState
          (UStateTreeTaskBlueprintBase *this,FStateTreeExecutionContext *param_1,
          FStateTreeTransitionResult *param_2)

{
  byte *pbVar1;
  undefined1 uVar2;
  EStateTreeRunStatus EVar3;
  undefined1 uVar4;
  FStateTreeEvent *pFVar5;
  UFunction *pUVar6;
  longlong *plVar7;
  undefined ***pppuVar8;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [24];
  ushort local_a0;
  ushort local_9e;
  undefined2 local_9c;
  undefined1 local_9a;
  FStateTreeExecutionFrame *local_98;
  FSharedReferencer<1> FStack_90;
  FStateTreeEvent *local_88;
  FSharedReferencer<1> local_80;
  FStateTreeEvent *local_78;
  ushort local_70;
  ushort local_6e;
  EStateTreeRunStatus local_68;
  FStateTreeEvent *local_58;
  undefined **local_48;
  FSharedReferencer<1> FStack_40;
  FStateTreeEvent *local_38;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  UStateTreeNodeBlueprintBase::SetCachedInstanceDataFromContext
            ((UStateTreeNodeBlueprintBase *)this,param_1);
  local_b8[0] = this->bIsProcessingEnterStateOrTick;
  local_58 = (FStateTreeEvent *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`UStateTreeTaskBlueprintBase::EnterState'::__l2::<lambda_1>,void>::
             Call;
  this->bIsProcessingEnterStateOrTick = '\x01';
  local_98 = (FStateTreeExecutionFrame *)
             &UE::Core::Private::Function::
              TFunction_OwnedObject<`UStateTreeTaskBlueprintBase::EnterState'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38 = (FStateTreeEvent *)local_b8;
  local_30 = (undefined ***)0x0;
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UStateTreeTaskBlueprintBase::EnterState'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  this->RunStatus = Running;
  FStack_40.ReferenceController = (TReferenceControllerBase<1> *)this;
  if ((bool)this->bHasLatentEnterState) {
    local_a0 = FStateTreeStateHandle::Invalid.Index;
    local_b8._16_8_ = (FStateTreeEvent *)0x0;
    local_9a = 0;
    local_98 = (FStateTreeExecutionFrame *)0x0;
    FStack_90.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_88 = (FStateTreeEvent *)0x0;
    local_80.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_78 = (FStateTreeEvent *)0x0;
    local_9e = FStateTreeStateHandle::Invalid.Index;
    local_70 = FStateTreeStateHandle::Invalid.Index;
    local_6e = FStateTreeStateHandle::Invalid.Index;
    local_9c = 0x104;
    FStateTreeTransitionResult::operator=((FStateTreeTransitionResult *)(local_b8 + 0x10),param_2);
    pUVar6 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_UStateTreeTaskBlueprintBase_ReceiveLatentEnterState);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar6,local_b8 + 0x10);
    DestructItems<FStateTreeFrameStateSelectionEvents,int>
              ((FStateTreeFrameStateSelectionEvents *)local_88,(int)local_80.ReferenceController);
    if (local_88 != (FStateTreeEvent *)0x0) {
      FMemory::Free(local_88);
    }
    DestructItems<FStateTreeExecutionFrame,int>(local_98,(int)FStack_90.ReferenceController);
    if (local_98 != (FStateTreeExecutionFrame *)0x0) {
      FMemory::Free(local_98);
    }
  }
  else {
    FStack_90.ReferenceController = (TReferenceControllerBase<1> *)this;
    local_88 = local_38;
    if (this->bHasEnterState_DEPRECATED != '\0') {
      local_a0 = FStateTreeStateHandle::Invalid.Index;
      local_b8._16_8_ = (FStateTreeEvent *)0x0;
      local_9a = 0;
      local_98 = (FStateTreeExecutionFrame *)0x0;
      FStack_90.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_88 = (FStateTreeEvent *)0x0;
      local_80.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_78 = (FStateTreeEvent *)0x0;
      local_68 = Running;
      local_9e = FStateTreeStateHandle::Invalid.Index;
      local_70 = FStateTreeStateHandle::Invalid.Index;
      local_6e = FStateTreeStateHandle::Invalid.Index;
      local_9c = 0x104;
      FStateTreeTransitionResult::operator=((FStateTreeTransitionResult *)(local_b8 + 0x10),param_2)
      ;
      pUVar6 = UObject::FindFunctionChecked
                         ((UObject *)this,NAME_UStateTreeTaskBlueprintBase_ReceiveEnterState);
      (**(code **)(this->_padding_ + 0x260))(this,pUVar6,local_b8 + 0x10);
      EVar3 = local_68;
      DestructItems<FStateTreeFrameStateSelectionEvents,int>
                ((FStateTreeFrameStateSelectionEvents *)local_88,(int)local_80.ReferenceController);
      if (local_88 != (FStateTreeEvent *)0x0) {
        FMemory::Free(local_88);
      }
      DestructItems<FStateTreeExecutionFrame,int>(local_98,(int)FStack_90.ReferenceController);
      if (local_98 != (FStateTreeExecutionFrame *)0x0) {
        FMemory::Free(local_98);
      }
      this->RunStatus = EVar3;
    }
  }
  EVar3 = this->RunStatus;
  UE::Core::Private::Function::CheckCallable(local_58);
  pFVar5 = local_58;
  pppuVar8 = &local_48;
  if (local_30 != (undefined ***)0x0) {
    pppuVar8 = local_30;
  }
  plVar7 = (longlong *)(*(code *)(*pppuVar8)[1])();
  if (pFVar5 == (FStateTreeEvent *)
                UE::Core::Private::Function::
                TFunctionRefCaller<`UStateTreeTaskBlueprintBase::EnterState'::__l2::<lambda_1>,void>
                ::Call) {
    pbVar1 = (byte *)(*plVar7 + 0x6a);
    *pbVar1 = *pbVar1 ^ (*(char *)plVar7[1] << 3 ^ *(byte *)(*plVar7 + 0x6a)) & 8;
  }
  else {
    (*(code *)pFVar5)(plVar7);
  }
  if (local_58 != (FStateTreeEvent *)0x0) {
    pppuVar8 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar8 = local_30;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  return EVar3;
}

// ExitState @ 14d4bc240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UStateTreeTaskBlueprintBase::ExitState
          (UStateTreeTaskBlueprintBase *this,FStateTreeExecutionContext *param_1,
          FStateTreeTransitionResult *param_2)

{
  UFunction *pUVar1;
  UWorld *this_00;
  FLatentActionManager *this_01;
  FTimerManager *this_02;
  FWeakObjectPtr local_res8;
  UStateTreeTaskBlueprintBase *local_res20;
  FStateTreeTransitionResult local_58;
  
  if (this->bHasExitState != '\0') {
    local_58.TargetState = (FStateTreeStateHandle)FStateTreeStateHandle::Invalid.Index;
    local_58.CurrentState.Index = FStateTreeStateHandle::Invalid.Index;
    local_58.SourceRootState.Index = FStateTreeStateHandle::Invalid.Index;
    local_58.SourceState.Index = FStateTreeStateHandle::Invalid.Index;
    local_58.SourceFrameID.Value = 0;
    local_58.SourceStateID.Value = 0;
    local_58.CurrentRunStatus = Unset;
    local_58.ChangeType = Changed;
    local_58.Priority = None;
    local_58.NextActiveFrames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.NextActiveFrames.ArrayNum = 0;
    local_58.NextActiveFrames.ArrayMax = 0;
    local_58.NextActiveFrameEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.NextActiveFrameEvents.ArrayNum = 0;
    local_58.NextActiveFrameEvents.ArrayMax = 0;
    local_58.SourceStateTree.field0_0x0.DebugPtr = (TObjectPtr<UStateTree_const_>_u_0)0x0;
    FStateTreeTransitionResult::operator=(&local_58,param_2);
    pUVar1 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_UStateTreeTaskBlueprintBase_ReceiveExitState);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_58);
    DestructItems<FStateTreeFrameStateSelectionEvents,int>
              ((FStateTreeFrameStateSelectionEvents *)
               local_58.NextActiveFrameEvents.AllocatorInstance.Data,
               local_58.NextActiveFrameEvents.ArrayNum);
    if (local_58.NextActiveFrameEvents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.NextActiveFrameEvents.AllocatorInstance.Data);
    }
    DestructItems<FStateTreeExecutionFrame,int>
              ((FStateTreeExecutionFrame *)local_58.NextActiveFrames.AllocatorInstance.Data,
               local_58.NextActiveFrames.ArrayNum);
    if ((FStateTreeExecutionFrame *)local_58.NextActiveFrames.AllocatorInstance.Data !=
        (FStateTreeExecutionFrame *)0x0) {
      FMemory::Free(local_58.NextActiveFrames.AllocatorInstance.Data);
    }
  }
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  if (this_00 != (UWorld *)0x0) {
    this_01 = UWorld::GetLatentActionManager(this_00);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res20 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
    FLatentActionManager::RemoveActionsForObject
              (this_01,(TWeakObjectPtr<UObject,FWeakObjectPtr>)local_res8);
    this_02 = UWorld::GetTimerManager(this_00);
    FTimerManager::InternalClearAllTimers(this_02,this);
  }
  UStateTreeNodeBlueprintBase::ClearCachedInstanceData((UStateTreeNodeBlueprintBase *)this);
  return;
}

// FinishTask @ 14d4bcb40

void __thiscall
UStateTreeTaskBlueprintBase::FinishTask(UStateTreeTaskBlueprintBase *this,bool param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FStateTreeWeakExecutionContext local_88;
  TStateTreeStrongExecutionContext<1> local_48;
  
  this->RunStatus = !param_1 + Succeeded;
  if (this->bIsProcessingEnterStateOrTick == '\0') {
    local_88.Owner.WeakPtr = (FWeakObjectPtr)this->_padding_;
    local_88.StateTree.WeakPtr = (FWeakObjectPtr)this->_padding_;
    local_88.Storage.Object = (FStateTreeInstanceStorage *)this->_padding_;
    local_88.Storage.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)this->_padding_;
    if (local_88.Storage.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.Storage.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_88.Storage.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    local_88.TemporaryStorage.Object = (ITemporaryStorage *)this->_padding_;
    local_88.TemporaryStorage.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)this->_padding_;
    if (local_88.TemporaryStorage.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.TemporaryStorage.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_88.TemporaryStorage.WeakReferenceCount.ReferenceController)->
                 WeakReferenceCount + 1);
      UNLOCK();
    }
    local_88.FrameID.Value = (uint)this->_padding_;
    local_88.StateID.Value = *(uint *)((longlong)&this->_padding_ + 4);
    local_88.NodeIndex.Value = (ushort)this->_padding_;
    TStateTreeStrongExecutionContext<1>::TStateTreeStrongExecutionContext<1>(&local_48,&local_88);
    TStateTreeStrongExecutionContext<1>::FinishTask<1>(&local_48,param_1);
    TStateTreeStrongExecutionContext<1>::~TStateTreeStrongExecutionContext<1>(&local_48);
    if (local_88.TemporaryStorage.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_88.TemporaryStorage.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_88.TemporaryStorage.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_88.TemporaryStorage.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_88.Storage.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_88.Storage.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_88.Storage.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_88.Storage.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  return;
}

// GetPrivateStaticClass @ 14d4bf3e0

UClass * __cdecl UStateTreeTaskBlueprintBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStateTreeTaskBlueprintBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StateTreeModule",L"StateTreeTaskBlueprintBase",
               &Z_Registration_Info_UClass_UStateTreeTaskBlueprintBase.InnerSingleton,
               StaticRegisterNativesUStateTreeTaskBlueprintBase,0x70,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UStateTreeTaskBlueprintBase>,
               InternalVTableHelperCtorCaller<UStateTreeTaskBlueprintBase>,local_res8,
               UStateTreeNodeBlueprintBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStateTreeTaskBlueprintBase.InnerSingleton;
}

// ReceiveEnterState @ 14d4ccd30

EStateTreeRunStatus __thiscall
UStateTreeTaskBlueprintBase::ReceiveEnterState
          (UStateTreeTaskBlueprintBase *this,FStateTreeTransitionResult *param_1)

{
  EStateTreeRunStatus EVar1;
  UFunction *pUVar2;
  FStateTreeTransitionResult local_58;
  EStateTreeRunStatus local_18;
  
  local_58.TargetState = (FStateTreeStateHandle)FStateTreeStateHandle::Invalid.Index;
  local_58.SourceFrameID.Value = 0;
  local_58.SourceStateID.Value = 0;
  local_58.Priority = None;
  local_58.NextActiveFrames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.NextActiveFrames.ArrayNum = 0;
  local_58.NextActiveFrames.ArrayMax = 0;
  local_58.NextActiveFrameEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.NextActiveFrameEvents.ArrayNum = 0;
  local_58.NextActiveFrameEvents.ArrayMax = 0;
  local_58.SourceStateTree.field0_0x0.DebugPtr = (TObjectPtr<UStateTree_const_>_u_0)0x0;
  local_18 = Running;
  local_58.CurrentState.Index = FStateTreeStateHandle::Invalid.Index;
  local_58.CurrentRunStatus = Unset;
  local_58.ChangeType = Changed;
  local_58.SourceRootState.Index = FStateTreeStateHandle::Invalid.Index;
  local_58.SourceState.Index = FStateTreeStateHandle::Invalid.Index;
  FStateTreeTransitionResult::operator=(&local_58,param_1);
  pUVar2 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UStateTreeTaskBlueprintBase_ReceiveEnterState);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar2,&local_58);
  EVar1 = local_18;
  DestructItems<FStateTreeFrameStateSelectionEvents,int>
            ((FStateTreeFrameStateSelectionEvents *)
             local_58.NextActiveFrameEvents.AllocatorInstance.Data,
             local_58.NextActiveFrameEvents.ArrayNum);
  if (local_58.NextActiveFrameEvents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.NextActiveFrameEvents.AllocatorInstance.Data);
  }
  DestructItems<FStateTreeExecutionFrame,int>
            ((FStateTreeExecutionFrame *)local_58.NextActiveFrames.AllocatorInstance.Data,
             local_58.NextActiveFrames.ArrayNum);
  if ((FStateTreeExecutionFrame *)local_58.NextActiveFrames.AllocatorInstance.Data !=
      (FStateTreeExecutionFrame *)0x0) {
    FMemory::Free(local_58.NextActiveFrames.AllocatorInstance.Data);
  }
  return EVar1;
}

// ReceiveExitState @ 14d4cce00

void __thiscall
UStateTreeTaskBlueprintBase::ReceiveExitState
          (UStateTreeTaskBlueprintBase *this,FStateTreeTransitionResult *param_1)

{
  UFunction *pUVar1;
  FStateTreeTransitionResult local_48;
  
  local_48.TargetState = (FStateTreeStateHandle)FStateTreeStateHandle::Invalid.Index;
  local_48.SourceFrameID.Value = 0;
  local_48.SourceStateID.Value = 0;
  local_48.Priority = None;
  local_48.NextActiveFrames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.NextActiveFrames.ArrayNum = 0;
  local_48.NextActiveFrames.ArrayMax = 0;
  local_48.NextActiveFrameEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.NextActiveFrameEvents.ArrayNum = 0;
  local_48.NextActiveFrameEvents.ArrayMax = 0;
  local_48.SourceStateTree.field0_0x0.DebugPtr = (TObjectPtr<UStateTree_const_>_u_0)0x0;
  local_48.CurrentState.Index = FStateTreeStateHandle::Invalid.Index;
  local_48.CurrentRunStatus = Unset;
  local_48.ChangeType = Changed;
  local_48.SourceRootState.Index = FStateTreeStateHandle::Invalid.Index;
  local_48.SourceState.Index = FStateTreeStateHandle::Invalid.Index;
  FStateTreeTransitionResult::operator=(&local_48,param_1);
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UStateTreeTaskBlueprintBase_ReceiveExitState);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_48);
  DestructItems<FStateTreeFrameStateSelectionEvents,int>
            ((FStateTreeFrameStateSelectionEvents *)
             local_48.NextActiveFrameEvents.AllocatorInstance.Data,
             local_48.NextActiveFrameEvents.ArrayNum);
  if (local_48.NextActiveFrameEvents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.NextActiveFrameEvents.AllocatorInstance.Data);
  }
  DestructItems<FStateTreeExecutionFrame,int>
            ((FStateTreeExecutionFrame *)local_48.NextActiveFrames.AllocatorInstance.Data,
             local_48.NextActiveFrames.ArrayNum);
  if ((FStateTreeExecutionFrame *)local_48.NextActiveFrames.AllocatorInstance.Data !=
      (FStateTreeExecutionFrame *)0x0) {
    FMemory::Free(local_48.NextActiveFrames.AllocatorInstance.Data);
  }
  return;
}

// ReceiveLatentEnterState @ 14d4ccfb0

void __thiscall
UStateTreeTaskBlueprintBase::ReceiveLatentEnterState
          (UStateTreeTaskBlueprintBase *this,FStateTreeTransitionResult *param_1)

{
  UFunction *pUVar1;
  FStateTreeTransitionResult local_48;
  
  local_48.TargetState = (FStateTreeStateHandle)FStateTreeStateHandle::Invalid.Index;
  local_48.SourceFrameID.Value = 0;
  local_48.SourceStateID.Value = 0;
  local_48.Priority = None;
  local_48.NextActiveFrames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.NextActiveFrames.ArrayNum = 0;
  local_48.NextActiveFrames.ArrayMax = 0;
  local_48.NextActiveFrameEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.NextActiveFrameEvents.ArrayNum = 0;
  local_48.NextActiveFrameEvents.ArrayMax = 0;
  local_48.SourceStateTree.field0_0x0.DebugPtr = (TObjectPtr<UStateTree_const_>_u_0)0x0;
  local_48.CurrentState.Index = FStateTreeStateHandle::Invalid.Index;
  local_48.CurrentRunStatus = Unset;
  local_48.ChangeType = Changed;
  local_48.SourceRootState.Index = FStateTreeStateHandle::Invalid.Index;
  local_48.SourceState.Index = FStateTreeStateHandle::Invalid.Index;
  FStateTreeTransitionResult::operator=(&local_48,param_1);
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UStateTreeTaskBlueprintBase_ReceiveLatentEnterState);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_48);
  DestructItems<FStateTreeFrameStateSelectionEvents,int>
            ((FStateTreeFrameStateSelectionEvents *)
             local_48.NextActiveFrameEvents.AllocatorInstance.Data,
             local_48.NextActiveFrameEvents.ArrayNum);
  if (local_48.NextActiveFrameEvents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.NextActiveFrameEvents.AllocatorInstance.Data);
  }
  DestructItems<FStateTreeExecutionFrame,int>
            ((FStateTreeExecutionFrame *)local_48.NextActiveFrames.AllocatorInstance.Data,
             local_48.NextActiveFrames.ArrayNum);
  if ((FStateTreeExecutionFrame *)local_48.NextActiveFrames.AllocatorInstance.Data !=
      (FStateTreeExecutionFrame *)0x0) {
    FMemory::Free(local_48.NextActiveFrames.AllocatorInstance.Data);
  }
  return;
}

// ReceiveLatentTick @ 14d4cd070

void __thiscall
UStateTreeTaskBlueprintBase::ReceiveLatentTick(UStateTreeTaskBlueprintBase *this,float param_1)

{
  UFunction *pUVar1;
  float local_res10 [6];
  
  local_res10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UStateTreeTaskBlueprintBase_ReceiveLatentTick);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res10);
  return;
}

// ReceiveStateCompleted @ 14d4cd0b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UStateTreeTaskBlueprintBase::ReceiveStateCompleted
          (UStateTreeTaskBlueprintBase *this,EStateTreeRunStatus param_1,
          FStateTreeActiveStates *param_2)

{
  UFunction *pUVar1;
  undefined1 auStack_68 [32];
  EStateTreeRunStatus local_48 [4];
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined8 local_34;
  undefined8 uStack_2c;
  undefined8 local_24;
  undefined8 uStack_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_44 = *(undefined8 *)param_2->StateIDs;
  uStack_3c = *(undefined8 *)(param_2->StateIDs + 2);
  local_14 = *(undefined4 *)&param_2->NumStates;
  local_34 = *(undefined8 *)(param_2->StateIDs + 4);
  uStack_2c = *(undefined8 *)(param_2->StateIDs + 6);
  local_24 = *(undefined8 *)param_2->States;
  uStack_1c = *(undefined8 *)(param_2->States + 4);
  local_48[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UStateTreeTaskBlueprintBase_ReceiveStateCompleted);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_48);
  return;
}

// ReceiveTick @ 14d4cd1c0

EStateTreeRunStatus __thiscall
UStateTreeTaskBlueprintBase::ReceiveTick(UStateTreeTaskBlueprintBase *this,float param_1)

{
  UFunction *pUVar1;
  float local_res8;
  EStateTreeRunStatus local_resc;
  
  local_resc = Running;
  local_res8 = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UStateTreeTaskBlueprintBase_ReceiveTick);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_res8);
  return local_resc;
}

// StateCompleted @ 14d4d0de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UStateTreeTaskBlueprintBase::StateCompleted
          (UStateTreeTaskBlueprintBase *this,FStateTreeExecutionContext *param_1,
          EStateTreeRunStatus param_2,FStateTreeActiveStates *param_3)

{
  UFunction *pUVar1;
  undefined1 auStack_68 [32];
  EStateTreeRunStatus local_48 [4];
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined8 local_34;
  undefined8 uStack_2c;
  undefined8 local_24;
  undefined8 uStack_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (this->bHasStateCompleted != '\0') {
    local_44 = *(undefined8 *)param_3->StateIDs;
    uStack_3c = *(undefined8 *)(param_3->StateIDs + 2);
    local_14 = *(undefined4 *)&param_3->NumStates;
    local_34 = *(undefined8 *)(param_3->StateIDs + 4);
    uStack_2c = *(undefined8 *)(param_3->StateIDs + 6);
    local_24 = *(undefined8 *)param_3->States;
    uStack_1c = *(undefined8 *)(param_3->States + 4);
    local_48[0] = param_2;
    pUVar1 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_UStateTreeTaskBlueprintBase_ReceiveStateCompleted);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_48);
  }
  return;
}

// StaticRegisterNativesUStateTreeTaskBlueprintBase @ 14d4d10a0

void __cdecl UStateTreeTaskBlueprintBase::StaticRegisterNativesUStateTreeTaskBlueprintBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UStateTreeTaskBlueprintBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Tick @ 14d4d1820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EStateTreeRunStatus __thiscall
UStateTreeTaskBlueprintBase::Tick
          (UStateTreeTaskBlueprintBase *this,FStateTreeExecutionContext *param_1,float param_2)

{
  undefined1 *puVar1;
  byte *pbVar2;
  EStateTreeRunStatus EVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  code *pcVar6;
  UFunction *pUVar7;
  longlong *plVar8;
  undefined ***pppuVar9;
  undefined1 auStack_b8 [32];
  byte local_98 [8];
  float local_90;
  EStateTreeRunStatus local_8c;
  code *local_88;
  undefined **local_78;
  UStateTreeTaskBlueprintBase *pUStack_70;
  byte *local_68;
  undefined ***local_60;
  undefined **local_48;
  UStateTreeTaskBlueprintBase *pUStack_40;
  byte *local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_60 = (undefined ***)0x0;
  local_98[0] = this->bIsProcessingEnterStateOrTick;
  this->bIsProcessingEnterStateOrTick = '\x01';
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UStateTreeTaskBlueprintBase::Tick'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_68 = local_98;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`UStateTreeTaskBlueprintBase::Tick'::__l2::<lambda_1>,void>::Call;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UStateTreeTaskBlueprintBase::Tick'::`2'::<lambda_1>,0,0>::
              _vftable_;
  pUStack_70 = this;
  pUStack_40 = this;
  local_38 = local_68;
  if (this->bHasLatentTick == 0) {
    if (this->bHasTick_DEPRECATED != '\0') {
      local_8c = Running;
      local_90 = param_2;
      pUVar7 = UObject::FindFunctionChecked
                         ((UObject *)this,NAME_UStateTreeTaskBlueprintBase_ReceiveTick);
      (**(code **)(this->_padding_ + 0x260))(this,pUVar7,&local_90);
      this->RunStatus = local_8c;
    }
  }
  else {
    local_90 = param_2;
    pUVar7 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_UStateTreeTaskBlueprintBase_ReceiveLatentTick);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar7,&local_90);
  }
  EVar3 = this->RunStatus;
  UE::Core::Private::Function::CheckCallable(local_88);
  pcVar6 = local_88;
  pppuVar9 = &local_78;
  if (local_60 != (undefined ***)0x0) {
    pppuVar9 = local_60;
  }
  plVar8 = (longlong *)(*(code *)(*pppuVar9)[1])();
  if (pcVar6 == UE::Core::Private::Function::
                TFunctionRefCaller<`UStateTreeTaskBlueprintBase::Tick'::__l2::<lambda_1>,void>::Call
     ) {
    pbVar2 = (byte *)(*plVar8 + 0x6a);
    *pbVar2 = *pbVar2 ^ (*(char *)plVar8[1] << 3 ^ *(byte *)(*plVar8 + 0x6a)) & 8;
  }
  else {
    (*pcVar6)(plVar8);
  }
  if (local_88 != (code *)0x0) {
    pppuVar9 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar9 = local_60;
    }
    (*(code *)(*pppuVar9)[2])();
  }
  return EVar3;
}

// UnbindDelegate @ 14d4d36f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UStateTreeTaskBlueprintBase::UnbindDelegate
          (UStateTreeTaskBlueprintBase *this,FStateTreeDelegateListener *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  bool bVar3;
  FStateTreeWeakExecutionContext local_48;
  
  local_48.Owner.WeakPtr = (FWeakObjectPtr)this->_padding_;
  local_48.StateTree.WeakPtr = (FWeakObjectPtr)this->_padding_;
  local_48.Storage.Object = (FStateTreeInstanceStorage *)this->_padding_;
  local_48.Storage.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)this->_padding_;
  if (local_48.Storage.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    (local_48.Storage.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_48.Storage.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_48.TemporaryStorage.Object = (ITemporaryStorage *)this->_padding_;
  local_48.TemporaryStorage.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)this->_padding_;
  if (local_48.TemporaryStorage.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.TemporaryStorage.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_48.TemporaryStorage.WeakReferenceCount.ReferenceController)->
               WeakReferenceCount + 1);
    UNLOCK();
  }
  local_48.FrameID.Value = (uint)this->_padding_;
  local_48.StateID.Value = *(uint *)((longlong)&this->_padding_ + 4);
  local_48.NodeIndex.Value = (ushort)this->_padding_;
  bVar3 = FStateTreeWeakExecutionContext::UnbindDelegate(&local_48,param_1);
  if (local_48.TemporaryStorage.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_48.TemporaryStorage.WeakReferenceCount.ReferenceController)->WeakReferenceCount
    ;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_48.TemporaryStorage.WeakReferenceCount.ReferenceController)->_padding_ + 8
                  ))();
    }
  }
  if (local_48.Storage.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    paVar1 = &(local_48.Storage.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_48.Storage.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_48.Storage.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (!bVar3) {
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this,(FName *)&LogStateTree.field_0x4,Error,
                 L"Failed to unbind the delegate. The instance probably stopped.");
    }
    if (1 < (byte)LogStateTree._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
    }
  }
  return;
}

// execBindDelegate @ 14d4d7af0

void __cdecl
UStateTreeTaskBlueprintBase::execBindDelegate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this;
  FStateTreeDelegateListener *pFVar2;
  FStateTreeDelegateListener local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  atomic<unsigned___int64> local_38;
  FReadAccessScope local_30;
  
  local_78.Dispatcher.ID.A = 0;
  local_78.Dispatcher.ID.B = 0;
  local_78.Dispatcher.ID.C = 0;
  local_78.Dispatcher.ID.D = 0;
  local_78.ID = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_60.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_58 = 0;
  pFVar2 = &local_78;
  if ((FStateTreeDelegateListener *)param_2->MostRecentPropertyAddress !=
      (FStateTreeDelegateListener *)0x0) {
    pFVar2 = (FStateTreeDelegateListener *)param_2->MostRecentPropertyAddress;
  }
  local_50 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_48._0_8_ = (atomic<unsigned___int64>)0x0;
  this = &local_60;
  if ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2->MostRecentPropertyAddress
      != (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)0x0) {
    this = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
           param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_30);
  local_48._8_8_ = this[1].AccessDetector.State;
  local_38 = this[2].AccessDetector.State;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_30);
  BindDelegate((UStateTreeTaskBlueprintBase *)param_1,pFVar2,(FStateTreeDynamicDelegate *)local_48);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_60.AccessDetector);
  return;
}

// execBroadcastDelegate @ 14d4d7c50

void __cdecl
UStateTreeTaskBlueprintBase::execBroadcastDelegate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGuid local_28;
  FGuid local_18;
  
  local_28.A = 0;
  local_28.B = 0;
  local_28.C = 0;
  local_28.D = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18.A = local_28.A;
  local_18.B = local_28.B;
  local_18.C = local_28.C;
  local_18.D = local_28.D;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  BroadcastDelegate((UStateTreeTaskBlueprintBase *)param_1,(FStateTreeDelegateDispatcher *)&local_18
                   );
  return;
}

// execFinishTask @ 14d4d7cf0

void __cdecl
UStateTreeTaskBlueprintBase::execFinishTask(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FProperty *pFVar3;
  bool bVar4;
  int local_res8 [2];
  FStateTreeWeakExecutionContext local_88;
  TStateTreeStrongExecutionContext<1> local_48;
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar4 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[2].field_0x18 = (local_res8[0] == 0) + '\x02';
  if ((param_1[2].field_0x1a & 8) == 0) {
    local_88.Owner.WeakPtr.ObjectIndex = *(int *)&param_1[1].field_0x0;
    local_88.Owner.WeakPtr.ObjectSerialNumber = *(int *)&param_1[1].field_0x4;
    local_88.StateTree.WeakPtr.ObjectIndex = *(int *)&param_1[1].field_0x8;
    local_88.StateTree.WeakPtr.ObjectSerialNumber = *(int *)&param_1[1].field_0xc;
    local_88.Storage.Object = *(FStateTreeInstanceStorage **)&param_1[1].field_0x10;
    local_88.Storage.WeakReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)&param_1[1].field_0x18;
    if (local_88.Storage.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.Storage.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_88.Storage.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    local_88.TemporaryStorage.Object = *(ITemporaryStorage **)&param_1[1].field_0x20;
    local_88.TemporaryStorage.WeakReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(param_1 + 2);
    if (local_88.TemporaryStorage.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.TemporaryStorage.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_88.TemporaryStorage.WeakReferenceCount.ReferenceController)->
                 WeakReferenceCount + 1);
      UNLOCK();
    }
    local_88.FrameID.Value = *(uint *)&param_1[2].field_0x8;
    local_88.StateID.Value = *(uint *)&param_1[2].field_0xc;
    local_88.NodeIndex.Value = *(ushort *)&param_1[2].field_0x10;
    TStateTreeStrongExecutionContext<1>::TStateTreeStrongExecutionContext<1>(&local_48,&local_88);
    TStateTreeStrongExecutionContext<1>::FinishTask<1>(&local_48,bVar4);
    TStateTreeStrongExecutionContext<1>::~TStateTreeStrongExecutionContext<1>(&local_48);
    if (local_88.TemporaryStorage.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_88.TemporaryStorage.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_88.TemporaryStorage.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_88.TemporaryStorage.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_88.Storage.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_88.Storage.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_88.Storage.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_88.Storage.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  return;
}

// execUnbindDelegate @ 14d4d86b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UStateTreeTaskBlueprintBase::execUnbindDelegate(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FProperty *pFVar3;
  bool bVar4;
  FStateTreeDelegateListener *pFVar5;
  FStateTreeDelegateListener local_68;
  FStateTreeWeakExecutionContext local_50;
  
  local_68.Dispatcher.ID.A = 0;
  local_68.Dispatcher.ID.B = 0;
  local_68.Dispatcher.ID.C = 0;
  local_68.Dispatcher.ID.D = 0;
  local_68.ID = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  pFVar5 = &local_68;
  if ((FStateTreeDelegateListener *)param_2->MostRecentPropertyAddress !=
      (FStateTreeDelegateListener *)0x0) {
    pFVar5 = (FStateTreeDelegateListener *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_50.Owner.WeakPtr.ObjectIndex = *(int *)&param_1[1].field_0x0;
  local_50.Owner.WeakPtr.ObjectSerialNumber = *(int *)&param_1[1].field_0x4;
  local_50.StateTree.WeakPtr.ObjectIndex = *(int *)&param_1[1].field_0x8;
  local_50.StateTree.WeakPtr.ObjectSerialNumber = *(int *)&param_1[1].field_0xc;
  local_50.Storage.Object = *(FStateTreeInstanceStorage **)&param_1[1].field_0x10;
  local_50.Storage.WeakReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&param_1[1].field_0x18;
  if (local_50.Storage.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    (local_50.Storage.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_50.Storage.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_50.TemporaryStorage.Object = *(ITemporaryStorage **)&param_1[1].field_0x20;
  local_50.TemporaryStorage.WeakReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)(param_1 + 2);
  if (local_50.TemporaryStorage.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_50.TemporaryStorage.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_50.TemporaryStorage.WeakReferenceCount.ReferenceController)->
               WeakReferenceCount + 1);
    UNLOCK();
  }
  local_50.FrameID.Value = *(uint *)&param_1[2].field_0x8;
  local_50.StateID.Value = *(uint *)&param_1[2].field_0xc;
  local_50.NodeIndex.Value = *(ushort *)&param_1[2].field_0x10;
  bVar4 = FStateTreeWeakExecutionContext::UnbindDelegate(&local_50,pFVar5);
  if (local_50.TemporaryStorage.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_50.TemporaryStorage.WeakReferenceCount.ReferenceController)->WeakReferenceCount
    ;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_50.TemporaryStorage.WeakReferenceCount.ReferenceController)->_padding_ + 8
                  ))();
    }
  }
  if (local_50.Storage.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    paVar1 = &(local_50.Storage.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_50.Storage.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_50.Storage.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (!bVar4) {
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                (param_1,(FName *)&LogStateTree.field_0x4,Error,
                 L"Failed to unbind the delegate. The instance probably stopped.");
    }
    if (1 < (byte)LogStateTree._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
    }
  }
  return;
}

