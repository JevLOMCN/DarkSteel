// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 33

// Get @ 145d2a6e0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_UE::RenderCore::DumpGPU::TickEndFrame(void)_::_29_::TSTR_FDumpGPULogRemaingFrames2689>
* __cdecl TRenderCommandTag<`UE::RenderCore::DumpGPU::TickEndFrame'::__l29::TSTR_FDumpGPULogRemaingFrames2689>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_UE::RenderCore::DumpGPU::TickEndFrame(void)_::_29_::TSTR_FDumpGPULogRemaingFrames2689>_const_&___cdecl_TRenderCommandTag<_void___cdecl_UE::RenderCore::DumpGPU::TickEndFrame(void)_::_29_::TSTR_FDumpGPULogRemaingFrames2689>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_UE::RenderCore::DumpGPU::TickEndFrame(void)_::_29_::TSTR_FDumpGPULogRemaingFrames2689>_const_&___cdecl_TRenderCommandTag<_void___cdecl_UE::RenderCore::DumpGPU::TickEndFrame(void)_::_29_::TSTR_FDumpGPULogRemaingFrames2689>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FDumpGPULogRemaingFrames");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FDumpGPULogRemaingFrames",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_UE::RenderCore::DumpGPU::TickEndFrame(void)_::_29_::TSTR_FDumpGPULogRemaingFrames2689>_const_&___cdecl_TRenderCommandTag<_void___cdecl_UE::RenderCore::DumpGPU::TickEndFrame(void)_::_29_::TSTR_FDumpGPULogRemaingFrames2689>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FDumpGPULogRemaingFrames");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_UE::RenderCore::DumpGPU::TickEndFrame(void)_::_29_::TSTR_FDumpGPULogRemaingFrames2689>_const_&___cdecl_TRenderCommandTag<_void___cdecl_UE::RenderCore::DumpGPU::TickEndFrame(void)_::_29_::TSTR_FDumpGPULogRemaingFrames2689>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FDumpGPULogRemaingFrames","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FDumpGPULogRema;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145d2a890

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_FRDGResourceDumpContext::Finish(void)_::_17_::TSTR_FEndGPUDump2253>
* __cdecl TRenderCommandTag<`FRDGResourceDumpContext::Finish'::__l17::TSTR_FEndGPUDump2253>::Get
                    (void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FRDGResourceDumpContext::Finish(void)_::_17_::TSTR_FEndGPUDump2253>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FRDGResourceDumpContext::Finish(void)_::_17_::TSTR_FEndGPUDump2253>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FRDGResourceDumpContext::Finish(void)_::_17_::TSTR_FEndGPUDump2253>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FRDGResourceDumpContext::Finish(void)_::_17_::TSTR_FEndGPUDump2253>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FEndGPUDump");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FEndGPUDump",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FRDGResourceDumpContext::Finish(void)_::_17_::TSTR_FEndGPUDump2253>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FRDGResourceDumpContext::Finish(void)_::_17_::TSTR_FEndGPUDump2253>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FEndGPUDump");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FRDGResourceDumpContext::Finish(void)_::_17_::TSTR_FEndGPUDump2253>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FRDGResourceDumpContext::Finish(void)_::_17_::TSTR_FEndGPUDump2253>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FEndGPUDump",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FEndGPUDump;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145d2aa40

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_FRDGResourceDumpContext::Start(void)_::_2_::TSTR_FStartGPUDump2229>
* __cdecl TRenderCommandTag<`FRDGResourceDumpContext::Start'::__l2::TSTR_FStartGPUDump2229>::Get
                    (void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FRDGResourceDumpContext::Start(void)_::_2_::TSTR_FStartGPUDump2229>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FRDGResourceDumpContext::Start(void)_::_2_::TSTR_FStartGPUDump2229>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FRDGResourceDumpContext::Start(void)_::_2_::TSTR_FStartGPUDump2229>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FRDGResourceDumpContext::Start(void)_::_2_::TSTR_FStartGPUDump2229>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FStartGPUDump");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FStartGPUDump",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FRDGResourceDumpContext::Start(void)_::_2_::TSTR_FStartGPUDump2229>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FRDGResourceDumpContext::Start(void)_::_2_::TSTR_FStartGPUDump2229>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FStartGPUDump");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FRDGResourceDumpContext::Start(void)_::_2_::TSTR_FStartGPUDump2229>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FRDGResourceDumpContext::Start(void)_::_2_::TSTR_FStartGPUDump2229>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FStartGPUDump",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FStartGPUDump;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145db7dc0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:___cdecl_RenderCaptureInterface::FScopedCapture::FScopedCapture(bool,wchar_t_const_*,wchar_t_const_*)_::_12_::TSTR_BeginCaptureCommand24>
* __cdecl TRenderCommandTag<`RenderCaptureInterface::FScopedCapture::FScopedCapture'::__l12::TSTR_BeginCaptureCommand24>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_RenderCaptureInterface::FScopedCapture::FScopedCapture(bool,wchar_t_const_*,wchar_t_const_*)_::_12_::TSTR_BeginCaptureCommand24>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_RenderCaptureInterface::FScopedCapture::FScopedCapture(bool,wchar_t_const_*,wchar_t_const_*)_::_12_::TSTR_BeginCaptureCommand24>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_RenderCaptureInterface::FScopedCapture::FScopedCapture(bool,wchar_t_const_*,wchar_t_const_*)_::_12_::TSTR_BeginCaptureCommand24>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_RenderCaptureInterface::FScopedCapture::FScopedCapture(bool,wchar_t_const_*,wchar_t_const_*)_::_12_::TSTR_BeginCaptureCommand24>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"BeginCaptureCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"BeginCaptureCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_RenderCaptureInterface::FScopedCapture::FScopedCapture(bool,wchar_t_const_*,wchar_t_const_*)_::_12_::TSTR_BeginCaptureCommand24>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_RenderCaptureInterface::FScopedCapture::FScopedCapture(bool,wchar_t_const_*,wchar_t_const_*)_::_12_::TSTR_BeginCaptureCommand24>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"BeginCaptureCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_RenderCaptureInterface::FScopedCapture::FScopedCapture(bool,wchar_t_const_*,wchar_t_const_*)_::_12_::TSTR_BeginCaptureCommand24>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_RenderCaptureInterface::FScopedCapture::FScopedCapture(bool,wchar_t_const_*,wchar_t_const_*)_::_12_::TSTR_BeginCaptureCommand24>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"BeginCaptureCommand",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_BeginCaptureCom;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145db7f70

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:___cdecl_RenderCaptureInterface::FScopedCapture::~FScopedCapture(void)_::_34_::TSTR_EndCaptureCommand131>
* __cdecl TRenderCommandTag<`RenderCaptureInterface::FScopedCapture::~FScopedCapture'::__l34::TSTR_EndCaptureCommand131>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_RenderCaptureInterface::FScopedCapture::~FScopedCapture(void)_::_34_::TSTR_EndCaptureCommand131>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_RenderCaptureInterface::FScopedCapture::~FScopedCapture(void)_::_34_::TSTR_EndCaptureCommand131>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_RenderCaptureInterface::FScopedCapture::~FScopedCapture(void)_::_34_::TSTR_EndCaptureCommand131>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_RenderCaptureInterface::FScopedCapture::~FScopedCapture(void)_::_34_::TSTR_EndCaptureCommand131>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"EndCaptureCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"EndCaptureCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_RenderCaptureInterface::FScopedCapture::~FScopedCapture(void)_::_34_::TSTR_EndCaptureCommand131>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_RenderCaptureInterface::FScopedCapture::~FScopedCapture(void)_::_34_::TSTR_EndCaptureCommand131>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"EndCaptureCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_RenderCaptureInterface::FScopedCapture::~FScopedCapture(void)_::_34_::TSTR_EndCaptureCommand131>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_RenderCaptureInterface::FScopedCapture::~FScopedCapture(void)_::_34_::TSTR_EndCaptureCommand131>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"EndCaptureCommand",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_EndCaptureComma;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145db8120

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_SetNearClipPlaneGlobals(float)_::_2_::TSTR_SetNearClipPlane_RenderThread346>
* __cdecl TRenderCommandTag<`SetNearClipPlaneGlobals'::__l2::TSTR_SetNearClipPlane_RenderThread346>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_SetNearClipPlaneGlobals(float)_::_2_::TSTR_SetNearClipPlane_RenderThread346>_const_&___cdecl_TRenderCommandTag<_void___cdecl_SetNearClipPlaneGlobals(float)_::_2_::TSTR_SetNearClipPlane_RenderThread346>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_SetNearClipPlaneGlobals(float)_::_2_::TSTR_SetNearClipPlane_RenderThread346>_const_&___cdecl_TRenderCommandTag<_void___cdecl_SetNearClipPlaneGlobals(float)_::_2_::TSTR_SetNearClipPlane_RenderThread346>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SetNearClipPlane_RenderThread");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"SetNearClipPlane_RenderThread",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_SetNearClipPlaneGlobals(float)_::_2_::TSTR_SetNearClipPlane_RenderThread346>_const_&___cdecl_TRenderCommandTag<_void___cdecl_SetNearClipPlaneGlobals(float)_::_2_::TSTR_SetNearClipPlane_RenderThread346>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SetNearClipPlane_RenderThread");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_SetNearClipPlaneGlobals(float)_::_2_::TSTR_SetNearClipPlane_RenderThread346>_const_&___cdecl_TRenderCommandTag<_void___cdecl_SetNearClipPlaneGlobals(float)_::_2_::TSTR_SetNearClipPlane_RenderThread346>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"SetNearClipPlane_RenderThread","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_SetNearClipPlan;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145e0bcd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_FBatchedReleaseResources::Flush(void)_::_5_::TSTR_BatchReleaseCommand323>
* __cdecl TRenderCommandTag<`FBatchedReleaseResources::Flush'::__l5::TSTR_BatchReleaseCommand323>::
          Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FBatchedReleaseResources::Flush(void)___ptr64'::`5'::TSTR_BatchReleaseCommand323>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FBatchedReleaseResources::Flush(void)___ptr64'::`5'::TSTR_BatchReleaseCommand323>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FBatchedReleaseResources::Flush(void)___ptr64'::`5'::TSTR_BatchReleaseCommand323>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FBatchedReleaseResources::Flush(void)___ptr64'::`5'::TSTR_BatchReleaseCommand323>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FBatchedReleaseResources::Flush(void)___ptr64'::`5'::TSTR_BatchReleaseCommand323>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FBatchedReleaseResources::Flush(void)___ptr64'::`5'::TSTR_BatchReleaseCommand323>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"BatchReleaseCommand");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FBatchedReleaseResources::Flush(void)___ptr64'::`5'::TSTR_BatchReleaseCommand323>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FBatchedReleaseResources::Flush(void)___ptr64'::`5'::TSTR_BatchReleaseCommand323>::Get(void)'
                ::__l2::Stat,*pFVar1,L"BatchReleaseCommand","STATGROUP_RenderThreadCommands",
               "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FBatchedReleaseResources::Flush(void)___ptr64'::`5'::TSTR_BatchReleaseCommand323>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FBatchedReleaseResources::Flush(void)___ptr64'::`5'::TSTR_BatchReleaseCommand323>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FBatchedReleaseResources::Flush(void)___ptr64'::`5'::TSTR_BatchReleaseCommand323>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FBatchedReleaseResources::Flush(void)___ptr64'::`5'::TSTR_BatchReleaseCommand323>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FBatchedReleaseResources::Flush(void)___ptr64'::`5'::TSTR_BatchReleaseCommand323>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FBatchedReleaseResources::Flush(void)___ptr64'::`5'::TSTR_BatchReleaseCommand323>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FBatchedReleaseResources::Flush(void)___ptr64'::`5'::TSTR_BatchReleaseCommand323>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FBatchedReleaseResources::Flush(void)___ptr64'::`5'::TSTR_BatchReleaseCommand323>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"BatchReleaseCommand");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FBatchedReleaseResources::Flush(void)___ptr64'::`5'::TSTR_BatchReleaseCommand323>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FBatchedReleaseResources::Flush(void)___ptr64'::`5'::TSTR_BatchReleaseCommand323>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"BatchReleaseCommand",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"BatchReleaseCommand";
    _DAT_155190748 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FBatchedReleaseResources::Flush(void)___ptr64'::`5'::TSTR_BatchReleaseCommand323>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FBatchedReleaseResources::Flush(void)___ptr64'::`5'::TSTR_BatchReleaseCommand323>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_public:_void___cdecl_FBatchedReleaseResources::Flush(void)_::_5_::TSTR_BatchReleaseCommand323>
          *)&`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FBatchedReleaseResources::Flush(void)___ptr64'::`5'::TSTR_BatchReleaseCommand323>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FBatchedReleaseResources::Flush(void)___ptr64'::`5'::TSTR_BatchReleaseCommand323>::Get(void)'
             ::__l2::Tag;
}

