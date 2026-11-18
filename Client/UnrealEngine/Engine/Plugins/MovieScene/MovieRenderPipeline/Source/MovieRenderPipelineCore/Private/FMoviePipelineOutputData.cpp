// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 4

// FMoviePipelineOutputData @ 14dcae920

FMoviePipelineOutputData * __thiscall
FMoviePipelineOutputData::FMoviePipelineOutputData
          (FMoviePipelineOutputData *this,FMoviePipelineOutputData *param_1)

{
  TArray<FMoviePipelineShotOutputData,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FMovieGraphRenderOutputData,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  UMoviePipelineBase *pUVar5;
  UMoviePipelineExecutorJob *pUVar6;
  FMoviePipelineShotOutputData *pFVar7;
  FMovieGraphRenderOutputData *pFVar8;
  
  pUVar5 = (param_1->Pipeline).field0_0x0.DebugPtr;
  (this->Pipeline).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UMoviePipelineBase *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pUVar6 = (param_1->Job).field0_0x0.DebugPtr;
  (this->Job).field0_0x0.DebugPtr = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UMoviePipelineExecutorJob *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  pTVar1 = &this->ShotData;
  this->bSuccess = param_1->bSuccess;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ShotData).ArrayMax;
  iVar4 = (param_1->ShotData).ArrayNum;
  pFVar7 = (FMoviePipelineShotOutputData *)(param_1->ShotData).AllocatorInstance.Data;
  (this->ShotData).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    ConstructItems<FMoviePipelineShotOutputData,FMoviePipelineShotOutputData,int>
              ((pTVar1->AllocatorInstance).Data,pFVar7,iVar4);
  }
  pTVar3 = &this->GraphData;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->GraphData).ArrayMax;
  iVar4 = (param_1->GraphData).ArrayNum;
  pFVar8 = (FMovieGraphRenderOutputData *)(param_1->GraphData).AllocatorInstance.Data;
  (this->GraphData).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    ConstructItems<FMovieGraphRenderOutputData,FMovieGraphRenderOutputData,int>
              ((pTVar3->AllocatorInstance).Data,pFVar8,iVar4);
  }
  return this;
}

// operator= @ 14dd0e880

FMoviePipelineOutputData * __thiscall
FMoviePipelineOutputData::operator=
          (FMoviePipelineOutputData *this,FMoviePipelineOutputData *param_1)

{
  TArray<FMovieGraphRenderOutputData,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  UMoviePipelineBase *pUVar4;
  UMoviePipelineExecutorJob *pUVar5;
  FMovieGraphRenderOutputData *pFVar6;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar4 = (param_1->Pipeline).field0_0x0.DebugPtr, pUVar4 != (UMoviePipelineBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->Pipeline).field0_0x0 = (param_1->Pipeline).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 = (param_1->Job).field0_0x0.DebugPtr, pUVar5 != (UMoviePipelineExecutorJob *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->Job).field0_0x0 = (param_1->Job).field0_0x0;
  this->bSuccess = param_1->bSuccess;
  TArray<FMoviePipelineShotOutputData,TSizedDefaultAllocator<32>_>::operator=
            (&this->ShotData,&param_1->ShotData);
  pTVar1 = &this->GraphData;
  if (pTVar1 != &param_1->GraphData) {
    DestructItems<FMovieGraphRenderOutputData,int>
              ((FMovieGraphRenderOutputData *)(pTVar1->AllocatorInstance).Data,
               (this->GraphData).ArrayNum);
    iVar3 = (param_1->GraphData).ArrayNum;
    piVar2 = &(this->GraphData).ArrayMax;
    pFVar6 = (FMovieGraphRenderOutputData *)(param_1->GraphData).AllocatorInstance.Data;
    (this->GraphData).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<FMovieGraphRenderOutputData,FMovieGraphRenderOutputData,int>
                ((pTVar1->AllocatorInstance).Data,pFVar6,iVar3);
    }
  }
  return this;
}

// StaticStruct @ 14dd5e750

UScriptStruct * __cdecl FMoviePipelineOutputData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMoviePipelineOutputData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UScriptStruct_FMoviePipelineOutputData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMoviePipelineOutputData,(UObject *)pUVar1,
                         L"MoviePipelineOutputData");
  }
  return Z_Registration_Info_UScriptStruct_FMoviePipelineOutputData.OuterSingleton;
}

// FMoviePipelineOutputData @ 14dd6a770

FMoviePipelineOutputData * __thiscall
FMoviePipelineOutputData::FMoviePipelineOutputData
          (FMoviePipelineOutputData *this,FMoviePipelineOutputData *param_1)

{
  UMoviePipelineBase *pUVar1;
  UMoviePipelineExecutorJob *pUVar2;
  
  pUVar1 = (param_1->Pipeline).field0_0x0.DebugPtr;
  (this->Pipeline).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UMoviePipelineBase *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  pUVar2 = (param_1->Job).field0_0x0.DebugPtr;
  (this->Job).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UMoviePipelineExecutorJob *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->bSuccess = param_1->bSuccess;
  (this->ShotData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShotData).AllocatorInstance.Data = (param_1->ShotData).AllocatorInstance.Data;
  (param_1->ShotData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShotData).ArrayNum = (param_1->ShotData).ArrayNum;
  (this->ShotData).ArrayMax = (param_1->ShotData).ArrayMax;
  (param_1->ShotData).ArrayNum = 0;
  (param_1->ShotData).ArrayMax = 0;
  (this->GraphData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GraphData).AllocatorInstance.Data = (param_1->GraphData).AllocatorInstance.Data;
  (param_1->GraphData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GraphData).ArrayNum = (param_1->GraphData).ArrayNum;
  (this->GraphData).ArrayMax = (param_1->GraphData).ArrayMax;
  (param_1->GraphData).ArrayNum = 0;
  (param_1->GraphData).ArrayMax = 0;
  return this;
}

