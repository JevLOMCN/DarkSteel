// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 2

// TSharedRef<FLandscapeSceneViewExtension,1><FLandscapeSceneViewExtension> @ 145f67da0

TSharedRef<FLandscapeSceneViewExtension,1> * __thiscall
TSharedRef<FLandscapeSceneViewExtension,1>::
TSharedRef<FLandscapeSceneViewExtension,1><FLandscapeSceneViewExtension>
          (TSharedRef<FLandscapeSceneViewExtension,1> *this,
          TRawPtrProxy<FLandscapeSceneViewExtension> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FLandscapeSceneViewExtension *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<FLandscapeSceneViewExtension,1> *pTVar9;
  
  this->Object = param_1->Object;
  pFVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFLandscapeSceneViewExtension__U__DefaultDeleter_VFLandscapeSceneViewExtension___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (FLandscapeSceneViewExtension *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<FLandscapeSceneViewExtension,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FLandscapeSceneViewExtension *)0x0) &&
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

// operator=<FLandscapeComponentGrassData> @ 145f67f70

TSharedRef<FLandscapeComponentGrassData,1> * __thiscall
TSharedRef<FLandscapeComponentGrassData,1>::operator=<FLandscapeComponentGrassData>
          (TSharedRef<FLandscapeComponentGrassData,1> *this,
          TRawPtrProxy<FLandscapeComponentGrassData> *param_1)

{
  FLandscapeComponentGrassData *pFVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TSharedRef<FLandscapeComponentGrassData,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  if (param_1->Object == (FLandscapeComponentGrassData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x18d,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FLandscapeComponentGrassData,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pFVar1 = param_1->Object;
  pTVar6 = ::operator_new(0x18);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFLandscapeComponentGrassData__U__DefaultDeleter_UFLandscapeComponentGrassData___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6[1]._padding_ = (longlong)pFVar1;
  }
  if (param_1->Object == (FLandscapeComponentGrassData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FLandscapeComponentGrassData,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pTVar3 = (this->SharedReferenceCount).ReferenceController;
  this->Object = pFVar1;
  (this->SharedReferenceCount).ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

