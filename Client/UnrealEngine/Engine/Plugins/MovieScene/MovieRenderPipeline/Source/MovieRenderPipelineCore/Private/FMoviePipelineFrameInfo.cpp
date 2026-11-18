// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 2

// ~FMoviePipelineFrameInfo @ 14dd0d470

void __thiscall
MoviePipeline::FMoviePipelineFrameInfo::~FMoviePipelineFrameInfo(FMoviePipelineFrameInfo *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FMoviePipelineFrameInfo_MoviePipeline__6B_;
  pFVar1 = (this->PrevSidecarViewRotations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PrevSidecarViewLocations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurrSidecarViewRotations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurrSidecarViewLocations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// FMoviePipelineFrameInfo @ 14dd6a300

FMoviePipelineFrameInfo * __thiscall
MoviePipeline::FMoviePipelineFrameInfo::FMoviePipelineFrameInfo
          (FMoviePipelineFrameInfo *this,FMoviePipelineFrameInfo *param_1)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  double dVar6;
  
  this->_padding_ = (longlong)&___7FMoviePipelineFrameInfo_MoviePipeline__6B_;
  pTVar1 = &this->CurrSidecarViewLocations;
  dVar6 = (param_1->CurrViewLocation).field0_0x0._s_0.Y;
  piVar2 = &(this->CurrSidecarViewLocations).ArrayMax;
  (this->CurrViewLocation).field0_0x0._s_0.X = (param_1->CurrViewLocation).field0_0x0._s_0.X;
  (this->CurrViewLocation).field0_0x0._s_0.Y = dVar6;
  (this->CurrViewLocation).field0_0x0._s_0.Z = (param_1->CurrViewLocation).field0_0x0._s_0.Z;
  dVar6 = (param_1->CurrViewRotation).Yaw;
  (this->CurrViewRotation).Pitch = (param_1->CurrViewRotation).Pitch;
  (this->CurrViewRotation).Yaw = dVar6;
  (this->CurrViewRotation).Roll = (param_1->CurrViewRotation).Roll;
  dVar6 = (param_1->PrevViewLocation).field0_0x0._s_0.Y;
  (this->PrevViewLocation).field0_0x0._s_0.X = (param_1->PrevViewLocation).field0_0x0._s_0.X;
  (this->PrevViewLocation).field0_0x0._s_0.Y = dVar6;
  (this->PrevViewLocation).field0_0x0._s_0.Z = (param_1->PrevViewLocation).field0_0x0._s_0.Z;
  dVar6 = (param_1->PrevViewRotation).Yaw;
  (this->PrevViewRotation).Pitch = (param_1->PrevViewRotation).Pitch;
  (this->PrevViewRotation).Yaw = dVar6;
  (this->PrevViewRotation).Roll = (param_1->PrevViewRotation).Roll;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->CurrSidecarViewLocations).ArrayNum;
  pFVar5 = (param_1->CurrSidecarViewLocations).AllocatorInstance.Data;
  (this->CurrSidecarViewLocations).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar5,(longlong)iVar4 * 0x18);
  }
  pTVar3 = &this->CurrSidecarViewRotations;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->CurrSidecarViewRotations).ArrayMax;
  iVar4 = (param_1->CurrSidecarViewRotations).ArrayNum;
  pFVar5 = (param_1->CurrSidecarViewRotations).AllocatorInstance.Data;
  (this->CurrSidecarViewRotations).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 * 0x18);
  }
  pTVar1 = &this->PrevSidecarViewLocations;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->PrevSidecarViewLocations).ArrayMax;
  iVar4 = (param_1->PrevSidecarViewLocations).ArrayNum;
  pFVar5 = (param_1->PrevSidecarViewLocations).AllocatorInstance.Data;
  (this->PrevSidecarViewLocations).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar5,(longlong)iVar4 * 0x18);
  }
  pTVar3 = &this->PrevSidecarViewRotations;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->PrevSidecarViewRotations).ArrayMax;
  iVar4 = (param_1->PrevSidecarViewRotations).ArrayNum;
  pFVar5 = (param_1->PrevSidecarViewRotations).AllocatorInstance.Data;
  (this->PrevSidecarViewRotations).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 * 0x18);
  }
  return this;
}

