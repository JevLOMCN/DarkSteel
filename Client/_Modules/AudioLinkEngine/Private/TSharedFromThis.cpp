// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioLinkEngine
// Functions: 1

// AsShared @ 1464cc5f0

TSharedRef<ISubmixBufferListener,1> * __thiscall
TSharedFromThis<ISubmixBufferListener,1>::AsShared
          (TSharedFromThis<ISubmixBufferListener,1> *this,
          TSharedRef<ISubmixBufferListener,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  ISubmixBufferListener *pIVar4;
  TSharedRef<ISubmixBufferListener,1> *pTVar5;
  ISubmixBufferListener *pIVar6;
  ISubmixBufferListener *pIVar7;
  ISubmixBufferListener *pIVar8;
  bool bVar9;
  
  pIVar4 = (ISubmixBufferListener *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pIVar8 = (ISubmixBufferListener *)0x0;
  pIVar6 = pIVar4;
  pIVar7 = pIVar8;
  if (pIVar4 != (ISubmixBufferListener *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pIVar4->field_0x8)->ReferenceController;
    do {
      pIVar6 = pIVar8;
      pIVar7 = (ISubmixBufferListener *)0x0;
      if (iVar2 == 0) goto LAB_1464cc631;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pIVar4->field_0x8)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pIVar4->field_0x8)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pIVar6 = pIVar4;
    pIVar7 = (this->WeakThis).Object;
  }
LAB_1464cc631:
  pIVar4 = (ISubmixBufferListener *)&pIVar7->field_0x8;
  if (pIVar7 == (ISubmixBufferListener *)0x0) {
    pIVar4 = pIVar8;
  }
  if ((pIVar4 != (ISubmixBufferListener *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<ISubmixBufferListener,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pIVar7 == (ISubmixBufferListener *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<ISubmixBufferListener,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pIVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pIVar6;
  if ((pIVar7 == (ISubmixBufferListener *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<ISubmixBufferListener,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

