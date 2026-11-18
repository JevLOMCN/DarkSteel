// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 9

// ~FPaperSpriteVertexBuffer @ 14aceb8f0

void __thiscall FPaperSpriteVertexBuffer::~FPaperSpriteVertexBuffer(FPaperSpriteVertexBuffer *this)

{
  FScriptContainerElement *pFVar1;
  FRHIShaderResourceView *pFVar2;
  
  pFVar1 = (this->Vertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = (this->PositionBufferSRV).Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar2 = (this->ColorBufferSRV).Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar2 = (this->TexCoordBufferSRV).Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar2 = (this->TangentBufferSRV).Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  FIndexBuffer::~FIndexBuffer(&this->IndexBuffer);
  FVertexBuffer::~FVertexBuffer(&this->ColorBuffer);
  FVertexBuffer::~FVertexBuffer(&this->TexCoordBuffer);
  FVertexBuffer::~FVertexBuffer(&this->TangentBuffer);
  FVertexBuffer::~FVertexBuffer(&this->PositionBuffer);
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// CommitVertexData @ 14acf1770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPaperSpriteVertexBuffer::CommitVertexData
          (FPaperSpriteVertexBuffer *this,FRHICommandListBase *param_1)

{
  TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  uint uVar9;
  undefined8 *puVar10;
  void *pvVar11;
  undefined8 *puVar12;
  void *pvVar13;
  uint *puVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  undefined8 *puVar18;
  
  iVar3 = (this->Vertices).ArrayNum;
  if (iVar3 != 0) {
    if (this->NumAllocatedVertices != iVar3) {
      CreateBuffers(this,param_1,iVar3);
    }
    puVar10 = FRHICommandListBase::LockBuffer
                        (param_1,(this->PositionBuffer).VertexBufferRHI.Reference,0,
                         (this->Vertices).ArrayNum * 0xc,RLM_WriteOnly);
    pvVar11 = FRHICommandListBase::LockBuffer
                        (param_1,(this->TangentBuffer).VertexBufferRHI.Reference,0,
                         (this->Vertices).ArrayNum << 3,RLM_WriteOnly);
    puVar12 = FRHICommandListBase::LockBuffer
                        (param_1,(this->TexCoordBuffer).VertexBufferRHI.Reference,0,
                         (this->Vertices).ArrayNum << 3,RLM_WriteOnly);
    pvVar13 = FRHICommandListBase::LockBuffer
                        (param_1,(this->ColorBuffer).VertexBufferRHI.Reference,0,
                         (this->Vertices).ArrayNum << 2,RLM_WriteOnly);
    puVar14 = FRHICommandListBase::LockBuffer
                        (param_1,(this->IndexBuffer).IndexBufferRHI.Reference,0,
                         (this->Vertices).ArrayNum << 2,RLM_WriteOnly);
    uVar15 = 0;
    pTVar1 = &this->Vertices;
    if (0 < (this->Vertices).ArrayNum) {
      lVar16 = 0;
      lVar2 = (longlong)pvVar13 - (longlong)puVar14;
      puVar18 = puVar12;
      do {
        uVar17 = ~uVar15 >> 0x1f;
        uVar9 = 0;
        if ((int)uVar15 < (this->Vertices).ArrayNum) {
          uVar9 = uVar17;
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
        pFVar5 = (pTVar1->AllocatorInstance).Data;
        uVar4 = *(undefined4 *)(pFVar5 + lVar16 + 8);
        *puVar10 = *(undefined8 *)(pFVar5 + lVar16);
        *(undefined4 *)(puVar10 + 1) = uVar4;
        uVar9 = 0;
        if ((int)uVar15 < (this->Vertices).ArrayNum) {
          uVar9 = uVar17;
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
        *(undefined4 *)(((longlong)pvVar11 - (longlong)puVar12) + (longlong)puVar18) =
             *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar16 + 0x4c);
        uVar9 = 0;
        if ((int)uVar15 < (this->Vertices).ArrayNum) {
          uVar9 = uVar17;
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
        *(undefined4 *)((longlong)puVar18 + (4 - (longlong)puVar12) + (longlong)pvVar11) =
             *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar16 + 0x50);
        uVar9 = 0;
        if ((int)uVar15 < (this->Vertices).ArrayNum) {
          uVar9 = uVar17;
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
        *(undefined4 *)(lVar2 + (longlong)puVar14) =
             *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar16 + 0x54);
        uVar9 = 0;
        if ((int)uVar15 < (this->Vertices).ArrayNum) {
          uVar9 = uVar17;
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
        puVar10 = (undefined8 *)((longlong)puVar10 + 0xc);
        lVar7 = lVar16 + 0xc;
        lVar16 = lVar16 + 0x58;
        *puVar18 = *(undefined8 *)((pTVar1->AllocatorInstance).Data + lVar7);
        puVar18 = puVar18 + 1;
        *puVar14 = uVar15;
        uVar15 = uVar15 + 1;
        puVar14 = puVar14 + 1;
      } while ((int)uVar15 < (this->Vertices).ArrayNum);
    }
    FRHICommandListBase::UnlockBuffer(param_1,(this->PositionBuffer).VertexBufferRHI.Reference);
    FRHICommandListBase::UnlockBuffer(param_1,(this->TangentBuffer).VertexBufferRHI.Reference);
    FRHICommandListBase::UnlockBuffer(param_1,(this->TexCoordBuffer).VertexBufferRHI.Reference);
    FRHICommandListBase::UnlockBuffer(param_1,(this->ColorBuffer).VertexBufferRHI.Reference);
    FRHICommandListBase::UnlockBuffer(param_1,(this->IndexBuffer).IndexBufferRHI.Reference);
    (this->Vertices).ArrayNum = 0;
    if ((this->Vertices).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,4,0,&pTVar1->AllocatorInstance,0,&(this->Vertices).ArrayMax);
    }
  }
  return;
}

// CreateBuffers @ 14acf2fc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FPaperSpriteVertexBuffer::CreateBuffers
          (FPaperSpriteVertexBuffer *this,FRHICommandListBase *param_1,int param_2)

{
  TRefCountPtr<FRHIShaderResourceView> *pTVar1;
  int iVar2;
  FRHIShaderResourceView *pFVar3;
  FRHIBuffer *pFVar4;
  code *pcVar5;
  bool bVar6;
  ERHIAccess EVar7;
  TRefCountPtr<FRHIBuffer> TVar8;
  TRefCountPtr<FRHIShaderResourceView> TVar9;
  byte bVar10;
  TRefCountPtr<FRHIBuffer> *pTVar11;
  ulonglong uVar12;
  EBufferUsageFlags EVar13;
  EBufferUsageFlags EVar14;
  FRHIResource *local_res8;
  FRHIResource *local_res20;
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [40];
  FName local_178;
  FName FStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  ulonglong local_158;
  undefined8 uStack_150;
  wchar_t *local_148;
  undefined8 uStack_140;
  ulonglong local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  ulonglong local_120;
  undefined8 uStack_118;
  wchar_t *local_110;
  undefined8 uStack_108;
  ulonglong local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  undefined8 uStack_e0;
  wchar_t *local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  undefined8 uStack_a8;
  wchar_t *local_a0;
  undefined8 uStack_98;
  ulonglong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  ulonglong uStack_70;
  wchar_t *local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if (0 < this->NumAllocatedVertices) {
    (**(code **)((this->PositionBuffer)._padding_ + 0x10))(&this->PositionBuffer);
    (**(code **)((this->TangentBuffer)._padding_ + 0x10))(&this->TangentBuffer);
    (**(code **)((this->TexCoordBuffer)._padding_ + 0x10))(&this->TexCoordBuffer);
    (**(code **)((this->ColorBuffer)._padding_ + 0x10))();
    (**(code **)((this->IndexBuffer)._padding_ + 0x10))();
    pFVar3 = (this->TangentBufferSRV).Reference;
    if (pFVar3 != (FRHIShaderResourceView *)0x0) {
      (this->TangentBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
    pFVar3 = (this->TexCoordBufferSRV).Reference;
    if (pFVar3 != (FRHIShaderResourceView *)0x0) {
      (this->TexCoordBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
    pFVar3 = (this->ColorBufferSRV).Reference;
    if (pFVar3 != (FRHIShaderResourceView *)0x0) {
      (this->ColorBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
    pFVar3 = (this->PositionBufferSRV).Reference;
    if (pFVar3 != (FRHIShaderResourceView *)0x0) {
      (this->PositionBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
  }
  this->NumAllocatedVertices = param_2;
  bVar10 = (byte)GNumExplicitGPUsForRendering;
  EVar14 = (this->bDynamicUsage != false) + Static;
  EVar13 = (this->bDynamicUsage != false) + (VertexBuffer|ShaderResource|Static);
  EVar7 = RHIGetDefaultResourceState(EVar13,false);
  local_158 = (ulonglong)(uint)(param_2 * 0xc);
  uStack_150 = CONCAT44((1 << (bVar10 & 0x1f)) + -1,EVar13);
  local_138 = (ulonglong)EVar7;
  uStack_130 = 0;
  local_148 = L"PaperSpritePositionBuffer";
  uStack_140 = 0;
  local_128 = 0;
  TVar8 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res8);
  pTVar11 = &(this->PositionBuffer).VertexBufferRHI;
  if ((FRHIBuffer *)pTVar11 != TVar8.Reference) {
    pFVar4 = pTVar11->Reference;
    pTVar11->Reference = (FRHIBuffer *)(TVar8.Reference)->_padding_;
    (TVar8.Reference)->_padding_ = 0;
    if (pFVar4 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar4);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  uVar12 = (ulonglong)GMaxRHIShaderPlatform;
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar12].bContainsValidPlatformInfo == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0x2ce,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar12].bSupportsManualVertexFetch != 0) {
    local_1a0._16_4_ = 0;
    local_1a0._20_4_ = 0;
    local_1a0._8_4_ = 0x10d00;
    local_1a0._12_4_ = 0;
    TVar9 = FRHICommandListBase::CreateShaderResourceView
                      (param_1,(FRHIBuffer *)&local_res20,(FInitializer *)pTVar11->Reference);
    pTVar1 = &this->PositionBufferSRV;
    if ((FRHIShaderResourceView *)pTVar1 != TVar9.Reference) {
      pFVar3 = pTVar1->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar1->Reference = *TVar9.Reference;
      *(undefined8 *)TVar9.Reference = 0;
      if (pFVar3 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar3);
      }
    }
    if (local_res20 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res20);
    }
  }
  iVar2 = this->NumAllocatedVertices;
  bVar10 = (byte)GNumExplicitGPUsForRendering;
  EVar7 = RHIGetDefaultResourceState(EVar13,false);
  local_120 = (ulonglong)(uint)(iVar2 << 3);
  uStack_118 = CONCAT44((1 << (bVar10 & 0x1f)) + -1,EVar13);
  local_100 = (ulonglong)EVar7;
  uStack_f8 = 0;
  local_110 = L"PaperSpriteTangentBuffer";
  uStack_108 = 0;
  local_f0 = 0;
  TVar8 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)local_1d0);
  pTVar11 = &(this->TangentBuffer).VertexBufferRHI;
  if ((FRHIBuffer *)pTVar11 != TVar8.Reference) {
    pFVar4 = pTVar11->Reference;
    pTVar11->Reference = (FRHIBuffer *)(TVar8.Reference)->_padding_;
    (TVar8.Reference)->_padding_ = 0;
    if (pFVar4 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar4);
    }
  }
  if ((FRHIResource *)local_1d0._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_1d0._0_8_);
  }
  uVar12 = (ulonglong)GMaxRHIShaderPlatform;
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar12].bContainsValidPlatformInfo == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0x2ce,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar12].bSupportsManualVertexFetch != 0) {
    local_1a0._32_4_ = 0;
    local_1a0._36_4_ = 0;
    local_1a0._24_4_ = 0x13d00;
    local_1a0._28_4_ = 0;
    TVar9 = FRHICommandListBase::CreateShaderResourceView
                      (param_1,(FRHIBuffer *)(local_1d0 + 8),(FInitializer *)pTVar11->Reference);
    pTVar1 = &this->TangentBufferSRV;
    if ((FRHIShaderResourceView *)pTVar1 != TVar9.Reference) {
      pFVar3 = pTVar1->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar1->Reference = *TVar9.Reference;
      *(undefined8 *)TVar9.Reference = 0;
      if (pFVar3 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar3);
      }
    }
    if ((FRHIResource *)local_1d0._8_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_1d0._8_8_);
    }
  }
  iVar2 = this->NumAllocatedVertices;
  bVar10 = (byte)GNumExplicitGPUsForRendering;
  EVar7 = RHIGetDefaultResourceState(EVar13,false);
  local_e8 = (ulonglong)(uint)(iVar2 << 3);
  uStack_e0 = CONCAT44((1 << (bVar10 & 0x1f)) + -1,EVar13);
  local_c8 = (ulonglong)EVar7;
  uStack_c0 = 0;
  local_d8 = L"PaperSpriteTexCoordBuffer";
  uStack_d0 = 0;
  local_b8 = 0;
  TVar8 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)local_1c0);
  pTVar11 = &(this->TexCoordBuffer).VertexBufferRHI;
  if ((FRHIBuffer *)pTVar11 != TVar8.Reference) {
    pFVar4 = pTVar11->Reference;
    pTVar11->Reference = (FRHIBuffer *)(TVar8.Reference)->_padding_;
    (TVar8.Reference)->_padding_ = 0;
    if (pFVar4 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar4);
    }
  }
  if ((FRHIResource *)local_1c0._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_1c0._0_8_);
  }
  uVar12 = (ulonglong)GMaxRHIShaderPlatform;
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar12].bContainsValidPlatformInfo == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0x2ce,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar12].bSupportsManualVertexFetch != 0) {
    FStack_170.ComparisonIndex.Value = 0;
    FStack_170.Number = 0;
    local_178.ComparisonIndex.Value = 0x11100;
    local_178.Number = 0;
    TVar9 = FRHICommandListBase::CreateShaderResourceView
                      (param_1,(FRHIBuffer *)(local_1c0 + 8),(FInitializer *)pTVar11->Reference);
    pTVar1 = &this->TexCoordBufferSRV;
    if ((FRHIShaderResourceView *)pTVar1 != TVar9.Reference) {
      pFVar3 = pTVar1->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar1->Reference = *TVar9.Reference;
      *(undefined8 *)TVar9.Reference = 0;
      if (pFVar3 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar3);
      }
    }
    if ((FRHIResource *)local_1c0._8_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_1c0._8_8_);
    }
  }
  iVar2 = this->NumAllocatedVertices;
  bVar10 = (byte)GNumExplicitGPUsForRendering;
  EVar7 = RHIGetDefaultResourceState(EVar13,false);
  local_b0 = (ulonglong)(uint)(iVar2 << 2);
  uStack_a8 = CONCAT44((1 << (bVar10 & 0x1f)) + -1,EVar13);
  local_90 = (ulonglong)EVar7;
  uStack_88 = 0;
  local_a0 = L"PaperSpriteColorBuffer";
  uStack_98 = 0;
  local_80 = 0;
  TVar8 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)local_1b0);
  pTVar11 = &(this->ColorBuffer).VertexBufferRHI;
  if ((FRHIBuffer *)pTVar11 != TVar8.Reference) {
    pFVar4 = pTVar11->Reference;
    pTVar11->Reference = (FRHIBuffer *)(TVar8.Reference)->_padding_;
    (TVar8.Reference)->_padding_ = 0;
    if (pFVar4 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar4);
    }
  }
  if ((FRHIResource *)local_1b0._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_1b0._0_8_);
  }
  uVar12 = (ulonglong)GMaxRHIShaderPlatform;
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar12].bContainsValidPlatformInfo == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0x2ce,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar12].bSupportsManualVertexFetch != 0) {
    uStack_160 = 0;
    local_168 = 0x12500;
    TVar9 = FRHICommandListBase::CreateShaderResourceView
                      (param_1,(FRHIBuffer *)(local_1b0 + 8),(FInitializer *)pTVar11->Reference);
    pTVar1 = &this->ColorBufferSRV;
    if ((FRHIShaderResourceView *)pTVar1 != TVar9.Reference) {
      pFVar3 = pTVar1->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar1->Reference = *TVar9.Reference;
      *(undefined8 *)TVar9.Reference = 0;
      if (pFVar3 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar3);
      }
    }
    if ((FName)local_1b0._8_8_ != (FName)0x0) {
      FRHIResource::Release((FRHIResource *)local_1b0._8_8_);
    }
  }
  iVar2 = (this->Vertices).ArrayNum;
  bVar10 = (byte)GNumExplicitGPUsForRendering;
  EVar7 = RHIGetDefaultResourceState(EVar14 | (IndexBuffer|ShaderResource),false);
  local_78 = CONCAT44(4,iVar2 << 2);
  uStack_70 = CONCAT44((1 << (bVar10 & 0x1f)) + -1,EVar14) | 0x8100;
  local_58 = (ulonglong)EVar7;
  uStack_50 = 0;
  local_68 = L"PaperSpriteIndexBuffer";
  uStack_60 = 0;
  local_48 = 0;
  TVar8 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)local_1a0);
  pTVar11 = &(this->IndexBuffer).IndexBufferRHI;
  if ((FRHIBuffer *)pTVar11 != TVar8.Reference) {
    pFVar4 = pTVar11->Reference;
    pTVar11->Reference = (FRHIBuffer *)(TVar8.Reference)->_padding_;
    (TVar8.Reference)->_padding_ = 0;
    if (pFVar4 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar4);
    }
  }
  if ((FName)local_1a0._0_8_ != (FName)0x0) {
    FRHIResource::Release((FRHIResource *)local_1a0._0_8_);
  }
  return;
}

