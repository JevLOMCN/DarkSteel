// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 4

// Get @ 14ea4a970

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_protected:_enum_FExrImgMediaReader::EReadResult___cdecl_FExrImgMediaReaderGpu::ReadMip(int,FImgMediaTileSelection_const_&,TSharedPtr<FImgMediaFrame,1>,FSampleConverterParameters_&,TSharedPtr<FExrMediaTextureSampleConverter,1>,FString_const_&)_::_26_::TSTR_CopyFromUploadBuffer181>
* __cdecl TRenderCommandTag<`FExrImgMediaReaderGpu::ReadMip'::__l26::TSTR_CopyFromUploadBuffer181>::
          Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_enum_FExrImgMediaReader::EReadResult___cdecl_FExrImgMediaReaderGpu::ReadMip(int,FImgMediaTileSelection_const_&,TSharedPtr<FImgMediaFrame,1>,FSampleConverterParameters_&,TSharedPtr<FExrMediaTextureSampleConverter,1>,FString_const_&)_::_26_::TSTR_CopyFromUploadBuffer181>_const_&___cdecl_TRenderCommandTag<_protected:_enum_FExrImgMediaReader::EReadResult___cdecl_FExrImgMediaReaderGpu::ReadMip(int,FImgMediaTileSelection_const_&,TSharedPtr<FImgMediaFrame,1>,FSampleConverterParameters_&,TSharedPtr<FExrMediaTextureSampleConverter,1>,FString_const_&)_::_26_::TSTR_CopyFromUploadBuffer181>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_enum_FExrImgMediaReader::EReadResult___cdecl_FExrImgMediaReaderGpu::ReadMip(int,FImgMediaTileSelection_const_&,TSharedPtr<FImgMediaFrame,1>,FSampleConverterParameters_&,TSharedPtr<FExrMediaTextureSampleConverter,1>,FString_const_&)_::_26_::TSTR_CopyFromUploadBuffer181>_const_&___cdecl_TRenderCommandTag<_protected:_enum_FExrImgMediaReader::EReadResult___cdecl_FExrImgMediaReaderGpu::ReadMip(int,FImgMediaTileSelection_const_&,TSharedPtr<FImgMediaFrame,1>,FSampleConverterParameters_&,TSharedPtr<FExrMediaTextureSampleConverter,1>,FString_const_&)_::_26_::TSTR_CopyFromUploadBuffer181>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"CopyFromUploadBuffer");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"CopyFromUploadBuffer",
                   "STATGROUP_RenderThreadCommands","STATCAT_Advanced",L"Render Thread Commands",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar3 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      FVar2 = ::Stat;
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_enum_FExrImgMediaReader::EReadResult___cdecl_FExrImgMediaReaderGpu::ReadMip(int,FImgMediaTileSelection_const_&,TSharedPtr<FImgMediaFrame,1>,FSampleConverterParameters_&,TSharedPtr<FExrMediaTextureSampleConverter,1>,FString_const_&)_::_26_::TSTR_CopyFromUploadBuffer181>_const_&___cdecl_TRenderCommandTag<_protected:_enum_FExrImgMediaReader::EReadResult___cdecl_FExrImgMediaReaderGpu::ReadMip(int,FImgMediaTileSelection_const_&,TSharedPtr<FImgMediaFrame,1>,FSampleConverterParameters_&,TSharedPtr<FExrMediaTextureSampleConverter,1>,FString_const_&)_::_26_::TSTR_CopyFromUploadBuffer181>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"CopyFromUploadBuffer");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_enum_FExrImgMediaReader::EReadResult___cdecl_FExrImgMediaReaderGpu::ReadMip(int,FImgMediaTileSelection_const_&,TSharedPtr<FImgMediaFrame,1>,FSampleConverterParameters_&,TSharedPtr<FExrMediaTextureSampleConverter,1>,FString_const_&)_::_26_::TSTR_CopyFromUploadBuffer181>_const_&___cdecl_TRenderCommandTag<_protected:_enum_FExrImgMediaReader::EReadResult___cdecl_FExrImgMediaReaderGpu::ReadMip(int,FImgMediaTileSelection_const_&,TSharedPtr<FImgMediaFrame,1>,FSampleConverterParameters_&,TSharedPtr<FExrMediaTextureSampleConverter,1>,FString_const_&)_::_26_::TSTR_CopyFromUploadBuffer181>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"CopyFromUploadBuffer",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_CopyFromUploadB;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14ea4ab20

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_class_TSharedPtr<FStructuredBufferPoolItem,1>___cdecl_FExrImgMediaReaderGpu::AllocateGpuBufferFromPool(unsigned_int)_::_9_::TSTR_CreatePooledBuffer675>
* __cdecl TRenderCommandTag<`FExrImgMediaReaderGpu::AllocateGpuBufferFromPool'::__l9::TSTR_CreatePooledBuffer675>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_class_TSharedPtr<FStructuredBufferPoolItem,1>___cdecl_FExrImgMediaReaderGpu::AllocateGpuBufferFromPool(unsigned_int)_::_9_::TSTR_CreatePooledBuffer675>_const_&___cdecl_TRenderCommandTag<_public:_virtual_class_TSharedPtr<FStructuredBufferPoolItem,1>___cdecl_FExrImgMediaReaderGpu::AllocateGpuBufferFromPool(unsigned_int)_::_9_::TSTR_CreatePooledBuffer675>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_class_TSharedPtr<FStructuredBufferPoolItem,1>___cdecl_FExrImgMediaReaderGpu::AllocateGpuBufferFromPool(unsigned_int)_::_9_::TSTR_CreatePooledBuffer675>_const_&___cdecl_TRenderCommandTag<_public:_virtual_class_TSharedPtr<FStructuredBufferPoolItem,1>___cdecl_FExrImgMediaReaderGpu::AllocateGpuBufferFromPool(unsigned_int)_::_9_::TSTR_CreatePooledBuffer675>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"CreatePooledBuffer");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"CreatePooledBuffer",
                   "STATGROUP_RenderThreadCommands","STATCAT_Advanced",L"Render Thread Commands",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar3 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      FVar2 = ::Stat;
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_class_TSharedPtr<FStructuredBufferPoolItem,1>___cdecl_FExrImgMediaReaderGpu::AllocateGpuBufferFromPool(unsigned_int)_::_9_::TSTR_CreatePooledBuffer675>_const_&___cdecl_TRenderCommandTag<_public:_virtual_class_TSharedPtr<FStructuredBufferPoolItem,1>___cdecl_FExrImgMediaReaderGpu::AllocateGpuBufferFromPool(unsigned_int)_::_9_::TSTR_CreatePooledBuffer675>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"CreatePooledBuffer");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_class_TSharedPtr<FStructuredBufferPoolItem,1>___cdecl_FExrImgMediaReaderGpu::AllocateGpuBufferFromPool(unsigned_int)_::_9_::TSTR_CreatePooledBuffer675>_const_&___cdecl_TRenderCommandTag<_public:_virtual_class_TSharedPtr<FStructuredBufferPoolItem,1>___cdecl_FExrImgMediaReaderGpu::AllocateGpuBufferFromPool(unsigned_int)_::_9_::TSTR_CreatePooledBuffer675>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"CreatePooledBuffer",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_CreatePooledBuf;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14ea4acd0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:___cdecl__public:_virtual_class_TSharedPtr<FStructuredBufferPoolItem,1>___cdecl_FExrImgMediaReaderGpu::AllocateGpuBufferFromPool(unsigned_int)_::_2_::<lambda_1>::operator()(FStructuredBufferPoolItem_*)const_::_7_::TSTR_DeletePooledBuffers650>
* __cdecl TRenderCommandTag<``FExrImgMediaReaderGpu::AllocateGpuBufferFromPool'::__l2::<lambda_1>::operator()'::__l7::TSTR_DeletePooledBuffers650>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl__public:_virtual_class_TSharedPtr<FStructuredBufferPoolItem,1>___cdecl_FExrImgMediaReaderGpu::AllocateGpuBufferFromPool(unsigned_int)_::_2_::<lambda_1>::operator()(FStructuredBufferPoolItem_*)const_::_7_::TSTR_DeletePooledBuffers650>_const_&___cdecl_TRenderCommandTag<_public:___cdecl__public:_virtual_class_TSharedPtr<FStructuredBufferPoolItem,1>___cdecl_FExrImgMediaReaderGpu::AllocateGpuBufferFromPool(unsigned_int)_::_2_::<lambda_1>::operator()(FStructuredBufferPoolItem_*)const_::_7_::TSTR_DeletePooledBuffers650>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl__public:_virtual_class_TSharedPtr<FStructuredBufferPoolItem,1>___cdecl_FExrImgMediaReaderGpu::AllocateGpuBufferFromPool(unsigned_int)_::_2_::<lambda_1>::operator()(FStructuredBufferPoolItem_*)const_::_7_::TSTR_DeletePooledBuffers650>_const_&___cdecl_TRenderCommandTag<_public:___cdecl__public:_virtual_class_TSharedPtr<FStructuredBufferPoolItem,1>___cdecl_FExrImgMediaReaderGpu::AllocateGpuBufferFromPool(unsigned_int)_::_2_::<lambda_1>::operator()(FStructuredBufferPoolItem_*)const_::_7_::TSTR_DeletePooledBuffers650>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"DeletePooledBuffers");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"DeletePooledBuffers",
                   "STATGROUP_RenderThreadCommands","STATCAT_Advanced",L"Render Thread Commands",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar3 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      FVar2 = ::Stat;
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl__public:_virtual_class_TSharedPtr<FStructuredBufferPoolItem,1>___cdecl_FExrImgMediaReaderGpu::AllocateGpuBufferFromPool(unsigned_int)_::_2_::<lambda_1>::operator()(FStructuredBufferPoolItem_*)const_::_7_::TSTR_DeletePooledBuffers650>_const_&___cdecl_TRenderCommandTag<_public:___cdecl__public:_virtual_class_TSharedPtr<FStructuredBufferPoolItem,1>___cdecl_FExrImgMediaReaderGpu::AllocateGpuBufferFromPool(unsigned_int)_::_2_::<lambda_1>::operator()(FStructuredBufferPoolItem_*)const_::_7_::TSTR_DeletePooledBuffers650>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"DeletePooledBuffers");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl__public:_virtual_class_TSharedPtr<FStructuredBufferPoolItem,1>___cdecl_FExrImgMediaReaderGpu::AllocateGpuBufferFromPool(unsigned_int)_::_2_::<lambda_1>::operator()(FStructuredBufferPoolItem_*)const_::_7_::TSTR_DeletePooledBuffers650>_const_&___cdecl_TRenderCommandTag<_public:___cdecl__public:_virtual_class_TSharedPtr<FStructuredBufferPoolItem,1>___cdecl_FExrImgMediaReaderGpu::AllocateGpuBufferFromPool(unsigned_int)_::_2_::<lambda_1>::operator()(FStructuredBufferPoolItem_*)const_::_7_::TSTR_DeletePooledBuffers650>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"DeletePooledBuffers",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_DeletePooledBuf;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14ea4ae80

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual___cdecl_FExrImgMediaReaderGpu::~FExrImgMediaReaderGpu(void)_::_2_::TSTR_DeletePooledBuffers96>
* __cdecl TRenderCommandTag<`FExrImgMediaReaderGpu::~FExrImgMediaReaderGpu'::__l2::TSTR_DeletePooledBuffers96>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual___cdecl_FExrImgMediaReaderGpu::~FExrImgMediaReaderGpu(void)_::_2_::TSTR_DeletePooledBuffers96>_const_&___cdecl_TRenderCommandTag<_public:_virtual___cdecl_FExrImgMediaReaderGpu::~FExrImgMediaReaderGpu(void)_::_2_::TSTR_DeletePooledBuffers96>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual___cdecl_FExrImgMediaReaderGpu::~FExrImgMediaReaderGpu(void)_::_2_::TSTR_DeletePooledBuffers96>_const_&___cdecl_TRenderCommandTag<_public:_virtual___cdecl_FExrImgMediaReaderGpu::~FExrImgMediaReaderGpu(void)_::_2_::TSTR_DeletePooledBuffers96>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"DeletePooledBuffers");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"DeletePooledBuffers",
                   "STATGROUP_RenderThreadCommands","STATCAT_Advanced",L"Render Thread Commands",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar3 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      FVar2 = ::Stat;
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual___cdecl_FExrImgMediaReaderGpu::~FExrImgMediaReaderGpu(void)_::_2_::TSTR_DeletePooledBuffers96>_const_&___cdecl_TRenderCommandTag<_public:_virtual___cdecl_FExrImgMediaReaderGpu::~FExrImgMediaReaderGpu(void)_::_2_::TSTR_DeletePooledBuffers96>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"DeletePooledBuffers");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual___cdecl_FExrImgMediaReaderGpu::~FExrImgMediaReaderGpu(void)_::_2_::TSTR_DeletePooledBuffers96>_const_&___cdecl_TRenderCommandTag<_public:_virtual___cdecl_FExrImgMediaReaderGpu::~FExrImgMediaReaderGpu(void)_::_2_::TSTR_DeletePooledBuffers96>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"DeletePooledBuffers",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_DeletePooledBuf;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

