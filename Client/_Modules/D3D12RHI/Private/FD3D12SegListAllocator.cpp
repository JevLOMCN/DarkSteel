// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 13

// FreeRetiredBlocks<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_> @ 1459a38e0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */

void __thiscall
FD3D12SegListAllocator::FreeRetiredBlocks<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>
          (FD3D12SegListAllocator *this,
          TArray<TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FD3D12SegHeap *pFVar3;
  FD3D12SegList *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  uint local_res18;
  longlong *local_res20;
  
  iVar12 = param_1->ArrayNum;
  uVar9 = 0;
  local_res18 = 0;
  uVar14 = uVar9;
  if (0 < iVar12) {
    do {
      uVar10 = 0;
      uVar13 = (uint)uVar9;
      uVar6 = 0;
      if ((int)uVar13 < iVar12) {
        uVar6 = ~uVar13 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      iVar12 = *(int *)(pFVar2 + uVar14 + 8);
      uVar9 = uVar10;
      if (0 < iVar12) {
        do {
          uVar11 = (uint)uVar10;
          uVar6 = 0;
          if ((int)uVar11 < iVar12) {
            uVar6 = ~uVar11 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          plVar8 = (longlong *)(*(longlong *)(pFVar2 + uVar14) + uVar9);
          if ((*(int *)(*plVar8 + 8) == 1) ||
             (local_res20 = plVar8,
             bVar5 = `FD3D12SegListAllocator::
                     FreeRetiredBlocks<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>'::
                     __l7::<lambda_1>::operator()(&local_res20), bVar5)) {
            puVar7 = (undefined8 *)*plVar8;
            pFVar3 = (FD3D12SegHeap *)puVar7[5];
            piVar1 = (int *)(puVar7 + 1);
            LOCK();
            iVar12 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              if (piVar1 == (int *)0x0) {
                puVar7 = (undefined8 *)0x0;
              }
              if (puVar7 != (undefined8 *)0x0) {
                (**(code **)*puVar7)(puVar7,1);
              }
            }
            this_00 = pFVar3->OwnerList;
            if ((this_00 == (FD3D12SegList *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!!Owner",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                                   ,0x9f7,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            FD3D12SegList::FreeBlock(this_00,pFVar3,*(uint *)(plVar8 + 1));
            OnFree(this,*(uint *)(plVar8 + 1),pFVar3,*(uint *)((longlong)plVar8 + 0xc));
          }
          iVar12 = *(int *)(pFVar2 + uVar14 + 8);
          uVar10 = (ulonglong)(uVar11 + 1);
          uVar9 = uVar9 + 0x10;
          uVar13 = local_res18;
        } while ((int)(uVar11 + 1) < iVar12);
      }
      iVar12 = param_1->ArrayNum;
      local_res18 = uVar13 + 1;
      uVar9 = (ulonglong)local_res18;
      uVar14 = uVar14 + 0x10;
    } while ((int)local_res18 < iVar12);
  }
  return;
}

// FreeRetiredBlocks<TSizedDefaultAllocator<32>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 1459a3b10

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */

void __thiscall
FD3D12SegListAllocator::
FreeRetiredBlocks<TSizedDefaultAllocator<32>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FD3D12SegListAllocator *this,
          TArray<TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  int *piVar1;
  ForElementType<TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_>_> FVar2;
  FD3D12SegHeap *pFVar3;
  FD3D12SegList *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong local_res18;
  longlong *local_res20;
  ForElementType<TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_>_> FVar15;
  
  iVar11 = param_1->ArrayNum;
  uVar12 = 0;
  if (0 < iVar11) {
    local_res18 = 0;
    do {
      uVar9 = 0;
      uVar6 = 0;
      if ((int)uVar12 < iVar11) {
        uVar6 = ~uVar12 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar2 = (param_1->AllocatorInstance).SecondaryData;
      FVar15 = (ForElementType<TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_>_>
                )param_1;
      if (FVar2 != (ForElementType<TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_>_>
                    )0x0) {
        FVar15 = FVar2;
      }
      plVar14 = (longlong *)((longlong)FVar15 + local_res18);
      iVar11 = (int)plVar14[1];
      uVar13 = uVar9;
      if (0 < iVar11) {
        do {
          uVar10 = (uint)uVar9;
          uVar6 = 0;
          if ((int)uVar10 < iVar11) {
            uVar6 = ~uVar10 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          plVar8 = (longlong *)(*plVar14 + uVar13);
          if ((*(int *)(*plVar8 + 8) == 1) ||
             (local_res20 = plVar8,
             bVar5 = `FD3D12SegListAllocator::
                     FreeRetiredBlocks<TSizedDefaultAllocator<32>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>'
                     ::__l7::<lambda_1>::operator()(&local_res20), bVar5)) {
            puVar7 = (undefined8 *)*plVar8;
            pFVar3 = (FD3D12SegHeap *)puVar7[5];
            piVar1 = (int *)(puVar7 + 1);
            LOCK();
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              if (piVar1 == (int *)0x0) {
                puVar7 = (undefined8 *)0x0;
              }
              if (puVar7 != (undefined8 *)0x0) {
                (**(code **)*puVar7)(puVar7,1);
              }
            }
            this_00 = pFVar3->OwnerList;
            if ((this_00 == (FD3D12SegList *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!!Owner",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                                   ,0x9f7,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            FD3D12SegList::FreeBlock(this_00,pFVar3,*(uint *)(plVar8 + 1));
            OnFree(this,*(uint *)(plVar8 + 1),pFVar3,*(uint *)((longlong)plVar8 + 0xc));
          }
          iVar11 = (int)plVar14[1];
          uVar9 = (ulonglong)(uVar10 + 1);
          uVar13 = uVar13 + 0x10;
        } while ((int)(uVar10 + 1) < iVar11);
      }
      iVar11 = param_1->ArrayNum;
      local_res18 = local_res18 + 0x10;
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < iVar11);
  }
  return;
}

// FD3D12SegListAllocator @ 1459a9d90

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12SegListAllocator * __thiscall
FD3D12SegListAllocator::FD3D12SegListAllocator
          (FD3D12SegListAllocator *this,FD3D12Device *param_1,FRHIGPUMask param_2,
          D3D12_HEAP_TYPE param_3,D3D12_HEAP_FLAGS param_4,uint param_5,uint param_6,uint param_7)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FD3D12SegListAllocator *pFVar4;
  
  this->_padding_ = (longlong)param_1;
  uVar1 = *(uint *)param_1;
  *(uint *)&this->_padding_ = uVar1;
  *(uint *)((longlong)&this->_padding_ + 4) = param_2.GPUMask;
  if ((param_2.GPUMask & uVar1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NodeMask.Intersects(VisibiltyMask)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x9e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FD3D12SegListAllocator *)(*pcVar2)();
      return pFVar4;
    }
  }
  *(undefined8 *)&this->SegLists = 0;
  *(undefined8 *)&(this->SegLists).field_0x8 = 0;
  *(undefined8 *)&(this->SegLists).field_0x20 = 0;
  *(undefined4 *)&(this->SegLists).field_0x28 = 0;
  *(undefined4 *)&(this->SegLists).field_0x2c = 0x80;
  *(undefined4 *)&(this->SegLists).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SegLists).field_0x34 = 0;
  *(undefined8 *)&(this->SegLists).field_0x40 = 0;
  *(undefined4 *)&(this->SegLists).field_0x48 = 0;
  (this->FenceValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FenceValues).ArrayNum = 0;
  (this->FenceValues).ArrayMax = 0;
  (this->DeferredDeletionQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredDeletionQueue).ArrayNum = 0;
  (this->DeferredDeletionQueue).ArrayMax = 0;
  (this->SegListsRWLock).Mutex.Mutex.Ptr = (void *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->DeferredDeletionCS,4000);
  this->HeapFlags = param_4;
  this->MinPoolSize = param_5;
  this->MinNumToPool = param_6;
  this->MaxPoolSize = param_7;
  this->HeapType = param_3;
  this->TotalBytesRequested = (TAtomic<unsigned___int64>)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SegListTrackedAllocationCS,4000);
  *(undefined8 *)&(this->SegListTrackedAllocations).Elements = 0;
  *(undefined8 *)&(this->SegListTrackedAllocations).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SegListTrackedAllocations).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SegListTrackedAllocations).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SegListTrackedAllocations).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SegListTrackedAllocations).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->SegListTrackedAllocations).Elements.field_0x30 = 0xffffffff;
  (this->SegListTrackedAllocations).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SegListTrackedAllocations).HashSize = 0;
  return this;
}