// Get @ 145e0be90

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_FRenderCommandFence::BeginFence(FRenderCommandFence::ESyncDepth)_::_28_::TSTR_BeginFence1018>
* __cdecl TRenderCommandTag<`FRenderCommandFence::BeginFence'::__l28::TSTR_BeginFence1018>::Get
                    (void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FRenderCommandFence::BeginFence(FRenderCommandFence::ESyncDepth)_::_28_::TSTR_BeginFence1018>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FRenderCommandFence::BeginFence(FRenderCommandFence::ESyncDepth)_::_28_::TSTR_BeginFence1018>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FRenderCommandFence::BeginFence(FRenderCommandFence::ESyncDepth)_::_28_::TSTR_BeginFence1018>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FRenderCommandFence::BeginFence(FRenderCommandFence::ESyncDepth)_::_28_::TSTR_BeginFence1018>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"BeginFence");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"BeginFence",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FRenderCommandFence::BeginFence(FRenderCommandFence::ESyncDepth)_::_28_::TSTR_BeginFence1018>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FRenderCommandFence::BeginFence(FRenderCommandFence::ESyncDepth)_::_28_::TSTR_BeginFence1018>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"BeginFence");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FRenderCommandFence::BeginFence(FRenderCommandFence::ESyncDepth)_::_28_::TSTR_BeginFence1018>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FRenderCommandFence::BeginFence(FRenderCommandFence::ESyncDepth)_::_28_::TSTR_BeginFence1018>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"BeginFence",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_BeginFence;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145e0c040

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_FRenderCommandFence::BeginFence(FRenderCommandFence::ESyncDepth)_::_2_::TSTR_BeginFence1026>
* __cdecl TRenderCommandTag<`FRenderCommandFence::BeginFence'::__l2::TSTR_BeginFence1026>::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FRenderCommandFence::BeginFence(FRenderCommandFence::ESyncDepth)_::_2_::TSTR_BeginFence1026>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FRenderCommandFence::BeginFence(FRenderCommandFence::ESyncDepth)_::_2_::TSTR_BeginFence1026>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FRenderCommandFence::BeginFence(FRenderCommandFence::ESyncDepth)_::_2_::TSTR_BeginFence1026>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FRenderCommandFence::BeginFence(FRenderCommandFence::ESyncDepth)_::_2_::TSTR_BeginFence1026>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"BeginFence");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"BeginFence",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FRenderCommandFence::BeginFence(FRenderCommandFence::ESyncDepth)_::_2_::TSTR_BeginFence1026>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FRenderCommandFence::BeginFence(FRenderCommandFence::ESyncDepth)_::_2_::TSTR_BeginFence1026>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"BeginFence");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FRenderCommandFence::BeginFence(FRenderCommandFence::ESyncDepth)_::_2_::TSTR_BeginFence1026>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FRenderCommandFence::BeginFence(FRenderCommandFence::ESyncDepth)_::_2_::TSTR_BeginFence1026>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"BeginFence",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_BeginFence;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145e0c1f0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_static_void___cdecl_FRenderResource::ChangeFeatureLevel(ERHIFeatureLevel::Type)_::_2_::TSTR_FRenderResourceChangeFeatureLevel147>
* __cdecl TRenderCommandTag<`FRenderResource::ChangeFeatureLevel'::__l2::TSTR_FRenderResourceChangeFeatureLevel147>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_static_void___cdecl_FRenderResource::ChangeFeatureLevel(ERHIFeatureLevel::Type)_::_2_::TSTR_FRenderResourceChangeFeatureLevel147>_const_&___cdecl_TRenderCommandTag<_public:_static_void___cdecl_FRenderResource::ChangeFeatureLevel(ERHIFeatureLevel::Type)_::_2_::TSTR_FRenderResourceChangeFeatureLevel147>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_static_void___cdecl_FRenderResource::ChangeFeatureLevel(ERHIFeatureLevel::Type)_::_2_::TSTR_FRenderResourceChangeFeatureLevel147>_const_&___cdecl_TRenderCommandTag<_public:_static_void___cdecl_FRenderResource::ChangeFeatureLevel(ERHIFeatureLevel::Type)_::_2_::TSTR_FRenderResourceChangeFeatureLevel147>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FRenderResourceChangeFeatureLevel");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FRenderResourceChangeFeatureLevel"
                   ,"STATGROUP_RenderThreadCommands","STATCAT_Advanced",L"Render Thread Commands",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar3 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      FVar2 = ::Stat;
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_static_void___cdecl_FRenderResource::ChangeFeatureLevel(ERHIFeatureLevel::Type)_::_2_::TSTR_FRenderResourceChangeFeatureLevel147>_const_&___cdecl_TRenderCommandTag<_public:_static_void___cdecl_FRenderResource::ChangeFeatureLevel(ERHIFeatureLevel::Type)_::_2_::TSTR_FRenderResourceChangeFeatureLevel147>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FRenderResourceChangeFeatureLevel");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_static_void___cdecl_FRenderResource::ChangeFeatureLevel(ERHIFeatureLevel::Type)_::_2_::TSTR_FRenderResourceChangeFeatureLevel147>_const_&___cdecl_TRenderCommandTag<_public:_static_void___cdecl_FRenderResource::ChangeFeatureLevel(ERHIFeatureLevel::Type)_::_2_::TSTR_FRenderResourceChangeFeatureLevel147>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FRenderResourceChangeFeatureLevel","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FRenderResource;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145e0c3a0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_FlushPendingDeleteRHIResources_GameThread(void)_::_2_::TSTR_FlushPendingDeleteRHIResources1318>
* __cdecl TRenderCommandTag<`FlushPendingDeleteRHIResources_GameThread'::__l2::TSTR_FlushPendingDeleteRHIResources1318>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_FlushPendingDeleteRHIResources_GameThread(void)_::_2_::TSTR_FlushPendingDeleteRHIResources1318>_const_&___cdecl_TRenderCommandTag<_void___cdecl_FlushPendingDeleteRHIResources_GameThread(void)_::_2_::TSTR_FlushPendingDeleteRHIResources1318>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_FlushPendingDeleteRHIResources_GameThread(void)_::_2_::TSTR_FlushPendingDeleteRHIResources1318>_const_&___cdecl_TRenderCommandTag<_void___cdecl_FlushPendingDeleteRHIResources_GameThread(void)_::_2_::TSTR_FlushPendingDeleteRHIResources1318>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FlushPendingDeleteRHIResources");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FlushPendingDeleteRHIResources",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_FlushPendingDeleteRHIResources_GameThread(void)_::_2_::TSTR_FlushPendingDeleteRHIResources1318>_const_&___cdecl_TRenderCommandTag<_void___cdecl_FlushPendingDeleteRHIResources_GameThread(void)_::_2_::TSTR_FlushPendingDeleteRHIResources1318>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FlushPendingDeleteRHIResources");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_FlushPendingDeleteRHIResources_GameThread(void)_::_2_::TSTR_FlushPendingDeleteRHIResources1318>_const_&___cdecl_TRenderCommandTag<_void___cdecl_FlushPendingDeleteRHIResources_GameThread(void)_::_2_::TSTR_FlushPendingDeleteRHIResources1318>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FlushPendingDeleteRHIResources","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FlushPendingDel;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145e0c550

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_FlushRenderingCommands(void)_::_2_::TSTR_FlushPendingDeleteRHIResourcesCmd1296>
* __cdecl TRenderCommandTag<`FlushRenderingCommands'::__l2::TSTR_FlushPendingDeleteRHIResourcesCmd1296>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_FlushRenderingCommands(void)_::_2_::TSTR_FlushPendingDeleteRHIResourcesCmd1296>_const_&___cdecl_TRenderCommandTag<_void___cdecl_FlushRenderingCommands(void)_::_2_::TSTR_FlushPendingDeleteRHIResourcesCmd1296>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_FlushRenderingCommands(void)_::_2_::TSTR_FlushPendingDeleteRHIResourcesCmd1296>_const_&___cdecl_TRenderCommandTag<_void___cdecl_FlushRenderingCommands(void)_::_2_::TSTR_FlushPendingDeleteRHIResourcesCmd1296>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FlushPendingDeleteRHIResourcesCmd");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FlushPendingDeleteRHIResourcesCmd"
                   ,"STATGROUP_RenderThreadCommands","STATCAT_Advanced",L"Render Thread Commands",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar3 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      FVar2 = ::Stat;
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_FlushRenderingCommands(void)_::_2_::TSTR_FlushPendingDeleteRHIResourcesCmd1296>_const_&___cdecl_TRenderCommandTag<_void___cdecl_FlushRenderingCommands(void)_::_2_::TSTR_FlushPendingDeleteRHIResourcesCmd1296>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FlushPendingDeleteRHIResourcesCmd");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_FlushRenderingCommands(void)_::_2_::TSTR_FlushPendingDeleteRHIResourcesCmd1296>_const_&___cdecl_TRenderCommandTag<_void___cdecl_FlushRenderingCommands(void)_::_2_::TSTR_FlushPendingDeleteRHIResourcesCmd1296>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FlushPendingDeleteRHIResourcesCmd","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FlushPendingDel;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145e0c700

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_FFrameEndSync::Sync(FFrameEndSync::EFlushMode)_::_2_::TSTR_FrameDebugInfo2502>
* __cdecl TRenderCommandTag<`FFrameEndSync::Sync'::__l2::TSTR_FrameDebugInfo2502>::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_FFrameEndSync::Sync(FFrameEndSync::EFlushMode)_::_2_::TSTR_FrameDebugInfo2502>_const_&___cdecl_TRenderCommandTag<_void___cdecl_FFrameEndSync::Sync(FFrameEndSync::EFlushMode)_::_2_::TSTR_FrameDebugInfo2502>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_FFrameEndSync::Sync(FFrameEndSync::EFlushMode)_::_2_::TSTR_FrameDebugInfo2502>_const_&___cdecl_TRenderCommandTag<_void___cdecl_FFrameEndSync::Sync(FFrameEndSync::EFlushMode)_::_2_::TSTR_FrameDebugInfo2502>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FrameDebugInfo");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FrameDebugInfo",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_FFrameEndSync::Sync(FFrameEndSync::EFlushMode)_::_2_::TSTR_FrameDebugInfo2502>_const_&___cdecl_TRenderCommandTag<_void___cdecl_FFrameEndSync::Sync(FFrameEndSync::EFlushMode)_::_2_::TSTR_FrameDebugInfo2502>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FrameDebugInfo");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_FFrameEndSync::Sync(FFrameEndSync::EFlushMode)_::_2_::TSTR_FrameDebugInfo2502>_const_&___cdecl_TRenderCommandTag<_void___cdecl_FFrameEndSync::Sync(FFrameEndSync::EFlushMode)_::_2_::TSTR_FrameDebugInfo2502>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FrameDebugInfo",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FrameDebugInfo;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145e0c8b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_unsigned_int___cdecl_FRenderingThreadTickHeartbeat::Run(void)_::_7_::TSTR_HeartbeatTickTickables475>
* __cdecl TRenderCommandTag<`FRenderingThreadTickHeartbeat::Run'::__l7::TSTR_HeartbeatTickTickables475>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:_virtual_unsigned_int___cdecl_FRenderingThreadTickHeartbeat::Run(void)___ptr64'::`7'::TSTR_HeartbeatTickTickables475>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_unsigned_int___cdecl_FRenderingThreadTickHeartbeat::Run(void)___ptr64'::`7'::TSTR_HeartbeatTickTickables475>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:_virtual_unsigned_int___cdecl_FRenderingThreadTickHeartbeat::Run(void)___ptr64'::`7'::TSTR_HeartbeatTickTickables475>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_unsigned_int___cdecl_FRenderingThreadTickHeartbeat::Run(void)___ptr64'::`7'::TSTR_HeartbeatTickTickables475>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`public:_virtual_unsigned_int___cdecl_FRenderingThreadTickHeartbeat::Run(void)___ptr64'::`7'::TSTR_HeartbeatTickTickables475>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_unsigned_int___cdecl_FRenderingThreadTickHeartbeat::Run(void)___ptr64'::`7'::TSTR_HeartbeatTickTickables475>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"HeartbeatTickTickables");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`public:_virtual_unsigned_int___cdecl_FRenderingThreadTickHeartbeat::Run(void)___ptr64'::`7'::TSTR_HeartbeatTickTickables475>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_unsigned_int___cdecl_FRenderingThreadTickHeartbeat::Run(void)___ptr64'::`7'::TSTR_HeartbeatTickTickables475>::Get(void)'
                ::__l2::Stat,*pFVar1,L"HeartbeatTickTickables","STATGROUP_RenderThreadCommands",
               "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:_virtual_unsigned_int___cdecl_FRenderingThreadTickHeartbeat::Run(void)___ptr64'::`7'::TSTR_HeartbeatTickTickables475>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_unsigned_int___cdecl_FRenderingThreadTickHeartbeat::Run(void)___ptr64'::`7'::TSTR_HeartbeatTickTickables475>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:_virtual_unsigned_int___cdecl_FRenderingThreadTickHeartbeat::Run(void)___ptr64'::`7'::TSTR_HeartbeatTickTickables475>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_unsigned_int___cdecl_FRenderingThreadTickHeartbeat::Run(void)___ptr64'::`7'::TSTR_HeartbeatTickTickables475>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:_virtual_unsigned_int___cdecl_FRenderingThreadTickHeartbeat::Run(void)___ptr64'::`7'::TSTR_HeartbeatTickTickables475>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_unsigned_int___cdecl_FRenderingThreadTickHeartbeat::Run(void)___ptr64'::`7'::TSTR_HeartbeatTickTickables475>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`public:_virtual_unsigned_int___cdecl_FRenderingThreadTickHeartbeat::Run(void)___ptr64'::`7'::TSTR_HeartbeatTickTickables475>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_unsigned_int___cdecl_FRenderingThreadTickHeartbeat::Run(void)___ptr64'::`7'::TSTR_HeartbeatTickTickables475>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"HeartbeatTickTickables");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`public:_virtual_unsigned_int___cdecl_FRenderingThreadTickHeartbeat::Run(void)___ptr64'::`7'::TSTR_HeartbeatTickTickables475>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_unsigned_int___cdecl_FRenderingThreadTickHeartbeat::Run(void)___ptr64'::`7'::TSTR_HeartbeatTickTickables475>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"HeartbeatTickTickables",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"HeartbeatTickTickables";
    _DAT_155190b08 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:_virtual_unsigned_int___cdecl_FRenderingThreadTickHeartbeat::Run(void)___ptr64'::`7'::TSTR_HeartbeatTickTickables475>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_unsigned_int___cdecl_FRenderingThreadTickHeartbeat::Run(void)___ptr64'::`7'::TSTR_HeartbeatTickTickables475>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_public:_virtual_unsigned_int___cdecl_FRenderingThreadTickHeartbeat::Run(void)_::_7_::TSTR_HeartbeatTickTickables475>
          *)&`public:_static_class_TRenderCommandTag<struct_`public:_virtual_unsigned_int___cdecl_FRenderingThreadTickHeartbeat::Run(void)___ptr64'::`7'::TSTR_HeartbeatTickTickables475>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_unsigned_int___cdecl_FRenderingThreadTickHeartbeat::Run(void)___ptr64'::`7'::TSTR_HeartbeatTickTickables475>::Get(void)'
             ::__l2::Tag;
}

// Get @ 145e0ca70

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_BeginInitResource(FRenderResource_*,FRenderCommandPipe_*)_::_2_::TSTR_InitCommand295>
* __cdecl TRenderCommandTag<`BeginInitResource'::__l2::TSTR_InitCommand295>::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_BeginInitResource(FRenderResource_*,FRenderCommandPipe_*)_::_2_::TSTR_InitCommand295>_const_&___cdecl_TRenderCommandTag<_void___cdecl_BeginInitResource(FRenderResource_*,FRenderCommandPipe_*)_::_2_::TSTR_InitCommand295>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_BeginInitResource(FRenderResource_*,FRenderCommandPipe_*)_::_2_::TSTR_InitCommand295>_const_&___cdecl_TRenderCommandTag<_void___cdecl_BeginInitResource(FRenderResource_*,FRenderCommandPipe_*)_::_2_::TSTR_InitCommand295>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"InitCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"InitCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_BeginInitResource(FRenderResource_*,FRenderCommandPipe_*)_::_2_::TSTR_InitCommand295>_const_&___cdecl_TRenderCommandTag<_void___cdecl_BeginInitResource(FRenderResource_*,FRenderCommandPipe_*)_::_2_::TSTR_InitCommand295>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"InitCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_BeginInitResource(FRenderResource_*,FRenderCommandPipe_*)_::_2_::TSTR_InitCommand295>_const_&___cdecl_TRenderCommandTag<_void___cdecl_BeginInitResource(FRenderResource_*,FRenderCommandPipe_*)_::_2_::TSTR_InitCommand295>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"InitCommand",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_InitCommand;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145e0cc20

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_FlushRenderCommandFenceBundler(void)_::_5_::TSTR_InsertFence907> *
__cdecl TRenderCommandTag<`FlushRenderCommandFenceBundler'::__l5::TSTR_InsertFence907>::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_FlushRenderCommandFenceBundler(void)_::_5_::TSTR_InsertFence907>_const_&___cdecl_TRenderCommandTag<_void___cdecl_FlushRenderCommandFenceBundler(void)_::_5_::TSTR_InsertFence907>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_FlushRenderCommandFenceBundler(void)_::_5_::TSTR_InsertFence907>_const_&___cdecl_TRenderCommandTag<_void___cdecl_FlushRenderCommandFenceBundler(void)_::_5_::TSTR_InsertFence907>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"InsertFence");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"InsertFence",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_FlushRenderCommandFenceBundler(void)_::_5_::TSTR_InsertFence907>_const_&___cdecl_TRenderCommandTag<_void___cdecl_FlushRenderCommandFenceBundler(void)_::_5_::TSTR_InsertFence907>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"InsertFence");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_FlushRenderCommandFenceBundler(void)_::_5_::TSTR_InsertFence907>_const_&___cdecl_TRenderCommandTag<_void___cdecl_FlushRenderCommandFenceBundler(void)_::_5_::TSTR_InsertFence907>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"InsertFence",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_InsertFence;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145e0cdd0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_StopRenderCommandFenceBundler(void)_::_2_::TSTR_InsertFence943> *
__cdecl TRenderCommandTag<`StopRenderCommandFenceBundler'::__l2::TSTR_InsertFence943>::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_StopRenderCommandFenceBundler(void)_::_2_::TSTR_InsertFence943>_const_&___cdecl_TRenderCommandTag<_void___cdecl_StopRenderCommandFenceBundler(void)_::_2_::TSTR_InsertFence943>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_StopRenderCommandFenceBundler(void)_::_2_::TSTR_InsertFence943>_const_&___cdecl_TRenderCommandTag<_void___cdecl_StopRenderCommandFenceBundler(void)_::_2_::TSTR_InsertFence943>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"InsertFence");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"InsertFence",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_StopRenderCommandFenceBundler(void)_::_2_::TSTR_InsertFence943>_const_&___cdecl_TRenderCommandTag<_void___cdecl_StopRenderCommandFenceBundler(void)_::_2_::TSTR_InsertFence943>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"InsertFence");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_StopRenderCommandFenceBundler(void)_::_2_::TSTR_InsertFence943>_const_&___cdecl_TRenderCommandTag<_void___cdecl_StopRenderCommandFenceBundler(void)_::_2_::TSTR_InsertFence943>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"InsertFence",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_InsertFence;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145e0cf80

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_StartRenderingThread(void)_::_2_::TSTR_LatchBypass631> * __cdecl
TRenderCommandTag<`StartRenderingThread'::__l2::TSTR_LatchBypass631>::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_StartRenderingThread(void)_::_2_::TSTR_LatchBypass631>_const_&___cdecl_TRenderCommandTag<_void___cdecl_StartRenderingThread(void)_::_2_::TSTR_LatchBypass631>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_StartRenderingThread(void)_::_2_::TSTR_LatchBypass631>_const_&___cdecl_TRenderCommandTag<_void___cdecl_StartRenderingThread(void)_::_2_::TSTR_LatchBypass631>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"LatchBypass");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"LatchBypass",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_StartRenderingThread(void)_::_2_::TSTR_LatchBypass631>_const_&___cdecl_TRenderCommandTag<_void___cdecl_StartRenderingThread(void)_::_2_::TSTR_LatchBypass631>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"LatchBypass");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_StartRenderingThread(void)_::_2_::TSTR_LatchBypass631>_const_&___cdecl_TRenderCommandTag<_void___cdecl_StartRenderingThread(void)_::_2_::TSTR_LatchBypass631>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"LatchBypass",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_LatchBypass;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145e0d130

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_LatchRenderThreadConfiguration(void)_::_2_::TSTR_LatchBypass789> *
__cdecl TRenderCommandTag<`LatchRenderThreadConfiguration'::__l2::TSTR_LatchBypass789>::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_LatchRenderThreadConfiguration(void)_::_2_::TSTR_LatchBypass789>_const_&___cdecl_TRenderCommandTag<_void___cdecl_LatchRenderThreadConfiguration(void)_::_2_::TSTR_LatchBypass789>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_LatchRenderThreadConfiguration(void)_::_2_::TSTR_LatchBypass789>_const_&___cdecl_TRenderCommandTag<_void___cdecl_LatchRenderThreadConfiguration(void)_::_2_::TSTR_LatchBypass789>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"LatchBypass");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"LatchBypass",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_LatchRenderThreadConfiguration(void)_::_2_::TSTR_LatchBypass789>_const_&___cdecl_TRenderCommandTag<_void___cdecl_LatchRenderThreadConfiguration(void)_::_2_::TSTR_LatchBypass789>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"LatchBypass");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_LatchRenderThreadConfiguration(void)_::_2_::TSTR_LatchBypass789>_const_&___cdecl_TRenderCommandTag<_void___cdecl_LatchRenderThreadConfiguration(void)_::_2_::TSTR_LatchBypass789>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"LatchBypass",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_LatchBypass;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145e0d2e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(int_&,int)_::_2_::TSTR_OnCVarChange1501>
* __cdecl TRenderCommandTag<`FConsoleRenderThreadPropagation::OnCVarChange'::__l2::TSTR_OnCVarChange1501>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(int&___ptr64,int)___ptr64'::`2'::TSTR_OnCVarChange1501>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(int&___ptr64,int)___ptr64'::`2'::TSTR_OnCVarChange1501>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(int&___ptr64,int)___ptr64'::`2'::TSTR_OnCVarChange1501>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(int&___ptr64,int)___ptr64'::`2'::TSTR_OnCVarChange1501>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(int&___ptr64,int)___ptr64'::`2'::TSTR_OnCVarChange1501>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(int&___ptr64,int)___ptr64'::`2'::TSTR_OnCVarChange1501>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"OnCVarChange1");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(int&___ptr64,int)___ptr64'::`2'::TSTR_OnCVarChange1501>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(int&___ptr64,int)___ptr64'::`2'::TSTR_OnCVarChange1501>::Get(void)'
                ::__l2::Stat,*pFVar1,L"OnCVarChange1","STATGROUP_RenderThreadCommands",
               "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(int&___ptr64,int)___ptr64'::`2'::TSTR_OnCVarChange1501>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(int&___ptr64,int)___ptr64'::`2'::TSTR_OnCVarChange1501>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(int&___ptr64,int)___ptr64'::`2'::TSTR_OnCVarChange1501>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(int&___ptr64,int)___ptr64'::`2'::TSTR_OnCVarChange1501>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(int&___ptr64,int)___ptr64'::`2'::TSTR_OnCVarChange1501>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(int&___ptr64,int)___ptr64'::`2'::TSTR_OnCVarChange1501>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(int&___ptr64,int)___ptr64'::`2'::TSTR_OnCVarChange1501>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(int&___ptr64,int)___ptr64'::`2'::TSTR_OnCVarChange1501>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"OnCVarChange1");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(int&___ptr64,int)___ptr64'::`2'::TSTR_OnCVarChange1501>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(int&___ptr64,int)___ptr64'::`2'::TSTR_OnCVarChange1501>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"OnCVarChange1","STATGROUP_RenderThreadCommands",
                          "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false
                          ,MCR_Invalid);
    }
    _Tag = L"OnCVarChange1";
    _DAT_155190ad8 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(int&___ptr64,int)___ptr64'::`2'::TSTR_OnCVarChange1501>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(int&___ptr64,int)___ptr64'::`2'::TSTR_OnCVarChange1501>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(int_&,int)_::_2_::TSTR_OnCVarChange1501>
          *)&`public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(int&___ptr64,int)___ptr64'::`2'::TSTR_OnCVarChange1501>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(int&___ptr64,int)___ptr64'::`2'::TSTR_OnCVarChange1501>::Get(void)'
             ::__l2::Tag;
}

