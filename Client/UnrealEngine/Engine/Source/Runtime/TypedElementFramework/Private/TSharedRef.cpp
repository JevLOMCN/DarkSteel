// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 3

// TSharedRef<TTypedElementList<FScriptTypedElementHandle>,1><TTypedElementList<FScriptTypedElementHandle>_> @ 142c89220

TSharedRef<TTypedElementList<FScriptTypedElementHandle>,1> * __thiscall
TSharedRef<TTypedElementList<FScriptTypedElementHandle>,1>::
TSharedRef<TTypedElementList<FScriptTypedElementHandle>,1><TTypedElementList<FScriptTypedElementHandle>_>
          (TSharedRef<TTypedElementList<FScriptTypedElementHandle>,1> *this,
          TRawPtrProxy<TTypedElementList<FScriptTypedElementHandle>_> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TTypedElementList<FScriptTypedElementHandle> *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<TTypedElementList<FScriptTypedElementHandle>,1> *pTVar9;
  
  this->Object = param_1->Object;
  pTVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TTypedElementList_UFScriptTypedElementHandle____U__DefaultDeleter_V__TTypedElementList_UFScriptTypedElementHandle_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (TTypedElementList<FScriptTypedElementHandle> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<TTypedElementList<FScriptTypedElementHandle>,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pTVar4 = param_1->Object;
  if ((pTVar4 != (TTypedElementList<FScriptTypedElementHandle> *)0x0) &&
     (((plVar1 = &pTVar4->_padding_, pTVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4->_padding_ = (longlong)pTVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<TTypedElementList<FTypedElementHandle>,1><TTypedElementList<FTypedElementHandle>_> @ 142c89320

TSharedRef<TTypedElementList<FTypedElementHandle>,1> * __thiscall
TSharedRef<TTypedElementList<FTypedElementHandle>,1>::
TSharedRef<TTypedElementList<FTypedElementHandle>,1><TTypedElementList<FTypedElementHandle>_>
          (TSharedRef<TTypedElementList<FTypedElementHandle>,1> *this,
          TRawPtrProxy<TTypedElementList<FTypedElementHandle>_> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TTypedElementList<FTypedElementHandle> *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<TTypedElementList<FTypedElementHandle>,1> *pTVar9;
  
  this->Object = param_1->Object;
  pTVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TTypedElementList_UFTypedElementHandle____U__DefaultDeleter_V__TTypedElementList_UFTypedElementHandle_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (TTypedElementList<FTypedElementHandle> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<TTypedElementList<FTypedElementHandle>,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pTVar4 = param_1->Object;
  if ((pTVar4 != (TTypedElementList<FTypedElementHandle> *)0x0) &&
     (((plVar1 = &pTVar4->_padding_, pTVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4->_padding_ = (longlong)pTVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<IAutomationLatentCommand,1><FAutomationSpecBase::FAsyncLatentCommand> @ 142cccd20

TSharedRef<IAutomationLatentCommand,1> * __thiscall
TSharedRef<IAutomationLatentCommand,1>::
TSharedRef<IAutomationLatentCommand,1><FAutomationSpecBase::FAsyncLatentCommand>
          (TSharedRef<IAutomationLatentCommand,1> *this,
          TRawPtrProxy<FAutomationSpecBase::FAsyncLatentCommand> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FAsyncLatentCommand *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<IAutomationLatentCommand,1> *pTVar9;
  
  this->Object = (IAutomationLatentCommand *)param_1->Object;
  pFVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFAsyncLatentCommand_FAutomationSpecBase__U__DefaultDeleter_VFAsyncLatentCommand_FAutomationSpecBase___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (FAsyncLatentCommand *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<IAutomationLatentCommand,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FAsyncLatentCommand *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

