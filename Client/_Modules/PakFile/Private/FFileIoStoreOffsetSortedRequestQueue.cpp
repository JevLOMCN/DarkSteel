// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 10

// FFileIoStoreOffsetSortedRequestQueue @ 142a51a90

FFileIoStoreOffsetSortedRequestQueue * __thiscall
FFileIoStoreOffsetSortedRequestQueue::FFileIoStoreOffsetSortedRequestQueue
          (FFileIoStoreOffsetSortedRequestQueue *this,int param_1)

{
  this->Priority = param_1;
  (this->Requests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Requests).ArrayNum = 0;
  (this->Requests).ArrayMax = 0;
  (this->RequestsBySequence).Head = (FFileIoStoreReadRequest *)0x0;
  (this->RequestsBySequence).Tail = (FFileIoStoreReadRequest *)0x0;
  this->PeekRequestIndex = -1;
  return this;
}

// GetNextInternal @ 142a75c70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FFileIoStoreReadRequest * __thiscall
FFileIoStoreOffsetSortedRequestQueue::GetNextInternal
          (FFileIoStoreOffsetSortedRequestQueue *this,FFileIoStoreReadRequestSortKey *param_1,
          bool param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  FFileIoStoreReadRequest *pFVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  bool bVar13;
  double dVar14;
  LARGE_INTEGER local_res20;
  
  if ((this->Requests).ArrayNum == 0) {
    return (FFileIoStoreReadRequest *)0x0;
  }
  uVar11 = this->PeekRequestIndex;
  if (uVar11 == 0xffffffff) {
    bVar13 = false;
    if (0 < GIoDispatcherRequestLatencyCircuitBreakerMS) {
      lVar7 = 0;
      dVar14 = ((double)GIoDispatcherRequestLatencyCircuitBreakerMS * __real_408f400000000000) /
               FGenericPlatformTime::SecondsPerCycle64;
      if ((__real_43e0000000000000 <= dVar14) &&
         (dVar14 = dVar14 - __real_43e0000000000000, dVar14 < __real_43e0000000000000)) {
        lVar7 = -0x8000000000000000;
      }
      QueryPerformanceCounter(&local_res20);
      bVar13 = (ulonglong)((longlong)dVar14 + lVar7) <=
               local_res20.QuadPart - ((this->RequestsBySequence).Head)->CreationTime;
    }
    uVar1 = param_1->Handle;
    if (((uVar1 != 0) && (!bVar13)) &&
       ((GIoDispatcherMaintainSortingOnPriorityChange != 0 || (param_1->Priority == this->Priority))
       )) {
      uVar6 = (this->Requests).ArrayNum;
      uVar11 = 0;
      uVar5 = uVar6;
      uVar10 = 0;
      if (0 < (int)uVar6) {
        do {
          uVar9 = uVar5 >> 1;
          lVar7 = *(longlong *)
                   ((this->Requests).AllocatorInstance.Data + (longlong)(int)(uVar9 + uVar10) * 8);
          uVar2 = **(ulonglong **)(lVar7 + 0x10);
          bVar13 = uVar2 < uVar1;
          if (uVar2 == uVar1) {
            bVar13 = *(ulonglong *)(lVar7 + 0x18) < param_1->Offset;
          }
          uVar11 = uVar10;
          if (bVar13) {
            uVar11 = uVar9 + uVar10 + (uVar5 & 1);
          }
          uVar5 = uVar9;
          uVar10 = uVar11;
        } while (uVar9 != 0);
      }
      if ((-1 < (int)uVar11) && ((int)uVar11 < (this->Requests).ArrayNum)) {
        uVar5 = 0;
        if ((int)uVar11 < (int)uVar6) {
          uVar5 = ~uVar11 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FFileIoStoreReadRequest *)(*pcVar4)();
          return pFVar8;
        }
        if (**(ulong64 **)
              (*(longlong *)((this->Requests).AllocatorInstance.Data + (longlong)(int)uVar11 * 8) +
              0x10) == param_1->Handle) {
          if (0 < GIoDispatcherMaxForwardSeekKB) {
            uVar6 = 0;
            if ((int)uVar11 < (this->Requests).ArrayNum) {
              uVar6 = ~uVar11 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar4 = (code *)swi(3);
              pFVar8 = (FFileIoStoreReadRequest *)(*pcVar4)();
              return pFVar8;
            }
            if (((ulonglong)((longlong)GIoDispatcherMaxForwardSeekKB * 0x400) <
                 param_1->Offset -
                 *(longlong *)
                  (*(longlong *)
                    ((this->Requests).AllocatorInstance.Data + (longlong)(int)uVar11 * 8) + 0x18))
               || ((int)uVar11 < 0)) goto LAB_142a75e98;
          }
          if ((int)uVar11 < (this->Requests).ArrayNum) goto LAB_142a75f67;
        }
      }
    }
LAB_142a75e98:
    pFVar3 = (this->Requests).AllocatorInstance.Data;
    for (pFVar12 = pFVar3; pFVar12 != pFVar3 + (longlong)(this->Requests).ArrayNum * 8;
        pFVar12 = pFVar12 + 8) {
      if (*(FFileIoStoreReadRequest **)pFVar12 == (this->RequestsBySequence).Head) {
        uVar11 = (uint)((longlong)pFVar12 - (longlong)pFVar3 >> 3);
        uVar6 = 0;
        if ((int)uVar11 < (this->Requests).ArrayNum) {
          uVar6 = ~uVar11 >> 0x1f;
        }
        if (uVar6 == 0) goto LAB_142a75ecb;
        goto LAB_142a75f01;
      }
    }
    uVar11 = 0xffffffff;
LAB_142a75ecb:
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FFileIoStoreReadRequest *)(*pcVar4)();
      return pFVar8;
    }
