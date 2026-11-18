// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// CreatePrecomputedLightingUniformBuffer_RenderingThread @ 1484cef80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FLightCacheInterface::CreatePrecomputedLightingUniformBuffer_RenderingThread
          (FLightCacheInterface *this,Type param_1)

{
  FRHIUniformBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  FShaderParametersMetadata *pFVar4;
  TRefCountPtr<FRHIUniformBuffer> *pTVar5;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  TRefCountPtr<FRHIUniformBuffer> local_118 [2];
  TVector4<float>_u_0 local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  bVar3 = UseGPUScene((FStaticShaderPlatform)GMaxRHIShaderPlatform,
                      (FGenericStaticFeatureLevel)param_1);
  if (((!bVar3) || (this->bCanUsePrecomputedLightingParametersFromGPUScene == false)) &&
     ((this->LightMap != (FLightMap *)0x0 || (this->ShadowMap != (FShadowMap *)0x0)))) {
    local_108._0_8_ = ___xmm_3f800000000000000000000000000000;
    local_108._8_8_ = _UNK_150689648;
    local_f8 = ___xmm_3f800000000000000000000000000000;
    uStack_f0 = _UNK_150689648;
    local_e8 = ___xmm_3f800000000000000000000000000000;
    uStack_e0 = _UNK_150689648;
    local_d8 = ___xmm_3f800000000000000000000000000000;
    uStack_d0 = _UNK_150689648;
    local_c8 = ___xmm_3f800000000000000000000000000000;
    uStack_c0 = _UNK_150689648;
    local_b8 = ___xmm_3f800000000000000000000000000000;
    uStack_b0 = _UNK_150689648;
    local_a8 = ___xmm_3f800000000000000000000000000000;
    uStack_a0 = _UNK_150689648;
    local_98 = ___xmm_3f800000000000000000000000000000;
    uStack_90 = _UNK_150689648;
    GetPrecomputedLightingParameters
              (param_1,(FPrecomputedLightingUniformParameters *)&local_108._s_0,this);
    pTVar5 = &this->PrecomputedLightingUniformBuffer;
    if (pTVar5->Reference == (FRHIUniformBuffer *)0x0) {
      pFVar4 = FPrecomputedLightingUniformParameters::GetStructMetadata();
      if (((pFVar4->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x17c,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_128 = 1;
      RHICreateUniformBuffer
                (local_118,(FRHIUniformBufferLayout *)&local_108._s_0,
                 (EUniformBufferUsage)(pFVar4->Layout).Reference,2);
      if (pTVar5 != local_118) {
        pFVar1 = pTVar5->Reference;
        pTVar5->Reference = local_118[0].Reference;
        local_118[0].Reference = (FRHIUniformBuffer *)0x0;
        if (pFVar1 == (FRHIUniformBuffer *)0x0) {
          return;
        }
        FRHIResource::Release((FRHIResource *)pFVar1);
      }
      if (local_118[0].Reference != (FRHIUniformBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)local_118[0].Reference);
      }
    }
    else {
      bVar3 = IsInRenderingThread();
      if ((!bVar3) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInRenderingThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0x1594,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = pTVar5->Reference;
      if (((GRHICommandList.CommandListImmediate._106_1_ != '\0') &&
          ((GRHICommandList.CommandListImmediate._106_1_ &
           GRHICommandList.CommandListImmediate._106_1_ - 1) != 0)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0x2a5,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (GRHICommandList.CommandListImmediate._106_1_ == '\0') {
        FRHICommandListBase::SwitchPipeline
                  ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,Graphics);
        (**(code **)(GDynamicRHI->_padding_ + 0x130))(GDynamicRHI,0x154be5ed0,pFVar1,&local_108);
        FRHICommandListBase::SwitchPipeline
                  ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,None);
      }
      else {
        (**(code **)(GDynamicRHI->_padding_ + 0x130))(GDynamicRHI,0x154be5ed0,pFVar1,&local_108);
      }
    }
  }
  return;
}

// GetLightMapInteraction @ 1484d8a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FLightMapInteraction * __thiscall
FLightCacheInterface::GetLightMapInteraction
          (FLightCacheInterface *this,FLightMapInteraction *__return_storage_ptr__,Type param_1)

{
  FLightMap *pFVar1;
  undefined8 uVar2;
  ULightMapTexture2D *pUVar3;
  longlong lVar4;
  double dVar5;
  undefined8 *puVar6;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_128;
  undefined4 local_120;
  undefined1 local_f8 [224];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  if (this->bGlobalVolumeLightmap == false) {
    pFVar1 = this->LightMap;
    if (pFVar1 == (FLightMap *)0x0) {
      puVar6 = &local_1d8;
      local_1d8 = ___xmm_3f800000000000000000000000000000;
      uStack_1d0 = _UNK_150689648;
      local_1c8 = ___xmm_3f800000000000000000000000000000;
      uStack_1c0 = _UNK_150689648;
      local_1b8 = ___xmm_3f800000000000000000000000000000;
      uStack_1b0 = _UNK_150689648;
      local_1a8 = ___xmm_3f800000000000000000000000000000;
      uStack_1a0 = _UNK_150689648;
      local_198 = 0;
      uStack_190 = 0;
      local_188 = 0;
      local_178 = ___xmm_3f800000000000000000000000000000;
      uStack_170 = _UNK_150689648;
      local_168 = ___xmm_3f800000000000000000000000000000;
      uStack_160 = _UNK_150689648;
      local_158 = ___xmm_3f800000000000000000000000000000;
      uStack_150 = _UNK_150689648;
      local_148 = ___xmm_3f800000000000000000000000000000;
      uStack_140 = _UNK_150689648;
      local_138 = 0;
      local_128 = 0;
      local_120 = 0;
    }
    else {
      puVar6 = (undefined8 *)(**(code **)(pFVar1->_padding_ + 0x18))(pFVar1,local_f8);
    }
    uVar2 = puVar6[1];
    *(undefined8 *)&__return_storage_ptr__->HighQualityCoefficientScales[0].field0_0x0 = *puVar6;
    *(undefined8 *)
     ((longlong)&__return_storage_ptr__->HighQualityCoefficientScales[0].field0_0x0 + 8) = uVar2;
    uVar2 = puVar6[3];
    *(undefined8 *)&__return_storage_ptr__->HighQualityCoefficientScales[1].field0_0x0 = puVar6[2];
    *(undefined8 *)
     ((longlong)&__return_storage_ptr__->HighQualityCoefficientScales[1].field0_0x0 + 8) = uVar2;
    uVar2 = puVar6[5];
    *(undefined8 *)&__return_storage_ptr__->HighQualityCoefficientAdds[0].field0_0x0 = puVar6[4];
    *(undefined8 *)((longlong)&__return_storage_ptr__->HighQualityCoefficientAdds[0].field0_0x0 + 8)
         = uVar2;
    uVar2 = puVar6[7];
    *(undefined8 *)&__return_storage_ptr__->HighQualityCoefficientAdds[1].field0_0x0 = puVar6[6];
    *(undefined8 *)((longlong)&__return_storage_ptr__->HighQualityCoefficientAdds[1].field0_0x0 + 8)
         = uVar2;
    pUVar3 = (ULightMapTexture2D *)puVar6[9];
    __return_storage_ptr__->HighQualityTexture = (ULightMapTexture2D *)puVar6[8];
    __return_storage_ptr__->SkyOcclusionTexture = pUVar3;
    lVar4 = puVar6[0xb];
    __return_storage_ptr__->AOMaterialMaskTexture = (ULightMapTexture2D *)puVar6[10];
    __return_storage_ptr__->_padding_ = lVar4;
    uVar2 = puVar6[0xd];
    *(undefined8 *)&__return_storage_ptr__->LowQualityCoefficientScales[0].field0_0x0 = puVar6[0xc];
    *(undefined8 *)
     ((longlong)&__return_storage_ptr__->LowQualityCoefficientScales[0].field0_0x0 + 8) = uVar2;
    uVar2 = puVar6[0xf];
    *(undefined8 *)&__return_storage_ptr__->LowQualityCoefficientScales[1].field0_0x0 = puVar6[0xe];
    *(undefined8 *)
     ((longlong)&__return_storage_ptr__->LowQualityCoefficientScales[1].field0_0x0 + 8) = uVar2;
    uVar2 = puVar6[0x11];
    *(undefined8 *)&__return_storage_ptr__->LowQualityCoefficientAdds[0].field0_0x0 = puVar6[0x10];
    *(undefined8 *)((longlong)&__return_storage_ptr__->LowQualityCoefficientAdds[0].field0_0x0 + 8)
         = uVar2;
    uVar2 = puVar6[0x13];
    *(undefined8 *)&__return_storage_ptr__->LowQualityCoefficientAdds[1].field0_0x0 = puVar6[0x12];
    *(undefined8 *)((longlong)&__return_storage_ptr__->LowQualityCoefficientAdds[1].field0_0x0 + 8)
         = uVar2;
    uVar2 = puVar6[0x15];
    __return_storage_ptr__->LowQualityTexture = (ULightMapTexture2D *)puVar6[0x14];
    __return_storage_ptr__->bAllowHighQualityLightMaps = (bool)(char)uVar2;
    *(int3 *)&__return_storage_ptr__->field_0xa9 = (int3)((ulonglong)uVar2 >> 8);
    __return_storage_ptr__->NumLightmapCoefficients = (int)((ulonglong)uVar2 >> 0x20);
    uVar2 = puVar6[0x17];
    __return_storage_ptr__->VirtualTexture = (ULightMapVirtualTexture2D *)puVar6[0x16];
    *(undefined8 *)&__return_storage_ptr__->Type = uVar2;
    dVar5 = (double)puVar6[0x19];
    (__return_storage_ptr__->CoordinateScale).field0_0x0._s_0.X = (double)puVar6[0x18];
    (__return_storage_ptr__->CoordinateScale).field0_0x0._s_0.Y = dVar5;
    dVar5 = (double)puVar6[0x1b];
    (__return_storage_ptr__->CoordinateBias).field0_0x0._s_0.X = (double)puVar6[0x1a];
    (__return_storage_ptr__->CoordinateBias).field0_0x0._s_0.Y = dVar5;
  }
  else {
    *(undefined8 *)
     ((longlong)&__return_storage_ptr__->HighQualityCoefficientScales[0].field0_0x0 + 0xc) =
         0x3f800000;
    *(undefined8 *)&__return_storage_ptr__->HighQualityCoefficientScales[0].field0_0x0 = 0;
    __return_storage_ptr__->HighQualityCoefficientScales[0].field0_0x0._s_0.Z = 0.0;
    *(undefined8 *)
     ((longlong)&__return_storage_ptr__->HighQualityCoefficientScales[1].field0_0x0 + 4) = 0;
    *(undefined8 *)
     ((longlong)&__return_storage_ptr__->HighQualityCoefficientScales[1].field0_0x0 + 0xc) =
         0x3f800000;
    *(undefined8 *)((longlong)&__return_storage_ptr__->HighQualityCoefficientAdds[0].field0_0x0 + 4)
         = 0;
    *(undefined8 *)
     ((longlong)&__return_storage_ptr__->HighQualityCoefficientAdds[0].field0_0x0 + 0xc) =
         0x3f800000;
    *(undefined8 *)((longlong)&__return_storage_ptr__->HighQualityCoefficientAdds[1].field0_0x0 + 4)
         = 0;
    __return_storage_ptr__->HighQualityCoefficientAdds[1].field0_0x0._s_0.W = 1.0;
    __return_storage_ptr__->HighQualityTexture = (ULightMapTexture2D *)0x0;
    __return_storage_ptr__->SkyOcclusionTexture = (ULightMapTexture2D *)0x0;
    __return_storage_ptr__->AOMaterialMaskTexture = (ULightMapTexture2D *)0x0;
    *(undefined8 *)&__return_storage_ptr__->LowQualityCoefficientScales[0].field0_0x0 = 0;
    __return_storage_ptr__->LowQualityCoefficientScales[0].field0_0x0._s_0.Z = 0.0;
    *(undefined8 *)
     ((longlong)&__return_storage_ptr__->LowQualityCoefficientScales[0].field0_0x0 + 0xc) =
         0x3f800000;
    *(undefined8 *)
     ((longlong)&__return_storage_ptr__->LowQualityCoefficientScales[1].field0_0x0 + 4) = 0;
    *(undefined8 *)
     ((longlong)&__return_storage_ptr__->LowQualityCoefficientScales[1].field0_0x0 + 0xc) =
         0x3f800000;
    *(undefined8 *)((longlong)&__return_storage_ptr__->LowQualityCoefficientAdds[0].field0_0x0 + 4)
         = 0;
    *(undefined8 *)
     ((longlong)&__return_storage_ptr__->LowQualityCoefficientAdds[0].field0_0x0 + 0xc) = 0x3f800000
    ;
    *(undefined8 *)((longlong)&__return_storage_ptr__->LowQualityCoefficientAdds[1].field0_0x0 + 4)
         = 0;
    __return_storage_ptr__->LowQualityCoefficientAdds[1].field0_0x0._s_0.W = 1.0;
    __return_storage_ptr__->LowQualityTexture = (ULightMapTexture2D *)0x0;
    __return_storage_ptr__->VirtualTexture = (ULightMapVirtualTexture2D *)0x0;
    __return_storage_ptr__->Type = LMIT_GlobalVolume;
  }
  return __return_storage_ptr__;
}

// GetShadowMapInteraction @ 1484db400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FShadowMapInteraction * __thiscall
FLightCacheInterface::GetShadowMapInteraction
          (FLightCacheInterface *this,FShadowMapInteraction *__return_storage_ptr__,Type param_1)

{
  FLightMap *pFVar1;
  FShadowMap *pFVar2;
  undefined4 *puVar3;
  EShadowMapInteractionType EVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (this->bGlobalVolumeLightmap != false) {
    *(undefined8 *)&(__return_storage_ptr__->InvUniformPenumbraSize).field0_0x0 = 0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->InvUniformPenumbraSize).field0_0x0 + 8) = 0;
    __return_storage_ptr__->ShadowTexture = (UShadowMapTexture2D *)0x0;
    __return_storage_ptr__->VirtualTexture = (ULightMapVirtualTexture2D *)0x0;
    __return_storage_ptr__->bChannelValid[0] = false;
    __return_storage_ptr__->bChannelValid[1] = false;
    __return_storage_ptr__->bChannelValid[2] = false;
    __return_storage_ptr__->bChannelValid[3] = false;
    __return_storage_ptr__->Type = SMIT_GlobalVolume;
    return __return_storage_ptr__;
  }
  pFVar1 = this->LightMap;
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  local_28 = 0;
  fVar10 = 0.0;
  fVar11 = 0.0;
  fVar12 = 0.0;
  fVar13 = 0.0;
  local_48 = 0;
  if (pFVar1 == (FLightMap *)0x0) {
    EVar4 = SMIT_None;
    uVar5 = 0;
  }
  else {
    puVar3 = (undefined4 *)(**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,local_78);
    EVar4 = puVar3[0x14];
    uStack_24 = puVar3[0x15];
    uStack_20 = puVar3[0x16];
    uStack_1c = puVar3[0x17];
    uVar6 = *puVar3;
    uVar7 = puVar3[1];
    uVar8 = puVar3[2];
    uVar9 = puVar3[3];
    local_68 = puVar3[4];
    uStack_64 = puVar3[5];
    uStack_60 = puVar3[6];
    uStack_5c = puVar3[7];
    local_58 = puVar3[8];
    uStack_54 = puVar3[9];
    uStack_50 = puVar3[10];
    uStack_4c = puVar3[0xb];
    uVar5 = puVar3[0xc];
    uStack_44 = puVar3[0xd];
    uStack_40 = puVar3[0xe];
    uStack_3c = puVar3[0xf];
    fVar10 = (float)puVar3[0x10];
    fVar11 = (float)puVar3[0x11];
    fVar12 = (float)puVar3[0x12];
    fVar13 = (float)puVar3[0x13];
    if (EVar4 != SMIT_None) goto LAB_1484db4cc;
  }
  pFVar2 = this->ShadowMap;
  if (pFVar2 != (FShadowMap *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2,local_78);
    uVar6 = *puVar3;
    uVar7 = puVar3[1];
    uVar8 = puVar3[2];
    uVar9 = puVar3[3];
    local_68 = puVar3[4];
    uStack_64 = puVar3[5];
    uStack_60 = puVar3[6];
    uStack_5c = puVar3[7];
    local_58 = puVar3[8];
    uStack_54 = puVar3[9];
    uStack_50 = puVar3[10];
    uStack_4c = puVar3[0xb];
    uVar5 = puVar3[0xc];
    uStack_44 = puVar3[0xd];
    uStack_40 = puVar3[0xe];
    uStack_3c = puVar3[0xf];
    fVar10 = (float)puVar3[0x10];
    fVar11 = (float)puVar3[0x11];
    fVar12 = (float)puVar3[0x12];
    fVar13 = (float)puVar3[0x13];
    EVar4 = puVar3[0x14];
    uStack_24 = puVar3[0x15];
    uStack_20 = puVar3[0x16];
    uStack_1c = puVar3[0x17];
  }
LAB_1484db4cc:
  *(undefined4 *)&__return_storage_ptr__->ShadowTexture = uVar6;
  *(undefined4 *)((longlong)&__return_storage_ptr__->ShadowTexture + 4) = uVar7;
  *(undefined4 *)&__return_storage_ptr__->VirtualTexture = uVar8;
  *(undefined4 *)((longlong)&__return_storage_ptr__->VirtualTexture + 4) = uVar9;
  *(undefined4 *)&(__return_storage_ptr__->CoordinateScale).field0_0x0 = local_68;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->CoordinateScale).field0_0x0 + 4) = uStack_64;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->CoordinateScale).field0_0x0 + 8) = uStack_60;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->CoordinateScale).field0_0x0 + 0xc) = uStack_5c
  ;
  *(undefined4 *)&(__return_storage_ptr__->CoordinateBias).field0_0x0 = local_58;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->CoordinateBias).field0_0x0 + 4) = uStack_54;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->CoordinateBias).field0_0x0 + 8) = uStack_50;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->CoordinateBias).field0_0x0 + 0xc) = uStack_4c;
  *(undefined4 *)__return_storage_ptr__->bChannelValid = uVar5;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = uStack_44;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = uStack_40;
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = uStack_3c;
  (__return_storage_ptr__->InvUniformPenumbraSize).field0_0x0._s_0.X = fVar10;
  (__return_storage_ptr__->InvUniformPenumbraSize).field0_0x0._s_0.Y = fVar11;
  (__return_storage_ptr__->InvUniformPenumbraSize).field0_0x0._s_0.Z = fVar12;
  (__return_storage_ptr__->InvUniformPenumbraSize).field0_0x0._s_0.W = fVar13;
  __return_storage_ptr__->Type = EVar4;
  *(undefined4 *)&__return_storage_ptr__->field_0x54 = uStack_24;
  *(undefined4 *)&__return_storage_ptr__->field_0x58 = uStack_20;
  *(undefined4 *)&__return_storage_ptr__->field_0x5c = uStack_1c;
  return __return_storage_ptr__;
}

