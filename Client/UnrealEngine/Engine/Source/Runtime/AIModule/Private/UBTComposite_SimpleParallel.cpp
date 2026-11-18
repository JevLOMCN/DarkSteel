// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 18

// StaticClass @ 146eae720

UClass * __cdecl UBTComposite_SimpleParallel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTComposite_SimpleParallel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTComposite_SimpleParallel",
               &Z_Registration_Info_UClass_UBTComposite_SimpleParallel.InnerSingleton,
               StaticRegisterNativesUBTComposite_SimpleParallel,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Game",InternalConstructor<UBTComposite_SimpleParallel>,
               InternalVTableHelperCtorCaller<UBTComposite_SimpleParallel>,local_res8,
               UBTCompositeNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTComposite_SimpleParallel.InnerSingleton;
}

// UBTComposite_SimpleParallel @ 146ec5330

UBTComposite_SimpleParallel * __thiscall
UBTComposite_SimpleParallel::UBTComposite_SimpleParallel
          (UBTComposite_SimpleParallel *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// UBTComposite_SimpleParallel @ 146ec5390

UBTComposite_SimpleParallel * __thiscall
UBTComposite_SimpleParallel::UBTComposite_SimpleParallel
          (UBTComposite_SimpleParallel *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  FString local_18;
  
  UBTCompositeNode::UBTCompositeNode((UBTCompositeNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  ::FString::FString(&local_18,"Simple Parallel");
  plVar1 = &this->_padding_;
  if ((FString *)plVar1 != &local_18) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = (longlong)local_18.Data.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_18.Data.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xffffffab | 0x2b;
  return this;
}

// ~UBTComposite_SimpleParallel @ 146ecc9d0

void __thiscall
UBTComposite_SimpleParallel::~UBTComposite_SimpleParallel(UBTComposite_SimpleParallel *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UBTCompositeNode::~UBTCompositeNode((UBTCompositeNode *)this);
  return;
}

// CanNotifyDecoratorsOnDeactivation @ 146ed5670

bool __thiscall
UBTComposite_SimpleParallel::CanNotifyDecoratorsOnDeactivation
          (UBTComposite_SimpleParallel *this,FBehaviorTreeSearchData *param_1,int param_2,
          Type *param_3)

{
  FBTParallelMemory *pFVar1;
  
  if (param_2 == 0) {
    pFVar1 = UBTNode::GetNodeMemory<FBTParallelMemory>((UBTNode *)this,param_1);
    return (bool)(~pFVar1->bMainTaskIsActive & 1);
  }
  return true;
}

// CanPushSubtree @ 146ed56c0

bool __thiscall
UBTComposite_SimpleParallel::CanPushSubtree
          (UBTComposite_SimpleParallel *this,UBehaviorTreeComponent *param_1,uchar *param_2,
          int param_3)

{
  return param_3 != 0;
}

// CleanupMemory @ 146ed5ea0

void __thiscall
UBTComposite_SimpleParallel::CleanupMemory
          (UBTComposite_SimpleParallel *this,UBehaviorTreeComponent *param_1,uchar *param_2,
          Type param_3)

{
  return;
}

// DescribeFinishMode @ 146ed9a40

FString * __cdecl
UBTComposite_SimpleParallel::DescribeFinishMode(FString *__return_storage_ptr__,Type param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(FinishDesc,L"AbortBackground");
      ::FString::FString(FinishDesc + 1,L"WaitForBackground");
      atexit(`UBTComposite_SimpleParallel::DescribeFinishMode'::__l2::
             _dynamic_atexit_destructor_for__FinishDesc__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  ::FString::FString(__return_storage_ptr__,FinishDesc + (int)param_1);
  return __return_storage_ptr__;
}

// DescribeRuntimeValues @ 146edb0c0

/* WARNING: Removing unreachable block (ram,0x000146edb1e7) */
/* WARNING: Removing unreachable block (ram,0x000146edb2ce) */

void __thiscall
UBTComposite_SimpleParallel::DescribeRuntimeValues
          (UBTComposite_SimpleParallel *this,UBehaviorTreeComponent *param_1,uchar *param_2,
          Type param_3,TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FString local_28;
  FString local_18;
  
  UBTCompositeNode::DescribeRuntimeValues((UBTCompositeNode *)this,param_1,param_2,param_3,param_4);
  if (param_3 == Detailed) {
    ::FString::PrintfImpl(&local_28,L"main task: %s");
    pFVar4 = (param_4->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
        ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_4->ArrayMax * 0x10)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar3 = param_4->ArrayNum;
    if (iVar3 == param_4->ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
    }
    param_4->ArrayNum = iVar3 + 1;
    pFVar4 = (param_4->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
    *(undefined8 *)pFVar4 = 0;
    *(FScriptContainerElement **)pFVar4 = local_28.Data.AllocatorInstance.Data;
    *(int *)(pFVar4 + 8) = local_28.Data.ArrayNum;
    *(int *)(pFVar4 + 0xc) = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if ((param_2[9] & 2) != 0) {
      ::FString::FString(&local_18,L"force background tree");
      pFVar4 = (param_4->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
          ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_4->ArrayMax * 0x10)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar3 = param_4->ArrayNum;
      if (iVar3 == param_4->ArrayMax) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
      }
      param_4->ArrayNum = iVar3 + 1;
      pFVar4 = (param_4->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
      *(undefined8 *)pFVar4 = 0;
      *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
      *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
      *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
    }
  }
  return;
}

// GetInstanceMemorySize @ 146ee5a00

ushort __thiscall
UBTComposite_SimpleParallel::GetInstanceMemorySize(UBTComposite_SimpleParallel *this)

{
  return 0xc;
}

// GetNextChildHandler @ 146ee6660

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UBTComposite_SimpleParallel::GetNextChildHandler
          (UBTComposite_SimpleParallel *this,FBehaviorTreeSearchData *param_1,int param_2,
          Type param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  FBTParallelMemory *pFVar3;
  int iVar4;
  FString local_18;
  
  pFVar3 = UBTNode::GetNodeMemory<FBTParallelMemory>((UBTNode *)this,param_1);
  iVar4 = -2;
  puVar1 = &pFVar3->field_0x9;
  uVar2 = *puVar1;
  if (param_2 == -1) {
    iVar4 = 0;
    (pFVar3->MainTaskResult).Value = '\x01';
    pFVar3->field_0x9 = uVar2 & 0xfb;
  }
  else {
    if ((pFVar3->bMainTaskIsActive == '\0' && pFVar3->bForceBackgroundTree == '\0') ||
       (((param_1->OwnerComp->ExecutionRequest).ExecuteNode.field0_0x0.DebugPtr !=
         (UBTCompositeNode *)0x0 && ((param_1->OwnerComp->ExecutionRequest).bTryNextChild == 0)))) {
      if (pFVar3->bRepeatMainTask != '\0') {
        if (FVisualLogger::bIsRecording != 0) {
          UBehaviorTreeTypes::DescribeNodeHelper(&local_18,(UBTNode *)this);
          FVisualLogger::CategorizedLogfImpl
                    ((UObject *)param_1->OwnerComp->_padding_,(FName *)&LogBehaviorTree.field_0x4,
                     Verbose,L"Repeating main task of %s");
          if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.Data.AllocatorInstance.Data);
          }
        }
        iVar4 = 0;
        pFVar3->bRepeatMainTask = '\0';
      }
    }
    else {
      iVar4 = 1;
      pFVar3->field_0x9 = uVar2 & 0xfd;
    }
    if ((param_2 == iVar4) && (pFVar3->LastSearchId == param_1->SearchId)) {
      param_1->bPostponeSearch = 1;
    }
  }
  pFVar3->LastSearchId = param_1->SearchId;
  return iVar4;
}

// GetPrivateStaticClass @ 146ee7030

UClass * __cdecl UBTComposite_SimpleParallel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTComposite_SimpleParallel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTComposite_SimpleParallel",
               &Z_Registration_Info_UClass_UBTComposite_SimpleParallel.InnerSingleton,
               StaticRegisterNativesUBTComposite_SimpleParallel,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Game",InternalConstructor<UBTComposite_SimpleParallel>,
               InternalVTableHelperCtorCaller<UBTComposite_SimpleParallel>,local_res8,
               UBTCompositeNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTComposite_SimpleParallel.InnerSingleton;
}

// GetStaticDescription @ 146eeaf30

FString * __thiscall
UBTComposite_SimpleParallel::GetStaticDescription
          (UBTComposite_SimpleParallel *this,FString *__return_storage_ptr__)

{
  FString local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(FinishDesc,L"finish with main task");
    ::FString::FString(FinishDesc + 1,L"wait for subtree");
    atexit(`UBTComposite_SimpleParallel::GetStaticDescription'::__l2::
           _dynamic_atexit_destructor_for__FinishDesc__);
    _Init_thread_footer(&::_TSS0);
  }
  UBehaviorTreeTypes::GetShortTypeName(&local_18,(UObject *)this);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s: %s");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// InitializeMemory @ 146ef2af0

void __thiscall
UBTComposite_SimpleParallel::InitializeMemory
          (UBTComposite_SimpleParallel *this,UBehaviorTreeComponent *param_1,uchar *param_2,
          Type param_3)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  FName local_res8;
  FString local_18;
  
  if (param_3 == Initialize) {
    param_2[0] = '\0';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    param_2[4] = '\0';
    param_2[5] = '\0';
    param_2[6] = '\0';
    param_2[7] = '\0';
    param_2[8] = '\0';
    param_2[9] = '\0';
    param_2[10] = '\0';
    param_2[0xb] = '\0';
  }
  uVar3 = (**(code **)(this->_padding_ + 0x2d0))();
  if (uVar3 < 0xc) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    (**(code **)(this->_padding_ + 0x2d0))(this);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) <= GetInstanceMemorySize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Classes\\BehaviorTree\\BTNode.h"
                       ,0x17e,
                       L"Requesting type of %zu bytes but GetInstanceMemorySize returns %u. Make sure GetInstanceMemorySize is implemented properly in %s class hierarchy."
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// NotifyChildExecution @ 146ef4330

void __thiscall
UBTComposite_SimpleParallel::NotifyChildExecution
          (UBTComposite_SimpleParallel *this,UBehaviorTreeComponent *param_1,uchar *param_2,
          int param_3,Type *param_4)

{
  byte bVar1;
  Type TVar2;
  code *pcVar3;
  bool bVar4;
  Type TVar5;
  int iVar6;
  FBehaviorTreeSearchData local_78;
  
  if (param_3 != 0) {
    return;
  }
  param_2[8] = (char)*param_4;
  if (*param_4 == InProgress) {
    if (((int)this->_padding_ < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TVar5 = UBehaviorTreeComponent::GetTaskStatus(param_1,*(UBTTaskNode **)(this->_padding_ + 8));
    if (TVar5 != Active) {
      return;
    }
    param_2[9] = param_2[9] & 0xfd | 1;
    if (((int)this->_padding_ < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UBehaviorTreeComponent::RegisterParallelTask(param_1,*(UBTTaskNode **)(this->_padding_ + 8));
  }
  else {
    bVar1 = param_2[9];
    if ((bVar1 & 1) != 0) {
      local_78.bPreserveActiveNodeMemoryOnRollback = 0;
      local_78.bSearchInProgress = 0;
      local_78.bPostponeSearch = 0;
      local_78.bFilterOutRequestFromDeactivatedBranch = 0;
      param_2[9] = bVar1 & 0xfe;
      local_78.PendingUpdates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.PendingUpdates.ArrayNum = 0;
      local_78.PendingUpdates.ArrayMax = 0;
      local_78.PendingNotifies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.PendingNotifies.ArrayNum = 0;
      local_78.PendingNotifies.ArrayMax = 0;
      local_78.SearchRootNode.InstanceIndex = 0xffff;
      local_78.SearchRootNode.ExecutionIndex = 0xffff;
      local_78.SearchStart.InstanceIndex = 0xffff;
      local_78.SearchStart.ExecutionIndex = 0xffff;
      local_78.SearchEnd.InstanceIndex = 0xffff;
      local_78.SearchEnd.ExecutionIndex = 0xffff;
      local_78.RollbackInstanceIdx = -1;
      local_78.DeactivatedBranchStart.InstanceIndex = 0xffff;
      local_78.DeactivatedBranchStart.ExecutionIndex = 0xffff;
      local_78.DeactivatedBranchEnd.InstanceIndex = 0xffff;
      local_78.DeactivatedBranchEnd.ExecutionIndex = 0xffff;
      local_78.RollbackDeactivatedBranchStart.InstanceIndex = 0xffff;
      local_78.RollbackDeactivatedBranchStart.ExecutionIndex = 0xffff;
      local_78.RollbackDeactivatedBranchEnd.InstanceIndex = 0xffff;
      local_78.RollbackDeactivatedBranchEnd.ExecutionIndex = 0xffff;
      local_78.OwnerComp = param_1;
      UBTCompositeNode::NotifyDecoratorsOnDeactivation
                ((UBTCompositeNode *)this,&local_78,0,param_4,true);
      iVar6 = UBehaviorTreeComponent::FindInstanceContainingNode(param_1,(UBTNode *)this);
      if ((0xfffe < iVar6) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("MyInstanceIdx < ((uint16) 0xffff)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\Composites\\BTComposite_SimpleParallel.cpp"
                             ,0x55,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((int)this->_padding_ < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      UBehaviorTreeComponent::UnregisterParallelTask
                (param_1,*(UBTTaskNode **)(this->_padding_ + 8),(ushort)iVar6);
      TVar2 = *param_4;
      if (((TVar2 != Aborted) && ((param_2[9] & 4) == 0)) && ((this->FinishMode).Value == '\0')) {
        if (((int)this->_padding_ < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        UBehaviorTreeComponent::RequestExecution
                  (param_1,(UBTCompositeNode *)this,iVar6,*(UBTNode **)(this->_padding_ + 8),0,TVar2
                   ,true);
      }
      if (local_78.PendingNotifies.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.PendingNotifies.AllocatorInstance.Data);
      }
      if (local_78.PendingUpdates.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_78.PendingUpdates.AllocatorInstance.Data);
      return;
    }
    if (*param_4 != Succeeded) {
      return;
    }
    if ((this->FinishMode).Value != '\x01') {
      return;
    }
    param_2[9] = bVar1 | 2;
  }
  UBehaviorTreeComponent::RequestBranchEvaluation(param_1,Succeeded);
  return;
}

// NotifyNodeDeactivation @ 146ef4e90

void __thiscall
UBTComposite_SimpleParallel::NotifyNodeDeactivation
          (UBTComposite_SimpleParallel *this,FBehaviorTreeSearchData *param_1,Type *param_2)

{
  FBTParallelMemory *pFVar1;
  TObjectPtr<UBTAuxiliaryNode>_u_0 local_28;
  UObject *local_20;
  ushort local_18;
  undefined1 local_16;
  byte local_15;
  
  pFVar1 = UBTNode::GetNodeMemory<FBTParallelMemory>((UBTNode *)this,param_1);
  local_18 = param_1->OwnerComp->ActiveInstanceIdx;
  if (pFVar1->bMainTaskIsActive == 0) {
    *param_2 = (uint)(pFVar1->MainTaskResult).Value;
  }
  if (0 < (int)this->_padding_) {
    local_20 = *(UObject **)(this->_padding_ + 8);
    local_28.DebugPtr = (UBTAuxiliaryNode *)0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_20 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_20);
    }
    local_15 = local_15 & 0xfc;
    local_16 = 2;
    FBehaviorTreeSearchData::AddUniqueUpdate
              (param_1,(FBehaviorTreeSearchUpdate *)&local_28.ObjectPtr);
  }
  return;
}

// SetChildOverride @ 146eff740

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UBTComposite_SimpleParallel::SetChildOverride
          (UBTComposite_SimpleParallel *this,FBehaviorTreeSearchData *param_1,schar param_2)

{
  FBTParallelMemory *pFVar1;
  FString local_18;
  
  if (param_2 == '\0') {
    pFVar1 = UBTNode::GetNodeMemory<FBTParallelMemory>((UBTNode *)this,param_1);
    pFVar1->bRepeatMainTask = '\x01';
    if (FVisualLogger::bIsRecording != 0) {
      UBehaviorTreeTypes::DescribeNodeHelper(&local_18,(UBTNode *)this);
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)param_1->OwnerComp->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,
                 L"Main task of %s will be repeated.");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// StaticRegisterNativesUBTComposite_SimpleParallel @ 146f00b00

void __cdecl UBTComposite_SimpleParallel::StaticRegisterNativesUBTComposite_SimpleParallel(void)

{
  return;
}

