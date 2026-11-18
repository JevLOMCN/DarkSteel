// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// ~FDynamicSpriteEmitterDataBase @ 1480f65c0

void __thiscall
FDynamicSpriteEmitterDataBase::~FDynamicSpriteEmitterDataBase(FDynamicSpriteEmitterDataBase *this)

{
  this->_padding_ = (longlong)&___7FDynamicEmitterDataBase__6B_;
  return;
}

// DoBufferFill @ 1481076b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FDynamicSpriteEmitterDataBase::DoBufferFill
          (FDynamicSpriteEmitterDataBase *this,FAsyncBufferFillData *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ParticleHelper.h"
                     ,0x5af,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// GetDynamicParameterVertexStride @ 148115af0

int __thiscall
FDynamicSpriteEmitterDataBase::GetDynamicParameterVertexStride(FDynamicSpriteEmitterDataBase *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ParticleHelper.h"
                     ,0x58d,L"GetDynamicParameterVertexStride MUST be overridden");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return 0;
}

// GetDynamicVertexStride @ 148115b50

int __thiscall
FDynamicSpriteEmitterDataBase::GetDynamicVertexStride
          (FDynamicSpriteEmitterDataBase *this,Type param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ParticleHelper.h"
                     ,0x584,L"GetDynamicVertexStride MUST be overridden");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return 0;
}

// GetIndexAllocInfo @ 148116060

void __thiscall
FDynamicSpriteEmitterDataBase::GetIndexAllocInfo
          (FDynamicSpriteEmitterDataBase *this,int *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ParticleHelper.h"
                     ,0x59f,L"GetIndexAllocInfo is not valid for this class.");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// GetMaterialRenderProxy @ 1481162d0

FMaterialRenderProxy * __thiscall
FDynamicSpriteEmitterDataBase::GetMaterialRenderProxy(FDynamicSpriteEmitterDataBase *this)

{
  return this->MaterialResource;
}

// GetSourceData @ 148119240

FDynamicSpriteEmitterReplayDataBase * __thiscall
FDynamicSpriteEmitterDataBase::GetSourceData(FDynamicSpriteEmitterDataBase *this)

{
  code *pcVar1;
  bool bVar2;
  FDynamicSpriteEmitterReplayDataBase *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ParticleHelper.h"
                     ,0x596,L"GetSourceData MUST be overridden");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDynamicSpriteEmitterReplayDataBase *)(*pcVar1)();
    return pFVar3;
  }
  return (FDynamicSpriteEmitterReplayDataBase *)0x0;
}

