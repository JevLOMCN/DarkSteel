// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommonEngineUtils
// Functions: 1

// AsShared @ 14f005740

TSharedRef<UE::Online::ISessions,1> * __thiscall
UE::Online::TOnlineComponent<UE::Online::ISessions>::AsShared
          (TOnlineComponent<UE::Online::ISessions> *this,
          TSharedRef<UE::Online::ISessions,1> *__return_storage_ptr__)

{
  TOnlineComponent<UE::Online::ISessions> *pTVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  TSharedRef<UE::Online::ISessions,1> *pTVar5;
  TOnlineComponent<UE::Online::ISessions> *pTVar6;
  TOnlineComponent<UE::Online::ISessions> *pTVar7;
  bool bVar8;
  
  pTVar1 = (TOnlineComponent<UE::Online::ISessions> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar7 = (TOnlineComponent<UE::Online::ISessions> *)0x0;
  pTVar6 = pTVar1;
  if (pTVar1 != (TOnlineComponent<UE::Online::ISessions> *)0x0) {
    iVar3 = (int)pTVar1->_padding_;
    do {
      pTVar6 = pTVar7;
      if (iVar3 == 0) goto LAB_14f005781;
      LOCK();
      iVar4 = (int)pTVar1->_padding_;
      bVar8 = iVar3 == iVar4;
      if (bVar8) {
        *(int *)&pTVar1->_padding_ = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar4;
    } while (!bVar8);
    pTVar7 = (TOnlineComponent<UE::Online::ISessions> *)(this->WeakThis).Object;
    pTVar6 = pTVar1;
  }
LAB_14f005781:
  if ((pTVar7 != this) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineComponent.h"
                         ,0xbd,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::ISessions,1> *)(*pcVar2)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineComponent<UE::Online::ISessions> *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::ISessions,1> *)(*pcVar2)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = (ISessions *)pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineComponent<UE::Online::ISessions> *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::ISessions,1> *)(*pcVar2)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