// Get @ 145e0d4a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(float_&,float)_::_2_::TSTR_OnCVarChange2511>
* __cdecl TRenderCommandTag<`FConsoleRenderThreadPropagation::OnCVarChange'::__l2::TSTR_OnCVarChange2511>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(float&___ptr64,float)___ptr64'::`2'::TSTR_OnCVarChange2511>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(float&___ptr64,float)___ptr64'::`2'::TSTR_OnCVarChange2511>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(float&___ptr64,float)___ptr64'::`2'::TSTR_OnCVarChange2511>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(float&___ptr64,float)___ptr64'::`2'::TSTR_OnCVarChange2511>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(float&___ptr64,float)___ptr64'::`2'::TSTR_OnCVarChange2511>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(float&___ptr64,float)___ptr64'::`2'::TSTR_OnCVarChange2511>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"OnCVarChange2");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(float&___ptr64,float)___ptr64'::`2'::TSTR_OnCVarChange2511>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(float&___ptr64,float)___ptr64'::`2'::TSTR_OnCVarChange2511>::Get(void)'
                ::__l2::Stat,*pFVar1,L"OnCVarChange2","STATGROUP_RenderThreadCommands",
               "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(float&___ptr64,float)___ptr64'::`2'::TSTR_OnCVarChange2511>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(float&___ptr64,float)___ptr64'::`2'::TSTR_OnCVarChange2511>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(float&___ptr64,float)___ptr64'::`2'::TSTR_OnCVarChange2511>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(float&___ptr64,float)___ptr64'::`2'::TSTR_OnCVarChange2511>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(float&___ptr64,float)___ptr64'::`2'::TSTR_OnCVarChange2511>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(float&___ptr64,float)___ptr64'::`2'::TSTR_OnCVarChange2511>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(float&___ptr64,float)___ptr64'::`2'::TSTR_OnCVarChange2511>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(float&___ptr64,float)___ptr64'::`2'::TSTR_OnCVarChange2511>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"OnCVarChange2");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(float&___ptr64,float)___ptr64'::`2'::TSTR_OnCVarChange2511>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(float&___ptr64,float)___ptr64'::`2'::TSTR_OnCVarChange2511>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"OnCVarChange2","STATGROUP_RenderThreadCommands",
                          "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false
                          ,MCR_Invalid);
    }
    _Tag = L"OnCVarChange2";
    _DAT_155190aa8 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(float&___ptr64,float)___ptr64'::`2'::TSTR_OnCVarChange2511>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(float&___ptr64,float)___ptr64'::`2'::TSTR_OnCVarChange2511>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(float_&,float)_::_2_::TSTR_OnCVarChange2511>
          *)&`public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(float&___ptr64,float)___ptr64'::`2'::TSTR_OnCVarChange2511>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(float&___ptr64,float)___ptr64'::`2'::TSTR_OnCVarChange2511>::Get(void)'
             ::__l2::Tag;
}

