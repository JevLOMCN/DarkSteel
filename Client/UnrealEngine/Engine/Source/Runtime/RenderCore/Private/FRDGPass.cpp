// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 10

// FRDGPass @ 145d8ca00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGPass * __thiscall
FRDGPass::FRDGPass(FRDGPass *this,FRDGEventName *param_1,FRDGParameterStruct *param_2,
                  ERDGPassFlags param_3,ERDGPassTaskMode param_4)

{
  FRHIUniformBufferLayout *pFVar1;
  
  this->_padding_ = (longlong)&___7FRDGPass__6B_;
  (this->FullPathIfDebug).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FullPathIfDebug).Data.ArrayNum = 0;
  (this->FullPathIfDebug).Data.ArrayMax = 0;
  (this->Name).EventFormat = param_1->EventFormat;
  ::FString::FString(&(this->Name).FormattedEventName,&param_1->FormattedEventName);
  (this->ParameterStruct).Contents = param_2->Contents;
  (this->ParameterStruct).Layout.Reference = (FRHIUniformBufferLayout *)0x0;
  pFVar1 = (param_2->Layout).Reference;
  (this->ParameterStruct).Layout.Reference = pFVar1;
  if (pFVar1 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar1);
  }
  (this->ParameterStruct).Metadata = param_2->Metadata;
  (this->Handle).Index = 0xffffffff;
  this->CrossPipelineProducer = 0xffffffff;
  this->GraphicsForkPass = 0xffffffff;
  this->GraphicsJoinPass = 0xffffffff;
  this->PrologueBarrierPass = 0xffffffff;
  (this->EpilogueBarrierPass).Index = 0xffffffff;
  (this->CrossPipelineConsumers).AllocatorInstance.Data = (TRDGHandle<FRDGPass,unsigned_int> *)0x0;
  (this->CrossPipelineConsumers).ArrayNum = 0;
  (this->CrossPipelineConsumers).ArrayMax = 0;
  (this->Producers).AllocatorInstance.Data = (FRDGPass **)0x0;
  (this->Producers).ArrayNum = 0;
  (this->Producers).ArrayMax = 0;
  (this->TextureStates).AllocatorInstance.Data = (FTextureState *)0x0;
  (this->TextureStates).ArrayNum = 0;
  (this->TextureStates).ArrayMax = 0;
  (this->BufferStates).AllocatorInstance.Data = (FBufferState *)0x0;
  (this->BufferStates).ArrayNum = 0;
  (this->BufferStates).ArrayMax = 0;
  (this->Views).AllocatorInstance.Data = (TRDGHandle<FRDGView,unsigned_int> *)0x0;
  (this->Views).ArrayNum = 0;
  (this->Views).ArrayMax = 0;
  (this->UniformBuffers).AllocatorInstance.Data = (TRDGHandle<FRDGUniformBuffer,unsigned_int> *)0x0;
  (this->UniformBuffers).ArrayNum = 0;
  (this->UniformBuffers).ArrayMax = 0;
  (this->ExternalAccessOps).AllocatorInstance.Data = (FExternalAccessOp *)0x0;
  (this->ExternalAccessOps).ArrayNum = 0;
  (this->ExternalAccessOps).ArrayMax = 0;
  (this->ResourcesToBegin).AllocatorInstance.SecondaryData.Data = (FRDGPass **)0x0;
  this->TaskMode = param_4;
  this->Flags = param_3;
  this->Pipeline = ((param_3 & AsyncCompute) != None) + Graphics;
  this->Workload = 1;
  this->field9_0x54 = (FRDGPass_u_84)0x0;
  this->field10_0x56 = (FRDGPass_u_86)0x0;
  this->field11_0x57 = (FRDGPass_u_87)0x0;
  this->NumTransitionsToReserve = 0;
  (this->ResourcesToBegin).ArrayNum = 0;
  (this->ResourcesToBegin).ArrayMax = 1;
  (this->ResourcesToEnd).AllocatorInstance.SecondaryData.Data = (FRDGPass **)0x0;
  (this->ResourcesToEnd).ArrayNum = 0;
  (this->ResourcesToEnd).ArrayMax = 1;
  this->PrologueBarriersToBegin = (FRDGBarrierBatchBegin *)0x0;
  this->PrologueBarriersToEnd = (FRDGBarrierBatchEnd *)0x0;
  this->EpilogueBarriersToBeginForGraphics = (FRDGBarrierBatchBegin *)0x0;
  this->EpilogueBarriersToBeginForAsyncCompute = (FRDGBarrierBatchBegin *)0x0;
  this->EpilogueBarriersToBeginForAll = (FRDGBarrierBatchBegin *)0x0;
  (this->SharedEpilogueBarriersToBegin).AllocatorInstance.Data = (FRDGBarrierBatchBegin **)0x0;
  (this->SharedEpilogueBarriersToBegin).ArrayNum = 0;
  (this->SharedEpilogueBarriersToBegin).ArrayMax = 0;
  this->EpilogueBarriersToEnd = (FRDGBarrierBatchEnd *)0x0;
  this->ParallelPassSetIndex = 0;
  (this->GPUMask).GPUMask = 1;
  this->Scope = (FRDGScope *)0x0;
  (this->TraceTextures).AllocatorInstance.Data = (TRDGHandle<FRDGTexture,unsigned_int> *)0x0;
  (this->TraceTextures).ArrayNum = 0;
  (this->TraceTextures).ArrayMax = 0;
  (this->TraceBuffers).AllocatorInstance.Data = (TRDGHandle<FRDGBuffer,unsigned_int> *)0x0;
  (this->TraceBuffers).ArrayNum = 0;
  (this->TraceBuffers).ArrayMax = 0;
  pFVar1 = (param_2->Layout).Reference;
  if (pFVar1 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  return this;
}

