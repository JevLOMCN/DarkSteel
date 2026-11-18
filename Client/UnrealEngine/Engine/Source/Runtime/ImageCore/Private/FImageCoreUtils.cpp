// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageCore
// Functions: 8

// ConvertToRawImageFormat @ 142357fa0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __cdecl FImageCoreUtils::ConvertToRawImageFormat(ETextureSourceFormat param_1)

{
  code *pcVar1;
  bool bVar2;
  Type TVar3;
  
  switch(param_1) {
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCoreUtils.cpp"
                       ,0x6e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3 = (*pcVar1)();
      return TVar3;
    }
    break;
  case TSF_G8:
    return G8;
  case TSF_BGRA8:
    return BGRA8;
  case TSF_BGRE8:
    return BGRE8;
  case TSF_RGBA16:
    return RGBA16;
  case TSF_RGBA16F:
    return RGBA16F;
  case TSF_RGBA8_DEPRECATED:
  case TSF_RGBE8_DEPRECATED:
    if (2 < (byte)LogImageCoreUtils._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogImageCoreUtils);
      return Invalid;
    }
    break;
  case TSF_G16:
    return G16;
  case TSF_RGBA32F:
    return RGBA32F;
  case TSF_R16F:
    return R16F;
  case TSF_R32F:
    return R32F;
  }
  return Invalid;
}

// ConvertToTextureSourceFormat @ 142358090

ETextureSourceFormat __cdecl FImageCoreUtils::ConvertToTextureSourceFormat(Type param_1)

{
  code *pcVar1;
  bool bVar2;
  ETextureSourceFormat EVar3;
  
  switch(param_1) {
  case G8:
    return TSF_G8;
  case BGRA8:
    return TSF_BGRA8;
  case BGRE8:
    return TSF_BGRE8;
  case RGBA16:
    return TSF_RGBA16;
  case RGBA16F:
    return TSF_RGBA16F;
  case RGBA32F:
    return TSF_RGBA32F;
  case G16:
    return TSF_G16;
  case R16F:
    return TSF_R16F;
  case R32F:
    return TSF_R32F;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCoreUtils.cpp"
                     ,0x82,L"");
  if (!bVar2) {
    return TSF_Invalid;
  }
  pcVar1 = (code *)swi(3);
  EVar3 = (*pcVar1)();
  return EVar3;
}

// ConvertToUncompressedTextureFormatName @ 142358170

