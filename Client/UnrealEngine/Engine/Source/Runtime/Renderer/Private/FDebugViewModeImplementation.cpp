// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// AddShaderTypes @ 144801f80

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FDebugViewModeImplementation::AddShaderTypes
          (FDebugViewModeImplementation *this,Type param_1,FVertexFactoryType *param_2,
          FMaterialShaderTypes *param_3)

{
  FShaderType *pFVar1;
  
  pFVar1 = (FShaderType *)FDebugViewModeVS::GetStaticType();
  FMaterialShaderTypes::AddShaderType(param_3,pFVar1,0);
  pFVar1 = (FShaderType *)FDebugViewModePS::GetStaticType();
  FMaterialShaderTypes::AddShaderType(param_3,pFVar1,0);
  return;
}

// GetDebugViewModeShaderBindings @ 1448142d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014481455a) */
/* WARNING: Removing unreachable block (ram,0x00014481469c) */
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

void __thiscall
FDebugViewModeImplementation::GetDebugViewModeShaderBindings
          (FDebugViewModeImplementation *this,FDebugViewModePS *param_1,
          FPrimitiveSceneProxy *param_2,FMaterialRenderProxy *param_3,FMaterial *param_4,
          EDebugViewShaderMode param_5,TVector<double> *param_6,int param_7,FColor *param_8,
          int param_9,int param_10,int param_11,int param_12,int param_13,int param_14,
          FName param_15,FMeshDrawSingleShaderBindings *param_16)

