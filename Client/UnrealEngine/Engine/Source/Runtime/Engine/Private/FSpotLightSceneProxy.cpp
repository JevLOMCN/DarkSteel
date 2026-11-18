// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// AffectsBounds @ 1479b15d0

bool __thiscall
FSpotLightSceneProxy::AffectsBounds
          (FSpotLightSceneProxy *this,TBoxSphereBounds<double,double> *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  bVar5 = FLocalLightSceneProxy::AffectsBounds((FLocalLightSceneProxy *)this,param_1);
  if (bVar5) {
    fVar1 = this->SinOuterCone;
    dVar2 = param_1->SphereRadius;
    dVar3 = (param_1->Origin).field0_0x0._s_0.X;
    dVar10 = (param_1->Origin).field0_0x0._s_0.Y;
    dVar4 = (param_1->Origin).field0_0x0._s_0.Z;
    dVar7 = dVar2 / (double)fVar1;
    dVar9 = dVar3 - (*(double *)&this->field_0x130 - dVar7 * *(double *)&this->field_0x50);
    dVar11 = dVar10 - (*(double *)&this->field_0x138 - dVar7 * *(double *)&this->field_0x70);
    dVar7 = dVar4 - (*(double *)&this->field_0x140 - dVar7 * *(double *)&this->field_0x90);
    fVar6 = (float)(dVar11 * *(double *)&this->field_0x70 + dVar9 * *(double *)&this->field_0x50 +
                   dVar7 * *(double *)&this->field_0x90);
    if ((0.0 < fVar6) &&
       ((float)(dVar9 * dVar9 + dVar11 * dVar11 + dVar7 * dVar7) *
        this->CosOuterCone * this->CosOuterCone <= fVar6 * fVar6)) {
      dVar10 = dVar10 - *(double *)&this->field_0x138;
      dVar3 = dVar3 - *(double *)&this->field_0x130;
      dVar4 = dVar4 - *(double *)&this->field_0x140;
      dVar11 = dVar10 * *(double *)&this->field_0x70 + dVar3 * *(double *)&this->field_0x50 +
               dVar4 * *(double *)&this->field_0x90;
      fVar8 = (float)(dVar10 * dVar10 + dVar3 * dVar3 + dVar4 * dVar4);
      fVar6 = (float)(double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) ^
                                      __xmm_80000000000000008000000000000000._4_4_,
                                      SUB84(dVar11,0) ^ (uint)__xmm_80000000000000008000000000000000
                                     );
      if ((0.0 < fVar6) && (fVar1 * fVar1 * fVar8 <= fVar6 * fVar6)) {
        return (double)fVar8 <= dVar2 * dVar2;
      }
      return true;
    }
  }
  return false;
}

// GetBoundingSphere @ 1479c4620

TSphere<double> * __thiscall
FSpotLightSceneProxy::GetBoundingSphere
          (FSpotLightSceneProxy *this,TSphere<double> *__return_storage_ptr__)

{
  TVector<double>_u_0 local_38;
  TVector<double>_u_0 local_20;
  
  local_38._s_0.X = (double)*(undefined8 *)&this->field_0x50;
  local_38._s_0.Y = (double)*(undefined8 *)&this->field_0x70;
  local_38._s_0.Z = (double)*(undefined8 *)&this->field_0x90;
  local_20._s_0.X = (double)*(undefined8 *)&this->field_0x130;
  local_20._s_0.Y = (double)*(undefined8 *)&this->field_0x138;
  local_20._s_0.Z = (double)*(undefined8 *)&this->field_0x140;
  FMath::ComputeBoundingSphereForCone<double>
            (__return_storage_ptr__,(TVector<double> *)&local_20._s_0,
             (TVector<double> *)&local_38._s_0,(double)*(float *)&this->field_0x250,
             (double)this->CosOuterCone,(double)this->SinOuterCone);
  return __return_storage_ptr__;
}

// GetEffectiveScreenRadius @ 1479c8e20

