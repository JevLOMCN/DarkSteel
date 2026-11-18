// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FLightmapSceneShaderData @ 147ea58d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FLightmapSceneShaderData * __thiscall
FLightmapSceneShaderData::FLightmapSceneShaderData
          (FLightmapSceneShaderData *this,FLightCacheInterface *param_1,Type param_2)

{
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
            (param_2,(FPrecomputedLightingUniformParameters *)&local_108._s_0,param_1);
  *(undefined8 *)&(this->Data).Elements[0].field0_0x0 = local_108._0_8_;
  *(undefined8 *)((longlong)&(this->Data).Elements[0].field0_0x0 + 8) = local_108._8_8_;
  *(undefined8 *)&(this->Data).Elements[1].field0_0x0 = local_f8;
  *(undefined8 *)((longlong)&(this->Data).Elements[1].field0_0x0 + 8) = uStack_f0;
  *(undefined8 *)&(this->Data).Elements[2].field0_0x0 = local_e8;
  *(undefined8 *)((longlong)&(this->Data).Elements[2].field0_0x0 + 8) = uStack_e0;
  *(undefined8 *)&(this->Data).Elements[3].field0_0x0 = local_d8;
  *(undefined8 *)((longlong)&(this->Data).Elements[3].field0_0x0 + 8) = uStack_d0;
  *(undefined8 *)&(this->Data).Elements[4].field0_0x0 = local_c8;
  *(undefined8 *)((longlong)&(this->Data).Elements[4].field0_0x0 + 8) = uStack_c0;
  *(undefined8 *)&(this->Data).Elements[5].field0_0x0 = local_b8;
  *(undefined8 *)((longlong)&(this->Data).Elements[5].field0_0x0 + 8) = uStack_b0;
  *(undefined8 *)&(this->Data).Elements[6].field0_0x0 = local_a8;
  *(undefined8 *)((longlong)&(this->Data).Elements[6].field0_0x0 + 8) = uStack_a0;
  *(undefined8 *)&(this->Data).Elements[7].field0_0x0 = local_98;
  *(undefined8 *)((longlong)&(this->Data).Elements[7].field0_0x0 + 8) = uStack_90;
  *(undefined8 *)&(this->Data).Elements[8].field0_0x0 = local_88;
  *(undefined8 *)((longlong)&(this->Data).Elements[8].field0_0x0 + 8) = uStack_80;
  *(undefined8 *)&(this->Data).Elements[9].field0_0x0 = local_78;
  *(undefined8 *)((longlong)&(this->Data).Elements[9].field0_0x0 + 8) = uStack_70;
  *(undefined8 *)&(this->Data).Elements[10].field0_0x0 = local_68;
  *(undefined8 *)((longlong)&(this->Data).Elements[10].field0_0x0 + 8) = uStack_60;
  *(undefined8 *)&(this->Data).Elements[0xb].field0_0x0 = local_58;
  *(undefined8 *)((longlong)&(this->Data).Elements[0xb].field0_0x0 + 8) = uStack_50;
  *(undefined8 *)&(this->Data).Elements[0xc].field0_0x0 = local_48;
  *(undefined8 *)((longlong)&(this->Data).Elements[0xc].field0_0x0 + 8) = uStack_40;
  *(undefined8 *)&(this->Data).Elements[0xd].field0_0x0 = local_38;
  *(undefined8 *)((longlong)&(this->Data).Elements[0xd].field0_0x0 + 8) = uStack_30;
  *(undefined8 *)&(this->Data).Elements[0xe].field0_0x0 = local_28;
  *(undefined8 *)((longlong)&(this->Data).Elements[0xe].field0_0x0 + 8) = uStack_20;
  return this;
}

// Setup @ 147edd7a0

