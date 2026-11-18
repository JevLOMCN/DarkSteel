// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 2

// CalcMemorySizeEstimate @ 145c92ab0

ulong64 __thiscall
FRHITextureDesc::CalcMemorySizeEstimate(FRHITextureDesc *this,uint param_1,uint param_2)

{
  EPixelFormat EVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulong64 uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  
  Validate(this,L"CalcMemorySizeEstimate",true);
  if ((((this->NumMips <= param_1) || (param_2 < param_1)) || (this->NumMips <= param_2)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FirstMipIndex < NumMips && FirstMipIndex <= LastMipIndex && LastMipIndex < NumMips"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                         ,0x737,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return uVar6;
  }
  lVar11 = 0;
  if (param_1 <= param_2) {
    EVar1 = this->Format;
    do {
      bVar7 = (byte)param_1;
      uVar10 = (uint)(this->Depth >> (bVar7 & 0x1f));
      iVar8 = (this->Extent).field0_0x0._s_0.X >> (bVar7 & 0x1f);
      iVar9 = (this->Extent).field0_0x0._s_0.Y >> (bVar7 & 0x1f);
      iVar4 = 1;
      if (1 < iVar8) {
        iVar4 = iVar8;
      }
      iVar8 = 1;
      if (1 < iVar9) {
        iVar8 = iVar9;
      }
      uVar5 = 1;
      if (1 < uVar10) {
        uVar5 = uVar10;
      }
      param_1 = param_1 + 1;
      lVar11 = lVar11 + (ulonglong)
                        (uint)(((int)((uVar5 - 1) + GPixelFormats[EVar1].BlockSizeZ) /
                               GPixelFormats[EVar1].BlockSizeZ) *
                               ((iVar4 + -1 + GPixelFormats[EVar1].BlockSizeX) /
                               GPixelFormats[EVar1].BlockSizeX) *
                               ((iVar8 + -1 + GPixelFormats[EVar1].BlockSizeY) /
                               GPixelFormats[EVar1].BlockSizeY) * GPixelFormats[EVar1].BlockBytes);
    } while (param_1 <= param_2);
  }
  uVar6 = lVar11 * (ulonglong)this->NumSamples * (ulonglong)this->ArraySize;
  if ((this->Dimension != TextureCube) && (this->Dimension != TextureCubeArray)) {
    return uVar6;
  }
  return uVar6 * 6;
}

// Validate @ 145cc9f30

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FRHITextureDesc::Validate(FRHITextureDesc *param_1,wchar_t *param_2,bool param_3)

{
  EPixelFormat EVar1;
  ETextureDimension EVar2;
  ushort uVar3;
  TIntPoint<int>_u_0_s_0 TVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uchar uVar8;
  TRHIGlobal<int> TVar9;
  int iVar10;
  int iStackX_24;
  
  EVar1 = param_1->Format;
  if (param_3) {
    if ((EVar1 == PF_Unknown) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Desc.Format != PF_Unknown",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                           ,0x674,L"Illegal to create texture %s with an invalid pixel format."),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    if ((PF_R8G8B8 < param_1->Format) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Desc.Format < PF_MAX",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                           ,0x675,L"Illegal to create texture %s with an invalid pixel format."),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    if ((GPixelFormats[param_1->Format].Supported == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("GPixelFormats[Desc.Format].Supported",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                           ,0x679,
                           L"Failed to create texture %s with pixel format %s because it is not supported."
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
LAB_145cca035:
    if ((param_1->Dimension == TextureCube) ||
       (TVar9.Value = GRHIGlobals.MaxTextureDimensions.Value, param_1->Dimension == TextureCubeArray
       )) {
      TVar9.Value = GRHIGlobals.MaxCubeTextureDimensions.Value;
    }
    iVar10 = (param_1->Extent).field0_0x0._s_0.X;
    if (param_3) {
      if ((iVar10 < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Desc.Extent.X > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                             ,0x680,L"Texture %s\'s Extent.X=%d is invalid."), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      if ((TVar9.Value < (param_1->Extent).field0_0x0._s_0.X) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Desc.Extent.X <= MaxDimension",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                             ,0x681,L"Texture %s\'s Extent.X=%d is too large."), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      if (((param_1->Extent).field0_0x0._s_0.Y < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Desc.Extent.Y > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                             ,0x683,L"Texture %s\'s Extent.Y=%d is invalid."), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      if ((TVar9.Value < (param_1->Extent).field0_0x0._s_0.Y) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Desc.Extent.Y <= MaxDimension",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                             ,0x684,L"Texture %s\'s Extent.Y=%d is too large."), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    else if ((((iVar10 < 1) || (TVar9.Value < iVar10)) || ((param_1->Extent).field0_0x0._s_0.Y < 1))
            || (TVar9.Value < (param_1->Extent).field0_0x0._s_0.Y)) goto LAB_145cca1ed;
    uVar3 = param_1->Depth;
    if (param_1->Dimension == Texture3D) {
      if (param_3) {
        if ((uVar3 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Desc.Depth > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                               ,0x68a,L"Texture %s\'s Depth=%d is invalid."), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        if ((GRHIGlobals.MaxTextureDimensions.Value < (int)(uint)param_1->Depth) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Desc.Depth <= GRHIGlobals.MaxTextureDimensions",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                               ,0x68b,L"Texture %s\'s Extent.Depth=%d is too large."), bVar6)) {
code_r0x000145cca248:
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      else if ((uVar3 == 0) || (GRHIGlobals.MaxTextureDimensions.Value < (int)(uint)param_1->Depth))
      goto LAB_145cca1ed;
    }
    else if (uVar3 != 1) {
      if (!param_3) goto LAB_145cca1ed;
      GetTextureDimensionString(param_1->Dimension);
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Desc.Depth == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                         ,0x68f,L"Texture %s\'s Depth=%d is invalid for Dimension=%s.");
      if (bVar6) goto code_r0x000145cca248;
    }
    EVar2 = param_1->Dimension;
    if ((EVar2 == Texture2DArray) || (EVar2 == TextureCubeArray)) {
      if (param_3) {
        if ((param_1->ArraySize == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Desc.ArraySize > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                               ,0x695,L"Texture %s\'s ArraySize=%d is invalid."), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        if ((GRHIGlobals.MaxTextureArrayLayers < (int)(uint)param_1->ArraySize) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Desc.ArraySize <= GRHIGlobals.MaxTextureArrayLayers",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                               ,0x696,L"Texture %s\'s Extent.ArraySize=%d is too large."), bVar6)) {
code_r0x000145cca31e:
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      else if ((param_1->ArraySize == 0) ||
              (GRHIGlobals.MaxTextureArrayLayers < (int)(uint)param_1->ArraySize))
      goto LAB_145cca1ed;
    }
    else if (param_1->ArraySize != 1) {
      if (!param_3) goto LAB_145cca1ed;
      GetTextureDimensionString(EVar2);
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Desc.ArraySize == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                         ,0x69a,L"Texture %s\'s ArraySize=%d is invalid for Dimension=%s.");
      if (bVar6) goto code_r0x000145cca31e;
    }
    EVar2 = param_1->Dimension;
    if ((EVar2 == Texture2D) || (EVar2 == Texture2DArray)) {
      if (param_3) {
        if ((param_1->NumSamples == '\0') &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Desc.NumSamples > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                               ,0x6a0,L"Texture %s\'s NumSamples=%d is invalid."), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      else if (param_1->NumSamples == '\0') goto LAB_145cca1ed;
    }
    else if (param_3) {
      if (param_1->NumSamples != '\x01') {
        GetTextureDimensionString(EVar2);
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Desc.NumSamples == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                           ,0x6a4,L"Texture %s\'s NumSamples=%d is invalid for Dimension=%s.");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
    }
    else if (param_1->NumSamples != '\x01') goto LAB_145cca1ed;
    uVar8 = param_1->NumMips;
    if (param_1->NumSamples < 2) {
      if (param_3) {
        if ((uVar8 == '\0') &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Desc.NumMips > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                               ,0x6ae,L"Texture %s\'s NumMips=%d is invalid."), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        if ((GRHIGlobals.MaxTextureMipCount < (int)(uint)param_1->NumMips) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Desc.NumMips <= GRHIGlobals.MaxTextureMipCount",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                               ,0x6af,L"Texture %s\'s NumMips=%d is too large."), bVar6)) {
code_r0x000145cca4aa:
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      else if ((uVar8 == '\0') || (GRHIGlobals.MaxTextureMipCount < (int)(uint)param_1->NumMips))
      goto LAB_145cca1ed;
    }
    else if (uVar8 != '\x01') {
      if (!param_3) goto LAB_145cca1ed;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Desc.NumMips == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                         ,0x6aa,L"MSAA Texture %s\'s can only have one mip.");
      if (bVar6) goto code_r0x000145cca4aa;
    }
    if ((param_1->Flags & ReservedResource) != None) {
      if (param_3) {
        if ((GRHIGlobals.ReservedResources.Supported == false) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("GRHIGlobals.ReservedResources.Supported",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                               ,0x6b7,
                               L"Reserved Texture %s\'s can\'t be created because current RHI does not support reserved resources."
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      else if (GRHIGlobals.ReservedResources.Supported == false) goto LAB_145cca1ed;
      EVar2 = param_1->Dimension;
      if (EVar2 == Texture3D) {
        if (param_3) {
          if ((GRHIGlobals.ReservedResources.SupportsVolumeTextures == false) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("GRHIGlobals.ReservedResources.SupportsVolumeTextures",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                                 ,0x6bd,
                                 L"Reserved Texture %s\'s can\'t be created because current RHI does not support reserved volume textures."
                                ), bVar6)) {
code_r0x000145cca5b8:
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        else if (GRHIGlobals.ReservedResources.SupportsVolumeTextures == false) goto LAB_145cca1ed;
      }
      else if (EVar2 != Texture2D) {
        if (param_3) {
          if (EVar2 != Texture2DArray) {
            GetTextureDimensionString(EVar2);
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Desc.Dimension == ETextureDimension::Texture2D || Desc.Dimension == ETextureDimension::Texture2DArray"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                               ,0x6c5,
                               L"Reserved Texture %s\'s Desc.Dimension=%s is invalid. Expected Texture2D, Texture2DArray or Texture3D."
                              );
            if (bVar6) goto code_r0x000145cca5b8;
          }
        }
        else if (EVar2 != Texture2DArray) goto LAB_145cca1ed;
      }
      if (param_1->Dimension == Texture2DArray) {
        uVar8 = param_1->NumMips;
        TVar4 = (param_1->Extent).field0_0x0._s_0;
        if (uVar8 == '\0') {
          uVar8 = '\x01';
        }
        iVar10 = 1 << (uVar8 - 1 & 0x1f);
        iStackX_24 = TVar4.Y;
        iStackX_24 = iStackX_24 / iVar10;
        iVar10 = (int)((longlong)
                       ((ulonglong)(uint)(TVar4.X >> 0x1f) << 0x20 | (ulonglong)TVar4 & 0xffffffff)
                      / (longlong)iVar10);
        if (!param_3) {
          if (GRHIGlobals.ReservedResources.TextureArrayMinimumMipDimension <= iVar10) {
            return GRHIGlobals.ReservedResources.TextureArrayMinimumMipDimension <= iStackX_24;
          }
          goto LAB_145cca1ed;
        }
        if ((iVar10 < GRHIGlobals.ReservedResources.TextureArrayMinimumMipDimension) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("SmallestMipExtent.X >= GRHIGlobals.ReservedResources.TextureArrayMinimumMipDimension"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                               ,0x6cf,
                               L"Reserved Texture array %s\'s SmallestMipExtent.X=%d is invalid. It is required to be be no less than %d."
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        if ((iStackX_24 < GRHIGlobals.ReservedResources.TextureArrayMinimumMipDimension) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("SmallestMipExtent.Y >= GRHIGlobals.ReservedResources.TextureArrayMinimumMipDimension"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                               ,0x6d3,
                               L"Reserved Texture array %s\'s SmallestMipExtent.Y=%d is invalid. It is required to be be no less than %d."
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
    }
    bVar6 = true;
  }
  else {
    if (((EVar1 != PF_Unknown) && (EVar1 < PF_MAX)) &&
       (GPixelFormats[param_1->Format].Supported != 0)) goto LAB_145cca035;
LAB_145cca1ed:
    bVar6 = false;
  }
  return bVar6;
}

