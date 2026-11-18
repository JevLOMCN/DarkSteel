// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 5

// FMovieGraphOutputMergerFrame @ 14dcae0f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieGraphOutputMergerFrame * __thiscall
UE::MovieGraph::FMovieGraphOutputMergerFrame::FMovieGraphOutputMergerFrame
          (FMovieGraphOutputMergerFrame *this,FMovieGraphOutputMergerFrame *param_1)

{
  (this->EvaluatedConfig).Object = (param_1->EvaluatedConfig).Object;
  (param_1->EvaluatedConfig).Object = (UObject *)0x0;
  FMovieGraphTraversalContext::FMovieGraphTraversalContext
            (&this->TraversalContext,&param_1->TraversalContext);
  (this->ExpectedRenderPasses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExpectedRenderPasses).AllocatorInstance.Data =
       (param_1->ExpectedRenderPasses).AllocatorInstance.Data;
  (param_1->ExpectedRenderPasses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExpectedRenderPasses).ArrayNum = (param_1->ExpectedRenderPasses).ArrayNum;
  (this->ExpectedRenderPasses).ArrayMax = (param_1->ExpectedRenderPasses).ArrayMax;
  (param_1->ExpectedRenderPasses).ArrayNum = 0;
  (param_1->ExpectedRenderPasses).ArrayMax = 0;
  *(undefined8 *)&(this->ImageOutputData).field_0x0 = 0;
  *(undefined8 *)&(this->ImageOutputData).field_0x8 = 0;
  *(undefined8 *)&(this->ImageOutputData).field_0x20 = 0;
  *(undefined4 *)&(this->ImageOutputData).field_0x28 = 0;
  *(undefined4 *)&(this->ImageOutputData).field_0x2c = 0x80;
  *(undefined4 *)&(this->ImageOutputData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ImageOutputData).field_0x34 = 0;
  *(undefined8 *)&(this->ImageOutputData).field_0x40 = 0;
  *(undefined4 *)&(this->ImageOutputData).field_0x48 = 0;
  TSet<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>
              *)&this->ImageOutputData,
             (TSet<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>
              *)&param_1->ImageOutputData);
  *(undefined8 *)&(this->FileMetadata).field_0x0 = 0;
  *(undefined8 *)&(this->FileMetadata).field_0x8 = 0;
  *(undefined8 *)&(this->FileMetadata).field_0x20 = 0;
  *(undefined4 *)&(this->FileMetadata).field_0x28 = 0;
  *(undefined4 *)&(this->FileMetadata).field_0x2c = 0x80;
  *(undefined4 *)&(this->FileMetadata).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FileMetadata).field_0x34 = 0;
  *(undefined8 *)&(this->FileMetadata).field_0x40 = 0;
  *(undefined4 *)&(this->FileMetadata).field_0x48 = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&this->FileMetadata,
             (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&param_1->FileMetadata);
  *(undefined8 *)&(this->NodeInstanceToPayloads).field_0x0 = 0;
  *(undefined8 *)&(this->NodeInstanceToPayloads).field_0x8 = 0;
  *(undefined8 *)&(this->NodeInstanceToPayloads).field_0x20 = 0;
  *(undefined4 *)&(this->NodeInstanceToPayloads).field_0x28 = 0;
  *(undefined4 *)&(this->NodeInstanceToPayloads).field_0x2c = 0x80;
  *(undefined4 *)&(this->NodeInstanceToPayloads).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NodeInstanceToPayloads).field_0x34 = 0;
  *(undefined8 *)&(this->NodeInstanceToPayloads).field_0x40 = 0;
  *(undefined4 *)&(this->NodeInstanceToPayloads).field_0x48 = 0;
  TSet<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&this->NodeInstanceToPayloads,
             (TSet<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&param_1->NodeInstanceToPayloads);
  return this;
}

// FMovieGraphOutputMergerFrame @ 14dcae220

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieGraphOutputMergerFrame * __thiscall
UE::MovieGraph::FMovieGraphOutputMergerFrame::FMovieGraphOutputMergerFrame
          (FMovieGraphOutputMergerFrame *this)

