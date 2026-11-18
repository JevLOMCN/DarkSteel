// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// FBatchedPrimitiveShaderData @ 1448ec990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FBatchedPrimitiveShaderData * __thiscall
FBatchedPrimitiveShaderData::FBatchedPrimitiveShaderData
          (FBatchedPrimitiveShaderData *this,FPrimitiveSceneProxy *param_1)

{
  FPrimitiveUniformShaderParameters *pFVar1;
  float *pfVar2;
  longlong lVar3;
  undefined1 auStack_498 [32];
  undefined1 local_478 [664];
  float local_1e0 [114];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_498;
  memset((FPrimitiveUniformShaderParametersBuilder *)local_478,0,0x460);
  pfVar2 = &(((FPrimitiveUniformShaderParametersBuilder *)local_478)->Parameters).
            CustomPrimitiveData.Elements[0].field0_0x0._s_0.Z;
  local_478._368_8_ = ___xmm_3f800000000000000000000000000000;
  local_478._376_8_ = _UNK_150689648;
  lVar3 = 9;
  local_478._448_8_ = ___xmm_3f800000000000000000000000000000;
  local_478._456_8_ = _UNK_150689648;
  do {
    ((TVector4<float>_u_0_s_0 *)(pfVar2 + -2))->X = 0.0;
    ((TVector4<float>_u_0_s_0 *)(pfVar2 + -2))->Y = 0.0;
    *pfVar2 = 0.0;
    pfVar2[1] = 1.0;
    pfVar2 = pfVar2 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  FPrimitiveSceneProxy::BuildUniformShaderParameters
            (param_1,(FPrimitiveUniformShaderParametersBuilder *)local_478);
  pFVar1 = FPrimitiveUniformShaderParametersBuilder::Build
                     ((FPrimitiveUniformShaderParametersBuilder *)local_478);
  Setup(this,pFVar1);
  return this;
}

// Emplace @ 14490e730

void __cdecl
FBatchedPrimitiveShaderData::Emplace
          (FBatchedPrimitiveShaderData *param_1,FPrimitiveUniformShaderParameters *param_2)

{
  TVector4<float> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  TVector4<float> *pTVar14;
  int iVar15;
  ulonglong uVar16;
  TStaticArray<UE::Math::TVector4<float>,9,4294967295> *pTVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  
  lVar21 = 0;
  if (FReadOnlyCVARCache::bAllowStaticLighting) {
    (param_1->Data).Elements[0].field0_0x0._s_0.X = 1.0;
    lVar21 = 3;
    *(undefined8 *)((longlong)&(param_1->Data).Elements[0].field0_0x0 + 4) = 0x3f800000;
    (param_1->Data).Elements[0].field0_0x0._s_0.W = 0.0;
    (param_1->Data).Elements[1].field0_0x0._s_0.X = 1.0;
    *(undefined8 *)((longlong)&(param_1->Data).Elements[1].field0_0x0 + 4) = 0x3f800000;
    *(undefined8 *)((longlong)&(param_1->Data).Elements[1].field0_0x0 + 0xc) = 0;
    *(undefined8 *)((longlong)&(param_1->Data).Elements[2].field0_0x0 + 4) = 0;
    (param_1->Data).Elements[2].field0_0x0._s_0.W = 0.0;
  }
  iVar18 = (int)lVar21;
  (param_1->Data).Elements[lVar21].field0_0x0._s_0.X = (param_2->PositionHigh).field0_0x0._s_0.X;
  (param_1->Data).Elements[lVar21].field0_0x0._s_0.Y = (param_2->PositionHigh).field0_0x0._s_0.Y;
  (param_1->Data).Elements[lVar21].field0_0x0._s_0.Z = (param_2->PositionHigh).field0_0x0._s_0.Z;
  (param_1->Data).Elements[lVar21].field0_0x0._s_0.W = (float)param_2->Flags;
  fVar2 = (param_2->LocalToRelativeWorld).M[1][0];
  fVar3 = (param_2->LocalToRelativeWorld).M[2][0];
  fVar4 = (param_2->LocalToRelativeWorld).M[0][1];
  fVar5 = (param_2->LocalToRelativeWorld).M[3][0];
  fVar6 = (param_2->LocalToRelativeWorld).M[1][1];
  fVar7 = (param_2->LocalToRelativeWorld).M[2][1];
  fVar8 = (param_2->LocalToRelativeWorld).M[3][1];
  fVar9 = (param_2->LocalToRelativeWorld).M[0][2];
  fVar10 = (param_2->LocalToRelativeWorld).M[1][2];
  fVar11 = (param_2->LocalToRelativeWorld).M[2][2];
  fVar12 = (param_2->LocalToRelativeWorld).M[3][2];
  pTVar1 = (param_1->Data).Elements + (iVar18 + 1);
  (pTVar1->field0_0x0)._s_0.X = (param_2->LocalToRelativeWorld).M[0][0];
  (pTVar1->field0_0x0)._s_0.Y = fVar2;
  (pTVar1->field0_0x0)._s_0.Z = fVar3;
  (pTVar1->field0_0x0)._s_0.W = fVar5;
  pTVar1 = (param_1->Data).Elements + (iVar18 + 2);
  (pTVar1->field0_0x0)._s_0.X = fVar4;
  (pTVar1->field0_0x0)._s_0.Y = fVar6;
  (pTVar1->field0_0x0)._s_0.Z = fVar7;
  (pTVar1->field0_0x0)._s_0.W = fVar8;
  uVar19 = iVar18 + 4;
  pTVar1 = (param_1->Data).Elements + (iVar18 + 3);
  (pTVar1->field0_0x0)._s_0.X = fVar9;
  (pTVar1->field0_0x0)._s_0.Y = fVar10;
  (pTVar1->field0_0x0)._s_0.Z = fVar11;
  (pTVar1->field0_0x0)._s_0.W = fVar12;
  fVar2 = (param_2->InvNonUniformScale).field0_0x0._s_0.Y;
  fVar3 = (param_2->InvNonUniformScale).field0_0x0._s_0.Z;
  (param_1->Data).Elements[uVar19].field0_0x0._s_0.X =
       (param_2->InvNonUniformScale).field0_0x0._s_0.X;
  (param_1->Data).Elements[uVar19].field0_0x0._s_0.Y = fVar2;
  (param_1->Data).Elements[uVar19].field0_0x0._s_0.Z = fVar3;
  (param_1->Data).Elements[uVar19].field0_0x0._s_0.W = 0.0;
  uVar13 = *(undefined8 *)((longlong)&(param_2->ObjectWorldPositionHighAndRadius).field0_0x0 + 8);
  pTVar1 = (param_1->Data).Elements + (iVar18 + 5);
  *(undefined8 *)&pTVar1->field0_0x0 =
       *(undefined8 *)&(param_2->ObjectWorldPositionHighAndRadius).field0_0x0;
  *(undefined8 *)((longlong)&pTVar1->field0_0x0 + 8) = uVar13;
  uVar19 = iVar18 + 6;
  fVar2 = (param_2->ObjectWorldPositionLow).field0_0x0._s_0.Y;
  fVar3 = (param_2->ObjectWorldPositionLow).field0_0x0._s_0.Z;
  uVar20 = iVar18 + 7;
  (param_1->Data).Elements[uVar19].field0_0x0._s_0.X =
       (param_2->ObjectWorldPositionLow).field0_0x0._s_0.X;
  (param_1->Data).Elements[uVar19].field0_0x0._s_0.Y = fVar2;
  (param_1->Data).Elements[uVar19].field0_0x0._s_0.Z = fVar3;
  (param_1->Data).Elements[uVar19].field0_0x0._s_0.W = 0.0;
  fVar2 = (param_2->ActorWorldPositionHigh).field0_0x0._s_0.Y;
  fVar3 = (param_2->ActorWorldPositionHigh).field0_0x0._s_0.Z;
  (param_1->Data).Elements[uVar20].field0_0x0._s_0.X =
       (param_2->ActorWorldPositionHigh).field0_0x0._s_0.X;
  (param_1->Data).Elements[uVar20].field0_0x0._s_0.Y = fVar2;
  (param_1->Data).Elements[uVar20].field0_0x0._s_0.Z = fVar3;
  (param_1->Data).Elements[uVar20].field0_0x0._s_0.W = 0.0;
  uVar19 = iVar18 + 8;
  fVar2 = (param_2->ActorWorldPositionLow).field0_0x0._s_0.Y;
  fVar3 = (param_2->ActorWorldPositionLow).field0_0x0._s_0.Z;
  uVar20 = iVar18 + 9;
  (param_1->Data).Elements[uVar19].field0_0x0._s_0.X =
       (param_2->ActorWorldPositionLow).field0_0x0._s_0.X;
  (param_1->Data).Elements[uVar19].field0_0x0._s_0.Y = fVar2;
  (param_1->Data).Elements[uVar19].field0_0x0._s_0.Z = fVar3;
  (param_1->Data).Elements[uVar19].field0_0x0._s_0.W = 0.0;
  fVar2 = (param_2->ObjectOrientation).field0_0x0._s_0.Y;
  fVar3 = (param_2->ObjectOrientation).field0_0x0._s_0.Z;
  fVar4 = param_2->ObjectBoundsX;
  uVar19 = iVar18 + 10;
  (param_1->Data).Elements[uVar20].field0_0x0._s_0.X =
       (param_2->ObjectOrientation).field0_0x0._s_0.X;
  (param_1->Data).Elements[uVar20].field0_0x0._s_0.Y = fVar2;
  (param_1->Data).Elements[uVar20].field0_0x0._s_0.Z = fVar3;
  (param_1->Data).Elements[uVar20].field0_0x0._s_0.W = fVar4;
  fVar2 = (param_2->LocalObjectBoundsMin).field0_0x0._s_0.Y;
  fVar3 = (param_2->LocalObjectBoundsMin).field0_0x0._s_0.Z;
  fVar4 = param_2->ObjectBoundsY;
  uVar20 = iVar18 + 0xb;
  (param_1->Data).Elements[uVar19].field0_0x0._s_0.X =
       (param_2->LocalObjectBoundsMin).field0_0x0._s_0.X;
  (param_1->Data).Elements[uVar19].field0_0x0._s_0.Y = fVar2;
  (param_1->Data).Elements[uVar19].field0_0x0._s_0.Z = fVar3;
  (param_1->Data).Elements[uVar19].field0_0x0._s_0.W = fVar4;
  fVar2 = (param_2->LocalObjectBoundsMax).field0_0x0._s_0.Y;
  fVar3 = (param_2->LocalObjectBoundsMax).field0_0x0._s_0.Z;
  fVar4 = param_2->ObjectBoundsZ;
  (param_1->Data).Elements[uVar20].field0_0x0._s_0.X =
       (param_2->LocalObjectBoundsMax).field0_0x0._s_0.X;
  (param_1->Data).Elements[uVar20].field0_0x0._s_0.Y = fVar2;
  (param_1->Data).Elements[uVar20].field0_0x0._s_0.Z = fVar3;
  (param_1->Data).Elements[uVar20].field0_0x0._s_0.W = fVar4;
  fVar2 = (param_2->RelativeWorldToLocal).M[1][0];
  fVar3 = (param_2->RelativeWorldToLocal).M[2][0];
  fVar4 = (param_2->RelativeWorldToLocal).M[0][1];
  fVar5 = (param_2->RelativeWorldToLocal).M[3][0];
  fVar6 = (param_2->RelativeWorldToLocal).M[1][1];
  fVar7 = (param_2->RelativeWorldToLocal).M[2][1];
  fVar8 = (param_2->RelativeWorldToLocal).M[3][1];
  fVar9 = (param_2->RelativeWorldToLocal).M[0][2];
  fVar10 = (param_2->RelativeWorldToLocal).M[1][2];
  fVar11 = (param_2->RelativeWorldToLocal).M[2][2];
  fVar12 = (param_2->RelativeWorldToLocal).M[3][2];
  pTVar1 = (param_1->Data).Elements + (iVar18 + 0xc);
  (pTVar1->field0_0x0)._s_0.X = (param_2->RelativeWorldToLocal).M[0][0];
  (pTVar1->field0_0x0)._s_0.Y = fVar2;
  (pTVar1->field0_0x0)._s_0.Z = fVar3;
  (pTVar1->field0_0x0)._s_0.W = fVar5;
  pTVar1 = (param_1->Data).Elements + (iVar18 + 0xd);
  (pTVar1->field0_0x0)._s_0.X = fVar4;
  (pTVar1->field0_0x0)._s_0.Y = fVar6;
  (pTVar1->field0_0x0)._s_0.Z = fVar7;
  (pTVar1->field0_0x0)._s_0.W = fVar8;
  pTVar1 = (param_1->Data).Elements + (iVar18 + 0xe);
  (pTVar1->field0_0x0)._s_0.X = fVar9;
  (pTVar1->field0_0x0)._s_0.Y = fVar10;
  (pTVar1->field0_0x0)._s_0.Z = fVar11;
  (pTVar1->field0_0x0)._s_0.W = fVar12;
  fVar2 = (param_2->PreviousLocalToRelativeWorld).M[1][0];
  fVar3 = (param_2->PreviousLocalToRelativeWorld).M[1][1];
  fVar4 = (param_2->PreviousLocalToRelativeWorld).M[2][0];
  fVar5 = (param_2->PreviousLocalToRelativeWorld).M[2][1];
  fVar6 = (param_2->PreviousLocalToRelativeWorld).M[3][0];
  fVar7 = (param_2->PreviousLocalToRelativeWorld).M[3][1];
  fVar8 = (param_2->PreviousLocalToRelativeWorld).M[1][2];
  fVar9 = (param_2->PreviousLocalToRelativeWorld).M[2][2];
  fVar10 = (param_2->PreviousLocalToRelativeWorld).M[3][2];
  fVar11 = (param_2->PreviousLocalToRelativeWorld).M[0][1];
  fVar12 = (param_2->PreviousLocalToRelativeWorld).M[0][2];
  pTVar1 = (param_1->Data).Elements + (iVar18 + 0xf);
  (pTVar1->field0_0x0)._s_0.X = (param_2->PreviousLocalToRelativeWorld).M[0][0];
  (pTVar1->field0_0x0)._s_0.Y = fVar2;
  (pTVar1->field0_0x0)._s_0.Z = fVar4;
  (pTVar1->field0_0x0)._s_0.W = fVar6;
  pTVar1 = (param_1->Data).Elements + (iVar18 + 0x10);
  (pTVar1->field0_0x0)._s_0.X = fVar11;
  (pTVar1->field0_0x0)._s_0.Y = fVar3;
  (pTVar1->field0_0x0)._s_0.Z = fVar5;
  (pTVar1->field0_0x0)._s_0.W = fVar7;
  pTVar1 = (param_1->Data).Elements + (iVar18 + 0x11);
  (pTVar1->field0_0x0)._s_0.X = fVar12;
  (pTVar1->field0_0x0)._s_0.Y = fVar8;
  (pTVar1->field0_0x0)._s_0.Z = fVar9;
  (pTVar1->field0_0x0)._s_0.W = fVar10;
  fVar2 = (param_2->PreviousRelativeWorldToLocal).M[1][0];
  fVar3 = (param_2->PreviousRelativeWorldToLocal).M[0][1];
  fVar4 = (param_2->PreviousRelativeWorldToLocal).M[2][0];
  fVar5 = (param_2->PreviousRelativeWorldToLocal).M[1][1];
  fVar6 = (param_2->PreviousRelativeWorldToLocal).M[3][0];
  fVar7 = (param_2->PreviousRelativeWorldToLocal).M[2][1];
  fVar8 = (param_2->PreviousRelativeWorldToLocal).M[3][1];
  fVar9 = (param_2->PreviousRelativeWorldToLocal).M[0][2];
  fVar10 = (param_2->PreviousRelativeWorldToLocal).M[1][2];
  fVar11 = (param_2->PreviousRelativeWorldToLocal).M[2][2];
  fVar12 = (param_2->PreviousRelativeWorldToLocal).M[3][2];
  pTVar1 = (param_1->Data).Elements + (iVar18 + 0x12);
  (pTVar1->field0_0x0)._s_0.X = (param_2->PreviousRelativeWorldToLocal).M[0][0];
  (pTVar1->field0_0x0)._s_0.Y = fVar2;
  (pTVar1->field0_0x0)._s_0.Z = fVar4;
  (pTVar1->field0_0x0)._s_0.W = fVar6;
  pTVar1 = (param_1->Data).Elements + (iVar18 + 0x13);
  (pTVar1->field0_0x0)._s_0.X = fVar3;
  (pTVar1->field0_0x0)._s_0.Y = fVar5;
  (pTVar1->field0_0x0)._s_0.Z = fVar7;
  (pTVar1->field0_0x0)._s_0.W = fVar8;
  uVar19 = iVar18 + 0x15;
  iVar15 = 0x20 - uVar19;
  pTVar1 = (param_1->Data).Elements + (iVar18 + 0x14);
  (pTVar1->field0_0x0)._s_0.X = fVar9;
  (pTVar1->field0_0x0)._s_0.Y = fVar10;
  (pTVar1->field0_0x0)._s_0.Z = fVar11;
  (pTVar1->field0_0x0)._s_0.W = fVar12;
  if (9 < iVar15) {
    iVar15 = 9;
  }
  lVar21 = (longlong)iVar15;
  if (0 < iVar15) {
    pTVar17 = &param_2->CustomPrimitiveData;
    do {
      pTVar14 = pTVar17->Elements;
      uVar13 = *(undefined8 *)((longlong)&pTVar17->Elements[0].field0_0x0 + 8);
      pTVar17 = (TStaticArray<UE::Math::TVector4<float>,9,4294967295> *)(pTVar17->Elements + 1);
      uVar16 = (ulonglong)uVar19;
      uVar19 = uVar19 + 1;
      pTVar1 = (param_1->Data).Elements + uVar16;
      *(undefined8 *)&pTVar1->field0_0x0 = *(undefined8 *)&pTVar14->field0_0x0;
      *(undefined8 *)((longlong)&pTVar1->field0_0x0 + 8) = uVar13;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
  }
  return;
}

// Emplace @ 14490e740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
FBatchedPrimitiveShaderData::Emplace
          (FBatchedPrimitiveShaderData *param_1,FPrimitiveSceneProxy *param_2)

{
  float *pfVar1;
  FPrimitiveUniformShaderParameters *pFVar2;
  longlong lVar3;
  undefined1 auStack_498 [32];
  undefined1 local_478 [664];
  float local_1e0 [114];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_498;
  memset((FPrimitiveUniformShaderParametersBuilder *)local_478,0,0x460);
  pfVar1 = &(((FPrimitiveUniformShaderParametersBuilder *)local_478)->Parameters).
            CustomPrimitiveData.Elements[0].field0_0x0._s_0.Z;
  local_478._368_8_ = ___xmm_3f800000000000000000000000000000;
  local_478._376_8_ = _UNK_150689648;
  lVar3 = 9;
  local_478._448_8_ = ___xmm_3f800000000000000000000000000000;
  local_478._456_8_ = _UNK_150689648;
  do {
    ((TVector4<float>_u_0_s_0 *)(pfVar1 + -2))->X = 0.0;
    ((TVector4<float>_u_0_s_0 *)(pfVar1 + -2))->Y = 0.0;
    *pfVar1 = 0.0;
    pfVar1[1] = 1.0;
    pfVar1 = pfVar1 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  FPrimitiveSceneProxy::BuildUniformShaderParameters
            (param_2,(FPrimitiveUniformShaderParametersBuilder *)local_478);
  pFVar2 = FPrimitiveUniformShaderParametersBuilder::Build
                     ((FPrimitiveUniformShaderParametersBuilder *)local_478);
  Setup(param_1,pFVar2);
  return;
}

// Setup @ 144931350

void __thiscall
FBatchedPrimitiveShaderData::Setup
          (FBatchedPrimitiveShaderData *this,FPrimitiveUniformShaderParameters *param_1)

{
  TVector4<float> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  TVector4<float> *pTVar14;
  int iVar15;
  ulonglong uVar16;
  TStaticArray<UE::Math::TVector4<float>,9,4294967295> *pTVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  
  lVar21 = 0;
  if (FReadOnlyCVARCache::bAllowStaticLighting) {
    (this->Data).Elements[0].field0_0x0._s_0.X = 1.0;
    lVar21 = 3;
    *(undefined8 *)((longlong)&(this->Data).Elements[0].field0_0x0 + 4) = 0x3f800000;
    (this->Data).Elements[0].field0_0x0._s_0.W = 0.0;
    (this->Data).Elements[1].field0_0x0._s_0.X = 1.0;
    *(undefined8 *)((longlong)&(this->Data).Elements[1].field0_0x0 + 4) = 0x3f800000;
    *(undefined8 *)((longlong)&(this->Data).Elements[1].field0_0x0 + 0xc) = 0;
    *(undefined8 *)((longlong)&(this->Data).Elements[2].field0_0x0 + 4) = 0;
    (this->Data).Elements[2].field0_0x0._s_0.W = 0.0;
  }
  iVar18 = (int)lVar21;
  (this->Data).Elements[lVar21].field0_0x0._s_0.X = (param_1->PositionHigh).field0_0x0._s_0.X;
  (this->Data).Elements[lVar21].field0_0x0._s_0.Y = (param_1->PositionHigh).field0_0x0._s_0.Y;
  (this->Data).Elements[lVar21].field0_0x0._s_0.Z = (param_1->PositionHigh).field0_0x0._s_0.Z;
  (this->Data).Elements[lVar21].field0_0x0._s_0.W = (float)param_1->Flags;
  fVar2 = (param_1->LocalToRelativeWorld).M[1][0];
  fVar3 = (param_1->LocalToRelativeWorld).M[2][0];
  fVar4 = (param_1->LocalToRelativeWorld).M[0][1];
  fVar5 = (param_1->LocalToRelativeWorld).M[3][0];
  fVar6 = (param_1->LocalToRelativeWorld).M[1][1];
  fVar7 = (param_1->LocalToRelativeWorld).M[2][1];
  fVar8 = (param_1->LocalToRelativeWorld).M[3][1];
  fVar9 = (param_1->LocalToRelativeWorld).M[0][2];
  fVar10 = (param_1->LocalToRelativeWorld).M[1][2];
  fVar11 = (param_1->LocalToRelativeWorld).M[2][2];
  fVar12 = (param_1->LocalToRelativeWorld).M[3][2];
  pTVar1 = (this->Data).Elements + (iVar18 + 1);
  (pTVar1->field0_0x0)._s_0.X = (param_1->LocalToRelativeWorld).M[0][0];
  (pTVar1->field0_0x0)._s_0.Y = fVar2;
  (pTVar1->field0_0x0)._s_0.Z = fVar3;
  (pTVar1->field0_0x0)._s_0.W = fVar5;
  pTVar1 = (this->Data).Elements + (iVar18 + 2);
  (pTVar1->field0_0x0)._s_0.X = fVar4;
  (pTVar1->field0_0x0)._s_0.Y = fVar6;
  (pTVar1->field0_0x0)._s_0.Z = fVar7;
  (pTVar1->field0_0x0)._s_0.W = fVar8;
  uVar19 = iVar18 + 4;
  pTVar1 = (this->Data).Elements + (iVar18 + 3);
  (pTVar1->field0_0x0)._s_0.X = fVar9;
  (pTVar1->field0_0x0)._s_0.Y = fVar10;
  (pTVar1->field0_0x0)._s_0.Z = fVar11;
  (pTVar1->field0_0x0)._s_0.W = fVar12;
  fVar2 = (param_1->InvNonUniformScale).field0_0x0._s_0.Y;
  fVar3 = (param_1->InvNonUniformScale).field0_0x0._s_0.Z;
  (this->Data).Elements[uVar19].field0_0x0._s_0.X = (param_1->InvNonUniformScale).field0_0x0._s_0.X;
  (this->Data).Elements[uVar19].field0_0x0._s_0.Y = fVar2;
  (this->Data).Elements[uVar19].field0_0x0._s_0.Z = fVar3;
  (this->Data).Elements[uVar19].field0_0x0._s_0.W = 0.0;
  uVar13 = *(undefined8 *)((longlong)&(param_1->ObjectWorldPositionHighAndRadius).field0_0x0 + 8);
  pTVar1 = (this->Data).Elements + (iVar18 + 5);
  *(undefined8 *)&pTVar1->field0_0x0 =
       *(undefined8 *)&(param_1->ObjectWorldPositionHighAndRadius).field0_0x0;
  *(undefined8 *)((longlong)&pTVar1->field0_0x0 + 8) = uVar13;
  uVar19 = iVar18 + 6;
  fVar2 = (param_1->ObjectWorldPositionLow).field0_0x0._s_0.Y;
  fVar3 = (param_1->ObjectWorldPositionLow).field0_0x0._s_0.Z;
  uVar20 = iVar18 + 7;
  (this->Data).Elements[uVar19].field0_0x0._s_0.X =
       (param_1->ObjectWorldPositionLow).field0_0x0._s_0.X;
  (this->Data).Elements[uVar19].field0_0x0._s_0.Y = fVar2;
  (this->Data).Elements[uVar19].field0_0x0._s_0.Z = fVar3;
  (this->Data).Elements[uVar19].field0_0x0._s_0.W = 0.0;
  fVar2 = (param_1->ActorWorldPositionHigh).field0_0x0._s_0.Y;
  fVar3 = (param_1->ActorWorldPositionHigh).field0_0x0._s_0.Z;
  (this->Data).Elements[uVar20].field0_0x0._s_0.X =
       (param_1->ActorWorldPositionHigh).field0_0x0._s_0.X;
  (this->Data).Elements[uVar20].field0_0x0._s_0.Y = fVar2;
  (this->Data).Elements[uVar20].field0_0x0._s_0.Z = fVar3;
  (this->Data).Elements[uVar20].field0_0x0._s_0.W = 0.0;
  uVar19 = iVar18 + 8;
  fVar2 = (param_1->ActorWorldPositionLow).field0_0x0._s_0.Y;
  fVar3 = (param_1->ActorWorldPositionLow).field0_0x0._s_0.Z;
  uVar20 = iVar18 + 9;
  (this->Data).Elements[uVar19].field0_0x0._s_0.X =
       (param_1->ActorWorldPositionLow).field0_0x0._s_0.X;
  (this->Data).Elements[uVar19].field0_0x0._s_0.Y = fVar2;
  (this->Data).Elements[uVar19].field0_0x0._s_0.Z = fVar3;
  (this->Data).Elements[uVar19].field0_0x0._s_0.W = 0.0;
  fVar2 = (param_1->ObjectOrientation).field0_0x0._s_0.Y;
  fVar3 = (param_1->ObjectOrientation).field0_0x0._s_0.Z;
  fVar4 = param_1->ObjectBoundsX;
  uVar19 = iVar18 + 10;
  (this->Data).Elements[uVar20].field0_0x0._s_0.X = (param_1->ObjectOrientation).field0_0x0._s_0.X;
  (this->Data).Elements[uVar20].field0_0x0._s_0.Y = fVar2;
  (this->Data).Elements[uVar20].field0_0x0._s_0.Z = fVar3;
  (this->Data).Elements[uVar20].field0_0x0._s_0.W = fVar4;
  fVar2 = (param_1->LocalObjectBoundsMin).field0_0x0._s_0.Y;
  fVar3 = (param_1->LocalObjectBoundsMin).field0_0x0._s_0.Z;
  fVar4 = param_1->ObjectBoundsY;
  uVar20 = iVar18 + 0xb;
  (this->Data).Elements[uVar19].field0_0x0._s_0.X =
       (param_1->LocalObjectBoundsMin).field0_0x0._s_0.X;
  (this->Data).Elements[uVar19].field0_0x0._s_0.Y = fVar2;
  (this->Data).Elements[uVar19].field0_0x0._s_0.Z = fVar3;
  (this->Data).Elements[uVar19].field0_0x0._s_0.W = fVar4;
  fVar2 = (param_1->LocalObjectBoundsMax).field0_0x0._s_0.Y;
  fVar3 = (param_1->LocalObjectBoundsMax).field0_0x0._s_0.Z;
  fVar4 = param_1->ObjectBoundsZ;
  (this->Data).Elements[uVar20].field0_0x0._s_0.X =
       (param_1->LocalObjectBoundsMax).field0_0x0._s_0.X;
  (this->Data).Elements[uVar20].field0_0x0._s_0.Y = fVar2;
  (this->Data).Elements[uVar20].field0_0x0._s_0.Z = fVar3;
  (this->Data).Elements[uVar20].field0_0x0._s_0.W = fVar4;
  fVar2 = (param_1->RelativeWorldToLocal).M[1][0];
  fVar3 = (param_1->RelativeWorldToLocal).M[2][0];
  fVar4 = (param_1->RelativeWorldToLocal).M[0][1];
  fVar5 = (param_1->RelativeWorldToLocal).M[3][0];
  fVar6 = (param_1->RelativeWorldToLocal).M[1][1];
  fVar7 = (param_1->RelativeWorldToLocal).M[2][1];
  fVar8 = (param_1->RelativeWorldToLocal).M[3][1];
  fVar9 = (param_1->RelativeWorldToLocal).M[0][2];
  fVar10 = (param_1->RelativeWorldToLocal).M[1][2];
  fVar11 = (param_1->RelativeWorldToLocal).M[2][2];
  fVar12 = (param_1->RelativeWorldToLocal).M[3][2];
  pTVar1 = (this->Data).Elements + (iVar18 + 0xc);
  (pTVar1->field0_0x0)._s_0.X = (param_1->RelativeWorldToLocal).M[0][0];
  (pTVar1->field0_0x0)._s_0.Y = fVar2;
  (pTVar1->field0_0x0)._s_0.Z = fVar3;
  (pTVar1->field0_0x0)._s_0.W = fVar5;
  pTVar1 = (this->Data).Elements + (iVar18 + 0xd);
  (pTVar1->field0_0x0)._s_0.X = fVar4;
  (pTVar1->field0_0x0)._s_0.Y = fVar6;
  (pTVar1->field0_0x0)._s_0.Z = fVar7;
  (pTVar1->field0_0x0)._s_0.W = fVar8;
  pTVar1 = (this->Data).Elements + (iVar18 + 0xe);
  (pTVar1->field0_0x0)._s_0.X = fVar9;
  (pTVar1->field0_0x0)._s_0.Y = fVar10;
  (pTVar1->field0_0x0)._s_0.Z = fVar11;
  (pTVar1->field0_0x0)._s_0.W = fVar12;
  fVar2 = (param_1->PreviousLocalToRelativeWorld).M[1][0];
  fVar3 = (param_1->PreviousLocalToRelativeWorld).M[1][1];
  fVar4 = (param_1->PreviousLocalToRelativeWorld).M[2][0];
  fVar5 = (param_1->PreviousLocalToRelativeWorld).M[2][1];
  fVar6 = (param_1->PreviousLocalToRelativeWorld).M[3][0];
  fVar7 = (param_1->PreviousLocalToRelativeWorld).M[3][1];
  fVar8 = (param_1->PreviousLocalToRelativeWorld).M[1][2];
  fVar9 = (param_1->PreviousLocalToRelativeWorld).M[2][2];
  fVar10 = (param_1->PreviousLocalToRelativeWorld).M[3][2];
  fVar11 = (param_1->PreviousLocalToRelativeWorld).M[0][1];
  fVar12 = (param_1->PreviousLocalToRelativeWorld).M[0][2];
  pTVar1 = (this->Data).Elements + (iVar18 + 0xf);
  (pTVar1->field0_0x0)._s_0.X = (param_1->PreviousLocalToRelativeWorld).M[0][0];
  (pTVar1->field0_0x0)._s_0.Y = fVar2;
  (pTVar1->field0_0x0)._s_0.Z = fVar4;
  (pTVar1->field0_0x0)._s_0.W = fVar6;
  pTVar1 = (this->Data).Elements + (iVar18 + 0x10);
  (pTVar1->field0_0x0)._s_0.X = fVar11;
  (pTVar1->field0_0x0)._s_0.Y = fVar3;
  (pTVar1->field0_0x0)._s_0.Z = fVar5;
  (pTVar1->field0_0x0)._s_0.W = fVar7;
  pTVar1 = (this->Data).Elements + (iVar18 + 0x11);
  (pTVar1->field0_0x0)._s_0.X = fVar12;
  (pTVar1->field0_0x0)._s_0.Y = fVar8;
  (pTVar1->field0_0x0)._s_0.Z = fVar9;
  (pTVar1->field0_0x0)._s_0.W = fVar10;
  fVar2 = (param_1->PreviousRelativeWorldToLocal).M[1][0];
  fVar3 = (param_1->PreviousRelativeWorldToLocal).M[0][1];
  fVar4 = (param_1->PreviousRelativeWorldToLocal).M[2][0];
  fVar5 = (param_1->PreviousRelativeWorldToLocal).M[1][1];
  fVar6 = (param_1->PreviousRelativeWorldToLocal).M[3][0];
  fVar7 = (param_1->PreviousRelativeWorldToLocal).M[2][1];
  fVar8 = (param_1->PreviousRelativeWorldToLocal).M[3][1];
  fVar9 = (param_1->PreviousRelativeWorldToLocal).M[0][2];
  fVar10 = (param_1->PreviousRelativeWorldToLocal).M[1][2];
  fVar11 = (param_1->PreviousRelativeWorldToLocal).M[2][2];
  fVar12 = (param_1->PreviousRelativeWorldToLocal).M[3][2];
  pTVar1 = (this->Data).Elements + (iVar18 + 0x12);
  (pTVar1->field0_0x0)._s_0.X = (param_1->PreviousRelativeWorldToLocal).M[0][0];
  (pTVar1->field0_0x0)._s_0.Y = fVar2;
  (pTVar1->field0_0x0)._s_0.Z = fVar4;
  (pTVar1->field0_0x0)._s_0.W = fVar6;
  pTVar1 = (this->Data).Elements + (iVar18 + 0x13);
  (pTVar1->field0_0x0)._s_0.X = fVar3;
  (pTVar1->field0_0x0)._s_0.Y = fVar5;
  (pTVar1->field0_0x0)._s_0.Z = fVar7;
  (pTVar1->field0_0x0)._s_0.W = fVar8;
  uVar19 = iVar18 + 0x15;
  iVar15 = 0x20 - uVar19;
  pTVar1 = (this->Data).Elements + (iVar18 + 0x14);
  (pTVar1->field0_0x0)._s_0.X = fVar9;
  (pTVar1->field0_0x0)._s_0.Y = fVar10;
  (pTVar1->field0_0x0)._s_0.Z = fVar11;
  (pTVar1->field0_0x0)._s_0.W = fVar12;
  if (9 < iVar15) {
    iVar15 = 9;
  }
  lVar21 = (longlong)iVar15;
  if (0 < iVar15) {
    pTVar17 = &param_1->CustomPrimitiveData;
    do {
      pTVar14 = pTVar17->Elements;
      uVar13 = *(undefined8 *)((longlong)&pTVar17->Elements[0].field0_0x0 + 8);
      pTVar17 = (TStaticArray<UE::Math::TVector4<float>,9,4294967295> *)(pTVar17->Elements + 1);
      uVar16 = (ulonglong)uVar19;
      uVar19 = uVar19 + 1;
      pTVar1 = (this->Data).Elements + uVar16;
      *(undefined8 *)&pTVar1->field0_0x0 = *(undefined8 *)&pTVar14->field0_0x0;
      *(undefined8 *)((longlong)&pTVar1->field0_0x0 + 8) = uVar13;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
  }
  return;
}