{
  EMaterialTextureParameterType EVar1;
  FName FVar2;
  undefined1 this_00 [8];
  FDebugViewModePS *pFVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  FUniformExpressionSet *this_01;
  FMaterialTextureParameterInfo *pFVar10;
  FTextureResource *pFVar11;
  longlong lVar12;
  int iVar13;
  EDebugViewShaderMode EVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  undefined1 auStackY_948 [32];
  UTexture *local_918 [2];
  FMaterial *local_908 [2];
  TIntPoint<int>_u_0 local_8f8 [2];
  longlong local_8e8 [2];
  uint local_8d8 [4];
  float local_8c8;
  ushort local_8c4;
  EMaterialTextureParameterType local_8b8 [2];
  undefined1 local_8b0 [8];
  float local_8a8;
  float fStack_8a4;
  undefined4 uStack_8a0;
  undefined4 uStack_89c;
  uint local_898;
  float local_894;
  uint local_890;
  uint local_88c;
  undefined1 local_888 [8];
  float fStack_880;
  undefined4 uStack_87c;
  FDebugViewModePS *local_878;
  FMaterialRenderContext local_870;
  undefined1 local_858 [8];
  float local_850 [254];
  TIntVector4<int> local_458 [64];
  ulonglong local_58;
  
  iVar15 = param_14;
  EVar14 = param_5;
  fVar17 = __real_3f800000;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_948;
  uVar6 = 0x40;
  local_888 = (undefined1  [8])param_16;
  lVar12 = 0x40;
  pfVar9 = &(((TVector4<float> *)local_858)->field0_0x0)._s_0.Z;
  local_908[0] = param_4;
  uVar7 = 0;
  do {
    ((TVector4<float>_u_0_s_0 *)(pfVar9 + -2))->X = 0.0;
    ((TVector4<float>_u_0_s_0 *)(pfVar9 + -2))->Y = 0.0;
    *pfVar9 = 0.0;
    pfVar9[1] = 1.0;
    pfVar9 = pfVar9 + 4;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  _local_8a8 = ___xmm_3f800000000000000000000000000000;
  _uStack_8a0 = _UNK_150689648;
  local_8f8[0] = (TIntPoint<int>_u_0)0x0;
  local_8c8 = __real_3f800000;
  if ((param_2 != (FPrimitiveSceneProxy *)0x0) &&
     (param_2->bParentSelected == '\0' && param_2->bIndividuallySelected == '\0')) {
    local_8c8 = __real_3e4ccccd;
  }
  local_8d8[0] = 0xffffffff;
  if (param_14 < 0) {
    local_898 = 0xffffffff;
  }
  else {
    uVar4 = 3;
    if (param_14 < 3) {
      uVar4 = param_14;
    }
    local_898 = 0;
    if (uVar4 != 0) {
      local_898 = uVar4;
    }
  }
  local_894 = -1.0;
  local_88c = (uint)((param_5 - DVSM_ShaderComplexityContainedQuadOverhead & 0xfffffffd) == 0);
  uVar4 = 7;
  if (param_7 < 7) {
    uVar4 = param_7;
  }
  local_890 = uVar7;
  if (0 < (int)uVar4) {
    local_890 = uVar4;
  }
  local_878 = param_1;
  memset((TVector4<float> *)local_858,0,0x400);
  memset(local_458,0,0x400);
  if (EVar14 - DVSM_MaterialTextureScaleAccuracy < 2) {
    if (iVar15 < 0) {
      local_8f8[0]._0_4_ = -1;
    }
    else {
      iVar13 = 0xff;
      if (iVar15 < 0xff) {
        iVar13 = iVar15;
      }
      local_8f8[0]._0_4_ = 0;
      if (iVar13 != 0) {
        local_8f8[0]._0_4_ = iVar13;
      }
    }
    if (EVar14 == DVSM_OutputMaterialTextureScales) {
      local_8f8[0]._0_4_ = -1;
    }
    local_8f8[0]._4_1_ = EVar14 == DVSM_OutputMaterialTextureScales;
    local_8f8[0]._s_0.Y._1_3_ = 0;
LAB_144814771:
    if (EVar14 == DVSM_QuadComplexity) {
      local_8a8 = 0.0625;
      uVar7 = 1;
      goto LAB_14481480a;
    }
    if (EVar14 != DVSM_LWCComplexity) {
      if (EVar14 == DVSM_ShadowCasters) goto LAB_14481480a;
      goto LAB_1448147c7;
    }
    fVar17 = fVar17 / GMaxLWCComplexity;
    _uStack_8a0 = _uStack_8a0 & 0xffffffff;
    iVar15 = param_12 + 1;
    local_8a8 = (float)(param_13 + 1) * fVar17;
    uVar7 = 0;
  }
  else {
    if (EVar14 != DVSM_RequiredTextureResolution) goto LAB_144814771;
    FMaterialRenderContext::FMaterialRenderContext(&local_870,param_3,param_4,(FSceneView *)0x0);
    this_01 = FMaterial::GetUniformExpressions(param_4);
    FVar2 = param_15;
    local_8b8[0] = Standard2D;
    local_8b8[1] = 5;
    if (iVar15 != -1) {
      local_8f8[0] = (TIntPoint<int>_u_0)local_8b8;
      if (param_15 == (FName)0x0) {
        do {
          EVar1 = *(EMaterialTextureParameterType *)local_8f8[0];
          iVar13 = 0;
          local_8e8[0] = (ulonglong)EVar1 * 0x10;
          if (0 < this_01->UniformTextureParameters[EVar1].ArrayNum) {
            do {
              pFVar10 = FUniformExpressionSet::GetTextureParameter(this_01,EVar1,iVar13);
              if (pFVar10->TextureIndex == iVar15) {
                local_918[0] = (UTexture *)0x0;
                FUniformExpressionSet::GetTextureValue
                          (this_01,EVar1,iVar13,&local_870,local_908[0],local_918);
                if ((local_918[0] != (UTexture *)0x0) &&
                   (pFVar11 = UTexture::GetResource(local_918[0]),
                   pFVar11 != (FTextureResource *)0x0)) {
                  local_8d8[0] = iVar15;
                  if ((int)local_918[0]->_padding_ == -1) {
                    pFVar11 = UTexture::GetResource(local_918[0]);
                    uVar6 = (**(code **)(pFVar11->_padding_ + 0x38))(pFVar11);
                    pFVar11 = UTexture::GetResource(local_918[0]);
                    uVar7 = (**(code **)(pFVar11->_padding_ + 0x30))(pFVar11);
                    if (uVar6 < uVar7) {
                      uVar6 = uVar7;
                    }
                  }
                  else {
                    pFVar11 = UTexture::GetResource(local_918[0]);
                    if ((longlong *)pFVar11->_padding_ == (longlong *)0x0) {
                      uVar6 = 1;
                    }
                    else {
                      lVar12 = (**(code **)(*(longlong *)pFVar11->_padding_ + 0x20))();
                      iVar5 = *(byte *)(lVar12 + 0x30) - 1;
                      iVar8 = 0;
                      if (0 < iVar5) {
                        iVar8 = iVar5;
                      }
                      uVar6 = 1 << ((byte)iVar8 & 0x1f);
                    }
                  }
                }
              }
              iVar13 = iVar13 + 1;
            } while (iVar13 < *(int *)((longlong)&this_01->UniformTextureParameters[0].ArrayNum +
                                      local_8e8[0]));
          }
          local_8f8[0]._s_0 = local_8f8[0]._s_0 + 4;
          EVar14 = param_5;
        } while (local_8f8[0] != (TIntPoint<int>_u_0)local_8b0);
      }
      else {
        do {
          EVar1 = *(EMaterialTextureParameterType *)local_8f8[0];
          iVar15 = 0;
          local_8e8[0] = (ulonglong)EVar1 * 0x10;
          if (0 < this_01->UniformTextureParameters[EVar1].ArrayNum) {
            do {
              local_918[0] = (UTexture *)0x0;
              FUniformExpressionSet::GetTextureValue
                        (this_01,EVar1,iVar15,&local_870,param_4,local_918);
              if (((local_918[0] != (UTexture *)0x0) &&
                  (pFVar11 = UTexture::GetResource(local_918[0]), pFVar11 != (FTextureResource *)0x0
                  )) && ((FName)local_918[0]->_padding_ == FVar2)) {
                pFVar10 = FUniformExpressionSet::GetTextureParameter(this_01,EVar1,iVar15);
                local_8d8[0] = pFVar10->TextureIndex;
                if ((int)local_918[0]->_padding_ == -1) {
                  pFVar11 = UTexture::GetResource(local_918[0]);
                  uVar6 = (**(code **)(pFVar11->_padding_ + 0x38))(pFVar11);
                  pFVar11 = UTexture::GetResource(local_918[0]);
                  uVar7 = (**(code **)(pFVar11->_padding_ + 0x30))(pFVar11);
                  param_4 = local_908[0];
                  if (uVar6 < uVar7) {
                    uVar6 = uVar7;
                  }
                }
                else {
                  pFVar11 = UTexture::GetResource(local_918[0]);
                  if ((longlong *)pFVar11->_padding_ == (longlong *)0x0) {
                    param_4 = local_908[0];
                    uVar6 = 1;
                  }
                  else {
                    lVar12 = (**(code **)(*(longlong *)pFVar11->_padding_ + 0x20))();
                    iVar8 = *(byte *)(lVar12 + 0x30) - 1;
                    iVar13 = 0;
                    if (0 < iVar8) {
                      iVar13 = iVar8;
                    }
                    param_4 = local_908[0];
                    uVar6 = 1 << ((byte)iVar13 & 0x1f);
                  }
                }
              }
              iVar15 = iVar15 + 1;
            } while (iVar15 < *(int *)((longlong)&this_01->UniformTextureParameters[0].ArrayNum +
                                      local_8e8[0]));
          }
          local_8f8[0]._s_0 = local_8f8[0]._s_0 + 4;
          EVar14 = param_5;
        } while (local_8f8[0] != (TIntPoint<int>_u_0)local_8b0);
      }
    }
    local_8f8[0]._s_0.Y = uVar6;
    local_8f8[0]._s_0.X = local_8d8[0];
    param_4 = local_908[0];
LAB_1448147c7:
    fVar16 = GetMaxShaderComplexityCount(param_4->FeatureLevel);
    fVar17 = fVar17 / fVar16;
    uStack_8a0 = 0x3d000000;
    local_8a8 = (float)param_11 * fVar17;
    iVar15 = param_10;
    uVar7 = (uint)(EVar14 != DVSM_ShaderComplexity);
  }
  fStack_8a4 = (float)iVar15 * fVar17;
LAB_14481480a:
  pFVar3 = local_878;
  this_00 = local_888;
  local_8d8[0] = uVar7;
  local_8e8[0]._0_6_ = local_878->OneOverCPUTexCoordScalesParameter;
  FMeshDrawSingleShaderBindings::Add<UE::Math::TVector4<float>_[64]>
            ((FMeshDrawSingleShaderBindings *)local_888,SUB86(local_8e8,0),
             (TVector4<float> (*) [64])local_858);
  local_908[0]._0_6_ = pFVar3->TexCoordIndicesParameter;
  FMeshDrawSingleShaderBindings::Add<UE::Math::TIntVector4<int>_[64]>
            ((FMeshDrawSingleShaderBindings *)this_00,SUB86(local_908,0),&local_458);
  local_908[0]._0_6_ = pFVar3->CPUTexelFactorParameter;
  local_888 = (undefined1  [8])___xmm_3f800000000000000000000000000000;
  _fStack_880 = _UNK_150689648;
  FMeshDrawSingleShaderBindings::Add<UE::Math::TVector4<float>_>
            ((FMeshDrawSingleShaderBindings *)this_00,SUB86(local_908,0),
             (TVector4<float> *)local_888);
  local_908[0]._0_6_ = pFVar3->NormalizedComplexity;
  FMeshDrawSingleShaderBindings::Add<UE::Math::TVector4<float>_>
            ((FMeshDrawSingleShaderBindings *)this_00,SUB86(local_908,0),
             (TVector4<float> *)&local_8a8);
  local_8e8[0]._0_6_ = pFVar3->AnalysisParamsParameter;
  FMeshDrawSingleShaderBindings::Add<UE::Math::TIntPoint<int>_>
            ((FMeshDrawSingleShaderBindings *)this_00,SUB86(local_8e8,0),
             (TIntPoint<int> *)&local_8f8[0]._s_0);
  local_918[0]._0_6_ = pFVar3->PrimitiveAlphaParameter;
  FMeshDrawSingleShaderBindings::Add<float>
            ((FMeshDrawSingleShaderBindings *)this_00,SUB86(local_918,0),&local_8c8);
  local_8c8 = (float)(**(code **)(param_4->_padding_ + 0x268))(param_4);
  local_918[0]._0_6_ = pFVar3->PrimitiveBlendModeParameter;
  FMeshDrawSingleShaderBindings::Add<int>
            ((FMeshDrawSingleShaderBindings *)this_00,SUB86(local_918,0),(int *)&local_8c8);
  local_918[0]._0_6_ = pFVar3->TexCoordAnalysisIndexParameter;
  FMeshDrawSingleShaderBindings::Add<int>
            ((FMeshDrawSingleShaderBindings *)this_00,SUB86(local_918,0),(int *)&local_898);
  local_908[0]._0_6_ = pFVar3->CPULogDistanceParameter;
  FMeshDrawSingleShaderBindings::Add<float>
            ((FMeshDrawSingleShaderBindings *)this_00,SUB86(local_908,0),&local_894);
  local_8e8[0] = CONCAT26(local_8e8[0]._6_2_,pFVar3->ShowQuadOverdraw);
  FMeshDrawSingleShaderBindings::Add<int>
            ((FMeshDrawSingleShaderBindings *)this_00,SUB86(local_8e8,0),(int *)local_8d8);
  local_8c8 = *(float *)&pFVar3->LODIndexParameter;
  local_8c4 = (pFVar3->LODIndexParameter).NumBytes;
  FMeshDrawSingleShaderBindings::Add<int>
            ((FMeshDrawSingleShaderBindings *)this_00,SUB86(&local_8c8,0),(int *)&local_890);
  local_918[0]._0_6_ = pFVar3->SkinCacheDebugColorParameter;
  local_888._4_4_ = (float)(param_8->field0_0x0)._s_0.G * __real_3b808081;
  local_888._0_4_ = (float)(param_8->field0_0x0)._s_0.R * __real_3b808081;
  fStack_880 = (float)(param_8->field0_0x0)._s_0.B * __real_3b808081;
  FMeshDrawSingleShaderBindings::Add<UE::Math::TVector<float>_>
            ((FMeshDrawSingleShaderBindings *)this_00,SUB86(local_918,0),(TVector<float> *)local_888
            );
  local_918[0] = (UTexture *)CONCAT26(local_918[0]._6_2_,pFVar3->OutputQuadOverdrawParameter);
  FMeshDrawSingleShaderBindings::Add<int>
            ((FMeshDrawSingleShaderBindings *)this_00,SUB86(local_918,0),(int *)&local_88c);
  local_908[0] = (FMaterial *)CONCAT26(local_908[0]._6_2_,pFVar3->VisualizeModeParameter);
  FMeshDrawSingleShaderBindings::Add<enum_EDebugViewShaderMode>
            ((FMeshDrawSingleShaderBindings *)this_00,SUB86(local_908,0),&param_5);
  return;
}

