// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 11

// FJpegImageWrapper @ 142664cd0

FJpegImageWrapper * __thiscall
FJpegImageWrapper::FJpegImageWrapper(FJpegImageWrapper *this,int param_1)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0xff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FJpegImageWrapper__6B_;
  this->NumComponents = param_1;
  this->Decompressor = (void *)0x0;
  return this;
}

// ~FJpegImageWrapper @ 14266a220

void __thiscall FJpegImageWrapper::~FJpegImageWrapper(FJpegImageWrapper *this)

{
  this->_padding_ = (longlong)&___7FJpegImageWrapper__6B_;
  FImageWrapperBase::Reset((FImageWrapperBase *)this);
  if (this->Decompressor != (void *)0x0) {
    tjDestroy();
    this->Decompressor = (void *)0x0;
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

// CanSetRawFormat @ 1426823a0

bool __thiscall
FJpegImageWrapper::CanSetRawFormat(FJpegImageWrapper *this,ERGBFormat param_1,int param_2)

{
  if ((param_1 < RGBAF) && (param_2 == 8)) {
    return true;
  }
  return false;
}

// Compress @ 142685b40

void __thiscall FJpegImageWrapper::Compress(FJpegImageWrapper *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == 0) {
    CompressTurbo(this,0x55);
    return;
  }
  if (param_1 == 1) {
    CompressTurbo(this,100);
    return;
  }
  if (99 < param_1 - 1U) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_97196780650757933>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\JpegImageWrapper.cpp"
                       ,0xd3,"Quality >= 1 && Quality <= 100");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = 100;
  if (param_1 < 100) {
    iVar3 = param_1;
  }
  iVar4 = 0x28;
  if (0x28 < iVar3) {
    iVar4 = iVar3;
  }
  CompressTurbo(this,iVar4);
  return;
}

