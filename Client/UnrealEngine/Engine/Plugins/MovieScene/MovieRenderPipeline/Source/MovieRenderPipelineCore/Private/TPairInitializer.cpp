// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 4

// operator<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>_TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_> @ 14dc9ec70

TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>
* __thiscall
TPairInitializer<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams_&,TObjectPtr<UTextureRenderTarget2D>_const_&>
::
operator<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>_TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>
          (TPairInitializer<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams_&,TObjectPtr<UTextureRenderTarget2D>_const_&>
           *this,TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>
                 *__return_storage_ptr__)

{
  FMovieGraphImagePreviewDataPoolParams *pFVar1;
  TObjectPtr<UTextureRenderTarget2D>_u_0 *pTVar2;
  TObjectPtr<UTextureRenderTarget2D> TVar3;
  float fVar4;
  bool bVar5;
  EPixelFormat EVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  
  pFVar1 = this->Key;
  pTVar2 = &this->Value->field0_0x0;
  fVar4 = (pFVar1->RenderInitParams).TargetGamma;
  bVar5 = (pFVar1->RenderInitParams).bForceLinearGamma;
  EVar6 = (pFVar1->RenderInitParams).PixelFormat;
  bVar7 = (pFVar1->RenderInitParams).bIncludeInPreviewWindow;
  uVar8 = (pFVar1->RenderInitParams).field_0xf;
  *(TIntPoint<int>_u_0 *)__return_storage_ptr__ = (pFVar1->RenderInitParams).Size.field0_0x0;
  *(float *)&__return_storage_ptr__->field_0x8 = fVar4;
  __return_storage_ptr__->field_0xc = bVar5;
  __return_storage_ptr__->field_0xd = EVar6;
  __return_storage_ptr__->field_0xe = bVar7;
  __return_storage_ptr__->field_0xf = uVar8;
  uVar9 = (pFVar1->Identifier).RootBranchName.Number;
  *(uint *)&__return_storage_ptr__->field_0x10 =
       (pFVar1->Identifier).RootBranchName.ComparisonIndex.Value;
  *(uint *)&__return_storage_ptr__->field_0x14 = uVar9;
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x18,&(pFVar1->Identifier).LayerName)
  ;
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x28,
                     &(pFVar1->Identifier).RendererName);
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x38,
                     &(pFVar1->Identifier).SubResourceName);
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x48,&(pFVar1->Identifier).CameraName
                    );
  TVar3.field0_0x0 = (TObjectPtr<UTextureRenderTarget2D>_u_0)pTVar2->DebugPtr;
  *(TObjectPtr<UTextureRenderTarget2D>_u_0 *)&__return_storage_ptr__->field_0x58 =
       (UTextureRenderTarget2D *)TVar3.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar3.field0_0x0 != (UTextureRenderTarget2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar3.field0_0x0);
  }
  return __return_storage_ptr__;
}

// operator<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>_TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState> @ 14dc9ed00

TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>
* __thiscall
TPairInitializer<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams_&,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState_&&>
::
operator<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>_TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>
          (TPairInitializer<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams_&,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState_&&>
           *this,TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>
                 *__return_storage_ptr__)

{
  FMovieGraphImagePreviewDataPoolParams *pFVar1;
  FMovieGraphImagePreviewPoolState *pFVar2;
  float fVar3;
  bool bVar4;
  EPixelFormat EVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  
  pFVar1 = this->Key;
  pFVar2 = this->Value;
  fVar3 = (pFVar1->RenderInitParams).TargetGamma;
  bVar4 = (pFVar1->RenderInitParams).bForceLinearGamma;
  EVar5 = (pFVar1->RenderInitParams).PixelFormat;
  bVar6 = (pFVar1->RenderInitParams).bIncludeInPreviewWindow;
  uVar7 = (pFVar1->RenderInitParams).field_0xf;
  *(TIntPoint<int>_u_0 *)__return_storage_ptr__ = (pFVar1->RenderInitParams).Size.field0_0x0;
  *(float *)&__return_storage_ptr__->field_0x8 = fVar3;
  __return_storage_ptr__->field_0xc = bVar4;
  __return_storage_ptr__->field_0xd = EVar5;
  __return_storage_ptr__->field_0xe = bVar6;
  __return_storage_ptr__->field_0xf = uVar7;
  uVar8 = (pFVar1->Identifier).RootBranchName.Number;
  *(uint *)&__return_storage_ptr__->field_0x10 =
       (pFVar1->Identifier).RootBranchName.ComparisonIndex.Value;
  *(uint *)&__return_storage_ptr__->field_0x14 = uVar8;
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x18,&(pFVar1->Identifier).LayerName)
  ;
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x28,
                     &(pFVar1->Identifier).RendererName);
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x38,
                     &(pFVar1->Identifier).SubResourceName);
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x48,&(pFVar1->Identifier).CameraName
                    );
  *(ulong64 *)&__return_storage_ptr__->field_0x58 = pFVar2->LastUsedFrame;
  return __return_storage_ptr__;
}

// operator<FMovieGraphRenderDataIdentifier,int>_TTuple<FMovieGraphRenderDataIdentifier,int> @ 14dc9ed80

TTuple<FMovieGraphRenderDataIdentifier,int> * __thiscall
TPairInitializer<FMovieGraphRenderDataIdentifier_const_&,int_&&>::
operator<FMovieGraphRenderDataIdentifier,int>_TTuple<FMovieGraphRenderDataIdentifier,int>
          (TPairInitializer<FMovieGraphRenderDataIdentifier_const_&,int_&&> *this,
          TTuple<FMovieGraphRenderDataIdentifier,int> *__return_storage_ptr__)

{
  FMovieGraphRenderDataIdentifier *pFVar1;
  int *piVar2;
  uint uVar3;
  
  pFVar1 = this->Key;
  piVar2 = this->Value;
  uVar3 = (pFVar1->RootBranchName).Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (pFVar1->RootBranchName).ComparisonIndex.Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar3;
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x8,&pFVar1->LayerName);
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x18,&pFVar1->RendererName);
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x28,&pFVar1->SubResourceName);
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x38,&pFVar1->CameraName);
  *(int *)&__return_storage_ptr__->field_0x48 = *piVar2;
  return __return_storage_ptr__;
}

// operator<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>_TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_> @ 14dcfa080

TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>
* __thiscall
TPairInitializer<UMovieGraphFileOutputNode_const_*_const_&,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_const_&>
::
operator<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>_TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>
          (TPairInitializer<UMovieGraphFileOutputNode_const_*_const_&,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_const_&>
           *this,TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>
                 *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *_Src;
  
  pTVar3 = this->Value;
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(UMovieGraphFileOutputNode **)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)puVar1 = 0;
  iVar2 = pTVar3->ArrayNum;
  _Src = (pTVar3->AllocatorInstance).Data;
  *(int *)&__return_storage_ptr__->field_0x10 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x14 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x14);
    memcpy(*(void **)puVar1,_Src,(longlong)iVar2 << 3);
  }
  return __return_storage_ptr__;
}

