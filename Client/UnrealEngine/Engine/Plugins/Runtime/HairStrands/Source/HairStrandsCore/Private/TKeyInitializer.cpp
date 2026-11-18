// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 2

// operator<unsigned___int64,FNDIHairStrandsData>_TTuple<unsigned___int64,FNDIHairStrandsData> @ 14e0cb700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TTuple<unsigned___int64,FNDIHairStrandsData> * __thiscall
TKeyInitializer<unsigned___int64_const_&>::
operator<unsigned___int64,FNDIHairStrandsData>_TTuple<unsigned___int64,FNDIHairStrandsData>
          (TKeyInitializer<unsigned___int64_const_&> *this,
          TTuple<unsigned___int64,FNDIHairStrandsData> *__return_storage_ptr__)

{
  double dVar1;
  double *pdVar2;
  FNDIHairStrandsData *pFVar3;
  double *pdVar4;
  FNDIHairStrandsData *pFVar5;
  longlong lVar6;
  undefined1 auStack_468 [32];
  FNDIHairStrandsData local_448;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_468;
  pFVar3 = FNDIHairStrandsData::FNDIHairStrandsData(&local_448);
  lVar6 = 8;
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  pdVar2 = (double *)&__return_storage_ptr__->field_0x10;
  do {
    pFVar5 = pFVar3;
    pdVar4 = pdVar2;
    dVar1 = (pFVar5->WorldTransform).Rotation.XY.m128d_f64[1];
    pFVar3 = (FNDIHairStrandsData *)&(pFVar5->BoneTransform).Translation;
    *pdVar4 = (pFVar5->WorldTransform).Rotation.XY.m128d_f64[0];
    pdVar4[1] = dVar1;
    dVar1 = (pFVar5->WorldTransform).Rotation.ZW.m128d_f64[1];
    pdVar4[2] = (pFVar5->WorldTransform).Rotation.ZW.m128d_f64[0];
    pdVar4[3] = dVar1;
    dVar1 = (pFVar5->WorldTransform).Translation.XY.m128d_f64[1];
    pdVar4[4] = (pFVar5->WorldTransform).Translation.XY.m128d_f64[0];
    pdVar4[5] = dVar1;
    dVar1 = (pFVar5->WorldTransform).Translation.ZW.m128d_f64[1];
    pdVar4[6] = (pFVar5->WorldTransform).Translation.ZW.m128d_f64[0];
    pdVar4[7] = dVar1;
    dVar1 = (pFVar5->WorldTransform).Scale3D.XY.m128d_f64[1];
    pdVar4[8] = (pFVar5->WorldTransform).Scale3D.XY.m128d_f64[0];
    pdVar4[9] = dVar1;
    dVar1 = (pFVar5->WorldTransform).Scale3D.ZW.m128d_f64[1];
    pdVar4[10] = (pFVar5->WorldTransform).Scale3D.ZW.m128d_f64[0];
    pdVar4[0xb] = dVar1;
    dVar1 = (pFVar5->BoneTransform).Rotation.XY.m128d_f64[1];
    pdVar4[0xc] = (pFVar5->BoneTransform).Rotation.XY.m128d_f64[0];
    pdVar4[0xd] = dVar1;
    dVar1 = (pFVar5->BoneTransform).Rotation.ZW.m128d_f64[1];
    pdVar4[0xe] = (pFVar5->BoneTransform).Rotation.ZW.m128d_f64[0];
    pdVar4[0xf] = dVar1;
    lVar6 = lVar6 + -1;
    pdVar2 = pdVar4 + 0x10;
  } while (lVar6 != 0);
  dVar1 = (pFVar5->BoneTransform).Translation.XY.m128d_f64[1];
  pdVar4[0x10] = (((VectorRegister4Double *)pFVar3)->XY).m128d_f64[0];
  pdVar4[0x11] = dVar1;
  dVar1 = (pFVar5->BoneTransform).Translation.ZW.m128d_f64[1];
  pdVar4[0x12] = (pFVar5->BoneTransform).Translation.ZW.m128d_f64[0];
  pdVar4[0x13] = dVar1;
  dVar1 = (pFVar5->BoneTransform).Scale3D.XY.m128d_f64[1];
  pdVar4[0x14] = (pFVar5->BoneTransform).Scale3D.XY.m128d_f64[0];
  pdVar4[0x15] = dVar1;
  return __return_storage_ptr__;
}

// operator<unsigned___int64,FNDIVelocityGridData>_TTuple<unsigned___int64,FNDIVelocityGridData> @ 14e0cb7e0

TTuple<unsigned___int64,FNDIVelocityGridData> * __thiscall
TKeyInitializer<unsigned___int64_const_&>::
operator<unsigned___int64,FNDIVelocityGridData>_TTuple<unsigned___int64,FNDIVelocityGridData>
          (TKeyInitializer<unsigned___int64_const_&> *this,
          TTuple<unsigned___int64,FNDIVelocityGridData> *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 local_138 [38];
  
  memset(local_138,0,0x130);
  lVar9 = 2;
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  puVar5 = local_138;
  puVar6 = (undefined8 *)&__return_storage_ptr__->field_0x10;
  do {
    puVar8 = puVar6;
    puVar7 = puVar5;
    uVar1 = puVar7[1];
    uVar2 = puVar7[2];
    uVar3 = puVar7[3];
    *puVar8 = *puVar7;
    puVar8[1] = uVar1;
    uVar1 = puVar7[4];
    uVar4 = puVar7[5];
    puVar8[2] = uVar2;
    puVar8[3] = uVar3;
    uVar2 = puVar7[6];
    uVar3 = puVar7[7];
    puVar8[4] = uVar1;
    puVar8[5] = uVar4;
    uVar1 = puVar7[8];
    uVar4 = puVar7[9];
    puVar8[6] = uVar2;
    puVar8[7] = uVar3;
    uVar2 = puVar7[10];
    uVar3 = puVar7[0xb];
    puVar8[8] = uVar1;
    puVar8[9] = uVar4;
    uVar1 = puVar7[0xc];
    uVar4 = puVar7[0xd];
    puVar8[10] = uVar2;
    puVar8[0xb] = uVar3;
    uVar2 = puVar7[0xe];
    uVar3 = puVar7[0xf];
    puVar8[0xc] = uVar1;
    puVar8[0xd] = uVar4;
    puVar8[0xe] = uVar2;
    puVar8[0xf] = uVar3;
    lVar9 = lVar9 + -1;
    puVar5 = puVar7 + 0x10;
    puVar6 = puVar8 + 0x10;
  } while (lVar9 != 0);
  uVar1 = puVar7[0x11];
  uVar2 = puVar7[0x12];
  uVar3 = puVar7[0x13];
  puVar8[0x10] = puVar7[0x10];
  puVar8[0x11] = uVar1;
  uVar1 = puVar7[0x14];
  uVar4 = puVar7[0x15];
  puVar8[0x12] = uVar2;
  puVar8[0x13] = uVar3;
  puVar8[0x14] = uVar1;
  puVar8[0x15] = uVar4;
  return __return_storage_ptr__;
}

