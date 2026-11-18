// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 8

// FUEJpegImageWrapper @ 142664e40

FUEJpegImageWrapper * __thiscall
FUEJpegImageWrapper::FUEJpegImageWrapper(FUEJpegImageWrapper *this,int param_1)

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
  this->_padding_ = (longlong)&___7FUEJpegImageWrapper__6B_;
  this->NumComponents = param_1;
  uejpeg_set_alloc(&UeAlloc);
  return this;
}

// ~FUEJpegImageWrapper @ 14266a4d0

void __thiscall FUEJpegImageWrapper::~FUEJpegImageWrapper(FUEJpegImageWrapper *this)

{
  this->_padding_ = (longlong)&___7FUEJpegImageWrapper__6B_;
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

// CanSetRawFormat @ 1426823e0

bool __thiscall
FUEJpegImageWrapper::CanSetRawFormat(FUEJpegImageWrapper *this,ERGBFormat param_1,int param_2)

{
  if ((param_1 < RGBAF) && (param_2 == 8)) {
    return true;
  }
  return false;
}

// Compress @ 142686700

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FUEJpegImageWrapper::Compress(FUEJpegImageWrapper *this,int param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  void *_Src;
  longlong lVar6;
  ulong64 uVar7;
  undefined1 auStackY_16c8 [32];
  <lambda_1> local_1688;
  int local_1684;
  int *local_1680;
  void *local_1678;
  code *local_1670;
  int **local_1668;
  code *local_1660;
  int **local_1658;
  TArrayView<std::nullptr_t,int> local_1650;
  undefined1 local_1638 [2816];
  int local_b38;
  int local_b34;
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x142686719;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_16c8;
  if ((((param_1 != 0) && (param_1 != 1)) && (99 < param_1 - 1U)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2643340598735536331>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\UEJpegImageWrapper.cpp"
                         ,0xcb,"Quality >= 1 && Quality <= 100"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (this->_padding_ == 0) {
    if ((this->_padding_ == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawData.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\UEJpegImageWrapper.cpp"
                           ,0xd4,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((this->_padding_ < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Width > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\UEJpegImageWrapper.cpp"
                           ,0xd5,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((this->_padding_ < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Height > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\UEJpegImageWrapper.cpp"
                           ,0xd6,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar6 = 0;
    if ((char)this->_padding_ == '\x01') {
      lVar2 = this->_padding_;
      iVar5 = (int)((longlong)(this->_padding_ + (ulonglong)((uint)(this->_padding_ >> 0x3f) & 3))
                   >> 2);
      if (0 < iVar5) {
        do {
          uVar1 = *(undefined1 *)(lVar2 + lVar6 * 4);
          *(undefined1 *)(lVar2 + lVar6 * 4) = *(undefined1 *)(lVar2 + 2 + lVar6 * 4);
          *(undefined1 *)(lVar2 + 2 + lVar6 * 4) = uVar1;
          lVar6 = lVar6 + 1;
        } while (lVar6 < iVar5);
      }
    }
    _Src = (void *)uejpeg_encode_image_mem_threaded_start
                             (local_1638,(int)this->_padding_,(int)this->_padding_,
                              this->NumComponents);
    memcpy(&local_b38,_Src,0xb00);
    if ((local_b38 != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ctx.error",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\UEJpegImageWrapper.cpp"
                           ,0xe9,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_1680 = &local_b38;
    local_1660 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FUEJpegImageWrapper::Compress'::__l14::<lambda_1>,void,int>::
                 Call;
    local_1658 = &local_1680;
    local_1670 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FUEJpegImageWrapper::Compress'::__l14::<lambda_1>,void,int>::
                 Call;
    local_1668 = &local_1680;
    local_1650.DataPtr = (void **)0x0;
    local_1650.ArrayNum = 0;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",local_b34,1,(TFunctionRef<void___cdecl(int)> *)&local_1670,
               local_1688,None,&local_1650);
    iVar5 = uejpeg_encode_image_mem_threaded_finish(&local_b38,&local_1678,&local_1684);
    if ((iVar5 != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!error",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\UEJpegImageWrapper.cpp"
                           ,0xee,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar7 = (ulong64)local_1684;
    if ((longlong)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar7);
    }
    this->_padding_ = 0;
    if (this->_padding_ < (longlong)uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (1,1,uVar7,(ForAnyElementType *)&this->_padding_,0,&this->_padding_);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,(longlong)local_1684,(ForAnyElementType *)&this->_padding_,&this->_padding_,
               &this->_padding_);
    memcpy((void *)this->_padding_,local_1678,(longlong)local_1684);
    FMemory::Free(local_1678);
  }
  return;
}

// GetExportData @ 14268b050

TArray<unsigned_char,TSizedDefaultAllocator<64>_> * __thiscall
FUEJpegImageWrapper::GetExportData
          (FUEJpegImageWrapper *this,
          TArray<unsigned_char,TSizedDefaultAllocator<64>_> *__return_storage_ptr__,int param_1)

{
  int local_res8 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> *local_res10;
  void *local_res20;
  ulonglong in_stack_ffffffffffffffd8;
  
  local_res10 = __return_storage_ptr__;
  uejpeg_decode_mem_to_jpeg
            (this->_padding_,(int)this->_padding_,&local_res20,local_res8,
             in_stack_ffffffffffffffd8 & 0xffffffff00000000);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayMax = 0;
  __return_storage_ptr__->ArrayNum = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
            (1,1,(longlong)local_res8[0],&__return_storage_ptr__->AllocatorInstance,
             &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,local_res20,(longlong)local_res8[0]);
  FMemory::Free(local_res20);
  return __return_storage_ptr__;
}

// GetSupportedRawFormat @ 14268c030

Type __thiscall FUEJpegImageWrapper::GetSupportedRawFormat(FUEJpegImageWrapper *this,Type param_1)

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
    goto switchD_14268c04e_caseD_2;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\UEJpegImageWrapper.cpp"
                       ,0xb8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3 = (*pcVar1)();
      return TVar3;
    }
switchD_14268c04e_caseD_2:
    return BGRA8;
  }
}

// SetCompressed @ 14268e4b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FUEJpegImageWrapper::SetCompressed(FUEJpegImageWrapper *this,void *param_1,long64 param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  bool bVar3;
  void *pvVar4;
  int iVar5;
  size_t _Size;
  undefined1 auStackY_3788 [32];
  int local_3758 [2];
  void *local_3750;
  int local_3748;
  int local_3744;
  int local_3740 [2];
  int *local_3738;
  int *local_3730;
  int *local_3728;
  code *local_3720;
  int **local_3718;
  code *local_3710;
  int **local_3708;
  code *local_3700;
  int **local_36f8;
  undefined1 local_36f0 [2296];
  undefined1 local_2df8 [2344];
  undefined1 local_24d0 [2344];
  int local_1ba8;
  int local_1ba4;
  int local_12a8;
  int local_12a4;
  int local_978;
  int local_974;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3788;
  if (0xffffffff < (ulonglong)param_2) {
    return false;
  }
  iVar5 = *(ushort *)param_1 - 0xd8ff;
  if (iVar5 == 0) {
    iVar5 = *(byte *)((longlong)param_1 + 2) - 0xff;
  }
  if (iVar5 == 0) {
    local_3750 = (void *)0x0;
    local_3758[0] = 0;
    pvVar4 = (void *)uejpeg_encode_jpeg_mem_threaded_start(local_36f0,param_1,param_2,0);
    memcpy(&local_1ba8,pvVar4,0x8f8);
    if (local_1ba8 != 0) {
      return false;
    }
    local_3730 = &local_1ba8;
    local_3718 = &local_3730;
    local_3720 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FUEJpegImageWrapper::SetCompressed'::__l9::<lambda_1>,void,int>
                 ::Call;
    ParallelFor(local_1ba4,(TFunctionRef<void___cdecl(int)> *)&local_3720,None);
    iVar5 = uejpeg_encode_jpeg_mem_threaded_finish(&local_1ba8,&local_3750,local_3758);
    if (iVar5 != 0) {
      return false;
    }
    pvVar4 = (void *)uejpeg_decode_mem_threaded_start(local_2df8,local_3750,local_3758[0],2);
    memcpy(&local_12a8,pvVar4,0x928);
    if (local_12a8 == 0) {
      local_3728 = &local_12a8;
      local_3708 = &local_3728;
      local_3710 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FUEJpegImageWrapper::SetCompressed'::__l16::<lambda_2>,void,int>
                   ::Call;
      ParallelFor(local_12a4,(TFunctionRef<void___cdecl(int)> *)&local_3710,None);
      pvVar4 = (void *)uejpeg_decode_threaded_finish(&local_12a8,&local_3748,&local_3744,local_3740)
      ;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
        pvVar4 = local_3750;
        _Size = (size_t)local_3758[0];
        (**(code **)(this->_padding_ + 0x88))(this);
        this->_padding_ = 0;
        if (this->_padding_ != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,0,(ForAnyElementType *)&this->_padding_,0,&this->_padding_);
        }
        if ((0 < (longlong)_Size) && (pvVar4 != (void *)0x0)) {
          plVar1 = &this->_padding_;
          this->_padding_ = 0;
          if (*plVar1 != _Size) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                      (1,1,_Size,(ForAnyElementType *)&this->_padding_,0,plVar1);
          }
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,_Size,(ForAnyElementType *)&this->_padding_,&this->_padding_,plVar1);
          memcpy((void *)this->_padding_,pvVar4,_Size);
          FMemory::Free(local_3750);
          goto LAB_14268e7e2;
        }
      }
    }
    FMemory::Free(local_3750);
  }
  else {
    pvVar4 = (void *)uejpeg_decode_mem_threaded_start(local_24d0,param_1,param_2,2);
    memcpy(&local_978,pvVar4,0x928);
    if (local_978 != 0) {
      return false;
    }
    local_3738 = &local_978;
    local_36f8 = &local_3738;
    local_3700 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FUEJpegImageWrapper::SetCompressed'::__l27::<lambda_3>,void,int>
                 ::Call;
    ParallelFor(local_974,(TFunctionRef<void___cdecl(int)> *)&local_3700,None);
    pvVar4 = (void *)uejpeg_decode_threaded_finish(&local_978,&local_3748,&local_3744,local_3740);
    if (pvVar4 == (void *)0x0) {
      return false;
    }
    FMemory::Free(pvVar4);
    bVar3 = FImageWrapperBase::SetCompressed((FImageWrapperBase *)this,param_1,param_2);
    if (!bVar3) {
      return false;
    }
LAB_14268e7e2:
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 8;
    this->_padding_ = (longlong)local_3748;
    this->_padding_ = (longlong)local_3744;
    if (local_3740[0] == 1) {
      uVar2 = 2;
    }
    else {
      if (local_3740[0] != 4) {
        return false;
      }
      uVar2 = 0;
    }
    *(undefined1 *)&this->_padding_ = uVar2;
    bVar3 = FImageCoreUtils::IsImageImportPossible((longlong)local_3748,(longlong)local_3744);
    if (bVar3) {
      return true;
    }
    ::FString::operator=((FString *)&this->_padding_,L"Image dimensions are not possible to import")
    ;
  }
  return false;
}

// Uncompress @ 142690490

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FUEJpegImageWrapper::Uncompress(FUEJpegImageWrapper *this,ERGBFormat param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  undefined1 auStackY_1308 [32];
  <lambda_1> local_12c8;
  int local_12c4;
  int local_12c0;
  int local_12bc;
  int *local_12b8;
  code *local_12b0;
  undefined4 **local_12a8;
  TArrayView<std::nullptr_t,int> local_12a0 [2];
  undefined1 local_1280 [2344];
  int local_958;
  int local_954;
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x1426904aa;
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1308;
  if (this->_padding_ == 0) {
    if ((this->_padding_ == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("CompressedData.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\UEJpegImageWrapper.cpp"
                           ,0x100,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pvVar3 = (void *)uejpeg_decode_mem_threaded_start
                               (local_1280,this->_padding_,(int)this->_padding_,2);
    memcpy(&local_958,pvVar3,0x928);
    if (local_958 == 0) {
      local_12b8 = &local_958;
      local_12b0 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FUEJpegImageWrapper::Uncompress'::__l2::<lambda_1>,void,int>
                   ::Call;
      local_12a8 = &local_12b8;
      local_12a0[0].DataPtr = (void **)0x0;
      local_12a0[0].ArrayNum = 0;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",local_954,1,(TFunctionRef<void___cdecl(int)> *)&local_12b0,
                 local_12c8,None,local_12a0);
      pvVar3 = (void *)uejpeg_decode_threaded_finish(&local_958,&local_12c0,&local_12bc,&local_12c4)
      ;
      if (pvVar3 == (void *)0x0) {
        if (1 < (byte)LogImageWrapper._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogImageWrapper);
        }
        this->_padding_ = 0;
        if (this->_padding_ != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,0,(ForAnyElementType *)&this->_padding_,0,&this->_padding_);
        }
      }
      else {
        this->_padding_ = (longlong)local_12bc;
        this->_padding_ = (longlong)local_12c0;
        TArray<unsigned_char,TSizedDefaultAllocator<64>_>::Reset
                  ((TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)&this->_padding_,
                   (longlong)local_12c4 * (longlong)local_12bc * (longlong)local_12c0);
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                  (1,1,(longlong)local_12c4 * this->_padding_ * this->_padding_,
                   (ForAnyElementType *)&this->_padding_,&this->_padding_,&this->_padding_);
        memcpy((void *)this->_padding_,pvVar3,this->_padding_);
        FMemory::Free(pvVar3);
      }
    }
  }
  return;
}