{
  (this->EvaluatedConfig).Object = (UObject *)0x0;
  FMovieGraphTraversalContext::FMovieGraphTraversalContext(&this->TraversalContext);
  (this->ExpectedRenderPasses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExpectedRenderPasses).ArrayNum = 0;
  (this->ExpectedRenderPasses).ArrayMax = 0;
  *(undefined8 *)&this->ImageOutputData = 0;
  *(undefined8 *)&(this->ImageOutputData).field_0x8 = 0;
  *(undefined8 *)&(this->ImageOutputData).field_0x20 = 0;
  *(undefined4 *)&(this->ImageOutputData).field_0x28 = 0;
  *(undefined4 *)&(this->ImageOutputData).field_0x2c = 0x80;
  *(undefined4 *)&(this->ImageOutputData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ImageOutputData).field_0x34 = 0;
  *(undefined8 *)&(this->ImageOutputData).field_0x40 = 0;
  *(undefined4 *)&(this->ImageOutputData).field_0x48 = 0;
  *(undefined8 *)&this->FileMetadata = 0;
  *(undefined8 *)&(this->FileMetadata).field_0x8 = 0;
  *(undefined8 *)&(this->FileMetadata).field_0x20 = 0;
  *(undefined4 *)&(this->FileMetadata).field_0x28 = 0;
  *(undefined4 *)&(this->FileMetadata).field_0x2c = 0x80;
  *(undefined4 *)&(this->FileMetadata).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FileMetadata).field_0x34 = 0;
  *(undefined8 *)&(this->FileMetadata).field_0x40 = 0;
  *(undefined4 *)&(this->FileMetadata).field_0x48 = 0;
  *(undefined8 *)&this->NodeInstanceToPayloads = 0;
  *(undefined8 *)&(this->NodeInstanceToPayloads).field_0x8 = 0;
  *(undefined8 *)&(this->NodeInstanceToPayloads).field_0x20 = 0;
  *(undefined4 *)&(this->NodeInstanceToPayloads).field_0x28 = 0;
  *(undefined4 *)&(this->NodeInstanceToPayloads).field_0x2c = 0x80;
  *(undefined4 *)&(this->NodeInstanceToPayloads).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NodeInstanceToPayloads).field_0x34 = 0;
  *(undefined8 *)&(this->NodeInstanceToPayloads).field_0x40 = 0;
  *(undefined4 *)&(this->NodeInstanceToPayloads).field_0x48 = 0;
  return this;
}

// ~FMovieGraphOutputMergerFrame @ 14dcb22f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UE::MovieGraph::FMovieGraphOutputMergerFrame::~FMovieGraphOutputMergerFrame
          (FMovieGraphOutputMergerFrame *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  UObject *pUVar3;
  
  *(undefined4 *)&(this->NodeInstanceToPayloads).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NodeInstanceToPayloads).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NodeInstanceToPayloads);
  *(undefined4 *)&(this->FileMetadata).field_0x48 = 0;
  pvVar1 = *(void **)&(this->FileMetadata).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FileMetadata);
  *(undefined4 *)&(this->ImageOutputData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ImageOutputData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ImageOutputData);
  DestructItems<FMovieGraphRenderDataIdentifier,int>
            ((FMovieGraphRenderDataIdentifier *)(this->ExpectedRenderPasses).AllocatorInstance.Data,
             (this->ExpectedRenderPasses).ArrayNum);
  pFVar2 = (this->ExpectedRenderPasses).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TraversalContext).RenderDataIdentifier.CameraName.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TraversalContext).RenderDataIdentifier.SubResourceName.Data.AllocatorInstance.Data
  ;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TraversalContext).RenderDataIdentifier.RendererName.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TraversalContext).RenderDataIdentifier.LayerName.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pUVar3 = (this->EvaluatedConfig).Object;
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
    (this->EvaluatedConfig).Object = (UObject *)0x0;
  }
  return;
}

// operator= @ 14dcb3c60

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieGraphOutputMergerFrame * __thiscall
UE::MovieGraph::FMovieGraphOutputMergerFrame::operator=
          (FMovieGraphOutputMergerFrame *this,FMovieGraphOutputMergerFrame *param_1)