// CompressTurbo @ 142686a40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FJpegImageWrapper::CompressTurbo(FJpegImageWrapper *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  bool bVar7;
  uint local_res18 [2];
  longlong local_res20;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar8;
  undefined8 in_stack_ffffffffffffff90;
  undefined4 uVar9;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId369,"FJpegImageWrapper::CompressTurbo",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\JpegImageWrapper.cpp"
               ,0x171);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId369);
  }
  if (this->_padding_ == 0) {
    if ((0x3c < param_1 - 0x28U) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Quality >= 40 && Quality <= 100",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\JpegImageWrapper.cpp"
                           ,0x178,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((this->_padding_ == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawData.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\JpegImageWrapper.cpp"
                           ,0x17a,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((this->_padding_ < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Width > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\JpegImageWrapper.cpp"
                           ,0x17b,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((this->_padding_ < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Height > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\JpegImageWrapper.cpp"
                           ,0x17c,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((*(int *)((longlong)&this->_padding_ + 4) != 8) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("BitDepth == 8",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\JpegImageWrapper.cpp"
                           ,0x17d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar3 = ::`anonymous_namespace'::ConvertTJpegPixelFormat((ERGBFormat)this->_padding_);
    if ((this->NumComponents == 1) || (uVar6 = 2, (char)this->_padding_ == '\x02')) {
      uVar6 = 3;
    }
    local_res18[0] = tjBufSize((int)this->_padding_,(int)this->_padding_,uVar6);
    TArray<unsigned_char,TSizedDefaultAllocator<64>_>::SetNum
              ((TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)&this->_padding_,
               (ulonglong)local_res18[0],Default);
    local_res20 = this->_padding_;
    uVar4 = FImageWrapperBase::GetBytesPerRow((FImageWrapperBase *)this);
    uVar5 = tjInitCompress();
    iVar3 = tjCompress2(uVar5,this->_padding_,(int)this->_padding_,uVar4 & 0xffffffff,
                        CONCAT44(uVar8,(int)this->_padding_),CONCAT44(uVar9,iVar3),&local_res20,
                        local_res18,uVar6,param_1,0xc00);
    if ((iVar3 != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("bSuccess",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\JpegImageWrapper.cpp"
                           ,0x18e,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    tjDestroy();
    if (iVar3 == 0) {
      if ((this->_padding_ != local_res20) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("CompressedData.GetData() == OutBuffer",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\JpegImageWrapper.cpp"
                             ,0x199,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      TArray<unsigned_char,TSizedDefaultAllocator<64>_>::SetNum
                ((TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)&this->_padding_,
                 (ulonglong)local_res18[0],Default);
    }
    else {
      this->_padding_ = 0;
      if (this->_padding_ != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                  (1,1,0,(ForAnyElementType *)&this->_padding_,0,&this->_padding_);
      }
      ::FString::operator=((FString *)&this->_padding_,L"tjCompress2 failed");
    }
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetSupportedRawFormat @ 14268bf10

Type __thiscall FJpegImageWrapper::GetSupportedRawFormat(FJpegImageWrapper *this,Type param_1)

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
  case G16:
  case R16F:
  case R32F:
    goto switchD_14268bf2e_caseD_2;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\JpegImageWrapper.cpp"
                       ,0xc0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3 = (*pcVar1)();
      return TVar3;
    }
switchD_14268bf2e_caseD_2:
    return BGRA8;
  }
}

// Reset @ 14268d820

void __thiscall FJpegImageWrapper::Reset(FJpegImageWrapper *this)

{
  FImageWrapperBase::Reset((FImageWrapperBase *)this);
  if (this->Decompressor != (void *)0x0) {
    tjDestroy();
    this->Decompressor = (void *)0x0;
  }
  return;
}

// SetCompressed @ 14268e240

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FJpegImageWrapper::SetCompressed(FJpegImageWrapper *this,void *param_1,long64 param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  void *pvVar5;
  int local_res20 [2];
  int local_18;
  int local_14;
  int local_10 [2];
  
  bVar2 = FImageWrapperBase::SetCompressed((FImageWrapperBase *)this,param_1,param_2);
  if (bVar2) {
    if (this->Decompressor != (void *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Decompressor == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\JpegImageWrapper.cpp"
                         ,0x149,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    pvVar5 = (void *)tjInitDecompress();
    this->Decompressor = pvVar5;
    iVar4 = tjDecompressHeader3(pvVar5,param_1,param_2 & 0xffffffff,&local_18,&local_14,local_10,
                                local_res20);
    if (iVar4 != 0) {
      ::FString::operator=((FString *)&this->_padding_,L"tjDecompressHeader3 failed");
      return false;
    }
    if (1 < local_res20[0] - 3U) {
      this->_padding_ = (longlong)local_18;
      *(char *)&this->_padding_ = (local_10[0] == 3) + '\x01';
      this->_padding_ = (longlong)local_14;
      *(undefined4 *)((longlong)&this->_padding_ + 4) = 8;
      bVar2 = FImageCoreUtils::IsImageImportPossible((longlong)local_18,(longlong)local_14);
      if (!bVar2) {
        ::FString::operator=
                  ((FString *)&this->_padding_,L"Image dimensions are not possible to import");
        return false;
      }
      return true;
    }
    if (1 < (byte)LogImageWrapper._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogImageWrapper);
    }
  }
  return false;
}

// SetCompressedTurbo @ 14268ecc0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FJpegImageWrapper::SetCompressedTurbo(FJpegImageWrapper *this,void *param_1,long64 param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  void *pvVar5;
  int local_res20 [2];
  int local_18;
  int local_14;
  int local_10 [2];
  
  bVar2 = FImageWrapperBase::SetCompressed((FImageWrapperBase *)this,param_1,param_2);
  if (bVar2) {
    if (this->Decompressor != (void *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Decompressor == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\JpegImageWrapper.cpp"
                         ,0x149,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    pvVar5 = (void *)tjInitDecompress();
    this->Decompressor = pvVar5;
    iVar4 = tjDecompressHeader3(pvVar5,param_1,param_2 & 0xffffffff,&local_18,&local_14,local_10,
                                local_res20);
    if (iVar4 != 0) {
      ::FString::operator=((FString *)&this->_padding_,L"tjDecompressHeader3 failed");
      return false;
    }
    if (1 < local_res20[0] - 3U) {
      this->_padding_ = (longlong)local_18;
      *(char *)&this->_padding_ = (local_10[0] == 3) + '\x01';
      this->_padding_ = (longlong)local_14;
      *(undefined4 *)((longlong)&this->_padding_ + 4) = 8;
      bVar2 = FImageCoreUtils::IsImageImportPossible((longlong)local_18,(longlong)local_14);
      if (!bVar2) {
        ::FString::operator=
                  ((FString *)&this->_padding_,L"Image dimensions are not possible to import");
        return false;
      }
      return true;
    }
    if (1 < (byte)LogImageWrapper._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogImageWrapper);
    }
  }
  return false;
}

// Uncompress @ 142690400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FJpegImageWrapper::Uncompress(FJpegImageWrapper *this,ERGBFormat param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  char *_Str;
  size_t sVar6;
  longlong lVar7;
  ulong64 uVar8;
  bool bVar9;
  undefined1 auStackY_1b8 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_158;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId417,"FJpegImageWrapper::UncompressTurbo",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\JpegImageWrapper.cpp"
               ,0x1a1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId417);
  }
  plVar1 = &this->_padding_;
  if (*plVar1 == 0) {
    if ((param_1 < Gray) && (param_2 == 8)) {
      lVar7 = 4;
    }
    else {
      if ((param_1 != Gray) || (param_2 != 8)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\JpegImageWrapper.cpp"
                           ,0x1b5,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        goto LAB_142691e0e;
      }
      lVar7 = 1;
    }
    if ((this->Decompressor == (void *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Decompressor",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\JpegImageWrapper.cpp"
                           ,0x1bb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((this->_padding_ == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("CompressedData.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\JpegImageWrapper.cpp"
                           ,0x1bc,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar8 = lVar7 * this->_padding_ * this->_padding_;
    if ((longlong)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar8);
    }
    plVar2 = &this->_padding_;
    *plVar1 = 0;
    if (uVar8 - *plVar2 != 0 && *plVar2 <= (longlong)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (1,1,uVar8,(ForAnyElementType *)&this->_padding_,0,plVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,lVar7 * this->_padding_ * this->_padding_,(ForAnyElementType *)&this->_padding_,
               plVar1,plVar2);
    ::`anonymous_namespace'::ConvertTJpegPixelFormat(param_1);
    iVar5 = tjDecompress2(this->Decompressor,this->_padding_,(int)this->_padding_,this->_padding_);
    if (iVar5 != 0) {
      if (1 < (byte)LogImageWrapper._0_1_) {
        _Str = (char *)tj3GetErrorStr(this->Decompressor);
        TStack_158._padding_ = 0;
        if (_Str == (char *)0x0) {
          TStack_158.Ptr = (wchar_t *)0x0;
          TStack_158.StringLength = 0;
        }
        else {
          sVar6 = strlen(_Str);
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&TStack_158,_Str,(int)sVar6,Yes)
          ;
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogImageWrapper);
        if ((void *)TStack_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)TStack_158._padding_);
        }
      }
      ::FString::operator=((FString *)&this->_padding_,L"tjDecompress2 failed");
      *plVar1 = 0;
      if (*plVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                  (1,1,0,(ForAnyElementType *)&this->_padding_,0,plVar2);
      }
    }
  }
LAB_142691e0e:
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UncompressTurbo @ 142691b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FJpegImageWrapper::UncompressTurbo(FJpegImageWrapper *this,ERGBFormat param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  char *_Str;
  size_t sVar6;
  longlong lVar7;
  ulong64 uVar8;
  bool bVar9;
  undefined1 auStackY_1b8 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId417,"FJpegImageWrapper::UncompressTurbo",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\JpegImageWrapper.cpp"
               ,0x1a1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId417);
  }
  plVar1 = &this->_padding_;
  if (*plVar1 == 0) {
    if ((param_1 < Gray) && (param_2 == 8)) {
      lVar7 = 4;
    }
    else {
      if ((param_1 != Gray) || (param_2 != 8)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\JpegImageWrapper.cpp"
                           ,0x1b5,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        goto LAB_142691e0e;
      }
      lVar7 = 1;
    }
    if ((this->Decompressor == (void *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Decompressor",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\JpegImageWrapper.cpp"
                           ,0x1bb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((this->_padding_ == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("CompressedData.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\JpegImageWrapper.cpp"
                           ,0x1bc,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar8 = lVar7 * this->_padding_ * this->_padding_;
    if ((longlong)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar8);
    }
    plVar2 = &this->_padding_;
    *plVar1 = 0;
    if (uVar8 - *plVar2 != 0 && *plVar2 <= (longlong)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (1,1,uVar8,(ForAnyElementType *)&this->_padding_,0,plVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,lVar7 * this->_padding_ * this->_padding_,(ForAnyElementType *)&this->_padding_,
               plVar1,plVar2);
    ::`anonymous_namespace'::ConvertTJpegPixelFormat(param_1);
    iVar5 = tjDecompress2(this->Decompressor,this->_padding_,(int)this->_padding_,this->_padding_);
    if (iVar5 != 0) {
      if (1 < (byte)LogImageWrapper._0_1_) {
        _Str = (char *)tj3GetErrorStr(this->Decompressor);
        local_158._padding_ = 0;
        if (_Str == (char *)0x0) {
          local_158.Ptr = (wchar_t *)0x0;
          local_158.StringLength = 0;
        }
        else {
          sVar6 = strlen(_Str);
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_158,_Str,(int)sVar6,Yes);
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogImageWrapper);
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
      ::FString::operator=((FString *)&this->_padding_,L"tjDecompress2 failed");
      *plVar1 = 0;
      if (*plVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                  (1,1,0,(ForAnyElementType *)&this->_padding_,0,plVar2);
      }
    }
  }
LAB_142691e0e:
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

