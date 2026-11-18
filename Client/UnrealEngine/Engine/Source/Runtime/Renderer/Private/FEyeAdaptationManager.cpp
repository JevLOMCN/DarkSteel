// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 12

// FEyeAdaptationManager @ 145194fd0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FEyeAdaptationManager * __thiscall
FSceneViewState::FEyeAdaptationManager::FEyeAdaptationManager(FEyeAdaptationManager *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  int *piVar5;
  
  this->LastAverageLocalExposure = 1.0;
  this->LastAverageSceneLuminance = 0.0;
  this->CurrentBufferIndex = 0;
  this->LastExposure = 0.0;
  this->PooledRenderTarget[0].Reference = (IPooledRenderTarget *)0x0;
  piVar1 = &(this->ExposureReadbackBuffers).ArrayMax;
  this->PooledRenderTarget[1].Reference = (IPooledRenderTarget *)0x0;
  this->ExposureBufferData[0].Reference = (FRDGPooledBuffer *)0x0;
  this->ExposureBufferData[1].Reference = (FRDGPooledBuffer *)0x0;
  (this->ExposureReadbackBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar5 = &(this->ExposureReadbackBuffers).ArrayNum;
  *piVar1 = 0;
  this->ReadbackBuffersWriteIndex = 0;
  this->ReadbackBuffersNumPending = 0;
  *piVar5 = 0;
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,4,&(this->ExposureReadbackBuffers).AllocatorInstance,piVar5,piVar1);
  pFVar3 = (this->ExposureReadbackBuffers).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar4 * 8;
  *(undefined8 *)pFVar2 = 0;
  *(undefined8 *)(pFVar2 + 8) = 0;
  pFVar3 = pFVar3 + (longlong)iVar4 * 8 + 0x10;
  *(undefined8 *)pFVar3 = 0;
  *(undefined8 *)(pFVar3 + 8) = 0;
  return this;
}

