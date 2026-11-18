// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 10

// FLumenSurfaceCacheFeedback @ 144df4b60

FLumenSurfaceCacheFeedback * __thiscall
FLumenSurfaceCacheFeedback::FLumenSurfaceCacheFeedback(FLumenSurfaceCacheFeedback *this)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  
  FRenderResource::FRenderResource((FRenderResource *)this);
  this->MaxReadbackBuffers = 4;
  this->ReadbackBuffersWriteIndex = 0;
  piVar1 = &(this->ReadbackBuffers).ArrayNum;
  this->FrameIndex = 0;
  this->ReadbackBuffersNumPending = 0;
  this->_padding_ = (longlong)&___7FLumenSurfaceCacheFeedback__6B_;
  piVar2 = &(this->ReadbackBuffers).ArrayMax;
  *piVar1 = 0;
  (this->ReadbackBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,4,&(this->ReadbackBuffers).AllocatorInstance,piVar1,piVar2);
  pFVar4 = (this->ReadbackBuffers).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar5 * 8;
  *(undefined8 *)pFVar3 = 0;
  *(undefined8 *)(pFVar3 + 8) = 0;
  pFVar4 = pFVar4 + (longlong)iVar5 * 8 + 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)(pFVar4 + 8) = 0;
  return this;
}

// ~FLumenSurfaceCacheFeedback @ 144df4f70

