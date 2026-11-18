// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 7

// Compress @ 14260a030

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FTgaImageWrapper::Compress(FTgaImageWrapper *this,int param_1)

{
  longlong *this_00;
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  ERGBFormat EVar5;
  bool bVar6;
  bool bVar7;
  ushort uVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  int iVar14;
  undefined1 *_Dst;
  void *_Src;
  byte bVar15;
  longlong lVar16;
  size_t _Size;
  bool local_res8 [8];
  longlong lStack_60;
  undefined2 local_58;
  FImageView local_50;
  
  this_00 = &this->_padding_;
  this->_padding_ = 0;
  if (this->_padding_ < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)this_00,0,&this->_padding_);
  }
  if (this->_padding_ != 0) {
    EVar5 = (**(code **)(this->_padding_ + 0x58))(this);
    iVar10 = (**(code **)(this->_padding_ + 0x50))(this);
    local_50._padding_._4_1_ = IImageWrapper::ConvertRGBFormat(EVar5,iVar10,local_res8);
    if ((local_50._padding_._4_1_ != Invalid) && (local_res8[0] != false)) {
      bVar15 = -(local_50._padding_._4_1_ < BGRE8) & 2;
      if ((this->_padding_ < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_50.RawData = (void *)this->_padding_;
      local_50._padding_._0_4_ = (undefined4)this->_padding_;
      local_50._padding_._4_4_ = (undefined4)this->_padding_;
      local_50._padding_._0_4_ = 1;
      local_50._padding_._5_1_ = bVar15;
      if ((this->_padding_ < 0x10000) && (this->_padding_ < 0x10000)) {
        if ((local_50._padding_._4_1_ != BGRA8) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Image.Format == ERawImageFormat::BGRA8",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\TgaImageWrapper.cpp"
                               ,0x28,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar2 = this->_padding_;
        _Size = lVar2 * 4;
        bVar6 = FImageCore::DetectAlphaChannel(&local_50);
        lVar1 = (ulonglong)bVar6 + 3;
        lVar12 = lVar1 * this->_padding_ * this->_padding_;
        TArray<unsigned_char,TSizedDefaultAllocator<64>_>::SetNum
                  ((TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)this_00,lVar12 + 0x12,
                   Default);
        puVar3 = (undefined8 *)*this_00;
        uVar8 = IntCastChecked<unsigned_short,__int64>(this->_padding_);
        uVar9 = IntCastChecked<unsigned_short,__int64>(this->_padding_);
        lStack_60 = (ulonglong)CONCAT22(uVar9,uVar8) << 0x20;
        local_58 = CONCAT11(bVar6 << 3,(char)lVar1 << 3);
        *puVar3 = 0x20000;
        puVar3[1] = lStack_60;
        *(undefined2 *)(puVar3 + 2) = local_58;
        _Dst = (undefined1 *)((longlong)puVar3 + 0x12);
        iVar10 = (int)this->_padding_ + -1;
        if (-1 < iVar10) {
          lVar16 = (longlong)iVar10 * _Size;
          do {
            uVar11 = 0;
            if (lVar16 < this->_padding_) {
              uVar11 = (uint)((ulonglong)lVar16 >> 0x3f) ^ 1;
            }
            if ((uVar11 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            _Src = (void *)(this->_padding_ + lVar16);
            if (bVar6) {
              if ((lVar1 != 4) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("OutBytesPerPixel == 4",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\TgaImageWrapper.cpp"
                                     ,0x4d,L""), bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if ((this->_padding_ != lVar12) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("RawData.Num() == OutSurfaceBytes",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\TgaImageWrapper.cpp"
                                     ,0x4e,L""), bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              memcpy(_Dst,_Src,_Size);
              _Dst = _Dst + _Size;
            }
            else {
              if ((lVar1 != 3) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("OutBytesPerPixel == 3",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\TgaImageWrapper.cpp"
                                     ,0x55,L""), bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar14 = 0;
              if (0 < this->_padding_) {
                puVar13 = (undefined1 *)((longlong)_Src + 2);
                do {
                  *_Dst = puVar13[-2];
                  iVar14 = iVar14 + 1;
                  _Dst[1] = puVar13[-1];
                  _Dst[2] = *puVar13;
                  _Dst = _Dst + 3;
                  puVar13 = puVar13 + 4;
                } while ((longlong)iVar14 < this->_padding_);
              }
            }
            lVar16 = lVar16 + lVar2 * -4;
            iVar10 = iVar10 + -1;
          } while (-1 < iVar10);
        }
        if ((_Dst != (undefined1 *)(this->_padding_ + this->_padding_)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("CompressedPtr == CompressedData.GetData() + CompressedData.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\TgaImageWrapper.cpp"
                               ,0x6c,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        ::FString::operator=((FString *)&this->_padding_,L"Image is too large to export as TGA");
      }
      return;
    }
  }
  ::FString::operator=((FString *)&this->_padding_,L"No valid image to compress");
  return;
}

// SetCompressed @ 14260a440

bool __thiscall FTgaImageWrapper::SetCompressed(FTgaImageWrapper *this,void *param_1,long64 param_2)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uchar *puVar8;
  
  bVar6 = FImageWrapperBase::SetCompressed((FImageWrapperBase *)this,param_1,param_2);
  if (!bVar6) {
    return false;
  }
  if ((this->_padding_ == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompressedData.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\TgaImageWrapper.cpp"
                         ,0xa8,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  lVar4 = this->_padding_;
  if ((ulonglong)this->_padding_ < 0x12) {
    return false;
  }
  if (*(char *)(lVar4 + 1) == '\0') {
    cVar1 = *(char *)(lVar4 + 2);
    if (((cVar1 != '\x02') && (cVar1 != '\x03')) && (cVar1 != '\n')) {
      return false;
    }
  }
  else {
    if (*(char *)(lVar4 + 1) != '\x01') {
      return false;
    }
    if (*(char *)(lVar4 + 2) != '\x01') {
      return false;
    }
    if (*(char *)(lVar4 + 0x10) != '\b') {
      return false;
    }
  }
  puVar8 = (uchar *)(lVar4 + 2);
  uVar2 = *(ushort *)(lVar4 + 0xc);
  this->_padding_ = (ulonglong)uVar2;
  uVar3 = *(ushort *)(lVar4 + 0xe);
  this->_padding_ = (ulonglong)uVar3;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 8;
  if (*(char *)(lVar4 + 1) == '\x01') {
    if (*puVar8 == '\x01') {
      cVar1 = *(char *)(lVar4 + 0x10);
joined_r0x00014260a544:
      if (cVar1 == '\b') {
        uVar7 = 2;
        goto LAB_14260a500;
      }
    }
  }
  else if ((*(char *)(lVar4 + 1) == '\0') && (*puVar8 == '\x03')) {
    cVar1 = *(char *)(lVar4 + 0x10);
    goto joined_r0x00014260a544;
  }
  uVar7 = 1;
LAB_14260a500:
  *(undefined1 *)&this->_padding_ = uVar7;
  this->ColorMapType = (uint)*(byte *)(lVar4 + 1);
  this->ImageTypeCode = *puVar8;
  bVar6 = FImageCoreUtils::IsImageImportPossible((ulonglong)uVar2,(ulonglong)uVar3);
  if (!bVar6) {
    ::FString::operator=((FString *)&this->_padding_,L"Image dimensions are not possible to import")
    ;
    return false;
  }
  return true;
}

// Uncompress @ 14260a560

void __thiscall FTgaImageWrapper::Uncompress(FTgaImageWrapper *this,ERGBFormat param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  ulong64 uVar5;
  
  lVar4 = 4;
  if (param_1 == Gray) {
    lVar4 = 1;
  }
  uVar5 = lVar4 * this->_padding_ * this->_padding_;
  if (-1 < (longlong)uVar5) {
    plVar1 = &this->_padding_;
    plVar2 = &this->_padding_;
    *plVar2 = 0;
    if (*plVar1 != uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (1,1,uVar5,(ForAnyElementType *)&this->_padding_,0,plVar1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,uVar5,(ForAnyElementType *)&this->_padding_,plVar2,plVar1);
    bVar3 = DecompressTGA_helper
                      ((FTGAFileHeader *)this->_padding_,this->_padding_,(uint *)this->_padding_,
                       uVar5);
    if (!bVar3) {
      ::FString::operator=((FString *)&this->_padding_,L"Error while decompressing a TGA");
      *plVar2 = 0;
      if (*plVar1 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                  (1,1,0,(ForAnyElementType *)&this->_padding_,0,plVar1);
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar5);
}

// CanSetRawFormat @ 14260a670

bool __thiscall
FTgaImageWrapper::CanSetRawFormat(FTgaImageWrapper *this,ERGBFormat param_1,int param_2)

{
  if ((param_1 == BGRA) && (param_2 == 8)) {
    return true;
  }
  return false;
}

// GetSupportedRawFormat @ 14260a690

Type __thiscall FTgaImageWrapper::GetSupportedRawFormat(FTgaImageWrapper *this,Type param_1)

{
  return BGRA8;
}

// IsTGAHeader @ 14268c1b0

bool __cdecl FTgaImageWrapper::IsTGAHeader(void *param_1,long64 param_2)

{
  char cVar1;
  
  if (0x11 < (ulonglong)param_2) {
    if (*(char *)((longlong)param_1 + 1) == '\0') {
      cVar1 = *(char *)((longlong)param_1 + 2);
      if (((cVar1 == '\x02') || (cVar1 == '\x03')) || (cVar1 == '\n')) {
        return true;
      }
    }
    else if ((*(char *)((longlong)param_1 + 1) == '\x01') &&
            (*(char *)((longlong)param_1 + 2) == '\x01')) {
      return *(char *)((longlong)param_1 + 0x10) == '\b';
    }
  }
  return false;
}

// LoadTGAHeader @ 14268ce10

bool __thiscall FTgaImageWrapper::LoadTGAHeader(FTgaImageWrapper *this)

{
  char cVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uchar *puVar6;
  
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompressedData.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\TgaImageWrapper.cpp"
                         ,0xa8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  lVar2 = this->_padding_;
  if ((ulonglong)this->_padding_ < 0x12) {
    return false;
  }
  if (*(char *)(lVar2 + 1) == '\0') {
    cVar1 = *(char *)(lVar2 + 2);
    if (((cVar1 != '\x02') && (cVar1 != '\x03')) && (cVar1 != '\n')) {
      return false;
    }
  }
  else {
    if (*(char *)(lVar2 + 1) != '\x01') {
      return false;
    }
    if (*(char *)(lVar2 + 2) != '\x01') {
      return false;
    }
    if (*(char *)(lVar2 + 0x10) != '\b') {
      return false;
    }
  }
  puVar6 = (uchar *)(lVar2 + 2);
  this->_padding_ = (ulonglong)*(ushort *)(lVar2 + 0xc);
  this->_padding_ = (ulonglong)*(ushort *)(lVar2 + 0xe);
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 8;
  if (*(char *)(lVar2 + 1) == '\x01') {
    if (*puVar6 == '\x01') {
      cVar1 = *(char *)(lVar2 + 0x10);
joined_r0x00014268cee7:
      if (cVar1 == '\b') {
        uVar5 = 2;
        goto LAB_14268cec2;
      }
    }
  }
  else if ((*(char *)(lVar2 + 1) == '\0') && (*puVar6 == '\x03')) {
    cVar1 = *(char *)(lVar2 + 0x10);
    goto joined_r0x00014268cee7;
  }
  uVar5 = 1;
LAB_14268cec2:
  *(undefined1 *)&this->_padding_ = uVar5;
  this->ColorMapType = (uint)*(byte *)(lVar2 + 1);
  this->ImageTypeCode = *puVar6;
  return true;
}

