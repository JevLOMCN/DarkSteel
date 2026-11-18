// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// InitRHI @ 144b78ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FEmptyPrecomputedLightingUniformBuffer::InitRHI
          (FEmptyPrecomputedLightingUniformBuffer *this,FRHICommandListBase *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_128 [32];
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
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_128;
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
            (GMaxRHIFeatureLevel,(FPrecomputedLightingUniformParameters *)&local_108._s_0,
             (FLightCacheInterface *)0x0);
  puVar1 = *(undefined8 **)&this->field_0x30;
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = FMemory::Malloc(0xf0,0x10);
    *(undefined8 **)&this->field_0x30 = puVar1;
  }
  *puVar1 = local_108._0_8_;
  puVar1[1] = local_108._8_8_;
  puVar1[2] = local_f8;
  puVar1[3] = uStack_f0;
  puVar1[4] = local_e8;
  puVar1[5] = uStack_e0;
  puVar1[6] = local_d8;
  puVar1[7] = uStack_d0;
  puVar1[8] = local_c8;
  puVar1[9] = uStack_c0;
  puVar1[10] = local_b8;
  puVar1[0xb] = uStack_b0;
  puVar1[0xc] = local_a8;
  puVar1[0xd] = uStack_a0;
  puVar1[0xe] = local_98;
  puVar1[0xf] = uStack_90;
  puVar1[0x10] = local_88;
  puVar1[0x11] = uStack_80;
  puVar1[0x12] = local_78;
  puVar1[0x13] = uStack_70;
  puVar1[0x14] = local_68;
  puVar1[0x15] = uStack_60;
  puVar1[0x16] = local_58;
  puVar1[0x17] = uStack_50;
  puVar1[0x18] = local_48;
  puVar1[0x19] = uStack_40;
  puVar1[0x1a] = local_38;
  puVar1[0x1b] = uStack_30;
  puVar1[0x1c] = local_28;
  puVar1[0x1d] = uStack_20;
  TUniformBuffer<FPrecomputedLightingUniformParameters>::InitRHI
            ((TUniformBuffer<FPrecomputedLightingUniformParameters> *)this,param_1);
  return;
}

