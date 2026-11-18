// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVEncoder
// Functions: 173

// Factories'' @ 141168550

void __cdecl `dynamic_initializer_for_'AVEncoder::FAudioEncoderFactory::Factories__(void)

{
  atexit(`dynamic_atexit_destructor_for_'AVEncoder::FAudioEncoderFactory::Factories__);
  return;
}

// GlobalLock'' @ 141168570

void __cdecl `dynamic_initializer_for_'AVEncoder::FVideoDecoderH264_WindowsImpl::GlobalLock__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&AVEncoder::FVideoDecoderH264_WindowsImpl::GlobalLock,4000);
  atexit(`dynamic_atexit_destructor_for_'AVEncoder::FVideoDecoderH264_WindowsImpl::GlobalLock__);
  return;
}

// ProtectSingleton'' @ 1411685a0

void __cdecl `dynamic_initializer_for_'AVEncoder::FVideoEncoderFactory::ProtectSingleton__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&AVEncoder::FVideoEncoderFactory::ProtectSingleton,4000);
  atexit(`dynamic_atexit_destructor_for_'AVEncoder::FVideoEncoderFactory::ProtectSingleton__);
  return;
}

// Singleton'' @ 1411685d0

void __cdecl `dynamic_initializer_for_'AVEncoder::FVideoEncoderFactory::Singleton__(void)

{
  atexit(`dynamic_atexit_destructor_for_'AVEncoder::FVideoEncoderFactory::Singleton__);
  return;
}

// `dynamic_initializer_for_'LogAVEncoder'' @ 1411685f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAVEncoder__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogAVEncoder,L"LogAVEncoder",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogAVEncoder__);
  return;
}

// `dynamic_initializer_for_'LogVideoDecoder'' @ 141168630

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogVideoDecoder__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogVideoDecoder,L"LogVideoDecoder",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogVideoDecoder__);
  return;
}

// `dynamic_initializer_for_'LogVideoEncoder'' @ 141168670

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogVideoEncoder__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogVideoEncoder,L"LogVideoEncoder",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogVideoEncoder__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantAVEncoder'' @ 1411686b0

void __cdecl _dynamic_initializer_for__ModuleRegistrantAVEncoder__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AVEncoder";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AVEncoder",9);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FAVEncoderModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_AVEncoder'' @ 141168700

void __cdecl _dynamic_initializer_for___GCsvCategory_AVEncoder__(void)

{
  FString::operator=(&_GCsvCategory_AVEncoder.Name,L"AVEncoder");
  _GCsvCategory_AVEncoder.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_AVEncoder.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_AVEncoder__);
  return;
}

// `dynamic_initializer_for_'_sgClipTableInitializer'' @ 141168750

void __cdecl vdecmpeg4::_dynamic_initializer_for___sgClipTableInitializer__(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = -0x200;
  iclp = iclip + 0x200;
  lVar4 = -0x400;
  do {
    if (iVar5 < -0x100) {
      iVar3 = -0x100;
    }
    else {
      iVar3 = iVar5;
      if (0xff < iVar5) {
        iVar3 = 0xff;
      }
    }
    if (iVar3 != (short)iVar3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar5 = iVar5 + 1;
    *(short *)(lVar4 + (longlong)iclp) = (short)iVar3;
    lVar4 = lVar4 + 2;
  } while (iVar5 < 0x200);
  return;
}

// `scalar_deleting_destructor' @ 148cff310

void * __thiscall
FAVEncoderModule::_scalar_deleting_destructor_(FAVEncoderModule *this,uint param_1)

{
  *this = (FAVEncoderModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// ADVANCE_POINTER<unsigned___int64_*,int> @ 148cff7f0

ulong64 * __cdecl ADVANCE_POINTER<unsigned___int64_*,int>(ulong64 *param_1,int param_2)

{
  return (ulong64 *)((longlong)param_2 + (longlong)param_1);
}

// ADVANCE_POINTER<unsigned___int64_const_*,int> @ 148cff800

ulong64 * __cdecl ADVANCE_POINTER<unsigned___int64_const_*,int>(ulong64 *param_1,int param_2)

{
  return (ulong64 *)((longlong)param_2 + (longlong)param_1);
}

// DestructItems<TTuple<AVEncoder::FVideoEncoderInputFrameImpl_*,TFunction<void___cdecl(AVEncoder::FVideoEncoderInputFrame_const_*)>_>,int> @ 148cffa10

void __cdecl
DestructItems<TTuple<AVEncoder::FVideoEncoderInputFrameImpl_*,TFunction<void___cdecl(AVEncoder::FVideoEncoderInputFrame_const_*)>_>,int>
          (TTuple<AVEncoder::FVideoEncoderInputFrameImpl_*,TFunction<void___cdecl(AVEncoder::FVideoEncoderInputFrame_const_*)>_>
           *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&param_1->field_0x38;
    do {
      if (plVar2[-5] != 0) {
        plVar1 = plVar2 + -3;
        if ((longlong *)*plVar2 != (longlong *)0x0) {
          plVar1 = (longlong *)*plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<AVEncoder::FVideoEncoderInfo,int> @ 148cffa60

void __cdecl DestructItems<AVEncoder::FVideoEncoderInfo,int>(FVideoEncoderInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<AVEncoder::EVideoFrameFormat,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->SupportedInputFormats;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TFunction<TUniquePtr<AVEncoder::FVideoEncoder,TDefaultDelete<AVEncoder::FVideoEncoder>_>___cdecl(void)>,int> @ 148cffaa0

void __cdecl
DestructItems<TFunction<TUniquePtr<AVEncoder::FVideoEncoder,TDefaultDelete<AVEncoder::FVideoEncoder>_>___cdecl(void)>,int>
          (TFunction<TUniquePtr<AVEncoder::FVideoEncoder,TDefaultDelete<AVEncoder::FVideoEncoder>_>___cdecl(void)>
           *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&param_1->field_0x10;
    do {
      if (plVar2[-2] != 0) {
        plVar1 = (longlong *)plVar2[3];
        if ((longlong *)plVar2[3] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TFunction<AVEncoder::FVideoDecoder_*___cdecl(void)>,int> @ 148cffaf0

void __cdecl
DestructItems<TFunction<AVEncoder::FVideoDecoder_*___cdecl(void)>,int>
          (TFunction<AVEncoder::FVideoDecoder_*___cdecl(void)> *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&param_1->field_0x10;
    do {
      if (plVar2[-2] != 0) {
        plVar1 = (longlong *)plVar2[3];
        if ((longlong *)plVar2[3] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<AVEncoder::FVideoEncoderInputFrameImpl,1>,int> @ 148cffb40

void __cdecl
DestructItems<TSharedPtr<AVEncoder::FVideoEncoderInputFrameImpl,1>,int>
          (TSharedPtr<AVEncoder::FVideoEncoderInputFrameImpl,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// IID_PPV_ARGS_Helper<ID3D11Device1> @ 148cffdf0

void ** __cdecl IID_PPV_ARGS_Helper<ID3D11Device1>(ID3D11Device1 **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D11Texture2D> @ 148cffe00

void ** __cdecl IID_PPV_ARGS_Helper<ID3D11Texture2D>(ID3D11Texture2D **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<IDXGIResource> @ 148cffe10

void ** __cdecl IID_PPV_ARGS_Helper<IDXGIResource>(IDXGIResource **param_1)

{
  return param_1;
}

// MakeShared<AVEncoder::FVideoEncoderInputImpl,1> @ 148cffe20

TSharedRef<AVEncoder::FVideoEncoderInputImpl,1> * __cdecl
MakeShared<AVEncoder::FVideoEncoderInputImpl,1>
          (TSharedRef<AVEncoder::FVideoEncoderInputImpl,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  TSharedRef<AVEncoder::FVideoEncoderInputImpl,1> *pTVar6;
  
  pTVar3 = operator_new(0xe0);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FVideoEncoderInputImpl *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    puVar5 = (undefined8 *)0x0;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFVideoEncoderInputImpl_AVEncoder___00_SharedPointerInternals__6B_
    ;
    *(undefined2 *)((longlong)&pTVar3[2]._padding_ + 5) = 0;
    *(undefined1 *)((longlong)&pTVar3[2]._padding_ + 7) = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined8 *)&pTVar3[3].WeakReferenceCount = 0;
    pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[7]._padding_ = 0;
    pTVar3[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[8]._padding_ = 0;
    pTVar3[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[9]._padding_ = 0;
    pTVar3[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[9].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[10]._padding_ = 0;
    pTVar3[10].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0xb]._padding_ = 0;
    pTVar3[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xb].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0xc]._padding_ = 0;
    pTVar3[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xc].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0xd]._padding_ = 0;
    pTVar3[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xd].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)((longlong)&pTVar3[2]._padding_ + 4) = 0;
    pTVar3[1]._padding_ = (longlong)&___7FVideoEncoderInputImpl_AVEncoder__6B_;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined8 *)&pTVar3[1].WeakReferenceCount = 3;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined8 *)((longlong)&pTVar3[4]._padding_ + 4) = 0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[5]._padding_ = 0;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[6]._padding_ = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pTVar3[8].SharedReferenceCount,4000);
    puVar4 = operator_new(0x18);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar5 = puVar4;
    }
    *(undefined8 **)&pTVar3[0xb].SharedReferenceCount = puVar5;
    pTVar3[0xb]._padding_ = (longlong)puVar5;
    pTVar3[0xc]._padding_ = 0;
    pTVar3[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xc].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0xd]._padding_ = 0;
    pTVar3[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xd].WeakReferenceCount = (atomic<int>)0x0;
    __return_storage_ptr__->Object = (FVideoEncoderInputImpl *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if (((FVideoEncoderInputImpl *)(pTVar3 + 1) == (FVideoEncoderInputImpl *)0x0) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TSharedRef<AVEncoder::FVideoEncoderInputImpl,1> *)(*pcVar1)();
      return pTVar6;
    }
  }
  return __return_storage_ptr__;
}

// M4BitstreamCache @ 148d00e30

M4BitstreamCache * __thiscall vdecmpeg4::M4BitstreamCache::M4BitstreamCache(M4BitstreamCache *this)

{
  this->mpCacheEntry = (M4BitstreamCacheEntry *)0x0;
  return this;
}

// M4BitstreamParser @ 148d00e50

M4BitstreamParser * __thiscall
vdecmpeg4::M4BitstreamParser::M4BitstreamParser(M4BitstreamParser *this)

{
  (this->mHeaderInfo).mFlags = (<unnamed_type_mFlags>)0x0;
  *(undefined8 *)&(this->mHeaderInfo).mQuant = 0;
  (this->mHeaderInfo).mInvQuantIntra = (uchar *)0x0;
  (this->mHeaderInfo).mInvQuantInter = (uchar *)0x0;
  this->mBitstream = (M4Bitstream *)0x0;
  return this;
}

// M4Decoder @ 148d00e70

M4Decoder * __thiscall vdecmpeg4::M4Decoder::M4Decoder(M4Decoder *this,M4MemHandler *param_1)

{
  _func___cdecl_void_ptr_uint_uint *p_Var1;
  _func___cdecl_void_void_ptr *p_Var2;
  
  (this->mBitstream).mTail = (uint *)0x0;
  (this->mBitstream).mLength = 0;
  (this->mBitstream).mStart = (uint *)0x0;
  (this->mBitstream).mpStreamIO = (VIDStreamIO *)0x0;
  (this->mBitstream).mpInternalBuffer = (uchar *)0x0;
  (this->mBitstream).mInternalBufferBytes = 0;
  (this->mBitstream).mInternalBufferCurrentBytes = 0;
  (this->mBitstream).mInternalBufferIndex = 0;
  (this->mBitstream).mpMemSys = (M4MemHandler *)0x0;
  (this->mBitstream).mTotalBits = 0;
  this->mDecoderFlags = 0;
  this->mIPMacroblocks = (M4_MB *)0x0;
  this->mBMacroblocks = (M4_MB *)0x0;
  this->mMotVecMgr = (M4MotionVectorMgr *)0x0;
  (this->mBitstreamParser).mHeaderInfo.mFlags = (<unnamed_type_mFlags>)0x0;
  *(undefined8 *)&(this->mBitstreamParser).mHeaderInfo.mQuant = 0;
  (this->mBitstreamParser).mHeaderInfo.mInvQuantIntra = (uchar *)0x0;
  (this->mBitstreamParser).mHeaderInfo.mInvQuantInter = (uchar *)0x0;
  (this->mBitstreamParser).mBitstream = (M4Bitstream *)0x0;
  (this->mBitstreamCache).mpCacheEntry = (M4BitstreamCacheEntry *)0x0;
  (this->mXCommand).mpDctWorkData = (short *)0x0;
  (this->mXCommand).mpDecoder = (M4Decoder *)0x0;
  this->mpStreamIO = (VIDStreamIO *)0x0;
  this->mpStreamEvents = (VIDStreamEvents *)0x0;
  p_Var1 = param_1->mAllocCB;
  p_Var2 = param_1->mFreeCB;
  this->mCurrent = (M4Image *)0x0;
  this->mpVidImage = (M4Image **)0x0;
  (this->mMemSys).mAllocCB = p_Var1;
  (this->mMemSys).mFreeCB = p_Var2;
  (this->mBitstream).mpMemSys = &this->mMemSys;
  this->mReference[1] = (M4Image *)0x0;
  this->mReference[0] = (M4Image *)0x0;
  this->mTempImage[1] = (M4Image *)0x0;
  this->mTempImage[0] = (M4Image *)0x0;
  this->mNumVidImages = 0;
  return this;
}

// M4MotionVectorMgr @ 148d00f40

M4MotionVectorMgr * __thiscall
vdecmpeg4::M4MotionVectorMgr::M4MotionVectorMgr(M4MotionVectorMgr *this,M4Decoder *param_1)

{
  this->mDecoder = param_1;
  return this;
}

// M4XCmdSingleThread @ 148d00f50

M4XCmdSingleThread * __thiscall
vdecmpeg4::M4XCmdSingleThread::M4XCmdSingleThread(M4XCmdSingleThread *this)

{
  this->mpDctWorkData = (short *)0x0;
  this->mpDecoder = (M4Decoder *)0x0;
  return this;
}

// ~TFunction_OwnedObject<`AVEncoder::FVideoDecoderH264_WindowsImpl::CreateWorkerThread'::__l2::<lambda_1>,1,0> @ 148d00fd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AVEncoder::FVideoDecoderH264_WindowsImpl::CreateWorkerThread'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_AVEncoder::FVideoDecoderH264_WindowsImpl::CreateWorkerThread_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`AVEncoder::FVideoDecoderH264_WindowsImpl::CreateWorkerThread'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~M4BitstreamCache @ 148d01f80

void __thiscall vdecmpeg4::M4BitstreamCache::~M4BitstreamCache(M4BitstreamCache *this)

{
  return;
}

// ~M4BitstreamParser @ 148d01f90

void __thiscall vdecmpeg4::M4BitstreamParser::~M4BitstreamParser(M4BitstreamParser *this)

{
  M4Decoder *pMVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  
  pMVar1 = this->mDecoder;
  puVar2 = (this->mHeaderInfo).mInvQuantIntra;
  if ((pMVar1->mMemSys).mFreeCB == (_func___cdecl_void_void_ptr *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("mFreeCB",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Memory.h"
                       ,0x36,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (puVar2 != (uchar *)0x0) {
    (*(pMVar1->mMemSys).mFreeCB)(puVar2);
  }
  puVar2 = (this->mHeaderInfo).mInvQuantInter;
  pMVar1 = this->mDecoder;
  if ((pMVar1->mMemSys).mFreeCB == (_func___cdecl_void_void_ptr *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("mFreeCB",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Memory.h"
                       ,0x36,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (puVar2 != (uchar *)0x0) {
    (*(pMVar1->mMemSys).mFreeCB)(puVar2);
  }
  return;
}

// ~M4Decoder @ 148d02050

void __thiscall vdecmpeg4::M4Decoder::~M4Decoder(M4Decoder *this)

{
  M4Decoder *pMVar1;
  short *psVar2;
  uchar *puVar3;
  M4MemHandler *pMVar4;
  code *pcVar5;
  bool bVar6;
  
  pMVar1 = (this->mXCommand).mpDecoder;
  if (pMVar1 != (M4Decoder *)0x0) {
    psVar2 = (this->mXCommand).mpDctWorkData;
    if ((pMVar1->mMemSys).mFreeCB == (_func___cdecl_void_void_ptr *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("mFreeCB",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Memory.h"
                         ,0x36,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (psVar2 != (short *)0x0) {
      (*(pMVar1->mMemSys).mFreeCB)(psVar2);
    }
    (this->mXCommand).mpDctWorkData = (short *)0x0;
    (this->mXCommand).mpDecoder = (M4Decoder *)0x0;
  }
  freeStuff(this);
  if ((this->mXCommand).mpDctWorkData != (short *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("mpDctWorkData == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4XCmdSingleThread.cpp"
                       ,0x21,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  M4BitstreamParser::~M4BitstreamParser(&this->mBitstreamParser);
  puVar3 = (this->mBitstream).mpInternalBuffer;
  if ((puVar3 != (uchar *)0x0) &&
     (pMVar4 = (this->mBitstream).mpMemSys, pMVar4 != (M4MemHandler *)0x0)) {
    if (pMVar4->mFreeCB == (_func___cdecl_void_void_ptr *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("mFreeCB",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Memory.h"
                         ,0x36,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    (*pMVar4->mFreeCB)(puVar3);
  }
  return;
}

// ~M4Image @ 148d02170

void __thiscall vdecmpeg4::M4Image::~M4Image(M4Image *this)

{
  uchar *puVar1;
  M4Decoder *pMVar2;
  code *pcVar3;
  bool bVar4;
  
  puVar1 = this->mBaseMem;
  if (puVar1 != (uchar *)0x0) {
    pMVar2 = this->mDecoder;
    if ((pMVar2->mMemSys).mFreeCB == (_func___cdecl_void_void_ptr *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("mFreeCB",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Memory.h"
                         ,0x36,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (*(pMVar2->mMemSys).mFreeCB)(puVar1);
    this->mBaseMem = (uchar *)0x0;
  }
  return;
}

// ~M4XCmdSingleThread @ 148d021f0

void __thiscall vdecmpeg4::M4XCmdSingleThread::~M4XCmdSingleThread(M4XCmdSingleThread *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->mpDctWorkData != (short *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("mpDctWorkData == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4XCmdSingleThread.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// operator_new @ 148d02230

void * __cdecl vdecmpeg4::M4MotionVectorMgr::operator_new(ulong64 param_1,M4MemHandler *param_2)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  if (param_2->mAllocCB == (_func___cdecl_void_ptr_uint_uint *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("mAllocCB",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Memory.h"
                       ,0x2e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148d02280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar3 = (*param_2->mAllocCB)((uint)param_1,0x20);
  return pvVar3;
}

// operator_delete @ 148d02290

void __cdecl vdecmpeg4::M4MotionVectorMgr::operator_delete(void *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)((longlong)param_1 + 0x10);
  if (*(longlong *)(lVar1 + 0x330) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("mFreeCB",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Memory.h"
                       ,0x36,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148d022e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x330))(param_1);
  return;
}

// `scalar_deleting_destructor' @ 148d02580

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<AVEncoder::FVideoDecoderH264_Dummy_*_(__cdecl*)(void),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<AVEncoder::FVideoDecoderH264_Dummy_*_(__cdecl*)(void),0,0> *this,
          uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6APEAVFVideoDecoderH264_Dummy_AVEncoder__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d025c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<AVEncoder::FVideoDecoderH264_WindowsImpl_*_(__cdecl*)(void),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<AVEncoder::FVideoDecoderH264_WindowsImpl_*_(__cdecl*)(void),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6APEAVFVideoDecoderH264_WindowsImpl_AVEncoder__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d02600

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<AVEncoder::FVideoDecoderMPEG4_Impl_*_(__cdecl*)(void),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<AVEncoder::FVideoDecoderMPEG4_Impl_*_(__cdecl*)(void),0,0> *this,
          uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6APEAVFVideoDecoderMPEG4_Impl_AVEncoder__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d02640

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AVEncoder::FVideoDecoderH264_WindowsImpl::CreateWorkerThread'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`AVEncoder::FVideoDecoderH264_WindowsImpl::CreateWorkerThread'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d02680

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<AVEncoder::FVideoDecoderInputImpl,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<AVEncoder::FVideoDecoderInputImpl,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d026c0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<AVEncoder::FVideoEncoderInputImpl,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<AVEncoder::FVideoEncoderInputImpl,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d02700

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<unsigned_char,`AVEncoder::FCodecPacket::Create'::__l2::<lambda_1>,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d02740

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<AVEncoder::FVideoEncoderInputFrameImpl,SharedPointerInternals::DefaultDeleter<AVEncoder::FVideoEncoderInputFrameImpl>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<AVEncoder::FVideoEncoderInputFrameImpl,SharedPointerInternals::DefaultDeleter<AVEncoder::FVideoEncoderInputFrameImpl>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d02780

void * __thiscall
AVEncoder::FAudioEncoder::_scalar_deleting_destructor_(FAudioEncoder *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FAudioEncoder_AVEncoder__6B_;
  pFVar1 = (this->Listeners).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ListenersMutex);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d027e0

void * __thiscall
AVEncoder::FAudioEncoderFactory::_scalar_deleting_destructor_
          (FAudioEncoderFactory *this,uint param_1)

{
  *this = (FAudioEncoderFactory)&___7FAudioEncoderFactory_AVEncoder__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d02820

void * __thiscall
AVEncoder::FCodecPacket::_scalar_deleting_destructor_(FCodecPacket *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Data).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d02860

void * __thiscall
AVEncoder::FF5PlayerVideoDecoderOutputDX::_scalar_deleting_destructor_
          (FF5PlayerVideoDecoderOutputDX *this,uint param_1)

{
  ~FF5PlayerVideoDecoderOutputDX(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d028a0

void * __thiscall
AVEncoder::FNativeVideoDecoderOutput::_scalar_deleting_destructor_
          (FNativeVideoDecoderOutput *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d028d0

void * __thiscall
AVEncoder::FVideoDecoder::_scalar_deleting_destructor_(FVideoDecoder *this,uint param_1)

{
  ~FVideoDecoder(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d02910

void * __thiscall
AVEncoder::FVideoDecoderH264_Dummy::_scalar_deleting_destructor_
          (FVideoDecoderH264_Dummy *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FVideoDecoderH264_Dummy_AVEncoder__6B_;
  FVideoDecoder::~FVideoDecoder((FVideoDecoder *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d02960

void * __thiscall
AVEncoder::FVideoDecoderH264_Impl::_scalar_deleting_destructor_
          (FVideoDecoderH264_Impl *this,uint param_1)

{
  FVideoDecoder::~FVideoDecoder((FVideoDecoder *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d029a0

void * __thiscall
AVEncoder::FVideoDecoderH264_Windows::_scalar_deleting_destructor_
          (FVideoDecoderH264_Windows *this,uint param_1)

{
  FVideoDecoder::~FVideoDecoder((FVideoDecoder *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d029e0

void * __thiscall
AVEncoder::FVideoDecoderH264_WindowsImpl::_scalar_deleting_destructor_
          (FVideoDecoderH264_WindowsImpl *this,uint param_1)

{
  FDecoderOutputBuffer *pFVar1;
  IMFCollection *pIVar2;
  IMFSample *pIVar3;
  IMFMediaType *pIVar4;
  IMFTransform *pIVar5;
  FThread *this_00;
  TNode *pTVar6;
  
  *(undefined ***)this = &___7FVideoDecoderH264_WindowsImpl_AVEncoder__6B_;
  pFVar1 = (this->CurrentDecoderOutputBuffer).Ptr;
  if (pFVar1 != (FDecoderOutputBuffer *)0x0) {
    pIVar2 = (pFVar1->OutputBuffer).pEvents;
    if (pIVar2 != (IMFCollection *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
      (pFVar1->OutputBuffer).pEvents = (IMFCollection *)0x0;
    }
    pIVar3 = (pFVar1->OutputBuffer).pSample;
    if (pIVar3 != (IMFSample *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))();
    }
    ::operator_delete(pFVar1,0x30);
  }
  pIVar4 = (this->CurrentOutputMediaType).Reference;
  if (pIVar4 != (IMFMediaType *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  pIVar5 = (this->DecoderTransform).Reference;
  if (pIVar5 != (IMFTransform *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))();
  }
  (**(code **)(((this->WorkerThreadSignalHaveWork).Event)->_padding_ + 0x10))();
  FGenericPlatformProcess::ReturnSynchEventToPool((this->WorkerThreadSignalHaveWork).Event);
  this_00 = (this->WorkerThread).Ptr;
  if (this_00 != (FThread *)0x0) {
    ::FThread::~FThread(this_00);
    ::operator_delete(this_00,0x10);
  }
  pTVar6 = (this->OutputQueue).Tail;
  while (pTVar6 != (TNode *)0x0) {
    (this->OutputQueue).Tail = pTVar6->NextNode;
    ::operator_delete(pTVar6,0x10);
    pTVar6 = (this->OutputQueue).Tail;
  }
  TQueue<TUniquePtr<AVEncoder::FVideoDecoderH264_WindowsImpl::FInputToDecode,TDefaultDelete<AVEncoder::FVideoDecoderH264_WindowsImpl::FInputToDecode>_>,1>
  ::
  ~TQueue<TUniquePtr<AVEncoder::FVideoDecoderH264_WindowsImpl::FInputToDecode,TDefaultDelete<AVEncoder::FVideoDecoderH264_WindowsImpl::FInputToDecode>_>,1>
            (&this->InputQueue);
  FDXDeviceInfo::~FDXDeviceInfo(&this->DXDeviceInfo);
  FVideoDecoder::~FVideoDecoder((FVideoDecoder *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d02b20

void * __thiscall
AVEncoder::FVideoDecoderInput::_scalar_deleting_destructor_(FVideoDecoderInput *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d02b50

void * __thiscall
AVEncoder::FVideoDecoderInputImpl::_scalar_deleting_destructor_
          (FVideoDecoderInputImpl *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d02b80

void * __thiscall
AVEncoder::FVideoDecoderMPEG4::_scalar_deleting_destructor_(FVideoDecoderMPEG4 *this,uint param_1)

{
  FVideoDecoder::~FVideoDecoder((FVideoDecoder *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d02bc0

void * __thiscall
AVEncoder::FVideoDecoderMPEG4_Impl::_scalar_deleting_destructor_
          (FVideoDecoderMPEG4_Impl *this,uint param_1)

{
  FInDecoderData *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  void *pvVar5;
  
  *(undefined ***)this = &_vftable__for__AVEncoder__FVideoDecoderMPEG4__;
  *(undefined ***)&this->field_0xa8 = &_vftable__for__vdecmpeg4__VIDStreamIO__;
  *(undefined ***)&this->field_0xb0 = &_vftable__for__vdecmpeg4__VIDStreamEvents__;
  if (this->DecoderHandle != (void *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!DecoderHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\VideoDecoderMpeg4.cpp"
                       ,0xf6,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar3)();
      return pvVar5;
    }
  }
  pFVar1 = (this->CurrentAU).Ptr;
  if (pFVar1 != (FInDecoderData *)0x0) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x28);
  }
  TQueue<TUniquePtr<AVEncoder::FVideoDecoderMPEG4_Impl::FInDecoderData,TDefaultDelete<AVEncoder::FVideoDecoderMPEG4_Impl::FInDecoderData>_>,1>
  ::
  ~TQueue<TUniquePtr<AVEncoder::FVideoDecoderMPEG4_Impl::FInDecoderData,TDefaultDelete<AVEncoder::FVideoDecoderMPEG4_Impl::FInDecoderData>_>,1>
            (&this->PendingDecodeData);
  FVideoDecoder::~FVideoDecoder((FVideoDecoder *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d02c90

void * __thiscall
AVEncoder::FVideoDecoderOutput::_scalar_deleting_destructor_(FVideoDecoderOutput *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d02cc0

void * __thiscall
AVEncoder::FVideoDecoderOutputDX::_scalar_deleting_destructor_
          (FVideoDecoderOutputDX *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d02cf0

void * __thiscall
AVEncoder::FVideoDecoderOutputDummy::_scalar_deleting_destructor_
          (FVideoDecoderOutputDummy *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FVideoDecoderOutputDummy_AVEncoder__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Buffer).ReleaseCallback);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Buffer).RetainCallback);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d02d50

void * __thiscall
AVEncoder::FVideoDecoderOutputH264_Windows::_scalar_deleting_destructor_
          (FVideoDecoderOutputH264_Windows *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FVideoDecoderOutputH264_Windows_AVEncoder__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Buffer).ReleaseCallback);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Buffer).RetainCallback);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d02db0

void * __thiscall
AVEncoder::FVideoDecoderOutputMPEG4::_scalar_deleting_destructor_
          (FVideoDecoderOutputMPEG4 *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FVideoDecoderOutputMPEG4_AVEncoder__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Buffer).ReleaseCallback);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Buffer).RetainCallback);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d02e10

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
AVEncoder::FVideoEncoder::_scalar_deleting_destructor_(FVideoEncoder *this,uint param_1)

{
  int iVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res10 [8];
  
  this->_padding_ = (longlong)&___7FVideoEncoder_AVEncoder__6B_;
  pFVar5 = (this->Layers).AllocatorInstance.Data;
  iVar1 = (this->Layers).ArrayNum;
  pFVar3 = pFVar5 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->Layers).ArrayNum != iVar1) {
      `TCheckedPointerIterator<AVEncoder::FVideoEncoder::FLayer_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar5 == pFVar3) goto LAB_148d02e7c;
    if (*(longlong *)pFVar5 != 0) break;
    pFVar5 = pFVar5 + 8;
  }
  if (2 < (byte)LogVideoEncoder._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVideoEncoder);
  }
LAB_148d02e7c:
  if (*(longlong *)&this->OnEncodedPacket != 0) {
    plVar2 = *(longlong **)&(this->OnEncodedPacket).field_0x28;
    plVar4 = (longlong *)&(this->OnEncodedPacket).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar4 = plVar2;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  pFVar3 = (this->Layers).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d02ee0

void * __thiscall
AVEncoder::FVideoEncoderInput::_scalar_deleting_destructor_(FVideoEncoderInput *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d02f10

void * __thiscall
AVEncoder::FVideoEncoderInputFrame::_scalar_deleting_destructor_
          (FVideoEncoderInputFrame *this,uint param_1)

{
  ~FVideoEncoderInputFrame(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x220);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d02f50

void * __thiscall
AVEncoder::FVideoEncoderInputFrameImpl::_scalar_deleting_destructor_
          (FVideoEncoderInputFrameImpl *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&___7FVideoEncoderInputFrameImpl_AVEncoder__6B_;
  if (this->ClonedReference != (FVideoEncoderInputFrame *)0x0) {
    (**(code **)this->ClonedReference->_padding_)();
  }
  if (*(longlong *)&this->OnCloneDestroyed != 0) {
    plVar1 = *(longlong **)&(this->OnCloneDestroyed).field_0x28;
    plVar2 = (longlong *)&(this->OnCloneDestroyed).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  FVideoEncoderInputFrame::~FVideoEncoderInputFrame((FVideoEncoderInputFrame *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x260);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d02fd0

void * __thiscall
AVEncoder::FVideoEncoderInputImpl::_scalar_deleting_destructor_
          (FVideoEncoderInputImpl *this,uint param_1)

{
  ~FVideoEncoderInputImpl(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d03010

void * __thiscall
AVEncoder::FWmfAudioEncoder::_scalar_deleting_destructor_(FWmfAudioEncoder *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  IMFMediaType *pIVar2;
  IMFTransform *pIVar3;
  
  this->_padding_ = (longlong)&___7FWmfAudioEncoder_AVEncoder__6B_;
  pFVar1 = (this->PCM16).RawPCMData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->OutputType).Reference;
  if (pIVar2 != (IMFMediaType *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar3 = (this->Encoder).Reference;
  if (pIVar3 != (IMFTransform *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pFVar1 = (this->Config).Codec.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Type).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FAudioEncoder_AVEncoder__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d030e0

void * __thiscall
AVEncoder::FWmfAudioEncoderFactory::_scalar_deleting_destructor_
          (FWmfAudioEncoderFactory *this,uint param_1)

{
  *this = (FWmfAudioEncoderFactory)&___7FAudioEncoderFactory_AVEncoder__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d03120

void * __thiscall vdecmpeg4::M4Image::_scalar_deleting_destructor_(M4Image *this,uint param_1)

{
  uchar *puVar1;
  M4Decoder *pMVar2;
  code *pcVar3;
  bool bVar4;
  void *pvVar5;
  
  puVar1 = this->mBaseMem;
  if (puVar1 != (uchar *)0x0) {
    pMVar2 = this->mDecoder;
    if ((pMVar2->mMemSys).mFreeCB == (_func___cdecl_void_void_ptr *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("mFreeCB",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Memory.h"
                         ,0x36,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pvVar5 = (void *)(*pcVar3)();
        return pvVar5;
      }
    }
    (*(pMVar2->mMemSys).mFreeCB)(puVar1);
    this->mBaseMem = (uchar *)0x0;
  }
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      pMVar2 = this->mDecoder;
      if ((pMVar2->mMemSys).mFreeCB == (_func___cdecl_void_void_ptr *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("mFreeCB",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Memory.h"
                           ,0x36,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pvVar5 = (void *)(*pcVar3)();
          return pvVar5;
        }
      }
      (*(pMVar2->mMemSys).mFreeCB)(this);
      return this;
    }
    __empty_global_delete(this,0x88);
  }
  return this;
}

// AllocVidFrame @ 148d03420

M4Image * __thiscall vdecmpeg4::M4Decoder::AllocVidFrame(M4Decoder *this)

{
  code *pcVar1;
  bool bVar2;
  M4Image *pMVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = 0;
  uVar5 = uVar6;
  if (this->mNumVidImages != 0) {
    do {
      if ((this->mpVidImage[uVar5]->mRefCount < 1) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("mpVidImage[i]->RefGet() >= 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Decoder.cpp"
                             ,0x13a,L"Refcount error! Someone decremented twice %d"), bVar2)) {
        pcVar1 = (code *)swi(3);
        pMVar3 = (M4Image *)(*pcVar1)();
        return pMVar3;
      }
      if ((3 < this->mpVidImage[uVar5]->mRefCount) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("mpVidImage[i]->RefGet() <= 3",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Decoder.cpp"
                             ,0x13b,L"Refcount error! Someone incremented too often (todo!) %d"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pMVar3 = (M4Image *)(*pcVar1)();
        return pMVar3;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < this->mNumVidImages);
    if (this->mNumVidImages != 0) {
      do {
        if (this->mpVidImage[uVar6]->mRefCount == 1) {
          return this->mpVidImage[uVar6];
        }
        uVar4 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar4;
      } while (uVar4 < this->mNumVidImages);
    }
  }
  return (M4Image *)0x0;
}

// Black @ 148d03af0

void __thiscall vdecmpeg4::M4Image::Black(M4Image *this)

{
  short *psVar1;
  code *pcVar2;
  bool bVar3;
  
  if (((((this->mImage).texture.y == (uchar *)0x0) || ((this->mImage).texture.u == (uchar *)0x0)) ||
      ((this->mImage).texture.v == (uchar *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("mImage.texture.y && mImage.texture.u && mImage.texture.v",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Image.cpp"
                         ,0x9a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  psVar1 = &(this->mImage).texHeight;
  if ((((this->mImage).texWidth < 1) || (*psVar1 < 1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("mImage.texWidth > 0 && mImage.texHeight > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Image.cpp"
                         ,0x9b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  memset((this->mImage).texture.y,0x10,(longlong)*psVar1 * (longlong)(this->mImage).texWidth);
  memset((this->mImage).texture.u,0x80,
         (ulonglong)((longlong)*psVar1 * (longlong)(this->mImage).texWidth) >> 2);
  memset((this->mImage).texture.v,0x80,
         (ulonglong)((longlong)*psVar1 * (longlong)(this->mImage).texWidth) >> 2);
  return;
}

// Exit @ 148d0a330

void __thiscall vdecmpeg4::M4BitstreamCache::Exit(M4BitstreamCache *this,M4MemHandler *param_1)

{
  M4BitstreamCacheEntry *pMVar1;
  code *pcVar2;
  bool bVar3;
  
  pMVar1 = this->mpCacheEntry;
  if (param_1->mFreeCB == (_func___cdecl_void_void_ptr *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("mFreeCB",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Memory.h"
                       ,0x36,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (pMVar1 != (M4BitstreamCacheEntry *)0x0) {
    (*param_1->mFreeCB)(pMVar1);
  }
  return;
}

// Exit @ 148d0a390

void __thiscall vdecmpeg4::M4XCmdSingleThread::Exit(M4XCmdSingleThread *this)

{
  M4Decoder *pMVar1;
  short *psVar2;
  code *pcVar3;
  bool bVar4;
  
  pMVar1 = this->mpDecoder;
  if (pMVar1 != (M4Decoder *)0x0) {
    psVar2 = this->mpDctWorkData;
    if ((pMVar1->mMemSys).mFreeCB == (_func___cdecl_void_void_ptr *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("mFreeCB",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Memory.h"
                         ,0x36,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (psVar2 != (short *)0x0) {
      (*(pMVar1->mMemSys).mFreeCB)(psVar2);
    }
    this->mpDctWorkData = (short *)0x0;
    this->mpDecoder = (M4Decoder *)0x0;
  }
  return;
}

// FrameBegin @ 148d0aa50

void __thiscall
vdecmpeg4::M4XCmdSingleThread::FrameBegin
          (M4XCmdSingleThread *this,M4Image *param_1,M4BitstreamHeaderInfo *param_2,
          M4Image **param_3)

{
  this->mpOutput = param_1;
  this->mpHeaderInfo = param_2;
  this->mpRefImage[0] = *param_3;
  this->mpRefImage[1] = param_3[1];
  return;
}

// GetGUID @ 148d0b390

FString * __cdecl GetGUID(FString *__return_storage_ptr__)

{
  FGuid *pFVar1;
  FGuid local_18;
  
  if (((id.D == 0 && id.C == 0) && id.B == 0) && id.A == 0) {
    pFVar1 = FGuid::NewGuid(&local_18);
    id = *pFVar1;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  FGuid::AppendString(&id,__return_storage_ptr__,Digits);
  return __return_storage_ptr__;
}

// Init @ 148d0bf90

int __thiscall vdecmpeg4::M4BitstreamCache::Init(M4BitstreamCache *this,M4MemHandler *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  M4BitstreamCacheEntry *pMVar4;
  
  if (param_1->mAllocCB == (_func___cdecl_void_ptr_uint_uint *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("mAllocCB",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Memory.h"
                       ,0x2e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  pMVar4 = (*param_1->mAllocCB)(0x310,0x80);
  this->mpCacheEntry = pMVar4;
  iVar3 = -0x7ffffffe;
  if (pMVar4 != (M4BitstreamCacheEntry *)0x0) {
    iVar3 = 0;
  }
  return iVar3;
}

// Init @ 148d0c000

int __thiscall vdecmpeg4::M4XCmdSingleThread::Init(M4XCmdSingleThread *this,M4Decoder *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  short *psVar4;
  
  if (this->mpDctWorkData != (short *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("mpDctWorkData == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4XCmdSingleThread.cpp"
                       ,0x2e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if (param_1 == (M4Decoder *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("pDecoder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4XCmdSingleThread.cpp"
                       ,0x2f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  this->mpDecoder = param_1;
  if ((param_1->mMemSys).mAllocCB == (_func___cdecl_void_ptr_uint_uint *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("mAllocCB",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Memory.h"
                       ,0x2e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  psVar4 = (*(param_1->mMemSys).mAllocCB)(0x300,0x20);
  this->mpDctWorkData = psVar4;
  if (psVar4 == (short *)0x0) {
    this->mpDecoder = (M4Decoder *)0x0;
    return -0x7ffffffe;
  }
  return 0;
}

// M4ImageCreatePadding @ 148d0d510

void __cdecl vdecmpeg4::M4ImageCreatePadding(void *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  short sVar4;
  int *piVar5;
  void *pvVar6;
  longlong lVar7;
  byte *pbVar8;
  size_t _Size;
  ushort uVar9;
  ushort uVar10;
  longlong lVar11;
  uint uVar12;
  
  piVar5 = *(int **)((longlong)param_1 + 0x30);
  lVar11 = 0x20;
  pbVar8 = *(byte **)((longlong)param_1 + 0x10);
  lVar7 = 0x20;
  do {
    iVar2 = (uint)*pbVar8 * 0x1010101;
    *piVar5 = iVar2;
    piVar5[1] = iVar2;
    piVar5[2] = iVar2;
    piVar5[3] = iVar2;
    piVar5[4] = iVar2;
    piVar5[5] = iVar2;
    piVar5[6] = iVar2;
    piVar5[7] = iVar2;
    memcpy(piVar5 + 8,pbVar8,(longlong)*(short *)((longlong)param_1 + 8));
    lVar3 = (longlong)*(short *)((longlong)param_1 + 8);
    iVar2 = (uint)pbVar8[lVar3 + -1] * 0x1010101;
    piVar1 = (int *)(lVar3 + 0x20 + (longlong)piVar5);
    *piVar1 = iVar2;
    piVar1[1] = iVar2;
    piVar1[2] = iVar2;
    piVar1[3] = iVar2;
    piVar1 = (int *)(lVar3 + 0x30 + (longlong)piVar5);
    *piVar1 = iVar2;
    piVar1[1] = iVar2;
    piVar1[2] = iVar2;
    piVar1[3] = iVar2;
    sVar4 = *(short *)((longlong)param_1 + 0xc);
    piVar5 = (int *)((longlong)piVar5 + (longlong)sVar4);
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  uVar10 = 0;
  uVar9 = uVar10;
  if (0 < *(short *)((longlong)param_1 + 10)) {
    do {
      uVar9 = uVar9 + 1;
      iVar2 = (uint)*pbVar8 * 0x1010101;
      *piVar5 = iVar2;
      piVar5[1] = iVar2;
      piVar5[2] = iVar2;
      piVar5[3] = iVar2;
      piVar5[4] = iVar2;
      piVar5[5] = iVar2;
      piVar5[6] = iVar2;
      piVar5[7] = iVar2;
      lVar7 = (longlong)*(short *)((longlong)param_1 + 8);
      iVar2 = (uint)pbVar8[lVar7 + -1] * 0x1010101;
      piVar1 = (int *)(lVar7 + 0x20 + (longlong)piVar5);
      *piVar1 = iVar2;
      piVar1[1] = iVar2;
      piVar1[2] = iVar2;
      piVar1[3] = iVar2;
      piVar1 = (int *)(lVar7 + 0x30 + (longlong)piVar5);
      *piVar1 = iVar2;
      piVar1[1] = iVar2;
      piVar1[2] = iVar2;
      piVar1[3] = iVar2;
      sVar4 = *(short *)((longlong)param_1 + 0xc);
      piVar5 = (int *)((longlong)piVar5 + (longlong)sVar4);
      pbVar8 = pbVar8 + sVar4;
    } while ((int)(uint)uVar9 < (int)*(short *)((longlong)param_1 + 10));
  }
  pbVar8 = pbVar8 + -(longlong)sVar4;
  do {
    iVar2 = (uint)*pbVar8 * 0x1010101;
    *piVar5 = iVar2;
    piVar5[1] = iVar2;
    piVar5[2] = iVar2;
    piVar5[3] = iVar2;
    piVar5[4] = iVar2;
    piVar5[5] = iVar2;
    piVar5[6] = iVar2;
    piVar5[7] = iVar2;
    memcpy(piVar5 + 8,pbVar8,(longlong)*(short *)((longlong)param_1 + 8));
    lVar7 = (longlong)*(short *)((longlong)param_1 + 8);
    iVar2 = (uint)pbVar8[lVar7 + -1] * 0x1010101;
    piVar1 = (int *)(lVar7 + 0x20 + (longlong)piVar5);
    *piVar1 = iVar2;
    piVar1[1] = iVar2;
    piVar1[2] = iVar2;
    piVar1[3] = iVar2;
    piVar1 = (int *)(lVar7 + 0x30 + (longlong)piVar5);
    *piVar1 = iVar2;
    piVar1[1] = iVar2;
    piVar1[2] = iVar2;
    piVar1[3] = iVar2;
    piVar5 = (int *)((longlong)piVar5 + (longlong)*(short *)((longlong)param_1 + 0xc));
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  lVar11 = 0x10;
  pvVar6 = *(void **)((longlong)param_1 + 0x38);
  pbVar8 = *(byte **)((longlong)param_1 + 0x18);
  _Size = (size_t)((int)*(short *)((longlong)param_1 + 8) / 2);
  lVar7 = (longlong)((int)*(short *)((longlong)param_1 + 0xc) / 2);
  do {
    memset(pvVar6,(uint)*pbVar8,0x10);
    memcpy((void *)((longlong)pvVar6 + 0x10),pbVar8,_Size);
    memset((void *)(_Size + 0x10 + (longlong)pvVar6),(uint)pbVar8[_Size - 1],0x10);
    pvVar6 = (void *)((longlong)pvVar6 + lVar7);
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  uVar12 = 0;
  if (0 < (int)*(short *)((longlong)param_1 + 10) / 2) {
    do {
      memset(pvVar6,(uint)*pbVar8,0x10);
      memset((void *)(_Size + 0x10 + (longlong)pvVar6),(uint)pbVar8[_Size - 1],0x10);
      uVar12 = (uint)(ushort)((short)uVar12 + 1);
      pvVar6 = (void *)((longlong)pvVar6 + lVar7);
      pbVar8 = pbVar8 + lVar7;
    } while ((int)uVar12 < (int)*(short *)((longlong)param_1 + 10) / 2);
  }
  pbVar8 = pbVar8 + -lVar7;
  lVar11 = 0x10;
  do {
    memset(pvVar6,(uint)*pbVar8,0x10);
    memcpy((void *)((longlong)pvVar6 + 0x10),pbVar8,_Size);
    memset((void *)(_Size + 0x10 + (longlong)pvVar6),(uint)pbVar8[_Size - 1],0x10);
    pvVar6 = (void *)((longlong)pvVar6 + lVar7);
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  pvVar6 = *(void **)((longlong)param_1 + 0x40);
  lVar11 = 0x10;
  pbVar8 = *(byte **)((longlong)param_1 + 0x20);
  do {
    memset(pvVar6,(uint)*pbVar8,0x10);
    memcpy((void *)((longlong)pvVar6 + 0x10),pbVar8,_Size);
    memset((void *)(_Size + 0x10 + (longlong)pvVar6),(uint)pbVar8[_Size - 1],0x10);
    pvVar6 = (void *)((longlong)pvVar6 + lVar7);
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  if (0 < (int)*(short *)((longlong)param_1 + 10) / 2) {
    do {
      memset(pvVar6,(uint)*pbVar8,0x10);
      memset((void *)(_Size + 0x10 + (longlong)pvVar6),(uint)pbVar8[_Size - 1],0x10);
      uVar10 = uVar10 + 1;
      pvVar6 = (void *)((longlong)pvVar6 + lVar7);
      pbVar8 = pbVar8 + lVar7;
    } while ((int)(uint)uVar10 < (int)*(short *)((longlong)param_1 + 10) / 2);
  }
  pbVar8 = pbVar8 + -lVar7;
  lVar11 = 0x10;
  do {
    memset(pvVar6,(uint)*pbVar8,0x10);
    memcpy((void *)((longlong)pvVar6 + 0x10),pbVar8,_Size);
    memset((void *)(_Size + 0x10 + (longlong)pvVar6),(uint)pbVar8[_Size - 1],0x10);
    pvVar6 = (void *)((longlong)pvVar6 + lVar7);
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  return;
}

// M4InvQuantType0Inter @ 148d0d8a0

void __cdecl vdecmpeg4::M4InvQuantType0Inter(short *param_1,short *param_2,uchar param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short *psVar4;
  longlong lVar5;
  ushort uVar6;
  longlong lVar7;
  
  psVar4 = param_1 + 1;
  sVar1 = (ushort)param_3 * 2;
  lVar7 = 8;
  uVar6 = (ushort)param_3;
  if ((param_3 & 1) == 0) {
    uVar6 = param_3 - 1;
  }
  lVar5 = (longlong)param_2 - (longlong)param_1;
  do {
    sVar2 = *(short *)(lVar5 + -2 + (longlong)psVar4);
    sVar3 = 0;
    if (sVar2 != 0) {
      if (sVar2 < 0) {
        sVar2 = sVar1 * sVar2 - uVar6;
        sVar3 = -0x800;
        if (-0x801 < sVar2) {
          sVar3 = sVar2;
        }
      }
      else {
        sVar2 = sVar1 * sVar2 + uVar6;
        sVar3 = 0x7ff;
        if (sVar2 < 0x800) {
          sVar3 = sVar2;
        }
      }
    }
    psVar4[-1] = sVar3;
    sVar2 = *(short *)(lVar5 + (longlong)psVar4);
    if (sVar2 == 0) {
      sVar2 = 0;
    }
    else if (sVar2 < 0) {
      sVar3 = sVar1 * sVar2 - uVar6;
      sVar2 = -0x800;
      if (-0x801 < sVar3) {
        sVar2 = sVar3;
      }
    }
    else {
      sVar3 = sVar1 * sVar2 + uVar6;
      sVar2 = 0x7ff;
      if (sVar3 < 0x800) {
        sVar2 = sVar3;
      }
    }
    *psVar4 = sVar2;
    sVar2 = *(short *)(lVar5 + 2 + (longlong)psVar4);
    if (sVar2 == 0) {
      sVar2 = 0;
    }
    else if (sVar2 < 0) {
      sVar3 = sVar1 * sVar2 - uVar6;
      sVar2 = -0x800;
      if (-0x801 < sVar3) {
        sVar2 = sVar3;
      }
    }
    else {
      sVar3 = sVar1 * sVar2 + uVar6;
      sVar2 = 0x7ff;
      if (sVar3 < 0x800) {
        sVar2 = sVar3;
      }
    }
    psVar4[1] = sVar2;
    sVar2 = *(short *)(lVar5 + 4 + (longlong)psVar4);
    if (sVar2 == 0) {
      sVar2 = 0;
    }
    else if (sVar2 < 0) {
      sVar3 = sVar1 * sVar2 - uVar6;
      sVar2 = -0x800;
      if (-0x801 < sVar3) {
        sVar2 = sVar3;
      }
    }
    else {
      sVar3 = sVar1 * sVar2 + uVar6;
      sVar2 = 0x7ff;
      if (sVar3 < 0x800) {
        sVar2 = sVar3;
      }
    }
    psVar4[2] = sVar2;
    sVar2 = *(short *)(lVar5 + 6 + (longlong)psVar4);
    if (sVar2 == 0) {
      sVar2 = 0;
    }
    else if (sVar2 < 0) {
      sVar3 = sVar1 * sVar2 - uVar6;
      sVar2 = -0x800;
      if (-0x801 < sVar3) {
        sVar2 = sVar3;
      }
    }
    else {
      sVar3 = sVar1 * sVar2 + uVar6;
      sVar2 = 0x7ff;
      if (sVar3 < 0x800) {
        sVar2 = sVar3;
      }
    }
    psVar4[3] = sVar2;
    sVar2 = *(short *)(lVar5 + 8 + (longlong)psVar4);
    if (sVar2 == 0) {
      sVar2 = 0;
    }
    else if (sVar2 < 0) {
      sVar3 = sVar1 * sVar2 - uVar6;
      sVar2 = -0x800;
      if (-0x801 < sVar3) {
        sVar2 = sVar3;
      }
    }
    else {
      sVar3 = sVar1 * sVar2 + uVar6;
      sVar2 = 0x7ff;
      if (sVar3 < 0x800) {
        sVar2 = sVar3;
      }
    }
    psVar4[4] = sVar2;
    sVar2 = *(short *)(lVar5 + 10 + (longlong)psVar4);
    if (sVar2 == 0) {
      sVar2 = 0;
    }
    else if (sVar2 < 0) {
      sVar3 = sVar1 * sVar2 - uVar6;
      sVar2 = -0x800;
      if (-0x801 < sVar3) {
        sVar2 = sVar3;
      }
    }
    else {
      sVar3 = sVar1 * sVar2 + uVar6;
      sVar2 = 0x7ff;
      if (sVar3 < 0x800) {
        sVar2 = sVar3;
      }
    }
    psVar4[5] = sVar2;
    sVar2 = *(short *)(lVar5 + 0xc + (longlong)psVar4);
    if (sVar2 == 0) {
      sVar2 = 0;
    }
    else if (sVar2 < 0) {
      sVar3 = sVar1 * sVar2 - uVar6;
      sVar2 = -0x800;
      if (-0x801 < sVar3) {
        sVar2 = sVar3;
      }
    }
    else {
      sVar3 = sVar1 * sVar2 + uVar6;
      sVar2 = 0x7ff;
      if (sVar3 < 0x800) {
        sVar2 = sVar3;
      }
    }
    psVar4[6] = sVar2;
    psVar4 = psVar4 + 8;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return;
}

// M4InvQuantType0Intra @ 148d0db50

void __cdecl
vdecmpeg4::M4InvQuantType0Intra(short *param_1,short *param_2,uchar param_3,ushort param_4)

{
  int iVar1;
  longlong lVar2;
  short sVar3;
  short *psVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = (uint)param_3 + (uint)param_3;
  uVar6 = (uint)param_3;
  if ((param_3 & 1) == 0) {
    uVar6 = param_3 - 1;
  }
  sVar3 = *param_2 * param_4;
  *param_1 = sVar3;
  if (sVar3 < -0x800) {
    *param_1 = -0x800;
  }
  else if (0x7ff < sVar3) {
    *param_1 = 0x7ff;
  }
  lVar2 = (longlong)param_2 - (longlong)param_1;
  psVar4 = param_1 + 2;
  lVar5 = 7;
  do {
    sVar3 = *(short *)((longlong)psVar4 + lVar2 + -2);
    if (sVar3 == 0) {
      sVar3 = 0;
    }
    else if (sVar3 < 0) {
      iVar1 = uVar6 - sVar3 * iVar7;
      if (iVar1 < 0x801) {
        sVar3 = -(short)iVar1;
      }
      else {
        sVar3 = -0x800;
      }
    }
    else {
      iVar1 = sVar3 * iVar7 + uVar6;
      sVar3 = 0x7ff;
      if (iVar1 < 0x800) {
        sVar3 = (short)iVar1;
      }
    }
    psVar4[-1] = sVar3;
    sVar3 = *(short *)((longlong)psVar4 + lVar2);
    if (sVar3 == 0) {
      sVar3 = 0;
    }
    else if (sVar3 < 0) {
      iVar1 = uVar6 - sVar3 * iVar7;
      if (iVar1 < 0x801) {
        sVar3 = -(short)iVar1;
      }
      else {
        sVar3 = -0x800;
      }
    }
    else {
      iVar1 = sVar3 * iVar7 + uVar6;
      sVar3 = 0x7ff;
      if (iVar1 < 0x800) {
        sVar3 = (short)iVar1;
      }
    }
    *psVar4 = sVar3;
    sVar3 = *(short *)((longlong)psVar4 + lVar2 + 2);
    if (sVar3 == 0) {
      sVar3 = 0;
    }
    else if (sVar3 < 0) {
      iVar1 = uVar6 - sVar3 * iVar7;
      if (iVar1 < 0x801) {
        sVar3 = -(short)iVar1;
      }
      else {
        sVar3 = -0x800;
      }
    }
    else {
      iVar1 = sVar3 * iVar7 + uVar6;
      sVar3 = 0x7ff;
      if (iVar1 < 0x800) {
        sVar3 = (short)iVar1;
      }
    }
    psVar4[1] = sVar3;
    sVar3 = *(short *)((longlong)psVar4 + lVar2 + 4);
    if (sVar3 == 0) {
      sVar3 = 0;
    }
    else if (sVar3 < 0) {
      iVar1 = uVar6 - sVar3 * iVar7;
      if (iVar1 < 0x801) {
        sVar3 = -(short)iVar1;
      }
      else {
        sVar3 = -0x800;
      }
    }
    else {
      iVar1 = sVar3 * iVar7 + uVar6;
      sVar3 = 0x7ff;
      if (iVar1 < 0x800) {
        sVar3 = (short)iVar1;
      }
    }
    psVar4[2] = sVar3;
    sVar3 = *(short *)((longlong)psVar4 + lVar2 + 6);
    if (sVar3 == 0) {
      sVar3 = 0;
    }
    else if (sVar3 < 0) {
      iVar1 = uVar6 - sVar3 * iVar7;
      if (iVar1 < 0x801) {
        sVar3 = -(short)iVar1;
      }
      else {
        sVar3 = -0x800;
      }
    }
    else {
      iVar1 = sVar3 * iVar7 + uVar6;
      sVar3 = 0x7ff;
      if (iVar1 < 0x800) {
        sVar3 = (short)iVar1;
      }
    }
    psVar4[3] = sVar3;
    sVar3 = *(short *)((longlong)psVar4 + lVar2 + 8);
    if (sVar3 == 0) {
      sVar3 = 0;
    }
    else if (sVar3 < 0) {
      iVar1 = uVar6 - sVar3 * iVar7;
      if (iVar1 < 0x801) {
        sVar3 = -(short)iVar1;
      }
      else {
        sVar3 = -0x800;
      }
    }
    else {
      iVar1 = sVar3 * iVar7 + uVar6;
      sVar3 = 0x7ff;
      if (iVar1 < 0x800) {
        sVar3 = (short)iVar1;
      }
    }
    psVar4[4] = sVar3;
    sVar3 = *(short *)((longlong)psVar4 + lVar2 + 10);
    if (sVar3 == 0) {
      sVar3 = 0;
    }
    else if (sVar3 < 0) {
      iVar1 = uVar6 - sVar3 * iVar7;
      if (iVar1 < 0x801) {
        sVar3 = -(short)iVar1;
      }
      else {
        sVar3 = -0x800;
      }
    }
    else {
      iVar1 = sVar3 * iVar7 + uVar6;
      sVar3 = 0x7ff;
      if (iVar1 < 0x800) {
        sVar3 = (short)iVar1;
      }
    }
    psVar4[5] = sVar3;
    sVar3 = *(short *)((longlong)psVar4 + lVar2 + 0xc);
    if (sVar3 == 0) {
      sVar3 = 0;
    }
    else if (sVar3 < 0) {
      iVar1 = uVar6 - sVar3 * iVar7;
      if (iVar1 < 0x801) {
        sVar3 = -(short)iVar1;
      }
      else {
        sVar3 = -0x800;
      }
    }
    else {
      iVar1 = sVar3 * iVar7 + uVar6;
      sVar3 = 0x7ff;
      if (iVar1 < 0x800) {
        sVar3 = (short)iVar1;
      }
    }
    psVar4[6] = sVar3;
    sVar3 = *(short *)((longlong)psVar4 + lVar2 + 0xe);
    if (sVar3 == 0) {
      sVar3 = 0;
    }
    else if (sVar3 < 0) {
      iVar1 = uVar6 - sVar3 * iVar7;
      if (iVar1 < 0x801) {
        sVar3 = -(short)iVar1;
      }
      else {
        sVar3 = -0x800;
      }
    }
    else {
      iVar1 = sVar3 * iVar7 + uVar6;
      sVar3 = 0x7ff;
      if (iVar1 < 0x800) {
        sVar3 = (short)iVar1;
      }
    }
    psVar4[7] = sVar3;
    psVar4 = psVar4 + 9;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}

// M4InvQuantType1Inter @ 148d0de30

void __cdecl
vdecmpeg4::M4InvQuantType1Inter(short *param_1,short *param_2,uchar param_3,uchar *param_4)

{
  short sVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  longlong lVar7;
  ushort uVar8;
  
  uVar8 = 0;
  lVar7 = 0x40;
  puVar6 = (ushort *)param_1;
  while( true ) {
    sVar1 = *(short *)((longlong)puVar6 + ((longlong)param_2 - (longlong)param_1));
    if (sVar1 == 0) {
      uVar4 = 0;
    }
    else if (sVar1 < 0) {
      iVar5 = (int)((sVar1 * -2 + 1) * (uint)*param_4 * (uint)param_3) >> 4;
      if (iVar5 < 0x801) {
        uVar4 = -(short)iVar5;
      }
      else {
        uVar4 = 0xf800;
      }
    }
    else {
      uVar4 = 0x7ff;
      iVar5 = (int)((sVar1 * 2 + 1) * (uint)*param_4 * (uint)param_3) >> 4;
      if (iVar5 < 0x800) {
        uVar4 = (ushort)iVar5;
      }
    }
    *puVar6 = uVar4;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false && \"check type cast\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4VlcDecoder.cpp"
                       ,0x56,L"");
    if (bVar3) break;
    param_4 = param_4 + 1;
    uVar8 = uVar8 ^ *puVar6;
    puVar6 = puVar6 + 1;
    lVar7 = lVar7 + -1;
    if (lVar7 == 0) {
      if ((uVar8 & 1) == 0) {
        param_1[0x3f] = param_1[0x3f] ^ 1;
      }
      return;
    }
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// M4InvQuantType1Intra @ 148d0df40

void __cdecl
vdecmpeg4::M4InvQuantType1Intra
          (short *param_1,short *param_2,uchar param_3,ushort param_4,uchar *param_5)

{
  int iVar1;
  longlong lVar2;
  short *psVar3;
  short sVar4;
  byte *pbVar5;
  uint uVar6;
  longlong lVar7;
  
  sVar4 = *param_2 * param_4;
  *param_1 = sVar4;
  if (sVar4 < -0x800) {
    *param_1 = -0x800;
  }
  else if (0x7ff < sVar4) {
    *param_1 = 0x7ff;
  }
  lVar7 = (longlong)param_2 - (longlong)param_1;
  pbVar5 = param_5 + 3;
  psVar3 = param_1 + 2;
  lVar2 = 9;
  do {
    sVar4 = *(short *)(lVar7 + -2 + (longlong)psVar3);
    uVar6 = (uint)param_3;
    if (sVar4 == 0) {
      sVar4 = 0;
    }
    else {
      iVar1 = (uint)pbVar5[-2] * (int)sVar4 * uVar6;
      if (sVar4 < 0) {
        iVar1 = -iVar1 >> 3;
        if (iVar1 < 0x801) {
          sVar4 = -(short)iVar1;
        }
        else {
          sVar4 = -0x800;
        }
      }
      else {
        iVar1 = iVar1 >> 3;
        sVar4 = 0x7ff;
        if (iVar1 < 0x800) {
          sVar4 = (short)iVar1;
        }
      }
    }
    psVar3[-1] = sVar4;
    sVar4 = *(short *)((longlong)psVar3 + lVar7);
    if (sVar4 == 0) {
      sVar4 = 0;
    }
    else {
      iVar1 = (uint)pbVar5[-1] * (int)sVar4 * uVar6;
      if (sVar4 < 0) {
        iVar1 = -iVar1 >> 3;
        if (iVar1 < 0x801) {
          sVar4 = -(short)iVar1;
        }
        else {
          sVar4 = -0x800;
        }
      }
      else {
        iVar1 = iVar1 >> 3;
        sVar4 = 0x7ff;
        if (iVar1 < 0x800) {
          sVar4 = (short)iVar1;
        }
      }
    }
    *psVar3 = sVar4;
    sVar4 = *(short *)(lVar7 + 2 + (longlong)psVar3);
    if (sVar4 == 0) {
      sVar4 = 0;
    }
    else {
      iVar1 = (uint)*pbVar5 * (int)sVar4 * uVar6;
      if (sVar4 < 0) {
        iVar1 = -iVar1 >> 3;
        if (iVar1 < 0x801) {
          sVar4 = -(short)iVar1;
        }
        else {
          sVar4 = -0x800;
        }
      }
      else {
        iVar1 = iVar1 >> 3;
        sVar4 = 0x7ff;
        if (iVar1 < 0x800) {
          sVar4 = (short)iVar1;
        }
      }
    }
    psVar3[1] = sVar4;
    sVar4 = *(short *)(lVar7 + 4 + (longlong)psVar3);
    if (sVar4 == 0) {
      sVar4 = 0;
    }
    else {
      iVar1 = (uint)pbVar5[1] * (int)sVar4 * uVar6;
      if (sVar4 < 0) {
        iVar1 = -iVar1 >> 3;
        if (iVar1 < 0x801) {
          sVar4 = -(short)iVar1;
        }
        else {
          sVar4 = -0x800;
        }
      }
      else {
        iVar1 = iVar1 >> 3;
        sVar4 = 0x7ff;
        if (iVar1 < 0x800) {
          sVar4 = (short)iVar1;
        }
      }
    }
    psVar3[2] = sVar4;
    sVar4 = *(short *)(lVar7 + 6 + (longlong)psVar3);
    if (sVar4 == 0) {
      sVar4 = 0;
    }
    else {
      iVar1 = (uint)pbVar5[2] * (int)sVar4 * uVar6;
      if (sVar4 < 0) {
        iVar1 = -iVar1 >> 3;
        if (iVar1 < 0x801) {
          sVar4 = -(short)iVar1;
        }
        else {
          sVar4 = -0x800;
        }
      }
      else {
        iVar1 = iVar1 >> 3;
        sVar4 = 0x7ff;
        if (iVar1 < 0x800) {
          sVar4 = (short)iVar1;
        }
      }
    }
    psVar3[3] = sVar4;
    sVar4 = *(short *)(lVar7 + 8 + (longlong)psVar3);
    if (sVar4 == 0) {
      sVar4 = 0;
    }
    else {
      iVar1 = (uint)pbVar5[3] * (int)sVar4 * uVar6;
      if (sVar4 < 0) {
        iVar1 = -iVar1 >> 3;
        if (iVar1 < 0x801) {
          sVar4 = -(short)iVar1;
        }
        else {
          sVar4 = -0x800;
        }
      }
      else {
        iVar1 = iVar1 >> 3;
        sVar4 = 0x7ff;
        if (iVar1 < 0x800) {
          sVar4 = (short)iVar1;
        }
      }
    }
    psVar3[4] = sVar4;
    sVar4 = *(short *)(lVar7 + 10 + (longlong)psVar3);
    if (sVar4 == 0) {
      sVar4 = 0;
    }
    else {
      iVar1 = (uint)pbVar5[4] * (int)sVar4 * uVar6;
      if (sVar4 < 0) {
        iVar1 = -iVar1 >> 3;
        if (iVar1 < 0x801) {
          sVar4 = -(short)iVar1;
        }
        else {
          sVar4 = -0x800;
        }
      }
      else {
        iVar1 = iVar1 >> 3;
        sVar4 = 0x7ff;
        if (iVar1 < 0x800) {
          sVar4 = (short)iVar1;
        }
      }
    }
    psVar3[5] = sVar4;
    pbVar5 = pbVar5 + 7;
    psVar3 = psVar3 + 7;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

// M4MemHalfPelInterpolate @ 148d0e1e0

void __cdecl
vdecmpeg4::M4MemHalfPelInterpolate
          (void *param_1,void *param_2,int param_3,int param_4,int param_5,void *param_6,
          uint param_7,bool param_8)

{
  byte *pbVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  longlong lVar10;
  byte *pbVar11;
  uchar *puVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  longlong local_res8;
  
  lVar10 = (longlong)param_3;
  if ((((ulonglong)param_1 & 3) != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("((size_t)dst & 3) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4MemOps_Generic.cpp"
                         ,0x357,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar3 = *(uint *)param_6;
  uVar4 = *(uint *)((longlong)param_6 + 4);
  puVar12 = (uchar *)((longlong)(param_3 * param_5 + param_4) + (longlong)param_1);
  iVar14 = (uVar4 & 1) + (uVar3 & 1) * 2;
  if (iVar14 == 0) {
    puVar8 = (undefined8 *)
             ((longlong)((int)uVar3 / 2 + (param_5 + (int)uVar4 / 2) * param_3 + param_4) +
             (longlong)param_2);
    if (!param_8) {
      iVar14 = 8;
      do {
        uVar5 = *puVar8;
        puVar8 = (undefined8 *)((longlong)puVar8 + lVar10);
        *(undefined8 *)puVar12 = uVar5;
        puVar12 = puVar12 + lVar10;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
      return;
    }
    iVar14 = 0x10;
    do {
      *(undefined8 *)puVar12 = *puVar8;
      puVar2 = puVar8 + 1;
      puVar8 = (undefined8 *)((longlong)puVar8 + lVar10);
      *(undefined8 *)(puVar12 + 8) = *puVar2;
      puVar12 = puVar12 + lVar10;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    return;
  }
  if (iVar14 == 1) {
    pbVar9 = (byte *)((longlong)
                      ((int)uVar3 / 2 + (param_5 + (int)(uVar4 - 1) / 2) * param_3 + param_4) +
                     (longlong)param_2);
    if (param_8) {
      param_6 = &DAT_00000010;
      do {
        lVar13 = 0x10;
        pbVar11 = pbVar9;
        do {
          iVar14 = (uint)*pbVar11 + (uint)pbVar11[lVar10] + (1 - param_7);
          if ((0x1ff < iVar14) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("sum <= 255",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4MemOps_Generic.cpp"
                                 ,0x2de,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pbVar11[(longlong)puVar12 - (longlong)pbVar9] = (byte)(iVar14 / 2);
          pbVar11 = pbVar11 + 1;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        pbVar9 = pbVar9 + lVar10;
        puVar12 = puVar12 + lVar10;
        param_6 = (void *)((longlong)param_6 + -1);
      } while (param_6 != (void *)0x0);
    }
    else {
      _mbInterpolateVertical8x8(puVar12,pbVar9,1 - param_7,param_3);
    }
  }
  else if (iVar14 == 2) {
    pbVar9 = (byte *)((longlong)
                      ((int)(uVar3 - 1) / 2 + (param_5 + (int)uVar4 / 2) * param_3 + param_4) +
                     (longlong)param_2);
    iVar14 = 1 - param_7;
    if (param_8) {
      local_res8 = 0x10;
      do {
        lVar13 = 0x10;
        pbVar11 = pbVar9;
        do {
          iVar15 = (uint)*pbVar11 + (uint)pbVar11[1] + iVar14;
          if ((0x1ff < iVar15) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("sum <= 255",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4MemOps_Generic.cpp"
                                 ,0x286,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pbVar11[(longlong)puVar12 - (longlong)pbVar9] = (byte)(iVar15 / 2);
          pbVar11 = pbVar11 + 1;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        puVar12 = puVar12 + lVar10;
        pbVar9 = pbVar9 + lVar10;
        local_res8 = local_res8 + -1;
      } while (local_res8 != 0);
    }
    else {
      lVar13 = 8;
      do {
        *puVar12 = (uchar)((int)((uint)pbVar9[1] + (uint)*pbVar9 + iVar14) / 2);
        puVar12[1] = (uchar)((int)((uint)pbVar9[1] + (uint)pbVar9[2] + iVar14) / 2);
        puVar12[2] = (uchar)((int)((uint)pbVar9[3] + (uint)pbVar9[2] + iVar14) / 2);
        puVar12[3] = (uchar)((int)((uint)pbVar9[3] + (uint)pbVar9[4] + iVar14) / 2);
        puVar12[4] = (uchar)((int)((uint)pbVar9[5] + (uint)pbVar9[4] + iVar14) / 2);
        puVar12[5] = (uchar)((int)((uint)pbVar9[6] + (uint)pbVar9[5] + iVar14) / 2);
        puVar12[6] = (uchar)((int)((uint)pbVar9[7] + (uint)pbVar9[6] + iVar14) / 2);
        pbVar11 = pbVar9 + 8;
        pbVar1 = pbVar9 + 7;
        pbVar9 = pbVar9 + lVar10;
        puVar12[7] = (uchar)((int)((uint)*pbVar1 + (uint)*pbVar11 + iVar14) / 2);
        puVar12 = puVar12 + lVar10;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
  }
  else {
    pbVar9 = (byte *)((longlong)
                      ((int)(uVar3 - 1) / 2 + (param_5 + (int)(uVar4 - 1) / 2) * param_3 + param_4)
                     + (longlong)param_2);
    if (param_8) {
      local_res8 = 0x10;
      do {
        lVar13 = 0x10;
        pbVar11 = pbVar9 + lVar10;
        do {
          iVar14 = (uint)*pbVar11 +
                   (uint)pbVar11[1] + (2 - param_7) +
                   (uint)pbVar11[-lVar10] + (uint)pbVar11[1 - lVar10];
          if ((0x3ff < iVar14) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("sum <= 255",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4MemOps_Generic.cpp"
                                 ,0x34a,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pbVar11[(longlong)(puVar12 + (-lVar10 - (longlong)pbVar9))] =
               (byte)((int)(iVar14 + (iVar14 >> 0x1f & 3U)) >> 2);
          pbVar11 = pbVar11 + 1;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        puVar12 = puVar12 + lVar10;
        local_res8 = local_res8 + -1;
        pbVar9 = pbVar9 + lVar10;
      } while (local_res8 != 0);
    }
    else {
      _mbInterpolateBoth8x8(puVar12,pbVar9,2 - param_7,param_3);
    }
  }
  return;
}

// M4MemOpInterMBAdd @ 148d0e6d0

void __cdecl
vdecmpeg4::M4MemOpInterMBAdd(void *param_1,int param_2,int param_3,void *param_4,uint param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  uchar *puVar6;
  
  iVar5 = (int)*(short *)((longlong)param_1 + 0xc);
  lVar1 = *(longlong *)((longlong)param_1 + 0x18);
  lVar2 = *(longlong *)((longlong)param_1 + 0x20);
  iVar3 = iVar5 / 2;
  puVar6 = (uchar *)((longlong)(param_3 * 0x10 * iVar5) + (longlong)(param_2 << 4) +
                    *(longlong *)((longlong)param_1 + 0x10));
  lVar4 = (longlong)(param_3 * 8 * iVar3);
  if (((byte)param_5 & 0x3c) == 0x3c) {
    _memTrans16to8AddYx4(puVar6,param_4,iVar5);
  }
  else {
    if ((param_5 & 0x20) != 0) {
      _memTrans16to8AddY(puVar6,param_4,iVar5);
    }
    if ((param_5 & 0x10) != 0) {
      _memTrans16to8AddY(puVar6 + 8,(short *)((longlong)param_4 + 0x80),iVar5);
    }
    if ((param_5 & 8) != 0) {
      _memTrans16to8AddY(puVar6 + iVar5 * 8,(short *)((longlong)param_4 + 0x100),iVar5);
    }
    if ((param_5 & 4) != 0) {
      _memTrans16to8AddY(puVar6 + (longlong)(iVar5 * 8) + 8,(short *)((longlong)param_4 + 0x180),
                         iVar5);
    }
  }
  if ((param_5 & 2) != 0) {
    _memTrans16to8AddY((uchar *)(lVar1 + lVar4 + (longlong)(param_2 * 8)),
                       (short *)((longlong)param_4 + 0x200),iVar3);
  }
  if ((param_5 & 1) != 0) {
    _memTrans16to8AddY((uchar *)(lVar2 + lVar4 + (longlong)(param_2 * 8)),
                       (short *)((longlong)param_4 + 0x280),iVar3);
  }
  return;
}

// M4MemOpInterMBCopyAll @ 148d0e830

void __cdecl vdecmpeg4::M4MemOpInterMBCopyAll(void *param_1,int param_2,int param_3,void *param_4)

{
  undefined8 *puVar1;
  short sVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  
  sVar2 = *(short *)((longlong)param_1 + 0xc);
  lVar6 = (longlong)((sVar2 * param_3 + param_2) * 0x10);
  puVar7 = (undefined8 *)(*(longlong *)((longlong)param_4 + 0x10) + lVar6);
  puVar4 = (undefined8 *)(*(longlong *)((longlong)param_1 + 0x10) + lVar6);
  iVar5 = 0x10;
  do {
    *puVar4 = *puVar7;
    puVar1 = puVar7 + 1;
    puVar7 = (undefined8 *)((longlong)puVar7 + (longlong)sVar2);
    puVar4[1] = *puVar1;
    puVar4 = (undefined8 *)((longlong)puVar4 + (longlong)sVar2);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  iVar8 = 8;
  lVar9 = (longlong)((sVar2 * param_3 + param_2 * 2) * 4);
  iVar5 = 8;
  puVar4 = (undefined8 *)(*(longlong *)((longlong)param_4 + 0x18) + lVar9);
  puVar7 = (undefined8 *)(*(longlong *)((longlong)param_1 + 0x18) + lVar9);
  lVar6 = (longlong)((int)sVar2 >> 1);
  do {
    uVar3 = *puVar4;
    puVar4 = (undefined8 *)((longlong)puVar4 + lVar6);
    *puVar7 = uVar3;
    puVar7 = (undefined8 *)((longlong)puVar7 + lVar6);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  puVar4 = (undefined8 *)(*(longlong *)((longlong)param_4 + 0x20) + lVar9);
  puVar7 = (undefined8 *)(*(longlong *)((longlong)param_1 + 0x20) + lVar9);
  do {
    uVar3 = *puVar4;
    puVar4 = (undefined8 *)((longlong)puVar4 + lVar6);
    *puVar7 = uVar3;
    puVar7 = (undefined8 *)((longlong)puVar7 + lVar6);
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  return;
}

// M4MemOpInterpolateAll @ 148d0e900

void __cdecl vdecmpeg4::M4MemOpInterpolateAll(void *param_1,int param_2,int param_3,void *param_4)

{
  int extraout_EAX;
  longlong lVar1;
  int iVar2;
  
  iVar2 = (int)*(short *)((longlong)param_1 + 0xc);
  lVar1 = (longlong)(param_3 * 0x10 * iVar2 + param_2 * 0x10);
  _mbBlendSrcDst16x16((uchar *)(*(longlong *)((longlong)param_1 + 0x10) + lVar1),
                      (uchar *)(*(longlong *)((longlong)param_4 + 0x10) + lVar1),iVar2);
  _interpolate8x8Simple
            (*(uchar **)((longlong)param_1 + 0x18),*(uchar **)((longlong)param_4 + 0x18),param_2 * 8
             ,param_3 * 8,extraout_EAX);
  _interpolate8x8Simple
            (*(uchar **)((longlong)param_1 + 0x20),*(uchar **)((longlong)param_4 + 0x20),param_2 * 8
             ,param_3 * 8,iVar2 / 2);
  return;
}

// M4MemOpIntraMBAll @ 148d0e9c0

void __cdecl vdecmpeg4::M4MemOpIntraMBAll(void *param_1,int param_2,int param_3,void *param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  iVar3 = (int)*(short *)((longlong)param_1 + 0xc);
  lVar1 = *(longlong *)((longlong)param_1 + 0x18);
  lVar2 = *(longlong *)((longlong)param_1 + 0x20);
  iVar5 = iVar3 >> 1;
  lVar4 = (longlong)(param_3 * 8 * iVar5);
  _memTrans16to8Yx4((uchar *)((longlong)(param_3 * 0x10 * iVar3) + (longlong)(param_2 << 4) +
                             *(longlong *)((longlong)param_1 + 0x10)),param_4,iVar3);
  _memTrans16to8Y((uchar *)(lVar1 + lVar4 + (longlong)(param_2 * 8)),
                  (short *)((longlong)param_4 + 0x200),iVar5);
  _memTrans16to8Y((uchar *)(lVar2 + lVar4 + (longlong)(param_2 * 8)),
                  (short *)((longlong)param_4 + 0x280),iVar5);
  return;
}

// M4PredictionAdd @ 148d0ea80

void __cdecl
vdecmpeg4::M4PredictionAdd(M4_MB *param_1,short *param_2,uint param_3,ushort param_4,short *param_5)

{
  short sVar1;
  short sVar2;
  
  *param_2 = *param_2 + *param_5;
  param_1->mPredictedValues[param_3][0] = *param_2 * param_4;
  if (param_1->mACPredDirections[param_3] == '\x01') {
    param_2[1] = param_2[1] + param_5[1];
    param_1->mPredictedValues[param_3][1] = param_2[1];
    param_1->mPredictedValues[param_3][8] = param_2[8];
    param_2[2] = param_2[2] + param_5[2];
    param_1->mPredictedValues[param_3][2] = param_2[2];
    param_1->mPredictedValues[param_3][9] = param_2[0x10];
    param_2[3] = param_2[3] + param_5[3];
    param_1->mPredictedValues[param_3][3] = param_2[3];
    param_1->mPredictedValues[param_3][10] = param_2[0x18];
    param_2[4] = param_2[4] + param_5[4];
    param_1->mPredictedValues[param_3][4] = param_2[4];
    param_1->mPredictedValues[param_3][0xb] = param_2[0x20];
    param_2[5] = param_2[5] + param_5[5];
    param_1->mPredictedValues[param_3][5] = param_2[5];
    param_1->mPredictedValues[param_3][0xc] = param_2[0x28];
    param_2[6] = param_2[6] + param_5[6];
    param_1->mPredictedValues[param_3][6] = param_2[6];
    param_1->mPredictedValues[param_3][0xd] = param_2[0x30];
    param_2[7] = param_2[7] + param_5[7];
  }
  else {
    if (param_1->mACPredDirections[param_3] == '\x02') {
      sVar1 = param_5[1];
      sVar2 = param_2[8];
      param_2[8] = sVar1 + sVar2;
      param_1->mPredictedValues[param_3][8] = sVar1 + sVar2;
      param_1->mPredictedValues[param_3][1] = param_2[1];
      param_2[0x10] = param_2[0x10] + param_5[2];
      param_1->mPredictedValues[param_3][9] = param_2[0x10];
      param_1->mPredictedValues[param_3][2] = param_2[2];
      param_2[0x18] = param_2[0x18] + param_5[3];
      param_1->mPredictedValues[param_3][10] = param_2[0x18];
      param_1->mPredictedValues[param_3][3] = param_2[3];
      param_2[0x20] = param_2[0x20] + param_5[4];
      param_1->mPredictedValues[param_3][0xb] = param_2[0x20];
      param_1->mPredictedValues[param_3][4] = param_2[4];
      param_2[0x28] = param_2[0x28] + param_5[5];
      param_1->mPredictedValues[param_3][0xc] = param_2[0x28];
      param_1->mPredictedValues[param_3][5] = param_2[5];
      param_2[0x30] = param_2[0x30] + param_5[6];
      param_1->mPredictedValues[param_3][0xd] = param_2[0x30];
      param_1->mPredictedValues[param_3][6] = param_2[6];
      param_2[0x38] = param_2[0x38] + param_5[7];
      param_1->mPredictedValues[param_3][0xe] = param_2[0x38];
      param_1->mPredictedValues[param_3][7] = param_2[7];
      return;
    }
    param_1->mPredictedValues[param_3][1] = param_2[1];
    param_1->mPredictedValues[param_3][8] = param_2[8];
    param_1->mPredictedValues[param_3][2] = param_2[2];
    param_1->mPredictedValues[param_3][9] = param_2[0x10];
    param_1->mPredictedValues[param_3][3] = param_2[3];
    param_1->mPredictedValues[param_3][10] = param_2[0x18];
    param_1->mPredictedValues[param_3][4] = param_2[4];
    param_1->mPredictedValues[param_3][0xb] = param_2[0x20];
    param_1->mPredictedValues[param_3][5] = param_2[5];
    param_1->mPredictedValues[param_3][0xc] = param_2[0x28];
    param_1->mPredictedValues[param_3][6] = param_2[6];
    param_1->mPredictedValues[param_3][0xd] = param_2[0x30];
  }
  param_1->mPredictedValues[param_3][7] = param_2[7];
  param_1->mPredictedValues[param_3][0xe] = param_2[0x38];
  return;
}

// M4PredictionInit @ 148d0ecb0

void __cdecl
vdecmpeg4::M4PredictionInit
          (M4_MB *param_1,int param_2,int param_3,int param_4,uint param_5,uchar param_6,
          ushort param_7,short *param_8)

{
  short sVar1;
  short sVar2;
  int iVar3;
  byte bVar4;
  short (*pasVar5) [15];
  uint uVar6;
  uint uVar7;
  short *psVar8;
  int iVar9;
  short (*pasVar10) [15];
  int iVar11;
  int iVar12;
  short (*pasVar13) [15];
  short sVar14;
  short (*pasVar15) [15];
  short *psVar17;
  uint uVar18;
  short *psVar19;
  short (*pasVar20) [15];
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  short (*pasVar16) [15];
  
  uVar6 = (uint)param_6;
  psVar8 = defaultACDCValues;
  pasVar16 = (short (*) [15])0x0;
  pasVar15 = (short (*) [15])0x0;
  uVar7 = (uint)param_6;
  psVar17 = defaultACDCValues;
  psVar19 = defaultACDCValues;
  sVar1 = 0;
  iVar11 = param_4 * param_3 + param_2;
  pasVar5 = pasVar16;
  uVar21 = uVar7;
  if (param_2 != 0) {
    bVar4 = param_1[(longlong)iVar11 + -1].mMode;
    if ((bVar4 == 3) || (pasVar5 = (short (*) [15])0x0, bVar4 == 4)) {
      pasVar5 = param_1[(longlong)iVar11 + -1].mPredictedValues;
      uVar21 = param_1[(longlong)iVar11 + -1].mQuant;
    }
  }
  pasVar10 = pasVar16;
  if (param_3 != 0) {
    iVar3 = iVar11 - param_4;
    bVar4 = param_1[iVar3].mMode;
    if ((bVar4 == 3) || (bVar4 == 4)) {
      pasVar10 = param_1[iVar3].mPredictedValues;
      uVar7 = param_1[iVar3].mQuant;
    }
  }
  pasVar20 = pasVar16;
  if ((param_2 != 0) && (pasVar20 = (short (*) [15])0x0, param_3 != 0)) {
    bVar4 = param_1[(longlong)(iVar11 - param_4) + -1].mMode;
    if ((bVar4 == 3) || (bVar4 == 4)) {
      pasVar20 = param_1[(longlong)(iVar11 - param_4) + -1].mPredictedValues;
    }
  }
  pasVar13 = param_1[iVar11].mPredictedValues;
  switch(param_5) {
  case 0:
    if (pasVar5 != (short (*) [15])0x0) {
      psVar8 = pasVar5[1];
    }
    if (pasVar10 != (short (*) [15])0x0) {
      psVar17 = pasVar10[2];
    }
    if (pasVar20 != (short (*) [15])0x0) {
      psVar19 = pasVar20[3];
    }
    break;
  case 1:
    psVar8 = *pasVar13;
    uVar21 = uVar6;
    if (pasVar10 != (short (*) [15])0x0) {
      psVar19 = pasVar10[2];
      psVar17 = pasVar10[3];
    }
    break;
  case 2:
    psVar17 = *pasVar13;
    uVar7 = uVar6;
    if (pasVar5 != (short (*) [15])0x0) {
      psVar8 = pasVar5[3];
      psVar19 = pasVar5[1];
    }
    break;
  case 3:
    psVar8 = pasVar13[2];
    psVar17 = pasVar13[1];
    psVar19 = *pasVar13;
    uVar21 = uVar6;
    uVar7 = uVar6;
    break;
  case 4:
    if (pasVar5 != (short (*) [15])0x0) {
      psVar8 = pasVar5[4];
    }
    if (pasVar10 != (short (*) [15])0x0) {
      psVar17 = pasVar10[4];
    }
    if (pasVar20 != (short (*) [15])0x0) {
      psVar19 = pasVar20[4];
    }
    break;
  case 5:
    if (pasVar5 != (short (*) [15])0x0) {
      psVar8 = pasVar5[5];
    }
    if (pasVar10 != (short (*) [15])0x0) {
      psVar17 = pasVar10[5];
    }
    if (pasVar20 != (short (*) [15])0x0) {
      psVar19 = pasVar20[5];
    }
  }
  iVar12 = (int)(*(short (*) [15])psVar19)[0];
  iVar9 = (*(short (*) [15])psVar8)[0] - iVar12;
  iVar3 = iVar12 - (*(short (*) [15])psVar17)[0];
  uVar18 = (uint)(param_7 >> 1);
  if (iVar3 < 1) {
    iVar3 = (*(short (*) [15])psVar17)[0] - iVar12;
  }
  if (iVar9 < 1) {
    iVar9 = iVar12 - (*(short (*) [15])psVar8)[0];
  }
  sVar14 = 0;
  if (iVar9 < iVar3) {
    param_1[iVar11].mACPredDirections[param_5] = '\x01';
    if ((*(short (*) [15])psVar17)[0] < 1) {
      uVar18 = -uVar18;
    }
    *param_8 = (short)((int)((int)(*(short (*) [15])psVar17)[0] + uVar18) / (int)(uint)param_7);
    fVar23 = (float)uVar6;
    sVar1 = sVar14;
    if ((*(short (*) [15])psVar17)[1] != 0) {
      iVar11 = (int)(*(short (*) [15])psVar17)[1] * uVar7;
      fVar22 = (float)iVar11;
      fVar24 = (float)(param_6 >> 1);
      if (iVar11 < 1) {
        sVar1 = (short)(int)((fVar22 - fVar24) * (__real_3f800000 / fVar23));
      }
      else {
        sVar1 = (short)(int)((fVar22 + fVar24) * (__real_3f800000 / fVar23));
      }
    }
    param_8[1] = sVar1;
    fVar22 = (float)(param_6 >> 1);
    sVar1 = sVar14;
    if ((*(short (*) [15])psVar17)[2] != 0) {
      iVar11 = (int)(*(short (*) [15])psVar17)[2] * uVar7;
      fVar24 = (float)iVar11;
      if (iVar11 < 1) {
        sVar1 = (short)(int)((fVar24 - fVar22) / fVar23);
      }
      else {
        sVar1 = (short)(int)((fVar22 + fVar24) / fVar23);
      }
    }
    param_8[2] = sVar1;
    sVar1 = sVar14;
    if ((*(short (*) [15])psVar17)[3] != 0) {
      iVar11 = (int)(*(short (*) [15])psVar17)[3] * uVar7;
      fVar24 = (float)iVar11;
      if (iVar11 < 1) {
        sVar1 = (short)(int)((fVar24 - fVar22) / fVar23);
      }
      else {
        sVar1 = (short)(int)((fVar22 + fVar24) / fVar23);
      }
    }
    param_8[3] = sVar1;
    sVar1 = sVar14;
    if ((*(short (*) [15])psVar17)[4] != 0) {
      iVar11 = (int)(*(short (*) [15])psVar17)[4] * uVar7;
      fVar24 = (float)iVar11;
      if (iVar11 < 1) {
        sVar1 = (short)(int)((fVar24 - fVar22) / fVar23);
      }
      else {
        sVar1 = (short)(int)((fVar22 + fVar24) / fVar23);
      }
    }
    param_8[4] = sVar1;
    sVar1 = sVar14;
    if ((*(short (*) [15])psVar17)[5] != 0) {
      iVar11 = (int)(*(short (*) [15])psVar17)[5] * uVar7;
      fVar24 = (float)iVar11;
      if (iVar11 < 1) {
        sVar1 = (short)(int)((fVar24 - fVar22) / fVar23);
      }
      else {
        sVar1 = (short)(int)((fVar22 + fVar24) / fVar23);
      }
    }
    param_8[5] = sVar1;
    if ((*(short (*) [15])psVar17)[6] != 0) {
      iVar11 = (int)(*(short (*) [15])psVar17)[6] * uVar7;
      fVar24 = (float)iVar11;
      if (iVar11 < 1) {
        sVar14 = (short)(int)((fVar24 - fVar22) / fVar23);
      }
      else {
        sVar14 = (short)(int)((fVar22 + fVar24) / fVar23);
      }
    }
    param_8[6] = sVar14;
    pasVar15 = pasVar16;
    if ((*(short (*) [15])psVar17)[7] != 0) {
      iVar11 = (int)(*(short (*) [15])psVar17)[7] * uVar7;
      fVar24 = (float)iVar11;
      if (iVar11 < 1) {
        pasVar15 = (short (*) [15])(ulonglong)(uint)(int)((fVar24 - fVar22) / fVar23);
      }
      else {
        pasVar15 = (short (*) [15])(ulonglong)(uint)(int)((fVar22 + fVar24) / fVar23);
      }
    }
  }
  else {
    param_1[iVar11].mACPredDirections[param_5] = '\x02';
    if ((*(short (*) [15])psVar8)[0] < 1) {
      uVar18 = -uVar18;
    }
    fVar22 = (float)uVar6;
    *param_8 = (short)((int)((int)(*(short (*) [15])psVar8)[0] + uVar18) / (int)(uint)param_7);
    fVar23 = (float)(param_6 >> 1);
    sVar2 = sVar1;
    if ((*(short (*) [15])psVar8)[8] != 0) {
      iVar11 = (int)(*(short (*) [15])psVar8)[8] * uVar21;
      fVar24 = (float)iVar11;
      if (iVar11 < 1) {
        sVar2 = (short)(int)((fVar24 - fVar23) * (__real_3f800000 / fVar22));
      }
      else {
        sVar2 = (short)(int)((fVar24 + fVar23) * (__real_3f800000 / fVar22));
      }
    }
    param_8[1] = sVar2;
    if ((*(short (*) [15])psVar8)[9] != 0) {
      iVar11 = (int)(*(short (*) [15])psVar8)[9] * uVar21;
      fVar24 = (float)iVar11;
      if (iVar11 < 1) {
        sVar1 = (short)(int)((fVar24 - fVar23) / fVar22);
      }
      else {
        sVar1 = (short)(int)((fVar24 + fVar23) / fVar22);
      }
    }
    param_8[2] = sVar1;
    sVar1 = sVar14;
    if ((*(short (*) [15])psVar8)[10] != 0) {
      iVar11 = (int)(*(short (*) [15])psVar8)[10] * uVar21;
      fVar24 = (float)iVar11;
      if (iVar11 < 1) {
        sVar1 = (short)(int)((fVar24 - fVar23) / fVar22);
      }
      else {
        sVar1 = (short)(int)((fVar23 + fVar24) / fVar22);
      }
    }
    param_8[3] = sVar1;
    sVar1 = sVar14;
    if ((*(short (*) [15])psVar8)[0xb] != 0) {
      iVar11 = (int)(*(short (*) [15])psVar8)[0xb] * uVar21;
      fVar24 = (float)iVar11;
      if (iVar11 < 1) {
        sVar1 = (short)(int)((fVar24 - fVar23) / fVar22);
      }
      else {
        sVar1 = (short)(int)((fVar23 + fVar24) / fVar22);
      }
    }
    param_8[4] = sVar1;
    sVar1 = sVar14;
    if ((*(short (*) [15])psVar8)[0xc] != 0) {
      iVar11 = (int)(*(short (*) [15])psVar8)[0xc] * uVar21;
      fVar24 = (float)iVar11;
      if (iVar11 < 1) {
        sVar1 = (short)(int)((fVar24 - fVar23) / fVar22);
      }
      else {
        sVar1 = (short)(int)((fVar24 + fVar23) / fVar22);
      }
    }
    param_8[5] = sVar1;
    if ((*(short (*) [15])psVar8)[0xd] != 0) {
      iVar11 = (int)(*(short (*) [15])psVar8)[0xd] * uVar21;
      fVar24 = (float)iVar11;
      if (iVar11 < 1) {
        sVar14 = (short)(int)((fVar24 - fVar23) / fVar22);
      }
      else {
        sVar14 = (short)(int)((fVar24 + fVar23) / fVar22);
      }
    }
    param_8[6] = sVar14;
    if ((*(short (*) [15])psVar8)[0xe] != 0) {
      iVar11 = (int)(*(short (*) [15])psVar8)[0xe] * uVar21;
      fVar24 = (float)iVar11;
      if (iVar11 < 1) {
        fVar24 = fVar24 - fVar23;
      }
      else {
        fVar24 = fVar24 + fVar23;
      }
      pasVar15 = (short (*) [15])(ulonglong)(uint)(int)(fVar24 / fVar22);
    }
  }
  param_8[7] = (short)pasVar15;
  return;
}

// M4idct @ 148d0f2e0

void __cdecl vdecmpeg4::M4idct(short *param_1)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short *psVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int local_res10;
  
  local_res10 = 0x38;
  psVar7 = param_1 + 0x32;
  iVar18 = 7;
  do {
    sVar8 = param_1[(longlong)local_res10 + 7];
    psVar1 = param_1 + local_res10;
    sVar2 = psVar1[6];
    sVar3 = psVar1[5];
    iVar16 = (int)psVar1[3];
    iVar12 = (int)psVar1[2];
    iVar9 = (int)psVar1[1];
    iVar15 = psVar1[4] * 0x800;
    if ((((((sVar8 == 0 && sVar2 == 0) && sVar3 == 0) && iVar15 == 0) && iVar16 == 0) && iVar12 == 0
        ) && iVar9 == 0) {
      sVar8 = *psVar1 << 3;
      psVar1[7] = sVar8;
      psVar1[6] = sVar8;
      psVar1[5] = sVar8;
      psVar1[4] = sVar8;
      psVar1[3] = sVar8;
      psVar1[2] = sVar8;
      psVar1[1] = sVar8;
      *psVar1 = sVar8;
    }
    else {
      iVar20 = (iVar9 + sVar8) * 0x235;
      iVar19 = *psVar1 * 0x800 + 0x80;
      iVar14 = iVar9 * 0x8e4 + iVar20;
      iVar20 = iVar20 + sVar8 * -0xd4e;
      iVar13 = (sVar2 + iVar12) * 0x454;
      iVar12 = iVar12 * 0x620 + iVar13;
      iVar13 = iVar13 + sVar2 * -0xec8;
      iVar11 = (sVar3 + iVar16) * 0x968;
      iVar10 = iVar11 + sVar3 * -799;
      iVar15 = iVar19 + iVar15;
      iVar19 = iVar19 + psVar1[4] * -0x800;
      iVar9 = iVar15 + iVar12;
      iVar15 = iVar15 - iVar12;
      iVar12 = iVar10 + iVar14;
      iVar14 = iVar14 - iVar10;
      iVar11 = iVar11 + iVar16 * -0xfb1;
      iVar16 = iVar19 + iVar13;
      iVar19 = iVar19 - iVar13;
      iVar13 = iVar11 + iVar20;
      iVar20 = iVar20 - iVar11;
      *psVar1 = (short)((uint)(iVar9 + iVar12) >> 8);
      iVar11 = (iVar20 + iVar14) * 0xb5 + 0x80 >> 8;
      iVar10 = (iVar14 - iVar20) * 0xb5 + 0x80 >> 8;
      psVar1[1] = (short)((uint)(iVar11 + iVar16) >> 8);
      psVar1[2] = (short)((uint)(iVar10 + iVar19) >> 8);
      psVar1[7] = (short)((uint)(iVar9 - iVar12) >> 8);
      psVar1[3] = (short)((uint)(iVar15 + iVar13) >> 8);
      psVar1[4] = (short)((uint)(iVar15 - iVar13) >> 8);
      psVar1[5] = (short)((uint)(iVar19 - iVar10) >> 8);
      psVar1[6] = (short)((uint)(iVar16 - iVar11) >> 8);
    }
    sVar8 = psVar7[5];
    sVar2 = psVar7[4];
    sVar3 = psVar7[3];
    iVar16 = (int)psVar7[1];
    iVar9 = (int)psVar7[-1];
    iVar12 = (int)*psVar7;
    iVar15 = psVar7[2] * 0x800;
    if ((((((sVar8 == 0 && sVar2 == 0) && sVar3 == 0) && iVar15 == 0) && iVar16 == 0) && iVar9 == 0)
        && iVar12 == 0) {
      sVar8 = psVar7[-2] << 3;
      psVar7[5] = sVar8;
      psVar7[4] = sVar8;
      psVar7[3] = sVar8;
      psVar7[2] = sVar8;
      psVar7[1] = sVar8;
      *psVar7 = sVar8;
      psVar7[-1] = sVar8;
      psVar7[-2] = sVar8;
    }
    else {
      iVar20 = (sVar8 + iVar9) * 0x235;
      iVar19 = psVar7[-2] * 0x800 + 0x80;
      iVar14 = iVar9 * 0x8e4 + iVar20;
      iVar20 = iVar20 + sVar8 * -0xd4e;
      iVar13 = (sVar2 + iVar12) * 0x454;
      iVar12 = iVar12 * 0x620 + iVar13;
      iVar13 = iVar13 + sVar2 * -0xec8;
      iVar11 = (sVar3 + iVar16) * 0x968;
      iVar10 = iVar11 + sVar3 * -799;
      iVar15 = iVar19 + iVar15;
      iVar19 = iVar19 + psVar7[2] * -0x800;
      iVar9 = iVar15 + iVar12;
      iVar15 = iVar15 - iVar12;
      iVar12 = iVar10 + iVar14;
      iVar14 = iVar14 - iVar10;
      iVar11 = iVar11 + iVar16 * -0xfb1;
      iVar16 = iVar19 + iVar13;
      iVar19 = iVar19 - iVar13;
      iVar13 = iVar11 + iVar20;
      iVar20 = iVar20 - iVar11;
      psVar7[-2] = (short)((uint)(iVar9 + iVar12) >> 8);
      iVar11 = (iVar20 + iVar14) * 0xb5 + 0x80 >> 8;
      iVar10 = (iVar14 - iVar20) * 0xb5 + 0x80 >> 8;
      psVar7[-1] = (short)((uint)(iVar11 + iVar16) >> 8);
      *psVar7 = (short)((uint)(iVar10 + iVar19) >> 8);
      psVar7[1] = (short)((uint)(iVar15 + iVar13) >> 8);
      psVar7[2] = (short)((uint)(iVar15 - iVar13) >> 8);
      psVar7[3] = (short)((uint)(iVar19 - iVar10) >> 8);
      psVar7[4] = (short)((uint)(iVar16 - iVar11) >> 8);
      psVar7[5] = (short)((uint)(iVar9 - iVar12) >> 8);
    }
    psVar1 = iclp;
    psVar7 = psVar7 + -0x10;
    local_res10 = local_res10 + -0x10;
    iVar18 = iVar18 + -2;
  } while (-1 < iVar18);
  psVar7 = param_1 + 0x16;
  lVar17 = 4;
  do {
    sVar8 = psVar7[9];
    sVar2 = psVar7[0x19];
    sVar3 = psVar7[0x29];
    sVar4 = psVar7[-7];
    sVar5 = psVar7[1];
    sVar6 = psVar7[0x21];
    iVar18 = psVar7[0x11] * 0x100;
    if ((((((sVar8 == 0 && sVar2 == 0) && sVar3 == 0) && sVar4 == 0) && sVar5 == 0) && sVar6 == 0)
        && iVar18 == 0) {
      sVar8 = psVar1[(longlong)psVar7[-0xf] + 0x20 >> 6];
      psVar7[0x29] = sVar8;
      psVar7[0x21] = sVar8;
      psVar7[0x19] = sVar8;
      psVar7[0x11] = sVar8;
      psVar7[9] = sVar8;
      psVar7[1] = sVar8;
      psVar7[-7] = sVar8;
      psVar7[-0xf] = sVar8;
    }
    else {
      iVar20 = (psVar7[-0xf] + 0x20) * 0x100;
      iVar15 = ((int)sVar3 + (int)sVar4) * 0x235 + 4;
      iVar10 = sVar4 * 0x8e4 + iVar15 >> 3;
      iVar11 = iVar15 + sVar3 * -0xd4e >> 3;
      iVar12 = ((int)sVar2 + (int)sVar8) * 0x968 + 4;
      iVar9 = iVar12 + sVar2 * -799 >> 3;
      iVar15 = iVar9 + iVar10;
      iVar12 = iVar12 + sVar8 * -0xfb1 >> 3;
      iVar10 = iVar10 - iVar9;
      iVar9 = iVar12 + iVar11;
      iVar11 = iVar11 - iVar12;
      iVar12 = ((int)sVar6 + (int)sVar5) * 0x454 + 4;
      iVar13 = iVar12 + sVar6 * -0xec8 >> 3;
      iVar18 = iVar20 + iVar18;
      iVar20 = iVar20 + psVar7[0x11] * -0x100;
      iVar16 = sVar5 * 0x620 + iVar12 >> 3;
      iVar12 = iVar13 + iVar20;
      iVar20 = iVar20 - iVar13;
      iVar13 = iVar16 + iVar18;
      iVar18 = iVar18 - iVar16;
      psVar7[-0xf] = psVar1[(longlong)(iVar13 + iVar15) >> 0xe];
      iVar14 = (iVar11 + iVar10) * 0xb5 + 0x80 >> 8;
      iVar16 = (iVar10 - iVar11) * 0xb5 + 0x80 >> 8;
      psVar7[-7] = psVar1[(longlong)(iVar14 + iVar12) >> 0xe];
      psVar7[1] = psVar1[(longlong)(iVar16 + iVar20) >> 0xe];
      psVar7[9] = psVar1[(longlong)(iVar18 + iVar9) >> 0xe];
      psVar7[0x11] = psVar1[(longlong)(iVar18 - iVar9) >> 0xe];
      psVar7[0x19] = psVar1[(longlong)(iVar20 - iVar16) >> 0xe];
      psVar7[0x21] = psVar1[(longlong)(iVar12 - iVar14) >> 0xe];
      psVar7[0x29] = psVar1[(longlong)(iVar13 - iVar15) >> 0xe];
    }
    sVar8 = psVar7[8];
    sVar2 = psVar7[0x18];
    sVar3 = psVar7[0x28];
    sVar4 = psVar7[-8];
    sVar5 = psVar7[0x20];
    iVar15 = (int)*psVar7;
    iVar18 = psVar7[0x10] * 0x100;
    if ((((((sVar8 == 0 && sVar2 == 0) && sVar3 == 0) && sVar4 == 0) && sVar5 == 0) && iVar18 == 0)
        && iVar15 == 0) {
      sVar8 = psVar1[(longlong)psVar7[-0x10] + 0x20 >> 6];
      psVar7[0x28] = sVar8;
      psVar7[0x20] = sVar8;
      psVar7[0x18] = sVar8;
      psVar7[0x10] = sVar8;
      psVar7[8] = sVar8;
      *psVar7 = sVar8;
      psVar7[-8] = sVar8;
      psVar7[-0x10] = sVar8;
    }
    else {
      iVar20 = (psVar7[-0x10] + 0x20) * 0x100;
      iVar9 = ((int)sVar3 + (int)sVar4) * 0x235 + 4;
      iVar10 = sVar4 * 0x8e4 + iVar9 >> 3;
      iVar11 = iVar9 + sVar3 * -0xd4e >> 3;
      iVar16 = ((int)sVar2 + (int)sVar8) * 0x968 + 4;
      iVar12 = iVar16 + sVar2 * -799 >> 3;
      iVar9 = iVar12 + iVar10;
      iVar16 = iVar16 + sVar8 * -0xfb1 >> 3;
      iVar10 = iVar10 - iVar12;
      iVar12 = iVar16 + iVar11;
      iVar11 = iVar11 - iVar16;
      iVar16 = (sVar5 + iVar15) * 0x454 + 4;
      iVar13 = iVar16 + sVar5 * -0xec8 >> 3;
      iVar18 = iVar20 + iVar18;
      iVar20 = iVar20 + psVar7[0x10] * -0x100;
      iVar16 = iVar15 * 0x620 + iVar16 >> 3;
      iVar15 = iVar13 + iVar20;
      iVar20 = iVar20 - iVar13;
      iVar13 = iVar16 + iVar18;
      iVar18 = iVar18 - iVar16;
      psVar7[-0x10] = psVar1[(longlong)(iVar13 + iVar9) >> 0xe];
      iVar14 = (iVar11 + iVar10) * 0xb5 + 0x80 >> 8;
      iVar16 = (iVar10 - iVar11) * 0xb5 + 0x80 >> 8;
      psVar7[-8] = psVar1[(longlong)(iVar14 + iVar15) >> 0xe];
      *psVar7 = psVar1[(longlong)(iVar16 + iVar20) >> 0xe];
      psVar7[8] = psVar1[(longlong)(iVar18 + iVar12) >> 0xe];
      psVar7[0x10] = psVar1[(longlong)(iVar18 - iVar12) >> 0xe];
      psVar7[0x18] = psVar1[(longlong)(iVar20 - iVar16) >> 0xe];
      psVar7[0x20] = psVar1[(longlong)(iVar15 - iVar14) >> 0xe];
      psVar7[0x28] = psVar1[(longlong)(iVar13 - iVar9) >> 0xe];
    }
    psVar7 = psVar7 + -2;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  return;
}

// ReadStreamBuffered @ 148d108e0

int __thiscall vdecmpeg4::M4Bitstream::ReadStreamBuffered(M4Bitstream *this,uint *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (this->mInternalBufferCurrentBytes <= this->mInternalBufferIndex) {
    this->mInternalBufferIndex = 0;
    iVar3 = (**(code **)*this->mpStreamIO)
                      (this->mpStreamIO,this->mpInternalBuffer,this->mInternalBufferBytes,
                       &this->mInternalBufferCurrentBytes);
    if (iVar3 != 0) {
      *param_1 = 0;
      this->mInternalBufferCurrentBytes = 0;
      return (iVar3 != 1) + 0x8000f002;
    }
    if (((this->mInternalBufferCurrentBytes & 3) != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(mInternalBufferCurrentBytes & 0x3) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Bitstream.h"
                           ,0xdd,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    if ((this->mInternalBufferCurrentBytes == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("mInternalBufferCurrentBytes > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Bitstream.h"
                           ,0xdf,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  *param_1 = *(uint *)(this->mpInternalBuffer + this->mInternalBufferIndex);
  this->mInternalBufferIndex = this->mInternalBufferIndex + 4;
  return 0;
}

// RefRemove @ 148d10ac0

void __thiscall vdecmpeg4::M4Image::RefRemove(M4Image *this)

{
  M4Decoder *pMVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = this->mRefCount + -1;
  this->mRefCount = iVar4;
  if (iVar4 == 0) {
    pMVar1 = this->mDecoder;
    _scalar_deleting_destructor_(this,0);
    if ((pMVar1->mMemSys).mFreeCB == (_func___cdecl_void_void_ptr *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("mFreeCB",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Memory.h"
                         ,0x36,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (*(pMVar1->mMemSys).mFreeCB)(this);
  }
  return;
}

// Release @ 148d11a30

void __thiscall vdecmpeg4::VIDImage::Release(VIDImage *this)

{
  M4Image::RefRemove(this->_private);
  return;
}

// StreamDecode @ 148d15030

int __thiscall vdecmpeg4::M4Decoder::StreamDecode(M4Decoder *this,float param_1,VIDImage **param_2)

{
  VOLInfo *pVVar1;
  uint uVar2;
  VIDStreamEvents *pVVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  M4Image *pMVar7;
  M4PictureType local_res8 [2];
  
  if ((this->mpStreamIO == (VIDStreamIO *)0x0) && ((this->mBitstream).mStart == (uint *)0x0)) {
    return -0x7fff0fff;
  }
  pMVar7 = (M4Image *)0x0;
  *param_2 = (VIDImage *)0x0;
  if ((this->mpVidImage == (M4Image **)0x0) ||
     (pMVar7 = AllocVidFrame(this), pMVar7 != (M4Image *)0x0)) {
    do {
      do {
        iVar6 = M4BitstreamParser::parseMPEG4ES(&this->mBitstreamParser,local_res8);
      } while (iVar6 == -0x7fff0fdf);
      if (iVar6 != 0) {
        return iVar6;
      }
      if (local_res8[0] != M4PIC_VOL) {
        if (M4PIC_S_VOP < local_res8[0]) {
          return -0x7ffff000;
        }
        if ((pMVar7 == (M4Image *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("pFinishedImage",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Decoder.cpp"
                               ,0x1b5,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        this->mCurrent = pMVar7;
        (this->mXCommand).mpOutput = pMVar7;
        (this->mXCommand).mpHeaderInfo = &(this->mBitstreamParser).mHeaderInfo;
        (this->mXCommand).mpRefImage[0] = this->mReference[0];
        (this->mXCommand).mpRefImage[1] = this->mReference[1];
        if (local_res8[0] == M4PIC_P_VOP) {
          bVar5 = false;
        }
        else {
          if (local_res8[0] == M4PIC_I_VOP) {
            iVar6 = iFrame(this);
            goto LAB_148d15196;
          }
          if (local_res8[0] == M4PIC_B_VOP) {
            iVar6 = bFrame(this);
            goto LAB_148d15196;
          }
          bVar5 = true;
        }
        iVar6 = pFrame(this,bVar5);
LAB_148d15196:
        if (iVar6 != 0) {
          return iVar6;
        }
        pMVar7 = this->mCurrent;
        (pMVar7->mImageInfo).mFrameNumber = this->mFrameCounter;
        (this->mCurrent->mImage).time = (this->mBitstreamParser).mVopTime;
        if (local_res8[0] == M4PIC_B_VOP) {
          *param_2 = &this->mCurrent->mImage;
          this->mCurrent->mRefCount = this->mCurrent->mRefCount + 1;
        }
        else {
          *param_2 = &this->mReference[0]->mImage;
          this->mReference[0]->mRefCount = this->mReference[0]->mRefCount + 1;
          this->mCurrent->mRefCount = this->mCurrent->mRefCount + 1;
          M4Image::RefRemove(this->mReference[1]);
          this->mReference[1] = this->mReference[0];
          this->mReference[0] = this->mCurrent;
        }
        uVar2 = (this->mBitstream).mTotalBits;
        this->mFrameCounter = this->mFrameCounter + 1;
        this->mCurrent = (M4Image *)0x0;
        (pMVar7->mImageInfo).mFrameBytes = uVar2 >> 3;
        (pMVar7->mImageInfo).mMacroblockInfo = (this->mXCommand).mMacroblockInfo;
        pMVar7 = (*param_2)->_private;
        if ((pMVar7 == (M4Image *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("pReturnedImage",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Decoder.cpp"
                               ,0x1fc,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        if ((pMVar7->mImageInfo).mFrameType == VID_IMAGEINFO_FRAMETYPE_UNKNOWN) {
          M4Image::RefRemove(pMVar7);
          return -0x7fff0ffc;
        }
        return 0;
      }
      pVVar3 = this->mpStreamEvents;
      pVVar1 = &(this->mBitstreamParser).mVOLInfo;
      if (pVVar3 != (VIDStreamEvents *)0x0) {
        (**(code **)*pVVar3)(pVVar3,pVVar1);
      }
      iVar6 = initBuffers(this,pVVar1->mWidth,(this->mBitstreamParser).mVOLInfo.mHeight);
      if (iVar6 != 0) {
        return iVar6;
      }
      pMVar7 = AllocVidFrame(this);
    } while (pMVar7 != (M4Image *)0x0);
  }
  return -0x7fffefe0;
}

// StreamSeekNotify @ 148d152b0

int __thiscall vdecmpeg4::M4Decoder::StreamSeekNotify(M4Decoder *this)

{
  uint uVar1;
  
  if (this->mpStreamIO != (VIDStreamIO *)0x0) {
    M4Bitstream::init(&this->mBitstream,this->mpStreamIO,0x800);
  }
  M4BitstreamParser::reset(&this->mBitstreamParser);
  if (this->mpVidImage != (M4Image **)0x0) {
    uVar1 = 0;
    if (this->mNumVidImages != 0) {
      do {
        (this->mpVidImage[uVar1]->mImageInfo).mFrameType = VID_IMAGEINFO_FRAMETYPE_UNKNOWN;
        M4Image::Black(this->mpVidImage[uVar1]);
        uVar1 = uVar1 + 1;
      } while (uVar1 < this->mNumVidImages);
    }
    freeBuffers(this);
  }
  return 0;
}

// StreamSet @ 148d15360

int __thiscall
vdecmpeg4::M4Decoder::StreamSet(M4Decoder *this,VIDStreamIO *param_1,VIDStreamEvents *param_2)

{
  this->mpStreamIO = param_1;
  if (param_1 != (VIDStreamIO *)0x0) {
    M4Bitstream::init(&this->mBitstream,param_1,0x800);
    M4BitstreamParser::reset(&this->mBitstreamParser);
    this->mpStreamEvents = param_2;
    return 0;
  }
  this->mpStreamEvents = param_2;
  return 0;
}

// VIDCreateDecoder @ 148d15820

int __cdecl vdecmpeg4::VIDCreateDecoder(VIDDecoderSetup *param_1,void **param_2)

{
  short sVar1;
  short sVar2;
  _func___cdecl_void_ptr_uint_uint *p_Var3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  M4Decoder *this;
  M4Decoder *local_res8;
  M4MemHandler local_28;
  
  if ((param_2 == (void **)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("pNewDecoder",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Vid.cpp"
                         ,0x16,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  if ((param_1 == (VIDDecoderSetup *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("setup",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Vid.cpp"
                         ,0x17,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  if ((param_1->cbMemAlloc == (_func___cdecl_void_ptr_uint_uint *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("setup->cbMemAlloc",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Vid.cpp"
                         ,0x18,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  if ((param_1->cbMemFree == (_func___cdecl_void_void_ptr *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("setup->cbMemFree",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Vid.cpp"
                         ,0x19,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  *param_2 = (void *)0x0;
  sVar1 = param_1->height;
  sVar2 = param_1->width;
  if ((((byte)sVar1 | (byte)sVar2) & 0xf) == 0) {
    if (((ushort)(sVar2 - 1U) < 0x1f) || ((ushort)(sVar1 - 1U) < 0x1f)) {
      iVar6 = -0x7fffff00;
    }
    else if ((sVar2 < 0x781) && (sVar1 < 0x441)) {
      local_28.mFreeCB = param_1->cbMemFree;
      p_Var3 = param_1->cbMemAlloc;
      local_28.mAllocCB = p_Var3;
      if ((p_Var3 == (_func___cdecl_void_ptr_uint_uint *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("mAllocCB",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Memory.h"
                             ,0x2e,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      this = (*p_Var3)(0x340,0x20);
      if (this == (M4Decoder *)0x0) {
        iVar6 = -0x7ffffffe;
      }
      else {
        (this->mBitstream).mTail = (uint *)0x0;
        (this->mBitstream).mLength = 0;
        (this->mBitstream).mStart = (uint *)0x0;
        (this->mBitstream).mpStreamIO = (VIDStreamIO *)0x0;
        (this->mBitstream).mpInternalBuffer = (uchar *)0x0;
        (this->mBitstream).mInternalBufferBytes = 0;
        (this->mBitstream).mInternalBufferCurrentBytes = 0;
        (this->mBitstream).mInternalBufferIndex = 0;
        (this->mBitstream).mTotalBits = 0;
        this->mDecoderFlags = 0;
        this->mIPMacroblocks = (M4_MB *)0x0;
        this->mBMacroblocks = (M4_MB *)0x0;
        this->mMotVecMgr = (M4MotionVectorMgr *)0x0;
        (this->mBitstreamParser).mHeaderInfo.mFlags = (<unnamed_type_mFlags>)0x0;
        *(undefined8 *)&(this->mBitstreamParser).mHeaderInfo.mQuant = 0;
        (this->mBitstreamParser).mHeaderInfo.mInvQuantIntra = (uchar *)0x0;
        (this->mBitstreamParser).mHeaderInfo.mInvQuantInter = (uchar *)0x0;
        (this->mBitstreamParser).mBitstream = (M4Bitstream *)0x0;
        (this->mBitstreamCache).mpCacheEntry = (M4BitstreamCacheEntry *)0x0;
        (this->mXCommand).mpDctWorkData = (short *)0x0;
        (this->mXCommand).mpDecoder = (M4Decoder *)0x0;
        this->mpStreamIO = (VIDStreamIO *)0x0;
        this->mpStreamEvents = (VIDStreamEvents *)0x0;
        this->mCurrent = (M4Image *)0x0;
        this->mpVidImage = (M4Image **)0x0;
        this->mNumVidImages = 0;
        (this->mMemSys).mAllocCB = local_28.mAllocCB;
        (this->mMemSys).mFreeCB = local_28.mFreeCB;
        this->mReference[1] = (M4Image *)0x0;
        this->mReference[0] = (M4Image *)0x0;
        this->mTempImage[1] = (M4Image *)0x0;
        this->mTempImage[0] = (M4Image *)0x0;
        (this->mBitstream).mpMemSys = &this->mMemSys;
        this->mCbPrintf = param_1->cbReport;
        local_res8 = this;
        iVar6 = M4Decoder::init(this,param_1);
        if ((iVar6 == 0) &&
           (((sVar2 == 0 || (sVar1 == 0)) ||
            (iVar6 = M4Decoder::initBuffers(this,sVar2,sVar1), iVar6 == 0)))) {
          *param_2 = this;
          iVar6 = 0;
        }
        else {
          M4Decoder::destroy(&local_res8,&local_28);
        }
      }
    }
    else {
      iVar6 = -0x7ffffeff;
    }
  }
  else {
    iVar6 = -0x7ffffefe;
  }
  return iVar6;
}

// VIDDebugVideoOutToBMP @ 148d15ae0

void __cdecl vdecmpeg4::VIDDebugVideoOutToBMP(void *param_1,char *param_2)

{
  return;
}

// VIDDestroyDecoder @ 148d15af0

void __cdecl vdecmpeg4::VIDDestroyDecoder(void *param_1)

{
  code *pcVar1;
  bool bVar2;
  M4Decoder *local_res8 [4];
  M4MemHandler local_18;
  
  if (param_1 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("dec",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Vid.cpp"
                       ,0x57,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.mAllocCB = *(_func___cdecl_void_ptr_uint_uint **)((longlong)param_1 + 0x328);
  local_18.mFreeCB = *(_func___cdecl_void_void_ptr **)((longlong)param_1 + 0x330);
  local_res8[0] = param_1;
  M4Decoder::destroy(local_res8,&local_18);
  return;
}

// VIDGetFrameInfo @ 148d15b50

VIDImageInfo * __cdecl vdecmpeg4::VIDGetFrameInfo(VIDImage *param_1)

{
  code *pcVar1;
  bool bVar2;
  VIDImageInfo *pVVar3;
  
  if (param_1 == (VIDImage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("_pImage",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Vid.cpp"
                       ,0x68,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pVVar3 = (VIDImageInfo *)(*pcVar1)();
      return pVVar3;
    }
  }
  return (VIDImageInfo *)((longlong)param_1->_private + 0x58);
}

// VIDPrintf @ 148d15ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall vdecmpeg4::M4Decoder::VIDPrintf(M4Decoder *this,char *param_1)

{
  ulong64 *puVar1;
  undefined1 local_res18 [16];
  undefined1 auStack_258 [32];
  undefined8 local_238;
  undefined1 *local_230;
  char local_228 [511];
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_258;
  if (this->mCbPrintf != (_func___cdecl_void_char_ptr *)0x0) {
    puVar1 = __local_stdio_printf_options();
    local_238 = 0;
    local_230 = local_res18;
    __stdio_common_vsprintf(*puVar1 | 2,local_228,0x200,param_1);
    local_29 = 0;
    (*this->mCbPrintf)(local_228);
  }
  return;
}

// VIDStreamDecode @ 148d15c50

int __cdecl vdecmpeg4::VIDStreamDecode(void *param_1,float param_2,VIDImage **param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("pDecoder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Vid.cpp"
                       ,0xa1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = M4Decoder::StreamDecode(param_1,param_2,param_3);
  return iVar3;
}

// VIDStreamEventsSet @ 148d15cc0

int __cdecl vdecmpeg4::VIDStreamEventsSet(void *param_1,VIDStreamEvents *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 != (void *)0x0) {
    *(VIDStreamEvents **)((longlong)param_1 + 0x2e8) = param_2;
    return 0;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("pDecoder",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Vid.cpp"
                     ,0xb2,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  pVRam00000000000002e8 = param_2;
  return 0;
}

// VIDStreamSeekNotify @ 148d15d30

int __cdecl vdecmpeg4::VIDStreamSeekNotify(void *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  if ((param_1 == (void *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("pDecoder",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Vid.cpp"
                         ,0xc2,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  if (*(VIDStreamIO **)((longlong)param_1 + 0x2e0) != (VIDStreamIO *)0x0) {
    M4Bitstream::init((M4Bitstream *)((longlong)param_1 + 0x50),
                      *(VIDStreamIO **)((longlong)param_1 + 0x2e0),0x800);
  }
  M4BitstreamParser::reset((M4BitstreamParser *)((longlong)param_1 + 0xa8));
  if (*(longlong *)((longlong)param_1 + 0x2c8) != 0) {
    uVar4 = 0;
    if (*(int *)((longlong)param_1 + 0x2d0) != 0) {
      do {
        *(undefined4 *)
         (*(longlong *)(*(longlong *)((longlong)param_1 + 0x2c8) + (ulonglong)uVar4 * 8) + 0x58) = 0
        ;
        M4Image::Black(*(M4Image **)
                        (*(longlong *)((longlong)param_1 + 0x2c8) + (ulonglong)uVar4 * 8));
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)((longlong)param_1 + 0x2d0));
    }
    M4Decoder::freeBuffers(param_1);
  }
  return 0;
}

// VIDStreamSet @ 148d15e10

int __cdecl vdecmpeg4::VIDStreamSet(void *param_1,VIDStreamIO *param_2,VIDStreamEvents *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("pDecoder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Vid.cpp"
                       ,0x8f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  *(VIDStreamIO **)((longlong)param_1 + 0x2e0) = param_2;
  if (param_2 != (VIDStreamIO *)0x0) {
    M4Bitstream::init((M4Bitstream *)((longlong)param_1 + 0x50),param_2,0x800);
    M4BitstreamParser::reset((M4BitstreamParser *)((longlong)param_1 + 0xa8));
  }
  *(VIDStreamEvents **)((longlong)param_1 + 0x2e8) = param_3;
  return 0;
}

// XInterpolateMB @ 148d16260

void __thiscall
vdecmpeg4::M4XCmdSingleThread::XInterpolateMB
          (M4XCmdSingleThread *this,M4_MB *param_1,int param_2,int param_3,
          M4BitstreamCacheEntry *param_4,uint param_5,uint param_6,ushort param_7)

{
  M4Image *pMVar1;
  M4Image *pMVar2;
  M4Image *pMVar3;
  M4_VECTOR MVar4;
  uchar *puVar5;
  uchar *puVar6;
  code *pcVar7;
  byte bVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int extraout_EAX;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int local_res8;
  int iStackX_c;
  undefined8 local_res10;
  int local_res18;
  int local_res20;
  longlong local_58;
  
  pMVar1 = this->mpRefImage[param_5];
  pMVar2 = this->mpRefImage[param_6];
  pMVar3 = this->mpDecoder->mTempImage[0];
  bVar8 = param_1->mMode;
  if ((bVar8 == 0) || (bVar8 == 1)) {
    MVar4 = param_1->mFMv[0];
    uVar10 = MVar4.y;
    if (((ulonglong)MVar4 & 3) == 0) {
      iVar19 = MVar4.x / 2;
    }
    else {
      iVar19 = (int)(MVar4.x | 2U) >> 1;
    }
    if (((ulonglong)MVar4 & 0x300000000) == 0) {
      iVar20 = (int)uVar10 / 2;
    }
    else {
      iVar20 = (int)(uVar10 | 2) >> 1;
    }
    _local_res8 = CONCAT44(iVar20,iVar19);
    MVar4 = param_1->mBMv[0];
    if (((ulonglong)MVar4 & 3) == 0) {
      uVar11 = MVar4.x / 2;
    }
    else {
      uVar11 = (int)(MVar4.x | 2U) >> 1;
    }
    local_res10._4_4_ = MVar4.y;
    if (((ulonglong)MVar4 & 0x300000000) == 0) {
      iVar19 = (int)local_res10._4_4_ / 2;
    }
    else {
      iVar19 = (int)(local_res10._4_4_ | 2) >> 1;
    }
  }
  else {
    iVar19 = param_1->mFMv[3].x + param_1->mFMv[2].x + param_1->mFMv[1].x + param_1->mFMv[0].x;
    if (iVar19 == 0) {
      iVar21 = 0;
    }
    else {
      iVar20 = -iVar19;
      if (-iVar19 < 0) {
        iVar20 = iVar19;
      }
      uVar11 = iVar20 >> 0x1f & 0xf;
      uVar10 = iVar20 + uVar11;
      iVar20 = M4Decoder::mRoundtab[(int)((uVar10 & 0xf) - uVar11)] + ((int)uVar10 >> 4) * 2;
      iVar21 = -iVar20;
      if (0 < iVar19) {
        iVar21 = iVar20;
      }
    }
    uVar10 = param_1->mFMv[0].y;
    iVar19 = param_1->mFMv[3].y + param_1->mFMv[2].y + param_1->mFMv[1].y + uVar10;
    if (iVar19 == 0) {
      iVar22 = 0;
    }
    else {
      iVar20 = -iVar19;
      if (-iVar19 < 0) {
        iVar20 = iVar19;
      }
      uVar12 = iVar20 >> 0x1f & 0xf;
      uVar11 = iVar20 + uVar12;
      iVar20 = M4Decoder::mRoundtab[(int)((uVar11 & 0xf) - uVar12)] + ((int)uVar11 >> 4) * 2;
      iVar22 = -iVar20;
      if (0 < iVar19) {
        iVar22 = iVar20;
      }
    }
    _local_res8 = CONCAT44(iVar22,iVar21);
    iVar19 = param_1->mBMv[3].x + param_1->mBMv[2].x + param_1->mBMv[1].x + param_1->mBMv[0].x;
    if (iVar19 == 0) {
      uVar11 = 0;
    }
    else {
      iVar20 = -iVar19;
      if (-iVar19 < 0) {
        iVar20 = iVar19;
      }
      uVar12 = iVar20 >> 0x1f & 0xf;
      uVar11 = iVar20 + uVar12;
      uVar12 = M4Decoder::mRoundtab[(int)((uVar11 & 0xf) - uVar12)] + ((int)uVar11 >> 4) * 2;
      uVar11 = -uVar12;
      if (0 < iVar19) {
        uVar11 = uVar12;
      }
    }
    iVar20 = param_1->mBMv[3].y + param_1->mBMv[2].y + param_1->mBMv[1].y + param_1->mBMv[0].y;
    if (iVar20 == 0) {
      local_res10 = (ulonglong)uVar11;
      goto LAB_148d16486;
    }
    iVar19 = -iVar20;
    if (-iVar20 < 0) {
      iVar19 = iVar20;
    }
    uVar13 = iVar19 >> 0x1f & 0xf;
    uVar12 = iVar19 + uVar13;
    iVar21 = M4Decoder::mRoundtab[(int)((uVar12 & 0xf) - uVar13)] + ((int)uVar12 >> 4) * 2;
    iVar19 = -iVar21;
    if (0 < iVar20) {
      iVar19 = iVar21;
    }
  }
  local_res10 = CONCAT44(iVar19,uVar11);
LAB_148d16486:
  puVar5 = (pMVar1->mImage).y;
  iVar20 = param_2 * 0x10;
  iVar22 = param_3 * 0x10;
  puVar6 = (this->mpOutput->mImage).y;
  iVar21 = (int)(this->mpOutput->mImage).texWidth;
  iVar19 = param_1->mFMv[0].x;
  local_res18 = param_2;
  local_res20 = param_3;
  if ((((param_1->mFMv[1].x == iVar19) && (param_1->mFMv[1].y == uVar10)) &&
      (param_1->mFMv[2].x == iVar19)) &&
     (((param_1->mFMv[2].y == uVar10 && (param_1->mFMv[3].x == iVar19)) &&
      (param_1->mFMv[3].y == uVar10)))) {
    local_58 = 8;
    bVar9 = true;
    iVar19 = iVar20;
    iVar16 = iVar22;
  }
  else {
    M4MemHalfPelInterpolate
              (puVar6,puVar5,iVar21,iVar20,iVar22,param_1->mFMv,
               (this->mpHeaderInfo->mFlags).mRounding,false);
    iVar19 = iVar20 + 8;
    M4MemHalfPelInterpolate
              (puVar6,puVar5,iVar21,iVar19,iVar22,param_1->mFMv + 1,
               (this->mpHeaderInfo->mFlags).mRounding,false);
    iVar16 = iVar22 + 8;
    M4MemHalfPelInterpolate
              (puVar6,puVar5,iVar21,iVar20,iVar16,param_1->mFMv + 2,
               (this->mpHeaderInfo->mFlags).mRounding,false);
    bVar9 = false;
    local_58 = 0x20;
  }
  iVar15 = iVar20 + 8;
  iVar14 = iVar22 + 8;
  M4MemHalfPelInterpolate
            (puVar6,puVar5,iVar21,iVar19,iVar16,param_1->mACPredDirections + local_58 + -2,
             (this->mpHeaderInfo->mFlags).mRounding,bVar9);
  iVar17 = iVar21 >> 1;
  M4MemHalfPelInterpolate
            ((this->mpOutput->mImage).u,(pMVar1->mImage).u,iVar17,local_res18 * 8,local_res20 * 8,
             &local_res8,(this->mpHeaderInfo->mFlags).mRounding,false);
  M4MemHalfPelInterpolate
            ((this->mpOutput->mImage).v,(pMVar1->mImage).v,iVar17,local_res18 * 8,local_res20 * 8,
             &local_res8,(this->mpHeaderInfo->mFlags).mRounding,false);
  iVar19 = param_1->mBMv[0].x;
  iVar16 = param_1->mBMv[0].y;
  puVar5 = (pMVar3->mImage).y;
  puVar6 = (pMVar2->mImage).y;
  if (((param_1->mBMv[1].x == iVar19) && (param_1->mBMv[1].y == iVar16)) &&
     ((param_1->mBMv[2].x == iVar19 &&
      (((param_1->mBMv[2].y == iVar16 && (param_1->mBMv[3].x == iVar19)) &&
       (param_1->mBMv[3].y == iVar16)))))) {
    bVar9 = true;
    lVar18 = 0xe0;
    iVar15 = iVar20;
    iVar14 = iVar22;
  }
  else {
    M4MemHalfPelInterpolate
              (puVar5,puVar6,iVar21,iVar20,iVar22,param_1->mBMv,
               (this->mpHeaderInfo->mFlags).mRounding,false);
    M4MemHalfPelInterpolate
              (puVar5,puVar6,iVar21,iVar15,iVar22,param_1->mBMv + 1,
               (this->mpHeaderInfo->mFlags).mRounding,false);
    M4MemHalfPelInterpolate
              (puVar5,puVar6,iVar21,iVar20,iVar14,param_1->mBMv + 2,
               (this->mpHeaderInfo->mFlags).mRounding,false);
    bVar9 = false;
    lVar18 = 0xf8;
  }
  M4MemHalfPelInterpolate
            (puVar5,puVar6,iVar21,iVar15,iVar14,param_1->mACPredDirections + lVar18 + -2,
             (this->mpHeaderInfo->mFlags).mRounding,bVar9);
  iVar19 = local_res20 * 8;
  iVar20 = local_res18 * 8;
  M4MemHalfPelInterpolate
            ((pMVar3->mImage).u,(pMVar2->mImage).u,iVar17,iVar20,iVar19,&local_res10,
             (this->mpHeaderInfo->mFlags).mRounding,false);
  M4MemHalfPelInterpolate
            ((pMVar3->mImage).v,(pMVar2->mImage).v,iVar17,iVar20,iVar19,&local_res10,
             (this->mpHeaderInfo->mFlags).mRounding,false);
  pMVar1 = this->mpOutput;
  iVar21 = (int)(pMVar1->mImage).texWidth;
  iVar22 = iVar22 * iVar21 + local_res18 * 0x10;
  _mbBlendSrcDst16x16((pMVar1->mImage).y + iVar22,(pMVar3->mImage).y + iVar22,iVar21);
  _interpolate8x8Simple((pMVar1->mImage).u,(pMVar3->mImage).u,iVar20,iVar19,extraout_EAX);
  _interpolate8x8Simple((pMVar1->mImage).v,(pMVar3->mImage).v,iVar20,iVar19,iVar21 / 2);
  if (param_1->mCbp != '\0') {
    if ((param_4 == (M4BitstreamCacheEntry *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("pCacheEntry",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4XCmdSingleThread.cpp"
                           ,0x13f,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((param_1->mCbp & 0x20) != 0) {
      bVar8 = param_1->mQuant;
      if ((this->mpHeaderInfo->mFlags).mQuantType == 0) {
        M4InvQuantType0Inter(this->mpDctWorkData,param_4->mDctFromBitstream,bVar8);
        M4idct(this->mpDctWorkData);
      }
      else {
        M4InvQuantType1Inter
                  (this->mpDctWorkData,param_4->mDctFromBitstream,bVar8,
                   this->mpHeaderInfo->mInvQuantInter);
        M4idct(this->mpDctWorkData);
      }
    }
    if ((param_1->mCbp & 0x10) != 0) {
      bVar8 = param_1->mQuant;
      if ((this->mpHeaderInfo->mFlags).mQuantType == 0) {
        M4InvQuantType0Inter(this->mpDctWorkData + 0x40,param_4->mDctFromBitstream + 0x40,bVar8);
      }
      else {
        M4InvQuantType1Inter
                  (this->mpDctWorkData + 0x40,param_4->mDctFromBitstream + 0x40,bVar8,
                   this->mpHeaderInfo->mInvQuantInter);
      }
      M4idct(this->mpDctWorkData + 0x40);
    }
    if ((param_1->mCbp & 8) != 0) {
      bVar8 = param_1->mQuant;
      if ((this->mpHeaderInfo->mFlags).mQuantType == 0) {
        M4InvQuantType0Inter(this->mpDctWorkData + 0x80,param_4->mDctFromBitstream + 0x80,bVar8);
      }
      else {
        M4InvQuantType1Inter
                  (this->mpDctWorkData + 0x80,param_4->mDctFromBitstream + 0x80,bVar8,
                   this->mpHeaderInfo->mInvQuantInter);
      }
      M4idct(this->mpDctWorkData + 0x80);
    }
    if ((param_1->mCbp & 4) != 0) {
      bVar8 = param_1->mQuant;
      if ((this->mpHeaderInfo->mFlags).mQuantType == 0) {
        M4InvQuantType0Inter(this->mpDctWorkData + 0xc0,param_4->mDctFromBitstream + 0xc0,bVar8);
      }
      else {
        M4InvQuantType1Inter
                  (this->mpDctWorkData + 0xc0,param_4->mDctFromBitstream + 0xc0,bVar8,
                   this->mpHeaderInfo->mInvQuantInter);
      }
      M4idct(this->mpDctWorkData + 0xc0);
    }
    if ((param_1->mCbp & 2) != 0) {
      bVar8 = param_1->mQuant;
      if ((this->mpHeaderInfo->mFlags).mQuantType == 0) {
        M4InvQuantType0Inter(this->mpDctWorkData + 0x100,param_4->mDctFromBitstream + 0x100,bVar8);
      }
      else {
        M4InvQuantType1Inter
                  (this->mpDctWorkData + 0x100,param_4->mDctFromBitstream + 0x100,bVar8,
                   this->mpHeaderInfo->mInvQuantInter);
      }
      M4idct(this->mpDctWorkData + 0x100);
    }
    if ((param_1->mCbp & 1) != 0) {
      bVar8 = param_1->mQuant;
      if ((this->mpHeaderInfo->mFlags).mQuantType == 0) {
        M4InvQuantType0Inter(this->mpDctWorkData + 0x140,param_4->mDctFromBitstream + 0x140,bVar8);
      }
      else {
        M4InvQuantType1Inter
                  (this->mpDctWorkData + 0x140,param_4->mDctFromBitstream + 0x140,bVar8,
                   this->mpHeaderInfo->mInvQuantInter);
      }
      M4idct(this->mpDctWorkData + 0x140);
    }
    param_4->mState = 0;
    M4MemOpInterMBAdd(this->mpOutput,local_res18,local_res20,this->mpDctWorkData,(uint)param_1->mCbp
                     );
  }
  return;
}

// XUpdateInterMB @ 148d16b10

void __thiscall
vdecmpeg4::M4XCmdSingleThread::XUpdateInterMB
          (M4XCmdSingleThread *this,M4_MB *param_1,int param_2,int param_3,
          M4BitstreamCacheEntry *param_4,MV_PREDICTION param_5,uint param_6)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  M4_VECTOR MVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 local_res8;
  uchar *local_res10;
  int local_res18;
  int local_res20;
  
  local_res18 = param_2;
  local_res20 = param_3;
  if ((this->mpDctWorkData == (short *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("mpDctWorkData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4XCmdSingleThread.cpp"
                         ,0x89,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar4 = param_1->mMode;
  if ((bVar4 == 0) || (bVar4 == 1)) {
    MVar11 = param_1->mFMv[0];
    uVar5 = MVar11.y;
    if (((ulonglong)MVar11 & 3) == 0) {
      uVar8 = MVar11.x / 2;
    }
    else {
      uVar8 = (int)(MVar11.x | 2U) >> 1;
    }
    if (((ulonglong)MVar11 & 0x300000000) == 0) {
      iVar12 = (int)uVar5 / 2;
    }
    else {
      iVar12 = (int)(uVar5 | 2) >> 1;
    }
  }
  else {
    uVar6 = param_1->mFMv[0].x;
    MVar11.y = 0;
    MVar11.x = uVar6;
    iVar12 = param_1->mFMv[3].x + param_1->mFMv[2].x + param_1->mFMv[1].x + uVar6;
    if (iVar12 == 0) {
      uVar8 = 0;
    }
    else {
      iVar13 = -iVar12;
      if (-iVar12 < 0) {
        iVar13 = iVar12;
      }
      uVar8 = iVar13 >> 0x1f & 0xf;
      uVar5 = iVar13 + uVar8;
      uVar5 = M4Decoder::mRoundtab[(int)((uVar5 & 0xf) - uVar8)] + ((int)uVar5 >> 4) * 2;
      uVar8 = -uVar5;
      if (0 < iVar12) {
        uVar8 = uVar5;
      }
    }
    uVar5 = param_1->mFMv[0].y;
    iVar13 = param_1->mFMv[3].y + param_1->mFMv[2].y + param_1->mFMv[1].y + uVar5;
    if (iVar13 == 0) {
      local_res8 = (ulonglong)uVar8;
      goto LAB_148d16c7a;
    }
    iVar12 = -iVar13;
    if (-iVar13 < 0) {
      iVar12 = iVar13;
    }
    uVar9 = iVar12 >> 0x1f & 0xf;
    uVar6 = iVar12 + uVar9;
    iVar14 = M4Decoder::mRoundtab[(int)((uVar6 & 0xf) - uVar9)] + ((int)uVar6 >> 4) * 2;
    iVar12 = -iVar14;
    if (0 < iVar13) {
      iVar12 = iVar14;
    }
  }
  uVar6 = MVar11.x;
  local_res8 = CONCAT44(iVar12,uVar8);
LAB_148d16c7a:
  iVar14 = param_2 * 0x10;
  iVar12 = param_3 * 0x10;
  puVar1 = (this->mpOutput->mImage).y;
  iVar13 = (int)(this->mpOutput->mImage).texWidth;
  uVar7 = (ulonglong)param_6;
  local_res10 = (this->mpRefImage[uVar7]->mImage).y;
  if (((((param_1->mFMv[1].x == uVar6) && (param_1->mFMv[1].y == uVar5)) &&
       (param_1->mFMv[2].x == uVar6)) &&
      ((param_1->mFMv[2].y == uVar5 && (param_1->mFMv[3].x == uVar6)))) &&
     (param_1->mFMv[3].y == uVar5)) {
    bVar3 = true;
    lVar10 = 8;
  }
  else {
    M4MemHalfPelInterpolate
              (puVar1,local_res10,iVar13,iVar14,iVar12,param_1->mFMv,
               (this->mpHeaderInfo->mFlags).mRounding,false);
    M4MemHalfPelInterpolate
              (puVar1,local_res10,iVar13,iVar14 + 8,iVar12,param_1->mFMv + 1,
               (this->mpHeaderInfo->mFlags).mRounding,false);
    iVar12 = iVar12 + 8;
    M4MemHalfPelInterpolate
              (puVar1,local_res10,iVar13,iVar14,iVar12,param_1->mFMv + 2,
               (this->mpHeaderInfo->mFlags).mRounding,false);
    iVar14 = iVar14 + 8;
    bVar3 = false;
    lVar10 = 0x20;
    param_3 = local_res20;
  }
  M4MemHalfPelInterpolate
            (puVar1,local_res10,iVar13,iVar14,iVar12,param_1->mACPredDirections + lVar10 + -2,
             (this->mpHeaderInfo->mFlags).mRounding,bVar3);
  iVar12 = local_res18 * 8;
  M4MemHalfPelInterpolate
            ((this->mpOutput->mImage).u,(this->mpRefImage[uVar7]->mImage).u,iVar13 >> 1,iVar12,
             param_3 * 8,&local_res8,(this->mpHeaderInfo->mFlags).mRounding,false);
  M4MemHalfPelInterpolate
            ((this->mpOutput->mImage).v,(this->mpRefImage[uVar7]->mImage).v,iVar13 >> 1,iVar12,
             param_3 * 8,&local_res8,(this->mpHeaderInfo->mFlags).mRounding,false);
  if (param_1->mCbp != '\0') {
    if ((param_4 == (M4BitstreamCacheEntry *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("pCacheEntry",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4XCmdSingleThread.cpp"
                           ,0xbb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((param_1->mCbp & 0x20) != 0) {
      bVar4 = param_1->mQuant;
      if ((this->mpHeaderInfo->mFlags).mQuantType == 0) {
        M4InvQuantType0Inter(this->mpDctWorkData,param_4->mDctFromBitstream,bVar4);
        M4idct(this->mpDctWorkData);
      }
      else {
        M4InvQuantType1Inter
                  (this->mpDctWorkData,param_4->mDctFromBitstream,bVar4,
                   this->mpHeaderInfo->mInvQuantInter);
        M4idct(this->mpDctWorkData);
      }
    }
    if ((param_1->mCbp & 0x10) != 0) {
      bVar4 = param_1->mQuant;
      if ((this->mpHeaderInfo->mFlags).mQuantType == 0) {
        M4InvQuantType0Inter(this->mpDctWorkData + 0x40,param_4->mDctFromBitstream + 0x40,bVar4);
      }
      else {
        M4InvQuantType1Inter
                  (this->mpDctWorkData + 0x40,param_4->mDctFromBitstream + 0x40,bVar4,
                   this->mpHeaderInfo->mInvQuantInter);
      }
      M4idct(this->mpDctWorkData + 0x40);
    }
    if ((param_1->mCbp & 8) != 0) {
      bVar4 = param_1->mQuant;
      if ((this->mpHeaderInfo->mFlags).mQuantType == 0) {
        M4InvQuantType0Inter(this->mpDctWorkData + 0x80,param_4->mDctFromBitstream + 0x80,bVar4);
      }
      else {
        M4InvQuantType1Inter
                  (this->mpDctWorkData + 0x80,param_4->mDctFromBitstream + 0x80,bVar4,
                   this->mpHeaderInfo->mInvQuantInter);
      }
      M4idct(this->mpDctWorkData + 0x80);
    }
    if ((param_1->mCbp & 4) != 0) {
      bVar4 = param_1->mQuant;
      if ((this->mpHeaderInfo->mFlags).mQuantType == 0) {
        M4InvQuantType0Inter(this->mpDctWorkData + 0xc0,param_4->mDctFromBitstream + 0xc0,bVar4);
      }
      else {
        M4InvQuantType1Inter
                  (this->mpDctWorkData + 0xc0,param_4->mDctFromBitstream + 0xc0,bVar4,
                   this->mpHeaderInfo->mInvQuantInter);
      }
      M4idct(this->mpDctWorkData + 0xc0);
    }
    if ((param_1->mCbp & 2) != 0) {
      bVar4 = param_1->mQuant;
      if ((this->mpHeaderInfo->mFlags).mQuantType == 0) {
        M4InvQuantType0Inter(this->mpDctWorkData + 0x100,param_4->mDctFromBitstream + 0x100,bVar4);
      }
      else {
        M4InvQuantType1Inter
                  (this->mpDctWorkData + 0x100,param_4->mDctFromBitstream + 0x100,bVar4,
                   this->mpHeaderInfo->mInvQuantInter);
      }
      M4idct(this->mpDctWorkData + 0x100);
    }
    if ((param_1->mCbp & 1) != 0) {
      bVar4 = param_1->mQuant;
      if ((this->mpHeaderInfo->mFlags).mQuantType == 0) {
        M4InvQuantType0Inter(this->mpDctWorkData + 0x140,param_4->mDctFromBitstream + 0x140,bVar4);
      }
      else {
        M4InvQuantType1Inter
                  (this->mpDctWorkData + 0x140,param_4->mDctFromBitstream + 0x140,bVar4,
                   this->mpHeaderInfo->mInvQuantInter);
      }
      M4idct(this->mpDctWorkData + 0x140);
    }
    param_4->mState = 0;
    M4MemOpInterMBAdd(this->mpOutput,local_res18,local_res20,this->mpDctWorkData,(uint)param_1->mCbp
                     );
  }
  return;
}

// XUpdateIntraMB @ 148d170e0

void __thiscall
vdecmpeg4::M4XCmdSingleThread::XUpdateIntraMB
          (M4XCmdSingleThread *this,M4_MB *param_1,int param_2,int param_3,
          M4BitstreamCacheEntry *param_4)

{
  M4Image *pMVar1;
  short *psVar2;
  uchar *puVar3;
  uchar *puVar4;
  longlong lVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  
  bVar7 = param_1->mQuant;
  if ((this->mpHeaderInfo->mFlags).mQuantType == 0) {
    M4InvQuantType0Intra(this->mpDctWorkData,param_4->mDctFromBitstream,bVar7,param_4->mDcScaler[0])
    ;
  }
  else {
    M4InvQuantType1Intra
              (this->mpDctWorkData,param_4->mDctFromBitstream,bVar7,param_4->mDcScaler[0],
               this->mpHeaderInfo->mInvQuantIntra);
  }
  M4idct(this->mpDctWorkData);
  bVar7 = param_1->mQuant;
  if ((this->mpHeaderInfo->mFlags).mQuantType == 0) {
    M4InvQuantType0Intra
              (this->mpDctWorkData + 0x40,param_4->mDctFromBitstream + 0x40,bVar7,
               param_4->mDcScaler[1]);
  }
  else {
    M4InvQuantType1Intra
              (this->mpDctWorkData + 0x40,param_4->mDctFromBitstream + 0x40,bVar7,
               param_4->mDcScaler[1],this->mpHeaderInfo->mInvQuantIntra);
  }
  M4idct(this->mpDctWorkData + 0x40);
  bVar7 = param_1->mQuant;
  if ((this->mpHeaderInfo->mFlags).mQuantType == 0) {
    M4InvQuantType0Intra
              (this->mpDctWorkData + 0x80,param_4->mDctFromBitstream + 0x80,bVar7,
               param_4->mDcScaler[2]);
  }
  else {
    M4InvQuantType1Intra
              (this->mpDctWorkData + 0x80,param_4->mDctFromBitstream + 0x80,bVar7,
               param_4->mDcScaler[2],this->mpHeaderInfo->mInvQuantIntra);
  }
  M4idct(this->mpDctWorkData + 0x80);
  bVar7 = param_1->mQuant;
  if ((this->mpHeaderInfo->mFlags).mQuantType == 0) {
    M4InvQuantType0Intra
              (this->mpDctWorkData + 0xc0,param_4->mDctFromBitstream + 0xc0,bVar7,
               param_4->mDcScaler[3]);
  }
  else {
    M4InvQuantType1Intra
              (this->mpDctWorkData + 0xc0,param_4->mDctFromBitstream + 0xc0,bVar7,
               param_4->mDcScaler[3],this->mpHeaderInfo->mInvQuantIntra);
  }
  M4idct(this->mpDctWorkData + 0xc0);
  bVar7 = param_1->mQuant;
  if ((this->mpHeaderInfo->mFlags).mQuantType == 0) {
    M4InvQuantType0Intra
              (this->mpDctWorkData + 0x100,param_4->mDctFromBitstream + 0x100,bVar7,
               param_4->mDcScaler[4]);
  }
  else {
    M4InvQuantType1Intra
              (this->mpDctWorkData + 0x100,param_4->mDctFromBitstream + 0x100,bVar7,
               param_4->mDcScaler[4],this->mpHeaderInfo->mInvQuantIntra);
  }
  M4idct(this->mpDctWorkData + 0x100);
  bVar7 = param_1->mQuant;
  if ((this->mpHeaderInfo->mFlags).mQuantType == 0) {
    M4InvQuantType0Intra
              (this->mpDctWorkData + 0x140,param_4->mDctFromBitstream + 0x140,bVar7,
               param_4->mDcScaler[5]);
  }
  else {
    M4InvQuantType1Intra
              (this->mpDctWorkData + 0x140,param_4->mDctFromBitstream + 0x140,bVar7,
               param_4->mDcScaler[5],this->mpHeaderInfo->mInvQuantIntra);
  }
  M4idct(this->mpDctWorkData + 0x140);
  param_4->mState = 0;
  pMVar1 = this->mpOutput;
  psVar2 = this->mpDctWorkData;
  iVar8 = (int)(pMVar1->mImage).texWidth;
  puVar3 = (pMVar1->mImage).u;
  puVar4 = (pMVar1->mImage).v;
  iVar6 = iVar8 >> 1;
  lVar5 = (longlong)(param_3 * 8 * iVar6);
  _memTrans16to8Yx4((pMVar1->mImage).y +
                    (longlong)(param_3 * 0x10 * iVar8) + (longlong)(param_2 << 4),psVar2,iVar8);
  _memTrans16to8Y(puVar3 + param_2 * 8 + lVar5,psVar2 + 0x100,iVar6);
  _memTrans16to8Y(puVar4 + param_2 * 8 + lVar5,psVar2 + 0x140,iVar6);
  return;
}

// _interpolate8x8Simple @ 148d17370

void __cdecl
vdecmpeg4::_interpolate8x8Simple(uchar *param_1,uchar *param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  uchar *puVar4;
  
  lVar3 = (longlong)(param_4 * param_5 + param_3);
  iVar2 = 8;
  pbVar1 = param_1 + lVar3;
  puVar4 = param_2 + (lVar3 - (longlong)pbVar1);
  do {
    iVar2 = iVar2 + -1;
    *pbVar1 = (byte)(puVar4[(longlong)pbVar1] + 1 + (uint)*pbVar1 >> 1);
    pbVar1[1] = (byte)((uint)pbVar1[1] + (puVar4 + 1)[(longlong)pbVar1] + 1 >> 1);
    pbVar1[2] = (byte)((uint)pbVar1[2] + (puVar4 + 2)[(longlong)pbVar1] + 1 >> 1);
    pbVar1[3] = (byte)((uint)pbVar1[3] + (puVar4 + 3)[(longlong)pbVar1] + 1 >> 1);
    pbVar1[4] = (byte)((uint)pbVar1[4] + (puVar4 + 4)[(longlong)pbVar1] + 1 >> 1);
    pbVar1[5] = (byte)((uint)pbVar1[5] + (puVar4 + 5)[(longlong)pbVar1] + 1 >> 1);
    pbVar1[6] = (byte)((uint)pbVar1[6] + (puVar4 + 6)[(longlong)pbVar1] + 1 >> 1);
    pbVar1[7] = (byte)((uint)pbVar1[7] + (puVar4 + 7)[(longlong)pbVar1] + 1 >> 1);
    pbVar1 = pbVar1 + param_5;
  } while (0 < iVar2);
  return;
}

// _mbBlendSrcDst16x16 @ 148d17460

void __cdecl vdecmpeg4::_mbBlendSrcDst16x16(uchar *param_1,uchar *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = (longlong)param_2 - (longlong)param_1;
  iVar2 = 0x10;
  do {
    *param_1 = (byte)((uint)*param_1 + param_1[lVar1] + 1 >> 1);
    param_1[1] = (byte)((uint)param_1[1] + param_1[lVar1 + 1] + 1 >> 1);
    param_1[2] = (byte)((uint)param_1[2] + param_1[lVar1 + 2] + 1 >> 1);
    param_1[3] = (byte)((uint)param_1[3] + param_1[lVar1 + 3] + 1 >> 1);
    param_1[4] = (byte)((uint)param_1[4] + param_1[lVar1 + 4] + 1 >> 1);
    param_1[5] = (byte)((uint)param_1[5] + param_1[lVar1 + 5] + 1 >> 1);
    param_1[6] = (byte)((uint)param_1[6] + param_1[lVar1 + 6] + 1 >> 1);
    param_1[7] = (byte)((uint)param_1[7] + param_1[lVar1 + 7] + 1 >> 1);
    param_1[8] = (byte)((uint)param_1[8] + param_1[lVar1 + 8] + 1 >> 1);
    param_1[9] = (byte)((uint)param_1[9] + param_1[lVar1 + 9] + 1 >> 1);
    param_1[10] = (byte)((uint)param_1[10] + param_1[lVar1 + 10] + 1 >> 1);
    param_1[0xb] = (byte)((uint)param_1[0xb] + param_1[lVar1 + 0xb] + 1 >> 1);
    param_1[0xc] = (byte)((uint)param_1[0xc] + param_1[lVar1 + 0xc] + 1 >> 1);
    iVar2 = iVar2 + -1;
    param_1[0xd] = (byte)((uint)param_1[0xd] + param_1[lVar1 + 0xd] + 1 >> 1);
    param_1[0xe] = (byte)((uint)param_1[0xe] + param_1[lVar1 + 0xe] + 1 >> 1);
    param_1[0xf] = (byte)(param_1[0xf] + 1 + (uint)param_1[lVar1 + 0xf] >> 1);
    param_1 = param_1 + param_3;
  } while (0 < iVar2);
  return;
}

// _mbInterpolateBoth8x8 @ 148d17610

void __cdecl vdecmpeg4::_mbInterpolateBoth8x8(uchar *param_1,uchar *param_2,int param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = (longlong)param_4;
  lVar4 = 8;
  do {
    iVar3 = (uint)*param_2 +
            (uint)param_2[1] + param_3 + (uint)param_2[lVar5 + 1] + (uint)param_2[lVar5];
    if (0x3ff < iVar3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("sum <= 255",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4MemOps_Generic.cpp"
                         ,0x30c,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *param_1 = (uchar)((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2);
    iVar3 = (uint)param_2[1] +
            (uint)param_2[lVar5 + 2] + param_3 + (uint)param_2[lVar5 + 1] + (uint)param_2[2];
    if (0x3ff < iVar3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("sum <= 255",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4MemOps_Generic.cpp"
                         ,0x30c,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    param_1[1] = (uchar)((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2);
    iVar3 = (uint)param_2[lVar5 + 3] +
            (uint)param_2[lVar5 + 2] + param_3 + (uint)param_2[3] + (uint)param_2[2];
    if (0x3ff < iVar3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("sum <= 255",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4MemOps_Generic.cpp"
                         ,0x30c,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    param_1[2] = (uchar)((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2);
    iVar3 = (uint)param_2[4] +
            (uint)param_2[3] + param_3 + (uint)param_2[lVar5 + 3] + (uint)param_2[lVar5 + 4];
    if (0x3ff < iVar3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("sum <= 255",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4MemOps_Generic.cpp"
                         ,0x30c,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    param_1[3] = (uchar)((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2);
    iVar3 = (uint)param_2[4] +
            (uint)param_2[5] + param_3 + (uint)param_2[lVar5 + 4] + (uint)param_2[lVar5 + 5];
    if (0x3ff < iVar3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("sum <= 255",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4MemOps_Generic.cpp"
                         ,0x30c,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    param_1[4] = (uchar)((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2);
    iVar3 = (uint)param_2[6] +
            (uint)param_2[lVar5 + 5] + param_3 + (uint)param_2[5] + (uint)param_2[lVar5 + 6];
    if (0x3ff < iVar3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("sum <= 255",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4MemOps_Generic.cpp"
                         ,0x30c,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    param_1[5] = (uchar)((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2);
    iVar3 = (uint)param_2[lVar5 + 6] +
            (uint)param_2[lVar5 + 7] + param_3 + (uint)param_2[7] + (uint)param_2[6];
    if (0x3ff < iVar3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("sum <= 255",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4MemOps_Generic.cpp"
                         ,0x30c,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    param_1[6] = (uchar)((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2);
    iVar3 = (uint)param_2[lVar5 + 7] +
            (uint)param_2[7] + param_3 + (uint)param_2[lVar5 + 8] + (uint)param_2[8];
    if (0x3ff < iVar3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("sum <= 255",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4MemOps_Generic.cpp"
                         ,0x30c,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    param_1[7] = (uchar)((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2);
    param_1 = param_1 + lVar5;
    lVar4 = lVar4 + -1;
    param_2 = param_2 + lVar5;
  } while (lVar4 != 0);
  return;
}

// _mbInterpolateVertical8x8 @ 148d17940

void __cdecl
vdecmpeg4::_mbInterpolateVertical8x8(uchar *param_1,uchar *param_2,int param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  lVar5 = (longlong)param_4;
  lVar3 = 8;
  do {
    iVar4 = (uint)*param_2 + (uint)param_2[lVar5] + param_3;
    if (0x1ff < iVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("sum <= 255",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4MemOps_Generic.cpp"
                         ,0x2ad,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *param_1 = (uchar)(iVar4 / 2);
    iVar4 = (uint)param_2[1] + (uint)param_2[lVar5 + 1] + param_3;
    if (0x1ff < iVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("sum <= 255",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4MemOps_Generic.cpp"
                         ,0x2ad,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    param_1[1] = (uchar)(iVar4 / 2);
    iVar4 = (uint)param_2[2] + (uint)param_2[lVar5 + 2] + param_3;
    if (0x1ff < iVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("sum <= 255",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4MemOps_Generic.cpp"
                         ,0x2ad,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    param_1[2] = (uchar)(iVar4 / 2);
    iVar4 = (uint)param_2[3] + (uint)param_2[lVar5 + 3] + param_3;
    if (0x1ff < iVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("sum <= 255",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4MemOps_Generic.cpp"
                         ,0x2ad,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    param_1[3] = (uchar)(iVar4 / 2);
    iVar4 = (uint)param_2[4] + (uint)param_2[lVar5 + 4] + param_3;
    if (0x1ff < iVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("sum <= 255",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4MemOps_Generic.cpp"
                         ,0x2ad,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    param_1[4] = (uchar)(iVar4 / 2);
    iVar4 = (uint)param_2[5] + (uint)param_2[lVar5 + 5] + param_3;
    if (0x1ff < iVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("sum <= 255",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4MemOps_Generic.cpp"
                         ,0x2ad,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    param_1[5] = (uchar)(iVar4 / 2);
    iVar4 = (uint)param_2[6] + (uint)param_2[lVar5 + 6] + param_3;
    if (0x1ff < iVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("sum <= 255",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4MemOps_Generic.cpp"
                         ,0x2ad,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    param_1[6] = (uchar)(iVar4 / 2);
    iVar4 = (uint)param_2[7] + (uint)param_2[lVar5 + 7] + param_3;
    if (0x1ff < iVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("sum <= 255",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4MemOps_Generic.cpp"
                         ,0x2ad,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    param_1[7] = (uchar)(iVar4 / 2);
    param_1 = param_1 + lVar5;
    lVar3 = lVar3 + -1;
    param_2 = param_2 + lVar5;
  } while (lVar3 != 0);
  return;
}

// _memTrans16to8AddY @ 148d17be0

void __cdecl vdecmpeg4::_memTrans16to8AddY(uchar *param_1,short *param_2,int param_3)

{
  short *psVar1;
  byte bVar2;
  byte *pbVar3;
  short sVar4;
  longlong lVar5;
  
  lVar5 = 4;
  do {
    sVar4 = (ushort)*param_1 + *param_2;
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    *param_1 = bVar2;
    sVar4 = (ushort)param_1[1] + param_2[1];
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    param_1[1] = bVar2;
    sVar4 = (ushort)param_1[2] + param_2[2];
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    param_1[2] = bVar2;
    sVar4 = (ushort)param_1[3] + param_2[3];
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    param_1[3] = bVar2;
    sVar4 = (ushort)param_1[4] + param_2[4];
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    param_1[4] = bVar2;
    sVar4 = (ushort)param_1[5] + param_2[5];
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    param_1[5] = bVar2;
    sVar4 = (ushort)param_1[6] + param_2[6];
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    param_1[6] = bVar2;
    sVar4 = (ushort)param_1[7] + param_2[7];
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    param_1[7] = bVar2;
    pbVar3 = param_1 + param_3;
    sVar4 = (ushort)*pbVar3 + param_2[8];
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    *pbVar3 = bVar2;
    sVar4 = (ushort)pbVar3[1] + param_2[9];
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    pbVar3[1] = bVar2;
    sVar4 = (ushort)pbVar3[2] + param_2[10];
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    pbVar3[2] = bVar2;
    sVar4 = (ushort)pbVar3[3] + param_2[0xb];
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    pbVar3[3] = bVar2;
    sVar4 = (ushort)pbVar3[4] + param_2[0xc];
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    pbVar3[4] = bVar2;
    sVar4 = (ushort)pbVar3[5] + param_2[0xd];
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    pbVar3[5] = bVar2;
    sVar4 = (ushort)pbVar3[6] + param_2[0xe];
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    pbVar3[6] = bVar2;
    psVar1 = param_2 + 0xf;
    param_2 = param_2 + 0x10;
    sVar4 = (ushort)pbVar3[7] + *psVar1;
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    pbVar3[7] = bVar2;
    param_1 = pbVar3 + param_3;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}

// _memTrans16to8AddYx4 @ 148d17e00

void __cdecl vdecmpeg4::_memTrans16to8AddYx4(uchar *param_1,short *param_2,int param_3)

{
  short *psVar1;
  byte bVar2;
  short *psVar3;
  short sVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 8;
  iVar6 = 8;
  psVar5 = param_2 + 0x40;
  do {
    psVar3 = psVar5;
    sVar4 = (ushort)*param_1 + *param_2;
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    *param_1 = bVar2;
    sVar4 = (ushort)param_1[1] + param_2[1];
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    param_1[1] = bVar2;
    sVar4 = (ushort)param_1[2] + param_2[2];
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    param_1[2] = bVar2;
    sVar4 = (ushort)param_1[3] + param_2[3];
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    param_1[3] = bVar2;
    sVar4 = (ushort)param_1[4] + param_2[4];
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    param_1[4] = bVar2;
    sVar4 = (ushort)param_1[5] + param_2[5];
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    param_1[5] = bVar2;
    sVar4 = (ushort)param_1[6] + param_2[6];
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    param_1[6] = bVar2;
    psVar5 = param_2 + 7;
    param_2 = param_2 + 8;
    sVar4 = (ushort)param_1[7] + *psVar5;
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    param_1[7] = bVar2;
    sVar4 = (ushort)param_1[8] + *psVar3;
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    param_1[8] = bVar2;
    sVar4 = (ushort)param_1[9] + psVar3[1];
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    param_1[9] = bVar2;
    sVar4 = (ushort)param_1[10] + psVar3[2];
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    param_1[10] = bVar2;
    sVar4 = (ushort)param_1[0xb] + psVar3[3];
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    param_1[0xb] = bVar2;
    sVar4 = (ushort)param_1[0xc] + psVar3[4];
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    param_1[0xc] = bVar2;
    sVar4 = (ushort)param_1[0xd] + psVar3[5];
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    param_1[0xd] = bVar2;
    sVar4 = (ushort)param_1[0xe] + psVar3[6];
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    param_1[0xe] = bVar2;
    psVar5 = psVar3 + 8;
    sVar4 = (ushort)param_1[0xf] + psVar3[7];
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    param_1[0xf] = bVar2;
    param_1 = param_1 + param_3;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  psVar3 = psVar3 + 0x48;
  do {
    sVar4 = (ushort)*param_1 + *psVar5;
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    *param_1 = bVar2;
    sVar4 = (ushort)param_1[1] + psVar5[1];
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    param_1[1] = bVar2;
    sVar4 = (ushort)param_1[2] + psVar5[2];
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    param_1[2] = bVar2;
    sVar4 = (ushort)param_1[3] + psVar5[3];
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    param_1[3] = bVar2;
    sVar4 = (ushort)param_1[4] + psVar5[4];
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    param_1[4] = bVar2;
    sVar4 = (ushort)param_1[5] + psVar5[5];
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    param_1[5] = bVar2;
    sVar4 = (ushort)param_1[6] + psVar5[6];
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    param_1[6] = bVar2;
    psVar1 = psVar5 + 7;
    psVar5 = psVar5 + 8;
    sVar4 = (ushort)param_1[7] + *psVar1;
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    param_1[7] = bVar2;
    sVar4 = (ushort)param_1[8] + *psVar3;
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    param_1[8] = bVar2;
    sVar4 = (ushort)param_1[9] + psVar3[1];
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    param_1[9] = bVar2;
    sVar4 = (ushort)param_1[10] + psVar3[2];
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    param_1[10] = bVar2;
    sVar4 = (ushort)param_1[0xb] + psVar3[3];
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    param_1[0xb] = bVar2;
    sVar4 = (ushort)param_1[0xc] + psVar3[4];
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    param_1[0xc] = bVar2;
    sVar4 = (ushort)param_1[0xd] + psVar3[5];
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    param_1[0xd] = bVar2;
    sVar4 = (ushort)param_1[0xe] + psVar3[6];
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    param_1[0xe] = bVar2;
    psVar1 = psVar3 + 7;
    psVar3 = psVar3 + 8;
    sVar4 = (ushort)param_1[0xf] + *psVar1;
    if (sVar4 < 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)sVar4;
      if (0xff < sVar4) {
        bVar2 = 0xff;
      }
    }
    param_1[0xf] = bVar2;
    param_1 = param_1 + param_3;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  return;
}

// _memTrans16to8Y @ 148d18230

void __cdecl vdecmpeg4::_memTrans16to8Y(uchar *param_1,short *param_2,int param_3)

{
  short sVar1;
  uchar uVar2;
  uchar *puVar3;
  longlong lVar4;
  
  lVar4 = 4;
  do {
    sVar1 = *param_2;
    if (sVar1 < 0) {
      uVar2 = '\0';
    }
    else {
      uVar2 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar2 = 0xff;
      }
    }
    *param_1 = uVar2;
    sVar1 = param_2[1];
    if (sVar1 < 0) {
      uVar2 = '\0';
    }
    else {
      uVar2 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar2 = 0xff;
      }
    }
    param_1[1] = uVar2;
    sVar1 = param_2[2];
    if (sVar1 < 0) {
      uVar2 = '\0';
    }
    else {
      uVar2 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar2 = 0xff;
      }
    }
    param_1[2] = uVar2;
    sVar1 = param_2[3];
    if (sVar1 < 0) {
      uVar2 = '\0';
    }
    else {
      uVar2 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar2 = 0xff;
      }
    }
    param_1[3] = uVar2;
    sVar1 = param_2[4];
    if (sVar1 < 0) {
      uVar2 = '\0';
    }
    else {
      uVar2 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar2 = 0xff;
      }
    }
    param_1[4] = uVar2;
    sVar1 = param_2[5];
    if (sVar1 < 0) {
      uVar2 = '\0';
    }
    else {
      uVar2 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar2 = 0xff;
      }
    }
    param_1[5] = uVar2;
    sVar1 = param_2[6];
    if (sVar1 < 0) {
      uVar2 = '\0';
    }
    else {
      uVar2 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar2 = 0xff;
      }
    }
    param_1[6] = uVar2;
    sVar1 = param_2[7];
    if (sVar1 < 0) {
      uVar2 = '\0';
    }
    else {
      uVar2 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar2 = 0xff;
      }
    }
    param_1[7] = uVar2;
    puVar3 = param_1 + param_3;
    sVar1 = param_2[8];
    if (sVar1 < 0) {
      uVar2 = '\0';
    }
    else {
      uVar2 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar2 = 0xff;
      }
    }
    *puVar3 = uVar2;
    sVar1 = param_2[9];
    if (sVar1 < 0) {
      uVar2 = '\0';
    }
    else {
      uVar2 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar2 = 0xff;
      }
    }
    puVar3[1] = uVar2;
    sVar1 = param_2[10];
    if (sVar1 < 0) {
      uVar2 = '\0';
    }
    else {
      uVar2 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar2 = 0xff;
      }
    }
    puVar3[2] = uVar2;
    sVar1 = param_2[0xb];
    if (sVar1 < 0) {
      uVar2 = '\0';
    }
    else {
      uVar2 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar2 = 0xff;
      }
    }
    puVar3[3] = uVar2;
    sVar1 = param_2[0xc];
    if (sVar1 < 0) {
      uVar2 = '\0';
    }
    else {
      uVar2 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar2 = 0xff;
      }
    }
    puVar3[4] = uVar2;
    sVar1 = param_2[0xd];
    if (sVar1 < 0) {
      uVar2 = '\0';
    }
    else {
      uVar2 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar2 = 0xff;
      }
    }
    puVar3[5] = uVar2;
    sVar1 = param_2[0xe];
    if (sVar1 < 0) {
      uVar2 = '\0';
    }
    else {
      uVar2 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar2 = 0xff;
      }
    }
    puVar3[6] = uVar2;
    sVar1 = param_2[0xf];
    param_2 = param_2 + 0x10;
    if (sVar1 < 0) {
      uVar2 = '\0';
    }
    else {
      uVar2 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar2 = 0xff;
      }
    }
    puVar3[7] = uVar2;
    param_1 = puVar3 + param_3;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}

// _memTrans16to8Yx4 @ 148d18440

void __cdecl vdecmpeg4::_memTrans16to8Yx4(uchar *param_1,short *param_2,int param_3)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  uchar uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 8;
  iVar5 = 8;
  psVar2 = param_2 + 0x40;
  do {
    psVar3 = psVar2;
    sVar1 = *param_2;
    if (sVar1 < 0) {
      uVar4 = '\0';
    }
    else {
      uVar4 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar4 = 0xff;
      }
    }
    *param_1 = uVar4;
    sVar1 = param_2[1];
    if (sVar1 < 0) {
      uVar4 = '\0';
    }
    else {
      uVar4 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar4 = 0xff;
      }
    }
    param_1[1] = uVar4;
    sVar1 = param_2[2];
    if (sVar1 < 0) {
      uVar4 = '\0';
    }
    else {
      uVar4 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar4 = 0xff;
      }
    }
    param_1[2] = uVar4;
    sVar1 = param_2[3];
    if (sVar1 < 0) {
      uVar4 = '\0';
    }
    else {
      uVar4 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar4 = 0xff;
      }
    }
    param_1[3] = uVar4;
    sVar1 = param_2[4];
    if (sVar1 < 0) {
      uVar4 = '\0';
    }
    else {
      uVar4 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar4 = 0xff;
      }
    }
    param_1[4] = uVar4;
    sVar1 = param_2[5];
    if (sVar1 < 0) {
      uVar4 = '\0';
    }
    else {
      uVar4 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar4 = 0xff;
      }
    }
    param_1[5] = uVar4;
    sVar1 = param_2[6];
    if (sVar1 < 0) {
      uVar4 = '\0';
    }
    else {
      uVar4 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar4 = 0xff;
      }
    }
    param_1[6] = uVar4;
    sVar1 = param_2[7];
    param_2 = param_2 + 8;
    if (sVar1 < 0) {
      uVar4 = '\0';
    }
    else {
      uVar4 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar4 = 0xff;
      }
    }
    param_1[7] = uVar4;
    sVar1 = *psVar3;
    if (sVar1 < 0) {
      uVar4 = '\0';
    }
    else {
      uVar4 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar4 = 0xff;
      }
    }
    param_1[8] = uVar4;
    sVar1 = psVar3[1];
    if (sVar1 < 0) {
      uVar4 = '\0';
    }
    else {
      uVar4 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar4 = 0xff;
      }
    }
    param_1[9] = uVar4;
    sVar1 = psVar3[2];
    if (sVar1 < 0) {
      uVar4 = '\0';
    }
    else {
      uVar4 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar4 = 0xff;
      }
    }
    param_1[10] = uVar4;
    sVar1 = psVar3[3];
    if (sVar1 < 0) {
      uVar4 = '\0';
    }
    else {
      uVar4 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar4 = 0xff;
      }
    }
    param_1[0xb] = uVar4;
    sVar1 = psVar3[4];
    if (sVar1 < 0) {
      uVar4 = '\0';
    }
    else {
      uVar4 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar4 = 0xff;
      }
    }
    param_1[0xc] = uVar4;
    sVar1 = psVar3[5];
    if (sVar1 < 0) {
      uVar4 = '\0';
    }
    else {
      uVar4 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar4 = 0xff;
      }
    }
    param_1[0xd] = uVar4;
    sVar1 = psVar3[6];
    if (sVar1 < 0) {
      uVar4 = '\0';
    }
    else {
      uVar4 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar4 = 0xff;
      }
    }
    param_1[0xe] = uVar4;
    sVar1 = psVar3[7];
    psVar2 = psVar3 + 8;
    if (sVar1 < 0) {
      uVar4 = '\0';
    }
    else {
      uVar4 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar4 = 0xff;
      }
    }
    param_1[0xf] = uVar4;
    param_1 = param_1 + param_3;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  psVar3 = psVar3 + 0x48;
  do {
    sVar1 = *psVar2;
    if (sVar1 < 0) {
      uVar4 = '\0';
    }
    else {
      uVar4 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar4 = 0xff;
      }
    }
    *param_1 = uVar4;
    sVar1 = psVar2[1];
    if (sVar1 < 0) {
      uVar4 = '\0';
    }
    else {
      uVar4 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar4 = 0xff;
      }
    }
    param_1[1] = uVar4;
    sVar1 = psVar2[2];
    if (sVar1 < 0) {
      uVar4 = '\0';
    }
    else {
      uVar4 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar4 = 0xff;
      }
    }
    param_1[2] = uVar4;
    sVar1 = psVar2[3];
    if (sVar1 < 0) {
      uVar4 = '\0';
    }
    else {
      uVar4 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar4 = 0xff;
      }
    }
    param_1[3] = uVar4;
    sVar1 = psVar2[4];
    if (sVar1 < 0) {
      uVar4 = '\0';
    }
    else {
      uVar4 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar4 = 0xff;
      }
    }
    param_1[4] = uVar4;
    sVar1 = psVar2[5];
    if (sVar1 < 0) {
      uVar4 = '\0';
    }
    else {
      uVar4 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar4 = 0xff;
      }
    }
    param_1[5] = uVar4;
    sVar1 = psVar2[6];
    if (sVar1 < 0) {
      uVar4 = '\0';
    }
    else {
      uVar4 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar4 = 0xff;
      }
    }
    param_1[6] = uVar4;
    sVar1 = psVar2[7];
    psVar2 = psVar2 + 8;
    if (sVar1 < 0) {
      uVar4 = '\0';
    }
    else {
      uVar4 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar4 = 0xff;
      }
    }
    param_1[7] = uVar4;
    sVar1 = *psVar3;
    if (sVar1 < 0) {
      uVar4 = '\0';
    }
    else {
      uVar4 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar4 = 0xff;
      }
    }
    param_1[8] = uVar4;
    sVar1 = psVar3[1];
    if (sVar1 < 0) {
      uVar4 = '\0';
    }
    else {
      uVar4 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar4 = 0xff;
      }
    }
    param_1[9] = uVar4;
    sVar1 = psVar3[2];
    if (sVar1 < 0) {
      uVar4 = '\0';
    }
    else {
      uVar4 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar4 = 0xff;
      }
    }
    param_1[10] = uVar4;
    sVar1 = psVar3[3];
    if (sVar1 < 0) {
      uVar4 = '\0';
    }
    else {
      uVar4 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar4 = 0xff;
      }
    }
    param_1[0xb] = uVar4;
    sVar1 = psVar3[4];
    if (sVar1 < 0) {
      uVar4 = '\0';
    }
    else {
      uVar4 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar4 = 0xff;
      }
    }
    param_1[0xc] = uVar4;
    sVar1 = psVar3[5];
    if (sVar1 < 0) {
      uVar4 = '\0';
    }
    else {
      uVar4 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar4 = 0xff;
      }
    }
    param_1[0xd] = uVar4;
    sVar1 = psVar3[6];
    if (sVar1 < 0) {
      uVar4 = '\0';
    }
    else {
      uVar4 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar4 = 0xff;
      }
    }
    param_1[0xe] = uVar4;
    sVar1 = psVar3[7];
    psVar3 = psVar3 + 8;
    if (sVar1 < 0) {
      uVar4 = '\0';
    }
    else {
      uVar4 = (uchar)sVar1;
      if (0xff < sVar1) {
        uVar4 = 0xff;
      }
    }
    param_1[0xf] = uVar4;
    param_1 = param_1 + param_3;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}

// _predictMv @ 148d188b0

void __thiscall
vdecmpeg4::M4MotionVectorMgr::_predictMv
          (M4MotionVectorMgr *this,M4_VECTOR *param_1,int param_2,int param_3,uint param_4)

{
  M4Decoder *pMVar1;
  M4_VECTOR MVar2;
  int iVar3;
  M4_VECTOR *pMVar4;
  M4_VECTOR *pMVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  bool bVar16;
  bool bVar17;
  M4_VECTOR local_48;
  M4_VECTOR local_40;
  int iStack_3c;
  M4_VECTOR local_38 [2];
  
  if (param_4 == 0) {
    lVar12 = 0x18;
    iVar3 = param_3 + -1;
    lVar11 = 0x18;
    iVar9 = param_2 + 1;
    lVar14 = 0x10;
LAB_148d18948:
    iVar10 = param_2 + -1;
  }
  else {
    iVar10 = param_2;
    if (param_4 == 1) {
      iVar3 = param_3 + -1;
      lVar11 = 0x20;
      iVar9 = param_2 + 1;
      lVar14 = 8;
      lVar12 = 0x18;
    }
    else {
      lVar11 = 8;
      lVar12 = 0x10;
      iVar3 = param_3;
      iVar9 = param_2;
      if (param_4 == 2) {
        lVar14 = 0x20;
        goto LAB_148d18948;
      }
      lVar14 = 0x18;
    }
  }
  pMVar1 = this->mDecoder;
  iVar8 = 0;
  iVar3 = (uint)pMVar1->mMBWidth * iVar3;
  iVar13 = param_3 * (uint)pMVar1->mMBWidth + iVar10;
  iVar7 = iVar3 + iVar9;
  iVar3 = iVar3 + param_2;
  if ((iVar13 < 0) || (iVar10 < 0)) {
    local_48 = MV_ZERO;
  }
  else {
    iVar8 = 1;
    local_48 = *(M4_VECTOR *)(pMVar1->mIPMacroblocks[iVar13].mACPredDirections + lVar14 + -2);
  }
  if (iVar3 < 0) {
    local_40 = MV_ZERO;
  }
  else {
    iVar8 = iVar8 + 1;
    local_40 = *(M4_VECTOR *)(pMVar1->mIPMacroblocks[iVar3].mACPredDirections + lVar11 + -2);
  }
  uVar15 = (ulonglong)(iVar3 >= 0);
  local_38[0] = MV_ZERO;
  if ((-1 < iVar7) && (iVar9 < (int)(uint)pMVar1->mMBWidth)) {
    iVar8 = iVar8 + 1;
    uVar15 = 2;
    local_38[0] = *(M4_VECTOR *)(pMVar1->mIPMacroblocks[iVar7].mACPredDirections + lVar12 + -2);
  }
  if (iVar8 == 1) {
    *param_1 = (&local_48)[uVar15];
    return;
  }
  iVar10 = local_40.x;
  iVar9 = local_48.x;
  iVar3 = local_38[0].x;
  MVar2 = local_40;
  if (iVar10 < iVar9) {
    MVar2 = local_48;
  }
  iVar7 = iVar3;
  if (iVar3 < iVar10) {
    iVar7 = iVar10;
  }
  iVar8 = iVar3;
  if (iVar3 < iVar9) {
    iVar8 = iVar9;
  }
  if (iVar7 < iVar8) {
    pMVar4 = &stack0xffffffffffffffc0;
    iVar7 = iVar10 - iVar3;
    iVar8 = iVar10;
  }
  else {
    pMVar4 = &local_48;
    iVar7 = iVar9 - iVar3;
    iVar8 = iVar9;
  }
  if (iVar8 == iVar3 || SBORROW4(iVar8,iVar3) != iVar7 < 0) {
    pMVar4 = local_38;
  }
  if (MVar2.x < pMVar4->x) {
    pMVar4 = &stack0xffffffffffffffc0;
    iVar3 = iVar10;
  }
  else {
    iVar7 = iVar3;
    if (iVar3 < iVar10) {
      iVar7 = iVar10;
    }
    iVar8 = iVar3;
    if (iVar3 < iVar9) {
      iVar8 = iVar9;
    }
    pMVar4 = local_38;
    if (iVar7 < iVar8) {
      pMVar5 = &stack0xffffffffffffffc0;
      bVar17 = SBORROW4(iVar10,iVar3);
      iVar7 = iVar10 - iVar3;
      bVar16 = iVar10 == iVar3;
      goto LAB_148d18a93;
    }
  }
  iVar7 = iVar9 - iVar3;
  bVar17 = SBORROW4(iVar9,iVar3);
  bVar16 = iVar9 == iVar3;
  pMVar5 = &local_48;
LAB_148d18a93:
  if (bVar16 || bVar17 != iVar7 < 0) {
    pMVar5 = pMVar4;
  }
  iVar9 = local_48.y;
  iVar10 = local_40.y;
  iVar3 = iVar9;
  if (iVar9 <= iVar10) {
    iVar3 = iVar10;
  }
  iVar8 = local_38[0].y;
  param_1->x = pMVar5->x;
  iVar7 = iVar9;
  if (iVar9 <= iVar8) {
    iVar7 = iVar8;
  }
  iVar13 = iVar10;
  if (iVar10 <= iVar8) {
    iVar13 = iVar8;
  }
  if (iVar13 < iVar7) {
    pMVar4 = &stack0xffffffffffffffc0;
    iVar7 = iVar10 - iVar8;
    iVar13 = iVar10;
  }
  else {
    pMVar4 = &local_48;
    iVar7 = iVar9 - iVar8;
    iVar13 = iVar9;
  }
  pMVar5 = local_38;
  if (iVar13 != iVar8 && SBORROW4(iVar13,iVar8) == iVar7 < 0) {
    pMVar5 = pMVar4;
  }
  if (pMVar5->y <= iVar3) {
    iVar3 = iVar9;
    if (iVar9 <= iVar8) {
      iVar3 = iVar8;
    }
    iVar7 = iVar10;
    if (iVar10 <= iVar8) {
      iVar7 = iVar8;
    }
    if (iVar3 <= iVar7) {
      piVar6 = &local_38[0].y;
      if (iVar8 < iVar9) {
        piVar6 = &local_48.y;
      }
      param_1->y = *piVar6;
      return;
    }
    piVar6 = &local_38[0].y;
    if (iVar8 < iVar10) {
      piVar6 = &iStack_3c;
    }
    param_1->y = *piVar6;
    return;
  }
  pMVar4 = &stack0xffffffffffffffc0;
  if (iVar10 < iVar9) {
    pMVar4 = &local_48;
  }
  param_1->y = pMVar4->y;
  return;
}

// bFrame @ 148d18b80

int __thiscall vdecmpeg4::M4Decoder::bFrame(M4Decoder *this)

{
  ushort uVar1;
  int iVar2;
  M4MotionVectorMgr *pMVar3;
  M4Bitstream *pMVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  byte bVar13;
  M4_VECTOR MVar14;
  M4_VECTOR MVar15;
  uint uVar16;
  M4BitstreamCacheEntry *pMVar17;
  M4_MB *pMVar18;
  M4_VECTOR MVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  M4BitstreamCacheEntry *pMVar25;
  M4_MB *pMVar26;
  uchar uVar27;
  byte local_res10;
  ushort local_res18;
  int local_res20;
  MV_PREDICTION MVar28;
  int local_78;
  M4_MB *local_68;
  M4_VECTOR local_60;
  M4_VECTOR local_58;
  
  (this->mCurrent->mImageInfo).mFrameType = VID_IMAGEINFO_FRAMETYPE_B;
  pMVar3 = this->mMotVecMgr;
  bVar13 = (char)(pMVar3->mDecoder->mBitstreamParser).mFcodeForward - 1;
  pMVar3->mMvClipHigh = (0x20 << (bVar13 & 0x1f)) + -1;
  pMVar3->mMvClipLow = -0x20 << (bVar13 & 0x1f);
  pMVar3->mMvClipRange = 0x40 << (bVar13 & 0x1f);
  M4ImageCreatePadding((this->mReference[0]->mImage)._private);
  local_res10 = (byte)(this->mBitstreamParser).mHeaderInfo.mQuant;
  pMVar26 = this->mIPMacroblocks;
  iVar10 = (int)(this->mBitstreamParser).mTimePP;
  pMVar18 = this->mBMacroblocks;
  iVar2 = (int)(this->mBitstreamParser).mTimeBP;
  local_res18 = 0;
  local_res20 = 0;
  MVar14 = M4MotionVectorMgr::MV_ZERO;
  local_68 = pMVar26;
  if (this->mMBHeight != 0) {
    do {
      local_78 = 0;
      MVar15 = MVar14;
      MVar19 = MVar14;
      local_60 = MVar14;
      local_58 = MVar14;
      if (this->mMBWidth != 0) {
        do {
          pMVar18->mMode = '\0';
          pMVar18->mModeIntra = '\0';
          if (pMVar26->mMode == 0x10) {
            pMVar18->mFlags = '\x03';
            pMVar18->mCbp = '\0';
            pMVar18->field_0x1 = pMVar18->field_0x1 ^ (pMVar18->mQuant ^ pMVar26->mQuant) & 0x1f;
            pMVar18->mFMv[0].x = 0;
            pMVar18->mFMv[0].y = 0;
            pMVar18->mFMv[1].x = 0;
            pMVar18->mFMv[1].y = 0;
            pMVar18->mFMv[2].x = 0;
            pMVar18->mFMv[2].y = 0;
            pMVar18->mFMv[3].x = 0;
            pMVar18->mFMv[3].y = 0;
            pMVar18->mMvResidual = '\0';
            bVar13 = pMVar18->mCbp;
            bVar6 = pMVar18->mMode;
            if (((bVar6 != 0) && (1 < (byte)(bVar6 - 1))) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("mb->mMode == M4_MBMODE_INTER || mb->mMode == M4_MBMODE_INTER_Q || mb->mMode == M4_MBMODE_INTER4V"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Decoder.cpp"
                                   ,0x433,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              iVar10 = (*pcVar5)();
              return iVar10;
            }
            pMVar17 = (M4BitstreamCacheEntry *)0x0;
            if (bVar13 != 0) {
              memset(((this->mBitstreamCache).mpCacheEntry)->mDctFromBitstream,0,0x300);
              pMVar17 = (this->mBitstreamCache).mpCacheEntry;
              uVar16 = 0;
              do {
                if ((bVar13 >> (5 - uVar16 & 0x1f) & 1) != 0) {
                  M4BitstreamParser::getInterBlockNoAsm
                            (&this->mBitstreamParser,pMVar17->mDctFromBitstream + (uVar16 << 6));
                }
                uVar16 = uVar16 + 1;
              } while (uVar16 < 6);
            }
            M4XCmdSingleThread::XUpdateInterMB
                      (&this->mXCommand,pMVar18,local_78,local_res20,pMVar17,MV_PREDICTION_NONE,1);
            local_68 = pMVar26;
          }
          else {
            uVar16 = M4Bitstream::show(&this->mBitstream,1);
            M4Bitstream::skip(&this->mBitstream,1);
            if (uVar16 == 0) {
              bVar7 = true;
              uVar16 = M4Bitstream::show(&this->mBitstream,1);
              M4Bitstream::skip(&this->mBitstream,1);
              bVar13 = 0;
              do {
                pMVar4 = (this->mBitstreamParser).mBitstream;
                uVar11 = M4Bitstream::show(pMVar4,1);
                M4Bitstream::skip(pMVar4,1);
                if (uVar11 != 0) goto LAB_148d18e36;
                bVar13 = bVar13 + 1;
              } while (bVar13 < 4);
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("type <= 3",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4BitstreamParser.h"
                                 ,0x5f,L"");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                iVar10 = (*pcVar5)();
                return iVar10;
              }
LAB_148d18e36:
              pMVar18->mFlags = bVar13 | 0x80;
              if ((char)uVar16 == '\0') {
                uVar11 = M4Bitstream::show(&this->mBitstream,6);
                uVar27 = (uchar)uVar11;
                M4Bitstream::skip(&this->mBitstream,6);
              }
              else {
                uVar27 = '\0';
              }
              pMVar18->mCbp = uVar27;
              if (((pMVar18->mFlags & 3) != 0) && ((char)uVar16 == '\0')) {
                pMVar4 = (this->mBitstreamParser).mBitstream;
                uVar16 = M4Bitstream::show(pMVar4,1);
                M4Bitstream::skip(pMVar4,1);
                if (uVar16 == 0) {
                  cVar9 = '\0';
                }
                else {
                  pMVar4 = (this->mBitstreamParser).mBitstream;
                  uVar16 = M4Bitstream::show(pMVar4,1);
                  M4Bitstream::skip(pMVar4,1);
                  cVar9 = '\x02';
                  if (uVar16 == 0) {
                    cVar9 = -2;
                  }
                }
                local_res10 = local_res10 + cVar9;
                if (local_res10 < 0x20) {
                  if (local_res10 == 0) {
                    local_res10 = 1;
                  }
                }
                else {
                  local_res10 = 0x1f;
                }
              }
            }
            else {
              bVar7 = false;
              pMVar18->mFlags = '\0';
              pMVar18->mCbp = '\0';
              local_68 = pMVar26;
            }
            pMVar18->field_0x1 = pMVar18->field_0x1 ^ (pMVar18->mQuant ^ local_res10) & 0x1f;
            bVar13 = pMVar18->mFlags & 3;
            if ((pMVar18->mFlags & 3) == 0) {
              iVar20 = 0;
              iVar12 = iVar20;
              if (bVar7) {
                pMVar3 = this->mMotVecMgr;
                iVar20 = M4BitstreamParser::getMv(&pMVar3->mDecoder->mBitstreamParser,1);
                iVar12 = M4BitstreamParser::getMv(&pMVar3->mDecoder->mBitstreamParser,1);
                if (iVar20 < -0x20) {
                  iVar20 = iVar20 + 0x40;
                }
                else if (0x1f < iVar20) {
                  iVar20 = iVar20 + -0x40;
                }
                if (iVar12 < -0x20) {
                  iVar12 = iVar12 + 0x40;
                }
                else if (0x1f < iVar12) {
                  iVar12 = iVar12 + -0x40;
                }
              }
              pMVar17 = (M4BitstreamCacheEntry *)0x0;
              iVar22 = iVar2 - iVar10;
              iVar24 = (iVar2 * local_68->mFMv[0].x) / iVar10 + iVar20;
              pMVar18->mFMv[0].x = iVar24;
              iVar23 = (iVar2 * local_68->mFMv[0].y) / iVar10 + iVar12;
              pMVar18->mFMv[0].y = iVar23;
              iVar21 = local_68->mFMv[0].x;
              if (iVar20 == 0) {
                iVar24 = (iVar21 * iVar22) / iVar10;
              }
              else {
                iVar24 = iVar24 - iVar21;
              }
              pMVar18->mBMv[0].x = iVar24;
              iVar21 = local_68->mFMv[0].y;
              if (iVar12 == 0) {
                iVar23 = (iVar21 * iVar22) / iVar10;
              }
              else {
                iVar23 = iVar23 - iVar21;
              }
              pMVar18->mBMv[0].y = iVar23;
              iVar24 = (iVar2 * local_68->mFMv[1].x) / iVar10 + iVar20;
              pMVar18->mFMv[1].x = iVar24;
              iVar23 = (iVar2 * local_68->mFMv[1].y) / iVar10 + iVar12;
              pMVar18->mFMv[1].y = iVar23;
              iVar21 = local_68->mFMv[1].x;
              if (iVar20 == 0) {
                iVar24 = (iVar22 * iVar21) / iVar10;
              }
              else {
                iVar24 = iVar24 - iVar21;
              }
              pMVar18->mBMv[1].x = iVar24;
              iVar21 = local_68->mFMv[1].y;
              if (iVar12 == 0) {
                iVar23 = (iVar21 * iVar22) / iVar10;
              }
              else {
                iVar23 = iVar23 - iVar21;
              }
              pMVar18->mBMv[1].y = iVar23;
              iVar24 = (iVar2 * local_68->mFMv[2].x) / iVar10 + iVar20;
              pMVar18->mFMv[2].x = iVar24;
              iVar23 = (iVar2 * local_68->mFMv[2].y) / iVar10 + iVar12;
              pMVar18->mFMv[2].y = iVar23;
              iVar21 = local_68->mFMv[2].x;
              if (iVar20 == 0) {
                iVar24 = (iVar22 * iVar21) / iVar10;
              }
              else {
                iVar24 = iVar24 - iVar21;
              }
              pMVar18->mBMv[2].x = iVar24;
              iVar21 = local_68->mFMv[2].y;
              if (iVar12 == 0) {
                iVar23 = (iVar22 * iVar21) / iVar10;
              }
              else {
                iVar23 = iVar23 - iVar21;
              }
              pMVar18->mBMv[2].y = iVar23;
              iVar24 = (iVar2 * local_68->mFMv[3].x) / iVar10 + iVar20;
              pMVar18->mFMv[3].x = iVar24;
              iVar23 = (iVar2 * local_68->mFMv[3].y) / iVar10 + iVar12;
              pMVar18->mFMv[3].y = iVar23;
              iVar21 = local_68->mFMv[3].x;
              if (iVar20 == 0) {
                iVar24 = (iVar22 * iVar21) / iVar10;
              }
              else {
                iVar24 = iVar24 - iVar21;
              }
              pMVar18->mBMv[3].x = iVar24;
              iVar20 = local_68->mFMv[3].y;
              if (iVar12 == 0) {
                iVar23 = (iVar20 * iVar22) / iVar10;
              }
              else {
                iVar23 = iVar23 - iVar20;
              }
              pMVar18->mBMv[3].y = iVar23;
              bVar13 = pMVar18->mCbp;
              pMVar18->mMode = '\x02';
              pMVar18->mModeIntra = '\0';
              pMVar25 = pMVar17;
              if (bVar13 != 0) {
                memset(((this->mBitstreamCache).mpCacheEntry)->mDctFromBitstream,0,0x300);
                pMVar25 = (this->mBitstreamCache).mpCacheEntry;
                do {
                  iVar12 = (int)pMVar17;
                  if ((bVar13 >> (5U - iVar12 & 0x1f) & 1) != 0) {
                    M4BitstreamParser::getInterBlockNoAsm
                              (&this->mBitstreamParser,
                               pMVar25->mDctFromBitstream + (uint)(iVar12 << 6));
                  }
                  pMVar17 = (M4BitstreamCacheEntry *)(ulonglong)(iVar12 + 1U);
                } while (iVar12 + 1U < 6);
              }
              M4XCmdSingleThread::XInterpolateMB
                        (&this->mXCommand,pMVar18,local_78,local_res20,pMVar25,1,0,local_res18);
            }
            else if (bVar13 == 1) {
              pMVar3 = this->mMotVecMgr;
              uVar1 = (this->mBitstreamParser).mFcodeForward;
              iVar12 = M4BitstreamParser::getMv(&pMVar3->mDecoder->mBitstreamParser,uVar1);
              pMVar18->mFMv[0].x = iVar12;
              iVar12 = M4BitstreamParser::getMv(&pMVar3->mDecoder->mBitstreamParser,uVar1);
              pMVar18->mFMv[0].y = iVar12;
              bVar13 = (char)(this->mBitstreamParser).mFcodeForward - 1;
              iVar20 = pMVar18->mFMv[0].x + MVar19.x;
              iVar24 = -0x20 << (bVar13 & 0x1f);
              iVar21 = 0x40 << (bVar13 & 0x1f);
              iVar22 = (0x20 << (bVar13 & 0x1f)) + -1;
              local_60.y = local_60.y + iVar12;
              pMVar18->mFMv[0].x = iVar20;
              pMVar18->mFMv[0].y = local_60.y;
              if (iVar20 < iVar24) {
                pMVar18->mFMv[0].x = iVar20 + iVar21;
              }
              else if (iVar22 < iVar20) {
                pMVar18->mFMv[0].x = iVar20 - iVar21;
              }
              if (local_60.y < iVar24) {
                pMVar18->mFMv[0].y = local_60.y + iVar21;
              }
              else if (iVar22 < local_60.y) {
                pMVar18->mFMv[0].y = local_60.y - iVar21;
              }
              MVar19 = pMVar18->mFMv[0];
              pMVar18->mFMv[3] = MVar19;
              pMVar18->mFMv[2] = MVar19;
              pMVar18->mFMv[1] = MVar19;
              pMVar3 = this->mMotVecMgr;
              uVar1 = (this->mBitstreamParser).mFcodeBackward;
              iVar12 = M4BitstreamParser::getMv(&pMVar3->mDecoder->mBitstreamParser,uVar1);
              pMVar18->mBMv[0].x = iVar12;
              iVar12 = M4BitstreamParser::getMv(&pMVar3->mDecoder->mBitstreamParser,uVar1);
              pMVar18->mBMv[0].y = iVar12;
              bVar13 = (char)(this->mBitstreamParser).mFcodeBackward - 1;
              iVar20 = pMVar18->mBMv[0].x + MVar14.x;
              iVar24 = -0x20 << (bVar13 & 0x1f);
              iVar21 = 0x40 << (bVar13 & 0x1f);
              iVar22 = (0x20 << (bVar13 & 0x1f)) + -1;
              local_58.y = local_58.y + iVar12;
              pMVar18->mBMv[0].x = iVar20;
              pMVar18->mBMv[0].y = local_58.y;
              if (iVar20 < iVar24) {
                pMVar18->mBMv[0].x = iVar20 + iVar21;
              }
              else if (iVar22 < iVar20) {
                pMVar18->mBMv[0].x = iVar20 - iVar21;
              }
              if (local_58.y < iVar24) {
                pMVar18->mBMv[0].y = local_58.y + iVar21;
              }
              else if (iVar22 < local_58.y) {
                pMVar18->mBMv[0].y = local_58.y - iVar21;
              }
              MVar14 = pMVar18->mBMv[0];
              uVar16 = 0;
              pMVar18->mBMv[3] = MVar14;
              pMVar17 = (M4BitstreamCacheEntry *)0x0;
              pMVar18->mBMv[2] = MVar14;
              pMVar18->mBMv[1] = MVar14;
              bVar13 = pMVar18->mCbp;
              if (bVar13 != 0) {
                memset(((this->mBitstreamCache).mpCacheEntry)->mDctFromBitstream,0,0x300);
                pMVar17 = (this->mBitstreamCache).mpCacheEntry;
                do {
                  if ((bVar13 >> (5 - uVar16 & 0x1f) & 1) != 0) {
                    M4BitstreamParser::getInterBlockNoAsm
                              (&this->mBitstreamParser,pMVar17->mDctFromBitstream + (uVar16 << 6));
                  }
                  uVar16 = uVar16 + 1;
                } while (uVar16 < 6);
              }
              M4XCmdSingleThread::XInterpolateMB
                        (&this->mXCommand,pMVar18,local_78,local_res20,pMVar17,1,0,0);
              local_60 = MVar19;
              local_58 = MVar14;
            }
            else {
              if (bVar13 == 2) {
                pMVar3 = this->mMotVecMgr;
                uVar1 = (this->mBitstreamParser).mFcodeBackward;
                iVar12 = M4BitstreamParser::getMv(&pMVar3->mDecoder->mBitstreamParser,uVar1);
                pMVar18->mFMv[0].x = iVar12;
                iVar12 = M4BitstreamParser::getMv(&pMVar3->mDecoder->mBitstreamParser,uVar1);
                pMVar18->mFMv[0].y = iVar12;
                bVar13 = (char)(this->mBitstreamParser).mFcodeBackward - 1;
                iVar20 = pMVar18->mFMv[0].x + MVar14.x;
                iVar24 = -0x20 << (bVar13 & 0x1f);
                iVar21 = 0x40 << (bVar13 & 0x1f);
                iVar22 = (0x20 << (bVar13 & 0x1f)) + -1;
                local_58.y = local_58.y + iVar12;
                pMVar18->mFMv[0].x = iVar20;
                pMVar18->mFMv[0].y = local_58.y;
                if (iVar20 < iVar24) {
                  pMVar18->mFMv[0].x = iVar20 + iVar21;
                }
                else if (iVar22 < iVar20) {
                  pMVar18->mFMv[0].x = iVar20 - iVar21;
                }
                if (local_58.y < iVar24) {
                  pMVar18->mFMv[0].y = local_58.y + iVar21;
                }
                else if (iVar22 < local_58.y) {
                  pMVar18->mFMv[0].y = local_58.y - iVar21;
                }
                MVar14 = pMVar18->mFMv[0];
                pMVar18->mFMv[3] = MVar14;
                pMVar18->mFMv[2] = MVar14;
                pMVar18->mFMv[1] = MVar14;
                bVar13 = pMVar18->mCbp;
                bVar6 = pMVar18->mMode;
                if (((bVar6 != 0) && (1 < (byte)(bVar6 - 1))) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("mb->mMode == M4_MBMODE_INTER || mb->mMode == M4_MBMODE_INTER_Q || mb->mMode == M4_MBMODE_INTER4V"
                                       ,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Decoder.cpp"
                                       ,0x433,L""), bVar7)) {
                  pcVar5 = (code *)swi(3);
                  iVar10 = (*pcVar5)();
                  return iVar10;
                }
                uVar16 = 0;
                pMVar17 = (M4BitstreamCacheEntry *)0x0;
                if (bVar13 != 0) {
                  memset(((this->mBitstreamCache).mpCacheEntry)->mDctFromBitstream,0,0x300);
                  pMVar17 = (this->mBitstreamCache).mpCacheEntry;
                  do {
                    if ((bVar13 >> (5 - uVar16 & 0x1f) & 1) != 0) {
                      M4BitstreamParser::getInterBlockNoAsm
                                (&this->mBitstreamParser,pMVar17->mDctFromBitstream + (uVar16 << 6))
                      ;
                    }
                    uVar16 = uVar16 + 1;
                  } while (uVar16 < 6);
                }
                uVar16 = 0;
                MVar28 = MV_PREDICTION_B_BACKWARD;
                local_58 = MVar14;
              }
              else {
                if (bVar13 != 3) {
                  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("false && \"Invalid B-frame type\\n\"",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Decoder.cpp"
                                     ,0x3bb,L"");
                  if (bVar7) {
                    pcVar5 = (code *)swi(3);
                    iVar10 = (*pcVar5)();
                    return iVar10;
                  }
                  goto LAB_148d18f9b;
                }
                pMVar3 = this->mMotVecMgr;
                uVar1 = (this->mBitstreamParser).mFcodeForward;
                iVar12 = M4BitstreamParser::getMv(&pMVar3->mDecoder->mBitstreamParser,uVar1);
                pMVar18->mFMv[0].x = iVar12;
                iVar12 = M4BitstreamParser::getMv(&pMVar3->mDecoder->mBitstreamParser,uVar1);
                pMVar18->mFMv[0].y = iVar12;
                bVar13 = (char)(this->mBitstreamParser).mFcodeForward - 1;
                iVar20 = pMVar18->mFMv[0].x + MVar19.x;
                iVar24 = -0x20 << (bVar13 & 0x1f);
                iVar21 = 0x40 << (bVar13 & 0x1f);
                iVar22 = (0x20 << (bVar13 & 0x1f)) + -1;
                local_60.y = local_60.y + iVar12;
                pMVar18->mFMv[0].x = iVar20;
                pMVar18->mFMv[0].y = local_60.y;
                if (iVar20 < iVar24) {
                  pMVar18->mFMv[0].x = iVar21 + iVar20;
                }
                else if (iVar22 < iVar20) {
                  pMVar18->mFMv[0].x = iVar20 - iVar21;
                }
                if (local_60.y < iVar24) {
                  pMVar18->mFMv[0].y = iVar21 + local_60.y;
                }
                else if (iVar22 < local_60.y) {
                  pMVar18->mFMv[0].y = local_60.y - iVar21;
                }
                MVar19 = pMVar18->mFMv[0];
                pMVar18->mFMv[3] = MVar19;
                pMVar18->mFMv[2] = MVar19;
                pMVar18->mFMv[1] = MVar19;
                bVar13 = pMVar18->mCbp;
                bVar6 = pMVar18->mMode;
                if (((bVar6 != 0) && (1 < (byte)(bVar6 - 1))) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("mb->mMode == M4_MBMODE_INTER || mb->mMode == M4_MBMODE_INTER_Q || mb->mMode == M4_MBMODE_INTER4V"
                                       ,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Decoder.cpp"
                                       ,0x433,L""), bVar7)) {
                  pcVar5 = (code *)swi(3);
                  iVar10 = (*pcVar5)();
                  return iVar10;
                }
                uVar16 = 0;
                pMVar17 = (M4BitstreamCacheEntry *)0x0;
                if (bVar13 != 0) {
                  memset(((this->mBitstreamCache).mpCacheEntry)->mDctFromBitstream,0,0x300);
                  pMVar17 = (this->mBitstreamCache).mpCacheEntry;
                  do {
                    if ((bVar13 >> (5 - uVar16 & 0x1f) & 1) != 0) {
                      M4BitstreamParser::getInterBlockNoAsm
                                (&this->mBitstreamParser,pMVar17->mDctFromBitstream + (uVar16 << 6))
                      ;
                    }
                    uVar16 = uVar16 + 1;
                  } while (uVar16 < 6);
                }
                uVar16 = 1;
                MVar28 = MV_PREDICTION_B_FORWARD;
                local_60 = MVar19;
              }
              M4XCmdSingleThread::XUpdateInterMB
                        (&this->mXCommand,pMVar18,local_78,local_res20,pMVar17,MVar28,uVar16);
            }
          }
LAB_148d18f9b:
          pMVar26 = local_68 + 1;
          local_res18 = local_res18 + 1;
          local_78 = local_78 + 1;
          pMVar18 = pMVar18 + 1;
          MVar15 = M4MotionVectorMgr::MV_ZERO;
          local_68 = pMVar26;
        } while (local_78 < (int)(uint)this->mMBWidth);
      }
      local_res20 = local_res20 + 1;
      MVar14 = MVar15;
    } while (local_res20 < (int)(uint)this->mMBHeight);
  }
  M4Bitstream::nextStartCode(&this->mBitstream);
  return 0;
}

// create @ 148d19840

M4Decoder * __cdecl vdecmpeg4::M4Decoder::create(M4MemHandler *param_1)

{
  code *pcVar1;
  _func___cdecl_void_ptr_uint_uint *p_Var2;
  _func___cdecl_void_void_ptr *p_Var3;
  bool bVar4;
  M4Decoder *pMVar5;
  
  if (param_1->mAllocCB == (_func___cdecl_void_ptr_uint_uint *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("mAllocCB",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Memory.h"
                       ,0x2e,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pMVar5 = (M4Decoder *)(*pcVar1)();
      return pMVar5;
    }
  }
  pMVar5 = (*param_1->mAllocCB)(0x340,0x20);
  if (pMVar5 != (M4Decoder *)0x0) {
    (pMVar5->mBitstream).mTail = (uint *)0x0;
    (pMVar5->mBitstream).mLength = 0;
    (pMVar5->mBitstream).mStart = (uint *)0x0;
    (pMVar5->mBitstream).mpStreamIO = (VIDStreamIO *)0x0;
    (pMVar5->mBitstream).mpInternalBuffer = (uchar *)0x0;
    (pMVar5->mBitstream).mInternalBufferBytes = 0;
    (pMVar5->mBitstream).mInternalBufferCurrentBytes = 0;
    (pMVar5->mBitstream).mInternalBufferIndex = 0;
    (pMVar5->mBitstream).mpMemSys = (M4MemHandler *)0x0;
    (pMVar5->mBitstream).mTotalBits = 0;
    pMVar5->mDecoderFlags = 0;
    pMVar5->mIPMacroblocks = (M4_MB *)0x0;
    pMVar5->mBMacroblocks = (M4_MB *)0x0;
    pMVar5->mMotVecMgr = (M4MotionVectorMgr *)0x0;
    (pMVar5->mBitstreamParser).mHeaderInfo.mFlags = (<unnamed_type_mFlags>)0x0;
    *(undefined8 *)&(pMVar5->mBitstreamParser).mHeaderInfo.mQuant = 0;
    (pMVar5->mBitstreamParser).mHeaderInfo.mInvQuantIntra = (uchar *)0x0;
    (pMVar5->mBitstreamParser).mHeaderInfo.mInvQuantInter = (uchar *)0x0;
    (pMVar5->mBitstreamParser).mBitstream = (M4Bitstream *)0x0;
    (pMVar5->mBitstreamCache).mpCacheEntry = (M4BitstreamCacheEntry *)0x0;
    (pMVar5->mXCommand).mpDctWorkData = (short *)0x0;
    (pMVar5->mXCommand).mpDecoder = (M4Decoder *)0x0;
    pMVar5->mpStreamIO = (VIDStreamIO *)0x0;
    pMVar5->mpStreamEvents = (VIDStreamEvents *)0x0;
    p_Var2 = param_1->mAllocCB;
    p_Var3 = param_1->mFreeCB;
    pMVar5->mCurrent = (M4Image *)0x0;
    pMVar5->mpVidImage = (M4Image **)0x0;
    (pMVar5->mMemSys).mAllocCB = p_Var2;
    (pMVar5->mMemSys).mFreeCB = p_Var3;
    (pMVar5->mBitstream).mpMemSys = &pMVar5->mMemSys;
    pMVar5->mReference[1] = (M4Image *)0x0;
    pMVar5->mReference[0] = (M4Image *)0x0;
    pMVar5->mTempImage[1] = (M4Image *)0x0;
    pMVar5->mTempImage[0] = (M4Image *)0x0;
    pMVar5->mNumVidImages = 0;
    return pMVar5;
  }
  return (M4Decoder *)0x0;
}

// create @ 148d19960

M4Image * __cdecl
vdecmpeg4::M4Image::create(M4Decoder *param_1,short param_2,short param_3,bool param_4)

{
  M4Decoder *pMVar1;
  code *pcVar2;
  bool bVar3;
  M4Image *pMVar4;
  uchar *puVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  
  if (((param_1->mMemSys).mAllocCB == (_func___cdecl_void_ptr_uint_uint *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("mAllocCB",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Memory.h"
                         ,0x2e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pMVar4 = (M4Image *)(*pcVar2)();
    return pMVar4;
  }
  pMVar4 = (*(param_1->mMemSys).mAllocCB)(0x88,0x10);
  if (pMVar4 != (M4Image *)0x0) {
    (pMVar4->mImage).width = 0;
    (pMVar4->mImage).height = 0;
    (pMVar4->mImage).texWidth = 0;
    (pMVar4->mImage).texHeight = 0;
    (pMVar4->mImage).y = (uchar *)0x0;
    (pMVar4->mImage).u = (uchar *)0x0;
    (pMVar4->mImage).v = (uchar *)0x0;
    (pMVar4->mImage)._private = (void *)0x0;
    (pMVar4->mImage).texture.y = (uchar *)0x0;
    (pMVar4->mImage).texture.u = (uchar *)0x0;
    (pMVar4->mImage).texture.v = (uchar *)0x0;
    (pMVar4->mImage).texture.userData = (void *)0x0;
    (pMVar4->mImage).time = 0.0;
    (pMVar4->mImageInfo).mFrameType = VID_IMAGEINFO_FRAMETYPE_UNKNOWN;
    (pMVar4->mImageInfo).mFrameNumber = 0;
    (pMVar4->mImageInfo).mDecodeTimeMs = 0.0;
    (pMVar4->mImageInfo).mFrameBytes = 0;
    (pMVar4->mImageInfo).mMacroblockInfo.mNumMBinter = 0;
    (pMVar4->mImageInfo).mMacroblockInfo.mNumMBintra = 0;
    (pMVar4->mImageInfo).mMacroblockInfo.mNumMBinterpolated = 0;
    (pMVar4->mImageInfo).mMacroblockInfo.mNumMBnotCoded = 0;
    pMVar4->mBaseMem = (uchar *)0x0;
    pMVar4->mDecoder = (M4Decoder *)0x0;
    *(undefined8 *)&pMVar4->mRefCount = 0;
    (pMVar4->mImage)._padding_ = (longlong)&___7VIDImage_vdecmpeg4__6B_;
    if ((param_1 == (M4Decoder *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("decoder",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Image.cpp"
                           ,0x58,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pMVar4 = (M4Image *)(*pcVar2)();
      return pMVar4;
    }
    (pMVar4->mImage).height = param_3;
    (pMVar4->mImage).width = param_2;
    sVar7 = (param_3 + 0xfU & 0xfff0) + 0x40;
    pMVar4->mDecoder = param_1;
    pMVar1 = pMVar4->mDecoder;
    sVar6 = (param_2 + 0xfU & 0xfff0) + 0x40;
    (pMVar4->mImage).texHeight = sVar7;
    iVar8 = (int)sVar7 * (int)sVar6;
    pMVar4->mRefCount = 1;
    (pMVar4->mImage)._private = pMVar4;
    (pMVar4->mImage).texWidth = sVar6;
    if (((pMVar1->mMemSys).mAllocCB == (_func___cdecl_void_ptr_uint_uint *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("mAllocCB",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Memory.h"
                           ,0x2e,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pMVar4 = (M4Image *)(*pcVar2)();
      return pMVar4;
    }
    puVar5 = (*(pMVar1->mMemSys).mAllocCB)(iVar8 + (iVar8 >> 2) * 2 + 0xc0,0x40);
    pMVar4->mBaseMem = puVar5;
    if ((((ulonglong)puVar5 & 0x3f) != 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(uint64(img->mBaseMem)&0x3f) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Image.cpp"
                           ,0x6b,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pMVar4 = (M4Image *)(*pcVar2)();
      return pMVar4;
    }
    if (pMVar4->mBaseMem != (uchar *)0x0) {
      setup(pMVar4,pMVar4->mBaseMem,0);
      return pMVar4;
    }
    _scalar_deleting_destructor_(pMVar4,1);
  }
  return (M4Image *)0x0;
}

// create @ 148d19b30

M4MotionVectorMgr * __cdecl
vdecmpeg4::M4MotionVectorMgr::create(M4Decoder *param_1,M4MemHandler *param_2)

{
  code *pcVar1;
  bool bVar2;
  M4MotionVectorMgr *pMVar3;
  
  if (param_2->mAllocCB == (_func___cdecl_void_ptr_uint_uint *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("mAllocCB",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Memory.h"
                       ,0x2e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pMVar3 = (M4MotionVectorMgr *)(*pcVar1)();
      return pMVar3;
    }
  }
  pMVar3 = (*param_2->mAllocCB)(0x18,0x20);
  if (pMVar3 != (M4MotionVectorMgr *)0x0) {
    pMVar3->mDecoder = param_1;
    return pMVar3;
  }
  return (M4MotionVectorMgr *)0x0;
}

// decodeGMCSprite @ 148d19ba0

void __thiscall vdecmpeg4::M4BitstreamParser::decodeGMCSprite(M4BitstreamParser *this)

{
  int *piVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  char cVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  ushort uVar30;
  int iVar31;
  int local_64;
  int local_5c;
  
  sVar2 = (this->mVOLInfo).mWidth;
  iVar20 = (int)sVar2;
  sVar3 = (this->mVOLInfo).mHeight;
  iVar23 = (int)sVar3;
  if (((sVar2 < 1) || (sVar3 < 1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("width > 0 && height > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4BitstreamParser.cpp"
                         ,0x4cc,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = 3 - this->mSpriteWarpingAccuracy;
  iVar8 = 0;
  local_64 = 0;
  local_5c = 0;
  uVar9 = 1;
  iVar15 = iVar8;
  if (1 < iVar20) {
    do {
      local_64 = iVar15 + 1;
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      iVar15 = local_64;
    } while ((int)uVar9 < iVar20);
  }
  uVar9 = 1;
  if (1 < iVar23) {
    do {
      iVar8 = iVar8 + 1;
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      local_5c = iVar8;
    } while ((int)uVar9 < iVar23);
  }
  iVar15 = this->mSprite[0].y;
  iVar8 = this->mSprite[0].x;
  iVar12 = this->mRefVop[1].x;
  iVar17 = this->mRefVop[1].y;
  iVar18 = this->mRefVop[2].x;
  iVar31 = 1 << ((byte)local_64 & 0x1f);
  iVar10 = 1 << ((byte)local_5c & 0x1f);
  iVar22 = this->mRefVop[0].x;
  iVar28 = 2 << ((byte)this->mSpriteWarpingAccuracy & 0x1f);
  iVar4 = this->mRefVop[0].y;
  iVar24 = iVar28 >> 1;
  uVar14 = (iVar8 + iVar22 * 2) * iVar24;
  uVar9 = (iVar4 * 2 + iVar15) * iVar24;
  iVar29 = (int)(0x10 / (longlong)iVar28);
  iVar11 = iVar29 * uVar14;
  iVar21 = iVar11 + iVar22 * -0x10;
  iVar25 = iVar20 >> 1;
  iVar16 = ((this->mSprite[1].x + iVar12 * 2 + iVar8) * iVar29 * iVar24 + iVar12 * -0x10) * iVar31 +
           (iVar20 - iVar31) * iVar21;
  iVar12 = iVar25;
  if (iVar16 < 1) {
    iVar12 = -iVar25;
  }
  iVar12 = (iVar12 + iVar16) / iVar20 + (iVar22 + iVar31) * 0x10;
  iVar16 = iVar29 * uVar9;
  iVar27 = iVar16 + iVar4 * -0x10;
  iVar17 = iVar31 * ((this->mSprite[1].y + iVar17 * 2 + iVar15) * iVar29 * iVar24 + iVar17 * -0x10)
           + (iVar20 - iVar31) * iVar27;
  if (iVar17 < 1) {
    iVar25 = -iVar25;
  }
  iVar20 = (iVar17 + iVar25) / iVar20 + iVar4 * 0x10;
  iVar18 = ((this->mSprite[2].x + iVar18 * 2 + iVar8) * iVar29 * iVar24 + iVar18 * -0x10) * iVar10 +
           (iVar23 - iVar10) * iVar21;
  iVar17 = iVar23 >> 1;
  iVar8 = iVar17;
  if (iVar18 < 1) {
    iVar8 = -iVar17;
  }
  iVar25 = this->mSprite[2].y;
  iVar26 = 0;
  cVar19 = '\0';
  iVar21 = this->mRefVop[2].y;
  this->mSpriteDelta[0].x = 0;
  this->mSpriteDelta[0].y = 0;
  this->mSpriteDelta[1].x = 0;
  this->mSpriteDelta[1].y = 0;
  (this->mSpriteShift).x = 0;
  (this->mSpriteShift).y = 0;
  uVar30 = this->mSpriteWarpingPoints;
  iVar15 = ((iVar25 + iVar21 * 2 + iVar15) * iVar29 * iVar24 + iVar21 * -0x10) * iVar10 +
           (iVar23 - iVar10) * iVar27;
  if (uVar30 == 0) {
    this->mSpriteDelta[0].x = iVar28;
    this->mSpriteDelta[1].y = iVar28;
    this->mSpriteOffset[0].x = 0;
    this->mSpriteOffset[0].y = 0;
    this->mSpriteOffset[1].x = 0;
    this->mSpriteOffset[1].y = 0;
    *(undefined8 *)&this->mSpriteDelta[0].y = 0;
    (this->mSpriteShift).x = 0;
    (this->mSpriteShift).y = 0;
    goto LAB_148d1a03e;
  }
  if (uVar30 == 1) {
    iVar20 = this->mRefVop[0].x;
    iVar23 = this->mRefVop[0].y;
    this->mSpriteDelta[0].x = iVar28;
    *(undefined8 *)&this->mSpriteDelta[0].y = 0;
    this->mSpriteDelta[1].y = iVar28;
    (this->mSpriteShift).x = 0;
    (this->mSpriteShift).y = 0;
    this->mSpriteOffset[0].x = uVar14 - iVar20 * iVar28;
    this->mSpriteOffset[0].y = uVar9 - iVar23 * iVar28;
    uVar30 = this->mSpriteWarpingPoints;
    this->mSpriteOffset[1].x = ((int)uVar14 >> 1 | uVar14 & 1) - (iVar20 / 2) * iVar28;
    this->mSpriteOffset[1].y = ((int)uVar9 >> 1 | uVar9 & 1) - (iVar23 / 2) * iVar28;
    goto LAB_148d1a03e;
  }
  if (uVar30 == 2) {
    iVar23 = this->mRefVop[0].y;
    iVar15 = this->mRefVop[0].x;
    iVar17 = iVar16 - iVar20;
    iVar20 = iVar20 - iVar16;
    iVar7 = local_64 + iVar7;
    iVar12 = iVar12 - iVar11;
    bVar13 = (byte)iVar7;
    this->mSpriteDelta[0].x = iVar12;
    iVar8 = 1 << (bVar13 - 1 & 0x1f);
    this->mSpriteDelta[0].y = iVar17;
    this->mSpriteDelta[1].x = iVar20;
    this->mSpriteDelta[1].y = iVar12;
    this->mSpriteOffset[0].x =
         (((uVar14 << (bVar13 & 0x1f)) - iVar17 * iVar23) - iVar12 * iVar15) + iVar8;
    iVar18 = 1 << (bVar13 + 1 & 0x1f);
    this->mSpriteOffset[0].y =
         (((uVar9 << (bVar13 & 0x1f)) - iVar20 * iVar15) - iVar12 * iVar23) + iVar8;
    iVar8 = iVar23 * -2 + 1;
    iVar23 = iVar15 * -2 + 1;
    this->mSpriteOffset[1].x =
         iVar12 * iVar23 + iVar17 * iVar8 + iVar18 + (iVar11 + -8) * iVar31 * 2;
    iVar20 = iVar12 * iVar8 + iVar20 * iVar23 + iVar18 + (iVar16 + -8) * iVar31 * 2;
LAB_148d1a017:
    uVar30 = this->mSpriteWarpingPoints;
    (this->mSpriteShift).x = iVar7;
    iVar26 = iVar7 + 2;
    (this->mSpriteShift).y = iVar26;
    this->mSpriteOffset[1].y = iVar20;
  }
  else if (uVar30 == 3) {
    iVar25 = this->mRefVop[0].y;
    iVar29 = local_5c;
    if (local_64 < local_5c) {
      iVar29 = local_64;
    }
    iVar21 = (iVar22 * 0x10 + (iVar8 + iVar18) / iVar23) - iVar11;
    iVar12 = iVar12 - iVar11;
    iVar18 = iVar10 >> ((byte)iVar29 & 0x1f);
    iVar7 = local_64 + (local_5c - iVar29) + iVar7;
    iVar29 = iVar31 >> ((byte)iVar29 & 0x1f);
    iVar8 = this->mRefVop[0].x;
    bVar13 = (byte)iVar7;
    iVar22 = 1 << (bVar13 - 1 & 0x1f);
    this->mSpriteOffset[0].x =
         (((uVar14 << (bVar13 & 0x1f)) - iVar21 * iVar29 * iVar25) - iVar12 * iVar18 * iVar8) +
         iVar22;
    if (iVar15 < 1) {
      iVar17 = -iVar17;
    }
    iVar20 = iVar20 - iVar16;
    iVar23 = ((iVar4 + iVar10) * 0x10 + (iVar17 + iVar15) / iVar23) - iVar16;
    iVar17 = iVar25 * -2 + 1;
    this->mSpriteOffset[0].y =
         (((uVar9 << (bVar13 & 0x1f)) - iVar23 * iVar29 * iVar25) - iVar20 * iVar18 * iVar8) +
         iVar22;
    iVar22 = 1 << (bVar13 + 1 & 0x1f);
    iVar15 = iVar8 * -2 + 1;
    this->mSpriteOffset[1].x =
         iVar21 * iVar29 * iVar17 + (iVar12 * iVar15 + (iVar11 + -8) * iVar31 * 2) * iVar18 + iVar22
    ;
    this->mSpriteDelta[0].x = iVar12 * iVar18;
    this->mSpriteDelta[0].y = iVar21 * iVar29;
    this->mSpriteDelta[1].x = iVar20 * iVar18;
    iVar20 = iVar23 * iVar29 * iVar17 +
             (iVar20 * iVar15 + (iVar16 + -8) * iVar31 * 2) * iVar18 + iVar22;
    this->mSpriteDelta[1].y = iVar23 * iVar29;
    goto LAB_148d1a017;
  }
  cVar19 = (char)iVar26;
LAB_148d1a03e:
  iVar15 = 0;
  iVar20 = this->mSpriteDelta[0].x;
  bVar13 = (byte)(this->mSpriteShift).x;
  iVar23 = iVar28 << (bVar13 & 0x1f);
  if (((iVar20 == iVar23) && (this->mSpriteDelta[0].y == 0)) &&
     ((this->mSpriteDelta[1].x == 0 && (this->mSpriteDelta[1].y == iVar23)))) {
    this->mSpriteOffset[0].x = this->mSpriteOffset[0].x >> (bVar13 & 0x1f);
    piVar1 = &this->mSpriteOffset[0].y;
    *piVar1 = *piVar1 >> (bVar13 & 0x1f);
    bVar13 = (byte)(this->mSpriteShift).y;
    this->mSpriteOffset[1].x = this->mSpriteOffset[1].x >> (bVar13 & 0x1f);
    piVar1 = &this->mSpriteOffset[1].y;
    *piVar1 = *piVar1 >> (bVar13 & 0x1f);
    this->mSpriteDelta[0].x = iVar28;
    *(undefined8 *)&this->mSpriteDelta[0].y = 0;
    this->mSpriteDelta[1].y = iVar28;
    uVar30 = 1;
  }
  else {
    bVar13 = 0x10 - bVar13;
    this->mSpriteOffset[0].x = this->mSpriteOffset[0].x << (bVar13 & 0x1f);
    iVar15 = 0x10;
    piVar1 = &this->mSpriteOffset[0].y;
    *piVar1 = *piVar1 << (bVar13 & 0x1f);
    this->mSpriteOffset[1].x = this->mSpriteOffset[1].x << (0x10U - cVar19 & 0x1f);
    piVar1 = &this->mSpriteOffset[1].y;
    *piVar1 = *piVar1 << (0x10U - cVar19 & 0x1f);
    piVar1 = &this->mSpriteDelta[0].y;
    *piVar1 = *piVar1 << (bVar13 & 0x1f);
    this->mSpriteDelta[1].x = this->mSpriteDelta[1].x << (bVar13 & 0x1f);
    piVar1 = &this->mSpriteDelta[1].y;
    *piVar1 = *piVar1 << (bVar13 & 0x1f);
    this->mSpriteDelta[0].x = iVar20 << (bVar13 & 0x1f);
  }
  (this->mSpriteShift).x = iVar15;
  (this->mSpriteShift).y = iVar15;
  this->mSpriteWarpingPointsUsed = uVar30;
  return;
}

// destroy @ 148d1a330

void __cdecl vdecmpeg4::M4Decoder::destroy(M4Decoder **param_1,M4MemHandler *param_2)

{
  M4Decoder *pMVar1;
  M4Decoder *pMVar2;
  short *psVar3;
  uchar *puVar4;
  M4MemHandler *pMVar5;
  code *pcVar6;
  bool bVar7;
  
  pMVar1 = *param_1;
  if (pMVar1 != (M4Decoder *)0x0) {
    pMVar2 = (pMVar1->mXCommand).mpDecoder;
    if (pMVar2 != (M4Decoder *)0x0) {
      psVar3 = (pMVar1->mXCommand).mpDctWorkData;
      if ((pMVar2->mMemSys).mFreeCB == (_func___cdecl_void_void_ptr *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("mFreeCB",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Memory.h"
                           ,0x36,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (psVar3 != (short *)0x0) {
        (*(pMVar2->mMemSys).mFreeCB)(psVar3);
      }
      (pMVar1->mXCommand).mpDctWorkData = (short *)0x0;
      (pMVar1->mXCommand).mpDecoder = (M4Decoder *)0x0;
    }
    freeStuff(pMVar1);
    if ((pMVar1->mXCommand).mpDctWorkData != (short *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("mpDctWorkData == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4XCmdSingleThread.cpp"
                         ,0x21,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    M4BitstreamParser::~M4BitstreamParser(&pMVar1->mBitstreamParser);
    puVar4 = (pMVar1->mBitstream).mpInternalBuffer;
    if ((puVar4 != (uchar *)0x0) &&
       (pMVar5 = (pMVar1->mBitstream).mpMemSys, pMVar5 != (M4MemHandler *)0x0)) {
      if (pMVar5->mFreeCB == (_func___cdecl_void_void_ptr *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("mFreeCB",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Memory.h"
                           ,0x36,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      (*pMVar5->mFreeCB)(puVar4);
    }
    pMVar1 = *param_1;
    if (param_2->mFreeCB == (_func___cdecl_void_void_ptr *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("mFreeCB",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Memory.h"
                         ,0x36,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (pMVar1 != (M4Decoder *)0x0) {
      (*param_2->mFreeCB)(pMVar1);
    }
    *param_1 = (M4Decoder *)0x0;
  }
  return;
}

// destroy @ 148d1a4c0

void __cdecl vdecmpeg4::M4Image::destroy(M4Image **param_1,M4Decoder *param_2)

{
  if (*param_1 != (M4Image *)0x0) {
    RefRemove(*param_1);
    *param_1 = (M4Image *)0x0;
  }
  return;
}

// destroy @ 148d1a4f0

void __cdecl
vdecmpeg4::M4MotionVectorMgr::destroy(M4MotionVectorMgr **param_1,M4MemHandler *param_2)

{
  M4MotionVectorMgr *pMVar1;
  code *pcVar2;
  bool bVar3;
  
  pMVar1 = *param_1;
  if (pMVar1 != (M4MotionVectorMgr *)0x0) {
    if (param_2->mFreeCB == (_func___cdecl_void_void_ptr *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("mFreeCB",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Memory.h"
                         ,0x36,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (*param_2->mFreeCB)(pMVar1);
    *param_1 = (M4MotionVectorMgr *)0x0;
  }
  return;
}

// freeBuffers @ 148d1a560

void __thiscall vdecmpeg4::M4Decoder::freeBuffers(M4Decoder *this)

{
  M4Image *pMVar1;
  M4Decoder *pMVar2;
  M4_MB *pMVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  _func___cdecl_void_void_ptr **pp_Var9;
  M4Image **ppMVar10;
  longlong lVar11;
  ulonglong uVar8;
  
  ppMVar10 = this->mReference;
  lVar11 = 2;
  uVar8 = 0;
  do {
    pMVar1 = *ppMVar10;
    if (pMVar1 != (M4Image *)0x0) {
      iVar6 = pMVar1->mRefCount + -1;
      pMVar1->mRefCount = iVar6;
      if (iVar6 == 0) {
        pMVar2 = pMVar1->mDecoder;
        M4Image::_scalar_deleting_destructor_(pMVar1,0);
        if (((pMVar2->mMemSys).mFreeCB == (_func___cdecl_void_void_ptr *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("mFreeCB",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Memory.h"
                               ,0x36,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (*(pMVar2->mMemSys).mFreeCB)(pMVar1);
      }
      *ppMVar10 = (M4Image *)0x0;
    }
    ppMVar10 = ppMVar10 + 1;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  this->mCurrent = (M4Image *)0x0;
  if (this->mpVidImage != (M4Image **)0x0) {
    if (this->mNumVidImages != 0) {
      do {
        pMVar1 = this->mpVidImage[uVar8];
        iVar6 = pMVar1->mRefCount + -1;
        pMVar1->mRefCount = iVar6;
        if (iVar6 == 0) {
          pMVar2 = pMVar1->mDecoder;
          M4Image::_scalar_deleting_destructor_(pMVar1,0);
          if (((pMVar2->mMemSys).mFreeCB == (_func___cdecl_void_void_ptr *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("mFreeCB",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Memory.h"
                                 ,0x36,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (*(pMVar2->mMemSys).mFreeCB)(pMVar1);
        }
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
      } while (uVar7 < this->mNumVidImages);
    }
    ppMVar10 = this->mpVidImage;
    pp_Var9 = &(this->mMemSys).mFreeCB;
    if ((*pp_Var9 == (_func___cdecl_void_void_ptr *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("mFreeCB",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Memory.h"
                           ,0x36,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (ppMVar10 != (M4Image **)0x0) {
      (**pp_Var9)(ppMVar10);
    }
    this->mpVidImage = (M4Image **)0x0;
  }
  if (this->mTempImage[0] != (M4Image *)0x0) {
    M4Image::RefRemove(this->mTempImage[0]);
    this->mTempImage[0] = (M4Image *)0x0;
  }
  if (this->mTempImage[1] != (M4Image *)0x0) {
    M4Image::RefRemove(this->mTempImage[1]);
    this->mTempImage[1] = (M4Image *)0x0;
  }
  pp_Var9 = &(this->mMemSys).mFreeCB;
  pMVar3 = this->mIPMacroblocks;
  if ((*pp_Var9 == (_func___cdecl_void_void_ptr *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("mFreeCB",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Memory.h"
                         ,0x36,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (pMVar3 != (M4_MB *)0x0) {
    (**pp_Var9)(pMVar3);
  }
  pMVar3 = this->mBMacroblocks;
  this->mIPMacroblocks = (M4_MB *)0x0;
  if ((*pp_Var9 == (_func___cdecl_void_void_ptr *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("mFreeCB",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Memory.h"
                         ,0x36,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (pMVar3 != (M4_MB *)0x0) {
    (**pp_Var9)(pMVar3);
  }
  this->mBMacroblocks = (M4_MB *)0x0;
  return;
}

// freeStuff @ 148d1a7b0

void __thiscall vdecmpeg4::M4Decoder::freeStuff(M4Decoder *this)

{
  M4BitstreamCacheEntry *pMVar1;
  M4MotionVectorMgr *pMVar2;
  code *pcVar3;
  bool bVar4;
  
  freeBuffers(this);
  pMVar1 = (this->mBitstreamCache).mpCacheEntry;
  if ((this->mMemSys).mFreeCB == (_func___cdecl_void_void_ptr *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("mFreeCB",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Memory.h"
                       ,0x36,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (pMVar1 != (M4BitstreamCacheEntry *)0x0) {
    (*(this->mMemSys).mFreeCB)(pMVar1);
  }
  pMVar2 = this->mMotVecMgr;
  if (pMVar2 != (M4MotionVectorMgr *)0x0) {
    if ((this->mMemSys).mFreeCB == (_func___cdecl_void_void_ptr *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("mFreeCB",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Memory.h"
                         ,0x36,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (*(this->mMemSys).mFreeCB)(pMVar2);
    this->mMotVecMgr = (M4MotionVectorMgr *)0x0;
  }
  return;
}

// getBit @ 148d1a870

uint __thiscall vdecmpeg4::M4Bitstream::getBit(M4Bitstream *this)

{
  uint uVar1;
  
  uVar1 = show(this,1);
  skip(this,1);
  return uVar1;
}

// getBits @ 148d1a8b0

uint __thiscall vdecmpeg4::M4Bitstream::getBits(M4Bitstream *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = show(this,param_1);
  skip(this,param_1);
  return uVar1;
}

// getCoeffIntraNoAsm @ 148d1a8f0

int __thiscall
vdecmpeg4::M4VlcDecoder::getCoeffIntraNoAsm
          (M4VlcDecoder *this,int *param_1,int *param_2,M4Bitstream *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = M4Bitstream::show(param_3,0xc);
  if (uVar3 < 8) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bits >= 8",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4VlcDecoder.h"
                       ,0x35,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
LAB_148d1a949:
    uVar3 = (this->mIntraCodeTab).mVlcCodeTab[2][uVar3 - 8];
  }
  else if (uVar3 < 0x200) {
    if (uVar3 < 0x80) goto LAB_148d1a949;
    uVar3 = (this->mIntraCodeTab).mVlcCodeTab[1][(uVar3 >> 2) - 0x20];
  }
  else {
    uVar3 = (this->mIntraCodeTab).mVlcCodeTab[0][(uVar3 >> 5) - 0x10];
  }
  if ((uVar3 == 0x1ffff) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("vlc != ( ((0x1ffff)&0x1ffff) | ((0)<<17) )",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4VlcDecoder.h"
                         ,0x38,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
  M4Bitstream::skip(param_3,uVar3 >> 0x11);
  uVar5 = uVar3 & 0x1ffff;
  if (uVar5 != 0x1bff) {
    *param_1 = uVar5 >> 8 & 0xff;
    *param_2 = uVar5 >> 0x10;
    uVar5 = M4Bitstream::show(param_3,1);
    M4Bitstream::skip(param_3,1);
    if (uVar5 != 0) {
      return -(uVar3 & 0xff);
    }
    return uVar3 & 0xff;
  }
  uVar3 = M4Bitstream::show(param_3,2);
  if (2 < uVar3) {
    M4Bitstream::skip(param_3,2);
    uVar3 = M4Bitstream::show(param_3,1);
    M4Bitstream::skip(param_3,1);
    *param_2 = uVar3;
    uVar3 = M4Bitstream::show(param_3,6);
    M4Bitstream::skip(param_3,6);
    *param_1 = uVar3;
    M4Bitstream::skip(param_3,1);
    uVar3 = M4Bitstream::show(param_3,0xc);
    M4Bitstream::skip(param_3,0xc);
    M4Bitstream::skip(param_3,1);
    if ((uVar3 >> 0xb & 1) == 0) {
      return uVar3;
    }
    return uVar3 | 0xfffff000;
  }
  M4Bitstream::skip(param_3,(uVar3 == 2) + 1);
  uVar5 = M4Bitstream::show(param_3,0xc);
  if (uVar5 < 8) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bits >= 8",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4VlcDecoder.h"
                       ,0x4d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  else {
    if (0x1ff < uVar5) {
      uVar5 = (this->mIntraCodeTab).mVlcCodeTab[0][(uVar5 >> 5) - 0x10];
      goto LAB_148d1aa91;
    }
    if (0x7f < uVar5) {
      uVar5 = (this->mIntraCodeTab).mVlcCodeTab[1][(uVar5 >> 2) - 0x20];
      goto LAB_148d1aa91;
    }
  }
  uVar5 = (this->mIntraCodeTab).mVlcCodeTab[2][uVar5 - 8];
LAB_148d1aa91:
  if ((uVar5 == 0x1ffff) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("vlc != ( ((0x1ffff)&0x1ffff) | ((0)<<17) )",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4VlcDecoder.h"
                         ,0x50,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
  M4Bitstream::skip(param_3,uVar5 >> 0x11);
  uVar7 = uVar5 & 0xff;
  uVar6 = (uVar5 & 0x1ffff) >> 0x10;
  *param_1 = (uVar5 & 0x1ffff) >> 8 & 0xff;
  *param_2 = uVar6;
  if (uVar3 < 2) {
    uVar7 = uVar7 + mMaxLevel[uVar6][*param_1];
  }
  else {
    *param_1 = *param_1 + mMaxRun[uVar6][uVar7] + 1;
  }
  uVar5 = M4Bitstream::show(param_3,1);
  M4Bitstream::skip(param_3,1);
  uVar3 = -uVar7;
  if (uVar5 == 0) {
    uVar3 = uVar7;
  }
  return uVar3;
}

// getInterBlockNoAsm @ 148d1ac40

void __thiscall
vdecmpeg4::M4BitstreamParser::getInterBlockNoAsm(M4BitstreamParser *this,short *param_1)

{
  uchar *puVar1;
  M4Bitstream *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  puVar1 = this->mScanTable[0];
  iVar11 = 0;
  do {
    this_00 = this->mBitstream;
    uVar4 = M4Bitstream::show(this_00,0xc);
    if (uVar4 < 8) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bits >= 8",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4VlcDecoder.h"
                         ,0x7b,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
LAB_148d1acb1:
      puVar6 = (this->mVLCDecoder).mInterCodeTab.mVlcCodeTab[2];
      uVar7 = (ulonglong)(uVar4 - 8);
    }
    else if (uVar4 < 0x200) {
      if (uVar4 < 0x80) goto LAB_148d1acb1;
      puVar6 = (this->mVLCDecoder).mInterCodeTab.mVlcCodeTab[1];
      uVar7 = (ulonglong)((uVar4 >> 2) - 0x20);
    }
    else {
      puVar6 = (this->mVLCDecoder).mInterCodeTab.mVlcCodeTab[0];
      uVar7 = (ulonglong)((uVar4 >> 5) - 0x10);
    }
    uVar4 = puVar6[uVar7];
    if ((uVar4 == 0x1ffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("vlc != ( ((0x1ffff)&0x1ffff) | ((0)<<17) )",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4VlcDecoder.h"
                           ,0x7e,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    M4Bitstream::skip(this_00,uVar4 >> 0x11);
    uVar8 = uVar4 & 0x1ffff;
    if (uVar8 == 0x1bff) {
      uVar4 = M4Bitstream::show(this_00,2);
      if (uVar4 < 3) {
        M4Bitstream::skip(this_00,(uVar4 == 2) + 1);
        uVar8 = M4Bitstream::show(this_00,0xc);
        if (uVar8 < 8) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("bits >= 8",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4VlcDecoder.h"
                             ,0x93,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
LAB_148d1adef:
          uVar8 = (this->mVLCDecoder).mInterCodeTab.mVlcCodeTab[2][uVar8 - 8];
        }
        else if (uVar8 < 0x200) {
          if (uVar8 < 0x80) goto LAB_148d1adef;
          uVar8 = (this->mVLCDecoder).mInterCodeTab.mVlcCodeTab[1][(uVar8 >> 2) - 0x20];
        }
        else {
          uVar8 = (this->mVLCDecoder).mInterCodeTab.mVlcCodeTab[0][(uVar8 >> 5) - 0x10];
        }
        if ((uVar8 == 0x1ffff) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("vlc != ( ((0x1ffff)&0x1ffff) | ((0)<<17) )",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4VlcDecoder.h"
                               ,0x96,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        M4Bitstream::skip(this_00,uVar8 >> 0x11);
        uVar5 = uVar8 & 0xf;
        uVar9 = uVar8 >> 0xc & 1;
        uVar12 = uVar8 >> 4 & 0xff;
        if (uVar4 < 2) {
          uVar5 = uVar5 + M4VlcDecoder::mMaxLevel[(ulonglong)uVar9 + 2][uVar12];
        }
        else {
          uVar12 = uVar12 + 1 + (uint)M4VlcDecoder::mMaxRun[(ulonglong)uVar9 + 2][uVar5];
        }
        uVar4 = M4Bitstream::show(this_00,1);
        M4Bitstream::skip(this_00,1);
        uVar8 = -uVar5;
        if (uVar4 == 0) {
          uVar8 = uVar5;
        }
      }
      else {
        M4Bitstream::skip(this_00,2);
        uVar9 = M4Bitstream::show(this_00,1);
        M4Bitstream::skip(this_00,1);
        uVar12 = M4Bitstream::show(this_00,6);
        M4Bitstream::skip(this_00,6);
        M4Bitstream::skip(this_00,1);
        uVar8 = M4Bitstream::show(this_00,0xc);
        M4Bitstream::skip(this_00,0xc);
        M4Bitstream::skip(this_00,1);
        if ((uVar8 >> 0xb & 1) != 0) {
          uVar8 = uVar8 | 0xfffff000;
        }
      }
    }
    else {
      uVar12 = uVar8 >> 4 & 0xff;
      uVar9 = uVar8 >> 0xc & 1;
      uVar5 = M4Bitstream::show(this_00,1);
      M4Bitstream::skip(this_00,1);
      uVar8 = -(uVar4 & 0xf);
      if (uVar5 == 0) {
        uVar8 = uVar4 & 0xf;
      }
    }
    if ((0xffe < uVar8 + 0x7ff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(level >= -2047) && (level <= 2047) && \"getInterBlock: level overflow!!\""
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4BitstreamParser.h"
                           ,0xfb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((uVar12 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("run != -1 && \"getInterBlock: invalid run\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4BitstreamParser.h"
                           ,0xfc,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar10 = iVar11 + uVar12;
    if ((0x3f < iVar10) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("p<64",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4BitstreamParser.h"
                           ,0xfe,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar11 = iVar10 + 1;
    param_1[puVar1[iVar10]] = (short)uVar8;
    if (uVar9 != 0) {
      return;
    }
  } while( true );
}

// getMatrix @ 148d1b050

void __thiscall vdecmpeg4::M4BitstreamParser::getMatrix(M4BitstreamParser *this,uchar *param_1)

{
  M4Bitstream *this_00;
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar1 = 0;
  uVar2 = 0;
  do {
    uVar6 = uVar2;
    uVar4 = uVar1;
    this_00 = this->mBitstream;
    uVar3 = M4Bitstream::show(this_00,8);
    M4Bitstream::skip(this_00,8);
    uVar5 = (int)uVar4 + 1;
    param_1[this->mScanTable[0][uVar4]] = (uchar)uVar3;
    if (uVar3 == 0) break;
    uVar1 = (ulonglong)uVar5;
    uVar2 = (ulonglong)uVar3;
  } while (uVar5 < 0x40);
  do {
    uVar3 = (int)uVar4 + 1;
    param_1[this->mScanTable[0][uVar4]] = (uchar)uVar6;
    uVar4 = (ulonglong)uVar3;
  } while (uVar3 < 0x40);
  return;
}

// getMv @ 148d1b110

int __thiscall vdecmpeg4::M4BitstreamParser::getMv(M4BitstreamParser *this,ushort param_1)

{
  M4Bitstream *pMVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint *puVar8;
  int iVar9;
  
  pMVar1 = this->mBitstream;
  iVar9 = 1 << ((char)param_1 - 1U & 0x1f);
  uVar4 = M4Bitstream::show(pMVar1,1);
  M4Bitstream::skip(pMVar1,1);
  if (uVar4 == 0) {
    uVar4 = M4Bitstream::show(this->mBitstream,0xc);
    if (uVar4 < 0x200) {
      if (uVar4 < 0x80) {
        uVar7 = (ulonglong)(uVar4 - 4);
        puVar8 = M4VlcDecoder::mTabTMNMV2;
      }
      else {
        puVar8 = M4VlcDecoder::mTabTMNMV1;
        uVar7 = (ulonglong)((uVar4 >> 2) - 0x20);
      }
    }
    else {
      puVar8 = M4VlcDecoder::mTabTMNMV0;
      uVar7 = (ulonglong)((uVar4 >> 8) - 2);
    }
    M4Bitstream::skip(this->mBitstream,puVar8[uVar7] >> 0x11);
    uVar4 = (uint)(short)puVar8[uVar7];
  }
  else {
    uVar4 = 0;
  }
  uVar6 = uVar4;
  if ((iVar9 != 1) && (uVar4 != 0)) {
    if ((0x20 < param_1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("code <= 32U",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4BitstreamParser.h"
                           ,0x113,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar9 = (*pcVar2)();
      return iVar9;
    }
    pMVar1 = this->mBitstream;
    uVar5 = M4Bitstream::show(pMVar1,param_1 - 1);
    M4Bitstream::skip(pMVar1,param_1 - 1);
    uVar6 = -uVar4;
    if ((int)-uVar4 < 0) {
      uVar6 = uVar4;
    }
    uVar5 = (uVar6 - 1) * iVar9 + uVar5;
    uVar6 = ~uVar5;
    if (-1 < (int)uVar4) {
      uVar6 = uVar5 + 1;
    }
  }
  return uVar6;
}

// getTrajaPoint @ 148d1b270

int __thiscall vdecmpeg4::M4BitstreamParser::getTrajaPoint(M4BitstreamParser *this)

{
  M4Bitstream *pMVar1;
  uint uVar2;
  
  uVar2 = M4Bitstream::show(this->mBitstream,0xc);
  if ((int)uVar2 < 0x400) {
    M4Bitstream::skip(this->mBitstream,2);
    return 0;
  }
  if ((int)uVar2 < 0x600) {
    M4Bitstream::skip(this->mBitstream,3);
    pMVar1 = this->mBitstream;
    uVar2 = M4Bitstream::show(pMVar1,1);
    M4Bitstream::skip(pMVar1,1);
    if ((int)uVar2 < 1) {
      uVar2 = uVar2 - 1;
    }
    return uVar2;
  }
  if ((int)uVar2 < 0x800) {
    M4Bitstream::skip(this->mBitstream,3);
    pMVar1 = this->mBitstream;
    uVar2 = M4Bitstream::show(pMVar1,2);
    M4Bitstream::skip(pMVar1,2);
    if ((int)uVar2 < 2) {
      uVar2 = uVar2 - 3;
    }
    return uVar2;
  }
  if ((int)uVar2 < 0xa00) {
    M4Bitstream::skip(this->mBitstream,3);
    uVar2 = M4Bitstream::getBits(this->mBitstream,3);
    if ((int)uVar2 < 4) {
      return uVar2 - 7;
    }
  }
  else if ((int)uVar2 < 0xc00) {
    M4Bitstream::skip(this->mBitstream,3);
    uVar2 = M4Bitstream::getBits(this->mBitstream,4);
    if ((int)uVar2 < 8) {
      return uVar2 - 0xf;
    }
  }
  else if ((int)uVar2 < 0xe00) {
    M4Bitstream::skip(this->mBitstream,3);
    uVar2 = M4Bitstream::getBits(this->mBitstream,5);
    if ((int)uVar2 < 0x10) {
      return uVar2 - 0x1f;
    }
  }
  else if ((int)uVar2 < 0xf00) {
    M4Bitstream::skip(this->mBitstream,4);
    uVar2 = M4Bitstream::getBits(this->mBitstream,6);
    if ((int)uVar2 < 0x20) {
      return uVar2 - 0x3f;
    }
  }
  else if ((int)uVar2 < 0xf80) {
    M4Bitstream::skip(this->mBitstream,5);
    uVar2 = M4Bitstream::getBits(this->mBitstream,7);
    if ((int)uVar2 < 0x40) {
      return uVar2 - 0x7f;
    }
  }
  else if ((int)uVar2 < 0xfc0) {
    M4Bitstream::skip(this->mBitstream,6);
    uVar2 = M4Bitstream::getBits(this->mBitstream,8);
    if ((int)uVar2 < 0x80) {
      return uVar2 - 0xff;
    }
  }
  else if ((int)uVar2 < 0xfe0) {
    M4Bitstream::skip(this->mBitstream,7);
    uVar2 = M4Bitstream::getBits(this->mBitstream,9);
    if ((int)uVar2 < 0x100) {
      return uVar2 - 0x1ff;
    }
  }
  else if ((int)uVar2 < 0xff0) {
    M4Bitstream::skip(this->mBitstream,8);
    uVar2 = M4Bitstream::getBits(this->mBitstream,10);
    if ((int)uVar2 < 0x200) {
      return uVar2 - 0x3ff;
    }
  }
  else if ((int)uVar2 < 0xff8) {
    M4Bitstream::skip(this->mBitstream,9);
    uVar2 = M4Bitstream::getBits(this->mBitstream,0xb);
    if ((int)uVar2 < 0x400) {
      return uVar2 - 0x7ff;
    }
  }
  else if ((int)uVar2 < 0xffc) {
    M4Bitstream::skip(this->mBitstream,10);
    uVar2 = M4Bitstream::getBits(this->mBitstream,0xc);
    if ((int)uVar2 < 0x800) {
      return uVar2 - 0xfff;
    }
  }
  else if ((int)uVar2 < 0xffe) {
    M4Bitstream::skip(this->mBitstream,0xb);
    uVar2 = M4Bitstream::getBits(this->mBitstream,0xd);
    if ((int)uVar2 < 0x1000) {
      return uVar2 - 0x1fff;
    }
  }
  else if (uVar2 == 0xffe) {
    M4Bitstream::skip(this->mBitstream,0xc);
    uVar2 = M4Bitstream::getBits(this->mBitstream,0xe);
    if ((int)uVar2 < 0x2000) {
      return uVar2 - 0x3fff;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

// iFrame @ 148d1b680

int __thiscall vdecmpeg4::M4Decoder::iFrame(M4Decoder *this)

{
  uchar uVar1;
  M4Bitstream *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  ushort uVar10;
  M4_MB *pMVar11;
  int local_res8;
  uint local_res10 [2];
  
  (this->mCurrent->mImageInfo).mFrameType = VID_IMAGEINFO_FRAMETYPE_I;
  uVar10 = (this->mBitstreamParser).mHeaderInfo.mQuant;
  pMVar11 = this->mIPMacroblocks;
  local_res8 = 0;
  if (this->mMBHeight != 0) {
    do {
      iVar4 = 0;
      if (this->mMBWidth != 0) {
        do {
          pMVar11->mFlags = '\0';
          while( true ) {
            this_00 = (this->mBitstreamParser).mBitstream;
            uVar6 = this_00->mPos;
            uVar9 = 0xffffffff >> ((byte)uVar6 & 0x1f);
            if ((int)(uVar6 - 0x17) < 1) {
              uVar9 = (uVar9 & this_00->mAWord) >> (0x17 - (byte)uVar6 & 0x1f);
            }
            else {
              bVar8 = (byte)(uVar6 - 0x17);
              uVar9 = this_00->mBWord >> (0x20 - bVar8 & 0x1f) |
                      (uVar9 & this_00->mAWord) << (bVar8 & 0x1f);
            }
            if (uVar9 != 1) break;
            this_00->mTotalBits = this_00->mTotalBits + 9;
            this_00->mPos = uVar6 + 9;
            if (0x1f < uVar6 + 9) {
              this_00->mAWord = this_00->mBWord;
              if (this_00->mpStreamIO == (VIDStreamIO *)0x0) {
                uVar6 = this_00->mTail[2];
                this_00->mTail = this_00->mTail + 1;
                this_00->mBWord =
                     uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18
                ;
                this_00->mPos = this_00->mPos - 0x20;
              }
              else {
                M4Bitstream::ReadStreamBuffered(this_00,local_res10);
                this_00->mBWord =
                     (local_res10[0] & 0xff0000 | local_res10[0] >> 0x10) >> 8 |
                     (local_res10[0] << 0x10 | local_res10[0] & 0xff00) << 8;
                this_00->mPos = this_00->mPos - 0x20;
              }
            }
          }
          M4Bitstream::skip(this_00,M4VlcDecoder::mTabCbpCIntra[uVar9 >> 3] >> 0x11);
          uVar6 = M4VlcDecoder::mTabCbpCIntra[uVar9 >> 3];
          pMVar11->mMode = '\0';
          bVar8 = (byte)uVar6 & 7;
          *(byte *)pMVar11 = *(byte *)pMVar11 | bVar8;
          uVar1 = ""[pMVar11->mMode];
          pMVar11->mMode = bVar8;
          pMVar11->mModeIntra = uVar1;
          if ((bVar8 == 7) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("mb->mMode != M4_MBMODE_STUFFING",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Decoder.cpp"
                                 ,0x246,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            iVar4 = (*pcVar2)();
            return iVar4;
          }
          if (pMVar11->mMode == 7) {
            VIDPrintf(this,"M4Decoder::iFrame(): Stuffing not supported!\n");
            return -0x7fffefff;
          }
          uVar9 = M4Bitstream::show(&this->mBitstream,1);
          M4Bitstream::skip(&this->mBitstream,1);
          uVar5 = M4Bitstream::show((this->mBitstreamParser).mBitstream,6);
          M4Bitstream::skip((this->mBitstreamParser).mBitstream,
                            M4VlcDecoder::mTabCbpY[uVar5] >> 0x11);
          pMVar11->mCbp = (byte)((int)uVar6 >> 4) | (char)M4VlcDecoder::mTabCbpY[uVar5] << 2;
          if (pMVar11->mMode == 4) {
            uVar6 = M4Bitstream::show(&this->mBitstream,2);
            M4Bitstream::skip(&this->mBitstream,2);
            uVar10 = uVar10 + (short)mDequantTable[uVar6];
            if (uVar10 < 0x20) {
              if (uVar10 == 0) {
                uVar10 = 1;
              }
            }
            else {
              uVar10 = 0x1f;
            }
          }
          pMVar11->field_0x1 = pMVar11->field_0x1 ^ ((byte)uVar10 ^ pMVar11->mQuant) & 0x1f;
          mbIntra(this,pMVar11,iVar4,local_res8,uVar9 != 0,(uint)pMVar11->mCbp,(byte)uVar10);
          uVar6 = (this->mBitstream).mPos & 7;
          if (uVar6 == 0) {
            uVar6 = M4Bitstream::show(&this->mBitstream,8);
            if (uVar6 == 0x7f) {
              uVar6 = 0x19;
              goto LAB_148d1b974;
            }
            uVar6 = M4Bitstream::show(&this->mBitstream,0x11);
          }
          else {
            uVar6 = 0x19 - uVar6;
LAB_148d1b974:
            uVar6 = M4Bitstream::show(&this->mBitstream,uVar6);
            uVar6 = uVar6 & 0x1ffff;
          }
          if (uVar6 == 1) {
            uVar6 = (this->mBitstream).mPos & 7;
            if (uVar6 == 0) {
              uVar6 = M4Bitstream::show(&this->mBitstream,8);
              bVar3 = uVar6 == 0x7f;
            }
            else {
              uVar9 = M4Bitstream::show(&this->mBitstream,8 - uVar6);
              bVar3 = uVar9 == *(byte *)((longlong)
                                         &`public:_bool___cdecl_vdecmpeg4::M4Bitstream::validStuffingBits(void)___ptr64'
                                          ::__l2::stuffing + (ulonglong)uVar6);
            }
            if (bVar3) {
              iVar7 = M4BitstreamParser::videoPacketHeader(&this->mBitstreamParser);
              if (iVar7 != 0) {
                return iVar7;
              }
              if (((this->mBitstreamParser).mResyncMacroblockNumber !=
                   (uint)this->mMBWidth * local_res8 + 1 + iVar4) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("mBitstreamParser.mResyncMacroblockNumber == y * mMBWidth + x + 1"
                                     ,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Decoder.cpp"
                                     ,0x271,L""), bVar3)) {
                pcVar2 = (code *)swi(3);
                iVar4 = (*pcVar2)();
                return iVar4;
              }
            }
          }
          iVar4 = iVar4 + 1;
          pMVar11 = pMVar11 + 1;
        } while (iVar4 < (int)(uint)this->mMBWidth);
      }
      local_res8 = local_res8 + 1;
    } while (local_res8 < (int)(uint)this->mMBHeight);
  }
  M4Bitstream::nextStartCode(&this->mBitstream);
  return 0;
}

// init @ 148d1ba90

void __thiscall vdecmpeg4::M4Bitstream::init(M4Bitstream *this,VIDStreamIO *param_1,uint param_2)

{
  M4MemHandler *pMVar1;
  code *pcVar2;
  bool bVar3;
  uchar *puVar4;
  uint local_res18 [4];
  
  if (param_2 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("streamBufferBytes > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Bitstream.h"
                       ,0xf1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar4 = this->mpInternalBuffer;
  this->mpStreamIO = param_1;
  if (puVar4 != (uchar *)0x0) {
    pMVar1 = this->mpMemSys;
    if (pMVar1->mFreeCB == (_func___cdecl_void_void_ptr *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("mFreeCB",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Memory.h"
                         ,0x36,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (*pMVar1->mFreeCB)(puVar4);
  }
  pMVar1 = this->mpMemSys;
  this->mInternalBufferBytes = param_2;
  if (pMVar1->mAllocCB == (_func___cdecl_void_ptr_uint_uint *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("mAllocCB",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Memory.h"
                       ,0x2e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar4 = (*pMVar1->mAllocCB)(param_2,0x20);
  this->mpInternalBuffer = puVar4;
  this->mInternalBufferCurrentBytes = 0;
  this->mInternalBufferIndex = 0;
  ReadStreamBuffered(this,local_res18);
  this->mAWord = (local_res18[0] & 0xff0000 | local_res18[0] >> 0x10) >> 8 |
                 (local_res18[0] & 0xff00 | local_res18[0] << 0x10) << 8;
  ReadStreamBuffered(this,local_res18);
  this->mPos = 0;
  this->mLength = 0;
  this->mTail = (uint *)0x0;
  this->mStart = (uint *)0x0;
  this->mBWord = (local_res18[0] & 0xff0000 | local_res18[0] >> 0x10) >> 8 |
                 (local_res18[0] & 0xff00 | local_res18[0] << 0x10) << 8;
  this->mTotalBits = 0;
  return;
}

// init @ 148d1bc10

int __thiscall
vdecmpeg4::M4BitstreamParser::init(M4BitstreamParser *this,M4Decoder *param_1,M4Bitstream *param_2)

{
  M4Decoder *pMVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uchar *puVar5;
  
  this->mDecoder = param_1;
  this->mScanTable[0] = mScanTableInput[0];
  this->mBitstream = param_2;
  this->mScanTable[1] = mScanTableInput[1];
  this->mScanTable[2] = mScanTableInput[2];
  if (((param_1->mMemSys).mAllocCB == (_func___cdecl_void_ptr_uint_uint *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("mAllocCB",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Memory.h"
                         ,0x2e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  puVar5 = (*(param_1->mMemSys).mAllocCB)(0x40,0x20);
  (this->mHeaderInfo).mInvQuantIntra = puVar5;
  if (puVar5 != (uchar *)0x0) {
    pMVar1 = this->mDecoder;
    if (((pMVar1->mMemSys).mAllocCB == (_func___cdecl_void_ptr_uint_uint *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("mAllocCB",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Memory.h"
                           ,0x2e,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    puVar5 = (*(pMVar1->mMemSys).mAllocCB)(0x40,0x20);
    (this->mHeaderInfo).mInvQuantInter = puVar5;
    if (puVar5 != (uchar *)0x0) {
      (this->mVLCDecoder).mIntraCodeTab.mVlcCodeTab[0] = M4VlcDecoder::mTabDCT3D3;
      (this->mVLCDecoder).mIntraCodeTab.mVlcCodeTab[1] = M4VlcDecoder::mTabDCT3D4;
      (this->mVLCDecoder).mIntraCodeTab.mVlcCodeTab[2] = M4VlcDecoder::mTabDCT3D5;
      (this->mVLCDecoder).mInterCodeTab.mVlcCodeTab[0] = M4VlcDecoder::mTabDCT3D0;
      (this->mVLCDecoder).mInterCodeTab.mVlcCodeTab[1] = M4VlcDecoder::mTabDCT3D1;
      (this->mVLCDecoder).mInterCodeTab.mVlcCodeTab[2] = M4VlcDecoder::mTabDCT3D2;
      (this->mVLCDecoder).mIntraCodeTab.mMaxLevel = M4VlcDecoder::mMaxLevel;
      (this->mVLCDecoder).mInterCodeTab.mMaxLevel = M4VlcDecoder::mMaxLevel;
      (this->mVLCDecoder).mIntraCodeTab.mMaxRun = M4VlcDecoder::mMaxRun;
      (this->mVLCDecoder).mInterCodeTab.mMaxRun = M4VlcDecoder::mMaxRun;
      reset(this);
      return 0;
    }
  }
  pMVar1 = this->mDecoder;
  puVar5 = (this->mHeaderInfo).mInvQuantIntra;
  if (((pMVar1->mMemSys).mFreeCB == (_func___cdecl_void_void_ptr *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("mFreeCB",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Memory.h"
                         ,0x36,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  if (puVar5 != (uchar *)0x0) {
    (*(pMVar1->mMemSys).mFreeCB)(puVar5);
  }
  pMVar1 = this->mDecoder;
  puVar5 = (this->mHeaderInfo).mInvQuantInter;
  if (((pMVar1->mMemSys).mFreeCB == (_func___cdecl_void_void_ptr *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("mFreeCB",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Memory.h"
                         ,0x36,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  if (puVar5 != (uchar *)0x0) {
    (*(pMVar1->mMemSys).mFreeCB)(puVar5);
  }
  (this->mHeaderInfo).mFlags = (<unnamed_type_mFlags>)0x0;
  *(undefined8 *)&(this->mHeaderInfo).mQuant = 0;
  (this->mHeaderInfo).mInvQuantIntra = (uchar *)0x0;
  (this->mHeaderInfo).mInvQuantInter = (uchar *)0x0;
  return -0x7ffffffe;
}

// init @ 148d1be70

int __thiscall vdecmpeg4::M4Decoder::init(M4Decoder *this,VIDDecoderSetup *param_1)

{
  ushort uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  M4BitstreamCacheEntry *pMVar6;
  M4MotionVectorMgr *pMVar7;
  short *psVar8;
  
  if (param_1 == (VIDDecoderSetup *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("setup",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Decoder.cpp"
                       ,0xaf,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  this->mFrameCounter = 0;
  this->mWidth = 0;
  this->mHeight = 0;
  uVar2 = param_1->flags;
  this->mDecoderFlags = uVar2;
  if ((uVar2 & 1) == 0) {
    this->mNumVidImages = 3;
  }
  else {
    uVar1 = param_1->numOfVidBuffers;
    this->mNumVidImages = (uint)uVar1;
    if (uVar1 < 3) {
      return -0x7ffffdff;
    }
  }
  iVar5 = M4BitstreamParser::init(&this->mBitstreamParser,this,&this->mBitstream);
  if (iVar5 == 0) {
    if ((this->mMemSys).mAllocCB == (_func___cdecl_void_ptr_uint_uint *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("mAllocCB",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Memory.h"
                         ,0x2e,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    pMVar6 = (*(this->mMemSys).mAllocCB)(0x310,0x80);
    (this->mBitstreamCache).mpCacheEntry = pMVar6;
    iVar5 = -0x7ffffffe;
    if (pMVar6 != (M4BitstreamCacheEntry *)0x0) {
      if ((this->mMemSys).mAllocCB == (_func___cdecl_void_ptr_uint_uint *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("mAllocCB",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Memory.h"
                           ,0x2e,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          iVar5 = (*pcVar3)();
          return iVar5;
        }
      }
      pMVar7 = (*(this->mMemSys).mAllocCB)(0x18,0x20);
      if (pMVar7 == (M4MotionVectorMgr *)0x0) {
        this->mMotVecMgr = (M4MotionVectorMgr *)0x0;
      }
      else {
        pMVar7->mDecoder = this;
        this->mMotVecMgr = pMVar7;
        if ((this->mXCommand).mpDctWorkData != (short *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("mpDctWorkData == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4XCmdSingleThread.cpp"
                             ,0x2e,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            iVar5 = (*pcVar3)();
            return iVar5;
          }
        }
        (this->mXCommand).mpDecoder = this;
        if ((this->mMemSys).mAllocCB == (_func___cdecl_void_ptr_uint_uint *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("mAllocCB",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Memory.h"
                             ,0x2e,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            iVar5 = (*pcVar3)();
            return iVar5;
          }
        }
        psVar8 = (*(this->mMemSys).mAllocCB)(0x300,0x20);
        (this->mXCommand).mpDctWorkData = psVar8;
        if (psVar8 != (short *)0x0) {
          return 0;
        }
        (this->mXCommand).mpDecoder = (M4Decoder *)0x0;
      }
    }
  }
  freeStuff(this);
  return iVar5;
}

// init @ 148d1c080

void __thiscall vdecmpeg4::M4MotionVectorMgr::init(M4MotionVectorMgr *this)

{
  byte bVar1;
  
  bVar1 = (char)(this->mDecoder->mBitstreamParser).mFcodeForward - 1;
  this->mMvClipHigh = (0x20 << (bVar1 & 0x1f)) + -1;
  this->mMvClipLow = -0x20 << (bVar1 & 0x1f);
  this->mMvClipRange = 0x40 << (bVar1 & 0x1f);
  return;
}

// init @ 148d1c0c0

void __thiscall vdecmpeg4::M4VlcDecoder::init(M4VlcDecoder *this)

{
  (this->mIntraCodeTab).mVlcCodeTab[0] = mTabDCT3D3;
  (this->mIntraCodeTab).mVlcCodeTab[1] = mTabDCT3D4;
  (this->mIntraCodeTab).mVlcCodeTab[2] = mTabDCT3D5;
  (this->mInterCodeTab).mVlcCodeTab[0] = mTabDCT3D0;
  (this->mInterCodeTab).mVlcCodeTab[1] = mTabDCT3D1;
  (this->mInterCodeTab).mVlcCodeTab[2] = mTabDCT3D2;
  (this->mIntraCodeTab).mMaxLevel = mMaxLevel;
  (this->mInterCodeTab).mMaxLevel = mMaxLevel;
  (this->mIntraCodeTab).mMaxRun = mMaxRun;
  (this->mInterCodeTab).mMaxRun = mMaxRun;
  return;
}

// initBuffers @ 148d1c130

int __thiscall vdecmpeg4::M4Decoder::initBuffers(M4Decoder *this,short param_1,short param_2)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  M4Image **ppMVar8;
  M4Image *pMVar9;
  M4_MB *pMVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  
  if (((param_1 < 0x20) || (param_2 < 0x20)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("width>=32 && height>=32",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Decoder.cpp"
                         ,0xe5,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  if (((param_1 & 0xfU) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(width &0xf)==0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Decoder.cpp"
                         ,0xe7,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  if (((param_2 & 0xfU) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(height&0xf)==0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Decoder.cpp"
                         ,0xe8,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  if (((this->mpVidImage != (M4Image **)0x0) && (param_1 == this->mWidth)) &&
     (param_2 == this->mHeight)) {
    return 0;
  }
  this->mWidth = param_1;
  this->mHeight = param_2;
  freeBuffers(this);
  uVar13 = this->mNumVidImages;
  if (((this->mMemSys).mAllocCB == (_func___cdecl_void_ptr_uint_uint *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("mAllocCB",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Memory.h"
                         ,0x2e,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  ppMVar8 = (*(this->mMemSys).mAllocCB)(uVar13 * 8,0x20);
  uVar12 = 0;
  this->mpVidImage = ppMVar8;
  if (this->mNumVidImages != 0) {
    do {
      pMVar9 = M4Image::create(this,this->mWidth,this->mHeight,true);
      this->mpVidImage[uVar12] = pMVar9;
      ppMVar8 = this->mpVidImage;
      if (ppMVar8[uVar12] == (M4Image *)0x0) goto LAB_148d1c487;
      uVar13 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar13;
    } while (uVar13 < this->mNumVidImages);
  }
  this->mCurrent = *ppMVar8;
  pMVar9 = ppMVar8[1];
  this->mReference[0] = pMVar9;
  pMVar9->mRefCount = pMVar9->mRefCount + 1;
  pMVar9 = this->mpVidImage[2];
  this->mReference[1] = pMVar9;
  pMVar9->mRefCount = pMVar9->mRefCount + 1;
  sVar1 = this->mHeight;
  if (((this->mBitstreamParser).mVOLInfo.mWidth != this->mWidth) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("mVOLInfo.mWidth == width",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4BitstreamParser.cpp"
                         ,0xee,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  if (((this->mBitstreamParser).mVOLInfo.mHeight != sVar1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("mVOLInfo.mHeight == height",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4BitstreamParser.cpp"
                         ,0xef,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  iVar11 = (int)(this->mBitstreamParser).mVOLInfo.mWidth;
  iVar6 = (int)(this->mBitstreamParser).mVOLInfo.mHeight;
  (this->mBitstreamParser).mRefVop[2].y = iVar6;
  (this->mBitstreamParser).mRefVop[3].y = iVar6;
  (this->mBitstreamParser).mRefVop[1].x = iVar11;
  (this->mBitstreamParser).mRefVop[3].x = iVar11;
  (this->mBitstreamParser).mRefVop[0].x = 0;
  (this->mBitstreamParser).mRefVop[0].y = 0;
  *(undefined8 *)&(this->mBitstreamParser).mRefVop[1].y = 0;
  uVar13 = this->mWidth + 0xf >> 4;
  this->mMBWidth = (ushort)uVar13;
  uVar7 = this->mHeight + 0xf >> 4;
  this->mMBHeight = (ushort)uVar7;
  if (((this->mMemSys).mAllocCB == (_func___cdecl_void_ptr_uint_uint *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("mAllocCB",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Memory.h"
                         ,0x2e,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  pMVar10 = (*(this->mMemSys).mAllocCB)((uVar13 & 0xffff) * (uVar7 & 0xffff) * 0x100,0x20);
  this->mIPMacroblocks = pMVar10;
  if (pMVar10 != (M4_MB *)0x0) {
    pMVar9 = M4Image::create(this,this->mWidth,this->mHeight,true);
    this->mTempImage[0] = pMVar9;
    pMVar9 = M4Image::create(this,this->mWidth,this->mHeight,true);
    this->mTempImage[1] = pMVar9;
    uVar2 = this->mMBHeight;
    uVar3 = this->mMBWidth;
    if (((this->mMemSys).mAllocCB == (_func___cdecl_void_ptr_uint_uint *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("mAllocCB",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Memory.h"
                           ,0x2e,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    pMVar10 = (*(this->mMemSys).mAllocCB)((uint)uVar2 * (uint)uVar3 * 0x100,0x20);
    this->mBMacroblocks = pMVar10;
    if (((this->mTempImage[0] != (M4Image *)0x0) && (this->mTempImage[1] != (M4Image *)0x0)) &&
       (pMVar10 != (M4_MB *)0x0)) {
      this->mCurrent = (M4Image *)0x0;
      return 0;
    }
  }
LAB_148d1c487:
  freeBuffers(this);
  return -0x7ffffffe;
}

// initFrame @ 148d1c4b0

void __thiscall
vdecmpeg4::M4BitstreamParser::initFrame(M4BitstreamParser *this,short param_1,short param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  if ((this->mVOLInfo).mWidth != param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("mVOLInfo.mWidth == width",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4BitstreamParser.cpp"
                       ,0xee,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->mVOLInfo).mHeight != param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("mVOLInfo.mHeight == height",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4BitstreamParser.cpp"
                       ,0xef,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = (int)(this->mVOLInfo).mWidth;
  this->mRefVop[0].x = 0;
  this->mRefVop[0].y = 0;
  *(undefined8 *)&this->mRefVop[1].y = 0;
  iVar3 = (int)(this->mVOLInfo).mHeight;
  this->mRefVop[2].y = iVar3;
  this->mRefVop[3].y = iVar3;
  this->mRefVop[1].x = iVar4;
  this->mRefVop[3].x = iVar4;
  return;
}

// isEof @ 148d1c560

bool __thiscall vdecmpeg4::M4Bitstream::isEof(M4Bitstream *this)

{
  undefined1 uVar1;
  
  if (this->mpStreamIO != (VIDStreamIO *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d1c56f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((longlong)*this->mpStreamIO + 8))();
    return (bool)uVar1;
  }
  return (longlong)(ulonglong)this->mLength <=
         (longlong)
         (((longlong)this->mTail - (longlong)this->mStart >> 2) * 0x20 + (ulonglong)this->mPos) >> 3
  ;
}

// mbInter @ 148d1c5a0

void __thiscall
vdecmpeg4::M4Decoder::mbInter
          (M4Decoder *this,M4_MB *param_1,int param_2,int param_3,uint param_4,MV_PREDICTION param_5
          ,uint param_6)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  M4BitstreamCacheEntry *pMVar5;
  
  if (1 < param_6) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("refImgNo < 2",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Decoder.cpp"
                       ,0x432,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar3 = param_1->mMode;
  if ((bVar3 != 0) && (1 < (byte)(bVar3 - 1))) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("mb->mMode == M4_MBMODE_INTER || mb->mMode == M4_MBMODE_INTER_Q || mb->mMode == M4_MBMODE_INTER4V"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Decoder.cpp"
                       ,0x433,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar4 = 0;
  pMVar5 = (M4BitstreamCacheEntry *)0x0;
  if (param_4 != 0) {
    memset(((this->mBitstreamCache).mpCacheEntry)->mDctFromBitstream,0,0x300);
    pMVar5 = (this->mBitstreamCache).mpCacheEntry;
    do {
      if ((param_4 >> (5 - uVar4 & 0x1f) & 1) != 0) {
        M4BitstreamParser::getInterBlockNoAsm
                  (&this->mBitstreamParser,pMVar5->mDctFromBitstream + (uVar4 << 6));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 6);
  }
  M4XCmdSingleThread::XUpdateInterMB
            (&this->mXCommand,param_1,param_2,param_3,pMVar5,param_5,param_6);
  return;
}

// mbInterpolate @ 148d1c6e0

void __thiscall
vdecmpeg4::M4Decoder::mbInterpolate
          (M4Decoder *this,uint param_1,uint param_2,M4_MB *param_3,int param_4,int param_5,
          uint param_6,ushort param_7)

{
  uint uVar1;
  M4BitstreamCacheEntry *pMVar2;
  
  uVar1 = 0;
  pMVar2 = (M4BitstreamCacheEntry *)0x0;
  if (param_6 != 0) {
    memset(((this->mBitstreamCache).mpCacheEntry)->mDctFromBitstream,0,0x300);
    pMVar2 = (this->mBitstreamCache).mpCacheEntry;
    do {
      if ((param_6 >> (5 - uVar1 & 0x1f) & 1) != 0) {
        M4BitstreamParser::getInterBlockNoAsm
                  (&this->mBitstreamParser,pMVar2->mDctFromBitstream + (uVar1 << 6));
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 6);
  }
  M4XCmdSingleThread::XInterpolateMB
            (&this->mXCommand,param_3,param_4,param_5,pMVar2,param_1,param_2,param_7);
  return;
}

// mbIntra @ 148d1c7e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
vdecmpeg4::M4Decoder::mbIntra
          (M4Decoder *this,M4_MB *param_1,int param_2,int param_3,bool param_4,uint param_5,
          uchar param_6)

{
  M4Bitstream *pMVar1;
  uint *puVar2;
  code *pcVar3;
  int iVar4;
  M4BitstreamCacheEntry *pMVar5;
  ushort *puVar6;
  byte bVar7;
  bool bVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  short sVar13;
  uchar *puVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  undefined1 auStackY_e8 [32];
  uint local_a8;
  int local_a4;
  uint local_a0;
  uint local_9c;
  int local_98;
  M4BitstreamCacheEntry *local_90;
  uint local_88;
  int local_84;
  int local_80;
  uchar *local_78;
  M4_MB *local_70;
  ushort *local_68;
  short local_60 [8];
  ulonglong local_50;
  ulonglong uVar12;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  bVar7 = param_1->mMode;
  local_98 = param_3;
  local_80 = param_2;
  local_70 = param_1;
  if (((bVar7 != 3) && (bVar7 != 4)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("mb->mMode == M4_MBMODE_INTRA || mb->mMode == M4_MBMODE_INTRA_Q",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Decoder.cpp"
                         ,0x3ec,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((!(bool)param_1->mModeIntra) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("mb->mModeIntra",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Decoder.cpp"
                         ,0x3ed,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  memset(((this->mBitstreamCache).mpCacheEntry)->mDctFromBitstream,0,0x300);
  local_90 = (this->mBitstreamCache).mpCacheEntry;
  puVar14 = param_1->mACPredDirections;
  param_1->mFMv[0].x = 0;
  param_1->mFMv[0].y = 0;
  param_1->mFMv[1].x = 0;
  param_1->mFMv[1].y = 0;
  uVar18 = 0;
  param_1->mFMv[2].x = 0;
  param_1->mFMv[2].y = 0;
  param_1->mFMv[3].x = 0;
  param_1->mFMv[3].y = 0;
  param_1->mMvResidual = '\0';
  local_68 = local_90->mDcScaler;
  local_9c = 0;
  local_a0 = 0;
  local_a8 = 0x20;
  do {
    uVar16 = local_a0;
    bVar7 = param_1->mQuant;
    if ((byte)(bVar7 - 1) < 4) {
      uVar9 = 8;
    }
    else if ((bVar7 < 0x19) && (3 < local_a0)) {
      uVar9 = (ushort)(bVar7 + 0xd) >> 1;
    }
    else if (bVar7 < 9) {
      uVar9 = (ushort)bVar7 * 2;
    }
    else {
      uVar9 = (ushort)bVar7;
      if (bVar7 < 0x19) {
        uVar9 = uVar9 + 8;
      }
      else if (local_a0 < 4) {
        uVar9 = uVar9 * 2 - 0x10;
      }
      else {
        uVar9 = uVar9 - 6;
      }
    }
    *local_68 = uVar9;
    local_78 = puVar14;
    M4PredictionInit(this->mIPMacroblocks,param_2,local_98,(uint)this->mMBWidth,local_a0,
                     param_1->mQuant,uVar9,local_60);
    if (!param_4) {
      *puVar14 = 0;
    }
    iVar17 = 0;
    if ((uint)param_6 < (this->mBitstreamParser).mIntraDCThreshold) {
      pMVar1 = (this->mBitstreamParser).mBitstream;
      if (uVar16 < 4) {
        uVar10 = M4Bitstream::show(pMVar1,0xb);
        uVar12 = (ulonglong)uVar10;
        uVar15 = 0xb;
        do {
          if ((uint)uVar12 == 1) {
            M4Bitstream::skip((this->mBitstreamParser).mBitstream,uVar15);
            uVar15 = uVar15 + 1;
            goto LAB_148d1ca50;
          }
          uVar12 = (ulonglong)((uint)uVar12 >> 1);
          uVar15 = uVar15 - 1;
        } while (3 < uVar15);
        M4Bitstream::skip((this->mBitstreamParser).mBitstream,
                          M4VlcDecoder::mDCLumTab[uVar12] >> 0x11);
        uVar15 = M4VlcDecoder::mDCLumTab[uVar12] & 0x1ffff;
      }
      else {
        uVar10 = M4Bitstream::show(pMVar1,0xc);
        uVar15 = 0xc;
        do {
          if (uVar10 == 1) {
            M4Bitstream::skip((this->mBitstreamParser).mBitstream,uVar15);
            goto LAB_148d1ca50;
          }
          uVar10 = uVar10 >> 1;
          uVar15 = uVar15 - 1;
        } while (2 < uVar15);
        pMVar1 = (this->mBitstreamParser).mBitstream;
        uVar15 = M4Bitstream::show(pMVar1,2);
        M4Bitstream::skip(pMVar1,2);
        uVar15 = 3 - uVar15;
      }
LAB_148d1ca50:
      if (uVar15 == 0) {
        sVar13 = 0;
      }
      else {
        if ((0x1f < uVar15) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("dc_size < 32U",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4BitstreamParser.h"
                               ,0xaf,L""), bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pMVar1 = (this->mBitstreamParser).mBitstream;
        uVar10 = M4Bitstream::show(pMVar1,uVar15);
        M4Bitstream::skip(pMVar1,uVar15);
        if ((int)uVar10 >> ((byte)uVar15 - 1 & 0x1f) == 0) {
          uVar10 = -((1 << ((byte)uVar15 & 0x1f)) - 1U ^ uVar10);
        }
        sVar13 = (short)uVar10;
        if (8 < (int)uVar15) {
          puVar2 = &(this->mBitstream).mPos;
          *puVar2 = *puVar2 + 1;
          puVar2 = &(this->mBitstream).mTotalBits;
          *puVar2 = *puVar2 + 1;
          if (0x1f < (this->mBitstream).mPos) {
            (this->mBitstream).mAWord = (this->mBitstream).mBWord;
            if ((this->mBitstream).mpStreamIO == (VIDStreamIO *)0x0) {
              puVar2 = (this->mBitstream).mTail;
              uVar10 = puVar2[2];
              (this->mBitstream).mTail = puVar2 + 1;
              uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                       uVar10 << 0x18;
            }
            else {
              M4Bitstream::ReadStreamBuffered(&this->mBitstream,&local_88);
              uVar10 = (local_88 & 0xff0000 | local_88 >> 0x10) >> 8 |
                       (local_88 << 0x10 | local_88 & 0xff00) << 8;
            }
            (this->mBitstream).mBWord = uVar10;
            puVar2 = &(this->mBitstream).mPos;
            *puVar2 = *puVar2 - 0x20;
          }
        }
      }
      iVar17 = 1;
      local_90->mDctFromBitstream[uVar18] = sVar13;
      param_1 = local_70;
      puVar14 = local_78;
    }
    pMVar5 = local_90;
    if ((param_5 & local_a8) != 0) {
      puVar14 = (this->mBitstreamParser).mScanTable[*puVar14];
      do {
        iVar11 = M4VlcDecoder::getCoeffIntraNoAsm
                           (&(this->mBitstreamParser).mVLCDecoder,&local_a4,&local_84,
                            (this->mBitstreamParser).mBitstream);
        if ((0xffe < iVar11 + 0x7ffU) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(level >= -2047) && (level <= 2047) && \"getIntraBlock: intra_overflow!!\""
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4BitstreamParser.h"
                               ,0xe7,L""), bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar4 = local_a4;
        if ((local_a4 == -1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("run != -1 && \"getIntraBlock: invalid run\"",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4BitstreamParser.h"
                               ,0xe8,L""), bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((iVar4 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("run >= 0 && \"getIntraBlock: invalid run\"",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4BitstreamParser.h"
                               ,0xe9,L""), bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar16 = iVar17 + iVar4;
        if ((0x3f < uVar16) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("startCoeff<64",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4BitstreamParser.h"
                               ,0xeb,L""), bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar17 = uVar16 + 1;
        pMVar5->mDctFromBitstream[puVar14[uVar16] + uVar18] = (short)iVar11;
      } while (local_84 == 0);
      uVar18 = (ulonglong)local_9c;
      param_1 = local_70;
      puVar14 = local_78;
      param_2 = local_80;
      uVar16 = local_a0;
    }
    puVar6 = local_68;
    M4PredictionAdd(param_1,local_90->mDctFromBitstream + uVar18,uVar16,*local_68,local_60);
    local_a0 = uVar16 + 1;
    local_a8 = local_a8 >> 1;
    puVar14 = puVar14 + 1;
    local_68 = puVar6 + 1;
    local_9c = (int)uVar18 + 0x40;
    uVar18 = (ulonglong)local_9c;
    if (5 < local_a0) {
      local_78 = puVar14;
      M4XCmdSingleThread::XUpdateIntraMB(&this->mXCommand,param_1,param_2,local_98,local_90);
      return;
    }
  } while( true );
}

// nextStartCode @ 148d1cd50

void __thiscall vdecmpeg4::M4Bitstream::nextStartCode(M4Bitstream *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  uVar4 = show(this,1);
  skip(this,1);
  if ((uVar4 != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("zeroBit == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Bitstream.h"
                         ,0x168,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar1 = (byte)this->mPos;
  while( true ) {
    if ((bVar1 & 7) == 0) {
      return;
    }
    uVar4 = show(this,1);
    skip(this,1);
    if ((uVar4 != 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("oneBit == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Bitstream.h"
                           ,0x16d,L""), bVar3)) break;
    bVar1 = (byte)this->mPos;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// pFrame @ 148d1ce10

int __thiscall vdecmpeg4::M4Decoder::pFrame(M4Decoder *this,bool param_1)

{
  uchar *puVar1;
  uchar uVar2;
  short sVar3;
  ushort uVar4;
  M4MotionVectorMgr *pMVar5;
  M4Image *pMVar6;
  M4Image *pMVar7;
  undefined8 uVar8;
  M4Bitstream *this_00;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  uchar *puVar18;
  uint uVar19;
  uint *puVar20;
  M4_MB *pMVar21;
  uchar *puVar22;
  int iVar23;
  int iVar24;
  int local_res8;
  int local_res18;
  uint local_res20 [2];
  
  (this->mCurrent->mImageInfo).mFrameType = (uint)param_1 * 2 + VID_IMAGEINFO_FRAMETYPE_P;
  pMVar5 = this->mMotVecMgr;
  bVar15 = (char)(pMVar5->mDecoder->mBitstreamParser).mFcodeForward - 1;
  pMVar5->mMvClipHigh = (0x20 << (bVar15 & 0x1f)) + -1;
  pMVar5->mMvClipLow = -0x20 << (bVar15 & 0x1f);
  pMVar5->mMvClipRange = 0x40 << (bVar15 & 0x1f);
  M4ImageCreatePadding((this->mReference[0]->mImage)._private);
  bVar15 = (byte)(this->mBitstreamParser).mHeaderInfo.mQuant;
  pMVar21 = this->mIPMacroblocks;
  local_res18 = 0;
  if (this->mMBHeight != 0) {
    do {
      iVar13 = 0;
      if (this->mMBWidth != 0) {
        local_res8 = 0;
        do {
          pMVar21->mFlags = '\0';
          uVar11 = M4Bitstream::show(&this->mBitstream,1);
          M4Bitstream::skip(&this->mBitstream,1);
          if (uVar11 == 0) {
            while( true ) {
              this_00 = (this->mBitstreamParser).mBitstream;
              uVar11 = this_00->mPos;
              bVar16 = 0x17 - (byte)uVar11;
              uVar19 = 0xffffffffU >> ((byte)uVar11 & 0x1f) & this_00->mAWord;
              iVar12 = uVar11 - 0x17;
              bVar17 = (byte)iVar12;
              if (iVar12 < 1) {
                uVar14 = uVar19 >> (bVar16 & 0x1f);
              }
              else {
                uVar14 = uVar19 << (bVar17 & 0x1f) | this_00->mBWord >> (0x20 - bVar17 & 0x1f);
              }
              if (0x100 < uVar14) break;
              if (iVar12 < 1) {
                uVar19 = uVar19 >> (bVar16 & 0x1f);
              }
              else {
                uVar19 = uVar19 << (bVar17 & 0x1f) | this_00->mBWord >> (0x20 - bVar17 & 0x1f);
              }
              puVar20 = &this_00->mBWord;
              if (uVar19 != 1) goto LAB_148d1d0e8;
              this_00->mTotalBits = this_00->mTotalBits + 9;
              this_00->mPos = uVar11 + 9;
              if (0x1f < uVar11 + 9) {
                this_00->mAWord = *puVar20;
                if (this_00->mpStreamIO == (VIDStreamIO *)0x0) {
                  uVar11 = this_00->mTail[2];
                  this_00->mTail = this_00->mTail + 1;
                  *puVar20 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                             uVar11 << 0x18;
                  this_00->mPos = this_00->mPos - 0x20;
                }
                else {
                  M4Bitstream::ReadStreamBuffered(this_00,local_res20);
                  *puVar20 = (local_res20[0] & 0xff0000 | local_res20[0] >> 0x10) >> 8 |
                             (local_res20[0] << 0x10 | local_res20[0] & 0xff00) << 8;
                  this_00->mPos = this_00->mPos - 0x20;
                }
              }
            }
            uVar19 = 0x100;
LAB_148d1d0e8:
            M4Bitstream::skip(this_00,M4VlcDecoder::mTabCbpCInter[uVar19] >> 0x11);
            uVar11 = M4VlcDecoder::mTabCbpCInter[uVar19];
            pMVar21->mMode = '\0';
            bVar17 = (byte)uVar11 & 7;
            *(byte *)pMVar21 = *(byte *)pMVar21 | bVar17;
            uVar2 = ""[pMVar21->mMode];
            pMVar21->mMode = bVar17;
            pMVar21->mModeIntra = uVar2;
            if ((bVar17 == 7) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("mb->mMode != M4_MBMODE_STUFFING",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Decoder.cpp"
                                    ,0x2b6,
                                    L"*** M4Decoder::pFrame: STUFFING currently not supported!\n"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              iVar13 = (*pcVar9)();
              return iVar13;
            }
            bVar17 = pMVar21->mMode;
            if (bVar17 == 7) {
              VIDPrintf(this,"M4Decoder::pFrame(): Stuffing not supported!\n");
              return -0x7fffefff;
            }
            bVar16 = (byte)((int)uVar11 >> 4);
            if ((bool)pMVar21->mModeIntra) {
              uVar11 = M4Bitstream::show(&this->mBitstream,1);
              M4Bitstream::skip(&this->mBitstream,1);
              uVar19 = M4Bitstream::show((this->mBitstreamParser).mBitstream,6);
              M4Bitstream::skip((this->mBitstreamParser).mBitstream,
                                M4VlcDecoder::mTabCbpY[uVar19] >> 0x11);
              pMVar21->mCbp = (char)M4VlcDecoder::mTabCbpY[uVar19] << 2 | bVar16;
              if (pMVar21->mMode == 4) {
                uVar19 = M4Bitstream::show(&this->mBitstream,2);
                M4Bitstream::skip(&this->mBitstream,2);
                bVar15 = bVar15 + (char)mDequantTable[uVar19];
                if (bVar15 < 0x20) {
                  if (bVar15 == 0) {
                    bVar15 = 1;
                  }
                }
                else {
                  bVar15 = 0x1f;
                }
              }
              pMVar21->field_0x1 = pMVar21->field_0x1 ^ (pMVar21->mQuant ^ bVar15) & 0x1f;
              mbIntra(this,pMVar21,iVar13,local_res18,uVar11 != 0,(uint)pMVar21->mCbp,bVar15);
            }
            else {
              if ((param_1) && (bVar17 < 2)) {
                uVar11 = M4Bitstream::show(&this->mBitstream,1);
                M4Bitstream::skip(&this->mBitstream,1);
              }
              else {
                uVar11 = 0;
              }
              uVar19 = M4Bitstream::show((this->mBitstreamParser).mBitstream,6);
              M4Bitstream::skip((this->mBitstreamParser).mBitstream,
                                M4VlcDecoder::mTabCbpY[uVar19] >> 0x11);
              pMVar21->mCbp = ('\x0f' - (char)M4VlcDecoder::mTabCbpY[uVar19]) * '\x04' | bVar16;
              if (pMVar21->mMode == 1) {
                uVar19 = M4Bitstream::show(&this->mBitstream,2);
                M4Bitstream::skip(&this->mBitstream,2);
                bVar15 = bVar15 + (char)mDequantTable[uVar19];
                if (bVar15 < 0x20) {
                  if (bVar15 == 0) {
                    bVar15 = 1;
                  }
                }
                else {
                  bVar15 = 0x1f;
                }
              }
              bVar17 = (pMVar21->mQuant ^ bVar15) & 0x1f ^ pMVar21->field_0x1;
              pMVar21->field_0x1 = bVar17;
              if ((uVar11 != 0) && (pMVar21->mMode != 2)) {
                return -0x7fffeff0;
              }
              pMVar5 = this->mMotVecMgr;
              uVar4 = (pMVar5->mDecoder->mBitstreamParser).mFcodeForward;
              pMVar21->field_0x1 = bVar17 | 0x20;
              if (pMVar21->mMode == 2) {
                if (((pMVar21->mFlags & 8) != 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(mb->mFlags & M4_MBFLAG_FIELD_PREDICTION_BIT) == 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4MotionVectorMgr.cpp"
                                        ,0x7b,L""), bVar10)) {
                  pcVar9 = (code *)swi(3);
                  iVar13 = (*pcVar9)();
                  return iVar13;
                }
                iVar12 = M4BitstreamParser::getMv(&pMVar5->mDecoder->mBitstreamParser,uVar4);
                pMVar21->mFMv[0].x = iVar12;
                iVar12 = M4BitstreamParser::getMv(&pMVar5->mDecoder->mBitstreamParser,uVar4);
                pMVar21->mFMv[0].y = iVar12;
                iVar12 = M4BitstreamParser::getMv(&pMVar5->mDecoder->mBitstreamParser,uVar4);
                pMVar21->mFMv[1].x = iVar12;
                iVar12 = M4BitstreamParser::getMv(&pMVar5->mDecoder->mBitstreamParser,uVar4);
                pMVar21->mFMv[1].y = iVar12;
                iVar12 = M4BitstreamParser::getMv(&pMVar5->mDecoder->mBitstreamParser,uVar4);
                pMVar21->mFMv[2].x = iVar12;
                iVar12 = M4BitstreamParser::getMv(&pMVar5->mDecoder->mBitstreamParser,uVar4);
                pMVar21->mFMv[2].y = iVar12;
                iVar12 = M4BitstreamParser::getMv(&pMVar5->mDecoder->mBitstreamParser,uVar4);
                pMVar21->mFMv[3].x = iVar12;
                iVar12 = M4BitstreamParser::getMv(&pMVar5->mDecoder->mBitstreamParser,uVar4);
                pMVar21->mFMv[3].y = iVar12;
              }
              else {
                iVar12 = M4BitstreamParser::getMv(&pMVar5->mDecoder->mBitstreamParser,uVar4);
                pMVar21->mFMv[0].x = iVar12;
                iVar12 = M4BitstreamParser::getMv(&pMVar5->mDecoder->mBitstreamParser,uVar4);
                pMVar21->mFMv[0].y = iVar12;
              }
              M4MotionVectorMgr::predictAddForward(this->mMotVecMgr,pMVar21,iVar13,local_res18);
              mbInter(this,pMVar21,iVar13,local_res18,(uint)pMVar21->mCbp,MV_PREDICTION_P_FORWARD,0)
              ;
            }
          }
          else {
            if (param_1) {
              return -0x7fffeff0;
            }
            pMVar21->mMode = '\x10';
            pMVar21->mModeIntra = '\0';
            pMVar21->mFMv[0].x = 0;
            pMVar21->mFMv[0].y = 0;
            pMVar21->mFMv[1].x = 0;
            pMVar21->mFMv[1].y = 0;
            pMVar21->mFMv[2].x = 0;
            pMVar21->mFMv[2].y = 0;
            pMVar21->mFMv[3].x = 0;
            pMVar21->mFMv[3].y = 0;
            pMVar21->mMvResidual = '\0';
            pMVar6 = (this->mXCommand).mpOutput;
            pMVar7 = (this->mXCommand).mpRefImage[0];
            sVar3 = (pMVar6->mImage).texWidth;
            iVar12 = (sVar3 * local_res18 + iVar13) * 0x10;
            puVar18 = (pMVar7->mImage).y + iVar12;
            iVar23 = (local_res8 + sVar3 * local_res18) * 4;
            puVar22 = (pMVar6->mImage).y + iVar12;
            iVar12 = 0x10;
            do {
              *(undefined8 *)puVar22 = *(undefined8 *)puVar18;
              puVar1 = puVar18 + 8;
              puVar18 = puVar18 + sVar3;
              *(undefined8 *)(puVar22 + 8) = *(undefined8 *)puVar1;
              puVar22 = puVar22 + sVar3;
              iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
            iVar12 = 8;
            puVar18 = (pMVar7->mImage).u + iVar23;
            puVar22 = (pMVar6->mImage).u + iVar23;
            iVar24 = (int)sVar3 >> 1;
            do {
              uVar8 = *(undefined8 *)puVar18;
              puVar18 = puVar18 + iVar24;
              *(undefined8 *)puVar22 = uVar8;
              puVar22 = puVar22 + iVar24;
              iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
            iVar12 = 8;
            puVar18 = (pMVar7->mImage).v + iVar23;
            puVar22 = (pMVar6->mImage).v + iVar23;
            do {
              uVar8 = *(undefined8 *)puVar18;
              puVar18 = puVar18 + iVar24;
              *(undefined8 *)puVar22 = uVar8;
              puVar22 = puVar22 + iVar24;
              iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
          }
          uVar11 = (uint)(this->mBitstreamParser).mFcodeForward;
          uVar19 = uVar11 + 0x10;
          if ((0x17 < uVar19) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("bits>0 && bits<=23",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Bitstream.h"
                                  ,0x18c,L""), bVar10)) {
            pcVar9 = (code *)swi(3);
            iVar13 = (*pcVar9)();
            return iVar13;
          }
          uVar14 = (this->mBitstream).mPos & 7;
          if (uVar14 == 0) {
            uVar14 = M4Bitstream::show(&this->mBitstream,8);
            if (uVar14 == 0x7f) {
              uVar11 = uVar11 + 0x18;
              goto LAB_148d1d53d;
            }
            uVar11 = M4Bitstream::show(&this->mBitstream,uVar19);
          }
          else {
            uVar11 = (uVar19 - uVar14) + 8;
LAB_148d1d53d:
            uVar11 = M4Bitstream::show(&this->mBitstream,uVar11);
            uVar11 = uVar11 & 0xffffffffU >> (0x20U - (char)uVar19 & 0x1f);
          }
          if (uVar11 == 1) {
            uVar11 = (this->mBitstream).mPos & 7;
            if (uVar11 == 0) {
              uVar11 = M4Bitstream::show(&this->mBitstream,8);
              bVar10 = uVar11 == 0x7f;
            }
            else {
              uVar19 = M4Bitstream::show(&this->mBitstream,8 - uVar11);
              bVar10 = uVar19 == *(byte *)((longlong)
                                           &`public:_bool___cdecl_vdecmpeg4::M4Bitstream::validStuffingBits(void)___ptr64'
                                            ::__l2::stuffing + (ulonglong)uVar11);
            }
            if (bVar10) {
              iVar12 = M4BitstreamParser::videoPacketHeader(&this->mBitstreamParser);
              if (iVar12 != 0) {
                return iVar12;
              }
              if (((this->mBitstreamParser).mResyncMacroblockNumber !=
                   (uint)this->mMBWidth * local_res18 + 1 + iVar13) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("mBitstreamParser.mResyncMacroblockNumber == mby * mMBWidth + mbx + 1"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Decoder.cpp"
                                      ,0x305,L""), bVar10)) {
                pcVar9 = (code *)swi(3);
                iVar13 = (*pcVar9)();
                return iVar13;
              }
            }
          }
          iVar13 = iVar13 + 1;
          local_res8 = local_res8 + 2;
          pMVar21 = pMVar21 + 1;
        } while (iVar13 < (int)(uint)this->mMBWidth);
      }
      local_res18 = local_res18 + 1;
    } while (local_res18 < (int)(uint)this->mMBHeight);
  }
  M4Bitstream::nextStartCode(&this->mBitstream);
  return 0;
}

// parseMPEG4ES @ 148d1d670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000148d1ddf6) */

int __thiscall
vdecmpeg4::M4BitstreamParser::parseMPEG4ES(M4BitstreamParser *this,M4PictureType *param_1)

{
  undefined1 *puVar1;
  M4Decoder *this_00;
  ulonglong uVar2;
  uchar *puVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  M4PictureType MVar11;
  int iVar12;
  byte bVar13;
  M4Bitstream *pMVar14;
  ulonglong uVar15;
  char *pcVar16;
  ulong64 uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined1 auStack_f8 [32];
  uint local_d8;
  uint local_d4;
  uint local_d0 [2];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if ((this->mBitstream == (M4Bitstream *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("mBitstream",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4BitstreamParser.cpp"
                         ,0x1b6,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return iVar8;
  }
  do {
    uVar9 = this->mBitstream->mPos & 7;
    if (uVar9 != 0) {
      M4Bitstream::skip(this->mBitstream,8 - uVar9);
    }
    pMVar14 = this->mBitstream;
    uVar9 = pMVar14->mPos;
    bVar13 = (byte)uVar9;
    uVar19 = 0xffffffff >> (bVar13 & 0x1f);
    if ((int)uVar9 < 1) {
      uVar19 = (uVar19 & pMVar14->mAWord) >> (-bVar13 & 0x1f);
    }
    else {
      uVar19 = pMVar14->mBWord >> (0x20 - bVar13 & 0x1f) |
               (uVar19 & pMVar14->mAWord) << (bVar13 & 0x1f);
    }
    if (uVar19 == 0x1b0) {
      pMVar14->mTotalBits = pMVar14->mTotalBits + 0x20;
      pMVar14->mPos = uVar9 + 0x20;
      if (0x1f < uVar9 + 0x20) {
        pMVar14->mAWord = pMVar14->mBWord;
        if (pMVar14->mpStreamIO == (VIDStreamIO *)0x0) {
          uVar9 = pMVar14->mTail[2];
          pMVar14->mTail = pMVar14->mTail + 1;
          uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
        }
        else {
          M4Bitstream::ReadStreamBuffered(pMVar14,&local_d8);
          uVar9 = (local_d8 & 0xff0000 | local_d8 >> 0x10) >> 8 |
                  (local_d8 << 0x10 | local_d8 & 0xff00) << 8;
        }
        pMVar14->mBWord = uVar9;
        pMVar14->mPos = pMVar14->mPos - 0x20;
      }
      pMVar14 = this->mBitstream;
      uVar9 = M4Bitstream::show(pMVar14,8);
      M4Bitstream::skip(pMVar14,8);
      (this->mVOLInfo).mProfileLevel = (uchar)uVar9;
    }
    else if (uVar19 == 0x1b1) {
      pMVar14->mTotalBits = pMVar14->mTotalBits + 0x20;
      pMVar14->mPos = uVar9 + 0x20;
      if (0x1f < uVar9 + 0x20) {
        pMVar14->mAWord = pMVar14->mBWord;
        if (pMVar14->mpStreamIO == (VIDStreamIO *)0x0) {
          uVar9 = pMVar14->mTail[2];
          pMVar14->mTail = pMVar14->mTail + 1;
          pMVar14->mBWord =
               uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
          pMVar14->mPos = pMVar14->mPos - 0x20;
        }
        else {
          M4Bitstream::ReadStreamBuffered(pMVar14,&local_d4);
          pMVar14->mBWord =
               (local_d4 & 0xff0000 | local_d4 >> 0x10) >> 8 |
               (local_d4 << 0x10 | local_d4 & 0xff00) << 8;
          pMVar14->mPos = pMVar14->mPos - 0x20;
        }
      }
    }
    else {
      uVar10 = 1;
      if (uVar19 == 0x1b5) {
        pMVar14->mTotalBits = pMVar14->mTotalBits + 0x20;
        pMVar14->mPos = uVar9 + 0x20;
        if (0x1f < uVar9 + 0x20) {
          pMVar14->mAWord = pMVar14->mBWord;
          if (pMVar14->mpStreamIO == (VIDStreamIO *)0x0) {
            uVar9 = pMVar14->mTail[2];
            pMVar14->mTail = pMVar14->mTail + 1;
            uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
          }
          else {
            M4Bitstream::ReadStreamBuffered(pMVar14,local_d0);
            uVar9 = (local_d0[0] & 0xff0000 | local_d0[0] >> 0x10) >> 8 |
                    (local_d0[0] << 0x10 | local_d0[0] & 0xff00) << 8;
          }
          pMVar14->mBWord = uVar9;
          pMVar14->mPos = pMVar14->mPos - 0x20;
        }
        pMVar14 = this->mBitstream;
        uVar9 = M4Bitstream::show(pMVar14,1);
        M4Bitstream::skip(pMVar14,1);
        if (uVar9 != 0) {
          pMVar14 = this->mBitstream;
          M4Bitstream::show(pMVar14,4);
          M4Bitstream::skip(pMVar14,4);
          M4Bitstream::skip(this->mBitstream,3);
        }
        pMVar14 = this->mBitstream;
        bVar13 = (byte)pMVar14->mPos;
        uVar9 = 0xffffffff >> (bVar13 & 0x1f);
        iVar8 = pMVar14->mPos - 0x1c;
        if (iVar8 < 1) {
          uVar9 = (pMVar14->mAWord & uVar9) >> (0x1c - bVar13 & 0x1f);
        }
        else {
          bVar13 = (byte)iVar8;
          uVar9 = pMVar14->mBWord >> (0x20 - bVar13 & 0x1f) |
                  (pMVar14->mAWord & uVar9) << (bVar13 & 0x1f);
        }
        if (uVar9 != 1) {
          M4Decoder::VIDPrintf
                    (this->mDecoder,
                     "M4BitstreamParser::parseMPEG4ES: visual_object_type is not video! (See ISO/IEC 14496-2:2001-6.3.2)\n"
                    );
          return -0x7ffffff0;
        }
        M4Bitstream::skip(pMVar14,4);
        pMVar14 = this->mBitstream;
        uVar9 = M4Bitstream::show(pMVar14,1);
        M4Bitstream::skip(pMVar14,1);
        if (uVar9 != 0) {
          M4Bitstream::skip(this->mBitstream,3);
          M4Bitstream::skip(this->mBitstream,1);
          pMVar14 = this->mBitstream;
          uVar9 = M4Bitstream::show(pMVar14,1);
          M4Bitstream::skip(pMVar14,1);
          if (uVar9 != 0) {
            M4Bitstream::skip(this->mBitstream,8);
            M4Bitstream::skip(this->mBitstream,8);
            uVar9 = 8;
LAB_148d1daf9:
            M4Bitstream::skip(this->mBitstream,uVar9);
          }
        }
        M4Bitstream::nextStartCode(this->mBitstream);
      }
      else {
        if ((uVar19 & 0xffffffe0) != 0x100) {
          if ((uVar19 & 0xfffffff0) == 0x120) {
            this->mVOLCounter = this->mVOLCounter + 1;
            this->mVOLfound = true;
            M4Bitstream::skip(pMVar14,0x20);
            M4Bitstream::skip(this->mBitstream,1);
            pMVar14 = this->mBitstream;
            uVar9 = M4Bitstream::show(pMVar14,8);
            M4Bitstream::skip(pMVar14,8);
            if ((((uVar9 != 0) && (uVar9 != 1)) && (uVar9 != 3)) &&
               ((uVar9 != 4 && (uVar9 != 0x11)))) {
              M4Decoder::VIDPrintf
                        (this->mDecoder,
                         "M4BitstreamParser::parseMPEG4ES: found unknown video_object_type_indication %d. (See ISO/IEC 14496-2:2001-6.3.3)\n"
                        );
              return -0x7fffffef;
            }
            pMVar14 = this->mBitstream;
            uVar9 = M4Bitstream::show(pMVar14,1);
            M4Bitstream::skip(pMVar14,1);
            if (uVar9 != 0) {
              pMVar14 = this->mBitstream;
              uVar10 = M4Bitstream::show(pMVar14,4);
              M4Bitstream::skip(pMVar14,4);
              M4Bitstream::skip(this->mBitstream,3);
            }
            pMVar14 = this->mBitstream;
            uVar9 = M4Bitstream::show(pMVar14,4);
            M4Bitstream::skip(pMVar14,4);
            (this->mVOLInfo).mAspectRatio = (uchar)uVar9;
            if ((uchar)uVar9 == '\x0f') {
              pMVar14 = this->mBitstream;
              uVar9 = M4Bitstream::show(pMVar14,8);
              M4Bitstream::skip(pMVar14,8);
              pMVar14 = this->mBitstream;
              (this->mVOLInfo).mAspectRatioPARwidth = (uchar)uVar9;
              uVar9 = M4Bitstream::show(pMVar14,8);
              M4Bitstream::skip(pMVar14,8);
              (this->mVOLInfo).mAspectRatioPARheight = (uchar)uVar9;
            }
            pMVar14 = this->mBitstream;
            uVar9 = M4Bitstream::show(pMVar14,1);
            M4Bitstream::skip(pMVar14,1);
            if (uVar9 != 0) {
              M4Bitstream::skip(this->mBitstream,2);
              pMVar14 = this->mBitstream;
              uVar9 = M4Bitstream::show(pMVar14,1);
              M4Bitstream::skip(pMVar14,1);
              pMVar14 = this->mBitstream;
              this->mLowDelay = (ushort)uVar9;
              uVar9 = M4Bitstream::show(pMVar14,1);
              M4Bitstream::skip(pMVar14,1);
              if (uVar9 != 0) {
                M4Bitstream::skip(this->mBitstream,0xf);
                M4Bitstream::skip(this->mBitstream,1);
                M4Bitstream::skip(this->mBitstream,0xf);
                M4Bitstream::skip(this->mBitstream,1);
                M4Bitstream::skip(this->mBitstream,0xf);
                M4Bitstream::skip(this->mBitstream,1);
                M4Bitstream::skip(this->mBitstream,3);
                M4Bitstream::skip(this->mBitstream,0xb);
                M4Bitstream::skip(this->mBitstream,1);
                M4Bitstream::skip(this->mBitstream,0xf);
                M4Bitstream::skip(this->mBitstream,1);
              }
            }
            pMVar14 = this->mBitstream;
            uVar9 = M4Bitstream::show(pMVar14,2);
            M4Bitstream::skip(pMVar14,2);
            this->mShape = uVar9;
            if (uVar9 != 0) {
              pcVar16 = 
              "M4BitstreamParser::parseMPEG4ES: video_object_layer_shape != \"rectangular\". (See ISO/IEC 14496-2:2001, page 112).\n"
              ;
              goto LAB_148d1ea4c;
            }
            M4Bitstream::skip(this->mBitstream,1);
            pMVar14 = this->mBitstream;
            uVar19 = M4Bitstream::show(pMVar14,0x10);
            M4Bitstream::skip(pMVar14,0x10);
            this->mVopTimeIncrementResolution = (ushort)uVar19;
            uVar7 = 0;
            for (uVar9 = (uVar19 & 0xffff) - 1; uVar9 != 0; uVar9 = uVar9 >> 1) {
              uVar7 = uVar7 + 1;
            }
            this->mVopTimeIncrementBits = uVar7;
            if (uVar7 == 0) {
              this->mVopTimeIncrementBits = 1;
            }
            this->mTicksPerSecond = __real_3ff0000000000000 / (double)(uVar19 & 0xffff);
            M4Bitstream::skip(this->mBitstream,1);
            pMVar14 = this->mBitstream;
            uVar9 = M4Bitstream::show(pMVar14,1);
            M4Bitstream::skip(pMVar14,1);
            this->mbVopTimeFixedRate = uVar9 != 0;
            if (uVar9 != 0) {
              uVar9 = M4Bitstream::getBits(this->mBitstream,(uint)this->mVopTimeIncrementBits);
              (this->mVOLInfo).mFPSNumerator = this->mVopTimeIncrementResolution;
              this->mVopTimeFixedIncrement = uVar9;
              (this->mVOLInfo).mFPSDenominator = (ushort)uVar9;
            }
            if (this->mShape != 2) {
              if (this->mShape == 0) {
                M4Bitstream::skip(this->mBitstream,1);
                uVar9 = M4Bitstream::getBits(this->mBitstream,0xd);
                M4Bitstream::skip(this->mBitstream,1);
                uVar19 = M4Bitstream::getBits(this->mBitstream,0xd);
                M4Bitstream::skip(this->mBitstream,1);
                if ((uVar9 & 0xf) != 0) {
                  M4Decoder::VIDPrintf
                            (this->mDecoder,
                             "M4BitstreamParser::parseMPEG4ES: width %d not multiple of 16 pixel!\n"
                            );
                }
                if ((uVar19 & 0xf) != 0) {
                  M4Decoder::VIDPrintf
                            (this->mDecoder,
                             "M4BitstreamParser::parseMPEG4ES: height %d not multiple of 16 pixel!\n"
                            );
                }
                (this->mVOLInfo).mCodedHeight = (short)uVar19;
                (this->mVOLInfo).mCodedWidth = (short)uVar9;
                (this->mVOLInfo).mHeight = (short)uVar19 + 0xfU & 0xfff0;
                (this->mVOLInfo).mWidth = (short)uVar9 + 0xfU & 0xfff0;
              }
              uVar9 = M4Bitstream::getBit(this->mBitstream);
              if (uVar9 != 0) {
                M4Decoder::VIDPrintf
                          (this->mDecoder,
                           "M4BitstreamParser::parseMPEG4ES: interlaced == 1 not supported!\n");
                return -0x7ffffefd;
              }
              uVar9 = M4Bitstream::getBit(this->mBitstream);
              if (uVar9 == 0) {
                M4Decoder::VIDPrintf
                          (this->mDecoder,
                           "M4BitstreamParser::parseMPEG4ES: obmc_disable == 0 ignored. (See ISO/IEC 14496-2:2001, page 113).\n"
                          );
              }
              uVar9 = M4Bitstream::getBits(this->mBitstream,(uVar10 != 1) + 1);
              this->mSpriteUsage = uVar9;
              if (uVar9 == 1) {
                pcVar16 = 
                "M4BitstreamParser::parseMPEG4ES: sprite_enable != \"GMC\". (See ISO/IEC 14496-2:2001, page 113).\n"
                ;
                goto LAB_148d1ea32;
              }
              if (uVar9 == 2) {
                uVar9 = M4Bitstream::getBits(this->mBitstream,6);
                this->mSpriteWarpingPoints = (ushort)uVar9;
                if (3 < (ushort)uVar9) {
                  pcVar16 = 
                  "M4BitstreamParser::parseMPEG4ES: no_of_sprite_warping_points > 3 not valid for GMC sprites! (See ISO/IEC 14496-2:2001, page 114).\n"
                  ;
                  goto LAB_148d1ea32;
                }
                uVar9 = M4Bitstream::getBits(this->mBitstream,2);
                this->mSpriteWarpingAccuracy = (short)uVar9;
                uVar9 = M4Bitstream::getBits(this->mBitstream,1);
                if (uVar9 != 0) {
                  pcVar16 = 
                  "M4BitstreamParser::parseMPEG4ES: sprite_brightness_change != 0 not supported! (See ISO/IEC 14496-2:2001, page 114).\n"
                  ;
                  goto LAB_148d1ea32;
                }
                if (this->mSpriteUsage != 2) {
                  M4Bitstream::skip(this->mBitstream,1);
                }
              }
              if ((uVar10 != 1) && (this->mShape != 0)) {
                M4Bitstream::skip(this->mBitstream,1);
              }
              uVar9 = M4Bitstream::getBit(this->mBitstream);
              if (uVar9 == 0) {
                this->mQuantBits = 5;
              }
              else {
                M4Decoder::VIDPrintf
                          (this->mDecoder,
                           "M4BitstreamParser::parseMPEG4ES: IGNORED: not_8_bit == 1!\n");
                uVar9 = M4Bitstream::getBits(this->mBitstream,4);
                this->mQuantBits = uVar9;
                M4Bitstream::skip(this->mBitstream,4);
              }
              if (this->mShape == 3) {
                M4Bitstream::skip(this->mBitstream,1);
                M4Bitstream::skip(this->mBitstream,1);
                M4Bitstream::skip(this->mBitstream,1);
              }
              uVar9 = M4Bitstream::getBit(this->mBitstream);
              *(ushort *)&(this->mHeaderInfo).mFlags =
                   *(ushort *)&(this->mHeaderInfo).mFlags ^
                   ((this->mHeaderInfo).mFlags.mQuantType ^ (ushort)uVar9) & 1;
              if ((uVar9 & 1) != 0) {
                uVar9 = M4Bitstream::getBit(this->mBitstream);
                this->mLoadIntraQuant = uVar9 != 0;
                if (uVar9 == 0) {
                  setMatrix(this,(this->mHeaderInfo).mInvQuantIntra,
                            "\b\x11\x12\x13\x15\x17\x19\x1b\x11\x12\x13\x15\x17\x19\x1b\x1c\x14\x15\x16\x17\x18\x1a\x1c\x1e\x15\x16\x17\x18\x1a\x1c\x1e \x16\x17\x18\x1a\x1c\x1e #\x17\x18\x1a\x1c\x1e #&\x19\x1a\x1c\x1e #&)\x1b\x1c\x1e #&)-"
                           );
                }
                else {
                  getMatrix(this,(uchar *)&local_c8);
                  puVar3 = (this->mHeaderInfo).mInvQuantIntra;
                  if (((uchar *)((longlong)&uStack_90 + 7U) < puVar3) || (puVar3 + 0x3f < &local_c8)
                     ) {
                    *(undefined8 *)puVar3 = local_c8;
                    *(undefined8 *)(puVar3 + 8) = uStack_c0;
                    *(undefined8 *)(puVar3 + 0x10) = local_b8;
                    *(undefined8 *)(puVar3 + 0x18) = uStack_b0;
                    *(undefined8 *)(puVar3 + 0x20) = local_a8;
                    *(undefined8 *)(puVar3 + 0x28) = uStack_a0;
                    *(undefined8 *)(puVar3 + 0x30) = local_98;
                    *(undefined8 *)(puVar3 + 0x38) = uStack_90;
                  }
                  else {
                    *(undefined8 *)puVar3 = local_c8;
                    *(undefined8 *)(puVar3 + 8) = uStack_c0;
                    *(undefined8 *)(puVar3 + 0x10) = local_b8;
                    *(undefined8 *)(puVar3 + 0x18) = uStack_b0;
                    *(undefined8 *)(puVar3 + 0x20) = local_a8;
                    *(undefined8 *)(puVar3 + 0x28) = uStack_a0;
                    *(undefined8 *)(puVar3 + 0x30) = local_98;
                    *(undefined8 *)(puVar3 + 0x38) = uStack_90;
                  }
                }
                uVar9 = M4Bitstream::getBit(this->mBitstream);
                this->mLoadInterQuant = uVar9 != 0;
                if (uVar9 == 0) {
                  setMatrix(this,(this->mHeaderInfo).mInvQuantInter,
                            "\x10\x11\x12\x13\x14\x15\x16\x17\x11\x12\x13\x14\x15\x16\x17\x18\x12\x13\x14\x15\x16\x17\x18\x19\x13\x14\x15\x16\x17\x18\x1a\x1b\x14\x15\x16\x17\x19\x1a\x1b\x1c\x15\x16\x17\x18\x1a\x1b\x1c\x1e\x16\x17\x18\x1a\x1b\x1c\x1e\x1f\x17\x18\x19\x1b\x1c\x1e\x1f!"
                           );
                }
                else {
                  getMatrix(this,(uchar *)&local_88);
                  puVar3 = (this->mHeaderInfo).mInvQuantInter;
                  if (((uchar *)((longlong)&uStack_50 + 7U) < puVar3) || (puVar3 + 0x3f < &local_88)
                     ) {
                    *(undefined8 *)puVar3 = local_88;
                    *(undefined8 *)(puVar3 + 8) = uStack_80;
                    *(undefined8 *)(puVar3 + 0x10) = local_78;
                    *(undefined8 *)(puVar3 + 0x18) = uStack_70;
                    *(undefined8 *)(puVar3 + 0x20) = local_68;
                    *(undefined8 *)(puVar3 + 0x28) = uStack_60;
                    *(undefined8 *)(puVar3 + 0x30) = local_58;
                    *(undefined8 *)(puVar3 + 0x38) = uStack_50;
                  }
                  else {
                    *(undefined8 *)puVar3 = local_88;
                    *(undefined8 *)(puVar3 + 8) = uStack_80;
                    *(undefined8 *)(puVar3 + 0x10) = local_78;
                    *(undefined8 *)(puVar3 + 0x18) = uStack_70;
                    *(undefined8 *)(puVar3 + 0x20) = local_68;
                    *(undefined8 *)(puVar3 + 0x28) = uStack_60;
                    *(undefined8 *)(puVar3 + 0x30) = local_58;
                    *(undefined8 *)(puVar3 + 0x38) = uStack_50;
                  }
                }
              }
              if (uVar10 == 1) {
                this->mQuarterpel = 0;
              }
              else {
                uVar9 = M4Bitstream::getBit(this->mBitstream);
                this->mQuarterpel = uVar9;
                if (uVar9 != 0) {
                  pcVar16 = 
                  "M4BitstreamParser::parseMPEG4ES: quarter sample mode not supported! (See ISO/IEC 14496-2:2001, page 116).\n"
                  ;
                  goto LAB_148d1ea32;
                }
              }
              uVar9 = M4Bitstream::getBit(this->mBitstream);
              if (uVar9 == 0) {
                pcVar16 = 
                "M4BitstreamParser::parseMPEG4ES: complexity_estimation_disable == 0 not supported. (See ISO/IEC 14496-2:2001, page 117).\n"
                ;
              }
              else {
                M4Bitstream::getBit(this->mBitstream);
                uVar9 = M4Bitstream::getBit(this->mBitstream);
                if (uVar9 == 0) {
                  if (uVar10 != 1) {
                    uVar9 = M4Bitstream::getBit(this->mBitstream);
                    this->mNewPredEnable = uVar9;
                    if (uVar9 != 0) {
                      M4Bitstream::skip(this->mBitstream,2);
                      M4Bitstream::skip(this->mBitstream,1);
                      pcVar16 = 
                      "M4BitstreamParser::parseMPEG4ES: newpred_enable == 1 not supported. (See ISO/IEC 14496-2:2001, page 118).\n"
                      ;
                      goto LAB_148d1ea32;
                    }
                    uVar9 = M4Bitstream::getBit(this->mBitstream);
                    if (uVar9 != 0) {
                      pcVar16 = 
                      "M4BitstreamParser::parseMPEG4ES: reduced_resolution_vop_enable == 1 not supported! (See ISO/IEC 14496-2:2001, page 118).\n"
                      ;
                      goto LAB_148d1ea32;
                    }
                  }
                  uVar9 = M4Bitstream::getBit(this->mBitstream);
                  this->mScalability = uVar9;
                  if (uVar9 == 0) {
                    M4Bitstream::nextStartCode(this->mBitstream);
                    *param_1 = M4PIC_VOL;
                    return 0;
                  }
                  pcVar16 = 
                  "M4BitstreamParser::parseMPEG4ES: scalability == 1 not supported! (See ISO/IEC 14496-2:2001, page 118).\n"
                  ;
                }
                else {
                  pcVar16 = 
                  "M4BitstreamParser::parseMPEG4ES: data_partitioned == 1 not supported. (See ISO/IEC 14496-2:2001, page 118).\n"
                  ;
                }
              }
LAB_148d1ea32:
              M4Decoder::VIDPrintf(this->mDecoder,pcVar16);
              return -0x7fffffff;
            }
          }
          else {
            if (uVar19 == 0x1b3) {
              M4Bitstream::skip(pMVar14,0x20);
              pMVar14 = this->mBitstream;
              uVar9 = M4Bitstream::show(pMVar14,5);
              M4Bitstream::skip(pMVar14,5);
              pMVar14 = this->mBitstream;
              uVar19 = M4Bitstream::show(pMVar14,6);
              M4Bitstream::skip(pMVar14,6);
              M4Bitstream::skip(this->mBitstream,1);
              pMVar14 = this->mBitstream;
              uVar10 = M4Bitstream::show(pMVar14,6);
              M4Bitstream::skip(pMVar14,6);
              this->mTimeBase = (uVar9 * 0x3c + uVar19) * 0x3c + uVar10;
              M4Bitstream::skip(this->mBitstream,1);
              uVar9 = 1;
              goto LAB_148d1daf9;
            }
            if (uVar19 != 0x1b6) {
              if (uVar19 == 0x1b2) {
                M4Bitstream::skip(pMVar14,0x20);
                bVar5 = M4Bitstream::isEof(this->mBitstream);
                while ((!bVar5 && (uVar9 = M4Bitstream::show(this->mBitstream,0x18), uVar9 != 1))) {
                  M4Bitstream::skip(this->mBitstream,8);
                  bVar5 = M4Bitstream::isEof(this->mBitstream);
                }
                goto LAB_148d1dbd3;
              }
              uVar9 = M4Bitstream::show(pMVar14,0x18);
              if (uVar9 == 1) {
                this_00 = this->mDecoder;
                M4Bitstream::show(this->mBitstream,0x20);
                M4Decoder::VIDPrintf
                          (this_00,"*** M4BitstreamParser::parseMPEG4ES: unknown start_code: 0x%x\n"
                          );
              }
              pMVar14 = this->mBitstream;
              uVar9 = 8;
              goto LAB_148d1dbce;
            }
            uVar18 = 0;
            uVar9 = 0;
            pMVar14->mTotalBits = 0;
            M4Bitstream::skip(this->mBitstream,0x20);
            pMVar14 = this->mBitstream;
            MVar11 = M4Bitstream::show(pMVar14,2);
            M4Bitstream::skip(pMVar14,2);
            *param_1 = MVar11;
            if (this->mVOLCounter == 0) {
              M4Decoder::VIDPrintf
                        (this->mDecoder,
                         "M4BitstreamParser::parseMPEG4ES: found %s without preceeding VOL header.\n"
                        );
              return -0x7fff0fe0;
            }
            if ((MVar11 == M4PIC_B_VOP) && (this->mLowDelay != 0)) {
              pcVar16 = 
              "M4BitstreamParser::parseMPEG4ES: low_delay == 1 and vop_coding_type == \"B\" is invalid! (See ISO/IEC 14496-2:2001, page 111)\n"
              ;
              goto LAB_148d1dcc3;
            }
            pMVar14 = this->mBitstream;
            uVar10 = M4Bitstream::show(pMVar14,1);
            M4Bitstream::skip(pMVar14,1);
            uVar19 = uVar9;
            uVar20 = uVar18;
            while (uVar10 != 0) {
              pMVar14 = this->mBitstream;
              uVar19 = (int)uVar20 + 1;
              uVar20 = (ulonglong)uVar19;
              uVar10 = M4Bitstream::show(pMVar14,1);
              M4Bitstream::skip(pMVar14,1);
            }
            M4Bitstream::skip(this->mBitstream,1);
            uVar10 = uVar9;
            if (this->mVopTimeIncrementBits != 0) {
              uVar10 = M4Bitstream::getBits(this->mBitstream,(uint)this->mVopTimeIncrementBits);
            }
            uVar7 = this->mVopTimeIncrementResolution;
            uVar20 = this->mLastNonBTime;
            if (*param_1 == M4PIC_B_VOP) {
              uVar2 = this->mTimePP;
              uVar17 = (ulong64)((this->mLastTimeBase + uVar19) * (uint)uVar7 + uVar10);
              this->mTime = uVar17;
              uVar15 = (uVar2 - uVar20) + uVar17;
              this->mTimeBP = uVar15;
              if (((uVar2 <= uVar15) || (uVar2 <= uVar20 - uVar17)) || (uVar2 == 0)) {
                M4Decoder::VIDPrintf
                          (this->mDecoder,
                           "M4BitstreamParser::parseMPEG4ES: frame skipped (seeking?)\n");
                return -0x7fff0fdf;
              }
            }
            else {
              this->mLastTimeBase = this->mTimeBase;
              uVar19 = this->mTimeBase + uVar19;
              this->mTimeBase = uVar19;
              uVar17 = (ulong64)(uVar19 * uVar7 + uVar10);
              this->mTime = uVar17;
              if (uVar17 < uVar20) {
                uVar17 = uVar17 + uVar7;
                this->mTimeBase = uVar19 + 1;
                this->mTime = uVar17;
              }
              this->mLastNonBTime = uVar17;
              this->mTimePP = uVar17 - uVar20;
            }
            this->mVopTime = (double)uVar17 * this->mTicksPerSecond;
            M4Bitstream::skip(this->mBitstream,1);
            uVar19 = M4Bitstream::getBit(this->mBitstream);
            if (uVar19 == 0) {
              M4Bitstream::nextStartCode(this->mBitstream);
              return -0x7fff0fdf;
            }
            if ((this->mShape != 2) &&
               ((*param_1 == M4PIC_P_VOP || ((*param_1 == M4PIC_S_VOP && (this->mSpriteUsage == 2)))
                ))) {
              uVar9 = M4Bitstream::getBit(this->mBitstream);
            }
            puVar1 = &(this->mHeaderInfo).mFlags.field_0x4;
            *(uint *)puVar1 = *(uint *)puVar1 ^ ((this->mHeaderInfo).mFlags.mRounding ^ uVar9) & 1;
            if (this->mShape != 0) {
              if ((this->mSpriteUsage != 1) || (*param_1 != M4PIC_I_VOP)) {
                M4Bitstream::skip(this->mBitstream,0xd);
                M4Bitstream::skip(this->mBitstream,1);
                M4Bitstream::skip(this->mBitstream,0xd);
                M4Bitstream::skip(this->mBitstream,1);
                M4Bitstream::skip(this->mBitstream,0xd);
                M4Bitstream::skip(this->mBitstream,1);
                M4Bitstream::skip(this->mBitstream,0xd);
                M4Bitstream::skip(this->mBitstream,1);
              }
              M4Bitstream::skip(this->mBitstream,1);
              uVar9 = M4Bitstream::getBit(this->mBitstream);
              if (uVar9 != 0) {
                M4Bitstream::skip(this->mBitstream,8);
              }
            }
            if (this->mShape != 2) {
              uVar9 = M4Bitstream::getBits(this->mBitstream,3);
              this->mIntraDCThreshold = mIntraDCThresholdTable[uVar9];
            }
            if (*param_1 == M4PIC_S_VOP) {
              if (this->mSpriteUsage == 1) {
                pcVar16 = "M4BitstreamParser::parseMPEG4ES: static sprite in SVOP not supported\n";
LAB_148d1dcc3:
                M4Decoder::VIDPrintf(this->mDecoder,pcVar16);
                return -0x7fff0ffd;
              }
              if (this->mSpriteUsage == 2) {
                this->mSprite[0].x = 0;
                this->mSprite[0].y = 0;
                this->mSprite[1].x = 0;
                this->mSprite[1].y = 0;
                this->mSprite[2].x = 0;
                this->mSprite[2].y = 0;
                this->mSprite[3].x = 0;
                this->mSprite[3].y = 0;
                if (this->mSpriteWarpingPoints != 0) {
                  do {
                    iVar8 = getTrajaPoint(this);
                    M4Bitstream::skip(this->mBitstream,1);
                    iVar12 = getTrajaPoint(this);
                    M4Bitstream::skip(this->mBitstream,1);
                    if ((0x7ffc < iVar8 + 0x3ffeU) &&
                       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                          ("x > -16383 && x < 16383",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4BitstreamParser.cpp"
                                           ,0x3ed,L""), bVar5)) {
                      pcVar4 = (code *)swi(3);
                      iVar8 = (*pcVar4)();
                      return iVar8;
                    }
                    if ((0x7ffc < iVar12 + 0x3ffeU) &&
                       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                          ("y > -16383 && y < 16383",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4BitstreamParser.cpp"
                                           ,0x3ee,L""), bVar5)) {
                      pcVar4 = (code *)swi(3);
                      iVar8 = (*pcVar4)();
                      return iVar8;
                    }
                    this->mSprite[uVar18].x = (int)(short)iVar8;
                    this->mSprite[uVar18].y = (int)(short)iVar12;
                    uVar9 = (int)uVar18 + 1;
                    uVar18 = (ulonglong)uVar9;
                  } while (uVar9 < this->mSpriteWarpingPoints);
                }
                decodeGMCSprite(this);
              }
            }
            if (this->mShape != 2) {
              uVar9 = M4Bitstream::getBits(this->mBitstream,this->mQuantBits);
              (this->mHeaderInfo).mQuant = (ushort)uVar9;
              if ((ushort)((ushort)uVar9 - 1) < 0x1f) {
                if (this->mShape != 3) {
                  if (*param_1 != M4PIC_I_VOP) {
                    uVar9 = M4Bitstream::getBits(this->mBitstream,3);
                    uVar7 = (ushort)uVar9;
                    this->mFcodeForward = uVar7;
                    if ((uVar7 == 0) || (7 < uVar7)) {
                      pcVar16 = 
                      "M4BitstreamParser::parseMPEG4ES: vop_fcode_forward value invalid! (See ISO/IEC 14496-2:2001, page 123).\n"
                      ;
                      goto LAB_148d1ea32;
                    }
                  }
                  if (*param_1 == M4PIC_B_VOP) {
                    uVar9 = M4Bitstream::getBits(this->mBitstream,3);
                    uVar7 = (ushort)uVar9;
                    this->mFcodeBackward = uVar7;
                    if ((uVar7 == 0) || (7 < uVar7)) {
                      pcVar16 = 
                      "M4BitstreamParser::parseMPEG4ES: vop_fcode_backward value invalid! (See ISO/IEC 14496-2:2001, page 123).\n"
                      ;
                      goto LAB_148d1ea32;
                    }
                  }
                  if (this->mScalability == 0) {
                    if ((this->mShape != 0) && (*param_1 != M4PIC_I_VOP)) {
                      M4Bitstream::skip(this->mBitstream,1);
                    }
                    return 0;
                  }
                  M4Decoder::VIDPrintf
                            (this->mDecoder,
                             "M4BitstreamParser::parseMPEG4ES: scalability == 1 not supported! (See ISO/IEC 14496-2:2001, page 118).\n"
                            );
                  return -0x7fff0fde;
                }
                pcVar16 = "M4BitstreamParser::parseMPEG4ES: gray shape not supported.\n";
              }
              else {
                pcVar16 = 
                "M4BitstreamParser::parseMPEG4ES: vop_quant value invalid! (See ISO/IEC 14496-2:2001, page 123).\n"
                ;
              }
              goto LAB_148d1ea32;
            }
          }
          pcVar16 = 
          "M4BitstreamParser::parseMPEG4ES: video_object_layer_shape == \"binary only\" not supported!\n"
          ;
LAB_148d1ea4c:
          M4Decoder::VIDPrintf(this->mDecoder,pcVar16);
          return -0x7fff0ff0;
        }
        uVar9 = 0x20;
LAB_148d1dbce:
        M4Bitstream::skip(pMVar14,uVar9);
      }
    }
LAB_148d1dbd3:
    pMVar14 = this->mBitstream;
    if (pMVar14->mpStreamIO == (VIDStreamIO *)0x0) {
      cVar6 = (longlong)(ulonglong)pMVar14->mLength <=
              (longlong)
              (((longlong)pMVar14->mTail - (longlong)pMVar14->mStart >> 2) * 0x20 +
              (ulonglong)pMVar14->mPos) >> 3;
    }
    else {
      cVar6 = (**(code **)((longlong)*pMVar14->mpStreamIO + 8))();
    }
    if (cVar6 != '\0') {
      return -0x7fff0ffe;
    }
  } while( true );
}

// poolMemCb @ 148d1ea90

void __cdecl vdecmpeg4::M4Image::poolMemCb(void *param_1,uint param_2,uint param_3,void *param_4)

{
  setup(param_4,param_1,param_3);
  return;
}

// predictAddForward @ 148d1eab0

void __thiscall
vdecmpeg4::M4MotionVectorMgr::predictAddForward
          (M4MotionVectorMgr *this,M4_MB *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  M4_VECTOR MVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  M4_VECTOR local_res10;
  
  if (param_1->mMvResidual == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("mb->mMvResidual != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4MotionVectorMgr.cpp"
                       ,0x90,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  _predictMv(this,&local_res10,param_2,param_3,0);
  iVar6 = local_res10.x + param_1->mFMv[0].x;
  param_1->mFMv[0].x = iVar6;
  iVar5 = param_1->mFMv[0].y + local_res10.y;
  param_1->mFMv[0].y = iVar5;
  if (param_1->mMode == 2) {
    if (iVar6 < this->mMvClipLow) {
      param_1->mFMv[0].x = this->mMvClipRange + iVar6;
    }
    else if (this->mMvClipHigh < iVar6) {
      param_1->mFMv[0].x = iVar6 - this->mMvClipRange;
    }
    if (iVar5 < this->mMvClipLow) {
      param_1->mFMv[0].y = this->mMvClipRange + iVar5;
    }
    else if (this->mMvClipHigh < iVar5) {
      param_1->mFMv[0].y = iVar5 - this->mMvClipRange;
    }
    _predictMv(this,&local_res10,param_2,param_3,1);
    iVar6 = param_1->mFMv[1].x + local_res10.x;
    param_1->mFMv[1].x = iVar6;
    iVar5 = param_1->mFMv[1].y + local_res10.y;
    param_1->mFMv[1].y = iVar5;
    if (iVar6 < this->mMvClipLow) {
      param_1->mFMv[1].x = this->mMvClipRange + iVar6;
    }
    else if (this->mMvClipHigh < iVar6) {
      param_1->mFMv[1].x = iVar6 - this->mMvClipRange;
    }
    if (iVar5 < this->mMvClipLow) {
      param_1->mFMv[1].y = this->mMvClipRange + iVar5;
    }
    else if (this->mMvClipHigh < iVar5) {
      param_1->mFMv[1].y = iVar5 - this->mMvClipRange;
    }
    _predictMv(this,&local_res10,param_2,param_3,2);
    iVar6 = local_res10.x + param_1->mFMv[2].x;
    param_1->mFMv[2].x = iVar6;
    iVar5 = param_1->mFMv[2].y + local_res10.y;
    param_1->mFMv[2].y = iVar5;
    if (iVar6 < this->mMvClipLow) {
      param_1->mFMv[2].x = this->mMvClipRange + iVar6;
    }
    else if (this->mMvClipHigh < iVar6) {
      param_1->mFMv[2].x = iVar6 - this->mMvClipRange;
    }
    if (iVar5 < this->mMvClipLow) {
      param_1->mFMv[2].y = this->mMvClipRange + iVar5;
    }
    else if (this->mMvClipHigh < iVar5) {
      param_1->mFMv[2].y = iVar5 - this->mMvClipRange;
    }
    _predictMv(this,&local_res10,param_2,param_3,3);
    local_res10.x = param_1->mFMv[3].x + local_res10.x;
    param_1->mFMv[3].x = local_res10.x;
    local_res10.y = param_1->mFMv[3].y + local_res10.y;
    param_1->mFMv[3].y = local_res10.y;
    if (local_res10.x < this->mMvClipLow) {
      param_1->mFMv[3].x = this->mMvClipRange + local_res10.x;
    }
    else if (this->mMvClipHigh < local_res10.x) {
      param_1->mFMv[3].x = local_res10.x - this->mMvClipRange;
    }
    if (local_res10.y < this->mMvClipLow) {
      param_1->mFMv[3].y = this->mMvClipRange + local_res10.y;
    }
    else if (this->mMvClipHigh < local_res10.y) {
      param_1->mFMv[3].y = local_res10.y - this->mMvClipRange;
    }
  }
  else {
    if (iVar6 < this->mMvClipLow) {
      param_1->mFMv[0].x = this->mMvClipRange + iVar6;
    }
    else if (this->mMvClipHigh < iVar6) {
      param_1->mFMv[0].x = iVar6 - this->mMvClipRange;
    }
    if (iVar5 < this->mMvClipLow) {
      param_1->mFMv[0].y = this->mMvClipRange + iVar5;
    }
    else if (this->mMvClipHigh < iVar5) {
      param_1->mFMv[0].y = iVar5 - this->mMvClipRange;
    }
    MVar2 = param_1->mFMv[0];
    param_1->mFMv[1] = MVar2;
    param_1->mFMv[2] = MVar2;
    param_1->mFMv[3] = MVar2;
  }
  return;
}

// readGMCSprite @ 148d1ed20

void __thiscall vdecmpeg4::M4BitstreamParser::readGMCSprite(M4BitstreamParser *this)

{
  M4Bitstream *pMVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if ((3 < this->mSpriteWarpingPoints) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("mSpriteWarpingPoints < 4",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4BitstreamParser.cpp"
                         ,0x4a7,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar5 = 0;
  this->mSprite[0].x = 0;
  this->mSprite[0].y = 0;
  this->mSprite[1].x = 0;
  this->mSprite[1].y = 0;
  this->mSprite[2].x = 0;
  this->mSprite[2].y = 0;
  this->mSprite[3].x = 0;
  this->mSprite[3].y = 0;
  if (this->mSpriteWarpingPoints != 0) {
    do {
      pMVar1 = this->mBitstream;
      uVar4 = M4Bitstream::show(pMVar1,0xe);
      M4Bitstream::skip(pMVar1,0xe);
      this->mSprite[uVar5].x = uVar4;
      pMVar1 = this->mBitstream;
      uVar4 = M4Bitstream::show(pMVar1,1);
      M4Bitstream::skip(pMVar1,1);
      if (uVar4 != 0) {
        this->mSprite[uVar5].x = -this->mSprite[uVar5].x;
      }
      pMVar1 = this->mBitstream;
      uVar4 = M4Bitstream::show(pMVar1,0xe);
      M4Bitstream::skip(pMVar1,0xe);
      this->mSprite[uVar5].y = uVar4;
      pMVar1 = this->mBitstream;
      uVar4 = M4Bitstream::show(pMVar1,1);
      M4Bitstream::skip(pMVar1,1);
      if (uVar4 != 0) {
        this->mSprite[uVar5].y = -this->mSprite[uVar5].y;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < this->mSpriteWarpingPoints);
  }
  return;
}

// readMvForward @ 148d1ee90

void __thiscall vdecmpeg4::M4MotionVectorMgr::readMvForward(M4MotionVectorMgr *this,M4_MB *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  uVar1 = (this->mDecoder->mBitstreamParser).mFcodeForward;
  param_1->mMvResidual = '\x01';
  if (param_1->mMode != 2) {
    iVar4 = M4BitstreamParser::getMv(&this->mDecoder->mBitstreamParser,uVar1);
    param_1->mFMv[0].x = iVar4;
    iVar4 = M4BitstreamParser::getMv(&this->mDecoder->mBitstreamParser,uVar1);
    param_1->mFMv[0].y = iVar4;
    return;
  }
  if ((param_1->mFlags & 8) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(mb->mFlags & M4_MBFLAG_FIELD_PREDICTION_BIT) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4MotionVectorMgr.cpp"
                       ,0x7b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = M4BitstreamParser::getMv(&this->mDecoder->mBitstreamParser,uVar1);
  param_1->mFMv[0].x = iVar4;
  iVar4 = M4BitstreamParser::getMv(&this->mDecoder->mBitstreamParser,uVar1);
  param_1->mFMv[0].y = iVar4;
  iVar4 = M4BitstreamParser::getMv(&this->mDecoder->mBitstreamParser,uVar1);
  param_1->mFMv[1].x = iVar4;
  iVar4 = M4BitstreamParser::getMv(&this->mDecoder->mBitstreamParser,uVar1);
  param_1->mFMv[1].y = iVar4;
  iVar4 = M4BitstreamParser::getMv(&this->mDecoder->mBitstreamParser,uVar1);
  param_1->mFMv[2].x = iVar4;
  iVar4 = M4BitstreamParser::getMv(&this->mDecoder->mBitstreamParser,uVar1);
  param_1->mFMv[2].y = iVar4;
  iVar4 = M4BitstreamParser::getMv(&this->mDecoder->mBitstreamParser,uVar1);
  param_1->mFMv[3].x = iVar4;
  iVar4 = M4BitstreamParser::getMv(&this->mDecoder->mBitstreamParser,uVar1);
  param_1->mFMv[3].y = iVar4;
  return;
}

// reset @ 148d1eff0

int __thiscall vdecmpeg4::M4BitstreamParser::reset(M4BitstreamParser *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uchar *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  this->mVopTime = 0.0;
  this->mLastTimeBase = 0;
  this->mTimeBase = 0;
  lVar6 = 0x40;
  this->mTime = 0;
  this->mLastNonBTime = 0;
  this->mTimeBP = 0;
  this->mTimePP = 0;
  this->mVOLfound = false;
  this->mVOLCounter = 0;
  (this->mVOLInfo).mWidth = 0;
  (this->mVOLInfo).mHeight = 0;
  (this->mVOLInfo).mCodedWidth = 0;
  (this->mVOLInfo).mCodedHeight = 0;
  (this->mVOLInfo).mAspectRatio = '\0';
  (this->mVOLInfo).mAspectRatioPARwidth = '\0';
  (this->mVOLInfo).mAspectRatioPARheight = '\0';
  (this->mVOLInfo).mProfileLevel = '\0';
  (this->mVOLInfo).mFPSNumerator = 0;
  (this->mVOLInfo).mFPSDenominator = 0;
  puVar5 = (this->mHeaderInfo).mInvQuantIntra;
  this->mLowDelay = 0;
  this->mShape = 0;
  this->mVopTimeIncrementBits = 0;
  this->mVopTimeIncrementResolution = 0;
  this->mVopTimeFixedIncrement = 0;
  this->mbVopTimeFixedRate = false;
  this->mResyncMacroblockNumber = 0;
  this->mSpriteUsage = 0;
  this->mTicksPerSecond = 0.0;
  this->mQuantBits = 5;
  uVar3 = mDefaultIntraMatrix._24_8_;
  uVar2 = mDefaultIntraMatrix._16_8_;
  uVar1 = mDefaultIntraMatrix._8_8_;
  if (("-" < puVar5) ||
     (puVar5 + 0x3f <
      "\b\x11\x12\x13\x15\x17\x19\x1b\x11\x12\x13\x15\x17\x19\x1b\x1c\x14\x15\x16\x17\x18\x1a\x1c\x1e\x15\x16\x17\x18\x1a\x1c\x1e \x16\x17\x18\x1a\x1c\x1e #\x17\x18\x1a\x1c\x1e #&\x19\x1a\x1c\x1e #&)\x1b\x1c\x1e #&)-"
     )) {
    *(undefined8 *)puVar5 = mDefaultIntraMatrix._0_8_;
    *(undefined8 *)(puVar5 + 8) = uVar1;
    uVar4 = mDefaultIntraMatrix._40_8_;
    uVar1 = mDefaultIntraMatrix._32_8_;
    *(undefined8 *)(puVar5 + 0x10) = uVar2;
    *(undefined8 *)(puVar5 + 0x18) = uVar3;
    uVar3 = mDefaultIntraMatrix._56_8_;
    uVar2 = mDefaultIntraMatrix._48_8_;
    *(undefined8 *)(puVar5 + 0x20) = uVar1;
    *(undefined8 *)(puVar5 + 0x28) = uVar4;
    *(undefined8 *)(puVar5 + 0x30) = uVar2;
    *(undefined8 *)(puVar5 + 0x38) = uVar3;
  }
  else {
    lVar8 = (longlong)
            "\b\x11\x12\x13\x15\x17\x19\x1b\x11\x12\x13\x15\x17\x19\x1b\x1c\x14\x15\x16\x17\x18\x1a\x1c\x1e\x15\x16\x17\x18\x1a\x1c\x1e \x16\x17\x18\x1a\x1c\x1e #\x17\x18\x1a\x1c\x1e #&\x19\x1a\x1c\x1e #&)\x1b\x1c\x1e #&)-"
            - (longlong)puVar5;
    lVar7 = 0x40;
    do {
      *puVar5 = puVar5[lVar8];
      puVar5 = puVar5 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  uVar3 = mDefaultInterMatrix._24_8_;
  uVar2 = mDefaultInterMatrix._16_8_;
  uVar1 = mDefaultInterMatrix._8_8_;
  puVar5 = (this->mHeaderInfo).mInvQuantInter;
  if (("!" < puVar5) ||
     (puVar5 + 0x3f <
      "\x10\x11\x12\x13\x14\x15\x16\x17\x11\x12\x13\x14\x15\x16\x17\x18\x12\x13\x14\x15\x16\x17\x18\x19\x13\x14\x15\x16\x17\x18\x1a\x1b\x14\x15\x16\x17\x19\x1a\x1b\x1c\x15\x16\x17\x18\x1a\x1b\x1c\x1e\x16\x17\x18\x1a\x1b\x1c\x1e\x1f\x17\x18\x19\x1b\x1c\x1e\x1f!"
     )) {
    *(undefined8 *)puVar5 = mDefaultInterMatrix._0_8_;
    *(undefined8 *)(puVar5 + 8) = uVar1;
    uVar4 = mDefaultInterMatrix._40_8_;
    uVar1 = mDefaultInterMatrix._32_8_;
    *(undefined8 *)(puVar5 + 0x10) = uVar2;
    *(undefined8 *)(puVar5 + 0x18) = uVar3;
    uVar3 = mDefaultInterMatrix._56_8_;
    uVar2 = mDefaultInterMatrix._48_8_;
    *(undefined8 *)(puVar5 + 0x20) = uVar1;
    *(undefined8 *)(puVar5 + 0x28) = uVar4;
    *(undefined8 *)(puVar5 + 0x30) = uVar2;
    *(undefined8 *)(puVar5 + 0x38) = uVar3;
  }
  else {
    lVar7 = (longlong)
            "\x10\x11\x12\x13\x14\x15\x16\x17\x11\x12\x13\x14\x15\x16\x17\x18\x12\x13\x14\x15\x16\x17\x18\x19\x13\x14\x15\x16\x17\x18\x1a\x1b\x14\x15\x16\x17\x19\x1a\x1b\x1c\x15\x16\x17\x18\x1a\x1b\x1c\x1e\x16\x17\x18\x1a\x1b\x1c\x1e\x1f\x17\x18\x19\x1b\x1c\x1e\x1f!"
            - (longlong)puVar5;
    do {
      *puVar5 = puVar5[lVar7];
      puVar5 = puVar5 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  this->mQuarterpel = 0;
  this->mNewPredEnable = 0;
  this->mScalability = 0;
  this->mRefVop[0].x = 0;
  this->mRefVop[0].y = 0;
  this->mRefVop[1].x = 0;
  this->mRefVop[1].y = 0;
  this->mRefVop[2].x = 0;
  this->mRefVop[2].y = 0;
  this->mRefVop[3].x = 0;
  this->mRefVop[3].y = 0;
  return 0;
}

// setMatrix @ 148d1f150

void __thiscall
vdecmpeg4::M4BitstreamParser::setMatrix(M4BitstreamParser *this,uchar *param_1,uchar *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((param_1 <= param_2 + 0x3f) && (param_2 <= param_1 + 0x3f)) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    lVar5 = 0x40;
    do {
      *param_1 = param_1[lVar6];
      param_1 = param_1 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    return;
  }
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  return;
}

// setup @ 148d1f1b0

void __thiscall vdecmpeg4::M4Image::setup(M4Image *this,uchar *param_1,uint param_2)

{
  short sVar1;
  short sVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  
  sVar1 = (this->mImage).texWidth;
  sVar2 = (this->mImage).texHeight;
  (this->mImage).texture.y = param_1;
  lVar6 = (longlong)((int)sVar2 * (int)sVar1);
  (this->mImage).texture.u = param_1 + lVar6 + 0x40;
  (this->mImage).texture.v = param_1 + (lVar6 >> 2) + 0x80 + lVar6;
  if (((ulonglong)param_1 & 0x3f) != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(((size_t)mImage.texture.y)&0x3f)==0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Image.cpp"
                       ,0xbe,L"mImage.texture.y not 64b aligned\n");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((ulonglong)(this->mImage).texture.u & 0x3f) != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(((size_t)mImage.texture.u)&0x3f)==0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Image.cpp"
                       ,0xbf,L"mImage.texture.u not 64b aligned\n");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((ulonglong)(this->mImage).texture.v & 0x3f) != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(((size_t)mImage.texture.v)&0x3f)==0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Image.cpp"
                       ,0xc0,L"mImage.texture.v not 64b aligned\n");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (int)(this->mImage).texWidth;
  lVar6 = (longlong)((iVar5 >> 1) << 4);
  (this->mImage).y = (this->mImage).texture.y + (longlong)(iVar5 << 5) + 0x20;
  (this->mImage).u = (this->mImage).texture.u + lVar6 + 0x10;
  (this->mImage).v = (this->mImage).texture.v + lVar6 + 0x10;
  Black(this);
  return;
}

// show @ 148d1f2d0

uint __thiscall vdecmpeg4::M4Bitstream::show(M4Bitstream *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  
  if (0x1f < param_1 - 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bits>0 && bits<=32",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Bitstream.h"
                       ,0x119,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  bVar4 = (byte)this->mPos;
  iVar5 = (param_1 - 0x20) + this->mPos;
  uVar3 = 0xffffffffU >> (bVar4 & 0x1f) & this->mAWord;
  if (0 < iVar5) {
    bVar4 = (byte)iVar5;
    return this->mBWord >> (0x20 - bVar4 & 0x1f) | uVar3 << (bVar4 & 0x1f);
  }
  return uVar3 >> ((' ' - bVar4) - (char)param_1 & 0x1f);
}

// skip @ 148d1f360

void __thiscall vdecmpeg4::M4Bitstream::skip(M4Bitstream *this,uint param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint local_res10 [6];
  
  if (0x1f < param_1 - 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bits>0 && bits<=32",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Bitstream.h"
                       ,0x130,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->mPos = this->mPos + param_1;
  this->mTotalBits = this->mTotalBits + param_1;
  if (0x1f < this->mPos) {
    this->mAWord = this->mBWord;
    if (this->mpStreamIO != (VIDStreamIO *)0x0) {
      ReadStreamBuffered(this,local_res10);
      this->mBWord = (local_res10[0] & 0xff0000 | local_res10[0] >> 0x10) >> 8 |
                     (local_res10[0] & 0xff00 | local_res10[0] << 0x10) << 8;
      this->mPos = this->mPos - 0x20;
      return;
    }
    uVar1 = this->mTail[2];
    this->mTail = this->mTail + 1;
    this->mBWord = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    this->mPos = this->mPos - 0x20;
  }
  return;
}

// videoPacketHeader @ 148d1f5b0

int __thiscall vdecmpeg4::M4BitstreamParser::videoPacketHeader(M4BitstreamParser *this)

{
  M4Bitstream *pMVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  
  M4Bitstream::nextStartCode(this->mBitstream);
  pMVar1 = this->mBitstream;
  do {
    uVar2 = M4Bitstream::show(pMVar1,1);
    M4Bitstream::skip(pMVar1,1);
  } while (uVar2 == 0);
  if (this->mShape != 0) {
    M4Decoder::VIDPrintf
              (this->mDecoder,
               "M4BitstreamParser::videoPacketHeader(): video_object_layer_shape != \"rectangular\" not supported!\n"
              );
    return -0x7fff0ff0;
  }
  uVar5 = 0;
  iVar3 = (int)(this->mVOLInfo).mHeight * (int)(this->mVOLInfo).mWidth;
  pMVar1 = this->mBitstream;
  for (uVar2 = ((int)(iVar3 + (iVar3 >> 0x1f & 0xffU)) >> 8) - 1; uVar2 != 0; uVar2 = uVar2 >> 1) {
    uVar5 = uVar5 + 1;
  }
  uVar2 = M4Bitstream::show(pMVar1,uVar5);
  M4Bitstream::skip(pMVar1,uVar5);
  this->mResyncMacroblockNumber = uVar2;
  if (this->mShape != 2) {
    pMVar1 = this->mBitstream;
    uVar2 = this->mQuantBits;
    uVar5 = M4Bitstream::show(pMVar1,uVar2);
    M4Bitstream::skip(pMVar1,uVar2);
    (this->mHeaderInfo).mQuant = (ushort)uVar5;
  }
  if (this->mShape == 0) {
    pMVar1 = this->mBitstream;
    uVar2 = M4Bitstream::show(pMVar1,1);
    M4Bitstream::skip(pMVar1,1);
    if (uVar2 != 0) {
      pcVar4 = "M4BitstreamParser::videoPacketHeader(): header_extension_code == 1 not supported!\n"
      ;
      goto LAB_148d1f6ee;
    }
  }
  if (this->mNewPredEnable == 0) {
    return 0;
  }
  pcVar4 = "M4BitstreamParser::videoPacketHeader(): newpred_enable == 1 not supported.\n";
LAB_148d1f6ee:
  M4Decoder::VIDPrintf(this->mDecoder,pcVar4);
  return -0x7fff0ffd;
}

// IMPLEMENT_MODULE_AVEncoder @ 148d1f740

void __cdecl IMPLEMENT_MODULE_AVEncoder(void)

{
  return;
}

// Factories'' @ 15040bc60

void __cdecl `dynamic_atexit_destructor_for_'AVEncoder::FAudioEncoderFactory::Factories__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = AVEncoder::FAudioEncoderFactory::Factories.AllocatorInstance.Data;
  if (AVEncoder::FAudioEncoderFactory::Factories.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (AVEncoder::FAudioEncoderFactory::Factories.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// GlobalLock'' @ 15040bc80

void __cdecl
`dynamic_atexit_destructor_for_'AVEncoder::FVideoDecoderH264_WindowsImpl::GlobalLock__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015040bc87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&AVEncoder::FVideoDecoderH264_WindowsImpl::GlobalLock);
  return;
}

// ProtectSingleton'' @ 15040bca0

void __cdecl
`dynamic_atexit_destructor_for_'AVEncoder::FVideoEncoderFactory::ProtectSingleton__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015040bca7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&AVEncoder::FVideoEncoderFactory::ProtectSingleton);
  return;
}

// Singleton'' @ 15040bcc0

void __cdecl `dynamic_atexit_destructor_for_'AVEncoder::FVideoEncoderFactory::Singleton__(void)

{
  DestructItems<AVEncoder::FVideoEncoderInfo,int>
            ((FVideoEncoderInfo *)
             AVEncoder::FVideoEncoderFactory::Singleton.AvailableEncoders.AllocatorInstance.Data,
             AVEncoder::FVideoEncoderFactory::Singleton.AvailableEncoders.ArrayNum);
  if (AVEncoder::FVideoEncoderFactory::Singleton.AvailableEncoders.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(AVEncoder::FVideoEncoderFactory::Singleton.AvailableEncoders.AllocatorInstance.
                  Data);
  }
  DestructItems<TFunction<TUniquePtr<AVEncoder::FVideoEncoder,TDefaultDelete<AVEncoder::FVideoEncoder>_>___cdecl(void)>,int>
            ((TFunction<TUniquePtr<AVEncoder::FVideoEncoder,TDefaultDelete<AVEncoder::FVideoEncoder>_>___cdecl(void)>
              *)AVEncoder::FVideoEncoderFactory::Singleton.CreateEncoders.AllocatorInstance.Data,
             AVEncoder::FVideoEncoderFactory::Singleton.CreateEncoders.ArrayNum);
  if (AVEncoder::FVideoEncoderFactory::Singleton.CreateEncoders.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(AVEncoder::FVideoEncoderFactory::Singleton.CreateEncoders.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Buffer'' @ 15040bd20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`AVEncoder::FF5PlayerVideoDecoderOutputDX::GetBuffer'::__l2::
_dynamic_atexit_destructor_for__Buffer__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _Buffer;
  if (_Buffer == (void *)0x0) {
    return;
  }
  if (_Buffer != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogAVEncoder'' @ 15040bd40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAVEncoder__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAVEncoder);
  return;
}

// `dynamic_atexit_destructor_for_'LogVideoDecoder'' @ 15040bd60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogVideoDecoder__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogVideoDecoder);
  return;
}

// `dynamic_atexit_destructor_for_'LogVideoEncoder'' @ 15040bd80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogVideoEncoder__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogVideoEncoder);
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 15040bda0

void __cdecl
`AVEncoder::FVideoDecoderFactory::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__(void)

{
  ::Singleton.AvailableDecoders.ArrayNum = 0;
  if (::Singleton.AvailableDecoders.ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&::Singleton.AvailableDecoders.AllocatorInstance,0,
               &::Singleton.AvailableDecoders.ArrayMax);
  }
  DestructItems<TFunction<AVEncoder::FVideoDecoder_*___cdecl(void)>,int>
            ((TFunction<AVEncoder::FVideoDecoder_*___cdecl(void)> *)
             ::Singleton.CreateDecoders.AllocatorInstance.Data,::Singleton.CreateDecoders.ArrayNum);
  ::Singleton.CreateDecoders.ArrayNum = 0;
  if (::Singleton.CreateDecoders.ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,0x10,0,(ForAnyElementType *)&::Singleton,0,&::Singleton.CreateDecoders.ArrayMax)
    ;
  }
  if (::Singleton.AvailableDecoders.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::Singleton.AvailableDecoders.AllocatorInstance.Data);
  }
  DestructItems<TFunction<AVEncoder::FVideoDecoder_*___cdecl(void)>,int>
            ((TFunction<AVEncoder::FVideoDecoder_*___cdecl(void)> *)
             ::Singleton.CreateDecoders.AllocatorInstance.Data,::Singleton.CreateDecoders.ArrayNum);
  if (::Singleton.CreateDecoders.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::Singleton.CreateDecoders.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'WmfAudioEncoderFactory'' @ 15040be70

void __cdecl
`AVEncoder::RegisterDefaultFactories'::__l2::
_dynamic_atexit_destructor_for__WmfAudioEncoderFactory__(void)

{
  WmfAudioEncoderFactory = (FWmfAudioEncoderFactory)&___7FAudioEncoderFactory_AVEncoder__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'_GCsvCategory_AVEncoder'' @ 15040be90

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_AVEncoder__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_AVEncoder.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_AVEncoder.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_AVEncoder.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'a'' @ 15040beb0

void __cdecl `AVEncoder::Actives'::__l2::_dynamic_atexit_destructor_for__a__(void)

{
  a._72_4_ = 0;
  if (a._64_8_ != 0) {
    FMemory::Free((void *)a._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<void_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<void_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&a);
  return;
}

