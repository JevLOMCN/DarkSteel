// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 12

// StaticClass @ 146eafea0

UClass * __cdecl UBTTask_RunBehaviorDynamic::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_RunBehaviorDynamic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_RunBehaviorDynamic",
               &Z_Registration_Info_UClass_UBTTask_RunBehaviorDynamic.InnerSingleton,
               StaticRegisterNativesUBTTask_RunBehaviorDynamic,0x88,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Game",InternalConstructor<UBTTask_RunBehaviorDynamic>,
               InternalVTableHelperCtorCaller<UBTTask_RunBehaviorDynamic>,local_res8,
               UBTTaskNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_RunBehaviorDynamic.InnerSingleton;
}

// UBTTask_RunBehaviorDynamic @ 146ec9ef0

UBTTask_RunBehaviorDynamic * __thiscall
UBTTask_RunBehaviorDynamic::UBTTask_RunBehaviorDynamic
          (UBTTask_RunBehaviorDynamic *this,FVTableHelper *param_1)

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
  (this->InjectionTag).TagName = (FName)0x0;
  (this->DefaultBehaviorAsset).field0_0x0.DebugPtr = (UBehaviorTree *)0x0;
  (this->BehaviorAsset).field0_0x0.DebugPtr = (UBehaviorTree *)0x0;
  return this;
}

// UBTTask_RunBehaviorDynamic @ 146ec9f50

UBTTask_RunBehaviorDynamic * __thiscall
UBTTask_RunBehaviorDynamic::UBTTask_RunBehaviorDynamic
          (UBTTask_RunBehaviorDynamic *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  FString local_18;
  
  UObject::UObject((UObject *)this,param_1);
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffff8;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 & 0xfe;
  plVar2 = &this->_padding_;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *plVar2 = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xf8;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->InjectionTag).TagName = (FName)0x0;
  (this->DefaultBehaviorAsset).field0_0x0.DebugPtr = (UBehaviorTree *)0x0;
  (this->BehaviorAsset).field0_0x0.DebugPtr = (UBehaviorTree *)0x0;
  ::FString::FString(&local_18,"Run Behavior Dynamic");
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
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 | 4;
  return this;
}

// ~UBTTask_RunBehaviorDynamic @ 146ecd700

void __thiscall
UBTTask_RunBehaviorDynamic::~UBTTask_RunBehaviorDynamic(UBTTask_RunBehaviorDynamic *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UBTTaskNode::~UBTTaskNode((UBTTaskNode *)this);
  return;
}

// DescribeRuntimeValues @ 146edceb0

/* WARNING: Removing unreachable block (ram,0x000146edcfee) */
/* WARNING: Removing unreachable block (ram,0x000146edd0f7) */

void __thiscall
UBTTask_RunBehaviorDynamic::DescribeRuntimeValues
          (UBTTask_RunBehaviorDynamic *this,UBehaviorTreeComponent *param_1,uchar *param_2,
          Type param_3,TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  UBehaviorTree *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FName local_res8;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  pUVar1 = (this->BehaviorAsset).field0_0x0.DebugPtr;
  if (pUVar1 == (UBehaviorTree *)0x0) {
    ::FString::FString(&local_38,L"None");
  }
  else {
    local_res8 = (FName)pUVar1->_padding_;
    ::FName::ToString(&local_res8,&local_38);
  }
  ::FString::PrintfImpl(&local_58,L"subtree: %s");
  pFVar5 = (param_4->AllocatorInstance).Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_58) &&
      ((FScriptContainerElement *)&local_58 < pFVar5 + (longlong)param_4->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_4->ArrayNum;
  if (iVar4 == param_4->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
  }
  param_4->ArrayNum = iVar4 + 1;
  pFVar5 = (param_4->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_58.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_58.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_58.Data.ArrayMax;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pUVar1 = (this->BehaviorAsset).field0_0x0.DebugPtr;
  if (pUVar1 != (UBehaviorTree *)0x0) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar1,&local_28,(UObject *)0x0);
    ::FString::PrintfImpl(&local_48,L"subtree path: %s");
    pFVar5 = (param_4->AllocatorInstance).Data;
    if (((pFVar5 <= (FScriptContainerElement *)&local_48) &&
        ((FScriptContainerElement *)&local_48 < pFVar5 + (longlong)param_4->ArrayMax * 0x10)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = param_4->ArrayNum;
    if (iVar4 == param_4->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
    }
    param_4->ArrayNum = iVar4 + 1;
    pFVar5 = (param_4->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
    *(undefined8 *)pFVar5 = 0;
    *(FScriptContainerElement **)pFVar5 = local_48.Data.AllocatorInstance.Data;
    *(int *)(pFVar5 + 8) = local_48.Data.ArrayNum;
    *(int *)(pFVar5 + 0xc) = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ExecuteTask @ 146ee2180

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
UBTTask_RunBehaviorDynamic::ExecuteTask
          (UBTTask_RunBehaviorDynamic *this,UBehaviorTreeComponent *param_1,uchar *param_2)

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
  FName local_res8;
  UBTTask_RunBehaviorDynamic *local_res20;
  FString local_68;
  FString local_58;
  FString local_48;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  if ((2 < (byte)LogBehaviorTree._0_1_) &&
     ((this->BehaviorAsset).field0_0x0.DebugPtr == (UBehaviorTree *)0x0)) {
    UBTNode::GetNodeName((UBTNode *)this,&local_58);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBehaviorTree);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (((1 < (byte)LogBehaviorTree._0_1_) &&
      (pUVar2 = (this->BehaviorAsset).field0_0x0.DebugPtr, pUVar2 != (UBehaviorTree *)0x0)) &&
     (0 < (pUVar2->RootDecorators).ArrayNum)) {
    local_res8 = (FName)pUVar2->_padding_;
    ::FName::ToString(&local_res8,&local_68);
    UBTNode::GetNodeName((UBTNode *)this,&local_48);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBehaviorTree);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  pUVar2 = (this->BehaviorAsset).field0_0x0.DebugPtr;
  if (((pUVar2 == (UBehaviorTree *)0x0) ||
      (bVar5 = UBehaviorTreeComponent::PushInstance(param_1,pUVar2), !bVar5)) ||
     (iVar1 = (param_1->InstanceStack).ArrayNum, iVar1 < 1)) {
    TVar7 = Failed;
  }
  else {
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
    local_68.Data.ArrayNum = 0;
    pFVar3 = (param_1->InstanceStack).AllocatorInstance.Data;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)_vcall__808__flat______;
    local_68.Data.ArrayMax = local_48.Data.ArrayMax;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               (pFVar3 + (longlong)(int)uVar10 * 0x68 + 0x48),(FWriteAccessScope *)&local_38);
    local_20 = (FDelegateAllocation *)(pFVar3 + (longlong)(int)uVar10 * 0x68 + 0x50);
    puVar8 = UE::Core::Private::DelegateAllocate(0x30,local_20);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVUBehaviorTreeComponent__W4Type_EBTNodeResult___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTTask_RunBehaviorDynamic____A6AXAEAVUBehaviorTreeComponent__W4Type_EBTNodeResult___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar8[3] = 0;
      local_res20 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_res20);
      puVar8[4] = local_68.Data.AllocatorInstance.Data;
      puVar8[5] = CONCAT44(local_68.Data.ArrayMax,local_68.Data.ArrayNum);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
    TVar7 = InProgress;
  }
  return TVar7;
}

