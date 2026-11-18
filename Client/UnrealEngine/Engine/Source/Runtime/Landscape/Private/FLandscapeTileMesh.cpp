// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 4

// ~FLandscapeTileMesh @ 145f27ac0

void __thiscall
UE::Landscape::Culling::FLandscapeTileMesh::~FLandscapeTileMesh(FLandscapeTileMesh *this)

{
  this->_padding_ = (longlong)&___7FLandscapeTileMesh_Culling_Landscape_UE__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  (**(code **)((this->VertexBuffer)._padding_ + 0x20))(&this->VertexBuffer);
  (**(code **)((this->IndexBuffer)._padding_ + 0x20))(&this->IndexBuffer);
  FIndexBuffer::~FIndexBuffer(&this->IndexBuffer);
  FVertexBuffer::~FVertexBuffer(&this->VertexBuffer);
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// InitRHI @ 145f30640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::Landscape::Culling::FLandscapeTileMesh::InitRHI
          (FLandscapeTileMesh *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHIBuffer> *pTVar1;
  ERHIPipeline EVar2;
  FRHIBuffer *pFVar3;
  code *pcVar4;
  short sVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  TRefCountPtr<FRHIBuffer> TVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  byte bVar13;
  short sVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 auStack_298 [32];
  uint local_278;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  int iStack_264;
  wchar_t *local_260;
  undefined8 uStack_258;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  int iStack_22c;
  wchar_t *local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined8 uStack_210;
  undefined8 local_208;
  FRHIResource *local_200;
  FRHIResource *local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  wchar_t *local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  wchar_t *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined1 local_178 [48];
  FRHICommandListBase *local_148;
  FRHIBuffer *local_140;
  void *local_138;
  undefined1 local_128 [48];
  FRHICommandListBase *local_f8;
  FRHIBuffer *local_f0;
  void *local_e8;
  undefined1 local_d8 [48];
  FRHICommandListBase *local_a8;
  FRHIBuffer *local_a0;
  undefined1 local_88 [48];
  FRHICommandListBase *local_58;
  FRHIBuffer *local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_298;
  uVar11 = 0;
  local_270 = 100;
  uStack_26c = 4;
  uStack_268 = 0x4001;
  uStack_258 = 0;
  iStack_264 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  uStack_248 = 0;
  local_1f0 = 0x400000064;
  uStack_1e8 = CONCAT44(iStack_264,0x4001);
  local_260 = L"FLandscapeTileMeshVertexBuffer";
  EVar2 = param_1->ActivePipelines;
  local_250 = 8;
  uStack_24c = 3;
  local_240 = 0;
  local_1d0 = 0x300000008;
  local_1e0 = L"FLandscapeTileMeshVertexBuffer";
  uStack_1d8 = 0;
  local_1c0 = 0;
  uStack_1c8 = 0;
  if (((EVar2 != None) && ((EVar2 & EVar2 - Graphics) != None)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x2a5,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (param_1->ActivePipelines == None) {
    FRHICommandListBase::SwitchPipeline(param_1,Graphics);
    (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,local_d8,param_1,&local_1f0);
    FRHICommandListBase::SwitchPipeline(param_1,None);
  }
  else {
    (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,local_d8,param_1,&local_1f0);
  }
  FRHIBufferInitializer::FRHIBufferInitializer
            ((FRHIBufferInitializer *)local_128,(FRHIBufferInitializer *)local_d8);
  if ((local_a8 != (FRHICommandListBase *)0x0) && (local_a0 != (FRHIBuffer *)0x0)) {
    FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_d8);
  }
  if (local_d8._0_8_ != 0) {
    plVar10 = (longlong *)(local_d8 + 0x10);
    if ((longlong *)local_d8._40_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_d8._40_8_;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  iVar12 = 2;
  uVar8 = 2;
  uVar15 = uVar11;
  do {
    bVar13 = (byte)uVar15;
    uVar16 = uVar15 + 1;
    local_278 = (uVar15 & 0xff) << 8;
    *(uint *)((longlong)local_e8 + (ulonglong)(uVar8 - 2) * 4) = local_278;
    local_278._1_3_ = (uint3)bVar13;
    local_278 = CONCAT31(local_278._1_3_,1);
    uVar15 = local_278;
    local_278 = (uint)CONCAT11(bVar13,2);
    uVar6 = local_278;
    *(uint *)((longlong)local_e8 + (ulonglong)(uVar8 - 1) * 4) = uVar15;
    local_278._1_3_ = (uint3)bVar13;
    local_278 = CONCAT31(local_278._1_3_,3);
    uVar15 = local_278;
    *(uint *)((longlong)local_e8 + (ulonglong)uVar8 * 4) = uVar6;
    local_278 = (uint)CONCAT11(bVar13,4);
    *(uint *)((longlong)local_e8 + (ulonglong)(uVar8 + 1) * 4) = uVar15;
    uVar15 = uVar8 + 2;
    uVar8 = uVar8 + 5;
    *(uint *)((longlong)local_e8 + (ulonglong)uVar15 * 4) = local_278;
    uVar15 = uVar16;
  } while (uVar16 < 5);
  TVar9 = FRHIBufferInitializer::Finalize((FRHIBufferInitializer *)local_128);
  pTVar1 = &(this->VertexBuffer).VertexBufferRHI;
  if ((FRHIBuffer *)pTVar1 != TVar9.Reference) {
    pFVar3 = pTVar1->Reference;
    pTVar1->Reference = (FRHIBuffer *)(TVar9.Reference)->_padding_;
    (TVar9.Reference)->_padding_ = 0;
    if (pFVar3 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
  }
  if (local_200 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_200);
  }
  if ((local_f8 != (FRHICommandListBase *)0x0) && (local_f0 != (FRHIBuffer *)0x0)) {
    FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_128);
  }
  if (local_128._0_8_ != 0) {
    plVar10 = (longlong *)(local_128 + 0x10);
    if ((longlong *)local_128._40_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_128._40_8_;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  iStack_22c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_228 = L"FLandscapeTileMeshIndexBuffer";
  EVar2 = param_1->ActivePipelines;
  local_238 = 0xc0;
  uStack_234 = 2;
  uStack_230 = 0x8001;
  uStack_220 = 0;
  uStack_210 = 0;
  local_218 = 8;
  uStack_214 = 3;
  local_208 = 0;
  local_1b8 = 0x2000000c0;
  uStack_1b0 = CONCAT44(iStack_22c,0x8001);
  local_198 = 0x300000008;
  local_1a8 = L"FLandscapeTileMeshIndexBuffer";
  uStack_1a0 = 0;
  local_188 = 0;
  uStack_190 = 0;
  if (((EVar2 != None) && ((EVar2 & EVar2 - Graphics) != None)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x2a5,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (param_1->ActivePipelines == None) {
    FRHICommandListBase::SwitchPipeline(param_1,Graphics);
    (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,local_88,param_1,&local_1b8);
    FRHICommandListBase::SwitchPipeline(param_1,None);
  }
  else {
    (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,local_88,param_1,&local_1b8);
  }
  FRHIBufferInitializer::FRHIBufferInitializer
            ((FRHIBufferInitializer *)local_178,(FRHIBufferInitializer *)local_88);
  if ((local_58 != (FRHICommandListBase *)0x0) && (local_50 != (FRHIBuffer *)0x0)) {
    FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_88);
  }
  if (local_88._0_8_ != 0) {
    plVar10 = (longlong *)(local_88 + 0x10);
    if ((longlong *)local_88._40_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_88._40_8_;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  do {
    lVar17 = (longlong)iVar12;
    sVar5 = (short)uVar11 * 5;
    sVar14 = sVar5 + 1;
    *(short *)((longlong)local_138 + lVar17 * 2 + -4) = sVar5;
    *(short *)((longlong)local_138 + (longlong)iVar12 * 2 + -2) = sVar5 + 6;
    *(short *)((longlong)local_138 + (longlong)iVar12 * 2) = sVar14;
    *(short *)((longlong)local_138 + (longlong)iVar12 * 2 + 2) = sVar5;
    *(short *)((longlong)local_138 + (longlong)iVar12 * 2 + 4) = sVar5 + 5;
    *(short *)((longlong)local_138 + (longlong)iVar12 * 2 + 6) = sVar5 + 6;
    *(short *)((longlong)local_138 + lVar17 * 2 + 8) = sVar14;
    *(short *)((longlong)local_138 + (longlong)iVar12 * 2 + 10) = sVar5 + 7;
    *(short *)((longlong)local_138 + (longlong)iVar12 * 2 + 0xc) = sVar5 + 2;
    *(short *)((longlong)local_138 + (longlong)iVar12 * 2 + 0xe) = sVar14;
    *(short *)((longlong)local_138 + (longlong)iVar12 * 2 + 0x10) = sVar5 + 6;
    *(short *)((longlong)local_138 + (longlong)iVar12 * 2 + 0x12) = sVar5 + 7;
    *(short *)((longlong)local_138 + lVar17 * 2 + 0x14) = sVar5 + 2;
    *(short *)((longlong)local_138 + (longlong)iVar12 * 2 + 0x16) = sVar5 + 8;
    *(short *)((longlong)local_138 + (longlong)iVar12 * 2 + 0x18) = sVar5 + 3;
    *(short *)((longlong)local_138 + (longlong)iVar12 * 2 + 0x1a) = sVar5 + 2;
    *(short *)((longlong)local_138 + (longlong)iVar12 * 2 + 0x1c) = sVar5 + 7;
    *(short *)((longlong)local_138 + (longlong)iVar12 * 2 + 0x1e) = sVar5 + 8;
    *(short *)((longlong)local_138 + lVar17 * 2 + 0x20) = sVar5 + 3;
    *(short *)((longlong)local_138 + (longlong)iVar12 * 2 + 0x22) = sVar5 + 9;
    *(short *)((longlong)local_138 + (longlong)iVar12 * 2 + 0x24) = sVar5 + 4;
    *(short *)((longlong)local_138 + (longlong)iVar12 * 2 + 0x26) = sVar5 + 3;
    uVar11 = uVar11 + 1;
    *(short *)((longlong)local_138 + (longlong)iVar12 * 2 + 0x28) = sVar5 + 8;
    lVar17 = (longlong)iVar12;
    iVar12 = iVar12 + 0x18;
    *(short *)((longlong)local_138 + lVar17 * 2 + 0x2a) = sVar5 + 9;
  } while (uVar11 < 4);
  TVar9 = FRHIBufferInitializer::Finalize((FRHIBufferInitializer *)local_178);
  pTVar1 = &(this->IndexBuffer).IndexBufferRHI;
  if ((FRHIBuffer *)pTVar1 != TVar9.Reference) {
    pFVar3 = pTVar1->Reference;
    pTVar1->Reference = (FRHIBuffer *)(TVar9.Reference)->_padding_;
    (TVar9.Reference)->_padding_ = 0;
    if (pFVar3 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
  }
  if (local_1f8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_1f8);
  }
  if ((local_148 != (FRHICommandListBase *)0x0) && (local_140 != (FRHIBuffer *)0x0)) {
    FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_178);
  }
  if (local_178._0_8_ != 0) {
    plVar10 = (longlong *)(local_178 + 0x10);
    if ((longlong *)local_178._40_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_178._40_8_;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  return;
}

// InitResource @ 145f30f20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::Landscape::Culling::FLandscapeTileMesh::InitResource
          (FLandscapeTileMesh *this,FRHICommandListBase *param_1)

{
  FRenderResource::InitResource((FRenderResource *)this,param_1);
  (**(code **)((this->VertexBuffer)._padding_ + 0x18))(&this->VertexBuffer,param_1);
                    /* WARNING: Could not recover jumptable at 0x000145f30f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->IndexBuffer)._padding_ + 0x18))(&this->IndexBuffer,param_1);
  return;
}

// ReleaseResource @ 145f32650

void __thiscall
UE::Landscape::Culling::FLandscapeTileMesh::ReleaseResource(FLandscapeTileMesh *this)

{
  FRenderResource::ReleaseResource((FRenderResource *)this);
  (**(code **)((this->VertexBuffer)._padding_ + 0x20))(&this->VertexBuffer);
                    /* WARNING: Could not recover jumptable at 0x000145f32676. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->IndexBuffer)._padding_ + 0x20))(&this->IndexBuffer);
  return;
}

