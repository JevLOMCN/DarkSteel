// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 21

// FNiagaraComputeExecutionContext @ 149022440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNiagaraComputeExecutionContext * __thiscall
FNiagaraComputeExecutionContext::FNiagaraComputeExecutionContext
          (FNiagaraComputeExecutionContext *this)

{
  undefined8 local_res8;
  
  (this->EmitterInstanceReadback).GPUCountOffset = 0xffffffff;
  (this->EmitterInstanceReadback).CPUCount = 0;
  this->_padding_ = (longlong)&___7FNiagaraComputeExecutionContext__6B_;
  (this->DebugSimFName).ComparisonIndex = 0;
  (this->DebugSimFName).Number = 0;
  (this->SystemStatID).StatIdPtr = &TStatId::TStatId_NAME_None;
  (this->EmitterStatID).StatIdPtr = &TStatId::TStatId_NAME_None;
  (this->DebugSimName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugSimName).Data.ArrayNum = 0;
  (this->DebugSimName).Data.ArrayMax = 0;
  (this->ProfilingComponentPtr).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ProfilingEmitterPtr).Emitter.WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->ProfilingEmitterPtr,(FObjectPtr)&local_res8);
  (this->ProfilingEmitterPtr).Version.A = 0;
  (this->ProfilingEmitterPtr).Version.B = 0;
  (this->ProfilingEmitterPtr).Version.C = 0;
  (this->ProfilingEmitterPtr).Version.D = 0;
  this->MainDataSet = (FNiagaraDataSet *)0x0;
  this->GPUScript = (UNiagaraScript *)0x0;
  this->GPUScript_RT = (FNiagaraShaderScript *)0x0;
  this->ExternalCBufferLayoutSize = 0;
  (this->ExternalCBufferLayout).Reference = (FNiagaraRHIUniformBufferLayout *)0x0;
  FNiagaraScriptInstanceParameterStore::FNiagaraScriptInstanceParameterStore
            (&this->CombinedParamStore);
  (this->DIClassNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DIClassNames).ArrayNum = 0;
  (this->DIClassNames).ArrayMax = 0;
  (this->DataInterfaceProxies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataInterfaceProxies).ArrayNum = 0;
  (this->DataInterfaceProxies).ArrayMax = 0;
  (this->DataToRender).Reference = (FNiagaraDataBuffer *)0x0;
  (this->TranslucentDataToRender).Reference = (FNiagaraDataBuffer *)0x0;
  (this->MultiViewPreviousDataToRender).Reference = (FNiagaraDataBuffer *)0x0;
  (this->GpuSpawnInfo_GT).EventSpawnTotal = 0;
  (this->GpuSpawnInfo_GT).SpawnRateInstances = 0;
  (this->GpuSpawnInfo_GT).MaxParticleCount = 0;
  this->DataBuffers_RT[0] = (FNiagaraDataBuffer *)0x0;
  this->DataBuffers_RT[1] = (FNiagaraDataBuffer *)0x0;
  this->BufferSwapsThisFrame_RT = 0;
  this->DataSetOriginalBuffer_RT = (FNiagaraDataBuffer *)0x0;
  this->bHasTickedThisFrame_RT = false;
  this->CurrentNumInstances_RT = 0;
  this->CurrentMaxInstances_RT = 0;
  this->CurrentMaxAllocateInstances_RT = 0;
  (this->SimStageExecData).Object = (FNiagaraSimStageExecutionData *)0x0;
  (this->SimStageExecData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->HasInterpolationParameters = false;
  this->bResetPending_GT = true;
  this->ParticleCountReadFence = 1;
  this->ParticleCountWriteFence = 0;
  this->CountOffset_RT = 0xffffffff;
  this->FinalDispatchGroup_RT = 0xffffffff;
  this->FinalDispatchGroupInstance_RT = 0xffffffff;
  return this;
}

// ~FNiagaraComputeExecutionContext @ 149025dc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraComputeExecutionContext::~FNiagaraComputeExecutionContext
          (FNiagaraComputeExecutionContext *this)