void __thiscall
FLumenSurfaceCacheFeedback::~FLumenSurfaceCacheFeedback(FLumenSurfaceCacheFeedback *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  
  uVar9 = 0;
  this->_padding_ = (longlong)&___7FLumenSurfaceCacheFeedback__6B_;
  if (0 < (this->ReadbackBuffers).ArrayNum) {
    lVar11 = 0;
    do {
      uVar8 = ~uVar9 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar9 < (this->ReadbackBuffers).ArrayNum) {
        uVar6 = uVar8;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(longlong *)((this->ReadbackBuffers).AllocatorInstance.Data + lVar11) != 0) {
        uVar6 = 0;
        if ((int)uVar9 < (this->ReadbackBuffers).ArrayNum) {
          uVar6 = uVar8;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar2 = *(undefined8 **)((this->ReadbackBuffers).AllocatorInstance.Data + lVar11);
        if (puVar2 != (undefined8 *)0x0) {
          puVar10 = puVar2 + 0xb;
          lVar7 = 8;
          do {
            puVar1 = puVar10 + -1;
            puVar10 = puVar10 + -1;
            lVar7 = lVar7 + -1;
            if ((FRHIResource *)*puVar1 != (FRHIResource *)0x0) {
              FRHIResource::Release((FRHIResource *)*puVar1);
            }
          } while (lVar7 != 0);
          *puVar2 = &___7FRHIGPUMemoryReadback__6B_;
          if ((FRHIResource *)puVar2[1] != (FRHIResource *)0x0) {
            FRHIResource::Release((FRHIResource *)puVar2[1]);
          }
          ::operator_delete(puVar2,0x58);
        }
        uVar6 = 0;
        if ((int)uVar9 < (this->ReadbackBuffers).ArrayNum) {
          uVar6 = uVar8;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined8 *)((this->ReadbackBuffers).AllocatorInstance.Data + lVar11) = 0;
      }
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 8;
    } while ((int)uVar9 < (this->ReadbackBuffers).ArrayNum);
  }
  pFVar3 = (this->ReadbackBuffers).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// operator() @ 144dfb370

void __thiscall
`FLumenSurfaceCacheFeedback::SubmitFeedbackBuffer'::__l2::<lambda_2>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FRDGResource *this_00;
  FRHIGPUBufferReadback *this_01;
  
  this_00 = *(FRDGResource **)((longlong)this + 8);
  this_01 = *(FRHIGPUBufferReadback **)this;
  FRDGResource::ValidateRHIAccess(this_00);
  FRHIGPUBufferReadback::EnqueueCopy(this_01,param_2,(FRHIBuffer *)this_00->ResourceRHI,0);
  return;
}

// AllocateFeedbackResources @ 144e00610

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FLumenSurfaceCacheFeedback::AllocateFeedbackResources
          (FLumenSurfaceCacheFeedback *this,FRDGBuilder *param_1,FFeedbackResources *param_2,
          FViewFamilyInfo *param_3)

{
  ulonglong uVar1;
  TIntPoint<int>_u_0_s_0 TVar2;
  longlong lVar3;
  FRDGBuffer *pFVar4;
  FRDGBufferUAV *pFVar5;
  FRDGBufferSRV *pFVar6;
  FRDGBuffer *pFVar7;
  int iVar8;
  int iVar9;
  FRDGBufferUAVDesc local_58;
  undefined8 local_48;
  FRDGBufferSRVDesc local_40;
  
  local_58.Buffer = (FRDGBuffer *)CONCAT44(local_58.Buffer._4_4_,0x10109);
  local_58._padding_._0_1_ = 4;
  local_58._padding_._1_1_ = 0;
  local_58._padding_._2_1_ = 0;
  local_58._padding_._3_1_ = 0;
  local_58._padding_._4_4_ = 1;
  local_40._padding_ = 0x100000004;
  iVar9 = 0x100;
  if (GLumenSurfaceCacheFeedbackTileSize < 0x100) {
    iVar9 = GLumenSurfaceCacheFeedbackTileSize;
  }
  TVar2 = (param_3->SceneTexturesConfig).Extent.field0_0x0._s_0;
  iVar8 = 1;
  if (1 < iVar9) {
    iVar8 = iVar9;
  }
  local_40._padding_ = (longlong)local_58.Buffer;
  iVar9 = 1;
  if (iVar8 != 0) {
    iVar9 = iVar8;
  }
  local_48 = 0;
  local_40._padding_ = 0;
  uVar1 = (ulonglong)(iVar9 - 1) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  iVar9 = 1 << ((byte)lVar3 & 0x1f);
  param_2->BufferSize = ((TVar2.Y + -1 + iVar9) / iVar9) * ((TVar2.X + -1 + iVar9) / iVar9);
  pFVar4 = FRDGBuilder::CreateBuffer
                     (param_1,(FRDGBufferDesc *)&local_40,L"Lumen.FeedbackAllocator",None);
  local_58._padding_._1_1_ = 0;
  local_58._padding_._0_1_ = 0;
  local_58._padding_._2_1_ = 0;
  if (((pFVar4->Desc).Usage & DrawIndirect) != None) {
    local_58._padding_._0_1_ = 0x1c;
  }
  local_58.Buffer = pFVar4;
  pFVar5 = FRDGBuilder::CreateUAV(param_1,&local_58,SkipBarrier);
  param_2->BufferAllocatorUAV = pFVar5;
  local_40._padding_ = CONCAT71(local_40._padding_._1_7_,0x1c);
  local_40._padding_ = local_40._padding_ & 0xffffffff;
  local_40._padding_ = CONCAT44(local_40._padding_._4_4_,0xffffffff);
  local_40._padding_ = 0;
  local_40.Buffer = pFVar4;
  pFVar6 = FRDGBuilder::CreateSRV(param_1,&local_40);
  param_2->BufferAllocatorSRV = pFVar6;
  local_58._padding_._4_4_ = param_2->BufferSize;
  local_58.Buffer = (FRDGBuffer *)CONCAT44(local_58.Buffer._4_4_,0x10109);
  local_58._padding_._0_1_ = 8;
  local_58._padding_._1_1_ = 0;
  local_58._padding_._2_1_ = 0;
  local_58._padding_._3_1_ = 0;
  local_40._padding_ = CONCAT44(local_58._padding_._4_4_,8);
  local_48 = 0;
  local_40._padding_ = (longlong)local_58.Buffer;
  local_40._padding_ = 0;
  pFVar7 = FRDGBuilder::CreateBuffer(param_1,(FRDGBufferDesc *)&local_40,L"Lumen.Feedback",None);
  local_58._padding_._1_1_ = 0;
  local_58._padding_._2_1_ = 0;
  local_58._padding_._0_1_ = 0;
  if (((pFVar7->Desc).Usage & DrawIndirect) != None) {
    local_58._padding_._0_1_ = 0x1c;
  }
  local_58.Buffer = pFVar7;
  pFVar5 = FRDGBuilder::CreateUAV(param_1,&local_58,SkipBarrier);
  param_2->BufferUAV = pFVar5;
  local_40._padding_ = CONCAT71(local_40._padding_._1_7_,0x44);
  local_40._padding_ = local_40._padding_ & 0xffffffff;
  local_40._padding_ = CONCAT44(local_40._padding_._4_4_,0xffffffff);
  local_40._padding_ = 0;
  local_40.Buffer = pFVar7;
  pFVar6 = FRDGBuilder::CreateSRV(param_1,&local_40);
  param_2->BufferSRV = pFVar6;
  local_58._padding_._0_1_ = 0x1c;
  local_58._padding_._1_1_ = 0;
  local_58._padding_._2_1_ = 0;
  local_58.Buffer = pFVar4;
  pFVar5 = FRDGBuilder::CreateUAV(param_1,&local_58,None);
  AddClearUAVPass(param_1,pFVar5,0,Compute);
  local_58._padding_._0_1_ = 0x44;
  local_58._padding_._1_1_ = 0;
  local_58._padding_._2_1_ = 0;
  local_58.Buffer = pFVar7;
  pFVar5 = FRDGBuilder::CreateUAV(param_1,&local_58,None);
  AddClearUAVPass(param_1,pFVar5,0,Compute);
  return;
}

// GetDummyFeedbackAllocatorUAV @ 144e1c390

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBufferUAV * __thiscall
FLumenSurfaceCacheFeedback::GetDummyFeedbackAllocatorUAV
          (FLumenSurfaceCacheFeedback *this,FRDGBuilder *param_1)

{
  FRDGBufferUAV *pFVar1;
  FRDGBufferUAVDesc local_38;
  undefined8 local_28;
  undefined1 local_20 [16];
  FShaderParametersMetadata *local_10;
  
  local_38.Buffer =
       (FRDGBuffer *)
       CONCAT44(local_38.Buffer._4_4_,StructuredBuffer|ShaderResource|UnorderedAccess|Static);
  local_38._padding_._3_1_ = 0;
  local_38._padding_._4_4_ = 1;
  local_20._0_4_ = 4;
  local_20._4_4_ = 1;
  local_28 = 0;
  local_10 = (FShaderParametersMetadata *)0x0;
  local_20._8_8_ = local_38.Buffer;
  local_38._padding_._0_1_ = 0;
  local_38._padding_._1_1_ = 0;
  local_38._padding_._2_1_ = 0;
  local_38.Buffer =
       FRDGBuilder::CreateBuffer
                 (param_1,(FRDGBufferDesc *)local_20,L"Lumen.DummyFeedbackAllocator",None);
  local_38._padding_._0_1_ = 0;
  if ((((local_38.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_38._padding_._0_1_ = 0x1c;
  }
  pFVar1 = FRDGBuilder::CreateUAV(param_1,&local_38,SkipBarrier);
  return pFVar1;
}

// GetDummyFeedbackUAV @ 144e1c430

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBufferUAV * __thiscall
FLumenSurfaceCacheFeedback::GetDummyFeedbackUAV
          (FLumenSurfaceCacheFeedback *this,FRDGBuilder *param_1)

{
  FRDGBufferUAV *pFVar1;
  FRDGBufferUAVDesc local_38;
  undefined8 local_28;
  undefined1 local_20 [16];
  FShaderParametersMetadata *local_10;
  
  local_38.Buffer =
       (FRDGBuffer *)
       CONCAT44(local_38.Buffer._4_4_,StructuredBuffer|ShaderResource|UnorderedAccess|Static);
  local_38._padding_._3_1_ = 0;
  local_38._padding_._4_4_ = 1;
  local_20._0_4_ = 8;
  local_20._4_4_ = 1;
  local_28 = 0;
  local_10 = (FShaderParametersMetadata *)0x0;
  local_20._8_8_ = local_38.Buffer;
  local_38._padding_._0_1_ = 0;
  local_38._padding_._1_1_ = 0;
  local_38._padding_._2_1_ = 0;
  local_38.Buffer =
       FRDGBuilder::CreateBuffer(param_1,(FRDGBufferDesc *)local_20,L"Lumen.DummyFeedback",None);
  local_38._padding_._0_1_ = 0;
  if ((((local_38.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_38._padding_._0_1_ = 0x1c;
  }
  pFVar1 = FRDGBuilder::CreateUAV(param_1,&local_38,SkipBarrier);
  return pFVar1;
}

// GetFeedbackBufferTileJitter @ 144e1c540

TIntPoint<int> __thiscall
FLumenSurfaceCacheFeedback::GetFeedbackBufferTileJitter(FLumenSurfaceCacheFeedback *this)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  TIntPoint<int>_u_0 in_RDX;
  int iVar6;
  int iVar7;
  
  iVar7 = 0x100;
  if (GLumenSurfaceCacheFeedbackTileSize < 0x100) {
    iVar7 = GLumenSurfaceCacheFeedbackTileSize;
  }
  iVar6 = 1;
  if (1 < iVar7) {
    iVar6 = iVar7;
  }
  iVar7 = 1;
  if (iVar6 != 0) {
    iVar7 = iVar6;
  }
  uVar1 = (ulonglong)(iVar7 - 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar6 = 1 << ((byte)lVar2 & 0x1f);
  iVar7 = 1;
  if (iVar6 != 0) {
    iVar7 = iVar6;
  }
  uVar1 = (ulonglong)(iVar7 - 1) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  uVar5 = this->FrameIndex % (uint)(iVar6 << ((byte)lVar2 & 0x1f));
  uVar4 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8;
  uVar4 = (uVar4 | uVar5 << 0x18) >> 4 & 0xf0f0f0f | (uVar4 & 0xff0f0f0f | uVar5 << 0x18) << 4;
  uVar4 = (uVar4 & 0xf3333333) << 2 | uVar4 >> 2 & 0x33333333;
  uVar5 = (uVar4 >> 1 & 0x55555555 | (uVar4 & 0xd5555555) * 2) >>
          (('\x10' - (char)lVar3) * '\x02' & 0x1fU);
  uVar4 = uVar5 & 0x55555555;
  uVar5 = uVar5 >> 1 & 0x55555555;
  uVar4 = (uVar4 >> 1 ^ uVar4) & 0x33333333;
  uVar4 = (uVar4 >> 2 ^ uVar4) & 0xf0f0f0f;
  uVar4 = (uVar4 >> 4 ^ uVar4) & 0xff00ff;
  *(uint *)in_RDX = (uVar4 >> 8 ^ uVar4) & 0xffff;
  uVar4 = (uVar5 >> 1 ^ uVar5) & 0x33333333;
  uVar4 = (uVar4 >> 2 ^ uVar4) & 0xf0f0f0f;
  uVar4 = (uVar4 >> 4 ^ uVar4) & 0xff00ff;
  *(uint *)((longlong)in_RDX + 4) = (uVar4 >> 8 ^ uVar4) & 0xffff;
  return (TIntPoint<int>)in_RDX;
}

// GetLatestReadbackBuffer @ 144e1c9d0

FRHIGPUBufferReadback * __thiscall
FLumenSurfaceCacheFeedback::GetLatestReadbackBuffer(FLumenSurfaceCacheFeedback *this)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  FRHIGPUBufferReadback *pFVar7;
  int iVar8;
  uint uVar9;
  
  iVar8 = this->ReadbackBuffersNumPending;
  pFVar7 = (FRHIGPUBufferReadback *)0x0;
  if (iVar8 < 1) {
    return (FRHIGPUBufferReadback *)0x0;
  }
  do {
    uVar9 = ((this->ReadbackBuffersWriteIndex - iVar8) + this->MaxReadbackBuffers) %
            this->MaxReadbackBuffers;
    uVar6 = 0;
    if ((int)uVar9 < (this->ReadbackBuffers).ArrayNum) {
      uVar6 = ~uVar9 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FRHIGPUBufferReadback *)(*pcVar3)();
      return pFVar7;
    }
    lVar1 = *(longlong *)((this->ReadbackBuffers).AllocatorInstance.Data + (longlong)(int)uVar9 * 8)
    ;
    lVar2 = *(longlong *)(lVar1 + 8);
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) != 0) {
        return pFVar7;
      }
      cVar5 = (**(code **)(**(longlong **)(lVar1 + 8) + 0x20))();
      if (cVar5 == '\0') {
        return pFVar7;
      }
    }
    this->ReadbackBuffersNumPending = this->ReadbackBuffersNumPending + -1;
    uVar6 = 0;
    if ((int)uVar9 < (this->ReadbackBuffers).ArrayNum) {
      uVar6 = ~uVar9 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FRHIGPUBufferReadback *)(*pcVar3)();
      return pFVar7;
    }
    iVar8 = this->ReadbackBuffersNumPending;
    pFVar7 = *(FRHIGPUBufferReadback **)
              ((this->ReadbackBuffers).AllocatorInstance.Data + (longlong)(int)uVar9 * 8);
    if (iVar8 < 1) {
      return pFVar7;
    }
  } while( true );
}

// SubmitFeedbackBuffer @ 144e34bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FLumenSurfaceCacheFeedback::SubmitFeedbackBuffer
          (FLumenSurfaceCacheFeedback *this,FViewInfo *param_1,FRDGBuilder *param_2,
          FFeedbackResources *param_3)

{
  ulonglong uVar1;
  char cVar2;
  FGlobalShaderMap *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FRDGScope *this_00;
  FRDGBufferUAV *pFVar9;
  FRDGBuffer *pFVar10;
  FRDGBuffer *pFVar11;
  undefined8 *puVar12;
  FShaderType *pFVar13;
  FName FVar14;
  FRDGEventName *pFVar15;
  FShaderParametersMetadata *pFVar16;
  undefined8 *puVar17;
  FRDGBufferSRV *pFVar18;
  FRHIGPUBufferReadback *pFVar19;
  FName *pFVar20;
  byte bVar21;
  uint uVar22;
  longlong *plVar23;
  uint uVar24;
  longlong *plVar25;
  undefined1 auStackY_3e8 [32];
  TShaderRefBase<FCompactFeedbackHashTableCS,FShaderMapPointerTable> local_388;
  undefined8 local_378;
  undefined8 *local_368;
  undefined8 *local_360;
  undefined8 *local_358;
  undefined8 *local_350;
  FRDGBuffer *local_348;
  FViewInfo *local_340;
  FRDGBufferUAVDesc local_338;
  FRDGBuffer *local_328;
  FRDGBuffer *local_320;
  FRDGBuffer *local_318;
  FRDGBufferUAVDesc local_310;
  FRDGBufferUAVDesc local_300;
  FRDGBuffer *local_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  FRDGBufferUAVDesc local_2e0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_2c8;
  TIntVector3<int>_u_0 local_2b8;
  TIntVector3<int>_u_0 local_2a8;
  FRDGBufferUAVDesc local_298;
  FRDGBufferUAVDesc local_288;
  FRDGBufferUAVDesc local_278;
  FRDGBufferUAVDesc local_268;
  undefined4 local_258;
  FRDGBuffer *local_250;
  TRDGEventScopeGuard<FRDGScope_RHI> local_248;
  char local_238;
  FCompactFeedbackHashTableCS *local_230;
  EBufferUsageFlags EStack_228;
  undefined4 uStack_224;
  FShaderParametersMetadata *local_220;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_218;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_208;
  <lambda_2> local_1f8;
  FRDGBufferSRVDesc local_1e8;
  FRDGBufferSRVDesc local_1c8;
  FCompactFeedbackHashTableCS *local_1a8;
  EBufferUsageFlags EStack_1a0;
  undefined4 uStack_19c;
  FShaderParametersMetadata *local_198;
  undefined1 local_190 [8];
  undefined1 local_188 [8];
  FName local_180;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<36>_const_*,std::tuple<>_> local_178;
  FString local_168;
  TShaderRefBase<FBuildFeedbackHashTableIndirectArgsCS,FShaderMapPointerTable> local_158;
  FString local_148;
  TShaderRefBase<FBuildFeedbackHashTableCS,FShaderMapPointerTable> local_138;
  FString local_128;
  undefined1 local_118 [8];
  undefined1 local_110 [16];
  FShaderParametersMetadata *local_100;
  uint uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  FRDGEventName local_d8;
  FRDGEventName local_c0;
  FRDGEventName local_a8;
  FRDGEventName local_90;
  undefined1 local_78 [40];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3e8;
  puVar17 = (undefined8 *)0x0;
  if (this->ReadbackBuffersNumPending != this->MaxReadbackBuffers) {
    cVar2 = *(char *)((longlong)&param_2->_padding_ + 6);
    local_238 = '\0';
    local_340 = param_1;
    if ((cVar2 != '\0') && ((cVar2 != '\x01' || ((param_2->_padding_ & 4) == 0)))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        local_e8 = 0;
        uStack_e4 = 0;
        ::Desc._12_8_ = ZEXT48(uStack_ec);
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_._4_4_ = 0;
        ::Desc._padding_ = (longlong)u_Submit_Lumen_su;
        ::Desc._padding_ = (longlong)u_Submit_Lumen_su;
        ::Desc._padding_._0_4_ = 0x95;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FLumenSurfaceCacheFeedback::SubmitFeedbackBuffer'::__l10::Desc::operator()<>'::
               __l3::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      local_178._Myfirst._Val = &::Desc;
      local_248.State = (FRDGScopeState *)param_2;
      this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                          ((FRDGAllocator *)&param_2->_padding_,(FRDGScope **)param_2);
      param_2->_padding_ = (longlong)this_00;
      local_248.Scope = this_00;
      TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<36>_const_*,std::tuple<>_>_>
                (&(this_00->Impl).Impl,(FRDGScopeState *)param_2,&local_178);
      if (*(char *)((longlong)&param_2->_padding_ + 4) != '\0') {
        FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_2->_padding_,false);
        FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_2->_padding_);
      }
      local_238 = '\x01';
    }
    local_388.ShaderMap._0_4_ = 0x10109;
    iVar7 = 0x4000;
    if (GLumenSurfaceCacheFeedbackMaxUniqueElements < 0x4000) {
      iVar7 = GLumenSurfaceCacheFeedbackMaxUniqueElements;
    }
    local_378 = 0;
    iVar8 = 1;
    if (1 < iVar7) {
      iVar8 = iVar7;
    }
    local_198 = (FShaderParametersMetadata *)0x0;
    iVar7 = 1;
    if (iVar8 != 0) {
      iVar7 = iVar8;
    }
    uVar1 = (ulonglong)(iVar7 - 1) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar24 = 1 << ((byte)lVar4 & 0x1f);
    local_388.ShaderContent = (FCompactFeedbackHashTableCS *)CONCAT44(uVar24,8);
    local_258 = (undefined4)lVar4;
    iVar7 = uVar24 * 2 - 1;
    local_1a8 = local_388.ShaderContent;
    uStack_19c = local_388.ShaderMap._4_4_;
    EStack_1a0 = StructuredBuffer|ShaderResource|SourceCopy|UnorderedAccess|Static;
    local_318 = FRDGBuilder::CreateBuffer
                          (param_2,(FRDGBufferDesc *)&local_1a8,L"Lumen.CompactedFeedback",None);
    local_298._padding_._0_2_ = 0x1c;
    local_298._padding_._2_1_ = 0;
    local_298.Buffer = local_318;
    pFVar9 = FRDGBuilder::CreateUAV(param_2,&local_298,None);
    AddClearUAVPass(param_2,pFVar9,0,Compute);
    local_388.ShaderMap._0_4_ = 0x10109;
    local_388.ShaderContent = (FCompactFeedbackHashTableCS *)CONCAT44(uVar24 * 2,4);
    local_378 = 0;
    local_230 = local_388.ShaderContent;
    EStack_228 = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
    uStack_224 = local_388.ShaderMap._4_4_;
    local_220 = (FShaderParametersMetadata *)0x0;
    pFVar10 = FRDGBuilder::CreateBuffer
                        (param_2,(FRDGBufferDesc *)&local_230,L"Lumen.HashTableKeys",None);
    local_250 = pFVar10;
    local_328 = FRDGBuilder::CreateBuffer
                          (param_2,(FRDGBufferDesc *)&local_230,L"Lumen.HashTableElementIndices",
                           None);
    pFVar11 = FRDGBuilder::CreateBuffer
                        (param_2,(FRDGBufferDesc *)&local_230,L"Lumen.HashTableElementCounts",None);
    local_288._padding_._0_2_ = 0x1c;
    local_288._padding_._2_1_ = 0;
    local_320 = pFVar11;
    local_288.Buffer = pFVar10;
    pFVar9 = FRDGBuilder::CreateUAV(param_2,&local_288,None);
    AddClearUAVPass(param_2,pFVar9,0,Compute);
    local_278._padding_._0_2_ = 0x1c;
    local_278._padding_._2_1_ = 0;
    local_278.Buffer = pFVar11;
    pFVar9 = FRDGBuilder::CreateUAV(param_2,&local_278,None);
    AddClearUAVPass(param_2,pFVar9,0,Compute);
    local_388.ShaderMap =
         (FShaderMapBase *)
         CONCAT44(local_388.ShaderMap._4_4_,
                  VertexBuffer|ShaderResource|DrawIndirect|UnorderedAccess|Static);
    local_388.ShaderContent = (FCompactFeedbackHashTableCS *)0x10000000c;
    local_378 = 0;
    local_110._0_4_ = 0xc;
    local_110._4_4_ = 1;
    local_110._8_8_ = local_388.ShaderMap;
    local_100 = (FShaderParametersMetadata *)0x0;
    local_348 = FRDGBuilder::CreateBuffer
                          (param_2,(FRDGBufferDesc *)local_110,L"Lumen.BuildHashTableIndirectArgs",
                           None);
    puVar12 = FMemStackBase::Alloc((FMemStackBase *)&param_2->_padding_,0x30,0x10);
    if (puVar12 == (undefined8 *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      puVar12[2] = 0;
      *puVar12 = &
                 ___7__TObject_VFParameters_FBuildFeedbackHashTableIndirectArgsCS___FRDGAllocator__6B_
      ;
      puVar12[3] = 0;
      puVar12[4] = 0;
      puVar17 = puVar12;
    }
    plVar25 = &param_2->_padding_;
    local_368 = puVar17;
    if ((((undefined8 **)param_2->_padding_ <= &local_368) &&
        (&local_368 <
         (undefined8 **)param_2->_padding_ + *(int *)((longlong)&param_2->_padding_ + 4))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = (int)param_2->_padding_;
    if (iVar8 == *(int *)((longlong)&param_2->_padding_ + 4)) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)plVar25,
                         (int *)((longlong)&param_2->_padding_ + 4));
    }
    *(int *)&param_2->_padding_ = iVar8 + 1;
    local_268._padding_._0_2_ = 0x1c;
    local_268._padding_._2_1_ = 0;
    *(undefined8 **)(*plVar25 + (longlong)iVar8 * 8) = local_368;
    local_268.Buffer = local_348;
    pFVar9 = FRDGBuilder::CreateUAV(param_2,&local_268,None);
    ((FParameters *)(puVar17 + 2))->RWBuildHashTableIndirectArgs = pFVar9;
    puVar17[3] = param_3->BufferAllocatorSRV;
    puVar17[4] = param_3->BufferSRV;
    *(uint *)(puVar17 + 5) = param_3->BufferSize;
    pFVar3 = local_340->ShaderMap;
    pFVar13 = (FShaderType *)FBuildFeedbackHashTableIndirectArgsCS::GetStaticType();
    FGlobalShaderMap::GetShader(pFVar3,&local_218,pFVar13,1);
    if (local_218.ShaderContent == (FShader *)0x0) {
      FVar14 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_190);
      ::FName::ToString((FName *)FVar14,&local_168);
      FBuildFeedbackHashTableIndirectArgsCS::GetStaticType();
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FBuildFeedbackHashTableIndirectArgsCS::GetStaticType();
    local_158.ShaderContent = (FBuildFeedbackHashTableIndirectArgsCS *)local_218.ShaderContent;
    local_158.ShaderMap = local_218.ShaderMap;
    pFVar15 = FRDGEventName::FRDGEventName(&local_d8,1,L"Hash table indirect arguments");
    pFVar16 = FBuildFeedbackHashTableIndirectArgsCS::FParameters::FTypeInfo::GetStructMetadata();
    local_2b8._s_0.X = 1;
    local_2b8._s_0.Y = 1;
    local_2b8._s_0.Z = 1;
    FComputeShaderUtils::AddPass<FBuildFeedbackHashTableIndirectArgsCS>
              (param_2,pFVar15,Compute,&local_158,pFVar16,(FParameters *)(puVar17 + 2),
               (TIntVector3<int> *)&local_2b8._s_0);
    if (local_d8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.FormattedEventName.Data.AllocatorInstance.Data);
    }
    puVar17 = FMemStackBase::Alloc((FMemStackBase *)&param_2->_padding_,0x60,0x10);
    if (puVar17 == (undefined8 *)0x0) {
      puVar17 = (undefined8 *)0x0;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      *(undefined4 *)(puVar17 + 3) = 4;
      *puVar17 = &___7__TObject_VFParameters_FBuildFeedbackHashTableCS___FRDGAllocator__6B_;
      puVar17[2] = 0;
      puVar17[4] = 0;
      puVar17[5] = 0;
      puVar17[6] = 0;
      puVar17[8] = 0;
      puVar17[9] = 0;
    }
    local_360 = puVar17;
    if ((((undefined8 **)*plVar25 <= &local_360) &&
        (&local_360 < (undefined8 **)*plVar25 + *(int *)((longlong)&param_2->_padding_ + 4))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = (int)param_2->_padding_;
    if (iVar8 == *(int *)((longlong)&param_2->_padding_ + 4)) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)plVar25,
                         (int *)((longlong)&param_2->_padding_ + 4));
    }
    *(int *)&param_2->_padding_ = iVar8 + 1;
    uStack_2e8 = 4;
    *(undefined8 **)(*plVar25 + (longlong)iVar8 * 8) = local_360;
    local_2f0 = local_348;
    local_338.Buffer = local_250;
    local_338._padding_._2_1_ = 0;
    *(FRDGBuffer **)&((FParameters *)(puVar17 + 2))->BuildHashTableIndirectArgs = local_348;
    puVar17[3] = CONCAT44(uStack_2e4,4);
    bVar21 = 0;
    if (((local_250->Desc).Usage & DrawIndirect) != None) {
      bVar21 = 0x1c;
    }
    local_338._padding_._0_2_ = (ushort)bVar21;
    pFVar9 = FRDGBuilder::CreateUAV(param_2,&local_338,None);
    puVar17[4] = pFVar9;
    local_310.Buffer = local_328;
    bVar21 = 0;
    local_310._padding_._2_1_ = 0;
    if (((local_328->Desc).Usage & DrawIndirect) != None) {
      bVar21 = 0x1c;
    }
    local_310._padding_._0_2_ = (ushort)bVar21;
    pFVar9 = FRDGBuilder::CreateUAV(param_2,&local_310,None);
    puVar17[5] = pFVar9;
    local_300.Buffer = local_320;
    bVar21 = 0;
    local_300._padding_._2_1_ = 0;
    if (((local_320->Desc).Usage & DrawIndirect) != None) {
      bVar21 = 0x1c;
    }
    local_300._padding_._0_2_ = (ushort)bVar21;
    pFVar9 = FRDGBuilder::CreateUAV(param_2,&local_300,None);
    puVar17[6] = pFVar9;
    *(uint *)(puVar17 + 7) = uVar24 * 2;
    *(int *)((longlong)puVar17 + 0x3c) = iVar7;
    puVar17[8] = param_3->BufferAllocatorSRV;
    puVar17[9] = param_3->BufferSRV;
    *(uint *)(puVar17 + 10) = param_3->BufferSize;
    pFVar3 = local_340->ShaderMap;
    pFVar13 = (FShaderType *)FBuildFeedbackHashTableCS::GetStaticType();
    FGlobalShaderMap::GetShader(pFVar3,&local_208,pFVar13,1);
    if (local_208.ShaderContent == (FShader *)0x0) {
      FVar14 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_188);
      ::FName::ToString((FName *)FVar14,&local_148);
      FBuildFeedbackHashTableCS::GetStaticType();
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FBuildFeedbackHashTableCS::GetStaticType();
    puVar12 = (undefined8 *)0x0;
    local_138.ShaderContent = (FBuildFeedbackHashTableCS *)local_208.ShaderContent;
    local_138.ShaderMap = local_208.ShaderMap;
    local_78._0_8_ = 0;
    local_50 = (longlong *)0x0;
    pFVar15 = FRDGEventName::FRDGEventName(&local_c0,1,L"Build feedback hash table");
    FComputeShaderUtils::AddPass<FBuildFeedbackHashTableCS>
              (param_2,pFVar15,Compute,&local_138,(FParameters *)(puVar17 + 2),local_348,0,
               (TFunction<void___cdecl(void)> *)local_78);
    if (local_c0.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.FormattedEventName.Data.AllocatorInstance.Data);
    }
    if (local_78._0_8_ != 0) {
      plVar23 = (longlong *)(local_78 + 0x10);
      if (local_50 != (longlong *)0x0) {
        plVar23 = local_50;
      }
      (**(code **)(*plVar23 + 0x10))();
    }
    puVar17 = FMemStackBase::Alloc((FMemStackBase *)&param_2->_padding_,0x50,0x10);
    if (puVar17 == (undefined8 *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      puVar17[2] = 0;
      *puVar17 = &___7__TObject_VFParameters_FCompactFeedbackHashTableCS___FRDGAllocator__6B_;
      puVar17[4] = 0;
      puVar17[5] = 0;
      puVar17[7] = 0;
      puVar17[8] = 0;
      puVar12 = puVar17;
    }
    local_358 = puVar12;
    if ((((undefined8 **)*plVar25 <= &local_358) &&
        (&local_358 < (undefined8 **)*plVar25 + *(int *)((longlong)&param_2->_padding_ + 4))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = (int)param_2->_padding_;
    if (iVar8 == *(int *)((longlong)&param_2->_padding_ + 4)) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)plVar25,
                         (int *)((longlong)&param_2->_padding_ + 4));
    }
    *(int *)&param_2->_padding_ = iVar8 + 1;
    *(undefined8 **)(*plVar25 + (longlong)iVar8 * 8) = local_358;
    local_2e0._padding_._2_1_ = 0;
    local_2e0.Buffer = local_318;
    bVar21 = 0;
    if (((local_318->Desc).Usage & DrawIndirect) != None) {
      bVar21 = 0x1c;
    }
    local_2e0._padding_._0_2_ = (ushort)bVar21;
    pFVar9 = FRDGBuilder::CreateUAV(param_2,&local_2e0,None);
    ((FParameters *)(puVar12 + 2))->RWCompactedFeedbackBuffer = pFVar9;
    local_1e8.Buffer = local_328;
    *(uint *)(puVar12 + 3) = uVar24;
    *(undefined4 *)((longlong)puVar12 + 0x1c) = 0x10;
    local_1e8._padding_._0_1_ = 0x1c;
    local_1e8._padding_._4_4_ = 0;
    local_1e8._padding_._0_4_ = 0xffffffff;
    local_1e8._padding_ = 0;
    pFVar18 = FRDGBuilder::CreateSRV(param_2,&local_1e8);
    puVar12[4] = pFVar18;
    local_1c8._padding_._0_1_ = 0x1c;
    local_1c8._padding_._4_4_ = 0;
    local_1c8._padding_ = 0;
    local_1c8.Buffer = local_320;
    local_1c8._padding_._0_4_ = 0xffffffff;
    pFVar18 = FRDGBuilder::CreateSRV(param_2,&local_1c8);
    puVar12[5] = pFVar18;
    *(uint *)(puVar12 + 6) = uVar24 * 2;
    *(int *)((longlong)puVar12 + 0x34) = iVar7;
    puVar12[7] = param_3->BufferAllocatorSRV;
    puVar12[8] = param_3->BufferSRV;
    *(uint *)(puVar12 + 9) = param_3->BufferSize;
    pFVar3 = local_340->ShaderMap;
    pFVar13 = (FShaderType *)FCompactFeedbackHashTableCS::GetStaticType();
    FGlobalShaderMap::GetShader(pFVar3,&local_2c8,pFVar13,1);
    if (local_2c8.ShaderContent == (FShader *)0x0) {
      FVar14 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_118);
      ::FName::ToString((FName *)FVar14,&local_128);
      FCompactFeedbackHashTableCS::GetStaticType();
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FCompactFeedbackHashTableCS::GetStaticType();
    local_388.ShaderContent = (FCompactFeedbackHashTableCS *)local_2c8.ShaderContent;
    pFVar15 = FRDGEventName::FRDGEventName(&local_a8,1,L"Compact feedback hash table");
    pFVar16 = FCompactFeedbackHashTableCS::FParameters::FTypeInfo::GetStructMetadata();
    local_2a8._s_0.Y = 1;
    local_2a8._s_0.Z = 1;
    iVar7 = uVar24 * 2 + 0x3f;
    local_2a8._s_0.X = (int)(iVar7 + (iVar7 >> 0x1f & 0x3fU)) >> 6;
    FComputeShaderUtils::AddPass<FCompactFeedbackHashTableCS>
              (param_2,pFVar15,Compute,&local_388,pFVar16,(FParameters *)(puVar12 + 2),
               (TIntVector3<int> *)&local_2a8._s_0);
    if (local_a8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.FormattedEventName.Data.AllocatorInstance.Data);
    }
    uVar24 = this->ReadbackBuffersWriteIndex;
    uVar22 = 0;
    if ((int)uVar24 < (this->ReadbackBuffers).ArrayNum) {
      uVar22 = ~uVar24 >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (*(longlong *)((this->ReadbackBuffers).AllocatorInstance.Data + (longlong)(int)uVar24 * 8) ==
        0) {
      pFVar19 = ::operator_new(0x58);
      if (pFVar19 == (FRHIGPUBufferReadback *)0x0) {
        pFVar19 = (FRHIGPUBufferReadback *)0x0;
      }
      else {
        pFVar20 = ::FName::FName(&local_180,L"Lumen.SurfaceCacheFeedbackBuffer");
        pFVar19 = FRHIGPUBufferReadback::FRHIGPUBufferReadback(pFVar19,*pFVar20);
      }
      uVar24 = this->ReadbackBuffersWriteIndex;
      uVar22 = 0;
      if ((int)uVar24 < (this->ReadbackBuffers).ArrayNum) {
        uVar22 = ~uVar24 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(FRHIGPUBufferReadback **)
       ((this->ReadbackBuffers).AllocatorInstance.Data + (longlong)(int)uVar24 * 8) = pFVar19;
    }
    uVar24 = this->ReadbackBuffersWriteIndex;
    uVar22 = 0;
    if ((int)uVar24 < (this->ReadbackBuffers).ArrayNum) {
      uVar22 = ~uVar24 >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar10 = local_318;
    local_1f8.CompactedFeedbackBuffer = local_318;
    local_1f8.ReadbackBuffer =
         *(FRHIGPUBufferReadback **)
          ((this->ReadbackBuffers).AllocatorInstance.Data + (longlong)(int)uVar24 * 8);
    pFVar15 = FRDGEventName::FRDGEventName(&local_90,1,L"Readback");
    puVar17 = FMemStackBase::Alloc((FMemStackBase *)&param_2->_padding_,0x20,0x10);
    if (puVar17 == (undefined8 *)0x0) {
      puVar17 = (undefined8 *)0x0;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      puVar17[2] = 0;
      *puVar17 = &___7__TObject_VFReadbackBufferParameters___FRDGAllocator__6B_;
      *(undefined4 *)(puVar17 + 3) = 0x80;
    }
    local_350 = puVar17;
    if ((((undefined8 **)*plVar25 <= &local_350) &&
        (&local_350 < (undefined8 **)*plVar25 + *(int *)((longlong)&param_2->_padding_ + 4))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = (int)param_2->_padding_;
    if (iVar7 == *(int *)((longlong)&param_2->_padding_ + 4)) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)plVar25,
                         (int *)((longlong)&param_2->_padding_ + 4));
    }
    *(int *)&param_2->_padding_ = iVar7 + 1;
    local_2c8.ShaderContent = (FShader *)pFVar10;
    *(undefined8 **)(*plVar25 + (longlong)iVar7 * 8) = local_350;
    local_2c8.ShaderMap._0_4_ = 0x80;
    *(FRDGBuffer **)&((FReadbackBufferParameters *)(puVar17 + 2))->Buffer = pFVar10;
    puVar17[3] = CONCAT44(local_2c8.ShaderMap._4_4_,0x80);
    FRDGBuilder::
    AddPass<FReadbackBufferParameters,_FLumenSurfaceCacheFeedback::SubmitFeedbackBuffer_::__l2::<lambda_2>_>
              (param_2,pFVar15,(FReadbackBufferParameters *)(puVar17 + 2),Readback,&local_1f8);
    if (local_90.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.FormattedEventName.Data.AllocatorInstance.Data);
    }
    iVar7 = this->MaxReadbackBuffers;
    iVar8 = this->ReadbackBuffersNumPending + 1;
    this->ReadbackBuffersWriteIndex = (this->ReadbackBuffersWriteIndex + 1) % iVar7;
    if (iVar8 < iVar7) {
      iVar7 = iVar8;
    }
    this->FrameIndex = this->FrameIndex + 1;
    this->ReadbackBuffersNumPending = iVar7;
    if (local_238 != '\0') {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_248);
    }
  }
  return;
}

// GetGPUSizeBytes @ 1454f44d0

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
FLumenSurfaceCacheFeedback::GetGPUSizeBytes(FLumenSurfaceCacheFeedback *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FRHIGPUBufferReadback *this_00;
  ulong64 uVar3;
  ulong64 uVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  FName local_res18 [2];
  FString local_48;
  
  pFVar5 = (this->ReadbackBuffers).AllocatorInstance.Data;
  iVar2 = (this->ReadbackBuffers).ArrayNum;
  uVar4 = 0;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ReadbackBuffers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FRHIGPUBufferReadback_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    this_00 = *(FRHIGPUBufferReadback **)pFVar5;
    if (this_00 == (FRHIGPUBufferReadback *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FRHIGPUBufferReadback::GetGPUSizeBytes(this_00);
    }
    if (((param_1) && (uVar3 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
      local_res18[0] = *(FName *)(this_00->_padding_ + 0x1c);
      ::FName::ToString(local_res18,&local_48);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)&PTR_u_LogSizes_Buffer_150fb87e0,
                 (FLogCategoryBase *)&LogRenderer);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    uVar4 = uVar4 + uVar3;
    pFVar5 = pFVar5 + 8;
  }
  return uVar4;
}

