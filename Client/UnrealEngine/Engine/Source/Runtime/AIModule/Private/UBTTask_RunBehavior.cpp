// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 9

// StaticClass @ 146eaf710

UClass * __cdecl UBTTask_RunBehavior::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_RunBehavior.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_RunBehavior",
               &Z_Registration_Info_UClass_UBTTask_RunBehavior.InnerSingleton,
               StaticRegisterNativesUBTTask_RunBehavior,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UBTTask_RunBehavior>,
               InternalVTableHelperCtorCaller<UBTTask_RunBehavior>,local_res8,
               UBTTaskNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_RunBehavior.InnerSingleton;
}

// UBTTask_RunBehavior @ 146ec9dc0

UBTTask_RunBehavior * __thiscall
UBTTask_RunBehavior::UBTTask_RunBehavior(UBTTask_RunBehavior *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->BehaviorAsset).field0_0x0.DebugPtr = (UBehaviorTree *)0x0;
  return this;
}

// UBTTask_RunBehavior @ 146ec9e10

UBTTask_RunBehavior * __thiscall
UBTTask_RunBehavior::UBTTask_RunBehavior(UBTTask_RunBehavior *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  FString local_18;
  
  UObject::UObject((UObject *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xf8;
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffff8;
  plVar2 = &this->_padding_;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 & 0xfe;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *plVar2 = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->BehaviorAsset).field0_0x0.DebugPtr = (UBehaviorTree *)0x0;
  ::FString::FString(&local_18,"Run Behavior");
  if ((FString *)plVar2 != &local_18) {
    if ((void *)*plVar2 != (void *)0x0) {
      FMemory::Free((void *)*plVar2);
    }
    *plVar2 = (longlong)local_18.Data.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_18.Data.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~UBTTask_RunBehavior @ 146ecd6e0

void __thiscall UBTTask_RunBehavior::~UBTTask_RunBehavior(UBTTask_RunBehavior *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UBTTaskNode::~UBTTaskNode((UBTTaskNode *)this);
  return;
}

// ExecuteTask @ 146ee1f80

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
UBTTask_RunBehavior::ExecuteTask
          (UBTTask_RunBehavior *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  int iVar1;
  UBehaviorTree *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  Type TVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  uint uVar10;
  UBTTask_RunBehavior *local_res8;
  FString local_38;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (((FVisualLogger::bIsRecording != 0) &&
      ((this->BehaviorAsset).field0_0x0.DebugPtr == (UBehaviorTree *)0x0)) &&
     (FVisualLogger::bIsRecording != 0)) {
    UBTNode::GetNodeName((UBTNode *)this,&local_38);
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)param_1->_padding_,(FName *)&LogBehaviorTree.field_0x4,Error,
               L"\'%s\' is missing BehaviorAsset!");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  pUVar2 = (this->BehaviorAsset).field0_0x0.DebugPtr;
  if (((pUVar2 != (UBehaviorTree *)0x0) &&
      (bVar5 = UBehaviorTreeComponent::PushInstance(param_1,pUVar2), bVar5)) &&
     (iVar1 = (param_1->InstanceStack).ArrayNum, 0 < iVar1)) {
    uVar10 = iVar1 - 1;
    uVar6 = 0;
    if ((int)uVar10 < iVar1) {
      uVar6 = ~uVar10 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      TVar7 = (*pcVar4)();
      return TVar7;
    }
    pFVar3 = (param_1->InstanceStack).AllocatorInstance.Data;
    local_38.Data.ArrayNum = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)_vcall__808__flat______;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               (pFVar3 + (longlong)(int)uVar10 * 0x68 + 0x48),(FWriteAccessScope *)&local_28);
    local_10 = (FDelegateAllocation *)(pFVar3 + (longlong)(int)uVar10 * 0x68 + 0x50);
    puVar8 = UE::Core::Private::DelegateAllocate(0x30,local_10);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVUBehaviorTreeComponent__W4Type_EBTNodeResult___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTTask_RunBehavior____A6AXAEAVUBehaviorTreeComponent__W4Type_EBTNodeResult___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar8[3] = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_res8);
      puVar8[4] = local_38.Data.AllocatorInstance.Data;
      puVar8[5] = CONCAT44(local_38.Data.ArrayMax,local_38.Data.ArrayNum);
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    return InProgress;
  }
  return Failed;
}

// GetPrivateStaticClass @ 146ee8d60

UClass * __cdecl UBTTask_RunBehavior::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_RunBehavior.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_RunBehavior",
               &Z_Registration_Info_UClass_UBTTask_RunBehavior.InnerSingleton,
               StaticRegisterNativesUBTTask_RunBehavior,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UBTTask_RunBehavior>,
               InternalVTableHelperCtorCaller<UBTTask_RunBehavior>,local_res8,
               UBTTaskNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_RunBehavior.InnerSingleton;
}

// GetStaticDescription @ 146eecfd0

FString * __thiscall
UBTTask_RunBehavior::GetStaticDescription(UBTTask_RunBehavior *this,FString *__return_storage_ptr__)

{
  UObject *pUVar1;
  UBehaviorTree *pUVar2;
  UObject *pUVar3;
  FName local_res8;
  FString local_38;
  FString local_28;
  
  if (this->_padding_ != 0) {
    pUVar1 = *(UObject **)(this->_padding_ + 0x38);
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    if ((((pUVar1 != (UObject *)0x0) &&
         (pUVar2 = (this->BehaviorAsset).field0_0x0.DebugPtr, pUVar2 != (UBehaviorTree *)0x0)) &&
        (pUVar3 = (UObject *)(**(code **)(pUVar2->_padding_ + 0x10))(&pUVar2->_padding_),
        pUVar3 != (UObject *)0x0)) && (pUVar1 != pUVar3)) {
      for (pUVar1 = *(UObject **)&pUVar1[1].field_0x8;
          (pUVar1 != (UObject *)0x0 && (pUVar1 != pUVar3));
          pUVar1 = *(UObject **)&pUVar1[1].field_0x8) {
      }
    }
  }
  pUVar2 = (this->BehaviorAsset).field0_0x0.DebugPtr;
  if (pUVar2 == (UBehaviorTree *)0x0) {
    ::FString::FString(&local_38,L"None");
  }
  else {
    local_res8 = (FName)pUVar2->_padding_;
    ::FName::ToString(&local_res8,&local_38);
  }
  UBehaviorTreeTypes::GetShortTypeName(&local_28,(UObject *)this);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s: %s%s");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// OnSubtreeDeactivated @ 146ef9d50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UBTTask_RunBehavior::OnSubtreeDeactivated
          (UBTTask_RunBehavior *this,UBehaviorTreeComponent *param_1,Type param_2)

{
  int iVar1;
  uchar *puVar2;
  FString local_38;
  FString local_28;
  
  iVar1 = UBehaviorTreeComponent::FindInstanceContainingNode(param_1,(UBTNode *)this);
  puVar2 = UBehaviorTreeComponent::GetNodeMemory(param_1,(UBTNode *)this,iVar1);
  if (FVisualLogger::bIsRecording != 0) {
    UBehaviorTreeTypes::DescribeNodeResult(&local_28,param_2);
    UBehaviorTreeTypes::DescribeNodeHelper(&local_38,(UBTNode *)this);
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)param_1->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose,
               L"OnSubtreeDeactivated: %s (result: %s)");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146ef9e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 800))(this,param_1,puVar2,param_2);
  return;
}

// StaticRegisterNativesUBTTask_RunBehavior @ 146f00e30

void __cdecl UBTTask_RunBehavior::StaticRegisterNativesUBTTask_RunBehavior(void)

{
  return;
}

