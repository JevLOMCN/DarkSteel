// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 7

// GetExportData @ 1426069a0

TArray<unsigned_char,TSizedDefaultAllocator<64>_> * __thiscall
IImageWrapper::GetExportData
          (IImageWrapper *this,
          TArray<unsigned_char,TSizedDefaultAllocator<64>_> *__return_storage_ptr__,int param_1)

{
  (**(code **)(this->_padding_ + 0x20))();
  return __return_storage_ptr__;
}

// ~IImageWrapper @ 14266a5e0

void __thiscall IImageWrapper::~IImageWrapper(IImageWrapper *this)

{
  this->_padding_ = (longlong)&___7IImageWrapper__6B_;
  return;
}

// ConvertRGBFormat @ 142686d40

/* WARNING: Enum "Type": Some values do not have unique names */

Type __cdecl IImageWrapper::ConvertRGBFormat(ERGBFormat param_1,int param_2,bool *param_3)

{
  bool *pbVar1;
  bool local_res8 [32];
  
  pbVar1 = local_res8;
  if (param_3 != (bool *)0x0) {
    pbVar1 = param_3;
  }
  switch(param_1) {
  case RGBA:
    if (param_2 == 8) {
      *pbVar1 = false;
      return BGRA8;
    }
    if (param_2 == 0x10) {
      *pbVar1 = true;
      return RGBA16;
    }
    break;
  case BGRA:
    if (param_2 == 8) {
      *pbVar1 = true;
      return BGRA8;
    }
    if (param_2 == 0x10) {
      *pbVar1 = false;
      return RGBA16;
    }
    break;
  case Gray:
    if (param_2 == 8) {
      *pbVar1 = true;
      return G8;
    }
    if (param_2 == 0x10) {
      *pbVar1 = true;
      return G16;
    }
    break;
  case RGBAF:
    if (param_2 == 0x10) {
      *pbVar1 = true;
      return RGBA16F;
    }
    if (param_2 == 0x20) {
      *pbVar1 = true;
      return RGBA32F;
    }
    break;
  case BGRE:
    if (param_2 == 8) {
      *pbVar1 = true;
      return BGRE8;
    }
    break;
  case GrayF:
    if (param_2 == 0x10) {
      *pbVar1 = true;
      return R16F;
    }
    if (param_2 == 0x20) {
      *pbVar1 = true;
      return R32F;
    }
  }
  if (2 < (byte)LogImageWrapper._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogImageWrapper);
  }
  *pbVar1 = false;
  return Invalid;
}

// ConvertRawImageFormat @ 142686e80

void __cdecl IImageWrapper::ConvertRawImageFormat(Type param_1,ERGBFormat *param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  switch(param_1) {
  case G8:
    *param_2 = Gray;
    *param_3 = 8;
    return;
  case BGRA8:
    *param_2 = BGRA;
    *param_3 = 8;
    return;
  case BGRE8:
    *param_2 = BGRE;
    *param_3 = 8;
    return;
  case RGBA16:
    *param_2 = RGBA;
    *param_3 = 0x10;
    return;
  case RGBA16F:
    *param_2 = RGBAF;
    *param_3 = 0x10;
    return;
  case RGBA32F:
    *param_2 = RGBAF;
    *param_3 = 0x20;
    return;
  case G16:
    *param_2 = Gray;
    *param_3 = 0x10;
    return;
  case R16F:
    *param_2 = GrayF;
    *param_3 = 0x10;
    return;
  case R32F:
    *param_2 = GrayF;
    *param_3 = 0x20;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\ImageWrapperBase.cpp"
                     ,0x180,L"");
  if (!bVar2) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// GetRGBFormatBytesPerPel @ 14268b710

/* WARNING: Enum "Type": Some values do not have unique names */

long64 __cdecl IImageWrapper::GetRGBFormatBytesPerPel(ERGBFormat param_1,int param_2)

{
  switch(param_1) {
  case RGBA:
  case BGRA:
    if (param_2 == 8) {
      return 4;
    }
    if (param_2 == 0x10) {
      return 8;
    }
    break;
  case Gray:
    if (param_2 == 8) {
      return 1;
    }
    if (param_2 == 0x10) {
      return 2;
    }
    break;
  case RGBAF:
    if (param_2 == 0x10) {
      return 8;
    }
    if (param_2 == 0x20) {
      return 0x10;
    }
    break;
  case BGRE:
    if (param_2 == 8) {
      return 4;
    }
    break;
  case GrayF:
    if (param_2 == 0x10) {
      return 2;
    }
    if (param_2 == 0x20) {
      return 4;
    }
  }
  if (1 < (byte)LogImageWrapper._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogImageWrapper);
  }
  return 0;
}

