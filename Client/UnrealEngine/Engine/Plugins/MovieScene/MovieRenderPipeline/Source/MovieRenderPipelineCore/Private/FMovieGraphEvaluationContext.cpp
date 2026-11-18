// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 4

// StaticStruct @ 14dc69630

UScriptStruct * __cdecl FMovieGraphEvaluationContext::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphEvaluationContext.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UScriptStruct_FMovieGraphEvaluationContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieGraphEvaluationContext,(UObject *)pUVar1,
                         L"MovieGraphEvaluationContext");
  }
  return Z_Registration_Info_UScriptStruct_FMovieGraphEvaluationContext.OuterSingleton;
}

// FMovieGraphEvaluationContext @ 14dc722b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieGraphEvaluationContext * __thiscall
FMovieGraphEvaluationContext::FMovieGraphEvaluationContext
          (FMovieGraphEvaluationContext *this,FMovieGraphEvaluationContext *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  TMap<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo,0>_>
  *this_00;
  TArray<TObjectPtr<UMovieGraphSubgraphNode_const_>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<TSubclassOf<UMovieGraphSettingNode>,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  UMovieGraphPin *pUVar6;
  FScriptContainerElement *pFVar7;
  ITextData *pIVar8;
  undefined1 local_res8 [8];
  
  FMovieGraphTraversalContext::FMovieGraphTraversalContext(&this->UserContext,&param_1->UserContext)
  ;
  this_00 = &this->VisitedNodesByOwningGraph;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->VisitedNodesByOwningGraph).field_0x8 = 0;
  *(undefined8 *)&(this->VisitedNodesByOwningGraph).field_0x20 = 0;
  puVar1 = &(this->VisitedNodesByOwningGraph).field_0x48;
  *(undefined4 *)&(this->VisitedNodesByOwningGraph).field_0x28 = 0;
  *(undefined4 *)&(this->VisitedNodesByOwningGraph).field_0x2c = 0x80;
  *(undefined4 *)&(this->VisitedNodesByOwningGraph).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VisitedNodesByOwningGraph).field_0x34 = 0;
  *(undefined8 *)&(this->VisitedNodesByOwningGraph).field_0x40 = 0;
  *(undefined4 *)puVar1 = 0;
  if (this_00 != &param_1->VisitedNodesByOwningGraph) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->VisitedNodesByOwningGraph).field_0x38,
               (int *)puVar1,
               (ForElementType<FSetElementId> *)&(param_1->VisitedNodesByOwningGraph).field_0x38,
               *(int *)&(param_1->VisitedNodesByOwningGraph).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00,
                (TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->VisitedNodesByOwningGraph);
  }
  pUVar6 = (param_1->PinBeingFollowed).field0_0x0.DebugPtr;
  (this->PinBeingFollowed).field0_0x0.DebugPtr = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UMovieGraphPin *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  pTVar3 = &this->SubgraphStack;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->SubgraphStack).ArrayMax;
  iVar5 = (param_1->SubgraphStack).ArrayNum;
  pFVar7 = (param_1->SubgraphStack).AllocatorInstance.Data;
  (this->SubgraphStack).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar2);
    ConstructItems<TObjectPtr<UMovieGraphSubgraphNode_const_>,TObjectPtr<UMovieGraphSubgraphNode_const_>,int>
              ((pTVar3->AllocatorInstance).Data,(TObjectPtr<UMovieGraphSubgraphNode_const_> *)pFVar7
               ,iVar5);
  }
  this->bCircularGraphReferenceFound = param_1->bCircularGraphReferenceFound;
  (this->TraversalError).TextData.Reference = (ITextData *)0x0;
  pIVar8 = (param_1->TraversalError).TextData.Reference;
  (this->TraversalError).TextData.Reference = pIVar8;
  if (pIVar8 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar8 + 8))(pIVar8,local_res8);
  }
  pTVar4 = &this->NodeTypesToRemoveStack;
  (this->TraversalError).Flags = (param_1->TraversalError).Flags;
  piVar2 = &(this->NodeTypesToRemoveStack).ArrayMax;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->NodeTypesToRemoveStack).ArrayNum;
  pFVar7 = (param_1->NodeTypesToRemoveStack).AllocatorInstance.Data;
  (this->NodeTypesToRemoveStack).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar2);
    ConstructItems<TSubclassOf<UMovieGraphSettingNode>,TSubclassOf<UMovieGraphSettingNode>,int>
              ((pTVar4->AllocatorInstance).Data,(TSubclassOf<UMovieGraphSettingNode> *)pFVar7,iVar5)
    ;
  }
  return this;
}

// FMovieGraphEvaluationContext @ 14dc72460

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieGraphEvaluationContext * __thiscall
FMovieGraphEvaluationContext::FMovieGraphEvaluationContext(FMovieGraphEvaluationContext *this)

{
  FMovieGraphTraversalContext::FMovieGraphTraversalContext(&this->UserContext);
  *(undefined8 *)&this->VisitedNodesByOwningGraph = 0;
  *(undefined8 *)&(this->VisitedNodesByOwningGraph).field_0x8 = 0;
  *(undefined8 *)&(this->VisitedNodesByOwningGraph).field_0x20 = 0;
  *(undefined4 *)&(this->VisitedNodesByOwningGraph).field_0x28 = 0;
  *(undefined4 *)&(this->VisitedNodesByOwningGraph).field_0x2c = 0x80;
  *(undefined4 *)&(this->VisitedNodesByOwningGraph).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VisitedNodesByOwningGraph).field_0x34 = 0;
  *(undefined8 *)&(this->VisitedNodesByOwningGraph).field_0x40 = 0;
  *(undefined4 *)&(this->VisitedNodesByOwningGraph).field_0x48 = 0;
  (this->PinBeingFollowed).field0_0x0.DebugPtr = (UMovieGraphPin *)0x0;
  (this->SubgraphStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubgraphStack).ArrayNum = 0;
  (this->SubgraphStack).ArrayMax = 0;
  this->bCircularGraphReferenceFound = false;
  FText::FText(&this->TraversalError);
  (this->NodeTypesToRemoveStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodeTypesToRemoveStack).ArrayNum = 0;
  (this->NodeTypesToRemoveStack).ArrayMax = 0;
  return this;
}

// ~FMovieGraphEvaluationContext @ 14dc74160

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
FMovieGraphEvaluationContext::~FMovieGraphEvaluationContext(FMovieGraphEvaluationContext *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  void *pvVar3;
  
  pFVar1 = (this->NodeTypesToRemoveStack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->TraversalError).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pFVar1 = (this->SubgraphStack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->VisitedNodesByOwningGraph).field_0x48 = 0;
  pvVar3 = *(void **)&(this->VisitedNodesByOwningGraph).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->VisitedNodesByOwningGraph);
  pFVar1 = (this->UserContext).RenderDataIdentifier.CameraName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UserContext).RenderDataIdentifier.SubResourceName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UserContext).RenderDataIdentifier.RendererName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UserContext).RenderDataIdentifier.LayerName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

