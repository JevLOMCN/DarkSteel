// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 14

// CreatePoller @ 1441d8140

FPollHandle __cdecl
UE::Net::FGlobalDirtyNetObjectTracker::CreatePoller
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  TArray<UE::Net::FGlobalDirtyNetObjectTracker::FPimpl::FPollerStatus,TSizedDefaultAllocator<32>_>
  *this;
  longlong *plVar1;
  int iVar2;
  code *pcVar3;
  FPimpl *pFVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  TDelegateBase<FNotThreadSafeDelegateMode> *in_RDX;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  undefined1 local_78 [8];
  ForAnyElementType local_70;
  int local_68;
  FDestructionSentinel local_60;
  FReadAccessScope local_48;
  
  if (Instance != (FPimpl *)0x0) {
    if ((Instance->AssignedHandleIndices).BitCount <= Instance->PollerCount) {
      FNetBitArray::SetNumBits(&Instance->AssignedHandleIndices,Instance->PollerCount + 1);
      FNetBitArray::SetNumBits(&Instance->Pollers,Instance->PollerCount + 1);
    }
    uVar6 = 0;
    uVar7 = (Instance->AssignedHandleIndices).Storage.ArrayNum;
    pFVar10 = (Instance->AssignedHandleIndices).Storage.AllocatorInstance.Data;
    uVar9 = uVar6;
    if (uVar7 != 0) {
LAB_1441d81c0:
      if (*(uint *)pFVar10 == 0xffffffff) goto code_r0x0001441d81c7;
      uVar7 = ~*(uint *)pFVar10;
      iVar2 = 0;
      if (uVar7 != 0) {
        for (; (uVar7 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
        }
      }
      iVar8 = 0x20;
      if (uVar7 != 0) {
        iVar8 = iVar2;
      }
      uVar7 = 0xffffffff;
      if (iVar8 + uVar9 < (Instance->AssignedHandleIndices).BitCount) {
        uVar7 = iVar8 + uVar9;
      }
      if (uVar7 != 0xffffffff) {
        FNetBitArray::SetBit(&Instance->AssignedHandleIndices,uVar7);
        Instance->PollerCount = Instance->PollerCount + 1;
        uVar9 = Instance->PollerCount;
        this = &Instance->PollerStatuses;
        iVar2 = (Instance->PollerStatuses).ArrayNum;
        if (iVar2 < (int)uVar9) {
          iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x20,8,uVar9 - iVar2,&this->AllocatorInstance,
                             &(Instance->PollerStatuses).ArrayNum,
                             &(Instance->PollerStatuses).ArrayMax);
          DefaultConstructItems<UE::Net::FGlobalDirtyNetObjectTracker::FPimpl::FPollerStatus,int>
                    ((this->AllocatorInstance).Data + (longlong)iVar8 * 0x20,uVar9 - iVar2);
        }
        else {
          if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
            Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
          }
          if ((int)uVar9 < iVar2) {
            uVar6 = iVar2 - uVar9;
            if (((int)(uVar6 | uVar9) < 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar5)) {
              pcVar3 = (code *)swi(3);
              uVar7 = (*pcVar3)();
              return (FPollHandle)uVar7;
            }
            if (uVar6 != 0) {
              TArray<UE::Net::FGlobalDirtyNetObjectTracker::FPimpl::FPollerStatus,TSizedDefaultAllocator<32>_>
              ::RemoveAtImpl(this,uVar9,uVar6);
            }
          }
        }
        pFVar4 = Instance;
        uVar9 = 0;
        if ((int)uVar7 < (Instance->PollerStatuses).ArrayNum) {
          uVar9 = ~uVar7 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (FPollHandle)uVar7;
        }
        pFVar10 = (pFVar4->PollerStatuses).AllocatorInstance.Data +
                  (longlong)(int)uVar7 * 0x20 + 0x18;
        *pFVar10 = (FScriptContainerElement)((byte)*pFVar10 | 1);
        pFVar4 = Instance;
        uVar9 = 0;
        if ((int)uVar7 < (Instance->PollerStatuses).ArrayNum) {
          uVar9 = ~uVar7 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (FPollHandle)uVar7;
        }
        this_00 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                  ((pFVar4->PollerStatuses).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20);
        if (in_RDX != (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00) {
          local_78 = (undefined1  [8])0x0;
          local_70.Data = (FScriptContainerElement *)0x0;
          local_68 = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_RDX,&local_48);
          if ((*(int *)&in_RDX->field_0x10 != 0) &&
             (plVar1 = *(longlong **)&in_RDX->field_0x8, plVar1 != (longlong *)0x0)) {
            (**(code **)(*plVar1 + 0x50))(plVar1,local_78);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_48);
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
                    (this_00,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_78);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
                     (FWriteAccessScope *)&local_60);
          if ((local_68 != 0) && (local_70.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)local_70.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_70,0,0,0x10)
            ;
            local_68 = 0;
          }
          if (local_60.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
          }
          if (local_70.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_78);
        }
        *(uint *)param_1 = uVar7;
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  (in_RDX);
        return (FPollHandle)(uint)param_1;
      }
    }