// GetRawImage @ 14268b8a0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall IImageWrapper::GetRawImage(IImageWrapper *this,FDecompressedImageOutput *param_1)

{
  code *pcVar1;
  char cVar2;
  ERGBFormat EVar3;
  Type TVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  bool local_res8 [8];
  FImageView local_38;
  
  cVar2 = (**(code **)(this->_padding_ + 0x58))();
  iVar7 = (**(code **)(this->_padding_ + 0x50))(this);
  if (((cVar2 != -1) && (iVar7 != 0)) &&
     (cVar2 = (**(code **)(this->_padding_ + 0x30))(this,cVar2,iVar7,param_1), cVar2 != '\0')) {
    (**(code **)(this->_padding_ + 0x40))(this);
    (**(code **)(this->_padding_ + 0x48))(this);
    cVar2 = (**(code **)(this->_padding_ + 0x58))(this);
    iVar7 = (**(code **)(this->_padding_ + 0x50))(this);
    EVar3 = (**(code **)(this->_padding_ + 0x58))(this);
    iVar8 = (**(code **)(this->_padding_ + 0x50))(this);
    TVar4 = ConvertRGBFormat(EVar3,iVar8,local_res8);
    if (TVar4 != Invalid) {
      if (local_res8[0] == false) {
        iVar8 = 0;
        if (0 < (param_1->MipMapImage).SubImages.ArrayNum) {
          do {
            FMipMapImage::GetMipImage(&param_1->MipMapImage,&local_38,iVar8);
            if (cVar2 == '\0') {
              if ((iVar7 != 8) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("BitDepth == 8",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\ImageWrapperBase.cpp"
                                     ,0x218,L""), bVar5)) {
                pcVar1 = (code *)swi(3);
                uVar6 = (*pcVar1)();
                return (bool)uVar6;
              }
              if ((TVar4 != BGRA8) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("RawFormat == ERawImageFormat::BGRA8",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\ImageWrapperBase.cpp"
                                     ,0x219,L""), bVar5)) goto code_r0x00014268ba4c;
            }
            else {
              if (cVar2 != '\x01') {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\ImageWrapperBase.cpp"
                                   ,0x228,L"");
                if (!bVar5) {
                  return false;
                }
                pcVar1 = (code *)swi(3);
                uVar6 = (*pcVar1)();
                return (bool)uVar6;
              }
              if ((iVar7 != 0x10) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("BitDepth == 16",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\ImageWrapperBase.cpp"
                                     ,0x221,L""), bVar5)) {
                pcVar1 = (code *)swi(3);
                uVar6 = (*pcVar1)();
                return (bool)uVar6;
              }
              if ((TVar4 != RGBA16) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("RawFormat == ERawImageFormat::RGBA16",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\ImageWrapperBase.cpp"
                                     ,0x222,L""), bVar5)) {
code_r0x00014268ba4c:
                pcVar1 = (code *)swi(3);
                uVar6 = (*pcVar1)();
                return (bool)uVar6;
              }
            }
            FImageCore::TransposeImageRGBABGRA(&local_38);
            iVar8 = iVar8 + 1;
            if ((param_1->MipMapImage).SubImages.ArrayNum <= iVar8) {
              return true;
            }
          } while( true );
        }
      }
      else {
        (param_1->MipMapImage).Format = TVar4;
        (param_1->MipMapImage).GammaSpace = -(TVar4 < BGRE8) & sRGB;
      }
      return true;
    }
  }
  return false;
}

// GetRawImage @ 14268bab0

