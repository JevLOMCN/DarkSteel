// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 9

// FBmpImageWrapper @ 142664b20

FBmpImageWrapper * __thiscall
FBmpImageWrapper::FBmpImageWrapper(FBmpImageWrapper *this,bool param_1,bool param_2)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0xff;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FBmpImageWrapper__6B_;
  this->bHasHeader = param_1;
  this->bHalfHeight = param_2;
  return this;
}

// CanSetRawFormat @ 142682340

bool __thiscall
FBmpImageWrapper::CanSetRawFormat(FBmpImageWrapper *this,ERGBFormat param_1,int param_2)

{
  if (((byte)(param_1 - BGRA) < 2) && (param_2 == 8)) {
    return true;
  }
  return false;
}

// Compress @ 142684990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FBmpImageWrapper::Compress(FBmpImageWrapper *this,int param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  bool bVar10;
  uint uVar11;
  undefined4 uVar12;
  char *pcVar13;
  long64 lVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined1 uVar17;
  int iVar18;
  ulonglong *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  longlong lVar22;
  undefined1 *_Dst;
  int iVar23;
  ulong64 uVar24;
  uint uVar25;
  void *_Src;
  size_t _Size;
  undefined1 auStackY_508 [32];
  undefined4 local_4d8;
  undefined1 *puStack_490;
  undefined8 local_438 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_508;
  cVar2 = (char)this->_padding_;
  if (((cVar2 != '\x01') && (cVar2 != '\x02')) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Format == ERGBFormat::BGRA || Format == ERGBFormat::Gray",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\BmpImageWrapper.cpp"
                          ,0x23f,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((*(int *)((longlong)&this->_padding_ + 4) != 8) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("BitDepth == 8",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\BmpImageWrapper.cpp"
                          ,0x240,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((0x1ffffffc < (int)this->_padding_ - 1U) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("BmpDimensionIsValid(Width)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\BmpImageWrapper.cpp"
                          ,0x242,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((0x1ffffffc < (int)this->_padding_ - 1U) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("BmpDimensionIsValid(Height)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\BmpImageWrapper.cpp"
                          ,0x243,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar22 = this->_padding_ * this->_padding_;
  cVar2 = (char)this->_padding_;
  lVar15 = 1;
  if (cVar2 == '\x01') {
    lVar15 = 4;
  }
  iVar23 = (int)lVar15;
  if ((this->_padding_ != lVar15 * lVar22) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("RawDataSize == NumPixels*RawBytesPerPel",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\BmpImageWrapper.cpp"
                          ,0x24c,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar15 = 0;
  if (cVar2 == '\x01') {
    if (0 < lVar22) {
      pcVar13 = (char *)(this->_padding_ + 3);
      do {
        if (*pcVar13 != -1) goto LAB_142684b17;
        lVar15 = lVar15 + 1;
        pcVar13 = pcVar13 + 4;
      } while (lVar15 < lVar22);
    }
    iVar23 = 3;
  }
LAB_142684b17:
  uVar25 = iVar23 * (int)this->_padding_ + 3U & 0xfffffffc;
  _Size = (size_t)(int)uVar25;
  uVar11 = 0;
  if (cVar2 != '\x01') {
    uVar11 = 0x400;
  }
  lVar15 = _Size * this->_padding_;
  uVar24 = (ulonglong)uVar11 + 0x400 + lVar15;
  if ((longlong)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar24);
  }
  this->_padding_ = 0;
  if (this->_padding_ != uVar24) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,uVar24,(ForAnyElementType *)&this->_padding_,0,&this->_padding_);
  }
  iVar18 = 0x28;
  if (iVar23 == 4) {
    iVar18 = 0x6c;
  }
  puStack_490 = (undefined1 *)0x0;
  lVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                     (1,1,0xe,(ForAnyElementType *)&this->_padding_,&this->_padding_,
                      &this->_padding_);
  puVar19 = (ulonglong *)(this->_padding_ + lVar14);
  *puVar19 = (ulonglong)CONCAT42(uVar11 + (int)lVar15 + 0xe + iVar18,0x4d42);
  *(int *)(puVar19 + 1) = (iVar18 + 0xe) * 0x10000;
  *(undefined2 *)((longlong)puVar19 + 0xc) = 0;
  lVar22 = this->_padding_;
  lVar9 = this->_padding_;
  uVar12 = 0;
  if (iVar23 == 4) {
    uVar12 = 3;
  }
  if (cVar2 != '\x01') {
    puStack_490 = &DAT_10000000100;
  }
  plVar1 = &this->_padding_;
  lVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                     (1,1,0x28,(ForAnyElementType *)&this->_padding_,&this->_padding_,plVar1);
  lVar3 = this->_padding_;
  *(undefined8 *)(lVar14 + lVar3) = CONCAT44((int)lVar22,iVar18);
  ((undefined8 *)(lVar14 + lVar3))[1] = CONCAT26((short)iVar23 << 3,CONCAT24(1,(int)lVar9));
  puVar20 = (undefined8 *)(lVar14 + 0x10 + lVar3);
  *puVar20 = CONCAT44((int)lVar15,uVar12);
  puVar20[1] = 0;
  *(undefined1 **)(lVar14 + 0x20 + lVar3) = puStack_490;
  if (iVar23 == 4) {
    lVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                       (1,1,0x44,(ForAnyElementType *)&this->_padding_,&this->_padding_,plVar1);
    puVar20 = (undefined8 *)(this->_padding_ + lVar14);
    *puVar20 = &DAT_ff0000ff0000;
    puVar20[1] = 0xff000000000000ff;
    puVar20[2] = 0x57696e20;
    puVar20[3] = 0;
    puVar20[4] = 0;
    puVar20[5] = 0;
    puVar20[6] = 0;
    puVar20[7] = 0;
    *(undefined4 *)(puVar20 + 8) = 0;
  }
  if (cVar2 != '\x01') {
    iVar18 = 0;
    local_4d8 = 0xff000000;
    puVar20 = local_438;
    do {
      uVar12 = local_4d8;
      uVar17 = (undefined1)iVar18;
      local_4d8._3_1_ = SUB41(uVar12,3);
      local_4d8._0_3_ = CONCAT12(uVar17,CONCAT11(uVar17,uVar17));
      iVar18 = iVar18 + 1;
      *(undefined4 *)puVar20 = local_4d8;
      puVar20 = (undefined8 *)((longlong)puVar20 + 4);
    } while (iVar18 < 0x100);
    lVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                       (1,1,0x400,(ForAnyElementType *)&this->_padding_,&this->_padding_,plVar1);
    lVar22 = 8;
    puVar20 = local_438;
    puVar21 = (undefined8 *)(this->_padding_ + lVar14);
    do {
      uVar5 = puVar20[1];
      uVar6 = puVar20[2];
      uVar7 = puVar20[3];
      *puVar21 = *puVar20;
      puVar21[1] = uVar5;
      uVar5 = puVar20[4];
      uVar8 = puVar20[5];
      puVar21[2] = uVar6;
      puVar21[3] = uVar7;
      uVar6 = puVar20[6];
      uVar7 = puVar20[7];
      puVar21[4] = uVar5;
      puVar21[5] = uVar8;
      uVar5 = puVar20[8];
      uVar8 = puVar20[9];
      puVar21[6] = uVar6;
      puVar21[7] = uVar7;
      uVar6 = puVar20[10];
      uVar7 = puVar20[0xb];
      puVar21[8] = uVar5;
      puVar21[9] = uVar8;
      uVar5 = puVar20[0xc];
      uVar8 = puVar20[0xd];
      puVar21[10] = uVar6;
      puVar21[0xb] = uVar7;
      uVar6 = puVar20[0xe];
      uVar7 = puVar20[0xf];
      puVar21[0xc] = uVar5;
      puVar21[0xd] = uVar8;
      puVar21[0xe] = uVar6;
      puVar21[0xf] = uVar7;
      lVar22 = lVar22 + -1;
      puVar20 = puVar20 + 0x10;
      puVar21 = puVar21 + 0x10;
    } while (lVar22 != 0);
  }
  lVar22 = this->_padding_;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_>::SetNum
            ((TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)&this->_padding_,lVar15 + lVar22,
             Default);
  _Dst = (undefined1 *)(lVar22 + this->_padding_);
  iVar18 = uVar25 - iVar23 * (int)this->_padding_;
  if ((3 < iVar18) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutputRowPadBytes < 4",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\BmpImageWrapper.cpp"
                          ,0x2db,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (iVar23 == 1) {
    iVar23 = (int)this->_padding_ + -1;
    lVar15 = this->_padding_;
    if (-1 < iVar23) {
      lVar22 = (longlong)iVar23;
      do {
        memcpy(_Dst,(void *)(this->_padding_ * lVar22 + lVar15),this->_padding_);
        lVar9 = this->_padding_;
        memset(_Dst + lVar9,0,(longlong)iVar18);
        _Dst = _Dst + lVar9 + iVar18;
        lVar22 = lVar22 + -1;
        iVar23 = iVar23 + -1;
      } while (-1 < iVar23);
    }
  }
  else if (iVar23 == 3) {
    lVar15 = this->_padding_;
    iVar23 = (int)this->_padding_ + -1;
    lVar22 = (longlong)iVar23;
    if (-1 < iVar23) {
      do {
        iVar23 = 0;
        if (0 < this->_padding_) {
          puVar16 = (undefined1 *)(lVar15 + 2 + this->_padding_ * lVar22 * 4);
          do {
            *_Dst = puVar16[-2];
            iVar23 = iVar23 + 1;
            _Dst[1] = puVar16[-1];
            _Dst[2] = *puVar16;
            _Dst = _Dst + 3;
            puVar16 = puVar16 + 4;
          } while ((longlong)iVar23 < this->_padding_);
        }
        memset(_Dst,0,(longlong)iVar18);
        _Dst = _Dst + iVar18;
        lVar22 = lVar22 + -1;
      } while (-1 < lVar22);
    }
  }
  else if (iVar23 == 4) {
    if ((_Size != this->_padding_ << 2) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("OutputRowBytes == Width * 4",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\BmpImageWrapper.cpp"
                            ,0x301,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((iVar18 != 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("OutputRowPadBytes == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\BmpImageWrapper.cpp"
                            ,0x302,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar23 = (int)this->_padding_ + -1;
    if (-1 < iVar23) {
      _Src = (void *)((longlong)(int)(iVar23 * uVar25) + this->_padding_);
      do {
        memcpy(_Dst,_Src,_Size);
        _Dst = _Dst + _Size;
        _Src = (void *)((longlong)_Src + (longlong)(int)-uVar25);
        iVar23 = iVar23 + -1;
      } while (-1 < iVar23);
    }
  }
  else {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\BmpImageWrapper.cpp"
                        ,0x30e,L"");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((_Dst != (undefined1 *)(this->_padding_ + this->_padding_)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("PayloadPtr == CompressedData.GetData() + CompressedData.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\BmpImageWrapper.cpp"
                          ,0x312,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  return;
}

// GetSupportedRawFormat @ 14268bdc0

Type __thiscall FBmpImageWrapper::GetSupportedRawFormat(FBmpImageWrapper *this,Type param_1)

{
  code *pcVar1;
  bool bVar2;
  Type TVar3;
  
  switch(param_1) {
  case G8:
  case BGRA8:
    return param_1;
  case BGRE8:
  case RGBA16:
  case RGBA16F:
  case RGBA32F:
  case R16F:
  case R32F:
    goto switchD_14268bdde_caseD_2;
  case G16:
    return G8;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\BmpImageWrapper.cpp"
                       ,0x237,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3 = (*pcVar1)();
      return TVar3;
    }
switchD_14268bdde_caseD_2:
    return BGRA8;
  }
}

// LoadBMPHeader @ 14268c1f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FBmpImageWrapper::LoadBMPHeader(FBmpImageWrapper *this)

{
  bool bVar1;
  
  if ((ulonglong)this->_padding_ < 0x36) {
    if (1 < (byte)LogImageWrapper._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogImageWrapper);
      return false;
    }
  }
  else {
    if ((*(char *)this->_padding_ == 'B') && (((char *)this->_padding_)[1] == 'M')) {
      bVar1 = LoadBMPInfoHeader(this,0xe);
      return bVar1;
    }
    if (1 < (byte)LogImageWrapper._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogImageWrapper);
    }
  }
  return false;
}

// LoadBMPInfoHeader @ 14268c270

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FBmpImageWrapper::LoadBMPInfoHeader(FBmpImageWrapper *this,long64 param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (this->_padding_ < param_1 + 0x28) {
    if (1 < (byte)LogImageWrapper._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogImageWrapper);
      return false;
    }
  }
  else {
    lVar6 = param_1 + this->_padding_;
    iVar2 = *(int *)(lVar6 + 0x10);
    if (((iVar2 == 0) || (iVar2 == 3)) || (iVar2 == 6)) {
      if ((*(short *)(lVar6 + 0xc) == 1) &&
         ((sVar1 = *(short *)(lVar6 + 0xe), sVar1 == 8 ||
          (((sVar1 - 0x10U & 0xffe7) == 0 && (sVar1 != 0x28)))))) {
        uVar3 = *(uint *)(lVar6 + 4);
        this->_padding_ = (ulonglong)uVar3;
        uVar4 = -*(int *)(lVar6 + 8);
        if (-*(int *)(lVar6 + 8) < 0) {
          uVar4 = *(uint *)(lVar6 + 8);
        }
        uVar5 = (ulonglong)uVar4;
        this->_padding_ = (longlong)(int)uVar4;
        if (this->bHalfHeight != false) {
          uVar5 = (longlong)(int)uVar4 / 2;
          this->_padding_ = uVar5;
        }
        *(undefined1 *)&this->_padding_ = 1;
        *(undefined4 *)((longlong)&this->_padding_ + 4) = 8;
        if ((uVar3 - 1 < 0x1ffffffd) && ((int)uVar5 - 1U < 0x1ffffffd)) {
          return true;
        }
        if (1 < (byte)LogImageWrapper._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogImageWrapper);
          return false;
        }
      }
      else if (1 < (byte)LogImageWrapper._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogImageWrapper);
      }
    }
    else if (1 < (byte)LogImageWrapper._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogImageWrapper);
      return false;
    }
  }
  return false;
}

// SetCompressed @ 14268d9b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FBmpImageWrapper::SetCompressed(FBmpImageWrapper *this,void *param_1,long64 param_2)

{
  bool bVar1;
  long64 lVar2;
  
  bVar1 = FImageWrapperBase::SetCompressed((FImageWrapperBase *)this,param_1,param_2);
  if (!bVar1) goto LAB_14268da68;
  if (this->bHasHeader == false) {
    lVar2 = 0;
LAB_14268da2b:
    bVar1 = LoadBMPInfoHeader(this,lVar2);
  }
  else {
    if ((ulonglong)this->_padding_ < 0x36) {
      if (1 < (byte)LogImageWrapper._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogImageWrapper);
        bVar1 = false;
        goto LAB_14268da33;
      }
    }
    else {
      if ((*(char *)this->_padding_ == 'B') && (((char *)this->_padding_)[1] == 'M')) {
        lVar2 = 0xe;
        goto LAB_14268da2b;
      }
      if (1 < (byte)LogImageWrapper._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogImageWrapper);
      }
    }
    bVar1 = false;
  }
LAB_14268da33:
  if (bVar1 != false) {
    bVar1 = FImageCoreUtils::IsImageImportPossible(this->_padding_,this->_padding_);
    if (!bVar1) {
      ::FString::operator=
                ((FString *)&this->_padding_,L"Image dimensions are not possible to import");
      return false;
    }
    return true;
  }
LAB_14268da68:
  this->_padding_ = 0;
  if (this->_padding_ < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)&this->_padding_,0,&this->_padding_);
  }
  return false;
}

// Uncompress @ 14268efb0

void __thiscall FBmpImageWrapper::Uncompress(FBmpImageWrapper *this,ERGBFormat param_1,int param_2)

{
  longlong *plVar1;
  bool bVar2;
  
  plVar1 = &this->_padding_;
  this->_padding_ = 0;
  if (*plVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)&this->_padding_,0,plVar1);
  }
  if ((this->_padding_ != 0) &&
     ((this->bHasHeader == false ||
      (((0x35 < (ulonglong)this->_padding_ && (*(char *)this->_padding_ == 'B')) &&
       (((char *)this->_padding_)[1] == 'M')))))) {
    bVar2 = UncompressBMPData(this,param_1,param_2);
    if (!bVar2) {
      this->_padding_ = 0;
      if (*plVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                  (1,1,0,(ForAnyElementType *)&this->_padding_,0,plVar1);
      }
      if ((int)this->_padding_ < 2) {
        ::FString::operator=((FString *)&this->_padding_,L"UncompressBMPData failed");
      }
    }
  }
  return;
}

// UncompressBMPData @ 1426906c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FBmpImageWrapper::UncompressBMPData(FBmpImageWrapper *this,ERGBFormat param_1,int param_2)

{
  ushort *puVar1;
  byte *pbVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  ushort uVar8;
  code *pcVar9;
  uint *puVar10;
  float fVar11;
  float fVar12;
  bool bVar13;
  undefined1 uVar14;
  longlong lVar15;
  FStaticBasicLogRecord *pFVar16;
  longlong lVar17;
  uint *puVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  byte *pbVar26;
  uint *puVar27;
  uint uVar28;
  longlong lVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  double dVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  byte local_e8;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  ulonglong local_c8;
  uint local_c0;
  uint local_bc;
  longlong local_b8;
  
  if ((param_1 != BGRA) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InFormat == ERGBFormat::BGRA",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\BmpImageWrapper.cpp"
                          ,0x45,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    uVar14 = (*pcVar9)();
    return (bool)uVar14;
  }
  if ((param_2 != 8) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InBitDepth == 8",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\BmpImageWrapper.cpp"
                          ,0x46,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    uVar14 = (*pcVar9)();
    return (bool)uVar14;
  }
  if (((ulonglong)this->_padding_ < 0x36) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("CompressedData.Num() >= sizeof(FBitmapFileHeader)+sizeof(FBitmapInfoHeader)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\BmpImageWrapper.cpp"
                          ,0x49,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    uVar14 = (*pcVar9)();
    return (bool)uVar14;
  }
  puVar18 = (uint *)this->_padding_;
  lVar23 = this->_padding_;
  puVar27 = (uint *)((longlong)puVar18 + 10);
  puVar10 = (uint *)((longlong)puVar18 + 0xe);
  if (this->bHasHeader == false) {
    puVar27 = puVar18;
    puVar10 = puVar18;
  }
  uVar31 = *puVar10;
  if (uVar31 == 0x28) {
    local_e8 = 0;
  }
  else if (uVar31 == 0x34) {
    local_e8 = 1;
  }
  else if (uVar31 == 0x38) {
    local_e8 = 2;
  }
  else if (uVar31 == 0x6c) {
    local_e8 = 3;
  }
  else {
    if (uVar31 != 0x7c) {
      if ((byte)LogImageWrapper._0_1_ < 2) {
        return false;
      }
      pFVar16 = &::LOG_Static;
      goto LAB_1426914da;
    }
    local_e8 = 4;
  }
  uVar28 = puVar10[4];
  if (((uVar28 != 0) && (uVar28 != 3)) && (uVar28 != 6)) {
    if ((byte)LogImageWrapper._0_1_ < 2) {
      return false;
    }
    pFVar16 = &::LOG_Static;
    goto LAB_1426914da;
  }
  if ((short)puVar10[3] != 1) {
    if ((byte)LogImageWrapper._0_1_ < 2) {
      return false;
    }
    pFVar16 = &::LOG_Static;
    goto LAB_1426914da;
  }
  sVar7 = *(short *)((longlong)puVar10 + 0xe);
  if ((sVar7 != 8) && (((sVar7 - 0x10U & 0xffe7) != 0 || (sVar7 == 0x28)))) {
    if ((byte)LogImageWrapper._0_1_ < 2) {
      return false;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogImageWrapper);
    return false;
  }
  if (lVar23 < (longlong)(ulonglong)*puVar27) {
    if ((byte)LogImageWrapper._0_1_ < 2) {
      return false;
    }
    pFVar16 = &::LOG_Static;
    goto LAB_1426914da;
  }
  local_b8 = (longlong)puVar18 + (ulonglong)*puVar27;
  if ((longlong)puVar18 + (lVar23 - (longlong)puVar10) < (longlong)(ulonglong)uVar31) {
    if ((byte)LogImageWrapper._0_1_ < 2) {
      return false;
    }
    pFVar16 = (FStaticBasicLogRecord *)&PTR_u_Bmp_read_would__1509308a0;
    goto LAB_1426914da;
  }
  lVar3 = (ulonglong)uVar31 + (longlong)puVar10;
  if (((char)this->_padding_ != '\x01') &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Format == ERGBFormat::BGRA",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\BmpImageWrapper.cpp"
                          ,0x90,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    uVar14 = (*pcVar9)();
    return (bool)uVar14;
  }
  if ((*(int *)((longlong)&this->_padding_ + 4) != 8) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("BitDepth == 8",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\BmpImageWrapper.cpp"
                          ,0x91,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    uVar14 = (*pcVar9)();
    return (bool)uVar14;
  }
  uVar31 = puVar10[1];
  this->_padding_ = (ulonglong)uVar31;
  uVar28 = puVar10[2];
  uVar32 = -uVar28;
  if ((int)-uVar28 < 0) {
    uVar32 = uVar28;
  }
  uVar21 = (ulonglong)uVar32;
  uVar24 = (ulonglong)(int)uVar32;
  this->_padding_ = uVar24;
  if (this->bHalfHeight != false) {
    uVar21 = (longlong)uVar24 / 2;
    this->_padding_ = uVar21;
    uVar24 = uVar21;
  }
  if ((0x1ffffffc < uVar31 - 1) || (0x1ffffffc < (int)uVar21 - 1U)) {
    if ((byte)LogImageWrapper._0_1_ < 2) {
      return false;
    }
    pFVar16 = &::LOG_Static;
    goto LAB_1426914da;
  }
  lVar25 = uVar24 * uVar31 * 4;
  if (0x7fffffff < lVar25) {
    if ((byte)LogImageWrapper._0_1_ < 2) {
      return false;
    }
    pFVar16 = &::LOG_Static;
    goto LAB_1426914da;
  }
  TArray<unsigned_char,TSizedDefaultAllocator<64>_>::Empty
            ((TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)&this->_padding_,lVar25);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
            (1,1,lVar25,(ForAnyElementType *)&this->_padding_,&this->_padding_,&this->_padding_);
  pbVar26 = (byte *)this->_padding_;
  uVar31 = (uint)(*(ushort *)((longlong)puVar10 + 0xe) >> 3);
  if ((uVar31 * 8 != (uint)*(ushort *)((longlong)puVar10 + 0xe)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("SrcBytesPerPel*8 == bmhdr->biBitCount",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\BmpImageWrapper.cpp"
                          ,0xae,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    uVar14 = (*pcVar9)();
    return (bool)uVar14;
  }
  uVar31 = uVar31 * (int)this->_padding_ + 3 & 0xfffffffc;
  if ((int)uVar31 < 1) {
    if ((byte)LogImageWrapper._0_1_ < 2) {
      return false;
    }
    pFVar16 = &::LOG_Static;
    goto LAB_1426914da;
  }
  lVar29 = (longlong)(int)uVar31;
  lVar25 = this->_padding_;
  lVar17 = lVar25 * lVar29;
  lVar15 = (longlong)puVar18 + (lVar23 - local_b8);
  if (lVar17 - lVar15 != 0 && lVar15 <= lVar17) {
    if ((byte)LogImageWrapper._0_1_ < 2) {
      return false;
    }
    pFVar16 = &::LOG_Static;
    goto LAB_1426914da;
  }
  uVar21 = 0;
  uVar24 = uVar21;
  if (-1 < (int)uVar28) {
    uVar31 = -uVar31;
    uVar24 = lVar25 - 1;
  }
  puVar27 = (uint *)(uVar24 * lVar29 + local_b8);
  sVar7 = *(short *)((longlong)puVar10 + 0xe);
  if (sVar7 == 8) {
    uVar28 = puVar10[8];
    if (uVar28 == 0) {
      uVar28 = 0x100;
    }
    else if (0x100 < uVar28) {
      if ((byte)LogImageWrapper._0_1_ < 2) {
        return false;
      }
      pFVar16 = &::LOG_Static;
      goto LAB_1426914da;
    }
    if ((longlong)(ulonglong)(uVar28 * 4) <= (longlong)puVar18 + (lVar23 - lVar3)) {
      local_d8.Data = (FScriptContainerElement *)0x0;
      local_d0 = 0;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0x100,&local_d8,(int *)&local_d0,(int *)((longlong)&local_d0 + 4));
      uVar32 = 0;
      if (uVar28 != 0) {
        do {
          uVar20 = uVar32 * 4;
          bVar4 = *(byte *)((ulonglong)(uVar20 + 2) + lVar3);
          bVar5 = *(byte *)((ulonglong)(uVar20 + 1) + lVar3);
          bVar6 = *(byte *)((ulonglong)uVar20 + lVar3);
          uVar20 = 0;
          if ((int)uVar32 < (int)local_d0) {
            uVar20 = ~uVar32 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            uVar14 = (*pcVar9)();
            return (bool)uVar14;
          }
          *(uint *)(local_d8.Data + (longlong)(int)uVar32 * 4) =
               ((bVar4 | 0xffffff00) << 8 | (uint)bVar5) << 8 | (uint)bVar6;
          uVar32 = uVar32 + 1;
        } while (uVar32 < uVar28);
      }
      while( true ) {
        if (0xff < uVar28) {
          iVar30 = 0;
          if (0 < this->_padding_) {
            do {
              iVar33 = 0;
              puVar18 = puVar27;
              if (0 < this->_padding_) {
                do {
                  uVar28 = *puVar18;
                  if (((int)local_d0 <= (int)(uint)(byte)uVar28) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar13)) {
                    pcVar9 = (code *)swi(3);
                    uVar14 = (*pcVar9)();
                    return (bool)uVar14;
                  }
                  *(undefined4 *)pbVar26 =
                       *(undefined4 *)(local_d8.Data + (ulonglong)(byte)uVar28 * 4);
                  pbVar26 = pbVar26 + 4;
                  iVar33 = iVar33 + 1;
                  puVar18 = (uint *)((longlong)puVar18 + 1);
                } while ((longlong)iVar33 < this->_padding_);
              }
              puVar27 = (uint *)((longlong)puVar27 + (longlong)(int)uVar31);
              iVar30 = iVar30 + 1;
            } while ((longlong)iVar30 < this->_padding_);
          }
          if (local_d8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data);
          }
          return true;
        }
        uVar32 = 0;
        if ((int)uVar28 < (int)local_d0) {
          uVar32 = ~uVar28 >> 0x1f;
        }
        if ((uVar32 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) break;
        *(undefined4 *)(local_d8.Data + (longlong)(int)uVar28 * 4) = 0xff000000;
        uVar28 = uVar28 + 1;
      }
      pcVar9 = (code *)swi(3);
      uVar14 = (*pcVar9)();
      return (bool)uVar14;
    }
    if ((byte)LogImageWrapper._0_1_ < 2) {
      return false;
    }
    pFVar16 = &::LOG_Static;
    goto LAB_1426914da;
  }
  if (sVar7 == 0x18) {
    if (lVar25 < 1) {
      return true;
    }
    uVar24 = uVar21;
    do {
      puVar18 = puVar27;
      uVar19 = uVar21;
      if (0 < this->_padding_) {
        do {
          *pbVar26 = (byte)*puVar18;
          puVar1 = (ushort *)((longlong)puVar18 + 2);
          pbVar26[1] = *(byte *)((longlong)puVar18 + 1);
          puVar18 = (uint *)((longlong)puVar18 + 3);
          pbVar26[2] = *(byte *)puVar1;
          pbVar26[3] = 0xff;
          pbVar26 = pbVar26 + 4;
          uVar28 = (int)uVar19 + 1;
          uVar19 = (ulonglong)uVar28;
        } while ((longlong)(int)uVar28 < this->_padding_);
      }
      puVar27 = (uint *)((longlong)puVar27 + (longlong)(int)uVar31);
      uVar28 = (int)uVar24 + 1;
      uVar24 = (ulonglong)uVar28;
    } while ((longlong)(int)uVar28 < this->_padding_);
    return true;
  }
  if (sVar7 == 0x20) {
    if (puVar10[4] == 0) {
      if (lVar25 < 1) {
        return true;
      }
      uVar24 = uVar21;
      uVar19 = uVar21;
      do {
        puVar18 = puVar27;
        uVar22 = uVar21;
        if (0 < this->_padding_) {
          do {
            *pbVar26 = (byte)*puVar18;
            pbVar26[1] = *(byte *)((longlong)puVar18 + 1);
            pbVar26[2] = *(byte *)((longlong)puVar18 + 2);
            pbVar2 = (byte *)((longlong)puVar18 + 3);
            uVar24 = uVar24 + *pbVar2;
            puVar18 = puVar18 + 1;
            pbVar26[3] = *pbVar2;
            pbVar26 = pbVar26 + 4;
            uVar28 = (int)uVar22 + 1;
            uVar22 = (ulonglong)uVar28;
          } while ((longlong)(int)uVar28 < this->_padding_);
        }
        puVar27 = (uint *)((longlong)puVar27 + (longlong)(int)uVar31);
        uVar28 = (int)uVar19 + 1;
        uVar19 = (ulonglong)uVar28;
      } while ((longlong)(int)uVar28 < this->_padding_);
      if (uVar24 != 0) {
        return true;
      }
      lVar23 = this->_padding_;
      uVar24 = uVar21;
      if (this->_padding_ < 1) {
        return true;
      }
      do {
        uVar19 = uVar21;
        if (0 < this->_padding_) {
          do {
            *(undefined1 *)(lVar23 + 3) = 0xff;
            lVar23 = lVar23 + 4;
            uVar31 = (int)uVar19 + 1;
            uVar19 = (ulonglong)uVar31;
          } while ((longlong)(int)uVar31 < this->_padding_);
        }
        uVar31 = (int)uVar24 + 1;
        uVar24 = (ulonglong)uVar31;
      } while ((longlong)(int)uVar31 < this->_padding_);
      return true;
    }
  }
  else {
    if (sVar7 != 0x10) goto LAB_142691479;
    if (puVar10[4] == 0) {
      if (lVar25 < 1) {
        return true;
      }
      do {
        iVar30 = 0;
        puVar18 = puVar27;
        if (0 < this->_padding_) {
          do {
            uVar8 = (ushort)*puVar18;
            uVar32 = uVar8 >> 10 & 0x1f;
            uVar28 = uVar8 >> 5 & 0x1f;
            *pbVar26 = (byte)((uVar8 & 0x1f) >> 2) | (char)(uVar8 & 0x1f) << 3;
            pbVar26[1] = (byte)(uVar28 >> 2) | (char)uVar28 << 3;
            pbVar26[2] = (byte)(uVar32 >> 2) | (char)uVar32 << 3;
            pbVar26[3] = 0xff;
            pbVar26 = pbVar26 + 4;
            iVar30 = iVar30 + 1;
            puVar18 = (uint *)((longlong)puVar18 + 2);
          } while ((longlong)iVar30 < this->_padding_);
        }
        puVar27 = (uint *)((longlong)puVar27 + (longlong)(int)uVar31);
        uVar28 = (int)uVar21 + 1;
        uVar21 = (ulonglong)uVar28;
      } while ((longlong)(int)uVar28 < this->_padding_);
      return true;
    }
  }
  if ((puVar10[4] != 3) && (puVar10[4] != 6)) {
LAB_142691479:
    if ((byte)LogImageWrapper._0_1_ < 2) {
      return false;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogImageWrapper);
    return false;
  }
  uVar24 = (longlong)puVar18 + (lVar23 - (longlong)puVar10);
  if ((longlong)uVar24 < 0x28) {
    if ((byte)LogImageWrapper._0_1_ < 2) {
      return false;
    }
    pFVar16 = &::LOG_Static;
LAB_1426914da:
    UE::Logging::Private::BasicLog<2>(pFVar16,(FLogCategoryBase *)&LogImageWrapper);
    return false;
  }
  if ((ulonglong)((longlong)puVar18 + (lVar23 - (longlong)(puVar10 + 10))) < 0x10) {
    if ((byte)LogImageWrapper._0_1_ < 2) {
      return false;
    }
    pFVar16 = &::LOG_Static;
    goto LAB_1426914da;
  }
  if (2 < local_e8) {
    if (uVar24 < 0x6c) {
      if ((byte)LogImageWrapper._0_1_ < 2) {
        return false;
      }
      pFVar16 = &::LOG_Static;
      goto LAB_1426914da;
    }
    if (((puVar10[0xe] != 0x73524742) && (puVar10[0xe] != 0x57696e20)) &&
       (2 < (byte)LogImageWrapper._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogImageWrapper);
    }
  }
  fVar12 = __real_437f0000;
  uVar28 = puVar10[10];
  local_b8 = CONCAT44(local_b8._4_4_,uVar28);
  if (uVar28 == 0) {
    fVar39 = 0.0;
  }
  else {
    iVar30 = 0;
    if (uVar28 != 0) {
      for (; (uVar28 >> iVar30 & 1) == 0; iVar30 = iVar30 + 1) {
      }
    }
    iVar33 = 0x20;
    if (uVar28 != 0) {
      iVar33 = iVar30;
    }
    uVar24 = (ulonglong)uVar28 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    iVar30 = (int)lVar23 - iVar33;
    if ((iVar30 < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumberOfBits > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\BmpImageWrapper.cpp"
                            ,0x17c,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      uVar14 = (*pcVar9)();
      return (bool)uVar14;
    }
    dVar34 = ldexp((double)(fVar12 / (float)((1L << ((byte)iVar30 & 0x3f)) - 1)),-iVar33);
    fVar39 = (float)dVar34;
  }
  local_bc = puVar10[0xb];
  if (local_bc == 0) {
    fVar38 = 0.0;
  }
  else {
    iVar30 = 0;
    if (local_bc != 0) {
      for (; (local_bc >> iVar30 & 1) == 0; iVar30 = iVar30 + 1) {
      }
    }
    iVar33 = 0x20;
    if (local_bc != 0) {
      iVar33 = iVar30;
    }
    uVar24 = (ulonglong)local_bc * 2 + 1;
    lVar23 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    iVar30 = (int)lVar23 - iVar33;
    if ((iVar30 < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumberOfBits > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\BmpImageWrapper.cpp"
                            ,0x17c,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      uVar14 = (*pcVar9)();
      return (bool)uVar14;
    }
    dVar34 = ldexp((double)(fVar12 / (float)((1L << ((byte)iVar30 & 0x3f)) - 1)),-iVar33);
    fVar38 = (float)dVar34;
  }
  local_c0 = puVar10[0xc];
  if (local_c0 == 0) {
    fVar37 = 0.0;
  }
  else {
    iVar30 = 0;
    if (local_c0 != 0) {
      for (; (local_c0 >> iVar30 & 1) == 0; iVar30 = iVar30 + 1) {
      }
    }
    iVar33 = 0x20;
    if (local_c0 != 0) {
      iVar33 = iVar30;
    }
    uVar24 = (ulonglong)local_c0 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    uVar28 = (int)lVar23 - iVar33;
    local_c8 = (ulonglong)uVar28;
    if ((int)uVar28 < 1) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumberOfBits > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\BmpImageWrapper.cpp"
                          ,0x17c,L"");
      if (bVar13) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      uVar28 = (uint)local_c8;
    }
    dVar34 = ldexp((double)(fVar12 / (float)((1L << ((byte)uVar28 & 0x3f)) - 1)),-iVar33);
    fVar37 = (float)dVar34;
  }
  uVar28 = puVar10[0xd];
  if (uVar28 == 0) {
    fVar35 = 0.0;
  }
  else {
    iVar30 = 0;
    if (uVar28 != 0) {
      for (; (uVar28 >> iVar30 & 1) == 0; iVar30 = iVar30 + 1) {
      }
    }
    iVar33 = 0x20;
    if (uVar28 != 0) {
      iVar33 = iVar30;
    }
    local_c8 = CONCAT44(local_c8._4_4_,iVar33);
    uVar24 = (ulonglong)uVar28 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    iVar30 = (int)lVar23 - iVar33;
    if (iVar30 < 1) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumberOfBits > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\BmpImageWrapper.cpp"
                          ,0x17c,L"");
      if (bVar13) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      iVar33 = (int)local_c8;
    }
    dVar34 = ldexp((double)(fVar12 / (float)((1L << ((byte)iVar30 & 0x3f)) - 1)),-iVar33);
    fVar35 = (float)dVar34;
    if (2 < local_e8) {
      bVar13 = true;
      goto LAB_142691184;
    }
  }
  bVar13 = false;
LAB_142691184:
  if (((*puVar10 == 0x38) && (uVar28 != 0)) && (3 < (byte)LogImageWrapper._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogImageWrapper);
  }
  fVar11 = __real_3f000000;
  fVar36 = __real_3f000000;
  if (!bVar13) {
    uVar28 = 0;
    fVar35 = 0.0;
    fVar36 = fVar12;
  }
  if (*(short *)((longlong)puVar10 + 0xe) == 0x20) {
    iVar30 = 0;
    if (0 < this->_padding_) {
      do {
        iVar33 = 0;
        puVar18 = puVar27;
        if (0 < this->_padding_) {
          do {
            uVar32 = *puVar18;
            *pbVar26 = (byte)(int)((float)(uVar32 & local_c0) * fVar37 + fVar11);
            pbVar26[1] = (byte)(int)((float)(uVar32 & local_bc) * fVar38 + fVar11);
            pbVar26[2] = (byte)(int)((float)(uVar32 & (uint)local_b8) * fVar39 + fVar11);
            pbVar26[3] = (byte)(int)((float)(uVar32 & uVar28) * fVar35 + fVar36);
            pbVar26 = pbVar26 + 4;
            iVar33 = iVar33 + 1;
            puVar18 = puVar18 + 1;
          } while ((longlong)iVar33 < this->_padding_);
        }
        puVar27 = (uint *)((longlong)puVar27 + (longlong)(int)uVar31);
        iVar30 = iVar30 + 1;
      } while ((longlong)iVar30 < this->_padding_);
      return true;
    }
  }
  else {
    if ((*(short *)((longlong)puVar10 + 0xe) != 0x10) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("bmhdr->biBitCount == 16",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\BmpImageWrapper.cpp"
                            ,0x1ae,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      uVar14 = (*pcVar9)();
      return (bool)uVar14;
    }
    iVar30 = 0;
    if (0 < this->_padding_) {
      do {
        iVar33 = 0;
        puVar18 = puVar27;
        if (0 < this->_padding_) {
          do {
            uVar32 = *puVar18;
            uVar20 = (uint)(ushort)uVar32;
            *pbVar26 = (byte)(int)((float)(uVar20 & local_c0) * fVar37 + fVar11);
            pbVar26[1] = (byte)(int)((float)((ushort)uVar32 & local_bc) * fVar38 + fVar11);
            pbVar26[2] = (byte)(int)((float)(uVar20 & (uint)local_b8) * fVar39 + fVar11);
            pbVar26[3] = (byte)(int)((float)(uVar20 & uVar28) * fVar35 + fVar36);
            pbVar26 = pbVar26 + 4;
            iVar33 = iVar33 + 1;
            puVar18 = (uint *)((longlong)puVar18 + 2);
          } while ((longlong)iVar33 < this->_padding_);
        }
        puVar27 = (uint *)((longlong)puVar27 + (longlong)(int)uVar31);
        iVar30 = iVar30 + 1;
      } while ((longlong)iVar30 < this->_padding_);
    }
  }
  return true;
}

