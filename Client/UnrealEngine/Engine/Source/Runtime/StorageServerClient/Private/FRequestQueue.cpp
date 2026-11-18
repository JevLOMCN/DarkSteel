// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 4

// Pop @ 148cd2870

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FIoRequestImpl * __thiscall
FStorageServerIoDispatcherBackend::FRequestQueue::Pop(FRequestQueue *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FIoRequestImpl *local_res8;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->Heap).ArrayNum == 0) {
      local_res8 = (FIoRequestImpl *)0x0;
    }
    else {
      TArray<FIoRequestImpl_*,TSizedDefaultAllocator<32>_>::
      HeapPop<bool___cdecl(FIoRequestImpl_const_&,FIoRequestImpl_const_&)>
                (&this->Heap,&local_res8,QueueSortFunc,No);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return local_res8;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Push @ 148cd3310

void __thiscall
FStorageServerIoDispatcherBackend::FRequestQueue::Push(FRequestQueue *this,FIoRequestImpl *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  FIoRequestImpl *local_18 [2];
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar2 = (this->Heap).AllocatorInstance.Data;
  local_18[0] = param_1;
  if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Heap).ArrayMax * 8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = (this->Heap).ArrayNum;
  piVar1 = &(this->Heap).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
  }
  (this->Heap).ArrayNum = iVar7 + 1;
  *(FIoRequestImpl **)((this->Heap).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_18[0];
  pFVar2 = (this->Heap).AllocatorInstance.Data;
  iVar7 = (this->Heap).ArrayNum + -1;
  while (0 < iVar7) {
    lVar8 = (longlong)iVar7;
    iVar7 = (iVar7 + -1) / 2;
    lVar3 = *(longlong *)(pFVar2 + (longlong)iVar7 * 8);
    lVar4 = *(longlong *)(pFVar2 + lVar8 * 8);
    if (*(int *)(lVar4 + 0x68) == *(int *)(lVar3 + 0x68)) {
      bVar6 = *(ulonglong *)(lVar4 + 0x30) < *(ulonglong *)(lVar3 + 0x30);
    }
    else {
      bVar6 = *(int *)(lVar3 + 0x68) < *(int *)(lVar4 + 0x68);
    }
    if (!bVar6) break;
    *(longlong *)(pFVar2 + lVar8 * 8) = lVar3;
    *(longlong *)(pFVar2 + (longlong)iVar7 * 8) = lVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x000148cd344a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// QueueSortFunc @ 148cd3460

bool __cdecl
FStorageServerIoDispatcherBackend::FRequestQueue::QueueSortFunc
          (FIoRequestImpl *param_1,FIoRequestImpl *param_2)

{
  if (param_1->Priority == param_2->Priority) {
    return param_1->BackendData < param_2->BackendData;
  }
  return param_2->Priority < param_1->Priority;
}

// UpdateOrder @ 148ce3320

void __thiscall FStorageServerIoDispatcherBackend::FRequestQueue::UpdateOrder(FRequestQueue *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FIdentityFunctor local_res8;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    AlgoImpl::
    HeapifyInternal<FIoRequestImpl_*,int,FIdentityFunctor,TDereferenceWrapper<FIoRequestImpl_*,bool___cdecl(FIoRequestImpl_const_&,FIoRequestImpl_const_&)>_>
              ((FIoRequestImpl **)(this->Heap).AllocatorInstance.Data,(this->Heap).ArrayNum,
               local_res8,
               (TDereferenceWrapper<FIoRequestImpl_*,bool___cdecl(FIoRequestImpl_const_&,FIoRequestImpl_const_&)>
                )0x148cd3460);
                    /* WARNING: Could not recover jumptable at 0x000148ce3364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

