// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// InitRHI @ 144b78ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FEmptyIndirectLightingCacheUniformBuffer::InitRHI
          (FEmptyIndirectLightingCacheUniformBuffer *this,FRHICommandListBase *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  float fStack_120;
  undefined8 local_118;
  float fStack_110;
  undefined8 local_108;
  float fStack_100;
  undefined8 local_f8;
  float fStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined8 local_c8 [5];
  undefined8 uStack_a0;
  undefined8 local_98 [5];
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  FRHITexture *local_48;
  FRHITexture *pFStack_40;
  FRHITexture *local_38;
  FRHISamplerState *pFStack_30;
  FRHISamplerState *local_28;
  FRHISamplerState *pFStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_c8[0] = ___xmm_3f800000000000000000000000000000;
  local_c8[1] = _UNK_150689648;
  local_c8[2] = ___xmm_3f800000000000000000000000000000;
  local_c8[3] = _UNK_150689648;
  local_c8[4] = ___xmm_3f800000000000000000000000000000;
  uStack_a0 = _UNK_150689648;
  local_98[0] = ___xmm_3f800000000000000000000000000000;
  local_98[1] = _UNK_150689648;
  local_98[2] = ___xmm_3f800000000000000000000000000000;
  local_98[3] = _UNK_150689648;
  local_98[4] = ___xmm_3f800000000000000000000000000000;
  uStack_70 = _UNK_150689648;
  local_118 = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
  local_f8 = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
  local_e8 = ___xmm_3f8000003f8000000000000000000000;
  uStack_e0 = _UNK_15076b1e8;
  local_128 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  fStack_120 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  fStack_110 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  local_108 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  fStack_100 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  lVar5 = 3;
  fStack_f0 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  puVar3 = local_98;
  local_d8 = 0x3f800000;
  do {
    puVar3[-6] = 0;
    puVar3[-5] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3 = puVar3 + 2;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (GBlackVolumeTexture->TextureRHI).Reference;
  pFStack_40 = (GBlackVolumeTexture->TextureRHI).Reference;
  local_38 = (GBlackVolumeTexture->TextureRHI).Reference;
  pFStack_30 = (GBlackVolumeTexture->SamplerStateRHI).Reference;
  local_28 = (GBlackVolumeTexture->SamplerStateRHI).Reference;
  pFStack_20 = (GBlackVolumeTexture->SamplerStateRHI).Reference;
  puVar3 = *(undefined8 **)&this->field_0x30;
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = FMemory::Malloc(0x110,0x10);
    *(undefined8 **)&this->field_0x30 = puVar3;
  }
  lVar5 = 2;
  puVar2 = &local_128;
  do {
    puVar6 = puVar2;
    puVar4 = puVar3;
    uVar1 = puVar6[1];
    *puVar4 = *puVar6;
    puVar4[1] = uVar1;
    uVar1 = puVar6[3];
    puVar4[2] = puVar6[2];
    puVar4[3] = uVar1;
    uVar1 = puVar6[5];
    puVar4[4] = puVar6[4];
    puVar4[5] = uVar1;
    uVar1 = puVar6[7];
    puVar4[6] = puVar6[6];
    puVar4[7] = uVar1;
    uVar1 = puVar6[9];
    puVar4[8] = puVar6[8];
    puVar4[9] = uVar1;
    uVar1 = puVar6[0xb];
    puVar4[10] = puVar6[10];
    puVar4[0xb] = uVar1;
    uVar1 = puVar6[0xd];
    puVar4[0xc] = puVar6[0xc];
    puVar4[0xd] = uVar1;
    uVar1 = puVar6[0xf];
    puVar4[0xe] = puVar6[0xe];
    puVar4[0xf] = uVar1;
    lVar5 = lVar5 + -1;
    puVar3 = puVar4 + 0x10;
    puVar2 = puVar6 + 0x10;
  } while (lVar5 != 0);
  uVar1 = puVar6[0x11];
  puVar4[0x10] = puVar6[0x10];
  puVar4[0x11] = uVar1;
  TUniformBuffer<FIndirectLightingCacheUniformParameters>::InitRHI
            ((TUniformBuffer<FIndirectLightingCacheUniformParameters> *)this,param_1);
  return;
}