float __thiscall
FSpotLightSceneProxy::GetEffectiveScreenRadius(FSpotLightSceneProxy *this,FViewMatrices *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  
  dVar2 = *(double *)&this->field_0x50;
  dVar12 = *(double *)&this->field_0x130;
  dVar10 = *(double *)&this->field_0x70;
  dVar3 = *(double *)&this->field_0x138;
  dVar4 = *(double *)&this->field_0x90;
  dVar5 = *(double *)&this->field_0x140;
  fVar8 = (float)(**(code **)(*(longlong *)this + 0x18))();
  fVar1 = this->SinOuterCone;
  dVar7 = (double)fVar8;
  dVar6 = (double)this->CosOuterCone;
  fVar9 = (float)(**(code **)(*(longlong *)this + 0x18))(this);
  dVar10 = (dVar7 * dVar10 * dVar6 + dVar3) - (param_1->ViewOrigin).field0_0x0._s_0.Y;
  dVar12 = (dVar7 * dVar2 * dVar6 + dVar12) - (param_1->ViewOrigin).field0_0x0._s_0.X;
  dVar2 = (dVar7 * dVar4 * dVar6 + dVar5) - (param_1->ViewOrigin).field0_0x0._s_0.Z;
  auVar11._0_8_ = dVar10 * dVar10 + dVar12 * dVar12 + dVar2 * dVar2;
  auVar11._8_8_ = 0;
  auVar11 = sqrtpd(auVar11,auVar11);
  fVar8 = (float)auVar11._0_8_;
  if ((float)auVar11._0_8_ <= __real_3f800000) {
    fVar8 = __real_3f800000;
  }
  return (fVar9 * fVar1 * param_1->ScreenScale) / fVar8;
}

// GetEffectiveScreenRadius @ 1479c8f90

float __thiscall
FSpotLightSceneProxy::GetEffectiveScreenRadius
          (FSpotLightSceneProxy *this,FViewMatrices *param_1,TIntPoint<int> *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  double dVar13;
  double dVar14;
  
  dVar14 = *(double *)&this->field_0x50;
  dVar2 = *(double *)&this->field_0x130;
  dVar3 = *(double *)&this->field_0x70;
  dVar4 = *(double *)&this->field_0x138;
  dVar5 = *(double *)&this->field_0x90;
  dVar6 = *(double *)&this->field_0x140;
  fVar10 = (float)(**(code **)(*(longlong *)this + 0x18))();
  fVar1 = this->SinOuterCone;
  dVar9 = (double)fVar10;
  dVar8 = (double)this->CosOuterCone;
  fVar10 = (float)(**(code **)(*(longlong *)this + 0x18))(this);
  dVar13 = (double)((float)(param_2->field0_0x0)._s_0.Y * __real_3f000000) *
           (param_1->ProjectionScale).field0_0x0._s_0.Y;
  dVar3 = (dVar9 * dVar3 * dVar8 + dVar4) - (param_1->ViewOrigin).field0_0x0._s_0.Y;
  auVar11._0_8_ =
       (double)((float)(param_2->field0_0x0)._s_0.X * __real_3f000000) *
       (param_1->ProjectionScale).field0_0x0._s_0.X;
  auVar11._8_8_ = 0;
  dVar4 = (dVar9 * dVar5 * dVar8 + dVar6) - (param_1->ViewOrigin).field0_0x0._s_0.Z;
  if (dVar13 <= auVar11._0_8_) {
    dVar13 = auVar11._0_8_;
  }
  dVar14 = (dVar9 * dVar14 * dVar8 + dVar2) - (param_1->ViewOrigin).field0_0x0._s_0.X;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = dVar3 * dVar3 + dVar14 * dVar14 + dVar4 * dVar4;
  auVar11 = sqrtpd(auVar11,auVar7);
  fVar12 = (float)auVar11._0_8_;
  if ((float)auVar11._0_8_ <= __real_3f800000) {
    fVar12 = __real_3f800000;
  }
  return ((float)dVar13 * fVar10 * fVar1) / fVar12;
}

// GetLightShaderParameters @ 1479ca7d0