LAB_1441d81d6:
    bVar5 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1740798700889833597>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\DirtyNetObjectTracker\\GlobalDirtyNetObjectTracker.cpp"
                       ,0x7d,"HandleIndex != FNetBitArrayBase::InvalidIndex");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (FPollHandle)uVar7;
    }
  }
  *(undefined4 *)param_1 = 0xffffffff;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(in_RDX);
  return (FPollHandle)(uint)param_1;
code_r0x0001441d81c7:
  uVar6 = uVar6 + 1;
  pFVar10 = pFVar10 + 4;
  uVar9 = uVar9 + 0x20;
  if (uVar7 <= uVar6) goto LAB_1441d81d6;
  goto LAB_1441d81c0;
}

// Deinit @ 1441d8e40

void __cdecl UE::Net::FGlobalDirtyNetObjectTracker::Deinit(void)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ForElementType<FSetElementId> FVar3;
  FPimpl *this;
  
  this = Instance;
  if (Instance != (FPimpl *)0x0) {
    DestructItems<UE::Net::FGlobalDirtyNetObjectTracker::FPimpl::FPollerStatus,int>
              ((FPollerStatus *)(Instance->PollerStatuses).AllocatorInstance.Data,
               (Instance->PollerStatuses).ArrayNum);
    pFVar1 = (this->PollerStatuses).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (this->Pollers).Storage.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (this->AssignedHandleIndices).Storage.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    *(undefined4 *)&(this->DirtyObjectsAndProperties).field_0x48 = 0;
    pvVar2 = *(void **)&(this->DirtyObjectsAndProperties).field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this->DirtyObjectsAndProperties);
    (this->DirtyObjects).HashSize = 0;
    FVar3 = (this->DirtyObjects).Hash.SecondaryData;
    if (FVar3 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar3);
    }
    TSparseArray<TSparseSetElement<UE::Net::FNetHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<UE::Net::FNetHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<UE::Net::FNetHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)this);
    ::operator_delete(this,0xe8);
  }
  Instance = (FPimpl *)0x0;
  return;
}

// DestroyPoller @ 1441d9c10

void __cdecl UE::Net::FGlobalDirtyNetObjectTracker::DestroyPoller(uint param_1)

