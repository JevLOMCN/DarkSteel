// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 2

// AsShared @ 14dd77660

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TSharedRef<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> * __thiscall
TSharedFromThis<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>::AsShared
          (TSharedFromThis<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *this,
          TSharedRef<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *__return_storage_ptr__)

{
  FCameraCutSubSectionHierarchyNode *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  TSharedRef<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *pTVar5;
  FCameraCutSubSectionHierarchyNode *pFVar6;
  FCameraCutSubSectionHierarchyNode *pFVar7;
  bool bVar8;
  
  pFVar1 = (FCameraCutSubSectionHierarchyNode *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar7 = (FCameraCutSubSectionHierarchyNode *)0x0;
  pFVar6 = pFVar1;
  if (pFVar1 != (FCameraCutSubSectionHierarchyNode *)0x0) {
    iVar3 = *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController;
    do {
      pFVar6 = pFVar7;
      if (iVar3 == 0) goto LAB_14dd776a1;
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
LAB_14dd776a1:
  if ((pFVar7 != (FCameraCutSubSectionHierarchyNode *)this) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *)(*pcVar2)();
    return pTVar5;
  }
  if ((pFVar7 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *)(*pcVar2)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *)(*pcVar2)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14dd77760

TSharedRef<FMoviePipelineSurfaceReader,1> * __thiscall
TSharedFromThis<FMoviePipelineSurfaceReader,1>::AsShared
          (TSharedFromThis<FMoviePipelineSurfaceReader,1> *this,
          TSharedRef<FMoviePipelineSurfaceReader,1> *__return_storage_ptr__)

{
  FMoviePipelineSurfaceReader *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  TSharedRef<FMoviePipelineSurfaceReader,1> *pTVar5;
  FMoviePipelineSurfaceReader *pFVar6;
  FMoviePipelineSurfaceReader *pFVar7;
  bool bVar8;
  
  pFVar1 = (FMoviePipelineSurfaceReader *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar7 = (FMoviePipelineSurfaceReader *)0x0;
  pFVar6 = pFVar1;
  if (pFVar1 != (FMoviePipelineSurfaceReader *)0x0) {
    iVar3 = *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController;
    do {
      pFVar6 = pFVar7;
      if (iVar3 == 0) goto LAB_14dd777a1;
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
LAB_14dd777a1:
  if ((pFVar7 != (FMoviePipelineSurfaceReader *)this) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FMoviePipelineSurfaceReader,1> *)(*pcVar2)();
    return pTVar5;
  }
  if ((pFVar7 == (FMoviePipelineSurfaceReader *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FMoviePipelineSurfaceReader,1> *)(*pcVar2)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FMoviePipelineSurfaceReader *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FMoviePipelineSurfaceReader,1> *)(*pcVar2)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