// EnqueueExposureBufferReadback @ 1451c3c60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSceneViewState::FEyeAdaptationManager::EnqueueExposureBufferReadback
          (FEyeAdaptationManager *this,FRDGBuilder *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRDGBuffer *pFVar4;
  FRHIGPUBufferReadback *pFVar5;
  FRHIGPUBufferReadback *pFVar6;
  uint uVar7;
  
  if ((this->ExposureBufferData[this->CurrentBufferIndex].Reference == (FRDGPooledBuffer *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExposureBufferData[CurrentBufferIndex].IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\PostProcessEyeAdaptation.cpp"
                         ,0x55d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (this->ReadbackBuffersNumPending < 4) {
    pFVar4 = FRDGBuilder::RegisterExternalBuffer
                       (param_1,this->ExposureBufferData + this->CurrentBufferIndex,MultiFrame);
    uVar3 = this->ReadbackBuffersWriteIndex;
    pFVar6 = (FRHIGPUBufferReadback *)0x0;
    uVar7 = 0;
    if ((int)uVar3 < (this->ExposureReadbackBuffers).ArrayNum) {
      uVar7 = ~uVar3 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar5 = *(FRHIGPUBufferReadback **)
              ((this->ExposureReadbackBuffers).AllocatorInstance.Data + (longlong)(int)uVar3 * 8);
    if (pFVar5 == (FRHIGPUBufferReadback *)0x0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::FName::FName(&ExposureValueName,L"Scene view state exposure readback");
        _Init_thread_footer(&::_TSS0);
      }
      pFVar5 = ::operator_new(0x58);
      if (pFVar5 != (FRHIGPUBufferReadback *)0x0) {
        pFVar6 = FRHIGPUBufferReadback::FRHIGPUBufferReadback(pFVar5,ExposureValueName);
      }
      uVar3 = this->ReadbackBuffersWriteIndex;
      uVar7 = 0;
      if ((int)uVar3 < (this->ExposureReadbackBuffers).ArrayNum) {
        uVar7 = ~uVar3 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(FRHIGPUBufferReadback **)
       ((this->ExposureReadbackBuffers).AllocatorInstance.Data + (longlong)(int)uVar3 * 8) = pFVar6;
      pFVar5 = pFVar6;
    }
    AddEnqueueCopyPass(param_1,pFVar5,pFVar4,0);
    uVar7 = this->ReadbackBuffersNumPending + 1;
    this->ReadbackBuffersWriteIndex = this->ReadbackBuffersWriteIndex + 1 & 3;
    uVar3 = 4;
    if (uVar7 < 4) {
      uVar3 = uVar7;
    }
    this->ReadbackBuffersNumPending = uVar3;
  }
  return;
}

// GetBuffer @ 1451cea30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRefCountPtr<FRDGPooledBuffer> * __thiscall
FSceneViewState::FEyeAdaptationManager::GetBuffer(FEyeAdaptationManager *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FRDGPooledBuffer> *pTVar3;
  
  if (1 < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("0 <= BufferIndex && BufferIndex < NUM_BUFFERS",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\PostProcessEyeAdaptation.cpp"
                       ,0x50e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TRefCountPtr<FRDGPooledBuffer> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this->ExposureBufferData + param_1;
}

// GetLatestReadbackBuffer @ 1451d14a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRHIGPUBufferReadback * __thiscall
FSceneViewState::FEyeAdaptationManager::GetLatestReadbackBuffer(FEyeAdaptationManager *this)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  FRHIGPUBufferReadback *pFVar6;
  uint uVar7;
  
  uVar7 = this->ReadbackBuffersNumPending;
  pFVar6 = (FRHIGPUBufferReadback *)0x0;
  if (uVar7 == 0) {
    return (FRHIGPUBufferReadback *)0x0;
  }
  do {
    uVar7 = this->ReadbackBuffersWriteIndex - uVar7 & 3;
    if (((this->ExposureReadbackBuffers).ArrayNum <= (int)uVar7) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FRHIGPUBufferReadback *)(*pcVar3)();
      return pFVar6;
    }
    lVar1 = *(longlong *)
             ((this->ExposureReadbackBuffers).AllocatorInstance.Data + (ulonglong)uVar7 * 8);
    lVar2 = *(longlong *)(lVar1 + 8);
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) != 0) {
        return pFVar6;
      }
      cVar5 = (**(code **)(**(longlong **)(lVar1 + 8) + 0x20))();
      if (cVar5 == '\0') {
        return pFVar6;
      }
    }
    this->ReadbackBuffersNumPending = this->ReadbackBuffersNumPending - 1;
    if (((this->ExposureReadbackBuffers).ArrayNum <= (int)uVar7) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FRHIGPUBufferReadback *)(*pcVar3)();
      return pFVar6;
    }
    pFVar6 = *(FRHIGPUBufferReadback **)
              ((this->ExposureReadbackBuffers).AllocatorInstance.Data + (ulonglong)uVar7 * 8);
    uVar7 = this->ReadbackBuffersNumPending;
    if (uVar7 == 0) {
      return pFVar6;
    }
  } while( true );
}

// GetOrCreateBuffer @ 1451d2160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRDGPooledBuffer> * __thiscall
FSceneViewState::FEyeAdaptationManager::GetOrCreateBuffer
          (FEyeAdaptationManager *this,FRDGBuilder *param_1,uint param_2)