// GetPrivateStaticClass @ 146ee8e20

UClass * __cdecl UBTTask_RunBehaviorDynamic::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_RunBehaviorDynamic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_RunBehaviorDynamic",
               &Z_Registration_Info_UClass_UBTTask_RunBehaviorDynamic.InnerSingleton,
               StaticRegisterNativesUBTTask_RunBehaviorDynamic,0x88,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Game",InternalConstructor<UBTTask_RunBehaviorDynamic>,
               InternalVTableHelperCtorCaller<UBTTask_RunBehaviorDynamic>,local_res8,
               UBTTaskNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_RunBehaviorDynamic.InnerSingleton;
}

// GetStaticDescription @ 146eed130

FString * __thiscall
UBTTask_RunBehaviorDynamic::GetStaticDescription
          (UBTTask_RunBehaviorDynamic *this,FString *__return_storage_ptr__)

{
  FString local_28;
  FString local_18;
  
  ::FName::ToString(&(this->InjectionTag).TagName,&local_18);
  UBehaviorTreeTypes::GetShortTypeName(&local_28,(UObject *)this);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s: %s");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// OnInstanceCreated @ 146ef7dd0

void __thiscall
UBTTask_RunBehaviorDynamic::OnInstanceCreated
          (UBTTask_RunBehaviorDynamic *this,UBehaviorTreeComponent *param_1)

{
  UBehaviorTree *pUVar1;
  
  if (!UE::GC::GIsIncrementalReachabilityPending) {
    (this->BehaviorAsset).field0_0x0 = (this->DefaultBehaviorAsset).field0_0x0;
    return;
  }
  pUVar1 = (this->DefaultBehaviorAsset).field0_0x0.DebugPtr;
  if (pUVar1 != (UBehaviorTree *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
    (this->BehaviorAsset).field0_0x0 = (this->DefaultBehaviorAsset).field0_0x0;
    return;
  }
  (this->BehaviorAsset).field0_0x0.DebugPtr = (UBehaviorTree *)0x0;
  return;
}

// OnSubtreeDeactivated @ 146ef9e60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UBTTask_RunBehaviorDynamic::OnSubtreeDeactivated
          (UBTTask_RunBehaviorDynamic *this,UBehaviorTreeComponent *param_1,Type param_2)

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
                    /* WARNING: Could not recover jumptable at 0x000146ef9f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 800))(this,param_1,puVar2,param_2);
  return;
}

// SetBehaviorAsset @ 146efeb40

bool __thiscall
UBTTask_RunBehaviorDynamic::SetBehaviorAsset
          (UBTTask_RunBehaviorDynamic *this,UBehaviorTree *param_1)

{
  UBehaviorTree *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->BehaviorAsset).field0_0x0.DebugPtr;
  if (pUVar1 == (UBehaviorTree *)0x0) {
    bVar2 = param_1 == (UBehaviorTree *)0x0;
  }
  else {
    bVar2 = pUVar1 == param_1;
  }
  if (!bVar2) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UBehaviorTree *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->BehaviorAsset).field0_0x0.DebugPtr = param_1;
    return true;
  }
  return false;
}

// StaticRegisterNativesUBTTask_RunBehaviorDynamic @ 146f00e40

void __cdecl UBTTask_RunBehaviorDynamic::StaticRegisterNativesUBTTask_RunBehaviorDynamic(void)

{
  return;
}

