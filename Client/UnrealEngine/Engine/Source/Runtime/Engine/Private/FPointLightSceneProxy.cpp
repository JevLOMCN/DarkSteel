// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// GetLightShaderParameters @ 1478d5810

void __thiscall
FPointLightSceneProxy::GetLightShaderParameters
          (FPointLightSceneProxy *this,FLightRenderParameters *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  
  dVar3 = (double)this->_padding_;
  dVar4 = (double)this->_padding_;
  (param_1->WorldPosition).field0_0x0._s_0.X = (double)this->_padding_;
  (param_1->WorldPosition).field0_0x0._s_0.Y = dVar3;
  (param_1->WorldPosition).field0_0x0._s_0.Z = dVar4;
  uVar5 = __xmm_80000000000000008000000000000000;
  param_1->InvRadius = *(float *)((longlong)&this->_padding_ + 4);
  lVar1 = this->_padding_;
  *(longlong *)&(param_1->Color).field0_0x0 = this->_padding_;
  *(longlong *)((longlong)&(param_1->Color).field0_0x0 + 8) = lVar1;
  param_1->FalloffExponent = this->FalloffExponent;
  lVar1 = this->_padding_;
  uVar7 = (uint)uVar5;
  uVar8 = (uint)((ulonglong)uVar5 >> 0x20);
  lVar2 = this->_padding_;
  (param_1->Direction).field0_0x0._s_0.X =
       (float)(double)CONCAT44((uint)((ulonglong)this->_padding_ >> 0x20) ^ uVar8,
                               (uint)this->_padding_ ^ uVar7);
  (param_1->Direction).field0_0x0._s_0.Y =
       (float)(double)CONCAT44((uint)((ulonglong)lVar1 >> 0x20) ^ uVar8,(uint)lVar1 ^ uVar7);
  (param_1->Direction).field0_0x0._s_0.Z =
       (float)(double)CONCAT44((uint)((ulonglong)lVar2 >> 0x20) ^ uVar8,(uint)lVar2 ^ uVar7);
  dVar3 = (double)this->_padding_;
  dVar4 = (double)this->_padding_;
  (param_1->Tangent).field0_0x0._s_0.X = (float)(double)this->_padding_;
  (param_1->Tangent).field0_0x0._s_0.Y = (float)dVar3;
  (param_1->Tangent).field0_0x0._s_0.Z = (float)dVar4;
  (param_1->SpotAngles).field0_0x0 = (TVector2<float>_u_0)0x3f800000c0000000;
  fVar6 = *(float *)&this->_padding_;
  if (__real_3f800000 <= *(float *)&this->_padding_) {
    fVar6 = __real_3f800000;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  param_1->SpecularScale = fVar6;
  fVar6 = *(float *)((longlong)&this->_padding_ + 4);
  if (__real_3f800000 <= fVar6) {
    fVar6 = __real_3f800000;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  param_1->DiffuseScale = fVar6;
  param_1->SourceRadius = this->SourceRadius;
  param_1->SoftSourceRadius = this->SoftSourceRadius;
  param_1->SourceLength = this->SourceLength;
  param_1->RectLightBarnCosAngle = 0.0;
  param_1->RectLightBarnLength = -2.0;
  (param_1->RectLightAtlasUVOffset).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  (param_1->RectLightAtlasUVScale).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  param_1->RectLightAtlasMaxLevel = 32.0;
  param_1->IESAtlasIndex = -1.0;
  param_1->InverseExposureBlend = *(float *)&this->_padding_;
  param_1->LightFunctionAtlasLightIndex = (uint)*(byte *)((longlong)&this->_padding_ + 6);
  param_1->bAffectsTranslucentLighting = *(byte *)((longlong)&this->_padding_ + 3) >> 2 & 1;
  if (*(int *)((longlong)&this->_padding_ + 4) != -1) {
                    /* WARNING: Could not recover jumptable at 0x0001478d59ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this->_padding_ + 0x330))((longlong *)this->_padding_,this);
    return;
  }
  return;
}

// GetPerObjectProjectedShadowProjectionPoint @ 1478d7c20

TVector<double> * __thiscall
FPointLightSceneProxy::GetPerObjectProjectedShadowProjectionPoint
          (FPointLightSceneProxy *this,TVector<double> *__return_storage_ptr__,
          TBoxSphereBounds<double,double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 local_40 [2];
  
  dVar3 = (double)this->SourceLength;
  dVar2 = dVar3 * (double)this->_padding_ * __real_3fe0000000000000;
  dVar1 = dVar3 * (double)this->_padding_ * __real_3fe0000000000000;
  dVar3 = dVar3 * (double)this->_padding_ * __real_3fe0000000000000;
  local_58._s_0.X = dVar2 + (double)this->_padding_;
  local_40[0]._0_8_ = (double)this->_padding_ - dVar2;
  local_58._s_0.Y = dVar1 + (double)this->_padding_;
  local_40[0]._8_8_ = (double)this->_padding_ - dVar1;
  local_58._s_0.Z = dVar3 + (double)this->_padding_;
  local_40[0]._16_8_ = (double)this->_padding_ - dVar3;
  FMath::ClosestPointOnSegment<double>
            (__return_storage_ptr__,&param_1->Origin,(TVector<double> *)&local_40[0]._s_0,
             (TVector<double> *)&local_58._s_0);
  return __return_storage_ptr__;
}

// GetSourceRadius @ 1478db8f0

float __thiscall FPointLightSceneProxy::GetSourceRadius(FPointLightSceneProxy *this)

{
  return this->SourceRadius;
}

// GetWholeSceneProjectedShadowInitializer @ 1478ded80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

bool __thiscall
FPointLightSceneProxy::GetWholeSceneProjectedShadowInitializer
          (FPointLightSceneProxy *this,FSceneViewFamily *param_1,
          TArray<FWholeSceneProjectedShadowInitializer,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  float fVar1;
  ForElementType<FWholeSceneProjectedShadowInitializer> FVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 uVar20;
  Type TVar21;
  uint uVar22;
  uint *puVar23;
  uint *puVar24;
  EShaderPlatform EVar25;
  EShaderPlatform EVar26;
  uint uVar27;
  uint uVar28;
  undefined4 uVar29;
  uint uVar30;
  uint uVar31;
  
  TVar21 = FSceneViewFamily::GetFeatureLevel(param_1);
  EVar26 = SP_NumPlatforms;
  if ((int)TVar21 < 3) {
    TVar21 = FSceneViewFamily::GetFeatureLevel(param_1);
    if (TVar21 == Num) {
      EVar25 = SP_NumPlatforms;
    }
    else {
      EVar25 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar21];
    }
    bVar19 = DoesRuntimeSupportOnePassPointLightShadows(EVar25);
    if (!bVar19) {
      return false;
    }
  }
  if (GAllowPointLightCubemapShadows == 0) {
    return false;
  }
  uVar22 = param_2->ArrayNum;
  if (uVar22 == param_2->ArrayMax) {
    uVar22 = UE::Core::Private::
             ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<FWholeSceneProjectedShadowInitializer>_>
                       (0x3a0,0x10,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  puVar24 = (uint *)0x0;
  param_2->ArrayNum = uVar22 + 1;
  uVar27 = 0;
  if ((int)uVar22 < (int)(uVar22 + 1)) {
    uVar27 = ~uVar22 >> 0x1f;
  }
  if ((uVar27 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar3 = (code *)swi(3);
    uVar20 = (*pcVar3)();
    return (bool)uVar20;
  }
  FVar2 = (param_2->AllocatorInstance).SecondaryData;
  if (FVar2 != (ForElementType<FWholeSceneProjectedShadowInitializer>)0x0) {
    param_2 = (TArray<FWholeSceneProjectedShadowInitializer,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>
               *)FVar2;
  }
  puVar23 = (uint *)((longlong)param_2 + (longlong)(int)uVar22 * 0x3a0);
  if (puVar23 != (uint *)0x0) {
    puVar23[0x80] = 0;
    puVar23[0x81] = 0;
    puVar23[0x3c] = 0;
    puVar23[0x3d] = 0;
    puVar23[0x3e] = 0;
    puVar23[0x3f] = 0;
    puVar23[0x40] = 0;
    puVar23[0x41] = 0;
    puVar23[0x42] = 0;
    puVar23[0x43] = 0x3ff00000;
    puVar23[0x48] = 0;
    puVar23[0x49] = 0x55000000;
    puVar23[0x4a] = 0;
    puVar23[0x4b] = 0;
    puVar23[0x4c] = 0x55000000;
    puVar23[0x4d] = 0;
    puVar23[0x84] = 0;
    puVar23[0x85] = 6;
    puVar23[200] = 0;
    puVar23[0xc9] = 0;
    puVar23[0xcc] = 0;
    puVar23[0xcd] = 8;
    *(undefined1 *)(puVar23 + 0xe0) = 0;
    puVar23[0xe1] = 0xffffffff;
    puVar23[0xe2] = 0x3f800000;
    *(undefined2 *)(puVar23 + 0xe4) = 0;
    puVar24 = puVar23;
  }
  uVar22 = *(uint *)((longlong)&this->_padding_ + 4) ^ __xmm_80000000000000008000000000000000._4_4_;
  uVar27 = (uint)this->_padding_ ^ _UNK_15066df78;
  uVar28 = *(uint *)((longlong)&this->_padding_ + 4) ^ _UNK_15066df7c;
  uVar30 = (uint)this->_padding_ ^ (uint)__xmm_80000000000000008000000000000000;
  uVar31 = (uint)((ulonglong)this->_padding_ >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_
  ;
  *puVar24 = (uint)this->_padding_ ^ (uint)__xmm_80000000000000008000000000000000;
  puVar24[1] = uVar22;
  puVar24[2] = uVar27;
  puVar24[3] = uVar28;
  *(ulonglong *)(puVar24 + 4) = CONCAT44(uVar31,uVar30);
  lVar8 = this->_padding_;
  lVar9 = this->_padding_;
  lVar10 = this->_padding_;
  lVar11 = this->_padding_;
  lVar7 = this->_padding_;
  lVar12 = this->_padding_;
  lVar13 = this->_padding_;
  lVar14 = this->_padding_;
  lVar15 = this->_padding_;
  lVar16 = this->_padding_;
  lVar17 = this->_padding_;
  lVar18 = this->_padding_;
  *(longlong *)(puVar24 + 8) = this->_padding_;
  *(longlong *)(puVar24 + 10) = lVar12;
  *(longlong *)(puVar24 + 0xc) = lVar13;
  *(longlong *)(puVar24 + 0xe) = lVar14;
  *(longlong *)(puVar24 + 0x10) = lVar15;
  *(longlong *)(puVar24 + 0x12) = lVar16;
  *(longlong *)(puVar24 + 0x14) = lVar17;
  *(longlong *)(puVar24 + 0x16) = lVar18;
  *(longlong *)(puVar24 + 0x18) = lVar8;
  *(longlong *)(puVar24 + 0x1a) = lVar9;
  *(longlong *)(puVar24 + 0x1c) = lVar10;
  *(longlong *)(puVar24 + 0x1e) = lVar11;
  puVar24[0x20] = 0;
  puVar24[0x21] = 0;
  puVar24[0x22] = 0;
  puVar24[0x23] = 0;
  puVar24[0x24] = 0;
  puVar24[0x25] = 0;
  *(longlong *)(puVar24 + 0x26) = lVar7;
  puVar24[0x28] = 0;
  puVar24[0x29] = 0x3ff00000;
  puVar24[0x2a] = 0;
  puVar24[0x2b] = 0x3ff00000;
  fVar1 = *(float *)&this->_padding_;
  puVar24[0x2c] = 0;
  puVar24[0x2d] = 0;
  puVar24[0x2e] = 0;
  puVar24[0x2f] = 0;
  puVar24[0x30] = 0;
  puVar24[0x31] = 0;
  dVar6 = (double)fVar1;
  uVar29 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar4._8_4_ = SUB84(dVar6,0);
  auVar4._0_8_ = dVar6;
  auVar4._12_4_ = uVar29;
  *(undefined1 (*) [16])(puVar24 + 0x32) = auVar4;
  auVar5._8_4_ = SUB84(dVar6,0);
  auVar5._0_8_ = dVar6;
  auVar5._12_4_ = uVar29;
  *(undefined1 (*) [16])(puVar24 + 0x36) = auVar5;
  puVar24[0x3c] = 0;
  puVar24[0x3d] = 0;
  puVar24[0x3e] = 0;
  puVar24[0x3f] = 0;
  puVar24[0x40] = 0;
  puVar24[0x41] = 0x3ff00000;
  puVar24[0x42] = 0;
  puVar24[0x43] = 0;
  puVar24[0x44] = 0x3dcccccd;
  puVar24[0x45] = (uint)this->_padding_;
  *(undefined1 *)(puVar24 + 0xe4) = 1;
  if ((this->_padding_ & 0x10000000) != 0) {
    TVar21 = FSceneViewFamily::GetFeatureLevel(param_1);
    if (TVar21 != Num) {
      EVar26 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar21];
    }
    bVar19 = DoesPlatformSupportDistanceFieldShadowing(EVar26);
    if (bVar19) {
      *(undefined1 *)((longlong)puVar24 + 0x391) = 1;
      return true;
    }
  }
  *(undefined1 *)((longlong)puVar24 + 0x391) = 0;
  return true;
}

// IsInverseSquared @ 1478e12a0

bool __thiscall FPointLightSceneProxy::IsInverseSquared(FPointLightSceneProxy *this)

{
  return this->bInverseSquared;
}