{
  longlong *plVar1;
  ERHIPipeline EVar2;
  FRDGPooledBuffer *pFVar3;
  FRDGPooledBuffer *pFVar4;
  FRHICommandListBase *pFVar5;
  FRHIBuffer *pFVar6;
  code *pcVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  TRefCountPtr<FRDGPooledBuffer> *pTVar12;
  FRDGBuffer *pFVar13;
  undefined8 *puVar14;
  undefined4 uStack_3c;
  FRDGBufferDesc local_30;
  
  if ((1 < param_2) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("0 <= BufferIndex && BufferIndex < NUM_BUFFERS",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\PostProcessEyeAdaptation.cpp"
                          ,0x515,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    pTVar12 = (TRefCountPtr<FRDGPooledBuffer> *)(*pcVar7)();
    return pTVar12;
  }
  if (this->ExposureBufferData[param_2].Reference == (FRDGPooledBuffer *)0x0) {
    local_30.BytesPerElement = 0x10;
    local_30.NumElements = 2;
    local_30._12_4_ = uStack_3c;
    local_30.Usage = StructuredBuffer|ShaderResource|SourceCopy|UnorderedAccess|Static;
    local_30.Metadata = (FShaderParametersMetadata *)0x0;
    pFVar13 = FRDGBuilder::CreateBuffer(param_1,&local_30,L"EyeAdaptationBuffer",MultiFrame);
    pTVar12 = FRDGBuilder::ConvertToExternalBuffer(param_1,pFVar13);
    pFVar3 = this->ExposureBufferData[param_2].Reference;
    pFVar4 = pTVar12->Reference;
    if (pFVar3 != pFVar4) {
      this->ExposureBufferData[param_2].Reference = pFVar4;
      if (pFVar4 != (FRDGPooledBuffer *)0x0) {
        LOCK();
        *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
        UNLOCK();
      }
      if (pFVar3 != (FRDGPooledBuffer *)0x0) {
        plVar1 = &pFVar3->_padding_;
        LOCK();
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar8 == 1) && (plVar1 != (longlong *)0x0)) {
          (**(code **)pFVar3->_padding_)(pFVar3,1);
        }
      }
    }
    pFVar5 = (FRHICommandListBase *)param_1->_padding_;
    pFVar6 = ((this->ExposureBufferData[param_2].Reference)->Buffer).Reference;
    if (((((GRHICommandList.bLatchedBypass == false) ||
          ((pFVar5->PersistentState).bImmediate == '\0')) && (pFVar5->bExecuting != false)) &&
        ((GRHICommandList.bLatchedBypass == false || ((pFVar5->PersistentState).bImmediate == '\0'))
        )) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsTopOfPipe() || Bypass()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                                   ,0x2ed,
                                   L"Buffers may only be locked while recording RHI command lists, not during RHI command list execution."
                                  ), bVar11)) {
      pcVar7 = (code *)swi(3);
      pTVar12 = (TRefCountPtr<FRDGPooledBuffer> *)(*pcVar7)();
      return pTVar12;
    }
    EVar2 = pFVar5->ActivePipelines;
    if (((EVar2 != None) && ((EVar2 & EVar2 - Graphics) != None)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                            ,0x2a5,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      pTVar12 = (TRefCountPtr<FRDGPooledBuffer> *)(*pcVar7)();
      return pTVar12;
    }
    bVar11 = pFVar5->ActivePipelines == None;
    if (bVar11) {
      FRHICommandListBase::SwitchPipeline(pFVar5,Graphics);
    }
    puVar14 = (undefined8 *)
              (**(code **)(GDynamicRHI->_padding_ + 0x148))(GDynamicRHI,pFVar5,pFVar6,0,0x20,1);
    if (bVar11) {
      FRHICommandListBase::SwitchPipeline(pFVar5,None);
    }
    uVar10 = _UNK_15076b1f8;
    uVar9 = ___xmm_3f8000003f8000003f8000003f800000;
    *puVar14 = ___xmm_3f8000003f8000003f8000003f800000;
    puVar14[1] = uVar10;
    puVar14[2] = uVar9;
    puVar14[3] = uVar10;
    pFVar5 = (FRHICommandListBase *)param_1->_padding_;
    pFVar6 = ((this->ExposureBufferData[param_2].Reference)->Buffer).Reference;
    if (((((GRHICommandList.bLatchedBypass == false) ||
          ((pFVar5->PersistentState).bImmediate == '\0')) && (pFVar5->bExecuting != false)) &&
        ((GRHICommandList.bLatchedBypass == false || ((pFVar5->PersistentState).bImmediate == '\0'))
        )) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsTopOfPipe() || Bypass()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                                   ,0x2f5,
                                   L"Buffers may only be unlocked while recording RHI command lists, not during RHI command list execution."
                                  ), bVar11)) {
      pcVar7 = (code *)swi(3);
      pTVar12 = (TRefCountPtr<FRDGPooledBuffer> *)(*pcVar7)();
      return pTVar12;
    }
    EVar2 = pFVar5->ActivePipelines;
    if (((EVar2 != None) && ((EVar2 & EVar2 - Graphics) != None)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                            ,0x2a5,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      pTVar12 = (TRefCountPtr<FRDGPooledBuffer> *)(*pcVar7)();
      return pTVar12;
    }
    if (pFVar5->ActivePipelines == None) {
      FRHICommandListBase::SwitchPipeline(pFVar5,Graphics);
      (**(code **)(GDynamicRHI->_padding_ + 0x158))(GDynamicRHI,pFVar5,pFVar6);
      FRHICommandListBase::SwitchPipeline(pFVar5,None);
    }
    else {
      (**(code **)(GDynamicRHI->_padding_ + 0x158))(GDynamicRHI,pFVar5,pFVar6);
    }
  }
  return this->ExposureBufferData + param_2;
}