// Get @ 145e0d660

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(bool_&,bool)_::_2_::TSTR_OnCVarChange2521>
* __cdecl TRenderCommandTag<`FConsoleRenderThreadPropagation::OnCVarChange'::__l2::TSTR_OnCVarChange2521>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(bool&___ptr64,bool)___ptr64'::`2'::TSTR_OnCVarChange2521>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(bool&___ptr64,bool)___ptr64'::`2'::TSTR_OnCVarChange2521>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(bool&___ptr64,bool)___ptr64'::`2'::TSTR_OnCVarChange2521>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(bool&___ptr64,bool)___ptr64'::`2'::TSTR_OnCVarChange2521>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(bool&___ptr64,bool)___ptr64'::`2'::TSTR_OnCVarChange2521>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(bool&___ptr64,bool)___ptr64'::`2'::TSTR_OnCVarChange2521>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"OnCVarChange2");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(bool&___ptr64,bool)___ptr64'::`2'::TSTR_OnCVarChange2521>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(bool&___ptr64,bool)___ptr64'::`2'::TSTR_OnCVarChange2521>::Get(void)'
                ::__l2::Stat,*pFVar1,L"OnCVarChange2","STATGROUP_RenderThreadCommands",
               "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(bool&___ptr64,bool)___ptr64'::`2'::TSTR_OnCVarChange2521>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(bool&___ptr64,bool)___ptr64'::`2'::TSTR_OnCVarChange2521>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(bool&___ptr64,bool)___ptr64'::`2'::TSTR_OnCVarChange2521>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(bool&___ptr64,bool)___ptr64'::`2'::TSTR_OnCVarChange2521>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(bool&___ptr64,bool)___ptr64'::`2'::TSTR_OnCVarChange2521>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(bool&___ptr64,bool)___ptr64'::`2'::TSTR_OnCVarChange2521>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(bool&___ptr64,bool)___ptr64'::`2'::TSTR_OnCVarChange2521>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(bool&___ptr64,bool)___ptr64'::`2'::TSTR_OnCVarChange2521>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"OnCVarChange2");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(bool&___ptr64,bool)___ptr64'::`2'::TSTR_OnCVarChange2521>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(bool&___ptr64,bool)___ptr64'::`2'::TSTR_OnCVarChange2521>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"OnCVarChange2","STATGROUP_RenderThreadCommands",
                          "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false
                          ,MCR_Invalid);
    }
    _Tag = L"OnCVarChange2";
    _DAT_155190a78 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(bool&___ptr64,bool)___ptr64'::`2'::TSTR_OnCVarChange2521>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(bool&___ptr64,bool)___ptr64'::`2'::TSTR_OnCVarChange2521>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(bool_&,bool)_::_2_::TSTR_OnCVarChange2521>
          *)&`public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(bool&___ptr64,bool)___ptr64'::`2'::TSTR_OnCVarChange2521>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(bool&___ptr64,bool)___ptr64'::`2'::TSTR_OnCVarChange2521>::Get(void)'
             ::__l2::Tag;
}

