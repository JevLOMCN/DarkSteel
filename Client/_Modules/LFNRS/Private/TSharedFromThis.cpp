// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LFNRS
// Functions: 14

// AsShared @ 146ca3460

TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>,1>
* __thiscall
TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>,1>
::AsShared(TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>,1>
           *this,TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>,1>
                 *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_> *pTVar4;
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>,1>
  *pTVar5;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_> *pTVar6;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_> *pTVar7;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>
            *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>
            *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>
                 *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>
                *)0x0;
      if (iVar2 == 0) goto LAB_146ca34a1;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_146ca34a1:
  pTVar4 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>
            *)&pTVar7->_padding_;
  if (pTVar7 == (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>
                 *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>
                  *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>,1>
              *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>
                  *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>,1>
              *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>
                  *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>,1>
              *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 146ca3570

TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>,1> *
__thiscall
TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>,1>
::AsShared(TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>,1>
           *this,TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>,1>
                 *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_> *pTVar4;
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>,1>
  *pTVar5;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_> *pTVar6;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_> *pTVar7;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_> *)
           0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>
                 *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>
                *)0x0;
      if (iVar2 == 0) goto LAB_146ca35b1;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_146ca35b1:
  pTVar4 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_> *)
           &pTVar7->_padding_;
  if (pTVar7 == (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>
                 *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>
                  *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>,1>
              *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>
                  *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>,1>
              *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>
                  *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>,1>
              *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 146ca3680

TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>,1> *
__thiscall
TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>,1>
::AsShared(TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>,1>
           *this,TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>,1>
                 *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_> *pTVar4;
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>,1>
  *pTVar5;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_> *pTVar6;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_> *pTVar7;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_> *)
           0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>
                 *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>
                *)0x0;
      if (iVar2 == 0) goto LAB_146ca36c1;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_146ca36c1:
  pTVar4 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_> *)
           &pTVar7->_padding_;
  if (pTVar7 == (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>
                 *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>
                  *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>,1>
              *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>
                  *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>,1>
              *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>
                  *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>,1>
              *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 146ca3790

TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>,1>
* __thiscall
TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>,1>
::AsShared(TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>,1>
           *this,TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>,1>
                 *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_> *pTVar4;
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>,1>
  *pTVar5;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_> *pTVar6;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_> *pTVar7;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_> *)
           0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>
                 *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>
                *)0x0;
      if (iVar2 == 0) goto LAB_146ca37d1;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_146ca37d1:
  pTVar4 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_> *)
           &pTVar7->_padding_;
  if (pTVar7 == (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>
                 *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>
                  *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>,1>
              *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>
                  *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>,1>
              *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>
                  *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>,1>
              *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 146ca38a0

TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>,1> * __thiscall
TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>,1>::
AsShared(TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>,1>
         *this,TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>,1>
               *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_> *pTVar4;
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>,1> *pTVar5;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_> *pTVar6;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_> *pTVar7;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_> *)0x0;
      if (iVar2 == 0) goto LAB_146ca38e1;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_146ca38e1:
  pTVar4 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_> *)
           &pTVar7->_padding_;
  if (pTVar7 == (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_> *)this)
     && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("SharedThis.Get() == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>,1>
              *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_> *)0x0)
     && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>,1>
              *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_> *)0x0)
     && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>,1>
              *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 146ca39b0

TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>,1> *
__thiscall
TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>,1>::
AsShared(TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>,1>
         *this,TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>,1>
               *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_> *pTVar4;
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>,1>
  *pTVar5;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_> *pTVar6;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_> *pTVar7;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_> *)
                0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_> *)
               0x0;
      if (iVar2 == 0) goto LAB_146ca39f1;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_146ca39f1:
  pTVar4 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_> *)
           &pTVar7->_padding_;
  if (pTVar7 == (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_> *)
                0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_> *)
                 this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>,1>
              *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_> *)
                 0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>,1>
              *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_> *)
                 0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>,1>
              *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 146ca3ac0

TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>,1> *
__thiscall
TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>,1>
::AsShared(TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>,1>
           *this,TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>,1>
                 *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_> *pTVar4;
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>,1>
  *pTVar5;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_> *pTVar6;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_> *pTVar7;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_> *
                )0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_> *)
               0x0;
      if (iVar2 == 0) goto LAB_146ca3b01;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_146ca3b01:
  pTVar4 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_> *)
           &pTVar7->_padding_;
  if (pTVar7 == (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_> *
                )0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>
                  *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>,1>
              *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>
                  *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>,1>
              *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>
                  *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>,1>
              *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 146ca3bd0

TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>,1>
* __thiscall
TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>,1>
::AsShared(TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>,1>
           *this,TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>,1>
                 *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_> *pTVar4;
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>,1>
  *pTVar5;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_> *pTVar6;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_> *pTVar7;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_> *)
           0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>
                 *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>
                *)0x0;
      if (iVar2 == 0) goto LAB_146ca3c11;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_146ca3c11:
  pTVar4 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_> *)
           &pTVar7->_padding_;
  if (pTVar7 == (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>
                 *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>
                  *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>,1>
              *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>
                  *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>,1>
              *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>
                  *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>,1>
              *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 146ca3ce0

TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>,1>
* __thiscall
TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>,1>
::AsShared(TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>,1>
           *this,TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>,1>
                 *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_> *pTVar4
  ;
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>,1>
  *pTVar5;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_> *pTVar6
  ;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_> *pTVar7
  ;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_> *pTVar8
  ;
  bool bVar9;
  
  pTVar4 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>
            *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>
            *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>
                 *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>
                *)0x0;
      if (iVar2 == 0) goto LAB_146ca3d21;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_146ca3d21:
  pTVar4 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>
            *)&pTVar7->_padding_;
  if (pTVar7 == (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>
                 *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>
                  *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>,1>
              *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>
                  *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>,1>
              *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>
                  *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>,1>
              *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 146ca3df0

TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>,1> *
__thiscall
TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>,1>
::AsShared(TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>,1>
           *this,TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>,1>
                 *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_> *pTVar4;
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>,1>
  *pTVar5;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_> *pTVar6;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_> *pTVar7;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_> *)
           0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>
                 *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>
                *)0x0;
      if (iVar2 == 0) goto LAB_146ca3e31;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_146ca3e31:
  pTVar4 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_> *)
           &pTVar7->_padding_;
  if (pTVar7 == (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>
                 *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>
                  *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>,1>
              *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>
                  *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>,1>
              *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>
                  *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>,1>
              *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 146ca3f00

TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>,1> *
__thiscall
TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>,1>
::AsShared(TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>,1>
           *this,TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>,1>
                 *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_> *pTVar4;
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>,1>
  *pTVar5;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_> *pTVar6;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_> *pTVar7;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_> *)0x0
  ;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>
                 *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_> *
               )0x0;
      if (iVar2 == 0) goto LAB_146ca3f41;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_146ca3f41:
  pTVar4 = (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_> *)
           &pTVar7->_padding_;
  if (pTVar7 == (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>
                 *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>
                  *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>,1>
              *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>
                  *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>,1>
              *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>
                  *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>,1>
              *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 146ca4010

TSharedRef<TGenericQueuedLocalFileRequest<ELocalFileReplayResult>,1> * __thiscall
TSharedFromThis<TGenericQueuedLocalFileRequest<enum_ELocalFileReplayResult>,1>::AsShared
          (void *this,
          TSharedRef<TGenericQueuedLocalFileRequest<ELocalFileReplayResult>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TGenericQueuedLocalFileRequest<ELocalFileReplayResult> *pTVar4;
  TSharedRef<TGenericQueuedLocalFileRequest<ELocalFileReplayResult>,1> *pTVar5;
  TGenericQueuedLocalFileRequest<ELocalFileReplayResult> *pTVar6;
  TGenericQueuedLocalFileRequest<ELocalFileReplayResult> *pTVar7;
  TGenericQueuedLocalFileRequest<ELocalFileReplayResult> *pTVar8;
  bool bVar9;
  
  pTVar4 = *(TGenericQueuedLocalFileRequest<ELocalFileReplayResult> **)((longlong)this + 8);
  pTVar8 = (TGenericQueuedLocalFileRequest<ELocalFileReplayResult> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TGenericQueuedLocalFileRequest<ELocalFileReplayResult> *)0x0) {
    iVar2 = (int)pTVar4->_padding_;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TGenericQueuedLocalFileRequest<ELocalFileReplayResult> *)0x0;
      if (iVar2 == 0) goto LAB_146ca4051;
      LOCK();
      iVar3 = (int)pTVar4->_padding_;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&pTVar4->_padding_ = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = *(TGenericQueuedLocalFileRequest<ELocalFileReplayResult> **)this;
  }
LAB_146ca4051:
  pTVar4 = (TGenericQueuedLocalFileRequest<ELocalFileReplayResult> *)&pTVar7->_padding_;
  if (pTVar7 == (TGenericQueuedLocalFileRequest<ELocalFileReplayResult> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<TGenericQueuedLocalFileRequest<ELocalFileReplayResult>,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TGenericQueuedLocalFileRequest<ELocalFileReplayResult> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<TGenericQueuedLocalFileRequest<ELocalFileReplayResult>,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TGenericQueuedLocalFileRequest<ELocalFileReplayResult> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<TGenericQueuedLocalFileRequest<ELocalFileReplayResult>,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 146ca4120

TSharedRef<FGenericQueuedLocalFileRequest,1> * __thiscall
TSharedFromThis<FGenericQueuedLocalFileRequest,1>::AsShared
          (TSharedFromThis<FGenericQueuedLocalFileRequest,1> *this,
          TSharedRef<FGenericQueuedLocalFileRequest,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  FGenericQueuedLocalFileRequest *pFVar4;
  TSharedRef<FGenericQueuedLocalFileRequest,1> *pTVar5;
  FGenericQueuedLocalFileRequest *pFVar6;
  FGenericQueuedLocalFileRequest *pFVar7;
  FGenericQueuedLocalFileRequest *pFVar8;
  bool bVar9;
  
  pFVar4 = (FGenericQueuedLocalFileRequest *)(this->WeakThis).WeakReferenceCount.ReferenceController
  ;
  pFVar8 = (FGenericQueuedLocalFileRequest *)0x0;
  pFVar6 = pFVar4;
  pFVar7 = pFVar8;
  if (pFVar4 != (FGenericQueuedLocalFileRequest *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pFVar4->_padding_)->ReferenceController;
    do {
      pFVar6 = pFVar8;
      pFVar7 = (FGenericQueuedLocalFileRequest *)0x0;
      if (iVar2 == 0) goto LAB_146ca4161;
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
LAB_146ca4161:
  pFVar4 = (FGenericQueuedLocalFileRequest *)&pFVar7->_padding_;
  if (pFVar7 == (FGenericQueuedLocalFileRequest *)0x0) {
    pFVar4 = pFVar8;
  }
  if ((pFVar4 != (FGenericQueuedLocalFileRequest *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FGenericQueuedLocalFileRequest,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pFVar7 == (FGenericQueuedLocalFileRequest *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FGenericQueuedLocalFileRequest,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FGenericQueuedLocalFileRequest *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FGenericQueuedLocalFileRequest,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 146ca4230

TSharedRef<FLocalFileNetworkReplayStreamer,1> * __thiscall
TSharedFromThis<FLocalFileNetworkReplayStreamer,1>::AsShared
          (TSharedFromThis<FLocalFileNetworkReplayStreamer,1> *this,
          TSharedRef<FLocalFileNetworkReplayStreamer,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  FLocalFileNetworkReplayStreamer *pFVar4;
  TSharedRef<FLocalFileNetworkReplayStreamer,1> *pTVar5;
  FLocalFileNetworkReplayStreamer *pFVar6;
  FLocalFileNetworkReplayStreamer *pFVar7;
  FLocalFileNetworkReplayStreamer *pFVar8;
  bool bVar9;
  
  pFVar4 = (FLocalFileNetworkReplayStreamer *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar8 = (FLocalFileNetworkReplayStreamer *)0x0;
  pFVar6 = pFVar4;
  pFVar7 = pFVar8;
  if (pFVar4 != (FLocalFileNetworkReplayStreamer *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pFVar4->_padding_)->ReferenceController;
    do {
      pFVar6 = pFVar8;
      pFVar7 = (FLocalFileNetworkReplayStreamer *)0x0;
      if (iVar2 == 0) goto LAB_146ca4271;
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
LAB_146ca4271:
  pFVar4 = (FLocalFileNetworkReplayStreamer *)&pFVar7->_padding_;
  if (pFVar7 == (FLocalFileNetworkReplayStreamer *)0x0) {
    pFVar4 = pFVar8;
  }
  if ((pFVar4 != (FLocalFileNetworkReplayStreamer *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FLocalFileNetworkReplayStreamer,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pFVar7 == (FLocalFileNetworkReplayStreamer *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FLocalFileNetworkReplayStreamer,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FLocalFileNetworkReplayStreamer *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FLocalFileNetworkReplayStreamer,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

