// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 3

// ~FMoviePipelineMergerOutputFrame @ 14dd0d4e0

void __thiscall
FMoviePipelineMergerOutputFrame::~FMoviePipelineMergerOutputFrame
          (FMoviePipelineMergerOutputFrame *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->ImageOutputData).field_0x48 = 0;
  this->_padding_ = (longlong)&___7FMoviePipelineMergerOutputFrame__6B_;
  pvVar1 = *(void **)&(this->ImageOutputData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ImageOutputData);
  DestructItems<FMoviePipelinePassIdentifier,int>
            ((FMoviePipelinePassIdentifier *)(this->ExpectedRenderPasses).AllocatorInstance.Data,
             (this->ExpectedRenderPasses).ArrayNum);
  pFVar2 = (this->ExpectedRenderPasses).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FMoviePipelineFrameOutputState::~FMoviePipelineFrameOutputState(&this->FrameOutputState);
  return;
}

// FMoviePipelineMergerOutputFrame @ 14dd6a680

FMoviePipelineMergerOutputFrame * __thiscall
FMoviePipelineMergerOutputFrame::FMoviePipelineMergerOutputFrame
          (FMoviePipelineMergerOutputFrame *this,FMoviePipelineMergerOutputFrame *param_1)

{
  int *piVar1;
  TArray<FMoviePipelinePassIdentifier,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FMoviePipelinePassIdentifier *pFVar4;
  
  this->_padding_ = (longlong)&___7FMoviePipelineMergerOutputFrame__6B_;
  FMoviePipelineFrameOutputState::FMoviePipelineFrameOutputState
            (&this->FrameOutputState,&param_1->FrameOutputState);
  pTVar2 = &this->ExpectedRenderPasses;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->ExpectedRenderPasses).ArrayMax;
  iVar3 = (param_1->ExpectedRenderPasses).ArrayNum;
  pFVar4 = (FMoviePipelinePassIdentifier *)(param_1->ExpectedRenderPasses).AllocatorInstance.Data;
  (this->ExpectedRenderPasses).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    ConstructItems<FMoviePipelinePassIdentifier,FMoviePipelinePassIdentifier,int>
              ((pTVar2->AllocatorInstance).Data,pFVar4,iVar3);
  }
  *(undefined8 *)&(this->ImageOutputData).field_0x0 = 0;
  *(undefined8 *)&(this->ImageOutputData).field_0x8 = 0;
  *(undefined8 *)&(this->ImageOutputData).field_0x20 = 0;
  *(undefined4 *)&(this->ImageOutputData).field_0x28 = 0;
  *(undefined4 *)&(this->ImageOutputData).field_0x2c = 0x80;
  *(undefined4 *)&(this->ImageOutputData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ImageOutputData).field_0x34 = 0;
  *(undefined8 *)&(this->ImageOutputData).field_0x40 = 0;
  *(undefined4 *)&(this->ImageOutputData).field_0x48 = 0;
  TSet<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>
              *)&this->ImageOutputData,
             (TSet<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>
              *)&param_1->ImageOutputData);
  return this;
}

// operator= @ 14dd6c780

FMoviePipelineMergerOutputFrame * __thiscall
FMoviePipelineMergerOutputFrame::operator=
          (FMoviePipelineMergerOutputFrame *this,FMoviePipelineMergerOutputFrame *param_1)

{
  int *piVar1;
  TArray<FMoviePipelinePassIdentifier,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FMoviePipelinePassIdentifier *pFVar4;
  
  FMoviePipelineFrameOutputState::operator=(&this->FrameOutputState,&param_1->FrameOutputState);
  pTVar2 = &this->ExpectedRenderPasses;
  if (pTVar2 != &param_1->ExpectedRenderPasses) {
    DestructItems<FMoviePipelinePassIdentifier,int>
              ((FMoviePipelinePassIdentifier *)(pTVar2->AllocatorInstance).Data,
               (this->ExpectedRenderPasses).ArrayNum);
    iVar3 = (param_1->ExpectedRenderPasses).ArrayNum;
    piVar1 = &(this->ExpectedRenderPasses).ArrayMax;
    pFVar4 = (FMoviePipelinePassIdentifier *)(param_1->ExpectedRenderPasses).AllocatorInstance.Data;
    (this->ExpectedRenderPasses).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
      ConstructItems<FMoviePipelinePassIdentifier,FMoviePipelinePassIdentifier,int>
                ((pTVar2->AllocatorInstance).Data,pFVar4,iVar3);
    }
  }
  if (&this->ImageOutputData != &param_1->ImageOutputData) {
    TSet<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>
                *)&this->ImageOutputData,
               (TSet<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>
                *)&param_1->ImageOutputData);
  }
  return this;
}

