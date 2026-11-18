// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 6

// ~TDeleter @ 14ea98020

void __thiscall
TMediaObjectPool<FWmfMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWmfMediaAudioSample>_>::
TDeleter::~TDeleter(TDeleter *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->StoragePtr).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00014ea98040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      return;
    }
  }
  return;
}

// ~TDeleter @ 14ea98050

void __thiscall
TMediaObjectPool<FWmfMediaHardwareVideoDecodingTextureSample,TMediaPoolDefaultObjectAllocator<FWmfMediaHardwareVideoDecodingTextureSample>_>
::TDeleter::~TDeleter(TDeleter *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->StoragePtr).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00014ea98070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      return;
    }
  }
  return;
}

// ~TDeleter @ 14ea98080

void __thiscall
TMediaObjectPool<FWmfMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWmfMediaTextureSample>_>::
TDeleter::~TDeleter(TDeleter *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->StoragePtr).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00014ea980a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      return;
    }
  }
  return;
}

// operator() @ 14ea99260

void __thiscall
TMediaObjectPool<FWmfMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWmfMediaAudioSample>_>::
TDeleter::operator()(TDeleter *this,FWmfMediaAudioSample *param_1)

{
  TArray<FWmfMediaAudioSample_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  TNode *pTVar4;
  code *pcVar5;
  atomic<int> aVar6;
  TStorage *lpCriticalSection;
  TReferenceControllerBase<1> *pTVar7;
  char cVar8;
  atomic<int> aVar9;
  int iVar10;
  TNode *pTVar11;
  bool bVar12;
  FWmfMediaAudioSample *local_28;
  TStorage *local_20;
  TReferenceControllerBase<1> *local_18;
  
  local_20 = (TStorage *)0x0;
  local_18 = (this->StoragePtr).WeakReferenceCount.ReferenceController;
  if (local_18 != (TReferenceControllerBase<1> *)0x0) {
    aVar6 = local_18->SharedReferenceCount;
    do {
      if (aVar6 == (atomic<int>)0x0) {
        local_18 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ea992b5;
      }
      LOCK();
      aVar9 = local_18->SharedReferenceCount;
      bVar12 = aVar6 == aVar9;
      if (bVar12) {
        local_18->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar9 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar9;
    } while (!bVar12);
    if (local_18 != (TReferenceControllerBase<1> *)0x0) {
      local_20 = (this->StoragePtr).Object;
    }
  }
LAB_14ea992b5:
  pTVar7 = local_18;
  lpCriticalSection = local_20;
  if (local_20 == (TStorage *)0x0) {
    if (param_1 != (FWmfMediaAudioSample *)0x0) {
      (**(code **)(param_1->_padding_ + 0x40))(param_1,1);
    }
  }
  else {
    if ((local_20 == (TStorage *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_28 = param_1;
    if (param_1 != (FWmfMediaAudioSample *)0x0) {
      if (lpCriticalSection == (TStorage *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      cVar8 = (**(code **)(local_28->_padding_ + 0x10))();
      if (cVar8 == '\0') {
        pTVar11 = ::operator_new(0x10);
        if (pTVar11 != (TNode *)0x0) {
          pTVar11->NextNode = (TNode *)0x0;
          pTVar11->Item = local_28;
          pTVar4 = (lpCriticalSection->WaitReadyForReuse).Head;
          (lpCriticalSection->WaitReadyForReuse).Head = pTVar11;
          pTVar4->NextNode = pTVar11;
        }
      }
      else {
        (**(code **)(local_28->_padding_ + 8))();
        pTVar1 = &lpCriticalSection->Pool;
        pFVar3 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_28) &&
            ((FScriptContainerElement *)&local_28 <
             pFVar3 + (longlong)(lpCriticalSection->Pool).ArrayMax * 8)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        piVar2 = &(lpCriticalSection->Pool).ArrayMax;
        iVar10 = (lpCriticalSection->Pool).ArrayNum;
        if (iVar10 == *piVar2) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar1->AllocatorInstance,piVar2);
        }
        (lpCriticalSection->Pool).ArrayNum = iVar10 + 1;
        *(FWmfMediaAudioSample **)((pTVar1->AllocatorInstance).Data + (longlong)iVar10 * 8) =
             local_28;
      }
      if (lpCriticalSection != (TStorage *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// operator() @ 14ea99480

void __thiscall
TMediaObjectPool<FWmfMediaHardwareVideoDecodingTextureSample,TMediaPoolDefaultObjectAllocator<FWmfMediaHardwareVideoDecodingTextureSample>_>
::TDeleter::operator()(TDeleter *this,FWmfMediaHardwareVideoDecodingTextureSample *param_1)

{
  TArray<FWmfMediaHardwareVideoDecodingTextureSample_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  TNode *pTVar4;
  code *pcVar5;
  atomic<int> aVar6;
  TStorage *lpCriticalSection;
  TReferenceControllerBase<1> *pTVar7;
  char cVar8;
  atomic<int> aVar9;
  int iVar10;
  TNode *pTVar11;
  bool bVar12;
  FWmfMediaHardwareVideoDecodingTextureSample *local_28;
  TStorage *local_20;
  TReferenceControllerBase<1> *local_18;
  
  local_20 = (TStorage *)0x0;
  local_18 = (this->StoragePtr).WeakReferenceCount.ReferenceController;
  if (local_18 != (TReferenceControllerBase<1> *)0x0) {
    aVar6 = local_18->SharedReferenceCount;
    do {
      if (aVar6 == (atomic<int>)0x0) {
        local_18 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ea994d5;
      }
      LOCK();
      aVar9 = local_18->SharedReferenceCount;
      bVar12 = aVar6 == aVar9;
      if (bVar12) {
        local_18->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar9 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar9;
    } while (!bVar12);
    if (local_18 != (TReferenceControllerBase<1> *)0x0) {
      local_20 = (this->StoragePtr).Object;
    }
  }
LAB_14ea994d5:
  pTVar7 = local_18;
  lpCriticalSection = local_20;
  if (local_20 == (TStorage *)0x0) {
    if (param_1 != (FWmfMediaHardwareVideoDecodingTextureSample *)0x0) {
      (**(code **)(param_1->_padding_ + 0x138))(param_1,1);
    }
  }
  else {
    if ((local_20 == (TStorage *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_28 = param_1;
    if (param_1 != (FWmfMediaHardwareVideoDecodingTextureSample *)0x0) {
      if (lpCriticalSection == (TStorage *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      cVar8 = (**(code **)(local_28->_padding_ + 0x10))();
      if (cVar8 == '\0') {
        pTVar11 = ::operator_new(0x10);
        if (pTVar11 != (TNode *)0x0) {
          pTVar11->NextNode = (TNode *)0x0;
          pTVar11->Item = local_28;
          pTVar4 = (lpCriticalSection->WaitReadyForReuse).Head;
          (lpCriticalSection->WaitReadyForReuse).Head = pTVar11;
          pTVar4->NextNode = pTVar11;
        }
      }
      else {
        (**(code **)(local_28->_padding_ + 8))();
        pTVar1 = &lpCriticalSection->Pool;
        pFVar3 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_28) &&
            ((FScriptContainerElement *)&local_28 <
             pFVar3 + (longlong)(lpCriticalSection->Pool).ArrayMax * 8)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        piVar2 = &(lpCriticalSection->Pool).ArrayMax;
        iVar10 = (lpCriticalSection->Pool).ArrayNum;
        if (iVar10 == *piVar2) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar1->AllocatorInstance,piVar2);
        }
        (lpCriticalSection->Pool).ArrayNum = iVar10 + 1;
        *(FWmfMediaHardwareVideoDecodingTextureSample **)
         ((pTVar1->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_28;
      }
      if (lpCriticalSection != (TStorage *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// operator() @ 14ea996a0

void __thiscall
TMediaObjectPool<FWmfMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWmfMediaTextureSample>_>::
TDeleter::operator()(TDeleter *this,FWmfMediaTextureSample *param_1)

{
  TArray<FWmfMediaTextureSample_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  TNode *pTVar4;
  code *pcVar5;
  atomic<int> aVar6;
  TStorage *lpCriticalSection;
  TReferenceControllerBase<1> *pTVar7;
  char cVar8;
  atomic<int> aVar9;
  int iVar10;
  TNode *pTVar11;
  bool bVar12;
  FWmfMediaTextureSample *local_28;
  TStorage *local_20;
  TReferenceControllerBase<1> *local_18;
  
  local_20 = (TStorage *)0x0;
  local_18 = (this->StoragePtr).WeakReferenceCount.ReferenceController;
  if (local_18 != (TReferenceControllerBase<1> *)0x0) {
    aVar6 = local_18->SharedReferenceCount;
    do {
      if (aVar6 == (atomic<int>)0x0) {
        local_18 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ea996f5;
      }
      LOCK();
      aVar9 = local_18->SharedReferenceCount;
      bVar12 = aVar6 == aVar9;
      if (bVar12) {
        local_18->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar9 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar9;
    } while (!bVar12);
    if (local_18 != (TReferenceControllerBase<1> *)0x0) {
      local_20 = (this->StoragePtr).Object;
    }
  }
LAB_14ea996f5:
  pTVar7 = local_18;
  lpCriticalSection = local_20;
  if (local_20 == (TStorage *)0x0) {
    if (param_1 != (FWmfMediaTextureSample *)0x0) {
      (**(code **)(param_1->_padding_ + 0x138))(param_1,1);
    }
  }
  else {
    if ((local_20 == (TStorage *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_28 = param_1;
    if (param_1 != (FWmfMediaTextureSample *)0x0) {
      if (lpCriticalSection == (TStorage *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      cVar8 = (**(code **)(local_28->_padding_ + 0x10))();
      if (cVar8 == '\0') {
        pTVar11 = ::operator_new(0x10);
        if (pTVar11 != (TNode *)0x0) {
          pTVar11->NextNode = (TNode *)0x0;
          pTVar11->Item = local_28;
          pTVar4 = (lpCriticalSection->WaitReadyForReuse).Head;
          (lpCriticalSection->WaitReadyForReuse).Head = pTVar11;
          pTVar4->NextNode = pTVar11;
        }
      }
      else {
        (**(code **)(local_28->_padding_ + 8))();
        pTVar1 = &lpCriticalSection->Pool;
        pFVar3 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_28) &&
            ((FScriptContainerElement *)&local_28 <
             pFVar3 + (longlong)(lpCriticalSection->Pool).ArrayMax * 8)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        piVar2 = &(lpCriticalSection->Pool).ArrayMax;
        iVar10 = (lpCriticalSection->Pool).ArrayNum;
        if (iVar10 == *piVar2) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar1->AllocatorInstance,piVar2);
        }
        (lpCriticalSection->Pool).ArrayNum = iVar10 + 1;
        *(FWmfMediaTextureSample **)((pTVar1->AllocatorInstance).Data + (longlong)iVar10 * 8) =
             local_28;
      }
      if (lpCriticalSection != (TStorage *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

