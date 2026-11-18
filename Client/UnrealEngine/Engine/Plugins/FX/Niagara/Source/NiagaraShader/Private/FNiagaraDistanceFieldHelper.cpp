// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraShader
// Functions: 1

// SetGlobalDistanceFieldParameters @ 148e0d130

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
FNiagaraDistanceFieldHelper::SetGlobalDistanceFieldParameters
          (FGlobalDistanceFieldParameterData *param_1,FGlobalDistanceFieldParameters2 *param_2)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  undefined8 uVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  TStaticArray<UE::Math::TVector4<float>,6,4294967295> *pTVar8;
  longlong lVar9;
  FRHITexture *pFVar10;
  
  uVar7 = 0;
  if (param_1 == (FGlobalDistanceFieldParameterData *)0x0) {
    param_2->GlobalDistanceFieldPageAtlasTexture = (GBlackVolumeTexture->TextureRHI).Reference;
    param_2->GlobalDistanceFieldCoverageAtlasTexture = (GBlackVolumeTexture->TextureRHI).Reference;
    param_2->GlobalDistanceFieldPageTableTexture = (GBlackUintVolumeTexture->TextureRHI).Reference;
    pTVar8 = &param_2->GlobalVolumeTranslatedWorldToUVAddAndMul;
    param_2->GlobalDistanceFieldMipTexture = (GBlackVolumeTexture->TextureRHI).Reference;
    lVar9 = 6;
    do {
      *(undefined8 *)&pTVar8[-1].Elements[0].field0_0x0 = 0;
      *(undefined8 *)((longlong)&pTVar8[-1].Elements[0].field0_0x0 + 8) = 0;
      *(undefined8 *)&pTVar8->Elements[0].field0_0x0 = 0;
      *(undefined8 *)((longlong)&pTVar8->Elements[0].field0_0x0 + 8) = 0;
      *(undefined8 *)&pTVar8[1].Elements[0].field0_0x0 = 0;
      *(undefined8 *)((longlong)&pTVar8[1].Elements[0].field0_0x0 + 8) = 0;
      *(undefined8 *)&pTVar8[2].Elements[0].field0_0x0 = 0;
      *(undefined8 *)((longlong)&pTVar8[2].Elements[0].field0_0x0 + 8) = 0;
      pTVar8 = (TStaticArray<UE::Math::TVector4<float>,6,4294967295> *)(pTVar8->Elements + 1);
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    param_2->GlobalDistanceFieldMipFactor = 0.0;
    param_2->GlobalDistanceFieldMipTransition = 0.0;
    param_2->GlobalDistanceFieldClipmapSizeInPages = 0;
    *(undefined8 *)&(param_2->GlobalDistanceFieldInvPageAtlasSize).field0_0x0 =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    (param_2->GlobalDistanceFieldInvPageAtlasSize).field0_0x0._s_0.Z =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined8 *)&(param_2->GlobalDistanceFieldInvCoverageAtlasSize).field0_0x0 =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    (param_2->GlobalDistanceFieldInvCoverageAtlasSize).field0_0x0._s_0.Z =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    param_2->GlobalVolumeDimension = 0.0;
    param_2->GlobalVolumeTexelSize = 0.0;
    param_2->MaxGlobalDFAOConeDistance = 0.0;
  }
  else {
    pFVar10 = param_1->PageAtlasTexture;
    if (((pFVar10 == (FRHITexture *)0x0) &&
        (pFVar10 = (GBlackVolumeTexture->TextureRHI).Reference, pFVar10 == (FRHITexture *)0x0)) &&
       (pFVar10 = (GBlackTexture->TextureRHI).Reference, pFVar10 == (FRHITexture *)0x0)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\TextureFallbacks.h"
                         ,0x11,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    param_2->GlobalDistanceFieldPageAtlasTexture = pFVar10;
    pFVar10 = param_1->CoverageAtlasTexture;
    if (((pFVar10 == (FRHITexture *)0x0) &&
        (pFVar10 = (GBlackVolumeTexture->TextureRHI).Reference, pFVar10 == (FRHITexture *)0x0)) &&
       (pFVar10 = (GBlackTexture->TextureRHI).Reference, pFVar10 == (FRHITexture *)0x0)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\TextureFallbacks.h"
                         ,0x11,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    param_2->GlobalDistanceFieldCoverageAtlasTexture = pFVar10;
    pFVar10 = param_1->PageTableTexture;
    if (((pFVar10 == (FRHITexture *)0x0) &&
        (pFVar10 = (GBlackUintVolumeTexture->TextureRHI).Reference, pFVar10 == (FRHITexture *)0x0))
       && (pFVar10 = (GBlackTexture->TextureRHI).Reference, pFVar10 == (FRHITexture *)0x0)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\TextureFallbacks.h"
                         ,0x11,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    param_2->GlobalDistanceFieldPageTableTexture = pFVar10;
    pFVar10 = param_1->MipTexture;
    if (((pFVar10 == (FRHITexture *)0x0) &&
        (pFVar10 = (GBlackVolumeTexture->TextureRHI).Reference, pFVar10 == (FRHITexture *)0x0)) &&
       (pFVar10 = (GBlackTexture->TextureRHI).Reference, pFVar10 == (FRHITexture *)0x0)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\TextureFallbacks.h"
                         ,0x11,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    param_2->GlobalDistanceFieldMipTexture = pFVar10;
    uVar4 = *(undefined8 *)((longlong)&param_1->TranslatedCenterAndExtent[0].field0_0x0 + 8);
    *(undefined8 *)&(param_2->GlobalVolumeTranslatedCenterAndExtent).Elements[0].field0_0x0 =
         *(undefined8 *)&param_1->TranslatedCenterAndExtent[0].field0_0x0;
    *(undefined8 *)
     ((longlong)&(param_2->GlobalVolumeTranslatedCenterAndExtent).Elements[0].field0_0x0 + 8) =
         uVar4;
    uVar4 = *(undefined8 *)((longlong)&param_1->TranslatedWorldToUVAddAndMul[0].field0_0x0 + 8);
    *(undefined8 *)&(param_2->GlobalVolumeTranslatedWorldToUVAddAndMul).Elements[0].field0_0x0 =
         *(undefined8 *)&param_1->TranslatedWorldToUVAddAndMul[0].field0_0x0;
    *(undefined8 *)
     ((longlong)&(param_2->GlobalVolumeTranslatedWorldToUVAddAndMul).Elements[0].field0_0x0 + 8) =
         uVar4;
    uVar4 = *(undefined8 *)((longlong)&param_1->MipTranslatedWorldToUVScale[0].field0_0x0 + 8);
    *(undefined8 *)&(param_2->GlobalDistanceFieldMipTranslatedWorldToUVScale).Elements[0].field0_0x0
         = *(undefined8 *)&param_1->MipTranslatedWorldToUVScale[0].field0_0x0;
    *(undefined8 *)
     ((longlong)&(param_2->GlobalDistanceFieldMipTranslatedWorldToUVScale).Elements[0].field0_0x0 +
     8) = uVar4;
    uVar4 = *(undefined8 *)((longlong)&param_1->MipTranslatedWorldToUVBias[0].field0_0x0 + 8);
    *(undefined8 *)&(param_2->GlobalDistanceFieldMipTranslatedWorldToUVBias).Elements[0].field0_0x0
         = *(undefined8 *)&param_1->MipTranslatedWorldToUVBias[0].field0_0x0;
    *(undefined8 *)
     ((longlong)&(param_2->GlobalDistanceFieldMipTranslatedWorldToUVBias).Elements[0].field0_0x0 + 8
     ) = uVar4;
    uVar4 = *(undefined8 *)((longlong)&param_1->TranslatedCenterAndExtent[1].field0_0x0 + 8);
    *(undefined8 *)&(param_2->GlobalVolumeTranslatedCenterAndExtent).Elements[1].field0_0x0 =
         *(undefined8 *)&param_1->TranslatedCenterAndExtent[1].field0_0x0;
    *(undefined8 *)
     ((longlong)&(param_2->GlobalVolumeTranslatedCenterAndExtent).Elements[1].field0_0x0 + 8) =
         uVar4;
    uVar4 = *(undefined8 *)((longlong)&param_1->TranslatedWorldToUVAddAndMul[1].field0_0x0 + 8);
    *(undefined8 *)&(param_2->GlobalVolumeTranslatedWorldToUVAddAndMul).Elements[1].field0_0x0 =
         *(undefined8 *)&param_1->TranslatedWorldToUVAddAndMul[1].field0_0x0;
    *(undefined8 *)
     ((longlong)&(param_2->GlobalVolumeTranslatedWorldToUVAddAndMul).Elements[1].field0_0x0 + 8) =
         uVar4;
    uVar4 = *(undefined8 *)((longlong)&param_1->MipTranslatedWorldToUVScale[1].field0_0x0 + 8);
    *(undefined8 *)&(param_2->GlobalDistanceFieldMipTranslatedWorldToUVScale).Elements[1].field0_0x0
         = *(undefined8 *)&param_1->MipTranslatedWorldToUVScale[1].field0_0x0;
    *(undefined8 *)
     ((longlong)&(param_2->GlobalDistanceFieldMipTranslatedWorldToUVScale).Elements[1].field0_0x0 +
     8) = uVar4;
    uVar4 = *(undefined8 *)((longlong)&param_1->MipTranslatedWorldToUVBias[1].field0_0x0 + 8);
    *(undefined8 *)&(param_2->GlobalDistanceFieldMipTranslatedWorldToUVBias).Elements[1].field0_0x0
         = *(undefined8 *)&param_1->MipTranslatedWorldToUVBias[1].field0_0x0;
    *(undefined8 *)
     ((longlong)&(param_2->GlobalDistanceFieldMipTranslatedWorldToUVBias).Elements[1].field0_0x0 + 8
     ) = uVar4;
    uVar4 = *(undefined8 *)((longlong)&param_1->TranslatedCenterAndExtent[2].field0_0x0 + 8);
    *(undefined8 *)&(param_2->GlobalVolumeTranslatedCenterAndExtent).Elements[2].field0_0x0 =
         *(undefined8 *)&param_1->TranslatedCenterAndExtent[2].field0_0x0;
    *(undefined8 *)
     ((longlong)&(param_2->GlobalVolumeTranslatedCenterAndExtent).Elements[2].field0_0x0 + 8) =
         uVar4;
    uVar4 = *(undefined8 *)((longlong)&param_1->TranslatedWorldToUVAddAndMul[2].field0_0x0 + 8);
    *(undefined8 *)&(param_2->GlobalVolumeTranslatedWorldToUVAddAndMul).Elements[2].field0_0x0 =
         *(undefined8 *)&param_1->TranslatedWorldToUVAddAndMul[2].field0_0x0;
    *(undefined8 *)
     ((longlong)&(param_2->GlobalVolumeTranslatedWorldToUVAddAndMul).Elements[2].field0_0x0 + 8) =
         uVar4;
    uVar4 = *(undefined8 *)((longlong)&param_1->MipTranslatedWorldToUVScale[2].field0_0x0 + 8);
    *(undefined8 *)&(param_2->GlobalDistanceFieldMipTranslatedWorldToUVScale).Elements[2].field0_0x0
         = *(undefined8 *)&param_1->MipTranslatedWorldToUVScale[2].field0_0x0;
    *(undefined8 *)
     ((longlong)&(param_2->GlobalDistanceFieldMipTranslatedWorldToUVScale).Elements[2].field0_0x0 +
     8) = uVar4;
    uVar4 = *(undefined8 *)((longlong)&param_1->MipTranslatedWorldToUVBias[2].field0_0x0 + 8);
    *(undefined8 *)&(param_2->GlobalDistanceFieldMipTranslatedWorldToUVBias).Elements[2].field0_0x0
         = *(undefined8 *)&param_1->MipTranslatedWorldToUVBias[2].field0_0x0;
    *(undefined8 *)
     ((longlong)&(param_2->GlobalDistanceFieldMipTranslatedWorldToUVBias).Elements[2].field0_0x0 + 8
     ) = uVar4;
    uVar4 = *(undefined8 *)((longlong)&param_1->TranslatedCenterAndExtent[3].field0_0x0 + 8);
    *(undefined8 *)&(param_2->GlobalVolumeTranslatedCenterAndExtent).Elements[3].field0_0x0 =
         *(undefined8 *)&param_1->TranslatedCenterAndExtent[3].field0_0x0;
    *(undefined8 *)
     ((longlong)&(param_2->GlobalVolumeTranslatedCenterAndExtent).Elements[3].field0_0x0 + 8) =
         uVar4;
    uVar4 = *(undefined8 *)((longlong)&param_1->TranslatedWorldToUVAddAndMul[3].field0_0x0 + 8);
    *(undefined8 *)&(param_2->GlobalVolumeTranslatedWorldToUVAddAndMul).Elements[3].field0_0x0 =
         *(undefined8 *)&param_1->TranslatedWorldToUVAddAndMul[3].field0_0x0;
    *(undefined8 *)
     ((longlong)&(param_2->GlobalVolumeTranslatedWorldToUVAddAndMul).Elements[3].field0_0x0 + 8) =
         uVar4;
    uVar4 = *(undefined8 *)((longlong)&param_1->MipTranslatedWorldToUVScale[3].field0_0x0 + 8);
    *(undefined8 *)&(param_2->GlobalDistanceFieldMipTranslatedWorldToUVScale).Elements[3].field0_0x0
         = *(undefined8 *)&param_1->MipTranslatedWorldToUVScale[3].field0_0x0;
    *(undefined8 *)
     ((longlong)&(param_2->GlobalDistanceFieldMipTranslatedWorldToUVScale).Elements[3].field0_0x0 +
     8) = uVar4;
    uVar4 = *(undefined8 *)((longlong)&param_1->MipTranslatedWorldToUVBias[3].field0_0x0 + 8);
    *(undefined8 *)&(param_2->GlobalDistanceFieldMipTranslatedWorldToUVBias).Elements[3].field0_0x0
         = *(undefined8 *)&param_1->MipTranslatedWorldToUVBias[3].field0_0x0;
    *(undefined8 *)
     ((longlong)&(param_2->GlobalDistanceFieldMipTranslatedWorldToUVBias).Elements[3].field0_0x0 + 8
     ) = uVar4;
    uVar4 = *(undefined8 *)((longlong)&param_1->TranslatedCenterAndExtent[4].field0_0x0 + 8);
    *(undefined8 *)&(param_2->GlobalVolumeTranslatedCenterAndExtent).Elements[4].field0_0x0 =
         *(undefined8 *)&param_1->TranslatedCenterAndExtent[4].field0_0x0;
    *(undefined8 *)
     ((longlong)&(param_2->GlobalVolumeTranslatedCenterAndExtent).Elements[4].field0_0x0 + 8) =
         uVar4;
    uVar4 = *(undefined8 *)((longlong)&param_1->TranslatedWorldToUVAddAndMul[4].field0_0x0 + 8);
    *(undefined8 *)&(param_2->GlobalVolumeTranslatedWorldToUVAddAndMul).Elements[4].field0_0x0 =
         *(undefined8 *)&param_1->TranslatedWorldToUVAddAndMul[4].field0_0x0;
    *(undefined8 *)
     ((longlong)&(param_2->GlobalVolumeTranslatedWorldToUVAddAndMul).Elements[4].field0_0x0 + 8) =
         uVar4;
    uVar4 = *(undefined8 *)((longlong)&param_1->MipTranslatedWorldToUVScale[4].field0_0x0 + 8);
    *(undefined8 *)&(param_2->GlobalDistanceFieldMipTranslatedWorldToUVScale).Elements[4].field0_0x0
         = *(undefined8 *)&param_1->MipTranslatedWorldToUVScale[4].field0_0x0;
    *(undefined8 *)
     ((longlong)&(param_2->GlobalDistanceFieldMipTranslatedWorldToUVScale).Elements[4].field0_0x0 +
     8) = uVar4;
    uVar4 = *(undefined8 *)((longlong)&param_1->MipTranslatedWorldToUVBias[4].field0_0x0 + 8);
    *(undefined8 *)&(param_2->GlobalDistanceFieldMipTranslatedWorldToUVBias).Elements[4].field0_0x0
         = *(undefined8 *)&param_1->MipTranslatedWorldToUVBias[4].field0_0x0;
    *(undefined8 *)
     ((longlong)&(param_2->GlobalDistanceFieldMipTranslatedWorldToUVBias).Elements[4].field0_0x0 + 8
     ) = uVar4;
    uVar4 = *(undefined8 *)((longlong)&param_1->TranslatedCenterAndExtent[5].field0_0x0 + 8);
    *(undefined8 *)&(param_2->GlobalVolumeTranslatedCenterAndExtent).Elements[5].field0_0x0 =
         *(undefined8 *)&param_1->TranslatedCenterAndExtent[5].field0_0x0;
    *(undefined8 *)
     ((longlong)&(param_2->GlobalVolumeTranslatedCenterAndExtent).Elements[5].field0_0x0 + 8) =
         uVar4;
    uVar4 = *(undefined8 *)((longlong)&param_1->TranslatedWorldToUVAddAndMul[5].field0_0x0 + 8);
    *(undefined8 *)&(param_2->GlobalVolumeTranslatedWorldToUVAddAndMul).Elements[5].field0_0x0 =
         *(undefined8 *)&param_1->TranslatedWorldToUVAddAndMul[5].field0_0x0;
    *(undefined8 *)
     ((longlong)&(param_2->GlobalVolumeTranslatedWorldToUVAddAndMul).Elements[5].field0_0x0 + 8) =
         uVar4;
    uVar4 = *(undefined8 *)((longlong)&param_1->MipTranslatedWorldToUVScale[5].field0_0x0 + 8);
    *(undefined8 *)&(param_2->GlobalDistanceFieldMipTranslatedWorldToUVScale).Elements[5].field0_0x0
         = *(undefined8 *)&param_1->MipTranslatedWorldToUVScale[5].field0_0x0;
    *(undefined8 *)
     ((longlong)&(param_2->GlobalDistanceFieldMipTranslatedWorldToUVScale).Elements[5].field0_0x0 +
     8) = uVar4;
    uVar4 = *(undefined8 *)((longlong)&param_1->MipTranslatedWorldToUVBias[5].field0_0x0 + 8);
    *(undefined8 *)&(param_2->GlobalDistanceFieldMipTranslatedWorldToUVBias).Elements[5].field0_0x0
         = *(undefined8 *)&param_1->MipTranslatedWorldToUVBias[5].field0_0x0;
    *(undefined8 *)
     ((longlong)&(param_2->GlobalDistanceFieldMipTranslatedWorldToUVBias).Elements[5].field0_0x0 + 8
     ) = uVar4;
    param_2->GlobalDistanceFieldMipFactor = param_1->MipFactor;
    param_2->GlobalDistanceFieldMipTransition = param_1->MipTransition;
    param_2->GlobalDistanceFieldClipmapSizeInPages = param_1->ClipmapSizeInPages;
    dVar1 = (param_1->InvPageAtlasSize).field0_0x0._s_0.Y;
    dVar2 = (param_1->InvPageAtlasSize).field0_0x0._s_0.Z;
    (param_2->GlobalDistanceFieldInvPageAtlasSize).field0_0x0._s_0.X =
         (float)(param_1->InvPageAtlasSize).field0_0x0._s_0.X;
    (param_2->GlobalDistanceFieldInvPageAtlasSize).field0_0x0._s_0.Y = (float)dVar1;
    (param_2->GlobalDistanceFieldInvPageAtlasSize).field0_0x0._s_0.Z = (float)dVar2;
    dVar1 = (param_1->InvCoverageAtlasSize).field0_0x0._s_0.Y;
    dVar2 = (param_1->InvCoverageAtlasSize).field0_0x0._s_0.Z;
    (param_2->GlobalDistanceFieldInvCoverageAtlasSize).field0_0x0._s_0.X =
         (float)(param_1->InvCoverageAtlasSize).field0_0x0._s_0.X;
    (param_2->GlobalDistanceFieldInvCoverageAtlasSize).field0_0x0._s_0.Y = (float)dVar1;
    (param_2->GlobalDistanceFieldInvCoverageAtlasSize).field0_0x0._s_0.Z = (float)dVar2;
    fVar5 = __real_3f800000;
    param_2->GlobalVolumeDimension = param_1->GlobalDFResolution;
    param_2->GlobalVolumeTexelSize = fVar5 / param_1->GlobalDFResolution;
    param_2->MaxGlobalDFAOConeDistance = param_1->MaxDFAOConeDistance;
    uVar7 = param_1->NumGlobalSDFClipmaps;
  }
  param_2->NumGlobalSDFClipmaps = uVar7;
  param_2->CoveredExpandSurfaceScale = 0.0;
  param_2->NotCoveredExpandSurfaceScale = 0.0;
  param_2->NotCoveredMinStepScale = 0.0;
  param_2->DitheredTransparencyStepThreshold = 0.0;
  param_2->DitheredTransparencyTraceThreshold = 0.0;
  param_2->GlobalDistanceFieldCoverageAtlasTextureSampler =
       TStaticStateRHI<TStaticSamplerState<2,0,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  param_2->GlobalDistanceFieldPageAtlasTextureSampler =
       TStaticStateRHI<TStaticSamplerState<2,0,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  param_2->GlobalDistanceFieldMipTextureSampler =
       TStaticStateRHI<TStaticSamplerState<2,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  return;
}

