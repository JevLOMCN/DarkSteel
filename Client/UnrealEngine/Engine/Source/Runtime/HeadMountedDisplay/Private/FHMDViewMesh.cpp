// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HeadMountedDisplay
// Functions: 3

// FHMDViewMesh @ 14594e0c0

FHMDViewMesh * __thiscall FHMDViewMesh::FHMDViewMesh(FHMDViewMesh *this)

{
  (this->VertexBufferRHI).Reference = (FRHIBuffer *)0x0;
  (this->IndexBufferRHI).Reference = (FRHIBuffer *)0x0;
  this->NumVertices = 0;
  this->NumIndices = 0;
  this->NumTriangles = 0;
  return this;
}

// ~FHMDViewMesh @ 14594e9d0

void __thiscall FHMDViewMesh::~FHMDViewMesh(FHMDViewMesh *this)

{
  FRHIBuffer *pFVar1;
  
  pFVar1 = (this->IndexBufferRHI).Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->VertexBufferRHI).Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
    return;
  }
  return;
}

// BuildMesh @ 145950fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FHMDViewMesh::BuildMesh
          (FHMDViewMesh *this,TVector2<double> *param_1,uint param_2,EHMDMeshType param_3)

{
  double dVar1;
  FRHIBuffer *pFVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  longlong lVar6;
  TRefCountPtr<FRHIBuffer> TVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  TRefCountPtr<FRHIBuffer> *pTVar11;
  float fVar12;
  undefined1 auStack_288 [32];
  int local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  int iStack_25c;
  wchar_t *local_258;
  undefined8 uStack_250;
  ERHIAccess local_248;
  undefined4 uStack_244;
  undefined8 uStack_240;
  undefined8 local_238;
  int local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  int iStack_224;
  wchar_t *local_220;
  undefined8 uStack_218;
  ERHIAccess local_210;
  undefined4 uStack_20c;
  undefined8 uStack_208;
  undefined8 local_200;
  FRHIResource *local_1f8;
  FRHIResource *local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  wchar_t *local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  wchar_t *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined1 local_178 [48];
  FRHICommandListBase *local_148;
  FRHIBuffer *local_140;
  undefined1 local_128 [48];
  FRHICommandListBase *local_f8;
  FRHIBuffer *local_f0;
  undefined1 local_d8 [48];
  FRHICommandListBase *local_a8;
  FRHIBuffer *local_a0;
  void *local_98;
  undefined1 local_88 [48];
  FRHICommandListBase *local_58;
  FRHIBuffer *local_50;
  void *local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_288;
  if (((param_2 < 3) || (param_2 != (param_2 / 3) * 3)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("VertexCount > 2 && VertexCount % 3 == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\HeadMountedDisplay\\Private\\HeadMountedDisplayTypes.cpp"
                         ,0x18,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar5 = IsInRenderingThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x1594,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this->NumVertices = param_2;
  this->NumIndices = param_2;
  uVar10 = 0;
  uStack_264 = 0;
  local_268 = param_2 << 5;
  this->NumTriangles = param_2 / 3;
  local_258 = L"FHMDViewMesh";
  iStack_25c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  uStack_250 = 0;
  uStack_240 = 0;
  local_238 = 0;
  uStack_260 = 0x4001;
  uStack_244 = 3;
  local_248 = RHIGetDefaultResourceState(VertexBuffer|Static,false);
  local_1e8 = CONCAT44(uStack_264,local_268);
  uStack_1e0 = CONCAT44(iStack_25c,uStack_260);
  local_230 = this->NumIndices * 2;
  iStack_224 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_1c8 = CONCAT44(uStack_244,local_248);
  local_1d8 = local_258;
  uStack_1d0 = uStack_250;
  uStack_22c = 2;
  uStack_1c0 = uStack_240;
  local_1b8 = local_238;
  local_220 = L"FHMDViewMesh";
  uStack_218 = 0;
  uStack_208 = 0;
  local_200 = 0;
  uStack_228 = 0x8001;
  uStack_20c = 3;
  local_210 = RHIGetDefaultResourceState(IndexBuffer|Static,false);
  local_1b0 = CONCAT44(uStack_22c,local_230);
  uStack_1a8 = CONCAT44(iStack_224,uStack_228);
  local_190 = CONCAT44(uStack_20c,local_210);
  local_1a0 = local_220;
  uStack_198 = uStack_218;
  local_180 = local_200;
  uStack_188 = uStack_208;
  if (((GRHICommandList.CommandListImmediate._106_1_ != '\0') &&
      ((GRHICommandList.CommandListImmediate._106_1_ &
       GRHICommandList.CommandListImmediate._106_1_ - 1) != 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x2a5,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (GRHICommandList.CommandListImmediate._106_1_ == '\0') {
    FRHICommandListBase::SwitchPipeline
              ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,Graphics);
    (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,local_178,0x154be5ed0,&local_1e8);
    FRHICommandListBase::SwitchPipeline
              ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,None);
  }
  else {
    (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,local_178,0x154be5ed0,&local_1e8);
  }
  FRHIBufferInitializer::FRHIBufferInitializer
            ((FRHIBufferInitializer *)local_88,(FRHIBufferInitializer *)local_178);
  if ((local_148 != (FRHICommandListBase *)0x0) && (local_140 != (FRHIBuffer *)0x0)) {
    FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_178);
  }
  if (local_178._0_8_ != 0) {
    plVar8 = (longlong *)(local_178 + 0x10);
    if ((longlong *)local_178._40_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_178._40_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (((GRHICommandList.CommandListImmediate._106_1_ != '\0') &&
      ((GRHICommandList.CommandListImmediate._106_1_ &
       GRHICommandList.CommandListImmediate._106_1_ - 1) != 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x2a5,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (GRHICommandList.CommandListImmediate._106_1_ == '\0') {
    FRHICommandListBase::SwitchPipeline
              ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,Graphics);
    (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,local_128,0x154be5ed0,&local_1b0);
    FRHICommandListBase::SwitchPipeline
              ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,None);
  }
  else {
    (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,local_128,0x154be5ed0,&local_1b0);
  }
  FRHIBufferInitializer::FRHIBufferInitializer
            ((FRHIBufferInitializer *)local_d8,(FRHIBufferInitializer *)local_128);
  if ((local_f8 != (FRHICommandListBase *)0x0) && (local_f0 != (FRHIBuffer *)0x0)) {
    FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_128);
  }
  if (local_128._0_8_ != 0) {
    plVar8 = (longlong *)(local_128 + 0x10);
    if ((longlong *)local_128._40_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_128._40_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  fVar4 = __real_3f800000;
  if (this->NumVertices != 0) {
    do {
      iVar9 = (int)uVar10;
      lVar6 = (longlong)iVar9 * 0x20;
      fVar12 = (float)param_1[uVar10].field0_0x0._s_0.X;
      if (param_3 == MT_HiddenArea) {
        *(float *)(lVar6 + (longlong)local_48) = (fVar12 + fVar12) - fVar4;
        fVar12 = (float)param_1[uVar10].field0_0x0._s_0.Y;
        *(undefined4 *)(lVar6 + 8 + (longlong)local_48) = 0x3f800000;
        *(undefined8 *)(lVar6 + 0xc + (longlong)local_48) = 0x3f800000;
        *(float *)(lVar6 + 4 + (longlong)local_48) = (fVar12 + fVar12) - fVar4;
        fVar12 = 0.0;
      }
      else {
        *(float *)(lVar6 + (longlong)local_48) = fVar12;
        dVar1 = param_1[uVar10].field0_0x0._s_0.Y;
        *(undefined4 *)(lVar6 + 8 + (longlong)local_48) = 0;
        *(undefined4 *)(lVar6 + 0xc + (longlong)local_48) = 0x3f800000;
        *(float *)(lVar6 + 4 + (longlong)local_48) = fVar4 - (float)dVar1;
        *(float *)(lVar6 + 0x10 + (longlong)local_48) = (float)param_1[uVar10].field0_0x0._s_0.X;
        fVar12 = fVar4 - (float)param_1[uVar10].field0_0x0._s_0.Y;
      }
      *(float *)(lVar6 + 0x14 + (longlong)local_48) = fVar12;
      *(short *)((longlong)local_98 + (longlong)iVar9 * 2) = (short)uVar10;
      uVar10 = (ulonglong)(iVar9 + 1U);
    } while (iVar9 + 1U < this->NumVertices);
  }
  TVar7 = FRHIBufferInitializer::Finalize((FRHIBufferInitializer *)local_88);
  if ((FRHIBuffer *)this != TVar7.Reference) {
    pFVar2 = (this->VertexBufferRHI).Reference;
    (this->VertexBufferRHI).Reference = (FRHIBuffer *)(TVar7.Reference)->_padding_;
    (TVar7.Reference)->_padding_ = 0;
    if (pFVar2 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
  }
  if (local_1f8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_1f8);
  }
  TVar7 = FRHIBufferInitializer::Finalize((FRHIBufferInitializer *)local_d8);
  pTVar11 = &this->IndexBufferRHI;
  if ((FRHIBuffer *)pTVar11 != TVar7.Reference) {
    pFVar2 = pTVar11->Reference;
    pTVar11->Reference = (FRHIBuffer *)(TVar7.Reference)->_padding_;
    (TVar7.Reference)->_padding_ = 0;
    if (pFVar2 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
  }
  if (local_1f0 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_1f0);
  }
  if ((local_a8 != (FRHICommandListBase *)0x0) && (local_a0 != (FRHIBuffer *)0x0)) {
    FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_d8);
  }
  if (local_d8._0_8_ != 0) {
    plVar8 = (longlong *)(local_d8 + 0x10);
    if ((longlong *)local_d8._40_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_d8._40_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if ((local_58 != (FRHICommandListBase *)0x0) && (local_50 != (FRHIBuffer *)0x0)) {
    FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_88);
  }
  if (local_88._0_8_ != 0) {
    plVar8 = (longlong *)(local_88 + 0x10);
    if ((longlong *)local_88._40_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_88._40_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  return;
}