LAB_142a75f01:
    if ((*(FFileIoStoreReadRequest **)
          ((this->Requests).AllocatorInstance.Data + (longlong)(int)uVar11 * 8) !=
         (this->RequestsBySequence).Head) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Requests[RequestIndex] == RequestsBySequence.PeekHead()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                            ,0x14b,L""), bVar13)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FFileIoStoreReadRequest *)(*pcVar4)();
      return pFVar8;
    }
  }
  if ((((int)uVar11 < 0) || ((this->Requests).ArrayNum <= (int)uVar11)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Requests.IsValidIndex(RequestIndex)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                          ,0x14f,L""), bVar13)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FFileIoStoreReadRequest *)(*pcVar4)();
    return pFVar8;
  }
LAB_142a75f67:
  uVar6 = 0;
  if ((int)uVar11 < (this->Requests).ArrayNum) {
    uVar6 = ~uVar11 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FFileIoStoreReadRequest *)(*pcVar4)();
    return pFVar8;
  }
  pFVar8 = *(FFileIoStoreReadRequest **)
            ((this->Requests).AllocatorInstance.Data + (longlong)(int)uVar11 * 8);
  if (param_2) {
    TArray<FFileIoStoreReadRequest_*,TSizedDefaultAllocator<32>_>::RemoveAt
              (&this->Requests,uVar11,Default);
    FFileIoStoreReadRequestList::Remove(&this->RequestsBySequence,pFVar8);
    uVar11 = 0xffffffff;
  }
  this->PeekRequestIndex = uVar11;
  return pFVar8;
}

// HandleContainerUnmounted @ 142a7a8e0

