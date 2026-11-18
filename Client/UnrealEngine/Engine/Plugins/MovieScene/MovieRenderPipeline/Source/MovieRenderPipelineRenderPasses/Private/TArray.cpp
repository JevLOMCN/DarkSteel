// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 31

// Append<TSharedRef<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_> @ 14ddbc270

void __thiscall
TArray<TSharedRef<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_>::
Append<TSharedRef<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_>
          (TArray<TSharedRef<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_> *this,
          TArray<TSharedRef<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    ConstructItems<TSharedRef<ISceneViewExtension,1>,TSharedRef<ISceneViewExtension,1>,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x10,
               (TSharedRef<ISceneViewExtension,1> *)(param_1->AllocatorInstance).Data,iVar1);
  }
  return;
}

// ~TArray<FImagePixelData_*,TSizedDefaultAllocator<32>_> @ 14ddc8ee0

void __thiscall
TArray<FImagePixelData_*,TSizedDefaultAllocator<32>_>::
~TArray<FImagePixelData_*,TSizedDefaultAllocator<32>_>
          (TArray<FImagePixelData_*,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_> @ 14ddc8f00

void __thiscall
TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>::
~TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>
          (TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TArray<AActor_*,TSizedDefaultAllocator<32>_> @ 14ddc8f20

void __thiscall
TArray<AActor_*,TSizedDefaultAllocator<32>_>::~TArray<AActor_*,TSizedDefaultAllocator<32>_>
          (TArray<AActor_*,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> @ 14ddc8f40

void __thiscall
TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_>::
~TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_>
          (TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TArray<UMoviePipelineGameOverrideSetting_*,TSizedDefaultAllocator<32>_> @ 14ddc8f60

void __thiscall
TArray<UMoviePipelineGameOverrideSetting_*,TSizedDefaultAllocator<32>_>::
~TArray<UMoviePipelineGameOverrideSetting_*,TSizedDefaultAllocator<32>_>
          (TArray<UMoviePipelineGameOverrideSetting_*,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> @ 14ddc8f80

void __thiscall
TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_>::
~TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_>
          (TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TArray<UMoviePipelineViewFamilySetting_*,TSizedDefaultAllocator<32>_> @ 14ddc8fa0

void __thiscall
TArray<UMoviePipelineViewFamilySetting_*,TSizedDefaultAllocator<32>_>::
~TArray<UMoviePipelineViewFamilySetting_*,TSizedDefaultAllocator<32>_>
          (TArray<UMoviePipelineViewFamilySetting_*,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> @ 14ddc8fc0

void __thiscall
TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::
~TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>
          (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TArray<TObjectPtr<UMovieGraphNode>,TSizedDefaultAllocator<32>_> @ 14ddc8fe0

void __thiscall
TArray<TObjectPtr<UMovieGraphNode>,TSizedDefaultAllocator<32>_>::
~TArray<TObjectPtr<UMovieGraphNode>,TSizedDefaultAllocator<32>_>
          (TArray<TObjectPtr<UMovieGraphNode>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> @ 14ddc9000

void __thiscall
TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>::
~TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TArray<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TSizedDefaultAllocator<32>_> @ 14ddc9020

void __thiscall
TArray<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TSizedDefaultAllocator<32>_>
::
~TArray<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TSizedDefaultAllocator<32>_>
          (TArray<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TSizedDefaultAllocator<32>_>
           *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,int>
            ((TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
              *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TArray<FActorLayer,TSizedDefaultAllocator<32>_> @ 14ddc9050

void __thiscall
TArray<FActorLayer,TSizedDefaultAllocator<32>_>::~TArray<FActorLayer,TSizedDefaultAllocator<32>_>
          (TArray<FActorLayer,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TArray<FColor,TSizedDefaultAllocator<64>_> @ 14ddc9070

void __thiscall
TArray<FColor,TSizedDefaultAllocator<64>_>::~TArray<FColor,TSizedDefaultAllocator<64>_>
          (TArray<FColor,TSizedDefaultAllocator<64>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TArray<MoviePipeline::FCompositePassInfo,TSizedDefaultAllocator<32>_> @ 14ddc9090

void __thiscall
TArray<MoviePipeline::FCompositePassInfo,TSizedDefaultAllocator<32>_>::
~TArray<MoviePipeline::FCompositePassInfo,TSizedDefaultAllocator<32>_>
          (TArray<MoviePipeline::FCompositePassInfo,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<MoviePipeline::FCompositePassInfo,int>
            ((FCompositePassInfo *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TArray<FEXRImageWriteTask::FEXRPart,TSizedDefaultAllocator<32>_> @ 14ddc90c0

void __thiscall
TArray<FEXRImageWriteTask::FEXRPart,TSizedDefaultAllocator<32>_>::
~TArray<FEXRImageWriteTask::FEXRPart,TSizedDefaultAllocator<32>_>
          (TArray<FEXRImageWriteTask::FEXRPart,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FEXRImageWriteTask::FEXRPart,int>
            ((FEXRPart *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TArray<FLinearColor,TSizedDefaultAllocator<64>_> @ 14ddc90f0

void __thiscall
TArray<FLinearColor,TSizedDefaultAllocator<64>_>::~TArray<FLinearColor,TSizedDefaultAllocator<64>_>
          (TArray<FLinearColor,TSizedDefaultAllocator<64>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> @ 14ddc9110

void __thiscall
TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_>::
~TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_>
          (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TArray<FMovieGraphRenderDataIdentifier,TSizedDefaultAllocator<32>_> @ 14ddc9130

void __thiscall
TArray<FMovieGraphRenderDataIdentifier,TSizedDefaultAllocator<32>_>::
~TArray<FMovieGraphRenderDataIdentifier,TSizedDefaultAllocator<32>_>
          (TArray<FMovieGraphRenderDataIdentifier,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FMovieGraphRenderDataIdentifier,int>
            ((FMovieGraphRenderDataIdentifier *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TArray<FMoviePipelinePostProcessPass,TSizedDefaultAllocator<32>_> @ 14ddc9160

void __thiscall
TArray<FMoviePipelinePostProcessPass,TSizedDefaultAllocator<32>_>::
~TArray<FMoviePipelinePostProcessPass,TSizedDefaultAllocator<32>_>
          (TArray<FMoviePipelinePostProcessPass,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FMoviePipelinePostProcessPass,int>
            ((FMoviePipelinePostProcessPass *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TArray<UMoviePipelineDeferredPassBase::FMultiCameraViewStateData,TSizedDefaultAllocator<32>_> @ 14ddc9190

void __thiscall
TArray<UMoviePipelineDeferredPassBase::FMultiCameraViewStateData,TSizedDefaultAllocator<32>_>::
~TArray<UMoviePipelineDeferredPassBase::FMultiCameraViewStateData,TSizedDefaultAllocator<32>_>
          (TArray<UMoviePipelineDeferredPassBase::FMultiCameraViewStateData,TSizedDefaultAllocator<32>_>
           *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<UMoviePipelineDeferredPassBase::FMultiCameraViewStateData,int>
            ((FMultiCameraViewStateData *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> @ 14ddc91f0

void __thiscall
TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>::
~TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>
          (TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FSoftObjectPath,int>
            ((FSoftObjectPath *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TArray<TSharedRef<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_> @ 14ddc9220

void __thiscall
TArray<TSharedRef<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_>::
~TArray<TSharedRef<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_>
          (TArray<TSharedRef<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TSharedRef<ISceneViewExtension,1>,int>
            ((TSharedRef<ISceneViewExtension,1> *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_> @ 14ddc9250

void __thiscall
TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_>::
~TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_>
          (TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_>
           *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniqueFunction<void___cdecl(FImagePixelData_*)>,int>
            ((TUniqueFunction<void___cdecl(FImagePixelData_*)> *)(this->AllocatorInstance).Data,
             this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TArray<TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,TSizedDefaultAllocator<32>_> @ 14ddc9280

void __thiscall
TArray<TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,TSizedDefaultAllocator<32>_>::
~TArray<TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,TSizedDefaultAllocator<32>_>
          (TArray<TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,TSizedDefaultAllocator<32>_>
           *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,int>
            ((TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *)
             (this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TArray<TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphImagePassBase,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphImagePassBase>_>,TSizedDefaultAllocator<32>_> @ 14ddc92b0

void __thiscall
TArray<TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphImagePassBase,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphImagePassBase>_>,TSizedDefaultAllocator<32>_>
::
~TArray<TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphImagePassBase,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphImagePassBase>_>,TSizedDefaultAllocator<32>_>
          (TArray<TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphImagePassBase,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphImagePassBase>_>,TSizedDefaultAllocator<32>_>
           *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphImagePassBase,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphImagePassBase>_>,int>
            ((TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphImagePassBase,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphImagePassBase>_>
              *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TArray<FFloat16Color,TSizedDefaultAllocator<64>_> @ 14ddc92e0

void __thiscall
TArray<FFloat16Color,TSizedDefaultAllocator<64>_>::
~TArray<FFloat16Color,TSizedDefaultAllocator<64>_>
          (TArray<FFloat16Color,TSizedDefaultAllocator<64>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TArray<Imf_3_3::Header,TSizedDefaultAllocator<32>_> @ 14ddc9300

void __thiscall
TArray<Imf_3_3::Header,TSizedDefaultAllocator<32>_>::
~TArray<Imf_3_3::Header,TSizedDefaultAllocator<32>_>
          (TArray<Imf_3_3::Header,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<Imf_3_3::Header,int>((Header *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// InsertUninitializedImpl @ 14dde7890

void __thiscall
TArray<TTuple<int,TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<int,TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x18;
  memmove(_Src + (longlong)param_2 * 0x18,_Src,(longlong)(iVar1 - param_1) * 0x18);
  return;
}

// RemoveAtImpl @ 14ddf4860

void __thiscall
TArray<FSceneViewStateReference,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FSceneViewStateReference,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FSceneViewStateReference *_Dst;
  
  _Dst = (FSceneViewStateReference *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x38);
  DestructItems<FSceneViewStateReference,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x38);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 14ddfc460

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FSceneViewStateReference,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FSceneViewStateReference,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FSceneViewStateReference,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x38,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