{
  TArray<FMovieGraphRenderDataIdentifier,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FMovieGraphRenderDataIdentifier,TSizedDefaultAllocator<32>_> *pTVar2;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  
  if (this != param_1) {
    pUVar3 = (this->EvaluatedConfig).Object;
    if (pUVar3 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
      (this->EvaluatedConfig).Object = (UObject *)0x0;
    }
    (this->EvaluatedConfig).Object = (param_1->EvaluatedConfig).Object;
    (param_1->EvaluatedConfig).Object = (UObject *)0x0;
  }
  FMovieGraphTraversalContext::operator=(&this->TraversalContext,&param_1->TraversalContext);
  pTVar1 = &param_1->ExpectedRenderPasses;
  pTVar2 = &this->ExpectedRenderPasses;
  if (pTVar2 != pTVar1) {
    DestructItems<FMovieGraphRenderDataIdentifier,int>
              ((FMovieGraphRenderDataIdentifier *)(pTVar2->AllocatorInstance).Data,
               (this->ExpectedRenderPasses).ArrayNum);
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ExpectedRenderPasses).ArrayNum = (param_1->ExpectedRenderPasses).ArrayNum;
    (this->ExpectedRenderPasses).ArrayMax = (param_1->ExpectedRenderPasses).ArrayMax;
    (param_1->ExpectedRenderPasses).ArrayNum = 0;
    (param_1->ExpectedRenderPasses).ArrayMax = 0;
  }
  if (&this->ImageOutputData != &param_1->ImageOutputData) {
    TSet<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>
                *)&this->ImageOutputData,
               (TSet<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>
                *)&param_1->ImageOutputData);
  }
  if (&this->FileMetadata != &param_1->FileMetadata) {
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&this->FileMetadata,
               (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&param_1->FileMetadata);
  }
  if (&this->NodeInstanceToPayloads != &param_1->NodeInstanceToPayloads) {
    TSet<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)&this->NodeInstanceToPayloads,
               (TSet<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)&param_1->NodeInstanceToPayloads);
  }
  return this;
}

