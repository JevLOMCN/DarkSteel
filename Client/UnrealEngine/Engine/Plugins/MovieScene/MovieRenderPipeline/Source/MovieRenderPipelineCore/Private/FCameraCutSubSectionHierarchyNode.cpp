// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 3

// ~FCameraCutSubSectionHierarchyNode @ 14dcb20b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
MoviePipeline::FCameraCutSubSectionHierarchyNode::~FCameraCutSubSectionHierarchyNode
          (FCameraCutSubSectionHierarchyNode *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  DestructItems<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>,int>
            ((TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *)
             (this->Children).AllocatorInstance.Data,(this->Children).ArrayNum);
  pFVar3 = (this->Children).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Parent).SharedReferenceCount.ReferenceController);
  pFVar3 = (this->AdditionalSectionsToExpand).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014dcb211b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// AddChild @ 14dd75150

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
MoviePipeline::FCameraCutSubSectionHierarchyNode::AddChild
          (FCameraCutSubSectionHierarchyNode *this,
          TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *param_1)

{
  FCameraCutSubSectionHierarchyNode *pFVar1;
  FCameraCutSubSectionHierarchyNode *pFVar2;
  code *pcVar3;
  bool bVar4;
  TSharedRef<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *pTVar5;
  TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *pTVar6;
  FCameraCutSubSectionHierarchyNode *local_28;
  FSharedReferencer<1> local_20;
  TSharedRef<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> local_18;
  
  if (param_1->Object != (FCameraCutSubSectionHierarchyNode *)0x0) {
    pTVar5 = TSharedFromThis<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>::AsShared
                       ((TSharedFromThis<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *)this,
                        &local_18);
    local_20.ReferenceController = (pTVar5->SharedReferenceCount).ReferenceController;
    pFVar1 = pTVar5->Object;
    if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28 = pFVar1;
    if (param_1->Object == (FCameraCutSubSectionHierarchyNode *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = param_1->Object;
    pTVar6 = &pFVar2->Parent;
    if (pTVar6 != (TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *)&local_28) {
      pTVar6->Object = pFVar1;
      local_28 = (FCameraCutSubSectionHierarchyNode *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pFVar2->Parent).SharedReferenceCount,&local_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    TArray<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>,TSizedDefaultAllocator<32>_>
    ::AddUniqueImpl<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>_const_&>
              (&this->Children,param_1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// operator() @ 15058e8b0

bool __thiscall
`MoviePipeline::FCameraCutSubSectionHierarchyNode::SetParent'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_3067789809754832484>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3067789809754832484>,
                       &`public:___cdecl_`public:_void___cdecl_MoviePipeline::FCameraCutSubSectionHierarchyNode::SetParent(TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