{
  code *pcVar1;
  FPimpl *pFVar2;
  bool bVar3;
  uint uVar4;
  byte bVar5;
  longlong lVar6;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this;
  uint local_res8 [2];
  undefined1 local_res10 [8];
  uint *local_res18;
  FDestructionSentinel local_58;
  undefined1 local_40 [8];
  ForAnyElementType local_38;
  int local_30;
  byte local_28;
  
  if (param_1 != 0xffffffff) {
    local_res8[0] = param_1;
    if (((Instance->AssignedHandleIndices).BitCount <= param_1) ||
       (bVar3 = FNetBitArray::GetBit(&Instance->AssignedHandleIndices,param_1), !bVar3)) {
      local_res18 = local_res8;
      bVar3 = `UE::Net::FGlobalDirtyNetObjectTracker::DestroyPoller'::__l6::<lambda_1>::operator()
                        (&local_res18);
      if (!bVar3) {
        return;
      }
    }
    FNetBitArray::ClearBit(&Instance->AssignedHandleIndices,local_res8[0]);
    bVar3 = FNetBitArray::GetBit(&Instance->Pollers,local_res8[0]);
    if (bVar3) {
      local_res10[0] = 0;
      `UE::Net::FGlobalDirtyNetObjectTracker::DestroyPoller'::__l8::<lambda_2>::operator()
                (local_res10);
    }
    FNetBitArray::ClearBit(&Instance->Pollers,local_res8[0]);
    pFVar2 = Instance;
    lVar6 = (longlong)(int)local_res8[0];
    uVar4 = 0;
    if ((int)local_res8[0] < (Instance->PollerStatuses).ArrayNum) {
      uVar4 = ~local_res8[0] >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
           ((pFVar2->PollerStatuses).AllocatorInstance.Data + lVar6 * 0x20);
    local_28 = local_28 & 0xfe | 2;
    local_40 = (undefined1  [8])0x0;
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30 = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
              (this,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_40);
    bVar5 = (*(byte *)(this + 1) ^ local_28) & 1 ^ *(byte *)(this + 1);
    *(byte *)(this + 1) = (bVar5 ^ local_28) & 2 ^ bVar5;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_40,
               (FWriteAccessScope *)&local_58);
    if ((local_30 != 0) && (local_38.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_38.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_38,0,0,0x10);
      local_30 = 0;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_40);
    Instance->PollerCount = Instance->PollerCount - 1;
    if (Instance->PollerCount == 0) {
      TSet<UE::Net::FNetHandle,DefaultKeyFuncs<UE::Net::FNetHandle,0>,FDefaultSetAllocator>::Reset
                (&Instance->DirtyObjects);
      TSet<TTuple<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
               *)&Instance->DirtyObjectsAndProperties);
      Instance->bLockDirtyList = false;
    }
  }
  return;
}

// GetDirtyNetObjects @ 1441dc3b0

TSet<UE::Net::FNetHandle,DefaultKeyFuncs<UE::Net::FNetHandle,0>,FDefaultSetAllocator> * __cdecl
UE::Net::FGlobalDirtyNetObjectTracker::GetDirtyNetObjects(FPollHandle *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  code *pcVar3;
  FPimpl *pFVar4;
  bool bVar5;
  TSet<UE::Net::FNetHandle,DefaultKeyFuncs<UE::Net::FNetHandle,0>,FDefaultSetAllocator> *pTVar6;
  uint uVar7;
  
  pFVar4 = Instance;
  if (Instance != (FPimpl *)0x0) {
    uVar2 = param_1->Index;
    if (uVar2 != 0xffffffff) {
      uVar7 = 0;
      if ((int)uVar2 < (Instance->PollerStatuses).ArrayNum) {
        uVar7 = ~uVar2 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TSet<UE::Net::FNetHandle,DefaultKeyFuncs<UE::Net::FNetHandle,0>,FDefaultSetAllocator>
                    *)(*pcVar3)();
          return pTVar6;
        }
      }
      if (((byte)(pFVar4->PollerStatuses).AllocatorInstance.Data[(longlong)(int)uVar2 * 0x20 + 0x18]
          & 1) == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Instance->PollerStatuses[Handle.Index].bIsActive",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\DirtyNetObjectTracker\\GlobalDirtyNetObjectTracker.cpp"
                           ,0xae,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TSet<UE::Net::FNetHandle,DefaultKeyFuncs<UE::Net::FNetHandle,0>,FDefaultSetAllocator>
                    *)(*pcVar3)();
          return pTVar6;
        }
      }
      FNetBitArray::SetBit(&Instance->Pollers,param_1->Index);
      pFVar4 = Instance;
      uVar2 = param_1->Index;
      uVar7 = 0;
      if ((int)uVar2 < (Instance->PollerStatuses).ArrayNum) {
        uVar7 = ~uVar2 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TSet<UE::Net::FNetHandle,DefaultKeyFuncs<UE::Net::FNetHandle,0>,FDefaultSetAllocator>
                    *)(*pcVar3)();
          return pTVar6;
        }
      }
      pFVar1 = (pFVar4->PollerStatuses).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x20 + 0x18;
      *pFVar1 = (FScriptContainerElement)((byte)*pFVar1 & 0xfd);
      return &Instance->DirtyObjects;
    }
  }
  return &FPimpl::EmptyDirtyObjects;
}

