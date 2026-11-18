// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 5

// operator=<FArrayReader> @ 14dcf9ff0

TSharedPtr<FArrayReader,1> * __thiscall
TSharedPtr<FArrayReader,1>::operator=<FArrayReader>
          (TSharedPtr<FArrayReader,1> *this,TRawPtrProxy<FArrayReader> *param_1)

{
  FArrayReader *pFVar1;
  TSharedPtr<FArrayReader,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFArrayReader__U__DefaultDeleter_VFArrayReader___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar1;
    local_18.Object = (FArrayReader *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator-> @ 14dd0eb10

FWidgetRenderer * __thiscall
TSharedPtr<FWidgetRenderer,1>::operator->(TSharedPtr<FWidgetRenderer,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FWidgetRenderer *pFVar3;
  
  if (this->Object != (FWidgetRenderer *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FWidgetRenderer *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14dd6c900

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FCameraCutSubSectionHierarchyNode * __thiscall
TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>::operator->
          (TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FCameraCutSubSectionHierarchyNode *pFVar3;
  
  if (this->Object != (FCameraCutSubSectionHierarchyNode *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FCameraCutSubSectionHierarchyNode *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14dd6c950

FMoviePipelineTimeController * __thiscall
TSharedPtr<FMoviePipelineTimeController,1>::operator->
          (TSharedPtr<FMoviePipelineTimeController,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FMoviePipelineTimeController *pFVar3;
  
  if (this->Object != (FMoviePipelineTimeController *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMoviePipelineTimeController *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14dd6c9a0

TFutureState<bool> * __thiscall
TSharedPtr<TFutureState<bool>,1>::operator->(TSharedPtr<TFutureState<bool>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  TFutureState<bool> *pTVar3;
  
  if (this->Object != (TFutureState<bool> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TFutureState<bool> *)(*pcVar1)();
    return pTVar3;
  }
  return this->Object;
}

