// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 3

// Get @ 148c8f640

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_ReadBackbuffer(FViewport_const_*,TArray<FColor,TSizedDefaultAllocator<32>_>_*)_::_2_::TSTR_CopyBackbufferCmd179>
* __cdecl TRenderCommandTag<`ReadBackbuffer'::__l2::TSTR_CopyBackbufferCmd179>::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_ReadBackbuffer(FViewport_const_*,TArray<FColor,TSizedDefaultAllocator<32>_>_*)_::_2_::TSTR_CopyBackbufferCmd179>_const_&___cdecl_TRenderCommandTag<_void___cdecl_ReadBackbuffer(FViewport_const_*,TArray<FColor,TSizedDefaultAllocator<32>_>_*)_::_2_::TSTR_CopyBackbufferCmd179>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_ReadBackbuffer(FViewport_const_*,TArray<FColor,TSizedDefaultAllocator<32>_>_*)_::_2_::TSTR_CopyBackbufferCmd179>_const_&___cdecl_TRenderCommandTag<_void___cdecl_ReadBackbuffer(FViewport_const_*,TArray<FColor,TSizedDefaultAllocator<32>_>_*)_::_2_::TSTR_CopyBackbufferCmd179>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"CopyBackbufferCmd");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"CopyBackbufferCmd",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_ReadBackbuffer(FViewport_const_*,TArray<FColor,TSizedDefaultAllocator<32>_>_*)_::_2_::TSTR_CopyBackbufferCmd179>_const_&___cdecl_TRenderCommandTag<_void___cdecl_ReadBackbuffer(FViewport_const_*,TArray<FColor,TSizedDefaultAllocator<32>_>_*)_::_2_::TSTR_CopyBackbufferCmd179>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"CopyBackbufferCmd");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_ReadBackbuffer(FViewport_const_*,TArray<FColor,TSizedDefaultAllocator<32>_>_*)_::_2_::TSTR_CopyBackbufferCmd179>_const_&___cdecl_TRenderCommandTag<_void___cdecl_ReadBackbuffer(FViewport_const_*,TArray<FColor,TSizedDefaultAllocator<32>_>_*)_::_2_::TSTR_CopyBackbufferCmd179>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"CopyBackbufferCmd",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_CopyBackbufferC;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 148c8f7f0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_GetBackbufferInfo(FViewport_const_*,EPixelFormat_*,bool_*)_::_2_::TSTR_GetBackbufferFormatCmd45>
* __cdecl TRenderCommandTag<`GetBackbufferInfo'::__l2::TSTR_GetBackbufferFormatCmd45>::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_GetBackbufferInfo(FViewport_const_*,EPixelFormat_*,bool_*)_::_2_::TSTR_GetBackbufferFormatCmd45>_const_&___cdecl_TRenderCommandTag<_void___cdecl_GetBackbufferInfo(FViewport_const_*,EPixelFormat_*,bool_*)_::_2_::TSTR_GetBackbufferFormatCmd45>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_GetBackbufferInfo(FViewport_const_*,EPixelFormat_*,bool_*)_::_2_::TSTR_GetBackbufferFormatCmd45>_const_&___cdecl_TRenderCommandTag<_void___cdecl_GetBackbufferInfo(FViewport_const_*,EPixelFormat_*,bool_*)_::_2_::TSTR_GetBackbufferFormatCmd45>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"GetBackbufferFormatCmd");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"GetBackbufferFormatCmd",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_GetBackbufferInfo(FViewport_const_*,EPixelFormat_*,bool_*)_::_2_::TSTR_GetBackbufferFormatCmd45>_const_&___cdecl_TRenderCommandTag<_void___cdecl_GetBackbufferInfo(FViewport_const_*,EPixelFormat_*,bool_*)_::_2_::TSTR_GetBackbufferFormatCmd45>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"GetBackbufferFormatCmd");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_GetBackbufferInfo(FViewport_const_*,EPixelFormat_*,bool_*)_::_2_::TSTR_GetBackbufferFormatCmd45>_const_&___cdecl_TRenderCommandTag<_void___cdecl_GetBackbufferInfo(FViewport_const_*,EPixelFormat_*,bool_*)_::_2_::TSTR_GetBackbufferFormatCmd45>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"GetBackbufferFormatCmd",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_GetBackbufferFo;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 148c8f9a0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_ReadPixelsFromRT(UTextureRenderTarget2D_*,TArray<FColor,TSizedDefaultAllocator<32>_>_*)_::_2_::TSTR_ReadScreenshotRTCmd195>
* __cdecl TRenderCommandTag<`ReadPixelsFromRT'::__l2::TSTR_ReadScreenshotRTCmd195>::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_ReadPixelsFromRT(UTextureRenderTarget2D_*,TArray<FColor,TSizedDefaultAllocator<32>_>_*)_::_2_::TSTR_ReadScreenshotRTCmd195>_const_&___cdecl_TRenderCommandTag<_void___cdecl_ReadPixelsFromRT(UTextureRenderTarget2D_*,TArray<FColor,TSizedDefaultAllocator<32>_>_*)_::_2_::TSTR_ReadScreenshotRTCmd195>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_ReadPixelsFromRT(UTextureRenderTarget2D_*,TArray<FColor,TSizedDefaultAllocator<32>_>_*)_::_2_::TSTR_ReadScreenshotRTCmd195>_const_&___cdecl_TRenderCommandTag<_void___cdecl_ReadPixelsFromRT(UTextureRenderTarget2D_*,TArray<FColor,TSizedDefaultAllocator<32>_>_*)_::_2_::TSTR_ReadScreenshotRTCmd195>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ReadScreenshotRTCmd");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ReadScreenshotRTCmd",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_ReadPixelsFromRT(UTextureRenderTarget2D_*,TArray<FColor,TSizedDefaultAllocator<32>_>_*)_::_2_::TSTR_ReadScreenshotRTCmd195>_const_&___cdecl_TRenderCommandTag<_void___cdecl_ReadPixelsFromRT(UTextureRenderTarget2D_*,TArray<FColor,TSizedDefaultAllocator<32>_>_*)_::_2_::TSTR_ReadScreenshotRTCmd195>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ReadScreenshotRTCmd");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_ReadPixelsFromRT(UTextureRenderTarget2D_*,TArray<FColor,TSizedDefaultAllocator<32>_>_*)_::_2_::TSTR_ReadScreenshotRTCmd195>_const_&___cdecl_TRenderCommandTag<_void___cdecl_ReadPixelsFromRT(UTextureRenderTarget2D_*,TArray<FColor,TSizedDefaultAllocator<32>_>_*)_::_2_::TSTR_ReadScreenshotRTCmd195>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ReadScreenshotRTCmd",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_ReadScreenshotR;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

