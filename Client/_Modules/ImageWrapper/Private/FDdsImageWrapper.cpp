// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 7

// Reset @ 1426095b0

void __thiscall FDdsImageWrapper::Reset(FDdsImageWrapper *this)

{
  FDDSFile *pFVar1;
  FScriptContainerElement *pFVar2;
  
  FImageWrapperBase::Reset((FImageWrapperBase *)this);
  pFVar1 = this->DDS;
  if (pFVar1 != (FDDSFile *)0x0) {
    pFVar2 = (pFVar1->MipRawData).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->Mips).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x48);
    this->DDS = (FDDSFile *)0x0;
  }
  return;
}

// Compress @ 142609610

/* WARNING: Enum "EDDSError": Some values do not have unique names */

void __thiscall FDdsImageWrapper::Compress(FDdsImageWrapper *this,int param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  char cVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  ERGBFormat EVar6;
  Type TVar7;
  bool bVar8;
  int iVar9;
  EDXGIFormat EVar10;
  EDDSError EVar11;
  undefined4 *puVar12;
  FDDSFile *pFVar13;
  undefined4 *puVar14;
  char *pcVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  bool local_res8 [8];
  FImageView local_88;
  void *local_60;
  undefined8 local_58;
  int iStack_50;
  undefined2 uStack_4c;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  void *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  plVar1 = &this->_padding_;
  lVar16 = 0;
  this->_padding_ = 0;
  if (*plVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)&this->_padding_,0,plVar1);
  }
  pFVar13 = this->DDS;
  if (pFVar13 != (FDDSFile *)0x0) {
    pFVar4 = (pFVar13->MipRawData).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    pFVar4 = (pFVar13->Mips).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    ::operator_delete(pFVar13,0x48);
    this->DDS = (FDDSFile *)0x0;
  }
  EVar6 = (**(code **)(this->_padding_ + 0x58))(this);
  iVar9 = (**(code **)(this->_padding_ + 0x50))(this);
  TVar7 = IImageWrapper::ConvertRGBFormat(EVar6,iVar9,local_res8);
  if (TVar7 == Invalid) {
    ::FString::operator=((FString *)&this->_padding_,L"Format not supported");
    if (this->_padding_ == 0) {
      return;
    }
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("CompressedData.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\DdsImageWrapper.cpp"
                       ,0x19,L"");
    if (!bVar8) {
      return;
    }
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_88._padding_._5_1_ = -(TVar7 < BGRE8) & sRGB;
  local_88._padding_._0_4_ = (int)this->_padding_;
  local_88._padding_._4_4_ = (int)this->_padding_;
  local_88._padding_._0_4_ = 1;
  local_88.RawData = (void *)this->_padding_;
  local_58 = 0;
  iStack_50 = 0;
  uStack_4c = 0x201;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  local_88._padding_._4_1_ = TVar7;
  if (local_res8[0] != false) goto LAB_1426099d2;
  cVar3 = (char)this->_padding_;
  if (cVar3 == '\0') {
    if ((*(int *)((longlong)&this->_padding_ + 4) != 8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("BitDepth == 8",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\DdsImageWrapper.cpp"
                           ,0x32,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (TVar7 != BGRA8) {
      iVar9 = 0x33;
      pcVar15 = "RawImageFormat == ERawImageFormat::BGRA8";
LAB_1426099ac:
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        (pcVar15,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\DdsImageWrapper.cpp"
                         ,iVar9,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  else {
    if (cVar3 != '\x01') {
      if (cVar3 == '\x05') {
        if ((*(int *)((longlong)&this->_padding_ + 4) != 0x20) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("BitDepth == 32",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\DdsImageWrapper.cpp"
                               ,0x44,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((TVar7 != RGBA32F) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("RawImageFormat == ERawImageFormat::RGBA32F",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\DdsImageWrapper.cpp"
                               ,0x45,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar18 = (longlong)(int)local_88._padding_ * (longlong)local_88._padding_._4_4_ *
                 (longlong)(int)local_88._padding_;
        if (3 < lVar18) {
          puVar14 = (undefined4 *)((longlong)local_88.RawData + 8);
          puVar12 = (undefined4 *)((longlong)local_48 + 0x18);
          lVar17 = (lVar18 - 4U >> 2) + 1;
          lVar16 = lVar17 * 4;
          do {
            uVar2 = puVar14[-2];
            puVar12[-6] = uVar2;
            puVar12[-5] = uVar2;
            puVar12[-4] = uVar2;
            puVar12[-3] = 0x3f800000;
            uVar2 = puVar14[-1];
            puVar12[-2] = uVar2;
            puVar12[-1] = uVar2;
            *puVar12 = uVar2;
            puVar12[1] = 0x3f800000;
            uVar2 = *puVar14;
            puVar12[2] = uVar2;
            puVar12[3] = uVar2;
            puVar12[4] = uVar2;
            puVar12[5] = 0x3f800000;
            uVar2 = puVar14[1];
            puVar12[6] = uVar2;
            puVar12[7] = uVar2;
            puVar12[8] = uVar2;
            puVar12[9] = 0x3f800000;
            puVar14 = puVar14 + 4;
            puVar12 = puVar12 + 0x10;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
        if (lVar16 < lVar18) {
          puVar14 = (undefined4 *)(lVar16 * 0x10 + 8 + (longlong)local_48);
          do {
            uVar2 = *(undefined4 *)((longlong)local_88.RawData + lVar16 * 4);
            puVar14[-2] = uVar2;
            puVar14[-1] = uVar2;
            *puVar14 = uVar2;
            puVar14[1] = 0x3f800000;
            lVar16 = lVar16 + 1;
            puVar14 = puVar14 + 4;
          } while (lVar16 < lVar18);
        }
        local_60 = local_48;
        local_88._padding_._0_4_ = (int)local_58;
        local_88._padding_._4_4_ = (int)((ulonglong)local_58 >> 0x20);
        local_88._padding_._0_4_ = iStack_50;
        local_88._padding_._6_1_ = uStack_4a;
        local_88._padding_._7_1_ = uStack_49;
        local_88.RawData = local_48;
        local_88._padding_._5_1_ = uStack_4c._1_1_;
        local_88._padding_._4_1_ = (Type)uStack_4c;
      }
      else {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\DdsImageWrapper.cpp"
                           ,0x52,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      goto LAB_1426099d2;
    }
    if ((*(int *)((longlong)&this->_padding_ + 4) != 0x10) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("BitDepth == 16",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\DdsImageWrapper.cpp"
                           ,0x3b,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (TVar7 != RGBA16) {
      iVar9 = 0x3c;
      pcVar15 = "RawImageFormat == ERawImageFormat::RGBA16";
      goto LAB_1426099ac;
    }
  }
  FImageCore::CopyImageRGBABGRA(&local_88,&local_88);
LAB_1426099d2:
  EVar10 = UE::DDS::DXGIFormatFromRawFormat(local_88._padding_._4_1_,local_88._padding_._5_1_);
  pFVar13 = UE::DDS::FDDSFile::CreateEmpty2D
                      ((uint)this->_padding_,(uint)this->_padding_,1,EVar10,0,(EDDSError *)0x0);
  this->DDS = pFVar13;
  UE::DDS::FDDSFile::FillMip(pFVar13,&local_88,0);
  EVar11 = UE::DDS::FDDSFile::WriteDDS
                     (this->DDS,
                      (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)&this->_padding_,D3D10);
  pFVar13 = this->DDS;
  if (pFVar13 != (FDDSFile *)0x0) {
    pFVar4 = (pFVar13->MipRawData).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    pFVar4 = (pFVar13->Mips).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    ::operator_delete(pFVar13,0x48);
    this->DDS = (FDDSFile *)0x0;
  }
  if (EVar11 != OK) {
    ::FString::operator=((FString *)&this->_padding_,L"WriteDDS failed");
    this->_padding_ = 0;
    if (*plVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (1,1,0,(ForAnyElementType *)&this->_padding_,0,plVar1);
    }
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// SetCompressed @ 142609ad0

/* WARNING: Enum "EDDSError": Some values do not have unique names */

bool __thiscall FDdsImageWrapper::SetCompressed(FDdsImageWrapper *this,void *param_1,long64 param_2)

{
  FScriptContainerElement *pFVar1;
  Type TVar2;
  bool bVar3;
  FDDSFile *pFVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  EDDSError local_res8 [2];
  
  FImageWrapperBase::SetCompressed((FImageWrapperBase *)this,param_1,param_2);
  pFVar4 = this->DDS;
  if (pFVar4 != (FDDSFile *)0x0) {
    pFVar1 = (pFVar4->MipRawData).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (pFVar4->Mips).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(pFVar4,0x48);
    this->DDS = (FDDSFile *)0x0;
  }
  pFVar4 = UE::DDS::FDDSFile::CreateFromDDSInMemory(param_1,param_2,local_res8,Full);
  this->DDS = pFVar4;
  if ((pFVar4 == (FDDSFile *)0x0) || (local_res8[0] != OK)) {
    ::FString::operator=((FString *)&this->_padding_,L"CreateFromDDSInMemory failed");
    this->_padding_ = 0;
    if (this->_padding_ != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (1,1,0,(ForAnyElementType *)&this->_padding_,0,&this->_padding_);
    }
    pFVar4 = this->DDS;
    if (pFVar4 == (FDDSFile *)0x0) {
      return false;
    }
    pFVar1 = (pFVar4->MipRawData).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (pFVar4->Mips).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  else {
    UE::DDS::FDDSFile::ConvertRGBXtoRGBA(pFVar4);
    UE::DDS::FDDSFile::ConvertChannelOrder(this->DDS,BGRA);
    TVar2 = UE::DDS::DXGIFormatGetClosestRawFormat(this->DDS->DXGIFormat,(bool *)0x0);
    if (TVar2 == Invalid) {
      ::FString::operator=((FString *)&this->_padding_,L"DDS DXGIFormat not supported");
      this->_padding_ = 0;
      if (this->_padding_ != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                  (1,1,0,(ForAnyElementType *)&this->_padding_,0,&this->_padding_);
      }
      pFVar4 = this->DDS;
      if (pFVar4 == (FDDSFile *)0x0) {
        return false;
      }
      pFVar1 = (pFVar4->MipRawData).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar4->Mips).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
    }
    else {
      bVar3 = UE::DDS::FDDSFile::IsValidTexture2D(this->DDS);
      if (bVar3) {
        IImageWrapper::ConvertRawImageFormat
                  (TVar2,(ERGBFormat *)&this->_padding_,(int *)((longlong)&this->_padding_ + 4));
        uVar5 = (ulonglong)this->DDS->Width;
        this->_padding_ = uVar5;
        uVar6 = (ulonglong)this->DDS->Height;
        this->_padding_ = uVar6;
        bVar3 = FImageCoreUtils::IsImageImportPossible(uVar5,uVar6);
        if (!bVar3) {
          ::FString::operator=
                    ((FString *)&this->_padding_,L"Image dimensions are not possible to import");
          return false;
        }
        return true;
      }
      ::FString::operator=
                ((FString *)&this->_padding_,
                 L"DDS is a complex 3d/cube/array image, only 2d DDS surfaces are supported here");
      this->_padding_ = 0;
      if (this->_padding_ != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                  (1,1,0,(ForAnyElementType *)&this->_padding_,0,&this->_padding_);
      }
      pFVar4 = this->DDS;
      if (pFVar4 == (FDDSFile *)0x0) {
        return false;
      }
      pFVar1 = (pFVar4->MipRawData).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar4->Mips).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
    }
  }
  ::operator_delete(pFVar4,0x48);
  this->DDS = (FDDSFile *)0x0;
  return false;
}

// Uncompress @ 142609d40

void __thiscall FDdsImageWrapper::Uncompress(FDdsImageWrapper *this,ERGBFormat param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  FDDSFile *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  ERGBFormat EVar7;
  Type TVar8;
  int iVar9;
  FImageView local_58;
  FImage local_40;
  
  plVar1 = &this->_padding_;
  plVar2 = &this->_padding_;
  this->_padding_ = 0;
  if (*plVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)plVar1,0,plVar2);
  }
  if ((this->DDS == (FDDSFile *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DDS != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\DdsImageWrapper.cpp"
                         ,0xaf,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  EVar7 = (**(code **)(this->_padding_ + 0x58))(this);
  if ((param_1 != EVar7) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InFormat == GetFormat()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\DdsImageWrapper.cpp"
                         ,0xb1,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar9 = (**(code **)(this->_padding_ + 0x50))(this);
  if ((param_2 != iVar9) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InBitDepth == GetBitDepth()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\DdsImageWrapper.cpp"
                         ,0xb2,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  TVar8 = UE::DDS::DXGIFormatGetClosestRawFormat(this->DDS->DXGIFormat,(bool *)0x0);
  FImage::FImage(&local_40,(int)this->_padding_,(int)this->_padding_,1,TVar8,-(TVar8 < BGRE8) & sRGB
                );
  local_58._padding_ = local_40._padding_;
  local_58._padding_ = local_40._padding_;
  local_58.RawData = local_40.RawData.AllocatorInstance.Data;
  bVar6 = UE::DDS::FDDSFile::GetMipImage(this->DDS,&local_58,0);
  if (bVar6) {
    if ((TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)plVar1 != &local_40.RawData) {
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      *plVar1 = (longlong)local_40.RawData.AllocatorInstance.Data;
      local_40.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      this->_padding_ = local_40.RawData.ArrayNum;
      *plVar2 = local_40.RawData.ArrayMax;
      local_40.RawData.ArrayNum = 0;
      local_40.RawData.ArrayMax = 0;
    }
  }
  else {
    ::FString::operator=((FString *)&this->_padding_,L"DDS GetMipImage failed");
    pFVar3 = this->DDS;
    if (pFVar3 != (FDDSFile *)0x0) {
      pFVar4 = (pFVar3->MipRawData).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      pFVar4 = (pFVar3->Mips).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      ::operator_delete(pFVar3,0x48);
      this->DDS = (FDDSFile *)0x0;
    }
    if ((this->_padding_ != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawData.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\DdsImageWrapper.cpp"
                           ,0xbd,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (local_40.RawData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.RawData.AllocatorInstance.Data);
  }
  return;
}

// CanSetRawFormat @ 142609f80

bool __thiscall
FDdsImageWrapper::CanSetRawFormat(FDdsImageWrapper *this,ERGBFormat param_1,int param_2)

{
  Type TVar1;
  ERGBFormat local_res10 [16];
  int local_res20 [2];
  
  TVar1 = IImageWrapper::ConvertRGBFormat(param_1,param_2,(bool *)0x0);
  IImageWrapper::ConvertRawImageFormat(TVar1,local_res10,local_res20);
  if (param_1 == local_res10[0]) {
    return param_2 == local_res20[0];
  }
  return false;
}

// GetSupportedRawFormat @ 142609fe0

Type __thiscall FDdsImageWrapper::GetSupportedRawFormat(FDdsImageWrapper *this,Type param_1)

{
  return param_1;
}

// ~FDdsImageWrapper @ 14266a030

void __thiscall FDdsImageWrapper::~FDdsImageWrapper(FDdsImageWrapper *this)

{
  FDDSFile *pFVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FDdsImageWrapper__6B_;
  pFVar1 = this->DDS;
  if (pFVar1 != (FDDSFile *)0x0) {
    pFVar2 = (pFVar1->MipRawData).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->Mips).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x48);
    this->DDS = (FDDSFile *)0x0;
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IImageWrapper__6B_;
  return;
}