void __thiscall
FSpotLightSceneProxy::GetLightShaderParameters
          (FSpotLightSceneProxy *this,FLightRenderParameters *param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  
  dVar3 = *(double *)&this->field_0x138;
  dVar4 = *(double *)&this->field_0x140;
  (param_1->WorldPosition).field0_0x0._s_0.X = *(double *)&this->field_0x130;
  (param_1->WorldPosition).field0_0x0._s_0.Y = dVar3;
  (param_1->WorldPosition).field0_0x0._s_0.Z = dVar4;
  uVar2 = __xmm_80000000000000008000000000000000;
  param_1->InvRadius = *(float *)&this->field_0x254;
  uVar1 = *(undefined8 *)&this->field_0x48;
  *(undefined8 *)&(param_1->Color).field0_0x0 = *(undefined8 *)&this->field_0x40;
  *(undefined8 *)((longlong)&(param_1->Color).field0_0x0 + 8) = uVar1;
  param_1->FalloffExponent = *(float *)&this->field_0x268;
  uVar1 = *(undefined8 *)&this->field_0x70;
  uVar6 = (uint)uVar2;
  uVar7 = (uint)((ulonglong)uVar2 >> 0x20);
  uVar2 = *(undefined8 *)&this->field_0x90;
  (param_1->Direction).field0_0x0._s_0.X =
       (float)(double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->field_0x50 >> 0x20) ^ uVar7,
                               (uint)*(undefined8 *)&this->field_0x50 ^ uVar6);
  (param_1->Direction).field0_0x0._s_0.Y =
       (float)(double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar7,(uint)uVar1 ^ uVar6);
  (param_1->Direction).field0_0x0._s_0.Z =
       (float)(double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) ^ uVar7,(uint)uVar2 ^ uVar6);
  dVar3 = *(double *)&this->field_0x80;
  dVar4 = *(double *)&this->field_0xa0;
  (param_1->Tangent).field0_0x0._s_0.X = (float)*(double *)&this->field_0x60;
  (param_1->Tangent).field0_0x0._s_0.Y = (float)dVar3;
  (param_1->Tangent).field0_0x0._s_0.Z = (float)dVar4;
  (param_1->SpotAngles).field0_0x0 = *(TVector2<float>_u_0 *)&this->CosOuterCone;
  fVar5 = *(float *)&this->field_0x178;
  if (__real_3f800000 <= *(float *)&this->field_0x178) {
    fVar5 = __real_3f800000;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  param_1->SpecularScale = fVar5;
  fVar5 = *(float *)&this->field_0x17c;
  if (__real_3f800000 <= *(float *)&this->field_0x17c) {
    fVar5 = __real_3f800000;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  param_1->DiffuseScale = fVar5;
  param_1->SourceRadius = *(float *)&this->field_0x26c;
  param_1->SoftSourceRadius = *(float *)&this->field_0x270;
  param_1->SourceLength = *(float *)&this->field_0x274;
  param_1->RectLightBarnCosAngle = 0.0;
  param_1->RectLightBarnLength = -2.0;
  (param_1->RectLightAtlasUVOffset).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  (param_1->RectLightAtlasUVScale).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  param_1->RectLightAtlasMaxLevel = 32.0;
  param_1->IESAtlasIndex = -1.0;
  param_1->LightFunctionAtlasLightIndex = (uint)(byte)this->field_0x1de;
  param_1->bAffectsTranslucentLighting = (byte)this->field_0x1db >> 2 & 1;
  param_1->InverseExposureBlend = *(float *)&this->field_0x260;
  if (*(int *)&this->field_0x23c != -1) {
                    /* WARNING: Could not recover jumptable at 0x0001479ca978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)&this->field_0x10 + 0x330))(*(longlong **)&this->field_0x10,this);
    return;
  }
  return;
}

// GetOuterConeAngle @ 1479ccb40

float __thiscall FSpotLightSceneProxy::GetOuterConeAngle(FSpotLightSceneProxy *this)

{
  return this->OuterConeAngle;
}

// GetWholeSceneProjectedShadowInitializer @ 1479d52f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

bool __thiscall
FSpotLightSceneProxy::GetWholeSceneProjectedShadowInitializer
          (FSpotLightSceneProxy *this,FSceneViewFamily *param_1,
          TArray<FWholeSceneProjectedShadowInitializer,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  double dVar1;
  double dVar2;
  ForElementType<FWholeSceneProjectedShadowInitializer> FVar3;
  undefined1 auVar4 [16];
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  bool bVar31;
  int iVar32;
  Type TVar33;
  EShaderPlatform EVar34;
  uint *puVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_f0;
  TVector<double>_u_0 local_d8;
  uint local_c0;
  uint uStack_bc;
  
  iVar32 = param_2->ArrayNum;
  if (iVar32 == param_2->ArrayMax) {
    iVar32 = UE::Core::Private::
             ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<FWholeSceneProjectedShadowInitializer>_>
                       (0x3a0,0x10,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar32 + 1;
  FVar3 = (param_2->AllocatorInstance).SecondaryData;
  if (FVar3 != (ForElementType<FWholeSceneProjectedShadowInitializer>)0x0) {
    param_2 = (TArray<FWholeSceneProjectedShadowInitializer,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>
               *)FVar3;
  }
  puVar35 = (uint *)((longlong)param_2 + (longlong)iVar32 * 0x3a0);
  DefaultConstructItems<FWholeSceneProjectedShadowInitializer,int>(puVar35,1);
  uVar36 = *(uint *)&this->field_0x134 ^ __xmm_80000000000000008000000000000000._4_4_;
  uVar37 = *(uint *)&this->field_0x138 ^ _UNK_15066df78;
  uVar38 = *(uint *)&this->field_0x13c ^ _UNK_15066df7c;
  uVar39 = (uint)*(undefined8 *)&this->field_0x140 ^ (uint)__xmm_80000000000000008000000000000000;
  uVar40 = (uint)((ulonglong)*(undefined8 *)&this->field_0x140 >> 0x20) ^
           __xmm_80000000000000008000000000000000._4_4_;
  *puVar35 = *(uint *)&this->field_0x130 ^ (uint)__xmm_80000000000000008000000000000000;
  puVar35[1] = uVar36;
  puVar35[2] = uVar37;
  puVar35[3] = uVar38;
  *(ulonglong *)(puVar35 + 4) = CONCAT44(uVar40,uVar39);
  uVar9 = *(undefined4 *)&this->field_0x60;
  uVar10 = *(undefined4 *)&this->field_0x64;
  uVar11 = *(undefined4 *)&this->field_0x68;
  uVar12 = *(undefined4 *)&this->field_0x6c;
  uVar6 = *(undefined4 *)&this->field_0x54;
  uVar7 = *(undefined4 *)&this->field_0x58;
  uVar8 = *(undefined4 *)&this->field_0x5c;
  uVar13 = *(undefined4 *)&this->field_0x70;
  uVar14 = *(undefined4 *)&this->field_0x74;
  uVar15 = *(undefined4 *)&this->field_0x78;
  uVar16 = *(undefined4 *)&this->field_0x7c;
  uVar17 = *(undefined4 *)&this->field_0x80;
  uVar18 = *(undefined4 *)&this->field_0x84;
  uVar19 = *(undefined4 *)&this->field_0x88;
  uVar20 = *(undefined4 *)&this->field_0x8c;
  uVar21 = *(undefined4 *)&this->field_0x90;
  uVar22 = *(undefined4 *)&this->field_0x94;
  uVar23 = *(undefined4 *)&this->field_0x98;
  uVar24 = *(undefined4 *)&this->field_0x9c;
  uVar25 = *(undefined4 *)&this->field_0xa0;
  uVar26 = *(undefined4 *)&this->field_0xa4;
  uVar27 = *(undefined4 *)&this->field_0xa8;
  uVar28 = *(undefined4 *)&this->field_0xac;
  uVar29 = *(undefined4 *)&this->field_0xc8;
  uVar30 = *(undefined4 *)&this->field_0xcc;
  puVar35[8] = *(undefined4 *)&this->field_0x50;
  puVar35[9] = uVar6;
  puVar35[10] = uVar7;
  puVar35[0xb] = uVar8;
  puVar35[0xc] = uVar9;
  puVar35[0xd] = uVar10;
  puVar35[0xe] = uVar11;
  puVar35[0xf] = uVar12;
  puVar35[0x10] = uVar13;
  puVar35[0x11] = uVar14;
  puVar35[0x12] = uVar15;
  puVar35[0x13] = uVar16;
  puVar35[0x14] = uVar17;
  puVar35[0x15] = uVar18;
  puVar35[0x16] = uVar19;
  puVar35[0x17] = uVar20;
  puVar35[0x18] = uVar21;
  puVar35[0x19] = uVar22;
  puVar35[0x1a] = uVar23;
  puVar35[0x1b] = uVar24;
  puVar35[0x1c] = uVar25;
  puVar35[0x1d] = uVar26;
  puVar35[0x1e] = uVar27;
  puVar35[0x1f] = uVar28;
  puVar35[0x20] = 0;
  puVar35[0x21] = 0;
  puVar35[0x22] = 0;
  puVar35[0x23] = 0;
  puVar35[0x24] = 0;
  puVar35[0x25] = 0;
  puVar35[0x26] = uVar29;
  puVar35[0x27] = uVar30;
  dVar5 = (double)this->InvTanOuterCone;
  auVar4._8_4_ = SUB84(dVar5,0);
  auVar4._0_8_ = dVar5;
  auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])(puVar35 + 0x28) = auVar4;
  local_108._s_0.X = (double)*(undefined8 *)&this->field_0x50;
  local_108._s_0.Y = (double)*(undefined8 *)&this->field_0x70;
  dVar5 = *(double *)&this->field_0x130;
  dVar1 = *(double *)&this->field_0x138;
  dVar2 = *(double *)&this->field_0x140;
  local_108._s_0.Z = (double)*(undefined8 *)&this->field_0x90;
  local_f0._s_0.X = dVar5;
  local_f0._s_0.Y = dVar1;
  local_f0._s_0.Z = dVar2;
  FMath::ComputeBoundingSphereForCone<double>
            ((TSphere<double> *)&local_d8._s_0,(TVector<double> *)&local_f0._s_0,
             (TVector<double> *)&local_108._s_0,(double)*(float *)&this->field_0x250,
             (double)this->CosOuterCone,(double)this->SinOuterCone);
  *(double *)(puVar35 + 0x2c) = local_d8._s_0.X - dVar5;
  *(double *)(puVar35 + 0x2e) = local_d8._s_0.Y - dVar1;
  *(double *)(puVar35 + 0x30) = local_d8._s_0.Z - dVar2;
  puVar35[0x32] = local_c0;
  puVar35[0x33] = uStack_bc;
  puVar35[0x34] = local_c0;
  puVar35[0x35] = uStack_bc;
  puVar35[0x36] = local_c0;
  puVar35[0x37] = uStack_bc;
  puVar35[0x38] = local_c0;
  puVar35[0x39] = uStack_bc;
  puVar35[0x3c] = 0;
  puVar35[0x3d] = 0;
  puVar35[0x3e] = 0;
  puVar35[0x3f] = 0;
  puVar35[0x40] = 0;
  puVar35[0x41] = 0x3ff00000;
  puVar35[0x42] = 0;
  puVar35[0x43] = 0;
  puVar35[0x44] = 0x3dcccccd;
  puVar35[0x45] = *(uint *)&this->field_0x250;
  if ((this->field_0x1db & 0x10) != 0) {
    TVar33 = FSceneViewFamily::GetFeatureLevel(param_1);
    if (TVar33 == Num) {
      EVar34 = SP_NumPlatforms;
    }
    else {
      EVar34 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar33];
    }
    bVar31 = DoesPlatformSupportDistanceFieldShadowing(EVar34);
    if (bVar31) {
      *(undefined1 *)((longlong)puVar35 + 0x391) = 1;
      return true;
    }
  }
  *(undefined1 *)((longlong)puVar35 + 0x391) = 0;
  return true;
}

