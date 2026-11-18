// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 7

// FOpaqueVelocityMeshProcessor @ 14574ea40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FOpaqueVelocityMeshProcessor * __thiscall
FOpaqueVelocityMeshProcessor::FOpaqueVelocityMeshProcessor
          (FOpaqueVelocityMeshProcessor *this,FScene *param_1,Type param_2,FSceneView *param_3,
          FMeshPassProcessorRenderState *param_4,FMeshPassDrawListContext *param_5,
          EDepthDrawingMode param_6)

{
  FRHIDepthStencilState *pFVar1;
  FRHIUniformBuffer *pFVar2;
  undefined4 uVar3;
  uint uVar4;
  
  FMeshPassProcessor::FMeshPassProcessor
            ((FMeshPassProcessor *)this,Velocity,param_1,param_2,param_3,param_5);
  *(undefined ***)this = &___7FVelocityMeshProcessor__6B_;
  pFVar1 = param_4->DepthStencilState;
  *(FRHIBlendState **)&this->field_0x38 = param_4->BlendState;
  *(FRHIDepthStencilState **)&this->field_0x40 = pFVar1;
  uVar3 = *(undefined4 *)&param_4->field_0x14;
  pFVar2 = param_4->ViewUniformBuffer;
  *(Type *)&this->field_0x48 = param_4->DepthStencilAccess;
  *(undefined4 *)&this->field_0x4c = uVar3;
  *(FRHIUniformBuffer **)&this->field_0x50 = pFVar2;
  pFVar2 = param_4->PassUniformBuffer;
  *(FRHIUniformBuffer **)&this->field_0x58 = param_4->InstancedViewUniformBuffer;
  *(FRHIUniformBuffer **)&this->field_0x60 = pFVar2;
  pFVar2 = param_4->NaniteUniformBuffer;
  uVar4 = param_4->StencilRef;
  uVar3 = *(undefined4 *)&param_4->field_0x3c;
  this->field_0x7c = 0xb;
  *(undefined ***)this = &___7FOpaqueVelocityMeshProcessor__6B_;
  *(EDepthDrawingMode *)&this->field_0x78 = param_6;
  *(FRHIUniformBuffer **)&this->field_0x68 = pFVar2;
  *(uint *)&this->field_0x70 = uVar4;
  *(undefined4 *)&this->field_0x74 = uVar3;
  return this;
}

// AddMeshBatch @ 1457571e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FOpaqueVelocityMeshProcessor::AddMeshBatch
          (FOpaqueVelocityMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4)