// Execute @ 145db4320

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FRDGPass::Execute(FRDGPass *this,FRHIComputeCommandList *param_1)

{
  return;
}

// GetEpilogueBarriersToBeginFor @ 145db92d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGBarrierBatchBegin * __thiscall
FRDGPass::GetEpilogueBarriersToBeginFor
          (FRDGPass *this,FRDGAllocator *param_1,
          TArray<FRDGBarrierBatchBegin_*,TRDGArrayAllocator<0>_> *param_2,ERHIPipeline param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FRDGBarrierBatchBegin *pFVar4;
  
  if (param_3 != Graphics) {
    if (param_3 == AsyncCompute) {
      pFVar4 = GetEpilogueBarriersToBeginForAsyncCompute(this,param_1,param_2);
      return pFVar4;
    }
    if (param_3 == All) {
      if (this->EpilogueBarriersToBeginForAll == (FRDGBarrierBatchBegin *)0x0) {
        pFVar4 = FMemStackBase::Alloc(&param_1->MemStack,0x80,8);
        pFVar4 = FRDGBarrierBatchBegin::FRDGBarrierBatchBegin
                           (pFVar4,this->Pipeline,All,L"Epilogue (For All)",this);
        this->EpilogueBarriersToBeginForAll = pFVar4;
        iVar3 = param_2->ArrayNum;
        if (iVar3 == param_2->ArrayMax) {
          iVar3 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBarrierBatchBegin_*>_>
                            (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar3 + 1;
        (param_2->AllocatorInstance).Data[iVar3] = this->EpilogueBarriersToBeginForAll;
      }
      return this->EpilogueBarriersToBeginForAll;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                       ,0x16c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRDGBarrierBatchBegin *)(*pcVar1)();
      return pFVar4;
    }
  }
  pFVar4 = GetEpilogueBarriersToBeginForGraphics(this,param_1,param_2);
  return pFVar4;
}

// GetEpilogueBarriersToBeginForAll @ 145db93f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGBarrierBatchBegin * __thiscall
FRDGPass::GetEpilogueBarriersToBeginForAll
          (FRDGPass *this,FRDGAllocator *param_1,
          TArray<FRDGBarrierBatchBegin_*,TRDGArrayAllocator<0>_> *param_2)

{
  int iVar1;
  FRDGBarrierBatchBegin *pFVar2;
  
  if (this->EpilogueBarriersToBeginForAll == (FRDGBarrierBatchBegin *)0x0) {
    pFVar2 = FMemStackBase::Alloc(&param_1->MemStack,0x80,8);
    pFVar2 = FRDGBarrierBatchBegin::FRDGBarrierBatchBegin
                       (pFVar2,this->Pipeline,All,L"Epilogue (For All)",this);
    this->EpilogueBarriersToBeginForAll = pFVar2;
    iVar1 = param_2->ArrayNum;
    if (iVar1 == param_2->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBarrierBatchBegin_*>_>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar1 + 1;
    (param_2->AllocatorInstance).Data[iVar1] = this->EpilogueBarriersToBeginForAll;
    return this->EpilogueBarriersToBeginForAll;
  }
  return this->EpilogueBarriersToBeginForAll;
}

// GetEpilogueBarriersToBeginForAsyncCompute @ 145db94a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGBarrierBatchBegin * __thiscall
FRDGPass::GetEpilogueBarriersToBeginForAsyncCompute
          (FRDGPass *this,FRDGAllocator *param_1,
          TArray<FRDGBarrierBatchBegin_*,TRDGArrayAllocator<0>_> *param_2)

{
  int iVar1;
  FRDGBarrierBatchBegin *pFVar2;
  
  if (this->EpilogueBarriersToBeginForAsyncCompute == (FRDGBarrierBatchBegin *)0x0) {
    pFVar2 = FMemStackBase::Alloc(&param_1->MemStack,0x80,8);
    pFVar2 = FRDGBarrierBatchBegin::FRDGBarrierBatchBegin
                       (pFVar2,this->Pipeline,AsyncCompute,L"Epilogue (For AsyncCompute)",this);
    this->EpilogueBarriersToBeginForAsyncCompute = pFVar2;
    iVar1 = param_2->ArrayNum;
    if (iVar1 == param_2->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBarrierBatchBegin_*>_>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar1 + 1;
    (param_2->AllocatorInstance).Data[iVar1] = this->EpilogueBarriersToBeginForAsyncCompute;
    return this->EpilogueBarriersToBeginForAsyncCompute;
  }
  return this->EpilogueBarriersToBeginForAsyncCompute;
}

// GetEpilogueBarriersToBeginForGraphics @ 145db9550

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGBarrierBatchBegin * __thiscall
FRDGPass::GetEpilogueBarriersToBeginForGraphics
          (FRDGPass *this,FRDGAllocator *param_1,
          TArray<FRDGBarrierBatchBegin_*,TRDGArrayAllocator<0>_> *param_2)

{
  uint uVar1;
  int iVar2;
  FRDGBarrierBatchBegin *pFVar3;
  
  if (this->EpilogueBarriersToBeginForGraphics == (FRDGBarrierBatchBegin *)0x0) {
    pFVar3 = FMemStackBase::Alloc(&param_1->MemStack,0x80,8);
    pFVar3 = FRDGBarrierBatchBegin::FRDGBarrierBatchBegin
                       (pFVar3,this->Pipeline,Graphics,L"Epilogue (For Graphics)",this);
    this->EpilogueBarriersToBeginForGraphics = pFVar3;
    if (pFVar3->bTransitionNeeded == false) {
      uVar1 = this->NumTransitionsToReserve;
      if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
      }
      if ((pFVar3->Transitions).ArrayMax < (int)uVar1) {
        UE::Core::Private::ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRDGTransitionInfo>_>
                  (0x10,8,uVar1,&(pFVar3->Transitions).AllocatorInstance,
                   (pFVar3->Transitions).ArrayNum,&(pFVar3->Transitions).ArrayMax);
      }
      if ((pFVar3->Aliases).ArrayMax < (int)uVar1) {
        UE::Core::Private::
        ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRHITransientAliasingInfo>_>
                  (0x20,8,uVar1,&(pFVar3->Aliases).AllocatorInstance,(pFVar3->Aliases).ArrayNum,
                   &(pFVar3->Aliases).ArrayMax);
      }
      iVar2 = param_2->ArrayNum;
      if (iVar2 == param_2->ArrayMax) {
        iVar2 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBarrierBatchBegin_*>_>
                          (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar2 + 1;
      (param_2->AllocatorInstance).Data[iVar2] = this->EpilogueBarriersToBeginForGraphics;
    }
  }
  return this->EpilogueBarriersToBeginForGraphics;
}

// GetEpilogueBarriersToEnd @ 145db9680

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGBarrierBatchEnd * __thiscall
FRDGPass::GetEpilogueBarriersToEnd(FRDGPass *this,FRDGAllocator *param_1)

{
  FRDGBarrierBatchEnd *pFVar1;
  
  pFVar1 = this->EpilogueBarriersToEnd;
  if (pFVar1 == (FRDGBarrierBatchEnd *)0x0) {
    pFVar1 = FMemStackBase::Alloc(&param_1->MemStack,0x40,8);
    (pFVar1->Dependencies).AllocatorInstance.SecondaryData.Data = (FRDGBarrierBatchBegin **)0x0;
    (pFVar1->Dependencies).ArrayNum = 0;
    (pFVar1->Dependencies).ArrayMax = 4;
    pFVar1->Pass = this;
    pFVar1->BarrierLocation = Epilogue;
    this->EpilogueBarriersToEnd = pFVar1;
  }
  return pFVar1;
}

// GetName @ 145db98d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

wchar_t * __thiscall FRDGPass::GetName(FRDGPass *this)

{
  if (1 < (this->FullPathIfDebug).Data.ArrayNum) {
    return (wchar_t *)(this->FullPathIfDebug).Data.AllocatorInstance.Data;
  }
  if (1 < (this->Name).FormattedEventName.Data.ArrayNum) {
    return (wchar_t *)(this->Name).FormattedEventName.Data.AllocatorInstance.Data;
  }
  return (this->Name).EventFormat;
}

// GetPrologueBarriersToBegin @ 145db9a00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGBarrierBatchBegin * __thiscall
FRDGPass::GetPrologueBarriersToBegin
          (FRDGPass *this,FRDGAllocator *param_1,
          TArray<FRDGBarrierBatchBegin_*,TRDGArrayAllocator<0>_> *param_2)

{
  ERHIPipeline EVar1;
  int iVar2;
  FRDGBarrierBatchBegin *pFVar3;
  longlong lVar4;
  
  if (this->PrologueBarriersToBegin == (FRDGBarrierBatchBegin *)0x0) {
    pFVar3 = FMemStackBase::Alloc(&param_1->MemStack,0x80,8);
    EVar1 = this->Pipeline;
    pFVar3->Transition = (FRHITransition *)0x0;
    pFVar3->SeparateFenceTransition = (FRHITransition *)0x0;
    *(undefined4 *)&pFVar3->BarriersToEnd = 0xffffffff;
    (pFVar3->BarriersToEnd).field_0x4 = 1;
    *(undefined4 *)&(pFVar3->BarriersToEnd).field_0x8 = 0xffffffff;
    (pFVar3->BarriersToEnd).field_0xc = 1;
    (pFVar3->Transitions).AllocatorInstance.Data = (FRDGTransitionInfo *)0x0;
    (pFVar3->Transitions).ArrayNum = 0;
    (pFVar3->Transitions).ArrayMax = 0;
    (pFVar3->Aliases).AllocatorInstance.Data = (FRHITransientAliasingInfo *)0x0;
    (pFVar3->Aliases).ArrayNum = 0;
    (pFVar3->Aliases).ArrayMax = 0;
    pFVar3->bTransitionNeeded = false;
    pFVar3->bSeparateFenceTransitionNeeded = false;
    pFVar3->TransitionFlags = AllowDecayPipelines|NoFence;
    pFVar3->PipelinesToBegin = EVar1;
    pFVar3->PipelinesToEnd = EVar1;
    *(undefined8 *)&pFVar3->DebugPasses = 0;
    *(undefined8 *)&(pFVar3->DebugPasses).field_0x8 = 0;
    (pFVar3->DebugTransitionResources).AllocatorInstance.Data = (FRDGViewableResource **)0x0;
    (pFVar3->DebugTransitionResources).ArrayNum = 0;
    (pFVar3->DebugTransitionResources).ArrayMax = 0;
    (pFVar3->DebugAliasingResources).AllocatorInstance.Data = (FRDGViewableResource **)0x0;
    (pFVar3->DebugAliasingResources).ArrayNum = 0;
    (pFVar3->DebugAliasingResources).ArrayMax = 0;
    pFVar3->DebugName = L"Prologue";
    if ((EVar1 == Graphics) || (lVar4 = 0x50, EVar1 != AsyncCompute)) {
      lVar4 = 0x48;
    }
    *(FRDGPass **)((longlong)&pFVar3->Transition + lVar4) = this;
    this->PrologueBarriersToBegin = pFVar3;
    iVar2 = param_2->ArrayNum;
    if (iVar2 == param_2->ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBarrierBatchBegin_*>_>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar2 + 1;
    (param_2->AllocatorInstance).Data[iVar2] = this->PrologueBarriersToBegin;
    return this->PrologueBarriersToBegin;
  }
  return this->PrologueBarriersToBegin;
}

// GetPrologueBarriersToEnd @ 145db9b30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGBarrierBatchEnd * __thiscall
FRDGPass::GetPrologueBarriersToEnd(FRDGPass *this,FRDGAllocator *param_1)

{
  FRDGBarrierBatchEnd *pFVar1;
  
  pFVar1 = this->PrologueBarriersToEnd;
  if (pFVar1 == (FRDGBarrierBatchEnd *)0x0) {
    pFVar1 = FMemStackBase::Alloc(&param_1->MemStack,0x40,8);
    (pFVar1->Dependencies).AllocatorInstance.SecondaryData.Data = (FRDGBarrierBatchBegin **)0x0;
    (pFVar1->Dependencies).ArrayNum = 0;
    (pFVar1->Dependencies).ArrayMax = 4;
    pFVar1->Pass = this;
    pFVar1->BarrierLocation = Prologue;
    this->PrologueBarriersToEnd = pFVar1;
  }
  return pFVar1;
}

