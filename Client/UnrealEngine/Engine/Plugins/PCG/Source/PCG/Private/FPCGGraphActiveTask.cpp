// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 6

// ~FPCGGraphActiveTask @ 149ca5ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPCGGraphActiveTask::~FPCGGraphActiveTask(FPCGGraphActiveTask *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  FPCGContext *pFVar5;
  FScriptContainerElement *pFVar6;
  TTask<bool> TVar7;
  longlong *plVar8;
  bool bVar9;
  FTSTicker *this_00;
  undefined ***pppuVar10;
  undefined1 auStackY_88 [32];
  TWeakPtr<FTSTicker::FElement,1> local_58;
  code *local_48 [2];
  undefined **local_38;
  FPCGContext *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_88;
  pFVar5 = (this->Context).Ptr;
  this->_padding_ = (longlong)&___7FPCGGraphActiveTask__6B_;
  if (pFVar5 != (FPCGContext *)0x0) {
    (this->Context).Ptr = (FPCGContext *)0x0;
    local_58.Object = (FElement *)pFVar5;
    bVar9 = IsInGameThread();
    if (bVar9) {
      `FPCGGraphActiveTask::~FPCGGraphActiveTask'::__l5::<lambda_1>::operator()(&local_58);
    }
    else {
      this_00 = FTSTicker::GetCoreTicker();
      local_20 = (undefined ***)0x0;
      local_38 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`ExecuteOnGameThread<`FPCGGraphActiveTask::~FPCGGraphActiveTask'::`5'::<lambda_1>_>'::`2'::<lambda_1>,1,0>
                  ::_vftable_;
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`ExecuteOnGameThread<`FPCGGraphActiveTask::~FPCGGraphActiveTask'::__l5::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
                    ::Call;
      local_30 = pFVar5;
      FTSTicker::AddTicker
                (this_00,&local_58,
                 L"C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphTask.cpp(118)"
                 ,0.0,(TUniqueFunction<bool___cdecl(float)> *)local_48);
      if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)((local_58.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_58.WeakReferenceCount.ReferenceController,1);
        }
      }
      if (local_48[0] != (code *)0x0) {
        pppuVar10 = &local_38;
        if (local_20 != (undefined ***)0x0) {
          pppuVar10 = local_20;
        }
        (*(code *)(*pppuVar10)[2])();
      }
    }
  }
  pFVar6 = (this->ExecutingReferences).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  TVar7 = this->ExecutingTask;
  if (TVar7 != (TTask<bool>)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)TVar7 + 0x30);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (*(code *)**(undefined8 **)TVar7)(TVar7,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->StackContext).SharedReferenceCount.ReferenceController);
  pFVar5 = (this->Context).Ptr;
  if (pFVar5 != (FPCGContext *)0x0) {
    (**(code **)pFVar5->_padding_)(pFVar5,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Element).SharedReferenceCount.ReferenceController);
  DestructItems<FPCGGraphTaskInput,int>
            ((FPCGGraphTaskInput *)(this->Inputs).AllocatorInstance.Data,(this->Inputs).ArrayNum);
  pFVar6 = (this->Inputs).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  plVar8 = (longlong *)this->_padding_;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar8 + 8))(plVar8,1);
    }
  }
  return;
}

// operator() @ 149ca7a50

void __thiscall
`FPCGGraphActiveTask::StartExecuting'::__l2::<lambda_1>::operator()
          (void *this,FPCGDataCollection *param_1)

{
  int iVar1;
  UObject *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  UObject *local_28 [2];
  
  iVar1 = (param_1->TaggedData).ArrayNum;
  pFVar8 = (param_1->TaggedData).AllocatorInstance.Data;
  pFVar7 = pFVar8 + (longlong)iVar1 * 0x78;
  while( true ) {
    if ((param_1->TaggedData).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar8 == pFVar7) break;
    pUVar2 = *(UObject **)pFVar8;
    if (pUVar2 != (UObject *)0x0) {
      lVar3 = *(longlong *)this;
      local_28[0] = pUVar2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      if ((*(UObject ***)(lVar3 + 0x70) <= local_28) &&
         (local_28 < *(UObject ***)(lVar3 + 0x70) + *(int *)(lVar3 + 0x7c))) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)(lVar3 + 0x78);
      if (iVar6 == *(int *)(lVar3 + 0x7c)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)(lVar3 + 0x70),(int *)(lVar3 + 0x7c));
      }
      *(int *)(lVar3 + 0x78) = iVar6 + 1;
      *(UObject **)(*(longlong *)(lVar3 + 0x70) + (longlong)iVar6 * 8) = local_28[0];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28[0] != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_28[0]);
      }
    }
    pFVar8 = pFVar8 + 0x78;
  }
  return;
}