void __thiscall
FLightmapSceneShaderData::Setup
          (FLightmapSceneShaderData *this,FPrecomputedLightingUniformParameters *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&(param_1->StaticShadowMapMasks).field0_0x0 + 8);
  *(undefined8 *)&(this->Data).Elements[0].field0_0x0 =
       *(undefined8 *)&(param_1->StaticShadowMapMasks).field0_0x0;
  *(undefined8 *)((longlong)&(this->Data).Elements[0].field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->InvUniformPenumbraSizes).field0_0x0 + 8);
  *(undefined8 *)&(this->Data).Elements[1].field0_0x0 =
       *(undefined8 *)&(param_1->InvUniformPenumbraSizes).field0_0x0;
  *(undefined8 *)((longlong)&(this->Data).Elements[1].field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->LightMapCoordinateScaleBias).field0_0x0 + 8);
  *(undefined8 *)&(this->Data).Elements[2].field0_0x0 =
       *(undefined8 *)&(param_1->LightMapCoordinateScaleBias).field0_0x0;
  *(undefined8 *)((longlong)&(this->Data).Elements[2].field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->ShadowMapCoordinateScaleBias).field0_0x0 + 8);
  *(undefined8 *)&(this->Data).Elements[3].field0_0x0 =
       *(undefined8 *)&(param_1->ShadowMapCoordinateScaleBias).field0_0x0;
  *(undefined8 *)((longlong)&(this->Data).Elements[3].field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->LightMapScale).Elements[0].field0_0x0 + 8);
  *(undefined8 *)&(this->Data).Elements[4].field0_0x0 =
       *(undefined8 *)&(param_1->LightMapScale).Elements[0].field0_0x0;
  *(undefined8 *)((longlong)&(this->Data).Elements[4].field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->LightMapScale).Elements[1].field0_0x0 + 8);
  *(undefined8 *)&(this->Data).Elements[5].field0_0x0 =
       *(undefined8 *)&(param_1->LightMapScale).Elements[1].field0_0x0;
  *(undefined8 *)((longlong)&(this->Data).Elements[5].field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->LightMapAdd).Elements[0].field0_0x0 + 8);
  *(undefined8 *)&(this->Data).Elements[6].field0_0x0 =
       *(undefined8 *)&(param_1->LightMapAdd).Elements[0].field0_0x0;
  *(undefined8 *)((longlong)&(this->Data).Elements[6].field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->LightMapAdd).Elements[1].field0_0x0 + 8);
  *(undefined8 *)&(this->Data).Elements[7].field0_0x0 =
       *(undefined8 *)&(param_1->LightMapAdd).Elements[1].field0_0x0;
  *(undefined8 *)((longlong)&(this->Data).Elements[7].field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)&(param_1->LightmapVTPackedPageTableUniform).Elements[0].field_0x8;
  *(undefined8 *)&(this->Data).Elements[8].field0_0x0 =
       *(undefined8 *)(param_1->LightmapVTPackedPageTableUniform).Elements;
  *(undefined8 *)((longlong)&(this->Data).Elements[8].field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)&(param_1->LightmapVTPackedPageTableUniform).Elements[1].field_0x8;
  *(undefined8 *)&(this->Data).Elements[9].field0_0x0 =
       *(undefined8 *)((param_1->LightmapVTPackedPageTableUniform).Elements + 1);
  *(undefined8 *)((longlong)&(this->Data).Elements[9].field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)&(param_1->LightmapVTPackedUniform).Elements[0].field_0x8;
  *(undefined8 *)&(this->Data).Elements[10].field0_0x0 =
       *(undefined8 *)(param_1->LightmapVTPackedUniform).Elements;
  *(undefined8 *)((longlong)&(this->Data).Elements[10].field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)&(param_1->LightmapVTPackedUniform).Elements[1].field_0x8;
  *(undefined8 *)&(this->Data).Elements[0xb].field0_0x0 =
       *(undefined8 *)((param_1->LightmapVTPackedUniform).Elements + 1);
  *(undefined8 *)((longlong)&(this->Data).Elements[0xb].field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)&(param_1->LightmapVTPackedUniform).Elements[2].field_0x8;
  *(undefined8 *)&(this->Data).Elements[0xc].field0_0x0 =
       *(undefined8 *)((param_1->LightmapVTPackedUniform).Elements + 2);
  *(undefined8 *)((longlong)&(this->Data).Elements[0xc].field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)&(param_1->LightmapVTPackedUniform).Elements[3].field_0x8;
  *(undefined8 *)&(this->Data).Elements[0xd].field0_0x0 =
       *(undefined8 *)((param_1->LightmapVTPackedUniform).Elements + 3);
  *(undefined8 *)((longlong)&(this->Data).Elements[0xd].field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)&(param_1->LightmapVTPackedUniform).Elements[4].field_0x8;
  *(undefined8 *)&(this->Data).Elements[0xe].field0_0x0 =
       *(undefined8 *)((param_1->LightmapVTPackedUniform).Elements + 4);
  *(undefined8 *)((longlong)&(this->Data).Elements[0xe].field0_0x0 + 8) = uVar1;
  return;
}