// GetStaticInteraction @ 1484db850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

ELightInteractionType __thiscall
FLightCacheInterface::GetStaticInteraction
          (FLightCacheInterface *this,FLightSceneProxy *param_1,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 *puVar1;
  FLightMap *pFVar2;
  FShadowMap *pFVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  
  if (this->bGlobalVolumeLightmap != false) {
    if (param_1->bStaticLighting != '\0') {
      return LIT_CachedLightMap;
    }
    return LIT_MAX - (param_1->bStaticShadowing != '\0');
  }
  if (param_1->bStaticShadowing != '\0') {
    uVar4 = (param_1->LightGuid).A;
    uVar5 = (param_1->LightGuid).B;
    uVar6 = (param_1->LightGuid).C;
    uVar7 = (param_1->LightGuid).D;
    pFVar8 = (param_2->AllocatorInstance).Data;
    pFVar9 = pFVar8 + (longlong)param_2->ArrayNum * 0x10;
    for (; pFVar8 != pFVar9; pFVar8 = pFVar8 + 0x10) {
      if (((uVar7 == *(uint *)(pFVar8 + 0xc) && uVar6 == *(uint *)(pFVar8 + 8)) &&
          uVar5 == *(uint *)(pFVar8 + 4)) && uVar4 == *(uint *)pFVar8) {
        return LIT_CachedIrrelevant;
      }
    }
    pFVar2 = this->LightMap;
    if (pFVar2 != (FLightMap *)0x0) {
      pFVar8 = (pFVar2->LightGuids).AllocatorInstance.Data;
      for (pFVar9 = pFVar8; pFVar9 != pFVar8 + (longlong)(pFVar2->LightGuids).ArrayNum * 0x10;
          pFVar9 = pFVar9 + 0x10) {
        if (((uVar7 == *(uint *)(pFVar9 + 0xc) && uVar6 == *(uint *)(pFVar9 + 8)) &&
            uVar5 == *(uint *)(pFVar9 + 4)) && uVar4 == *(uint *)pFVar9) {
          if ((int)((longlong)pFVar9 - (longlong)pFVar8 >> 4) != -1) {
            return LIT_CachedLightMap;
          }
          break;
        }
      }
    }
    pFVar3 = this->ShadowMap;
    if (pFVar3 != (FShadowMap *)0x0) {
      pFVar8 = (pFVar3->LightGuids).AllocatorInstance.Data;
      for (pFVar9 = pFVar8; pFVar9 != pFVar8 + (longlong)(pFVar3->LightGuids).ArrayNum * 0x10;
          pFVar9 = pFVar9 + 0x10) {
        if (((uVar7 == *(uint *)(pFVar9 + 0xc) && uVar6 == *(uint *)(pFVar9 + 8)) &&
            uVar5 == *(uint *)(pFVar9 + 4)) && uVar4 == *(uint *)pFVar9) {
          if ((int)((longlong)pFVar9 - (longlong)pFVar8 >> 4) == -1) {
            return LIT_MAX;
          }
          return LIT_CachedSignedDistanceFieldShadowMap2D;
        }
      }
    }
  }
  return LIT_MAX;
}

// GetVirtualTextureLightmapProducer @ 1484dbe90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FLightCacheInterface::GetVirtualTextureLightmapProducer
          (FLightCacheInterface *this,Type param_1,FVirtualTextureProducerHandle *param_2)

{
  bool bVar1;
  FTextureResource *pFVar2;
  undefined1 auStack_118 [32];
  FLightMapInteraction local_f8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  GetLightMapInteraction(this,&local_f8,param_1);
  if (((local_f8.Type == LMIT_Texture) &&
      (local_f8.VirtualTexture != (ULightMapVirtualTexture2D *)0x0)) &&
     ((local_f8.VirtualTexture)->bPreviewLightmap == false)) {
    pFVar2 = UTexture::GetResource((UTexture *)local_f8.VirtualTexture);
    bVar1 = true;
    *param_2 = *(FVirtualTextureProducerHandle *)&pFVar2[1]._padding_;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