{
  FNiagaraRHIUniformBufferLayout *pFVar1;
  FNiagaraDataBuffer *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  
  this->_padding_ = (longlong)&___7FNiagaraComputeExecutionContext__6B_;
  SetDataToRender(this,(FNiagaraDataBuffer *)0x0);
  pFVar1 = (this->ExternalCBufferLayout).Reference;
  if (pFVar1 != (FNiagaraRHIUniformBufferLayout *)0x0) {
    (this->ExternalCBufferLayout).Reference = (FNiagaraRHIUniformBufferLayout *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SimStageExecData).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->MultiViewPreviousDataToRender).Reference;
  if (pFVar2 != (FNiagaraDataBuffer *)0x0) {
    if ((int)pFVar2->_padding_ < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsBeingRead()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x2c,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    *(int *)&pFVar2->_padding_ = (int)pFVar2->_padding_ + -1;
    UNLOCK();
  }
  pFVar2 = (this->TranslucentDataToRender).Reference;
  if (pFVar2 != (FNiagaraDataBuffer *)0x0) {
    if ((int)pFVar2->_padding_ < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsBeingRead()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x2c,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    *(int *)&pFVar2->_padding_ = (int)pFVar2->_padding_ + -1;
    UNLOCK();
  }
  pFVar2 = (this->DataToRender).Reference;
  if (pFVar2 != (FNiagaraDataBuffer *)0x0) {
    if ((int)pFVar2->_padding_ < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsBeingRead()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x2c,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    *(int *)&pFVar2->_padding_ = (int)pFVar2->_padding_ + -1;
    UNLOCK();
  }
  pFVar3 = (this->DataInterfaceProxies).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->DIClassNames).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FNiagaraParameterStore::~FNiagaraParameterStore
            ((FNiagaraParameterStore *)&this->CombinedParamStore);
  pFVar1 = (this->ExternalCBufferLayout).Reference;
  if (pFVar1 != (FNiagaraRHIUniformBufferLayout *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar3 = (this->DebugSimName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// operator() @ 149027850

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FNiagaraComputeExecutionContext::Reset'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FNiagaraComputeExecutionContext *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  this_00 = *(FNiagaraComputeExecutionContext **)((longlong)this + 8);
  lVar1 = *(longlong *)this;
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComputeExecutionContext.cpp"
                       ,0xd6,L"Can only reset the gpu context from the render thread");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (lVar1 != 0) {
    bVar3 = IsInParallelRenderingThread();
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                         ,0x6a,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FNiagaraGPUInstanceCountManager::FreeEntry
              ((FNiagaraGPUInstanceCountManager *)(lVar1 + 0x48),&this_00->CountOffset_RT);
  }
  this_00->CurrentNumInstances_RT = 0;
  this_00->CountOffset_RT = 0xffffffff;
  (this_00->EmitterInstanceReadback).GPUCountOffset = 0xffffffff;
  FNiagaraComputeExecutionContext::SetDataToRender(this_00,(FNiagaraDataBuffer *)0x0);
  return;
}

// DirtyDataInterfaces @ 14903e320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraComputeExecutionContext::DirtyDataInterfaces(FNiagaraComputeExecutionContext *this)

{
  longlong *plVar1;
  
  plVar1 = &(this->CombinedParamStore)._padding_;
  *(uint *)plVar1 = (uint)*plVar1 | 2;
  return;
}

// FindIterationInterface @ 149041af0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNiagaraDataInterfaceProxyRW * __thiscall
FNiagaraComputeExecutionContext::FindIterationInterface
          (FNiagaraComputeExecutionContext *this,
          TArray<FNiagaraDataInterfaceProxyRW_*,TSizedDefaultAllocator<32>_> *param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  FNiagaraSimStageExecutionData *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FNiagaraDataInterfaceProxyRW *pFVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 local_res18 [8];
  uint local_res20;
  FString local_50;
  
  if (((this->SimStageExecData).Object == (FNiagaraSimStageExecutionData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FNiagaraDataInterfaceProxyRW *)(*pcVar3)();
    return pFVar6;
  }
  pFVar2 = (this->SimStageExecData).Object;
  uVar9 = ~param_2 >> 0x1f;
  uVar5 = 0;
  if ((int)param_2 < (pFVar2->SimStageMetaData).ArrayNum) {
    uVar5 = uVar9;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FNiagaraDataInterfaceProxyRW *)(*pcVar3)();
    return pFVar6;
  }
  lVar10 = (longlong)(int)param_2 * 0xa8;
  if ((pFVar2->SimStageMetaData).AllocatorInstance.Data[lVar10 + 0x34] ==
      (FScriptContainerElement)0x1) {
    local_res20 = param_1->ArrayNum;
    uVar7 = (ulonglong)(int)local_res20;
    pFVar8 = (param_1->AllocatorInstance).Data;
    pFVar1 = pFVar8 + uVar7 * 8;
    while( true ) {
      if (param_1->ArrayNum != (int)uVar7) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FNiagaraDataInterfaceProxyRW_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar8 == pFVar1) {
        if (5 < (byte)LogNiagara._0_1_) {
          if (((this->SimStageExecData).Object == (FNiagaraSimStageExecutionData *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar6 = (FNiagaraDataInterfaceProxyRW *)(*pcVar3)();
            return pFVar6;
          }
          pFVar2 = (this->SimStageExecData).Object;
          uVar5 = 0;
          if ((int)param_2 < (pFVar2->SimStageMetaData).ArrayNum) {
            uVar5 = uVar9;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar6 = (FNiagaraDataInterfaceProxyRW *)(*pcVar3)();
            return pFVar6;
          }
          ::FName::ToString((FName *)((pFVar2->SimStageMetaData).AllocatorInstance.Data +
                                     lVar10 + 0x38),&local_50);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
        }
        goto LAB_149041d67;
      }
      pFVar6 = *(FNiagaraDataInterfaceProxyRW **)pFVar8;
      if (((this->SimStageExecData).Object == (FNiagaraSimStageExecutionData *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FNiagaraDataInterfaceProxyRW *)(*pcVar3)();
        return pFVar6;
      }
      pFVar2 = (this->SimStageExecData).Object;
      uVar5 = 0;
      if ((int)param_2 < (pFVar2->SimStageMetaData).ArrayNum) {
        uVar5 = uVar9;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FNiagaraDataInterfaceProxyRW *)(*pcVar3)();
        return pFVar6;
      }
      if (*(longlong *)&pFVar6->field_0x8 ==
          *(longlong *)((pFVar2->SimStageMetaData).AllocatorInstance.Data + lVar10 + 0x38)) break;
      uVar7 = (ulonglong)local_res20;
      pFVar8 = pFVar8 + 8;
    }
  }
  else {
LAB_149041d67:
    pFVar6 = (FNiagaraDataInterfaceProxyRW *)0x0;
  }
  return pFVar6;
}

// GetConstantBufferSize @ 149044810

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall
FNiagaraComputeExecutionContext::GetConstantBufferSize(FNiagaraComputeExecutionContext *this)

{
  uint uVar1;
  
  uVar1 = FNiagaraScriptInstanceParameterStore::GetExternalParameterSize(&this->CombinedParamStore);
  return uVar1 + 0xf & 0xfffffff0;
}

// GetDataToRender @ 149045a90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FNiagaraDataBuffer * __thiscall
FNiagaraComputeExecutionContext::GetDataToRender
          (FNiagaraComputeExecutionContext *this,FRHICommandListBase *param_1,bool param_2)

{
  FNiagaraDataBuffer *pFVar1;
  
  if (param_2) {
    pFVar1 = (this->TranslucentDataToRender).Reference;
  }
  else {
    pFVar1 = (this->MultiViewPreviousDataToRender).Reference;
  }
  if (pFVar1 == (FNiagaraDataBuffer *)0x0) {
    pFVar1 = (this->DataToRender).Reference;
  }
  return pFVar1;
}

// HasTranslucentDataToRender @ 14904cd60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FNiagaraComputeExecutionContext::HasTranslucentDataToRender(FNiagaraComputeExecutionContext *this)

{
  return (this->TranslucentDataToRender).Reference != (FNiagaraDataBuffer *)0x0;
}

// InitParams @ 149058090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraComputeExecutionContext::InitParams
          (FNiagaraComputeExecutionContext *this,UNiagaraScript *param_1,
          TSharedPtr<FNiagaraSimStageExecutionData,1> *param_2,ENiagaraSimTarget param_3)

{
  int *piVar1;
  ForAnyElementType FVar2;
  TReferenceControllerBase<1> *pTVar3;
  FNiagaraSimStageExecutionData *pFVar4;
  FShaderMapPointerTable *pFVar5;
  FNiagaraShaderScript *pFVar6;
  FNiagaraShaderScriptParametersMetadata *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  FShaderMapBase *pFVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  ulonglong *puVar15;
  FName *pFVar16;
  int iVar17;
  ForAnyElementType FVar18;
  ulonglong *puVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar22;
  FScriptContainerElement *pFVar23;
  undefined1 local_res8 [8];
  TReferenceControllerBase<1> *local_res10;
  FName local_res18;
  undefined8 local_68;
  TShaderRefBase<FNiagaraShader,FNiagaraShaderMapPointerTable> local_60;
  FNiagaraSimStageExecutionData *local_50;
  TReferenceControllerBase<1> *pTStack_48;
  
  this->GPUScript = param_1;
  pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
  pFVar4 = param_2->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_50 = (this->SimStageExecData).Object;
  pTStack_48 = (this->SimStageExecData).SharedReferenceCount.ReferenceController;
  (this->SimStageExecData).Object = pFVar4;
  (this->SimStageExecData).SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_48);
  FNiagaraScriptInstanceParameterStore::InitFromOwningContext
            (&this->CombinedParamStore,param_1,param_3,true);
  if ((this->GPUScript == (UNiagaraScript *)0x0) ||
     (bVar11 = FNiagaraVMExecutableDataId::HasInterpolatedParameters
                         (&this->GPUScript->CachedScriptVMId), !bVar11)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  this->HasInterpolationParameters = bVar11;
  FNiagaraShaderScript::GetShaderGameThread((param_1->ScriptResource).Object,&local_60,0);
  if (local_60.ShaderContent == (FNiagaraShader *)0x0) {
    pFVar6 = (param_1->ScriptResource).Object;
    if ((pFVar6->ScriptParametersMetadata).Object == (FNiagaraShaderScriptParametersMetadata *)0x0)
    {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ScriptParametersMetadata.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Public\\NiagaraShared.h"
                          ,0x378,L"");
      if (bVar11) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (((pFVar6->ScriptParametersMetadata).Object ==
           (FNiagaraShaderScriptParametersMetadata *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x408,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    local_res10 = (pFVar6->ScriptParametersMetadata).SharedReferenceCount.ReferenceController;
    pFVar7 = (pFVar6->ScriptParametersMetadata).Object;
    if (local_res10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_res10->SharedReferenceCount = (atomic<int>)((int)local_res10->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar7 == (FNiagaraShaderScriptParametersMetadata *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar12 = (pFVar7->DataInterfaceParamInfo).ArrayNum;
    pTVar22 = &this->DIClassNames;
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    piVar1 = &(this->DIClassNames).ArrayMax;
    (this->DIClassNames).ArrayNum = 0;
    if (*piVar1 != uVar12) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar12,&pTVar22->AllocatorInstance,0,piVar1);
    }
    iVar13 = (pFVar7->DataInterfaceParamInfo).ArrayNum;
    pFVar21 = (pFVar7->DataInterfaceParamInfo).AllocatorInstance.Data;
    pFVar23 = pFVar21 + (longlong)iVar13 * 0x38;
    while( true ) {
      if ((pFVar7->DataInterfaceParamInfo).ArrayNum != iVar13) {
        `TCheckedPointerIterator<FNiagaraDataInterfaceGPUParamInfo,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar21 == pFVar23) break;
      iVar14 = (this->DIClassNames).ArrayNum;
      if (iVar14 == *piVar1) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&pTVar22->AllocatorInstance,piVar1);
      }
      (this->DIClassNames).ArrayNum = iVar14 + 1;
      pFVar8 = (pTVar22->AllocatorInstance).Data;
      iVar17 = *(int *)(pFVar21 + 0x18) + -1;
      if (*(int *)(pFVar21 + 0x18) == 0) {
        iVar17 = 0;
      }
      pFVar16 = ::FName::FName(&local_res18,iVar17,*(wchar_t **)(pFVar21 + 0x10),FNAME_Add);
      pFVar21 = pFVar21 + 0x38;
      *(FName *)(pFVar8 + (longlong)iVar14 * 8) = *pFVar16;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_res10)
    ;
  }
  else {
    uVar12 = ((local_60.ShaderContent)->DataInterfaceParameters).ArrayNum;
    pTVar22 = &this->DIClassNames;
    if ((int)uVar12 < 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (!bVar11) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
      }
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    piVar1 = &(this->DIClassNames).ArrayMax;
    (this->DIClassNames).ArrayNum = 0;
    if (*piVar1 != uVar12) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar12,&pTVar22->AllocatorInstance,0,piVar1);
    }
    FVar18 = ((local_60.ShaderContent)->DataInterfaceParameters).AllocatorInstance;
    if (((ulonglong)FVar18 & 1) != 0) {
      FVar18 = (ForAnyElementType)
               ((longlong)
                &((local_60.ShaderContent)->DataInterfaceParameters).AllocatorInstance.field_0x0 +
               ((longlong)FVar18 >> 0x18));
    }
    iVar13 = ((local_60.ShaderContent)->DataInterfaceParameters).ArrayNum;
    if ((iVar13 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    FVar2 = (ForAnyElementType)((longlong)FVar18 + (longlong)iVar13 * 0x18);
    if (FVar18 != FVar2) {
      puVar19 = (ulonglong *)((longlong)FVar18 + 8);
      do {
        pFVar10 = local_60.ShaderMap;
        if (((local_60.ShaderMap)->PointerTable == (FShaderMapPointerTable *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("PointerTable",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                ,0x9b4,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        puVar15 = puVar19;
        if ((*puVar19 & 1) != 0) {
          pFVar5 = pFVar10->PointerTable;
          uVar20 = (uint)(*puVar19 >> 1);
          uVar12 = 0;
          if ((int)uVar20 < *(int *)&pFVar5[1].ShaderTypes.field_0x20) {
            uVar12 = ~uVar20 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          puVar15 = (ulonglong *)
                    (*(longlong *)&pFVar5[1].ShaderTypes.field_0x18 + (longlong)(int)uVar20 * 8);
        }
        local_68 = *(undefined8 *)(*(longlong *)(*puVar15 + 0x10) + 0x18);
        pFVar21 = (pTVar22->AllocatorInstance).Data;
        if (((pFVar21 <= (FScriptContainerElement *)&local_68) &&
            ((FScriptContainerElement *)&local_68 < pFVar21 + (longlong)*piVar1 * 8)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar13 = (this->DIClassNames).ArrayNum;
        if (iVar13 == *piVar1) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&pTVar22->AllocatorInstance,piVar1);
        }
        (this->DIClassNames).ArrayNum = iVar13 + 1;
        *(undefined8 *)((pTVar22->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_68;
        FVar18 = (ForAnyElementType)(puVar19 + 2);
        puVar19 = puVar19 + 3;
      } while (FVar18 != FVar2);
    }
  }
  return;
}

// IsInputStage @ 149059e10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FNiagaraComputeExecutionContext::IsInputStage
          (FNiagaraComputeExecutionContext *this,FNiagaraDataInterfaceProxy *param_1,uint param_2)

{
  FName *pFVar1;
  FNiagaraSimStageExecutionData *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  FName *pFVar8;
  
  if ((param_1 != (FNiagaraDataInterfaceProxy *)0x0) && (param_1->SourceDIName != (FName)0x0)) {
    if ((this->SimStageExecData).Object == (FNiagaraSimStageExecutionData *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    pFVar2 = (this->SimStageExecData).Object;
    uVar7 = 0;
    if ((int)param_2 < (pFVar2->SimStageMetaData).ArrayNum) {
      uVar7 = ~param_2 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    pFVar3 = (pFVar2->SimStageMetaData).AllocatorInstance.Data;
    pFVar8 = *(FName **)(pFVar3 + (longlong)(int)param_2 * 0xa8 + 0x78);
    pFVar1 = pFVar8 + *(int *)(pFVar3 + (longlong)(int)param_2 * 0xa8 + 0x80);
    if (pFVar8 != pFVar1) {
      do {
        if (*pFVar8 == param_1->SourceDIName) {
          return true;
        }
        pFVar8 = pFVar8 + 1;
      } while (pFVar8 != pFVar1);
    }
  }
  return false;
}

// IsIterationStage @ 14905a030

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FNiagaraComputeExecutionContext::IsIterationStage
          (FNiagaraComputeExecutionContext *this,FNiagaraDataInterfaceProxy *param_1,uint param_2)

{
  TSharedPtr<FNiagaraSimStageExecutionData,1> *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  FNiagaraSimStageExecutionData *pFVar5;
  
  if ((param_1 == (FNiagaraDataInterfaceProxy *)0x0) || (param_1->SourceDIName == (FName)0x0)) {
    return false;
  }
  this_00 = &this->SimStageExecData;
  if ((this_00->Object == (FNiagaraSimStageExecutionData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pFVar5 = this_00->Object;
  uVar4 = 0;
  if ((int)param_2 < (pFVar5->SimStageMetaData).ArrayNum) {
    uVar4 = ~param_2 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((pFVar5->SimStageMetaData).AllocatorInstance.Data[(longlong)(int)param_2 * 0xa8 + 0x34] ==
      (FScriptContainerElement)0x1) {
    pFVar5 = TSharedPtr<FNiagaraSimStageExecutionData,1>::operator->(this_00);
    uVar4 = 0;
    if ((int)param_2 < (pFVar5->SimStageMetaData).ArrayNum) {
      uVar4 = ~param_2 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if (*(FName *)((pFVar5->SimStageMetaData).AllocatorInstance.Data +
                  (longlong)(int)param_2 * 0xa8 + 0x38) == param_1->SourceDIName) {
      return true;
    }
  }
  return false;
}

// IsOutputStage @ 14905a3e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FNiagaraComputeExecutionContext::IsOutputStage
          (FNiagaraComputeExecutionContext *this,FNiagaraDataInterfaceProxy *param_1,uint param_2)

{
  FName *pFVar1;
  FNiagaraSimStageExecutionData *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  FName *pFVar8;
  
  if ((param_1 != (FNiagaraDataInterfaceProxy *)0x0) && (param_1->SourceDIName != (FName)0x0)) {
    if ((this->SimStageExecData).Object == (FNiagaraSimStageExecutionData *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    pFVar2 = (this->SimStageExecData).Object;
    uVar7 = 0;
    if ((int)param_2 < (pFVar2->SimStageMetaData).ArrayNum) {
      uVar7 = ~param_2 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    pFVar3 = (pFVar2->SimStageMetaData).AllocatorInstance.Data;
    pFVar8 = *(FName **)(pFVar3 + (longlong)(int)param_2 * 0xa8 + 0x68);
    pFVar1 = pFVar8 + *(int *)(pFVar3 + (longlong)(int)param_2 * 0xa8 + 0x70);
    if (pFVar8 != pFVar1) {
      do {
        if (*pFVar8 == param_1->SourceDIName) {
          return true;
        }
        pFVar8 = pFVar8 + 1;
      } while (pFVar8 != pFVar1);
    }
  }
  return false;
}

// OptionalContexInit @ 14905cac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FNiagaraComputeExecutionContext::OptionalContexInit
          (FNiagaraComputeExecutionContext *this,FNiagaraSystemInstance *param_1)

{
  FWeakObjectPtr *pFVar1;
  UNiagaraScript *pUVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  UObject *pUVar10;
  int iVar11;
  FWeakObjectPtr *this_00;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong local_res18;
  
  pUVar2 = this->GPUScript;
  if (((pUVar2 == (UNiagaraScript *)0x0) ||
      (bVar5 = FNiagaraVMExecutableData::IsValid(&pUVar2->CachedScriptVM), !bVar5)) ||
     ((pUVar2->CachedScriptVM).bNeedsGPUContextInit == 0)) {
    return true;
  }
  iVar11 = (int)(this->CombinedParamStore)._padding_;
  uVar14 = 0;
  if (0 < iVar11) {
    lVar15 = 0;
    local_res18 = 0;
    do {
      uVar13 = ~uVar14 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar14 < iVar11) {
        uVar8 = uVar13;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pUVar3 = *(UObject **)(local_res18 + (this->CombinedParamStore)._padding_);
      uVar8 = 0;
      if ((int)uVar14 < (pUVar2->CachedScriptVM).DataInterfaceInfo.ArrayNum) {
        uVar8 = uVar13;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if (*(int *)((pUVar2->CachedScriptVM).DataInterfaceInfo.AllocatorInstance.Data + lVar15 + 8)
          != -1) {
        this_00 = (FWeakObjectPtr *)
                  (param_1->DataInterfaceInstanceDataOffsets).AllocatorInstance.Data;
        pFVar1 = (FWeakObjectPtr *)
                 ((longlong)this_00 +
                 (longlong)(param_1->DataInterfaceInstanceDataOffsets).ArrayNum * 0xc);
        for (; this_00 != pFVar1; this_00 = (FWeakObjectPtr *)&this_00[1].ObjectSerialNumber) {
          pUVar10 = FWeakObjectPtr::Get(this_00);
          if (pUVar10 == pUVar3) {
            if (this_00 != (FWeakObjectPtr *)0x0) {
              uVar8 = this_00[1].ObjectIndex;
              uVar9 = 0;
              if ((int)uVar8 < (param_1->DataInterfaceInstanceData).ArrayNum) {
                uVar9 = ~uVar8 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
              pFVar12 = (param_1->DataInterfaceInstanceData).AllocatorInstance.Data + (int)uVar8;
              goto LAB_14905cc2c;
            }
            break;
          }
        }
        pFVar12 = (FScriptContainerElement *)0x0;
LAB_14905cc2c:
        cVar7 = (**(code **)(*(longlong *)pUVar3 + 0x2d8))(pUVar3);
        if (cVar7 != '\0') {
          pcVar4 = *(code **)(*(longlong *)pUVar3 + 0x2e0);
          uVar8 = 0;
          if ((int)uVar14 < (pUVar2->CachedScriptVM).DataInterfaceInfo.ArrayNum) {
            uVar8 = uVar13;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          (*pcVar4)(pUVar3,(pUVar2->CachedScriptVM).DataInterfaceInfo.AllocatorInstance.Data +
                           (longlong)(int)uVar14 * 0x50,pFVar12,param_1);
        }
      }
      uVar14 = uVar14 + 1;
      iVar11 = (int)(this->CombinedParamStore)._padding_;
      local_res18 = local_res18 + 8;
      lVar15 = lVar15 + 0x50;
    } while ((int)uVar14 < iVar11);
  }
  return true;
}

// PostTick @ 14905f320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FNiagaraComputeExecutionContext::PostTick(FNiagaraComputeExecutionContext *this)

{
  if (this->HasInterpolationParameters != false) {
    FNiagaraScriptInstanceParameterStore::CopyCurrToPrev(&this->CombinedParamStore);
    return;
  }
  return;
}

// Reset @ 149063fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraComputeExecutionContext::Reset
          (FNiagaraComputeExecutionContext *this,FNiagaraGpuComputeDispatchInterface *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FNiagaraGpuComputeDispatchInterface *pFStack_70;
  FNiagaraComputeExecutionContext *local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FNiagaraGpuComputeDispatchInterface *pFStack_40;
  FNiagaraComputeExecutionContext *local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if ((param_1 == (FNiagaraGpuComputeDispatchInterface *)0x0) || ((char)param_1->_padding_ != '\0'))
  {
    param_1 = (FNiagaraGpuComputeDispatchInterface *)0x0;
  }
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FNiagaraComputeExecutionContext::Reset'::`2'::<lambda_1>,1,0>::
              _vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FNiagaraComputeExecutionContext::Reset'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = param_1;
  local_68 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FNiagaraComputeExecutionContext::Reset_::__l2::TSTR_ResetRT33>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FNiagaraComputeExecutionContext::Reset'::__l2::TSTR_ResetRT33>::Get
                       ();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// ResetInternal @ 149064450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraComputeExecutionContext::ResetInternal
          (FNiagaraComputeExecutionContext *this,FNiagaraGpuComputeDispatchInterface *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComputeExecutionContext.cpp"
                         ,0xd6,L"Can only reset the gpu context from the render thread"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 != (FNiagaraGpuComputeDispatchInterface *)0x0) {
    bVar2 = IsInParallelRenderingThread();
    if ((!bVar2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInParallelRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                           ,0x6a,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FNiagaraGPUInstanceCountManager::FreeEntry
              (&param_1->GPUInstanceCounterManager,&this->CountOffset_RT);
  }
  this->CurrentNumInstances_RT = 0;
  this->CountOffset_RT = 0xffffffff;
  (this->EmitterInstanceReadback).GPUCountOffset = 0xffffffff;
  SetDataToRender(this,(FNiagaraDataBuffer *)0x0);
  return;
}

// SetDataToRender @ 149066e20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraComputeExecutionContext::SetDataToRender
          (FNiagaraComputeExecutionContext *this,FNiagaraDataBuffer *param_1)

{
  FNiagaraDataBuffer *pFVar1;
  FNiagaraDataBuffer *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  TRefCountPtr<FNiagaraDataBuffer>::operator=(&this->DataToRender,param_1);
  pFVar1 = (this->TranslucentDataToRender).Reference;
  if (pFVar1 != (FNiagaraDataBuffer *)0x0) {
    pFVar2 = (this->DataToRender).Reference;
    if ((pFVar2 != (FNiagaraDataBuffer *)0x0) && (pFVar2 != pFVar1)) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6978035736633147627>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComputeExecutionContext.cpp"
                         ,0xeb,
                         "(DataToRender == nullptr) || (DataToRender == TranslucentDataToRender)");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar1 = (this->TranslucentDataToRender).Reference;
    if (pFVar1 != (FNiagaraDataBuffer *)0x0) {
      (this->TranslucentDataToRender).Reference = (FNiagaraDataBuffer *)0x0;
      if ((int)pFVar1->_padding_ < 1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsBeingRead()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                           ,0x2c,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      LOCK();
      *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + -1;
      UNLOCK();
    }
  }
  return;
}

// SetMultiViewPreviousDataToRender @ 1490671d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraComputeExecutionContext::SetMultiViewPreviousDataToRender
          (FNiagaraComputeExecutionContext *this,FNiagaraDataBuffer *param_1)

{
  TRefCountPtr<FNiagaraDataBuffer>::operator=(&this->MultiViewPreviousDataToRender,param_1);
  return;
}

// SetTranslucentDataToRender @ 149067f30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraComputeExecutionContext::SetTranslucentDataToRender
          (FNiagaraComputeExecutionContext *this,FNiagaraDataBuffer *param_1)

{
  TRefCountPtr<FNiagaraDataBuffer>::operator=(&this->TranslucentDataToRender,param_1);
  return;
}

// Tick @ 14906adf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FNiagaraComputeExecutionContext::Tick
          (FNiagaraComputeExecutionContext *this,FNiagaraSystemInstance *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  uint uVar7;
  FNiagaraLWCConverter *pFVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FString local_a8;
  FString local_98;
  FString local_88;
  TVector<double>_u_0 local_78;
  FNiagaraLWCConverter local_58;
  
  if ((param_1 == (FNiagaraSystemInstance *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentSystemInstance",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComputeExecutionContext.cpp"
                         ,0x7f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if (((uint)(this->CombinedParamStore)._padding_ >> 1 & 1) != 0) {
    iVar1 = (this->DIClassNames).ArrayNum;
    bVar4 = iVar1 != (int)(this->CombinedParamStore)._padding_;
    if ((!bVar4) && (uVar9 = 0, 0 < iVar1)) {
      lVar11 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar9 < (int)(this->CombinedParamStore)._padding_) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        lVar10 = *(longlong *)(lVar11 + (this->CombinedParamStore)._padding_);
        if (lVar10 == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x18);
        }
        uVar7 = 0;
        if ((int)uVar9 < (this->DIClassNames).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        uVar9 = uVar9 + 1;
        bVar4 = (bool)(bVar4 | *(longlong *)((this->DIClassNames).AllocatorInstance.Data + lVar11)
                               != lVar10);
        lVar11 = lVar11 + 8;
      } while ((int)uVar9 < (this->DIClassNames).ArrayNum);
    }
    if (bVar4) {
      if (1 < (byte)LogNiagara._0_1_) {
        if (param_1->System == (UNiagaraSystem *)0x0) {
          ::FString::FString(&local_a8,L"None");
        }
        else {
          local_res10 = (FName)param_1->System->_padding_;
          ::FName::ToString(&local_res10,&local_a8);
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
      }
      iVar1 = (int)(this->CombinedParamStore)._padding_;
      uVar9 = 0;
      iVar2 = (this->DIClassNames).ArrayNum;
      if (iVar1 < iVar2) {
        iVar1 = iVar2;
      }
      if (0 < iVar1) {
        lVar11 = 0;
        do {
          if (((int)uVar9 < 0) || ((int)(this->CombinedParamStore)._padding_ <= (int)uVar9)) {
            local_res8.ComparisonIndex.Value = 0;
            local_res8.Number = 0;
            if (-1 < (int)uVar9) goto LAB_14906b091;
LAB_14906b0f6:
            local_res18.ComparisonIndex.Value = 0;
            local_res18.Number = 0;
          }
          else {
            if (((int)uVar9 < 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            local_res8 = *(FName *)(*(longlong *)
                                     (*(longlong *)
                                       (lVar11 * 8 + (this->CombinedParamStore)._padding_) + 0x10) +
                                   0x18);
LAB_14906b091:
            if ((this->DIClassNames).ArrayNum <= (int)uVar9) goto LAB_14906b0f6;
            uVar7 = 0;
            if ((int)uVar9 < (this->DIClassNames).ArrayNum) {
              uVar7 = ~uVar9 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            local_res18 = *(FName *)((this->DIClassNames).AllocatorInstance.Data + lVar11 * 8);
          }
          if (1 < (byte)LogNiagara._0_1_) {
            ::FName::ToString(&local_res18,&local_88);
            ::FName::ToString(&local_res8,&local_98);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
            if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.Data.AllocatorInstance.Data);
            }
            if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
            }
          }
          uVar9 = uVar9 + 1;
          lVar11 = lVar11 + 1;
        } while (lVar11 < iVar1);
      }
      return false;
    }
    if (((uint)(this->CombinedParamStore)._padding_ >> 3 & 1) != 0) {
      pFVar8 = FNiagaraSystemInstance::GetLWCConverter(param_1,&local_58,false);
      local_78._s_0.X = (pFVar8->SystemWorldPos).field0_0x0._s_0.X;
      local_78._s_0.Y = (pFVar8->SystemWorldPos).field0_0x0._s_0.Y;
      local_78._s_0.Z = (pFVar8->SystemWorldPos).field0_0x0._s_0.Z;
      FNiagaraParameterStore::ResolvePositions
                ((FNiagaraParameterStore *)&this->CombinedParamStore,
                 (FNiagaraLWCConverter *)&local_78._s_0);
    }
    FNiagaraParameterStore::Tick((FNiagaraParameterStore *)&this->CombinedParamStore);
  }
  return true;
}

// WriteConstantBufferInstanceData @ 14906fb50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

uchar * __thiscall
FNiagaraComputeExecutionContext::WriteConstantBufferInstanceData
          (FNiagaraComputeExecutionContext *this,uchar *param_1,FNiagaraComputeInstanceData *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uchar *puVar5;
  size_t _Size;
  
  bVar2 = this->HasInterpolationParameters;
  uVar3 = FNiagaraScriptInstanceParameterStore::GetExternalParameterSize(&this->CombinedParamStore);
  param_2->ExternalParamData = param_1;
  param_2->ExternalParamDataSize = (uVar3 + 0xf & 0xfffffff0) * ((bVar2 != false) + 1);
  uVar3 = FNiagaraScriptInstanceParameterStore::GetExternalParameterSize(&this->CombinedParamStore);
  _Size = (size_t)(int)uVar3;
  uVar4 = FNiagaraScriptInstanceParameterStore::GetExternalParameterSize(&this->CombinedParamStore);
  if ((int)(this->CombinedParamStore)._padding_ < (int)uVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SourceDataSize <= ParameterDataArray.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComputeExecutionContext.cpp"
                       ,0x10c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar5 = (uchar *)(*pcVar1)();
      return puVar5;
    }
  }
  memcpy(param_2->ExternalParamData,(void *)(this->CombinedParamStore)._padding_,_Size);
  if (this->HasInterpolationParameters != false) {
    if ((int)(this->CombinedParamStore)._padding_ < (int)(uVar3 * 2)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourceDataSize + SourceDataSize <= ParameterDataArray.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComputeExecutionContext.cpp"
                         ,0x111,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        puVar5 = (uchar *)(*pcVar1)();
        return puVar5;
      }
    }
    memcpy(param_2->ExternalParamData + (int)(uVar4 + 0xf & 0xfffffff0),
           (void *)((this->CombinedParamStore)._padding_ + _Size),_Size);
  }
  return param_1 + param_2->ExternalParamDataSize;
}