// BuildViewFillData @ 1481d5e60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FDynamicSpriteEmitterDataBase::BuildViewFillData
          (FDynamicSpriteEmitterDataBase *this,FParticleSystemSceneProxy *param_1,
          FSceneView *param_2,int param_3,int param_4,int param_5,FGlobalDynamicIndexBuffer *param_6
          ,FGlobalDynamicVertexBuffer *param_7,FGlobalDynamicVertexBufferAllocation *param_8,
          FGlobalDynamicIndexBufferAllocation *param_9,
          FGlobalDynamicVertexBufferAllocation *param_10,FAsyncBufferFillData *param_11)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  FVertexBuffer *pFVar4;
  FIndexBuffer *pFVar5;
  undefined4 uVar6;
  FAsyncBufferFillData *pFVar7;
  bool bVar8;
  FGlobalDynamicVertexBufferAllocation *pFVar9;
  FGlobalDynamicIndexBufferAllocation *pFVar10;
  FName local_res10;
  FName local_res18;
  uint local_res20 [2];
  FName local_168;
  FName local_160;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  TMatrix<double> local_118;
  FGlobalDynamicVertexBufferAllocation local_98;
  FGlobalDynamicIndexBufferAllocation local_80;
  FGlobalDynamicVertexBufferAllocation local_68;
  
  pFVar7 = param_11;
  dVar3 = *(double *)&param_1->field_0x118;
  (param_11->LocalToWorld).M[0][0] = *(double *)&param_1->field_0x110;
  (param_11->LocalToWorld).M[0][1] = dVar3;
  dVar3 = *(double *)&param_1->field_0x128;
  (param_11->LocalToWorld).M[0][2] = *(double *)&param_1->field_0x120;
  (param_11->LocalToWorld).M[0][3] = dVar3;
  dVar3 = *(double *)&param_1->field_0x138;
  (param_11->LocalToWorld).M[1][0] = *(double *)&param_1->field_0x130;
  (param_11->LocalToWorld).M[1][1] = dVar3;
  dVar3 = *(double *)&param_1->field_0x148;
  (param_11->LocalToWorld).M[1][2] = *(double *)&param_1->field_0x140;
  (param_11->LocalToWorld).M[1][3] = dVar3;
  dVar3 = *(double *)&param_1->field_0x158;
  (param_11->LocalToWorld).M[2][0] = *(double *)&param_1->field_0x150;
  (param_11->LocalToWorld).M[2][1] = dVar3;
  dVar3 = *(double *)&param_1->field_0x168;
  (param_11->LocalToWorld).M[2][2] = *(double *)&param_1->field_0x160;
  (param_11->LocalToWorld).M[2][3] = dVar3;
  dVar3 = *(double *)&param_1->field_0x178;
  (param_11->LocalToWorld).M[3][0] = *(double *)&param_1->field_0x170;
  (param_11->LocalToWorld).M[3][1] = dVar3;
  dVar3 = *(double *)&param_1->field_0x188;
  (param_11->LocalToWorld).M[3][2] = *(double *)&param_1->field_0x180;
  (param_11->LocalToWorld).M[3][3] = dVar3;
  UE::Math::TMatrix<double>::Inverse((TMatrix<double> *)&param_1->field_0x110,&local_118);
  iVar1 = pFVar7->VertexSize;
  pFVar7->View = param_2;
  (pFVar7->WorldToLocal).M[0][0] = local_118.M[0][0];
  (pFVar7->WorldToLocal).M[0][1] = local_118.M[0][1];
  (pFVar7->WorldToLocal).M[0][2] = local_118.M[0][2];
  (pFVar7->WorldToLocal).M[0][3] = local_118.M[0][3];
  (pFVar7->WorldToLocal).M[1][0] = local_118.M[1][0];
  (pFVar7->WorldToLocal).M[1][1] = local_118.M[1][1];
  (pFVar7->WorldToLocal).M[1][2] = local_118.M[1][2];
  (pFVar7->WorldToLocal).M[1][3] = local_118.M[1][3];
  (pFVar7->WorldToLocal).M[2][0] = local_118.M[2][0];
  (pFVar7->WorldToLocal).M[2][1] = local_118.M[2][1];
  (pFVar7->WorldToLocal).M[2][2] = local_118.M[2][2];
  (pFVar7->WorldToLocal).M[2][3] = local_118.M[2][3];
  (pFVar7->WorldToLocal).M[3][0] = local_118.M[3][0];
  (pFVar7->WorldToLocal).M[3][1] = local_118.M[3][1];
  (pFVar7->WorldToLocal).M[3][2] = local_118.M[3][2];
  (pFVar7->WorldToLocal).M[3][3] = local_118.M[3][3];
  if ((iVar1 != 0) && (iVar1 != param_4)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data.VertexSize == 0 || Data.VertexSize == InVertexSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                       ,0x13a,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar9 = FGlobalDynamicVertexBuffer::Allocate(param_7,&local_98,param_3 * param_4);
  pFVar4 = pFVar9->VertexBuffer;
  param_8->Buffer = pFVar9->Buffer;
  param_8->VertexBuffer = pFVar4;
  uVar6 = *(undefined4 *)&pFVar9->field_0x14;
  param_8->VertexOffset = pFVar9->VertexOffset;
  *(undefined4 *)&param_8->field_0x14 = uVar6;
  bVar8 = FGlobalDynamicVertexBuffer::IsRenderAlarmLoggingEnabled(param_7);
  if ((bVar8) && (2 < (byte)LogParticles._0_1_)) {
    local_res10.ComparisonIndex.Value = *(uint *)&param_1->field_0x230;
    local_res10.Number = *(uint *)&param_1->field_0x234;
    ::FName::ToString(&local_res10,&local_148);
    local_res18.ComparisonIndex.Value = *(uint *)&param_1->field_0x238;
    local_res18.Number = *(uint *)&param_1->field_0x23c;
    ::FName::ToString(&local_res18,&local_158);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  pFVar7->VertexData = param_8->Buffer;
  pFVar7->VertexCount = param_3;
  pFVar7->VertexSize = param_4;
  (**(code **)(this->_padding_ + 0x58))(this,&param_11,local_res20);
  if ((int)local_res20[0] < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IndexStride > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                       ,0x149,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar10 = FGlobalDynamicIndexBuffer::Allocate(param_6,&local_80,(uint)param_11,local_res20[0]);
  pFVar5 = pFVar10->IndexBuffer;
  param_9->Buffer = pFVar10->Buffer;
  param_9->IndexBuffer = pFVar5;
  uVar6 = *(undefined4 *)&pFVar10->field_0x14;
  param_9->FirstIndex = pFVar10->FirstIndex;
  *(undefined4 *)&param_9->field_0x14 = uVar6;
  pFVar7->IndexData = param_9->Buffer;
  pFVar7->IndexCount = (uint)param_11;
  pFVar7->DynamicParameterData = (void *)0x0;
  if (this->bUsesDynamicParameter != 0) {
    if (param_5 < 1) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InDynamicParameterVertexStride > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                         ,0x153,L"");
      if (bVar8) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar9 = FGlobalDynamicVertexBuffer::Allocate(param_7,&local_68,param_3 * param_5);
    pFVar4 = pFVar9->VertexBuffer;
    param_10->Buffer = pFVar9->Buffer;
    param_10->VertexBuffer = pFVar4;
    uVar6 = *(undefined4 *)&pFVar9->field_0x14;
    param_10->VertexOffset = pFVar9->VertexOffset;
    *(undefined4 *)&param_10->field_0x14 = uVar6;
    bVar8 = FGlobalDynamicVertexBuffer::IsRenderAlarmLoggingEnabled(param_7);
    if ((bVar8) && (2 < (byte)LogParticles._0_1_)) {
      local_168.ComparisonIndex.Value = *(uint *)&param_1->field_0x230;
      local_168.Number = *(uint *)&param_1->field_0x234;
      ::FName::ToString(&local_168,&local_128);
      local_160.ComparisonIndex.Value = *(uint *)&param_1->field_0x238;
      local_160.Number = *(uint *)&param_1->field_0x23c;
      ::FName::ToString(&local_160,&local_138);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
    }
    pFVar7->DynamicParameterData = param_10->Buffer;
  }
  return;
}

// RenderDebug @ 148210910

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FDynamicSpriteEmitterDataBase::RenderDebug
          (FDynamicSpriteEmitterDataBase *this,FParticleSystemSceneProxy *param_1,
          FPrimitiveDrawInterface *param_2,FSceneView *param_3,bool param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined4 uVar27;
  bool bVar28;
  ESceneDepthPriorityGroup EVar29;
  longlong lVar30;
  longlong lVar31;
  int iVar32;
  longlong lVar33;
  TMatrix<double> *pTVar34;
  double dVar35;
  double dVar36;
  double dVar38;
  undefined1 auVar37 [16];
  undefined1 auVar39 [16];
  double local_1a8;
  double local_1a0;
  double local_198;
  FSceneView *local_190;
  longlong local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  
  local_190 = param_3;
  if ((param_1 == (FParticleSystemSceneProxy *)0x0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("Proxy",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                          ,0x10b,L""), bVar28)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar30 = (**(code **)(this->_padding_ + 0x30))(this);
  uVar27 = __real_40000000;
  dVar26 = __real_3fe0000000000000;
  pTVar34 = (TMatrix<double> *)&param_1->field_0x110;
  if (*(char *)(lVar30 + 0xbc) == '\0') {
    pTVar34 = &UE::Math::TMatrix<double>::Identity;
  }
  dVar8 = (param_3->ViewMatrices).InvViewMatrix.M[0][0];
  dVar9 = (param_3->ViewMatrices).InvViewMatrix.M[0][1];
  dVar11 = (param_3->ViewMatrices).InvViewMatrix.M[1][0];
  dVar12 = (param_3->ViewMatrices).InvViewMatrix.M[1][1];
  dVar16 = (param_3->ViewMatrices).InvViewMatrix.M[2][0];
  dVar17 = (param_3->ViewMatrices).InvViewMatrix.M[2][1];
  dVar18 = (param_3->ViewMatrices).InvViewMatrix.M[3][0];
  dVar19 = (param_3->ViewMatrices).InvViewMatrix.M[3][1];
  dVar15 = (param_3->ViewMatrices).InvViewMatrix.M[0][2];
  dVar36 = (param_3->ViewMatrices).InvViewMatrix.M[0][3];
  dVar20 = (param_3->ViewMatrices).InvViewMatrix.M[1][2];
  dVar21 = (param_3->ViewMatrices).InvViewMatrix.M[1][3];
  iVar32 = 0;
  dVar22 = (param_3->ViewMatrices).InvViewMatrix.M[2][2];
  dVar23 = (param_3->ViewMatrices).InvViewMatrix.M[2][3];
  dVar24 = (param_3->ViewMatrices).InvViewMatrix.M[3][2];
  dVar25 = (param_3->ViewMatrices).InvViewMatrix.M[3][3];
  dVar35 = dVar8 * ___xmm_00000000000000003ff0000000000000;
  dVar38 = dVar9 * ___xmm_00000000000000003ff0000000000000;
  dVar13 = dVar11 * _UNK_150689518;
  dVar14 = dVar12 * _UNK_150689518;
  dVar10 = dVar21 * _UNK_150689518 + dVar36 * ___xmm_00000000000000003ff0000000000000 + dVar23 * 0.0
           + dVar25 * 0.0;
  dVar11 = dVar11 * _UNK_15061cbc8;
  dVar12 = dVar12 * _UNK_15061cbc8;
  dVar8 = dVar8 * ___xmm_3ff00000000000000000000000000000;
  dVar9 = dVar9 * ___xmm_3ff00000000000000000000000000000;
  dVar36 = dVar21 * _UNK_15061cbc8 + dVar36 * ___xmm_3ff00000000000000000000000000000 + dVar23 * 0.0
           + dVar25 * 0.0;
  local_180 = ___xmm_3f800000000000003f8000003f800000;
  uStack_178 = _UNK_150a07f68;
  local_f8._8_4_ = SUB84(dVar36,0);
  local_f8._0_8_ =
       dVar20 * _UNK_15061cbc8 + dVar15 * ___xmm_3ff00000000000000000000000000000 + dVar22 * 0.0 +
       dVar24 * 0.0;
  local_f8._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
  local_108._8_4_ = SUB84(dVar10,0);
  local_108._0_8_ =
       dVar20 * _UNK_150689518 + dVar15 * ___xmm_00000000000000003ff0000000000000 + dVar22 * 0.0 +
       dVar24 * 0.0;
  local_108._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  if (0 < *(int *)(lVar30 + 0xc)) {
    lVar33 = 0;
    do {
      lVar6 = *(longlong *)(lVar30 + 0x28);
      local_188 = param_2->_padding_;
      lVar31 = (longlong)
               (int)((uint)*(ushort *)(lVar33 + *(longlong *)(lVar30 + 0x30)) *
                    *(int *)(lVar30 + 0x10));
      auVar5 = *(undefined1 (*) [16])(lVar31 + 0x18 + lVar6);
      dVar10 = auVar5._8_8_;
      dVar36 = *(double *)(lVar31 + 0x28 + lVar6);
      dVar15 = auVar5._0_8_;
      auVar39._8_4_ = auVar5._0_4_;
      auVar39._0_8_ = dVar15;
      auVar39._12_4_ = auVar5._4_4_;
      auVar37._8_4_ = auVar5._8_4_;
      auVar37._0_8_ = dVar10;
      auVar37._12_4_ = auVar5._12_4_;
      local_1a8 = dVar15 * pTVar34->M[0][0] + dVar10 * pTVar34->M[1][0] + pTVar34->M[2][0] * dVar36
                  + pTVar34->M[3][0] * __real_3ff0000000000000;
      local_1a0 = auVar39._8_8_ * pTVar34->M[0][1] + auVar37._8_8_ * pTVar34->M[1][1] +
                  pTVar34->M[2][1] * dVar36 + pTVar34->M[3][1] * __real_3ff0000000000000;
      local_198 = dVar10 * pTVar34->M[1][2] + dVar15 * pTVar34->M[0][2] + pTVar34->M[2][2] * dVar36
                  + __real_3ff0000000000000 * pTVar34->M[3][2];
      if (param_4) {
        fVar1 = *(float *)(lVar31 + 0x60 + lVar6);
        fVar2 = *(float *)(lVar31 + 100 + lVar6);
        fVar3 = *(float *)(lVar30 + 0x38);
        fVar4 = *(float *)(lVar30 + 0x3c);
        EVar29 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                           ((FPrimitiveSceneProxy *)param_1,param_3);
        dVar36 = (double)(fVar1 * fVar3) * dVar26;
        local_158 = dVar36 * (dVar13 + dVar35 + dVar16 * 0.0 + dVar18 * 0.0);
        local_150 = dVar36 * (dVar14 + dVar38 + dVar17 * 0.0 + dVar19 * 0.0);
        local_170 = local_1a8 + local_158;
        local_158 = local_1a8 - local_158;
        local_168 = local_1a0 + local_150;
        local_150 = local_1a0 - local_150;
        local_160 = local_198 + dVar36 * (double)local_108._0_8_;
        local_148 = local_198 - dVar36 * (double)local_108._0_8_;
        (**(code **)(local_188 + 0x30))(param_2,&local_158,&local_170,&local_180,(char)EVar29,0,0,0)
        ;
        pcVar7 = *(code **)(param_2->_padding_ + 0x30);
        EVar29 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                           ((FPrimitiveSceneProxy *)param_1,local_190);
        dVar36 = (double)(fVar2 * fVar4) * dVar26;
        local_120 = (dVar12 + dVar9 + dVar17 * 0.0 + dVar19 * 0.0) * dVar36;
        local_128 = (dVar11 + dVar8 + dVar16 * 0.0 + dVar18 * 0.0) * dVar36;
        local_138 = local_1a0 + local_120;
        local_140 = local_1a8 + local_128;
        local_128 = local_1a8 - local_128;
        local_120 = local_1a0 - local_120;
        local_130 = local_198 + (double)local_f8._0_8_ * dVar36;
        local_118 = local_198 - (double)local_f8._0_8_ * dVar36;
        (*pcVar7)(param_2,&local_128,&local_140,&local_180,(char)EVar29,0,0,0);
        param_3 = local_190;
      }
      else {
        EVar29 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                           ((FPrimitiveSceneProxy *)param_1,param_3);
        (**(code **)(local_188 + 0x40))(param_2,&local_1a8,&local_180,uVar27,(char)EVar29);
      }
      iVar32 = iVar32 + 1;
      lVar33 = lVar33 + 2;
    } while (iVar32 < *(int *)(lVar30 + 0xc));
  }
  return;
}

// SortSpriteParticles @ 14821a290

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FDynamicSpriteEmitterDataBase::SortSpriteParticles
          (FDynamicSpriteEmitterDataBase *this,int param_1,bool param_2,int param_3,uchar *param_4,
          int param_5,ushort *param_6,FSceneView *param_7,TMatrix<double> *param_8,
          FParticleOrder *param_9)

{
  TVector<double> *pTVar1;
  double *pdVar2;
  ushort *puVar3;
  double dVar4;
  double dVar5;
  ushort uVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  FName *pFVar26;
  FThreadSafeStaticStat<FStat_STAT_SortingTime> FVar27;
  FParticleOrder *pFVar28;
  FNameEntryId FVar29;
  FName FVar30;
  double *pdVar31;
  uint uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ushort *puVar35;
  int iVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  FColor_u_0 local_res10 [2];
  char local_res18;
  int local_res20;
  FName local_98;
  uint local_90;
  uint uStack_8c;
  FName local_88;
  FName local_80;
  
  uVar33 = 0;
  iVar36 = 2;
  FVar27 = StatPtr_STAT_SortingTime;
  local_res18 = param_2;
  local_res20 = param_3;
  if (StatPtr_STAT_SortingTime == (FThreadSafeStaticStat<FStat_STAT_SortingTime>)0x0) {
    pFVar26 = ::FName::FName(&local_88,"STAT_SortingTime");
    FVar27 = (FThreadSafeStaticStat<FStat_STAT_SortingTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SortingTime,*pFVar26,
                        L"Sort Time RT","STATGROUP_Particles","STATCAT_Advanced",L"Particles",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar30 = *(FName *)FVar27;
  bVar22 = false;
  bVar24 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  FVar29 = FVar30.ComparisonIndex.Value;
  uVar32 = FVar30.Number;
  if ((FVar29.Value == 0) && (uVar32 == 0)) {
LAB_14821a3f3:
    bVar23 = false;
    FVar30 = local_80;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar27 + 0x10));
      bVar22 = false;
      bVar24 = true;
      if (-1 < CpuChannel->Enabled) {
        local_98.ComparisonIndex.Value = FVar29.Value;
        local_98.Number = uVar32;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_98,(wchar_t *)*(FName *)((longlong)FVar27 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                   ,200);
        bVar22 = true;
        bVar24 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14821a3f3;
    local_90 = FVar29.Value;
    uStack_8c = uVar32;
    FThreadStats::AddMessage(FVar30,CycleScopeStart);
    bVar23 = true;
  }
  dVar40 = __real_3ff0000000000000;
  if (param_1 == 1) {
    if (param_3 < 1) {
      if ((param_3 < 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar25)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else {
      pFVar28 = param_9;
      if (local_res18 == '\0') {
        do {
          uVar6 = *param_6;
          param_6 = param_6 + 1;
          dVar4 = (param_7->ViewMatrices).ViewProjectionMatrix.M[1][3];
          dVar5 = *(double *)(param_4 + (longlong)(int)((uint)uVar6 * param_5) + 0x18);
          dVar38 = *(double *)
                    ((longlong)(param_4 + (longlong)(int)((uint)uVar6 * param_5) + 0x18) + 8);
          dVar37 = *(double *)(param_4 + (longlong)(int)((uint)uVar6 * param_5) + 0x28);
          dVar39 = (param_7->ViewMatrices).ViewProjectionMatrix.M[0][3];
          dVar8 = (param_7->ViewMatrices).ViewProjectionMatrix.M[2][3];
          dVar9 = (param_7->ViewMatrices).ViewProjectionMatrix.M[3][3];
          pFVar28->ParticleIndex = (int)uVar33;
          uVar32 = (int)uVar33 + 1;
          uVar33 = (ulonglong)uVar32;
          (pFVar28->field1_0x4).Z =
               (float)(dVar38 * dVar4 + dVar5 * dVar39 + dVar37 * dVar8 + dVar40 * dVar9);
          pFVar28 = pFVar28 + 1;
        } while ((int)uVar32 < param_3);
      }
      else {
        do {
          uVar6 = *param_6;
          param_6 = param_6 + 1;
          dVar4 = param_8->M[0][0];
          dVar5 = param_8->M[0][1];
          dVar38 = param_8->M[1][0];
          dVar39 = param_8->M[1][1];
          dVar8 = *(double *)(param_4 + (longlong)(int)((uint)uVar6 * param_5) + 0x18);
          dVar9 = *(double *)
                   ((longlong)(param_4 + (longlong)(int)((uint)uVar6 * param_5) + 0x18) + 8);
          dVar37 = *(double *)(param_4 + (longlong)(int)((uint)uVar6 * param_5) + 0x28);
          dVar10 = param_8->M[2][0];
          dVar11 = param_8->M[2][1];
          dVar12 = param_8->M[3][0];
          dVar13 = param_8->M[3][1];
          dVar14 = param_8->M[1][2];
          dVar15 = param_8->M[0][2];
          dVar16 = param_8->M[2][2];
          dVar17 = param_8->M[3][2];
          dVar18 = (param_7->ViewMatrices).ViewProjectionMatrix.M[1][3];
          dVar19 = (param_7->ViewMatrices).ViewProjectionMatrix.M[0][3];
          dVar20 = (param_7->ViewMatrices).ViewProjectionMatrix.M[2][3];
          dVar21 = (param_7->ViewMatrices).ViewProjectionMatrix.M[3][3];
          pFVar28->ParticleIndex = (int)uVar33;
          uVar32 = (int)uVar33 + 1;
          uVar33 = (ulonglong)uVar32;
          (pFVar28->field1_0x4).Z =
               (float)((dVar8 * dVar5 + dVar9 * dVar39 + dVar37 * dVar11 + dVar40 * dVar13) * dVar18
                       + (dVar8 * dVar4 + dVar9 * dVar38 + dVar37 * dVar10 + dVar40 * dVar12) *
                         dVar19 +
                       (dVar37 * dVar16 + dVar9 * dVar14 + dVar8 * dVar15 + dVar40 * dVar17) *
                       dVar20 + dVar40 * dVar21);
          pFVar28 = pFVar28 + 1;
        } while ((int)uVar32 < param_3);
      }
    }
    AlgoImpl::
    IntroSortInternal<FParticleOrder,int,UE::Core::Private::TProjectionMemberData<float_FParticleOrder::*>,TGreater<void>_>
              (param_9,param_3,(TProjectionMemberData<float_FParticleOrder::*>)0x4,
               (TGreater<void>)local_res10[0]._0_1_);
    goto LAB_14821ab7d;
  }
  if (param_1 != 2) {
    if (param_1 == 3) {
      pFVar28 = param_9;
      if (param_3 < 1) {
LAB_14821ab3c:
        if ((param_3 < 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar25)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      else {
        do {
          uVar6 = *param_6;
          param_6 = param_6 + 1;
          pFVar28->ParticleIndex = (int)uVar33;
          uVar32 = (int)uVar33 + 1;
          uVar33 = (ulonglong)uVar32;
          (pFVar28->field1_0x4).C =
               *(uint *)(param_4 + (longlong)(int)((uint)uVar6 * param_5) + 0x6c) & 0x1ffffff;
          pFVar28 = pFVar28 + 1;
        } while ((int)uVar32 < param_3);
      }
    }
    else {
      if (param_1 != 4) goto LAB_14821ab7d;
      pFVar28 = param_9;
      if (param_3 < 1) goto LAB_14821ab3c;
      do {
        uVar6 = *param_6;
        param_6 = param_6 + 1;
        pFVar28->ParticleIndex = (int)uVar33;
        uVar32 = (int)uVar33 + 1;
        uVar33 = (ulonglong)uVar32;
        (pFVar28->field1_0x4).C =
             ~*(uint *)(param_4 + (longlong)(int)((uint)uVar6 * param_5) + 0x6c) & 0x1ffffff;
        pFVar28 = pFVar28 + 1;
      } while ((int)uVar32 < param_3);
    }
    AlgoImpl::
    IntroSortInternal<FParticleOrder,int,UE::Core::Private::TProjectionMemberData<unsigned_int_FParticleOrder::*>,TGreater<void>_>
              (param_9,param_3,(TProjectionMemberData<unsigned_int_FParticleOrder::*>)0x4,
               (TGreater<void>)local_res10[0]._0_1_);
    goto LAB_14821ab7d;
  }
  if (param_3 < 1) {
    if ((param_3 < 0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar25)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    pFVar28 = param_9;
    if (local_res18 == '\0') {
      pTVar1 = &(param_7->ViewMatrices).ViewOrigin;
      pdVar2 = &(param_7->ViewMatrices).ViewOrigin.field0_0x0._s_0.Y;
      pdVar31 = &(param_7->ViewMatrices).ViewOrigin.field0_0x0._s_0.Z;
      uVar34 = uVar33;
      if (3 < param_3) {
        puVar35 = param_6 + 2;
        pFVar28 = param_9 + 1;
        do {
          dVar40 = *pdVar2;
          dVar37 = (pTVar1->field0_0x0)._s_0.X;
          dVar4 = *pdVar31;
          dVar5 = *(double *)(param_4 + (longlong)(int)((uint)puVar35[-2] * param_5) + 0x28);
          dVar38 = *(double *)(param_4 + (longlong)(int)((uint)puVar35[-2] * param_5) + 0x18);
          dVar39 = *(double *)
                    ((longlong)(param_4 + (longlong)(int)((uint)puVar35[-2] * param_5) + 0x18) + 8);
          pFVar28[-1].ParticleIndex = (int)uVar33;
          dVar37 = dVar37 - dVar38;
          dVar40 = dVar40 - dVar39;
          pFVar28[-1].field1_0x4.Z =
               (float)(dVar40 * dVar40 + dVar37 * dVar37 + (dVar4 - dVar5) * (dVar4 - dVar5));
          dVar40 = *pdVar2;
          dVar37 = (pTVar1->field0_0x0)._s_0.X;
          dVar4 = *pdVar31;
          dVar5 = *(double *)(param_4 + (longlong)(int)((uint)puVar35[-1] * param_5) + 0x28);
          dVar38 = *(double *)(param_4 + (longlong)(int)((uint)puVar35[-1] * param_5) + 0x18);
          dVar39 = *(double *)
                    ((longlong)(param_4 + (longlong)(int)((uint)puVar35[-1] * param_5) + 0x18) + 8);
          pFVar28->ParticleIndex = iVar36 + -1;
          dVar37 = dVar37 - dVar38;
          dVar40 = dVar40 - dVar39;
          (pFVar28->field1_0x4).Z =
               (float)(dVar40 * dVar40 + dVar37 * dVar37 + (dVar4 - dVar5) * (dVar4 - dVar5));
          dVar40 = *pdVar2;
          dVar37 = (pTVar1->field0_0x0)._s_0.X;
          dVar4 = *pdVar31;
          dVar5 = *(double *)(param_4 + (longlong)(int)((uint)*puVar35 * param_5) + 0x28);
          dVar38 = *(double *)(param_4 + (longlong)(int)((uint)*puVar35 * param_5) + 0x18);
          dVar39 = *(double *)
                    ((longlong)(param_4 + (longlong)(int)((uint)*puVar35 * param_5) + 0x18) + 8);
          pFVar28[1].ParticleIndex = iVar36;
          dVar37 = dVar37 - dVar38;
          dVar40 = dVar40 - dVar39;
          pFVar28[1].field1_0x4.Z =
               (float)(dVar40 * dVar40 + dVar37 * dVar37 + (dVar4 - dVar5) * (dVar4 - dVar5));
          puVar3 = puVar35 + 1;
          puVar35 = puVar35 + 4;
          dVar40 = *pdVar2;
          dVar37 = *pdVar31;
          dVar5 = *(double *)
                   ((longlong)(param_4 + (longlong)(int)((uint)*puVar3 * param_5) + 0x18) + 8);
          dVar4 = *(double *)(param_4 + (longlong)(int)((uint)*puVar3 * param_5) + 0x28);
          dVar38 = (pTVar1->field0_0x0)._s_0.X -
                   *(double *)(param_4 + (longlong)(int)((uint)*puVar3 * param_5) + 0x18);
          pFVar28[2].ParticleIndex = iVar36 + 1;
          dVar40 = dVar40 - dVar5;
          pFVar28[2].field1_0x4.Z =
               (float)(dVar40 * dVar40 + dVar38 * dVar38 + (dVar37 - dVar4) * (dVar37 - dVar4));
          pFVar28 = pFVar28 + 4;
          uVar32 = (int)uVar33 + 4;
          uVar33 = (ulonglong)uVar32;
          iVar36 = iVar36 + 4;
        } while ((int)uVar32 < param_3 + -3);
        uVar34 = (ulonglong)((param_3 - 4U >> 2) + 1) << 2;
        param_3 = local_res20;
        if (local_res20 <= (int)uVar32) goto LAB_14821aa57;
      }
      pFVar28 = param_9 + uVar34;
      puVar35 = param_6 + uVar34;
      do {
        uVar6 = *puVar35;
        puVar35 = puVar35 + 1;
        dVar40 = *pdVar2;
        dVar37 = *pdVar31;
        dVar5 = *(double *)((longlong)(param_4 + (longlong)(int)((uint)uVar6 * param_5) + 0x18) + 8)
        ;
        dVar4 = *(double *)(param_4 + (longlong)(int)((uint)uVar6 * param_5) + 0x28);
        dVar38 = (pTVar1->field0_0x0)._s_0.X -
                 *(double *)(param_4 + (longlong)(int)((uint)uVar6 * param_5) + 0x18);
        pFVar28->ParticleIndex = (int)uVar33;
        uVar32 = (int)uVar33 + 1;
        uVar33 = (ulonglong)uVar32;
        dVar40 = dVar40 - dVar5;
        (pFVar28->field1_0x4).Z =
             (float)(dVar40 * dVar40 + dVar38 * dVar38 + (dVar37 - dVar4) * (dVar37 - dVar4));
        pFVar28 = pFVar28 + 1;
      } while ((int)uVar32 < param_3);
    }
    else {
      do {
        uVar6 = *param_6;
        param_6 = param_6 + 1;
        dVar4 = *(double *)(param_4 + (longlong)(int)((uint)uVar6 * param_5) + 0x18);
        dVar5 = *(double *)((longlong)(param_4 + (longlong)(int)((uint)uVar6 * param_5) + 0x18) + 8)
        ;
        dVar37 = *(double *)(param_4 + (longlong)(int)((uint)uVar6 * param_5) + 0x28);
        dVar38 = (param_7->ViewMatrices).ViewOrigin.field0_0x0._s_0.X -
                 (param_8->M[1][0] * dVar5 + param_8->M[0][0] * dVar4 + param_8->M[2][0] * dVar37 +
                 param_8->M[3][0] * dVar40);
        dVar39 = (param_7->ViewMatrices).ViewOrigin.field0_0x0._s_0.Y -
                 (param_8->M[1][1] * dVar5 + param_8->M[0][1] * dVar4 + param_8->M[2][1] * dVar37 +
                 param_8->M[3][1] * dVar40);
        dVar37 = (param_7->ViewMatrices).ViewOrigin.field0_0x0._s_0.Z -
                 (dVar5 * param_8->M[1][2] + dVar4 * param_8->M[0][2] + dVar37 * param_8->M[2][2] +
                 param_8->M[3][2] * dVar40);
        pFVar28->ParticleIndex = (int)uVar33;
        uVar32 = (int)uVar33 + 1;
        uVar33 = (ulonglong)uVar32;
        (pFVar28->field1_0x4).Z = (float)(dVar39 * dVar39 + dVar38 * dVar38 + dVar37 * dVar37);
        pFVar28 = pFVar28 + 1;
      } while ((int)uVar32 < param_3);
    }
  }
LAB_14821aa57:
  AlgoImpl::
  IntroSortInternal<FParticleOrder,int,UE::Core::Private::TProjectionMemberData<float_FParticleOrder::*>,TGreater<void>_>
            (param_9,param_3,(TProjectionMemberData<float_FParticleOrder::*>)0x4,
             (TGreater<void>)local_res10[0]._0_1_);
LAB_14821ab7d:
  if (bVar24) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar23) {
    FThreadStats::AddMessage(FVar30,CycleScopeEnd);
  }
  return;
}

