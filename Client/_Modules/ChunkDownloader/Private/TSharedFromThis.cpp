// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChunkDownloader
// Functions: 2

// AsShared @ 14f020b50

TSharedRef<FChunkDownloader,1> * __thiscall
TSharedFromThis<FChunkDownloader,1>::AsShared
          (TSharedFromThis<FChunkDownloader,1> *this,
          TSharedRef<FChunkDownloader,1> *__return_storage_ptr__)

{
  FChunkDownloader *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  TSharedRef<FChunkDownloader,1> *pTVar5;
  FChunkDownloader *pFVar6;
  FChunkDownloader *pFVar7;
  bool bVar8;
  
  pFVar1 = (FChunkDownloader *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar7 = (FChunkDownloader *)0x0;
  pFVar6 = pFVar1;
  if (pFVar1 != (FChunkDownloader *)0x0) {
    iVar3 = *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController;
    do {
      pFVar6 = pFVar7;
      if (iVar3 == 0) goto LAB_14f020b91;
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
LAB_14f020b91:
  if ((pFVar7 != (FChunkDownloader *)this) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FChunkDownloader,1> *)(*pcVar2)();
    return pTVar5;
  }
  if ((pFVar7 == (FChunkDownloader *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FChunkDownloader,1> *)(*pcVar2)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FChunkDownloader *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FChunkDownloader,1> *)(*pcVar2)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14f020c50

TSharedRef<FDownload,1> * __thiscall
TSharedFromThis<FDownload,1>::AsShared
          (TSharedFromThis<FDownload,1> *this,TSharedRef<FDownload,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  FDownload *pFVar4;
  TSharedRef<FDownload,1> *pTVar5;
  FDownload *pFVar6;
  FDownload *pFVar7;
  FDownload *pFVar8;
  bool bVar9;
  
  pFVar4 = (FDownload *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar8 = (FDownload *)0x0;
  pFVar6 = pFVar4;
  pFVar7 = pFVar8;
  if (pFVar4 != (FDownload *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pFVar4->field_0x8)->ReferenceController;
    do {
      pFVar6 = pFVar8;
      pFVar7 = (FDownload *)0x0;
      if (iVar2 == 0) goto LAB_14f020c91;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pFVar4->field_0x8)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pFVar4->field_0x8)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pFVar6 = pFVar4;
    pFVar7 = (this->WeakThis).Object;
  }
LAB_14f020c91:
  pFVar4 = (FDownload *)&pFVar7->field_0x10;
  if (pFVar7 == (FDownload *)0x0) {
    pFVar4 = pFVar8;
  }
  if ((pFVar4 != (FDownload *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FDownload,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pFVar7 == (FDownload *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FDownload,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FDownload *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FDownload,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