// CleanUpAllocations @ 1459b5940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12SegListAllocator::CleanUpAllocations(FD3D12SegListAllocator *this)

{
  int *piVar1;
  longlong lVar2;
  FD3D12ManualFence *this_00;
  FScriptContainerElement *_Dst;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulong64 uVar7;
  ForElementType<TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_>_> FVar8;
  TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_> *pTVar9;
  uint uVar10;
  ulonglong uVar11;
  ForElementType<TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_>_> FVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined1 auStackY_a8 [32];
  TArray<TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  local_50;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  uVar15 = 0;
  local_50.AllocatorInstance.SecondaryData =
       (ForElementType<TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_>_>)
       0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 1;
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar2 = this->_padding_;
  if ((*(longlong *)(lVar2 + 0x10) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar2 = *(longlong *)(lVar2 + 0x10);
  if ((*(longlong *)(lVar2 + 0x548) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("FrameFence",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                         ,0xff,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = *(FD3D12ManualFence **)(lVar2 + 0x548);
  if (&this->DeferredDeletionCS == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->DeferredDeletionCS);
  uVar11 = 0;
  uVar13 = uVar11;
  uVar14 = uVar11;
  if (0 < (this->DeferredDeletionQueue).ArrayNum) {
    do {
      uVar10 = (uint)uVar11;
      uVar5 = 0;
      if ((int)uVar10 < (this->FenceValues).ArrayNum) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar11 = *(ulonglong *)((this->FenceValues).AllocatorInstance.Data + uVar14);
      uVar7 = FD3D12ManualFence::GetCompletedFenceValue(this_00,false);
      if (uVar7 < uVar11) break;
      uVar15 = uVar15 + 1;
      uVar5 = 0;
      if ((int)uVar10 < (this->DeferredDeletionQueue).ArrayNum) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar12 = (ForElementType<TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_>_>
                )((longlong)(this->DeferredDeletionQueue).AllocatorInstance.Data + uVar13);
      FVar8 = (ForElementType<TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_>_>
               )&local_50;
      if (local_50.AllocatorInstance.SecondaryData !=
          (ForElementType<TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_>_>
           )0x0) {
        FVar8 = local_50.AllocatorInstance.SecondaryData;
      }
      if ((ulonglong)FVar8 <= (ulonglong)FVar12) {
        FVar8 = (ForElementType<TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_>_>
                 )&local_50;
        if (local_50.AllocatorInstance.SecondaryData !=
            (ForElementType<TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_>_>
             )0x0) {
          FVar8 = local_50.AllocatorInstance.SecondaryData;
        }
        if (((ulonglong)FVar12 < (ulonglong)((longlong)local_50.ArrayMax * 0x10 + (longlong)FVar8))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (local_50.ArrayNum == local_50.ArrayMax) {
        local_50.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_>_>_>
                       (0x810,&local_50.AllocatorInstance,&local_50.ArrayMax);
      }
      FVar8 = (ForElementType<TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_>_>
               )&local_50;
      if (local_50.AllocatorInstance.SecondaryData !=
          (ForElementType<TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_>_>
           )0x0) {
        FVar8 = local_50.AllocatorInstance.SecondaryData;
      }
      pTVar9 = (TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_> *)
               ((longlong)local_50.ArrayNum * 0x10 + (longlong)FVar8);
      uVar11 = (ulonglong)(uVar10 + 1);
      local_50.ArrayNum = local_50.ArrayNum + 1;
      (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pTVar9->AllocatorInstance).Data = *(FScriptContainerElement **)FVar12;
      *(undefined8 *)FVar12 = 0;
      pTVar9->ArrayNum = *(int *)((longlong)FVar12 + 8);
      pTVar9->ArrayMax = *(int *)((longlong)FVar12 + 0xc);
      *(undefined8 *)((longlong)FVar12 + 8) = 0;
      uVar13 = uVar13 + 0x10;
      uVar14 = uVar14 + 8;
    } while ((int)(uVar10 + 1) < (this->DeferredDeletionQueue).ArrayNum);
    if (uVar15 != 0) {
      uVar5 = 0;
      if ((int)uVar15 <= (this->FenceValues).ArrayNum) {
        uVar5 = ~uVar15 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      _Dst = (this->FenceValues).AllocatorInstance.Data;
      iVar6 = (this->FenceValues).ArrayNum - uVar15;
      if (iVar6 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar15 * 8,(longlong)iVar6 << 3);
      }
      piVar1 = &(this->FenceValues).ArrayNum;
      *piVar1 = *piVar1 - uVar15;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&(this->FenceValues).AllocatorInstance,(this->FenceValues).ArrayNum,
                 &(this->FenceValues).ArrayMax);
      uVar5 = 0;
      if ((int)uVar15 <= (this->DeferredDeletionQueue).ArrayNum) {
        uVar5 = ~uVar15 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TArray<TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
      ::RemoveAtImpl(&this->DeferredDeletionQueue,0,uVar15);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&(this->DeferredDeletionQueue).AllocatorInstance,
                 (this->DeferredDeletionQueue).ArrayNum,&(this->DeferredDeletionQueue).ArrayMax);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->DeferredDeletionCS);
  FreeRetiredBlocks<TSizedDefaultAllocator<32>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            (this,&local_50);
  FVar8 = (ForElementType<TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_>_>
           )&local_50;
  if (local_50.AllocatorInstance.SecondaryData !=
      (ForElementType<TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_>_>)
      0x0) {
    FVar8 = local_50.AllocatorInstance.SecondaryData;
  }
  DestructItems<TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_> *)FVar8,
             local_50.ArrayNum);
  if (local_50.AllocatorInstance.SecondaryData !=
      (ForElementType<TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_>_>)
      0x0) {
    FMemory::Free((void *)local_50.AllocatorInstance.SecondaryData);
  }
  return;
}

// Deallocate @ 1459bc710

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FD3D12SegListAllocator::Deallocate
          (FD3D12SegListAllocator *this,FD3D12Resource *param_1,uint param_2,uint param_3)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_D3D12TextureAllocatorCount> FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar12;
  FScriptContainerElement *pFVar13;
  undefined8 *puVar14;
  FName local_res8;
  ulonglong local_48;
  FName local_40;
  FStatMessage local_38;
  
  if ((this->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar2 = this->_padding_;
  if ((*(longlong *)(lVar2 + 0x10) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar2 = *(longlong *)(lVar2 + 0x10);
  if ((*(longlong *)(lVar2 + 0x548) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FrameFence",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                         ,0xff,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lpCriticalSection = &this->DeferredDeletionCS;
  local_48 = (ulonglong)(*(int *)(*(longlong *)(lVar2 + 0x548) + 0x58) + 1);
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (((this->FenceValues).ArrayNum != (this->DeferredDeletionQueue).ArrayNum) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FenceValues.Num() == DeferredDeletionQueue.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                         ,0x9d9,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = (this->FenceValues).ArrayNum;
  if (iVar7 != 0) {
    uVar8 = 0;
    if ((int)(iVar7 - 1U) < iVar7) {
      uVar8 = ~(iVar7 - 1U) >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((local_48 <
         *(ulonglong *)
          ((this->FenceValues).AllocatorInstance.Data +
          (longlong)(this->FenceValues).ArrayNum * 8 + -8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!FenceValues.Num() || FenceValues.Last() <= CurFenceValue",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                           ,0x9da,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar8 = (this->FenceValues).ArrayNum;
  uVar11 = uVar8 - 1;
  if (-1 < (int)uVar11) {
    uVar6 = 0;
    if ((int)uVar11 < (int)uVar8) {
      uVar6 = ~uVar11 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(ulonglong *)((this->FenceValues).AllocatorInstance.Data + (longlong)(int)uVar11 * 8) ==
        local_48) goto LAB_1459bca01;
  }
  pTVar12 = &this->FenceValues;
  pFVar13 = (pTVar12->AllocatorInstance).Data;
  if (((pFVar13 <= (FScriptContainerElement *)&local_48) &&
      ((FScriptContainerElement *)&local_48 < pFVar13 + (longlong)(this->FenceValues).ArrayMax * 8))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = (this->FenceValues).ArrayNum;
  piVar1 = &(this->FenceValues).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar12->AllocatorInstance,piVar1);
    (this->FenceValues).ArrayNum = iVar7;
  }
  (this->FenceValues).ArrayNum = iVar7 + 1;
  piVar1 = &(this->DeferredDeletionQueue).ArrayMax;
  *(ulonglong *)((pTVar12->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_48;
  iVar7 = (this->DeferredDeletionQueue).ArrayNum;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->DeferredDeletionQueue).AllocatorInstance,piVar1);
  }
  pFVar13 = (this->DeferredDeletionQueue).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
  (this->DeferredDeletionQueue).ArrayNum = iVar7 + 1;
  *(undefined8 *)pFVar13 = 0;
  *(undefined8 *)(pFVar13 + 8) = 0;
  uVar11 = uVar8;
LAB_1459bca01:
  uVar8 = 0;
  if ((int)uVar11 < (this->DeferredDeletionQueue).ArrayNum) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar13 = (this->DeferredDeletionQueue).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x10;
  uVar8 = *(uint *)&pFVar13[8].field_0x0;
  if (uVar8 == *(uint *)(pFVar13 + 0xc)) {
    uVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)pFVar13,(int *)(pFVar13 + 0xc));
  }
  *(uint *)&pFVar13[8].field_0x0 = uVar8 + 1;
  uVar11 = 0;
  if ((int)uVar8 < (int)(uVar8 + 1)) {
    uVar11 = ~uVar8 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  puVar14 = (undefined8 *)(*(longlong *)&pFVar13->field_0x0 + (longlong)(int)uVar8 * 0x10);
  if (puVar14 != (undefined8 *)0x0) {
    *puVar14 = param_1;
    *(uint *)(puVar14 + 1) = param_2;
    *(uint *)((longlong)puVar14 + 0xc) = param_3;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FVar10 = StatPtr_STAT_D3D12TextureAllocatorCount;
  if (StatPtr_STAT_D3D12TextureAllocatorCount ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12TextureAllocatorCount>)0x0) {
    pFVar9 = ::FName::FName(&local_40,"STAT_D3D12TextureAllocatorCount");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_D3D12TextureAllocatorCount>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12TextureAllocatorCount,
                        *pFVar9,L"Texture Allocator Allocated","STATGROUP_D3D12MemoryDetails",
                        "STATCAT_Advanced",L"D3D12RHI: Memory Details",true,false,ST_int64,false,
                        false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar10;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_res8 = FVar3;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_38.NameAndInfo.Number = FVar3.Number & 0xffffbfff | 0xb000;
    local_38.StatData.Pad[0] = '\x01';
    local_38.StatData.Pad[1] = '\0';
    local_38.StatData.Pad[2] = '\0';
    local_38.StatData.Pad[3] = '\0';
    local_38.StatData.Pad[4] = '\0';
    local_38.StatData.Pad[5] = '\0';
    local_38.StatData.Pad[6] = '\0';
    local_38.StatData.Pad[7] = '\0';
    local_res8 = FVar3;
    local_38.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_38);
    FStatsTrace::Add(&local_res8,-1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  return;
}

// Destroy @ 1459bd440

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */

void __thiscall FD3D12SegListAllocator::Destroy(FD3D12SegListAllocator *this)

{
  int *piVar1;
  undefined1 *puVar2;
  TMap<unsigned_int,FD3D12SegList_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FD3D12SegList_*,0>_>
  *this_00;
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  code *pcVar7;
  longlong lVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  longlong *plVar15;
  int iVar16;
  undefined1 *puVar17;
  int iVar18;
  uint *puVar19;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  int local_res20;
  undefined4 uStack_a4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  lpCriticalSection = &this->DeferredDeletionCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (((this->FenceValues).ArrayNum != (this->DeferredDeletionQueue).ArrayNum) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("FenceValues.Num() == DeferredDeletionQueue.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                           ,0xa23,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FreeRetiredBlocks<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>
              (this,&this->DeferredDeletionQueue);
    piVar1 = &(this->FenceValues).ArrayMax;
    (this->FenceValues).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->FenceValues).AllocatorInstance,0,piVar1);
    }
    DestructItems<TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_>,int>
              ((TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_> *)
               (this->DeferredDeletionQueue).AllocatorInstance.Data,
               (this->DeferredDeletionQueue).ArrayNum);
    piVar1 = &(this->DeferredDeletionQueue).ArrayMax;
    (this->DeferredDeletionQueue).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->DeferredDeletionQueue).AllocatorInstance,0,piVar1);
    }
    VerifyEmpty(this);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    AcquireSRWLockExclusive((PSRWLOCK)&this->SegListsRWLock);
    iVar5 = *(int *)&(this->SegLists).field_0x28;
    puVar2 = &(this->SegLists).field_0x10;
    this_00 = &this->SegLists;
    iVar16 = 0;
    uVar10 = 1;
    iVar18 = 0;
    iVar11 = 0;
    if (iVar5 != 0) {
      puVar19 = *(uint **)&(this->SegLists).field_0x20;
      if (puVar19 == (uint *)0x0) {
        puVar19 = (uint *)puVar2;
      }
      uVar14 = *puVar19;
      iVar18 = 0;
      while (uVar14 == 0) {
        lVar12 = (longlong)iVar16;
        iVar18 = iVar18 + 0x20;
        iVar16 = iVar16 + 1;
        iVar11 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_1459bd5bd;
        uVar14 = puVar19[lVar12 + 1];
      }
      uVar10 = -uVar14 & uVar14;
      uVar4 = (ulonglong)uVar10 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res20 = (int)lVar12;
      iVar11 = iVar18 + -1 + local_res20;
      if (iVar5 < iVar11) {
        iVar11 = iVar5;
      }
    }
LAB_1459bd5bd:
    uVar14 = *(uint *)&(this->SegLists).field_0x28;
    uVar13 = uVar14 & 0xffffffe0;
    TStack_98._padding_ = CONCAT44(uVar10,iVar16);
    TStack_98.CurrentBitIndex = iVar11;
    TStack_98.UnvisitedBitMask = 0xffffffff;
    iVar16 = (int)uVar14 >> 5;
    TStack_98._28_4_ = local_54;
    TStack_98.BaseBitIndex = iVar18;
    uStack_78 = CONCAT44(uStack_a4,
                         *(int *)&(this->SegLists).field_0x8 - *(int *)&(this->SegLists).field_0x34)
    ;
    local_res18 = uVar14;
    TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if ((((int)uVar14 < 0) || (iVar5 < (int)uVar14)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar10 = *(uint *)&(this->SegLists).field_0x28;
    if (uVar14 != uVar10) {
      puVar17 = *(undefined1 **)&(this->SegLists).field_0x20;
      if (puVar17 == (undefined1 *)0x0) {
        puVar17 = puVar2;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar16 * 4);
      while (uVar14 == 0) {
        lVar12 = (longlong)iVar16;
        uVar13 = uVar13 + 0x20;
        iVar16 = iVar16 + 1;
        uVar14 = uVar10;
        local_res18 = uVar10;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
        goto LAB_1459bd6d0;
        uVar14 = *(uint *)(puVar17 + lVar12 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar14 = (int)lVar12 + -1 + uVar13;
      local_res18 = uVar14;
      if ((int)uVar10 < (int)uVar14) {
        uVar14 = uVar10;
        local_res18 = uVar10;
      }
    }
LAB_1459bd6d0:
    do {
      if (*(int *)&(this->SegLists).field_0x8 - *(int *)&(this->SegLists).field_0x34 !=
          (int)uStack_78) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FD3D12SegList_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_98.CurrentBitIndex == uVar14) &&
         (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) {
        bVar9 = 1 < *(int *)&(this->SegLists).field_0x48;
        if (!bVar9) {
          TSet<TTuple<unsigned_int,FD3D12SegList_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FD3D12SegList_*,0>,FDefaultSetAllocator>
          ::UnhashElements((TSet<TTuple<unsigned_int,FD3D12SegList_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FD3D12SegList_*,0>,FDefaultSetAllocator>
                            *)this_00);
        }
        *(undefined4 *)&(this->SegLists).field_0x8 = 0;
        if (*(int *)&(this->SegLists).field_0xc != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)&(this->SegLists).field_0xc);
        }
        *(undefined4 *)&(this->SegLists).field_0x30 = 0xffffffff;
        *(undefined4 *)&(this->SegLists).field_0x34 = 0;
        iVar5 = *(int *)&(this->SegLists).field_0x2c;
        *(undefined4 *)&(this->SegLists).field_0x28 = 0;
        if ((iVar5 < 0) || (0x80 < iVar5)) {
          *(undefined4 *)&(this->SegLists).field_0x2c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)&(this->SegLists).field_0x10,0);
        }
        if (bVar9) {
          *(undefined4 *)&(this->SegLists).field_0x48 = 1;
          TSet<TTuple<unsigned_int,FD3D12SegList_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FD3D12SegList_*,0>,FDefaultSetAllocator>
          ::Rehash((TSet<TTuple<unsigned_int,FD3D12SegList_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FD3D12SegList_*,0>,FDefaultSetAllocator>
                    *)this_00);
        }
                    /* WARNING: Could not recover jumptable at 0x0001459bd91a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)&this->SegListsRWLock);
        return;
      }
      lVar12 = *(longlong *)&this_00->field_0x0 + (longlong)TStack_98.CurrentBitIndex * 0x18;
      if ((*(longlong *)
            (*(longlong *)&this_00->field_0x0 + 8 + (longlong)TStack_98.CurrentBitIndex * 0x18) == 0
          ) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!!SegList",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                                   ,0xa2e,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      plVar6 = *(longlong **)(lVar12 + 8);
      if (plVar6 != (longlong *)0x0) {
        if ((LPCRITICAL_SECTION)(plVar6 + 2) == (LPCRITICAL_SECTION)0x0) break;
        EnterCriticalSection((LPCRITICAL_SECTION)(plVar6 + 2));
        if (((int)plVar6[7] == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("!!BlockSize",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.h"
                               ,0x28c,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((*(int *)((longlong)plVar6 + 0x3c) == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("!!HeapSize",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.h"
                               ,0x28d,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        plVar15 = (longlong *)*plVar6;
        lVar8 = plVar6[1];
        plVar3 = plVar15 + (int)lVar8;
        while( true ) {
          if ((int)plVar6[1] != (int)lVar8) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<TRefCountPtr<FD3D12SegHeap>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res10);
          }
          if (plVar15 == plVar3) break;
          if ((*(int *)(*plVar15 + 8) != 1) &&
             (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_9129305179261238640>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.h"
                                 ,0x290,"Heap->GetRefCount() == 1"), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          plVar15 = plVar15 + 1;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(plVar6 + 2));
        DeleteCriticalSection((LPCRITICAL_SECTION)(plVar6 + 2));
        DestructItems<TRefCountPtr<FD3D12SegHeap>,int>
                  ((TRefCountPtr<FD3D12SegHeap> *)*plVar6,(int)plVar6[1]);
        if ((void *)*plVar6 != (void *)0x0) {
          FMemory::Free((void *)*plVar6);
        }
        ::operator_delete(plVar6,0x48);
        uVar14 = local_res18;
      }
      *(undefined8 *)(lVar12 + 8) = 0;
      TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// DumpStack @ 1459bdf70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FD3D12SegListAllocator::DumpStack
          (FD3D12SegListAllocator *this,FD3D12SegListAllocatorLeakTrack *param_1)

{
  uint uVar1;
  undefined1 auStackY_4048 [32];
  char local_4018 [16384];
  ulonglong local_18;
  undefined8 local_10;
  ulonglong uVar2;
  
  local_10 = 0x1459bdf85;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_4048;
  if (2 < (byte)LogD3D12RHI._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
  }
  uVar2 = 0;
  if (param_1->StackDepth != 0) {
    do {
      local_4018[0] = '\0';
      FGenericPlatformStackWalk::ProgramCounterToHumanReadableString
                ((int)uVar2,param_1->Stack[uVar2],local_4018,0x4000,(FGenericCrashContext *)0x0);
      if (2 < (byte)LogD3D12RHI._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < param_1->StackDepth);
  }
  return;
}

// OnAlloc @ 1459c8360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */

void __thiscall
FD3D12SegListAllocator::OnAlloc
          (FD3D12SegListAllocator *this,uint param_1,void *param_2,uint param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  int iVar6;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [16];
  uint local_a8;
  void *local_a0;
  uint local_98;
  uint local_94;
  ulong64 local_90 [13];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  LOCK();
  this->TotalBytesRequested =
       (TAtomic<unsigned___int64>)((longlong)this->TotalBytesRequested + (ulonglong)param_3);
  UNLOCK();
  if (GD3D12SegListTrackLeaks != 0) {
    local_a8 = param_1;
    local_a0 = param_2;
    local_98 = param_3;
    local_94 = FWindowsPlatformStackWalk::CaptureStackBackTrace(local_90,0xc,(void *)0x0);
    lpCriticalSection = &this->SegListTrackedAllocationCS;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (*(int *)&(this->SegListTrackedAllocations).Elements.field_0x8 !=
        *(int *)&(this->SegListTrackedAllocations).Elements.field_0x34) {
      FVar5 = (this->SegListTrackedAllocations).Hash.SecondaryData;
      if (FVar5 == (ForElementType<FSetElementId>)0x0) {
        FVar5 = (ForElementType<FSetElementId>)&(this->SegListTrackedAllocations).Hash;
      }
      iVar6 = *(int *)((longlong)FVar5 +
                      (ulonglong)
                      ((this->SegListTrackedAllocations).HashSize - 1U &
                      (int)local_a0 * 0x5d18b207 + (int)((ulonglong)local_a0 >> 0x20) * -0x5938fe99
                      + local_a8 * -0x2f5b7607) * 4);
      if (iVar6 != -1) {
        lVar1 = *(longlong *)&(this->SegListTrackedAllocations).Elements;
        do {
          lVar4 = (longlong)iVar6 * 0x80;
          if ((*(uint *)(lVar4 + lVar1) == local_a8) && (*(void **)(lVar4 + 8 + lVar1) == local_a0))
          {
            if ((iVar6 != -1) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!SegListTrackedAllocations.Contains(LeakTrack)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                                   ,0xa62,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            break;
          }
          iVar6 = *(int *)(lVar4 + 0x78 + lVar1);
        } while (iVar6 != -1);
      }
    }
    TSet<FD3D12SegListAllocatorLeakTrack,DefaultKeyFuncs<FD3D12SegListAllocatorLeakTrack,0>,FDefaultSetAllocator>
    ::Emplace<FD3D12SegListAllocatorLeakTrack_const_&>
              (&this->SegListTrackedAllocations,(FD3D12SegListAllocatorLeakTrack *)local_b8,
               (bool *)&local_a8);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// OnFree @ 1459c84e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FD3D12SegListAllocator::OnFree(FD3D12SegListAllocator *this,uint param_1,void *param_2,uint param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TSet<FD3D12SegListAllocatorLeakTrack,DefaultKeyFuncs<FD3D12SegListAllocatorLeakTrack,0>,FDefaultSetAllocator>
  *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  ForElementType<FSetElementId> FVar6;
  int iVar7;
  FD3D12SegListAllocatorLeakTrack *pFVar8;
  uint uVar9;
  undefined1 auStack_d8 [32];
  void *local_b8;
  uint local_b0;
  FD3D12SegListAllocatorLeakTrack local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  LOCK();
  this->TotalBytesRequested =
       (TAtomic<unsigned___int64>)((longlong)this->TotalBytesRequested - (ulonglong)param_3);
  UNLOCK();
  if (GD3D12SegListTrackLeaks != 0) {
    lpCriticalSection = &this->SegListTrackedAllocationCS;
    local_a8.Offset = param_1;
    local_a8.Heap = param_2;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this_00 = &this->SegListTrackedAllocations;
    iVar4 = (int)((ulonglong)param_2 >> 0x20);
    iVar7 = (int)param_2;
    if (*(int *)&(this->SegListTrackedAllocations).Elements.field_0x8 !=
        *(int *)&(this->SegListTrackedAllocations).Elements.field_0x34) {
      FVar6 = (this->SegListTrackedAllocations).Hash.SecondaryData;
      if (FVar6 == (ForElementType<FSetElementId>)0x0) {
        FVar6 = (ForElementType<FSetElementId>)&(this->SegListTrackedAllocations).Hash;
      }
      uVar9 = *(uint *)((longlong)FVar6 +
                       (ulonglong)
                       ((this->SegListTrackedAllocations).HashSize - 1U &
                       param_1 * -0x2f5b7607 + iVar4 * -0x5938fe99 + iVar7 * 0x5d18b207) * 4);
      if (uVar9 != 0xffffffff) {
        do {
          pFVar8 = (FD3D12SegListAllocatorLeakTrack *)
                   ((longlong)(int)uVar9 * 0x80 + *(longlong *)&this_00->Elements);
          if ((pFVar8->Offset == param_1) && (pFVar8->Heap == param_2)) {
            if (uVar9 != 0xffffffff) {
              if (pFVar8 == (FD3D12SegListAllocatorLeakTrack *)0x0) goto LAB_1459c85d6;
              goto LAB_1459c8605;
            }
            break;
          }
          uVar9 = pFVar8[1].Offset;
        } while (uVar9 != 0xffffffff);
      }
    }
    pFVar8 = (FD3D12SegListAllocatorLeakTrack *)0x0;
LAB_1459c85d6:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Element",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                       ,0xa70,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
LAB_1459c8605:
    if (pFVar8->Size != param_3) {
      if (2 < (byte)LogD3D12RHI._0_1_) {
        local_b0 = pFVar8->Offset;
        local_b8 = pFVar8->Heap;
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      }
      DumpStack(this,pFVar8);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                         ,0xa75,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (*(int *)&(this->SegListTrackedAllocations).Elements.field_0x8 !=
        *(int *)&(this->SegListTrackedAllocations).Elements.field_0x34) {
      TSet<FD3D12SegListAllocatorLeakTrack,DefaultKeyFuncs<FD3D12SegListAllocatorLeakTrack,0>,FDefaultSetAllocator>
      ::RemoveImpl<FD3D12SegListAllocatorLeakTrack>
                (this_00,param_1 * -0x2f5b7607 + iVar4 * -0x5938fe99 + iVar7 * 0x5d18b207,&local_a8)
      ;
    }
    if (*(int *)&(this->SegListTrackedAllocations).Elements.field_0x8 !=
        *(int *)&(this->SegListTrackedAllocations).Elements.field_0x34) {
      FVar6 = (this->SegListTrackedAllocations).Hash.SecondaryData;
      if (FVar6 == (ForElementType<FSetElementId>)0x0) {
        FVar6 = (ForElementType<FSetElementId>)&(this->SegListTrackedAllocations).Hash;
      }
      iVar4 = *(int *)((longlong)FVar6 +
                      (ulonglong)
                      ((this->SegListTrackedAllocations).HashSize - 1U &
                      param_1 * -0x2f5b7607 + iVar4 * -0x5938fe99 + iVar7 * 0x5d18b207) * 4);
      if (iVar4 != -1) {
        lVar1 = *(longlong *)&this_00->Elements;
        do {
          lVar5 = (longlong)iVar4 * 0x80;
          if ((*(uint *)(lVar5 + lVar1) == param_1) && (*(void **)(lVar5 + 8 + lVar1) == param_2)) {
            if ((iVar4 != -1) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!SegListTrackedAllocations.Contains(LeakTrack)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                                   ,0xa78,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            break;
          }
          iVar4 = *(int *)(lVar5 + 0x78 + lVar1);
        } while (iVar4 != -1);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// VerifyEmpty @ 1459e0be0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FD3D12SegListAllocator::VerifyEmpty(FD3D12SegListAllocator *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  int local_res10;
  FD3D12SegListAllocator *local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lpCriticalSection = &this->SegListTrackedAllocationCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(int *)&(this->SegListTrackedAllocations).Elements.field_0x8 !=
      *(int *)&(this->SegListTrackedAllocations).Elements.field_0x34) {
    if (2 < (byte)LogD3D12RHI._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    iVar10 = 0;
    puVar1 = &(this->SegListTrackedAllocations).Elements.field_0x10;
    iVar3 = *(int *)&(this->SegListTrackedAllocations).Elements.field_0x28;
    uVar6 = 1;
    iVar12 = 0;
    iVar7 = 0;
    if (iVar3 != 0) {
      puVar13 = *(uint **)&(this->SegListTrackedAllocations).Elements.field_0x20;
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)puVar1;
      }
      uVar9 = *puVar13;
      while (uVar9 == 0) {
        lVar8 = (longlong)iVar10;
        iVar12 = iVar12 + 0x20;
        iVar10 = iVar10 + 1;
        iVar7 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1459e0cef;
        uVar9 = puVar13[lVar8 + 1];
      }
      uVar6 = -uVar9 & uVar9;
      uVar2 = (ulonglong)uVar6 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_res10 = (int)lVar8;
      iVar7 = iVar12 + -1 + local_res10;
      if (iVar3 < iVar7) {
        iVar7 = iVar3;
      }
    }
LAB_1459e0cef:
    uVar9 = *(uint *)&(this->SegListTrackedAllocations).Elements.field_0x28;
    uVar14 = uVar9 & 0xffffffe0;
    TStack_60._padding_ = CONCAT44(uVar6,iVar10);
    TStack_60.CurrentBitIndex = iVar7;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar10 = (int)uVar9 >> 5;
    TStack_60._28_4_ = iVar7;
    TStack_60.BaseBitIndex = iVar12;
    uStack_40 = CONCAT44(uStack_6c,
                         *(int *)&(this->SegListTrackedAllocations).Elements.field_0x8 -
                         *(int *)&(this->SegListTrackedAllocations).Elements.field_0x34);
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar6 = *(uint *)&(this->SegListTrackedAllocations).Elements.field_0x28;
    if (uVar9 != uVar6) {
      puVar11 = *(undefined1 **)&(this->SegListTrackedAllocations).Elements.field_0x20;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = puVar1;
      }
      uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
      while (uVar9 == 0) {
        lVar8 = (longlong)iVar10;
        uVar14 = uVar14 + 0x20;
        iVar10 = iVar10 + 1;
        uVar9 = uVar6;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
        goto LAB_1459e0e10;
        uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uVar9 = (int)lVar8 + -1 + uVar14;
      if ((int)uVar6 < (int)uVar9) {
        uVar9 = uVar6;
      }
    }
LAB_1459e0e10:
    while( true ) {
      if (*(int *)&(this->SegListTrackedAllocations).Elements.field_0x8 -
          *(int *)&(this->SegListTrackedAllocations).Elements.field_0x34 != (int)uStack_40) {
        `TSparseArray<TSparseSetElement<FD3D12SegListAllocatorLeakTrack>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_60.CurrentBitIndex == uVar9) &&
         (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      DumpStack(this,(FD3D12SegListAllocatorLeakTrack *)
                     ((longlong)TStack_60.CurrentBitIndex * 0x80 +
                     *(longlong *)&(this->SegListTrackedAllocations).Elements));
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  if (this->TotalBytesRequested != (TAtomic<unsigned___int64>)0x0) {
    local_res18 = this;
    `FD3D12SegListAllocator::VerifyEmpty'::__l2::<lambda_1>::operator()(&local_res18);
  }
                    /* WARNING: Could not recover jumptable at 0x0001459e0ea9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// operator() @ 1504d5520

bool __thiscall `FD3D12SegListAllocator::VerifyEmpty'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<981708483097266756>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<981708483097266756>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d5600

bool __thiscall
`FD3D12SegListAllocator::FreeRetiredBlocks<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>'
::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<981708483097266674>);
  if (bVar2) {
    local_res10[0] = *(FName *)(**(longlong **)this + 0x9c);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<981708483097266674>,
                       &`public:___cdecl_`private:_void___cdecl_FD3D12SegListAllocator::FreeRetiredBlocks<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>(TArray<TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504d567b;
    }
  }
  bVar2 = false;
LAB_1504d567b:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504d56b0

bool __thiscall
`FD3D12SegListAllocator::
FreeRetiredBlocks<TSizedDefaultAllocator<32>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>'
::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<981708483097266674>);
  if (bVar2) {
    local_res10[0] = *(FName *)(**(longlong **)this + 0x9c);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<981708483097266674>,
                       &`public:___cdecl_`private:_void___cdecl_FD3D12SegListAllocator::FreeRetiredBlocks<TSizedDefaultAllocator<32>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>(TArray<TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>&___ptr64)___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504d572b;
    }
  }
  bVar2 = false;
LAB_1504d572b:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

