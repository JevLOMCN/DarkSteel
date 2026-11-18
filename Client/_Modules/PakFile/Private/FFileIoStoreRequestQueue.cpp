// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 13

// ~FFileIoStoreRequestQueue @ 142a56300

void __thiscall FFileIoStoreRequestQueue::~FFileIoStoreRequestQueue(FFileIoStoreRequestQueue *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->RequestPriorityCounts).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RequestPriorityCounts).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RequestPriorityCounts);
  DestructItems<FFileIoStoreOffsetSortedRequestQueue,int>
            ((FFileIoStoreOffsetSortedRequestQueue *)
             (this->SortedPriorityQueues).AllocatorInstance.Data,
             (this->SortedPriorityQueues).ArrayNum);
  pFVar2 = (this->SortedPriorityQueues).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  pFVar2 = (this->Heap).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// HandleContainerUnmounted @ 142a7a950

int __thiscall
FFileIoStoreRequestQueue::HandleContainerUnmounted
          (FFileIoStoreRequestQueue *this,FFileIoStoreContainerFile *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  FFileIoStoreReadRequest **ppFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  TArrayView<FFileIoStoreReadRequest_*,int> local_48;
  TArrayView<FFileIoStoreReadRequest_*,int> local_38;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar6 = 0;
  if (this->bSortRequestsByOffset == false) {
    pFVar1 = (this->Heap).AllocatorInstance.Data;
    iVar6 = (this->Heap).ArrayNum;
    if (iVar6 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
    }
    local_38._12_4_ = uStack_4c;
    local_38.ArrayNum = iVar6;
    local_38.DataPtr = (FFileIoStoreReadRequest **)pFVar1;
    iVar6 = ::HandleContainerUnmounted(&local_38,param_1);
  }
  else {
    iVar2 = (this->SortedPriorityQueues).ArrayNum;
    pFVar8 = (this->SortedPriorityQueues).AllocatorInstance.Data;
    pFVar1 = pFVar8 + (longlong)iVar2 * 0x28;
    while( true ) {
      if ((this->SortedPriorityQueues).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FFileIoStoreOffsetSortedRequestQueue,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar8 == pFVar1) break;
      ppFVar3 = *(FFileIoStoreReadRequest ***)(pFVar8 + 8);
      iVar7 = *(int *)(pFVar8 + 0x10);
      if (iVar7 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
      }
      local_48._12_4_ = uStack_5c;
      local_48.ArrayNum = iVar7;
      local_48.DataPtr = ppFVar3;
      iVar7 = ::HandleContainerUnmounted(&local_48,param_1);
      iVar6 = iVar6 + iVar7;
      pFVar8 = pFVar8 + 0x28;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return iVar6;
}

// Lock @ 142a83400

void __thiscall FFileIoStoreRequestQueue::Lock(FFileIoStoreRequestQueue *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142a83404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  return;
}

// Pop @ 142a8af90

FFileIoStoreReadRequest * __thiscall FFileIoStoreRequestQueue::Pop(FFileIoStoreRequestQueue *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<FFileIoStoreOffsetSortedRequestQueue,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  atomic<int> *paVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ulong64 uVar7;
  void *pvVar8;
  FScriptContainerElement *pFVar9;
  void *pvVar10;
  longlong lVar11;
  code *pcVar12;
  bool bVar13;
  int iVar14;
  FFileIoStoreReadRequest *pFVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  bool bVar21;
  undefined4 uStack_54;
  FFileIoStoreReadRequestSortKey local_48;
  
  bVar21 = -1 < CpuChannel->Enabled;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId433,"RequestQueuePop",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
               ,0x1b1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId433);
  }
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  UpdateSortRequestsByOffset(this);
  if (this->bSortRequestsByOffset == false) {
    iVar14 = (this->Heap).ArrayNum;
    if (iVar14 == 0) goto LAB_142a8b2c2;
    iVar20 = 0;
    if ((iVar14 < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar12 = (code *)swi(3);
      pFVar15 = (FFileIoStoreReadRequest *)(*pcVar12)();
      return pFVar15;
    }
    pFVar15 = *(FFileIoStoreReadRequest **)(this->Heap).AllocatorInstance.Data;
    if (((this->Heap).ArrayNum < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           ), bVar13)) {
      pcVar12 = (code *)swi(3);
      pFVar15 = (FFileIoStoreReadRequest *)(*pcVar12)();
      return pFVar15;
    }
    iVar18 = (this->Heap).ArrayNum;
    pFVar6 = (this->Heap).AllocatorInstance.Data;
    iVar14 = iVar18 + -1;
    if (1 < iVar14) {
      iVar14 = 1;
    }
    if (iVar14 != 0) {
      memmove(pFVar6,pFVar6 + (longlong)(iVar18 - iVar14) * 8,(longlong)iVar14 << 3);
    }
    pFVar6 = (this->Heap).AllocatorInstance.Data;
    iVar14 = (this->Heap).ArrayNum + -1;
    (this->Heap).ArrayNum = iVar14;
    if (1 < iVar14) {
      do {
        iVar19 = iVar20 * 2;
        iVar18 = iVar19 + 1;
        if (iVar19 + 2 < iVar14) {
          iVar4 = *(int *)(*(longlong *)(pFVar6 + (longlong)iVar19 * 8 + 0x10) + 0x94);
          iVar5 = *(int *)(*(longlong *)(pFVar6 + (longlong)iVar18 * 8) + 0x94);
          if (iVar5 == iVar4) {
            bVar13 = *(uint *)(*(longlong *)(pFVar6 + (longlong)iVar18 * 8) + 0x90) <
                     *(uint *)(*(longlong *)(pFVar6 + (longlong)iVar19 * 8 + 0x10) + 0x90);
          }
          else {
            bVar13 = iVar4 < iVar5;
          }
          if (bVar13) {
            iVar18 = iVar19;
          }
          iVar18 = iVar18 + 1;
        }
        lVar16 = *(longlong *)(pFVar6 + (longlong)iVar20 * 8);
        lVar11 = *(longlong *)(pFVar6 + (longlong)iVar18 * 8);
        if (*(int *)(lVar11 + 0x94) == *(int *)(lVar16 + 0x94)) {
          bVar13 = *(uint *)(lVar11 + 0x90) < *(uint *)(lVar16 + 0x90);
        }
        else {
          bVar13 = *(int *)(lVar16 + 0x94) < *(int *)(lVar11 + 0x94);
        }
        if (!bVar13) break;
        *(longlong *)(pFVar6 + (longlong)iVar20 * 8) = lVar11;
        *(longlong *)(pFVar6 + (longlong)iVar18 * 8) = lVar16;
        iVar20 = iVar18;
      } while (iVar18 * 2 + 1 < iVar14);
    }
  }
  else {
    iVar14 = (this->SortedPriorityQueues).ArrayNum;
    if (iVar14 == 0) {
LAB_142a8b2c2:
      pFVar15 = (FFileIoStoreReadRequest *)0x0;
      goto LAB_142a8b281;
    }
    pTVar1 = &this->SortedPriorityQueues;
    uVar17 = 0;
    if ((int)(iVar14 - 1U) < iVar14) {
      uVar17 = ~(iVar14 - 1U) >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar12 = (code *)swi(3);
      pFVar15 = (FFileIoStoreReadRequest *)(*pcVar12)();
      return pFVar15;
    }
    lVar16 = (longlong)(this->SortedPriorityQueues).ArrayNum;
    pFVar6 = (pTVar1->AllocatorInstance).Data;
    if ((*(int *)(pFVar6 + lVar16 * 0x28 + -0x18) == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("!SubQueue.IsEmpty()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                            ,0x1bd,L""), bVar13)) {
      pcVar12 = (code *)swi(3);
      pFVar15 = (FFileIoStoreReadRequest *)(*pcVar12)();
      return pFVar15;
    }
    local_48.Offset = (this->LastSortKey).Offset;
    local_48.Handle = (this->LastSortKey).Handle;
    local_48.Priority = (this->LastSortKey).Priority;
    local_48._20_4_ = *(undefined4 *)&(this->LastSortKey).field_0x14;
    pFVar15 = FFileIoStoreOffsetSortedRequestQueue::GetNextInternal
                        ((FFileIoStoreOffsetSortedRequestQueue *)(pFVar6 + lVar16 * 0x28 + -0x28),
                         &local_48,true);
    if ((pFVar15 == (FFileIoStoreReadRequest *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Result",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                            ,0x1bf,L""), bVar13)) {
      pcVar12 = (code *)swi(3);
      pFVar15 = (FFileIoStoreReadRequest *)(*pcVar12)();
      return pFVar15;
    }
    uVar7 = pFVar15->ContainerFilePartition->FileHandle;
    iVar14 = pFVar15->Priority;
    (this->LastSortKey).Offset = pFVar15->Offset;
    (this->LastSortKey).Handle = uVar7;
    *(ulonglong *)&(this->LastSortKey).Priority = CONCAT44(uStack_54,iVar14);
    if (*(int *)(pFVar6 + lVar16 * 0x28 + -0x18) == 0) {
      if (((this->SortedPriorityQueues).ArrayNum < 1) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar12 = (code *)swi(3);
        pFVar15 = (FFileIoStoreReadRequest *)(*pcVar12)();
        return pFVar15;
      }
      lVar16 = (longlong)(this->SortedPriorityQueues).ArrayNum;
      pFVar6 = (pTVar1->AllocatorInstance).Data;
      pvVar8 = *(void **)(pFVar6 + lVar16 * 0x28 + -0x20);
      *(undefined8 *)(pFVar6 + lVar16 * 0x28 + -0x20) = 0;
      *(undefined8 *)(pFVar6 + lVar16 * 0x28 + -0x18) = 0;
      *(undefined8 *)(pFVar6 + lVar16 * 0x28 + -8) = 0;
      *(undefined8 *)(pFVar6 + lVar16 * 0x28 + -0x10) = 0;
      iVar14 = (this->SortedPriorityQueues).ArrayNum;
      pFVar9 = (pTVar1->AllocatorInstance).Data;
      pFVar6 = pFVar9 + (longlong)iVar14 * 0x28;
      pvVar10 = *(void **)(pFVar9 + (longlong)iVar14 * 0x28 + -0x20);
      if (pvVar10 != (void *)0x0) {
        FMemory::Free(pvVar10);
      }
      iVar14 = (this->SortedPriorityQueues).ArrayNum - iVar14;
      if (iVar14 != 0) {
        memmove(pFVar6 + -0x28,pFVar6,(longlong)iVar14 * 0x28);
      }
      piVar2 = &(this->SortedPriorityQueues).ArrayNum;
      *piVar2 = *piVar2 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,&pTVar1->AllocatorInstance,(this->SortedPriorityQueues).ArrayNum,
                 &(this->SortedPriorityQueues).ArrayMax);
      if (pvVar8 != (void *)0x0) {
        FMemory::Free(pvVar8);
      }
    }
  }
  if ((pFVar15->QueueStatus != QueueStatus_InQueue) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Result->QueueStatus == FFileIoStoreReadRequest::QueueStatus_InQueue",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                          ,0x1d3,L""), bVar13)) {
    pcVar12 = (code *)swi(3);
    pFVar15 = (FFileIoStoreReadRequest *)(*pcVar12)();
    return pFVar15;
  }
  pFVar15->QueueStatus = QueueStatus_Started;
  LOCK();
  paVar3 = &pFVar15->ContainerFilePartition->StartedReadRequestsCount;
  *paVar3 = (atomic<int>)((int)*paVar3 + 1);
  UNLOCK();
LAB_142a8b281:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pFVar15;
}

// PopCancelled @ 142a8b450

void __thiscall
FFileIoStoreRequestQueue::PopCancelled
          (FFileIoStoreRequestQueue *this,
          TArray<FFileIoStoreReadRequest_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FFileIoStoreOffsetSortedRequestQueue *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  uint uVar11;
  FFileIoStoreOffsetSortedRequestQueue *this_00;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  bool bVar16;
  FIdentityFunctor local_res8 [8];
  TArray<FFileIoStoreReadRequest_*,TSizedDefaultAllocator<32>_> *local_res10;
  undefined1 local_res18 [8];
  longlong local_48 [2];
  
  bVar16 = -1 < CpuChannel->Enabled;
  local_res10 = param_1;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId475,"RequestQueuePopCancelled",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
               ,0x1db);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId475);
  }
  if (&this->CriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  UpdateSortRequestsByOffset(this);
  if (this->bSortRequestsByOffset == false) {
    uVar11 = (this->Heap).ArrayNum - 1;
    if (-1 < (int)uVar11) {
      lVar12 = (longlong)(int)uVar11;
      lVar8 = lVar12 * 8;
      do {
        uVar6 = 0;
        if ((int)uVar11 < (this->Heap).ArrayNum) {
          uVar6 = ~uVar11 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_48[0] = *(longlong *)((this->Heap).AllocatorInstance.Data + lVar8);
        if (*(char *)(local_48[0] + 0xc6) != '\0') {
          pFVar3 = (param_1->AllocatorInstance).Data;
          if (((pFVar3 <= (FScriptContainerElement *)local_48) &&
              ((FScriptContainerElement *)local_48 < pFVar3 + (longlong)param_1->ArrayMax * 8)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar7 = param_1->ArrayNum;
          if (iVar7 == param_1->ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          param_1->ArrayNum = iVar7 + 1;
          *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_48[0];
          uVar6 = 0;
          if ((int)uVar11 < (this->Heap).ArrayNum) {
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
          pFVar3 = (this->Heap).AllocatorInstance.Data + lVar12 * 8;
          iVar7 = ~uVar11 + (this->Heap).ArrayNum;
          if (iVar7 != 0) {
            memmove(pFVar3,pFVar3 + 8,(longlong)iVar7 << 3);
          }
          piVar15 = &(this->Heap).ArrayNum;
          *piVar15 = *piVar15 + -1;
        }
        lVar12 = lVar12 + -1;
        lVar8 = lVar8 + -8;
        uVar11 = uVar11 - 1;
      } while (-1 < (int)uVar11);
    }
    piVar15 = &param_1->ArrayNum;
    if (param_1->ArrayNum != 0) {
      AlgoImpl::
      HeapifyInternal<FFileIoStoreReadRequest_*,int,FIdentityFunctor,TDereferenceWrapper<FFileIoStoreReadRequest_*,bool___cdecl(FFileIoStoreReadRequest_const_&,FFileIoStoreReadRequest_const_&)>_>
                ((FFileIoStoreReadRequest **)(this->Heap).AllocatorInstance.Data,
                 (this->Heap).ArrayNum,local_res8[0],
                 (TDereferenceWrapper<FFileIoStoreReadRequest_*,bool___cdecl(FFileIoStoreReadRequest_const_&,FFileIoStoreReadRequest_const_&)>
                  )0x142a8f2c0);
    }
  }
  else {
    iVar7 = (this->SortedPriorityQueues).ArrayNum;
    this_00 = (FFileIoStoreOffsetSortedRequestQueue *)
              (this->SortedPriorityQueues).AllocatorInstance.Data;
    pFVar2 = this_00 + iVar7;
    while( true ) {
      if ((this->SortedPriorityQueues).ArrayNum != iVar7) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FFileIoStoreOffsetSortedRequestQueue,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (this_00 == pFVar2) break;
      FFileIoStoreOffsetSortedRequestQueue::RemoveCancelledRequests(this_00,param_1);
      this_00 = this_00 + 1;
    }
    iVar7 = (this->SortedPriorityQueues).ArrayNum;
    lVar8 = (longlong)iVar7;
    if (iVar7 != 0) {
      pFVar3 = (this->SortedPriorityQueues).AllocatorInstance.Data;
      iVar13 = 0;
      local_res8[0] = (FIdentityFunctor)(*(int *)(pFVar3 + 0x10) != 0);
      lVar12 = 0;
      iVar7 = 0;
      do {
        lVar12 = lVar12 + 1;
        iVar10 = iVar7 + 1;
        if (lVar12 < lVar8) {
          pFVar9 = pFVar3 + (lVar12 * 5 + 2) * 8;
          do {
            if (local_res8[0] != (FIdentityFunctor)(*(int *)pFVar9 != 0)) break;
            iVar10 = iVar10 + 1;
            lVar12 = lVar12 + 1;
            pFVar9 = pFVar9 + 0x28;
          } while (lVar12 < lVar8);
        }
        iVar14 = iVar10 - iVar7;
        if (local_res8[0] == (FIdentityFunctor)0x0) {
          DestructItems<FFileIoStoreOffsetSortedRequestQueue,int>
                    ((FFileIoStoreOffsetSortedRequestQueue *)(pFVar3 + (longlong)iVar7 * 0x28),
                     iVar14);
        }
        else {
          if (iVar13 != iVar7) {
            memmove(pFVar3 + (longlong)iVar13 * 0x28,pFVar3 + (longlong)iVar7 * 0x28,
                    (longlong)iVar14 * 0x28);
          }
          iVar13 = iVar13 + iVar14;
        }
        local_res8[0] = (FIdentityFunctor)((byte)local_res8[0] ^ 1);
        iVar7 = iVar10;
      } while (lVar12 < lVar8);
      (this->SortedPriorityQueues).ArrayNum = iVar13;
      param_1 = local_res10;
    }
    piVar15 = &param_1->ArrayNum;
  }
  pFVar9 = (param_1->AllocatorInstance).Data;
  iVar7 = *piVar15;
  pFVar3 = pFVar9 + (longlong)iVar7 * 8;
  while( true ) {
    if (*piVar15 != iVar7) {
      local_res8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<FFileIoStoreReadRequest_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar3) break;
    lVar8 = *(longlong *)pFVar9;
    if ((*(char *)(lVar8 + 0xc6) == '\0') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Request->bCancelled",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                           ,0x1fd,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(undefined4 *)(lVar8 + 200) = 2;
    LOCK();
    piVar1 = (int *)(*(longlong *)(lVar8 + 0x10) + 0x30);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    pFVar9 = pFVar9 + 8;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Push @ 142a8e790

void __thiscall
FFileIoStoreRequestQueue::Push(FFileIoStoreRequestQueue *this,FFileIoStoreReadRequest *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  FFileIoStoreReadRequest *local_res8;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId533,"RequestQueuePush",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
               ,0x215);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId533);
  }
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  UpdateSortRequestsByOffset(this);
  if ((param_1->QueueStatus != QueueStatus_NotInQueue) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Request.QueueStatus == FFileIoStoreReadRequest::QueueStatus_NotInQueue",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                         ,0x219,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  param_1->QueueStatus = QueueStatus_InQueue;
  if (this->bSortRequestsByOffset == false) {
    local_res8 = param_1;
    TArray<FFileIoStoreReadRequest_*,TSizedDefaultAllocator<32>_>::
    HeapPush<bool___cdecl(FFileIoStoreReadRequest_const_&,FFileIoStoreReadRequest_const_&)>
              (&this->Heap,&local_res8,QueueSortFunc);
  }
  else {
    PushToPriorityQueues(this,param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Push @ 142a8e8b0

void __thiscall
FFileIoStoreRequestQueue::Push(FFileIoStoreRequestQueue *this,FFileIoStoreReadRequestList *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  longlong lVar4;
  FFileIoStoreReadRequest *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  FFileIoStoreReadRequest *pFVar10;
  FFileIoStoreReadRequest *pFVar11;
  bool bVar12;
  FFileIoStoreReadRequest *local_38 [2];
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId552,"RequestQueuePush",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
               ,0x228);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId552);
  }
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  UpdateSortRequestsByOffset(this);
  pFVar10 = param_1->Head;
  param_1->Tail = (FFileIoStoreReadRequest *)0x0;
  param_1->Head = (FFileIoStoreReadRequest *)0x0;
  if (pFVar10 == (FFileIoStoreReadRequest *)0x0) {
LAB_142a8ead7:
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (bVar12) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return;
  }
  pFVar11 = pFVar10->Next;
  pFVar10->Next = (FFileIoStoreReadRequest *)0x0;
  do {
    if ((pFVar10->QueueStatus != QueueStatus_NotInQueue) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("It->QueueStatus == FFileIoStoreReadRequest::QueueStatus_NotInQueue",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                           ,0x22e,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar10->QueueStatus = QueueStatus_InQueue;
    if (this->bSortRequestsByOffset == false) {
      pFVar2 = (this->Heap).AllocatorInstance.Data;
      local_38[0] = pFVar10;
      if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)(this->Heap).ArrayMax * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar8 = (this->Heap).ArrayNum;
      piVar1 = &(this->Heap).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->Heap).AllocatorInstance,piVar1);
      }
      (this->Heap).ArrayNum = iVar8 + 1;
      *(FFileIoStoreReadRequest **)((this->Heap).AllocatorInstance.Data + (longlong)iVar8 * 8) =
           local_38[0];
      pFVar2 = (this->Heap).AllocatorInstance.Data;
      iVar8 = (this->Heap).ArrayNum + -1;
      while (0 < iVar8) {
        lVar9 = (longlong)iVar8;
        iVar8 = (iVar8 + -1) / 2;
        lVar3 = *(longlong *)(pFVar2 + (longlong)iVar8 * 8);
        lVar4 = *(longlong *)(pFVar2 + lVar9 * 8);
        if (*(int *)(lVar4 + 0x94) == *(int *)(lVar3 + 0x94)) {
          bVar7 = *(uint *)(lVar4 + 0x90) < *(uint *)(lVar3 + 0x90);
        }
        else {
          bVar7 = *(int *)(lVar3 + 0x94) < *(int *)(lVar4 + 0x94);
        }
        if (!bVar7) break;
        *(longlong *)(pFVar2 + lVar9 * 8) = lVar3;
        *(longlong *)(pFVar2 + (longlong)iVar8 * 8) = lVar4;
      }
    }
    else {
      PushToPriorityQueues(this,pFVar10);
    }
    if (pFVar11 == (FFileIoStoreReadRequest *)0x0) goto LAB_142a8ead7;
    pFVar5 = pFVar11->Next;
    pFVar11->Next = (FFileIoStoreReadRequest *)0x0;
    pFVar10 = pFVar11;
    pFVar11 = pFVar5;
  } while( true );
}

// PushToPriorityQueues @ 142a8eb10

/* WARNING: Removing unreachable block (ram,0x000142a8ed20) */

void __thiscall
FFileIoStoreRequestQueue::PushToPriorityQueues
          (FFileIoStoreRequestQueue *this,FFileIoStoreReadRequest *param_1)

{
  int *piVar1;
  FFileIoStoreOffsetSortedRequestQueue *this_00;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  int local_48;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar9 = (this->SortedPriorityQueues).ArrayNum;
  uVar10 = 0;
  pFVar8 = (this->SortedPriorityQueues).AllocatorInstance.Data;
  iVar6 = param_1->Priority;
  uVar5 = uVar9;
  if ((int)uVar9 < 1) {
LAB_142a8eb7b:
    uVar11 = (uint)uVar10;
    if ((int)uVar11 < (this->SortedPriorityQueues).ArrayNum) {
      uVar5 = 0;
      if ((int)uVar11 < (int)uVar9) {
        uVar5 = ~uVar11 >> 0x1f;
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
      pFVar8 = (this->SortedPriorityQueues).AllocatorInstance.Data;
      iVar6 = param_1->Priority;
      if (*(int *)(pFVar8 + uVar10 * 0x28) == iVar6) goto LAB_142a8ed25;
    }
  }
  else {
    do {
      uVar12 = uVar5 >> 1;
      iVar7 = uVar12 + (int)uVar10;
      if (*(int *)(pFVar8 + (longlong)iVar7 * 0x28) < iVar6) {
        uVar10 = (ulonglong)(iVar7 + (uVar5 & 1));
      }
      uVar11 = (uint)uVar10;
      uVar5 = uVar12;
    } while (uVar12 != 0);
    if (-1 < (int)uVar11) goto LAB_142a8eb7b;
  }
  local_44 = -1;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_48 = iVar6;
  if (((pFVar8 <= (FScriptContainerElement *)&local_48) &&
      ((FScriptContainerElement *)&local_48 <
       pFVar8 + (longlong)(this->SortedPriorityQueues).ArrayMax * 0x28)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar6 = (this->SortedPriorityQueues).ArrayNum;
  piVar1 = &(this->SortedPriorityQueues).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&(this->SortedPriorityQueues).AllocatorInstance,piVar1);
  }
  (this->SortedPriorityQueues).ArrayNum = iVar6 + 1;
  pFVar8 = (this->SortedPriorityQueues).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x28;
  memmove(pFVar8 + 0x28,pFVar8,(longlong)(int)(iVar6 - uVar11) * 0x28);
  pFVar8 = (this->SortedPriorityQueues).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x28;
  *(int *)pFVar8 = local_48;
  *(int *)(pFVar8 + 4) = local_44;
  *(undefined8 *)(pFVar8 + 8) = 0;
  *(undefined8 *)(pFVar8 + 8) = local_40;
  local_40 = 0;
  *(int *)(pFVar8 + 0x10) = (int)local_38;
  *(int *)(pFVar8 + 0x14) = local_38._4_4_;
  local_38 = 0;
  *(undefined8 *)(pFVar8 + 0x18) = 0;
  *(undefined8 *)(pFVar8 + 0x20) = 0;
  *(undefined8 *)(pFVar8 + 0x18) = local_30;
  *(undefined8 *)(pFVar8 + 0x20) = uStack_28;
  uStack_28 = 0;
  local_30 = 0;
LAB_142a8ed25:
  iVar6 = (this->SortedPriorityQueues).ArrayNum;
  pFVar8 = (this->SortedPriorityQueues).AllocatorInstance.Data;
  pFVar3 = pFVar8;
  if (iVar6 != 0) {
    while (iVar6 = iVar6 + -1, iVar6 != 0) {
      if (*(int *)(pFVar3 + 0x28) < *(int *)pFVar8) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Algo::IsSortedBy(SortedPriorityQueues, QueuePriorityProjection, TLess<int32>())"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                           ,0x20d,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        break;
      }
      pFVar8 = pFVar8 + 0x28;
      pFVar3 = pFVar3 + 0x28;
    }
  }
  uVar9 = 0;
  if ((int)uVar11 < (this->SortedPriorityQueues).ArrayNum) {
    uVar9 = ~uVar11 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = (FFileIoStoreOffsetSortedRequestQueue *)
            ((this->SortedPriorityQueues).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x28);
  if ((this_00->Priority != param_1->Priority) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Queue.GetPriority() == Request->Priority",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                         ,0x20f,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FFileIoStoreOffsetSortedRequestQueue::Push(this_00,param_1);
  return;
}

// QueuePriorityProjection @ 142a8ee40

int __cdecl
FFileIoStoreRequestQueue::QueuePriorityProjection(FFileIoStoreOffsetSortedRequestQueue *param_1)

{
  return param_1->Priority;
}

// QueueSortFunc @ 142a8f2c0

bool __cdecl
FFileIoStoreRequestQueue::QueueSortFunc
          (FFileIoStoreReadRequest *param_1,FFileIoStoreReadRequest *param_2)

{
  if (param_1->Priority == param_2->Priority) {
    return param_1->Sequence < param_2->Sequence;
  }
  return param_2->Priority < param_1->Priority;
}

// Unlock @ 142aa8330

void __thiscall FFileIoStoreRequestQueue::Unlock(FFileIoStoreRequestQueue *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142aa8334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  return;
}

// UpdateOrder @ 142aab030

void __thiscall FFileIoStoreRequestQueue::UpdateOrder(FFileIoStoreRequestQueue *this)

{
  FFileIoStoreOffsetSortedRequestQueue *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar6;
  int iVar7;
  longlong lVar8;
  FFileIoStoreOffsetSortedRequestQueue *this_00;
  longlong lVar9;
  ForAnyElementType FVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  FFileIoStoreRequestQueue *local_res8;
  undefined1 local_res10 [8];
  ForAnyElementType local_58;
  undefined8 local_50;
  TArray<FFileIoStoreReadRequest_*,TSizedDefaultAllocator<32>_> local_48;
  
  bVar12 = -1 < CpuChannel->Enabled;
  local_res8 = this;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId574,"RequestQueueUpdateOrder",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
               ,0x23e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId574);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)&this->CriticalSection;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  UpdateSortRequestsByOffset(this);
  if (this->bSortRequestsByOffset == false) {
    AlgoImpl::
    HeapifyInternal<FFileIoStoreReadRequest_*,int,FIdentityFunctor,TDereferenceWrapper<FFileIoStoreReadRequest_*,bool___cdecl(FFileIoStoreReadRequest_const_&,FFileIoStoreReadRequest_const_&)>_>
              ((FFileIoStoreReadRequest **)(this->Heap).AllocatorInstance.Data,(this->Heap).ArrayNum
               ,(FIdentityFunctor)local_res8._0_1_,
               (TDereferenceWrapper<FFileIoStoreReadRequest_*,bool___cdecl(FFileIoStoreReadRequest_const_&,FFileIoStoreReadRequest_const_&)>
                )0x142a8f2c0);
  }
  else {
    this_00 = (FFileIoStoreOffsetSortedRequestQueue *)
              (this->SortedPriorityQueues).AllocatorInstance.Data;
    iVar6 = (this->SortedPriorityQueues).ArrayNum;
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50 = 0;
    pFVar1 = this_00 + iVar6;
    while( true ) {
      if ((this->SortedPriorityQueues).ArrayNum != iVar6) {
        `TCheckedPointerIterator<FFileIoStoreOffsetSortedRequestQueue,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (this_00 == pFVar1) break;
      FFileIoStoreOffsetSortedRequestQueue::RemoveMisprioritizedRequests(this_00,&local_48);
      lVar8 = (longlong)local_48.ArrayNum;
      if (local_48.ArrayNum != 0) {
        iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,local_48.ArrayNum,&local_58,(int *)&local_50,
                           (int *)((longlong)&local_50 + 4));
        memcpy(local_58.Data + (longlong)iVar3 * 8,local_48.AllocatorInstance.Data,lVar8 << 3);
      }
      if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      this_00 = this_00 + 1;
    }
    iVar6 = (this->SortedPriorityQueues).ArrayNum;
    lVar8 = (longlong)iVar6;
    if (iVar6 != 0) {
      pFVar2 = (this->SortedPriorityQueues).AllocatorInstance.Data;
      iVar3 = 0;
      bVar13 = *(int *)(pFVar2 + 0x10) != 0;
      lVar9 = 0;
      iVar6 = 0;
      do {
        lVar9 = lVar9 + 1;
        iVar7 = iVar6 + 1;
        if (lVar9 < lVar8) {
          pFVar4 = pFVar2 + lVar9 * 0x28 + 0x10;
          do {
            if (bVar13 != (*(int *)pFVar4 != 0)) break;
            iVar7 = iVar7 + 1;
            lVar9 = lVar9 + 1;
            pFVar4 = pFVar4 + 0x28;
          } while (lVar9 < lVar8);
        }
        iVar11 = iVar7 - iVar6;
        if (bVar13 == false) {
          DestructItems<FFileIoStoreOffsetSortedRequestQueue,int>
                    ((FFileIoStoreOffsetSortedRequestQueue *)(pFVar2 + (longlong)iVar6 * 0x28),
                     iVar11);
        }
        else {
          if (iVar3 != iVar6) {
            memmove(pFVar2 + (longlong)iVar3 * 0x28,pFVar2 + (longlong)iVar6 * 0x28,
                    (longlong)iVar11 * 0x28);
          }
          iVar3 = iVar3 + iVar11;
        }
        bVar13 = (bool)(bVar13 ^ 1);
        iVar6 = iVar7;
      } while (lVar9 < lVar8);
      (local_res8->SortedPriorityQueues).ArrayNum = iVar3;
      lpCriticalSection = (LPCRITICAL_SECTION)&local_res8->CriticalSection;
      this = local_res8;
    }
    AlgoImpl::
    IntroSortInternal<FFileIoStoreReadRequest_*,int,_FFileIoStoreRequestQueue::UpdateOrder_::__l5::<lambda_2>,TLess<void>_>
              ((FFileIoStoreReadRequest **)local_58.Data,(int)local_50,local_res8._0_1_,
               (TLess<void>)local_res8._0_1_);
    iVar6 = (int)local_50;
    uVar5 = (ulonglong)(int)local_50;
    pFVar2 = local_58.Data + uVar5 * 8;
    FVar10.Data = local_58.Data;
    while( true ) {
      if ((int)uVar5 != iVar6) {
        `TCheckedPointerIterator<FFileIoStoreReadRequest_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (FVar10.Data == pFVar2) break;
      PushToPriorityQueues(this,*(FFileIoStoreReadRequest **)FVar10.Data);
      uVar5 = local_50 & 0xffffffff;
      FVar10.Data = FVar10.Data + 8;
    }
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UpdateSortRequestsByOffset @ 142aab500

void __thiscall FFileIoStoreRequestQueue::UpdateSortRequestsByOffset(FFileIoStoreRequestQueue *this)

{
  int *piVar1;
  TArray<FFileIoStoreOffsetSortedRequestQueue,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  void *_Src;
  code *pcVar5;
  FFileIoStoreRequestQueue *this_00;
  int iVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  ForAnyElementType FVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  bool bVar12;
  FFileIoStoreRequestQueue *local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_58;
  undefined8 local_50;
  
  bVar12 = GIoDispatcherSortRequestsByOffset != 0;
  if (this->bSortRequestsByOffset != bVar12) {
    this->bSortRequestsByOffset = bVar12;
    local_res8 = this;
    if (bVar12) {
      pFVar10 = (this->Heap).AllocatorInstance.Data;
      iVar3 = (this->Heap).ArrayNum;
      pFVar8 = pFVar10 + (longlong)iVar3 * 8;
      while( true ) {
        if ((this->Heap).ArrayNum != iVar3) {
          `TCheckedPointerIterator<FFileIoStoreReadRequest_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res20);
        }
        if (pFVar10 == pFVar8) break;
        Push(this,*(FFileIoStoreReadRequest **)pFVar10);
        pFVar10 = pFVar10 + 8;
      }
      piVar1 = &(this->Heap).ArrayMax;
      (this->Heap).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(this->Heap).AllocatorInstance,0,piVar1);
      }
    }
    else {
      pTVar2 = &this->SortedPriorityQueues;
      iVar3 = (this->SortedPriorityQueues).ArrayNum;
      pFVar11 = (pTVar2->AllocatorInstance).Data;
      local_58.Data = (FScriptContainerElement *)0x0;
      local_50 = 0;
      pFVar8 = pFVar11 + 0x10;
      pFVar10 = pFVar11 + (longlong)iVar3 * 0x28;
      while( true ) {
        if ((this->SortedPriorityQueues).ArrayNum != iVar3) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FFileIoStoreOffsetSortedRequestQueue,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if (pFVar11 == pFVar10) break;
        *(undefined8 *)(pFVar8 + 0x10) = 0;
        *(undefined8 *)(pFVar8 + 8) = 0;
        *(int *)(pFVar8 + -0xc) = -1;
        _Src = *(void **)(pFVar8 + -8);
        *(undefined8 *)(pFVar8 + -8) = 0;
        iVar4 = *(int *)pFVar8;
        *(undefined8 *)pFVar8 = 0;
        if (iVar4 != 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,8,iVar4,&local_58,(int *)&local_50,(int *)((longlong)&local_50 + 4));
          memmove(local_58.Data + (longlong)iVar6 * 8,_Src,(longlong)iVar4 << 3);
        }
        if (_Src != (void *)0x0) {
          FMemory::Free(_Src);
        }
        pFVar11 = pFVar11 + 0x28;
        pFVar8 = pFVar8 + 0x28;
      }
      AlgoImpl::
      IntroSortInternal<FFileIoStoreReadRequest_*,int,_FFileIoStoreRequestQueue::UpdateSortRequestsByOffset_::__l14::<lambda_1>,TLess<void>_>
                ((FFileIoStoreReadRequest **)local_58.Data,(int)local_50,local_res8._0_1_,
                 (TLess<void>)local_res8._0_1_);
      this_00 = local_res8;
      iVar3 = (int)local_50;
      uVar7 = (ulonglong)(int)local_50;
      pFVar8 = local_58.Data + uVar7 * 8;
      FVar9.Data = local_58.Data;
      while( true ) {
        if ((int)uVar7 != iVar3) {
          local_res8 = (FFileIoStoreRequestQueue *)((ulonglong)local_res8 & 0xffffffffffffff00);
          `TCheckedPointerIterator<FFileIoStoreReadRequest_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res8);
        }
        if (FVar9.Data == pFVar8) break;
        Push(this_00,*(FFileIoStoreReadRequest **)FVar9.Data);
        uVar7 = local_50 & 0xffffffff;
        FVar9.Data = FVar9.Data + 8;
      }
      iVar3 = (this->SortedPriorityQueues).ArrayNum;
      pFVar10 = (pTVar2->AllocatorInstance).Data;
      pFVar8 = pFVar10 + (longlong)iVar3 * 0x28;
      while( true ) {
        if ((this->SortedPriorityQueues).ArrayNum != iVar3) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FFileIoStoreOffsetSortedRequestQueue_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_res18);
        }
        if (pFVar10 == pFVar8) goto LAB_142aab760;
        if (*(int *)(pFVar10 + 0x10) != 0) break;
        pFVar10 = pFVar10 + 0x28;
      }
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Algo::AllOf(SortedPriorityQueues, [](const FFileIoStoreOffsetSortedRequestQueue& Q) { return Q.IsEmpty(); })"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                          ,0x1aa,L"");
      if (bVar12) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
LAB_142aab760:
      DestructItems<FFileIoStoreOffsetSortedRequestQueue,int>
                ((FFileIoStoreOffsetSortedRequestQueue *)(pTVar2->AllocatorInstance).Data,
                 (this->SortedPriorityQueues).ArrayNum);
      piVar1 = &(this->SortedPriorityQueues).ArrayMax;
      (this->SortedPriorityQueues).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,&pTVar2->AllocatorInstance,0,piVar1);
      }
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
    }
  }
  return;
}