int __thiscall
FFileIoStoreOffsetSortedRequestQueue::HandleContainerUnmounted
          (FFileIoStoreOffsetSortedRequestQueue *this,FFileIoStoreContainerFile *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined4 uStack_1c;
  TArrayView<FFileIoStoreReadRequest_*,int> local_18;
  
  pFVar1 = (this->Requests).AllocatorInstance.Data;
  iVar4 = (this->Requests).ArrayNum;
  if (iVar4 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar4;
  local_18.DataPtr = (FFileIoStoreReadRequest **)pFVar1;
  iVar4 = ::HandleContainerUnmounted(&local_18,param_1);
  return iVar4;
}

// Pop @ 142a8af60

FFileIoStoreReadRequest * __thiscall
FFileIoStoreOffsetSortedRequestQueue::Pop
          (FFileIoStoreOffsetSortedRequestQueue *this,FFileIoStoreReadRequestSortKey *param_1)

{
  FFileIoStoreReadRequest *pFVar1;
  FFileIoStoreReadRequestSortKey local_28;
  
  local_28.Offset = param_1->Offset;
  local_28.Handle = param_1->Handle;
  local_28.Priority = param_1->Priority;
  local_28._20_4_ = *(undefined4 *)&param_1->field_0x14;
  pFVar1 = GetNextInternal(this,&local_28,true);
  return pFVar1;
}

// Push @ 142a8e600

void __thiscall
FFileIoStoreOffsetSortedRequestQueue::Push
          (FFileIoStoreOffsetSortedRequestQueue *this,FFileIoStoreReadRequest *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  FFileIoStoreReadRequest *pFVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  bool bVar11;
  FFileIoStoreReadRequest *local_res10;
  
  pFVar9 = (this->Requests).AllocatorInstance.Data;
  iVar10 = 0;
  uVar7 = (this->Requests).ArrayNum;
  uVar2 = param_1->ContainerFilePartition->FileHandle;
  if (0 < (int)uVar7) {
    do {
      iVar6 = (uVar7 >> 1) + iVar10;
      uVar3 = **(ulonglong **)(*(longlong *)(pFVar9 + (longlong)iVar6 * 8) + 0x10);
      bVar11 = uVar2 < uVar3;
      if (uVar2 == uVar3) {
        bVar11 = param_1->Offset <
                 *(ulonglong *)(*(longlong *)(pFVar9 + (longlong)iVar6 * 8) + 0x18);
      }
      if (!bVar11) {
        iVar10 = iVar6 + (uVar7 & 1);
      }
      uVar5 = uVar7 >> 1;
      uVar7 = uVar7 >> 1;
    } while (uVar5 != 0);
  }
  local_res10 = param_1;
  if (((pFVar9 <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 < pFVar9 + (longlong)(this->Requests).ArrayMax * 8))
     && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = (this->Requests).ArrayNum;
  piVar1 = &(this->Requests).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Requests).AllocatorInstance,piVar1);
  }
  pFVar9 = (this->Requests).AllocatorInstance.Data;
  (this->Requests).ArrayNum = iVar6 + 1;
  pFVar9 = pFVar9 + (longlong)iVar10 * 8;
  memmove(pFVar9 + 8,pFVar9,(longlong)(iVar6 - iVar10) << 3);
  *(FFileIoStoreReadRequest **)((this->Requests).AllocatorInstance.Data + (longlong)iVar10 * 8) =
       local_res10;
  pFVar8 = (this->RequestsBySequence).Tail;
  if (pFVar8 == (FFileIoStoreReadRequest *)0x0) {
    (this->RequestsBySequence).Head = local_res10;
    pFVar8 = (FFileIoStoreReadRequest *)0x0;
  }
  else {
    pFVar8->Next = local_res10;
    pFVar8 = (this->RequestsBySequence).Tail;
  }
  local_res10->Previous = pFVar8;
  (this->RequestsBySequence).Tail = local_res10;
  local_res10->Next = (FFileIoStoreReadRequest *)0x0;
  this->PeekRequestIndex = -1;
  return;
}

// RemoveCancelledRequests @ 142a976e0