// GetValidationInfo @ 14dcd4300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieGraphRenderDataValidationInfo * __thiscall
UE::MovieGraph::FMovieGraphOutputMergerFrame::GetValidationInfo
          (FMovieGraphOutputMergerFrame *this,
          FMovieGraphRenderDataValidationInfo *__return_storage_ptr__,
          FMovieGraphRenderDataIdentifier *param_1,bool param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  FMovieGraphOutputMergerFrame *pFVar3;
  FMovieGraphOutputMergerFrame *pFVar4;
  TMap<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *pTVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  FMovieGraphRenderDataValidationInfo *pFVar13;
  ForAnyElementType FVar14;
  undefined1 *puVar15;
  wchar_t *pwVar16;
  FName *pFVar17;
  FName *pFVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ForElementType<unsigned_int> FVar22;
  uint *puVar23;
  undefined1 *puVar24;
  uint uVar25;
  undefined8 uVar26;
  bool bVar27;
  undefined1 auStack_2e8 [32];
  char local_2c8 [8];
  undefined8 local_2c0;
  FMovieGraphOutputMergerFrame *local_2b8;
  int local_2b0;
  uint uStack_2ac;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2a8;
  undefined4 local_2a0;
  int iStack_29c;
  int iStack_298;
  undefined4 uStack_294;
  uint local_290;
  uint uStack_28c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_288;
  undefined4 local_280;
  uint uStack_27c;
  uint uStack_278;
  undefined4 uStack_274;
  TMap<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *local_270;
  int iStack_268;
  uint uStack_264;
  undefined1 *local_260;
  undefined4 uStack_258;
  int iStack_254;
  int local_250;
  int iStack_24c;
  int iStack_248;
  undefined4 uStack_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  int local_234;
  undefined4 local_230;
  int local_22c;
  undefined1 local_228 [12];
  undefined1 local_21c [20];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_208;
  longlong *local_1e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1e0;
  TMap<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *local_1c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b8;
  undefined8 uStack_198;
  undefined1 local_188 [32];
  ForElementType<unsigned_int> local_168;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  FScriptContainerElement local_150 [8];
  ForAnyElementType local_148;
  uint local_140;
  undefined1 local_138 [32];
  ForElementType<unsigned_int> local_118;
  uint local_110;
  int local_10c;
  int local_108;
  int local_104;
  FScriptContainerElement local_100 [8];
  ForAnyElementType local_f8;
  uint local_f0;
  undefined1 local_e8 [40];
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  undefined1 local_98 [40];
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2e8;
  __return_storage_ptr__->LayerCount = 0;
  __return_storage_ptr__->BranchCount = 0;
  uVar26 = 1;
  __return_storage_ptr__->ActiveBranchRendererCount = 0;
  __return_storage_ptr__->ActiveRendererSubresourceCount = 0;
  __return_storage_ptr__->ActiveCameraCount = 0;
  uVar8 = (this->ExpectedRenderPasses).ArrayNum;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_98._32_8_ = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_8_ = 0;
  local_e8._32_8_ = (ForElementType<unsigned_int>)0x0;
  local_c0 = 0;
  local_bc = 0x80;
  local_b8 = -1;
  local_b4 = 0;
  local_a8 = (ForElementType<FSetElementId>)0x0;
  local_a0 = 0;
  local_188._0_8_ = (FScriptContainerElement *)0x0;
  local_188._8_8_ = 0;
  local_168 = (ForElementType<unsigned_int>)0x0;
  local_160 = 0;
  local_15c = 0x80;
  local_158 = -1;
  local_154 = 0;
  local_148.Data = (FScriptContainerElement *)0x0;
  local_140 = 0;
  local_138._0_8_ = (FScriptContainerElement *)0x0;
  local_138._8_8_ = 0;
  local_118 = (ForElementType<unsigned_int>)0x0;
  local_110 = 0;
  local_10c = 0x80;
  local_108 = -1;
  local_104 = 0;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  local_2c0 = 1;
  iVar6 = 1;
  local_2c8[0] = param_2;
  local_2b8 = this;
  if (uVar8 != 0) {
    if ((int)uVar8 < 0) goto LAB_14dcd4f86;
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_98,uVar8);
    iVar9 = iVar6;
    if (3 < uVar8) {
      uVar21 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_240 = (undefined4)lVar11;
      iVar9 = 1 << ((byte)lVar11 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar9)) {
      local_50 = iVar9;
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Rehash
                ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98);
    }
  }
  if ((uint)(local_e8._8_4_ - local_b4) < uVar8) {
    if ((int)uVar8 < 0) goto LAB_14dcd4f86;
    TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_e8,uVar8);
    if (3 < uVar8) {
      uVar21 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_23c = (undefined4)lVar11;
      iVar6 = 1 << ((byte)lVar11 & 0x1f);
    }
    if ((local_a0 == 0) || (local_a0 < iVar6)) {
      local_a0 = iVar6;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Rehash
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_e8);
    }
  }
  if ((uint)(local_188._8_4_ - local_154) < uVar8) {
    if ((int)uVar8 < 0) goto LAB_14dcd4f86;
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_188,uVar8);
    uVar21 = 1;
    if (3 < uVar8) {
      uVar21 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_238 = (undefined4)lVar11;
      uVar21 = (ulonglong)(uint)(1 << ((byte)lVar11 & 0x1f));
    }
    uVar7 = (uint)uVar21;
    if ((local_140 != 0) && ((int)uVar7 <= (int)local_140)) goto LAB_14dcd47bf;
    local_140 = uVar7;
    if (local_148.Data != (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_148,0,0,4);
    }
    if (uVar7 != 0) {
      uVar25 = uVar7;
      if (uVar7 < 2) {
        if (local_148.Data != (FScriptContainerElement *)0x0) {
          uVar25 = 0;
          goto LAB_14dcd45ca;
        }
      }
      else {
LAB_14dcd45ca:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_148,0,uVar25,4);
      }
      if (0 < (int)uVar7) {
        uVar20 = 0;
        do {
          FVar14.Data = local_150;
          if (local_148.Data != (FScriptContainerElement *)0x0) {
            FVar14.Data = local_148.Data;
          }
          uVar10 = uVar20 & (longlong)(int)uVar7 - 1U;
          uVar20 = uVar20 + 1;
          *(undefined4 *)(FVar14.Data + uVar10 * 4) = 0xffffffff;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
    }
    if (local_140 != 0) {
      pTStack_2a8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_188 + 0x10);
      uStack_2ac = 1;
      local_2b0 = 0;
      iStack_29c = 0;
      iStack_298 = 0;
      if (local_160 != 0) {
        FVar22 = (ForElementType<unsigned_int>)((longlong)local_188 + 0x10);
        if (local_168 != (ForElementType<unsigned_int>)0x0) {
          FVar22 = local_168;
        }
        uVar7 = *(uint *)FVar22;
        iStack_298 = 0;
        local_2b0 = 0;
        while (uVar7 == 0) {
          iStack_298 = iStack_298 + 0x20;
          lVar11 = (longlong)local_2b0;
          local_2b0 = local_2b0 + 1;
          if ((int)((local_160 + -1 >> 0x1f & 0x1fU) + local_160 + -1) >> 5 < local_2b0)
          goto LAB_14dcd46f0;
          uVar7 = ((uint *)((longlong)FVar22 + 4))[lVar11];
        }
        uStack_2ac = -uVar7 & uVar7;
        uVar21 = (ulonglong)uStack_2ac * 2 + 1;
        lVar11 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_234 = (int)lVar11;
        iStack_29c = local_234 + -1 + iStack_298;
        if (local_160 < iStack_29c) {
LAB_14dcd46f0:
          iStack_29c = local_160;
        }
      }
      local_2a0 = 0xffffffff;
      local_21c._12_8_ = local_188;
      local_208._padding_ = CONCAT44(uStack_2ac,local_2b0);
      local_208.CurrentBitIndex = iStack_29c;
      local_208.UnvisitedBitMask = 0xffffffff;
      local_208._28_4_ = uStack_294;
      local_208.BaseBitIndex = iStack_298;
      uVar26 = local_2c0;
      iVar6 = iStack_29c;
      local_208.Array = pTStack_2a8;
      if (iStack_29c < local_160) {
        do {
          puVar1 = (undefined8 *)(*(longlong *)local_21c._12_8_ + (longlong)iVar6 * 0x18);
          iVar19 = *(int *)(*(longlong *)local_21c._12_8_ + 8 + (longlong)iVar6 * 0x18);
          iVar9 = iVar19 + -1;
          if (iVar19 == 0) {
            pwVar16 = L"";
            iVar9 = 0;
          }
          else {
            pwVar16 = (wchar_t *)*puVar1;
          }
          uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar16);
          uVar7 = local_140 - 1 & uVar7;
          *(uint *)((longlong)puVar1 + 0x14) = uVar7;
          FVar14.Data = local_150;
          if (local_148.Data != (FScriptContainerElement *)0x0) {
            FVar14.Data = local_148.Data;
          }
          uVar21 = (longlong)(int)local_140 - 1U & (longlong)(int)uVar7;
          *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(FVar14.Data + uVar21 * 4);
          *(int *)(FVar14.Data + uVar21 * 4) = iVar6;
          local_208.UnvisitedBitMask = local_208.UnvisitedBitMask & ~local_208._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_208);
          uVar26 = local_2c0;
          iVar6 = local_208.CurrentBitIndex;
        } while (local_208.CurrentBitIndex < (local_208.Array)->NumBits);
      }
    }
  }