// Get @ 145e0d820

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(FString_&,FString_const_&)_::_2_::TSTR_OnCVarChange3531>
* __cdecl TRenderCommandTag<`FConsoleRenderThreadPropagation::OnCVarChange'::__l2::TSTR_OnCVarChange3531>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(class_FString&___ptr64,class_FString_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3531>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(FString&___ptr64,FString_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3531>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(class_FString&___ptr64,class_FString_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3531>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(FString&___ptr64,FString_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3531>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(class_FString&___ptr64,class_FString_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3531>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(FString&___ptr64,FString_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3531>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"OnCVarChange3");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(class_FString&___ptr64,class_FString_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3531>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(FString&___ptr64,FString_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3531>::Get(void)'
                ::__l2::Stat,*pFVar1,L"OnCVarChange3","STATGROUP_RenderThreadCommands",
               "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(class_FString&___ptr64,class_FString_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3531>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(FString&___ptr64,FString_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3531>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(class_FString&___ptr64,class_FString_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3531>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(FString&___ptr64,FString_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3531>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(class_FString&___ptr64,class_FString_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3531>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(FString&___ptr64,FString_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3531>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(class_FString&___ptr64,class_FString_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3531>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(FString&___ptr64,FString_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3531>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"OnCVarChange3");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(class_FString&___ptr64,class_FString_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3531>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(FString&___ptr64,FString_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3531>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"OnCVarChange3","STATGROUP_RenderThreadCommands",
                          "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false
                          ,MCR_Invalid);
    }
    _Tag = L"OnCVarChange3";
    _DAT_155190a48 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(class_FString&___ptr64,class_FString_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3531>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(FString&___ptr64,FString_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3531>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(FString_&,FString_const_&)_::_2_::TSTR_OnCVarChange3531>
          *)&`public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(class_FString&___ptr64,class_FString_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3531>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(FString&___ptr64,FString_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3531>::Get(void)'
             ::__l2::Tag;
}

// Get @ 145e0d9e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(FName_&,FName_const_&)_::_2_::TSTR_OnCVarChange3541>
* __cdecl TRenderCommandTag<`FConsoleRenderThreadPropagation::OnCVarChange'::__l2::TSTR_OnCVarChange3541>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(class_FName&___ptr64,class_FName_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3541>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(FName&___ptr64,FName_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3541>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(class_FName&___ptr64,class_FName_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3541>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(FName&___ptr64,FName_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3541>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(class_FName&___ptr64,class_FName_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3541>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(FName&___ptr64,FName_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3541>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"OnCVarChange3");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(class_FName&___ptr64,class_FName_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3541>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(FName&___ptr64,FName_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3541>::Get(void)'
                ::__l2::Stat,*pFVar1,L"OnCVarChange3","STATGROUP_RenderThreadCommands",
               "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(class_FName&___ptr64,class_FName_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3541>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(FName&___ptr64,FName_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3541>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(class_FName&___ptr64,class_FName_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3541>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(FName&___ptr64,FName_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3541>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(class_FName&___ptr64,class_FName_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3541>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(FName&___ptr64,FName_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3541>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(class_FName&___ptr64,class_FName_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3541>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(FName&___ptr64,FName_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3541>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"OnCVarChange3");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(class_FName&___ptr64,class_FName_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3541>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(FName&___ptr64,FName_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3541>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"OnCVarChange3","STATGROUP_RenderThreadCommands",
                          "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false
                          ,MCR_Invalid);
    }
    _Tag = L"OnCVarChange3";
    _DAT_155190a18 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(class_FName&___ptr64,class_FName_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3541>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(FName&___ptr64,FName_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3541>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(FName_&,FName_const_&)_::_2_::TSTR_OnCVarChange3541>
          *)&`public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(class_FName&___ptr64,class_FName_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3541>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FConsoleRenderThreadPropagation::OnCVarChange(FName&___ptr64,FName_const&___ptr64)___ptr64'::`2'::TSTR_OnCVarChange3541>::Get(void)'
             ::__l2::Tag;
}

// Get @ 145e0dba0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_BeginReleaseResource(FRenderResource_*,FRenderCommandPipe_*)_::_2_::TSTR_ReleaseCommand376>
* __cdecl TRenderCommandTag<`BeginReleaseResource'::__l2::TSTR_ReleaseCommand376>::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_BeginReleaseResource(FRenderResource_*,FRenderCommandPipe_*)_::_2_::TSTR_ReleaseCommand376>_const_&___cdecl_TRenderCommandTag<_void___cdecl_BeginReleaseResource(FRenderResource_*,FRenderCommandPipe_*)_::_2_::TSTR_ReleaseCommand376>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_BeginReleaseResource(FRenderResource_*,FRenderCommandPipe_*)_::_2_::TSTR_ReleaseCommand376>_const_&___cdecl_TRenderCommandTag<_void___cdecl_BeginReleaseResource(FRenderResource_*,FRenderCommandPipe_*)_::_2_::TSTR_ReleaseCommand376>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ReleaseCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ReleaseCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_BeginReleaseResource(FRenderResource_*,FRenderCommandPipe_*)_::_2_::TSTR_ReleaseCommand376>_const_&___cdecl_TRenderCommandTag<_void___cdecl_BeginReleaseResource(FRenderResource_*,FRenderCommandPipe_*)_::_2_::TSTR_ReleaseCommand376>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ReleaseCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_BeginReleaseResource(FRenderResource_*,FRenderCommandPipe_*)_::_2_::TSTR_ReleaseCommand376>_const_&___cdecl_TRenderCommandTag<_void___cdecl_BeginReleaseResource(FRenderResource_*,FRenderCommandPipe_*)_::_2_::TSTR_ReleaseCommand376>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ReleaseCommand",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_ReleaseCommand;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145e0dd50

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_ReleaseResourceAndFlush(FRenderResource_*)_::_2_::TSTR_ReleaseCommand386>
* __cdecl TRenderCommandTag<`ReleaseResourceAndFlush'::__l2::TSTR_ReleaseCommand386>::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_ReleaseResourceAndFlush(FRenderResource_*)_::_2_::TSTR_ReleaseCommand386>_const_&___cdecl_TRenderCommandTag<_void___cdecl_ReleaseResourceAndFlush(FRenderResource_*)_::_2_::TSTR_ReleaseCommand386>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_ReleaseResourceAndFlush(FRenderResource_*)_::_2_::TSTR_ReleaseCommand386>_const_&___cdecl_TRenderCommandTag<_void___cdecl_ReleaseResourceAndFlush(FRenderResource_*)_::_2_::TSTR_ReleaseCommand386>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ReleaseCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ReleaseCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_ReleaseResourceAndFlush(FRenderResource_*)_::_2_::TSTR_ReleaseCommand386>_const_&___cdecl_TRenderCommandTag<_void___cdecl_ReleaseResourceAndFlush(FRenderResource_*)_::_2_::TSTR_ReleaseCommand386>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ReleaseCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_ReleaseResourceAndFlush(FRenderResource_*)_::_2_::TSTR_ReleaseCommand386>_const_&___cdecl_TRenderCommandTag<_void___cdecl_ReleaseResourceAndFlush(FRenderResource_*)_::_2_::TSTR_ReleaseCommand386>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ReleaseCommand",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_ReleaseCommand;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145e0df00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_FRenderCommandPipeRegistry::StartRecording(TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_const_&)_::_2_::TSTR_RenderCommandPipe_Start2055>
* __cdecl TRenderCommandTag<`FRenderCommandPipeRegistry::StartRecording'::__l2::TSTR_RenderCommandPipe_Start2055>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FRenderCommandPipeRegistry::StartRecording(class_TBitArray<class_TSizedInlineAllocator<1,32,class_TLinearArrayAllocatorBase<struct_FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Start2055>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FRenderCommandPipeRegistry::StartRecording(TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Start2055>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FRenderCommandPipeRegistry::StartRecording(class_TBitArray<class_TSizedInlineAllocator<1,32,class_TLinearArrayAllocatorBase<struct_FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Start2055>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FRenderCommandPipeRegistry::StartRecording(TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Start2055>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FRenderCommandPipeRegistry::StartRecording(class_TBitArray<class_TSizedInlineAllocator<1,32,class_TLinearArrayAllocatorBase<struct_FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Start2055>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FRenderCommandPipeRegistry::StartRecording(TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Start2055>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"RenderCommandPipe_Start");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FRenderCommandPipeRegistry::StartRecording(class_TBitArray<class_TSizedInlineAllocator<1,32,class_TLinearArrayAllocatorBase<struct_FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Start2055>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FRenderCommandPipeRegistry::StartRecording(TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Start2055>::Get(void)'
                ::__l2::Stat,*pFVar1,L"RenderCommandPipe_Start","STATGROUP_RenderThreadCommands",
               "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FRenderCommandPipeRegistry::StartRecording(class_TBitArray<class_TSizedInlineAllocator<1,32,class_TLinearArrayAllocatorBase<struct_FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Start2055>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FRenderCommandPipeRegistry::StartRecording(TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Start2055>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FRenderCommandPipeRegistry::StartRecording(class_TBitArray<class_TSizedInlineAllocator<1,32,class_TLinearArrayAllocatorBase<struct_FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Start2055>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FRenderCommandPipeRegistry::StartRecording(TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Start2055>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FRenderCommandPipeRegistry::StartRecording(class_TBitArray<class_TSizedInlineAllocator<1,32,class_TLinearArrayAllocatorBase<struct_FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Start2055>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FRenderCommandPipeRegistry::StartRecording(TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Start2055>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FRenderCommandPipeRegistry::StartRecording(class_TBitArray<class_TSizedInlineAllocator<1,32,class_TLinearArrayAllocatorBase<struct_FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Start2055>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FRenderCommandPipeRegistry::StartRecording(TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Start2055>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"RenderCommandPipe_Start");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FRenderCommandPipeRegistry::StartRecording(class_TBitArray<class_TSizedInlineAllocator<1,32,class_TLinearArrayAllocatorBase<struct_FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Start2055>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FRenderCommandPipeRegistry::StartRecording(TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Start2055>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"RenderCommandPipe_Start",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"RenderCommandPipe_Start";
    _DAT_155190868 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FRenderCommandPipeRegistry::StartRecording(class_TBitArray<class_TSizedInlineAllocator<1,32,class_TLinearArrayAllocatorBase<struct_FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Start2055>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FRenderCommandPipeRegistry::StartRecording(TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Start2055>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_public:_void___cdecl_FRenderCommandPipeRegistry::StartRecording(TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_const_&)_::_2_::TSTR_RenderCommandPipe_Start2055>
          *)&`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FRenderCommandPipeRegistry::StartRecording(class_TBitArray<class_TSizedInlineAllocator<1,32,class_TLinearArrayAllocatorBase<struct_FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Start2055>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FRenderCommandPipeRegistry::StartRecording(TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Start2055>::Get(void)'
             ::__l2::Tag;
}

// Get @ 145e0e0c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_FRenderCommandPipeRegistry::StopRecording(TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_const_&)_::_2_::TSTR_RenderCommandPipe_Stop2170>
* __cdecl TRenderCommandTag<`FRenderCommandPipeRegistry::StopRecording'::__l2::TSTR_RenderCommandPipe_Stop2170>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FRenderCommandPipeRegistry::StopRecording(class_TBitArray<class_TSizedInlineAllocator<1,32,class_TLinearArrayAllocatorBase<struct_FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Stop2170>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FRenderCommandPipeRegistry::StopRecording(TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Stop2170>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FRenderCommandPipeRegistry::StopRecording(class_TBitArray<class_TSizedInlineAllocator<1,32,class_TLinearArrayAllocatorBase<struct_FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Stop2170>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FRenderCommandPipeRegistry::StopRecording(TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Stop2170>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FRenderCommandPipeRegistry::StopRecording(class_TBitArray<class_TSizedInlineAllocator<1,32,class_TLinearArrayAllocatorBase<struct_FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Stop2170>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FRenderCommandPipeRegistry::StopRecording(TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Stop2170>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"RenderCommandPipe_Stop");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FRenderCommandPipeRegistry::StopRecording(class_TBitArray<class_TSizedInlineAllocator<1,32,class_TLinearArrayAllocatorBase<struct_FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Stop2170>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FRenderCommandPipeRegistry::StopRecording(TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Stop2170>::Get(void)'
                ::__l2::Stat,*pFVar1,L"RenderCommandPipe_Stop","STATGROUP_RenderThreadCommands",
               "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FRenderCommandPipeRegistry::StopRecording(class_TBitArray<class_TSizedInlineAllocator<1,32,class_TLinearArrayAllocatorBase<struct_FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Stop2170>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FRenderCommandPipeRegistry::StopRecording(TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Stop2170>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FRenderCommandPipeRegistry::StopRecording(class_TBitArray<class_TSizedInlineAllocator<1,32,class_TLinearArrayAllocatorBase<struct_FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Stop2170>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FRenderCommandPipeRegistry::StopRecording(TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Stop2170>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FRenderCommandPipeRegistry::StopRecording(class_TBitArray<class_TSizedInlineAllocator<1,32,class_TLinearArrayAllocatorBase<struct_FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Stop2170>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FRenderCommandPipeRegistry::StopRecording(TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Stop2170>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FRenderCommandPipeRegistry::StopRecording(class_TBitArray<class_TSizedInlineAllocator<1,32,class_TLinearArrayAllocatorBase<struct_FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Stop2170>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FRenderCommandPipeRegistry::StopRecording(TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Stop2170>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"RenderCommandPipe_Stop");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FRenderCommandPipeRegistry::StopRecording(class_TBitArray<class_TSizedInlineAllocator<1,32,class_TLinearArrayAllocatorBase<struct_FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Stop2170>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FRenderCommandPipeRegistry::StopRecording(TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Stop2170>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"RenderCommandPipe_Stop",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"RenderCommandPipe_Stop";
    _DAT_155190838 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FRenderCommandPipeRegistry::StopRecording(class_TBitArray<class_TSizedInlineAllocator<1,32,class_TLinearArrayAllocatorBase<struct_FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Stop2170>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FRenderCommandPipeRegistry::StopRecording(TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Stop2170>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_private:_void___cdecl_FRenderCommandPipeRegistry::StopRecording(TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_const_&)_::_2_::TSTR_RenderCommandPipe_Stop2170>
          *)&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FRenderCommandPipeRegistry::StopRecording(class_TBitArray<class_TSizedInlineAllocator<1,32,class_TLinearArrayAllocatorBase<struct_FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Stop2170>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FRenderCommandPipeRegistry::StopRecording(TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'::`2'::TSTR_RenderCommandPipe_Stop2170>::Get(void)'
             ::__l2::Tag;
}

// Get @ 145e0e280

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_AdvanceRenderingThreadStatsGT(bool,__int64,int)_::_2_::TSTR_RenderingThreadTickCommand310>
* __cdecl TRenderCommandTag<`AdvanceRenderingThreadStatsGT'::__l2::TSTR_RenderingThreadTickCommand310>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_AdvanceRenderingThreadStatsGT(bool,__int64,int)_::_2_::TSTR_RenderingThreadTickCommand310>_const_&___cdecl_TRenderCommandTag<_void___cdecl_AdvanceRenderingThreadStatsGT(bool,__int64,int)_::_2_::TSTR_RenderingThreadTickCommand310>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_AdvanceRenderingThreadStatsGT(bool,__int64,int)_::_2_::TSTR_RenderingThreadTickCommand310>_const_&___cdecl_TRenderCommandTag<_void___cdecl_AdvanceRenderingThreadStatsGT(bool,__int64,int)_::_2_::TSTR_RenderingThreadTickCommand310>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"RenderingThreadTickCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"RenderingThreadTickCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_AdvanceRenderingThreadStatsGT(bool,__int64,int)_::_2_::TSTR_RenderingThreadTickCommand310>_const_&___cdecl_TRenderCommandTag<_void___cdecl_AdvanceRenderingThreadStatsGT(bool,__int64,int)_::_2_::TSTR_RenderingThreadTickCommand310>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"RenderingThreadTickCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_AdvanceRenderingThreadStatsGT(bool,__int64,int)_::_2_::TSTR_RenderingThreadTickCommand310>_const_&___cdecl_TRenderCommandTag<_void___cdecl_AdvanceRenderingThreadStatsGT(bool,__int64,int)_::_2_::TSTR_RenderingThreadTickCommand310>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"RenderingThreadTickCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_RenderingThread;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145e0e430

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_BeginUpdateResourceRHI(FRenderResource_*,FRenderCommandPipe_*)_::_2_::TSTR_UpdateCommand304>
* __cdecl TRenderCommandTag<`BeginUpdateResourceRHI'::__l2::TSTR_UpdateCommand304>::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_BeginUpdateResourceRHI(FRenderResource_*,FRenderCommandPipe_*)_::_2_::TSTR_UpdateCommand304>_const_&___cdecl_TRenderCommandTag<_void___cdecl_BeginUpdateResourceRHI(FRenderResource_*,FRenderCommandPipe_*)_::_2_::TSTR_UpdateCommand304>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_BeginUpdateResourceRHI(FRenderResource_*,FRenderCommandPipe_*)_::_2_::TSTR_UpdateCommand304>_const_&___cdecl_TRenderCommandTag<_void___cdecl_BeginUpdateResourceRHI(FRenderResource_*,FRenderCommandPipe_*)_::_2_::TSTR_UpdateCommand304>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UpdateCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"UpdateCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_BeginUpdateResourceRHI(FRenderResource_*,FRenderCommandPipe_*)_::_2_::TSTR_UpdateCommand304>_const_&___cdecl_TRenderCommandTag<_void___cdecl_BeginUpdateResourceRHI(FRenderResource_*,FRenderCommandPipe_*)_::_2_::TSTR_UpdateCommand304>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UpdateCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_BeginUpdateResourceRHI(FRenderResource_*,FRenderCommandPipe_*)_::_2_::TSTR_UpdateCommand304>_const_&___cdecl_TRenderCommandTag<_void___cdecl_BeginUpdateResourceRHI(FRenderResource_*,FRenderCommandPipe_*)_::_2_::TSTR_UpdateCommand304>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"UpdateCommand",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_UpdateCommand;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145e0e5e0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_OnRenderThreadPollPeriodMsChanged(IConsoleVariable_*)_::_2_::TSTR_WakeupCommand85>
* __cdecl TRenderCommandTag<`OnRenderThreadPollPeriodMsChanged'::__l2::TSTR_WakeupCommand85>::Get
                    (void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_OnRenderThreadPollPeriodMsChanged(IConsoleVariable_*)_::_2_::TSTR_WakeupCommand85>_const_&___cdecl_TRenderCommandTag<_void___cdecl_OnRenderThreadPollPeriodMsChanged(IConsoleVariable_*)_::_2_::TSTR_WakeupCommand85>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::Stat = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_OnRenderThreadPollPeriodMsChanged(IConsoleVariable_*)_::_2_::TSTR_WakeupCommand85>_const_&___cdecl_TRenderCommandTag<_void___cdecl_OnRenderThreadPollPeriodMsChanged(IConsoleVariable_*)_::_2_::TSTR_WakeupCommand85>::Get(void)_::_2_::FStatData>
              )0x0;
    pFVar1 = ::FName::FName(&local_res8,"WakeupCommand");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"WakeupCommand",
               "STATGROUP_RenderThreadCommands","STATCAT_Advanced",L"Render Thread Commands",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar3 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    FVar2 = ::Stat;
    if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_OnRenderThreadPollPeriodMsChanged(IConsoleVariable_*)_::_2_::TSTR_WakeupCommand85>_const_&___cdecl_TRenderCommandTag<_void___cdecl_OnRenderThreadPollPeriodMsChanged(IConsoleVariable_*)_::_2_::TSTR_WakeupCommand85>::Get(void)_::_2_::FStatData>
                   )0x0) {
      pFVar1 = ::FName::FName(&local_res8,"WakeupCommand");
      FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_OnRenderThreadPollPeriodMsChanged(IConsoleVariable_*)_::_2_::TSTR_WakeupCommand85>_const_&___cdecl_TRenderCommandTag<_void___cdecl_OnRenderThreadPollPeriodMsChanged(IConsoleVariable_*)_::_2_::TSTR_WakeupCommand85>::Get(void)_::_2_::FStatData>
               )FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"WakeupCommand",
                           "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                           L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    ::Tag._0_8_ = u_WakeupCommand;
    ::Tag._8_8_ = FVar2;
    _Init_thread_footer(&::_TSS1);
  }
  return &::Tag;
}

// Get @ 145e9c7d0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_FShaderMapResource::BeginCreateAllShaders(void)_::_2_::TSTR_InitCommand616>
* __cdecl TRenderCommandTag<`FShaderMapResource::BeginCreateAllShaders'::__l2::TSTR_InitCommand616>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FShaderMapResource::BeginCreateAllShaders(void)_::_2_::TSTR_InitCommand616>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FShaderMapResource::BeginCreateAllShaders(void)_::_2_::TSTR_InitCommand616>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FShaderMapResource::BeginCreateAllShaders(void)_::_2_::TSTR_InitCommand616>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FShaderMapResource::BeginCreateAllShaders(void)_::_2_::TSTR_InitCommand616>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"InitCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"InitCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FShaderMapResource::BeginCreateAllShaders(void)_::_2_::TSTR_InitCommand616>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FShaderMapResource::BeginCreateAllShaders(void)_::_2_::TSTR_InitCommand616>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"InitCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FShaderMapResource::BeginCreateAllShaders(void)_::_2_::TSTR_InitCommand616>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FShaderMapResource::BeginCreateAllShaders(void)_::_2_::TSTR_InitCommand616>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"InitCommand",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_InitCommand;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145e9c980

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:___cdecl_FGlobalBoundShaderStateResource::FGlobalBoundShaderStateResource(void)_::_7_::TSTR_LinkGlobalBoundShaderStateResource35>
* __cdecl TRenderCommandTag<`FGlobalBoundShaderStateResource::FGlobalBoundShaderStateResource'::__l7::TSTR_LinkGlobalBoundShaderStateResource35>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FGlobalBoundShaderStateResource::FGlobalBoundShaderStateResource(void)_::_7_::TSTR_LinkGlobalBoundShaderStateResource35>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FGlobalBoundShaderStateResource::FGlobalBoundShaderStateResource(void)_::_7_::TSTR_LinkGlobalBoundShaderStateResource35>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FGlobalBoundShaderStateResource::FGlobalBoundShaderStateResource(void)_::_7_::TSTR_LinkGlobalBoundShaderStateResource35>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FGlobalBoundShaderStateResource::FGlobalBoundShaderStateResource(void)_::_7_::TSTR_LinkGlobalBoundShaderStateResource35>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"LinkGlobalBoundShaderStateResource");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                   L"LinkGlobalBoundShaderStateResource","STATGROUP_RenderThreadCommands",
                   "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
                   MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar3 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      FVar2 = ::Stat;
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FGlobalBoundShaderStateResource::FGlobalBoundShaderStateResource(void)_::_7_::TSTR_LinkGlobalBoundShaderStateResource35>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FGlobalBoundShaderStateResource::FGlobalBoundShaderStateResource(void)_::_7_::TSTR_LinkGlobalBoundShaderStateResource35>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"LinkGlobalBoundShaderStateResource");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FGlobalBoundShaderStateResource::FGlobalBoundShaderStateResource(void)_::_7_::TSTR_LinkGlobalBoundShaderStateResource35>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FGlobalBoundShaderStateResource::FGlobalBoundShaderStateResource(void)_::_7_::TSTR_LinkGlobalBoundShaderStateResource35>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"LinkGlobalBoundShaderStateResource","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_LinkGlobalBound;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