void __thiscall
FFileIoStoreOffsetSortedRequestQueue::RemoveCancelledRequests
          (FFileIoStoreOffsetSortedRequestQueue *this,
          TArray<FFileIoStoreReadRequest_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FFileIoStoreReadRequest **ppFVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FFileIoStoreReadRequest *pFVar4;
  code *pcVar5;
  FFileIoStoreReadRequest *pFVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  FFileIoStoreReadRequest *local_38 [2];
  
  uVar10 = (this->Requests).ArrayNum - 1;
  if (-1 < (int)uVar10) {
    lVar12 = (longlong)(int)uVar10;
    lVar11 = lVar12 * 8;
    do {
      uVar8 = 0;
      if ((int)uVar10 < (this->Requests).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_38[0] = *(FFileIoStoreReadRequest **)((this->Requests).AllocatorInstance.Data + lVar11);
      if (local_38[0]->bCancelled != false) {
        this->PeekRequestIndex = -1;
        pFVar3 = (param_1->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)local_38) &&
            ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)param_1->ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = param_1->ArrayNum;
        if (iVar9 == param_1->ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        pFVar6 = local_38[0];
        ppFVar1 = &(this->RequestsBySequence).Tail;
        param_1->ArrayNum = iVar9 + 1;
        *(FFileIoStoreReadRequest **)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8) =
             local_38[0];
        if ((this->RequestsBySequence).Head == local_38[0]) {
          if (*ppFVar1 == local_38[0]) {
            if ((local_38[0]->Next != (FFileIoStoreReadRequest *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Request->Next == nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Internal\\IoDispatcherFileBackendTypes.h"
                                   ,0x1c7,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if ((pFVar6->Previous != (FFileIoStoreReadRequest *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Request->Previous == nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Internal\\IoDispatcherFileBackendTypes.h"
                                   ,0x1c8,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            *ppFVar1 = (FFileIoStoreReadRequest *)0x0;
            (this->RequestsBySequence).Head = (FFileIoStoreReadRequest *)0x0;
          }
          else {
            if ((local_38[0]->Previous != (FFileIoStoreReadRequest *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Request->Previous == nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Internal\\IoDispatcherFileBackendTypes.h"
                                   ,0x1ce,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar4 = pFVar6->Next;
            (this->RequestsBySequence).Head = pFVar4;
            pFVar4->Previous = (FFileIoStoreReadRequest *)0x0;
LAB_142a9796e:
            pFVar6->Next = (FFileIoStoreReadRequest *)0x0;
          }
        }
        else {
          if (*ppFVar1 != local_38[0]) {
            if (((local_38[0]->Next == (FFileIoStoreReadRequest *)0x0) ||
                (local_38[0]->Previous == (FFileIoStoreReadRequest *)0x0)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Request->Next != nullptr && Request->Previous != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Internal\\IoDispatcherFileBackendTypes.h"
                                   ,0x1de,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar6->Next->Previous = pFVar6->Previous;
            pFVar6->Previous->Next = pFVar6->Next;
            pFVar6->Previous = (FFileIoStoreReadRequest *)0x0;
            goto LAB_142a9796e;
          }
          if ((local_38[0]->Next != (FFileIoStoreReadRequest *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Request->Next == nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Internal\\IoDispatcherFileBackendTypes.h"
                                 ,0x1d6,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = pFVar6->Previous;
          *ppFVar1 = pFVar4;
          pFVar4->Next = (FFileIoStoreReadRequest *)0x0;
          pFVar6->Previous = (FFileIoStoreReadRequest *)0x0;
        }
        uVar8 = 0;
        if ((int)uVar10 < (this->Requests).ArrayNum) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (this->Requests).AllocatorInstance.Data + lVar12 * 8;
        iVar9 = ~uVar10 + (this->Requests).ArrayNum;
        if (iVar9 != 0) {
          memmove(pFVar3,pFVar3 + 8,(longlong)iVar9 << 3);
        }
        piVar2 = &(this->Requests).ArrayNum;
        *piVar2 = *piVar2 + -1;
      }
      lVar12 = lVar12 + -1;
      lVar11 = lVar11 + -8;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  return;
}

// RemoveMisprioritizedRequests @ 142a97b30

TArray<FFileIoStoreReadRequest_*,TSizedDefaultAllocator<32>_> * __thiscall
FFileIoStoreOffsetSortedRequestQueue::RemoveMisprioritizedRequests
          (FFileIoStoreOffsetSortedRequestQueue *this,
          TArray<FFileIoStoreReadRequest_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FFileIoStoreReadRequest *pFVar3;
  FFileIoStoreReadRequest *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TArray<FFileIoStoreReadRequest_*,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  
  this->PeekRequestIndex = -1;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uVar12 = (this->Requests).ArrayNum - 1;
  if (-1 < (int)uVar12) {
    lVar11 = (longlong)(int)uVar12;
    lVar13 = lVar11 * 8;
    do {
      uVar7 = 0;
      if ((int)uVar12 < (this->Requests).ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArray<FFileIoStoreReadRequest_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar9;
      }
      if (*(int *)(*(longlong *)((this->Requests).AllocatorInstance.Data + lVar13) + 0x94) !=
          this->Priority) {
        uVar7 = 0;
        if ((int)uVar12 < (this->Requests).ArrayNum) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TArray<FFileIoStoreReadRequest_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar9;
        }
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        pFVar10 = (this->Requests).AllocatorInstance.Data + lVar13;
        if (((pFVar2 <= pFVar10) &&
            (pFVar10 < pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TArray<FFileIoStoreReadRequest_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar9;
        }
        iVar8 = __return_storage_ptr__->ArrayNum;
        if (iVar8 == __return_storage_ptr__->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar8 + 1;
        *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
             *(undefined8 *)pFVar10;
        uVar7 = 0;
        if ((int)uVar12 < (this->Requests).ArrayNum) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TArray<FFileIoStoreReadRequest_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar9;
        }
        pFVar3 = (this->RequestsBySequence).Tail;
        pFVar4 = *(FFileIoStoreReadRequest **)((this->Requests).AllocatorInstance.Data + lVar13);
        if ((this->RequestsBySequence).Head == pFVar4) {
          if (pFVar3 == pFVar4) {
            if ((pFVar4->Next != (FFileIoStoreReadRequest *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Request->Next == nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Internal\\IoDispatcherFileBackendTypes.h"
                                   ,0x1c7,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              pTVar9 = (TArray<FFileIoStoreReadRequest_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
              return pTVar9;
            }
            if ((pFVar4->Previous != (FFileIoStoreReadRequest *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Request->Previous == nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Internal\\IoDispatcherFileBackendTypes.h"
                                   ,0x1c8,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              pTVar9 = (TArray<FFileIoStoreReadRequest_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
              return pTVar9;
            }
            (this->RequestsBySequence).Tail = (FFileIoStoreReadRequest *)0x0;
            (this->RequestsBySequence).Head = (FFileIoStoreReadRequest *)0x0;
          }
          else {
            if ((pFVar4->Previous != (FFileIoStoreReadRequest *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Request->Previous == nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Internal\\IoDispatcherFileBackendTypes.h"
                                   ,0x1ce,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              pTVar9 = (TArray<FFileIoStoreReadRequest_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
              return pTVar9;
            }
            pFVar3 = pFVar4->Next;
            (this->RequestsBySequence).Head = pFVar3;
            pFVar3->Previous = (FFileIoStoreReadRequest *)0x0;
LAB_142a97e3f:
            pFVar4->Next = (FFileIoStoreReadRequest *)0x0;
          }
        }
        else {
          if (pFVar3 != pFVar4) {
            if (((pFVar4->Next == (FFileIoStoreReadRequest *)0x0) ||
                (pFVar4->Previous == (FFileIoStoreReadRequest *)0x0)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Request->Next != nullptr && Request->Previous != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Internal\\IoDispatcherFileBackendTypes.h"
                                   ,0x1de,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              pTVar9 = (TArray<FFileIoStoreReadRequest_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
              return pTVar9;
            }
            pFVar4->Next->Previous = pFVar4->Previous;
            pFVar4->Previous->Next = pFVar4->Next;
            pFVar4->Previous = (FFileIoStoreReadRequest *)0x0;
            goto LAB_142a97e3f;
          }
          if ((pFVar4->Next != (FFileIoStoreReadRequest *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Request->Next == nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Internal\\IoDispatcherFileBackendTypes.h"
                                 ,0x1d6,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TArray<FFileIoStoreReadRequest_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar9;
          }
          pFVar3 = pFVar4->Previous;
          (this->RequestsBySequence).Tail = pFVar3;
          pFVar3->Next = (FFileIoStoreReadRequest *)0x0;
          pFVar4->Previous = (FFileIoStoreReadRequest *)0x0;
        }
        uVar7 = 0;
        if ((int)uVar12 < (this->Requests).ArrayNum) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TArray<FFileIoStoreReadRequest_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar9;
        }
        pFVar2 = (this->Requests).AllocatorInstance.Data + lVar11 * 8;
        iVar8 = ~uVar12 + (this->Requests).ArrayNum;
        if (iVar8 != 0) {
          memmove(pFVar2,pFVar2 + 8,(longlong)iVar8 << 3);
        }
        piVar1 = &(this->Requests).ArrayNum;
        *piVar1 = *piVar1 + -1;
      }
      lVar11 = lVar11 + -1;
      lVar13 = lVar13 + -8;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
  return __return_storage_ptr__;
}

// RequestSortPredicate @ 142a999c0

bool __cdecl
FFileIoStoreOffsetSortedRequestQueue::RequestSortPredicate
          (FFileIoStoreReadRequestSortKey *param_1,FFileIoStoreReadRequestSortKey *param_2)

{
  bool bVar1;
  
  bVar1 = param_1->Handle < param_2->Handle;
  if (param_1->Handle == param_2->Handle) {
    bVar1 = param_1->Offset < param_2->Offset;
  }
  return bVar1;
}

// RequestSortProjection @ 142a999e0

FFileIoStoreReadRequestSortKey * __cdecl
FFileIoStoreOffsetSortedRequestQueue::RequestSortProjection
          (FFileIoStoreReadRequestSortKey *__return_storage_ptr__,FFileIoStoreReadRequest *param_1)

{
  ulong64 uVar1;
  
  __return_storage_ptr__->Offset = param_1->Offset;
  uVar1 = param_1->ContainerFilePartition->FileHandle;
  __return_storage_ptr__->Priority = param_1->Priority;
  __return_storage_ptr__->Handle = uVar1;
  return __return_storage_ptr__;
}

// StealRequests @ 142aa1b10

TArray<FFileIoStoreReadRequest_*,TSizedDefaultAllocator<32>_> * __thiscall
FFileIoStoreOffsetSortedRequestQueue::StealRequests
          (FFileIoStoreOffsetSortedRequestQueue *this,
          TArray<FFileIoStoreReadRequest_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  this->PeekRequestIndex = -1;
  (this->RequestsBySequence).Tail = (FFileIoStoreReadRequest *)0x0;
  (this->RequestsBySequence).Head = (FFileIoStoreReadRequest *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (this->Requests).AllocatorInstance.Data;
  (this->Requests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = (this->Requests).ArrayNum;
  __return_storage_ptr__->ArrayMax = (this->Requests).ArrayMax;
  (this->Requests).ArrayNum = 0;
  (this->Requests).ArrayMax = 0;
  return __return_storage_ptr__;
}

