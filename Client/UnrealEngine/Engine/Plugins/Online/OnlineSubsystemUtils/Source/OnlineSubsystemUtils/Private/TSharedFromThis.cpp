// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 1

// AsShared @ 14ec60580

TSharedRef<FUniqueNetId_const_,1> * __thiscall
TSharedFromThis<FUniqueNetId,1>::AsShared
          (TSharedFromThis<FUniqueNetId,1> *this,
          TSharedRef<FUniqueNetId_const_,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  FUniqueNetId *pFVar4;
  TSharedRef<FUniqueNetId_const_,1> *pTVar5;
  FUniqueNetId *pFVar6;
  FUniqueNetId *pFVar7;
  FUniqueNetId *pFVar8;
  bool bVar9;
  
  pFVar4 = (FUniqueNetId *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar8 = (FUniqueNetId *)0x0;
  pFVar6 = pFVar4;
  pFVar7 = pFVar8;
  if (pFVar4 != (FUniqueNetId *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pFVar4->field_0x8)->ReferenceController;
    do {
      pFVar6 = pFVar8;
      pFVar7 = (FUniqueNetId *)0x0;
      if (iVar2 == 0) goto LAB_14ec605c1;
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
LAB_14ec605c1:
  pFVar4 = (FUniqueNetId *)&pFVar7->field_0x8;
  if (pFVar7 == (FUniqueNetId *)0x0) {
    pFVar4 = pFVar8;
  }
  if ((pFVar4 != (FUniqueNetId *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x69a,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FUniqueNetId_const_,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pFVar7 == (FUniqueNetId *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FUniqueNetId_const_,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FUniqueNetId *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FUniqueNetId_const_,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

