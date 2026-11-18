// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 7

// FLumenSceneReadback @ 144d413e0

FLumenSceneReadback * __thiscall FLumenSceneReadback::FLumenSceneReadback(FLumenSceneReadback *this)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  FRenderResource::FRenderResource((FRenderResource *)this);
  this->MaxAddOps = 0x400;
  piVar1 = &(this->ReadbackBuffers).ArrayNum;
  this->ReadbackBuffersNumPending = 0;
  this->MaxRemoveOps = 0x400;
  this->_padding_ = (longlong)&___7FLumenSceneReadback__6B_;
  piVar2 = &(this->ReadbackBuffers).ArrayMax;
  *piVar1 = 0;
  (this->ReadbackBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  this->MaxReadbackBuffers = 4;
  this->ReadbackBuffersWriteIndex = 0;
  iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,4,&(this->ReadbackBuffers).AllocatorInstance,piVar1,piVar2);
  DefaultConstructItems<FLumenSceneReadback::FBuffersRHI,int>
            ((this->ReadbackBuffers).AllocatorInstance.Data + (longlong)iVar3 * 0x10,4);
  return this;
}

// ~FLumenSceneReadback @ 144d43350

void __thiscall FLumenSceneReadback::~FLumenSceneReadback(FLumenSceneReadback *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong lVar11;
  
  uVar8 = 0;
  this->_padding_ = (longlong)&___7FLumenSceneReadback__6B_;
  if (0 < (this->ReadbackBuffers).ArrayNum) {
    lVar11 = 0;
    do {
      uVar10 = ~uVar8 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar8 < (this->ReadbackBuffers).ArrayNum) {
        uVar6 = uVar10;
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
        if ((int)uVar8 < (this->ReadbackBuffers).ArrayNum) {
          uVar6 = uVar10;
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
          puVar9 = puVar2 + 0xb;
          lVar7 = 8;
          do {
            puVar1 = puVar9 + -1;
            puVar9 = puVar9 + -1;
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
        if ((int)uVar8 < (this->ReadbackBuffers).ArrayNum) {
          uVar6 = uVar10;
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
      uVar6 = 0;
      if ((int)uVar8 < (this->ReadbackBuffers).ArrayNum) {
        uVar6 = uVar10;
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
      if (*(longlong *)((this->ReadbackBuffers).AllocatorInstance.Data + lVar11 + 8) != 0) {
        uVar6 = 0;
        if ((int)uVar8 < (this->ReadbackBuffers).ArrayNum) {
          uVar6 = uVar10;
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
        puVar2 = *(undefined8 **)((this->ReadbackBuffers).AllocatorInstance.Data + lVar11 + 8);
        if (puVar2 != (undefined8 *)0x0) {
          puVar9 = puVar2 + 0xb;
          lVar7 = 8;
          do {
            puVar1 = puVar9 + -1;
            puVar9 = puVar9 + -1;
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
        if ((int)uVar8 < (this->ReadbackBuffers).ArrayNum) {
          uVar6 = uVar10;
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
        *(undefined8 *)((this->ReadbackBuffers).AllocatorInstance.Data + lVar11 + 8) = 0;
      }
      uVar8 = uVar8 + 1;
      lVar11 = lVar11 + 0x10;
    } while ((int)uVar8 < (this->ReadbackBuffers).ArrayNum);
  }
  pFVar3 = (this->ReadbackBuffers).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// operator() @ 144d4a2b0

void __thiscall
`FLumenSceneReadback::SubmitWriteBuffers'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FRDGResource *this_00;
  FRHIGPUBufferReadback *this_01;
  
  this_00 = *(FRDGResource **)((longlong)this + 0x10);
  this_01 = *(FRHIGPUBufferReadback **)this;
  FRDGResource::ValidateRHIAccess(this_00);
  FRHIGPUBufferReadback::EnqueueCopy(this_01,param_2,(FRHIBuffer *)this_00->ResourceRHI,0);
  return;
}

// operator() @ 144d4dc70

void __thiscall
`FLumenSceneReadback::SubmitWriteBuffers'::__l2::<lambda_2>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FRDGResource *this_00;
  FRHIGPUBufferReadback *this_01;
  
  this_00 = *(FRDGResource **)((longlong)this + 0x18);
  this_01 = *(FRHIGPUBufferReadback **)((longlong)this + 8);
  FRDGResource::ValidateRHIAccess(this_00);
  FRHIGPUBufferReadback::EnqueueCopy(this_01,param_2,(FRHIBuffer *)this_00->ResourceRHI,0);
  return;
}

// GetLatestReadbackBuffers @ 144d7f380

FBuffersRHI * __thiscall
FLumenSceneReadback::GetLatestReadbackBuffers
          (FLumenSceneReadback *this,FBuffersRHI *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  FRHIGPUBufferReadback *pFVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  FBuffersRHI *pFVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  
  iVar13 = this->ReadbackBuffersNumPending;
  __return_storage_ptr__->AddOps = (FRHIGPUBufferReadback *)0x0;
  __return_storage_ptr__->RemoveOps = (FRHIGPUBufferReadback *)0x0;
  if (iVar13 < 1) {
    return __return_storage_ptr__;
  }
  while( true ) {
    uVar10 = ((this->ReadbackBuffersWriteIndex - iVar13) + this->MaxReadbackBuffers) %
             this->MaxReadbackBuffers;
    lVar12 = (longlong)(int)uVar10;
    uVar11 = ~uVar10 >> 0x1f;
    uVar8 = 0;
    if ((int)uVar10 < (this->ReadbackBuffers).ArrayNum) {
      uVar8 = uVar11;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FBuffersRHI *)(*pcVar4)();
      return pFVar9;
    }
    lVar2 = *(longlong *)((this->ReadbackBuffers).AllocatorInstance.Data + lVar12 * 0x10);
    lVar3 = *(longlong *)(lVar2 + 8);
    if ((lVar3 != 0) &&
       ((*(int *)(lVar3 + 0x18) != 0 ||
        (cVar7 = (**(code **)(**(longlong **)(lVar2 + 8) + 0x20))(), cVar7 == '\0')))) {
      return __return_storage_ptr__;
    }
    uVar8 = 0;
    if ((int)uVar10 < (this->ReadbackBuffers).ArrayNum) {
      uVar8 = uVar11;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    lVar2 = *(longlong *)((this->ReadbackBuffers).AllocatorInstance.Data + lVar12 * 0x10 + 8);
    lVar3 = *(longlong *)(lVar2 + 8);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x18) != 0) {
        return __return_storage_ptr__;
      }
      cVar7 = (**(code **)(**(longlong **)(lVar2 + 8) + 0x20))();
      if (cVar7 == '\0') {
        return __return_storage_ptr__;
      }
    }
    this->ReadbackBuffersNumPending = this->ReadbackBuffersNumPending + -1;
    uVar8 = 0;
    if ((int)uVar10 < (this->ReadbackBuffers).ArrayNum) {
      uVar8 = uVar11;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FBuffersRHI *)(*pcVar4)();
      return pFVar9;
    }
    iVar13 = this->ReadbackBuffersNumPending;
    pFVar1 = (this->ReadbackBuffers).AllocatorInstance.Data + lVar12 * 0x10;
    pFVar5 = *(FRHIGPUBufferReadback **)(pFVar1 + 8);
    __return_storage_ptr__->AddOps = *(FRHIGPUBufferReadback **)pFVar1;
    __return_storage_ptr__->RemoveOps = pFVar5;
    if (iVar13 < 1) {
      return __return_storage_ptr__;
    }
  }
  pcVar4 = (code *)swi(3);
  pFVar9 = (FBuffersRHI *)(*pcVar4)();
  return pFVar9;
}

// GetWriteBuffers @ 144d8b340

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FBuffersRDG * __thiscall
FLumenSceneReadback::GetWriteBuffers
          (FLumenSceneReadback *this,FBuffersRDG *__return_storage_ptr__,FRDGBuilder *param_1)

{
  int iVar1;
  FRDGBuffer *pFVar2;
  undefined4 uStack_2c;
  FRDGBufferDesc local_20;
  
  iVar1 = this->MaxReadbackBuffers;
  __return_storage_ptr__->AddOps = (FRDGBuffer *)0x0;
  __return_storage_ptr__->RemoveOps = (FRDGBuffer *)0x0;
  if (this->ReadbackBuffersNumPending != iVar1) {
    local_20.NumElements = this->MaxAddOps;
    local_20.BytesPerElement = 8;
    local_20._12_4_ = uStack_2c;
    local_20.Usage = StructuredBuffer|ShaderResource|SourceCopy|UnorderedAccess|Static;
    local_20.Metadata = (FShaderParametersMetadata *)0x0;
    pFVar2 = FRDGBuilder::CreateBuffer(param_1,&local_20,L"Lumen.SceneAddOps",None);
    __return_storage_ptr__->AddOps = pFVar2;
    local_20.NumElements = this->MaxRemoveOps;
    local_20.BytesPerElement = 4;
    local_20.Usage = StructuredBuffer|ShaderResource|SourceCopy|UnorderedAccess|Static;
    local_20.Metadata = (FShaderParametersMetadata *)0x0;
    pFVar2 = FRDGBuilder::CreateBuffer(param_1,&local_20,L"Lumen.SceneRemoveOps",None);
    __return_storage_ptr__->RemoveOps = pFVar2;
  }
  return __return_storage_ptr__;
}

// SubmitWriteBuffers @ 144da0b60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FLumenSceneReadback::SubmitWriteBuffers
          (FLumenSceneReadback *this,FRDGBuilder *param_1,FBuffersRDG *param_2)

{
  TRDGHandleRegistry<TRDGHandle<FRDGPass,unsigned_int>,0> *pTVar1;
  uint uVar2;
  code *pcVar3;
  longlong lVar4;
  FRDGBuffer *pFVar5;
  FRDGBuffer *pFVar6;
  FRDGBuffer *pFVar7;
  FBuffersRDG *pFVar8;
  bool bVar9;
  ERDGPassFlags EVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  FRHIGPUBufferReadback *this_00;
  FName *pFVar14;
  FRHIGPUBufferReadback *pFVar15;
  FRHIGPUBufferReadback *pFVar16;
  FRDGEventName *pFVar17;
  FScriptContainerElement *pFVar18;
  FShaderParametersMetadata *pFVar19;
  wchar_t *pwVar20;
  FRDGPass *pFVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  FName local_res10;
  FBuffersRDG *local_res18;
  FName local_res20;
  undefined8 uStack_100;
  FRDGParameterStruct local_f8;
  longlong local_e0;
  FScriptContainerElement *pFStack_d8;
  FRDGParameterStruct local_d0;
  longlong local_b8;
  FScriptContainerElement *pFStack_b0;
  FRDGBuffer *local_a8;
  FRDGBuffer *pFStack_a0;
  longlong local_98;
  FScriptContainerElement *pFStack_90;
  FRDGBuffer *local_88;
  FRDGBuffer *pFStack_80;
  FRDGEventName local_78;
  FRDGEventName local_60;
  
  uVar2 = this->ReadbackBuffersWriteIndex;
  pFVar16 = (FRHIGPUBufferReadback *)0x0;
  uVar23 = 0;
  if ((int)uVar2 < (this->ReadbackBuffers).ArrayNum) {
    uVar23 = ~uVar2 >> 0x1f;
  }
  local_res18 = param_2;
  if ((uVar23 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(longlong *)((this->ReadbackBuffers).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x10) ==
      0) {
    this_00 = ::operator_new(0x58);
    pFVar15 = pFVar16;
    if (this_00 != (FRHIGPUBufferReadback *)0x0) {
      pFVar14 = ::FName::FName(&local_res10,L"Lumen.SceneAddOpsReadback");
      pFVar15 = FRHIGPUBufferReadback::FRHIGPUBufferReadback(this_00,*pFVar14);
    }
    uVar2 = this->ReadbackBuffersWriteIndex;
    uVar23 = 0;
    if ((int)uVar2 < (this->ReadbackBuffers).ArrayNum) {
      uVar23 = ~uVar2 >> 0x1f;
    }
    if ((uVar23 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(FRHIGPUBufferReadback **)
     ((this->ReadbackBuffers).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x10) = pFVar15;
  }
  uVar2 = this->ReadbackBuffersWriteIndex;
  uVar11 = 0;
  uVar23 = uVar11;
  if ((int)uVar2 < (this->ReadbackBuffers).ArrayNum) {
    uVar23 = ~uVar2 >> 0x1f;
  }
  if ((uVar23 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(longlong *)
       ((this->ReadbackBuffers).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x10 + 8) == 0) {
    pFVar15 = ::operator_new(0x58);
    if (pFVar15 != (FRHIGPUBufferReadback *)0x0) {
      pFVar14 = ::FName::FName(&local_res20,L"Lumen.SceneRemoveOpsReadback");
      pFVar16 = FRHIGPUBufferReadback::FRHIGPUBufferReadback(pFVar15,*pFVar14);
    }
    uVar2 = this->ReadbackBuffersWriteIndex;
    uVar23 = uVar11;
    if ((int)uVar2 < (this->ReadbackBuffers).ArrayNum) {
      uVar23 = ~uVar2 >> 0x1f;
    }
    if ((uVar23 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(FRHIGPUBufferReadback **)
     ((this->ReadbackBuffers).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x10 + 8) = pFVar16;
  }
  uVar2 = this->ReadbackBuffersWriteIndex;
  if ((int)uVar2 < (this->ReadbackBuffers).ArrayNum) {
    uVar11 = ~uVar2 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar22 = (this->ReadbackBuffers).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x10;
  lVar4 = *(longlong *)pFVar22;
  pFVar22 = *(FScriptContainerElement **)(pFVar22 + 8);
  pFVar5 = param_2->AddOps;
  pFVar6 = param_2->RemoveOps;
  local_e0 = lVar4;
  pFStack_d8 = pFVar22;
  local_b8 = lVar4;
  pFStack_b0 = pFVar22;
  local_a8 = pFVar5;
  pFStack_a0 = pFVar6;
  pFVar17 = FRDGEventName::FRDGEventName(&local_78,1,L"LumenSceneAddOpsReadback");
  pFVar18 = (FScriptContainerElement *)
            FRDGBuilder::AllocParameters<FReadbackBufferParameters>(param_1);
  local_f8.Contents = (uchar *)param_2->AddOps;
  local_f8.Layout.Reference._0_4_ = 0x80;
  *(uchar **)&pFVar18->field_0x0 = local_f8.Contents;
  *(FRHIUniformBufferLayout **)(pFVar18 + 8) = local_f8.Layout.Reference;
  pFVar19 = FReadbackBufferParameters::FTypeInfo::GetStructMetadata();
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar18,pFVar19,pFVar17,Readback);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar20 = FRDGEventName::GetTCHAR(pFVar17);
  EVar10 = FRDGBuilder::OverridePassFlags(param_1,pwVar20,Readback);
  pFVar21 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1a8,8);
  local_f8.Contents = (uchar *)pFVar18;
  if (((pFVar19->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x17c,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_f8.Layout.Reference = (pFVar19->Layout).Reference;
  if (local_f8.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_f8.Layout.Reference);
  }
  local_f8.Metadata = pFVar19;
  FRDGPass::FRDGPass(pFVar21,pFVar17,&local_f8,EVar10,Async);
  pFVar21->_padding_ =
       (longlong)
       &TRDGLambdaPass<FReadbackBufferParameters,`FLumenSceneReadback::SubmitWriteBuffers'::`2'::<lambda_1>_>
        ::_vftable_;
  pFVar21[1]._padding_ = lVar4;
  pFVar21[1].FullPathIfDebug.Data.AllocatorInstance.Data = pFVar22;
  pFVar21[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar18;
  *(FRDGBuffer **)&pFVar21[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
  pFVar21[1].Name.EventFormat = (wchar_t *)pFVar6;
  FRDGBuilder::ClobberPassOutputs(param_1,pFVar21);
  pTVar1 = &param_1->Passes;
  iVar12 = (param_1->Passes).Array.ArrayNum;
  if (iVar12 == (param_1->Passes).Array.ArrayMax) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                       (0x808,(ForElementType<FRDGPass_*> *)pTVar1,&(param_1->Passes).Array.ArrayMax
                       );
  }
  (param_1->Passes).Array.ArrayNum = iVar12 + 1;
  (pTVar1->Array).AllocatorInstance.Data[iVar12] = pFVar21;
  (pFVar21->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,pFVar21);
  if (local_78.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.FormattedEventName.Data.AllocatorInstance.Data);
  }
  pFVar8 = local_res18;
  local_98 = local_e0;
  pFStack_90 = pFStack_d8;
  pFVar5 = local_res18->AddOps;
  pFVar7 = local_res18->RemoveOps;
  local_88 = pFVar5;
  pFStack_80 = pFVar7;
  pFVar17 = FRDGEventName::FRDGEventName(&local_60,1,L"LumenSceneRemoveOpsReadback");
  pFVar22 = (FScriptContainerElement *)
            FRDGBuilder::AllocParameters<FReadbackBufferParameters>(param_1);
  uStack_100 = CONCAT44((int)((ulonglong)pFVar6 >> 0x20),0x80);
  *(FRDGBuffer **)&pFVar22->field_0x0 = pFVar8->RemoveOps;
  *(undefined8 *)(pFVar22 + 8) = uStack_100;
  pFVar19 = FReadbackBufferParameters::FTypeInfo::GetStructMetadata();
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar22,pFVar19,pFVar17,Readback);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar20 = FRDGEventName::GetTCHAR(pFVar17);
  EVar10 = FRDGBuilder::OverridePassFlags(param_1,pwVar20,Readback);
  local_res18 = (FBuffersRDG *)CONCAT62(local_res18._2_6_,EVar10);
  pFVar21 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1a8,8);
  local_d0.Contents = (uchar *)pFVar22;
  if (((pFVar19->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x17c,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_d0.Layout.Reference = (pFVar19->Layout).Reference;
  if (local_d0.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_d0.Layout.Reference);
  }
  local_d0.Metadata = pFVar19;
  FRDGPass::FRDGPass(pFVar21,pFVar17,&local_d0,(ERDGPassFlags)local_res18,Async);
  pFVar21[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar22;
  pFVar21->_padding_ =
       (longlong)
       &TRDGLambdaPass<FReadbackBufferParameters,`FLumenSceneReadback::SubmitWriteBuffers'::`2'::<lambda_2>_>
        ::_vftable_;
  pFVar21[1]._padding_ = local_e0;
  pFVar21[1].FullPathIfDebug.Data.AllocatorInstance.Data = pFStack_d8;
  *(FRDGBuffer **)&pFVar21[1].FullPathIfDebug.Data.ArrayNum = pFVar5;
  pFVar21[1].Name.EventFormat = (wchar_t *)pFVar7;
  FRDGBuilder::ClobberPassOutputs(param_1,pFVar21);
  iVar12 = (param_1->Passes).Array.ArrayNum;
  if (iVar12 == (param_1->Passes).Array.ArrayMax) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                       (0x808,(ForElementType<FRDGPass_*> *)pTVar1,&(param_1->Passes).Array.ArrayMax
                       );
  }
  (param_1->Passes).Array.ArrayNum = iVar12 + 1;
  (pTVar1->Array).AllocatorInstance.Data[iVar12] = pFVar21;
  (pFVar21->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,pFVar21);
  if (local_60.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.FormattedEventName.Data.AllocatorInstance.Data);
  }
  iVar12 = this->MaxReadbackBuffers;
  iVar13 = this->ReadbackBuffersNumPending + 1;
  this->ReadbackBuffersWriteIndex = (this->ReadbackBuffersWriteIndex + 1) % iVar12;
  if (iVar13 < iVar12) {
    iVar12 = iVar13;
  }
  this->ReadbackBuffersNumPending = iVar12;
  return;
}