{
  undefined1 *puVar1;
  uchar uVar2;
  bool bVar3;
  bool bVar4;
  FMaterial *this_00;
  FMaterialShaderMap *pFVar5;
  FMaterialRenderProxy *pFVar6;
  FStaticShaderPlatform FVar7;
  
  if (*(int *)&this->field_0x20 == 5) {
    FVar7.Platform = SP_NumPlatforms;
  }
  else {
    FVar7.Platform = GRHIGlobals.ShaderPlatformForFeatureLevel[*(int *)&this->field_0x20];
  }
  uVar2 = (param_3->Mobility).Value;
  if ((((uVar2 == '\x02') || (uVar2 == '\x01')) || (param_3->bIsBeingMovedByEditor != 0)) ||
     ((((bool)param_3->bAlwaysHasVelocity ||
       (param_3->bHasWorldPositionOffsetVelocity != '\0' ||
        (param_3->bAnyMaterialHasPixelAnimation != '\0' ||
        (param_3->bAnyMaterialUsesTemporalResponsiveness != '\0' ||
        param_3->bAnyMaterialUsesMotionVectorWorldOffset != '\0')))) ||
      (bVar3 = VelocityIncludeStationaryPrimitives(FVar7), bVar3)))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  bVar4 = FVelocityRendering::IsVelocityPassSupported(FVar7.Platform);
  if (((bVar4) && (bVar4 = PlatformSupportsVelocityRendering(FVar7), bVar4)) &&
     ((bVar3 && ((*(longlong *)&this->field_0x28 == 0 ||
                 ((bVar3 = PrimitiveHasVelocityForFrame(FVar7.Platform,param_3), bVar3 &&
                  (bVar3 = FVelocityMeshProcessor::PrimitiveHasVelocityForView
                                     (*(FViewInfo **)&this->field_0x28,param_3), bVar3)))))))) {
    pFVar6 = param_1->MaterialRenderProxy;
    while ((pFVar6 != (FMaterialRenderProxy *)0x0 &&
           (((this_00 = (FMaterial *)
                        (**(code **)(pFVar6->_padding_ + 0x30))
                                  (pFVar6,*(undefined4 *)&this->field_0x20),
             this_00 == (FMaterial *)0x0 ||
             (pFVar5 = FMaterial::GetRenderingThreadShaderMap(this_00),
             pFVar5 == (FMaterialShaderMap *)0x0)) ||
            (bVar3 = TryAddMeshBatch(this,param_1,param_2,param_3,param_4,pFVar6,this_00), !bVar3)))
           )) {
      pFVar6 = (FMaterialRenderProxy *)
               (**(code **)(pFVar6->_padding_ + 0x38))(pFVar6,*(undefined4 *)&this->field_0x20);
    }
  }
  return;
}

// CollectPSOInitializers @ 14575b8c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FOpaqueVelocityMeshProcessor::CollectPSOInitializers
          (FOpaqueVelocityMeshProcessor *this,FSceneTexturesConfig *param_1,FMaterial *param_2,
          FPSOPrecacheVertexFactoryData *param_3,FPSOPrecacheParams *param_4,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_5)

{
  Type TVar1;
  EVertexFactoryFlags EVar2;
  FPSOPrecacheParams *pFVar3;
  TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  bool bVar6;
  ERasterizerFillMode EVar7;
  ERasterizerCullMode EVar8;
  FCachedSystemScalabilityCVars *pFVar9;
  UMaterial *pUVar10;
  FMaterial *pFVar11;
  FMaterial *pFVar12;
  FStaticShaderPlatform FVar13;
  
  pFVar3 = param_4;
  if (*(int *)&this->field_0x20 == 5) {
    FVar13.Platform = SP_NumPlatforms;
  }
  else {
    FVar13.Platform = GRHIGlobals.ShaderPlatformForFeatureLevel[*(int *)&this->field_0x20];
  }
  if ((((((ulonglong)((uint)(param_4->field0_0x0).Data & 0x1e00000) - 0x200000 & 0xffffffffffdfffff)
         == 0) || (((param_4->field0_0x0).Data >> 0x19 & 1) != 0)) ||
      (bVar5 = FMaterial::MaterialUsesWorldPositionOffset_GameThread(param_2), bVar5)) ||
     (bVar5 = VelocityIncludeStationaryPrimitives(FVar13), bVar5)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  bVar6 = FVelocityRendering::IsVelocityPassSupported(FVar13.Platform);
  if (((bVar6) && (bVar6 = PlatformSupportsVelocityRendering(FVar13), bVar6)) && (bVar5)) {
    pFVar11 = param_2;
    if ((*(byte *)&pFVar3->field0_0x0 & 0x40) == 0) {
      bVar5 = IsOpaqueOrMaskedBlendMode(param_2);
      if ((*(uint *)&pFVar3->field0_0x0 >> 10 & 1) == 0) {
        return;
      }
      if (!bVar5) {
        return;
      }
      bVar5 = ShouldIncludeMaterialInDefaultOpaquePass(param_2);
      if (!bVar5) {
        return;
      }
      EVar2 = param_3->VertexFactoryType->Flags;
      bVar5 = FMaterial::MaterialUsesMotionVectorWorldOffset_GameThread(param_2);
      if ((bVar5) ||
         (bVar5 = FMaterial::MaterialUsesTemporalResponsiveness_GameThread(param_2), bVar5)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      bVar6 = FMaterial::MaterialModifiesMeshPosition_GameThread(param_2);
      bVar6 = UseDefaultMaterial(param_2,(bool)(~(byte)(EVar2 >> 0xf) & 1),bVar6);
      if ((bVar6) && (!bVar5)) {
        if (param_3->CustomDefaultVertexDeclaration == (FRHIVertexDeclaration *)0x0) {
          return;
        }
        pFVar9 = GetCachedScalabilityCVars();
        TVar1 = pFVar9->MaterialQualityLevel;
        pUVar10 = UMaterial::GetDefaultMaterial(MD_Surface);
        pFVar11 = (FMaterial *)
                  (**(code **)(pUVar10->_padding_ + 0x390))(pUVar10,FVar13.Platform,TVar1);
      }
    }
    param_4 = (FPSOPrecacheParams *)FMeshPassProcessor::ComputeMeshOverrideSettings(pFVar3);
    EVar7 = FMeshPassProcessor::ComputeMeshFillMode
                      (param_2,(FMeshDrawingPolicyOverrideSettings *)&param_4);
    EVar8 = FMeshPassProcessor::ComputeMeshCullMode
                      (param_2,(FMeshDrawingPolicyOverrideSettings *)&param_4);
    pTVar4 = param_5;
    bVar5 = FVelocityMeshProcessor::CollectPSOInitializersInternal
                      ((FVelocityMeshProcessor *)this,param_1,param_3,pFVar11,EVar7,EVar8,param_5);
    if (!bVar5) {
      pFVar9 = GetCachedScalabilityCVars();
      TVar1 = pFVar9->MaterialQualityLevel;
      pUVar10 = UMaterial::GetDefaultMaterial(MD_Surface);
      pFVar12 = (FMaterial *)
                (**(code **)(pUVar10->_padding_ + 0x390))(pUVar10,FVar13.Platform,TVar1);
      if (pFVar12 != pFVar11) {
        FVelocityMeshProcessor::CollectPSOInitializersInternal
                  ((FVelocityMeshProcessor *)this,param_1,param_3,pFVar12,EVar7,EVar8,pTVar4);
      }
    }
  }
  return;
}

// PrimitiveCanHaveVelocity @ 145782cb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __cdecl
FOpaqueVelocityMeshProcessor::PrimitiveCanHaveVelocity
          (EShaderPlatform param_1,FPrimitiveSceneProxy *param_2)

{
  undefined1 *puVar1;
  uchar uVar2;
  bool bVar3;
  bool bVar4;
  
  uVar2 = (param_2->Mobility).Value;
  if ((((uVar2 != '\x02') && (uVar2 != '\x01')) && (param_2->bIsBeingMovedByEditor == 0)) &&
     ((!(bool)param_2->bAlwaysHasVelocity &&
      (param_2->bHasWorldPositionOffsetVelocity == '\0' &&
       (param_2->bAnyMaterialHasPixelAnimation == '\0' &&
       (param_2->bAnyMaterialUsesTemporalResponsiveness == '\0' &&
       param_2->bAnyMaterialUsesMotionVectorWorldOffset == '\0')))))) {
    bVar3 = VelocityIncludeStationaryPrimitives((FStaticShaderPlatform)param_1);
    if (!bVar3) {
      bVar3 = false;
      goto LAB_145782cf0;
    }
  }
  bVar3 = true;
LAB_145782cf0:
  bVar4 = FVelocityRendering::IsVelocityPassSupported(param_1);
  if (bVar4) {
    bVar4 = PlatformSupportsVelocityRendering((FStaticShaderPlatform)param_1);
    if (bVar4) {
      return bVar3;
    }
  }
  return false;
}

// PrimitiveCanHaveVelocity @ 145782d30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FOpaqueVelocityMeshProcessor::PrimitiveCanHaveVelocity
          (EShaderPlatform param_1,bool param_2,bool param_3)

{
  bool bVar1;
  
  bVar1 = FVelocityRendering::IsVelocityPassSupported(param_1);
  if (bVar1) {
    bVar1 = PlatformSupportsVelocityRendering((FStaticShaderPlatform)param_1);
    if ((bVar1) && (param_2)) {
      return true;
    }
  }
  return false;
}

// PrimitiveHasVelocityForFrame @ 145782dc0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __cdecl
FOpaqueVelocityMeshProcessor::PrimitiveHasVelocityForFrame
          (EShaderPlatform param_1,FPrimitiveSceneProxy *param_2)

{
  FScene *pFVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  undefined1 uVar5;
  uint *puVar6;
  double *pdVar7;
  uint *puVar8;
  undefined1 *puVar9;
  double *pdVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  double adStack_a8 [4];
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  pdVar10 = adStack_a8;
  if (((((bool)param_2->bAlwaysHasVelocity) || (param_2->bAnyMaterialHasPixelAnimation != '\0')) ||
      (param_2->bEvaluateWorldPositionOffset == '\x01' &&
       param_2->bHasWorldPositionOffsetVelocity == '\x01')) ||
     ((param_2->bAnyMaterialUsesTemporalResponsiveness != '\0' ||
       param_2->bAnyMaterialUsesMotionVectorWorldOffset != '\0' ||
      (bVar4 = VelocityIncludeStationaryPrimitives((FStaticShaderPlatform)param_1), bVar4)))) {
    return true;
  }
  puVar11 = (uint *)0x0;
  pFVar1 = param_2->PrimitiveSceneInfo->Scene;
  uVar12 = (param_2->PrimitiveSceneInfo->PrimitiveComponentId).PrimIDValue;
  local_88 = (param_2->LocalToWorld).M[0][0];
  dStack_80 = (param_2->LocalToWorld).M[0][1];
  local_78 = (param_2->LocalToWorld).M[0][2];
  dStack_70 = (param_2->LocalToWorld).M[0][3];
  local_68 = (param_2->LocalToWorld).M[1][0];
  dStack_60 = (param_2->LocalToWorld).M[1][1];
  local_58 = (param_2->LocalToWorld).M[1][2];
  dStack_50 = (param_2->LocalToWorld).M[1][3];
  local_48 = (param_2->LocalToWorld).M[2][0];
  dStack_40 = (param_2->LocalToWorld).M[2][1];
  local_38 = (param_2->LocalToWorld).M[2][2];
  dStack_30 = (param_2->LocalToWorld).M[2][3];
  local_28 = (param_2->LocalToWorld).M[3][0];
  dStack_20 = (param_2->LocalToWorld).M[3][1];
  local_18 = (param_2->LocalToWorld).M[3][2];
  dStack_10 = (param_2->LocalToWorld).M[3][3];
  if (*(int *)&(pFVar1->VelocityData).ComponentData.field_0x8 !=
      *(int *)&(pFVar1->VelocityData).ComponentData.field_0x34) {
    puVar9 = *(undefined1 **)&(pFVar1->VelocityData).ComponentData.field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(pFVar1->VelocityData).ComponentData.field_0x38;
    }
    uVar13 = *(uint *)(puVar9 + (ulonglong)
                                (*(int *)&(pFVar1->VelocityData).ComponentData.field_0x48 - 1U &
                                uVar12) * 4);
    if (uVar13 != 0xffffffff) {
      do {
        puVar6 = (uint *)((longlong)(int)uVar13 * 0x150 +
                         *(longlong *)&(pFVar1->VelocityData).ComponentData);
        if (*puVar6 == uVar12) {
          puVar8 = puVar6 + 4;
          if (puVar6 == (uint *)0x0) {
            puVar8 = puVar11;
          }
          if ((puVar8 != (uint *)0x0) && (*(longlong *)puVar8 != 0)) {
            if (((char)puVar8[0x48] == '\0') &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("VelocityData->bPreviousLocalToWorldValid",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ScenePrivate.h"
                                   ,0x9e8,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              uVar5 = (*pcVar2)();
              return (bool)uVar5;
            }
            *(ulong64 *)(puVar8 + 0x44) = (pFVar1->VelocityData).InternalFrameIndex;
            local_88 = *(double *)(puVar8 + 0x24);
            dStack_80 = (double)*(undefined8 *)(puVar8 + 0x26);
            local_78 = (double)*(undefined8 *)(puVar8 + 0x28);
            dStack_70 = (double)*(undefined8 *)(puVar8 + 0x2a);
            local_68 = (double)*(undefined8 *)(puVar8 + 0x2c);
            dStack_60 = (double)*(undefined8 *)(puVar8 + 0x2e);
            local_58 = (double)*(undefined8 *)(puVar8 + 0x30);
            dStack_50 = (double)*(undefined8 *)(puVar8 + 0x32);
            local_48 = (double)*(undefined8 *)(puVar8 + 0x34);
            dStack_40 = (double)*(undefined8 *)(puVar8 + 0x36);
            local_38 = (double)*(undefined8 *)(puVar8 + 0x38);
            dStack_30 = (double)*(undefined8 *)(puVar8 + 0x3a);
            local_28 = (double)*(undefined8 *)(puVar8 + 0x3c);
            dStack_20 = (double)*(undefined8 *)(puVar8 + 0x3e);
            local_18 = (double)*(undefined8 *)(puVar8 + 0x40);
            dStack_10 = (double)*(undefined8 *)(puVar8 + 0x42);
          }
          break;
        }
        uVar13 = puVar6[0x50];
      } while (uVar13 != 0xffffffff);
    }
  }
  puVar6 = puVar11;
  do {
    pdVar10 = pdVar10 + 4;
    pdVar7 = pdVar10;
    puVar8 = puVar11;
    do {
      dVar3 = *(double *)
               ((longlong)pdVar7 + ((longlong)&param_2->LocalToWorld - (longlong)&local_88)) -
              *pdVar7;
      uVar12 = SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar13 = (uint)((ulonglong)dVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if (__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar13,uVar12) &&
          (double)CONCAT44(uVar13,uVar12) != __real_3f1a36e2e0000000) {
        return true;
      }
      puVar8 = (uint *)((longlong)puVar8 + 1);
      pdVar7 = pdVar7 + 1;
    } while ((longlong)puVar8 < 4);
    puVar6 = (uint *)((longlong)puVar6 + 1);
  } while ((longlong)puVar6 < 4);
  return false;
}

// TryAddMeshBatch @ 1457938c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

bool __thiscall
FOpaqueVelocityMeshProcessor::TryAddMeshBatch
          (FOpaqueVelocityMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,FMaterialRenderProxy *param_5,FMaterial *param_6
          )

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  ERasterizerFillMode EVar7;
  ERasterizerCullMode EVar8;
  ushort *puVar9;
  longlong lVar10;
  UMaterial *pUVar11;
  undefined1 local_res10 [8];
  FMeshDrawingPolicyOverrideSettings local_30;
  
  bVar3 = IsOpaqueOrMaskedBlendMode(param_6);
  if ((((param_1->bUseForMaterial == 0) || (!bVar3)) ||
      (cVar4 = (**(code **)(param_6->_padding_ + 0x368))(param_6), cVar4 != '\0')) ||
     (puVar9 = (ushort *)(**(code **)(param_6->_padding_ + 0x280))(param_6,local_res10),
     (*puVar9 & 0x400) != 0)) {
    return true;
  }
  local_30 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
  EVar7 = FMeshPassProcessor::ComputeMeshFillMode(param_6,&local_30);
  EVar8 = FMeshPassProcessor::ComputeMeshCullMode(param_6,&local_30);
  lVar10 = (**(code **)(param_1->VertexFactory->_padding_ + 0x30))();
  uVar1 = *(uint *)(lVar10 + 0x38);
  bVar3 = DoMaterialAndPrimitiveModifyMeshPosition(param_6,param_3);
  bVar5 = FMaterial::MaterialUsesMotionVectorWorldOffset_GameThread(param_6);
  if ((bVar5) || (bVar5 = FMaterial::MaterialUsesTemporalResponsiveness_GameThread(param_6), bVar5))
  {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  bVar3 = UseDefaultMaterial(param_6,(bool)(~(byte)(uVar1 >> 0xf) & 1),bVar3);
  if ((bVar3) && (!bVar5)) {
    pUVar11 = UMaterial::GetDefaultMaterial(MD_Surface);
    param_5 = (FMaterialRenderProxy *)(**(code **)(pUVar11->_padding_ + 0x310))(pUVar11);
    param_6 = (FMaterial *)
              (**(code **)(param_5->_padding_ + 0x30))(param_5,*(undefined4 *)&this->field_0x20);
  }
  if (((param_6 == (FMaterial *)0x0) || (param_5 == (FMaterialRenderProxy *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Material && MaterialRenderProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VelocityRendering.cpp"
                         ,0x39f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  bVar3 = FVelocityMeshProcessor::Process
                    ((FVelocityMeshProcessor *)this,param_1,param_2,param_4,param_3,param_5,param_6,
                     EVar7,EVar8);
  return bVar3;
}