// InitRHI @ 14ad02b00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPaperSpriteVertexBuffer::InitRHI(FPaperSpriteVertexBuffer *this,FRHICommandListBase *param_1)

{
  TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  uint uVar9;
  undefined8 *puVar10;
  void *pvVar11;
  undefined8 *puVar12;
  void *pvVar13;
  uint *puVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  undefined8 *puVar18;
  
  iVar3 = (this->Vertices).ArrayNum;
  if (iVar3 != 0) {
    if (this->NumAllocatedVertices != iVar3) {
      CreateBuffers(this,param_1,iVar3);
    }
    puVar10 = FRHICommandListBase::LockBuffer
                        (param_1,(this->PositionBuffer).VertexBufferRHI.Reference,0,
                         (this->Vertices).ArrayNum * 0xc,RLM_WriteOnly);
    pvVar11 = FRHICommandListBase::LockBuffer
                        (param_1,(this->TangentBuffer).VertexBufferRHI.Reference,0,
                         (this->Vertices).ArrayNum << 3,RLM_WriteOnly);
    puVar12 = FRHICommandListBase::LockBuffer
                        (param_1,(this->TexCoordBuffer).VertexBufferRHI.Reference,0,
                         (this->Vertices).ArrayNum << 3,RLM_WriteOnly);
    pvVar13 = FRHICommandListBase::LockBuffer
                        (param_1,(this->ColorBuffer).VertexBufferRHI.Reference,0,
                         (this->Vertices).ArrayNum << 2,RLM_WriteOnly);
    puVar14 = FRHICommandListBase::LockBuffer
                        (param_1,(this->IndexBuffer).IndexBufferRHI.Reference,0,
                         (this->Vertices).ArrayNum << 2,RLM_WriteOnly);
    uVar15 = 0;
    pTVar1 = &this->Vertices;
    if (0 < (this->Vertices).ArrayNum) {
      lVar16 = 0;
      lVar2 = (longlong)pvVar13 - (longlong)puVar14;
      puVar18 = puVar12;
      do {
        uVar17 = ~uVar15 >> 0x1f;
        uVar9 = 0;
        if ((int)uVar15 < (this->Vertices).ArrayNum) {
          uVar9 = uVar17;
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
        pFVar5 = (pTVar1->AllocatorInstance).Data;
        uVar4 = *(undefined4 *)(pFVar5 + lVar16 + 8);
        *puVar10 = *(undefined8 *)(pFVar5 + lVar16);
        *(undefined4 *)(puVar10 + 1) = uVar4;
        uVar9 = 0;
        if ((int)uVar15 < (this->Vertices).ArrayNum) {
          uVar9 = uVar17;
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
        *(undefined4 *)(((longlong)pvVar11 - (longlong)puVar12) + (longlong)puVar18) =
             *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar16 + 0x4c);
        uVar9 = 0;
        if ((int)uVar15 < (this->Vertices).ArrayNum) {
          uVar9 = uVar17;
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
        *(undefined4 *)((longlong)puVar18 + (4 - (longlong)puVar12) + (longlong)pvVar11) =
             *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar16 + 0x50);
        uVar9 = 0;
        if ((int)uVar15 < (this->Vertices).ArrayNum) {
          uVar9 = uVar17;
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
        *(undefined4 *)(lVar2 + (longlong)puVar14) =
             *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar16 + 0x54);
        uVar9 = 0;
        if ((int)uVar15 < (this->Vertices).ArrayNum) {
          uVar9 = uVar17;
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
        puVar10 = (undefined8 *)((longlong)puVar10 + 0xc);
        lVar7 = lVar16 + 0xc;
        lVar16 = lVar16 + 0x58;
        *puVar18 = *(undefined8 *)((pTVar1->AllocatorInstance).Data + lVar7);
        puVar18 = puVar18 + 1;
        *puVar14 = uVar15;
        uVar15 = uVar15 + 1;
        puVar14 = puVar14 + 1;
      } while ((int)uVar15 < (this->Vertices).ArrayNum);
    }
    FRHICommandListBase::UnlockBuffer(param_1,(this->PositionBuffer).VertexBufferRHI.Reference);
    FRHICommandListBase::UnlockBuffer(param_1,(this->TangentBuffer).VertexBufferRHI.Reference);
    FRHICommandListBase::UnlockBuffer(param_1,(this->TexCoordBuffer).VertexBufferRHI.Reference);
    FRHICommandListBase::UnlockBuffer(param_1,(this->ColorBuffer).VertexBufferRHI.Reference);
    FRHICommandListBase::UnlockBuffer(param_1,(this->IndexBuffer).IndexBufferRHI.Reference);
    (this->Vertices).ArrayNum = 0;
    if ((this->Vertices).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,4,0,&pTVar1->AllocatorInstance,0,&(this->Vertices).ArrayMax);
    }
  }
  return;
}

// InitResource @ 14ad02b10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPaperSpriteVertexBuffer::InitResource(FPaperSpriteVertexBuffer *this,FRHICommandListBase *param_1)

{
  FRenderResource::InitResource((FRenderResource *)this,param_1);
  (**(code **)((this->PositionBuffer)._padding_ + 0x18))(&this->PositionBuffer,param_1);
  (**(code **)((this->TangentBuffer)._padding_ + 0x18))(&this->TangentBuffer,param_1);
  (**(code **)((this->TexCoordBuffer)._padding_ + 0x18))(&this->TexCoordBuffer,param_1);
  (**(code **)((this->ColorBuffer)._padding_ + 0x18))(&this->ColorBuffer,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014ad02b76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->IndexBuffer)._padding_ + 0x18))(&this->IndexBuffer,param_1);
  return;
}