FName __cdecl FImageCoreUtils::ConvertToUncompressedTextureFormatName(Type param_1)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  FName FVar4;
  undefined7 in_register_00000009;
  undefined1 in_DL;
  int *piVar5;
  
  FVar3._1_7_ = in_register_00000009;
  FVar3.ComparisonIndex.Value._0_1_ = param_1;
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar5 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&TextureFormatNameBGRA8,L"BGRA8");
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar5 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&TextureFormatNameG8,L"G8");
    _Init_thread_footer(&::_TSS1);
  }
  if ((*piVar5 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    ::FName::FName(&TextureFormatNameG16,L"G16");
    _Init_thread_footer(&::_TSS2);
  }
  if ((*piVar5 < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    ::FName::FName(&TextureFormatNameRGBA16F,L"RGBA16F");
    _Init_thread_footer(&::_TSS3);
  }
  if ((*piVar5 < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
    ::FName::FName(&TextureFormatNameRGBA32F,L"RGBA32F");
    _Init_thread_footer(&::_TSS4);
  }
  if ((*piVar5 < ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
    ::FName::FName(&TextureFormatNameR16F,L"R16F");
    _Init_thread_footer(&::_TSS5);
  }
  if ((*piVar5 < ::_TSS6) && (_Init_thread_header(&::_TSS6), ::_TSS6 == -1)) {
    ::FName::FName(&TextureFormatNameR32F,L"R32F");
    _Init_thread_footer(&::_TSS6);
  }
  switch(in_DL) {
  case 0:
    FVar4 = TextureFormatNameG8;
    break;
  case 1:
  case 3:
    FVar4 = TextureFormatNameBGRA8;
    break;
  case 2:
  case 4:
    FVar4 = TextureFormatNameRGBA16F;
    break;
  case 5:
    FVar4 = TextureFormatNameRGBA32F;
    break;
  case 6:
    FVar4 = TextureFormatNameG16;
    break;
  case 7:
    FVar4 = TextureFormatNameR16F;
    break;
  case 8:
    FVar4 = TextureFormatNameR32F;
    break;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCoreUtils.cpp"
                       ,0xa4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FName)(*pcVar1)();
      return FVar3;
    }
    FVar4.ComparisonIndex.Value = 0;
    FVar4.Number = 0;
  }
  *(FName *)FVar3 = FVar4;
  return FVar3;
}

// GetCommonSourceFormat @ 14235c300

/* WARNING: Removing unreachable block (ram,0x00014235c344) */
/* WARNING: Removing unreachable block (ram,0x00014235c3a2) */

ETextureSourceFormat __cdecl
FImageCoreUtils::GetCommonSourceFormat(ETextureSourceFormat param_1,ETextureSourceFormat param_2)

{
  bool bVar1;
  ETextureSourceFormat EVar2;
  
  if (param_1 == param_2) {
    return param_1;
  }
  switch(param_1) {
  case TSF_G8:
    if ((param_2 < TSF_MAX) && ((0xe28U >> (param_2 & 0x1f) & 1) != 0)) {
      return TSF_RGBA32F;
    }
    return param_2;
  case TSF_BGRA8:
  case TSF_G16:
    if (param_2 == TSF_G8) {
      return param_1;
    }
    if ((param_2 < TSF_MAX) && ((0xe28U >> (param_2 & 0x1f) & 1) != 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      return TSF_RGBA32F;
    }
    return TSF_RGBA16;
  default:
    break;
  case TSF_RGBA16:
    if ((param_2 < TSF_MAX) && ((0xe28U >> (param_2 & 0x1f) & 1) != 0)) {
      return TSF_RGBA32F;
    }
    return param_1;
  case TSF_RGBA16F:
  case TSF_R32F:
    EVar2 = TSF_RGBA32F;
    if (param_2 == TSF_R16F) {
      EVar2 = param_1;
    }
    return EVar2;
  case TSF_R16F:
    if ((param_2 == TSF_R32F) || (param_2 == TSF_RGBA16F)) {
      return param_2;
    }
  }
  return TSF_RGBA32F;
}

// GetMipCountFromDimensions @ 14235c970

int __cdecl
FImageCoreUtils::GetMipCountFromDimensions(int param_1,int param_2,int param_3,bool param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 1;
  if (param_4) {
    uVar2 = param_3;
  }
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  if ((int)uVar2 < param_2) {
    uVar2 = param_2;
  }
  iVar1 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  iVar3 = 0;
  if (uVar2 != 0) {
    iVar3 = iVar1;
  }
  return iVar3 + 1;
}

// GetPixelFormatForRawImageFormat @ 14235d630

EPixelFormat __cdecl FImageCoreUtils::GetPixelFormatForRawImageFormat(Type param_1,Type *param_2)

{
  code *pcVar1;
  bool bVar2;
  EPixelFormat EVar3;
  Type *pTVar4;
  Type local_res8 [32];
  
  pTVar4 = local_res8;
  if (param_2 != (Type *)0x0) {
    pTVar4 = param_2;
  }
  *pTVar4 = param_1;
  switch(param_1) {
  case G8:
    return PF_G8;
  case BGRA8:
    return PF_B8G8R8A8;
  case BGRE8:
  case RGBA32F:
    *pTVar4 = RGBA16F;
    return PF_FloatRGBA;
  case RGBA16:
    return PF_R16G16B16A16_UNORM;
  case RGBA16F:
    return PF_FloatRGBA;
  case G16:
    return PF_G16;
  case R16F:
    return PF_R16F;
  case R32F:
    return PF_R32_FLOAT;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCoreUtils.cpp"
                     ,0x51,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  return PF_Unknown;
}

// GetRawImageFormatForPixelFormat @ 14235dce0

Type __cdecl FImageCoreUtils::GetRawImageFormatForPixelFormat(EPixelFormat param_1)

{
  code *pcVar1;
  bool bVar2;
  Type TVar3;
  
  switch(param_1) {
  case PF_Unknown:
  case PF_DXT1:
  case PF_DXT3:
  case PF_DXT5:
  case PF_UYVY:
  case PF_DepthStencil:
  case PF_ShadowDepth:
  case PF_D24:
  case PF_BC5:
  case PF_V8U8:
  case PF_A1:
  case PF_A8:
  case PF_PVRTC2:
  case PF_PVRTC4:
  case PF_BC4:
  case PF_ATC_RGB:
  case PF_ATC_RGBA_E:
  case PF_ATC_RGBA_I:
  case PF_X24_G8:
  case PF_ETC1:
  case PF_ETC2_RGB:
  case PF_ETC2_RGBA:
  case PF_ASTC_4x4:
  case PF_ASTC_6x6:
  case PF_ASTC_8x8:
  case PF_ASTC_10x10:
  case PF_ASTC_12x12:
  case PF_BC6H:
  case PF_BC7:
  case PF_PLATFORM_HDR_0:
  case PF_PLATFORM_HDR_1:
  case PF_PLATFORM_HDR_2:
  case PF_NV12:
  case PF_ETC2_R11_EAC:
  case PF_ETC2_RG11_EAC:
  case PF_ASTC_4x4_HDR:
  case PF_ASTC_6x6_HDR:
  case PF_ASTC_8x8_HDR:
  case PF_ASTC_10x10_HDR:
  case PF_ASTC_12x12_HDR:
  case PF_P010:
  case PF_ASTC_4x4_NORM_RG:
  case PF_ASTC_6x6_NORM_RG:
  case PF_ASTC_8x8_NORM_RG:
  case PF_ASTC_10x10_NORM_RG:
  case PF_ASTC_12x12_NORM_RG:
    goto switchD_14235dd05_caseD_0;
  case PF_A32B32G32R32F:
  case PF_G32R32F:
  case PF_R32G32B32A32_UINT:
  case PF_R32G32_UINT:
  case PF_R32G32B32_UINT:
  case PF_R32G32B32_SINT:
  case PF_R32G32B32F:
    return RGBA32F;
  case PF_B8G8R8A8:
  case PF_R5G6B5_UNORM:
  case PF_R8G8B8A8:
  case PF_A8R8G8B8:
  case PF_R8G8:
  case PF_XGXR8:
  case PF_R8G8B8A8_UINT:
  case PF_R8G8B8A8_SNORM:
  case PF_B5G5R5A1_UNORM:
  case PF_G16R16_SNORM:
  case PF_R8G8_UINT:
    return BGRA8;
  case PF_G8:
  case PF_R8_UINT:
  case PF_L8:
  case PF_R8:
    return G8;
  case PF_G16:
    return G16;
  case PF_FloatRGB:
  case PF_FloatRGBA:
  case PF_G16R16F:
  case PF_G16R16F_FILTER:
  case PF_FloatR11G11B10:
  case PF_R9G9B9EXP5:
    return RGBA16F;
  case PF_R32_FLOAT:
  case PF_R32_UINT:
  case PF_R32_SINT:
  case PF_R8_SINT:
  case PF_R64_UINT:
    return R32F;
  case PF_G16R16:
  case PF_A2B10G10R10:
  case PF_A16B16G16R16:
  case PF_R16_UINT:
  case PF_R16_SINT:
  case PF_R16G16B16A16_UINT:
  case PF_R16G16B16A16_SINT:
  case PF_R16G16_UINT:
  case PF_R16G16B16A16_UNORM:
  case PF_R16G16B16A16_SNORM:
    return RGBA16;
  case PF_R16F:
  case PF_R16F_FILTER:
    return R16F;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCoreUtils.cpp"
                       ,0x141,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3 = (*pcVar1)();
      return TVar3;
    }
switchD_14235dd05_caseD_0:
    return Invalid;
  }
}

// IsImageImportPossible @ 14235f5d0

bool __cdecl FImageCoreUtils::IsImageImportPossible(long64 param_1,long64 param_2)

{
  if ((((0 < param_1) && (0 < param_2)) && (param_1 < 0x80000000)) &&
     ((param_2 < 0x80000000 && (param_1 * param_2 < 0x100000000)))) {
    return true;
  }
  return false;
}

