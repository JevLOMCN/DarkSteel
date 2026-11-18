// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKit
// Functions: 1

// TSharedRef<FAppleARKitXRCamera,1><FAppleARKitXRCamera> @ 14cfcc6f0

TSharedRef<FAppleARKitXRCamera,1> * __thiscall
TSharedRef<FAppleARKitXRCamera,1>::TSharedRef<FAppleARKitXRCamera,1><FAppleARKitXRCamera>
          (TSharedRef<FAppleARKitXRCamera,1> *this,TRawPtrProxy<FAppleARKitXRCamera> *param_1)

{
  int *piVar1;
  int iVar2;
  FAppleARKitXRCamera *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedRef<FAppleARKitXRCamera,1> *pTVar8;
  
  this->Object = param_1->Object;
  pFVar3 = param_1->Object;
  pTVar7 = ::operator_new(0x18);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFAppleARKitXRCamera__U__DefaultDeleter_VFAppleARKitXRCamera___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7[1]._padding_ = (longlong)pFVar3;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar7;
  if (param_1->Object == (FAppleARKitXRCamera *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedRef<FAppleARKitXRCamera,1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  pFVar3 = param_1->Object;
  if ((pFVar3 != (FAppleARKitXRCamera *)0x0) &&
     (((pFVar3->_padding_ == 0 || (pFVar3->_padding_ == 0)) || (*(int *)(pFVar3->_padding_ + 8) < 1)
      ))) {
    pTVar7 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&pFVar3->_padding_ == (longlong *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSharedRef<FAppleARKitXRCamera,1> *)(*pcVar5)();
        return pTVar8;
      }
    }
    pFVar3->_padding_ = (longlong)&pFVar3->_padding_;
    if (pTVar7 != (TReferenceControllerBase<1> *)pFVar3->_padding_) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)pFVar3->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      pFVar3->_padding_ = (longlong)pTVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  return this;
}

