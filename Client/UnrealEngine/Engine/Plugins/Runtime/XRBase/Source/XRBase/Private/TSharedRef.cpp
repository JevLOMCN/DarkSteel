// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 2

// TSharedRef<FDefaultStereoLayers,1><FDefaultStereoLayers> @ 14cf77380

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TSharedRef<FDefaultStereoLayers,1> * __thiscall
TSharedRef<FDefaultStereoLayers,1>::TSharedRef<FDefaultStereoLayers,1><FDefaultStereoLayers>
          (TSharedRef<FDefaultStereoLayers,1> *this,TRawPtrProxy<FDefaultStereoLayers> *param_1)

{
  int *piVar1;
  int iVar2;
  FDefaultStereoLayers *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedRef<FDefaultStereoLayers,1> *pTVar8;
  
  this->Object = param_1->Object;
  pFVar3 = param_1->Object;
  pTVar7 = ::operator_new(0x18);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFDefaultStereoLayers__U__DefaultDeleter_VFDefaultStereoLayers___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7[1]._padding_ = (longlong)pFVar3;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar7;
  if (param_1->Object == (FDefaultStereoLayers *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedRef<FDefaultStereoLayers,1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  pFVar3 = param_1->Object;
  if ((pFVar3 != (FDefaultStereoLayers *)0x0) &&
     (((*(longlong *)&pFVar3->field_0x80 == 0 || (*(longlong *)&pFVar3->field_0x88 == 0)) ||
      (*(int *)(*(longlong *)&pFVar3->field_0x88 + 8) < 1)))) {
    pTVar7 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&pFVar3->field_0x78 == (undefined1 *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSharedRef<FDefaultStereoLayers,1> *)(*pcVar5)();
        return pTVar8;
      }
    }
    *(undefined1 **)&pFVar3->field_0x80 = &pFVar3->field_0x78;
    if (pTVar7 != *(TReferenceControllerBase<1> **)&pFVar3->field_0x88) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = *(longlong **)&pFVar3->field_0x88;
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
      *(TReferenceControllerBase<1> **)&pFVar3->field_0x88 = pTVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  return this;
}

// TSharedRef<FDefaultXRCamera,1><FDefaultXRCamera> @ 14cf774e0

TSharedRef<FDefaultXRCamera,1> * __thiscall
TSharedRef<FDefaultXRCamera,1>::TSharedRef<FDefaultXRCamera,1><FDefaultXRCamera>
          (TSharedRef<FDefaultXRCamera,1> *this,TRawPtrProxy<FDefaultXRCamera> *param_1)

{
  int *piVar1;
  int iVar2;
  FDefaultXRCamera *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedRef<FDefaultXRCamera,1> *pTVar8;
  
  this->Object = param_1->Object;
  pFVar3 = param_1->Object;
  pTVar7 = ::operator_new(0x18);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFDefaultXRCamera__U__DefaultDeleter_VFDefaultXRCamera___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7[1]._padding_ = (longlong)pFVar3;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar7;
  if (param_1->Object == (FDefaultXRCamera *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedRef<FDefaultXRCamera,1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  pFVar3 = param_1->Object;
  if ((pFVar3 != (FDefaultXRCamera *)0x0) &&
     (((*(longlong *)&pFVar3->field_0x10 == 0 || (*(longlong *)&pFVar3->field_0x18 == 0)) ||
      (*(int *)(*(longlong *)&pFVar3->field_0x18 + 8) < 1)))) {
    pTVar7 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&pFVar3->field_0x8 == (undefined1 *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSharedRef<FDefaultXRCamera,1> *)(*pcVar5)();
        return pTVar8;
      }
    }
    *(undefined1 **)&pFVar3->field_0x10 = &pFVar3->field_0x8;
    if (pTVar7 != *(TReferenceControllerBase<1> **)&pFVar3->field_0x18) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = *(longlong **)&pFVar3->field_0x18;
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
      *(TReferenceControllerBase<1> **)&pFVar3->field_0x18 = pTVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  return this;
}

