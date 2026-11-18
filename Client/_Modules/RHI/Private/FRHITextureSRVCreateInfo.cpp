// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// Validate @ 145cca6b0

/* WARNING: Enum "ERHITexturePlane": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FRHITextureSRVCreateInfo::Validate
          (FRHITextureDesc *param_1,FRHITextureSRVCreateInfo *param_2,wchar_t *param_3,bool param_4)

{
  EPixelFormat EVar1;
  EPixelFormat EVar2;
  ETextureDimension EVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  byte bVar7;
  ERHITexturePlane EVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  byte bVar12;
  byte bVar13;
  int iVar14;
  wchar_t *pwVar15;
  bool bVar16;
  
  if ((param_1->Flags & ShaderResource) == None) {
    if (param_4) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TextureDesc.Flags & ETextureCreateFlags::ShaderResource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                         ,0x6e4,
                         L"Attempted to create SRV from texture %s which was not created with TexCreate_ShaderResource"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      goto LAB_145cca71b;
    }
LAB_145ccaaa2:
    bVar5 = false;
  }
  else {
LAB_145cca71b:
    EVar1 = param_2->Format;
    if (EVar1 == PF_X24_G8) {
      if (param_1->Format != PF_DepthStencil) {
        if (!param_4) goto LAB_145ccaaa2;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TextureDesc.Format == PF_DepthStencil",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                           ,0x6eb,
                           L"PF_X24_G8 is only to read stencil from a PF_DepthStencil texture");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
LAB_145cca944:
      bVar7 = param_2->MipLevel;
      bVar12 = param_2->NumMipLevels;
      bVar13 = param_1->NumMips;
      if (!param_4) goto LAB_145cca901;
LAB_145cca956:
      if (((uint)bVar13 < (uint)bVar12 + (uint)bVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(TextureSRVDesc.MipLevel + TextureSRVDesc.NumMipLevels) <= TextureDesc.NumMips"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                             ,0x703,
                             L"Failed to create SRV at mips %d-%d: the texture %s has only %d mip levels."
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    else {
      if (EVar1 == PF_Unknown) goto LAB_145cca944;
      if (param_4) {
        if ((PF_R8G8B8 < EVar1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TextureSRVDesc.Format < PF_MAX",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                               ,0x6f1,
                               L"Illegal to create SRV for texture %s with invalid FPooledRenderTargetDesc::Format."
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        if ((GPixelFormats[param_2->Format].Supported == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("GPixelFormats[TextureSRVDesc.Format].Supported",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                               ,0x6f4,
                               L"Failed to create SRV for texture %s with pixel format %s because it is not supported."
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      else if ((PF_R8G8B8 < EVar1) || (GPixelFormats[param_2->Format].Supported == 0))
      goto LAB_145ccaaa2;
      EVar1 = param_1->Format;
      EVar2 = param_2->Format;
      if (param_4) {
        if ((((GPixelFormats[EVar2].BlockBytes != GPixelFormats[EVar1].BlockBytes) ||
             (GPixelFormats[EVar2].BlockSizeX != GPixelFormats[EVar1].BlockSizeX)) ||
            ((GPixelFormats[EVar2].BlockSizeY != GPixelFormats[EVar1].BlockSizeY ||
             (GPixelFormats[EVar2].BlockSizeZ != GPixelFormats[EVar1].BlockSizeZ)))) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("GPixelFormats[TextureSRVDesc.Format].BlockBytes == GPixelFormats[ResourcePixelFormat].BlockBytes && GPixelFormats[TextureSRVDesc.Format].BlockSizeX == GPixelFormats[ResourcePixelFormat].BlockSizeX && GPixelFormats[TextureSRVDesc.Format].BlockSizeY == GPixelFormats[ResourcePixelFormat].BlockSizeY && GPixelFormats[TextureSRVDesc.Format].BlockSizeZ == GPixelFormats[ResourcePixelFormat].BlockSizeZ"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                               ,0x6fe,
                               L"Failed to create SRV for texture %s with pixel format %s because it does not match the byte size of the texture\'s pixel format %s."
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        bVar7 = param_2->MipLevel;
        bVar12 = param_2->NumMipLevels;
        bVar13 = param_1->NumMips;
        goto LAB_145cca956;
      }
      if ((((GPixelFormats[EVar2].BlockBytes != GPixelFormats[EVar1].BlockBytes) ||
           (GPixelFormats[EVar2].BlockSizeX != GPixelFormats[EVar1].BlockSizeX)) ||
          (GPixelFormats[EVar2].BlockSizeY != GPixelFormats[EVar1].BlockSizeY)) ||
         (GPixelFormats[EVar2].BlockSizeZ != GPixelFormats[EVar1].BlockSizeZ)) goto LAB_145ccaaa2;
      bVar7 = param_2->MipLevel;
      bVar12 = param_2->NumMipLevels;
      bVar13 = param_1->NumMips;
LAB_145cca901:
      if ((uint)bVar13 < (uint)bVar7 + (uint)bVar12) goto LAB_145ccaaa2;
    }
    EVar3 = param_1->Dimension;
    if ((((EVar3 == TextureCube) || (EVar3 == TextureCubeArray)) &&
        ((param_2->DimensionOverride).bIsSet == true)) &&
       ((param_2->DimensionOverride).TypedValue == Texture2DArray)) {
      if (EVar3 == TextureCube) {
        uVar10 = 6;
      }
      else {
        uVar10 = ((uint)param_1->ArraySize + (uint)param_1->ArraySize * 2) * 2;
      }
      if (param_4) {
        if (uVar10 < (uint)param_2->NumArraySlices + (uint)param_2->FirstArraySlice) {
          pwVar15 = 
          L"Failed to create SRV at array slices %d-%d: the cube map texture %s has only %d slices."
          ;
          iVar14 = 0x710;
          pcVar11 = 
          "(TextureSRVDesc.FirstArraySlice + TextureSRVDesc.NumArraySlices) <= CubeArraySize";
LAB_145ccaaff:
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            (pcVar11,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                             ,iVar14,pwVar15);
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
LAB_145ccab17:
        EVar8 = param_2->MetaData;
        if (param_4) goto LAB_145ccab24;
      }
      else {
        uVar9 = (uint)param_2->NumArraySlices + (uint)param_2->FirstArraySlice;
        bVar5 = uVar9 < uVar10;
        bVar16 = uVar9 == uVar10;
LAB_145ccabad:
        if (!bVar5 && !bVar16) goto LAB_145ccaaa2;
LAB_145ccabb3:
        EVar8 = param_2->MetaData;
      }
      if ((EVar8 == FMask) && (GRHIGlobals.SupportsExplicitFMask == false)) goto LAB_145ccaaa2;
      if (param_2->MetaData == HTile) {
        return GRHIGlobals.SupportsExplicitHTile != false;
      }
    }
    else {
      if ((EVar3 == Texture2DArray) || (EVar3 == TextureCubeArray)) {
        if (!param_4) {
          uVar10 = (uint)param_2->NumArraySlices + (uint)param_2->FirstArraySlice;
          bVar5 = uVar10 < param_1->ArraySize;
          bVar16 = uVar10 == param_1->ArraySize;
          goto LAB_145ccabad;
        }
        if ((uint)param_1->ArraySize <
            (uint)param_2->NumArraySlices + (uint)param_2->FirstArraySlice) {
          pwVar15 = 
          L"Failed to create SRV at array slices %d-%d: the texture array %s has only %d slices.";
          iVar14 = 0x719;
          pcVar11 = 
          "(TextureSRVDesc.FirstArraySlice + TextureSRVDesc.NumArraySlices) <= TextureDesc.ArraySize"
          ;
          goto LAB_145ccaaff;
        }
        goto LAB_145ccab17;
      }
      if (!param_4) {
        if ((param_2->FirstArraySlice != 0) || (param_2->NumArraySlices != 0)) goto LAB_145ccaaa2;
        goto LAB_145ccabb3;
      }
      if ((param_2->FirstArraySlice != 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TextureSRVDesc.FirstArraySlice == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                             ,0x71f,
                             L"Failed to create SRV with FirstArraySlice=%d: the texture %s is not a texture array."
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if ((param_2->NumArraySlices != 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TextureSRVDesc.NumArraySlices == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                             ,0x722,
                             L"Failed to create SRV with NumArraySlices=%d: the texture %s is not a texture array."
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      EVar8 = param_2->MetaData;
LAB_145ccab24:
      if (((EVar8 == FMask) && (GRHIGlobals.SupportsExplicitFMask == false)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TextureSRVDesc.MetaData != ERHITextureMetaDataAccess::FMask || GRHIGlobals.SupportsExplicitFMask"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                             ,0x727,
                             L"Failed to create FMask SRV for texture %s because the current RHI doesn\'t support it. Be sure to gate the call with GRHISupportsExplicitFMask."
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if (((param_2->MetaData == HTile) && (GRHIGlobals.SupportsExplicitHTile == false)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TextureSRVDesc.MetaData != ERHITextureMetaDataAccess::HTile || GRHIGlobals.SupportsExplicitHTile"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                             ,0x72b,
                             L"Failed to create HTile SRV for texture %s because the current RHI doesn\'t support it. Be sure to gate the call with GRHISupportsExplicitHTile."
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    bVar5 = true;
  }
  return bVar5;
}

