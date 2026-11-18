// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PreLoadScreen
// Functions: 3

// Get @ 145ac8ac0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_protected:_void___cdecl_FPreLoadScreenManager::EarlyPlayRenderFrameTick(void)_::_17_::TSTR_BeginPreLoadScreenFrame560>
* __cdecl TRenderCommandTag<`FPreLoadScreenManager::EarlyPlayRenderFrameTick'::__l17::TSTR_BeginPreLoadScreenFrame560>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_void___cdecl_FPreLoadScreenManager::EarlyPlayRenderFrameTick(void)_::_17_::TSTR_BeginPreLoadScreenFrame560>_const_&___cdecl_TRenderCommandTag<_protected:_void___cdecl_FPreLoadScreenManager::EarlyPlayRenderFrameTick(void)_::_17_::TSTR_BeginPreLoadScreenFrame560>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_void___cdecl_FPreLoadScreenManager::EarlyPlayRenderFrameTick(void)_::_17_::TSTR_BeginPreLoadScreenFrame560>_const_&___cdecl_TRenderCommandTag<_protected:_void___cdecl_FPreLoadScreenManager::EarlyPlayRenderFrameTick(void)_::_17_::TSTR_BeginPreLoadScreenFrame560>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"BeginPreLoadScreenFrame");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"BeginPreLoadScreenFrame",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_void___cdecl_FPreLoadScreenManager::EarlyPlayRenderFrameTick(void)_::_17_::TSTR_BeginPreLoadScreenFrame560>_const_&___cdecl_TRenderCommandTag<_protected:_void___cdecl_FPreLoadScreenManager::EarlyPlayRenderFrameTick(void)_::_17_::TSTR_BeginPreLoadScreenFrame560>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"BeginPreLoadScreenFrame");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_void___cdecl_FPreLoadScreenManager::EarlyPlayRenderFrameTick(void)_::_17_::TSTR_BeginPreLoadScreenFrame560>_const_&___cdecl_TRenderCommandTag<_protected:_void___cdecl_FPreLoadScreenManager::EarlyPlayRenderFrameTick(void)_::_17_::TSTR_BeginPreLoadScreenFrame560>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"BeginPreLoadScreenFrame"
                             ,"STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_BeginPreLoadScr;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145ac8c70

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_protected:_void___cdecl_FPreLoadScreenManager::EarlyPlayRenderFrameTick(void)_::_17_::TSTR_FinishPreLoadScreenFrame581>
* __cdecl TRenderCommandTag<`FPreLoadScreenManager::EarlyPlayRenderFrameTick'::__l17::TSTR_FinishPreLoadScreenFrame581>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_void___cdecl_FPreLoadScreenManager::EarlyPlayRenderFrameTick(void)_::_17_::TSTR_FinishPreLoadScreenFrame581>_const_&___cdecl_TRenderCommandTag<_protected:_void___cdecl_FPreLoadScreenManager::EarlyPlayRenderFrameTick(void)_::_17_::TSTR_FinishPreLoadScreenFrame581>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_void___cdecl_FPreLoadScreenManager::EarlyPlayRenderFrameTick(void)_::_17_::TSTR_FinishPreLoadScreenFrame581>_const_&___cdecl_TRenderCommandTag<_protected:_void___cdecl_FPreLoadScreenManager::EarlyPlayRenderFrameTick(void)_::_17_::TSTR_FinishPreLoadScreenFrame581>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FinishPreLoadScreenFrame");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FinishPreLoadScreenFrame",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_void___cdecl_FPreLoadScreenManager::EarlyPlayRenderFrameTick(void)_::_17_::TSTR_FinishPreLoadScreenFrame581>_const_&___cdecl_TRenderCommandTag<_protected:_void___cdecl_FPreLoadScreenManager::EarlyPlayRenderFrameTick(void)_::_17_::TSTR_FinishPreLoadScreenFrame581>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FinishPreLoadScreenFrame");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_void___cdecl_FPreLoadScreenManager::EarlyPlayRenderFrameTick(void)_::_17_::TSTR_FinishPreLoadScreenFrame581>_const_&___cdecl_TRenderCommandTag<_protected:_void___cdecl_FPreLoadScreenManager::EarlyPlayRenderFrameTick(void)_::_17_::TSTR_FinishPreLoadScreenFrame581>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FinishPreLoadScreenFrame","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FinishPreLoadSc;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145ac8e20

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_FPreLoadScreenSlateSynchMechanism::RunMainLoop_SlateThread(void)_::_26_::TSTR_PreLoadScreenRenderTick242>
* __cdecl TRenderCommandTag<`FPreLoadScreenSlateSynchMechanism::RunMainLoop_SlateThread'::__l26::TSTR_PreLoadScreenRenderTick242>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FPreLoadScreenSlateSynchMechanism::RunMainLoop_SlateThread(void)_::_26_::TSTR_PreLoadScreenRenderTick242>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FPreLoadScreenSlateSynchMechanism::RunMainLoop_SlateThread(void)_::_26_::TSTR_PreLoadScreenRenderTick242>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FPreLoadScreenSlateSynchMechanism::RunMainLoop_SlateThread(void)_::_26_::TSTR_PreLoadScreenRenderTick242>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FPreLoadScreenSlateSynchMechanism::RunMainLoop_SlateThread(void)_::_26_::TSTR_PreLoadScreenRenderTick242>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"PreLoadScreenRenderTick");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"PreLoadScreenRenderTick",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FPreLoadScreenSlateSynchMechanism::RunMainLoop_SlateThread(void)_::_26_::TSTR_PreLoadScreenRenderTick242>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FPreLoadScreenSlateSynchMechanism::RunMainLoop_SlateThread(void)_::_26_::TSTR_PreLoadScreenRenderTick242>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"PreLoadScreenRenderTick");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FPreLoadScreenSlateSynchMechanism::RunMainLoop_SlateThread(void)_::_26_::TSTR_PreLoadScreenRenderTick242>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FPreLoadScreenSlateSynchMechanism::RunMainLoop_SlateThread(void)_::_26_::TSTR_PreLoadScreenRenderTick242>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"PreLoadScreenRenderTick"
                             ,"STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_PreLoadScreenRe;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

