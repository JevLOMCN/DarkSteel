// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 2

// AsShared @ 1431c3430

TSharedRef<BuildPatchServices::FBuildPatchInstaller,1> * __thiscall
TSharedFromThis<BuildPatchServices::FBuildPatchInstaller,1>::AsShared
          (TSharedFromThis<BuildPatchServices::FBuildPatchInstaller,1> *this,
          TSharedRef<BuildPatchServices::FBuildPatchInstaller,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  FBuildPatchInstaller *pFVar4;
  TSharedRef<BuildPatchServices::FBuildPatchInstaller,1> *pTVar5;
  FBuildPatchInstaller *pFVar6;
  FBuildPatchInstaller *pFVar7;
  FBuildPatchInstaller *pFVar8;
  bool bVar9;
  
  pFVar4 = (FBuildPatchInstaller *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar8 = (FBuildPatchInstaller *)0x0;
  pFVar6 = pFVar4;
  pFVar7 = pFVar8;
  if (pFVar4 != (FBuildPatchInstaller *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pFVar4->_padding_)->ReferenceController;
    do {
      pFVar6 = pFVar8;
      pFVar7 = (FBuildPatchInstaller *)0x0;
      if (iVar2 == 0) goto LAB_1431c3471;
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
LAB_1431c3471:
  pFVar4 = (FBuildPatchInstaller *)&pFVar7->_padding_;
  if (pFVar7 == (FBuildPatchInstaller *)0x0) {
    pFVar4 = pFVar8;
  }
  if ((pFVar4 != (FBuildPatchInstaller *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<BuildPatchServices::FBuildPatchInstaller,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pFVar7 == (FBuildPatchInstaller *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<BuildPatchServices::FBuildPatchInstaller,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FBuildPatchInstaller *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<BuildPatchServices::FBuildPatchInstaller,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsWeak @ 1432bf9d0

TWeakPtr<BuildPatchServices::FDownloadServiceImpl_const_,1> * __thiscall
TSharedFromThis<BuildPatchServices::FDownloadServiceImpl,1>::AsWeak
          (TSharedFromThis<BuildPatchServices::FDownloadServiceImpl,1> *this,
          TWeakPtr<BuildPatchServices::FDownloadServiceImpl_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TWeakPtr<BuildPatchServices::FDownloadServiceImpl_const_,1> *pTVar5;
  FDownloadServiceImpl *pFVar6;
  bool bVar7;
  
  __return_storage_ptr__->Object = (this->WeakThis).Object;
  pTVar1 = (this->WeakThis).WeakReferenceCount.ReferenceController;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = (__return_storage_ptr__->WeakReferenceCount).ReferenceController;
  pFVar6 = (FDownloadServiceImpl *)0x0;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        goto LAB_1432bfa37;
      }
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    pFVar6 = __return_storage_ptr__->Object;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (pFVar6 != (FDownloadServiceImpl *)this) {
LAB_1432bfa37:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result.Pin().Get() == this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x6d5,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TWeakPtr<BuildPatchServices::FDownloadServiceImpl_const_,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