// GetOrCreateTexture @ 1451d2470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<IPooledRenderTarget> * __thiscall
FSceneViewState::FEyeAdaptationManager::GetOrCreateTexture
          (FEyeAdaptationManager *this,FRDGBuilder *param_1,uint param_2)

{
  IPooledRenderTarget *pIVar1;
  IPooledRenderTarget *pIVar2;
  code *pcVar3;
  bool bVar4;
  TRefCountPtr<IPooledRenderTarget> *pTVar5;
  FRDGTexture *pFVar6;
  TRefCountPtr<IPooledRenderTarget> *pTVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined1 local_78 [24];
  float local_60;
  int local_5c;
  undefined4 local_58;
  undefined1 *local_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined2 local_44;
  void *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (1 < param_2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("0 <= TextureIndex && TextureIndex < NUM_BUFFERS",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\PostProcessEyeAdaptation.cpp"
                       ,0x4fc,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TRefCountPtr<IPooledRenderTarget> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pTVar5 = this->PooledRenderTarget + param_2;
  if (this->PooledRenderTarget[param_2].Reference == (IPooledRenderTarget *)0x0) {
    local_60 = FClearValueBinding::None.Value.Color[3];
    local_88 = 1;
    local_5c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    uStack_84 = 1;
    local_54 = &DAT_100000001;
    local_58 = 0;
    local_38 = (void *)0x0;
    local_30 = 0;
    local_2c = 1;
    local_78._0_8_ = 0x20008;
    local_78._8_8_ = FClearValueBinding::None._0_8_;
    local_78._16_8_ = FClearValueBinding::None.Value._4_8_;
    local_4c = 0x10001;
    local_48 = 0x1000101;
    local_44 = 0xff00;
    pFVar6 = FRDGBuilder::CreateTexture
                       (param_1,(FRDGTextureDesc *)local_78,L"EyeAdaptationTexture",MultiFrame);
    pTVar7 = FRDGBuilder::ConvertToExternalTexture(param_1,pFVar6);
    pIVar1 = pTVar5->Reference;
    pIVar2 = pTVar7->Reference;
    if (pIVar1 != pIVar2) {
      pTVar5->Reference = pIVar2;
      if (pIVar2 != (IPooledRenderTarget *)0x0) {
        (**(code **)(pIVar2->_padding_ + 0x30))();
      }
      if (pIVar1 != (IPooledRenderTarget *)0x0) {
        (**(code **)(pIVar1->_padding_ + 0x38))(pIVar1);
      }
    }
    if (local_38 != (void *)0x0) {
      FMemory::Free(local_38);
    }
  }
  return pTVar5;
}

// GetTexture @ 1451ddba0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRefCountPtr<IPooledRenderTarget> * __thiscall
FSceneViewState::FEyeAdaptationManager::GetTexture(FEyeAdaptationManager *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<IPooledRenderTarget> *pTVar3;
  
  if (1 < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("0 <= TextureIndex && TextureIndex < NUM_BUFFERS",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\PostProcessEyeAdaptation.cpp"
                       ,0x4f3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TRefCountPtr<IPooledRenderTarget> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this->PooledRenderTarget + param_1;
}

// SafeRelease @ 1451e3330

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FSceneViewState::FEyeAdaptationManager::SafeRelease(FEyeAdaptationManager *this)

{
  longlong *plVar1;
  undefined8 *puVar2;
  FRDGPooledBuffer *pFVar3;
  IPooledRenderTarget *pIVar4;
  undefined8 *puVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  uint uVar9;
  TRefCountPtr<IPooledRenderTarget> *pTVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  uint uVar16;
  
  uVar12 = 0;
  this->LastAverageLocalExposure = 1.0;
  this->LastAverageSceneLuminance = 0.0;
  this->CurrentBufferIndex = 0;
  this->LastExposure = 0.0;
  pTVar10 = this->PooledRenderTarget;
  this->ReadbackBuffersWriteIndex = 0;
  this->ReadbackBuffersNumPending = 0;
  lVar13 = 2;
  do {
    pFVar3 = ((TRefCountPtr<FRDGPooledBuffer> *)(pTVar10 + 2))->Reference;
    if (pFVar3 != (FRDGPooledBuffer *)0x0) {
      ((TRefCountPtr<FRDGPooledBuffer> *)(pTVar10 + 2))->Reference = (FRDGPooledBuffer *)0x0;
      plVar1 = &pFVar3->_padding_;
      LOCK();
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar7 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
    }
    pIVar4 = pTVar10->Reference;
    if (pIVar4 != (IPooledRenderTarget *)0x0) {
      pTVar10->Reference = (IPooledRenderTarget *)0x0;
      (**(code **)(pIVar4->_padding_ + 0x38))();
    }
    pTVar10 = pTVar10 + 1;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  uVar15 = uVar12;
  if (0 < (this->ExposureReadbackBuffers).ArrayNum) {
    do {
      uVar11 = (uint)uVar12;
      uVar16 = ~uVar11 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar11 < (this->ExposureReadbackBuffers).ArrayNum) {
        uVar9 = uVar16;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*(longlong *)((this->ExposureReadbackBuffers).AllocatorInstance.Data + uVar15) != 0) {
        uVar9 = 0;
        if ((int)uVar11 < (this->ExposureReadbackBuffers).ArrayNum) {
          uVar9 = uVar16;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        puVar5 = *(undefined8 **)((this->ExposureReadbackBuffers).AllocatorInstance.Data + uVar15);
        if (puVar5 != (undefined8 *)0x0) {
          puVar14 = puVar5 + 0xb;
          lVar13 = 8;
          do {
            puVar2 = puVar14 + -1;
            puVar14 = puVar14 + -1;
            lVar13 = lVar13 + -1;
            if ((FRHIResource *)*puVar2 != (FRHIResource *)0x0) {
              FRHIResource::Release((FRHIResource *)*puVar2);
            }
          } while (lVar13 != 0);
          *puVar5 = &___7FRHIGPUMemoryReadback__6B_;
          if ((FRHIResource *)puVar5[1] != (FRHIResource *)0x0) {
            FRHIResource::Release((FRHIResource *)puVar5[1]);
          }
          ::operator_delete(puVar5,0x58);
        }
        uVar9 = 0;
        if ((int)uVar11 < (this->ExposureReadbackBuffers).ArrayNum) {
          uVar9 = uVar16;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined8 *)((this->ExposureReadbackBuffers).AllocatorInstance.Data + uVar15) = 0;
      }
      uVar12 = (ulonglong)(uVar11 + 1);
      uVar15 = uVar15 + 8;
    } while ((int)(uVar11 + 1) < (this->ExposureReadbackBuffers).ArrayNum);
  }
  return;
}

// SwapBuffers @ 1451e5cf0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FSceneViewState::FEyeAdaptationManager::SwapBuffers(FEyeAdaptationManager *this)

{
  uint uVar1;
  
  uVar1 = this->CurrentBufferIndex + 1U & 0x80000001;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
  }
  this->CurrentBufferIndex = uVar1;
  return;
}

// UpdateLastExposureFromBuffer @ 1451e67d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSceneViewState::FEyeAdaptationManager::UpdateLastExposureFromBuffer(FEyeAdaptationManager *this)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:_void___cdecl_FSceneViewState::FEyeAdaptationManager::UpdateLastExposureFromBuffer(void)_::_2_::FStat_STAT_FEyeAdaptationRTManager_ReadbackLastExposure>
  FVar11;
  float *pfVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar13;
  FName FVar14;
  FRHIGPUBufferReadback *this_02;
  uint uVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_68;
  FName local_60;
  FStatMessage local_50 [2];
  
  this_02 = (FRHIGPUBufferReadback *)0x0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FEyeAdaptationRTManager_ReadbackLastExposure ==
          (FThreadSafeStaticStat<_public:_void___cdecl_FSceneViewState::FEyeAdaptationManager::UpdateLastExposureFromBuffer(void)_::_2_::FStat_STAT_FEyeAdaptationRTManager_ReadbackLastExposure>
           )0x0) {
        pFVar10 = ::FName::FName(&local_res20,"STAT_FEyeAdaptationRTManager_ReadbackLastExposure");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_FEyeAdaptationRTManager_ReadbackLastExposure,*pFVar10,
                   L"STAT_FEyeAdaptationRTManager_ReadbackLastExposure","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar11 = StatPtr_STAT_FEyeAdaptationRTManager_ReadbackLastExposure;
  if (StatPtr_STAT_FEyeAdaptationRTManager_ReadbackLastExposure ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FSceneViewState::FEyeAdaptationManager::UpdateLastExposureFromBuffer(void)_::_2_::FStat_STAT_FEyeAdaptationRTManager_ReadbackLastExposure>
       )0x0) {
    pFVar10 = ::FName::FName(&local_68,"STAT_FEyeAdaptationRTManager_ReadbackLastExposure");
    FVar11 = (FThreadSafeStaticStat<_public:_void___cdecl_FSceneViewState::FEyeAdaptationManager::UpdateLastExposureFromBuffer(void)_::_2_::FStat_STAT_FEyeAdaptationRTManager_ReadbackLastExposure>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FEyeAdaptationRTManager_ReadbackLastExposure,*pFVar10,
                          L"STAT_FEyeAdaptationRTManager_ReadbackLastExposure","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar15 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar15 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar13.Value;
        local_res10.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\PostProcessEyeAdaptation.cpp"
                   ,0x547);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar13.Value;
      local_res18.s.HighPart = uVar15;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar6 = true;
      goto LAB_1451e6944;
    }
  }
  bVar6 = false;
  FVar14 = local_60;
LAB_1451e6944:
  uVar15 = this->ReadbackBuffersNumPending;
  if (uVar15 != 0) {
    do {
      uVar15 = this->ReadbackBuffersWriteIndex - uVar15 & 3;
      if ((this->ExposureReadbackBuffers).ArrayNum <= (int)uVar15) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      lVar2 = *(longlong *)
               ((this->ExposureReadbackBuffers).AllocatorInstance.Data + (ulonglong)uVar15 * 8);
      lVar3 = *(longlong *)(lVar2 + 8);
      if (lVar3 != 0) {
        if (*(int *)(lVar3 + 0x18) != 0) break;
        cVar9 = (**(code **)(**(longlong **)(lVar2 + 8) + 0x20))();
        if (cVar9 == '\0') break;
      }
      this->ReadbackBuffersNumPending = this->ReadbackBuffersNumPending - 1;
      if ((this->ExposureReadbackBuffers).ArrayNum <= (int)uVar15) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      this_02 = *(FRHIGPUBufferReadback **)
                 ((this->ExposureReadbackBuffers).AllocatorInstance.Data + (ulonglong)uVar15 * 8);
      uVar15 = this->ReadbackBuffersNumPending;
    } while (uVar15 != 0);
    if (this_02 != (FRHIGPUBufferReadback *)0x0) {
      pfVar12 = FRHIGPUBufferReadback::Lock(this_02,0x20);
      if (pfVar12 != (float *)0x0) {
        this->LastExposure = *pfVar12;
        this->LastAverageSceneLuminance = pfVar12[2];
        this->LastAverageLocalExposure = pfVar12[4];
        FRHIGPUBufferReadback::Unlock(this_02);
      }
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_50[0].NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_50[0].NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_50[0].StatData.Pad[4] = '\0';
      local_50[0].StatData.Pad[5] = '\0';
      local_50[0].StatData.Pad[6] = '\0';
      local_50[0].StatData.Pad[7] = '\0';
      local_50[0].StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_50[0].StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_50[0].StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_50[0].StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_50);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// ~FEyeAdaptationManager @ 145405070

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FSceneViewState::FEyeAdaptationManager::~FEyeAdaptationManager(FEyeAdaptationManager *this)

{
  longlong *plVar1;
  TRefCountPtr<IPooledRenderTarget> *pTVar2;
  FScriptContainerElement *pFVar3;
  FRDGPooledBuffer *pFVar4;
  longlong lVar5;
  longlong lVar6;
  TRefCountPtr<FRDGPooledBuffer> *pTVar7;
  TArray<FRHIGPUBufferReadback_*,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  
  pTVar8 = &this->ExposureReadbackBuffers;
  pFVar3 = (pTVar8->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  lVar9 = 2;
  lVar6 = 2;
  do {
    pFVar4 = ((TRefCountPtr<FRDGPooledBuffer> *)(pTVar8 + -1))[1].Reference;
    pTVar8 = (TArray<FRHIGPUBufferReadback_*,TSizedDefaultAllocator<32>_> *)
             ((TRefCountPtr<FRDGPooledBuffer> *)(pTVar8 + -1) + 1);
    lVar6 = lVar6 + -1;
    if (pFVar4 != (FRDGPooledBuffer *)0x0) {
      plVar1 = &pFVar4->_padding_;
      LOCK();
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar4->_padding_)(pFVar4,1);
      }
    }
  } while (lVar6 != 0);
  pTVar7 = this->ExposureBufferData;
  do {
    pTVar2 = (TRefCountPtr<IPooledRenderTarget> *)(pTVar7 + -1);
    pTVar7 = pTVar7 + -1;
    lVar9 = lVar9 + -1;
    if (pTVar2->Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)(pTVar2->Reference->_padding_ + 0x38))();
    }
  } while (lVar9 != 0);
  return;
}