// GetDirtyNetObjectsAndProperties @ 1441dc520

TMap<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
* __cdecl UE::Net::FGlobalDirtyNetObjectTracker::GetDirtyNetObjectsAndProperties
                    (FPollHandle *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  code *pcVar3;
  FPimpl *pFVar4;
  bool bVar5;
  TMap<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *pTVar6;
  uint uVar7;
  
  pFVar4 = Instance;
  if (Instance != (FPimpl *)0x0) {
    uVar2 = param_1->Index;
    if (uVar2 != 0xffffffff) {
      uVar7 = 0;
      if ((int)uVar2 < (Instance->PollerStatuses).ArrayNum) {
        uVar7 = ~uVar2 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TMap<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
                    *)(*pcVar3)();
          return pTVar6;
        }
      }
      if (((byte)(pFVar4->PollerStatuses).AllocatorInstance.Data[(longlong)(int)uVar2 * 0x20 + 0x18]
          & 1) == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Instance->PollerStatuses[Handle.Index].bIsActive",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\DirtyNetObjectTracker\\GlobalDirtyNetObjectTracker.cpp"
                           ,0xbc,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TMap<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
                    *)(*pcVar3)();
          return pTVar6;
        }
      }
      FNetBitArray::SetBit(&Instance->Pollers,param_1->Index);
      pFVar4 = Instance;
      uVar2 = param_1->Index;
      uVar7 = 0;
      if ((int)uVar2 < (Instance->PollerStatuses).ArrayNum) {
        uVar7 = ~uVar2 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TMap<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
                    *)(*pcVar3)();
          return pTVar6;
        }
      }
      pFVar1 = (pFVar4->PollerStatuses).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x20 + 0x18;
      *pFVar1 = (FScriptContainerElement)((byte)*pFVar1 & 0xfd);
      return &Instance->DirtyObjectsAndProperties;
    }
  }
  return &FPimpl::EmptyDirtyObjectsAndProperties;
}

// Init @ 1441dd4e0

void __cdecl UE::Net::FGlobalDirtyNetObjectTracker::Init(void)