LAB_14dcd47bf:
  uVar21 = 0;
  if (uVar8 <= (uint)(local_138._8_4_ - local_104)) goto LAB_14dcd4a55;
  if ((int)uVar8 < 0) {
LAB_14dcd4f86:
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidSetNum((longlong)(int)uVar8);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_138,uVar8);
  uVar25 = (uint)uVar26;
  uVar7 = uVar25;
  if (3 < uVar8) {
    uVar20 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_230 = (undefined4)lVar11;
    uVar7 = uVar25 << ((byte)lVar11 & 0x1f);
  }
  if ((local_f0 != 0) && ((int)uVar7 <= (int)local_f0)) goto LAB_14dcd4a55;
  local_f0 = uVar7;
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_f8,0,0,4);
  }
  if (uVar7 != 0) {
    uVar8 = uVar7;
    if (uVar7 < 2) {
      if (local_f8.Data != (FScriptContainerElement *)0x0) {
        uVar8 = 0;
        goto LAB_14dcd486b;
      }
    }
    else {
LAB_14dcd486b:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_f8,0,uVar8,4);
    }
    if (0 < (int)uVar7) {
      uVar10 = (ulonglong)uVar7;
      uVar20 = uVar21;
      do {
        FVar14.Data = local_100;
        if (local_f8.Data != (FScriptContainerElement *)0x0) {
          FVar14.Data = local_f8.Data;
        }
        uVar12 = uVar20 & (longlong)(int)uVar7 - 1U;
        uVar20 = uVar20 + 1;
        *(undefined4 *)(FVar14.Data + uVar12 * 4) = 0xffffffff;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  if (local_f0 != 0) {
    pTStack_288 = (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10);
    local_290 = 0;
    uStack_27c = 0;
    uStack_278 = 0;
    uStack_28c = uVar25;
    if (local_110 != 0) {
      FVar22 = (ForElementType<unsigned_int>)((longlong)local_138 + 0x10);
      if (local_118 != (ForElementType<unsigned_int>)0x0) {
        FVar22 = local_118;
      }
      uVar8 = *(uint *)FVar22;
      uVar20 = uVar21;
      while (uVar8 == 0) {
        uStack_278 = (int)uVar20 + 0x20;
        uVar20 = (ulonglong)uStack_278;
        iVar6 = (int)uVar21;
        local_290 = iVar6 + 1;
        uVar21 = (ulonglong)local_290;
        if ((int)(((int)(local_110 - 1) >> 0x1f & 0x1fU) + (local_110 - 1)) >> 5 < (int)local_290)
        goto LAB_14dcd498e;
        uVar8 = ((uint *)((longlong)FVar22 + 4))[iVar6];
      }
      uStack_28c = -uVar8 & uVar8;
      uVar21 = (ulonglong)uStack_28c * 2 + 1;
      lVar11 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_22c = (int)lVar11;
      uStack_27c = (uStack_278 - 1) + local_22c;
      uVar21 = (ulonglong)uStack_27c;
      if ((int)local_110 < (int)uStack_27c) {
LAB_14dcd498e:
        uVar21 = (ulonglong)local_110;
        uStack_27c = local_110;
      }
    }
    local_280 = 0xffffffff;
    local_1e8 = (longlong *)local_138;
    local_1e0._padding_ = CONCAT44(uStack_28c,local_290);
    local_1e0.CurrentBitIndex = uStack_27c;
    local_1e0.UnvisitedBitMask = 0xffffffff;
    local_1e0._28_4_ = uStack_274;
    local_1e0.BaseBitIndex = uStack_278;
    local_1e0.Array = pTStack_288;
    if ((int)uVar21 < (int)local_110) {
      do {
        iVar19 = (int)uVar21;
        puVar1 = (undefined8 *)(*local_1e8 + (longlong)iVar19 * 0x18);
        iVar9 = *(int *)(*local_1e8 + 8 + (longlong)iVar19 * 0x18);
        iVar6 = iVar9 + -1;
        if (iVar9 == 0) {
          pwVar16 = L"";
          iVar6 = 0;
        }
        else {
          pwVar16 = (wchar_t *)*puVar1;
        }
        uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar16);
        uVar8 = local_f0 - 1 & uVar8;
        *(uint *)((longlong)puVar1 + 0x14) = uVar8;
        FVar14.Data = local_100;
        if (local_f8.Data != (FScriptContainerElement *)0x0) {
          FVar14.Data = local_f8.Data;
        }
        uVar21 = (longlong)(int)local_f0 - 1U & (longlong)(int)uVar8;
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(FVar14.Data + uVar21 * 4);
        *(int *)(FVar14.Data + uVar21 * 4) = iVar19;
        local_1e0.UnvisitedBitMask = local_1e0.UnvisitedBitMask & ~local_1e0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1e0);
        uVar21 = (ulonglong)(uint)local_1e0.CurrentBitIndex;
      } while (local_1e0.CurrentBitIndex < (local_1e0.Array)->NumBits);
    }
  }
