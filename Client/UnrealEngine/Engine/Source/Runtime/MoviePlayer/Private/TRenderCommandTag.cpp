// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MoviePlayer
// Functions: 5

// Get @ 146c7c030

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultGameMoviePlayer::WaitForMovieToFinish(bool)_::_28_::TSTR_BeginLoadingMovieFrameAndTickMovieStreamer539>
* __cdecl TRenderCommandTag<`FDefaultGameMoviePlayer::WaitForMovieToFinish'::__l28::TSTR_BeginLoadingMovieFrameAndTickMovieStreamer539>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultGameMoviePlayer::WaitForMovieToFinish(bool)_::_28_::TSTR_BeginLoadingMovieFrameAndTickMovieStreamer539>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultGameMoviePlayer::WaitForMovieToFinish(bool)_::_28_::TSTR_BeginLoadingMovieFrameAndTickMovieStreamer539>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultGameMoviePlayer::WaitForMovieToFinish(bool)_::_28_::TSTR_BeginLoadingMovieFrameAndTickMovieStreamer539>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultGameMoviePlayer::WaitForMovieToFinish(bool)_::_28_::TSTR_BeginLoadingMovieFrameAndTickMovieStreamer539>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"BeginLoadingMovieFrameAndTickMovieStreamer");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                   L"BeginLoadingMovieFrameAndTickMovieStreamer","STATGROUP_RenderThreadCommands",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultGameMoviePlayer::WaitForMovieToFinish(bool)_::_28_::TSTR_BeginLoadingMovieFrameAndTickMovieStreamer539>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultGameMoviePlayer::WaitForMovieToFinish(bool)_::_28_::TSTR_BeginLoadingMovieFrameAndTickMovieStreamer539>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"BeginLoadingMovieFrameAndTickMovieStreamer");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultGameMoviePlayer::WaitForMovieToFinish(bool)_::_28_::TSTR_BeginLoadingMovieFrameAndTickMovieStreamer539>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultGameMoviePlayer::WaitForMovieToFinish(bool)_::_28_::TSTR_BeginLoadingMovieFrameAndTickMovieStreamer539>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"BeginLoadingMovieFrameAndTickMovieStreamer",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_BeginLoadingMov;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 146c7c1e0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultGameMoviePlayer::WaitForMovieToFinish(bool)_::_28_::TSTR_FinishLoadingMovieFrame557>
* __cdecl TRenderCommandTag<`FDefaultGameMoviePlayer::WaitForMovieToFinish'::__l28::TSTR_FinishLoadingMovieFrame557>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultGameMoviePlayer::WaitForMovieToFinish(bool)_::_28_::TSTR_FinishLoadingMovieFrame557>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultGameMoviePlayer::WaitForMovieToFinish(bool)_::_28_::TSTR_FinishLoadingMovieFrame557>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultGameMoviePlayer::WaitForMovieToFinish(bool)_::_28_::TSTR_FinishLoadingMovieFrame557>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultGameMoviePlayer::WaitForMovieToFinish(bool)_::_28_::TSTR_FinishLoadingMovieFrame557>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FinishLoadingMovieFrame");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FinishLoadingMovieFrame",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultGameMoviePlayer::WaitForMovieToFinish(bool)_::_28_::TSTR_FinishLoadingMovieFrame557>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultGameMoviePlayer::WaitForMovieToFinish(bool)_::_28_::TSTR_FinishLoadingMovieFrame557>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FinishLoadingMovieFrame");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultGameMoviePlayer::WaitForMovieToFinish(bool)_::_28_::TSTR_FinishLoadingMovieFrame557>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultGameMoviePlayer::WaitForMovieToFinish(bool)_::_28_::TSTR_FinishLoadingMovieFrame557>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FinishLoadingMovieFrame"
                             ,"STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FinishLoadingMo;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 146c7c390

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultGameMoviePlayer::Initialize(FSlateRenderer_&,TSharedPtr<SWindow,1>)_::_2_::TSTR_RegisterMoviePlayerTickable172>
* __cdecl TRenderCommandTag<`FDefaultGameMoviePlayer::Initialize'::__l2::TSTR_RegisterMoviePlayerTickable172>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultGameMoviePlayer::Initialize(FSlateRenderer_&,TSharedPtr<SWindow,1>)_::_2_::TSTR_RegisterMoviePlayerTickable172>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultGameMoviePlayer::Initialize(FSlateRenderer_&,TSharedPtr<SWindow,1>)_::_2_::TSTR_RegisterMoviePlayerTickable172>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultGameMoviePlayer::Initialize(FSlateRenderer_&,TSharedPtr<SWindow,1>)_::_2_::TSTR_RegisterMoviePlayerTickable172>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultGameMoviePlayer::Initialize(FSlateRenderer_&,TSharedPtr<SWindow,1>)_::_2_::TSTR_RegisterMoviePlayerTickable172>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"RegisterMoviePlayerTickable");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"RegisterMoviePlayerTickable",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultGameMoviePlayer::Initialize(FSlateRenderer_&,TSharedPtr<SWindow,1>)_::_2_::TSTR_RegisterMoviePlayerTickable172>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultGameMoviePlayer::Initialize(FSlateRenderer_&,TSharedPtr<SWindow,1>)_::_2_::TSTR_RegisterMoviePlayerTickable172>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"RegisterMoviePlayerTickable");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultGameMoviePlayer::Initialize(FSlateRenderer_&,TSharedPtr<SWindow,1>)_::_2_::TSTR_RegisterMoviePlayerTickable172>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultGameMoviePlayer::Initialize(FSlateRenderer_&,TSharedPtr<SWindow,1>)_::_2_::TSTR_RegisterMoviePlayerTickable172>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"RegisterMoviePlayerTickable","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_RegisterMoviePl;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 146c7c540

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual___cdecl_FDefaultGameMoviePlayer::~FDefaultGameMoviePlayer(void)_::_9_::TSTR_UnregisterMoviePlayerTickable140>
* __cdecl TRenderCommandTag<`FDefaultGameMoviePlayer::~FDefaultGameMoviePlayer'::__l9::TSTR_UnregisterMoviePlayerTickable140>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual___cdecl_FDefaultGameMoviePlayer::~FDefaultGameMoviePlayer(void)_::_9_::TSTR_UnregisterMoviePlayerTickable140>_const_&___cdecl_TRenderCommandTag<_public:_virtual___cdecl_FDefaultGameMoviePlayer::~FDefaultGameMoviePlayer(void)_::_9_::TSTR_UnregisterMoviePlayerTickable140>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual___cdecl_FDefaultGameMoviePlayer::~FDefaultGameMoviePlayer(void)_::_9_::TSTR_UnregisterMoviePlayerTickable140>_const_&___cdecl_TRenderCommandTag<_public:_virtual___cdecl_FDefaultGameMoviePlayer::~FDefaultGameMoviePlayer(void)_::_9_::TSTR_UnregisterMoviePlayerTickable140>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UnregisterMoviePlayerTickable");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"UnregisterMoviePlayerTickable",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual___cdecl_FDefaultGameMoviePlayer::~FDefaultGameMoviePlayer(void)_::_9_::TSTR_UnregisterMoviePlayerTickable140>_const_&___cdecl_TRenderCommandTag<_public:_virtual___cdecl_FDefaultGameMoviePlayer::~FDefaultGameMoviePlayer(void)_::_9_::TSTR_UnregisterMoviePlayerTickable140>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UnregisterMoviePlayerTickable");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual___cdecl_FDefaultGameMoviePlayer::~FDefaultGameMoviePlayer(void)_::_9_::TSTR_UnregisterMoviePlayerTickable140>_const_&___cdecl_TRenderCommandTag<_public:_virtual___cdecl_FDefaultGameMoviePlayer::~FDefaultGameMoviePlayer(void)_::_9_::TSTR_UnregisterMoviePlayerTickable140>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"UnregisterMoviePlayerTickable","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_UnregisterMovie;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 146c7c6f0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultGameMoviePlayer::Shutdown(void)_::_2_::TSTR_UnregisterMoviePlayerTickable265>
* __cdecl TRenderCommandTag<`FDefaultGameMoviePlayer::Shutdown'::__l2::TSTR_UnregisterMoviePlayerTickable265>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultGameMoviePlayer::Shutdown(void)_::_2_::TSTR_UnregisterMoviePlayerTickable265>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultGameMoviePlayer::Shutdown(void)_::_2_::TSTR_UnregisterMoviePlayerTickable265>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultGameMoviePlayer::Shutdown(void)_::_2_::TSTR_UnregisterMoviePlayerTickable265>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultGameMoviePlayer::Shutdown(void)_::_2_::TSTR_UnregisterMoviePlayerTickable265>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UnregisterMoviePlayerTickable");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"UnregisterMoviePlayerTickable",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultGameMoviePlayer::Shutdown(void)_::_2_::TSTR_UnregisterMoviePlayerTickable265>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultGameMoviePlayer::Shutdown(void)_::_2_::TSTR_UnregisterMoviePlayerTickable265>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UnregisterMoviePlayerTickable");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultGameMoviePlayer::Shutdown(void)_::_2_::TSTR_UnregisterMoviePlayerTickable265>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultGameMoviePlayer::Shutdown(void)_::_2_::TSTR_UnregisterMoviePlayerTickable265>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"UnregisterMoviePlayerTickable","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_UnregisterMovie;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