{
  code *pcVar1;
  bool bVar2;
  
  if (Instance != (FPimpl *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\DirtyNetObjectTracker\\GlobalDirtyNetObjectTracker.cpp"
                       ,0x110,L"%s");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  Instance = ::operator_new(0xe8);
  if (Instance != (FPimpl *)0x0) {
    *(undefined8 *)&(Instance->DirtyObjects).Elements.field_0x10 = 0;
    *(undefined8 *)&(Instance->DirtyObjects).Elements.field_0x18 = 0;
    (Instance->DirtyObjects).Hash.InlineData[0] = '\0';
    (Instance->DirtyObjects).Hash.InlineData[1] = '\0';
    (Instance->DirtyObjects).Hash.InlineData[2] = '\0';
    (Instance->DirtyObjects).Hash.InlineData[3] = '\0';
    (Instance->DirtyObjects).Hash._padding_ = 0;
    *(undefined8 *)&(Instance->DirtyObjects).HashSize = 0;
    *(undefined8 *)&(Instance->DirtyObjectsAndProperties).field_0x10 = 0;
    *(undefined8 *)&(Instance->DirtyObjectsAndProperties).field_0x18 = 0;
    *(undefined8 *)&(Instance->DirtyObjectsAndProperties).field_0x38 = 0;
    *(undefined8 *)&(Instance->DirtyObjectsAndProperties).field_0x48 = 0;
    *(undefined8 *)&(Instance->AssignedHandleIndices).BitCount = 0;
    *(undefined8 *)&(Instance->Pollers).BitCount = 0;
    *(undefined2 *)&Instance->field_0xe5 = 0;
    Instance->field_0xe7 = 0;
    *(undefined8 *)&(Instance->DirtyObjects).Elements = 0;
    *(undefined8 *)&(Instance->DirtyObjects).Elements.field_0x8 = 0;
    *(undefined8 *)&(Instance->DirtyObjects).Elements.field_0x20 = 0;
    *(undefined4 *)&(Instance->DirtyObjects).Elements.field_0x28 = 0;
    *(undefined4 *)&(Instance->DirtyObjects).Elements.field_0x2c = 0x80;
    *(undefined4 *)&(Instance->DirtyObjects).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(Instance->DirtyObjects).Elements.field_0x34 = 0;
    (Instance->DirtyObjects).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    *(undefined8 *)&Instance->DirtyObjectsAndProperties = 0;
    *(undefined8 *)&(Instance->DirtyObjectsAndProperties).field_0x8 = 0;
    *(undefined8 *)&(Instance->DirtyObjectsAndProperties).field_0x20 = 0;
    *(undefined4 *)&(Instance->DirtyObjectsAndProperties).field_0x28 = 0;
    *(undefined4 *)&(Instance->DirtyObjectsAndProperties).field_0x2c = 0x80;
    *(undefined4 *)&(Instance->DirtyObjectsAndProperties).field_0x30 = 0xffffffff;
    *(undefined4 *)&(Instance->DirtyObjectsAndProperties).field_0x34 = 0;
    *(undefined8 *)&(Instance->DirtyObjectsAndProperties).field_0x40 = 0;
    (Instance->AssignedHandleIndices).Storage.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (Instance->AssignedHandleIndices).Storage.ArrayNum = 0;
    (Instance->AssignedHandleIndices).Storage.ArrayMax = 0;
    (Instance->Pollers).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (Instance->Pollers).Storage.ArrayNum = 0;
    (Instance->Pollers).Storage.ArrayMax = 0;
    (Instance->PollerStatuses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (Instance->PollerStatuses).ArrayNum = 0;
    (Instance->PollerStatuses).ArrayMax = 0;
    Instance->PollerCount = 0;
    Instance->bLockDirtyList = false;
    return;
  }
  Instance = (FPimpl *)0x0;
  return;
}

// IsUsingPerPropertyDirtyTracking @ 1441e1090

bool __cdecl UE::Net::FGlobalDirtyNetObjectTracker::IsUsingPerPropertyDirtyTracking(void)

{
  return Net::Private::CVars::bUsePerPropertyDirtyTracking;
}

// LockDirtyListUntilReset @ 1441e1bb0

void __cdecl UE::Net::FGlobalDirtyNetObjectTracker::LockDirtyListUntilReset(FPollHandle *param_1)

{
  uint uVar1;
  code *pcVar2;
  FPimpl *pFVar3;
  bool bVar4;
  uint uVar5;
  
  pFVar3 = Instance;
  if (Instance != (FPimpl *)0x0) {
    uVar1 = param_1->Index;
    if (uVar1 != 0xffffffff) {
      uVar5 = 0;
      if ((int)uVar1 < (Instance->PollerStatuses).ArrayNum) {
        uVar5 = ~uVar1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((((byte)(pFVar3->PollerStatuses).AllocatorInstance.Data
                  [(longlong)(int)uVar1 * 0x20 + 0x18] & 1) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Instance->PollerStatuses[Handle.Index].bIsActive",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\DirtyNetObjectTracker\\GlobalDirtyNetObjectTracker.cpp"
                             ,0xca,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      Instance->bLockDirtyList = true;
    }
  }
  return;
}

// MarkNetObjectStateDirty @ 1441e1f90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Net::FGlobalDirtyNetObjectTracker::MarkNetObjectStateDirty
          (FNetHandle param_1,int param_2,int param_3)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ForElementType<unsigned_int> this;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  ForElementType<unsigned_int> FVar12;
  FPimpl *pFVar13;
  ForElementType<unsigned_int> FVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res20 [8];
  FNetHandle local_48;
  ForElementType<unsigned_int> local_40;
  uint local_38;
  uint local_34 [3];
  
  if ((Instance != (FPimpl *)0x0) && (Instance->PollerCount != 0)) {
    if (Instance->bLockDirtyList != false) {
      local_res20[0] = 0;
      bVar4 = `UE::Net::FGlobalDirtyNetObjectTracker::MarkNetObjectStateDirty'::__l6::<lambda_1>::
              operator()(local_res20);
      if (!bVar4) {
        return;
      }
    }
    if (Net::Private::CVars::bUsePerPropertyDirtyTracking == false) {
      TSet<UE::Net::FNetHandle,DefaultKeyFuncs<UE::Net::FNetHandle,0>,FDefaultSetAllocator>::
      Emplace<UE::Net::FNetHandle_const_&>
                (&Instance->DirtyObjects,&local_48,(bool *)param_1.field0_0x0);
    }
    else {
      uVar8 = (uint)((ulonglong)*(undefined8 *)param_1.field0_0x0 >> 0x20);
      uVar15 = (int)*(undefined8 *)param_1.field0_0x0 - uVar8 ^ uVar8 >> 0xd;
      uVar6 = (-0x61c88647 - uVar15) - uVar8 ^ uVar15 << 8;
      uVar8 = (uVar8 - uVar6) - uVar15 ^ uVar6 >> 0xd;
      uVar15 = (uVar15 - uVar8) - uVar6 ^ uVar8 >> 0xc;
      uVar6 = (uVar6 - uVar15) - uVar8 ^ uVar15 << 0x10;
      uVar8 = (uVar8 - uVar6) - uVar15 ^ uVar6 >> 5;
      uVar15 = (uVar15 - uVar8) - uVar6 ^ uVar8 >> 3;
      uVar6 = (uVar6 - uVar15) - uVar8 ^ uVar15 << 10;
      this = (ForElementType<unsigned_int>)
             TMapBase<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
             ::FindOrAddImpl<UE::Net::FNetHandle_const_&>
                       ((TMapBase<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
                         *)&Instance->DirtyObjectsAndProperties,
                        (uVar8 - uVar6) - uVar15 ^ uVar6 >> 0xf,(FNetHandle *)param_1.field0_0x0);
      if (param_3 != -1) {
        uVar6 = param_3 + 0x20U >> 5;
        if (*(int *)((longlong)this + 0x18) < (int)uVar6) {
          TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
          SetNumZeroed((TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)this,uVar6,Default);
        }
        uVar6 = *(uint *)((longlong)this + 0x18) * 0x20;
        local_34[0] = uVar6;
        FVar12 = this;
        if (*(ForElementType<unsigned_int> *)((longlong)this + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar12 = *(ForElementType<unsigned_int> *)((longlong)this + 0x10);
        }
        local_38 = uVar6 + 0x1f >> 5;
        FVar14 = (ForElementType<unsigned_int>)local_34;
        if ((*(uint *)((longlong)this + 0x18) & 0x7ffffff) != 0) {
          FVar14 = FVar12;
        }
        uVar8 = (param_3 - param_2) + 1;
        local_40 = FVar14;
        if ((uVar8 == 0 || uVar6 <= (uint)param_2) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count > 0) & (StartIndex < BitCount)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                               ,0x276,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar10 = (ulonglong)uVar8 + (ulonglong)(uint)param_2;
        uVar8 = -1 << ((byte)param_2 & 0x1f);
        if (lVar10 - 1U < (ulonglong)uVar6 - 1) {
          uVar6 = (uint)lVar10;
        }
        uVar9 = uVar6 - 1 >> 5;
        for (uVar15 = (uint)param_2 >> 5; uVar15 <= uVar9; uVar15 = uVar15 + 1) {
          uVar7 = 0xffffffff;
          if (uVar15 == uVar9) {
            uVar7 = 0xffffffff >> (~(byte)(uVar6 - 1) & 0x1f);
          }
          uVar7 = uVar7 & uVar8;
          uVar8 = 0xffffffff;
          puVar1 = (uint *)((longlong)FVar14 + (ulonglong)uVar15 * 4);
          *puVar1 = *puVar1 | uVar7;
        }
      }
    }
    if (1 < Instance->PollerCount) {
      uVar6 = (Instance->Pollers).BitCount;
      uVar15 = 0;
      pFVar16 = (Instance->Pollers).Storage.AllocatorInstance.Data;
      uVar8 = (Instance->Pollers).Storage.ArrayNum;
      uVar9 = 0;
      pFVar13 = Instance;
      if (uVar8 != 0) {
        do {
          uVar7 = 0xffffffff;
          if (uVar15 == uVar8 - 1) {
            uVar7 = 0xffffffff >> (-(char)uVar6 & 0x1fU);
          }
          uVar11 = uVar9;
          for (uVar7 = uVar7 & *(uint *)pFVar16; uVar7 != 0; uVar7 = uVar7 >> 1) {
            if ((uVar7 & 1) != 0) {
              uVar5 = 0;
              if ((int)uVar11 < (pFVar13->PollerStatuses).ArrayNum) {
                uVar5 = ~uVar11 >> 0x1f;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar2 = (pFVar13->PollerStatuses).AllocatorInstance.Data +
                       (longlong)(int)uVar11 * 0x20 + 0x18;
              *pFVar2 = (FScriptContainerElement)((byte)*pFVar2 | 2);
              pFVar13 = Instance;
            }
            uVar11 = uVar11 + 1;
          }
          uVar15 = uVar15 + 1;
          pFVar16 = pFVar16 + 4;
          uVar9 = uVar9 + 0x20;
        } while (uVar15 < uVar8);
      }
    }
  }
  return;
}

// ResetDirtyNetObjects @ 1441e9790

void __cdecl UE::Net::FGlobalDirtyNetObjectTracker::ResetDirtyNetObjects(FPollHandle *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FPimpl *pFVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FReadAccessScope local_28;
  
  pFVar3 = Instance;
  if (Instance != (FPimpl *)0x0) {
    uVar6 = param_1->Index;
    if (uVar6 != 0xffffffff) {
      uVar5 = 0;
      if ((int)uVar6 < (Instance->PollerStatuses).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((((byte)(pFVar3->PollerStatuses).AllocatorInstance.Data
                  [(longlong)(int)uVar6 * 0x20 + 0x18] & 1) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Instance->PollerStatuses[Handle.Index].bIsActive",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\DirtyNetObjectTracker\\GlobalDirtyNetObjectTracker.cpp"
                             ,0xd5,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FNetBitArray::ClearBit(&Instance->Pollers,param_1->Index);
      uVar5 = 0;
      uVar6 = (Instance->Pollers).Storage.ArrayNum;
      pFVar7 = (Instance->Pollers).Storage.AllocatorInstance.Data;
      if (uVar6 != 0) {
        do {
          if (*(int *)pFVar7 != 0) goto LAB_1441e99be;
          uVar5 = uVar5 + 1;
          pFVar7 = pFVar7 + 4;
        } while (uVar5 < uVar6);
      }
      uVar6 = 0;
      if (Instance->PollerCount != 0) {
        do {
          pFVar3 = Instance;
          uVar5 = 0;
          if ((int)uVar6 < (Instance->PollerStatuses).ArrayNum) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar7 = (pFVar3->PollerStatuses).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20;
          if ((pFVar7[0x18].field_0x0 & 3) == 3) {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pFVar7,&local_28);
            if ((*(int *)&pFVar7[0x10].field_0x0 != 0) &&
               (*(longlong **)&pFVar7[8].field_0x0 != (longlong *)0x0)) {
              (**(code **)(**(longlong **)&pFVar7[8].field_0x0 + 0x68))();
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_28);
            pFVar1 = (Instance->Pollers).Storage.AllocatorInstance.Data;
            if (((Instance->Pollers).BitCount <= uVar6) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index < BitCount",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                   ,0x2b7,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            *(uint *)(pFVar1 + (ulonglong)(uVar6 >> 5) * 4) =
                 *(uint *)(pFVar1 + (ulonglong)(uVar6 >> 5) * 4) & ~(1 << (uVar6 & 0x1f));
          }
          pFVar7[0x18].field_0x0 = pFVar7[0x18].field_0x0 | 2;
          uVar6 = uVar6 + 1;
        } while (uVar6 < Instance->PollerCount);
      }
      TSet<UE::Net::FNetHandle,DefaultKeyFuncs<UE::Net::FNetHandle,0>,FDefaultSetAllocator>::Reset
                (&Instance->DirtyObjects);
      TSet<TTuple<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
               *)&Instance->DirtyObjectsAndProperties);
LAB_1441e99be:
      Instance->bLockDirtyList = false;
    }
  }
  return;
}

// ResetDirtyNetObjectsIfSinglePoller @ 1441e99e0

bool __cdecl
UE::Net::FGlobalDirtyNetObjectTracker::ResetDirtyNetObjectsIfSinglePoller(FPollHandle *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FPimpl *pFVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  
  pFVar3 = Instance;
  if (Instance != (FPimpl *)0x0) {
    uVar7 = param_1->Index;
    if (uVar7 != 0xffffffff) {
      uVar6 = 0;
      if ((int)uVar7 < (Instance->PollerStatuses).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      if (((byte)(pFVar3->PollerStatuses).AllocatorInstance.Data[(longlong)(int)uVar7 * 0x20 + 0x18]
          & 1) == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Instance->PollerStatuses[Handle.Index].bIsActive",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\DirtyNetObjectTracker\\GlobalDirtyNetObjectTracker.cpp"
                           ,0xf5,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      Instance->bLockDirtyList = false;
      pFVar3 = Instance;
      uVar7 = FNetBitArrayHelper::CountSetBits
                        ((uint *)(Instance->AssignedHandleIndices).Storage.AllocatorInstance.Data,
                         (Instance->AssignedHandleIndices).BitCount,0,0xffffffff);
      if (uVar7 == 1) {
        uVar7 = param_1->Index;
        pFVar1 = (pFVar3->Pollers).Storage.AllocatorInstance.Data;
        if ((pFVar3->Pollers).BitCount <= uVar7) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < BitCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                             ,0x2c1,L"");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
        }
        if ((*(uint *)(pFVar1 + (ulonglong)(uVar7 >> 5) * 4) >> (uVar7 & 0x1f) & 1) == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Instance->Pollers.IsBitSet(Handle.Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\DirtyNetObjectTracker\\GlobalDirtyNetObjectTracker.cpp"
                             ,0xfc,L"");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
        }
        TSet<UE::Net::FNetHandle,DefaultKeyFuncs<UE::Net::FNetHandle,0>,FDefaultSetAllocator>::Reset
                  (&Instance->DirtyObjects);
        TSet<TTuple<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
        ::Reset((TSet<TTuple<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
                 *)&Instance->DirtyObjectsAndProperties);
        FNetBitArray::ClearBit(&Instance->Pollers,param_1->Index);
        return true;
      }
    }
  }
  return false;
}

// operator() @ 1504b1b00

bool __thiscall
`UE::Net::FGlobalDirtyNetObjectTracker::DestroyPoller'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1740798700889833622>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1740798700889833622>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b1b50

bool __thiscall
`UE::Net::FGlobalDirtyNetObjectTracker::MarkNetObjectStateDirty'::__l6::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1740798700889833551>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1740798700889833551>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b1db0

bool __thiscall
`UE::Net::FGlobalDirtyNetObjectTracker::DestroyPoller'::__l8::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1740798700889833627>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1740798700889833627>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

