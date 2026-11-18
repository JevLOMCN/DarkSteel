// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FRectLightSceneProxy @ 147929280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FRectLightSceneProxy * __thiscall
FRectLightSceneProxy::FRectLightSceneProxy(FRectLightSceneProxy *this,URectLightComponent *param_1)

{
  float fVar1;
  undefined1 auVar2 [16];
  TVector4<float>_u_0 TVar3;
  
  FLocalLightSceneProxy::FLocalLightSceneProxy
            ((FLocalLightSceneProxy *)this,(ULocalLightComponent *)param_1);
  this->_padding_ = (longlong)&___7FRectLightSceneProxy__6B_;
  this->SourceWidth = param_1->SourceWidth;
  this->SourceHeight = param_1->SourceHeight;
  fVar1 = param_1->BarnDoorAngle;
  if (__real_42b00000 <= param_1->BarnDoorAngle) {
    fVar1 = __real_42b00000;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  this->BarnDoorAngle = fVar1;
  fVar1 = param_1->BarnDoorLength;
  if (param_1->BarnDoorLength <= __real_3dcccccd) {
    fVar1 = __real_3dcccccd;
  }
  this->BarnDoorLength = fVar1;
  this->SourceTexture = (UTexture *)(param_1->SourceTexture).field0_0x0;
  fVar1 = param_1->LightFunctionConeAngle;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  else {
    if (__real_42b20000 <= fVar1) {
      fVar1 = __real_42b20000;
    }
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    fVar1 = tanf(fVar1 * __real_3c8efa36);
  }
  this->LightFunctionConeAngleTangent = fVar1;
  auVar2._0_8_ = param_1->SourceTextureScale;
  auVar2._8_8_ = param_1->SourceTextureOffset;
  auVar2 = minps(auVar2,___xmm_3f8000003f8000003f8000003f800000);
  TVar3 = (TVector4<float>_u_0)maxps(auVar2,ZEXT816(0));
  (this->SourceTextureScaleOffset).field0_0x0 = TVar3;
  this->RectAtlasId = 0xffffffff;
  return this;
}

// ~FRectLightSceneProxy @ 14792c9b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall FRectLightSceneProxy::~FRectLightSceneProxy(FRectLightSceneProxy *this)

{
  this->_padding_ = (longlong)&___7FRectLightSceneProxy__6B_;
  FLightSceneProxy::~FLightSceneProxy((FLightSceneProxy *)this);
  return;
}

// GetLightShaderParameters @ 147949930

void __thiscall
FRectLightSceneProxy::GetLightShaderParameters
          (FRectLightSceneProxy *this,FLightRenderParameters *param_1,uint param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  uint uVar14;
  
  fVar9 = __real_3f000000;
  fVar8 = __real_3f800000;
  fVar11 = *(float *)&this->_padding_;
  fVar1 = *(float *)((longlong)&this->_padding_ + 4);
  fVar6 = *(float *)&this->_padding_;
  fVar7 = *(float *)((longlong)&this->_padding_ + 4);
  fVar12 = __real_3f800000 / (this->SourceWidth * __real_3f000000 * this->SourceHeight);
  dVar4 = (double)this->_padding_;
  dVar5 = (double)this->_padding_;
  (param_1->WorldPosition).field0_0x0._s_0.X = (double)this->_padding_;
  (param_1->WorldPosition).field0_0x0._s_0.Y = dVar4;
  (param_1->WorldPosition).field0_0x0._s_0.Z = dVar5;
  param_1->InvRadius = *(float *)((longlong)&this->_padding_ + 4);
  (param_1->Color).field0_0x0._s_0.R = fVar12 * fVar11;
  (param_1->Color).field0_0x0._s_0.G = fVar12 * fVar1;
  (param_1->Color).field0_0x0._s_0.B = fVar12 * fVar6;
  (param_1->Color).field0_0x0._s_0.A = fVar12 * fVar7;
  uVar10 = __xmm_80000000000000008000000000000000;
  param_1->FalloffExponent = 0.0;
  lVar2 = this->_padding_;
  uVar13 = (uint)uVar10;
  uVar14 = (uint)((ulonglong)uVar10 >> 0x20);
  lVar3 = this->_padding_;
  (param_1->Direction).field0_0x0._s_0.X =
       (float)(double)CONCAT44((uint)((ulonglong)this->_padding_ >> 0x20) ^ uVar14,
                               (uint)this->_padding_ ^ uVar13);
  (param_1->Direction).field0_0x0._s_0.Y =
       (float)(double)CONCAT44((uint)((ulonglong)lVar2 >> 0x20) ^ uVar14,(uint)lVar2 ^ uVar13);
  (param_1->Direction).field0_0x0._s_0.Z =
       (float)(double)CONCAT44((uint)((ulonglong)lVar3 >> 0x20) ^ uVar14,(uint)lVar3 ^ uVar13);
  dVar4 = (double)this->_padding_;
  dVar5 = (double)this->_padding_;
  (param_1->Tangent).field0_0x0._s_0.X = (float)(double)this->_padding_;
  (param_1->Tangent).field0_0x0._s_0.Y = (float)dVar4;
  (param_1->Tangent).field0_0x0._s_0.Z = (float)dVar5;
  (param_1->SpotAngles).field0_0x0 = (TVector2<float>_u_0)0x3f800000c0000000;
  fVar11 = *(float *)&this->_padding_;
  if (fVar8 <= *(float *)&this->_padding_) {
    fVar11 = fVar8;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  param_1->SpecularScale = fVar11;
  fVar11 = *(float *)((longlong)&this->_padding_ + 4);
  if (fVar8 <= fVar11) {
    fVar11 = fVar8;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  param_1->DiffuseScale = fVar11;
  fVar11 = this->SourceWidth;
  param_1->SoftSourceRadius = 0.0;
  param_1->SourceRadius = fVar11 * fVar9;
  param_1->SourceLength = this->SourceHeight * fVar9;
  fVar11 = cosf(this->BarnDoorAngle * __real_3c8efa35);
  param_1->RectLightBarnCosAngle = fVar11;
  param_1->RectLightBarnLength = this->BarnDoorLength;
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
    (**(code **)(*(longlong *)this->_padding_ + 0x330))((longlong *)this->_padding_,this,param_1);
  }
  if (this->RectAtlasId != 0xffffffff) {
    (**(code **)(*(longlong *)this->_padding_ + 0x338))((longlong *)this->_padding_,this,param_1);
  }
  if ((param_2 & 1) != 0) {
    lVar2 = this->_padding_;
    lVar3 = this->_padding_;
    param_1->FalloffExponent = 8.0;
    *(longlong *)&(param_1->Color).field0_0x0 = lVar2;
    *(longlong *)((longlong)&(param_1->Color).field0_0x0 + 8) = lVar3;
    (param_1->SpotAngles).field0_0x0 = (TVector2<float>_u_0)0x40452cbc3c8ed3ce;
    fVar11 = this->SourceWidth;
    fVar1 = this->SourceHeight;
    param_1->SourceLength = 0.0;
    param_1->RectLightBarnCosAngle = 0.0;
    param_1->RectLightBarnLength = -2.0;
    param_1->SourceRadius = (fVar11 + fVar1) * __real_3e800000;
  }
  return;
}

// GetWholeSceneProjectedShadowInitializer @ 147951000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

bool __thiscall
FRectLightSceneProxy::GetWholeSceneProjectedShadowInitializer
          (FRectLightSceneProxy *this,FSceneViewFamily *param_1,
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
  EShaderPlatform EVar23;
  uint *puVar24;
  uint *puVar25;
  uint uVar26;
  uint uVar27;
  undefined4 uVar28;
  uint uVar29;
  uint uVar30;
  
  TVar21 = FSceneViewFamily::GetFeatureLevel(param_1);
  if (((int)TVar21 < 3) || (GAllowPointLightCubemapShadows == 0)) {
    bVar19 = false;
  }
  else {
    uVar22 = param_2->ArrayNum;
    if (uVar22 == param_2->ArrayMax) {
      uVar22 = UE::Core::Private::
               ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<FWholeSceneProjectedShadowInitializer>_>
                         (0x3a0,0x10,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    puVar25 = (uint *)0x0;
    param_2->ArrayNum = uVar22 + 1;
    uVar26 = 0;
    if ((int)uVar22 < (int)(uVar22 + 1)) {
      uVar26 = ~uVar22 >> 0x1f;
    }
    if ((uVar26 == 0) &&
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
    puVar24 = (uint *)((longlong)param_2 + (longlong)(int)uVar22 * 0x3a0);
    if (puVar24 != (uint *)0x0) {
      puVar24[0x80] = 0;
      puVar24[0x81] = 0;
      puVar24[0x3c] = 0;
      puVar24[0x3d] = 0;
      puVar24[0x3e] = 0;
      puVar24[0x3f] = 0;
      puVar24[0x40] = 0;
      puVar24[0x41] = 0;
      puVar24[0x42] = 0;
      puVar24[0x43] = 0x3ff00000;
      puVar24[0x48] = 0;
      puVar24[0x49] = 0x55000000;
      puVar24[0x4a] = 0;
      puVar24[0x4b] = 0;
      puVar24[0x4c] = 0x55000000;
      puVar24[0x4d] = 0;
      puVar24[0x84] = 0;
      puVar24[0x85] = 6;
      puVar24[200] = 0;
      puVar24[0xc9] = 0;
      puVar24[0xcc] = 0;
      puVar24[0xcd] = 8;
      *(undefined1 *)(puVar24 + 0xe0) = 0;
      puVar24[0xe1] = 0xffffffff;
      puVar24[0xe2] = 0x3f800000;
      *(undefined2 *)(puVar24 + 0xe4) = 0;
      puVar25 = puVar24;
    }
    uVar22 = *(uint *)((longlong)&this->_padding_ + 4) ^
             __xmm_80000000000000008000000000000000._4_4_;
    uVar26 = (uint)this->_padding_ ^ _UNK_15066df78;
    uVar27 = *(uint *)((longlong)&this->_padding_ + 4) ^ _UNK_15066df7c;
    uVar29 = (uint)this->_padding_ ^ (uint)__xmm_80000000000000008000000000000000;
    uVar30 = (uint)((ulonglong)this->_padding_ >> 0x20) ^
             __xmm_80000000000000008000000000000000._4_4_;
    *puVar25 = (uint)this->_padding_ ^ (uint)__xmm_80000000000000008000000000000000;
    puVar25[1] = uVar22;
    puVar25[2] = uVar26;
    puVar25[3] = uVar27;
    *(ulonglong *)(puVar25 + 4) = CONCAT44(uVar30,uVar29);
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
    *(longlong *)(puVar25 + 8) = this->_padding_;
    *(longlong *)(puVar25 + 10) = lVar12;
    *(longlong *)(puVar25 + 0xc) = lVar13;
    *(longlong *)(puVar25 + 0xe) = lVar14;
    *(longlong *)(puVar25 + 0x10) = lVar15;
    *(longlong *)(puVar25 + 0x12) = lVar16;
    *(longlong *)(puVar25 + 0x14) = lVar17;
    *(longlong *)(puVar25 + 0x16) = lVar18;
    *(longlong *)(puVar25 + 0x18) = lVar8;
    *(longlong *)(puVar25 + 0x1a) = lVar9;
    *(longlong *)(puVar25 + 0x1c) = lVar10;
    *(longlong *)(puVar25 + 0x1e) = lVar11;
    puVar25[0x20] = 0;
    puVar25[0x21] = 0;
    puVar25[0x22] = 0;
    puVar25[0x23] = 0;
    puVar25[0x24] = 0;
    puVar25[0x25] = 0;
    *(longlong *)(puVar25 + 0x26) = lVar7;
    puVar25[0x28] = 0;
    puVar25[0x29] = 0x3ff00000;
    puVar25[0x2a] = 0;
    puVar25[0x2b] = 0x3ff00000;
    fVar1 = *(float *)&this->_padding_;
    puVar25[0x2c] = 0;
    puVar25[0x2d] = 0;
    puVar25[0x2e] = 0;
    puVar25[0x2f] = 0;
    puVar25[0x30] = 0;
    puVar25[0x31] = 0;
    dVar6 = (double)fVar1;
    uVar28 = (undefined4)((ulonglong)dVar6 >> 0x20);
    auVar4._8_4_ = SUB84(dVar6,0);
    auVar4._0_8_ = dVar6;
    auVar4._12_4_ = uVar28;
    *(undefined1 (*) [16])(puVar25 + 0x32) = auVar4;
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = dVar6;
    auVar5._12_4_ = uVar28;
    *(undefined1 (*) [16])(puVar25 + 0x36) = auVar5;
    puVar25[0x3c] = 0;
    puVar25[0x3d] = 0;
    puVar25[0x3e] = 0;
    puVar25[0x3f] = 0;
    puVar25[0x40] = 0;
    puVar25[0x41] = 0x3ff00000;
    puVar25[0x42] = 0;
    puVar25[0x43] = 0;
    puVar25[0x44] = 0x3dcccccd;
    puVar25[0x45] = (uint)this->_padding_;
    *(undefined1 *)(puVar25 + 0xe4) = 1;
    if ((this->_padding_ & 0x10000000) != 0) {
      TVar21 = FSceneViewFamily::GetFeatureLevel(param_1);
      if (TVar21 == Num) {
        EVar23 = SP_NumPlatforms;
      }
      else {
        EVar23 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar21];
      }
      bVar19 = DoesPlatformSupportDistanceFieldShadowing(EVar23);
      if (bVar19) {
        *(undefined1 *)((longlong)puVar25 + 0x391) = 1;
        return true;
      }
    }
    *(undefined1 *)((longlong)puVar25 + 0x391) = 0;
    bVar19 = true;
  }
  return bVar19;
}

// HasSourceTexture @ 147952920

bool __thiscall FRectLightSceneProxy::HasSourceTexture(FRectLightSceneProxy *this)

{
  return this->SourceTexture != (UTexture *)0x0;
}

// IsRectLight @ 147956680

bool __thiscall FRectLightSceneProxy::IsRectLight(FRectLightSceneProxy *this)

{
  return true;
}