LAB_14dcd4a55:
  pFVar3 = local_2b8;
  iVar6 = (local_2b8->ExpectedRenderPasses).ArrayNum;
  pFVar17 = (FName *)(local_2b8->ExpectedRenderPasses).AllocatorInstance.Data;
  pFVar18 = pFVar17 + (longlong)iVar6 * 9;
  while( true ) {
    if ((pFVar3->ExpectedRenderPasses).ArrayNum != iVar6) {
      local_2c8[1] = 0;
      `TCheckedPointerIterator<FMovieGraphRenderDataIdentifier_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_2c8 + 1);
    }
    pFVar4 = local_2b8;
    if (pFVar17 == pFVar18) break;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,
               (FString *)local_228,(bool *)(pFVar17 + 1));
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_e8,
               (FName *)(local_228 + 4),(bool *)pFVar17);
    if (*pFVar17 == param_1->RootBranchName) {
      uVar8 = pFVar17[8].ComparisonIndex.Value;
      uVar7 = (param_1->CameraName).Data.ArrayNum;
      if (uVar8 == uVar7) {
        if (1 < (int)uVar8) {
          iVar9 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)pFVar17[7],
                             (wchar_t *)(param_1->CameraName).Data.AllocatorInstance.Data);
          bVar27 = iVar9 == 0;
          goto LAB_14dcd4aeb;
        }
      }
      else {
        bVar27 = uVar8 + uVar7 == 1;
LAB_14dcd4aeb:
        if (!bVar27) goto LAB_14dcd4b37;
      }
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_188,
                 (FString *)(local_228 + 8),(bool *)(pFVar17 + 3));
      uVar8 = pFVar17[4].ComparisonIndex.Value;
      uVar7 = (param_1->RendererName).Data.ArrayNum;
      if (uVar8 == uVar7) {
        if (1 < (int)uVar8) {
          iVar9 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)pFVar17[3],
                             (wchar_t *)(param_1->RendererName).Data.AllocatorInstance.Data);
          bVar27 = iVar9 == 0;
          goto LAB_14dcd4b2b;
        }
      }
      else {
        bVar27 = uVar8 + uVar7 == 1;
LAB_14dcd4b2b:
        if (!bVar27) goto LAB_14dcd4b37;
      }
      __return_storage_ptr__->ActiveRendererSubresourceCount =
           __return_storage_ptr__->ActiveRendererSubresourceCount + 1;
    }
LAB_14dcd4b37:
    if (*pFVar17 == param_1->RootBranchName) {
      uVar8 = pFVar17[8].ComparisonIndex.Value;
      iVar9 = uVar8 - 1;
      if (uVar8 == 0) {
        pwVar16 = L"";
        iVar9 = 0;
      }
      else {
        pwVar16 = *(wchar_t **)(pFVar17 + 7);
      }
      uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar16);
      iVar9 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
              FindIndexByHash<FString>
                        ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_138,
                         uVar8,(FString *)(pFVar17 + 7));
      if (iVar9 == -1) {
        __return_storage_ptr__->ActiveCameraCount = __return_storage_ptr__->ActiveCameraCount + 1;
      }
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_138,
                 (FString *)local_21c,(bool *)(pFVar17 + 7));
    }
    pFVar17 = pFVar17 + 9;
  }
  if (local_2c8[0] != '\0') {
    iStack_268 = 0;
    local_250 = 0;
    local_260 = &(local_2b8->ImageOutputData).field_0x10;
    iVar6 = *(int *)&(local_2b8->ImageOutputData).field_0x28;
    local_270 = &local_2b8->ImageOutputData;
    iStack_254 = 0;
    if (iVar6 == 0) {
LAB_14dcd4c41:
      uStack_264 = (uint)local_2c0;
    }
    else {
      puVar23 = *(uint **)&(local_2b8->ImageOutputData).field_0x20;
      if (puVar23 == (uint *)0x0) {
        puVar23 = (uint *)local_260;
      }
      uStack_264 = *puVar23;
      while (uStack_264 == 0) {
        lVar11 = (longlong)iStack_268;
        local_250 = local_250 + 0x20;
        iStack_268 = iStack_268 + 1;
        iStack_254 = iVar6;
        if ((int)((iVar6 + -1 >> 0x1f & 0x1fU) + iVar6 + -1) >> 5 < iStack_268) goto LAB_14dcd4c41;
        uStack_264 = puVar23[lVar11 + 1];
      }
      uStack_264 = -uStack_264 & uStack_264;
      uVar21 = (ulonglong)uStack_264 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_2b8 = (FMovieGraphOutputMergerFrame *)CONCAT44(local_2b8._4_4_,(int)lVar11);
      iStack_254 = (int)lVar11 + -1 + local_250;
      if (iVar6 < iStack_254) {
        iStack_254 = iVar6;
      }
    }
    iStack_248 = *(int *)&(pFVar4->ImageOutputData).field_0x8 -
                 *(int *)&(pFVar4->ImageOutputData).field_0x34;
    uVar8 = *(uint *)&(pFVar4->ImageOutputData).field_0x28;
    uStack_258 = 0xffffffff;
    TStack_1b8.CurrentBitIndex = iStack_254;
    TStack_1b8.UnvisitedBitMask = 0xffffffff;
    puVar24 = &(pFVar4->ImageOutputData).field_0x10;
    TStack_1b8._padding_ = CONCAT44(uStack_264,iStack_268);
    uVar7 = uVar8 & 0xffffffe0;
    iVar9 = (int)uVar8 >> 5;
    TStack_1b8._28_4_ = iStack_254;
    TStack_1b8.BaseBitIndex = local_250;
    uStack_198 = CONCAT44(uStack_244,iStack_248);
    iStack_24c = iStack_254;
    local_21c._4_8_ = local_270;
    local_1c0 = local_270;
    TStack_1b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_260;
    if ((((int)uVar8 < 0) || (iVar6 < (int)uVar8)) &&
       (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar27)) {
      pcVar2 = (code *)swi(3);
      pFVar13 = (FMovieGraphRenderDataValidationInfo *)(*pcVar2)();
      return pFVar13;
    }
    uVar26 = local_21c._4_8_;
    uVar25 = *(uint *)&(pFVar4->ImageOutputData).field_0x28;
    if (uVar8 != uVar25) {
      puVar15 = *(undefined1 **)&(pFVar4->ImageOutputData).field_0x20;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = puVar24;
      }
      uVar8 = -1 << ((byte)uVar8 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar9 * 4);
      while (uVar8 == 0) {
        lVar11 = (longlong)iVar9;
        uVar7 = uVar7 + 0x20;
        iVar9 = iVar9 + 1;
        uVar8 = uVar25;
        if ((int)(((int)(uVar25 - 1) >> 0x1f & 0x1fU) + (uVar25 - 1)) >> 5 < iVar9)
        goto LAB_14dcd4d60;
        uVar8 = *(uint *)(puVar15 + lVar11 * 4 + 4);
      }
      uVar21 = (ulonglong)(-uVar8 & uVar8) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_2c0 = CONCAT44(local_2c0._4_4_,(int)lVar11);
      uVar8 = (int)lVar11 + -1 + uVar7;
      if ((int)uVar25 < (int)uVar8) {
        uVar8 = uVar25;
      }
    }
LAB_14dcd4d60:
    do {
      pTVar5 = local_1c0;
      if (*(int *)&local_1c0->field_0x8 - *(int *)&local_1c0->field_0x34 != (int)uStack_198) {
        local_2c8[0] = '\0';
        `TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_2c8);
      }
      if (((TStack_1b8.CurrentBitIndex == uVar8) &&
          (TStack_1b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar24)) &&
         (pTVar5 == (TMap<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
                     *)uVar26)) break;
      pFVar18 = (FName *)(*(longlong *)pTVar5 + (longlong)TStack_1b8.CurrentBitIndex * 0x58);
      lVar11 = *(longlong *)((longlong)pFVar18[9] + 0x18);
      if ((lVar11 == 0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("Payload",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphDataTypes.cpp"
                              ,0x62,L""), bVar27)) {
        pcVar2 = (code *)swi(3);
        pFVar13 = (FMovieGraphRenderDataValidationInfo *)(*pcVar2)();
        return pFVar13;
      }
      if ((*(char *)(lVar11 + 0x14a) != '\0') && (*pFVar18 == param_1->RootBranchName)) {
        uVar7 = pFVar18[8].ComparisonIndex.Value;
        uVar25 = (param_1->CameraName).Data.ArrayNum;
        if (uVar7 == uVar25) {
          if (1 < (int)uVar7) {
            iVar6 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)pFVar18[7],
                               (wchar_t *)(param_1->CameraName).Data.AllocatorInstance.Data);
            bVar27 = iVar6 == 0;
            goto LAB_14dcd4e11;
          }
        }
        else {
          bVar27 = uVar7 + uVar25 == 1;
LAB_14dcd4e11:
          if (!bVar27) goto LAB_14dcd4e89;
        }
        if (local_188._8_4_ != local_154) {
          uVar7 = pFVar18[4].ComparisonIndex.Value;
          iVar6 = uVar7 - 1;
          if (uVar7 == 0) {
            pwVar16 = L"";
            iVar6 = 0;
          }
          else {
            pwVar16 = *(wchar_t **)(pFVar18 + 3);
          }
          uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar16);
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::RemoveImpl<FString>
                    ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_188,
                     uVar7,(FString *)(pFVar18 + 3));
        }
        uVar7 = pFVar18[4].ComparisonIndex.Value;
        uVar25 = (param_1->RendererName).Data.ArrayNum;
        if (uVar7 == uVar25) {
          if (1 < (int)uVar7) {
            iVar6 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)pFVar18[3],
                               (wchar_t *)(param_1->RendererName).Data.AllocatorInstance.Data);
            bVar27 = iVar6 == 0;
            goto LAB_14dcd4e7d;
          }
        }
        else {
          bVar27 = uVar7 + uVar25 == 1;
LAB_14dcd4e7d:
          if (!bVar27) goto LAB_14dcd4e89;
        }
        __return_storage_ptr__->ActiveRendererSubresourceCount =
             __return_storage_ptr__->ActiveRendererSubresourceCount + -1;
      }
LAB_14dcd4e89:
      TStack_1b8.UnvisitedBitMask = TStack_1b8.UnvisitedBitMask & ~TStack_1b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b8);
    } while( true );
  }
  __return_storage_ptr__->LayerCount = local_98._8_4_ - local_64;
  __return_storage_ptr__->BranchCount = local_e8._8_4_ - local_b4;
  __return_storage_ptr__->ActiveBranchRendererCount = local_188._8_4_ - local_154;
  local_f0 = 0;
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_138);
  local_140 = 0;
  if (local_148.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_188);
  local_a0 = 0;
  if (local_a8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_e8);
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return __return_storage_ptr__;
}

