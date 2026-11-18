// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FPrimitiveSceneShaderData @ 1483e4340

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

FPrimitiveSceneShaderData * __thiscall
FPrimitiveSceneShaderData::FPrimitiveSceneShaderData
          (FPrimitiveSceneShaderData *this,FPrimitiveSceneProxy *param_1)

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
  Setup(pFVar1,(TVector4<float> *)this);
  return this;
}

// BuildDataFromProxy @ 1483f0920

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
FPrimitiveSceneShaderData::BuildDataFromProxy
          (FPrimitiveSceneProxy *param_1,TVector4<float> *param_2)

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
            (param_1,(FPrimitiveUniformShaderParametersBuilder *)local_478);
  pFVar2 = FPrimitiveUniformShaderParametersBuilder::Build
                     ((FPrimitiveUniformShaderParametersBuilder *)local_478);
  Setup(pFVar2,param_2);
  return;
}

// Setup @ 148426440

void __thiscall
FPrimitiveSceneShaderData::Setup
          (FPrimitiveSceneShaderData *this,FPrimitiveUniformShaderParameters *param_1)

{
  Setup(param_1,(TVector4<float> *)this);
  return;
}

// Setup @ 148426460

void __cdecl
FPrimitiveSceneShaderData::Setup
          (FPrimitiveUniformShaderParameters *param_1,TVector4<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  TVector4<float> TVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar12 = param_1->VisibilityFlags;
  fVar5 = (float)param_1->Flags;
  fVar6 = (float)param_1->InstanceSceneDataOffset;
  fVar7 = (float)param_1->NumInstanceSceneDataEntries;
  fVar1 = (param_1->LocalToRelativeWorld).M[2][0];
  uVar13 = param_1->SingleCaptureIndex;
  uVar16 = *(undefined8 *)((longlong)&(param_1->PositionHigh).field0_0x0 + 8);
  fVar2 = (param_1->LocalToRelativeWorld).M[1][0];
  *(undefined8 *)&param_2[1].field0_0x0 = *(undefined8 *)&(param_1->PositionHigh).field0_0x0;
  *(undefined8 *)((longlong)&param_2[1].field0_0x0 + 8) = uVar16;
  fVar3 = (param_1->LocalToRelativeWorld).M[0][0];
  fVar4 = (param_1->LocalToRelativeWorld).M[1][1];
  (param_2->field0_0x0)._s_0.X = fVar5;
  (param_2->field0_0x0)._s_0.Y = fVar6;
  (param_2->field0_0x0)._s_0.Z = fVar7;
  (param_2->field0_0x0)._s_0.W = (float)(uVar12 << 0x10 | uVar13);
  fVar5 = (param_1->LocalToRelativeWorld).M[3][0];
  fVar6 = (param_1->LocalToRelativeWorld).M[3][1];
  fVar7 = (param_1->LocalToRelativeWorld).M[2][1];
  param_2[2].field0_0x0._s_0.X = fVar3;
  param_2[2].field0_0x0._s_0.Y = fVar2;
  param_2[2].field0_0x0._s_0.Z = fVar1;
  param_2[2].field0_0x0._s_0.W = fVar5;
  fVar1 = (param_1->LocalToRelativeWorld).M[1][2];
  fVar2 = (param_1->LocalToRelativeWorld).M[3][2];
  fVar3 = (param_1->LocalToRelativeWorld).M[2][2];
  param_2[3].field0_0x0._s_0.X = (param_1->LocalToRelativeWorld).M[0][1];
  param_2[3].field0_0x0._s_0.Y = fVar4;
  param_2[3].field0_0x0._s_0.Z = fVar7;
  param_2[3].field0_0x0._s_0.W = fVar6;
  fVar4 = (param_1->RelativeWorldToLocal).M[1][0];
  fVar5 = (param_1->RelativeWorldToLocal).M[3][0];
  fVar6 = (param_1->RelativeWorldToLocal).M[2][0];
  param_2[4].field0_0x0._s_0.X = (param_1->LocalToRelativeWorld).M[0][2];
  param_2[4].field0_0x0._s_0.Y = fVar1;
  param_2[4].field0_0x0._s_0.Z = fVar3;
  param_2[4].field0_0x0._s_0.W = fVar2;
  fVar1 = (param_1->RelativeWorldToLocal).M[1][1];
  fVar2 = (param_1->RelativeWorldToLocal).M[3][1];
  fVar3 = (param_1->RelativeWorldToLocal).M[2][1];
  param_2[5].field0_0x0._s_0.X = (param_1->RelativeWorldToLocal).M[0][0];
  param_2[5].field0_0x0._s_0.Y = fVar4;
  param_2[5].field0_0x0._s_0.Z = fVar6;
  param_2[5].field0_0x0._s_0.W = fVar5;
  fVar4 = (param_1->RelativeWorldToLocal).M[1][2];
  fVar5 = (param_1->RelativeWorldToLocal).M[3][2];
  fVar6 = (param_1->RelativeWorldToLocal).M[2][2];
  param_2[6].field0_0x0._s_0.X = (param_1->RelativeWorldToLocal).M[0][1];
  param_2[6].field0_0x0._s_0.Y = fVar1;
  param_2[6].field0_0x0._s_0.Z = fVar3;
  param_2[6].field0_0x0._s_0.W = fVar2;
  fVar1 = (param_1->PreviousLocalToRelativeWorld).M[1][0];
  fVar2 = (param_1->PreviousLocalToRelativeWorld).M[3][0];
  fVar3 = (param_1->PreviousLocalToRelativeWorld).M[2][0];
  param_2[7].field0_0x0._s_0.X = (param_1->RelativeWorldToLocal).M[0][2];
  param_2[7].field0_0x0._s_0.Y = fVar4;
  param_2[7].field0_0x0._s_0.Z = fVar6;
  param_2[7].field0_0x0._s_0.W = fVar5;
  fVar4 = (param_1->PreviousLocalToRelativeWorld).M[1][1];
  fVar5 = (param_1->PreviousLocalToRelativeWorld).M[3][1];
  fVar6 = (param_1->PreviousLocalToRelativeWorld).M[2][1];
  param_2[8].field0_0x0._s_0.X = (param_1->PreviousLocalToRelativeWorld).M[0][0];
  param_2[8].field0_0x0._s_0.Y = fVar1;
  param_2[8].field0_0x0._s_0.Z = fVar3;
  param_2[8].field0_0x0._s_0.W = fVar2;
  fVar1 = (param_1->PreviousLocalToRelativeWorld).M[3][2];
  fVar2 = (param_1->PreviousLocalToRelativeWorld).M[1][2];
  fVar3 = (param_1->PreviousLocalToRelativeWorld).M[2][2];
  param_2[9].field0_0x0._s_0.X = (param_1->PreviousLocalToRelativeWorld).M[0][1];
  param_2[9].field0_0x0._s_0.Y = fVar4;
  param_2[9].field0_0x0._s_0.Z = fVar6;
  param_2[9].field0_0x0._s_0.W = fVar5;
  fVar4 = (param_1->PreviousRelativeWorldToLocal).M[3][0];
  fVar7 = (param_1->InvNonUniformScale).field0_0x0._s_0.X;
  fVar5 = (param_1->PreviousRelativeWorldToLocal).M[1][0];
  fVar6 = (param_1->PreviousRelativeWorldToLocal).M[2][0];
  param_2[10].field0_0x0._s_0.X = (param_1->PreviousLocalToRelativeWorld).M[0][2];
  param_2[10].field0_0x0._s_0.Y = fVar2;
  param_2[10].field0_0x0._s_0.Z = fVar3;
  param_2[10].field0_0x0._s_0.W = fVar1;
  fVar1 = (param_1->PreviousRelativeWorldToLocal).M[1][1];
  fVar2 = (param_1->PreviousRelativeWorldToLocal).M[3][1];
  fVar3 = (param_1->PreviousRelativeWorldToLocal).M[2][1];
  param_2[0xb].field0_0x0._s_0.X = (param_1->PreviousRelativeWorldToLocal).M[0][0];
  param_2[0xb].field0_0x0._s_0.Y = fVar5;
  param_2[0xb].field0_0x0._s_0.Z = fVar6;
  param_2[0xb].field0_0x0._s_0.W = fVar4;
  fVar4 = (param_1->PreviousRelativeWorldToLocal).M[1][2];
  fVar5 = (param_1->PreviousRelativeWorldToLocal).M[3][2];
  fVar6 = (param_1->PreviousRelativeWorldToLocal).M[2][2];
  param_2[0xc].field0_0x0._s_0.X = (param_1->PreviousRelativeWorldToLocal).M[0][1];
  param_2[0xc].field0_0x0._s_0.Y = fVar1;
  param_2[0xc].field0_0x0._s_0.Z = fVar3;
  param_2[0xc].field0_0x0._s_0.W = fVar2;
  fVar1 = (param_1->WorldToPreviousWorld).M[1][0];
  fVar2 = (param_1->WorldToPreviousWorld).M[3][0];
  fVar3 = (param_1->WorldToPreviousWorld).M[2][0];
  param_2[0xd].field0_0x0._s_0.X = (param_1->PreviousRelativeWorldToLocal).M[0][2];
  param_2[0xd].field0_0x0._s_0.Y = fVar4;
  param_2[0xd].field0_0x0._s_0.Z = fVar6;
  param_2[0xd].field0_0x0._s_0.W = fVar5;
  fVar4 = (param_1->WorldToPreviousWorld).M[1][1];
  fVar5 = (param_1->WorldToPreviousWorld).M[3][1];
  fVar6 = (param_1->WorldToPreviousWorld).M[2][1];
  param_2[0xe].field0_0x0._s_0.X = (param_1->WorldToPreviousWorld).M[0][0];
  param_2[0xe].field0_0x0._s_0.Y = fVar1;
  param_2[0xe].field0_0x0._s_0.Z = fVar3;
  param_2[0xe].field0_0x0._s_0.W = fVar2;
  fVar1 = (param_1->WorldToPreviousWorld).M[1][2];
  fVar2 = (param_1->WorldToPreviousWorld).M[3][2];
  fVar3 = (param_1->WorldToPreviousWorld).M[2][2];
  param_2[0xf].field0_0x0._s_0.X = (param_1->WorldToPreviousWorld).M[0][1];
  param_2[0xf].field0_0x0._s_0.Y = fVar4;
  param_2[0xf].field0_0x0._s_0.Z = fVar6;
  param_2[0xf].field0_0x0._s_0.W = fVar5;
  fVar4 = (param_1->InvNonUniformScale).field0_0x0._s_0.Y;
  fVar5 = (param_1->InvNonUniformScale).field0_0x0._s_0.Z;
  fVar6 = param_1->ObjectBoundsX;
  param_2[0x10].field0_0x0._s_0.X = (param_1->WorldToPreviousWorld).M[0][2];
  param_2[0x10].field0_0x0._s_0.Y = fVar1;
  param_2[0x10].field0_0x0._s_0.Z = fVar3;
  param_2[0x10].field0_0x0._s_0.W = fVar2;
  param_2[0x11].field0_0x0._s_0.X = fVar7;
  param_2[0x11].field0_0x0._s_0.Y = fVar4;
  param_2[0x11].field0_0x0._s_0.Z = fVar5;
  param_2[0x11].field0_0x0._s_0.W = fVar6;
  uVar16 = *(undefined8 *)((longlong)&(param_1->ObjectWorldPositionHighAndRadius).field0_0x0 + 8);
  fVar4 = (param_1->ObjectWorldPositionLow).field0_0x0._s_0.X;
  fVar1 = (param_1->ObjectWorldPositionLow).field0_0x0._s_0.Y;
  fVar2 = param_1->MinMaterialDisplacement;
  *(undefined8 *)&param_2[0x12].field0_0x0 =
       *(undefined8 *)&(param_1->ObjectWorldPositionHighAndRadius).field0_0x0;
  *(undefined8 *)((longlong)&param_2[0x12].field0_0x0 + 8) = uVar16;
  fVar3 = (param_1->ObjectWorldPositionLow).field0_0x0._s_0.Z;
  param_2[0x13].field0_0x0._s_0.X = fVar4;
  param_2[0x13].field0_0x0._s_0.Y = fVar1;
  param_2[0x13].field0_0x0._s_0.Z = fVar3;
  param_2[0x13].field0_0x0._s_0.W = fVar2;
  fVar1 = (param_1->ActorWorldPositionHigh).field0_0x0._s_0.Y;
  fVar2 = (param_1->ActorWorldPositionHigh).field0_0x0._s_0.Z;
  fVar3 = param_1->MaxMaterialDisplacement;
  param_2[0x14].field0_0x0._s_0.X = (param_1->ActorWorldPositionHigh).field0_0x0._s_0.X;
  param_2[0x14].field0_0x0._s_0.Y = fVar1;
  param_2[0x14].field0_0x0._s_0.Z = fVar2;
  param_2[0x14].field0_0x0._s_0.W = fVar3;
  uVar16 = *(undefined8 *)((longlong)&(param_1->ActorWorldPositionLow).field0_0x0 + 8);
  *(undefined8 *)&param_2[0x15].field0_0x0 =
       *(undefined8 *)&(param_1->ActorWorldPositionLow).field0_0x0;
  *(undefined8 *)((longlong)&param_2[0x15].field0_0x0 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&(param_1->ObjectOrientation).field0_0x0 + 8);
  *(undefined8 *)&param_2[0x16].field0_0x0 = *(undefined8 *)&(param_1->ObjectOrientation).field0_0x0
  ;
  *(undefined8 *)((longlong)&param_2[0x16].field0_0x0 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&(param_1->NonUniformScale).field0_0x0 + 8);
  fVar4 = (param_1->LocalObjectBoundsMin).field0_0x0._s_0.X;
  uVar17 = *(undefined8 *)&(param_1->PreSkinnedLocalBoundsMin).field0_0x0;
  uVar18 = *(undefined8 *)((longlong)&(param_1->PreSkinnedLocalBoundsMin).field0_0x0 + 8);
  fVar1 = (param_1->LocalObjectBoundsMin).field0_0x0._s_0.Z;
  fVar2 = param_1->ObjectBoundsY;
  *(undefined8 *)&param_2[0x17].field0_0x0 = *(undefined8 *)&(param_1->NonUniformScale).field0_0x0;
  *(undefined8 *)((longlong)&param_2[0x17].field0_0x0 + 8) = uVar16;
  fVar3 = (param_1->LocalObjectBoundsMin).field0_0x0._s_0.Y;
  *(undefined8 *)&param_2[0x18].field0_0x0 = uVar17;
  *(undefined8 *)((longlong)&param_2[0x18].field0_0x0 + 8) = uVar18;
  uVar16 = *(undefined8 *)((longlong)&(param_1->PreSkinnedLocalBoundsMax).field0_0x0 + 8);
  *(undefined8 *)&param_2[0x19].field0_0x0 =
       *(undefined8 *)&(param_1->PreSkinnedLocalBoundsMax).field0_0x0;
  *(undefined8 *)((longlong)&param_2[0x19].field0_0x0 + 8) = uVar16;
  param_2[0x1a].field0_0x0._s_0.X = fVar4;
  param_2[0x1a].field0_0x0._s_0.Y = fVar3;
  param_2[0x1a].field0_0x0._s_0.Z = fVar1;
  param_2[0x1a].field0_0x0._s_0.W = fVar2;
  fVar1 = (param_1->LocalObjectBoundsMax).field0_0x0._s_0.Y;
  fVar2 = (param_1->LocalObjectBoundsMax).field0_0x0._s_0.Z;
  fVar3 = param_1->ObjectBoundsZ;
  param_2[0x1b].field0_0x0._s_0.X = (param_1->LocalObjectBoundsMax).field0_0x0._s_0.X;
  param_2[0x1b].field0_0x0._s_0.Y = fVar1;
  param_2[0x1b].field0_0x0._s_0.Z = fVar2;
  param_2[0x1b].field0_0x0._s_0.W = fVar3;
  uVar16 = *(undefined8 *)((longlong)&(param_1->InstanceLocalBoundsCenter).field0_0x0 + 8);
  uVar13 = param_1->InstancePayloadExtensionSize;
  uVar14 = param_1->InstancePayloadDataStride;
  fVar1 = (param_1->InstanceLocalBoundsExtent).field0_0x0._s_0.Z;
  fVar3 = (float)(param_1->MeshPaintTextureDescriptor).field0_0x0._s_0.X;
  fVar4 = (float)(param_1->MeshPaintTextureDescriptor).field0_0x0._s_0.Y;
  *(undefined8 *)&param_2[0x1c].field0_0x0 =
       *(undefined8 *)&(param_1->InstanceLocalBoundsCenter).field0_0x0;
  *(undefined8 *)((longlong)&param_2[0x1c].field0_0x0 + 8) = uVar16;
  fVar5 = (param_1->InstanceLocalBoundsExtent).field0_0x0._s_0.Y;
  uVar12 = param_1->PackedNaniteFlags;
  fVar2 = param_1->InstanceWPODisableDistanceSquared;
  param_2[0x1d].field0_0x0._s_0.X = (param_1->InstanceLocalBoundsExtent).field0_0x0._s_0.X;
  param_2[0x1d].field0_0x0._s_0.Y = fVar5;
  param_2[0x1d].field0_0x0._s_0.Z = fVar1;
  param_2[0x1d].field0_0x0._s_0.W = (float)(uVar13 << 0x18 | uVar14 & 0xffffff);
  fVar1 = (float)param_1->NaniteRayTracingDataOffset;
  TVar15.field0_0x0._s_0.Z = (float)uVar12;
  TVar15.field0_0x0._0_8_ = (param_1->WireframeAndPrimitiveColor).field0_0x0;
  TVar15.field0_0x0._s_0.W = 0.0;
  param_2[0x1e].field0_0x0 = TVar15.field0_0x0;
  fVar7 = (param_1->InstanceDrawDistanceMinMaxSquared).field0_0x0._s_0.Y;
  uVar12 = param_1->MaterialCacheDescriptor;
  fVar5 = param_1->MaxWPOExtent;
  fVar6 = (float)param_1->CustomStencilValueAndMask;
  param_2[0x1f].field0_0x0._s_0.X = (param_1->InstanceDrawDistanceMinMaxSquared).field0_0x0._s_0.X;
  param_2[0x1f].field0_0x0._s_0.Y = fVar7;
  param_2[0x1f].field0_0x0._s_0.Z = fVar2;
  param_2[0x1f].field0_0x0._s_0.W = fVar1;
  uVar8 = param_1->PixelProgrammableDistanceSquared;
  uVar10 = param_1->MaterialDisplacementFadeOutSize;
  uVar9 = param_1->NaniteAssemblyTransformOffset;
  uVar11 = param_1->NaniteAssemblyTransformCount;
  param_2[0x20].field0_0x0._s_0.X = fVar5;
  param_2[0x20].field0_0x0._s_0.Y = fVar6;
  param_2[0x20].field0_0x0._s_0.Z = (float)uVar8;
  param_2[0x20].field0_0x0._s_0.W = (float)uVar10;
  fVar1 = param_1->AnimationMinScreenSize;
  param_2[0x21].field0_0x0._s_0.X = fVar3;
  param_2[0x21].field0_0x0._s_0.Y = fVar4;
  param_2[0x21].field0_0x0._s_0.Z = (float)uVar9;
  param_2[0x21].field0_0x0._s_0.W = (float)uVar11;
  uVar16 = *(undefined8 *)&(param_1->CustomPrimitiveData).Elements[1].field0_0x0;
  uVar17 = *(undefined8 *)((longlong)&(param_1->CustomPrimitiveData).Elements[1].field0_0x0 + 8);
  *(ulonglong *)&param_2[0x22].field0_0x0 = CONCAT44(fVar1,uVar12);
  *(undefined8 *)((longlong)&param_2[0x22].field0_0x0 + 8) = 0;
  uVar18 = *(undefined8 *)((longlong)&(param_1->CustomPrimitiveData).Elements[0].field0_0x0 + 8);
  *(undefined8 *)&param_2[0x23].field0_0x0 =
       *(undefined8 *)&(param_1->CustomPrimitiveData).Elements[0].field0_0x0;
  *(undefined8 *)((longlong)&param_2[0x23].field0_0x0 + 8) = uVar18;
  uVar18 = *(undefined8 *)((longlong)&(param_1->CustomPrimitiveData).Elements[2].field0_0x0 + 8);
  *(undefined8 *)&param_2[0x25].field0_0x0 =
       *(undefined8 *)&(param_1->CustomPrimitiveData).Elements[2].field0_0x0;
  *(undefined8 *)((longlong)&param_2[0x25].field0_0x0 + 8) = uVar18;
  uVar18 = *(undefined8 *)&(param_1->CustomPrimitiveData).Elements[4].field0_0x0;
  uVar19 = *(undefined8 *)((longlong)&(param_1->CustomPrimitiveData).Elements[4].field0_0x0 + 8);
  *(undefined8 *)&param_2[0x24].field0_0x0 = uVar16;
  *(undefined8 *)((longlong)&param_2[0x24].field0_0x0 + 8) = uVar17;
  uVar16 = *(undefined8 *)&(param_1->CustomPrimitiveData).Elements[3].field0_0x0;
  uVar17 = *(undefined8 *)((longlong)&(param_1->CustomPrimitiveData).Elements[3].field0_0x0 + 8);
  *(undefined8 *)&param_2[0x27].field0_0x0 = uVar18;
  *(undefined8 *)((longlong)&param_2[0x27].field0_0x0 + 8) = uVar19;
  uVar18 = *(undefined8 *)&(param_1->CustomPrimitiveData).Elements[6].field0_0x0;
  uVar19 = *(undefined8 *)((longlong)&(param_1->CustomPrimitiveData).Elements[6].field0_0x0 + 8);
  *(undefined8 *)&param_2[0x26].field0_0x0 = uVar16;
  *(undefined8 *)((longlong)&param_2[0x26].field0_0x0 + 8) = uVar17;
  uVar16 = *(undefined8 *)&(param_1->CustomPrimitiveData).Elements[5].field0_0x0;
  uVar17 = *(undefined8 *)((longlong)&(param_1->CustomPrimitiveData).Elements[5].field0_0x0 + 8);
  *(undefined8 *)&param_2[0x29].field0_0x0 = uVar18;
  *(undefined8 *)((longlong)&param_2[0x29].field0_0x0 + 8) = uVar19;
  uVar18 = *(undefined8 *)&(param_1->CustomPrimitiveData).Elements[8].field0_0x0;
  uVar19 = *(undefined8 *)((longlong)&(param_1->CustomPrimitiveData).Elements[8].field0_0x0 + 8);
  *(undefined8 *)&param_2[0x28].field0_0x0 = uVar16;
  *(undefined8 *)((longlong)&param_2[0x28].field0_0x0 + 8) = uVar17;
  uVar16 = *(undefined8 *)&(param_1->CustomPrimitiveData).Elements[7].field0_0x0;
  uVar17 = *(undefined8 *)((longlong)&(param_1->CustomPrimitiveData).Elements[7].field0_0x0 + 8);
  *(undefined8 *)&param_2[0x2b].field0_0x0 = uVar18;
  *(undefined8 *)((longlong)&param_2[0x2b].field0_0x0 + 8) = uVar19;
  *(undefined8 *)&param_2[0x2a].field0_0x0 = uVar16;
  *(undefined8 *)((longlong)&param_2[0x2a].field0_0x0 + 8) = uVar17;
  return;
}