// GetGPUSizeBytes @ 1454f3b50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
FSceneViewState::FEyeAdaptationManager::GetGPUSizeBytes(FEyeAdaptationManager *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FRDGPooledBuffer *pFVar3;
  FRHIGPUBufferReadback *this_00;
  uint uVar4;
  ulong64 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulong64 uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  TRefCountPtr<IPooledRenderTarget> *pTVar11;
  undefined1 local_res8 [8];
  FName local_res18 [2];
  FString local_48;
  
  lVar7 = 0;
  pTVar11 = this->PooledRenderTarget;
  uVar9 = 0;
  do {
    if (pTVar11->Reference == (IPooledRenderTarget *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar4 = (**(code **)(pTVar11->Reference->_padding_ + 0x18))();
      uVar6 = (ulonglong)uVar4;
    }
    if (((param_1) && ((int)uVar6 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
      (**(code **)(pTVar11->Reference->_padding_ + 0x10))();
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
    }
    uVar9 = uVar9 + 1;
    lVar7 = lVar7 + uVar6;
    pTVar11 = pTVar11 + 1;
  } while (uVar9 < 2);
  pFVar3 = this->ExposureBufferData[0].Reference;
  if (pFVar3 == (FRDGPooledBuffer *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = (pFVar3->Desc).NumElements * (pFVar3->Desc).BytesPerElement;
  }
  if (((param_1) && (uVar9 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_LogSizes_Buffer_150fb86c8,
               (FLogCategoryBase *)&LogRenderer);
  }
  pFVar3 = this->ExposureBufferData[1].Reference;
  if (pFVar3 == (FRDGPooledBuffer *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (ulonglong)((pFVar3->Desc).NumElements * (pFVar3->Desc).BytesPerElement);
  }
  if (((param_1) && ((int)uVar6 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_LogSizes_Buffer_150fb86c8,
               (FLogCategoryBase *)&LogRenderer);
  }
  pFVar10 = (this->ExposureReadbackBuffers).AllocatorInstance.Data;
  iVar2 = (this->ExposureReadbackBuffers).ArrayNum;
  uVar8 = lVar7 + (ulonglong)uVar9 + uVar6;
  pFVar1 = pFVar10 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ExposureReadbackBuffers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FRHIGPUBufferReadback_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar10 == pFVar1) break;
    this_00 = *(FRHIGPUBufferReadback **)pFVar10;
    if (this_00 == (FRHIGPUBufferReadback *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FRHIGPUBufferReadback::GetGPUSizeBytes(this_00);
    }
    if (((param_1) && (uVar5 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
      local_res18[0] = *(FName *)(this_00->_padding_ + 0x1c);
      ::FName::ToString(local_res18,&local_48);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)&PTR_u_LogSizes_Buffer_150fb87e0,
                 (FLogCategoryBase *)&LogRenderer);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    uVar8 = uVar8 + uVar5;
    pFVar10 = pFVar10 + 8;
  }
  return uVar8;
}