// ReleaseBuffers @ 14ad08860

void __thiscall FPaperSpriteVertexBuffer::ReleaseBuffers(FPaperSpriteVertexBuffer *this)

{
  FRHIShaderResourceView *pFVar1;
  
  (**(code **)((this->PositionBuffer)._padding_ + 0x10))(&this->PositionBuffer);
  (**(code **)((this->TangentBuffer)._padding_ + 0x10))(&this->TangentBuffer);
  (**(code **)((this->TexCoordBuffer)._padding_ + 0x10))(&this->TexCoordBuffer);
  (**(code **)((this->ColorBuffer)._padding_ + 0x10))();
  (**(code **)((this->IndexBuffer)._padding_ + 0x10))();
  pFVar1 = (this->TangentBufferSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    (this->TangentBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->TexCoordBufferSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    (this->TexCoordBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->ColorBufferSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    (this->ColorBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->PositionBufferSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    (this->PositionBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  this->NumAllocatedVertices = 0;
  return;
}

// ReleaseRHI @ 14ad08950

void __thiscall FPaperSpriteVertexBuffer::ReleaseRHI(FPaperSpriteVertexBuffer *this)

{
  FRHIShaderResourceView *pFVar1;
  
  (**(code **)((this->PositionBuffer)._padding_ + 0x10))(&this->PositionBuffer);
  (**(code **)((this->TangentBuffer)._padding_ + 0x10))(&this->TangentBuffer);
  (**(code **)((this->TexCoordBuffer)._padding_ + 0x10))(&this->TexCoordBuffer);
  (**(code **)((this->ColorBuffer)._padding_ + 0x10))();
  (**(code **)((this->IndexBuffer)._padding_ + 0x10))();
  pFVar1 = (this->TangentBufferSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    (this->TangentBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->TexCoordBufferSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    (this->TexCoordBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->ColorBufferSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    (this->ColorBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->PositionBufferSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    (this->PositionBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  return;
}

// ReleaseResource @ 14ad08a10

void __thiscall FPaperSpriteVertexBuffer::ReleaseResource(FPaperSpriteVertexBuffer *this)

{
  FRenderResource::ReleaseResource((FRenderResource *)this);
  (**(code **)((this->PositionBuffer)._padding_ + 0x20))(&this->PositionBuffer);
  (**(code **)((this->TangentBuffer)._padding_ + 0x20))(&this->TangentBuffer);
  (**(code **)((this->TexCoordBuffer)._padding_ + 0x20))(&this->TexCoordBuffer);
  (**(code **)((this->ColorBuffer)._padding_ + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x00014ad08a5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->IndexBuffer)._padding_ + 0x20))();
  return;
}

// SetDynamicUsage @ 14ad0a120

void __thiscall
FPaperSpriteVertexBuffer::SetDynamicUsage(FPaperSpriteVertexBuffer *this,bool param_1)

{
  this->bDynamicUsage = param_1;
  return;
}