bool __thiscall IImageWrapper::GetRawImage(IImageWrapper *this,FImage *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  char cVar4;
  ERGBFormat EVar5;
  Type TVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  EGammaSpace EVar13;
  bool local_res8 [8];
  ForAnyElementType local_88;
  long64 lStack_80;
  long64 local_78;
  FImageView local_70;
  FImageView local_58;
  FImageView local_40;
  
  local_88.Data = (FScriptContainerElement *)0x0;
  lStack_80 = 0;
  local_78 = 0;
  cVar4 = (**(code **)(this->_padding_ + 0x58))();
  iVar9 = (**(code **)(this->_padding_ + 0x50))(this);
  if ((cVar4 != -1) && (iVar9 != 0)) {
    cVar4 = (**(code **)(this->_padding_ + 0x38))(this,cVar4,iVar9,&local_88);
    if (cVar4 != '\0') {
      iVar9 = (**(code **)(this->_padding_ + 0x40))(this);
      iVar10 = (**(code **)(this->_padding_ + 0x48))(this);
      cVar4 = (**(code **)(this->_padding_ + 0x58))(this);
      iVar11 = (**(code **)(this->_padding_ + 0x50))(this);
      EVar5 = (**(code **)(this->_padding_ + 0x58))(this);
      iVar12 = (**(code **)(this->_padding_ + 0x50))(this);
      TVar6 = ConvertRGBFormat(EVar5,iVar12,local_res8);
      if (TVar6 != Invalid) {
        EVar13 = -(TVar6 < BGRE8) & sRGB;
        if (local_res8[0] != false) {
          pTVar1 = &param_1->RawData;
          if (pTVar1 != (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)&local_88) {
            pFVar2 = (pTVar1->AllocatorInstance).Data;
            if (pFVar2 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar2);
            }
            (pTVar1->AllocatorInstance).Data = local_88.Data;
            local_88.Data = (FScriptContainerElement *)0x0;
            (param_1->RawData).ArrayNum = lStack_80;
            (param_1->RawData).ArrayMax = local_78;
            lStack_80 = 0;
            local_78 = 0;
          }
          *(int *)&param_1->_padding_ = iVar9;
          *(int *)((longlong)&param_1->_padding_ + 4) = iVar10;
          *(undefined4 *)&param_1->_padding_ = 1;
          *(Type *)((longlong)&param_1->_padding_ + 4) = TVar6;
          *(EGammaSpace *)((longlong)&param_1->_padding_ + 5) = EVar13;
          bVar7 = true;
          goto LAB_14268bc70;
        }
        FImage::Init(param_1,iVar9,iVar10,TVar6,EVar13);
        local_70._padding_ = param_1->_padding_;
        local_70._padding_ = param_1->_padding_;
        local_70.RawData = local_88.Data;
        if (cVar4 == '\0') {
          if (iVar11 != 8) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("BitDepth == 8",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\ImageWrapperBase.cpp"
                               ,0x1d4,L"");
            if (bVar7) {
              pcVar3 = (code *)swi(3);
              uVar8 = (*pcVar3)();
              return (bool)uVar8;
            }
          }
          if (TVar6 != BGRA8) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("RawFormat == ERawImageFormat::BGRA8",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\ImageWrapperBase.cpp"
                               ,0x1d5,L"");
            if (bVar7) {
              pcVar3 = (code *)swi(3);
              uVar8 = (*pcVar3)();
              return (bool)uVar8;
            }
          }
          local_40._padding_ = param_1->_padding_;
          local_40._padding_ = param_1->_padding_;
          local_40.RawData = (param_1->RawData).AllocatorInstance.Data;
          FImageCore::CopyImageRGBABGRA(&local_70,&local_40);
          bVar7 = true;
          goto LAB_14268bc70;
        }
        if (cVar4 == '\x01') {
          if (iVar11 != 0x10) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("BitDepth == 16",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\ImageWrapperBase.cpp"
                               ,0x1dd,L"");
            if (bVar7) {
              pcVar3 = (code *)swi(3);
              uVar8 = (*pcVar3)();
              return (bool)uVar8;
            }
          }
          if (TVar6 != RGBA16) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("RawFormat == ERawImageFormat::RGBA16",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\ImageWrapperBase.cpp"
                               ,0x1de,L"");
            if (bVar7) {
              pcVar3 = (code *)swi(3);
              uVar8 = (*pcVar3)();
              return (bool)uVar8;
            }
          }
          local_58._padding_ = param_1->_padding_;
          local_58._padding_ = param_1->_padding_;
          local_58.RawData = (param_1->RawData).AllocatorInstance.Data;
          FImageCore::CopyImageRGBABGRA(&local_70,&local_58);
          bVar7 = true;
          goto LAB_14268bc70;
        }
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\ImageWrapperBase.cpp"
                           ,0x1e4,L"");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
      }
    }
  }
  bVar7 = false;
LAB_14268bc70:
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return bVar7;
}

