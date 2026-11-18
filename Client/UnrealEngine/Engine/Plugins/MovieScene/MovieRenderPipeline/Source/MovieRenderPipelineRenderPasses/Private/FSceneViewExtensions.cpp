// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 1

// NewExtension<FOpenColorIODisplayExtension> @ 14ddc4160

TSharedRef<FOpenColorIODisplayExtension,1> * __cdecl
FSceneViewExtensions::NewExtension<FOpenColorIODisplayExtension>
          (TSharedRef<FOpenColorIODisplayExtension,1> *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  FOpenColorIODisplayExtension *pFVar7;
  TSharedRef<FOpenColorIODisplayExtension,1> *pTVar8;
  FAutoRegister local_res10 [8];
  FOpenColorIODisplayExtension *local_res18;
  TSharedRef<ISceneViewExtension,1> local_40 [2];
  
  local_res18 = ::operator_new(0x110);
  if (local_res18 == (FOpenColorIODisplayExtension *)0x0) {
    pFVar7 = (FOpenColorIODisplayExtension *)0x0;
  }
  else {
    pFVar7 = FOpenColorIODisplayExtension::FOpenColorIODisplayExtension
                       (local_res18,local_res10,(FViewportClient *)0x0);
  }
  if ((((pFVar7 != (FOpenColorIODisplayExtension *)0x0) && (pFVar7->_padding_ != 0)) &&
      (pFVar7->_padding_ != 0)) && (0 < *(int *)(pFVar7->_padding_ + 8))) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InObject || !InObject->DoesSharedInstanceExist()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x7a5,L"Trying to share an already-shared object");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedRef<FOpenColorIODisplayExtension,1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  __return_storage_ptr__->Object = pFVar7;
  local_res18 = ::operator_new(0x18);
  if (local_res18 != (FOpenColorIODisplayExtension *)0x0) {
    ((TReferenceControllerBase<1> *)local_res18)->SharedReferenceCount = (atomic<int>)0x1;
    ((TReferenceControllerBase<1> *)local_res18)->WeakReferenceCount = (atomic<int>)0x1;
    ((TReferenceControllerBase<1> *)local_res18)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFOpenColorIODisplayExtension__U__DefaultDeleter_VFOpenColorIODisplayExtension___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    ((TReferenceControllerBase<1> *)((longlong)local_res18 + 0x10))->_padding_ = (longlong)pFVar7;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)local_res18;
  if (pFVar7 == (FOpenColorIODisplayExtension *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedRef<FOpenColorIODisplayExtension,1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  else if (((pFVar7->_padding_ == 0) || (pFVar7->_padding_ == 0)) ||
          (*(int *)(pFVar7->_padding_ + 8) < 1)) {
    pTVar3 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar7->_padding_ = (longlong)pFVar7;
    if (pTVar3 != (TReferenceControllerBase<1> *)pFVar7->_padding_) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)pFVar7->_padding_;
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
      pFVar7->_padding_ = (longlong)pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  local_40[0].Object = (ISceneViewExtension *)__return_storage_ptr__->Object;
  local_40[0].SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_40[0].SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_40[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_40[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  RegisterExtension(local_40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40[0].SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

