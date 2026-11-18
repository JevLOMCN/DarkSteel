// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 52

// GetRayTracingSceneViewHandle @ 144816460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

FViewHandle * __thiscall FViewInfo::GetRayTracingSceneViewHandle(FViewInfo *this)

{
  int iVar1;
  FViewInfo *pFVar2;
  
  iVar1 = (int)this->_padding_;
  if ((iVar1 != 0) && (iVar1 == 2)) {
    pFVar2 = GetPrimaryView(this);
    return &pFVar2->RayTracingSceneViewHandle;
  }
  return &this->RayTracingSceneViewHandle;
}

// SetRayTracingSceneViewHandle @ 14482ff20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

void __thiscall FViewInfo::SetRayTracingSceneViewHandle(FViewInfo *this,FViewHandle *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  iVar1 = (int)this->_padding_;
  if ((iVar1 != 0) && (iVar1 == 2)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IStereoRendering::IsStereoEyePass(StereoPass) || !IStereoRendering::IsASecondaryPass(StereoPass)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.h"
                       ,0x617,L"Stereo views should share a single ray tracing scene view.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->RayTracingSceneViewHandle).Index = param_1->Index;
    return;
  }
  (this->RayTracingSceneViewHandle).Index = param_1->Index;
  return;
}

// SetupDefaultGlobalDistanceFieldUniformBufferParameters @ 144931990

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

void __thiscall
FViewInfo::SetupDefaultGlobalDistanceFieldUniformBufferParameters
          (FViewInfo *this,FViewUniformShaderParameters *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRHITexture *pFVar3;
  
  if (this->GlobalDistanceFieldInfo->bInitialized == false) {
    *(undefined8 *)&(param_1->GlobalVolumeTranslatedCenterAndExtent).Elements[0].field0_0x0 = 0;
    (param_1->GlobalVolumeTranslatedCenterAndExtent).Elements[0].field0_0x0._s_0.Z = 0.0;
    *(undefined8 *)
     ((longlong)&(param_1->GlobalVolumeTranslatedCenterAndExtent).Elements[0].field0_0x0 + 0xc) =
         0x3f800000;
    *(undefined8 *)&(param_1->GlobalVolumeTranslatedWorldToUVAddAndMul).Elements[0].field0_0x0 = 0;
    (param_1->GlobalVolumeTranslatedWorldToUVAddAndMul).Elements[0].field0_0x0._s_0.Z = 0.0;
    *(undefined8 *)
     ((longlong)&(param_1->GlobalVolumeTranslatedWorldToUVAddAndMul).Elements[0].field0_0x0 + 0xc) =
         0x3f800000;
    *(undefined8 *)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVScale).Elements[0].field0_0x0
         = 0;
    (param_1->GlobalDistanceFieldMipTranslatedWorldToUVScale).Elements[0].field0_0x0._s_0.Z = 0.0;
    *(undefined8 *)
     ((longlong)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVScale).Elements[0].field0_0x0 +
     0xc) = 0x3f800000;
    *(undefined8 *)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVBias).Elements[0].field0_0x0
         = 0;
    (param_1->GlobalDistanceFieldMipTranslatedWorldToUVBias).Elements[0].field0_0x0._s_0.Z = 0.0;
    *(undefined8 *)
     ((longlong)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVBias).Elements[0].field0_0x0 +
     0xc) = 0x3f800000;
    *(undefined8 *)
     ((longlong)&(param_1->GlobalVolumeTranslatedCenterAndExtent).Elements[1].field0_0x0 + 4) = 0;
    *(undefined8 *)
     ((longlong)&(param_1->GlobalVolumeTranslatedCenterAndExtent).Elements[1].field0_0x0 + 0xc) =
         0x3f800000;
    *(undefined8 *)
     ((longlong)&(param_1->GlobalVolumeTranslatedWorldToUVAddAndMul).Elements[1].field0_0x0 + 4) = 0
    ;
    *(undefined8 *)
     ((longlong)&(param_1->GlobalVolumeTranslatedWorldToUVAddAndMul).Elements[1].field0_0x0 + 0xc) =
         0x3f800000;
    *(undefined8 *)
     ((longlong)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVScale).Elements[1].field0_0x0 +
     4) = 0;
    *(undefined8 *)
     ((longlong)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVScale).Elements[1].field0_0x0 +
     0xc) = 0x3f800000;
    *(undefined8 *)
     ((longlong)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVBias).Elements[1].field0_0x0 + 4
     ) = 0;
    *(undefined8 *)
     ((longlong)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVBias).Elements[1].field0_0x0 +
     0xc) = 0x3f800000;
    *(undefined8 *)
     ((longlong)&(param_1->GlobalVolumeTranslatedCenterAndExtent).Elements[2].field0_0x0 + 4) = 0;
    *(undefined8 *)
     ((longlong)&(param_1->GlobalVolumeTranslatedCenterAndExtent).Elements[2].field0_0x0 + 0xc) =
         0x3f800000;
    *(undefined8 *)
     ((longlong)&(param_1->GlobalVolumeTranslatedWorldToUVAddAndMul).Elements[2].field0_0x0 + 4) = 0
    ;
    *(undefined8 *)
     ((longlong)&(param_1->GlobalVolumeTranslatedWorldToUVAddAndMul).Elements[2].field0_0x0 + 0xc) =
         0x3f800000;
    *(undefined8 *)
     ((longlong)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVScale).Elements[2].field0_0x0 +
     4) = 0;
    *(undefined8 *)
     ((longlong)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVScale).Elements[2].field0_0x0 +
     0xc) = 0x3f800000;
    *(undefined8 *)
     ((longlong)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVBias).Elements[2].field0_0x0 + 4
     ) = 0;
    *(undefined8 *)
     ((longlong)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVBias).Elements[2].field0_0x0 +
     0xc) = 0x3f800000;
    *(undefined8 *)
     ((longlong)&(param_1->GlobalVolumeTranslatedCenterAndExtent).Elements[3].field0_0x0 + 4) = 0;
    *(undefined8 *)
     ((longlong)&(param_1->GlobalVolumeTranslatedCenterAndExtent).Elements[3].field0_0x0 + 0xc) =
         0x3f800000;
    *(undefined8 *)
     ((longlong)&(param_1->GlobalVolumeTranslatedWorldToUVAddAndMul).Elements[3].field0_0x0 + 4) = 0
    ;
    *(undefined8 *)
     ((longlong)&(param_1->GlobalVolumeTranslatedWorldToUVAddAndMul).Elements[3].field0_0x0 + 0xc) =
         0x3f800000;
    *(undefined8 *)
     ((longlong)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVScale).Elements[3].field0_0x0 +
     4) = 0;
    *(undefined8 *)
     ((longlong)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVScale).Elements[3].field0_0x0 +
     0xc) = 0x3f800000;
    *(undefined8 *)
     ((longlong)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVBias).Elements[3].field0_0x0 + 4
     ) = 0;
    *(undefined8 *)
     ((longlong)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVBias).Elements[3].field0_0x0 +
     0xc) = 0x3f800000;
    *(undefined8 *)
     ((longlong)&(param_1->GlobalVolumeTranslatedCenterAndExtent).Elements[4].field0_0x0 + 4) = 0;
    *(undefined8 *)
     ((longlong)&(param_1->GlobalVolumeTranslatedCenterAndExtent).Elements[4].field0_0x0 + 0xc) =
         0x3f800000;
    *(undefined8 *)
     ((longlong)&(param_1->GlobalVolumeTranslatedWorldToUVAddAndMul).Elements[4].field0_0x0 + 4) = 0
    ;
    *(undefined8 *)
     ((longlong)&(param_1->GlobalVolumeTranslatedWorldToUVAddAndMul).Elements[4].field0_0x0 + 0xc) =
         0x3f800000;
    *(undefined8 *)
     ((longlong)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVScale).Elements[4].field0_0x0 +
     4) = 0;
    *(undefined8 *)
     ((longlong)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVScale).Elements[4].field0_0x0 +
     0xc) = 0x3f800000;
    *(undefined8 *)
     ((longlong)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVBias).Elements[4].field0_0x0 + 4
     ) = 0;
    *(undefined8 *)
     ((longlong)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVBias).Elements[4].field0_0x0 +
     0xc) = 0x3f800000;
    *(undefined8 *)
     ((longlong)&(param_1->GlobalVolumeTranslatedCenterAndExtent).Elements[5].field0_0x0 + 4) = 0;
    (param_1->GlobalVolumeTranslatedCenterAndExtent).Elements[5].field0_0x0._s_0.W = 1.0;
    *(undefined8 *)
     ((longlong)&(param_1->GlobalVolumeTranslatedWorldToUVAddAndMul).Elements[5].field0_0x0 + 4) = 0
    ;
    (param_1->GlobalVolumeTranslatedWorldToUVAddAndMul).Elements[5].field0_0x0._s_0.W = 1.0;
    *(undefined8 *)
     ((longlong)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVScale).Elements[5].field0_0x0 +
     4) = 0;
    (param_1->GlobalDistanceFieldMipTranslatedWorldToUVScale).Elements[5].field0_0x0._s_0.W = 1.0;
    *(undefined8 *)
     ((longlong)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVBias).Elements[5].field0_0x0 + 4
     ) = 0;
    (param_1->GlobalDistanceFieldMipTranslatedWorldToUVBias).Elements[5].field0_0x0._s_0.W = 1.0;
    param_1->GlobalDistanceFieldMipFactor = 1.0;
    param_1->GlobalDistanceFieldMipTransition = 0.0;
    param_1->GlobalDistanceFieldClipmapSizeInPages = 1;
    *(undefined8 *)&(param_1->GlobalDistanceFieldInvPageAtlasSize).field0_0x0 =
         UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
    (param_1->GlobalDistanceFieldInvPageAtlasSize).field0_0x0._s_0.Z =
         UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
    *(undefined8 *)&(param_1->GlobalDistanceFieldInvCoverageAtlasSize).field0_0x0 =
         UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
    (param_1->GlobalDistanceFieldInvCoverageAtlasSize).field0_0x0._s_0.Z =
         UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
    param_1->GlobalVolumeDimension = 0.0;
    param_1->GlobalVolumeTexelSize = 0.0;
    param_1->MaxGlobalDFAOConeDistance = 0.0;
    param_1->NumGlobalSDFClipmaps = 0;
    pFVar3 = (GBlackVolumeTexture->TextureRHI).Reference;
    if ((pFVar3 == (FRHITexture *)0x0) &&
       (pFVar3 = (GBlackTexture->TextureRHI).Reference, pFVar3 == (FRHITexture *)0x0)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\TextureFallbacks.h"
                         ,0x11,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    param_1->GlobalDistanceFieldPageAtlasTexture = pFVar3;
    pFVar3 = (GBlackVolumeTexture->TextureRHI).Reference;
    if ((pFVar3 == (FRHITexture *)0x0) &&
       (pFVar3 = (GBlackTexture->TextureRHI).Reference, pFVar3 == (FRHITexture *)0x0)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\TextureFallbacks.h"
                         ,0x11,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    param_1->GlobalDistanceFieldCoverageAtlasTexture = pFVar3;
    pFVar3 = (GBlackUintVolumeTexture->TextureRHI).Reference;
    if ((pFVar3 == (FRHITexture *)0x0) &&
       (pFVar3 = (GBlackTexture->TextureRHI).Reference, pFVar3 == (FRHITexture *)0x0)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\TextureFallbacks.h"
                         ,0x11,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    param_1->GlobalDistanceFieldPageTableTexture = pFVar3;
    pFVar3 = (GBlackVolumeTexture->TextureRHI).Reference;
    if ((pFVar3 == (FRHITexture *)0x0) &&
       (pFVar3 = (GBlackTexture->TextureRHI).Reference, pFVar3 == (FRHITexture *)0x0)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\TextureFallbacks.h"
                         ,0x11,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    param_1->GlobalDistanceFieldMipTexture = pFVar3;
  }
  return;
}

// SetupGlobalDistanceFieldUniformBufferParameters @ 144932150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

void __thiscall
FViewInfo::SetupGlobalDistanceFieldUniformBufferParameters
          (FViewInfo *this,FViewUniformShaderParameters *param_1)

{
  double dVar1;
  double dVar2;
  FGlobalDistanceFieldInfo *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  float fVar6;
  bool bVar7;
  FRHITexture *pFVar8;
  
  if (this->GlobalDistanceFieldInfo->bInitialized == false) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("GlobalDistanceFieldInfo.bInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GlobalDistanceField.cpp"
                       ,0x54a,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar5 = *(undefined8 *)
           ((longlong)
            &(this->GlobalDistanceFieldInfo->ParameterData).TranslatedCenterAndExtent[0].field0_0x0
           + 8);
  *(undefined8 *)&(param_1->GlobalVolumeTranslatedCenterAndExtent).Elements[0].field0_0x0 =
       *(undefined8 *)
        &(this->GlobalDistanceFieldInfo->ParameterData).TranslatedCenterAndExtent[0].field0_0x0;
  *(undefined8 *)
   ((longlong)&(param_1->GlobalVolumeTranslatedCenterAndExtent).Elements[0].field0_0x0 + 8) = uVar5;
  uVar5 = *(undefined8 *)
           ((longlong)
            &(this->GlobalDistanceFieldInfo->ParameterData).TranslatedWorldToUVAddAndMul[0].
             field0_0x0 + 8);
  *(undefined8 *)&(param_1->GlobalVolumeTranslatedWorldToUVAddAndMul).Elements[0].field0_0x0 =
       *(undefined8 *)
        &(this->GlobalDistanceFieldInfo->ParameterData).TranslatedWorldToUVAddAndMul[0].field0_0x0;
  *(undefined8 *)
   ((longlong)&(param_1->GlobalVolumeTranslatedWorldToUVAddAndMul).Elements[0].field0_0x0 + 8) =
       uVar5;
  uVar5 = *(undefined8 *)
           ((longlong)
            &(this->GlobalDistanceFieldInfo->ParameterData).MipTranslatedWorldToUVScale[0].
             field0_0x0 + 8);
  *(undefined8 *)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVScale).Elements[0].field0_0x0 =
       *(undefined8 *)
        &(this->GlobalDistanceFieldInfo->ParameterData).MipTranslatedWorldToUVScale[0].field0_0x0;
  *(undefined8 *)
   ((longlong)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVScale).Elements[0].field0_0x0 + 8)
       = uVar5;
  uVar5 = *(undefined8 *)
           ((longlong)
            &(this->GlobalDistanceFieldInfo->ParameterData).MipTranslatedWorldToUVBias[0].field0_0x0
           + 8);
  *(undefined8 *)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVBias).Elements[0].field0_0x0 =
       *(undefined8 *)
        &(this->GlobalDistanceFieldInfo->ParameterData).MipTranslatedWorldToUVBias[0].field0_0x0;
  *(undefined8 *)
   ((longlong)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVBias).Elements[0].field0_0x0 + 8)
       = uVar5;
  uVar5 = *(undefined8 *)
           ((longlong)
            &(this->GlobalDistanceFieldInfo->ParameterData).TranslatedCenterAndExtent[1].field0_0x0
           + 8);
  *(undefined8 *)&(param_1->GlobalVolumeTranslatedCenterAndExtent).Elements[1].field0_0x0 =
       *(undefined8 *)
        &(this->GlobalDistanceFieldInfo->ParameterData).TranslatedCenterAndExtent[1].field0_0x0;
  *(undefined8 *)
   ((longlong)&(param_1->GlobalVolumeTranslatedCenterAndExtent).Elements[1].field0_0x0 + 8) = uVar5;
  uVar5 = *(undefined8 *)
           ((longlong)
            &(this->GlobalDistanceFieldInfo->ParameterData).TranslatedWorldToUVAddAndMul[1].
             field0_0x0 + 8);
  *(undefined8 *)&(param_1->GlobalVolumeTranslatedWorldToUVAddAndMul).Elements[1].field0_0x0 =
       *(undefined8 *)
        &(this->GlobalDistanceFieldInfo->ParameterData).TranslatedWorldToUVAddAndMul[1].field0_0x0;
  *(undefined8 *)
   ((longlong)&(param_1->GlobalVolumeTranslatedWorldToUVAddAndMul).Elements[1].field0_0x0 + 8) =
       uVar5;
  uVar5 = *(undefined8 *)
           ((longlong)
            &(this->GlobalDistanceFieldInfo->ParameterData).MipTranslatedWorldToUVScale[1].
             field0_0x0 + 8);
  *(undefined8 *)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVScale).Elements[1].field0_0x0 =
       *(undefined8 *)
        &(this->GlobalDistanceFieldInfo->ParameterData).MipTranslatedWorldToUVScale[1].field0_0x0;
  *(undefined8 *)
   ((longlong)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVScale).Elements[1].field0_0x0 + 8)
       = uVar5;
  uVar5 = *(undefined8 *)
           ((longlong)
            &(this->GlobalDistanceFieldInfo->ParameterData).MipTranslatedWorldToUVBias[1].field0_0x0
           + 8);
  *(undefined8 *)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVBias).Elements[1].field0_0x0 =
       *(undefined8 *)
        &(this->GlobalDistanceFieldInfo->ParameterData).MipTranslatedWorldToUVBias[1].field0_0x0;
  *(undefined8 *)
   ((longlong)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVBias).Elements[1].field0_0x0 + 8)
       = uVar5;
  uVar5 = *(undefined8 *)
           ((longlong)
            &(this->GlobalDistanceFieldInfo->ParameterData).TranslatedCenterAndExtent[2].field0_0x0
           + 8);
  *(undefined8 *)&(param_1->GlobalVolumeTranslatedCenterAndExtent).Elements[2].field0_0x0 =
       *(undefined8 *)
        &(this->GlobalDistanceFieldInfo->ParameterData).TranslatedCenterAndExtent[2].field0_0x0;
  *(undefined8 *)
   ((longlong)&(param_1->GlobalVolumeTranslatedCenterAndExtent).Elements[2].field0_0x0 + 8) = uVar5;
  uVar5 = *(undefined8 *)
           ((longlong)
            &(this->GlobalDistanceFieldInfo->ParameterData).TranslatedWorldToUVAddAndMul[2].
             field0_0x0 + 8);
  *(undefined8 *)&(param_1->GlobalVolumeTranslatedWorldToUVAddAndMul).Elements[2].field0_0x0 =
       *(undefined8 *)
        &(this->GlobalDistanceFieldInfo->ParameterData).TranslatedWorldToUVAddAndMul[2].field0_0x0;
  *(undefined8 *)
   ((longlong)&(param_1->GlobalVolumeTranslatedWorldToUVAddAndMul).Elements[2].field0_0x0 + 8) =
       uVar5;
  uVar5 = *(undefined8 *)
           ((longlong)
            &(this->GlobalDistanceFieldInfo->ParameterData).MipTranslatedWorldToUVScale[2].
             field0_0x0 + 8);
  *(undefined8 *)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVScale).Elements[2].field0_0x0 =
       *(undefined8 *)
        &(this->GlobalDistanceFieldInfo->ParameterData).MipTranslatedWorldToUVScale[2].field0_0x0;
  *(undefined8 *)
   ((longlong)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVScale).Elements[2].field0_0x0 + 8)
       = uVar5;
  uVar5 = *(undefined8 *)
           ((longlong)
            &(this->GlobalDistanceFieldInfo->ParameterData).MipTranslatedWorldToUVBias[2].field0_0x0
           + 8);
  *(undefined8 *)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVBias).Elements[2].field0_0x0 =
       *(undefined8 *)
        &(this->GlobalDistanceFieldInfo->ParameterData).MipTranslatedWorldToUVBias[2].field0_0x0;
  *(undefined8 *)
   ((longlong)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVBias).Elements[2].field0_0x0 + 8)
       = uVar5;
  uVar5 = *(undefined8 *)
           ((longlong)
            &(this->GlobalDistanceFieldInfo->ParameterData).TranslatedCenterAndExtent[3].field0_0x0
           + 8);
  *(undefined8 *)&(param_1->GlobalVolumeTranslatedCenterAndExtent).Elements[3].field0_0x0 =
       *(undefined8 *)
        &(this->GlobalDistanceFieldInfo->ParameterData).TranslatedCenterAndExtent[3].field0_0x0;
  *(undefined8 *)
   ((longlong)&(param_1->GlobalVolumeTranslatedCenterAndExtent).Elements[3].field0_0x0 + 8) = uVar5;
  uVar5 = *(undefined8 *)
           ((longlong)
            &(this->GlobalDistanceFieldInfo->ParameterData).TranslatedWorldToUVAddAndMul[3].
             field0_0x0 + 8);
  *(undefined8 *)&(param_1->GlobalVolumeTranslatedWorldToUVAddAndMul).Elements[3].field0_0x0 =
       *(undefined8 *)
        &(this->GlobalDistanceFieldInfo->ParameterData).TranslatedWorldToUVAddAndMul[3].field0_0x0;
  *(undefined8 *)
   ((longlong)&(param_1->GlobalVolumeTranslatedWorldToUVAddAndMul).Elements[3].field0_0x0 + 8) =
       uVar5;
  uVar5 = *(undefined8 *)
           ((longlong)
            &(this->GlobalDistanceFieldInfo->ParameterData).MipTranslatedWorldToUVScale[3].
             field0_0x0 + 8);
  *(undefined8 *)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVScale).Elements[3].field0_0x0 =
       *(undefined8 *)
        &(this->GlobalDistanceFieldInfo->ParameterData).MipTranslatedWorldToUVScale[3].field0_0x0;
  *(undefined8 *)
   ((longlong)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVScale).Elements[3].field0_0x0 + 8)
       = uVar5;
  uVar5 = *(undefined8 *)
           ((longlong)
            &(this->GlobalDistanceFieldInfo->ParameterData).MipTranslatedWorldToUVBias[3].field0_0x0
           + 8);
  *(undefined8 *)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVBias).Elements[3].field0_0x0 =
       *(undefined8 *)
        &(this->GlobalDistanceFieldInfo->ParameterData).MipTranslatedWorldToUVBias[3].field0_0x0;
  *(undefined8 *)
   ((longlong)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVBias).Elements[3].field0_0x0 + 8)
       = uVar5;
  uVar5 = *(undefined8 *)
           ((longlong)
            &(this->GlobalDistanceFieldInfo->ParameterData).TranslatedCenterAndExtent[4].field0_0x0
           + 8);
  *(undefined8 *)&(param_1->GlobalVolumeTranslatedCenterAndExtent).Elements[4].field0_0x0 =
       *(undefined8 *)
        &(this->GlobalDistanceFieldInfo->ParameterData).TranslatedCenterAndExtent[4].field0_0x0;
  *(undefined8 *)
   ((longlong)&(param_1->GlobalVolumeTranslatedCenterAndExtent).Elements[4].field0_0x0 + 8) = uVar5;
  uVar5 = *(undefined8 *)
           ((longlong)
            &(this->GlobalDistanceFieldInfo->ParameterData).TranslatedWorldToUVAddAndMul[4].
             field0_0x0 + 8);
  *(undefined8 *)&(param_1->GlobalVolumeTranslatedWorldToUVAddAndMul).Elements[4].field0_0x0 =
       *(undefined8 *)
        &(this->GlobalDistanceFieldInfo->ParameterData).TranslatedWorldToUVAddAndMul[4].field0_0x0;
  *(undefined8 *)
   ((longlong)&(param_1->GlobalVolumeTranslatedWorldToUVAddAndMul).Elements[4].field0_0x0 + 8) =
       uVar5;
  uVar5 = *(undefined8 *)
           ((longlong)
            &(this->GlobalDistanceFieldInfo->ParameterData).MipTranslatedWorldToUVScale[4].
             field0_0x0 + 8);
  *(undefined8 *)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVScale).Elements[4].field0_0x0 =
       *(undefined8 *)
        &(this->GlobalDistanceFieldInfo->ParameterData).MipTranslatedWorldToUVScale[4].field0_0x0;
  *(undefined8 *)
   ((longlong)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVScale).Elements[4].field0_0x0 + 8)
       = uVar5;
  uVar5 = *(undefined8 *)
           ((longlong)
            &(this->GlobalDistanceFieldInfo->ParameterData).MipTranslatedWorldToUVBias[4].field0_0x0
           + 8);
  *(undefined8 *)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVBias).Elements[4].field0_0x0 =
       *(undefined8 *)
        &(this->GlobalDistanceFieldInfo->ParameterData).MipTranslatedWorldToUVBias[4].field0_0x0;
  *(undefined8 *)
   ((longlong)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVBias).Elements[4].field0_0x0 + 8)
       = uVar5;
  uVar5 = *(undefined8 *)
           ((longlong)
            &(this->GlobalDistanceFieldInfo->ParameterData).TranslatedCenterAndExtent[5].field0_0x0
           + 8);
  *(undefined8 *)&(param_1->GlobalVolumeTranslatedCenterAndExtent).Elements[5].field0_0x0 =
       *(undefined8 *)
        &(this->GlobalDistanceFieldInfo->ParameterData).TranslatedCenterAndExtent[5].field0_0x0;
  *(undefined8 *)
   ((longlong)&(param_1->GlobalVolumeTranslatedCenterAndExtent).Elements[5].field0_0x0 + 8) = uVar5;
  uVar5 = *(undefined8 *)
           ((longlong)
            &(this->GlobalDistanceFieldInfo->ParameterData).TranslatedWorldToUVAddAndMul[5].
             field0_0x0 + 8);
  *(undefined8 *)&(param_1->GlobalVolumeTranslatedWorldToUVAddAndMul).Elements[5].field0_0x0 =
       *(undefined8 *)
        &(this->GlobalDistanceFieldInfo->ParameterData).TranslatedWorldToUVAddAndMul[5].field0_0x0;
  *(undefined8 *)
   ((longlong)&(param_1->GlobalVolumeTranslatedWorldToUVAddAndMul).Elements[5].field0_0x0 + 8) =
       uVar5;
  uVar5 = *(undefined8 *)
           ((longlong)
            &(this->GlobalDistanceFieldInfo->ParameterData).MipTranslatedWorldToUVScale[5].
             field0_0x0 + 8);
  *(undefined8 *)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVScale).Elements[5].field0_0x0 =
       *(undefined8 *)
        &(this->GlobalDistanceFieldInfo->ParameterData).MipTranslatedWorldToUVScale[5].field0_0x0;
  *(undefined8 *)
   ((longlong)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVScale).Elements[5].field0_0x0 + 8)
       = uVar5;
  uVar5 = *(undefined8 *)
           ((longlong)
            &(this->GlobalDistanceFieldInfo->ParameterData).MipTranslatedWorldToUVBias[5].field0_0x0
           + 8);
  *(undefined8 *)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVBias).Elements[5].field0_0x0 =
       *(undefined8 *)
        &(this->GlobalDistanceFieldInfo->ParameterData).MipTranslatedWorldToUVBias[5].field0_0x0;
  *(undefined8 *)
   ((longlong)&(param_1->GlobalDistanceFieldMipTranslatedWorldToUVBias).Elements[5].field0_0x0 + 8)
       = uVar5;
  param_1->GlobalDistanceFieldMipFactor = (this->GlobalDistanceFieldInfo->ParameterData).MipFactor;
  param_1->GlobalDistanceFieldMipTransition =
       (this->GlobalDistanceFieldInfo->ParameterData).MipTransition;
  param_1->GlobalDistanceFieldClipmapSizeInPages =
       (this->GlobalDistanceFieldInfo->ParameterData).ClipmapSizeInPages;
  pFVar3 = this->GlobalDistanceFieldInfo;
  dVar1 = (pFVar3->ParameterData).InvPageAtlasSize.field0_0x0._s_0.Y;
  dVar2 = (pFVar3->ParameterData).InvPageAtlasSize.field0_0x0._s_0.Z;
  (param_1->GlobalDistanceFieldInvPageAtlasSize).field0_0x0._s_0.X =
       (float)(pFVar3->ParameterData).InvPageAtlasSize.field0_0x0._s_0.X;
  (param_1->GlobalDistanceFieldInvPageAtlasSize).field0_0x0._s_0.Y = (float)dVar1;
  (param_1->GlobalDistanceFieldInvPageAtlasSize).field0_0x0._s_0.Z = (float)dVar2;
  pFVar3 = this->GlobalDistanceFieldInfo;
  dVar1 = (pFVar3->ParameterData).InvCoverageAtlasSize.field0_0x0._s_0.Y;
  dVar2 = (pFVar3->ParameterData).InvCoverageAtlasSize.field0_0x0._s_0.Z;
  (param_1->GlobalDistanceFieldInvCoverageAtlasSize).field0_0x0._s_0.X =
       (float)(pFVar3->ParameterData).InvCoverageAtlasSize.field0_0x0._s_0.X;
  (param_1->GlobalDistanceFieldInvCoverageAtlasSize).field0_0x0._s_0.Y = (float)dVar1;
  (param_1->GlobalDistanceFieldInvCoverageAtlasSize).field0_0x0._s_0.Z = (float)dVar2;
  fVar6 = __real_3f800000;
  param_1->GlobalVolumeDimension = (this->GlobalDistanceFieldInfo->ParameterData).GlobalDFResolution
  ;
  param_1->GlobalVolumeTexelSize =
       fVar6 / (this->GlobalDistanceFieldInfo->ParameterData).GlobalDFResolution;
  param_1->MaxGlobalDFAOConeDistance =
       (this->GlobalDistanceFieldInfo->ParameterData).MaxDFAOConeDistance;
  param_1->NumGlobalSDFClipmaps =
       (this->GlobalDistanceFieldInfo->ParameterData).NumGlobalSDFClipmaps;
  pFVar8 = (this->GlobalDistanceFieldInfo->ParameterData).PageAtlasTexture;
  if (((pFVar8 == (FRHITexture *)0x0) &&
      (pFVar8 = (GBlackVolumeTexture->TextureRHI).Reference, pFVar8 == (FRHITexture *)0x0)) &&
     (pFVar8 = (GBlackTexture->TextureRHI).Reference, pFVar8 == (FRHITexture *)0x0)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\TextureFallbacks.h"
                       ,0x11,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  param_1->GlobalDistanceFieldPageAtlasTexture = pFVar8;
  pFVar8 = (this->GlobalDistanceFieldInfo->ParameterData).CoverageAtlasTexture;
  if (((pFVar8 == (FRHITexture *)0x0) &&
      (pFVar8 = (GBlackVolumeTexture->TextureRHI).Reference, pFVar8 == (FRHITexture *)0x0)) &&
     (pFVar8 = (GBlackTexture->TextureRHI).Reference, pFVar8 == (FRHITexture *)0x0)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\TextureFallbacks.h"
                       ,0x11,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  param_1->GlobalDistanceFieldCoverageAtlasTexture = pFVar8;
  pFVar8 = (this->GlobalDistanceFieldInfo->ParameterData).PageTableTexture;
  if (((pFVar8 == (FRHITexture *)0x0) &&
      (pFVar8 = (GBlackUintVolumeTexture->TextureRHI).Reference, pFVar8 == (FRHITexture *)0x0)) &&
     (pFVar8 = (GBlackTexture->TextureRHI).Reference, pFVar8 == (FRHITexture *)0x0)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\TextureFallbacks.h"
                       ,0x11,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  param_1->GlobalDistanceFieldPageTableTexture = pFVar8;
  pFVar8 = (this->GlobalDistanceFieldInfo->ParameterData).MipTexture;
  if (((pFVar8 == (FRHITexture *)0x0) &&
      (pFVar8 = (GBlackVolumeTexture->TextureRHI).Reference, pFVar8 == (FRHITexture *)0x0)) &&
     (pFVar8 = (GBlackTexture->TextureRHI).Reference, pFVar8 == (FRHITexture *)0x0)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\TextureFallbacks.h"
                       ,0x11,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  param_1->GlobalDistanceFieldMipTexture = pFVar8;
  param_1->CoveredExpandSurfaceScale = GLumenSceneGlobalSDFCoveredExpandSurfaceScale;
  param_1->NotCoveredExpandSurfaceScale = GLumenSceneGlobalSDFNotCoveredExpandSurfaceScale;
  param_1->NotCoveredMinStepScale = GLumenSceneGlobalSDFNotCoveredMinStepScale;
  param_1->DitheredTransparencyStepThreshold = GLumenSceneGlobalSDFDitheredTransparencyStepThreshold
  ;
  param_1->DitheredTransparencyTraceThreshold =
       GLumenSceneGlobalSDFDitheredTransparencyTraceThreshold;
  return;
}

// GetSceneTextures @ 1449e1800

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

FSceneTextures * __thiscall FViewInfo::GetSceneTextures(FViewInfo *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  FSceneTextures *pFVar4;
  
  plVar1 = (longlong *)(this->_padding_ + 800);
  if ((*(char *)(this->_padding_ + 200) == '\0') ||
     (pFVar4 = (FSceneTextures *)*plVar1, (char)pFVar4->_padding_ == '\0')) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsViewFamilyInfo && SceneTextures->bIsSceneTexturesInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.h"
                       ,0x7c0,
                       L"FSceneTextures was not initialized. Call FSceneTextures::InitializeViewFamily() first."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FSceneTextures *)(*pcVar2)();
      return pFVar4;
    }
    pFVar4 = (FSceneTextures *)*plVar1;
  }
  return pFVar4;
}

// GetSceneUniforms @ 144e928a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

FSceneUniformBuffer * __thiscall FViewInfo::GetSceneUniforms(FViewInfo *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FSceneUniformBuffer *pFVar4;
  
  lVar1 = this->_padding_;
  if (*(longlong *)(lVar1 + 0x178) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SceneRenderer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SceneView.h"
                       ,0xa7b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FSceneUniformBuffer *)(*pcVar2)();
      return pFVar4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000144e928e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar4 = (FSceneUniformBuffer *)(**(code **)(**(longlong **)(lVar1 + 0x178) + 0x10))();
  return pFVar4;
}

// RequiresSecondaryUpscale @ 1451e3020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

bool __thiscall FViewInfo::RequiresSecondaryUpscale(FViewInfo *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  TIntPoint<int> TVar7;
  TIntRect<int> *pTVar8;
  TIntRect<int> local_18;
  
  lVar5 = this->_padding_;
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  lVar6 = this->_padding_;
  iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  TVar7 = GetSecondaryViewRectSize(this);
  if (((int)lVar5 - (int)lVar6 == *(int *)TVar7.field0_0x0) &&
     (iVar1 - iVar2 == *(int *)((longlong)TVar7.field0_0x0 + 4))) {
    pTVar8 = GetSecondaryViewCropRect(this,&local_18);
    iVar1 = *(int *)((longlong)&pTVar8->field0_0x0 + 8);
    iVar2 = *(int *)((longlong)&pTVar8->field0_0x0 + 0xc);
    iVar3 = *(int *)&pTVar8->field0_0x0;
    iVar4 = *(int *)((longlong)&pTVar8->field0_0x0 + 4);
    TVar7 = GetSecondaryViewRectSize(this);
    if ((iVar1 - iVar3 == *(int *)TVar7.field0_0x0) &&
       (iVar2 - iVar4 == *(int *)((longlong)TVar7.field0_0x0 + 4))) {
      return false;
    }
  }
  return true;
}

// UpdatePreExposure @ 1451e6bd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

void __thiscall FViewInfo::UpdatePreExposure(FViewInfo *this)

{
  Type TVar1;
  longlong lVar2;
  code *pcVar3;
  TConsoleVariableData<float> *pTVar4;
  bool bVar5;
  bool bVar6;
  EShaderPlatform EVar7;
  uint uVar8;
  EAutoExposureMethod EVar9;
  FSceneViewState *pFVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  FEyeAdaptationParameters local_f8;
  
  lVar2 = this->_padding_;
  uVar8 = *(uint *)(lVar2 + 0x48) & 1;
  if ((int)this->_padding_ < 3) {
    if (((uVar8 != 0) && ((*(byte *)(lVar2 + 0x54) & 2) == 0)) && (FReadOnlyCVARCache::bMobileHDR))
    goto LAB_1451e6d48;
LAB_1451e6c34:
    bVar6 = false;
  }
  else {
    if (((uVar8 == 0) || ((*(uint *)(lVar2 + 0x5c) & 0x1004) != 0)) ||
       (((*(uint *)(lVar2 + 0x60) & 0x600) != 0 || ((*(byte *)(lVar2 + 0x54) & 2) != 0))))
    goto LAB_1451e6c34;
LAB_1451e6d48:
    bVar6 = true;
  }
  EVar7 = FSceneView::GetShaderPlatform((FSceneView *)this);
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar7].bContainsValidPlatformInfo == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0xe2,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  TVar1 = FGenericDataDrivenShaderPlatformInfo::Infos[EVar7].MaxFeatureLevel;
  if (TVar1 == ES3_1) {
    IsMobileEyeAdaptationEnabled(this);
  }
  pTVar4 = CVarEyeAdaptationPreExposureOverride.Ref;
  bVar5 = IsInParallelRenderingThread();
  if ((!bVar5) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  fVar13 = pTVar4->ShadowedValue[1];
  EVar9 = GetAutoExposureMethod(this);
  GetEyeAdaptationParameters(&local_f8,this);
  fVar12 = (local_f8.MaxAverageLuminance + local_f8.MinAverageLuminance) * __real_3f000000;
  if (fVar12 <= __real_38d1b717) {
    fVar12 = __real_38d1b717;
  }
  fVar12 = (__real_3e3851ec / fVar12) * local_f8.ExposureCompensationSettings;
  if ((TVar1 == ES3_1) && (FReadOnlyCVARCache::bMobileHDR == false)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (((((((((char)*(uint *)(lVar2 + 0x48) < '\0') && ((*(uint *)(lVar2 + 0x54) >> 0xc & 1) != 0))
          && (bVar6)) &&
         ((*(char *)(lVar2 + 0xc3) != '\0' && ((*(uint *)(lVar2 + 0x54) & 0xd) == 0)))) &&
        (((*(uint *)(lVar2 + 0x5c) & 0xc000) == 0 && ((*(uint *)(lVar2 + 0x58) & 0x200) == 0)))) &&
       (((*(uint *)(lVar2 + 0x48) >> 0x1a & 1) == 0 ||
        (*(longlong *)((longlong)&this->_padding_ + 4) != 0)))) &&
      (((*(byte *)(lVar2 + 0x60) & 1) == 0 || (bVar6 = PathTracing::NeedsTonemapping(), bVar6)))) &&
     (((*(byte *)(lVar2 + 0x60) & 2) == 0 ||
      (bVar6 = RaytracingDebugViewModeNeedsTonemapping((FSceneView *)this), bVar6)))) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  fVar14 = __real_3f800000;
  pFVar10 = this->ViewState;
  bVar11 = false;
  this->PreExposure = 1.0;
  if (pFVar10 != (FSceneViewState *)0x0) {
    if (!bVar5) {
      this->PreExposure = fVar12;
      fVar14 = fVar12;
      goto LAB_1451e6f0c;
    }
    fVar14 = __real_3f800000;
    if (bVar6) {
      if (0.0 < fVar13) {
        this->PreExposure = fVar13;
        fVar14 = fVar13;
        goto LAB_1451e6f0c;
      }
      fVar13 = FLinearColor::GetLuminance((FLinearColor *)((longlong)&this->_padding_ + 4));
      dVar16 = (double)fVar13;
      if ((double)fVar13 <= __real_3f1a36e2eb1c432d) {
        dVar16 = __real_3f1a36e2eb1c432d;
      }
      fVar14 = GetLastAverageLocalExposure(this);
      fVar13 = __real_3f800000;
      if ((EVar9 != AEM_Manual) &&
         (fVar15 = GetLastEyeAdaptationExposure(this), fVar12 = fVar13, 0.0 < fVar15)) {
        fVar12 = fVar15;
      }
      fVar14 = fVar12 * (float)dVar16 * fVar14;
      if ((fVar14 <= 0.0) &&
         (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<2636433213286778316>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\PostProcessEyeAdaptation.cpp"
                             ,0x5cc,"FinalPreExposure > 0.0f"), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar10 = this->ViewState;
      bVar11 = pFVar10 != (FSceneViewState *)0x0;
      this->PreExposure = fVar14;
    }
  }
  if (pFVar10 == (FSceneViewState *)0x0) {
    return;
  }
LAB_1451e6f0c:
  pFVar10->PreExposure = fVar14;
  this->ViewState->bUpdateLastExposure = bVar11;
  if (this->bStatePrevViewInfoIsReadOnly == 0) {
    (this->ViewState->PrevFrameViewInfo).SceneColorPreExposure = this->PreExposure;
  }
  return;
}

// FViewInfo @ 1454d50d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

FViewInfo * __thiscall FViewInfo::FViewInfo(FViewInfo *this,FSceneViewInitOptions *param_1)

{
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> *this_00;
  FMobileCSMVisibilityInfo *pFVar1;
  char cVar2;
  TRangeBound<int> TVar3;
  TRangeBound<int> TVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 uVar7;
  FGlobalDistanceFieldInfo *pFVar8;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar9;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar10;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar11;
  FSubstrateViewData *pFVar12;
  FLocalFogVolumeViewData *pFVar13;
  FHairStrandsViewData *pFVar14;
  FPreviousViewInfo *pFVar15;
  FLumenTranslucencyGIVolume *pFVar16;
  bool bVar17;
  TRangeBound<int> local_res8;
  uint local_res10;
  undefined4 uStackX_14;
  
  FSceneView::FSceneView((FSceneView *)this,param_1);
  this->_padding_ = (longlong)&___7FViewInfo__6B_;
  this_00 = &this->Allocator;
  this_00->Next =
       (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
        )0x0;
  (this->ViewRect).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->ViewRect).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->CachedViewUniformShaderParameters).Ptr = (FViewUniformShaderParameters *)0x0;
  (this->PrimitiveVisibilityMap).AllocatorInstance.SecondaryData.Data = (uint *)0x0;
  (this->PrimitiveVisibilityMap).NumBits = 0;
  (this->PrimitiveVisibilityMap).MaxBits = 0x80;
  (this->PrimitiveRayTracingVisibilityMap).AllocatorInstance.SecondaryData.Data = (uint *)0x0;
  (this->PrimitiveRayTracingVisibilityMap).NumBits = 0;
  (this->PrimitiveRayTracingVisibilityMap).MaxBits = 0x80;
  (this->PrimitiveDefinitelyUnoccludedMap).AllocatorInstance.SecondaryData.Data = (uint *)0x0;
  (this->PrimitiveDefinitelyUnoccludedMap).NumBits = 0;
  (this->PrimitiveDefinitelyUnoccludedMap).MaxBits = 0x80;
  (this->PotentiallyFadingPrimitiveMap).AllocatorInstance.SecondaryData.Data = (uint *)0x0;
  (this->PotentiallyFadingPrimitiveMap).NumBits = 0;
  (this->PotentiallyFadingPrimitiveMap).MaxBits = 0x80;
  (this->PrimitiveFadeUniformBuffers).AllocatorInstance.Data = (FRHIUniformBuffer **)0x0;
  (this->PrimitiveFadeUniformBuffers).ArrayNum = 0;
  (this->PrimitiveFadeUniformBuffers).ArrayMax = 0;
  (this->PrimitiveFadeUniformBufferMap).AllocatorInstance.SecondaryData.Data = (uint *)0x0;
  (this->PrimitiveFadeUniformBufferMap).NumBits = 0;
  (this->PrimitiveFadeUniformBufferMap).MaxBits = 0x80;
  (this->DitherFadeInUniformBuffer).Reference = (FRHIUniformBuffer *)0x0;
  (this->DitherFadeOutUniformBuffer).Reference = (FRHIUniformBuffer *)0x0;
  (this->PrimitiveViewRelevanceMap).AllocatorInstance.Data = (FPrimitiveViewRelevance *)0x0;
  (this->PrimitiveViewRelevanceMap).ArrayNum = 0;
  (this->PrimitiveViewRelevanceMap).ArrayMax = 0;
  (this->StaticMeshVisibilityMap).AllocatorInstance.SecondaryData.Data = (uint *)0x0;
  (this->StaticMeshVisibilityMap).NumBits = 0;
  (this->StaticMeshVisibilityMap).MaxBits = 0x80;
  (this->StaticMeshFadeOutDitheredLODMap).AllocatorInstance.SecondaryData.Data = (uint *)0x0;
  (this->StaticMeshFadeOutDitheredLODMap).NumBits = 0;
  (this->StaticMeshFadeOutDitheredLODMap).MaxBits = 0x80;
  (this->StaticMeshFadeInDitheredLODMap).AllocatorInstance.SecondaryData.Data = (uint *)0x0;
  (this->StaticMeshFadeInDitheredLODMap).NumBits = 0;
  (this->StaticMeshFadeInDitheredLODMap).MaxBits = 0x80;
  (this->PrimitivesLODMask).AllocatorInstance.Data = (FLODMask *)0x0;
  (this->PrimitivesLODMask).ArrayNum = 0;
  (this->PrimitivesLODMask).ArrayMax = 0;
  (this->VisibleDynamicPrimitivesWithSimpleLights).AllocatorInstance.Data =
       (FPrimitiveSceneInfo **)0x0;
  (this->VisibleDynamicPrimitivesWithSimpleLights).ArrayNum = 0;
  (this->VisibleDynamicPrimitivesWithSimpleLights).ArrayMax = 0;
  (this->DirtyIndirectLightingCacheBufferPrimitives).AllocatorInstance.Data =
       (FPrimitiveSceneInfo **)0x0;
  (this->DirtyIndirectLightingCacheBufferPrimitives).ArrayNum = 0;
  (this->DirtyIndirectLightingCacheBufferPrimitives).ArrayMax = 0;
  (this->DirtyIndirectLightingCacheBufferPrimitivesMutex).State = (atomic<unsigned_char>)0x0;
  *(undefined8 *)&this->TranslucentSelfShadowUniformBufferMap = 0;
  *(undefined8 *)&(this->TranslucentSelfShadowUniformBufferMap).field_0x8 = 0;
  *(undefined8 *)&(this->TranslucentSelfShadowUniformBufferMap).field_0x20 = 0;
  *(undefined4 *)&(this->TranslucentSelfShadowUniformBufferMap).field_0x28 = 0;
  *(undefined4 *)&(this->TranslucentSelfShadowUniformBufferMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->TranslucentSelfShadowUniformBufferMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TranslucentSelfShadowUniformBufferMap).field_0x34 = 0;
  *(undefined8 *)&(this->TranslucentSelfShadowUniformBufferMap).field_0x50 = 0;
  *(undefined4 *)&(this->TranslucentSelfShadowUniformBufferMap).field_0x58 = 0;
  pFVar8 = TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
           Create<FGlobalDistanceFieldInfo>(this_00);
  this->GlobalDistanceFieldInfo = pFVar8;
  (this->TranslucentPrimCount).Count[0] = 0;
  (this->TranslucentPrimCount).Count[1] = 0;
  *(undefined8 *)((this->TranslucentPrimCount).Count + 6) = 0;
  (this->TranslucentPrimCount).Count[2] = 0;
  (this->TranslucentPrimCount).Count[3] = 0;
  (this->TranslucentPrimCount).Count[4] = 0;
  (this->TranslucentPrimCount).Count[5] = 0;
  (this->TranslucentPrimCount).UseSceneColorCopyPerPass[4] = false;
  (this->TranslucentPrimCount).UseSceneColorCopyPerPass[5] = false;
  (this->TranslucentPrimCount).UseSceneColorCopyPerPass[6] = false;
  *(undefined8 *)&(this->CustomDepthStencilValues).Elements = 0;
  *(undefined8 *)&(this->CustomDepthStencilValues).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CustomDepthStencilValues).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CustomDepthStencilValues).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CustomDepthStencilValues).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CustomDepthStencilValues).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CustomDepthStencilValues).Elements.field_0x34 = 0;
  (this->CustomDepthStencilValues).Hash.SecondaryData.SecondaryData.Data = (FSetElementId *)0x0;
  (this->CustomDepthStencilValues).HashSize = 0;
  (this->NaniteCustomDepthInstances).AllocatorInstance.Data = (FPrimitiveInstanceRange *)0x0;
  (this->NaniteCustomDepthInstances).ArrayNum = 0;
  (this->NaniteCustomDepthInstances).ArrayMax = 0;
  (this->VolumetricMeshBatches).AllocatorInstance.Data = (FVolumetricMeshBatch *)0x0;
  (this->VolumetricMeshBatches).ArrayNum = 0;
  (this->VolumetricMeshBatches).ArrayMax = 0;
  (this->HeterogeneousVolumesMeshBatches).AllocatorInstance.Data = (FVolumetricMeshBatch *)0x0;
  (this->HeterogeneousVolumesMeshBatches).ArrayNum = 0;
  (this->HeterogeneousVolumesMeshBatches).ArrayMax = 0;
  (this->SkyMeshBatches).AllocatorInstance.Data = (FSkyMeshBatch *)0x0;
  (this->SkyMeshBatches).ArrayNum = 0;
  (this->SkyMeshBatches).ArrayMax = 0;
  (this->SortedTrianglesMeshBatches).AllocatorInstance.Data = (FSortedTrianglesMeshBatch *)0x0;
  (this->SortedTrianglesMeshBatches).ArrayNum = 0;
  (this->SortedTrianglesMeshBatches).ArrayMax = 0;
  (this->VisibleLightInfos).AllocatorInstance.Data = (FVisibleLightViewInfo *)0x0;
  (this->VisibleLightInfos).ArrayNum = 0;
  (this->VisibleLightInfos).ArrayMax = 0;
  (this->VisibleReflectionCaptureLights).AllocatorInstance.Data = (FLightSceneProxy **)0x0;
  (this->VisibleReflectionCaptureLights).ArrayNum = 0;
  (this->VisibleReflectionCaptureLights).ArrayMax = 0;
  aVar9 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
           )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0xa8,8);
  *(undefined8 *)((longlong)aVar9 + 8) = 0;
  *(undefined ***)aVar9 =
       &
       ___7__TObject_VFBatchedElements_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  aVar10 = this_00->Next;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
      *)((longlong)aVar9 + 8) = aVar10;
    LOCK();
    aVar11 = this_00->Next;
    bVar17 = aVar10 == aVar11;
    if (bVar17) {
      this_00->Next = aVar9;
      aVar11 = aVar10;
    }
    UNLOCK();
    aVar10 = aVar11;
  } while (!bVar17);
  FBatchedElements::FBatchedElements((FBatchedElements *)((longlong)aVar9 + 0x10));
  this->BatchedViewElements = (FBatchedElements *)((longlong)aVar9 + 0x10);
  aVar9 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
           )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0xa8,8);
  *(undefined8 *)((longlong)aVar9 + 8) = 0;
  *(undefined ***)aVar9 =
       &
       ___7__TObject_VFBatchedElements_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  aVar10 = this_00->Next;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
      *)((longlong)aVar9 + 8) = aVar10;
    LOCK();
    aVar11 = this_00->Next;
    bVar17 = aVar10 == aVar11;
    if (bVar17) {
      this_00->Next = aVar9;
      aVar11 = aVar10;
    }
    UNLOCK();
    aVar10 = aVar11;
  } while (!bVar17);
  FBatchedElements::FBatchedElements((FBatchedElements *)((longlong)aVar9 + 0x10));
  this->TopBatchedViewElements = (FBatchedElements *)((longlong)aVar9 + 0x10);
  (this->ViewMeshElements).Array.AllocatorInstance.Data = (void **)0x0;
  (this->ViewMeshElements).Array.ArrayNum = 0;
  (this->ViewMeshElements).Array.ArrayMax = 0;
  (this->TopViewMeshElements).Array.AllocatorInstance.Data = (void **)0x0;
  (this->TopViewMeshElements).Array.ArrayNum = 0;
  (this->TopViewMeshElements).Array.ArrayMax = 0;
  (this->DynamicResources).AllocatorInstance.Data = (FDynamicPrimitiveResource **)0x0;
  (this->DynamicResources).ArrayNum = 0;
  (this->DynamicResources).ArrayMax = 0;
  (this->DynamicMeshElements).AllocatorInstance.Data = (FMeshBatchAndRelevance *)0x0;
  (this->DynamicMeshElements).ArrayNum = 0;
  (this->DynamicMeshElements).ArrayMax = 0;
  (this->DynamicMeshElementRanges).AllocatorInstance.Data = (TIntVector2<int> *)0x0;
  (this->DynamicMeshElementRanges).ArrayNum = 0;
  (this->DynamicMeshElementRanges).ArrayMax = 0;
  (this->HairStrandsMeshElements).AllocatorInstance.Data = (FMeshBatchAndRelevance *)0x0;
  (this->HairStrandsMeshElements).ArrayNum = 0;
  (this->HairStrandsMeshElements).ArrayMax = 0;
  (this->HairCardsMeshElements).AllocatorInstance.Data = (FMeshBatchAndRelevance *)0x0;
  (this->HairCardsMeshElements).ArrayNum = 0;
  (this->HairCardsMeshElements).ArrayMax = 0;
  (this->DynamicMeshElementsPassRelevance).AllocatorInstance.Data = (FMeshPassMask *)0x0;
  (this->DynamicMeshElementsPassRelevance).ArrayNum = 0;
  (this->DynamicMeshElementsPassRelevance).ArrayMax = 0;
  (this->RayTracedDynamicMeshElements).AllocatorInstance.Data = (FMeshBatchAndRelevance *)0x0;
  (this->RayTracedDynamicMeshElements).ArrayNum = 0;
  (this->RayTracedDynamicMeshElements).ArrayMax = 0;
  (this->DynamicEditorMeshElements).AllocatorInstance.Data = (FMeshBatchAndRelevance *)0x0;
  (this->DynamicEditorMeshElements).ArrayNum = 0;
  (this->DynamicEditorMeshElements).ArrayMax = 0;
  aVar9 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
           )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x168,8);
  *(undefined8 *)((longlong)aVar9 + 8) = 0;
  *(undefined ***)aVar9 =
       &
       ___7__TObject_VFSimpleElementCollector_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  aVar10 = this_00->Next;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
      *)((longlong)aVar9 + 8) = aVar10;
    LOCK();
    aVar11 = this_00->Next;
    bVar17 = aVar10 == aVar11;
    if (bVar17) {
      this_00->Next = aVar9;
      aVar11 = aVar10;
    }
    UNLOCK();
    aVar10 = aVar11;
  } while (!bVar17);
  FSimpleElementCollector::FSimpleElementCollector
            ((FSimpleElementCollector *)((longlong)aVar9 + 0x10));
  this->SimpleElementCollector = (FSimpleElementCollector *)((longlong)aVar9 + 0x10);
  aVar9 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
           )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x168,8);
  *(undefined8 *)((longlong)aVar9 + 8) = 0;
  *(undefined ***)aVar9 =
       &
       ___7__TObject_VFSimpleElementCollector_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  aVar10 = this_00->Next;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
      *)((longlong)aVar9 + 8) = aVar10;
    LOCK();
    aVar11 = this_00->Next;
    bVar17 = aVar10 == aVar11;
    if (bVar17) {
      this_00->Next = aVar9;
      aVar11 = aVar10;
    }
    UNLOCK();
    aVar10 = aVar11;
  } while (!bVar17);
  FSimpleElementCollector::FSimpleElementCollector
            ((FSimpleElementCollector *)((longlong)aVar9 + 0x10));
  this->EditorSimpleElementCollector = (FSimpleElementCollector *)((longlong)aVar9 + 0x10);
  aVar9 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
           )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x168,8);
  *(undefined8 *)((longlong)aVar9 + 8) = 0;
  *(undefined ***)aVar9 =
       &
       ___7__TObject_VFSimpleElementCollector_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  aVar10 = this_00->Next;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
      *)((longlong)aVar9 + 8) = aVar10;
    LOCK();
    aVar11 = this_00->Next;
    bVar17 = aVar10 == aVar11;
    if (bVar17) {
      this_00->Next = aVar9;
      aVar11 = aVar10;
    }
    UNLOCK();
    aVar10 = aVar11;
  } while (!bVar17);
  FSimpleElementCollector::FSimpleElementCollector
            ((FSimpleElementCollector *)((longlong)aVar9 + 0x10));
  this->DebugSimpleElementCollector = (FSimpleElementCollector *)((longlong)aVar9 + 0x10);
  local_res8.Type.Value = '\0';
  local_res8._1_3_ = 0;
  local_res8.Value = 0;
  TStaticArray<FParallelMeshDrawCommandPass_*,39,4294967295>::
  TStaticArray<FParallelMeshDrawCommandPass_*,39,4294967295><std::nullptr_t>
            (&this->ParallelMeshDrawCommandPasses,InPlace,(void **)&local_res8);
  (this->VisibleRayTracingShaderBindings).AllocatorInstance.Data =
       (FRayTracingShaderBindingData *)0x0;
  (this->VisibleRayTracingShaderBindings).ArrayNum = 0;
  (this->VisibleRayTracingShaderBindings).ArrayMax = 0;
  TChunkedArray<FRayTracingMeshCommand,16384,TSizedDefaultAllocator<32>_>::
  TChunkedArray<FRayTracingMeshCommand,16384,TSizedDefaultAllocator<32>_>
            (&this->DynamicRayTracingMeshCommandStorage,0);
  *(undefined8 *)&(this->DynamicRayTracingRDGBuffers).Elements = 0;
  *(undefined8 *)&(this->DynamicRayTracingRDGBuffers).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DynamicRayTracingRDGBuffers).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->DynamicRayTracingRDGBuffers).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DynamicRayTracingRDGBuffers).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DynamicRayTracingRDGBuffers).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DynamicRayTracingRDGBuffers).Elements.field_0x34 = 0;
  (this->DynamicRayTracingRDGBuffers).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->DynamicRayTracingRDGBuffers).HashSize = 0;
  pFVar1->bMobileDynamicCSMInUse = 0;
  pFVar1->bAlwaysUseCSM = 0;
  (this->AddDynamicRayTracingMeshBatchTaskList).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AddDynamicRayTracingMeshBatchTaskList).ArrayNum = 0;
  (this->AddDynamicRayTracingMeshBatchTaskList).ArrayMax = 0;
  (this->DynamicRayTracingShaderBindingsPerTask).AllocatorInstance.Data =
       (TArray<FRayTracingShaderBindingData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
        **)0x0;
  (this->DynamicRayTracingShaderBindingsPerTask).ArrayNum = 0;
  (this->DynamicRayTracingShaderBindingsPerTask).ArrayMax = 0;
  (this->DynamicRayTracingMeshCommandStoragePerTask).AllocatorInstance.Data =
       (TChunkedArray<FRayTracingMeshCommand,16384,TSizedDefaultAllocator<32>_> **)0x0;
  (this->DynamicRayTracingMeshCommandStoragePerTask).ArrayNum = 0;
  (this->DynamicRayTracingMeshCommandStoragePerTask).ArrayMax = 0;
  (this->MobileCSMVisibilityInfo).MobilePrimitiveCSMReceiverVisibilityMap.AllocatorInstance.
  SecondaryData.Data = (uint *)0x0;
  (this->MobileCSMVisibilityInfo).MobilePrimitiveCSMReceiverVisibilityMap.NumBits = 0;
  (this->MobileCSMVisibilityInfo).MobilePrimitiveCSMReceiverVisibilityMap.MaxBits = 0x80;
  (this->MobileCSMVisibilityInfo).MobileCSMStaticMeshVisibilityMap.AllocatorInstance.SecondaryData.
  Data = (uint *)0x0;
  (this->MobileCSMVisibilityInfo).MobileCSMStaticMeshVisibilityMap.NumBits = 0;
  (this->MobileCSMVisibilityInfo).MobileCSMStaticMeshVisibilityMap.MaxBits = 0x80;
  (this->MobileCSMVisibilityInfo).MobileNonCSMStaticMeshVisibilityMap.AllocatorInstance.
  SecondaryData.Data = (uint *)0x0;
  (this->MobileCSMVisibilityInfo).MobileNonCSMStaticMeshVisibilityMap.NumBits = 0;
  (this->MobileCSMVisibilityInfo).MobileNonCSMStaticMeshVisibilityMap.MaxBits = 0x80;
  pFVar12 = TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
            Create<FSubstrateViewData>(this_00);
  this->SubstrateViewData = pFVar12;
  pFVar13 = TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
            Create<FLocalFogVolumeViewData>(this_00);
  this->LocalFogVolumeViewData = pFVar13;
  pFVar14 = TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
            Create<FHairStrandsViewData>(this_00);
  this->HairStrandsViewData = pFVar14;
  (this->LightFunctionAtlasViewData).SceneData = (FLightFunctionAtlasSceneData *)0x0;
  (this->LightFunctionAtlasViewData).ViewIndex = 0;
  *(undefined8 *)&(this->ExponentialFogParameters).field0_0x0 = 0;
  (this->ExponentialFogParameters).field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)((longlong)&(this->ExponentialFogParameters).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->ExponentialFogParameters2).field0_0x0 + 4) = 0;
  (this->ExponentialFogParameters2).field0_0x0._s_0.W = 1.0;
  *(undefined8 *)&(this->ExponentialFogParameters3).field0_0x0 = 0;
  (this->ExponentialFogParameters3).field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)((longlong)&(this->ExponentialFogParameters3).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->SkyAtmosphereAmbientContributionColorScale).field0_0x0 + 4) = 0;
  (this->SkyAtmosphereAmbientContributionColorScale).field0_0x0._s_0.W = 1.0;
  pFVar15 = TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
            Create<FPreviousViewInfo>(this_00);
  cVar2 = *(char *)((longlong)&this->_padding_ + 3);
  this->PrevViewInfo = pFVar15;
  FOcclusionQueryBatcher::FOcclusionQueryBatcher
            (&this->IndividualOcclusionQueries,(FSceneViewState *)param_1->SceneViewStateInterface,1
             ,(cVar2 != '\0') + 1);
  FOcclusionQueryBatcher::FOcclusionQueryBatcher
            (&this->GroupedOcclusionQueries,(FSceneViewState *)param_1->SceneViewStateInterface,0x10
             ,(*(char *)((longlong)&this->_padding_ + 3) != '\0') + 1);
  this->HZB = (FRDGTexture *)0x0;
  this->ClosestHZB = (FRDGTexture *)0x0;
  (this->TranslucencyVolumeMarkData).Elements[0].MarkTexture = (FRDGTexture *)0x0;
  (this->TranslucencyVolumeMarkData).Elements[0].VoxelAllocator = (FRDGBuffer *)0x0;
  (this->TranslucencyVolumeMarkData).Elements[0].VoxelData = (FRDGBuffer *)0x0;
  (this->TranslucencyVolumeMarkData).Elements[0].VoxelIndirectArgs = (FRDGBuffer *)0x0;
  (this->TranslucencyVolumeMarkData).Elements[1].MarkTexture = (FRDGTexture *)0x0;
  (this->TranslucencyVolumeMarkData).Elements[1].VoxelAllocator = (FRDGBuffer *)0x0;
  (this->TranslucencyVolumeMarkData).Elements[1].VoxelData = (FRDGBuffer *)0x0;
  (this->TranslucencyVolumeMarkData).Elements[1].VoxelIndirectArgs = (FRDGBuffer *)0x0;
  this->ReflectionCaptureUniformBuffer = (TUniformBufferRef<FReflectionCaptureShaderData>)0x0;
  this->MobileReflectionCaptureUniformBuffer =
       (TUniformBufferRef<FMobileReflectionCaptureShaderData>)0x0;
  (this->SkyAtmosphereCameraAerialPerspectiveVolume).Reference = (IPooledRenderTarget *)0x0;
  (this->SkyAtmosphereCameraAerialPerspectiveVolumeMieOnly).Reference = (IPooledRenderTarget *)0x0;
  (this->SkyAtmosphereCameraAerialPerspectiveVolumeRayOnly).Reference = (IPooledRenderTarget *)0x0;
  (this->SkyAtmosphereViewLutTexture).Reference = (IPooledRenderTarget *)0x0;
  this->VolumetricRenderTargetViewUniformBuffer =
       (TUniformBufferRef<FViewUniformShaderParameters>)0x0;
  this->VolumetricCloudSkyAO = (FRDGTexture *)0x0;
  this->VolumetricCloudShadowRenderTarget[0] = (FRDGTexture *)0x0;
  this->VolumetricCloudShadowRenderTarget[1] = (FRDGTexture *)0x0;
  this->VolumetricCloudShadowExtractedRenderTarget[0].Reference = (IPooledRenderTarget *)0x0;
  this->VolumetricCloudShadowExtractedRenderTarget[1].Reference = (IPooledRenderTarget *)0x0;
  (this->ForwardLightingResources).ForwardLightUniformParameters =
       (FForwardLightUniformParameters *)0x0;
  (this->ForwardLightingResources).ForwardLightUniformBuffer =
       (TRDGUniformBuffer<FForwardLightUniformParameters> *)0x0;
  (this->ForwardLightingResources).SelectedForwardDirectionalLightProxy = (FLightSceneProxy *)0x0;
  (this->VolumetricFogResources).VolumetricFogGlobalData =
       (TUniformBufferRef<FVolumetricFogGlobalData>)0x0;
  (this->VolumetricFogResources).IntegratedLightScatteringTexture = (FRDGTexture *)0x0;
  this->bLightGridHasRectLights = false;
  this->bLightGridHasTexturedLights = false;
  this->HeterogeneousVolumeRadiance = (FRDGTexture *)0x0;
  this->HeterogeneousVolumeHoldout = (FRDGTexture *)0x0;
  this->HeterogeneousVolumeBeerShadowMap = (FRDGTexture *)0x0;
  (this->MobileLightShaft).bIsSet = false;
  this->bUseComputePasses = false;
  this->CustomVisibilityQuery = (ICustomVisibilityQuery *)0x0;
  this->FFTBloomKernelTexture = (FTexture2DResource *)0x0;
  this->FilmGrainTexture = (FTexture2DResource *)0x0;
  (this->IndirectShadowPrimitives).AllocatorInstance.Data = (FPrimitiveSceneInfo **)0x0;
  (this->IndirectShadowPrimitives).ArrayNum = 0;
  (this->IndirectShadowPrimitives).ArrayMax = 0;
  (this->PrimitiveSceneDataTextureOverrideRHI).Reference = (FRHITexture *)0x0;
  (this->LensDistortionLUT).DistortingDisplacementTexture = (FRDGTexture *)0x0;
  (this->LensDistortionLUT).UndistortingDisplacementTexture = (FRDGTexture *)0x0;
  (this->LensDistortionLUT).ResolutionFraction = 1.0;
  (this->LensDistortionLUT).DistortionOverscan = 1.0;
  (this->LensDistortionLUT).DistortionGridDimensions.field0_0x0._s_0.X = 0x20;
  (this->LensDistortionLUT).DistortionGridDimensions.field0_0x0._s_0.Y = 0x14;
  (this->ShaderPrintData).Setup.ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  *(undefined4 *)((longlong)&(this->ShaderPrintData).Setup.ViewRect.field0_0x0 + 8) = 1;
  *(undefined4 *)((longlong)&(this->ShaderPrintData).Setup.ViewRect.field0_0x0 + 0xc) = 1;
  (this->ShaderPrintData).Setup.CursorCoord.field0_0x0 = (TIntPoint<int>_u_0)0xffffffffffffffff;
  (this->ShaderPrintData).Setup.bEnabled = false;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ShaderPrintData).Setup.PreViewTranslation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ShaderPrintData).Setup.PreViewTranslation.field0_0x0._s_0.Y = (double)uVar7;
  (this->ShaderPrintData).Setup.PreViewTranslation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ShaderPrintData).Setup.FontSize.field0_0x0._s_0.X = 1;
  (this->ShaderPrintData).Setup.FontSize.field0_0x0._s_0.Y = 1;
  (this->ShaderPrintData).Setup.FontSpacing.field0_0x0._s_0.X = 1;
  *(undefined8 *)((longlong)&(this->ShaderPrintData).Setup.FontSpacing.field0_0x0 + 4) = 1;
  (this->ShaderPrintData).Setup.DPIScale = 1.0;
  (this->ShaderPrintData).Setup.MaxStateCount = 0;
  (this->ShaderPrintData).Setup.MaxLineCount = 0;
  (this->ShaderPrintData).Setup.MaxTriangleCount = 0;
  (this->ShaderPrintData).Setup.bIsDrawLocked = false;
  (this->ShaderPrintData).UniformBuffer =
       (TUniformBufferRef<ShaderPrint::FShaderPrintCommonParameters>)0x0;
  (this->ShaderPrintData).ShaderPrintEntryBuffer = (FRDGBuffer *)0x0;
  (this->ShaderPrintData).ShaderPrintStateBuffer = (FRDGBuffer *)0x0;
  pFVar16 = TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
            Create<FLumenTranslucencyGIVolume>(this_00);
  this->LumenTranslucencyGIVolume = pFVar16;
  (this->MegaLightsVolume).Texture = (FRDGTexture *)0x0;
  (this->MegaLightsVolume).TranslucencyAmbient[0] = (FRDGTexture *)0x0;
  (this->MegaLightsVolume).TranslucencyAmbient[1] = (FRDGTexture *)0x0;
  (this->MegaLightsVolume).TranslucencyDirectional[0] = (FRDGTexture *)0x0;
  (this->MegaLightsVolume).TranslucencyDirectional[1] = (FRDGTexture *)0x0;
  (this->LumenFrontLayerTranslucency).Radiance = (FRDGTexture *)0x0;
  (this->LumenFrontLayerTranslucency).Normal = (FRDGTexture *)0x0;
  (this->LumenFrontLayerTranslucency).SceneDepth = (FRDGTexture *)0x0;
  (this->LumenFrontLayerTranslucency).bEnabled = false;
  (this->LumenFrontLayerTranslucency).RelativeDepthThreshold = 0.0;
  (this->RayTracingSceneViewHandle).Index = 0xffffffff;
  (this->MaterialRayTracingData).PipelineState = (FRayTracingPipelineState *)0x0;
  (this->MaterialRayTracingData).ShaderBindingTable.Reference = (FRHIShaderBindingTable *)0x0;
  (this->MaterialRayTracingData).MaterialBindings.AllocatorInstance.Data =
       (FRayTracingLocalShaderBindingWriter **)0x0;
  (this->MaterialRayTracingData).MaterialBindings.ArrayNum = 0;
  (this->MaterialRayTracingData).MaterialBindings.ArrayMax = 0;
  (this->MaterialRayTracingData).CallableBindings.AllocatorInstance.Data =
       (FRayTracingLocalShaderBindingWriter **)0x0;
  (this->MaterialRayTracingData).CallableBindings.ArrayNum = 0;
  (this->MaterialRayTracingData).CallableBindings.ArrayMax = 0;
  FMemStackBase::FMemStackBase(&(this->MaterialRayTracingData).MaterialBindingsMemory,Small);
  (this->LumenRayTracingData).PipelineState = (FRayTracingPipelineState *)0x0;
  (this->LumenRayTracingData).ShaderBindingTable.Reference = (FRHIShaderBindingTable *)0x0;
  (this->LumenRayTracingData).MaterialBindings.AllocatorInstance.Data =
       (FRayTracingLocalShaderBindingWriter **)0x0;
  (this->LumenRayTracingData).MaterialBindings.ArrayNum = 0;
  (this->LumenRayTracingData).MaterialBindings.ArrayMax = 0;
  (this->LumenRayTracingData).CallableBindings.AllocatorInstance.Data =
       (FRayTracingLocalShaderBindingWriter **)0x0;
  (this->LumenRayTracingData).CallableBindings.ArrayNum = 0;
  (this->LumenRayTracingData).CallableBindings.ArrayMax = 0;
  FMemStackBase::FMemStackBase(&(this->LumenRayTracingData).MaterialBindingsMemory,Small);
  this->bOwnsShaderBindingTables = true;
  this->bTransientShaderBindingTables = false;
  this->InlineRayTracingBindingDataBuffer = (FRDGBuffer *)0x0;
  this->LumenHardwareRayTracingHitDataBuffer = (FRDGBuffer *)0x0;
  this->LumenHardwareRayTracingUniformBuffer =
       (TUniformBufferRef<FLumenHardwareRayTracingUniformBufferParameters>)0x0;
  this->bHasRayTracingDecals = false;
  this->PathTracingVolumetricCloudCallableShaderIndex = -1;
  this->bHasAnyRayTracingPass = false;
  this->bHasRayTracingShadows = false;
  this->bRayTracingFeedbackEnabled = false;
  (this->PersistentViewId).Index = -1;
  (this->ViewRectWithSecondaryViews).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->ViewRectWithSecondaryViews).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->DynamicPrimitiveCollector)._padding_ = (longlong)&___7FGPUScenePrimitiveCollector__6B_;
  uVar5 = (ulonglong)local_res8 >> 8;
  local_res8 = (TRangeBound<int>)((uVar5 & 0xffffff) << 8);
  (this->DynamicPrimitiveCollector).PrimitiveIdRange.LowerBound = local_res8;
  uVar6 = local_res10 >> 8;
  local_res10 = uVar6 << 8;
  TVar3.Value = 0;
  TVar3._0_4_ = local_res10;
  (this->DynamicPrimitiveCollector).PrimitiveIdRange.UpperBound = TVar3;
  (this->DynamicPrimitiveCollector).UploadData = (FUploadData *)0x0;
  (this->DynamicPrimitiveCollector).bCommitted = false;
  (this->DynamicPrimitiveCollector).GPUSceneDynamicContext = (FGPUSceneDynamicContext *)0x0;
  (this->RayTracingDynamicPrimitiveCollector)._padding_ =
       (longlong)&___7FGPUScenePrimitiveCollector__6B_;
  local_res8 = (TRangeBound<int>)((uVar5 & 0xffffff) << 8);
  (this->RayTracingDynamicPrimitiveCollector).PrimitiveIdRange.LowerBound = local_res8;
  local_res10 = uVar6 << 8;
  uStackX_14 = 0;
  TVar4.Value = 0;
  TVar4._0_4_ = local_res10;
  (this->RayTracingDynamicPrimitiveCollector).PrimitiveIdRange.UpperBound = TVar4;
  (this->RayTracingDynamicPrimitiveCollector).UploadData = (FUploadData *)0x0;
  (this->RayTracingDynamicPrimitiveCollector).bCommitted = false;
  (this->RayTracingDynamicPrimitiveCollector).GPUSceneDynamicContext =
       (FGPUSceneDynamicContext *)0x0;
  Init(this);
  return this;
}

// FViewInfo @ 1454d5ac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

FViewInfo * __thiscall FViewInfo::FViewInfo(FViewInfo *this,FSceneView *param_1)

{
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> *this_00;
  FMobileCSMVisibilityInfo *pFVar1;
  char cVar2;
  TRangeBound<int> TVar3;
  TRangeBound<int> TVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 uVar7;
  FGlobalDistanceFieldInfo *pFVar8;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar9;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar10;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar11;
  FSubstrateViewData *pFVar12;
  FLocalFogVolumeViewData *pFVar13;
  FHairStrandsViewData *pFVar14;
  FPreviousViewInfo *pFVar15;
  FLumenTranslucencyGIVolume *pFVar16;
  bool bVar17;
  TRangeBound<int> local_res8;
  uint local_res10;
  undefined4 uStackX_14;
  
  FSceneView::FSceneView((FSceneView *)this,param_1);
  this->_padding_ = (longlong)&___7FViewInfo__6B_;
  this_00 = &this->Allocator;
  this_00->Next =
       (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
        )0x0;
  (this->ViewRect).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->ViewRect).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->CachedViewUniformShaderParameters).Ptr = (FViewUniformShaderParameters *)0x0;
  (this->PrimitiveVisibilityMap).AllocatorInstance.SecondaryData.Data = (uint *)0x0;
  (this->PrimitiveVisibilityMap).NumBits = 0;
  (this->PrimitiveVisibilityMap).MaxBits = 0x80;
  (this->PrimitiveRayTracingVisibilityMap).AllocatorInstance.SecondaryData.Data = (uint *)0x0;
  (this->PrimitiveRayTracingVisibilityMap).NumBits = 0;
  (this->PrimitiveRayTracingVisibilityMap).MaxBits = 0x80;
  (this->PrimitiveDefinitelyUnoccludedMap).AllocatorInstance.SecondaryData.Data = (uint *)0x0;
  (this->PrimitiveDefinitelyUnoccludedMap).NumBits = 0;
  (this->PrimitiveDefinitelyUnoccludedMap).MaxBits = 0x80;
  (this->PotentiallyFadingPrimitiveMap).AllocatorInstance.SecondaryData.Data = (uint *)0x0;
  (this->PotentiallyFadingPrimitiveMap).NumBits = 0;
  (this->PotentiallyFadingPrimitiveMap).MaxBits = 0x80;
  (this->PrimitiveFadeUniformBuffers).AllocatorInstance.Data = (FRHIUniformBuffer **)0x0;
  (this->PrimitiveFadeUniformBuffers).ArrayNum = 0;
  (this->PrimitiveFadeUniformBuffers).ArrayMax = 0;
  (this->PrimitiveFadeUniformBufferMap).AllocatorInstance.SecondaryData.Data = (uint *)0x0;
  (this->PrimitiveFadeUniformBufferMap).NumBits = 0;
  (this->PrimitiveFadeUniformBufferMap).MaxBits = 0x80;
  (this->DitherFadeInUniformBuffer).Reference = (FRHIUniformBuffer *)0x0;
  (this->DitherFadeOutUniformBuffer).Reference = (FRHIUniformBuffer *)0x0;
  (this->PrimitiveViewRelevanceMap).AllocatorInstance.Data = (FPrimitiveViewRelevance *)0x0;
  (this->PrimitiveViewRelevanceMap).ArrayNum = 0;
  (this->PrimitiveViewRelevanceMap).ArrayMax = 0;
  (this->StaticMeshVisibilityMap).AllocatorInstance.SecondaryData.Data = (uint *)0x0;
  (this->StaticMeshVisibilityMap).NumBits = 0;
  (this->StaticMeshVisibilityMap).MaxBits = 0x80;
  (this->StaticMeshFadeOutDitheredLODMap).AllocatorInstance.SecondaryData.Data = (uint *)0x0;
  (this->StaticMeshFadeOutDitheredLODMap).NumBits = 0;
  (this->StaticMeshFadeOutDitheredLODMap).MaxBits = 0x80;
  (this->StaticMeshFadeInDitheredLODMap).AllocatorInstance.SecondaryData.Data = (uint *)0x0;
  (this->StaticMeshFadeInDitheredLODMap).NumBits = 0;
  (this->StaticMeshFadeInDitheredLODMap).MaxBits = 0x80;
  (this->PrimitivesLODMask).AllocatorInstance.Data = (FLODMask *)0x0;
  (this->PrimitivesLODMask).ArrayNum = 0;
  (this->PrimitivesLODMask).ArrayMax = 0;
  (this->VisibleDynamicPrimitivesWithSimpleLights).AllocatorInstance.Data =
       (FPrimitiveSceneInfo **)0x0;
  (this->VisibleDynamicPrimitivesWithSimpleLights).ArrayNum = 0;
  (this->VisibleDynamicPrimitivesWithSimpleLights).ArrayMax = 0;
  (this->DirtyIndirectLightingCacheBufferPrimitives).AllocatorInstance.Data =
       (FPrimitiveSceneInfo **)0x0;
  (this->DirtyIndirectLightingCacheBufferPrimitives).ArrayNum = 0;
  (this->DirtyIndirectLightingCacheBufferPrimitives).ArrayMax = 0;
  (this->DirtyIndirectLightingCacheBufferPrimitivesMutex).State = (atomic<unsigned_char>)0x0;
  *(undefined8 *)&this->TranslucentSelfShadowUniformBufferMap = 0;
  *(undefined8 *)&(this->TranslucentSelfShadowUniformBufferMap).field_0x8 = 0;
  *(undefined8 *)&(this->TranslucentSelfShadowUniformBufferMap).field_0x20 = 0;
  *(undefined4 *)&(this->TranslucentSelfShadowUniformBufferMap).field_0x28 = 0;
  *(undefined4 *)&(this->TranslucentSelfShadowUniformBufferMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->TranslucentSelfShadowUniformBufferMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TranslucentSelfShadowUniformBufferMap).field_0x34 = 0;
  *(undefined8 *)&(this->TranslucentSelfShadowUniformBufferMap).field_0x50 = 0;
  *(undefined4 *)&(this->TranslucentSelfShadowUniformBufferMap).field_0x58 = 0;
  pFVar8 = TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
           Create<FGlobalDistanceFieldInfo>(this_00);
  this->GlobalDistanceFieldInfo = pFVar8;
  (this->TranslucentPrimCount).Count[0] = 0;
  (this->TranslucentPrimCount).Count[1] = 0;
  *(undefined8 *)((this->TranslucentPrimCount).Count + 6) = 0;
  (this->TranslucentPrimCount).Count[2] = 0;
  (this->TranslucentPrimCount).Count[3] = 0;
  (this->TranslucentPrimCount).Count[4] = 0;
  (this->TranslucentPrimCount).Count[5] = 0;
  (this->TranslucentPrimCount).UseSceneColorCopyPerPass[4] = false;
  (this->TranslucentPrimCount).UseSceneColorCopyPerPass[5] = false;
  (this->TranslucentPrimCount).UseSceneColorCopyPerPass[6] = false;
  *(undefined8 *)&(this->CustomDepthStencilValues).Elements = 0;
  *(undefined8 *)&(this->CustomDepthStencilValues).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CustomDepthStencilValues).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CustomDepthStencilValues).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CustomDepthStencilValues).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CustomDepthStencilValues).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CustomDepthStencilValues).Elements.field_0x34 = 0;
  (this->CustomDepthStencilValues).Hash.SecondaryData.SecondaryData.Data = (FSetElementId *)0x0;
  (this->CustomDepthStencilValues).HashSize = 0;
  (this->NaniteCustomDepthInstances).AllocatorInstance.Data = (FPrimitiveInstanceRange *)0x0;
  (this->NaniteCustomDepthInstances).ArrayNum = 0;
  (this->NaniteCustomDepthInstances).ArrayMax = 0;
  (this->VolumetricMeshBatches).AllocatorInstance.Data = (FVolumetricMeshBatch *)0x0;
  (this->VolumetricMeshBatches).ArrayNum = 0;
  (this->VolumetricMeshBatches).ArrayMax = 0;
  (this->HeterogeneousVolumesMeshBatches).AllocatorInstance.Data = (FVolumetricMeshBatch *)0x0;
  (this->HeterogeneousVolumesMeshBatches).ArrayNum = 0;
  (this->HeterogeneousVolumesMeshBatches).ArrayMax = 0;
  (this->SkyMeshBatches).AllocatorInstance.Data = (FSkyMeshBatch *)0x0;
  (this->SkyMeshBatches).ArrayNum = 0;
  (this->SkyMeshBatches).ArrayMax = 0;
  (this->SortedTrianglesMeshBatches).AllocatorInstance.Data = (FSortedTrianglesMeshBatch *)0x0;
  (this->SortedTrianglesMeshBatches).ArrayNum = 0;
  (this->SortedTrianglesMeshBatches).ArrayMax = 0;
  (this->VisibleLightInfos).AllocatorInstance.Data = (FVisibleLightViewInfo *)0x0;
  (this->VisibleLightInfos).ArrayNum = 0;
  (this->VisibleLightInfos).ArrayMax = 0;
  (this->VisibleReflectionCaptureLights).AllocatorInstance.Data = (FLightSceneProxy **)0x0;
  (this->VisibleReflectionCaptureLights).ArrayNum = 0;
  (this->VisibleReflectionCaptureLights).ArrayMax = 0;
  aVar9 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
           )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0xa8,8);
  *(undefined8 *)((longlong)aVar9 + 8) = 0;
  *(undefined ***)aVar9 =
       &
       ___7__TObject_VFBatchedElements_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  aVar10 = this_00->Next;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
      *)((longlong)aVar9 + 8) = aVar10;
    LOCK();
    aVar11 = this_00->Next;
    bVar17 = aVar10 == aVar11;
    if (bVar17) {
      this_00->Next = aVar9;
      aVar11 = aVar10;
    }
    UNLOCK();
    aVar10 = aVar11;
  } while (!bVar17);
  FBatchedElements::FBatchedElements((FBatchedElements *)((longlong)aVar9 + 0x10));
  this->BatchedViewElements = (FBatchedElements *)((longlong)aVar9 + 0x10);
  aVar9 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
           )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0xa8,8);
  *(undefined8 *)((longlong)aVar9 + 8) = 0;
  *(undefined ***)aVar9 =
       &
       ___7__TObject_VFBatchedElements_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  aVar10 = this_00->Next;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
      *)((longlong)aVar9 + 8) = aVar10;
    LOCK();
    aVar11 = this_00->Next;
    bVar17 = aVar10 == aVar11;
    if (bVar17) {
      this_00->Next = aVar9;
      aVar11 = aVar10;
    }
    UNLOCK();
    aVar10 = aVar11;
  } while (!bVar17);
  FBatchedElements::FBatchedElements((FBatchedElements *)((longlong)aVar9 + 0x10));
  this->TopBatchedViewElements = (FBatchedElements *)((longlong)aVar9 + 0x10);
  (this->ViewMeshElements).Array.AllocatorInstance.Data = (void **)0x0;
  (this->ViewMeshElements).Array.ArrayNum = 0;
  (this->ViewMeshElements).Array.ArrayMax = 0;
  (this->TopViewMeshElements).Array.AllocatorInstance.Data = (void **)0x0;
  (this->TopViewMeshElements).Array.ArrayNum = 0;
  (this->TopViewMeshElements).Array.ArrayMax = 0;
  (this->DynamicResources).AllocatorInstance.Data = (FDynamicPrimitiveResource **)0x0;
  (this->DynamicResources).ArrayNum = 0;
  (this->DynamicResources).ArrayMax = 0;
  (this->DynamicMeshElements).AllocatorInstance.Data = (FMeshBatchAndRelevance *)0x0;
  (this->DynamicMeshElements).ArrayNum = 0;
  (this->DynamicMeshElements).ArrayMax = 0;
  (this->DynamicMeshElementRanges).AllocatorInstance.Data = (TIntVector2<int> *)0x0;
  (this->DynamicMeshElementRanges).ArrayNum = 0;
  (this->DynamicMeshElementRanges).ArrayMax = 0;
  (this->HairStrandsMeshElements).AllocatorInstance.Data = (FMeshBatchAndRelevance *)0x0;
  (this->HairStrandsMeshElements).ArrayNum = 0;
  (this->HairStrandsMeshElements).ArrayMax = 0;
  (this->HairCardsMeshElements).AllocatorInstance.Data = (FMeshBatchAndRelevance *)0x0;
  (this->HairCardsMeshElements).ArrayNum = 0;
  (this->HairCardsMeshElements).ArrayMax = 0;
  (this->DynamicMeshElementsPassRelevance).AllocatorInstance.Data = (FMeshPassMask *)0x0;
  (this->DynamicMeshElementsPassRelevance).ArrayNum = 0;
  (this->DynamicMeshElementsPassRelevance).ArrayMax = 0;
  (this->RayTracedDynamicMeshElements).AllocatorInstance.Data = (FMeshBatchAndRelevance *)0x0;
  (this->RayTracedDynamicMeshElements).ArrayNum = 0;
  (this->RayTracedDynamicMeshElements).ArrayMax = 0;
  (this->DynamicEditorMeshElements).AllocatorInstance.Data = (FMeshBatchAndRelevance *)0x0;
  (this->DynamicEditorMeshElements).ArrayNum = 0;
  (this->DynamicEditorMeshElements).ArrayMax = 0;
  aVar9 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
           )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x168,8);
  *(undefined8 *)((longlong)aVar9 + 8) = 0;
  *(undefined ***)aVar9 =
       &
       ___7__TObject_VFSimpleElementCollector_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  aVar10 = this_00->Next;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
      *)((longlong)aVar9 + 8) = aVar10;
    LOCK();
    aVar11 = this_00->Next;
    bVar17 = aVar10 == aVar11;
    if (bVar17) {
      this_00->Next = aVar9;
      aVar11 = aVar10;
    }
    UNLOCK();
    aVar10 = aVar11;
  } while (!bVar17);
  FSimpleElementCollector::FSimpleElementCollector
            ((FSimpleElementCollector *)((longlong)aVar9 + 0x10));
  this->SimpleElementCollector = (FSimpleElementCollector *)((longlong)aVar9 + 0x10);
  aVar9 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
           )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x168,8);
  *(undefined8 *)((longlong)aVar9 + 8) = 0;
  *(undefined ***)aVar9 =
       &
       ___7__TObject_VFSimpleElementCollector_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  aVar10 = this_00->Next;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
      *)((longlong)aVar9 + 8) = aVar10;
    LOCK();
    aVar11 = this_00->Next;
    bVar17 = aVar10 == aVar11;
    if (bVar17) {
      this_00->Next = aVar9;
      aVar11 = aVar10;
    }
    UNLOCK();
    aVar10 = aVar11;
  } while (!bVar17);
  FSimpleElementCollector::FSimpleElementCollector
            ((FSimpleElementCollector *)((longlong)aVar9 + 0x10));
  this->EditorSimpleElementCollector = (FSimpleElementCollector *)((longlong)aVar9 + 0x10);
  aVar9 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
           )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x168,8);
  *(undefined8 *)((longlong)aVar9 + 8) = 0;
  *(undefined ***)aVar9 =
       &
       ___7__TObject_VFSimpleElementCollector_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  aVar10 = this_00->Next;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
      *)((longlong)aVar9 + 8) = aVar10;
    LOCK();
    aVar11 = this_00->Next;
    bVar17 = aVar10 == aVar11;
    if (bVar17) {
      this_00->Next = aVar9;
      aVar11 = aVar10;
    }
    UNLOCK();
    aVar10 = aVar11;
  } while (!bVar17);
  FSimpleElementCollector::FSimpleElementCollector
            ((FSimpleElementCollector *)((longlong)aVar9 + 0x10));
  this->DebugSimpleElementCollector = (FSimpleElementCollector *)((longlong)aVar9 + 0x10);
  local_res8.Type.Value = '\0';
  local_res8._1_3_ = 0;
  local_res8.Value = 0;
  TStaticArray<FParallelMeshDrawCommandPass_*,39,4294967295>::
  TStaticArray<FParallelMeshDrawCommandPass_*,39,4294967295><std::nullptr_t>
            (&this->ParallelMeshDrawCommandPasses,InPlace,(void **)&local_res8);
  (this->VisibleRayTracingShaderBindings).AllocatorInstance.Data =
       (FRayTracingShaderBindingData *)0x0;
  (this->VisibleRayTracingShaderBindings).ArrayNum = 0;
  (this->VisibleRayTracingShaderBindings).ArrayMax = 0;
  TChunkedArray<FRayTracingMeshCommand,16384,TSizedDefaultAllocator<32>_>::
  TChunkedArray<FRayTracingMeshCommand,16384,TSizedDefaultAllocator<32>_>
            (&this->DynamicRayTracingMeshCommandStorage,0);
  *(undefined8 *)&(this->DynamicRayTracingRDGBuffers).Elements = 0;
  *(undefined8 *)&(this->DynamicRayTracingRDGBuffers).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DynamicRayTracingRDGBuffers).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->DynamicRayTracingRDGBuffers).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DynamicRayTracingRDGBuffers).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DynamicRayTracingRDGBuffers).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DynamicRayTracingRDGBuffers).Elements.field_0x34 = 0;
  (this->DynamicRayTracingRDGBuffers).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->DynamicRayTracingRDGBuffers).HashSize = 0;
  pFVar1->bMobileDynamicCSMInUse = 0;
  pFVar1->bAlwaysUseCSM = 0;
  (this->AddDynamicRayTracingMeshBatchTaskList).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AddDynamicRayTracingMeshBatchTaskList).ArrayNum = 0;
  (this->AddDynamicRayTracingMeshBatchTaskList).ArrayMax = 0;
  (this->DynamicRayTracingShaderBindingsPerTask).AllocatorInstance.Data =
       (TArray<FRayTracingShaderBindingData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
        **)0x0;
  (this->DynamicRayTracingShaderBindingsPerTask).ArrayNum = 0;
  (this->DynamicRayTracingShaderBindingsPerTask).ArrayMax = 0;
  (this->DynamicRayTracingMeshCommandStoragePerTask).AllocatorInstance.Data =
       (TChunkedArray<FRayTracingMeshCommand,16384,TSizedDefaultAllocator<32>_> **)0x0;
  (this->DynamicRayTracingMeshCommandStoragePerTask).ArrayNum = 0;
  (this->DynamicRayTracingMeshCommandStoragePerTask).ArrayMax = 0;
  (this->MobileCSMVisibilityInfo).MobilePrimitiveCSMReceiverVisibilityMap.AllocatorInstance.
  SecondaryData.Data = (uint *)0x0;
  (this->MobileCSMVisibilityInfo).MobilePrimitiveCSMReceiverVisibilityMap.NumBits = 0;
  (this->MobileCSMVisibilityInfo).MobilePrimitiveCSMReceiverVisibilityMap.MaxBits = 0x80;
  (this->MobileCSMVisibilityInfo).MobileCSMStaticMeshVisibilityMap.AllocatorInstance.SecondaryData.
  Data = (uint *)0x0;
  (this->MobileCSMVisibilityInfo).MobileCSMStaticMeshVisibilityMap.NumBits = 0;
  (this->MobileCSMVisibilityInfo).MobileCSMStaticMeshVisibilityMap.MaxBits = 0x80;
  (this->MobileCSMVisibilityInfo).MobileNonCSMStaticMeshVisibilityMap.AllocatorInstance.
  SecondaryData.Data = (uint *)0x0;
  (this->MobileCSMVisibilityInfo).MobileNonCSMStaticMeshVisibilityMap.NumBits = 0;
  (this->MobileCSMVisibilityInfo).MobileNonCSMStaticMeshVisibilityMap.MaxBits = 0x80;
  pFVar12 = TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
            Create<FSubstrateViewData>(this_00);
  this->SubstrateViewData = pFVar12;
  pFVar13 = TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
            Create<FLocalFogVolumeViewData>(this_00);
  this->LocalFogVolumeViewData = pFVar13;
  pFVar14 = TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
            Create<FHairStrandsViewData>(this_00);
  this->HairStrandsViewData = pFVar14;
  (this->LightFunctionAtlasViewData).SceneData = (FLightFunctionAtlasSceneData *)0x0;
  (this->LightFunctionAtlasViewData).ViewIndex = 0;
  *(undefined8 *)&(this->ExponentialFogParameters).field0_0x0 = 0;
  (this->ExponentialFogParameters).field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)((longlong)&(this->ExponentialFogParameters).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->ExponentialFogParameters2).field0_0x0 + 4) = 0;
  (this->ExponentialFogParameters2).field0_0x0._s_0.W = 1.0;
  *(undefined8 *)&(this->ExponentialFogParameters3).field0_0x0 = 0;
  (this->ExponentialFogParameters3).field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)((longlong)&(this->ExponentialFogParameters3).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->SkyAtmosphereAmbientContributionColorScale).field0_0x0 + 4) = 0;
  (this->SkyAtmosphereAmbientContributionColorScale).field0_0x0._s_0.W = 1.0;
  pFVar15 = TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
            Create<FPreviousViewInfo>(this_00);
  cVar2 = *(char *)((longlong)&this->_padding_ + 3);
  this->PrevViewInfo = pFVar15;
  FOcclusionQueryBatcher::FOcclusionQueryBatcher
            (&this->IndividualOcclusionQueries,(FSceneViewState *)param_1->State,1,
             (cVar2 != '\0') + 1);
  FOcclusionQueryBatcher::FOcclusionQueryBatcher
            (&this->GroupedOcclusionQueries,(FSceneViewState *)param_1->State,0x10,
             (*(char *)((longlong)&this->_padding_ + 3) != '\0') + 1);
  this->HZB = (FRDGTexture *)0x0;
  this->ClosestHZB = (FRDGTexture *)0x0;
  (this->TranslucencyVolumeMarkData).Elements[0].MarkTexture = (FRDGTexture *)0x0;
  (this->TranslucencyVolumeMarkData).Elements[0].VoxelAllocator = (FRDGBuffer *)0x0;
  (this->TranslucencyVolumeMarkData).Elements[0].VoxelData = (FRDGBuffer *)0x0;
  (this->TranslucencyVolumeMarkData).Elements[0].VoxelIndirectArgs = (FRDGBuffer *)0x0;
  (this->TranslucencyVolumeMarkData).Elements[1].MarkTexture = (FRDGTexture *)0x0;
  (this->TranslucencyVolumeMarkData).Elements[1].VoxelAllocator = (FRDGBuffer *)0x0;
  (this->TranslucencyVolumeMarkData).Elements[1].VoxelData = (FRDGBuffer *)0x0;
  (this->TranslucencyVolumeMarkData).Elements[1].VoxelIndirectArgs = (FRDGBuffer *)0x0;
  this->ReflectionCaptureUniformBuffer = (TUniformBufferRef<FReflectionCaptureShaderData>)0x0;
  this->MobileReflectionCaptureUniformBuffer =
       (TUniformBufferRef<FMobileReflectionCaptureShaderData>)0x0;
  (this->SkyAtmosphereCameraAerialPerspectiveVolume).Reference = (IPooledRenderTarget *)0x0;
  (this->SkyAtmosphereCameraAerialPerspectiveVolumeMieOnly).Reference = (IPooledRenderTarget *)0x0;
  (this->SkyAtmosphereCameraAerialPerspectiveVolumeRayOnly).Reference = (IPooledRenderTarget *)0x0;
  (this->SkyAtmosphereViewLutTexture).Reference = (IPooledRenderTarget *)0x0;
  this->VolumetricRenderTargetViewUniformBuffer =
       (TUniformBufferRef<FViewUniformShaderParameters>)0x0;
  this->VolumetricCloudSkyAO = (FRDGTexture *)0x0;
  this->VolumetricCloudShadowRenderTarget[0] = (FRDGTexture *)0x0;
  this->VolumetricCloudShadowRenderTarget[1] = (FRDGTexture *)0x0;
  this->VolumetricCloudShadowExtractedRenderTarget[0].Reference = (IPooledRenderTarget *)0x0;
  this->VolumetricCloudShadowExtractedRenderTarget[1].Reference = (IPooledRenderTarget *)0x0;
  (this->ForwardLightingResources).ForwardLightUniformParameters =
       (FForwardLightUniformParameters *)0x0;
  (this->ForwardLightingResources).ForwardLightUniformBuffer =
       (TRDGUniformBuffer<FForwardLightUniformParameters> *)0x0;
  (this->ForwardLightingResources).SelectedForwardDirectionalLightProxy = (FLightSceneProxy *)0x0;
  (this->VolumetricFogResources).VolumetricFogGlobalData =
       (TUniformBufferRef<FVolumetricFogGlobalData>)0x0;
  (this->VolumetricFogResources).IntegratedLightScatteringTexture = (FRDGTexture *)0x0;
  this->bLightGridHasRectLights = false;
  this->bLightGridHasTexturedLights = false;
  this->HeterogeneousVolumeRadiance = (FRDGTexture *)0x0;
  this->HeterogeneousVolumeHoldout = (FRDGTexture *)0x0;
  this->HeterogeneousVolumeBeerShadowMap = (FRDGTexture *)0x0;
  (this->MobileLightShaft).bIsSet = false;
  this->bUseComputePasses = false;
  this->CustomVisibilityQuery = (ICustomVisibilityQuery *)0x0;
  this->FFTBloomKernelTexture = (FTexture2DResource *)0x0;
  this->FilmGrainTexture = (FTexture2DResource *)0x0;
  (this->IndirectShadowPrimitives).AllocatorInstance.Data = (FPrimitiveSceneInfo **)0x0;
  (this->IndirectShadowPrimitives).ArrayNum = 0;
  (this->IndirectShadowPrimitives).ArrayMax = 0;
  (this->PrimitiveSceneDataTextureOverrideRHI).Reference = (FRHITexture *)0x0;
  (this->LensDistortionLUT).DistortingDisplacementTexture = (FRDGTexture *)0x0;
  (this->LensDistortionLUT).UndistortingDisplacementTexture = (FRDGTexture *)0x0;
  (this->LensDistortionLUT).ResolutionFraction = 1.0;
  (this->LensDistortionLUT).DistortionOverscan = 1.0;
  (this->LensDistortionLUT).DistortionGridDimensions.field0_0x0._s_0.X = 0x20;
  (this->LensDistortionLUT).DistortionGridDimensions.field0_0x0._s_0.Y = 0x14;
  (this->ShaderPrintData).Setup.ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  *(undefined4 *)((longlong)&(this->ShaderPrintData).Setup.ViewRect.field0_0x0 + 8) = 1;
  *(undefined4 *)((longlong)&(this->ShaderPrintData).Setup.ViewRect.field0_0x0 + 0xc) = 1;
  (this->ShaderPrintData).Setup.CursorCoord.field0_0x0 = (TIntPoint<int>_u_0)0xffffffffffffffff;
  (this->ShaderPrintData).Setup.bEnabled = false;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ShaderPrintData).Setup.PreViewTranslation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ShaderPrintData).Setup.PreViewTranslation.field0_0x0._s_0.Y = (double)uVar7;
  (this->ShaderPrintData).Setup.PreViewTranslation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ShaderPrintData).Setup.FontSize.field0_0x0._s_0.X = 1;
  (this->ShaderPrintData).Setup.FontSize.field0_0x0._s_0.Y = 1;
  (this->ShaderPrintData).Setup.FontSpacing.field0_0x0._s_0.X = 1;
  *(undefined8 *)((longlong)&(this->ShaderPrintData).Setup.FontSpacing.field0_0x0 + 4) = 1;
  (this->ShaderPrintData).Setup.DPIScale = 1.0;
  (this->ShaderPrintData).Setup.MaxStateCount = 0;
  (this->ShaderPrintData).Setup.MaxLineCount = 0;
  (this->ShaderPrintData).Setup.MaxTriangleCount = 0;
  (this->ShaderPrintData).Setup.bIsDrawLocked = false;
  (this->ShaderPrintData).UniformBuffer =
       (TUniformBufferRef<ShaderPrint::FShaderPrintCommonParameters>)0x0;
  (this->ShaderPrintData).ShaderPrintEntryBuffer = (FRDGBuffer *)0x0;
  (this->ShaderPrintData).ShaderPrintStateBuffer = (FRDGBuffer *)0x0;
  pFVar16 = TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
            Create<FLumenTranslucencyGIVolume>(this_00);
  this->LumenTranslucencyGIVolume = pFVar16;
  (this->MegaLightsVolume).Texture = (FRDGTexture *)0x0;
  (this->MegaLightsVolume).TranslucencyAmbient[0] = (FRDGTexture *)0x0;
  (this->MegaLightsVolume).TranslucencyAmbient[1] = (FRDGTexture *)0x0;
  (this->MegaLightsVolume).TranslucencyDirectional[0] = (FRDGTexture *)0x0;
  (this->MegaLightsVolume).TranslucencyDirectional[1] = (FRDGTexture *)0x0;
  (this->LumenFrontLayerTranslucency).Radiance = (FRDGTexture *)0x0;
  (this->LumenFrontLayerTranslucency).Normal = (FRDGTexture *)0x0;
  (this->LumenFrontLayerTranslucency).SceneDepth = (FRDGTexture *)0x0;
  (this->LumenFrontLayerTranslucency).bEnabled = false;
  (this->LumenFrontLayerTranslucency).RelativeDepthThreshold = 0.0;
  (this->RayTracingSceneViewHandle).Index = 0xffffffff;
  (this->MaterialRayTracingData).PipelineState = (FRayTracingPipelineState *)0x0;
  (this->MaterialRayTracingData).ShaderBindingTable.Reference = (FRHIShaderBindingTable *)0x0;
  (this->MaterialRayTracingData).MaterialBindings.AllocatorInstance.Data =
       (FRayTracingLocalShaderBindingWriter **)0x0;
  (this->MaterialRayTracingData).MaterialBindings.ArrayNum = 0;
  (this->MaterialRayTracingData).MaterialBindings.ArrayMax = 0;
  (this->MaterialRayTracingData).CallableBindings.AllocatorInstance.Data =
       (FRayTracingLocalShaderBindingWriter **)0x0;
  (this->MaterialRayTracingData).CallableBindings.ArrayNum = 0;
  (this->MaterialRayTracingData).CallableBindings.ArrayMax = 0;
  FMemStackBase::FMemStackBase(&(this->MaterialRayTracingData).MaterialBindingsMemory,Small);
  (this->LumenRayTracingData).PipelineState = (FRayTracingPipelineState *)0x0;
  (this->LumenRayTracingData).ShaderBindingTable.Reference = (FRHIShaderBindingTable *)0x0;
  (this->LumenRayTracingData).MaterialBindings.AllocatorInstance.Data =
       (FRayTracingLocalShaderBindingWriter **)0x0;
  (this->LumenRayTracingData).MaterialBindings.ArrayNum = 0;
  (this->LumenRayTracingData).MaterialBindings.ArrayMax = 0;
  (this->LumenRayTracingData).CallableBindings.AllocatorInstance.Data =
       (FRayTracingLocalShaderBindingWriter **)0x0;
  (this->LumenRayTracingData).CallableBindings.ArrayNum = 0;
  (this->LumenRayTracingData).CallableBindings.ArrayMax = 0;
  FMemStackBase::FMemStackBase(&(this->LumenRayTracingData).MaterialBindingsMemory,Small);
  this->bOwnsShaderBindingTables = true;
  this->bTransientShaderBindingTables = false;
  this->InlineRayTracingBindingDataBuffer = (FRDGBuffer *)0x0;
  this->LumenHardwareRayTracingHitDataBuffer = (FRDGBuffer *)0x0;
  this->LumenHardwareRayTracingUniformBuffer =
       (TUniformBufferRef<FLumenHardwareRayTracingUniformBufferParameters>)0x0;
  this->bHasRayTracingDecals = false;
  this->PathTracingVolumetricCloudCallableShaderIndex = -1;
  this->bHasAnyRayTracingPass = false;
  this->bHasRayTracingShadows = false;
  this->bRayTracingFeedbackEnabled = false;
  (this->PersistentViewId).Index = -1;
  (this->ViewRectWithSecondaryViews).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->ViewRectWithSecondaryViews).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->DynamicPrimitiveCollector)._padding_ = (longlong)&___7FGPUScenePrimitiveCollector__6B_;
  uVar5 = (ulonglong)local_res8 >> 8;
  local_res8 = (TRangeBound<int>)((uVar5 & 0xffffff) << 8);
  (this->DynamicPrimitiveCollector).PrimitiveIdRange.LowerBound = local_res8;
  uVar6 = local_res10 >> 8;
  local_res10 = uVar6 << 8;
  TVar3.Value = 0;
  TVar3._0_4_ = local_res10;
  (this->DynamicPrimitiveCollector).PrimitiveIdRange.UpperBound = TVar3;
  (this->DynamicPrimitiveCollector).UploadData = (FUploadData *)0x0;
  (this->DynamicPrimitiveCollector).bCommitted = false;
  (this->DynamicPrimitiveCollector).GPUSceneDynamicContext = (FGPUSceneDynamicContext *)0x0;
  (this->RayTracingDynamicPrimitiveCollector)._padding_ =
       (longlong)&___7FGPUScenePrimitiveCollector__6B_;
  local_res8 = (TRangeBound<int>)((uVar5 & 0xffffff) << 8);
  (this->RayTracingDynamicPrimitiveCollector).PrimitiveIdRange.LowerBound = local_res8;
  local_res10 = uVar6 << 8;
  uStackX_14 = 0;
  TVar4.Value = 0;
  TVar4._0_4_ = local_res10;
  (this->RayTracingDynamicPrimitiveCollector).PrimitiveIdRange.UpperBound = TVar4;
  (this->RayTracingDynamicPrimitiveCollector).UploadData = (FUploadData *)0x0;
  (this->RayTracingDynamicPrimitiveCollector).bCommitted = false;
  (this->RayTracingDynamicPrimitiveCollector).GPUSceneDynamicContext =
       (FGPUSceneDynamicContext *)0x0;
  Init(this);
  return this;
}

// ~FViewInfo @ 1454d7730

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

void __thiscall FViewInfo::~FViewInfo(FViewInfo *this)

{
  undefined1 *puVar1;
  TMap<int,TRefCountPtr<FRHIUniformBuffer>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FRHIUniformBuffer>,0>_>
  *this_00;
  int iVar2;
  TUniformBufferRef<ShaderPrint::FShaderPrintCommonParameters> this_01;
  FRHITexture *this_02;
  FPrimitiveSceneInfo **ppFVar3;
  TUniformBufferRef<FVolumetricFogGlobalData> this_03;
  IPooledRenderTarget *pIVar4;
  uint *puVar5;
  TChunkedArray<FRayTracingMeshCommand,16384,TSizedDefaultAllocator<32>_> **ppTVar6;
  TArray<FRayTracingShaderBindingData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  **ppTVar7;
  FScriptContainerElement *pFVar8;
  ForElementType<FSetElementId> FVar9;
  FRayTracingShaderBindingData *pFVar10;
  FMeshBatchAndRelevance *pFVar11;
  FMeshPassMask *pFVar12;
  TIntVector2<int> *pTVar13;
  FDynamicPrimitiveResource **ppFVar14;
  FLightSceneProxy **ppFVar15;
  FVisibleLightViewInfo *pFVar16;
  FSortedTrianglesMeshBatch *pFVar17;
  FSkyMeshBatch *pFVar18;
  FVolumetricMeshBatch *pFVar19;
  FPrimitiveInstanceRange *pFVar20;
  FSetElementId *pFVar21;
  void *pvVar22;
  FLODMask *pFVar23;
  FPrimitiveViewRelevance *pFVar24;
  FRHIUniformBuffer *pFVar25;
  FRHIUniformBuffer **ppFVar26;
  code *pcVar27;
  FAtmosphereUniformShaderParameters **ppFVar28;
  bool bVar29;
  uint uVar30;
  uint uVar31;
  longlong lVar32;
  FForwardLightingViewResources *pFVar33;
  
  uVar31 = 0;
  this->_padding_ = (longlong)&___7FViewInfo__6B_;
  if (0 < (this->DynamicResources).ArrayNum) {
    lVar32 = 0;
    do {
      uVar30 = 0;
      if ((int)uVar31 < (this->DynamicResources).ArrayNum) {
        uVar30 = ~uVar31 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar27 = (code *)swi(3);
        (*pcVar27)();
        return;
      }
      (**(code **)(**(longlong **)
                     (lVar32 + (longlong)(this->DynamicResources).AllocatorInstance.Data) + 8))();
      uVar31 = uVar31 + 1;
      lVar32 = lVar32 + 8;
    } while ((int)uVar31 < (this->DynamicResources).ArrayNum);
  }
  if (this->CustomVisibilityQuery != (ICustomVisibilityQuery *)0x0) {
    (**(code **)((longlong)*this->CustomVisibilityQuery + 0x10))();
  }
  this_00 = &this->TranslucentSelfShadowUniformBufferMap;
  bVar29 = 1 < *(int *)&(this->TranslucentSelfShadowUniformBufferMap).field_0x58;
  if (!bVar29) {
    TSet<TTuple<int,TRefCountPtr<FRHIUniformBuffer>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FRHIUniformBuffer>,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
    ::UnhashElements((TSet<TTuple<int,TRefCountPtr<FRHIUniformBuffer>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FRHIUniformBuffer>,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TRefCountPtr<FRHIUniformBuffer>_>_>,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,TRefCountPtr<FRHIUniformBuffer>_>_>,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
                     *)this_00,0,*(int *)&(this->TranslucentSelfShadowUniformBufferMap).field_0x8);
  puVar1 = &(this->TranslucentSelfShadowUniformBufferMap).field_0xc;
  *(undefined4 *)&(this->TranslucentSelfShadowUniformBufferMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>_>
              (0x18,8,0,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> *)
                        this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->TranslucentSelfShadowUniformBufferMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TranslucentSelfShadowUniformBufferMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->TranslucentSelfShadowUniformBufferMap).field_0x2c;
  *(undefined4 *)&(this->TranslucentSelfShadowUniformBufferMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->TranslucentSelfShadowUniformBufferMap).field_0x2c = 0x80;
    TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
    ::Realloc((TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
               *)&(this->TranslucentSelfShadowUniformBufferMap).field_0x10,0);
  }
  if (bVar29) {
    *(undefined4 *)&(this->TranslucentSelfShadowUniformBufferMap).field_0x58 = 1;
    TSet<TTuple<int,TRefCountPtr<FRHIUniformBuffer>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FRHIUniformBuffer>,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
    ::Rehash((TSet<TTuple<int,TRefCountPtr<FRHIUniformBuffer>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FRHIUniformBuffer>,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
              *)this_00);
  }
  if (this->LumenHardwareRayTracingUniformBuffer !=
      (TUniformBufferRef<FLumenHardwareRayTracingUniformBufferParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)this->LumenHardwareRayTracingUniformBuffer);
  }
  FRayTracingData::~FRayTracingData(&this->LumenRayTracingData);
  FRayTracingData::~FRayTracingData(&this->MaterialRayTracingData);
  this_01 = (this->ShaderPrintData).UniformBuffer;
  if (this_01 != (TUniformBufferRef<ShaderPrint::FShaderPrintCommonParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  this_02 = (this->PrimitiveSceneDataTextureOverrideRHI).Reference;
  if (this_02 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)this_02);
  }
  ppFVar3 = (this->IndirectShadowPrimitives).AllocatorInstance.Data;
  if (ppFVar3 != (FPrimitiveSceneInfo **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar3);
  }
  this_03 = (this->VolumetricFogResources).VolumetricFogGlobalData;
  if (this_03 != (TUniformBufferRef<FVolumetricFogGlobalData>)0x0) {
    FRHIResource::Release((FRHIResource *)this_03);
  }
  pFVar33 = &this->ForwardLightingResources;
  lVar32 = 2;
  do {
    ppFVar28 = (FAtmosphereUniformShaderParameters **)(pFVar33 + -1);
    pFVar33 = (FForwardLightingViewResources *)((longlong)(pFVar33 + -1) + 0x30);
    lVar32 = lVar32 + -1;
    if (((TRefCountPtr<IPooledRenderTarget> *)(ppFVar28 + 6))->Reference !=
        (IPooledRenderTarget *)0x0) {
      (**(code **)(((TRefCountPtr<IPooledRenderTarget> *)(ppFVar28 + 6))->Reference->_padding_ +
                  0x38))();
    }
  } while (lVar32 != 0);
  if (this->VolumetricRenderTargetViewUniformBuffer !=
      (TUniformBufferRef<FViewUniformShaderParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)this->VolumetricRenderTargetViewUniformBuffer);
  }
  pIVar4 = (this->SkyAtmosphereViewLutTexture).Reference;
  if (pIVar4 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar4->_padding_ + 0x38))();
  }
  pIVar4 = (this->SkyAtmosphereCameraAerialPerspectiveVolumeRayOnly).Reference;
  if (pIVar4 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar4->_padding_ + 0x38))();
  }
  pIVar4 = (this->SkyAtmosphereCameraAerialPerspectiveVolumeMieOnly).Reference;
  if (pIVar4 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar4->_padding_ + 0x38))();
  }
  pIVar4 = (this->SkyAtmosphereCameraAerialPerspectiveVolume).Reference;
  if (pIVar4 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar4->_padding_ + 0x38))();
  }
  if (this->MobileReflectionCaptureUniformBuffer !=
      (TUniformBufferRef<FMobileReflectionCaptureShaderData>)0x0) {
    FRHIResource::Release((FRHIResource *)this->MobileReflectionCaptureUniformBuffer);
  }
  if (this->ReflectionCaptureUniformBuffer != (TUniformBufferRef<FReflectionCaptureShaderData>)0x0)
  {
    FRHIResource::Release((FRHIResource *)this->ReflectionCaptureUniformBuffer);
  }
  FOcclusionQueryBatcher::~FOcclusionQueryBatcher(&this->GroupedOcclusionQueries);
  FOcclusionQueryBatcher::~FOcclusionQueryBatcher(&this->IndividualOcclusionQueries);
  puVar5 = (this->MobileCSMVisibilityInfo).MobileNonCSMStaticMeshVisibilityMap.AllocatorInstance.
           SecondaryData.Data;
  if (puVar5 != (uint *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(puVar5);
  }
  puVar5 = (this->MobileCSMVisibilityInfo).MobileCSMStaticMeshVisibilityMap.AllocatorInstance.
           SecondaryData.Data;
  if (puVar5 != (uint *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(puVar5);
  }
  puVar5 = (this->MobileCSMVisibilityInfo).MobilePrimitiveCSMReceiverVisibilityMap.AllocatorInstance
           .SecondaryData.Data;
  if (puVar5 != (uint *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(puVar5);
  }
  ppTVar6 = (this->DynamicRayTracingMeshCommandStoragePerTask).AllocatorInstance.Data;
  if (ppTVar6 != (TChunkedArray<FRayTracingMeshCommand,16384,TSizedDefaultAllocator<32>_> **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppTVar6);
  }
  ppTVar7 = (this->DynamicRayTracingShaderBindingsPerTask).AllocatorInstance.Data;
  if (ppTVar7 !=
      (TArray<FRayTracingShaderBindingData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
       **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppTVar7);
  }
  DestructItems<UE::Tasks::Private::FTaskHandle,int>
            ((FTaskHandle *)(this->AddDynamicRayTracingMeshBatchTaskList).AllocatorInstance.Data,
             (this->AddDynamicRayTracingMeshBatchTaskList).ArrayNum);
  pFVar8 = (this->AddDynamicRayTracingMeshBatchTaskList).AllocatorInstance.Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  (this->DynamicRayTracingRDGBuffers).HashSize = 0;
  FVar9 = (this->DynamicRayTracingRDGBuffers).Hash.SecondaryData;
  if (FVar9 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar9);
  }
  TSparseArray<TSparseSetElement<FRDGBuffer_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FRDGBuffer_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->DynamicRayTracingRDGBuffers).Elements);
  TIndirectArray<TChunkedArray<FRayTracingMeshCommand,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::Empty(&(this->DynamicRayTracingMeshCommandStorage).Chunks,0);
  pFVar8 = (this->DynamicRayTracingMeshCommandStorage).Chunks.Array.AllocatorInstance.Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  pFVar10 = (this->VisibleRayTracingShaderBindings).AllocatorInstance.Data;
  if (pFVar10 != (FRayTracingShaderBindingData *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar10);
  }
  pFVar11 = (this->DynamicEditorMeshElements).AllocatorInstance.Data;
  if (pFVar11 != (FMeshBatchAndRelevance *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar11);
  }
  pFVar11 = (this->RayTracedDynamicMeshElements).AllocatorInstance.Data;
  if (pFVar11 != (FMeshBatchAndRelevance *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar11);
  }
  pFVar12 = (this->DynamicMeshElementsPassRelevance).AllocatorInstance.Data;
  if (pFVar12 != (FMeshPassMask *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar12);
  }
  pFVar11 = (this->HairCardsMeshElements).AllocatorInstance.Data;
  if (pFVar11 != (FMeshBatchAndRelevance *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar11);
  }
  pFVar11 = (this->HairStrandsMeshElements).AllocatorInstance.Data;
  if (pFVar11 != (FMeshBatchAndRelevance *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar11);
  }
  pTVar13 = (this->DynamicMeshElementRanges).AllocatorInstance.Data;
  if (pTVar13 != (TIntVector2<int> *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pTVar13);
  }
  pFVar11 = (this->DynamicMeshElements).AllocatorInstance.Data;
  if (pFVar11 != (FMeshBatchAndRelevance *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar11);
  }
  ppFVar14 = (this->DynamicResources).AllocatorInstance.Data;
  if (ppFVar14 != (FDynamicPrimitiveResource **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar14);
  }
  TIndirectArray<FMeshBatch,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
  ~TIndirectArray<FMeshBatch,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
            (&this->TopViewMeshElements);
  TIndirectArray<FMeshBatch,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
  ~TIndirectArray<FMeshBatch,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
            (&this->ViewMeshElements);
  ppFVar15 = (this->VisibleReflectionCaptureLights).AllocatorInstance.Data;
  if (ppFVar15 != (FLightSceneProxy **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar15);
  }
  DestructItems<FVisibleLightViewInfo,int>
            ((this->VisibleLightInfos).AllocatorInstance.Data,(this->VisibleLightInfos).ArrayNum);
  pFVar16 = (this->VisibleLightInfos).AllocatorInstance.Data;
  if (pFVar16 != (FVisibleLightViewInfo *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar16);
  }
  pFVar17 = (this->SortedTrianglesMeshBatches).AllocatorInstance.Data;
  if (pFVar17 != (FSortedTrianglesMeshBatch *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar17);
  }
  pFVar18 = (this->SkyMeshBatches).AllocatorInstance.Data;
  if (pFVar18 != (FSkyMeshBatch *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar18);
  }
  pFVar19 = (this->HeterogeneousVolumesMeshBatches).AllocatorInstance.Data;
  if (pFVar19 != (FVolumetricMeshBatch *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar19);
  }
  pFVar19 = (this->VolumetricMeshBatches).AllocatorInstance.Data;
  if (pFVar19 != (FVolumetricMeshBatch *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar19);
  }
  pFVar20 = (this->NaniteCustomDepthInstances).AllocatorInstance.Data;
  if (pFVar20 != (FPrimitiveInstanceRange *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar20);
  }
  (this->CustomDepthStencilValues).HashSize = 0;
  pFVar21 = (this->CustomDepthStencilValues).Hash.SecondaryData.SecondaryData.Data;
  if (pFVar21 != (FSetElementId *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar21);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
            (&(this->CustomDepthStencilValues).Elements);
  *(undefined4 *)&(this->TranslucentSelfShadowUniformBufferMap).field_0x58 = 0;
  pvVar22 = *(void **)&(this->TranslucentSelfShadowUniformBufferMap).field_0x50;
  if (pvVar22 != (void *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pvVar22);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TRefCountPtr<FRHIUniformBuffer>_>_>,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TRefCountPtr<FRHIUniformBuffer>_>_>,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TRefCountPtr<FRHIUniformBuffer>_>_>,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
              *)this_00);
  ppFVar3 = (this->DirtyIndirectLightingCacheBufferPrimitives).AllocatorInstance.Data;
  if (ppFVar3 != (FPrimitiveSceneInfo **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar3);
  }
  ppFVar3 = (this->VisibleDynamicPrimitivesWithSimpleLights).AllocatorInstance.Data;
  if (ppFVar3 != (FPrimitiveSceneInfo **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar3);
  }
  pFVar23 = (this->PrimitivesLODMask).AllocatorInstance.Data;
  if (pFVar23 != (FLODMask *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar23);
  }
  puVar5 = (this->StaticMeshFadeInDitheredLODMap).AllocatorInstance.SecondaryData.Data;
  if (puVar5 != (uint *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(puVar5);
  }
  puVar5 = (this->StaticMeshFadeOutDitheredLODMap).AllocatorInstance.SecondaryData.Data;
  if (puVar5 != (uint *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(puVar5);
  }
  puVar5 = (this->StaticMeshVisibilityMap).AllocatorInstance.SecondaryData.Data;
  if (puVar5 != (uint *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(puVar5);
  }
  pFVar24 = (this->PrimitiveViewRelevanceMap).AllocatorInstance.Data;
  if (pFVar24 != (FPrimitiveViewRelevance *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar24);
  }
  pFVar25 = (this->DitherFadeOutUniformBuffer).Reference;
  if (pFVar25 != (FRHIUniformBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar25);
  }
  pFVar25 = (this->DitherFadeInUniformBuffer).Reference;
  if (pFVar25 != (FRHIUniformBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar25);
  }
  puVar5 = (this->PrimitiveFadeUniformBufferMap).AllocatorInstance.SecondaryData.Data;
  if (puVar5 != (uint *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(puVar5);
  }
  ppFVar26 = (this->PrimitiveFadeUniformBuffers).AllocatorInstance.Data;
  if (ppFVar26 != (FRHIUniformBuffer **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar26);
  }
  puVar5 = (this->PotentiallyFadingPrimitiveMap).AllocatorInstance.SecondaryData.Data;
  if (puVar5 != (uint *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(puVar5);
  }
  puVar5 = (this->PrimitiveDefinitelyUnoccludedMap).AllocatorInstance.SecondaryData.Data;
  if (puVar5 != (uint *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(puVar5);
  }
  puVar5 = (this->PrimitiveRayTracingVisibilityMap).AllocatorInstance.SecondaryData.Data;
  if (puVar5 != (uint *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(puVar5);
  }
  puVar5 = (this->PrimitiveVisibilityMap).AllocatorInstance.SecondaryData.Data;
  if (puVar5 != (uint *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(puVar5);
  }
  ::operator_delete((this->CachedViewUniformShaderParameters).Ptr,0x17b0);
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
  ~TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>(&this->Allocator);
  FSceneView::~FSceneView((FSceneView *)this);
  return;
}

// BeginRenderView @ 1454e0de0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

void __thiscall FViewInfo::BeginRenderView(FViewInfo *this)

{
  longlong *plVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  ulonglong uVar14;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar10 = 0;
  uVar5 = 1;
  uVar11 = 0;
  uVar12 = PersistentViewUniformBufferExtensions.Elements._40_4_;
  uVar6 = uVar11;
  if (uVar12 != 0) {
    puVar13 = (uint *)&PersistentViewUniformBufferExtensions.Elements.field_0x10;
    if (PersistentViewUniformBufferExtensions.Elements._32_8_ != 0) {
      puVar13 = (uint *)PersistentViewUniformBufferExtensions.Elements._32_8_;
    }
    uVar6 = *puVar13;
    uVar11 = 0;
    while (uVar6 == 0) {
      lVar7 = (longlong)iVar10;
      uVar11 = uVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar6 = uVar12;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
      goto LAB_1454e0e8d;
      uVar6 = puVar13[lVar7 + 1];
    }
    uVar5 = -uVar6 & uVar6;
    uVar14 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res18 = (int)lVar7;
    uVar6 = local_res18 + -1 + uVar11;
    if ((int)uVar12 < (int)uVar6) {
      uVar6 = uVar12;
    }
  }
LAB_1454e0e8d:
  bVar3 = PersistentViewUniformBufferExtensions.Elements._40_1_;
  uVar9 = uVar12 & 0xffffffe0;
  uVar14 = PersistentViewUniformBufferExtensions.Elements._40_8_ & 0xffffffff;
  TStack_60._padding_ = CONCAT44(uVar5,iVar10);
  TStack_60.CurrentBitIndex = uVar6;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_60._28_4_ = uVar6;
  TStack_60.BaseBitIndex = uVar11;
  uStack_40 = CONCAT44(uStack_6c,
                       PersistentViewUniformBufferExtensions.Elements._8_4_ -
                       PersistentViewUniformBufferExtensions.Elements._52_4_);
  TStack_60.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)
       &PersistentViewUniformBufferExtensions.Elements.field_0x10;
  if (((int)uVar12 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar11 = PersistentViewUniformBufferExtensions.Elements._40_4_;
  if (uVar12 != uVar11) {
    uVar14 = PersistentViewUniformBufferExtensions.Elements._40_8_ & 0xffffffff;
    lVar7 = 0x154bd4fe0;
    if (PersistentViewUniformBufferExtensions.Elements._32_8_ != 0) {
      lVar7 = PersistentViewUniformBufferExtensions.Elements._32_8_;
    }
    uVar6 = -1 << (bVar3 & 0x1f) & *(uint *)(lVar7 + (longlong)iVar10 * 4);
    while (uVar6 == 0) {
      lVar8 = (longlong)iVar10;
      uVar9 = uVar9 + 0x20;
      iVar10 = iVar10 + 1;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
      goto LAB_1454e0fa0;
      uVar6 = *(uint *)(lVar7 + 4 + lVar8 * 4);
    }
    uVar14 = (ulonglong)(-uVar6 & uVar6) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar9 = (int)lVar7 + -1 + uVar9;
    if ((int)uVar11 < (int)uVar9) {
      uVar9 = uVar11;
    }
    uVar14 = (ulonglong)uVar9;
  }
LAB_1454e0fa0:
  while( true ) {
    if (PersistentViewUniformBufferExtensions.Elements._8_4_ -
        PersistentViewUniformBufferExtensions.Elements._52_4_ != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<IPersistentViewUniformBufferExtension_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == (int)uVar14) &&
       (TStack_60.Array ==
        (TBitArray<FDefaultBitArrayAllocator> *)
        &PersistentViewUniformBufferExtensions.Elements.field_0x10)) break;
    plVar1 = *(longlong **)
              (PersistentViewUniformBufferExtensions.Elements._0_8_ +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    (**(code **)(*plVar1 + 0x10))(plVar1,this,1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Cleanup @ 1454e3bc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

void __thiscall FViewInfo::Cleanup(FViewInfo *this)

{
  TStaticArray<FParallelMeshDrawCommandPass_*,39,4294967295> *pTVar1;
  longlong lVar2;
  
  pTVar1 = &this->ParallelMeshDrawCommandPasses;
  lVar2 = 0x27;
  do {
    if (pTVar1->Elements[0] != (FParallelMeshDrawCommandPass *)0x0) {
      FParallelMeshDrawCommandPass::Cleanup(pTVar1->Elements[0]);
    }
    pTVar1 = (TStaticArray<FParallelMeshDrawCommandPass_*,39,4294967295> *)(pTVar1->Elements + 1);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

// CreateMeshPass @ 1454e8860

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

FParallelMeshDrawCommandPass * __thiscall FViewInfo::CreateMeshPass(FViewInfo *this,Type param_1)

{
  code *pcVar1;
  bool bVar2;
  FParallelMeshDrawCommandPass *pFVar3;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar4;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar5;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar6;
  
  if (((this->ParallelMeshDrawCommandPasses).Elements[param_1] !=
       (FParallelMeshDrawCommandPass *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ParallelMeshDrawCommandPasses[MeshPass]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                         ,0x410,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FParallelMeshDrawCommandPass *)(*pcVar1)();
    return pFVar3;
  }
  aVar4 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
           )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x390,0x10);
  *(undefined8 *)((longlong)aVar4 + 8) = 0;
  *(undefined ***)aVar4 =
       &
       ___7__TObject_VFParallelMeshDrawCommandPass_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  pFVar3 = (FParallelMeshDrawCommandPass *)((longlong)aVar4 + 0x10);
  aVar5 = (this->Allocator).Next;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
      *)((longlong)aVar4 + 8) = aVar5;
    LOCK();
    aVar6 = (this->Allocator).Next;
    bVar2 = aVar5 == aVar6;
    if (bVar2) {
      (this->Allocator).Next = aVar4;
      aVar6 = aVar5;
    }
    UNLOCK();
    aVar5 = aVar6;
  } while (!bVar2);
  FMeshDrawCommandPassSetupTaskContext::FMeshDrawCommandPassSetupTaskContext
            ((FMeshDrawCommandPassSetupTaskContext *)pFVar3);
  *(undefined8 *)((longlong)aVar4 + 0x370) = 0;
  *(undefined8 *)((longlong)aVar4 + 0x378) = 0;
  *(undefined8 *)((longlong)aVar4 + 0x380) = 0;
  *(undefined1 *)((longlong)aVar4 + 0x388) = 0;
  *(undefined4 *)((longlong)aVar4 + 0x38c) = 0;
  (this->ParallelMeshDrawCommandPasses).Elements[param_1] = pFVar3;
  return pFVar3;
}

// CreateSnapshot @ 1454e9c70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

FViewInfo * __thiscall FViewInfo::CreateSnapshot(FViewInfo *this)

{
  FViewInfo *pFVar1;
  
  pFVar1 = FViewSnapshotCache::Create(&ViewSnapshotCache::Cache,this);
  return pFVar1;
}

// CreateViewUniformBuffers @ 1454e9c90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

void __thiscall
FViewInfo::CreateViewUniformBuffers(FViewInfo *this,FViewUniformShaderParameters *param_1)

{
  longlong *plVar1;
  FRHIResource *pFVar2;
  FName FVar3;
  FRHIUniformBufferLayout *pFVar4;
  FRHIResource *pFVar5;
  code *pcVar6;
  bool bVar7;
  FShaderParametersMetadata *pFVar8;
  TRefCountPtr<FRHIUniformBuffer> TVar9;
  FSceneView *pFVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  undefined1 auStack_1fd8 [32];
  FScriptContainerElement *local_1fb8;
  wchar_t *local_1fb0;
  FRHIResource *local_1fa8;
  FRHIResource *local_1fa0;
  longlong local_1f98;
  longlong local_1f90;
  FInstancedViewUniformShaderParameters local_1f88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1fd8;
  pFVar8 = FViewUniformShaderParameters::GetStructMetadata();
  pwVar12 = L"";
  if (((pFVar8->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x17c,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_1fb8 = (FScriptContainerElement *)CONCAT44(local_1fb8._4_4_,1);
  TVar9 = RHICreateUniformBuffer
                    (&local_1fa8,(FRHIUniformBufferLayout *)param_1,
                     (EUniformBufferUsage)(pFVar8->Layout).Reference,ValidateResources);
  pFVar2 = (FRHIResource *)(TVar9.Reference)->_padding_;
  if (pFVar2 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(pFVar2);
    pFVar8 = FViewUniformShaderParameters::GetStructMetadata();
    if (((pFVar8->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar3 = pFVar2[2].OwnerName;
    if ((FName)(pFVar8->Layout).Reference != FVar3) {
      if (*(int *)((longlong)FVar3 + 0x20) == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = *(wchar_t **)((longlong)FVar3 + 0x18);
      }
      pFVar8 = FViewUniformShaderParameters::GetStructMetadata();
      if (((pFVar8->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x177,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (pFVar8->Layout).Reference;
      if ((pFVar4->Name).Data.ArrayNum == 0) {
        local_1fb8 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        local_1fb8 = (pFVar4->Name).Data.AllocatorInstance.Data;
      }
      local_1fb0 = pwVar11;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                         ,0x96,
                         L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  if (local_1fa8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_1fa8);
  }
  plVar1 = &this->_padding_;
  if (plVar1 != &local_1f98) {
    pFVar5 = (FRHIResource *)*plVar1;
    *plVar1 = (longlong)pFVar2;
    pFVar2 = pFVar5;
  }
  if (pFVar2 != (FRHIResource *)0x0) {
    FRHIResource::Release(pFVar2);
  }
  if (*(char *)((longlong)&this->_padding_ + 6) != '\0') {
    FInstancedViewUniformShaderParameters::FInstancedViewUniformShaderParameters(&local_1f88);
    InstancedViewParametersUtils::CopyIntoInstancedViewParameters(&local_1f88,param_1,0);
    pFVar10 = FSceneView::GetInstancedSceneView((FSceneView *)this);
    if (pFVar10 != (FSceneView *)0x0) {
      if ((pFVar10[1].ViewUniformBuffer == (TUniformBufferRef<FViewUniformShaderParameters>)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InstancedView->CachedViewUniformShaderParameters.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                             ,0x8d0,
                             L"Instanced view should have had its RHI resources initialized first. Check InitViews order."
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      param_1 = *(FViewUniformShaderParameters **)&pFVar10[1].ViewUniformBuffer;
    }
    InstancedViewParametersUtils::CopyIntoInstancedViewParameters(&local_1f88,param_1,1);
    pFVar8 = FInstancedViewUniformShaderParameters::GetStructMetadata();
    if (((pFVar8->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_1fb8 = (FScriptContainerElement *)CONCAT44(local_1fb8._4_4_,1);
    TVar9 = RHICreateUniformBuffer
                      (&local_1fa0,(FRHIUniformBufferLayout *)&local_1f88,
                       (EUniformBufferUsage)(pFVar8->Layout).Reference,ValidateResources);
    pFVar2 = (FRHIResource *)(TVar9.Reference)->_padding_;
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(pFVar2);
      pFVar8 = FInstancedViewUniformShaderParameters::GetStructMetadata();
      if (((pFVar8->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x17c,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar3 = pFVar2[2].OwnerName;
      if ((FName)(pFVar8->Layout).Reference != FVar3) {
        if (*(int *)((longlong)FVar3 + 0x20) == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = *(wchar_t **)((longlong)FVar3 + 0x18);
        }
        pFVar8 = FInstancedViewUniformShaderParameters::GetStructMetadata();
        if (((pFVar8->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsLayoutInitialized()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                               ,0x177,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (pFVar8->Layout).Reference;
        if ((pFVar4->Name).Data.ArrayNum != 0) {
          pwVar12 = (wchar_t *)(pFVar4->Name).Data.AllocatorInstance.Data;
        }
        local_1fb8 = (FScriptContainerElement *)pwVar12;
        local_1fb0 = pwVar11;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                           ,0x96,
                           L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
    }
    if (local_1fa0 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_1fa0);
    }
    plVar1 = &this->_padding_;
    if (plVar1 != &local_1f90) {
      pFVar5 = (FRHIResource *)*plVar1;
      *plVar1 = (longlong)pFVar2;
      pFVar2 = pFVar5;
    }
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar2);
    }
  }
  return;
}

// EnqueueEyeAdaptationExposureBufferReadback @ 1454ebae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FViewInfo::EnqueueEyeAdaptationExposureBufferReadback(FViewInfo *this,FRDGBuilder *param_1)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  if (((lVar1 != 0) && (*(char *)(lVar1 + 0xf64) != '\0')) && ((*(byte *)(lVar1 + 8) & 1) != 0)) {
    FSceneViewState::FEyeAdaptationManager::EnqueueExposureBufferReadback
              ((FEyeAdaptationManager *)(lVar1 + 0xf68),param_1);
    return;
  }
  return;
}

// GetDynamicMeshElementRange @ 1454f31a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

FInt32Range * __thiscall
FViewInfo::GetDynamicMeshElementRange
          (FViewInfo *this,FInt32Range *__return_storage_ptr__,uint param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FInt32Range *pFVar6;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar7;
  uint uVar8;
  uint local_res8;
  uint local_res20;
  
  if ((((int)param_1 < 0) || ((this->PrimitiveVisibilityMap).NumBits <= (int)param_1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FInt32Range *)(*pcVar3)();
    return pFVar6;
  }
  pTVar7 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
            *)(this->PrimitiveVisibilityMap).AllocatorInstance.SecondaryData.Data;
  if (pTVar7 == (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)0x0) {
    pTVar7 = &this->PrimitiveVisibilityMap;
  }
  if ((*(uint *)((pTVar7->AllocatorInstance).InlineData +
                (longlong)((int)(param_1 + ((int)param_1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
       (param_1 & 0x1f) & 1) != 0) {
    uVar8 = ~param_1 >> 0x1f;
    uVar5 = 0;
    if ((int)param_1 < (this->PrimitiveViewRelevanceMap).ArrayNum) {
      uVar5 = uVar8;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FInt32Range *)(*pcVar3)();
      return pFVar6;
    }
    if ((this->PrimitiveViewRelevanceMap).AllocatorInstance.Data[(int)param_1].bDynamicRelevance !=
        0) {
      uVar5 = 0;
      if ((int)param_1 < (this->DynamicMeshElementRanges).ArrayNum) {
        uVar5 = uVar8;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FInt32Range *)(*pcVar3)();
        return pFVar6;
      }
      iVar1 = (this->DynamicMeshElementRanges).AllocatorInstance.Data[(int)param_1].field0_0x0._s_0.
              Y;
      uVar5 = 0;
      if ((int)param_1 < (this->DynamicMeshElementRanges).ArrayNum) {
        uVar5 = uVar8;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FInt32Range *)(*pcVar3)();
        return pFVar6;
      }
      iVar2 = (this->DynamicMeshElementRanges).AllocatorInstance.Data[(int)param_1].field0_0x0._s_0.
              X;
      *(undefined1 *)__return_storage_ptr__ = 1;
      *(int *)&__return_storage_ptr__->field_0x4 = iVar2;
      *(int *)&__return_storage_ptr__->field_0xc = iVar1;
      __return_storage_ptr__->field_0x8 = 0;
      return __return_storage_ptr__;
    }
  }
  local_res8 = local_res8 & 0xffffff00;
  *(ulonglong *)__return_storage_ptr__ = (ulonglong)local_res8;
  local_res20 = local_res20 & 0xffffff00;
  *(ulonglong *)&__return_storage_ptr__->field_0x8 = (ulonglong)local_res20;
  return __return_storage_ptr__;
}

// GetEyeAdaptationBuffer @ 1454f3450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPooledBuffer * __thiscall
FViewInfo::GetEyeAdaptationBuffer(FViewInfo *this,FRDGBuilder *param_1)

{
  longlong lVar1;
  TRefCountPtr<FRDGPooledBuffer> *pTVar2;
  
  lVar1 = this->_padding_;
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 8) = *(byte *)(lVar1 + 8) | 1;
    pTVar2 = FSceneViewState::FEyeAdaptationManager::GetOrCreateBuffer
                       ((FEyeAdaptationManager *)(lVar1 + 0xf68),param_1,
                        ((FEyeAdaptationManager *)(lVar1 + 0xf68))->CurrentBufferIndex);
    return pTVar2->Reference;
  }
  return (FRDGPooledBuffer *)0x0;
}

// GetEyeAdaptationViewState @ 1454f3490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

FSceneViewState * __thiscall FViewInfo::GetEyeAdaptationViewState(FViewInfo *this)

{
  return (FSceneViewState *)this->_padding_;
}

// GetFamilyViewRect @ 1454f34a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

TIntRect<int> * __thiscall
FViewInfo::GetFamilyViewRect(FViewInfo *this,TIntRect<int> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  TIntRect<int> *pTVar7;
  uint uVar8;
  ulonglong uVar9;
  TIntPoint<int>_u_0 local_48;
  TIntPoint<int>_u_0 TStack_40;
  
  if (*(char *)((longlong)&this->_padding_ + 4) != '\0') {
    (__return_storage_ptr__->field0_0x0)._s_0.Min.field0_0x0 =
         (this->ViewRectWithSecondaryViews).field0_0x0._s_0.Min.field0_0x0;
    (__return_storage_ptr__->field0_0x0)._s_0.Max.field0_0x0 =
         (this->ViewRectWithSecondaryViews).field0_0x0._s_0.Max.field0_0x0;
    return __return_storage_ptr__;
  }
  uVar9 = 0;
  local_48 = (TIntPoint<int>_u_0)0x0;
  TStack_40 = (TIntPoint<int>_u_0)0x0;
  uVar6 = (ulonglong)*(int *)(this->_padding_ + 0x10);
  if (uVar6 != 0) {
    local_48._4_4_ = 0;
    local_48._0_4_ = 0;
    TStack_40._4_4_ = 0;
    TStack_40._0_4_ = 0;
    do {
      lVar1 = this->_padding_;
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < *(int *)(lVar1 + 0x10)) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TIntRect<int> *)(*pcVar2)();
          return pTVar7;
        }
      }
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar8 * 8);
      iVar3 = *(int *)(lVar1 + 0x1c30);
      if (local_48._s_0.X < *(int *)(lVar1 + 0x1c30)) {
        iVar3 = local_48._s_0.X;
      }
      local_48._s_0.X = iVar3;
      iVar3 = *(int *)(lVar1 + 0x1c34);
      if (local_48._s_0.Y < *(int *)(lVar1 + 0x1c34)) {
        iVar3 = local_48._s_0.Y;
      }
      local_48._s_0.Y = iVar3;
      iVar3 = *(int *)(lVar1 + 0x1c38);
      if (*(int *)(lVar1 + 0x1c38) < TStack_40._s_0.X) {
        iVar3 = TStack_40._s_0.X;
      }
      TStack_40._s_0.X = iVar3;
      iVar3 = *(int *)(lVar1 + 0x1c3c);
      if (*(int *)(lVar1 + 0x1c3c) < TStack_40._s_0.Y) {
        iVar3 = TStack_40._s_0.Y;
      }
      TStack_40._s_0.Y = iVar3;
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar6);
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Min.field0_0x0 = local_48;
  (__return_storage_ptr__->field0_0x0)._s_0.Max.field0_0x0 = TStack_40;
  return __return_storage_ptr__;
}

// GetLastAverageLocalExposure @ 1454f7340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

float __thiscall FViewInfo::GetLastAverageLocalExposure(FViewInfo *this)

{
  if (this->_padding_ != 0) {
    return *(float *)(this->_padding_ + 0xf70);
  }
  return __real_3f800000;
}

// GetLastAverageSceneLuminance @ 1454f7370

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

float __thiscall FViewInfo::GetLastAverageSceneLuminance(FViewInfo *this)

{
  float fVar1;
  
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001454f737f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar1 = (float)(**(code **)(*(longlong *)this->_padding_ + 0xb0))();
    return fVar1;
  }
  return 0.0;
}

// GetLastEyeAdaptationExposure @ 1454f7390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

float __thiscall FViewInfo::GetLastEyeAdaptationExposure(FViewInfo *this)

{
  float fVar1;
  
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001454f739f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar1 = (float)(**(code **)(*(longlong *)this->_padding_ + 0xa8))();
    return fVar1;
  }
  return 0.0;
}

// GetPrimaryView @ 1454f80a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

FViewInfo * __thiscall FViewInfo::GetPrimaryView(FViewInfo *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FViewInfo *pFVar6;
  
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    uVar1 = (uint)this->_padding_;
    if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(lVar2 + 0x10))) {
      uVar5 = 0;
      if ((int)uVar1 < *(int *)(lVar2 + 0x10)) {
        uVar5 = ~uVar1 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FViewInfo *)(*pcVar3)();
          return pFVar6;
        }
      }
      pFVar6 = *(FViewInfo **)(*(longlong *)(lVar2 + 8) + (longlong)(int)uVar1 * 8);
      if (*(char *)((longlong)&pFVar6->_padding_ + 1) == '\0') {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("PrimaryView->bIsViewInfo",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                           ,0x91c,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FViewInfo *)(*pcVar3)();
          return pFVar6;
        }
      }
      return pFVar6;
    }
  }
  return this;
}

// GetRayTracingInstanceHitCountUAV @ 1454f8170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBufferUAV * __thiscall
FViewInfo::GetRayTracingInstanceHitCountUAV(FViewInfo *this,FRDGBuilder *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FRDGBufferUAV *pFVar5;
  longlong lVar6;
  
  if (this->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Family",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                       ,0x45a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FRDGBufferUAV *)(*pcVar3)();
      return pFVar5;
    }
  }
  plVar2 = *(longlong **)(this->_padding_ + 0x40);
  if (plVar2 != (longlong *)0x0) {
    lVar6 = (**(code **)(*plVar2 + 0x420))();
    if (lVar6 != 0) {
      iVar1 = (int)this->_padding_;
      if ((iVar1 != 0) && (iVar1 == 2)) {
        this = GetPrimaryView(this);
      }
      pFVar5 = FRayTracingScene::GetInstanceHitCountBufferUAV
                         ((FRayTracingScene *)(lVar6 + 0x3920),Base,
                          (FViewHandle)(this->RayTracingSceneViewHandle).Index);
      return pFVar5;
    }
  }
  return (FRDGBufferUAV *)0x0;
}

// GetRayTracingSceneChecked @ 1454f8220

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

FRHIRayTracingScene * __thiscall
FViewInfo::GetRayTracingSceneChecked(FViewInfo *this,ERayTracingSceneLayer param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FRHIRayTracingScene *pFVar5;
  longlong lVar6;
  
  if (this->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Family",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                       ,0x43c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FRHIRayTracingScene *)(*pcVar3)();
      return pFVar5;
    }
  }
  plVar2 = *(longlong **)(this->_padding_ + 0x40);
  if (plVar2 != (longlong *)0x0) {
    lVar6 = (**(code **)(*plVar2 + 0x420))();
    if (lVar6 != 0) {
      iVar1 = (int)this->_padding_;
      if ((iVar1 != 0) && (iVar1 == 2)) {
        this = GetPrimaryView(this);
      }
      pFVar5 = FRayTracingScene::GetRHIRayTracingScene
                         ((FRayTracingScene *)(lVar6 + 0x3920),param_1,
                          (FViewHandle)(this->RayTracingSceneViewHandle).Index);
      if (pFVar5 == (FRHIRayTracingScene *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                           ,0x442,L"Ray tracing scene is expected to be created at this point.");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar5 = (FRHIRayTracingScene *)(*pcVar3)();
          return pFVar5;
        }
      }
      return pFVar5;
    }
  }
  return (FRHIRayTracingScene *)0x0;
}

// GetRayTracingSceneLayerViewChecked @ 1454f8310

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

FRDGBufferSRV * __thiscall
FViewInfo::GetRayTracingSceneLayerViewChecked(FViewInfo *this,ERayTracingSceneLayer param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FRDGBufferSRV *pFVar5;
  longlong lVar6;
  
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Family",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                         ,0x44c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FRDGBufferSRV *)(*pcVar3)();
    return pFVar5;
  }
  plVar2 = *(longlong **)(this->_padding_ + 0x40);
  if ((plVar2 != (longlong *)0x0) && (lVar6 = (**(code **)(*plVar2 + 0x420))(), lVar6 != 0)) {
    iVar1 = (int)this->_padding_;
    if ((iVar1 != 0) && (iVar1 == 2)) {
      this = GetPrimaryView(this);
    }
    pFVar5 = FRayTracingScene::GetLayerView
                       ((FRayTracingScene *)(lVar6 + 0x3920),param_1,
                        (FViewHandle)(this->RayTracingSceneViewHandle).Index);
    if (pFVar5 != (FRDGBufferSRV *)0x0) {
      return pFVar5;
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                     ,0x454,L"Ray tracing scene SRV is expected to be created at this point.");
  if (!bVar4) {
    return (FRDGBufferSRV *)0x0;
  }
  pcVar3 = (code *)swi(3);
  pFVar5 = (FRDGBufferSRV *)(*pcVar3)();
  return pFVar5;
}

// GetSecondaryViewCropRect @ 1454f8f80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

TIntRect<int> * __thiscall
FViewInfo::GetSecondaryViewCropRect(FViewInfo *this,TIntRect<int> *__return_storage_ptr__)

{
  float fVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar4 = __real_bf000000;
  fVar7 = *(float *)((longlong)&this->_padding_ + 4);
  fVar7 = fVar7 + fVar7;
  fVar1 = *(float *)(this->_padding_ + 0x100);
  fVar8 = *(float *)&this->_padding_;
  fVar9 = fVar8 * *(float *)((longlong)&this->_padding_ + 4);
  if (__real_3f800000 <= fVar9) {
    fVar9 = __real_3f800000;
  }
  fVar10 = fVar8 * *(float *)((longlong)&this->_padding_ + 4);
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  if (__real_3f800000 <= fVar10) {
    fVar10 = __real_3f800000;
  }
  fVar5 = fVar8 * *(float *)&this->_padding_;
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  fVar8 = fVar8 * *(float *)&this->_padding_;
  if (__real_3f800000 <= fVar5) {
    fVar5 = __real_3f800000;
  }
  fVar10 = fVar10 + __real_3f800000;
  fVar6 = (float)-((int)ROUND(__real_bf000000 -
                              (float)((int)this->_padding_ - (int)this->_padding_) * fVar1 * fVar7)
                  >> 1);
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  if (__real_3f800000 <= fVar8) {
    fVar8 = __real_3f800000;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  fVar9 = __real_bf000000 - (fVar9 + __real_3f800000) * fVar6;
  fVar7 = (float)-((int)ROUND(__real_bf000000 -
                              (float)(*(int *)((longlong)&this->_padding_ + 4) -
                                     *(int *)((longlong)&this->_padding_ + 4)) * fVar1 * fVar7) >> 1
                  );
  TVar2._s_0.Y = (int)ROUND((__real_3f800000 - fVar8) * fVar7 - __real_3f000000) >> 1;
  TVar2._s_0.X = (int)ROUND((__real_3f800000 - fVar5) * fVar6 - __real_3f000000) >> 1;
  (__return_storage_ptr__->field0_0x0)._s_0.Min.field0_0x0 = TVar2;
  TVar3._s_0.Y = -((int)ROUND(fVar4 - fVar10 * fVar7) >> 1);
  TVar3._s_0.X = -((int)ROUND(fVar9) >> 1);
  (__return_storage_ptr__->field0_0x0)._s_0.Max.field0_0x0 = TVar3;
  return __return_storage_ptr__;
}

// GetSecondaryViewRectSize @ 1454f9150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

TIntPoint<int> __thiscall FViewInfo::GetSecondaryViewRectSize(FViewInfo *this)

{
  float fVar1;
  float fVar2;
  TIntPoint<int>_u_0 in_RDX;
  float fVar3;
  
  fVar2 = __real_bf000000;
  fVar3 = *(float *)((longlong)&this->_padding_ + 4);
  fVar3 = fVar3 + fVar3;
  fVar1 = *(float *)(this->_padding_ + 0x100);
  *(int *)in_RDX =
       -((int)ROUND(__real_bf000000 -
                    (float)((int)this->_padding_ - (int)this->_padding_) * fVar1 * fVar3) >> 1);
  *(int *)((longlong)in_RDX + 4) =
       -((int)ROUND(fVar2 - (float)(*(int *)((longlong)&this->_padding_ + 4) -
                                   *(int *)((longlong)&this->_padding_ + 4)) * fVar1 * fVar3) >> 1);
  return (TIntPoint<int>)in_RDX;
}

// GetShaderParameters @ 1454f91d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

FViewShaderParameters * __thiscall
FViewInfo::GetShaderParameters(FViewInfo *this,FViewShaderParameters *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  FViewShaderParameters *pFVar4;
  EUniformBufferBindingFlags EVar5;
  undefined7 uStack_f;
  
  (__return_storage_ptr__->View).field_0x8 = 1;
  *(undefined8 *)&__return_storage_ptr__->View = 0;
  *(undefined8 *)&__return_storage_ptr__->InstancedView = 0;
  (__return_storage_ptr__->InstancedView).field_0x8 = 1;
  pFVar3 = FViewUniformShaderParameters::GetStructMetadata();
  EVar5 = Static;
  if (pFVar3->BindingFlags != StaticAndShader) {
    EVar5 = pFVar3->BindingFlags;
  }
  *(longlong *)&__return_storage_ptr__->View = this->_padding_;
  *(ulonglong *)&(__return_storage_ptr__->View).field_0x8 = CONCAT71(uStack_f,EVar5);
  pFVar3 = FInstancedViewUniformShaderParameters::GetStructMetadata();
  EVar5 = Static;
  if (pFVar3->BindingFlags != StaticAndShader) {
    EVar5 = pFVar3->BindingFlags;
  }
  *(longlong *)&__return_storage_ptr__->InstancedView = this->_padding_;
  *(ulonglong *)&(__return_storage_ptr__->InstancedView).field_0x8 = CONCAT71(uStack_f,EVar5);
  if ((this->_padding_ == 0) && (*(char *)((longlong)&this->_padding_ + 6) != '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstancedViewUniformBuffer.IsValid() || !bShouldBindInstancedViewUB",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                       ,0x912,
                       L"A view that is a part of the stereo pair has bogus state for InstancedView."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FViewShaderParameters *)(*pcVar1)();
      return pFVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetTonemappingLUT @ 1454f9dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

IPooledRenderTarget * __thiscall
FViewInfo::GetTonemappingLUT
          (FViewInfo *this,FRHICommandList *param_1,int param_2,bool param_3,bool param_4,
          bool param_5)

{
  longlong lVar1;
  FRHITextureDesc *pFVar2;
  TRefCountPtr<IPooledRenderTarget> *pTVar3;
  undefined1 auStackY_118 [32];
  FPooledRenderTargetDesc local_e8;
  undefined1 local_88 [80];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  if (this->_padding_ != 0) {
    pTVar3 = (TRefCountPtr<IPooledRenderTarget> *)(this->_padding_ + 0x1000);
    if ((((pTVar3->Reference == (IPooledRenderTarget *)0x0) ||
         (lVar1 = (**(code **)(pTVar3->Reference->_padding_ + 0x10))(),
         *(int *)(lVar1 + 0x30) != param_2)) ||
        (lVar1 = (**(code **)(pTVar3->Reference->_padding_ + 0x10))(),
        (*(short *)(lVar1 + 0x34) != 0) != param_3)) ||
       ((lVar1 = (**(code **)(pTVar3->Reference->_padding_ + 0x10))(),
        (bool)((byte)(*(uint *)(lVar1 + 0x20) >> 0x11) & 1) != param_4 ||
        (lVar1 = (**(code **)(pTVar3->Reference->_padding_ + 0x10))(),
        (*(char *)(lVar1 + 0x28) == '\n') != param_5)))) {
      FSceneViewState::CreateLUTRenderTarget(&local_e8,param_2,param_3,param_4,param_5);
      pFVar2 = (FRHITextureDesc *)::Translate((FRDGTextureDesc *)local_88,&local_e8);
      FRenderTargetPool::FindFreeElement
                ((FRenderTargetPool *)&GRenderTargetPool,(FRHICommandListBase *)param_1,pFVar2,
                 pTVar3,local_e8.DebugName);
      if ((void *)local_88._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_88._64_8_);
      }
      if (local_e8.AliasableFormats.AllocatorInstance.SecondaryData !=
          (ForElementType<EPixelFormat>)0x0) {
        FMemory::Free((void *)local_e8.AliasableFormats.AllocatorInstance.SecondaryData);
      }
    }
    return pTVar3->Reference;
  }
  return (IPooledRenderTarget *)0x0;
}

// GetTonemappingLUT @ 1454f9f20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

IPooledRenderTarget * __thiscall FViewInfo::GetTonemappingLUT(FViewInfo *this)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x1008) != '\0')) {
    return *(IPooledRenderTarget **)(lVar1 + 0x1000);
  }
  return (IPooledRenderTarget *)0x0;
}

// GetUnscaledFamilyViewRect @ 1454f9f80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

TIntRect<int> * __thiscall
FViewInfo::GetUnscaledFamilyViewRect(FViewInfo *this,TIntRect<int> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TIntRect<int> *pTVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  int iVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined1 local_res8 [8];
  TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  uVar9 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (__return_storage_ptr__->field0_0x0)._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  uVar13 = (ulonglong)*(int *)(this->_padding_ + 0x10);
  if (uVar13 != 0) {
    do {
      lVar2 = this->_padding_;
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < *(int *)(lVar2 + 0x10)) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TIntRect<int> *)(*pcVar3)();
        return pTVar6;
      }
      lVar2 = *(longlong *)(*(longlong *)(lVar2 + 8) + (longlong)(int)uVar8 * 8);
      iVar11 = *(int *)(lVar2 + 0x380);
      if (*(int *)&__return_storage_ptr__->field0_0x0 < *(int *)(lVar2 + 0x380)) {
        iVar11 = *(int *)&__return_storage_ptr__->field0_0x0;
      }
      *(int *)&__return_storage_ptr__->field0_0x0 = iVar11;
      iVar11 = *(int *)(lVar2 + 900);
      if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) < *(int *)(lVar2 + 900)) {
        iVar11 = *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 4);
      }
      *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = iVar11;
      iVar11 = *(int *)(lVar2 + 0x388);
      if (*(int *)(lVar2 + 0x388) < *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8)) {
        iVar11 = *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8);
      }
      *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = iVar11;
      iVar11 = *(int *)(lVar2 + 0x38c);
      if (*(int *)(lVar2 + 0x38c) < *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc)) {
        iVar11 = *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc);
      }
      *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = iVar11;
      if (*(char *)((longlong)&this->_padding_ + 4) != '\0') {
        FSceneView::GetSecondaryViews((FSceneView *)this,&local_38);
        iVar11 = local_38.ArrayNum;
        pFVar1 = local_38.AllocatorInstance.Data + (longlong)iVar11 * 8;
        FVar10.Data = local_38.AllocatorInstance.Data;
        uVar12 = local_38._8_8_;
        while( true ) {
          if ((int)uVar12 != iVar11) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<FSceneView_const_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
            uVar12 = local_38._8_8_;
          }
          if (FVar10.Data == pFVar1) break;
          lVar2 = *(longlong *)FVar10.Data;
          iVar7 = *(int *)(lVar2 + 0x380);
          if (*(int *)&__return_storage_ptr__->field0_0x0 < *(int *)(lVar2 + 0x380)) {
            iVar7 = *(int *)&__return_storage_ptr__->field0_0x0;
          }
          *(int *)&__return_storage_ptr__->field0_0x0 = iVar7;
          iVar7 = *(int *)(lVar2 + 900);
          if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) < *(int *)(lVar2 + 900)) {
            iVar7 = *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 4);
          }
          *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = iVar7;
          iVar7 = *(int *)(lVar2 + 0x388);
          if (*(int *)(lVar2 + 0x388) < *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8))
          {
            iVar7 = *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8);
          }
          *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = iVar7;
          iVar7 = *(int *)(lVar2 + 0x38c);
          if (*(int *)(lVar2 + 0x38c) <
              *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc)) {
            iVar7 = *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc);
          }
          FVar10.Data = FVar10.Data + 8;
          *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = iVar7;
        }
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar13);
  }
  return __return_storage_ptr__;
}

// GetVolumetricCloudTexture @ 1454fa930

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall FViewInfo::GetVolumetricCloudTexture(FViewInfo *this,FRDGBuilder *param_1)

{
  FRDGTexture *pFVar1;
  
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001454fa93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar1 = (FRDGTexture *)(**(code **)(*(longlong *)this->_padding_ + 0x78))();
    return pFVar1;
  }
  return (FRDGTexture *)0x0;
}

// HasRayTracingScene @ 1454fa9a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

bool __thiscall FViewInfo::HasRayTracingScene(FViewInfo *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong lVar5;
  
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Family",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                       ,0x431,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  plVar1 = *(longlong **)(this->_padding_ + 0x40);
  if (plVar1 != (longlong *)0x0) {
    lVar5 = (**(code **)(*plVar1 + 0x420))();
    if (lVar5 != 0) {
      bVar3 = FRayTracingScene::IsCreated((FRayTracingScene *)(lVar5 + 0x3920));
      return bVar3;
    }
  }
  return false;
}

// Init @ 1454faa20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

void __thiscall FViewInfo::Init(FViewInfo *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  FViewUniformShaderParameters *pFVar4;
  IPooledRenderTarget *pIVar5;
  FRHITexture *this_00;
  FRHIUniformBuffer *pFVar6;
  FRDGBuffer *pFVar7;
  FRDGBufferSRV *pFVar8;
  FRDGBuffer *pFVar9;
  FRDGBufferSRV *pFVar10;
  FRDGBufferUAV *pFVar11;
  FRDGBufferUAV *pFVar12;
  TRDGUniformBuffer<FLocalFogVolumeUniformParameters> *pTVar13;
  undefined8 uVar14;
  TIntVector2<unsigned_int>_u_0 TVar15;
  undefined8 uVar16;
  TVector2<double> TVar17;
  undefined4 uVar18;
  TConsoleVariableData<int> *pTVar19;
  FLocalFogVolumeViewData *pFVar20;
  undefined8 *puVar21;
  bool bVar22;
  ETextureSamplerFilter EVar23;
  int iVar24;
  FGlobalShaderMap *pFVar25;
  UDeviceProfileManager *this_01;
  UDeviceProfile *this_02;
  UTextureLODSettings *this_03;
  FTextureLODGroup *pFVar26;
  FLocalFogVolumeViewData *pFVar27;
  int iVar28;
  undefined8 *puVar29;
  longlong lVar30;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_4f;
  undefined4 local_47;
  undefined2 local_43;
  undefined1 local_41;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  
  (this->ViewRect).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->ViewRect).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  pFVar4 = (this->CachedViewUniformShaderParameters).Ptr;
  (this->CachedViewUniformShaderParameters).Ptr = (FViewUniformShaderParameters *)0x0;
  ::operator_delete(pFVar4,0x17b0);
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  this->ShadingModelMaskInView = 0;
  puVar2 = &this->field_0x24b8;
  this->bStatePrevViewInfoIsReadOnly = 1;
  this->bSceneCaptureMainViewJitter = 0;
  this->bUsesSecondStageDepthPass = 0;
  this->bHasSingleLayerWaterMaterial = 0;
  this->bSceneHasSkyMaterial = 0;
  this->bFogOnlyOnRenderedOpaque = 0;
  this->bTranslucentSurfaceLighting = 0;
  this->bUsesLightingChannels = 0;
  this->bUsesGlobalDistanceField = 0;
  this->bDisableQuerySubmissions = 0;
  this->bIgnoreExistingQueries = 0;
  this->bPrevTransformsReset = 0;
  this->bHasTranslucentViewMeshElements = 0;
  this->bHasNoVisiblePrimitive = 0;
  this->AutoBeforeDOFTranslucencyBoundary = 0.0;
  this->NumVisibleStaticMeshElements = 0;
  this->PrecomputedVisibilityData = (uchar *)0x0;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  (this->ExponentialFogParameters).field0_0x0._s_0.X = 0.0;
  (this->ExponentialFogParameters).field0_0x0._s_0.Y = 1.0;
  *(undefined8 *)((longlong)&(this->ExponentialFogParameters).field0_0x0 + 8) = 0x3f800000;
  (this->ExponentialFogParameters2).field0_0x0._s_0.X = 0.0;
  *(undefined8 *)((longlong)&(this->ExponentialFogParameters2).field0_0x0 + 4) = 0x3f800000;
  (this->ExponentialFogParameters2).field0_0x0._s_0.W = 0.0;
  *(undefined8 *)&(this->ExponentialFogColor).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  uVar18 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->ExponentialFogParameters3).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->ExponentialFogParameters3).field0_0x0 + 8) = 0;
  (this->ExponentialFogColor).field0_0x0._s_0.Z = (float)uVar18;
  this->FogMaxOpacity = 1.0;
  (this->SinCosInscatteringColorCubemapRotation).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  this->FogEndDistance = 0.0;
  this->FogInscatteringColorCubemap = (UTexture *)0x0;
  uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->FogInscatteringTextureParameters).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->FogInscatteringTextureParameters).field0_0x0._s_0.Y = (double)uVar14;
  (this->FogInscatteringTextureParameters).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->VolumetricFogStartDistance = 0.0;
  this->VolumetricFogNearFadeInDistanceInv = 1e+08;
  *(undefined8 *)&(this->VolumetricFogAlbedo).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->VolumetricFogAlbedo).field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  this->VolumetricFogPhaseG = 0.0;
  pIVar5 = (this->SkyAtmosphereCameraAerialPerspectiveVolume).Reference;
  if (pIVar5 != (IPooledRenderTarget *)0x0) {
    (this->SkyAtmosphereCameraAerialPerspectiveVolume).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar5->_padding_ + 0x38))();
  }
  pIVar5 = (this->SkyAtmosphereCameraAerialPerspectiveVolumeMieOnly).Reference;
  if (pIVar5 != (IPooledRenderTarget *)0x0) {
    (this->SkyAtmosphereCameraAerialPerspectiveVolumeMieOnly).Reference = (IPooledRenderTarget *)0x0
    ;
    (**(code **)(pIVar5->_padding_ + 0x38))();
  }
  pIVar5 = (this->SkyAtmosphereCameraAerialPerspectiveVolumeRayOnly).Reference;
  if (pIVar5 != (IPooledRenderTarget *)0x0) {
    (this->SkyAtmosphereCameraAerialPerspectiveVolumeRayOnly).Reference = (IPooledRenderTarget *)0x0
    ;
    (**(code **)(pIVar5->_padding_ + 0x38))();
  }
  this->SkyAtmosphereUniformShaderParameters = (FAtmosphereUniformShaderParameters *)0x0;
  this->VolumetricCloudSkyAO = (FRDGTexture *)0x0;
  this->bUseDirectionalInscattering = false;
  this->DirectionalInscatteringExponent = 0.0;
  this->DirectionalInscatteringStartDistance = 0.0;
  (this->InscatteringLightDirection).field0_0x0._s_0.X = 0.0;
  (this->InscatteringLightDirection).field0_0x0._s_0.Y = 0.0;
  (this->InscatteringLightDirection).field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)&(this->DirectionalInscatteringColor).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->DirectionalInscatteringColor).field0_0x0 + 8) = 0;
  this->TranslucencyLightingVolumeMin[0].field0_0x0._s_0.X = 0.0;
  this->TranslucencyLightingVolumeMin[0].field0_0x0._s_0.Y = 0.0;
  this->TranslucencyLightingVolumeMin[0].field0_0x0._s_0.Z = 0.0;
  this->TranslucencyVolumeVoxelSize[0] = 0.0;
  this->TranslucencyVolumeVoxelSize[1] = 0.0;
  this->TranslucencyLightingVolumeSize[0].field0_0x0._s_0.X = 0.0;
  this->TranslucencyLightingVolumeSize[0].field0_0x0._s_0.Y = 0.0;
  this->TranslucencyLightingVolumeSize[0].field0_0x0._s_0.Z = 0.0;
  this->TranslucencyLightingVolumeMin[1].field0_0x0._s_0.X = 0.0;
  this->TranslucencyLightingVolumeMin[1].field0_0x0._s_0.Y = 0.0;
  this->TranslucencyLightingVolumeMin[1].field0_0x0._s_0.Z = 0.0;
  this->TranslucencyLightingVolumeSize[1].field0_0x0._s_0.X = 0.0;
  this->TranslucencyLightingVolumeSize[1].field0_0x0._s_0.Y = 0.0;
  this->TranslucencyLightingVolumeSize[1].field0_0x0._s_0.Z = 0.0;
  pTVar19 = CVarMaxShadowCascades.Ref;
  iVar28 = 1;
  if (1 < *(int *)(this->_padding_ + 0x10)) {
    iVar28 = *(int *)(this->_padding_ + 0x10);
  }
  iVar28 = (int)(4 / (longlong)iVar28);
  if (2 < (int)this->_padding_) {
    iVar28 = 10;
  }
  bVar22 = IsInParallelGameThread();
  if ((bVar22) || (bVar22 = IsInGameThread(), lVar30 = 4, bVar22)) {
    lVar30 = 0;
  }
  if (*(int *)((longlong)pTVar19->ShadowedValue + lVar30) < iVar28) {
    iVar28 = *(int *)((longlong)pTVar19->ShadowedValue + lVar30);
  }
  iVar24 = 0;
  if (0 < iVar28) {
    iVar24 = iVar28;
  }
  *(int *)&this->_padding_ = iVar24;
  pFVar25 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)this->_padding_]);
  this->ShaderMap = pFVar25;
  this->ViewState = (FSceneViewState *)this->_padding_;
  bVar22 = IsHMDHiddenAreaMaskActive();
  lVar30 = this->_padding_;
  *(bool *)((longlong)&this->_padding_ + 6) = bVar22;
  bVar22 = IsPostProcessingWithComputeEnabled((Type)lVar30);
  this->bCustomDepthStencilValid = 0;
  this->bUsesMotionVectorWorldOffset = 0;
  this->bUsesCustomStencil = 0;
  this->bUsesCustomDepth = 0;
  this->bUseComputePasses = bVar22;
  this->bHasDistortionPrimitives = false;
  this->bHasCustomDepthPrimitives = false;
  this->bAllowStencilDither = false;
  this->MaterialMaxEmissiveValue = 32256.0;
  this->NumBoxReflectionCaptures = 0;
  this->NumSphereReflectionCaptures = 0;
  this->FurthestReflectionCaptureDistance = 0.0;
  this->TemporalSourceView = (FViewInfo *)0x0;
  this->TemporalJitterSequenceLength = 1;
  TVar17 = UE::Math::TVector2<double>::ZeroVector;
  this->TemporalJitterIndex = 0;
  this->PreExposure = 1.0;
  (this->TemporalJitterPixels).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar17.field0_0x0;
  bVar22 = IsInGameThread();
  if (bVar22) {
    this_01 = UDeviceProfileManager::Get(false);
    this_02 = UDeviceProfileManager::GetActiveProfile(this_01);
    this_03 = UDeviceProfile::GetTextureLODSettings(this_02);
    EVar23 = UTextureLODSettings::GetSamplerFilter(this_03,0);
    this->WorldTextureGroupSamplerFilter = (uint)EVar23;
    EVar23 = UTextureLODSettings::GetSamplerFilter(this_03,0x19);
    this->TerrainWeightmapTextureGroupSamplerFilter = (uint)EVar23;
    pFVar26 = UTextureLODSettings::GetTextureLODGroup(this_03,TEXTUREGROUP_World);
    this->WorldTextureGroupMaxAnisotropy = pFVar26->MaxAniso;
  }
  this->bIsValidTextureGroupSamplerFilters = bVar22;
  this_00 = (this->PrimitiveSceneDataTextureOverrideRHI).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    (this->PrimitiveSceneDataTextureOverrideRHI).Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  pFVar6 = (this->DitherFadeInUniformBuffer).Reference;
  if (pFVar6 != (FRHIUniformBuffer *)0x0) {
    (this->DitherFadeInUniformBuffer).Reference = (FRHIUniformBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar6);
  }
  pFVar6 = (this->DitherFadeOutUniformBuffer).Reference;
  if (pFVar6 != (FRHIUniformBuffer *)0x0) {
    (this->DitherFadeOutUniformBuffer).Reference = (FRHIUniformBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar6);
  }
  this->NumVisibleDynamicMeshElements[0] = 0;
  this->NumVisibleDynamicMeshElements[1] = 0;
  this->NumVisibleDynamicMeshElements[2] = 0;
  this->NumVisibleDynamicMeshElements[3] = 0;
  this->NumVisibleDynamicMeshElements[4] = 0;
  this->NumVisibleDynamicMeshElements[5] = 0;
  this->NumVisibleDynamicMeshElements[6] = 0;
  this->NumVisibleDynamicMeshElements[7] = 0;
  this->NumVisibleDynamicMeshElements[8] = 0;
  this->NumVisibleDynamicMeshElements[9] = 0;
  this->NumVisibleDynamicMeshElements[10] = 0;
  this->NumVisibleDynamicMeshElements[0xb] = 0;
  this->NumVisibleDynamicMeshElements[0xc] = 0;
  this->NumVisibleDynamicMeshElements[0xd] = 0;
  this->NumVisibleDynamicMeshElements[0xe] = 0;
  this->NumVisibleDynamicMeshElements[0xf] = 0;
  this->NumVisibleDynamicMeshElements[0x10] = 0;
  this->NumVisibleDynamicMeshElements[0x11] = 0;
  this->NumVisibleDynamicMeshElements[0x12] = 0;
  this->NumVisibleDynamicMeshElements[0x13] = 0;
  this->NumVisibleDynamicMeshElements[0x14] = 0;
  this->NumVisibleDynamicMeshElements[0x15] = 0;
  this->NumVisibleDynamicMeshElements[0x16] = 0;
  this->NumVisibleDynamicMeshElements[0x17] = 0;
  this->NumVisibleDynamicMeshElements[0x18] = 0;
  this->NumVisibleDynamicMeshElements[0x19] = 0;
  this->NumVisibleDynamicMeshElements[0x1a] = 0;
  this->NumVisibleDynamicMeshElements[0x1b] = 0;
  this->NumVisibleDynamicMeshElements[0x1c] = 0;
  this->NumVisibleDynamicMeshElements[0x1d] = 0;
  this->NumVisibleDynamicMeshElements[0x1e] = 0;
  this->NumVisibleDynamicMeshElements[0x1f] = 0;
  this->NumVisibleDynamicMeshElements[0x20] = 0;
  this->NumVisibleDynamicMeshElements[0x21] = 0;
  this->NumVisibleDynamicMeshElements[0x22] = 0;
  this->NumVisibleDynamicMeshElements[0x23] = 0;
  this->NumVisibleDynamicMeshElements[0x24] = 0;
  this->NumVisibleDynamicMeshElements[0x25] = 0;
  this->NumVisibleDynamicMeshElements[0x26] = 0;
  this->NumVisibleDynamicPrimitives = 0;
  this->NumVisibleDynamicEditorPrimitives = 0;
  FSubstrateViewData::Reset(this->SubstrateViewData);
  uStack_130 = 0;
  local_138 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_e0 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  lVar30 = 2;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_a8 = ___xmm_3f800000000000000000000000000000;
  uStack_a0 = _UNK_150689648;
  local_70 = 0;
  local_4f = 0;
  local_47 = 0;
  local_43 = 0;
  local_41 = 0;
  local_20 = 0;
  local_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  local_d8 = 0;
  local_78 = 0;
  local_58 = 0;
  local_40 = 0;
  local_28 = 0;
  pFVar20 = this->LocalFogVolumeViewData;
  puVar21 = &local_138;
  do {
    puVar29 = puVar21;
    pFVar27 = pFVar20;
    pFVar20 = (FLocalFogVolumeViewData *)
              &(pFVar27->UniformParametersStruct).LocalFogVolumeCommon.GlobalStartDistance;
    pFVar7 = (FRDGBuffer *)puVar29[1];
    pFVar8 = (FRDGBufferSRV *)puVar29[2];
    pFVar9 = (FRDGBuffer *)puVar29[3];
    *(undefined8 *)pFVar27 = *puVar29;
    pFVar27->GPUInstanceDataBuffer = pFVar7;
    pFVar10 = (FRDGBufferSRV *)puVar29[4];
    pFVar7 = (FRDGBuffer *)puVar29[5];
    pFVar27->GPUInstanceDataBufferSRV = pFVar8;
    pFVar27->GPUInstanceCullingDataBuffer = pFVar9;
    pFVar8 = (FRDGBufferSRV *)puVar29[6];
    pFVar11 = (FRDGBufferUAV *)puVar29[7];
    pFVar27->GPUInstanceCullingDataBufferSRV = pFVar10;
    pFVar27->GPUTileDataBuffer = pFVar7;
    pFVar7 = (FRDGBuffer *)puVar29[8];
    pFVar12 = (FRDGBufferUAV *)puVar29[9];
    pFVar27->GPUTileDataBufferSRV = pFVar8;
    pFVar27->GPUTileDataBufferUAV = pFVar11;
    pTVar13 = (TRDGUniformBuffer<FLocalFogVolumeUniformParameters> *)puVar29[10];
    uVar14 = puVar29[0xb];
    pFVar27->GPUTileDrawIndirectBuffer = pFVar7;
    pFVar27->GPUTileDrawIndirectBufferUAV = pFVar12;
    pFVar8 = (FRDGBufferSRV *)puVar29[0xc];
    TVar15 = *(TIntVector2<unsigned_int>_u_0 *)(puVar29 + 0xd);
    pFVar27->UniformBuffer = pTVar13;
    *(undefined8 *)&pFVar27->field_0x58 = uVar14;
    uVar14 = puVar29[0xe];
    uVar16 = puVar29[0xf];
    (pFVar27->UniformParametersStruct).LocalFogVolumeCommon.LocalFogVolumeInstances = pFVar8;
    (pFVar27->UniformParametersStruct).LocalFogVolumeCommon.LocalFogVolumeTileDataTextureResolution.
    field0_0x0 = TVar15;
    (pFVar27->UniformParametersStruct).LocalFogVolumeCommon.LocalFogVolumeInstanceCount =
         (int)uVar14;
    (pFVar27->UniformParametersStruct).LocalFogVolumeCommon.LocalFogVolumeTilePixelSize =
         (int)((ulonglong)uVar14 >> 0x20);
    (pFVar27->UniformParametersStruct).LocalFogVolumeCommon.
    LocalFogVolumeMaxDensityIntoVolumetricFog = (float)(int)uVar16;
    (pFVar27->UniformParametersStruct).LocalFogVolumeCommon.
    ShouldRenderLocalFogVolumeInVolumetricFog = (int)((ulonglong)uVar16 >> 0x20);
    lVar30 = lVar30 + -1;
    puVar21 = puVar29 + 0x10;
  } while (lVar30 != 0);
  lVar30 = puVar29[0x11];
  uVar14 = puVar29[0x12];
  uVar16 = puVar29[0x13];
  *(undefined8 *)pFVar20 = puVar29[0x10];
  (pFVar27->UniformParametersStruct).LocalFogVolumeCommon._padding_ = lVar30;
  *(undefined8 *)
   &(pFVar27->UniformParametersStruct).LocalFogVolumeCommon.HalfResTextureSizeAndInvSize.field0_0x0
       = uVar14;
  *(undefined8 *)
   ((longlong)
    &(pFVar27->UniformParametersStruct).LocalFogVolumeCommon.HalfResTextureSizeAndInvSize.field0_0x0
   + 8) = uVar16;
  this->SceneRendererPrimaryViewId = -1;
  this->ViewLumenSceneData = (FLumenSceneData *)0x0;
  return;
}

// InitRHIResources @ 1454fb000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

void __thiscall FViewInfo::InitRHIResources(FViewInfo *this,uint param_1)

{
  TUniquePtr<FViewUniformShaderParameters,TDefaultDelete<FViewUniformShaderParameters>_> *pTVar1;
  FViewUniformShaderParameters *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  FViewUniformShaderParameters *pFVar7;
  undefined1 auStackY_c8 [32];
  longlong local_98 [2];
  TVector<double>_u_0 local_88;
  double local_70;
  double local_68;
  double local_60;
  undefined1 local_58;
  double local_50;
  double dStack_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_58 = 0;
  local_20 = 0;
  bVar5 = IsInRenderingThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                       ,0x8a7,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar1 = &this->CachedViewUniformShaderParameters;
  if (pTVar1->Ptr == (FViewUniformShaderParameters *)0x0) {
    pFVar7 = ::operator_new(0x17b0);
    if (pFVar7 == (FViewUniformShaderParameters *)0x0) {
      pFVar7 = (FViewUniformShaderParameters *)0x0;
    }
    else {
      pFVar7 = FViewUniformShaderParameters::FViewUniformShaderParameters(pFVar7);
    }
    if (pTVar1 != (TUniquePtr<FViewUniformShaderParameters,TDefaultDelete<FViewUniformShaderParameters>_>
                   *)local_98) {
      pFVar2 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar7;
      pFVar7 = (FViewUniformShaderParameters *)0x0;
      ::operator_delete(pFVar2,0x17b0);
    }
    ::operator_delete(pFVar7,0x17b0);
  }
  SetupUniformBufferParameters
            (this,(FViewMatrices *)&this->_padding_,&this->PrevViewInfo->ViewMatrices,
             (TBox<double> *)&local_88._s_0,2,pTVar1->Ptr);
  if (param_1 != 0) {
    pTVar1->Ptr->NumSceneColorMSAASamples = param_1;
  }
  CreateViewUniformBuffers(this,pTVar1->Ptr);
  iVar6 = GetTranslucencyLightingVolumeDim();
  dVar4 = __real_3ff0000000000000;
  this->TranslucencyLightingVolumeMin[0].field0_0x0._s_0.X = local_88._s_0.X;
  this->TranslucencyLightingVolumeMin[0].field0_0x0._s_0.Y = local_88._s_0.Y;
  this->TranslucencyLightingVolumeMin[0].field0_0x0._s_0.Z = local_88._s_0.Z;
  this->TranslucencyVolumeVoxelSize[0] =
       (float)((local_70 - local_88._s_0.X) * (dVar4 / (double)iVar6));
  this->TranslucencyLightingVolumeSize[0].field0_0x0._s_0.X = local_70 - local_88._s_0.X;
  this->TranslucencyLightingVolumeSize[0].field0_0x0._s_0.Y = local_68 - local_88._s_0.Y;
  this->TranslucencyLightingVolumeSize[0].field0_0x0._s_0.Z = local_60 - local_88._s_0.Z;
  this->TranslucencyLightingVolumeMin[1].field0_0x0._s_0.X = local_50;
  this->TranslucencyLightingVolumeMin[1].field0_0x0._s_0.Y = dStack_48;
  this->TranslucencyLightingVolumeMin[1].field0_0x0._s_0.Z = local_40;
  this->TranslucencyVolumeVoxelSize[1] = (float)((local_38 - local_50) * (dVar4 / (double)iVar6));
  this->TranslucencyLightingVolumeSize[1].field0_0x0._s_0.X = local_38 - local_50;
  this->TranslucencyLightingVolumeSize[1].field0_0x0._s_0.Y = local_30 - dStack_48;
  this->TranslucencyLightingVolumeSize[1].field0_0x0._s_0.Z = local_28 - local_40;
  return;
}

// RequiresDebugMaterials @ 145504770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

bool __thiscall FViewInfo::RequiresDebugMaterials(FViewInfo *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      bCanUseDebugMaterials = ShouldCompileODSCOnlyShaders();
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (((bCanUseDebugMaterials != false) && (this->_padding_ != 0)) &&
     ((*(uint *)(this->_padding_ + 0x5c) & 0x800000) != 0)) {
    return true;
  }
  return false;
}

// SetValidTonemappingLUT @ 145505210

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

void __thiscall FViewInfo::SetValidTonemappingLUT(FViewInfo *this)

{
  if (this->_padding_ != 0) {
    *(undefined1 *)(this->_padding_ + 0x1008) = 1;
  }
  return;
}

// SetupUniformBufferParameters @ 145506e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145509e90) */
/* WARNING: Removing unreachable block (ram,0x000145509ebf) */
/* WARNING: Removing unreachable block (ram,0x000145509ec0) */
/* WARNING: Removing unreachable block (ram,0x000145509f04) */
/* WARNING: Removing unreachable block (ram,0x000145509f37) */
/* WARNING: Removing unreachable block (ram,0x000145509f38) */
/* WARNING: Removing unreachable block (ram,0x000145509f58) */
/* WARNING: Removing unreachable block (ram,0x000145509f8e) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

void __thiscall
FViewInfo::SetupUniformBufferParameters
          (FViewInfo *this,FViewMatrices *param_1,FViewMatrices *param_2,TBox<double> *param_3,
          int param_4,FViewUniformShaderParameters *param_5)

{
  FAtmosphereSetup *this_00;
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  TAlignedElement<FLinearColor,16> *pTVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  uint uVar16;
  FSkyAtmosphereRenderSceneInfo *this_01;
  IPooledRenderTarget *pIVar17;
  FSceneViewState *pFVar18;
  FSkyLightSceneProxy *this_02;
  IXRTrackingSystem *pIVar19;
  UTexture2D *this_03;
  UVolumeTexture *pUVar20;
  code *pcVar21;
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  undefined1 auVar24 [12];
  undefined1 auVar25 [12];
  undefined1 auVar26 [12];
  undefined1 auVar27 [12];
  double dVar28;
  double dVar29;
  FLinearColor FVar30;
  TConsoleVariableData<float> *pTVar31;
  TConsoleVariableData<float> *pTVar32;
  void *pvVar33;
  TBox<double> *pTVar34;
  bool bVar35;
  char cVar36;
  bool bVar37;
  uint uVar38;
  int iVar39;
  TIntPoint<int>_u_0 TVar40;
  float *pfVar41;
  longlong lVar42;
  undefined8 *puVar43;
  TVector<double> *pTVar44;
  TVector2<float> TVar45;
  FEngineShowFlags *pFVar46;
  TRefCountPtr<FRHISamplerState> TVar47;
  FSceneCaptureCustomRenderPassUserData *pFVar48;
  FViewInfo *pFVar49;
  longlong lVar50;
  FRHITexture *pFVar51;
  TVector4<float> *pTVar52;
  TVector<float> *pTVar53;
  FLinearColor *pFVar54;
  FLinearColor_u_0 *pFVar55;
  longlong *plVar56;
  FTextureResource *pFVar57;
  FVirtualTextureSystem *this_04;
  FRHIShaderResourceView *pFVar58;
  longlong *plVar59;
  TIntPoint<int>_u_0 TVar60;
  undefined4 uVar61;
  uint uVar62;
  TIntPoint<int>_u_0 TVar63;
  double *pdVar64;
  ulonglong uVar65;
  TIntPoint<int>_u_0 *pTVar66;
  float (*pafVar67) [4];
  uint uVar68;
  TIntPoint<int>_u_0 TVar69;
  TReferenceControllerBase<1> *pTVar70;
  EPixelFormat *pEVar71;
  TIntPoint<int>_u_0 TVar72;
  byte bVar73;
  uint *puVar74;
  TStaticArray<UE::Math::TVector4<float>,2,4294967295> *pTVar75;
  uint uVar76;
  TIntPoint<int>_u_0 TVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  double dVar82;
  float fVar83;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  double dVar88;
  undefined1 auVar87 [16];
  undefined1 in_XMM2 [16];
  undefined8 uVar92;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  uint uVar93;
  uint uVar94;
  float fVar95;
  undefined1 auStackY_798 [32];
  byte local_758;
  undefined8 local_750;
  double *local_738;
  undefined8 local_730;
  float local_728;
  float fStack_724;
  float fStack_720;
  float fStack_71c;
  TIntPoint<int>_u_0 local_708;
  TIntPoint<int>_u_0 local_700;
  TIntPoint<int>_u_0 local_6f8;
  TIntPoint<int>_u_0 local_6f0;
  FRHIShaderResourceView *local_6e8;
  Type local_6e0;
  int local_6dc;
  FRHIShaderResourceView *local_6d8;
  TIntPoint<int>_u_0 local_6d0;
  undefined8 local_6c8;
  float fStack_6c0;
  float fStack_6bc;
  float fStack_6b8;
  float fStack_6b4;
  undefined1 local_6a8 [16];
  FViewInfo *local_698;
  TIntPoint<int> local_690;
  TIntPoint<int>_u_0 local_688;
  double local_680;
  double dStack_678;
  double local_670;
  TIntVector3<int>_u_0 local_668;
  int local_658 [2];
  TIntVector3<int>_u_0 local_650;
  undefined1 local_640;
  undefined2 local_63f;
  undefined1 local_63d;
  float local_63c;
  undefined4 local_638;
  undefined4 local_634;
  int local_630;
  undefined4 local_62c;
  undefined1 local_628;
  undefined1 local_624;
  undefined2 local_623;
  undefined1 local_621;
  float local_620;
  undefined4 local_61c;
  undefined4 local_618;
  int local_614;
  undefined4 local_610;
  undefined1 local_60c;
  undefined1 local_608;
  undefined2 local_607;
  undefined1 local_605;
  float local_604;
  undefined4 local_600;
  undefined8 local_5fc;
  undefined4 local_5f4;
  undefined1 local_5f0;
  undefined8 local_5ec;
  int local_5e4;
  int iStack_5e0;
  undefined4 local_5dc;
  undefined4 uStack_5d8;
  EPixelFormat *local_5d0;
  float local_5c8;
  float fStack_5c4;
  float fStack_5c0;
  float fStack_5bc;
  float fStack_5b8;
  float fStack_5b4;
  undefined8 local_5b0;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  FShadingEnergyConservationData local_598;
  FLinearColor_u_0 local_570;
  FFeedbackShaderParams local_560;
  undefined1 local_538 [8];
  int local_530;
  FRHIResource *local_528;
  FRHIResource *local_520;
  FRHIResource *local_518;
  FViewInfo *local_510;
  FViewInfo *local_508;
  TBox<double> *local_500;
  uint local_4f8;
  FRHIShaderResourceView *local_4e8;
  FRHIShaderResourceView *local_4e0;
  TVector<float>_u_0 local_4d8;
  float local_4c8;
  float fStack_4c4;
  float local_4c0;
  undefined8 local_4bc;
  float local_4b4;
  TVector4<float>_u_0 local_4a8;
  TIntRect<int>_u_0 local_498;
  TVector4<float>_u_0 local_488;
  undefined8 local_478;
  undefined8 uStack_470;
  float local_468;
  float local_464;
  TVector<double>_u_0 local_458;
  TVector2<float> local_440;
  undefined1 local_438 [16];
  TIntPoint<int>_u_0 local_428;
  TIntPoint<int>_u_0 local_420;
  double local_418;
  double local_410;
  double local_408;
  double local_400;
  double local_3f8;
  double local_3f0;
  double local_3e8;
  double local_3e0;
  double local_3d8;
  undefined1 local_3d0 [24];
  FLinearColor_u_0 local_3b8;
  undefined1 local_3a8 [8];
  TReferenceControllerBase<1> *local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  TIntVector3<int>_u_0 local_388;
  undefined8 local_378;
  int local_370;
  FRHITexture *local_368;
  TVector<float> local_358;
  undefined1 local_348 [16];
  double local_338;
  undefined1 local_330 [16];
  double local_320;
  undefined1 local_318 [16];
  double local_308;
  undefined1 local_300 [16];
  double local_2f0;
  TSHVectorRGB<3> local_2e8;
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  TVector4<float> local_218;
  FLinearColor local_208;
  TVector4<float> local_1f8;
  undefined1 local_1e8 [16];
  TVector<double> local_1d8;
  TVector<double> local_1c0;
  FEngineShowFlags local_1a8;
  FEngineShowFlags local_168;
  TMatrix<float> local_128;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_798;
  TVar77 = (TIntPoint<int>_u_0)0x0;
  uVar68 = 0;
  uVar62 = 0;
  local_6a8._8_8_ = param_1;
  local_698 = this;
  local_500 = param_3;
  if ((this->_padding_ == 0) &&
     (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                         ("Family",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                          ,0x515,L""), bVar35)) {
    pcVar21 = (code *)swi(3);
    (*pcVar21)();
    return;
  }
  lVar42 = this->_padding_;
  if (*(char *)(lVar42 + 200) == '\0') {
    pTVar66 = &FSceneTexturesConfig::GlobalInstance.Extent.field0_0x0;
    puVar74 = &FSceneTexturesConfig::GlobalInstance.NumSamples;
    pEVar71 = &FSceneTexturesConfig::GlobalInstance.ColorFormat;
  }
  else {
    pTVar66 = (TIntPoint<int>_u_0 *)(lVar42 + 0x1c8);
    puVar74 = (uint *)(lVar42 + 0x1d4);
    pEVar71 = (EPixelFormat *)(lVar42 + 0x1dc);
  }
  if (*(char *)((longlong)&this->_padding_ + 5) == '\0') {
    local_498._s_0.Min.field0_0x0 = (TIntPoint<int>)(this->ViewRect).field0_0x0._s_0.Min.field0_0x0;
    local_498._s_0.Max.field0_0x0 = (TIntPoint<int>)(this->ViewRect).field0_0x0._s_0.Max.field0_0x0;
    local_428 = (TIntPoint<int>_u_0)local_498._s_0.Min.field0_0x0;
    local_420 = (TIntPoint<int>_u_0)local_498._s_0.Max.field0_0x0;
  }
  else {
    local_5e4 = *(int *)((longlong)&(this->ViewRect).field0_0x0 + 8) -
                *(int *)&(this->ViewRect).field0_0x0;
    iStack_5e0 = *(int *)((longlong)&(this->ViewRect).field0_0x0 + 0xc) -
                 *(int *)((longlong)&(this->ViewRect).field0_0x0 + 4);
    local_498._12_4_ = iStack_5e0;
    local_498._8_4_ = local_5e4;
    local_5ec = 0;
    local_498._0_8_ = TVar77;
  }
  iVar39 = (pTVar66->_s_0).X;
  local_690.field0_0x0._s_0.X = 1;
  if (1 < iVar39) {
    local_690.field0_0x0._s_0.X = iVar39;
  }
  local_690.field0_0x0._s_0.Y = (pTVar66->_s_0).Y;
  uVar61 = 1;
  if (1 < local_690.field0_0x0._s_0.Y) {
    uVar61 = local_690.field0_0x0._s_0.Y;
  }
  local_690.field0_0x0._s_0.Y = uVar61;
  local_5d0 = pEVar71;
  FSceneView::SetupCommonViewUniformBufferParameters
            ((FSceneView *)this,param_5,&local_690,*puVar74,(TIntRect<int> *)&local_498._s_0,
             (FViewMatrices *)local_6a8._8_8_,param_2);
  bVar35 = IsSubsurfaceCheckerboardFormat(*pEVar71,this);
  fVar81 = __real_3f800000;
  fVar95 = 0.0;
  fVar80 = __real_3f800000;
  if (!bVar35) {
    fVar80 = 0.0;
  }
  param_5->bCheckerboardSubsurfaceProfileRendering = fVar80;
  param_5->IndirectLightingCacheShowFlag = (float)(*(uint *)(this->_padding_ + 0x50) >> 10 & 1);
  plVar59 = *(longlong **)(this->_padding_ + 0x40);
  TVar40 = TVar77;
  if (plVar59 != (longlong *)0x0) {
    TVar40 = (TIntPoint<int>_u_0)(**(code **)(*plVar59 + 0x420))();
  }
  dVar15 = __real_3ff0000000000000;
  uVar93 = (uint)__xmm_80000000000000008000000000000000;
  uVar94 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_670 = __real_3ff0000000000000;
  local_680 = 0.0;
  dStack_678 = 0.0;
  uVar76 = 0;
  if (TVar40 == (TIntPoint<int>_u_0)0x0) {
    local_6e0 = GMaxRHIFeatureLevel;
  }
  else {
    local_6e0 = *(Type *)((longlong)TVar40 + 8);
    if (*(longlong *)((longlong)TVar40 + 0x2c60) == 0) {
      (param_5->DirectionalLightColor).field0_0x0._s_0 =
           (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
      *(undefined8 *)&(param_5->DirectionalLightDirection).field0_0x0 =
           UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      (param_5->DirectionalLightDirection).field0_0x0._s_0.Z =
           UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    }
    else {
      plVar59 = *(longlong **)(*(longlong *)((longlong)TVar40 + 0x2c60) + 0x28);
      pfVar41 = (float *)(**(code **)(*plVar59 + 0x128))(plVar59,local_1e8);
      fVar7 = __real_3ea2f983;
      lVar42 = *(longlong *)(*(longlong *)((longlong)TVar40 + 0x2c60) + 0x28);
      fVar80 = *(float *)(lVar42 + 0x48);
      fVar78 = pfVar41[2];
      fVar79 = *(float *)(lVar42 + 0x4c);
      fVar6 = pfVar41[3];
      fVar83 = *(float *)(lVar42 + 0x44) * pfVar41[1] * __real_3ea2f983;
      (param_5->DirectionalLightColor).field0_0x0._s_0.R =
           *pfVar41 * *(float *)(lVar42 + 0x40) * __real_3ea2f983;
      (param_5->DirectionalLightColor).field0_0x0._s_0.G = fVar83;
      (param_5->DirectionalLightColor).field0_0x0._s_0.B = fVar80 * fVar78 * fVar7;
      (param_5->DirectionalLightColor).field0_0x0._s_0.A = fVar79 * fVar6 * fVar7;
      uVar16 = __xmm_80000000800000008000000080000000;
      in_XMM2 = ZEXT416(__xmm_80000000800000008000000080000000);
      lVar42 = *(longlong *)(*(longlong *)((longlong)TVar40 + 0x2c60) + 0x28);
      dVar8 = *(double *)(lVar42 + 0x90);
      fVar80 = (float)((uint)(float)*(double *)(lVar42 + 0x70) ^
                      __xmm_80000000800000008000000080000000);
      (param_5->DirectionalLightDirection).field0_0x0._s_0.X =
           (float)((uint)(float)*(double *)(lVar42 + 0x50) ^ __xmm_80000000800000008000000080000000)
      ;
      (param_5->DirectionalLightDirection).field0_0x0._s_0.Y = fVar80;
      (param_5->DirectionalLightDirection).field0_0x0._s_0.Z = (float)((uint)(float)dVar8 ^ uVar16);
    }
    iVar39 = (int)this->_padding_;
    pFVar49 = this;
    if ((iVar39 != 0) && (iVar39 == 2)) {
      pFVar49 = GetPrimaryView(this);
    }
    uVar92 = in_XMM2._8_8_;
    uVar16 = (pFVar49->RayTracingSceneViewHandle).Index;
    if (uVar16 == 0xffffffff) {
      uStack_5a4 = 0;
      uStack_5a0 = 0;
      local_5b0 = 0;
      uStack_5a8 = 0;
      local_5b0._0_4_ = 0.0;
      local_5b0._4_4_ = 0.0;
      fStack_6c0 = 0.0;
      fStack_6bc = 0.0;
      uStack_59c = 0;
      fStack_6b8 = 0.0;
      fStack_6b4 = 0.0;
      local_4c8 = (float)local_5b0;
      fStack_4c4 = local_5b0._4_4_;
    }
    else {
      uVar38 = uVar76;
      if ((int)uVar16 < *(int *)((longlong)TVar40 + 0x3980)) {
        uVar38 = ~uVar16 >> 0x1f;
      }
      if (uVar38 == 0) {
        bVar35 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        uVar92 = in_XMM2._8_8_;
        if (bVar35) {
          pcVar21 = (code *)swi(3);
          (*pcVar21)();
          return;
        }
      }
      local_348 = *(undefined1 (*) [16])
                   (*(longlong *)((longlong)TVar40 + 0x3978) + (longlong)(int)uVar16 * 0x20 + 8);
      local_338 = *(double *)
                   (*(longlong *)((longlong)TVar40 + 0x3978) + (longlong)(int)uVar16 * 0x20 + 0x18);
      fStack_6c0 = (float)local_338;
      auVar22._4_8_ = uVar92;
      auVar22._0_4_ = local_348._4_4_;
      auVar90._0_8_ = auVar22._0_8_ << 0x20;
      auVar90._8_4_ = local_348._8_4_;
      auVar90._12_4_ = local_348._12_4_;
      local_5c8 = (float)local_348._0_8_;
      fStack_5c4 = (float)auVar90._8_8_;
      fStack_6bc = (float)(local_348._0_8_ - (double)local_5c8);
      fStack_5b4 = (float)(local_338 - (double)fStack_6c0);
      fStack_5b8 = (float)(auVar90._8_8_ - (double)fStack_5c4);
      local_4c8 = local_5c8;
      fStack_4c4 = fStack_5c4;
      fStack_5c0 = fStack_6c0;
      fStack_5bc = fStack_6bc;
      fStack_6b8 = fStack_5b8;
      fStack_6b4 = fStack_5b4;
    }
    auVar84._4_4_ = fStack_4c4;
    auVar84._0_4_ = fStack_4c4;
    auVar84._8_4_ = fStack_4c4;
    auVar84._12_4_ = fStack_4c4;
    (param_5->TLASPreViewTranslationHigh).field0_0x0._s_0.X = local_4c8;
    (param_5->TLASPreViewTranslationHigh).field0_0x0._s_0.Y = fStack_4c4;
    local_6c8._4_4_ = fStack_4c4;
    local_6c8._0_4_ = local_4c8;
    local_4bc = CONCAT44(fStack_6b8,fStack_6bc);
    *(undefined8 *)&(param_5->TLASPreViewTranslationLow).field0_0x0 = local_4bc;
    (param_5->TLASPreViewTranslationLow).field0_0x0._s_0.Z = fStack_6b4;
    (param_5->TLASPreViewTranslationHigh).field0_0x0._s_0.Z = fStack_6c0;
    lVar42 = *(longlong *)((longlong)TVar40 + 0x2c80);
    fVar80 = __real_3b9bd869;
    local_4c0 = fStack_6c0;
    local_4b4 = fStack_6b4;
    if (lVar42 != 0) {
      fVar80 = (float)(**(code **)(**(longlong **)(lVar42 + 0x28) + 0x148))();
    }
    fVar80 = cosf(fVar80);
    uVar92 = auVar84._8_8_;
    (param_5->AtmosphereLightDiscCosHalfApexAngle_PPTrans).Elements[0].field0_0x0._s_0.X = fVar80;
    *(undefined8 *)
     ((longlong)&(param_5->AtmosphereLightDiscCosHalfApexAngle_PPTrans).Elements[0].field0_0x0 + 4)
         = 0;
    (param_5->AtmosphereLightDiscCosHalfApexAngle_PPTrans).Elements[0].field0_0x0._s_0.W = 0.0;
    if (lVar42 == 0) {
      puVar43 = (undefined8 *)(local_3d0 + 8);
      local_3d0._8_16_ = (undefined1  [16])FLinearColor::Black.field0_0x0;
    }
    else {
      puVar43 = (undefined8 *)
                (**(code **)(**(longlong **)(lVar42 + 0x28) + 0x118))
                          (*(longlong **)(lVar42 + 0x28),local_258);
      uVar92 = auVar84._8_8_;
    }
    uVar9 = puVar43[1];
    *(undefined8 *)(param_5->AtmosphereLightDiscLuminance).Elements = *puVar43;
    *(undefined8 *)&(param_5->AtmosphereLightDiscLuminance).Elements[0].field_0x8 = uVar9;
    if (lVar42 == 0) {
      pFVar54 = &FLinearColor::Black;
    }
    else {
      pFVar54 = (FLinearColor *)(*(longlong *)(lVar42 + 0x28) + 0x40);
    }
    uVar9 = *(undefined8 *)((longlong)&pFVar54->field0_0x0 + 8);
    *(undefined8 *)(param_5->AtmosphereLightIlluminanceOnGroundPostTransmittance).Elements =
         *(undefined8 *)&pFVar54->field0_0x0;
    *(undefined8 *)
     &(param_5->AtmosphereLightIlluminanceOnGroundPostTransmittance).Elements[0].field_0x8 = uVar9;
    *(undefined4 *)
     &(param_5->AtmosphereLightIlluminanceOnGroundPostTransmittance).Elements[0].field_0xc = 0;
    uVar9 = *(undefined8 *)
             &(param_5->AtmosphereLightIlluminanceOnGroundPostTransmittance).Elements[0].field_0x8;
    *(undefined8 *)(param_5->AtmosphereLightIlluminanceOuterSpace).Elements =
         *(undefined8 *)(param_5->AtmosphereLightIlluminanceOnGroundPostTransmittance).Elements;
    *(undefined8 *)&(param_5->AtmosphereLightIlluminanceOuterSpace).Elements[0].field_0x8 = uVar9;
    *(undefined4 *)&(param_5->AtmosphereLightIlluminanceOuterSpace).Elements[0].field_0xc = 0;
    if (lVar42 == 0) {
      local_330._8_8_ = dStack_678;
      local_330._0_8_ = local_680;
      auVar23._4_8_ = uVar92;
      auVar23._0_4_ = (int)((ulonglong)local_680 >> 0x20);
      auVar85._0_8_ = auVar23._0_8_ << 0x20;
      auVar85._8_4_ = SUB84(dStack_678,0);
      auVar85._12_4_ = (int)((ulonglong)dStack_678 >> 0x20);
      local_320 = local_670;
      dVar88 = auVar85._8_8_;
      dVar8 = local_670;
      dVar82 = local_680;
    }
    else {
      lVar42 = *(longlong *)(lVar42 + 0x28);
      local_408 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)(lVar42 + 0x90) >> 0x20) ^
                                   uVar94,(uint)*(undefined8 *)(lVar42 + 0x90) ^ uVar93);
      dVar88 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)(lVar42 + 0x70) >> 0x20) ^ uVar94,
                                (uint)*(undefined8 *)(lVar42 + 0x70) ^ uVar93);
      local_418 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)(lVar42 + 0x50) >> 0x20) ^
                                   uVar94,(uint)*(undefined8 *)(lVar42 + 0x50) ^ uVar93);
      dVar8 = local_408;
      dVar82 = local_418;
      local_410 = dVar88;
    }
    (param_5->AtmosphereLightDirection).Elements[0].field0_0x0._s_0.X = (float)dVar82;
    (param_5->AtmosphereLightDirection).Elements[0].field0_0x0._s_0.Y = (float)dVar88;
    (param_5->AtmosphereLightDirection).Elements[0].field0_0x0._s_0.Z = (float)dVar8;
    (param_5->AtmosphereLightDirection).Elements[0].field0_0x0._s_0.W = 1.0;
    *(undefined8 *)&(param_5->AtmosphereLightDiscCosHalfApexAngle_PPTrans).Elements[1].field0_0x0 =
         0x3f800000;
    *(undefined8 *)
     ((longlong)&(param_5->AtmosphereLightDiscCosHalfApexAngle_PPTrans).Elements[1].field0_0x0 + 8)
         = 0;
    ((FLinearColor_u_0 *)((param_5->AtmosphereLightDiscLuminance).Elements + 1))->_s_0 =
         (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
    ((FLinearColor_u_0 *)
    ((param_5->AtmosphereLightIlluminanceOnGroundPostTransmittance).Elements + 1))->_s_0 =
         (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
    *(undefined4 *)
     &(param_5->AtmosphereLightIlluminanceOnGroundPostTransmittance).Elements[1].field_0xc = 0;
    ((FLinearColor_u_0 *)((param_5->AtmosphereLightIlluminanceOuterSpace).Elements + 1))->_s_0 =
         (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
    (param_5->AtmosphereLightDirection).Elements[1].field0_0x0._s_0.X = (float)dStack_678;
    (param_5->AtmosphereLightDirection).Elements[1].field0_0x0._s_0.Y = (float)dStack_678;
    (param_5->AtmosphereLightDirection).Elements[1].field0_0x0._s_0.Z = (float)local_670;
    (param_5->AtmosphereLightDirection).Elements[1].field0_0x0._s_0.W = 1.0;
  }
  local_5dc = 0x3f800000;
  uStack_5d8 = 0x3f800000;
  (param_5->BufferToSceneTextureScale).field0_0x0 = (TVector2<float>_u_0)0x3f8000003f800000;
  local_688 = (TIntPoint<int>_u_0)0x0;
  local_708 = (TIntPoint<int>_u_0)0x0;
  local_6e8 = (FRHIShaderResourceView *)0x0;
  local_6d8 = (FRHIShaderResourceView *)0x0;
  bVar35 = ShouldRenderSkyAtmosphere((FScene *)TVar40,(FEngineShowFlags *)(this->_padding_ + 0x48));
  if (bVar35) {
    param_5->SkyAtmospherePresentInScene = 1.0;
    this_01 = *(FSkyAtmosphereRenderSceneInfo **)((longlong)TVar40 + 0x4708);
    local_6d0 = (TIntPoint<int>_u_0)this_01->SkyAtmosphereSceneProxy;
    pIVar17 = (this_01->TransmittanceLutTexture).Reference;
    if (pIVar17 != (IPooledRenderTarget *)0x0) {
      local_688 = (TIntPoint<int>_u_0)(pIVar17->RenderTargetItem).TargetableTexture.Reference;
    }
    local_6e8 = FSkyAtmosphereRenderSceneInfo::GetDistantSkyLightLutBufferSRV(this_01);
    local_6d8 = FSkyAtmosphereRenderSceneInfo::GetMobileDistantSkyLightLutBufferSRV(this_01);
    pIVar17 = (this->SkyAtmosphereCameraAerialPerspectiveVolume).Reference;
    local_700 = TVar77;
    if (pIVar17 != (IPooledRenderTarget *)0x0) {
      local_700 = (TIntPoint<int>_u_0)(pIVar17->RenderTargetItem).TargetableTexture.Reference;
    }
    pIVar17 = (this->SkyAtmosphereCameraAerialPerspectiveVolumeMieOnly).Reference;
    local_6f8 = TVar77;
    if (pIVar17 != (IPooledRenderTarget *)0x0) {
      local_6f8 = (TIntPoint<int>_u_0)(pIVar17->RenderTargetItem).TargetableTexture.Reference;
    }
    pIVar17 = (this->SkyAtmosphereCameraAerialPerspectiveVolumeRayOnly).Reference;
    local_6f0 = TVar77;
    if (pIVar17 != (IPooledRenderTarget *)0x0) {
      local_6f0 = (TIntPoint<int>_u_0)(pIVar17->RenderTargetItem).TargetableTexture.Reference;
    }
    pIVar17 = (this->SkyAtmosphereViewLutTexture).Reference;
    TVar60 = TVar77;
    fVar80 = fVar81;
    fVar78 = fVar81;
    if (pIVar17 != (IPooledRenderTarget *)0x0) {
      TVar60 = (TIntPoint<int>_u_0)(pIVar17->RenderTargetItem).TargetableTexture.Reference;
      lVar42 = (**(code **)(pIVar17->_padding_ + 0x10))();
      iVar39 = *(int *)(lVar42 + 0x2c);
      lVar42 = (**(code **)(((this->SkyAtmosphereViewLutTexture).Reference)->_padding_ + 0x10))();
      fVar80 = (float)*(int *)(lVar42 + 0x30);
      fVar78 = (float)iVar39;
    }
    TVar69 = local_6d0;
    (param_5->SkyViewLutSizeAndInvSize).field0_0x0._s_0.X = fVar78;
    (param_5->SkyViewLutSizeAndInvSize).field0_0x0._s_0.Y = fVar80;
    this_00 = (FAtmosphereSetup *)((longlong)local_6d0 + 0x10);
    (param_5->SkyViewLutSizeAndInvSize).field0_0x0._s_0.Z = fVar81 / fVar78;
    (param_5->SkyViewLutSizeAndInvSize).field0_0x0._s_0.W = fVar81 / fVar80;
    local_488._8_8_ = _UNK_150689648;
    local_488._0_8_ = ___xmm_3f800000000000000000000000000000;
    param_5->SkyAtmosphereBottomRadiusKm = *(float *)((longlong)local_6d0 + 0x28);
    param_5->SkyAtmosphereTopRadiusKm = *(float *)((longlong)local_6d0 + 0x2c);
    local_708 = TVar60;
    SetupSkyAtmosphereViewSharedUniformShaderParameters
              (this,(FSkyAtmosphereSceneProxy *)local_6d0,
               (FSkyAtmosphereViewSharedUniformShaderParameters *)&local_488._s_0);
    *(undefined8 *)&(param_5->SkyAtmosphereCameraAerialPerspectiveVolumeSizeAndInvSize).field0_0x0 =
         local_488._0_8_;
    *(undefined8 *)
     ((longlong)&(param_5->SkyAtmosphereCameraAerialPerspectiveVolumeSizeAndInvSize).field0_0x0 + 8)
         = local_488._8_8_;
    local_758 = 0;
    param_5->SkyAtmosphereAerialPerspectiveStartDepthKm = (float)(undefined4)local_478;
    param_5->SkyAtmosphereCameraAerialPerspectiveVolumeDepthResolution = (float)local_478._4_4_;
    param_5->SkyAtmosphereCameraAerialPerspectiveVolumeDepthResolutionInv =
         (float)(undefined4)uStack_470;
    param_5->SkyAtmosphereCameraAerialPerspectiveVolumeDepthSliceLengthKm = (float)uStack_470._4_4_;
    param_5->SkyAtmosphereCameraAerialPerspectiveVolumeDepthSliceLengthKmInv = local_468;
    param_5->SkyAtmosphereApplyCameraAerialPerspectiveVolume = local_464;
    lVar42 = *(longlong *)((longlong)TVar69 + 200);
    *(longlong *)&(param_5->SkyAtmosphereSkyLuminanceFactor).field0_0x0 =
         *(longlong *)((longlong)TVar69 + 0xc0);
    *(longlong *)((longlong)&(param_5->SkyAtmosphereSkyLuminanceFactor).field0_0x0 + 8) = lVar42;
    param_5->SkyAtmosphereHeightFogContribution = *(float *)((longlong)TVar69 + 0xe4);
    do {
      uVar65 = (ulonglong)local_758;
      lVar42 = *(longlong *)((longlong)TVar40 + 0x2c80 + uVar65 * 8);
      if (lVar42 == 0) {
        *(undefined8 *)
         &(param_5->AtmosphereLightDiscCosHalfApexAngle_PPTrans).Elements[uVar65].field0_0x0 =
             0x3f800000;
        *(undefined8 *)
         ((longlong)
          &(param_5->AtmosphereLightDiscCosHalfApexAngle_PPTrans).Elements[uVar65].field0_0x0 + 8) =
             0;
        ((FLinearColor_u_0 *)((param_5->AtmosphereLightDiscLuminance).Elements + uVar65))->_s_0 =
             (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
        FVar30 = FLinearColor::Black;
        ((FLinearColor_u_0 *)
        ((param_5->AtmosphereLightIlluminanceOnGroundPostTransmittance).Elements + uVar65))->_s_0 =
             (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
        *(undefined4 *)
         &(param_5->AtmosphereLightIlluminanceOnGroundPostTransmittance).Elements[uVar65].field_0xc
             = 0;
        ((FLinearColor_u_0 *)((param_5->AtmosphereLightIlluminanceOuterSpace).Elements + uVar65))->
        _s_0 = (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
        if (((local_758 == 0) && (*(longlong *)((longlong)TVar40 + 0x2c60) != 0)) &&
           (lVar42 = *(longlong *)(*(longlong *)((longlong)TVar40 + 0x2c60) + 0x28), lVar42 != 0)) {
          local_3f0 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)(lVar42 + 0x90) >> 0x20) ^
                                       uVar94,(uint)*(undefined8 *)(lVar42 + 0x90) ^ uVar93);
          dVar88 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)(lVar42 + 0x70) >> 0x20) ^
                                    uVar94,(uint)*(undefined8 *)(lVar42 + 0x70) ^ uVar93);
          local_400 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)(lVar42 + 0x50) >> 0x20) ^
                                       uVar94,(uint)*(undefined8 *)(lVar42 + 0x50) ^ uVar93);
          dVar8 = local_3f0;
          dVar82 = local_400;
          local_3f8 = dVar88;
        }
        else {
          local_318._8_8_ = dStack_678;
          local_318._0_8_ = local_680;
          auVar24._4_8_ = FVar30.field0_0x0._8_8_;
          auVar24._0_4_ = (int)((ulonglong)local_680 >> 0x20);
          auVar86._0_8_ = auVar24._0_8_ << 0x20;
          auVar86._8_4_ = SUB84(dStack_678,0);
          auVar86._12_4_ = (int)((ulonglong)dStack_678 >> 0x20);
          local_308 = local_670;
          dVar88 = auVar86._8_8_;
          dVar8 = local_670;
          dVar82 = local_680;
        }
        (param_5->AtmosphereLightDirection).Elements[uVar65].field0_0x0._s_0.X = (float)dVar82;
        (param_5->AtmosphereLightDirection).Elements[uVar65].field0_0x0._s_0.Y = (float)dVar88;
        (param_5->AtmosphereLightDirection).Elements[uVar65].field0_0x0._s_0.Z = (float)dVar8;
        (param_5->AtmosphereLightDirection).Elements[uVar65].field0_0x0._s_0.W = 1.0;
      }
      else {
        cVar36 = (**(code **)(**(longlong **)(lVar42 + 0x28) + 0x1a8))();
        fVar80 = fVar81;
        if (cVar36 == '\0') {
          fVar80 = 0.0;
        }
        fVar78 = (float)(**(code **)(**(longlong **)(lVar42 + 0x28) + 0x148))();
        fVar78 = cosf(fVar78);
        (param_5->AtmosphereLightDiscCosHalfApexAngle_PPTrans).Elements[uVar65].field0_0x0._s_0.X =
             fVar78;
        (param_5->AtmosphereLightDiscCosHalfApexAngle_PPTrans).Elements[uVar65].field0_0x0._s_0.Y =
             fVar80;
        *(undefined8 *)
         ((longlong)
          &(param_5->AtmosphereLightDiscCosHalfApexAngle_PPTrans).Elements[uVar65].field0_0x0 + 8) =
             0;
        puVar43 = (undefined8 *)
                  (**(code **)(**(longlong **)(lVar42 + 0x28) + 0x118))
                            (*(longlong **)(lVar42 + 0x28),local_248);
        uVar92 = puVar43[1];
        pTVar5 = (param_5->AtmosphereLightDiscLuminance).Elements + uVar65;
        *(undefined8 *)pTVar5 = *puVar43;
        *(undefined8 *)&pTVar5->field_0x8 = uVar92;
        puVar43 = (undefined8 *)
                  (**(code **)(**(longlong **)(lVar42 + 0x28) + 0x130))
                            (*(longlong **)(lVar42 + 0x28),local_238);
        uVar92 = puVar43[1];
        pTVar5 = (param_5->AtmosphereLightIlluminanceOnGroundPostTransmittance).Elements + uVar65;
        *(undefined8 *)pTVar5 = *puVar43;
        *(undefined8 *)&pTVar5->field_0x8 = uVar92;
        *(undefined4 *)
         &(param_5->AtmosphereLightIlluminanceOnGroundPostTransmittance).Elements[uVar65].field_0xc
             = 0x3f800000;
        puVar43 = (undefined8 *)
                  (**(code **)(**(longlong **)(lVar42 + 0x28) + 0x120))
                            (*(longlong **)(lVar42 + 0x28),local_228);
        uVar92 = puVar43[1];
        pTVar5 = (param_5->AtmosphereLightIlluminanceOuterSpace).Elements + uVar65;
        *(undefined8 *)pTVar5 = *puVar43;
        *(undefined8 *)&pTVar5->field_0x8 = uVar92;
        *(undefined4 *)&(param_5->AtmosphereLightIlluminanceOuterSpace).Elements[uVar65].field_0xc =
             0x3f800000;
        lVar42 = *(longlong *)(lVar42 + 0x28);
        local_458._s_0.Z =
             (double)CONCAT44((uint)((ulonglong)*(undefined8 *)(lVar42 + 0x90) >> 0x20) ^ uVar94,
                              (uint)*(undefined8 *)(lVar42 + 0x90) ^ uVar93);
        local_458._s_0.Y =
             (double)CONCAT44((uint)((ulonglong)*(undefined8 *)(lVar42 + 0x70) >> 0x20) ^ uVar94,
                              (uint)*(undefined8 *)(lVar42 + 0x70) ^ uVar93);
        local_458._s_0.X =
             (double)CONCAT44((uint)((ulonglong)*(undefined8 *)(lVar42 + 0x50) >> 0x20) ^ uVar94,
                              (uint)*(undefined8 *)(lVar42 + 0x50) ^ uVar93);
        pTVar44 = FSkyAtmosphereSceneProxy::GetAtmosphereLightDirection
                            ((FSkyAtmosphereSceneProxy *)TVar69,&local_1d8,(uint)local_758,
                             (TVector<double> *)&local_458._s_0);
        dVar8 = (pTVar44->field0_0x0)._s_0.Y;
        dVar82 = (pTVar44->field0_0x0)._s_0.Z;
        (param_5->AtmosphereLightDirection).Elements[uVar65].field0_0x0._s_0.X =
             (float)(pTVar44->field0_0x0)._s_0.X;
        (param_5->AtmosphereLightDirection).Elements[uVar65].field0_0x0._s_0.Y = (float)dVar8;
        (param_5->AtmosphereLightDirection).Elements[uVar65].field0_0x0._s_0.Z = (float)dVar82;
        (param_5->AtmosphereLightDirection).Elements[uVar65].field0_0x0._s_0.W = 1.0;
      }
      local_758 = local_758 + 1;
    } while (local_758 < 2);
    local_4a8._0_8_ = ___xmm_3f800000000000000000000000000000;
    local_4a8._8_8_ = _UNK_150689648;
    FAtmosphereSetup::ComputeViewData
              (this_00,(TVector<double> *)(local_6a8._8_8_ + 0x818),
               (TVector<double> *)(local_6a8._8_8_ + 0x800),&param_5->ViewForward,
               &param_5->ViewRight,(TVector<float> *)&local_4d8._s_0,
               (TVector4<float> *)&local_4a8._s_0,&local_128);
    *(undefined8 *)&(param_5->SkyCameraTranslatedWorldOrigin).field0_0x0 = local_4d8._0_8_;
    (param_5->SkyCameraTranslatedWorldOrigin).field0_0x0._s_0.Z = local_4d8._s_0.Z;
    *(undefined8 *)&(param_5->SkyPlanetTranslatedWorldCenterAndViewHeight).field0_0x0 =
         local_4a8._0_8_;
    *(undefined8 *)
     ((longlong)&(param_5->SkyPlanetTranslatedWorldCenterAndViewHeight).field0_0x0 + 8) =
         local_4a8._8_8_;
    *(undefined8 *)(param_5->SkyViewLutReferential).M[0] = local_128.M[0]._0_8_;
    *(undefined8 *)((param_5->SkyViewLutReferential).M[0] + 2) = local_128.M[0]._8_8_;
    *(undefined8 *)(param_5->SkyViewLutReferential).M[1] = local_128.M[1]._0_8_;
    *(undefined8 *)((param_5->SkyViewLutReferential).M[1] + 2) = local_128.M[1]._8_8_;
    *(undefined8 *)(param_5->SkyViewLutReferential).M[2] = local_128.M[2]._0_8_;
    *(undefined8 *)((param_5->SkyViewLutReferential).M[2] + 2) = local_128.M[2]._8_8_;
    *(undefined8 *)(param_5->SkyViewLutReferential).M[3] = local_128.M[3]._0_8_;
    *(undefined8 *)((param_5->SkyViewLutReferential).M[3] + 2) = local_128.M[3]._8_8_;
    TVar69 = local_700;
    TVar63 = local_6f0;
    TVar72 = local_6f8;
    TVar60 = local_688;
    this = local_698;
    if (local_688 == (TIntPoint<int>_u_0)0x0) goto LAB_145507ea6;
  }
  else {
    param_5->SkyAtmospherePresentInScene = 0.0;
    param_5->SkyAtmosphereHeightFogContribution = 0.0;
    (param_5->SkyViewLutSizeAndInvSize).field0_0x0._s_0.X = 1.0;
    (param_5->SkyViewLutSizeAndInvSize).field0_0x0._s_0.Y = 1.0;
    (param_5->SkyViewLutSizeAndInvSize).field0_0x0._s_0.Z = 1.0;
    (param_5->SkyViewLutSizeAndInvSize).field0_0x0._s_0.W = 1.0;
    param_5->SkyAtmosphereBottomRadiusKm = 1.0;
    param_5->SkyAtmosphereTopRadiusKm = 1.0;
    (param_5->SkyAtmosphereSkyLuminanceFactor).field0_0x0._s_0 =
         (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
    (param_5->SkyAtmosphereCameraAerialPerspectiveVolumeSizeAndInvSize).field0_0x0._s_0.X = 1.0;
    (param_5->SkyAtmosphereCameraAerialPerspectiveVolumeSizeAndInvSize).field0_0x0._s_0.Y = 1.0;
    (param_5->SkyAtmosphereCameraAerialPerspectiveVolumeSizeAndInvSize).field0_0x0._s_0.Z = 1.0;
    (param_5->SkyAtmosphereCameraAerialPerspectiveVolumeSizeAndInvSize).field0_0x0._s_0.W = 1.0;
    fVar80 = (param_5->TranslatedWorldCameraOrigin).field0_0x0._s_0.Z;
    *(undefined8 *)&(param_5->SkyCameraTranslatedWorldOrigin).field0_0x0 =
         *(undefined8 *)&(param_5->TranslatedWorldCameraOrigin).field0_0x0;
    (param_5->SkyCameraTranslatedWorldOrigin).field0_0x0._s_0.Z = fVar80;
    param_5->SkyAtmosphereAerialPerspectiveStartDepthKm = 1.0;
    param_5->SkyAtmosphereCameraAerialPerspectiveVolumeDepthResolution = 1.0;
    param_5->SkyAtmosphereCameraAerialPerspectiveVolumeDepthResolutionInv = 1.0;
    param_5->SkyAtmosphereCameraAerialPerspectiveVolumeDepthSliceLengthKm = 1.0;
    param_5->SkyAtmosphereCameraAerialPerspectiveVolumeDepthSliceLengthKmInv = 1.0;
    param_5->SkyAtmosphereApplyCameraAerialPerspectiveVolume = 0.0;
    *(undefined8 *)&(param_5->SkyPlanetTranslatedWorldCenterAndViewHeight).field0_0x0 = 0;
    *(undefined8 *)
     ((longlong)&(param_5->SkyPlanetTranslatedWorldCenterAndViewHeight).field0_0x0 + 8) = 0;
    uVar92 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
    *(undefined8 *)(param_5->SkyViewLutReferential).M[0] =
         UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
    *(undefined8 *)((param_5->SkyViewLutReferential).M[0] + 2) = uVar92;
    uVar92 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
    *(undefined8 *)(param_5->SkyViewLutReferential).M[1] =
         UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
    *(undefined8 *)((param_5->SkyViewLutReferential).M[1] + 2) = uVar92;
    uVar92 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
    *(undefined8 *)(param_5->SkyViewLutReferential).M[2] =
         UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
    *(undefined8 *)((param_5->SkyViewLutReferential).M[2] + 2) = uVar92;
    uVar92 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
    *(undefined8 *)(param_5->SkyViewLutReferential).M[3] =
         UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
    *(undefined8 *)((param_5->SkyViewLutReferential).M[3] + 2) = uVar92;
    if (TVar40 == (TIntPoint<int>_u_0)0x0) {
      lVar42 = 2;
      TVar60 = TVar77;
      do {
        *(undefined8 *)
         ((longlong)((longlong)TVar60 + 0x70) +
         (longlong)((param_5->AtmosphereLightDiscCosHalfApexAngle_PPTrans).Elements + -7)) =
             0x3f800000;
        *(undefined8 *)
         ((undefined1 *)
          ((longlong)&(param_5->AtmosphereLightDiscCosHalfApexAngle_PPTrans).Elements[0].field0_0x0
          + 8) + (longlong)TVar60) = 0;
        ((FLinearColor_u_0 *)
        (&(param_5->AtmosphereLightDiscLuminance).Elements[0].field_0x0 + (longlong)TVar60))->_s_0 =
             (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
        ((FLinearColor_u_0 *)
        (&(param_5->AtmosphereLightIlluminanceOnGroundPostTransmittance).Elements[0].field_0x0 +
        (longlong)TVar60))->_s_0 = (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
        *(undefined4 *)
         ((undefined1 *)
          ((longlong)&(param_5->AtmosphereLightDirection).Elements[1].field0_0x0 + 0xc) +
         (longlong)TVar60 + 0x10) = 0;
        ((FLinearColor_u_0 *)
        (&(param_5->AtmosphereLightIlluminanceOuterSpace).Elements[0].field_0x0 + (longlong)TVar60))
        ->_s_0 = (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
        *(float *)((longlong)&(param_5->AtmosphereLightDirection).Elements[0].field0_0x0 +
                  (longlong)TVar60) = (float)dStack_678;
        *(float *)((undefined1 *)((longlong)TVar60 + 0xb74) + (longlong)param_5) = (float)dStack_678
        ;
        *(float *)((longlong)((longlong)TVar60 + 8) +
                  (longlong)(param_5->AtmosphereLightDirection).Elements) = (float)local_670;
        *(undefined4 *)((undefined1 *)((longlong)TVar60 + 0xb7c) + (longlong)param_5) = 0x3f800000;
        lVar42 = lVar42 + -1;
        TVar60 = (TIntPoint<int>_u_0)((longlong)TVar60 + 0x10);
        TVar69 = (TIntPoint<int>_u_0)0x0;
        TVar63 = (TIntPoint<int>_u_0)0x0;
        TVar72 = (TIntPoint<int>_u_0)0x0;
      } while (lVar42 != 0);
    }
    else {
      uVar65 = 0;
      do {
        lVar42 = *(longlong *)((longlong)TVar40 + 0x2c80 + uVar65 * 8);
        *(undefined8 *)
         &(param_5->AtmosphereLightDiscCosHalfApexAngle_PPTrans).Elements[uVar65].field0_0x0 =
             0x3f800000;
        *(undefined8 *)
         ((longlong)
          &(param_5->AtmosphereLightDiscCosHalfApexAngle_PPTrans).Elements[uVar65].field0_0x0 + 8) =
             0;
        if (lVar42 == 0) {
          ((FLinearColor_u_0 *)((param_5->AtmosphereLightDiscLuminance).Elements + uVar65))->_s_0 =
               (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
          FVar30 = FLinearColor::Black;
          ((FLinearColor_u_0 *)
          ((param_5->AtmosphereLightIlluminanceOnGroundPostTransmittance).Elements + uVar65))->_s_0
               = (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
          *(undefined4 *)
           &(param_5->AtmosphereLightIlluminanceOnGroundPostTransmittance).Elements[uVar65].
            field_0xc = 0;
          ((FLinearColor_u_0 *)((param_5->AtmosphereLightIlluminanceOuterSpace).Elements + uVar65))
          ->_s_0 = (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
          if ((((char)uVar65 == '\0') && (*(longlong *)((longlong)TVar40 + 0x2c60) != 0)) &&
             (lVar42 = *(longlong *)(*(longlong *)((longlong)TVar40 + 0x2c60) + 0x28), lVar42 != 0))
          {
            local_3d8 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)(lVar42 + 0x90) >> 0x20) ^
                                         uVar94,(uint)*(undefined8 *)(lVar42 + 0x90) ^ uVar93);
            dVar88 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)(lVar42 + 0x70) >> 0x20) ^
                                      uVar94,(uint)*(undefined8 *)(lVar42 + 0x70) ^ uVar93);
            local_3e8 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)(lVar42 + 0x50) >> 0x20) ^
                                         uVar94,(uint)*(undefined8 *)(lVar42 + 0x50) ^ uVar93);
            dVar8 = local_3d8;
            dVar82 = local_3e8;
            local_3e0 = dVar88;
          }
          else {
            local_300._8_8_ = dStack_678;
            local_300._0_8_ = local_680;
            auVar25._4_8_ = FVar30.field0_0x0._8_8_;
            auVar25._0_4_ = (int)((ulonglong)local_680 >> 0x20);
            auVar87._0_8_ = auVar25._0_8_ << 0x20;
            auVar87._8_4_ = SUB84(dStack_678,0);
            auVar87._12_4_ = (int)((ulonglong)dStack_678 >> 0x20);
            local_2f0 = local_670;
            dVar88 = auVar87._8_8_;
            dVar8 = local_670;
            dVar82 = local_680;
          }
          (param_5->AtmosphereLightDirection).Elements[uVar65].field0_0x0._s_0.X = (float)dVar82;
          (param_5->AtmosphereLightDirection).Elements[uVar65].field0_0x0._s_0.Y = (float)dVar88;
          (param_5->AtmosphereLightDirection).Elements[uVar65].field0_0x0._s_0.Z = (float)dVar8;
        }
        else {
          ((FLinearColor_u_0 *)((param_5->AtmosphereLightDiscLuminance).Elements + uVar65))->_s_0 =
               (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
          uVar92 = *(undefined8 *)(*(longlong *)(lVar42 + 0x28) + 0x48);
          pTVar5 = (param_5->AtmosphereLightIlluminanceOnGroundPostTransmittance).Elements + uVar65;
          *(undefined8 *)pTVar5 = *(undefined8 *)(*(longlong *)(lVar42 + 0x28) + 0x40);
          *(undefined8 *)&pTVar5->field_0x8 = uVar92;
          *(undefined4 *)
           &(param_5->AtmosphereLightIlluminanceOnGroundPostTransmittance).Elements[uVar65].
            field_0xc = 0;
          uVar92 = *(undefined8 *)(*(longlong *)(lVar42 + 0x28) + 0x48);
          pTVar5 = (param_5->AtmosphereLightIlluminanceOuterSpace).Elements + uVar65;
          *(undefined8 *)pTVar5 = *(undefined8 *)(*(longlong *)(lVar42 + 0x28) + 0x40);
          *(undefined8 *)&pTVar5->field_0x8 = uVar92;
          *(undefined4 *)&(param_5->AtmosphereLightIlluminanceOuterSpace).Elements[0].field_0xc = 0;
          lVar42 = *(longlong *)(lVar42 + 0x28);
          uVar92 = *(undefined8 *)(lVar42 + 0x70);
          uVar9 = *(undefined8 *)(lVar42 + 0x90);
          (param_5->AtmosphereLightDirection).Elements[uVar65].field0_0x0._s_0.X =
               (float)(double)CONCAT44((uint)((ulonglong)*(undefined8 *)(lVar42 + 0x50) >> 0x20) ^
                                       uVar94,(uint)*(undefined8 *)(lVar42 + 0x50) ^ uVar93);
          (param_5->AtmosphereLightDirection).Elements[uVar65].field0_0x0._s_0.Y =
               (float)(double)CONCAT44((uint)((ulonglong)uVar92 >> 0x20) ^ uVar94,
                                       (uint)uVar92 ^ uVar93);
          (param_5->AtmosphereLightDirection).Elements[uVar65].field0_0x0._s_0.Z =
               (float)(double)CONCAT44((uint)((ulonglong)uVar9 >> 0x20) ^ uVar94,
                                       (uint)uVar9 ^ uVar93);
        }
        bVar73 = (char)uVar65 + 1;
        (param_5->AtmosphereLightDirection).Elements[uVar65].field0_0x0._s_0.W = 1.0;
        TVar69 = TVar77;
        TVar63 = TVar77;
        TVar72 = TVar77;
        uVar65 = (ulonglong)bVar73;
      } while (bVar73 < 2);
    }
LAB_145507ea6:
    local_4e0 = local_6d8;
    local_4e8 = local_6e8;
    local_6c8 = (TIntPoint<int>_u_0)(GWhiteTexture->TextureRHI).Reference;
    local_6d0 = local_708;
    TVar60 = local_6c8;
    local_700 = TVar69;
    local_6f8 = TVar72;
    local_6f0 = TVar63;
    if ((local_6c8 == (TIntPoint<int>_u_0)0x0) &&
       (local_688 = local_6c8,
       bVar35 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\TextureFallbacks.h"
                           ,10,L""), TVar60 = local_688, bVar35)) {
      pcVar21 = (code *)swi(3);
      (*pcVar21)();
      return;
    }
  }
  param_5->TransmittanceLutTexture = (FRHITexture *)TVar60;
  param_5->TransmittanceLutTextureSampler =
       TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  pFVar58 = local_6e8;
  if (local_6e8 == (FRHIShaderResourceView *)0x0) {
    pFVar58 = (GBlackFloat4StructuredBufferWithSRV->ShaderResourceViewRHI).Reference;
  }
  param_5->DistantSkyLightLutBufferSRV = pFVar58;
  pFVar58 = local_6d8;
  if (local_6d8 == (FRHIShaderResourceView *)0x0) {
    pFVar58 = (GBlackFloat4VertexBufferWithSRV->ShaderResourceViewRHI).Reference;
  }
  param_5->MobileDistantSkyLightLutBufferSRV = pFVar58;
  TVar60 = local_708;
  if (((local_708 == (TIntPoint<int>_u_0)0x0) &&
      (local_6c8 = (TIntPoint<int>_u_0)(GBlackTexture->TextureRHI).Reference, TVar60 = local_6c8,
      local_6c8 == (TIntPoint<int>_u_0)0x0)) &&
     (local_708 = local_6c8,
     bVar35 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\TextureFallbacks.h"
                         ,0x11,L""), TVar60 = local_708, bVar35)) {
    pcVar21 = (code *)swi(3);
    (*pcVar21)();
    return;
  }
  param_5->SkyViewLutTexture = (FRHITexture *)TVar60;
  param_5->SkyViewLutTextureSampler =
       TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  TVar60 = local_700;
  if (((TVar69 == (TIntPoint<int>_u_0)0x0) &&
      (local_700 = (TIntPoint<int>_u_0)(GBlackAlpha1VolumeTexture->TextureRHI).Reference,
      TVar60 = local_700, local_700 == (TIntPoint<int>_u_0)0x0)) &&
     ((TVar60 = (TIntPoint<int>_u_0)(GBlackTexture->TextureRHI).Reference,
      TVar60 == (TIntPoint<int>_u_0)0x0 &&
      (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\TextureFallbacks.h"
                           ,0x11,L""), bVar35)))) {
    pcVar21 = (code *)swi(3);
    (*pcVar21)();
    return;
  }
  param_5->CameraAerialPerspectiveVolume = (FRHITexture *)TVar60;
  TVar60 = local_6f8;
  if (((TVar72 == (TIntPoint<int>_u_0)0x0) &&
      (local_6f8 = (TIntPoint<int>_u_0)(GBlackAlpha1VolumeTexture->TextureRHI).Reference,
      TVar60 = local_6f8, local_6f8 == (TIntPoint<int>_u_0)0x0)) &&
     ((TVar60 = (TIntPoint<int>_u_0)(GBlackTexture->TextureRHI).Reference,
      TVar60 == (TIntPoint<int>_u_0)0x0 &&
      (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\TextureFallbacks.h"
                           ,0x11,L""), bVar35)))) {
    pcVar21 = (code *)swi(3);
    (*pcVar21)();
    return;
  }
  param_5->CameraAerialPerspectiveVolumeMieOnly = (FRHITexture *)TVar60;
  TVar60 = local_6f0;
  if ((((TVar63 == (TIntPoint<int>_u_0)0x0) &&
       (local_6f0 = (TIntPoint<int>_u_0)(GBlackAlpha1VolumeTexture->TextureRHI).Reference,
       TVar60 = local_6f0, local_6f0 == (TIntPoint<int>_u_0)0x0)) &&
      (TVar60 = (TIntPoint<int>_u_0)(GBlackTexture->TextureRHI).Reference,
      TVar60 == (TIntPoint<int>_u_0)0x0)) &&
     (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                         ("Result",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\TextureFallbacks.h"
                          ,0x11,L""), bVar35)) {
    pcVar21 = (code *)swi(3);
    (*pcVar21)();
    return;
  }
  param_5->CameraAerialPerspectiveVolumeRayOnly = (FRHITexture *)TVar60;
  param_5->CameraAerialPerspectiveVolumeSampler =
       TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  param_5->CameraAerialPerspectiveVolumeMieOnlySampler =
       TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  param_5->CameraAerialPerspectiveVolumeRayOnlySampler =
       TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  pFVar51 = (FRHITexture *)this->_padding_;
  if (((pFVar51 == (FRHITexture *)0x0) &&
      (pFVar51 = (GBlackTexture->TextureRHI).Reference, pFVar51 == (FRHITexture *)0x0)) &&
     (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                         ("Result",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\TextureFallbacks.h"
                          ,0x11,L""), bVar35)) {
    pcVar21 = (code *)swi(3);
    (*pcVar21)();
    return;
  }
  param_5->AtmosphereTransmittanceTexture = pFVar51;
  pFVar51 = (FRHITexture *)this->_padding_;
  if (((pFVar51 == (FRHITexture *)0x0) &&
      (pFVar51 = (GBlackTexture->TextureRHI).Reference, pFVar51 == (FRHITexture *)0x0)) &&
     (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                         ("Result",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\TextureFallbacks.h"
                          ,0x11,L""), bVar35)) {
    pcVar21 = (code *)swi(3);
    (*pcVar21)();
    return;
  }
  param_5->AtmosphereIrradianceTexture = pFVar51;
  pFVar51 = (FRHITexture *)this->_padding_;
  if ((((pFVar51 == (FRHITexture *)0x0) &&
       (pFVar51 = (GBlackVolumeTexture->TextureRHI).Reference, pFVar51 == (FRHITexture *)0x0)) &&
      (pFVar51 = (GBlackTexture->TextureRHI).Reference, pFVar51 == (FRHITexture *)0x0)) &&
     (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                         ("Result",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\TextureFallbacks.h"
                          ,0x11,L""), bVar35)) {
    pcVar21 = (code *)swi(3);
    (*pcVar21)();
    return;
  }
  param_5->AtmosphereInscatterTexture = pFVar51;
  param_5->AtmosphereTransmittanceTextureSampler =
       TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  param_5->AtmosphereIrradianceTextureSampler =
       TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  param_5->AtmosphereInscatterTextureSampler =
       TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  *(undefined8 *)&(param_5->EnvironmentComponentsFlags).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(param_5->EnvironmentComponentsFlags).field0_0x0 + 8) = 0;
  if (TVar40 != (TIntPoint<int>_u_0)0x0) {
    bVar35 = ShouldRenderSkyAtmosphere
                       ((FScene *)TVar40,(FEngineShowFlags *)(this->_padding_ + 0x48));
    if (bVar35) {
      if ((*(char *)(**(longlong **)((longlong)TVar40 + 0x4708) + 0xf0) == '\0') ||
         (uVar68 = 1, (*(uint *)(this->_padding_ + 0x60) & 0x40000000) == 0)) {
        uVar68 = uVar76;
      }
      uVar68 = -(uint)(*(char *)(**(longlong **)((longlong)TVar40 + 0x4708) + 0xf1) != '\0') & 8 |
               uVar68;
    }
    bVar35 = ShouldRenderVolumetricCloud
                       ((FScene *)TVar40,(FEngineShowFlags *)(this->_padding_ + 0x48));
    if (bVar35) {
      if ((*(char *)(**(longlong **)((longlong)TVar40 + 0x4728) + 0x29) == '\0') ||
         (uVar93 = 2, (*(uint *)(this->_padding_ + 0x60) & 0x40000000) == 0)) {
        uVar93 = uVar76;
      }
      uVar68 = uVar68 | -(uint)(*(char *)(**(longlong **)((longlong)TVar40 + 0x4728) + 0x2a) != '\0'
                               ) & 0x10 | uVar93;
    }
    if (0 < *(int *)((longlong)TVar40 + 0x4700)) {
      if ((*(char *)(*(longlong *)((longlong)TVar40 + 0x46f8) + 0xa1) == '\0') ||
         (uVar93 = 4, (*(uint *)(this->_padding_ + 0x60) & 0x40000000) == 0)) {
        uVar93 = uVar76;
      }
      uVar68 = uVar68 | -(uint)(*(char *)(*(longlong *)((longlong)TVar40 + 0x46f8) + 0xa2) != '\0')
                        & 0x20 | uVar93;
    }
    (param_5->EnvironmentComponentsFlags).field0_0x0._s_0.X = uVar68;
  }
  param_5->MaterialMaxEmissiveValue = this->MaterialMaxEmissiveValue;
  param_5->PostVolumeUserFlags = *(int *)((longlong)&this->_padding_ + 4);
  UpdateNoiseTextureParameters(param_5);
  SetupDefaultGlobalDistanceFieldUniformBufferParameters(this,param_5);
  GetVolumetricFogResourceGridSize((TIntVector3<int> *)&local_668._s_0,this,&local_6dc);
  GetVolumetricFogViewGridSize((TIntVector3<int> *)&local_650._s_0,this,local_658);
  local_6a8._0_4_ =
       (undefined4)
       (*(int *)((longlong)&(this->ViewRect).field0_0x0 + 8) - *(int *)&(this->ViewRect).field0_0x0)
  ;
  local_6a8._4_4_ =
       (undefined4)
       (*(int *)((longlong)&(this->ViewRect).field0_0x0 + 0xc) -
       *(int *)((longlong)&(this->ViewRect).field0_0x0 + 4));
  SetupVolumetricFogUniformBufferParameters(this,param_5);
  (param_5->VolumetricFogViewGridUVToPrevViewRectUV).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::UnitVector.field0_0x0;
  (param_5->VolumetricFogPrevViewGridRectUVToResourceUV).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::UnitVector.field0_0x0;
  (param_5->VolumetricFogPrevUVMax).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::UnitVector.field0_0x0;
  (param_5->VolumetricFogPrevUVMaxForTemporalBlend).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::UnitVector.field0_0x0;
  (param_5->VolumetricFogPrevResourceGridSize).field0_0x0._s_0.X = (float)local_668._s_0.X;
  (param_5->VolumetricFogPrevResourceGridSize).field0_0x0._s_0.Y = (float)local_668._s_0.Y;
  (param_5->VolumetricFogPrevResourceGridSize).field0_0x0._s_0.Z = (float)local_668._s_0.Z;
  pFVar18 = this->ViewState;
  if (pFVar18 != (FSceneViewState *)0x0) {
    local_750._4_4_ =
         (pFVar18->PrevLightScatteringViewGridUVToViewRectVolumeUV).field0_0x0._s_0.Y /
         ((float)local_6a8._4_4_ / ((float)local_650._s_0.Y * (float)local_658[0]));
    local_750._0_4_ =
         (pFVar18->PrevLightScatteringViewGridUVToViewRectVolumeUV).field0_0x0._s_0.X /
         ((float)local_6a8._0_4_ / ((float)local_650._s_0.X * (float)local_658[0]));
    (param_5->VolumetricFogViewGridUVToPrevViewRectUV).field0_0x0 = local_750;
    (param_5->VolumetricFogPrevViewGridRectUVToResourceUV).field0_0x0 =
         (this->ViewState->VolumetricFogPrevViewGridRectUVToResourceUV).field0_0x0;
    (param_5->VolumetricFogPrevUVMax).field0_0x0 =
         (this->ViewState->VolumetricFogPrevUVMax).field0_0x0;
    (param_5->VolumetricFogPrevUVMaxForTemporalBlend).field0_0x0 =
         (this->ViewState->VolumetricFogPrevUVMaxForTemporalBlend).field0_0x0;
    local_6c8 = *(TIntPoint<int>_u_0 *)
                 &(this->ViewState->VolumetricFogPrevResourceGridSize).field0_0x0;
    iVar39 = (this->ViewState->VolumetricFogPrevResourceGridSize).field0_0x0._s_0.Z;
    (param_5->VolumetricFogPrevResourceGridSize).field0_0x0._s_0.X =
         (float)(int)(undefined4)local_6c8;
    (param_5->VolumetricFogPrevResourceGridSize).field0_0x0._s_0.Y = (float)local_6c8._4_4_;
    (param_5->VolumetricFogPrevResourceGridSize).field0_0x0._s_0.Z = (float)iVar39;
  }
  local_750._4_4_ = (float)local_650._s_0.Y / (float)local_668._s_0.Y;
  local_750._0_4_ = (float)local_650._s_0.X / (float)local_668._s_0.X;
  (param_5->VolumetricFogScreenToResourceUV).field0_0x0 = local_750;
  local_530 = local_668._s_0.Z;
  TVar45 = GetVolumetricFogUVMaxForSampling(&local_440,(TIntVector3<int> *)local_6a8,(int)local_538)
  ;
                    /* WARNING: Load size is inaccurate */
  (param_5->VolumetricFogUVMax).field0_0x0 = (TVector2<float>_u_0)*TVar45.field0_0x0;
  pFVar46 = FEngineShowFlags::FEngineShowFlags
                      (&local_1a8,(FEngineShowFlags *)(this->_padding_ + 0x48));
  SetupPrecomputedVolumetricLightmapUniformBufferParameters((FScene *)TVar40,pFVar46,param_5);
  pFVar46 = FEngineShowFlags::FEngineShowFlags
                      (&local_168,(FEngineShowFlags *)(this->_padding_ + 0x48));
  SetupPhysicsFieldUniformBufferParameters((FScene *)TVar40,pFVar46,param_5);
  fVar79 = UTexture2D::GetGlobalMipMapLODBias();
  fVar80 = __real_40000000;
  fVar78 = fVar79;
  if ((this->bIsValidTextureGroupSamplerFilters != false) &&
     (__real_322bcc77 <
      (float)((uint)*(float *)&this->_padding_ & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    param_5->MaterialTextureMipBias = *(float *)&this->_padding_;
    fVar78 = powf(fVar80,*(float *)&this->_padding_);
    param_5->MaterialTextureDerivativeMultiply = fVar78;
    fVar78 = fVar79 + *(float *)&this->_padding_;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&CS,4000);
    atexit(`FViewInfo::SetupUniformBufferParameters'::__l91::_dynamic_atexit_destructor_for__CS__);
    _Init_thread_footer(&::_TSS0);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&CS);
  fVar6 = __real_38d1b717;
  TVar60 = TVar77;
  TVar69 = TVar77;
  if (__real_38d1b717 <= (float)((uint)(fVar78 - fVar79) & __xmm_7fffffff7fffffff7fffffff7fffffff))
  {
    pFVar18 = this->ViewState;
    if ((pFVar18 != (FSceneViewState *)0x0) &&
       ((float)((uint)(pFVar18->MaterialTextureCachedMipBias - fVar78) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_38d1b717)) {
      TVar63 = (TIntPoint<int>_u_0)(pFVar18->MaterialTextureBilinearWrapedSamplerCache).Reference;
      if (TVar63 != (TIntPoint<int>_u_0)0x0) {
        FRHIResource::AddRef((FRHIResource *)TVar63);
        TVar60 = TVar63;
      }
      TVar63 = (TIntPoint<int>_u_0)
               (this->ViewState->MaterialTextureBilinearClampedSamplerCache).Reference;
      goto LAB_145508715;
    }
    if ((this->bIsValidTextureGroupSamplerFilters == false) &&
       (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                           ("bIsValidTextureGroupSamplerFilters",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                            ,0x69c,L""), bVar35)) {
      pcVar21 = (code *)swi(3);
      (*pcVar21)();
      return;
    }
    local_640 = (undefined1)this->WorldTextureGroupSamplerFilter;
    local_630 = this->WorldTextureGroupMaxAnisotropy;
    local_63f = 0;
    local_63d = 0;
    local_638 = 0;
    local_634 = 0x7f7fffff;
    local_62c = 0;
    local_628 = 0;
    local_63c = fVar78;
    TVar47 = RHICreateSamplerState((FSamplerStateInitializerRHI *)&local_528);
    if ((FRHISamplerState *)(local_438 + 8) != TVar47.Reference) {
      TVar60 = *(TIntPoint<int>_u_0 *)TVar47.Reference;
      *(undefined8 *)TVar47.Reference = 0;
    }
    if (local_528 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_528);
    }
    local_624 = (undefined1)this->WorldTextureGroupSamplerFilter;
    local_614 = this->WorldTextureGroupMaxAnisotropy;
    local_623 = 0x101;
    local_621 = 1;
    local_61c = 0;
    local_618 = 0x7f7fffff;
    local_610 = 0;
    local_60c = 0;
    local_620 = fVar78;
    TVar47 = RHICreateSamplerState((FSamplerStateInitializerRHI *)&local_520);
    if ((FRHISamplerState *)local_3d0 != TVar47.Reference) {
      TVar69 = *(TIntPoint<int>_u_0 *)TVar47.Reference;
      *(undefined8 *)TVar47.Reference = 0;
    }
    if (local_520 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_520);
    }
  }
  else {
    TVar63 = (TIntPoint<int>_u_0)(Wrap_WorldGroupSettings->SamplerStateRHI).Reference;
    if (TVar63 != (TIntPoint<int>_u_0)0x0) {
      FRHIResource::AddRef((FRHIResource *)TVar63);
      TVar60 = TVar63;
    }
    TVar63 = (TIntPoint<int>_u_0)(Clamp_WorldGroupSettings->SamplerStateRHI).Reference;
LAB_145508715:
    if (TVar63 != (TIntPoint<int>_u_0)0x0) {
      FRHIResource::AddRef((FRHIResource *)TVar63);
      TVar69 = TVar63;
    }
  }
  if ((TVar60 == (TIntPoint<int>_u_0)0x0) &&
     (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                         ("WrappedSampler.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                          ,0x6a3,L""), bVar35)) {
    pcVar21 = (code *)swi(3);
    (*pcVar21)();
    return;
  }
  if ((TVar69 == (TIntPoint<int>_u_0)0x0) &&
     (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                         ("ClampedSampler.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                          ,0x6a4,L""), bVar35)) {
    pcVar21 = (code *)swi(3);
    (*pcVar21)();
    return;
  }
  uVar68 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  param_5->MaterialTextureBilinearWrapedSampler = (FRHISamplerState *)TVar60;
  param_5->MaterialTextureBilinearClampedSampler = (FRHISamplerState *)TVar69;
  pFVar18 = this->ViewState;
  if ((pFVar18 != (FSceneViewState *)0x0) &&
     ((TIntPoint<int>_u_0)(pFVar18->MaterialTextureBilinearWrapedSamplerCache).Reference != TVar60))
  {
    pFVar18->MaterialTextureCachedMipBias = fVar78;
    TVar63 = (TIntPoint<int>_u_0)
             (this->ViewState->MaterialTextureBilinearWrapedSamplerCache).Reference;
    if (TVar63 != TVar60) {
      (this->ViewState->MaterialTextureBilinearWrapedSamplerCache).Reference =
           (FRHISamplerState *)TVar60;
      if (TVar60 != (TIntPoint<int>_u_0)0x0) {
        FRHIResource::AddRef((FRHIResource *)TVar60);
        uVar68 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      }
      if (TVar63 != (TIntPoint<int>_u_0)0x0) {
        FRHIResource::Release((FRHIResource *)TVar63);
        uVar68 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      }
    }
    TVar63 = (TIntPoint<int>_u_0)
             (this->ViewState->MaterialTextureBilinearClampedSamplerCache).Reference;
    if (TVar63 != TVar69) {
      (this->ViewState->MaterialTextureBilinearClampedSamplerCache).Reference =
           (FRHISamplerState *)TVar69;
      if (TVar69 != (TIntPoint<int>_u_0)0x0) {
        FRHIResource::AddRef((FRHIResource *)TVar69);
        uVar68 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      }
      if (TVar63 != (TIntPoint<int>_u_0)0x0) {
        FRHIResource::Release((FRHIResource *)TVar63);
        uVar68 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      }
    }
  }
  pFVar18 = this->ViewState;
  TVar63 = TVar77;
  if ((pFVar18 == (FSceneViewState *)0x0) ||
     (fVar6 <= (float)((uint)(pFVar18->LandscapeCachedMipBias - fVar78) & uVar68))) {
    if (this->bIsValidTextureGroupSamplerFilters == false) {
      local_608 = 3;
    }
    else {
      local_608 = (undefined1)this->TerrainWeightmapTextureGroupSamplerFilter;
    }
    local_607 = 0x101;
    local_605 = 1;
    local_600 = 0;
    local_5fc = 0x7f7fffff;
    local_5f4 = 0;
    local_5f0 = 0;
    local_604 = fVar78;
    TVar47 = RHICreateSamplerState((FSamplerStateInitializerRHI *)&local_518);
    if ((FRHISamplerState *)local_438 != TVar47.Reference) {
      TVar63 = *(TIntPoint<int>_u_0 *)TVar47.Reference;
      *(undefined8 *)TVar47.Reference = 0;
    }
    if (local_518 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_518);
    }
    if (TVar63 == (TIntPoint<int>_u_0)0x0) goto LAB_145508a78;
  }
  else {
    TVar72 = (TIntPoint<int>_u_0)(pFVar18->LandscapeWeightmapSamplerCache).Reference;
    if (TVar72 == (TIntPoint<int>_u_0)0x0) {
LAB_145508a78:
      bVar35 = ::FDebug::CheckVerifyFailedImpl2
                         ("WeightmapSampler.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                          ,0x6bf,L"");
      if (bVar35) {
        pcVar21 = (code *)swi(3);
        (*pcVar21)();
        return;
      }
    }
    else {
      FRHIResource::AddRef((FRHIResource *)TVar72);
      TVar63 = TVar72;
    }
  }
  param_5->LandscapeWeightmapSampler = (FRHISamplerState *)TVar63;
  if (this->ViewState != (FSceneViewState *)0x0) {
    this->ViewState->LandscapeCachedMipBias = fVar78;
    local_6c8 = (TIntPoint<int>_u_0)(this->ViewState->LandscapeWeightmapSamplerCache).Reference;
    if (local_6c8 != TVar63) {
      (this->ViewState->LandscapeWeightmapSamplerCache).Reference = (FRHISamplerState *)TVar63;
      if (TVar63 != (TIntPoint<int>_u_0)0x0) {
        FRHIResource::AddRef((FRHIResource *)TVar63);
      }
      if (local_6c8 != (TIntPoint<int>_u_0)0x0) {
        FRHIResource::Release((FRHIResource *)local_6c8);
      }
    }
  }
  if (TVar63 != (TIntPoint<int>_u_0)0x0) {
    FRHIResource::Release((FRHIResource *)TVar63);
  }
  if (TVar69 != (TIntPoint<int>_u_0)0x0) {
    FRHIResource::Release((FRHIResource *)TVar69);
  }
  if (TVar60 != (TIntPoint<int>_u_0)0x0) {
    FRHIResource::Release((FRHIResource *)TVar60);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&CS);
  if ((((this->TemporalJitterSequenceLength != 1) && (iVar39 = (int)this->_padding_, iVar39 != 2))
      && (iVar39 != 4)) &&
     (((FCustomRenderPassBase *)this->_padding_ == (FCustomRenderPassBase *)0x0 ||
      (pFVar48 = FSceneCaptureCustomRenderPassUserData::Get
                           ((FCustomRenderPassBase *)this->_padding_),
      pFVar48->bMainViewResolution == false)))) {
    local_510 = this;
    `FViewInfo::SetupUniformBufferParameters'::__l144::<lambda_2>::operator()(&local_510);
  }
  if ((this->TemporalJitterIndex < 0) ||
     (this->TemporalJitterSequenceLength <= this->TemporalJitterIndex)) {
    local_508 = this;
    `FViewInfo::SetupUniformBufferParameters'::__l144::<lambda_3>::operator()(&local_508);
  }
  dVar8 = (this->TemporalJitterPixels).field0_0x0._s_0.X;
  iVar39 = this->TemporalJitterSequenceLength;
  dVar82 = (this->TemporalJitterPixels).field0_0x0._s_0.Y;
  (param_5->TemporalAAParams).field0_0x0._s_0.X = (float)this->TemporalJitterIndex;
  (param_5->TemporalAAParams).field0_0x0._s_0.Y = (float)iVar39;
  fVar78 = (float)dVar8;
  auVar90 = ZEXT416((uint)fVar78);
  (param_5->TemporalAAParams).field0_0x0._s_0.Z = fVar78;
  (param_5->TemporalAAParams).field0_0x0._s_0.W = (float)dVar82;
  fVar78 = (float)(*(int *)((longlong)&(this->ViewRect).field0_0x0 + 8) -
                  *(int *)&(this->ViewRect).field0_0x0) /
           (float)((int)this->_padding_ - (int)this->_padding_);
  (param_5->ResolutionFractionAndInv).field0_0x0._s_0.X = fVar78;
  (param_5->ResolutionFractionAndInv).field0_0x0._s_0.Y = fVar81 / fVar78;
  pFVar18 = this->ViewState;
  uVar93 = uVar76;
  uVar68 = uVar62;
  if (pFVar18 != (FSceneViewState *)0x0) {
    uVar68 = pFVar18->FrameIndex;
    uVar93 = pFVar18->OutputFrameIndex;
  }
  param_5->StateFrameIndex = uVar68;
  param_5->StateOutputFrameIndex = uVar93;
  param_5->StateFrameIndexMod8 = uVar68 & 7;
  pFVar49 = GetPrimaryView(this);
  pTVar34 = local_500;
  lVar42 = (longlong)param_4;
  CalcTranslucencyLightingVolumeBounds(pFVar49,local_500,param_4);
  iVar39 = GetTranslucencyLightingVolumeDim();
  TVar60 = TVar77;
  if (3 < lVar42) {
    pTVar75 = &param_5->TranslucencyLightingVolumeInvSize;
    pdVar64 = &(pTVar34->Max).field0_0x0._s_0.Z;
    dVar8 = dVar15 / (double)iVar39;
    lVar50 = (lVar42 - 4U >> 2) + 1;
    fVar78 = fVar81 / (float)iVar39;
    TVar60 = (TIntPoint<int>_u_0)(lVar50 * 4);
    do {
      auVar84 = *(undefined1 (*) [16])(pdVar64 + -5);
      dVar82 = ((TVector<double>_u_0_s_0 *)(pdVar64 + -2))->X;
      dVar88 = pdVar64[-3];
      auVar26._4_8_ = auVar90._8_8_;
      auVar26._0_4_ = auVar84._4_4_;
      auVar89._0_8_ = auVar26._0_8_ << 0x20;
      auVar89._8_4_ = auVar84._8_4_;
      auVar89._12_4_ = auVar84._12_4_;
      dVar10 = pdVar64[-1];
      dVar11 = pdVar64[-5];
      dVar12 = *pdVar64;
      dVar13 = (double)pFVar49->_padding_;
      dVar14 = (double)pFVar49->_padding_;
      pTVar75[-1].Elements[0].field0_0x0._s_0.X =
           (float)(auVar84._0_8_ + (double)pFVar49->_padding_);
      pTVar75[-1].Elements[0].field0_0x0._s_0.Y = (float)(auVar89._8_8_ + dVar14);
      pTVar75[-1].Elements[0].field0_0x0._s_0.Z = (float)(dVar88 + dVar13);
      pTVar75[-1].Elements[0].field0_0x0._s_0.W = fVar78;
      pTVar75->Elements[0].field0_0x0._s_0.X = fVar81 / (float)(dVar82 - auVar84._0_8_);
      pTVar75->Elements[0].field0_0x0._s_0.Y = fVar81 / (float)(dVar10 - auVar89._8_8_);
      pTVar75->Elements[0].field0_0x0._s_0.Z = fVar81 / (float)(dVar12 - dVar88);
      pTVar75->Elements[0].field0_0x0._s_0.W = (float)((dVar82 - dVar11) * dVar8);
      dVar28 = pdVar64[2];
      dVar29 = pdVar64[3];
      dVar82 = pdVar64[5];
      dVar88 = pdVar64[4];
      dVar10 = pdVar64[2];
      dVar11 = pdVar64[6];
      dVar12 = pdVar64[7];
      dVar13 = (double)pFVar49->_padding_;
      dVar14 = (double)pFVar49->_padding_;
      pTVar75[-1].Elements[1].field0_0x0._s_0.X = (float)(dVar28 + (double)pFVar49->_padding_);
      pTVar75[-1].Elements[1].field0_0x0._s_0.Y = (float)(dVar29 + dVar14);
      pTVar75[-1].Elements[1].field0_0x0._s_0.Z = (float)(dVar88 + dVar13);
      pTVar75[-1].Elements[1].field0_0x0._s_0.W = fVar78;
      pTVar75->Elements[1].field0_0x0._s_0.X = fVar81 / (float)(dVar82 - dVar28);
      pTVar75->Elements[1].field0_0x0._s_0.Y = fVar81 / (float)(dVar11 - dVar29);
      pTVar75->Elements[1].field0_0x0._s_0.Z = fVar81 / (float)(dVar12 - dVar88);
      pTVar75->Elements[1].field0_0x0._s_0.W = (float)((dVar82 - dVar10) * dVar8);
      dVar28 = pdVar64[9];
      dVar29 = pdVar64[10];
      dVar82 = pdVar64[0xc];
      dVar88 = pdVar64[0xb];
      dVar10 = pdVar64[0xd];
      dVar11 = pdVar64[9];
      dVar12 = pdVar64[0xe];
      dVar13 = (double)pFVar49->_padding_;
      dVar14 = (double)pFVar49->_padding_;
      pTVar75->Elements[0].field0_0x0._s_0.X = (float)(dVar28 + (double)pFVar49->_padding_);
      pTVar75->Elements[0].field0_0x0._s_0.Y = (float)(dVar29 + dVar14);
      pTVar75->Elements[0].field0_0x0._s_0.Z = (float)(dVar88 + dVar13);
      pTVar75->Elements[0].field0_0x0._s_0.W = fVar78;
      pTVar75[1].Elements[0].field0_0x0._s_0.X = fVar81 / (float)(dVar82 - dVar28);
      pTVar75[1].Elements[0].field0_0x0._s_0.Y = fVar81 / (float)(dVar10 - dVar29);
      pTVar75[1].Elements[0].field0_0x0._s_0.Z = fVar81 / (float)(dVar12 - dVar88);
      pTVar75[1].Elements[0].field0_0x0._s_0.W = (float)((dVar82 - dVar11) * dVar8);
      pdVar1 = pdVar64 + 0x10;
      dVar11 = pdVar64[0x11];
      pdVar2 = pdVar64 + 0x13;
      pdVar3 = pdVar64 + 0x14;
      dVar82 = pdVar64[0x12];
      pdVar4 = pdVar64 + 0x15;
      dVar88 = (double)pFVar49->_padding_;
      fStack_71c = (float)((*pdVar2 - pdVar64[0x10]) * dVar8);
      dVar10 = (double)pFVar49->_padding_;
      pdVar64 = pdVar64 + 0x1c;
      local_728 = fVar81 / (float)(*pdVar2 - *pdVar1);
      fStack_724 = fVar81 / (float)(*pdVar3 - dVar11);
      auVar90 = ZEXT416((uint)fStack_724);
      fStack_720 = fVar81 / (float)(*pdVar4 - dVar82);
      pTVar75->Elements[1].field0_0x0._s_0.X = (float)(*pdVar1 + (double)pFVar49->_padding_);
      pTVar75->Elements[1].field0_0x0._s_0.Y = (float)(dVar11 + dVar88);
      pTVar75->Elements[1].field0_0x0._s_0.Z = (float)(dVar82 + dVar10);
      pTVar75->Elements[1].field0_0x0._s_0.W = fVar78;
      pTVar75[1].Elements[1].field0_0x0._s_0.X = local_728;
      pTVar75[1].Elements[1].field0_0x0._s_0.Y = fStack_724;
      pTVar75[1].Elements[1].field0_0x0._s_0.Z = fStack_720;
      pTVar75[1].Elements[1].field0_0x0._s_0.W = fStack_71c;
      pTVar75 = pTVar75 + 2;
      lVar50 = lVar50 + -1;
    } while (lVar50 != 0);
  }
  if ((longlong)TVar60 < lVar42) {
    pafVar67 = (param_5->ViewToClip).M + (longlong)((longlong)TVar60 + 0x90);
    pdVar64 = &pTVar34[(longlong)TVar60].Max.field0_0x0._s_0.Z;
    lVar42 = lVar42 - (longlong)TVar60;
    do {
      auVar84 = *(undefined1 (*) [16])(pdVar64 + -5);
      dVar8 = pdVar64[-3];
      dVar82 = ((TVector<double>_u_0_s_0 *)(pdVar64 + -2))->X;
      auVar27._4_8_ = auVar90._8_8_;
      auVar27._0_4_ = auVar84._4_4_;
      auVar91._0_8_ = auVar27._0_8_ << 0x20;
      auVar91._8_4_ = auVar84._8_4_;
      auVar91._12_4_ = auVar84._12_4_;
      dVar88 = pdVar64[-1];
      pdVar1 = pdVar64 + -5;
      dVar10 = *pdVar64;
      dVar11 = (double)pFVar49->_padding_;
      pdVar64 = pdVar64 + 7;
      dVar12 = (double)pFVar49->_padding_;
      fStack_71c = (float)((dVar82 - *pdVar1) * (dVar15 / (double)iVar39));
      pafVar67[-2][0] = (float)(auVar84._0_8_ + (double)pFVar49->_padding_);
      *(float *)((longlong)(pafVar67 + -2) + 4) = (float)(auVar91._8_8_ + dVar12);
      *(float *)((longlong)(pafVar67 + -2) + 8) = (float)(dVar8 + dVar11);
      *(float *)((longlong)(pafVar67 + -2) + 0xc) = fVar81 / (float)iVar39;
      local_728 = fVar81 / (float)(dVar82 - auVar84._0_8_);
      fStack_724 = fVar81 / (float)(dVar88 - auVar91._8_8_);
      auVar90 = ZEXT416((uint)fStack_724);
      fStack_720 = fVar81 / (float)(dVar10 - dVar8);
      (*pafVar67)[0] = local_728;
      (*pafVar67)[1] = fStack_724;
      (*pafVar67)[2] = fStack_720;
      (*pafVar67)[3] = fStack_71c;
      pafVar67 = pafVar67 + 1;
      lVar42 = lVar42 + -1;
    } while (lVar42 != 0);
  }
  param_5->PreExposure = this->PreExposure;
  param_5->OneOverPreExposure = fVar81 / this->PreExposure;
  param_5->DepthOfFieldFocalDistance = *(float *)&this->_padding_;
  param_5->DepthOfFieldSensorWidth = *(float *)&this->_padding_;
  param_5->DepthOfFieldFocalRegion = *(float *)((longlong)&this->_padding_ + 4);
  fVar78 = *(float *)&this->_padding_;
  if (*(float *)&this->_padding_ <= __real_3c23d70a) {
    fVar78 = __real_3c23d70a;
  }
  param_5->DepthOfFieldNearTransitionRegion = fVar78;
  fVar78 = *(float *)((longlong)&this->_padding_ + 4);
  if (fVar78 <= __real_3c23d70a) {
    fVar78 = __real_3c23d70a;
  }
  param_5->DepthOfFieldFarTransitionRegion = fVar78;
  param_5->DepthOfFieldScale = *(float *)&this->_padding_;
  param_5->DepthOfFieldFocalLength = 50.0;
  bVar35 = IsSubsurfaceEnabled();
  pvVar33 = ThreadLocalStoragePointer;
  fVar78 = fVar81;
  if (!bVar35) {
    fVar78 = 0.0;
  }
  uVar65 = (ulonglong)_tls_index;
  param_5->bSubsurfacePostprocessEnabled = fVar78;
  if ((*(int *)(*(longlong *)((longlong)pvVar33 + uVar65 * 8) + 0x9d4c) < ::_TSS1) &&
     (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
       ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0 &&
        (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                            ("Singleton != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x4fb,L""), bVar35)))) {
      pcVar21 = (code *)swi(3);
      (*pcVar21)();
      return;
    }
    plVar59 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
    TVar60 = TVar77;
    if (plVar59 != (longlong *)0x0) {
      TVar60 = (TIntPoint<int>_u_0)(**(code **)(*plVar59 + 0x70))(plVar59);
    }
    ::CVar = (TConsoleVariableData<float> *)TVar60;
    _Init_thread_footer(&::_TSS1);
  }
  pTVar31 = ::CVar;
  fVar79 = __real_3d4ccccd;
  fVar78 = __real_3e19999a;
  if (::CVar != (TConsoleVariableData<float> *)0x0) {
    bVar35 = IsInParallelRenderingThread();
    if ((!bVar35) &&
       (bVar35 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar35)) {
      pcVar21 = (code *)swi(3);
      (*pcVar21)();
      return;
    }
    fVar78 = pTVar31->ShadowedValue[1];
    if (fVar81 <= pTVar31->ShadowedValue[1]) {
      fVar78 = fVar81;
    }
    if (fVar78 <= fVar79) {
      fVar78 = fVar79;
    }
  }
  param_5->SubSurfaceColorAsTransmittanceAtDistanceInMeters = fVar78;
  pFVar51 = SubsurfaceProfile::GetSubsurfaceProfileTextureWithFallback();
  lVar42 = (**(code **)(pFVar51->_padding_ + 0x20))(pFVar51);
  cVar36 = *(char *)(lVar42 + 0x32);
  if ((((cVar36 == '\0') || (cVar36 == '\x01')) || (cVar36 == '\x02')) ||
     ((cVar36 == '\x03' || (uVar68 = uVar62, cVar36 == '\x04')))) {
    uVar76 = *(uint *)(lVar42 + 0x24);
    uVar68 = *(uint *)(lVar42 + 0x28);
  }
  (param_5->SSProfilesTextureSizeAndInvSize).field0_0x0._s_0.X = (float)(int)uVar76;
  (param_5->SSProfilesTextureSizeAndInvSize).field0_0x0._s_0.Y = (float)(int)uVar68;
  (param_5->SSProfilesTextureSizeAndInvSize).field0_0x0._s_0.Z = fVar81 / (float)(int)uVar76;
  (param_5->SSProfilesTextureSizeAndInvSize).field0_0x0._s_0.W = fVar81 / (float)(int)uVar68;
  param_5->SSProfilesTexture = pFVar51;
  param_5->SSProfilesSampler =
       TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  param_5->SSProfilesTransmissionSampler =
       TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  pFVar51 = SubsurfaceProfile::GetSSProfilesPreIntegratedTextureWithFallback();
  lVar42 = (**(code **)(pFVar51->_padding_ + 0x20))(pFVar51);
  cVar36 = *(char *)(lVar42 + 0x32);
  if (((cVar36 == '\0') || (cVar36 == '\x01')) ||
     ((cVar36 == '\x02' ||
      ((cVar36 == '\x03' || (uVar68 = uVar62, uVar76 = uVar62, cVar36 == '\x04')))))) {
    uVar68 = *(uint *)(lVar42 + 0x28);
    uVar76 = *(uint *)(lVar42 + 0x24);
  }
  (param_5->SSProfilesPreIntegratedTextureSizeAndInvSize).field0_0x0._s_0.X = (float)(int)uVar76;
  (param_5->SSProfilesPreIntegratedTextureSizeAndInvSize).field0_0x0._s_0.Y = (float)(int)uVar68;
  (param_5->SSProfilesPreIntegratedTextureSizeAndInvSize).field0_0x0._s_0.Z =
       fVar81 / (float)(int)uVar76;
  (param_5->SSProfilesPreIntegratedTextureSizeAndInvSize).field0_0x0._s_0.W =
       fVar81 / (float)(int)uVar68;
  param_5->SSProfilesPreIntegratedTexture = pFVar51;
  param_5->SSProfilesPreIntegratedSampler =
       TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  pFVar51 = SpecularProfile::GetSpecularProfileTextureAtlasWithFallback();
  lVar42 = (**(code **)(pFVar51->_padding_ + 0x20))(pFVar51);
  cVar36 = *(char *)(lVar42 + 0x32);
  if ((((cVar36 == '\0') || (cVar36 == '\x01')) || (cVar36 == '\x02')) ||
     ((cVar36 == '\x03' || (uVar68 = uVar62, uVar76 = uVar62, cVar36 == '\x04')))) {
    uVar68 = *(uint *)(lVar42 + 0x28);
    uVar76 = *(uint *)(lVar42 + 0x24);
  }
  (param_5->SpecularProfileTextureSizeAndInvSize).field0_0x0._s_0.X = (float)(int)uVar76;
  (param_5->SpecularProfileTextureSizeAndInvSize).field0_0x0._s_0.Y = (float)(int)uVar68;
  (param_5->SpecularProfileTextureSizeAndInvSize).field0_0x0._s_0.Z = fVar81 / (float)(int)uVar76;
  (param_5->SpecularProfileTextureSizeAndInvSize).field0_0x0._s_0.W = fVar81 / (float)(int)uVar68;
  param_5->SpecularProfileTexture = pFVar51;
  param_5->SpecularProfileSampler =
       TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  pTVar31 = CVarGeneralPurposeTweak.Ref;
  bVar35 = IsInParallelRenderingThread();
  if ((!bVar35) &&
     (bVar35 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar35)) {
    pcVar21 = (code *)swi(3);
    (*pcVar21)();
    return;
  }
  pTVar32 = CVarGeneralPurposeTweak2.Ref;
  fVar78 = pTVar31->ShadowedValue[1];
  bVar35 = IsInParallelRenderingThread();
  if ((!bVar35) &&
     (bVar35 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar35)) {
    pcVar21 = (code *)swi(3);
    (*pcVar21)();
    return;
  }
  param_5->GeneralPurposeTweak2 = pTVar32->ShadowedValue[1];
  param_5->GeneralPurposeTweak = fVar78;
  param_5->DemosaicVposOffset = 0.0;
  pTVar31 = CVarDemosaicVposOffset.Ref;
  bVar35 = IsInParallelRenderingThread();
  if ((!bVar35) &&
     (bVar35 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar35)) {
    pcVar21 = (code *)swi(3);
    (*pcVar21)();
    return;
  }
  param_5->DemosaicVposOffset = pTVar31->ShadowedValue[1];
  pTVar31 = CVarDecalDepthBias.Ref;
  bVar35 = IsInParallelRenderingThread();
  if ((!bVar35) &&
     (bVar35 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar35)) {
    pcVar21 = (code *)swi(3);
    (*pcVar21)();
    return;
  }
  param_5->DecalDepthBias = pTVar31->ShadowedValue[1] * *(float *)(local_6a8._8_8_ + 0x86c);
  fVar78 = *(float *)&this->_padding_;
  fVar6 = *(float *)&this->_padding_;
  fVar7 = *(float *)((longlong)&this->_padding_ + 4);
  (param_5->IndirectLightingColorScale).field0_0x0._s_0.X = fVar78 * *(float *)&this->_padding_;
  (param_5->IndirectLightingColorScale).field0_0x0._s_0.Y = fVar78 * fVar7;
  (param_5->IndirectLightingColorScale).field0_0x0._s_0.Z = fVar78 * fVar6;
  fVar78 = (param_5->IndirectLightingColorScale).field0_0x0._s_0.Z;
  *(undefined8 *)&(param_5->PrecomputedIndirectLightingColorScale).field0_0x0 =
       *(undefined8 *)&(param_5->IndirectLightingColorScale).field0_0x0;
  (param_5->PrecomputedIndirectLightingColorScale).field0_0x0._s_0.Z = fVar78;
  bVar35 = ShouldRenderLumenDiffuseGI((FScene *)TVar40,(FSceneView *)this,false,false);
  if (bVar35) {
    *(undefined8 *)&(param_5->PrecomputedIndirectLightingColorScale).field0_0x0 =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    (param_5->PrecomputedIndirectLightingColorScale).field0_0x0._s_0.Z =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  }
  fVar78 = (param_5->IndirectLightingColorScale).field0_0x0._s_0.Z;
  *(undefined8 *)&(param_5->PrecomputedIndirectSpecularColorScale).field0_0x0 =
       *(undefined8 *)&(param_5->IndirectLightingColorScale).field0_0x0;
  (param_5->PrecomputedIndirectSpecularColorScale).field0_0x0._s_0.Z = fVar78;
  bVar35 = ShouldRenderLumenReflections((FSceneView *)this,false,false,false);
  if (bVar35) {
    *(undefined8 *)&(param_5->PrecomputedIndirectSpecularColorScale).field0_0x0 =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    (param_5->PrecomputedIndirectSpecularColorScale).field0_0x0._s_0.Z =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  }
  pTVar31 = CVarNormalCurvatureToRoughnessScale.Ref;
  bVar35 = IsInParallelGameThread();
  TVar60 = TVar77;
  if ((!bVar35) && (bVar35 = IsInGameThread(), !bVar35)) {
    TVar60 = (TIntPoint<int>_u_0)&DAT_00000004;
  }
  fVar78 = *(float *)((longlong)((longlong)TVar60 + 0x68) +
                     (longlong)(pTVar31->ShadowedValue + -0x1a));
  if (fVar80 <= fVar78) {
    fVar78 = fVar80;
  }
  if (fVar78 <= 0.0) {
    fVar78 = 0.0;
  }
  (param_5->NormalCurvatureToRoughnessScaleBias).field0_0x0._s_0.X = fVar78;
  pTVar31 = CVarNormalCurvatureToRoughnessBias.Ref;
  bVar35 = IsInParallelGameThread();
  if (bVar35) {
LAB_14550975d:
    TVar60 = TVar77;
  }
  else {
    bVar35 = IsInGameThread();
    TVar60 = (TIntPoint<int>_u_0)&DAT_00000004;
    if (bVar35) goto LAB_14550975d;
  }
  fVar78 = *(float *)((longlong)((longlong)TVar60 + 0x68) +
                     (longlong)(pTVar31->ShadowedValue + -0x1a));
  if (fVar81 <= fVar78) {
    fVar78 = fVar81;
  }
  if (fVar78 <= __real_bf800000) {
    fVar78 = __real_bf800000;
  }
  (param_5->NormalCurvatureToRoughnessScaleBias).field0_0x0._s_0.Y = fVar78;
  pTVar31 = CVarNormalCurvatureToRoughnessExponent.Ref;
  bVar35 = IsInParallelGameThread();
  if (bVar35) {
LAB_145509797:
    TVar60 = TVar77;
  }
  else {
    bVar35 = IsInGameThread();
    TVar60 = (TIntPoint<int>_u_0)&DAT_00000004;
    if (bVar35) goto LAB_145509797;
  }
  fVar78 = *(float *)((longlong)pTVar31[-0xd].ShadowedValue + (longlong)((longlong)TVar60 + 0x68));
  if (__real_41a00000 <= fVar78) {
    fVar78 = __real_41a00000;
  }
  if (fVar78 <= fVar79) {
    fVar78 = fVar79;
  }
  (param_5->NormalCurvatureToRoughnessScaleBias).field0_0x0._s_0.Z = fVar78;
  fVar78 = fVar81;
  if (*(char *)((longlong)&this->_padding_ + 4) == '\0') {
    fVar78 = 0.0;
  }
  param_5->RenderingReflectionCaptureMask = fVar78;
  param_5->RealTimeReflectionCapture = 0.0;
  pTVar31 = CVarSkyLightRealTimeReflectionCapturePreExposure.Ref;
  bVar35 = IsInParallelGameThread();
  if (bVar35) {
LAB_1455097f3:
    TVar60 = TVar77;
  }
  else {
    bVar35 = IsInGameThread();
    TVar60 = (TIntPoint<int>_u_0)&DAT_00000004;
    if (bVar35) goto LAB_1455097f3;
  }
  fVar80 = powf(fVar80,*(float *)((longlong)pTVar31[-0xd].ShadowedValue +
                                 (longlong)((longlong)TVar60 + 0x68)));
  param_5->RealTimeReflectionCapturePreExposure = fVar81 / fVar80;
  bVar35 = IsPrimitiveAlphaHoldoutEnabled(this);
  param_5->bPrimitiveAlphaHoldoutEnabled = (uint)bVar35;
  lVar42 = this->_padding_;
  *(longlong *)&(param_5->AmbientCubemapTint).field0_0x0 = this->_padding_;
  *(longlong *)((longlong)&(param_5->AmbientCubemapTint).field0_0x0 + 8) = lVar42;
  param_5->AmbientCubemapIntensity = *(float *)&this->_padding_;
  pTVar52 = DiaphragmDOF::CircleDofHalfCoc(&local_218,this);
  uVar92 = *(undefined8 *)((longlong)&pTVar52->field0_0x0 + 8);
  *(undefined8 *)&(param_5->CircleDOFParams).field0_0x0 = *(undefined8 *)&pTVar52->field0_0x0;
  *(undefined8 *)((longlong)&(param_5->CircleDOFParams).field0_0x0 + 8) = uVar92;
  pTVar53 = ComputePixelFormatQuantizationError(&local_358,*local_5d0);
  *(undefined8 *)&(param_5->SceneColorTextureFormatQuantizationError).field0_0x0 =
       *(undefined8 *)&pTVar53->field0_0x0;
  (param_5->SceneColorTextureFormatQuantizationError).field0_0x0._s_0.Z =
       (pTVar53->field0_0x0)._s_0.Z;
  if ((TVar40 == (TIntPoint<int>_u_0)0x0) ||
     (this_02 = *(FSkyLightSceneProxy **)((longlong)TVar40 + 0x2b38),
     this_02 == (FSkyLightSceneProxy *)0x0)) {
    fVar80 = 0.0;
    (param_5->SkyLightColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
    param_5->SkyLightApplyPrecomputedBentNormalShadowingFlag = 0.0;
    param_5->SkyLightAffectReflectionFlag = 0.0;
    param_5->SkyLightAffectGlobalIlluminationFlag = 0.0;
  }
  else {
    fVar78 = fVar81;
    if (this_02->bRealTimeCaptureEnabled != false) {
      fVar78 = fVar80;
    }
    if ((*(uint *)(this->_padding_ + 0x58) & 0x10000000) == 0) {
      pFVar55 = &local_3b8;
      local_3b8 = FLinearColor::Black.field0_0x0;
    }
    else {
      pFVar54 = FSkyLightSceneProxy::GetEffectiveLightColor(this_02,&local_208);
      pFVar55 = &local_570;
      local_570._s_0.R = (pFVar54->field0_0x0)._s_0.R * fVar78;
      local_570._s_0.G = (pFVar54->field0_0x0)._s_0.G * fVar78;
      local_570._s_0.B = (pFVar54->field0_0x0)._s_0.B * fVar78;
      local_570._s_0.A = (pFVar54->field0_0x0)._s_0.A * fVar78;
    }
    uVar92 = *(undefined8 *)((longlong)pFVar55 + 8);
    *(undefined8 *)&(param_5->SkyLightColor).field0_0x0 = *(undefined8 *)pFVar55;
    *(undefined8 *)((longlong)&(param_5->SkyLightColor).field0_0x0 + 8) = uVar92;
    fVar80 = fVar81;
    if (this_02->bCastShadows != '\x01' || this_02->bWantsStaticShadowing != '\x01') {
      fVar80 = 0.0;
    }
    param_5->SkyLightApplyPrecomputedBentNormalShadowingFlag = fVar80;
    fVar80 = fVar81;
    if (this_02->bAffectReflection == 0) {
      fVar80 = 0.0;
    }
    param_5->SkyLightAffectReflectionFlag = fVar80;
    if (this_02->bAffectGlobalIllumination == '\0') {
      param_5->SkyLightAffectGlobalIlluminationFlag = 0.0;
      fVar80 = this_02->VolumetricScatteringIntensity;
    }
    else {
      param_5->SkyLightAffectGlobalIlluminationFlag = fVar81;
      fVar80 = this_02->VolumetricScatteringIntensity;
    }
  }
  param_5->SkyLightVolumetricScatteringIntensity = fVar80;
  if (local_6e0 == ES3_1) {
    if ((((TVar40 == (TIntPoint<int>_u_0)0x0) || (*(longlong *)((longlong)TVar40 + 0x2b38) == 0)) ||
        (((*(byte *)(*(longlong *)((longlong)TVar40 + 0x2b38) + 0x20) & 4) != 0 &&
         (FReadOnlyCVARCache::bAllowStaticLighting != false)))) ||
       ((*(uint *)(this->_padding_ + 0x58) & 0x10000000) == 0)) {
      bVar35 = false;
      bVar37 = false;
      if (TVar40 != (TIntPoint<int>_u_0)0x0) goto LAB_1455099ef;
    }
    else {
      bVar37 = true;
LAB_1455099ef:
      bVar35 = bVar37;
      bVar37 = FScene::CanSampleSkyLightRealTimeCaptureData((FScene *)TVar40);
      if ((bVar37) && ((*(uint *)(this->_padding_ + 0x58) & 0x10000000) != 0)) {
        uVar92 = *(undefined8 *)((longlong)TVar40 + 0x2be8);
        *(undefined8 *)&(param_5->MobileSkyIrradianceEnvironmentMap).Elements[0].field0_0x0 =
             *(undefined8 *)((longlong)TVar40 + 0x2be0);
        *(undefined8 *)
         ((longlong)&(param_5->MobileSkyIrradianceEnvironmentMap).Elements[0].field0_0x0 + 8) =
             uVar92;
        uVar92 = *(undefined8 *)((longlong)TVar40 + 0x2bf8);
        *(undefined8 *)&(param_5->MobileSkyIrradianceEnvironmentMap).Elements[1].field0_0x0 =
             *(undefined8 *)((longlong)TVar40 + 0x2bf0);
        *(undefined8 *)
         ((longlong)&(param_5->MobileSkyIrradianceEnvironmentMap).Elements[1].field0_0x0 + 8) =
             uVar92;
        uVar92 = *(undefined8 *)((longlong)TVar40 + 0x2c08);
        *(undefined8 *)&(param_5->MobileSkyIrradianceEnvironmentMap).Elements[2].field0_0x0 =
             *(undefined8 *)((longlong)TVar40 + 0x2c00);
        *(undefined8 *)
         ((longlong)&(param_5->MobileSkyIrradianceEnvironmentMap).Elements[2].field0_0x0 + 8) =
             uVar92;
        uVar92 = *(undefined8 *)((longlong)TVar40 + 0x2c18);
        *(undefined8 *)&(param_5->MobileSkyIrradianceEnvironmentMap).Elements[3].field0_0x0 =
             *(undefined8 *)((longlong)TVar40 + 0x2c10);
        *(undefined8 *)
         ((longlong)&(param_5->MobileSkyIrradianceEnvironmentMap).Elements[3].field0_0x0 + 8) =
             uVar92;
        uVar92 = *(undefined8 *)((longlong)TVar40 + 0x2c28);
        *(undefined8 *)&(param_5->MobileSkyIrradianceEnvironmentMap).Elements[4].field0_0x0 =
             *(undefined8 *)((longlong)TVar40 + 0x2c20);
        *(undefined8 *)
         ((longlong)&(param_5->MobileSkyIrradianceEnvironmentMap).Elements[4].field0_0x0 + 8) =
             uVar92;
        uVar92 = *(undefined8 *)((longlong)TVar40 + 0x2c38);
        *(undefined8 *)&(param_5->MobileSkyIrradianceEnvironmentMap).Elements[5].field0_0x0 =
             *(undefined8 *)((longlong)TVar40 + 0x2c30);
        *(undefined8 *)
         ((longlong)&(param_5->MobileSkyIrradianceEnvironmentMap).Elements[5].field0_0x0 + 8) =
             uVar92;
        uVar92 = *(undefined8 *)((longlong)TVar40 + 0x2c48);
        *(undefined8 *)&(param_5->MobileSkyIrradianceEnvironmentMap).Elements[6].field0_0x0 =
             *(undefined8 *)((longlong)TVar40 + 0x2c40);
        *(undefined8 *)
         ((longlong)&(param_5->MobileSkyIrradianceEnvironmentMap).Elements[6].field0_0x0 + 8) =
             uVar92;
        uVar92 = *(undefined8 *)((longlong)TVar40 + 0x2c58);
        *(undefined8 *)&(param_5->MobileSkyIrradianceEnvironmentMap).Elements[7].field0_0x0 =
             *(undefined8 *)((longlong)TVar40 + 0x2c50);
        *(undefined8 *)
         ((longlong)&(param_5->MobileSkyIrradianceEnvironmentMap).Elements[7].field0_0x0 + 8) =
             uVar92;
        goto LAB_145509bbc;
      }
    }
    if (bVar35) {
      lVar42 = *(longlong *)((longlong)TVar40 + 0x2b38);
      local_2e8.R.V._0_8_ = *(undefined8 *)(lVar42 + 0x30);
      local_2e8.R.V._8_8_ = *(undefined8 *)(lVar42 + 0x38);
      local_2e8.R.V._16_8_ = *(undefined8 *)(lVar42 + 0x40);
      local_2e8.R.V._24_8_ = *(undefined8 *)(lVar42 + 0x48);
      local_2e8.R.V._32_8_ = *(undefined8 *)(lVar42 + 0x50);
      local_2e8.R.V._40_8_ = *(undefined8 *)(lVar42 + 0x58);
      local_2e8.G.V._0_8_ = *(undefined8 *)(lVar42 + 0x60);
      local_2e8.G.V._8_8_ = *(undefined8 *)(lVar42 + 0x68);
      local_2e8.G.V._16_8_ = *(undefined8 *)(lVar42 + 0x70);
      local_2e8.G.V._24_8_ = *(undefined8 *)(lVar42 + 0x78);
      local_2e8.G.V._32_8_ = *(undefined8 *)(lVar42 + 0x80);
      local_2e8.G.V._40_8_ = *(undefined8 *)(lVar42 + 0x88);
      local_2e8.B.V._0_8_ = *(undefined8 *)(lVar42 + 0x90);
      local_2e8.B.V._8_8_ = *(undefined8 *)(lVar42 + 0x98);
      local_2e8.B.V._16_8_ = *(undefined8 *)(lVar42 + 0xa0);
      local_2e8.B.V._24_8_ = *(undefined8 *)(lVar42 + 0xa8);
      local_2e8.B.V._32_8_ = *(undefined8 *)(lVar42 + 0xb0);
      local_2e8.B.V._40_8_ = *(undefined8 *)(lVar42 + 0xb8);
      SetupSkyIrradianceEnvironmentMapConstantsFromSkyIrradiance
                ((param_5->MobileSkyIrradianceEnvironmentMap).Elements,&local_2e8);
      (param_5->MobileSkyIrradianceEnvironmentMap).Elements[7].field0_0x0._s_0.X =
           *(float *)(*(longlong *)((longlong)TVar40 + 0x2b38) + 0x24);
    }
    else {
      *(undefined8 *)&(param_5->MobileSkyIrradianceEnvironmentMap).Elements[0].field0_0x0 = 0;
      *(undefined8 *)
       ((longlong)&(param_5->MobileSkyIrradianceEnvironmentMap).Elements[0].field0_0x0 + 8) = 0;
      *(undefined8 *)&(param_5->MobileSkyIrradianceEnvironmentMap).Elements[1].field0_0x0 = 0;
      *(undefined8 *)
       ((longlong)&(param_5->MobileSkyIrradianceEnvironmentMap).Elements[1].field0_0x0 + 8) = 0;
      *(undefined8 *)&(param_5->MobileSkyIrradianceEnvironmentMap).Elements[2].field0_0x0 = 0;
      *(undefined8 *)
       ((longlong)&(param_5->MobileSkyIrradianceEnvironmentMap).Elements[2].field0_0x0 + 8) = 0;
      *(undefined8 *)&(param_5->MobileSkyIrradianceEnvironmentMap).Elements[3].field0_0x0 = 0;
      *(undefined8 *)
       ((longlong)&(param_5->MobileSkyIrradianceEnvironmentMap).Elements[3].field0_0x0 + 8) = 0;
      *(undefined8 *)&(param_5->MobileSkyIrradianceEnvironmentMap).Elements[4].field0_0x0 = 0;
      *(undefined8 *)
       ((longlong)&(param_5->MobileSkyIrradianceEnvironmentMap).Elements[4].field0_0x0 + 8) = 0;
      *(undefined8 *)&(param_5->MobileSkyIrradianceEnvironmentMap).Elements[5].field0_0x0 = 0;
      *(undefined8 *)
       ((longlong)&(param_5->MobileSkyIrradianceEnvironmentMap).Elements[5].field0_0x0 + 8) = 0;
      *(undefined8 *)&(param_5->MobileSkyIrradianceEnvironmentMap).Elements[6].field0_0x0 = 0;
      *(undefined8 *)
       ((longlong)&(param_5->MobileSkyIrradianceEnvironmentMap).Elements[6].field0_0x0 + 8) = 0;
      *(undefined8 *)&(param_5->MobileSkyIrradianceEnvironmentMap).Elements[7].field0_0x0 = 0;
      *(undefined8 *)
       ((longlong)&(param_5->MobileSkyIrradianceEnvironmentMap).Elements[7].field0_0x0 + 8) = 0;
    }
  }
  else {
    pFVar58 = (FRHIShaderResourceView *)GIdentityPrimitiveBuffer._48_8_;
    if ((TVar40 != (TIntPoint<int>_u_0)0x0) &&
       (lVar42 = *(longlong *)((longlong)TVar40 + 0x2b40), lVar42 != 0)) {
      if ((*(longlong *)(lVar42 + 0x30) == 0) &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("CachedSRV",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                              ,0x4d2,
                              L"Only byte address and structured buffers can use the default GetSRV call"
                             ), bVar35)) {
        pcVar21 = (code *)swi(3);
        (*pcVar21)();
        return;
      }
      pFVar58 = *(FRHIShaderResourceView **)(lVar42 + 0x30);
    }
    param_5->SkyIrradianceEnvironmentMap = pFVar58;
  }
LAB_145509bbc:
  param_5->MobilePreviewMode = 0.0;
  fVar80 = fVar81;
  if (((int)this->_padding_ != 0) && (lVar42 = this->_padding_, 1 < *(int *)(lVar42 + 0x10))) {
    if ((*(int *)(lVar42 + 0x10) < 1) &&
       (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar35)) {
      pcVar21 = (code *)swi(3);
      (*pcVar21)();
      return;
    }
    plVar59 = *(longlong **)(lVar42 + 8);
    if ((*(int *)(lVar42 + 0x10) < 2) &&
       (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar35)) {
      pcVar21 = (code *)swi(3);
      (*pcVar21)();
      return;
    }
    lVar50 = this->_padding_;
    fVar80 = (float)(*(int *)(*(longlong *)(*(longlong *)(lVar42 + 8) + 8) + 0x1c38) -
                    *(int *)(*plVar59 + 0x1c30));
    if ((*(int *)(lVar50 + 0x10) < 2) &&
       (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar35)) {
      pcVar21 = (code *)swi(3);
      (*pcVar21)();
      return;
    }
    lVar42 = *(longlong *)(lVar50 + 8);
    if ((*(int *)(lVar50 + 0x10) < 1) &&
       (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar35)) {
      pcVar21 = (code *)swi(3);
      (*pcVar21)();
      return;
    }
    fVar80 = (fVar80 - (float)(*(int *)(*(longlong *)(lVar42 + 8) + 0x1c30) -
                              *(int *)(**(longlong **)(lVar50 + 8) + 0x1c38))) / fVar80;
  }
  param_5->HMDEyePaddingOffset = fVar80;
  uVar68 = UReflectionCaptureComponent::GetReflectionCaptureSize();
  local_4f8 = 0x1f;
  if (uVar68 != 0) {
    for (; uVar68 >> local_4f8 == 0; local_4f8 = local_4f8 - 1) {
    }
  }
  TVar60 = TVar77;
  if (uVar68 != 0) {
    TVar60._s_0.Y = 0;
    TVar60._s_0.X = local_4f8;
  }
  param_5->ReflectionCubemapMaxMip = (float)(longlong)TVar60;
  fVar80 = fVar81;
  if ((*(uint *)(this->_padding_ + 0x48) & 0x40000) == 0) {
    fVar80 = 0.0;
  }
  param_5->ShowDecalsMask = fVar80;
  param_5->DistanceFieldAOSpecularOcclusionMode = GDistanceFieldAOSpecularOcclusionMode;
  fVar80 = fVar81;
  if (TVar40 != (TIntPoint<int>_u_0)0x0) {
    fVar80 = *(float *)((longlong)TVar40 + 0x4c18);
  }
  param_5->IndirectCapsuleSelfShadowingIntensity = fVar80;
  pTVar44 = GetReflectionEnvironmentRoughnessMixingScaleBiasAndLargestWeight(&local_1c0);
  dVar15 = (pTVar44->field0_0x0)._s_0.Y;
  dVar8 = (pTVar44->field0_0x0)._s_0.Z;
  (param_5->ReflectionEnvironmentRoughnessMixingScaleBiasAndLargestWeight).field0_0x0._s_0.X =
       (float)(pTVar44->field0_0x0)._s_0.X;
  (param_5->ReflectionEnvironmentRoughnessMixingScaleBiasAndLargestWeight).field0_0x0._s_0.Y =
       (float)dVar15;
  (param_5->ReflectionEnvironmentRoughnessMixingScaleBiasAndLargestWeight).field0_0x0._s_0.Z =
       (float)dVar8;
  uVar68 = *(uint *)((longlong)&this->_padding_ + 4);
  if (uVar68 == 0xffffffff) {
    uVar68 = uVar62;
  }
  param_5->StereoPassIndex = uVar68;
  pIVar19 = (GEngine->XRSystem).Object;
  if (pIVar19 == (IXRTrackingSystem *)0x0) {
    pTVar70 = (TReferenceControllerBase<1> *)0x0;
    local_398 = 0;
    local_390 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_738 = (double *)0x0;
    local_730 = 0;
  }
  else {
    plVar56 = (longlong *)(**(code **)((longlong)*pIVar19 + 0x110))(pIVar19,local_3a8,0);
    plVar59 = (longlong *)*plVar56;
    pTVar70 = (TReferenceControllerBase<1> *)plVar56[1];
    plVar56[1] = 0;
    *plVar56 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3a0);
    local_738 = (double *)0x0;
    local_730 = 0;
    if (((plVar59 != (longlong *)0x0) &&
        (cVar36 = (**(code **)(*plVar59 + 0x48))(plVar59,&local_738), cVar36 != '\0')) &&
       ((int)local_730 == 4)) {
      dVar15 = local_738[2];
      dVar8 = local_738[3];
      dVar82 = local_738[1];
      (param_5->XRPassthroughCameraUVs).Elements[0].field0_0x0._s_0.X = (float)*local_738;
      (param_5->XRPassthroughCameraUVs).Elements[0].field0_0x0._s_0.Y = (float)dVar82;
      (param_5->XRPassthroughCameraUVs).Elements[0].field0_0x0._s_0.Z = (float)dVar15;
      (param_5->XRPassthroughCameraUVs).Elements[0].field0_0x0._s_0.W = (float)dVar8;
      fVar95 = (float)local_738[5];
      fVar80 = (float)local_738[6];
      fVar78 = (float)local_738[4];
      fVar79 = (float)local_738[7];
      goto LAB_145509ff2;
    }
  }
  *(undefined8 *)&(param_5->XRPassthroughCameraUVs).Elements[0].field0_0x0 = 0;
  (param_5->XRPassthroughCameraUVs).Elements[0].field0_0x0._s_0.Z = 0.0;
  (param_5->XRPassthroughCameraUVs).Elements[0].field0_0x0._s_0.W = 1.0;
  fVar80 = fVar81;
  fVar78 = fVar81;
  fVar79 = fVar81;
LAB_145509ff2:
  (param_5->XRPassthroughCameraUVs).Elements[1].field0_0x0._s_0.X = fVar78;
  (param_5->XRPassthroughCameraUVs).Elements[1].field0_0x0._s_0.Y = fVar95;
  (param_5->XRPassthroughCameraUVs).Elements[1].field0_0x0._s_0.Z = fVar80;
  (param_5->XRPassthroughCameraUVs).Elements[1].field0_0x0._s_0.W = fVar79;
  if (local_738 != (double *)0x0) {
    FMemory::Free(local_738);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar70);
  uVar68 = uVar62;
  if ((this->_padding_ & 2) != 0) {
    uVar68 = GFarShadowStaticMeshLODBias;
  }
  param_5->FarShadowStaticMeshLODBias = uVar68;
  this_03 = (GEngine->PreIntegratedSkinBRDFTexture).field0_0x0.DebugPtr;
  if ((this_03 != (UTexture2D *)0x0) &&
     (pFVar57 = UTexture::GetResource((UTexture *)this_03), pFVar57 != (FTextureResource *)0x0)) {
    param_5->PreIntegratedBRDF = (FRHITexture *)pFVar57->_padding_;
  }
  if (this->ViewState == (FSceneViewState *)0x0) {
    uVar68 = *(uint *)(this->_padding_ + 0xa0);
  }
  else {
    uVar68 = this->ViewState->FrameIndex;
  }
  local_560.BufferUAV = (FRHIUnorderedAccessView *)0x0;
  local_560.BufferSize = 0;
  local_560.TileShift = 0;
  local_560.TileMask = 0;
  local_560.TileJitterOffset = 0;
  local_560.SampleOffset = 0;
  local_560.ExtendedDebugBufferSize = 0;
  VirtualTexture::GetFeedbackShaderParams(uVar68,*(int *)(this->_padding_ + 0x10c),&local_560);
  VirtualTexture::UpdateViewUniformShaderParameters(&local_560,param_5);
  this_04 = FVirtualTextureSystem::Get();
  pTVar52 = FVirtualTextureSystem::GetGlobalMipBias(this_04,&local_1f8);
  uVar92 = *(undefined8 *)((longlong)&pTVar52->field0_0x0 + 8);
  *(undefined8 *)&(param_5->GlobalVirtualTextureMipBias).field0_0x0 =
       *(undefined8 *)&pTVar52->field0_0x0;
  *(undefined8 *)((longlong)&(param_5->GlobalVirtualTextureMipBias).field0_0x0 + 8) = uVar92;
  if ((GSystemTextures._136_8_ != 0) && (GSystemTextures._144_8_ != 0)) {
    param_5->GGXLTCMatTexture = *(FRHITexture **)(GSystemTextures._136_8_ + 8);
    param_5->GGXLTCAmpTexture = *(FRHITexture **)(GSystemTextures._144_8_ + 8);
  }
  if (GSystemTextures._152_8_ != 0) {
    param_5->SheenLTCTexture = *(FRHITexture **)(GSystemTextures._152_8_ + 8);
  }
  pFVar51 = param_5->GGXLTCMatTexture;
  if (((pFVar51 == (FRHITexture *)0x0) &&
      (pFVar51 = (GBlackTexture->TextureRHI).Reference, pFVar51 == (FRHITexture *)0x0)) &&
     (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                         ("Result",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\TextureFallbacks.h"
                          ,0x11,L""), bVar35)) {
    pcVar21 = (code *)swi(3);
    (*pcVar21)();
    return;
  }
  param_5->GGXLTCMatTexture = pFVar51;
  pFVar51 = param_5->GGXLTCAmpTexture;
  if (((pFVar51 == (FRHITexture *)0x0) &&
      (pFVar51 = (GBlackTexture->TextureRHI).Reference, pFVar51 == (FRHITexture *)0x0)) &&
     (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                         ("Result",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\TextureFallbacks.h"
                          ,0x11,L""), bVar35)) {
    pcVar21 = (code *)swi(3);
    (*pcVar21)();
    return;
  }
  param_5->GGXLTCAmpTexture = pFVar51;
  pFVar51 = param_5->SheenLTCTexture;
  if (((pFVar51 == (FRHITexture *)0x0) &&
      (pFVar51 = (GBlackTexture->TextureRHI).Reference, pFVar51 == (FRHITexture *)0x0)) &&
     (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                         ("Result",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\TextureFallbacks.h"
                          ,0x11,L""), bVar35)) {
    pcVar21 = (code *)swi(3);
    (*pcVar21)();
    return;
  }
  param_5->SheenLTCTexture = pFVar51;
  param_5->GGXLTCMatSampler =
       TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  param_5->GGXLTCAmpSampler =
       TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  param_5->SheenLTCSampler =
       TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  pFVar51 = RectLightAtlas::GetAtlasTexture();
  if ((pFVar51 != (FRHITexture *)0x0) ||
     ((GSystemTextures._40_8_ != 0 &&
      (pFVar51 = *(FRHITexture **)(GSystemTextures._40_8_ + 8), pFVar51 != (FRHITexture *)0x0)))) {
    lVar42 = (**(code **)(pFVar51->_padding_ + 0x20))(pFVar51);
    cVar36 = *(char *)(lVar42 + 0x32);
    if ((cVar36 == '\0') ||
       ((((cVar36 == '\x01' || (cVar36 == '\x02')) || (cVar36 == '\x03')) ||
        (uVar68 = uVar62, uVar76 = uVar62, cVar36 == '\x04')))) {
      uVar68 = *(uint *)(lVar42 + 0x24);
      uVar76 = *(uint *)(lVar42 + 0x28);
    }
    param_5->RectLightAtlasTexture = pFVar51;
    param_5->RectLightAtlasSampler =
         TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource.StateRHI.Reference;
    lVar42 = (**(code **)(pFVar51->_padding_ + 0x20))(pFVar51);
    param_5->RectLightAtlasMaxMipLevel = (float)(*(byte *)(lVar42 + 0x30) - 1);
    (param_5->RectLightAtlasSizeAndInvSize).field0_0x0._s_0.X = (float)(int)uVar68;
    (param_5->RectLightAtlasSizeAndInvSize).field0_0x0._s_0.Y = (float)(int)uVar76;
    (param_5->RectLightAtlasSizeAndInvSize).field0_0x0._s_0.Z = fVar81 / (float)(int)uVar68;
    (param_5->RectLightAtlasSizeAndInvSize).field0_0x0._s_0.W = fVar81 / (float)(int)uVar76;
  }
  pFVar51 = param_5->RectLightAtlasTexture;
  if (((pFVar51 == (FRHITexture *)0x0) &&
      (pFVar51 = (GBlackTexture->TextureRHI).Reference, pFVar51 == (FRHITexture *)0x0)) &&
     (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                         ("Result",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\TextureFallbacks.h"
                          ,0x11,L""), bVar35)) {
    pcVar21 = (code *)swi(3);
    (*pcVar21)();
    return;
  }
  param_5->RectLightAtlasTexture = pFVar51;
  pFVar51 = IESAtlas::GetAtlasTexture();
  if ((pFVar51 != (FRHITexture *)0x0) ||
     ((GSystemTextures._56_8_ != 0 &&
      (pFVar51 = *(FRHITexture **)(GSystemTextures._56_8_ + 8), pFVar51 != (FRHITexture *)0x0)))) {
    lVar42 = (**(code **)(pFVar51->_padding_ + 0x20))(pFVar51);
    cVar36 = *(char *)(lVar42 + 0x32);
    if ((cVar36 == '\0') ||
       ((((cVar36 == '\x01' || (cVar36 == '\x02')) || (cVar36 == '\x03')) ||
        (uVar68 = uVar62, cVar36 == '\x04')))) {
      uVar62 = *(uint *)(lVar42 + 0x24);
      uVar68 = *(uint *)(lVar42 + 0x28);
    }
    param_5->IESAtlasTexture = pFVar51;
    param_5->IESAtlasSampler =
         TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource.StateRHI.Reference;
    (param_5->IESAtlasSizeAndInvSize).field0_0x0._s_0.X = (float)(int)uVar62;
    (param_5->IESAtlasSizeAndInvSize).field0_0x0._s_0.Y = (float)(int)uVar68;
    (param_5->IESAtlasSizeAndInvSize).field0_0x0._s_0.Z = fVar81 / (float)(int)uVar62;
    (param_5->IESAtlasSizeAndInvSize).field0_0x0._s_0.W = fVar81 / (float)(int)uVar68;
  }
  pFVar51 = param_5->IESAtlasTexture;
  if (((pFVar51 == (FRHITexture *)0x0) &&
      (pFVar51 = (GBlackArrayTexture->TextureRHI).Reference, pFVar51 == (FRHITexture *)0x0)) &&
     (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                         ("Result",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\TextureFallbacks.h"
                          ,0x18,L""), bVar35)) {
    pcVar21 = (code *)swi(3);
    (*pcVar21)();
    return;
  }
  param_5->IESAtlasTexture = pFVar51;
  SetUpViewHairRenderInfo
            (this,&param_5->HairRenderInfo,&param_5->HairRenderInfoBits,&param_5->HairComponents);
  param_5->HairScatteringLUTTexture = (FRHITexture *)0x0;
  if (((GSystemTextures._112_8_ == 0) ||
      (pFVar51 = *(FRHITexture **)(GSystemTextures._112_8_ + 8), pFVar51 == (FRHITexture *)0x0)) &&
     ((pFVar51 = (GBlackVolumeTexture->TextureRHI).Reference, pFVar51 == (FRHITexture *)0x0 &&
      ((pFVar51 = (GBlackTexture->TextureRHI).Reference, pFVar51 == (FRHITexture *)0x0 &&
       (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                           ("Result",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\TextureFallbacks.h"
                            ,0x11,L""), bVar35)))))) {
    pcVar21 = (code *)swi(3);
    (*pcVar21)();
    return;
  }
  param_5->HairScatteringLUTTexture = pFVar51;
  param_5->HairScatteringLUTSampler =
       TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  ShadingEnergyConservation::GetData(&local_598,this);
  param_5->bShadingEnergyConservation = (uint)(local_598.bEnergyConservation != false);
  param_5->bShadingEnergyPreservation = (uint)(local_598.bEnergyPreservation != false);
  TVar40 = TVar77;
  if (local_598.GGXSpecEnergyTexture.Reference != (IPooledRenderTarget *)0x0) {
    TVar40 = (TIntPoint<int>_u_0)
             ((local_598.GGXSpecEnergyTexture.Reference)->RenderTargetItem).TargetableTexture.
             Reference;
  }
  param_5->ShadingEnergyGGXSpecTexture = (FRHITexture *)TVar40;
  TVar40 = TVar77;
  if (local_598.GGXGlassEnergyTexture.Reference != (IPooledRenderTarget *)0x0) {
    TVar40 = (TIntPoint<int>_u_0)
             ((local_598.GGXGlassEnergyTexture.Reference)->RenderTargetItem).TargetableTexture.
             Reference;
  }
  param_5->ShadingEnergyGGXGlassTexture = (FRHITexture *)TVar40;
  TVar40 = TVar77;
  if (local_598.ClothEnergyTexture.Reference != (IPooledRenderTarget *)0x0) {
    TVar40 = (TIntPoint<int>_u_0)
             ((local_598.ClothEnergyTexture.Reference)->RenderTargetItem).TargetableTexture.
             Reference;
  }
  param_5->ShadingEnergyClothSpecTexture = (FRHITexture *)TVar40;
  TVar40 = TVar77;
  if (local_598.DiffuseEnergyTexture.Reference != (IPooledRenderTarget *)0x0) {
    TVar40 = (TIntPoint<int>_u_0)
             ((local_598.DiffuseEnergyTexture.Reference)->RenderTargetItem).TargetableTexture.
             Reference;
  }
  param_5->ShadingEnergyDiffuseTexture = (FRHITexture *)TVar40;
  if (local_598.DiffuseEnergyTexture.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_598.DiffuseEnergyTexture.Reference)->_padding_ + 0x38))
              (local_598.DiffuseEnergyTexture.Reference);
  }
  if (local_598.ClothEnergyTexture.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_598.ClothEnergyTexture.Reference)->_padding_ + 0x38))
              (local_598.ClothEnergyTexture.Reference);
  }
  if (local_598.GGXGlassEnergyTexture.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_598.GGXGlassEnergyTexture.Reference)->_padding_ + 0x38))
              (local_598.GGXGlassEnergyTexture.Reference);
  }
  if (local_598.GGXSpecEnergyTexture.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_598.GGXSpecEnergyTexture.Reference)->_padding_ + 0x38))();
  }
  pFVar51 = param_5->ShadingEnergyGGXSpecTexture;
  if (((pFVar51 == (FRHITexture *)0x0) &&
      (pFVar51 = (GBlackTexture->TextureRHI).Reference, pFVar51 == (FRHITexture *)0x0)) &&
     (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                         ("Result",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\TextureFallbacks.h"
                          ,0x11,L""), bVar35)) {
    pcVar21 = (code *)swi(3);
    (*pcVar21)();
    return;
  }
  param_5->ShadingEnergyGGXSpecTexture = pFVar51;
  pFVar51 = param_5->ShadingEnergyGGXGlassTexture;
  if (((pFVar51 == (FRHITexture *)0x0) &&
      (pFVar51 = (GBlackVolumeTexture->TextureRHI).Reference, pFVar51 == (FRHITexture *)0x0)) &&
     ((pFVar51 = (GBlackTexture->TextureRHI).Reference, pFVar51 == (FRHITexture *)0x0 &&
      (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\TextureFallbacks.h"
                           ,0x11,L""), bVar35)))) {
    pcVar21 = (code *)swi(3);
    (*pcVar21)();
    return;
  }
  param_5->ShadingEnergyGGXGlassTexture = pFVar51;
  pFVar51 = param_5->ShadingEnergyClothSpecTexture;
  if (((pFVar51 == (FRHITexture *)0x0) &&
      (pFVar51 = (GBlackTexture->TextureRHI).Reference, pFVar51 == (FRHITexture *)0x0)) &&
     (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                         ("Result",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\TextureFallbacks.h"
                          ,0x11,L""), bVar35)) {
    pcVar21 = (code *)swi(3);
    (*pcVar21)();
    return;
  }
  param_5->ShadingEnergyClothSpecTexture = pFVar51;
  pFVar51 = param_5->ShadingEnergyDiffuseTexture;
  if (((pFVar51 == (FRHITexture *)0x0) &&
      (pFVar51 = (GBlackTexture->TextureRHI).Reference, pFVar51 == (FRHITexture *)0x0)) &&
     (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                         ("Result",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\TextureFallbacks.h"
                          ,0x11,L""), bVar35)) {
    pcVar21 = (code *)swi(3);
    (*pcVar21)();
    return;
  }
  param_5->ShadingEnergyDiffuseTexture = pFVar51;
  param_5->ShadingEnergySampler =
       TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  param_5->GlintSampler =
       TStaticStateRHI<TStaticSamplerState<2,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  if (this->ViewState != (FSceneViewState *)0x0) {
    TVar40 = (TIntPoint<int>_u_0)(this->ViewState->GlintShadingLUTsData).RHIGlintShadingLUTs;
    TVar60 = TVar77;
    if (TVar40 != (TIntPoint<int>_u_0)0x0) {
      TVar60 = TVar40;
    }
    param_5->GlintTexture = (FRHITexture *)TVar60;
    fVar95 = Substrate::GlintLevelBias();
    pFVar18 = this->ViewState;
    fVar81 = (float)(pFVar18->GlintShadingLUTsData).Dictionary_N;
    fVar80 = (float)(pFVar18->GlintShadingLUTsData).Dictionary_NLevels;
    (param_5->GlintLUTParameters0).field0_0x0._s_0.X =
         (pFVar18->GlintShadingLUTsData).Dictionary_Alpha;
    (param_5->GlintLUTParameters0).field0_0x0._s_0.Y = fVar81;
    (param_5->GlintLUTParameters0).field0_0x0._s_0.Z = fVar80;
    (param_5->GlintLUTParameters0).field0_0x0._s_0.W = fVar95;
    fVar81 = Substrate::GlintLevelMin();
    (param_5->GlintLUTParameters1).field0_0x0._s_0.X = fVar81;
    *(undefined8 *)((longlong)&(param_5->GlintLUTParameters1).field0_0x0 + 4) = 0;
    (param_5->GlintLUTParameters1).field0_0x0._s_0.W = 0.0;
  }
  pFVar51 = param_5->GlintTexture;
  if (((pFVar51 == (FRHITexture *)0x0) &&
      (pFVar51 = (GBlackArrayTexture->TextureRHI).Reference, pFVar51 == (FRHITexture *)0x0)) &&
     (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                         ("Result",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\TextureFallbacks.h"
                          ,0x18,L""), bVar35)) {
    pcVar21 = (code *)swi(3);
    (*pcVar21)();
    return;
  }
  param_5->GlintTexture = pFVar51;
  param_5->SimpleVolumeTextureSampler =
       TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  param_5->SimpleVolumeEnvTextureSampler =
       TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  pUVar20 = (GEngine->SimpleVolumeTexture).field0_0x0.DebugPtr;
  if ((pUVar20 != (UVolumeTexture *)0x0) &&
     (pFVar57 = UTexture::GetResource((UTexture *)pUVar20), pFVar57 != (FTextureResource *)0x0)) {
    TVar40 = TVar77;
    if (*(ETextureDimension *)(pFVar57->_padding_ + 0x112) == Texture3D) {
      TVar40 = (TIntPoint<int>_u_0)pFVar57->_padding_;
    }
    param_5->SimpleVolumeTexture = (FRHITexture *)TVar40;
  }
  pFVar51 = param_5->SimpleVolumeTexture;
  if ((((pFVar51 == (FRHITexture *)0x0) &&
       (pFVar51 = (GBlackVolumeTexture->TextureRHI).Reference, pFVar51 == (FRHITexture *)0x0)) &&
      (pFVar51 = (GBlackTexture->TextureRHI).Reference, pFVar51 == (FRHITexture *)0x0)) &&
     (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                         ("Result",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\TextureFallbacks.h"
                          ,0x11,L""), bVar35)) {
    pcVar21 = (code *)swi(3);
    (*pcVar21)();
    return;
  }
  param_5->SimpleVolumeTexture = pFVar51;
  pUVar20 = (GEngine->SimpleVolumeEnvTexture).field0_0x0.DebugPtr;
  if ((pUVar20 != (UVolumeTexture *)0x0) &&
     (pFVar57 = UTexture::GetResource((UTexture *)pUVar20), pFVar57 != (FTextureResource *)0x0)) {
    if (*(ETextureDimension *)(pFVar57->_padding_ + 0x112) == Texture3D) {
      TVar77 = (TIntPoint<int>_u_0)pFVar57->_padding_;
    }
    param_5->SimpleVolumeEnvTexture = (FRHITexture *)TVar77;
  }
  pFVar51 = param_5->SimpleVolumeEnvTexture;
  if (((pFVar51 == (FRHITexture *)0x0) &&
      (pFVar51 = (GBlackVolumeTexture->TextureRHI).Reference, pFVar51 == (FRHITexture *)0x0)) &&
     ((pFVar51 = (GBlackTexture->TextureRHI).Reference, pFVar51 == (FRHITexture *)0x0 &&
      (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\TextureFallbacks.h"
                           ,0x11,L""), bVar35)))) {
    pcVar21 = (code *)swi(3);
    (*pcVar21)();
    return;
  }
  param_5->SimpleVolumeEnvTexture = pFVar51;
  if ((this->_padding_ == 0) ||
     ((FRHIShaderResourceView *)this->_padding_ == (FRHIShaderResourceView *)0x0)) {
    param_5->WaterIndirection = (GWhiteVertexBufferWithSRV->ShaderResourceViewRHI).Reference;
    pFVar58 = (GWhiteVertexBufferWithSRV->ShaderResourceViewRHI).Reference;
  }
  else {
    param_5->WaterIndirection = (FRHIShaderResourceView *)this->_padding_;
    pFVar58 = (FRHIShaderResourceView *)this->_padding_;
  }
  param_5->WaterData = pFVar58;
  param_5->WaterInfoTextureViewIndex = (int)this->_padding_;
  if ((this->_padding_ == 0) ||
     ((FRHIShaderResourceView *)this->_padding_ == (FRHIShaderResourceView *)0x0)) {
    param_5->LandscapeIndirection = (GWhiteVertexBufferWithSRV->ShaderResourceViewRHI).Reference;
    pFVar58 = (GWhiteVertexBufferWithSRV->ShaderResourceViewRHI).Reference;
  }
  else {
    param_5->LandscapeIndirection = (FRHIShaderResourceView *)this->_padding_;
    pFVar58 = (FRHIShaderResourceView *)this->_padding_;
  }
  param_5->LandscapePerComponentData = pFVar58;
  param_5->GPUSceneViewId = this->SceneRendererPrimaryViewId;
  GetBlueNoiseParametersForView((FBlueNoiseParameters *)&local_388._s_0);
  param_5->BlueNoiseScalarTexture = local_368;
  *(undefined8 *)&(param_5->BlueNoiseDimensions).field0_0x0 = local_388._0_8_;
  (param_5->BlueNoiseDimensions).field0_0x0._s_0.Z = local_388._s_0.Z;
  *(undefined8 *)&(param_5->BlueNoiseModuloMasks).field0_0x0 = local_378;
  (param_5->BlueNoiseModuloMasks).field0_0x0._s_0.Z = local_370;
  return;
}

// ShouldUpdateEyeAdaptationBuffer @ 14550ae70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

bool __thiscall FViewInfo::ShouldUpdateEyeAdaptationBuffer(FViewInfo *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("EyeAdaptationViewState",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                       ,0x96b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((FSceneViewState *)this->_padding_ == this->ViewState) {
    return true;
  }
  return (bool)(~(byte)((FSceneViewState *)this->_padding_)->_padding_ & 1);
}

// SwapEyeAdaptationBuffers @ 14550b190

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

void __thiscall FViewInfo::SwapEyeAdaptationBuffers(FViewInfo *this)

{
  if (this->_padding_ != 0) {
    FSceneViewState::FEyeAdaptationManager::SwapBuffers
              ((FEyeAdaptationManager *)(this->_padding_ + 0xf68));
    return;
  }
  return;
}

// UpdateEyeAdaptationLastExposureFromBuffer @ 14550f000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

void __thiscall FViewInfo::UpdateEyeAdaptationLastExposureFromBuffer(FViewInfo *this)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  if (((lVar1 != 0) && (*(char *)(lVar1 + 0xf64) != '\0')) && ((*(byte *)(lVar1 + 8) & 1) != 0)) {
    FSceneViewState::FEyeAdaptationManager::UpdateLastExposureFromBuffer
              ((FEyeAdaptationManager *)(lVar1 + 0xf68));
    return;
  }
  return;
}

// VerifyMembersChecks @ 14550f880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

bool __thiscall FViewInfo::VerifyMembersChecks(FViewInfo *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  FSceneView::VerifyMembersChecks((FSceneView *)this);
  if (this->ViewState != (FSceneViewState *)this->_padding_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ViewState == State",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                       ,0x46c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return true;
}

// IsDistanceCulled @ 145547150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

bool __thiscall
FViewInfo::IsDistanceCulled
          (FViewInfo *this,float param_1,float param_2,float param_3,FPrimitiveSceneInfo *param_4)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  FCachedSystemScalabilityCVars *pFVar4;
  byte bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 local_res18;
  
  pFVar4 = GetCachedScalabilityCVars();
  fVar8 = GDistanceFadeMaxTravel;
  if (GDisableLODFade != 0) {
    fVar8 = 0.0;
  }
  fVar7 = pFVar4->ViewDistanceScale * param_2;
  fVar6 = pFVar4->ViewDistanceScale * param_3;
  if (param_3 == __real_7f7fffff) {
    bVar3 = false;
    if (param_2 <= 0.0) {
      return false;
    }
  }
  else {
    bVar3 = true;
  }
  bVar1 = false;
  if (((*(uint *)(this->_padding_ + 0x58) & 0x2000000) != 0) &&
     (cVar2 = (**(code **)(param_4->Proxy->_padding_ + 0x178))(), cVar2 == '\0')) {
    return false;
  }
  if (((bVar3) && ((fVar6 + fVar8) * (fVar6 + fVar8) < param_1)) ||
     ((0.0 < param_2 && (param_1 < fVar7 * fVar7)))) {
LAB_1455472ef:
    bVar3 = true;
  }
  else {
    if ((!bVar3) || (param_1 <= fVar6 * fVar6)) {
      bVar5 = 0;
      if (bVar3) goto LAB_145547294;
LAB_1455472a7:
      bVar3 = false;
    }
    else {
      bVar5 = 1;
LAB_145547294:
      if (param_1 <= (fVar6 - fVar8) * (fVar6 - fVar8)) goto LAB_1455472a7;
      bVar3 = true;
    }
    if ((((GDisableLODFade == 0) && (bVar3)) && (this->_padding_ != 0)) &&
       ((*(char *)((longlong)&this->_padding_ + 1) == '\0' &&
        (cVar2 = (**(code **)(param_4->Proxy->_padding_ + 0x148))(), cVar2 != '\0')))) {
      bVar1 = true;
      local_res18 = bVar5 ^ 1;
    }
    if (bVar5 == 0) {
      if (!bVar1) {
        return false;
      }
    }
    else if (!bVar1) goto LAB_1455472ef;
    bVar3 = UpdatePrimitiveFadingState(this,param_4,(bool)local_res18);
  }
  return bVar3;
}

// IsDistanceCulled_AnyThread @ 145547360

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

bool __thiscall
FViewInfo::IsDistanceCulled_AnyThread
          (FViewInfo *this,float param_1,float param_2,float param_3,FPrimitiveSceneInfo *param_4,
          bool *param_5,bool *param_6)

{
  bool bVar1;
  char cVar2;
  FCachedSystemScalabilityCVars *pFVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  pFVar3 = GetCachedScalabilityCVars();
  fVar7 = GDistanceFadeMaxTravel;
  if (GDisableLODFade != 0) {
    fVar7 = 0.0;
  }
  fVar6 = pFVar3->ViewDistanceScale * param_2;
  fVar5 = pFVar3->ViewDistanceScale * param_3;
  if (param_3 == __real_7f7fffff) {
    bVar1 = false;
    *param_5 = false;
    if (param_2 <= 0.0) {
      return false;
    }
  }
  else {
    bVar1 = true;
    *param_5 = false;
  }
  if (((*(uint *)(this->_padding_ + 0x58) & 0x2000000) != 0) &&
     (cVar2 = (**(code **)(param_4->Proxy->_padding_ + 0x178))(), cVar2 == '\0')) {
    return false;
  }
  if ((bVar1) && ((fVar5 + fVar7) * (fVar5 + fVar7) < param_1)) {
    return true;
  }
  if ((0.0 < param_2) && (param_1 < fVar6 * fVar6)) {
    return true;
  }
  if ((!bVar1) || (param_1 <= fVar5 * fVar5)) {
    bVar4 = 0;
    if (bVar1) goto LAB_145547491;
  }
  else {
    bVar4 = 1;
LAB_145547491:
    if ((fVar5 - fVar7) * (fVar5 - fVar7) < param_1) {
      bVar1 = true;
      goto LAB_1455474a6;
    }
  }
  bVar1 = false;
LAB_1455474a6:
  if ((((GDisableLODFade == 0) && (bVar1)) && (this->_padding_ != 0)) &&
     ((*(char *)((longlong)&this->_padding_ + 1) == '\0' &&
      (cVar2 = (**(code **)(param_4->Proxy->_padding_ + 0x148))(), cVar2 != '\0')))) {
    *param_5 = true;
    *param_6 = (bool)(bVar4 ^ 1);
  }
  if ((bVar4 != 0) && (*param_5 == false)) {
    return true;
  }
  return false;
}

// UpdatePrimitiveFadingState @ 1455554e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

bool __thiscall
FViewInfo::UpdatePrimitiveFadingState(FViewInfo *this,FPrimitiveSceneInfo *param_1,bool param_2)

{
  uchar *puVar1;
  longlong lVar2;
  TUniformBufferRef<FDistanceCullFadeUniformShaderParameters> TVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  FPrimitiveFadingState *pFVar8;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  bool bVar13;
  
  bVar13 = false;
  uVar10 = param_1->PackedIndex;
  uVar12 = 1 << ((byte)uVar10 & 0x1f);
  pTVar9 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
            *)(this->PotentiallyFadingPrimitiveMap).AllocatorInstance.SecondaryData.Data;
  lVar2 = ((longlong)(int)uVar10 >> 5) * 4;
  if (pTVar9 == (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)0x0) {
    pTVar9 = &this->PotentiallyFadingPrimitiveMap;
  }
  if ((*(uint *)((pTVar9->AllocatorInstance).InlineData + lVar2) & uVar12) == 0) {
    pFVar8 = TMapBase<FPrimitiveComponentId,FPrimitiveFadingState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FPrimitiveFadingState,0>_>
             ::FindOrAddImpl<FPrimitiveComponentId_const_&>
                       ((TMapBase<FPrimitiveComponentId,FPrimitiveFadingState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FPrimitiveFadingState,0>_>
                         *)(this->_padding_ + 0x500),(param_1->PrimitiveComponentId).PrimIDValue,
                        &param_1->PrimitiveComponentId);
    UpdatePrimitiveFadingStateHelper(pFVar8,this,param_2);
    TVar3 = pFVar8->UniformBuffer;
    bVar13 = TVar3 != (TUniformBufferRef<FDistanceCullFadeUniformShaderParameters>)0x0;
    uVar7 = 0;
    if ((int)uVar10 < (this->PrimitiveFadeUniformBuffers).ArrayNum) {
      uVar7 = ~uVar10 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    *(TUniformBufferRef<FDistanceCullFadeUniformShaderParameters> *)
     ((this->PrimitiveFadeUniformBuffers).AllocatorInstance.Data + (int)uVar10) = TVar3;
    if (((int)uVar10 < 0) || ((this->PrimitiveFadeUniformBufferMap).NumBits <= (int)uVar10)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    pTVar9 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
              *)(this->PrimitiveFadeUniformBufferMap).AllocatorInstance.SecondaryData.Data;
    if (pTVar9 == (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                   *)0x0) {
      pTVar9 = &this->PrimitiveFadeUniformBufferMap;
    }
    lVar11 = (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5);
    uVar10 = *(uint *)((pTVar9->AllocatorInstance).InlineData + lVar11 * 4);
    if (TVar3 == (TUniformBufferRef<FDistanceCullFadeUniformShaderParameters>)0x0) {
      uVar10 = uVar10 & ~uVar12;
    }
    else {
      uVar10 = uVar10 | uVar12;
    }
    *(uint *)((pTVar9->AllocatorInstance).InlineData + lVar11 * 4) = uVar10;
    pTVar9 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
              *)(this->PotentiallyFadingPrimitiveMap).AllocatorInstance.SecondaryData.Data;
    if (pTVar9 == (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                   *)0x0) {
      pTVar9 = &this->PotentiallyFadingPrimitiveMap;
    }
    puVar1 = (pTVar9->AllocatorInstance).InlineData + lVar2;
    *(uint *)puVar1 = *(uint *)puVar1 | uVar12;
  }
  if ((!param_2) && (!bVar13)) {
    return true;
  }
  return false;
}

// CalcTranslucencyLightingVolumeBounds @ 14575a230

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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

void __thiscall
FViewInfo::CalcTranslucencyLightingVolumeBounds(FViewInfo *this,TBox<double> *param_1,int param_2)

{
  double *pdVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  FSceneViewState *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  TStaticArray<float,2,4294967295> *pTVar22;
  TConsoleVariableData<float> *pTVar23;
  TConsoleVariableData<float> *pTVar24;
  bool bVar25;
  int iVar26;
  FViewMatrices *pFVar27;
  int iVar28;
  TStaticArray<UE::Math::TVector<double>,2,4294967295> *pTVar29;
  double *pdVar30;
  TBox<double> *pTVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  undefined1 auVar53 [16];
  double dVar54;
  double dVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  double dVar58;
  double dVar59;
  undefined1 auVar60 [16];
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  double local_240;
  undefined7 uStack_177;
  undefined7 uStack_11f;
  undefined7 uStack_cf;
  
  lVar33 = (longlong)param_2;
  if ((GTranslucencyLightingVolumeDebugFreezePosition == 0) ||
     (pFVar5 = this->ViewState, pFVar5 == (FSceneViewState *)0x0)) {
    if (0 < param_2) {
      uVar56 = (undefined4)__real_3fe921fb54442d18;
      uVar57 = (undefined4)((ulonglong)__real_3fe921fb54442d18 >> 0x20);
      uVar61 = (undefined4)__real_3f91df46a2529d39;
      uVar62 = (undefined4)((ulonglong)__real_3f91df46a2529d39 >> 0x20);
      uVar63 = (undefined4)__real_4008000000000000;
      uVar64 = (undefined4)((ulonglong)__real_4008000000000000 >> 0x20);
      lVar32 = 0;
      dVar58 = __real_3ff0000000000000;
      do {
        pTVar23 = CVarTranslucencyLightingVolumeInnerDistance.Ref;
        bVar25 = IsInParallelRenderingThread();
        if ((!bVar25) &&
           (bVar25 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<6409875433831007955>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                ,0x6d3,"IsInParallelRenderingThread()"), bVar25)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar24 = CVarTranslucencyLightingVolumeOuterDistance.Ref;
        fVar2 = pTVar23->ShadowedValue[1];
        local_240 = (double)fVar2;
        bVar25 = IsInParallelRenderingThread();
        if ((!bVar25) &&
           (bVar25 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<6409875433831007955>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                ,0x6d3,"IsInParallelRenderingThread()"), bVar25)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar3 = pTVar24->ShadowedValue[1];
        dVar39 = (double)fVar3;
        if (lVar32 == 0) {
          local_240 = 0.0;
          fVar3 = fVar2;
        }
        dVar4 = (double)fVar3;
        dVar37 = (double)CONCAT44(uVar57,uVar56);
        pFVar27 = FSceneView::GetShadowViewMatrices((FSceneView *)this);
        dVar51 = dVar58;
        if (((double)this->_padding_ <= dVar58 && dVar58 != (double)this->_padding_) &&
           (0 < GTranslucencyLightingVolumeAdaptToPerspective)) {
          dVar51 = atan(dVar58 / (pFVar27->ProjectionMatrix).M[0][0]);
          dVar37 = (double)GTranslucencyLightingVolumeMinFOV * (double)CONCAT44(uVar62,uVar61);
          if (dVar51 <= dVar37) {
            dVar51 = dVar37;
          }
          dVar38 = (double)GTranslucencyLightingVolumeFOVSnapFactor *
                   (double)CONCAT44(uVar62,uVar61);
          dVar37 = FGenericPlatformMath::Fmod(dVar51,dVar38);
          dVar37 = (dVar38 + dVar51) - dVar37;
          dVar51 = (pFVar27->ProjectionMatrix).M[1][1] / (pFVar27->ProjectionMatrix).M[0][0];
        }
        dVar39 = dVar39 * (double)CONCAT44(uVar64,uVar63) * dVar39;
        if (dVar39 <= dVar58) {
          dVar39 = dVar58;
        }
        auVar53._8_8_ = 0;
        auVar53._0_8_ = dVar39;
        auVar53 = sqrtpd(ZEXT416((uint)fVar3),auVar53);
        dVar52 = tan(dVar37);
        dVar39 = (pFVar27->ViewMatrix).M[0][1];
        dVar37 = (pFVar27->ViewMatrix).M[1][1];
        dVar38 = (pFVar27->ViewMatrix).M[2][1];
        dVar43 = (pFVar27->ViewMatrix).M[1][0];
        dVar46 = auVar53._0_8_;
        dVar9 = dVar52 * dVar4;
        if (dVar46 <= dVar52 * dVar4) {
          dVar9 = dVar46;
        }
        dVar41 = (pFVar27->ViewMatrix).M[0][0];
        dVar40 = dVar52 * local_240;
        if (dVar46 <= dVar52 * local_240) {
          dVar40 = dVar46;
        }
        dVar52 = (pFVar27->ViewOrigin).field0_0x0._s_0.Z;
        dVar46 = (dVar58 / dVar51) * dVar40;
        dVar11 = dVar40 * dVar41;
        dVar59 = dVar40 * dVar43;
        dVar45 = (pFVar27->ViewOrigin).field0_0x0._s_0.X;
        dVar12 = (pFVar27->ViewOrigin).field0_0x0._s_0.Y;
        dVar40 = dVar40 * (pFVar27->ViewMatrix).M[2][0];
        dVar44 = dVar39 * dVar46;
        dVar54 = dVar37 * dVar46;
        dVar46 = dVar38 * dVar46;
        dVar58 = (dVar58 / dVar51) * dVar9;
        dVar51 = (double)this->_padding_ * local_240 + dVar45;
        dVar18 = (double)this->_padding_ * local_240 + dVar12;
        dVar55 = (double)this->_padding_ * local_240 + dVar52;
        dVar19 = dVar51 + dVar11;
        dVar47 = dVar18 + dVar59;
        dVar48 = dVar55 + dVar40;
        dVar42 = dVar19 + dVar44;
        dVar20 = dVar47 + dVar54;
        dVar21 = dVar48 + dVar46;
        dVar19 = dVar19 - dVar44;
        dVar47 = dVar47 - dVar54;
        dVar48 = dVar48 - dVar46;
        dVar51 = dVar51 - dVar11;
        dVar18 = dVar18 - dVar59;
        dVar55 = dVar55 - dVar40;
        dVar59 = dVar51 - dVar44;
        dVar51 = dVar51 + dVar44;
        dVar40 = dVar18 + dVar54;
        dVar18 = dVar18 - dVar54;
        dVar45 = (double)this->_padding_ * dVar4 + dVar45;
        dVar11 = dVar55 + dVar46;
        dVar41 = dVar9 * dVar41;
        dVar55 = dVar55 - dVar46;
        dVar54 = dVar41 + dVar45;
        dVar45 = dVar45 - dVar41;
        dVar12 = (double)this->_padding_ * dVar4 + dVar12;
        dVar46 = dVar9 * (pFVar27->ViewMatrix).M[2][0];
        dVar9 = dVar9 * dVar43;
        dVar52 = (double)this->_padding_ * dVar4 + dVar52;
        dVar44 = dVar46 + dVar52;
        dVar43 = dVar9 + dVar12;
        dVar39 = dVar58 * dVar39;
        dVar38 = dVar58 * dVar38;
        dVar58 = dVar58 * dVar37;
        dVar12 = dVar12 - dVar9;
        dVar41 = dVar39 + dVar54;
        dVar52 = dVar52 - dVar46;
        dVar37 = dVar58 + dVar43;
        dVar9 = dVar38 + dVar44;
        dVar54 = dVar54 - dVar39;
        dVar43 = dVar43 - dVar58;
        dVar44 = dVar44 - dVar38;
        dVar49 = dVar52 + dVar38;
        dVar4 = dVar45 + dVar39;
        dVar46 = dVar12 + dVar58;
        dVar52 = dVar52 - dVar38;
        dVar12 = dVar12 - dVar58;
        dVar45 = dVar45 - dVar39;
        dVar38 = (dVar59 + dVar51 + dVar19 + dVar42) * ___real_3f9745d1745d1746 +
                 dVar45 * __real_3fcd1745d1745d17 + dVar41 * __real_3fcd1745d1745d17 +
                 dVar4 * __real_3fcd1745d1745d17 + dVar54 * __real_3fcd1745d1745d17;
        dVar58 = (dVar18 + dVar40 + dVar47 + dVar20) * ___real_3f9745d1745d1746 +
                 dVar12 * __real_3fcd1745d1745d17 + dVar37 * __real_3fcd1745d1745d17 +
                 dVar46 * __real_3fcd1745d1745d17 + dVar43 * __real_3fcd1745d1745d17;
        dVar42 = dVar38 - dVar42;
        dVar50 = (dVar55 + dVar11 + dVar48 + dVar21) * ___real_3f9745d1745d1746 +
                 dVar52 * __real_3fcd1745d1745d17 + dVar9 * __real_3fcd1745d1745d17 +
                 dVar49 * __real_3fcd1745d1745d17 + dVar44 * __real_3fcd1745d1745d17;
        dVar20 = dVar58 - dVar20;
        dVar21 = dVar50 - dVar21;
        dVar48 = dVar50 - dVar48;
        dVar11 = dVar50 - dVar11;
        dVar47 = dVar58 - dVar47;
        dVar40 = dVar58 - dVar40;
        dVar18 = dVar58 - dVar18;
        dVar54 = dVar38 - dVar54;
        dVar41 = dVar38 - dVar41;
        dVar19 = dVar38 - dVar19;
        dVar37 = dVar58 - dVar37;
        dVar4 = dVar38 - dVar4;
        dVar51 = dVar38 - dVar51;
        dVar9 = dVar50 - dVar9;
        dVar43 = dVar58 - dVar43;
        dVar59 = dVar38 - dVar59;
        dVar55 = dVar50 - dVar55;
        dVar46 = dVar58 - dVar46;
        dVar44 = dVar50 - dVar44;
        dVar49 = dVar50 - dVar49;
        dVar45 = dVar38 - dVar45;
        auVar60._0_8_ = dVar59 * dVar59;
        auVar60._8_8_ = 0;
        dVar48 = dVar47 * dVar47 + dVar19 * dVar19 + dVar48 * dVar48;
        dVar39 = dVar40 * dVar40 + dVar51 * dVar51 + dVar11 * dVar11;
        dVar12 = dVar58 - dVar12;
        dVar51 = dVar18 * dVar18 + auVar60._0_8_ + dVar55 * dVar55;
        dVar52 = dVar50 - dVar52;
        dVar37 = dVar37 * dVar37 + dVar41 * dVar41 + dVar9 * dVar9;
        dVar9 = dVar20 * dVar20 + dVar42 * dVar42 + dVar21 * dVar21;
        if (dVar9 <= __real_0000000000000000) {
          dVar9 = __real_0000000000000000;
        }
        if (dVar9 <= dVar48) {
          dVar9 = dVar48;
        }
        if (dVar9 <= dVar39) {
          dVar9 = dVar39;
        }
        if (dVar9 <= dVar51) {
          dVar9 = dVar51;
        }
        if (dVar9 <= dVar37) {
          dVar9 = dVar37;
        }
        dVar39 = dVar43 * dVar43 + dVar54 * dVar54 + dVar44 * dVar44;
        if (dVar9 <= dVar39) {
          dVar9 = dVar39;
        }
        dVar39 = dVar46 * dVar46 + dVar4 * dVar4 + dVar49 * dVar49;
        if (dVar9 <= dVar39) {
          dVar9 = dVar39;
        }
        dVar39 = dVar12 * dVar12 + dVar45 * dVar45 + dVar52 * dVar52;
        if (dVar9 <= dVar39) {
          dVar9 = dVar39;
        }
        if (dVar9 <= 0.0) {
          param_1[lVar32].Min.field0_0x0._s_0.X = dVar38;
          param_1[lVar32].Min.field0_0x0._s_0.Y = dVar58;
          pdVar30 = &param_1[lVar32].Min.field0_0x0._s_0.Z;
          *pdVar30 = dVar50;
          pdVar30[1] = dVar38;
          uVar35 = (undefined4)CONCAT71(uStack_11f,1);
          uVar36 = (undefined4)((uint7)uStack_11f >> 0x18);
          pdVar30 = &param_1[lVar32].Max.field0_0x0._s_0.Y;
          *pdVar30 = dVar58;
          pdVar30[1] = dVar50;
        }
        else {
          iVar28 = 0x800;
          if (GTranslucencyLightingVolumeDim < 0x800) {
            iVar28 = GTranslucencyLightingVolumeDim;
          }
          auVar10._8_8_ = 0;
          auVar10._0_8_ = dVar9;
          auVar53 = sqrtpd(auVar60,auVar10);
          iVar26 = 4;
          if (4 < iVar28) {
            iVar26 = iVar28;
          }
          dVar52 = auVar53._0_8_;
          dVar37 = (dVar52 + dVar52) / (double)iVar26;
          dVar39 = FGenericPlatformMath::Fmod(dVar38,dVar37);
          dVar4 = FGenericPlatformMath::Fmod(dVar58,dVar37);
          dVar37 = FGenericPlatformMath::Fmod(dVar50,dVar37);
          dVar43 = (dVar58 - dVar4) - dVar52;
          dVar51 = (dVar50 - dVar37) + dVar52;
          auVar7._8_4_ = SUB84(dVar43,0);
          auVar7._0_8_ = (dVar38 - dVar39) - dVar52;
          auVar7._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
          *(undefined1 (*) [16])&param_1[lVar32].Min.field0_0x0 = auVar7;
          pdVar30 = &param_1[lVar32].Min.field0_0x0._s_0.Z;
          *pdVar30 = (dVar50 - dVar37) - dVar52;
          pdVar30[1] = (dVar38 - dVar39) + dVar52;
          auVar8._8_4_ = SUB84(dVar51,0);
          auVar8._0_8_ = (dVar58 - dVar4) + dVar52;
          auVar8._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
          *(undefined1 (*) [16])((longlong)&param_1[lVar32].Max.field0_0x0 + 8) = auVar8;
          uVar35 = (undefined4)CONCAT71(uStack_cf,1);
          uVar36 = (undefined4)((uint7)uStack_cf >> 0x18);
        }
        dVar58 = __real_3ff0000000000000;
        lVar34 = lVar32 + 1;
        uVar61 = (undefined4)__real_3f91df46a2529d39;
        uVar62 = (undefined4)((ulonglong)__real_3f91df46a2529d39 >> 0x20);
        uVar56 = (undefined4)__real_3fe921fb54442d18;
        uVar57 = (undefined4)((ulonglong)__real_3fe921fb54442d18 >> 0x20);
        uVar63 = (undefined4)__real_4008000000000000;
        uVar64 = (undefined4)((ulonglong)__real_4008000000000000 >> 0x20);
        pTVar31 = param_1 + lVar32;
        pTVar31->IsValid = (char)uVar35;
        pTVar31->Pad[0] = (char)((uint)uVar35 >> 8);
        pTVar31->Pad[1] = (char)((uint)uVar35 >> 0x10);
        pTVar31->Pad[2] = (char)((uint)uVar35 >> 0x18);
        pTVar31->Pad[3] = (char)uVar36;
        pTVar31->Pad[4] = (char)((uint)uVar36 >> 8);
        pTVar31->Pad[5] = (char)((uint)uVar36 >> 0x10);
        pTVar31->Pad[6] = (char)((uint)uVar36 >> 0x18);
        lVar32 = lVar34;
      } while (lVar34 < lVar33);
    }
  }
  else {
    lVar32 = 0;
    if (3 < lVar33) {
      pTVar31 = param_1 + 2;
      pTVar29 = &(pFVar5->TranslucencyLighting).HistoryVolumeMin;
      lVar34 = (lVar33 - 4U >> 2) + 1;
      lVar32 = lVar34 * 4;
      do {
        dVar58 = *(double *)(((TStaticArray<float,2,4294967295> *)(pTVar29 + 1))->Elements + 2);
        dVar39 = pTVar29->Elements[0].field0_0x0._s_0.X;
        dVar4 = pTVar29->Elements[0].field0_0x0._s_0.Y;
        dVar37 = *(double *)(((TStaticArray<float,2,4294967295> *)(pTVar29 + 1))->Elements + 4);
        dVar51 = pTVar29->Elements[0].field0_0x0._s_0.Z +
                 *(double *)(((TStaticArray<float,2,4294967295> *)(pTVar29 + 1))->Elements + 6);
        dVar38 = pTVar29->Elements[0].field0_0x0._s_0.Y;
        uVar56 = *(undefined4 *)((longlong)&pTVar29->Elements[0].field0_0x0 + 0x10);
        uVar57 = *(undefined4 *)((longlong)&pTVar29->Elements[0].field0_0x0 + 0x14);
        pTVar31[-2].Min.field0_0x0._s_0.X = pTVar29->Elements[0].field0_0x0._s_0.X;
        pTVar31[-2].Min.field0_0x0._s_0.Y = dVar38;
        *(undefined4 *)((longlong)&pTVar31[-2].Min.field0_0x0 + 0x10) = uVar56;
        *(undefined4 *)((longlong)&pTVar31[-2].Min.field0_0x0 + 0x14) = uVar57;
        pTVar31[-2].Max.field0_0x0._s_0.X = dVar58 + dVar39;
        auVar13._8_4_ = SUB84(dVar51,0);
        auVar13._0_8_ = dVar4 + dVar37;
        auVar13._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
        *(undefined1 (*) [16])((longlong)&pTVar31[-2].Max.field0_0x0 + 8) = auVar13;
        pTVar31[-2].IsValid = 1;
        pTVar31[-2].Pad[0] = (char)uStack_177;
        pTVar31[-2].Pad[1] = (char)((uint7)uStack_177 >> 8);
        pTVar31[-2].Pad[2] = (char)((uint7)uStack_177 >> 0x10);
        pTVar31[-2].Pad[3] = (char)((uint7)uStack_177 >> 0x18);
        pTVar31[-2].Pad[4] = (char)((uint7)uStack_177 >> 0x20);
        pTVar31[-2].Pad[5] = (char)((uint7)uStack_177 >> 0x28);
        pTVar31[-2].Pad[6] = (char)((uint7)uStack_177 >> 0x30);
        dVar58 = pTVar29->Elements[1].field0_0x0._s_0.X;
        dVar39 = *(double *)(((TStaticArray<float,2,4294967295> *)(pTVar29 + 1))->Elements + 8);
        dVar4 = pTVar29->Elements[1].field0_0x0._s_0.Y;
        dVar37 = *(double *)(((TStaticArray<float,2,4294967295> *)(pTVar29 + 1))->Elements + 10);
        dVar51 = pTVar29->Elements[1].field0_0x0._s_0.Z + *(double *)(pTVar29 + 2);
        dVar38 = pTVar29->Elements[1].field0_0x0._s_0.Y;
        uVar56 = *(undefined4 *)((longlong)&pTVar29->Elements[1].field0_0x0 + 0x10);
        uVar57 = *(undefined4 *)((longlong)&pTVar29->Elements[1].field0_0x0 + 0x14);
        pTVar31[-1].Min.field0_0x0._s_0.X = pTVar29->Elements[1].field0_0x0._s_0.X;
        pTVar31[-1].Min.field0_0x0._s_0.Y = dVar38;
        *(undefined4 *)((longlong)&pTVar31[-1].Min.field0_0x0 + 0x10) = uVar56;
        *(undefined4 *)((longlong)&pTVar31[-1].Min.field0_0x0 + 0x14) = uVar57;
        pTVar31[-1].Max.field0_0x0._s_0.X = dVar58 + dVar39;
        auVar14._8_4_ = SUB84(dVar51,0);
        auVar14._0_8_ = dVar4 + dVar37;
        auVar14._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
        *(undefined1 (*) [16])((longlong)&pTVar31[-1].Max.field0_0x0 + 8) = auVar14;
        pTVar31[-1].IsValid = 1;
        pTVar31[-1].Pad[0] = (char)uStack_177;
        pTVar31[-1].Pad[1] = (char)((uint7)uStack_177 >> 8);
        pTVar31[-1].Pad[2] = (char)((uint7)uStack_177 >> 0x10);
        pTVar31[-1].Pad[3] = (char)((uint7)uStack_177 >> 0x18);
        pTVar31[-1].Pad[4] = (char)((uint7)uStack_177 >> 0x20);
        pTVar31[-1].Pad[5] = (char)((uint7)uStack_177 >> 0x28);
        pTVar31[-1].Pad[6] = (char)((uint7)uStack_177 >> 0x30);
        dVar58 = *(double *)((longlong)(pTVar29 + 2) + 8);
        dVar39 = *(double *)((TStaticArray<float,2,4294967295> *)(pTVar29 + 1))->Elements;
        dVar4 = *(double *)((longlong)(pTVar29 + 2) + 0x10);
        dVar37 = *(double *)(((TStaticArray<float,2,4294967295> *)(pTVar29 + 1))->Elements + 2);
        dVar51 = *(double *)((longlong)(pTVar29 + 2) + 0x18) +
                 *(double *)(((TStaticArray<float,2,4294967295> *)(pTVar29 + 1))->Elements + 4);
        dVar38 = *(double *)(((TStaticArray<float,2,4294967295> *)(pTVar29 + 1))->Elements + 2);
        uVar56 = ((TStaticArray<float,2,4294967295> *)(pTVar29 + 1))->Elements[4];
        uVar57 = ((TStaticArray<float,2,4294967295> *)(pTVar29 + 1))->Elements[5];
        (pTVar31->Min).field0_0x0._s_0.X =
             *(double *)((TStaticArray<float,2,4294967295> *)(pTVar29 + 1))->Elements;
        (pTVar31->Min).field0_0x0._s_0.Y = dVar38;
        *(undefined4 *)((longlong)&(pTVar31->Min).field0_0x0 + 0x10) = uVar56;
        *(undefined4 *)((longlong)&(pTVar31->Min).field0_0x0 + 0x14) = uVar57;
        (pTVar31->Max).field0_0x0._s_0.X = dVar58 + dVar39;
        auVar15._8_4_ = SUB84(dVar51,0);
        auVar15._0_8_ = dVar4 + dVar37;
        auVar15._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
        *(undefined1 (*) [16])((longlong)&(pTVar31->Max).field0_0x0 + 8) = auVar15;
        pTVar31->IsValid = 1;
        pTVar31->Pad[0] = (char)uStack_177;
        pTVar31->Pad[1] = (char)((uint7)uStack_177 >> 8);
        pTVar31->Pad[2] = (char)((uint7)uStack_177 >> 0x10);
        pTVar31->Pad[3] = (char)((uint7)uStack_177 >> 0x18);
        pTVar31->Pad[4] = (char)((uint7)uStack_177 >> 0x20);
        pTVar31->Pad[5] = (char)((uint7)uStack_177 >> 0x28);
        pTVar31->Pad[6] = (char)((uint7)uStack_177 >> 0x30);
        dVar58 = *(double *)((longlong)(pTVar29 + 2) + 0x28);
        dVar39 = *(double *)((longlong)(pTVar29 + 2) + 0x20);
        dVar4 = *(double *)(((TStaticArray<float,2,4294967295> *)(pTVar29 + 1))->Elements + 6);
        dVar37 = *(double *)(((TStaticArray<float,2,4294967295> *)(pTVar29 + 1))->Elements + 8);
        dVar51 = *(double *)(pTVar29 + 3) +
                 *(double *)(((TStaticArray<float,2,4294967295> *)(pTVar29 + 1))->Elements + 10);
        uVar56 = ((TStaticArray<float,2,4294967295> *)(pTVar29 + 1))->Elements[10];
        uVar57 = ((TStaticArray<float,2,4294967295> *)(pTVar29 + 1))->Elements[0xb];
        pTVar22 = (TStaticArray<float,2,4294967295> *)(pTVar29 + 1);
        dVar38 = *(double *)(((TStaticArray<float,2,4294967295> *)(pTVar29 + 1))->Elements + 8);
        pTVar29 = pTVar29 + 2;
        pTVar31[1].Min.field0_0x0._s_0.X = *(double *)(pTVar22->Elements + 6);
        pTVar31[1].Min.field0_0x0._s_0.Y = dVar38;
        *(undefined4 *)((longlong)&pTVar31[1].Min.field0_0x0 + 0x10) = uVar56;
        *(undefined4 *)((longlong)&pTVar31[1].Min.field0_0x0 + 0x14) = uVar57;
        pTVar31[1].Max.field0_0x0._s_0.X = dVar39 + dVar4;
        auVar16._8_4_ = SUB84(dVar51,0);
        auVar16._0_8_ = dVar58 + dVar37;
        auVar16._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
        *(undefined1 (*) [16])((longlong)&pTVar31[1].Max.field0_0x0 + 8) = auVar16;
        pTVar31[1].IsValid = 1;
        pTVar31[1].Pad[0] = (char)uStack_177;
        pTVar31[1].Pad[1] = (char)((uint7)uStack_177 >> 8);
        pTVar31[1].Pad[2] = (char)((uint7)uStack_177 >> 0x10);
        pTVar31[1].Pad[3] = (char)((uint7)uStack_177 >> 0x18);
        pTVar31[1].Pad[4] = (char)((uint7)uStack_177 >> 0x20);
        pTVar31[1].Pad[5] = (char)((uint7)uStack_177 >> 0x28);
        pTVar31[1].Pad[6] = (char)((uint7)uStack_177 >> 0x30);
        pTVar31 = pTVar31 + 4;
        lVar34 = lVar34 + -1;
      } while (lVar34 != 0);
    }
    if (lVar32 < lVar33) {
      pTVar31 = param_1 + lVar32;
      lVar33 = lVar33 - lVar32;
      pdVar30 = &(pFVar5->TranslucencyLighting).HistoryVolumeSize.Elements[lVar32].field0_0x0._s_0.Y
      ;
      do {
        dVar58 = pdVar30[-7];
        dVar39 = ((TVector<double>_u_0_s_0 *)(pdVar30 + -1))->X;
        dVar4 = pdVar30[-8];
        dVar37 = pdVar30[-6];
        dVar51 = *pdVar30;
        dVar38 = pdVar30[1];
        uVar56 = *(undefined4 *)(pdVar30 + -6);
        uVar57 = *(undefined4 *)((longlong)pdVar30 + -0x2c);
        pdVar1 = pdVar30 + -8;
        dVar43 = pdVar30[-7];
        pdVar30 = pdVar30 + 3;
        (pTVar31->Min).field0_0x0._s_0.X = *pdVar1;
        (pTVar31->Min).field0_0x0._s_0.Y = dVar43;
        *(undefined4 *)((longlong)&(pTVar31->Min).field0_0x0 + 0x10) = uVar56;
        *(undefined4 *)((longlong)&(pTVar31->Min).field0_0x0 + 0x14) = uVar57;
        (pTVar31->Max).field0_0x0._s_0.X = dVar39 + dVar4;
        auVar17._8_4_ = SUB84(dVar37 + dVar38,0);
        auVar17._0_8_ = dVar58 + dVar51;
        auVar17._12_4_ = (int)((ulonglong)(dVar37 + dVar38) >> 0x20);
        *(undefined1 (*) [16])((longlong)&(pTVar31->Max).field0_0x0 + 8) = auVar17;
        pTVar31->IsValid = 1;
        pTVar31->Pad[0] = (char)uStack_177;
        pTVar31->Pad[1] = (char)((uint7)uStack_177 >> 8);
        pTVar31->Pad[2] = (char)((uint7)uStack_177 >> 0x10);
        pTVar31->Pad[3] = (char)((uint7)uStack_177 >> 0x18);
        pTVar31->Pad[4] = (char)((uint7)uStack_177 >> 0x20);
        pTVar31->Pad[5] = (char)((uint7)uStack_177 >> 0x28);
        pTVar31->Pad[6] = (char)((uint7)uStack_177 >> 0x30);
        pTVar31 = pTVar31 + 1;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      return;
    }
  }
  return;
}

// SetupVolumetricFogUniformBufferParameters @ 14588a090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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
FViewInfo::SetupVolumetricFogUniformBufferParameters
          (FViewInfo *this,FViewUniformShaderParameters *param_1)

{
  float fVar1;
  FScene *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  TIntPoint<int>_u_0 *pTVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  undefined8 local_res8;
  
  pFVar2 = (FScene *)((FSceneViewFamily *)this->_padding_)->Scene;
  bVar8 = ShouldRenderVolumetricFog(pFVar2,(FSceneViewFamily *)this->_padding_);
  if (!bVar8) {
    *(undefined8 *)&(param_1->VolumetricFogInvGridSize).field0_0x0 =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    (param_1->VolumetricFogInvGridSize).field0_0x0._s_0.Z =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined8 *)&(param_1->VolumetricFogGridZParams).field0_0x0 =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    (param_1->VolumetricFogGridZParams).field0_0x0._s_0.Z =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    (param_1->VolumetricFogSVPosToVolumeUV).field0_0x0._s_0 =
         (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    (param_1->VolumetricFogViewGridUVToPrevViewRectUV).field0_0x0._s_0 =
         (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    param_1->VolumetricFogMaxDistance = 0.0;
    return;
  }
  if ((pFVar2->ExponentialFogs).ArrayNum < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  fVar1 = __real_3f800000;
  pFVar3 = (pFVar2->ExponentialFogs).AllocatorInstance.Data;
  pTVar10 = (TIntPoint<int>_u_0 *)(this->_padding_ + 0x1c8);
  if (*(char *)(this->_padding_ + 200) == '\0') {
    pTVar10 = &FSceneTexturesConfig::GlobalInstance.Extent.field0_0x0;
  }
  iVar9 = (pTVar10->_s_0).X;
  local_res8._4_4_ = (pTVar10->_s_0).Y;
  if (iVar9 < 1) {
    iVar9 = 1;
  }
  if ((int)local_res8._4_4_ < 1) {
    local_res8._4_4_ = 1;
  }
  iVar11 = GVolumetricFogGridPixelSize;
  if (GVolumetricFogGridPixelSize < 1) {
    iVar11 = 1;
  }
  iVar13 = (iVar11 + -1 + iVar9) / iVar11;
  iVar12 = (local_res8._4_4_ + -1 + iVar11) / iVar11;
  if ((GRHIGlobals.MaxVolumeTextureDimensions.Value < iVar13) ||
     (GRHIGlobals.MaxVolumeTextureDimensions.Value < iVar12)) {
    iVar11 = -((int)ROUND(__real_bf000000 -
                          (__real_40000000 / (float)GRHIGlobals.MaxVolumeTextureDimensions.Value) *
                          (float)(int)local_res8._4_4_) >> 1);
    iVar12 = -((int)ROUND(__real_bf000000 -
                          ((float)iVar9 + (float)iVar9) /
                          (float)GRHIGlobals.MaxVolumeTextureDimensions.Value) >> 1);
    if (iVar11 < iVar12) {
      iVar11 = iVar12;
    }
    iVar13 = (iVar11 + -1 + iVar9) / iVar11;
    iVar12 = (local_res8._4_4_ + -1 + iVar11) / iVar11;
  }
  iVar9 = GVolumetricFogGridSizeZ;
  if (GVolumetricFogGridSizeZ < 1) {
    iVar9 = 1;
  }
  (param_1->VolumetricFogInvGridSize).field0_0x0._s_0.X = __real_3f800000 / (float)iVar13;
  (param_1->VolumetricFogInvGridSize).field0_0x0._s_0.Y = fVar1 / (float)iVar12;
  (param_1->VolumetricFogInvGridSize).field0_0x0._s_0.Z = fVar1 / (float)iVar9;
  fVar7 = GVolumetricFogDepthDistributionScale;
  fVar1 = *(float *)(pFVar3 + 0x98);
  fVar6 = *(float *)&this->_padding_;
  if (*(float *)&this->_padding_ <= *(float *)(pFVar3 + 0xa8)) {
    fVar6 = *(float *)(pFVar3 + 0xa8);
  }
  dVar5 = (double)fVar6 + ___real_4023000000000000;
  dVar14 = pow(__real_4000000000000000,(double)iVar9 / (double)GVolumetricFogDepthDistributionScale)
  ;
  dVar14 = ((double)fVar1 - dVar14 * dVar5) / ((double)fVar1 - dVar5);
  (param_1->VolumetricFogGridZParams).field0_0x0._s_0.X =
       (float)((__real_3ff0000000000000 - dVar14) / dVar5);
  (param_1->VolumetricFogGridZParams).field0_0x0._s_0.Y = (float)dVar14;
  (param_1->VolumetricFogGridZParams).field0_0x0._s_0.Z = fVar7;
  local_res8._4_4_ =
       UE::Math::TVector2<float>::UnitVector.field0_0x0._s_0.Y / ((float)iVar11 * (float)iVar12);
  local_res8._0_4_ =
       UE::Math::TVector2<float>::UnitVector.field0_0x0._s_0.X / ((float)iVar11 * (float)iVar13);
  (param_1->VolumetricFogSVPosToVolumeUV).field0_0x0 = local_res8;
  param_1->VolumetricFogMaxDistance = *(float *)(pFVar3 + 0x98);
  return;
}

// operator() @ 1504cfab0

bool __thiscall
`FViewInfo::SetupUniformBufferParameters'::__l144::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2483563155284821708>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2483563155284821708>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504cfb50

bool __thiscall
`FViewInfo::SetupUniformBufferParameters'::__l144::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2483563155284821710>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2483563155284821710>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