// operator() @ 149ca7bb0

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
`FPCGGraphActiveTask::~FPCGGraphActiveTask'::__l5::<lambda_1>::operator()(void *this)

{
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18 [2];
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(local_res18,&local_res10,true);
  PCGGraphExecutor::ClearAsyncFlags
            ((TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
              *)(*(longlong *)this + 0x1d0));
  FPCGContext::Release(*(FPCGContext **)this);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// CanExecuteOnlyOnMainThread @ 149cb0bb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FPCGGraphActiveTask::CanExecuteOnlyOnMainThread(FPCGGraphActiveTask *this)

{
  IPCGElement *pIVar1;
  FPCGContext *pFVar2;
  char cVar3;
  
  pIVar1 = (this->Element).Object;
  if ((pIVar1 != (IPCGElement *)0x0) &&
     (cVar3 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,(this->Context).Ptr), cVar3 != '\0')) {
    return true;
  }
  pFVar2 = (this->Context).Ptr;
  if ((pFVar2 != (FPCGContext *)0x0) && (pFVar2->bOverrideSettingsOnMainThread != false)) {
    return true;
  }
  return false;
}

// StartExecuting @ 149cdcfb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPCGGraphActiveTask::StartExecuting(FPCGGraphActiveTask *this)

{
  TUniquePtr<FPCGContext,TDefaultDelete<FPCGContext>_> *pTVar1;
  TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  FPCGContext *pFVar4;
  UObject *pUVar5;
  FScriptContainerElement *pFVar6;
  TObjectPtr<UPCGSettings>_u_0 *pTVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  undefined8 *puVar16;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  UObject *local_88;
  UObject *local_80;
  TObjectPtr<UPCGSettings>_u_0 local_78;
  FPCGGraphActiveTask *local_70;
  FScriptContainerElement *local_68;
  TUniquePtr<FPCGContext,TDefaultDelete<FPCGContext>_> *local_60;
  TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_> *local_58;
  bool *local_50;
  
  local_50 = &this->bIsExecutingTask;
  if (this->bIsExecutingTask != false) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bIsExecutingTask",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphTask.cpp"
                       ,0x83,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  NumExecuting = NumExecuting + 1;
  pTVar1 = &this->Context;
  local_58 = &this->ExecutingReferences;
  uVar14 = (pTVar1->Ptr->InputData).TaggedData.ArrayNum + 1 +
           (pTVar1->Ptr->OutputData).TaggedData.ArrayNum;
  local_70 = this;
  local_60 = pTVar1;
  if (-1 < (int)uVar14) {
    piVar3 = &(this->ExecutingReferences).ArrayMax;
    if (*piVar3 < (int)uVar14) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar14,&local_58->AllocatorInstance,(this->ExecutingReferences).ArrayNum,piVar3
                );
    }
    `FPCGGraphActiveTask::StartExecuting'::__l2::<lambda_1>::operator()
              (&local_70,&pTVar1->Ptr->InputData);
    `FPCGGraphActiveTask::StartExecuting'::__l2::<lambda_1>::operator()
              (&local_70,&pTVar1->Ptr->OutputData);
    pFVar4 = pTVar1->Ptr;
    local_res20 = (pFVar4->CachedInputToOutputInternalResults).ArrayNum;
    uVar12 = (ulonglong)(int)local_res20;
    pFVar15 = (pFVar4->CachedInputToOutputInternalResults).AllocatorInstance.Data;
    local_68 = pFVar15 + uVar12 * 0x60;
    while( true ) {
      pFVar6 = local_68;
      if ((pFVar4->CachedInputToOutputInternalResults).ArrayNum != (int)uVar12) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TTuple<FPCGDataCollection,FPCGDataCollection>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      pTVar2 = local_58;
      if (pFVar15 == pFVar6) break;
      iVar11 = *(int *)(pFVar15 + 8);
      puVar13 = *(undefined8 **)pFVar15;
      puVar16 = puVar13 + (longlong)iVar11 * 0xf;
      while( true ) {
        if (*(int *)(pFVar15 + 8) != iVar11) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if (puVar13 == puVar16) break;
        pUVar5 = (UObject *)*puVar13;
        if (pUVar5 != (UObject *)0x0) {
          pTVar2 = &this->ExecutingReferences;
          local_88 = pUVar5;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar5);
          }
          pFVar6 = (pTVar2->AllocatorInstance).Data;
          if ((pFVar6 <= (FScriptContainerElement *)&local_88) &&
             ((FScriptContainerElement *)&local_88 <
              pFVar6 + (longlong)(this->ExecutingReferences).ArrayMax * 8)) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar9) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          iVar10 = (this->ExecutingReferences).ArrayNum;
          piVar3 = &(this->ExecutingReferences).ArrayMax;
          if (iVar10 == *piVar3) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar2->AllocatorInstance,piVar3);
          }
          (this->ExecutingReferences).ArrayNum = iVar10 + 1;
          *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_88;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_88 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_88);
          }
        }
        puVar13 = puVar13 + 0xf;
      }
      iVar11 = *(int *)(pFVar15 + 0x38);
      puVar13 = *(undefined8 **)(pFVar15 + 0x30);
      puVar16 = puVar13 + (longlong)iVar11 * 0xf;
      while( true ) {
        if (*(int *)(pFVar15 + 0x38) != iVar11) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if (puVar13 == puVar16) break;
        pUVar5 = (UObject *)*puVar13;
        if (pUVar5 != (UObject *)0x0) {
          pTVar2 = &this->ExecutingReferences;
          local_80 = pUVar5;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar5);
          }
          pFVar6 = (pTVar2->AllocatorInstance).Data;
          if ((pFVar6 <= (FScriptContainerElement *)&local_80) &&
             ((FScriptContainerElement *)&local_80 <
              pFVar6 + (longlong)(this->ExecutingReferences).ArrayMax * 8)) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar9) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          iVar10 = (this->ExecutingReferences).ArrayNum;
          piVar3 = &(this->ExecutingReferences).ArrayMax;
          if (iVar10 == *piVar3) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar2->AllocatorInstance,piVar3);
          }
          (this->ExecutingReferences).ArrayNum = iVar10 + 1;
          *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_80;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_80 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_80);
          }
        }
        puVar13 = puVar13 + 0xf;
      }
      pFVar15 = pFVar15 + 0x60;
      uVar12 = (ulonglong)local_res20;
    }
    local_78 = (TObjectPtr<UPCGSettings>_u_0)
               (local_60->Ptr->SettingsWithOverride).field0_0x0.DebugPtr;
    if (local_78.DebugPtr != (UPCGSettings *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)local_78.DebugPtr);
      }
      pTVar7 = (TObjectPtr<UPCGSettings>_u_0 *)(pTVar2->AllocatorInstance).Data;
      piVar3 = &pTVar2->ArrayMax;
      if ((pTVar7 <= &local_78) && (&local_78 < pTVar7 + *piVar3)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar11 = pTVar2->ArrayNum;
      if (iVar11 == *piVar3) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar2->AllocatorInstance,piVar3);
      }
      pTVar2->ArrayNum = iVar11 + 1;
      ((TObjectPtr<UPCGSettings>_u_0 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 8))->
      DebugPtr = (UPCGSettings *)local_78;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_78.DebugPtr != (UPCGSettings *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_78.DebugPtr);
      }
    }
    *local_50 = true;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
}

// StopExecuting @ 149cdd4e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPCGGraphActiveTask::StopExecuting(FPCGGraphActiveTask *this)

{
  TTask<bool> *pTVar1;
  int *piVar2;
  int iVar3;
  TTask<bool> TVar4;
  longlong local_18 [2];
  
  if (this->bIsExecutingTask != false) {
    pTVar1 = &this->ExecutingTask;
    this->bIsExecutingTask = false;
    if (pTVar1 != (TTask<bool> *)local_18) {
      TVar4 = *pTVar1;
      *pTVar1 = (TTask<bool>)0x0;
      if (TVar4 != (TTask<bool>)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)TVar4 + 0x30);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (*(code *)**(undefined8 **)TVar4)(TVar4,1);
        }
      }
    }
    NumExecuting = NumExecuting + -1;
    (this->ExecutingReferences).ArrayNum = 0;
    if ((this->ExecutingReferences).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->ExecutingReferences).AllocatorInstance,0,
                 &(this->ExecutingReferences).ArrayMax);
    }
  }
  return;
}

