// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Launch
// Functions: 7

// Get @ 148da3130

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_51_::TSTR_BeginFrame5695>
* __cdecl TRenderCommandTag<`FEngineLoop::Tick'::__l51::TSTR_BeginFrame5695>::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_51_::TSTR_BeginFrame5695>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_51_::TSTR_BeginFrame5695>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_51_::TSTR_BeginFrame5695>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_51_::TSTR_BeginFrame5695>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"BeginFrame");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"BeginFrame",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_51_::TSTR_BeginFrame5695>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_51_::TSTR_BeginFrame5695>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"BeginFrame");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_51_::TSTR_BeginFrame5695>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_51_::TSTR_BeginFrame5695>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"BeginFrame",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_BeginFrame;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 148da32e0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_222_::TSTR_EndFrame6138>
* __cdecl TRenderCommandTag<`FEngineLoop::Tick'::__l222::TSTR_EndFrame6138>::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_222_::TSTR_EndFrame6138>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_222_::TSTR_EndFrame6138>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_222_::TSTR_EndFrame6138>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_222_::TSTR_EndFrame6138>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"EndFrame");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"EndFrame",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_222_::TSTR_EndFrame6138>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_222_::TSTR_EndFrame6138>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"EndFrame");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_222_::TSTR_EndFrame6138>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_222_::TSTR_EndFrame6138>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"EndFrame",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_EndFrame;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 148da3490

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_206_::TSTR_FScene_EndFrame6030>
* __cdecl TRenderCommandTag<`FEngineLoop::Tick'::__l206::TSTR_FScene_EndFrame6030>::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_206_::TSTR_FScene_EndFrame6030>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_206_::TSTR_FScene_EndFrame6030>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_206_::TSTR_FScene_EndFrame6030>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_206_::TSTR_FScene_EndFrame6030>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FScene_EndFrame");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FScene_EndFrame",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_206_::TSTR_FScene_EndFrame6030>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_206_::TSTR_FScene_EndFrame6030>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FScene_EndFrame");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_206_::TSTR_FScene_EndFrame6030>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_206_::TSTR_FScene_EndFrame6030>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FScene_EndFrame",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FScene_EndFrame;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 148da3640

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_55_::TSTR_FScene_StartFrame5702>
* __cdecl TRenderCommandTag<`FEngineLoop::Tick'::__l55::TSTR_FScene_StartFrame5702>::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_55_::TSTR_FScene_StartFrame5702>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_55_::TSTR_FScene_StartFrame5702>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_55_::TSTR_FScene_StartFrame5702>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_55_::TSTR_FScene_StartFrame5702>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FScene_StartFrame");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FScene_StartFrame",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_55_::TSTR_FScene_StartFrame5702>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_55_::TSTR_FScene_StartFrame5702>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FScene_StartFrame");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_55_::TSTR_FScene_StartFrame5702>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_55_::TSTR_FScene_StartFrame5702>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FScene_StartFrame",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FScene_StartFra;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 148da37f0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_61_::TSTR_FrameCounter6108>
* __cdecl TRenderCommandTag<`FEngineLoop::Tick'::__l61::TSTR_FrameCounter6108>::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_61_::TSTR_FrameCounter6108>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_61_::TSTR_FrameCounter6108>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_61_::TSTR_FrameCounter6108>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_61_::TSTR_FrameCounter6108>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FrameCounter");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FrameCounter",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_61_::TSTR_FrameCounter6108>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_61_::TSTR_FrameCounter6108>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FrameCounter");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_61_::TSTR_FrameCounter6108>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_61_::TSTR_FrameCounter6108>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FrameCounter",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FrameCounter;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 148da39a0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_static_void___cdecl_FEngineLoop::PostInitRHI(void)_::_7_::TSTR_InitializeSystemTextures7039>
* __cdecl TRenderCommandTag<`FEngineLoop::PostInitRHI'::__l7::TSTR_InitializeSystemTextures7039>::
          Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_static_void___cdecl_FEngineLoop::PostInitRHI(void)_::_7_::TSTR_InitializeSystemTextures7039>_const_&___cdecl_TRenderCommandTag<_public:_static_void___cdecl_FEngineLoop::PostInitRHI(void)_::_7_::TSTR_InitializeSystemTextures7039>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_static_void___cdecl_FEngineLoop::PostInitRHI(void)_::_7_::TSTR_InitializeSystemTextures7039>_const_&___cdecl_TRenderCommandTag<_public:_static_void___cdecl_FEngineLoop::PostInitRHI(void)_::_7_::TSTR_InitializeSystemTextures7039>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"InitializeSystemTextures");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"InitializeSystemTextures",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_static_void___cdecl_FEngineLoop::PostInitRHI(void)_::_7_::TSTR_InitializeSystemTextures7039>_const_&___cdecl_TRenderCommandTag<_public:_static_void___cdecl_FEngineLoop::PostInitRHI(void)_::_7_::TSTR_InitializeSystemTextures7039>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"InitializeSystemTextures");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_static_void___cdecl_FEngineLoop::PostInitRHI(void)_::_7_::TSTR_InitializeSystemTextures7039>_const_&___cdecl_TRenderCommandTag<_public:_static_void___cdecl_FEngineLoop::PostInitRHI(void)_::_7_::TSTR_InitializeSystemTextures7039>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"InitializeSystemTextures","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_InitializeSyste;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 148da3b50

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_61_::TSTR_ResetDeferredUpdates5746>
* __cdecl TRenderCommandTag<`FEngineLoop::Tick'::__l61::TSTR_ResetDeferredUpdates5746>::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_61_::TSTR_ResetDeferredUpdates5746>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_61_::TSTR_ResetDeferredUpdates5746>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_61_::TSTR_ResetDeferredUpdates5746>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_61_::TSTR_ResetDeferredUpdates5746>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ResetDeferredUpdates");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ResetDeferredUpdates",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_61_::TSTR_ResetDeferredUpdates5746>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_61_::TSTR_ResetDeferredUpdates5746>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ResetDeferredUpdates");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_61_::TSTR_ResetDeferredUpdates5746>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FEngineLoop::Tick(void)_::_61_::TSTR_ResetDeferredUpdates5746>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ResetDeferredUpdates",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_ResetDeferredUp;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

