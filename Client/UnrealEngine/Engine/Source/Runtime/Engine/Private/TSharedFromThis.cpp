// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// AsShared @ 147ac6f10

TSharedRef<FQueuedReplayTask,1> * __thiscall
TSharedFromThis<FQueuedReplayTask,1>::AsShared
          (TSharedFromThis<FQueuedReplayTask,1> *this,
          TSharedRef<FQueuedReplayTask,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  FQueuedReplayTask *pFVar4;
  TSharedRef<FQueuedReplayTask,1> *pTVar5;
  FQueuedReplayTask *pFVar6;
  FQueuedReplayTask *pFVar7;
  FQueuedReplayTask *pFVar8;
  bool bVar9;
  
  pFVar4 = (FQueuedReplayTask *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar8 = (FQueuedReplayTask *)0x0;
  pFVar6 = pFVar4;
  pFVar7 = pFVar8;
  if (pFVar4 != (FQueuedReplayTask *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pFVar4->_padding_)->ReferenceController;
    do {
      pFVar6 = pFVar8;
      pFVar7 = (FQueuedReplayTask *)0x0;
      if (iVar2 == 0) goto LAB_147ac6f51;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pFVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pFVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pFVar6 = pFVar4;
    pFVar7 = (this->WeakThis).Object;
  }
LAB_147ac6f51:
  pFVar4 = (FQueuedReplayTask *)&pFVar7->_padding_;
  if (pFVar7 == (FQueuedReplayTask *)0x0) {
    pFVar4 = pFVar8;
  }
  if ((pFVar4 != (FQueuedReplayTask *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FQueuedReplayTask,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pFVar7 == (FQueuedReplayTask *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FQueuedReplayTask,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FQueuedReplayTask *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FQueuedReplayTask,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 1480972b0

TSharedRef<FReplayPlaylistTracker,1> * __thiscall
TSharedFromThis<FReplayPlaylistTracker,1>::AsShared
          (TSharedFromThis<FReplayPlaylistTracker,1> *this,
          TSharedRef<FReplayPlaylistTracker,1> *__return_storage_ptr__)

{
  FReplayPlaylistTracker *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  TSharedRef<FReplayPlaylistTracker,1> *pTVar5;
  FReplayPlaylistTracker *pFVar6;
  FReplayPlaylistTracker *pFVar7;
  bool bVar8;
  
  pFVar1 = (FReplayPlaylistTracker *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar7 = (FReplayPlaylistTracker *)0x0;
  pFVar6 = pFVar1;
  if (pFVar1 != (FReplayPlaylistTracker *)0x0) {
    iVar3 = *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController;
    do {
      pFVar6 = pFVar7;
      if (iVar3 == 0) goto LAB_1480972f1;
      LOCK();
      iVar4 = *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController;
      bVar8 = iVar3 == iVar4;
      if (bVar8) {
        *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar4;
    } while (!bVar8);
    pFVar7 = (this->WeakThis).Object;
    pFVar6 = pFVar1;
  }
LAB_1480972f1:
  if ((pFVar7 != (FReplayPlaylistTracker *)this) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FReplayPlaylistTracker,1> *)(*pcVar2)();
    return pTVar5;
  }
  if ((pFVar7 == (FReplayPlaylistTracker *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FReplayPlaylistTracker,1> *)(*pcVar2)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FReplayPlaylistTracker *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FReplayPlaylistTracker,1> *)(*pcVar2)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 1484c34e0

TSharedRef<FRepLayout_const_,1> * __thiscall
TSharedFromThis<FRepLayout,1>::AsShared
          (TSharedFromThis<FRepLayout,1> *this,
          TSharedRef<FRepLayout_const_,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  FRepLayout *pFVar4;
  TSharedRef<FRepLayout_const_,1> *pTVar5;
  FRepLayout *pFVar6;
  FRepLayout *pFVar7;
  FRepLayout *pFVar8;
  bool bVar9;
  
  pFVar4 = (FRepLayout *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar8 = (FRepLayout *)0x0;
  pFVar6 = pFVar4;
  pFVar7 = pFVar8;
  if (pFVar4 != (FRepLayout *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pFVar4->_padding_)->ReferenceController;
    do {
      pFVar6 = pFVar8;
      pFVar7 = (FRepLayout *)0x0;
      if (iVar2 == 0) goto LAB_1484c3521;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pFVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pFVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pFVar6 = pFVar4;
    pFVar7 = (this->WeakThis).Object;
  }
LAB_1484c3521:
  pFVar4 = (FRepLayout *)&pFVar7->_padding_;
  if (pFVar7 == (FRepLayout *)0x0) {
    pFVar4 = pFVar8;
  }
  if ((pFVar4 != (FRepLayout *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x69a,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FRepLayout_const_,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pFVar7 == (FRepLayout *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FRepLayout_const_,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FRepLayout *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FRepLayout_const_,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 148788e10

TSharedRef<FStreamableHandle,1> * __thiscall
TSharedFromThis<FStreamableHandle,1>::AsShared
          (TSharedFromThis<FStreamableHandle,1> *this,
          TSharedRef<FStreamableHandle,1> *__return_storage_ptr__)

{
  FStreamableHandle *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  TSharedRef<FStreamableHandle,1> *pTVar5;
  FStreamableHandle *pFVar6;
  FStreamableHandle *pFVar7;
  bool bVar8;
  
  pFVar1 = (FStreamableHandle *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar7 = (FStreamableHandle *)0x0;
  pFVar6 = pFVar1;
  if (pFVar1 != (FStreamableHandle *)0x0) {
    iVar3 = *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController;
    do {
      pFVar6 = pFVar7;
      if (iVar3 == 0) goto LAB_148788e51;
      LOCK();
      iVar4 = *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController;
      bVar8 = iVar3 == iVar4;
      if (bVar8) {
        *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar4;
    } while (!bVar8);
    pFVar7 = (this->WeakThis).Object;
    pFVar6 = pFVar1;
  }
LAB_148788e51:
  if ((pFVar7 != (FStreamableHandle *)this) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FStreamableHandle,1> *)(*pcVar2)();
    return pTVar5;
  }
  if ((pFVar7 == (FStreamableHandle *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FStreamableHandle,1> *)(*pcVar2)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FStreamableHandle *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FStreamableHandle,1> *)(*pcVar2)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

