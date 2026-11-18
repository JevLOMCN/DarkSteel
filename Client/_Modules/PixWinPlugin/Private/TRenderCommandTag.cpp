// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PixWinPlugin
// Functions: 2

// Get @ 14e2c5dd0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_FPixWinPluginModule::BeginFrameCapture(void_*,FString_const_&)_::_2_::TSTR_PixWinBeginFrameCapture343>
* __cdecl TRenderCommandTag<`FPixWinPluginModule::BeginFrameCapture'::__l2::TSTR_PixWinBeginFrameCapture343>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FPixWinPluginModule::BeginFrameCapture(void_*,FString_const_&)_::_2_::TSTR_PixWinBeginFrameCapture343>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FPixWinPluginModule::BeginFrameCapture(void_*,FString_const_&)_::_2_::TSTR_PixWinBeginFrameCapture343>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FPixWinPluginModule::BeginFrameCapture(void_*,FString_const_&)_::_2_::TSTR_PixWinBeginFrameCapture343>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FPixWinPluginModule::BeginFrameCapture(void_*,FString_const_&)_::_2_::TSTR_PixWinBeginFrameCapture343>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"PixWinBeginFrameCapture");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"PixWinBeginFrameCapture",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FPixWinPluginModule::BeginFrameCapture(void_*,FString_const_&)_::_2_::TSTR_PixWinBeginFrameCapture343>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FPixWinPluginModule::BeginFrameCapture(void_*,FString_const_&)_::_2_::TSTR_PixWinBeginFrameCapture343>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"PixWinBeginFrameCapture");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FPixWinPluginModule::BeginFrameCapture(void_*,FString_const_&)_::_2_::TSTR_PixWinBeginFrameCapture343>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FPixWinPluginModule::BeginFrameCapture(void_*,FString_const_&)_::_2_::TSTR_PixWinBeginFrameCapture343>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"PixWinBeginFrameCapture"
                             ,"STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_PixWinBeginFram;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14e2c5f80

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_FPixWinPluginModule::EndFrameCapture(unsigned_int,FString_const_&)_::_2_::TSTR_PixWinEndFrameCapture358>
* __cdecl TRenderCommandTag<`FPixWinPluginModule::EndFrameCapture'::__l2::TSTR_PixWinEndFrameCapture358>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FPixWinPluginModule::EndFrameCapture(unsigned_int,FString_const_&)_::_2_::TSTR_PixWinEndFrameCapture358>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FPixWinPluginModule::EndFrameCapture(unsigned_int,FString_const_&)_::_2_::TSTR_PixWinEndFrameCapture358>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FPixWinPluginModule::EndFrameCapture(unsigned_int,FString_const_&)_::_2_::TSTR_PixWinEndFrameCapture358>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FPixWinPluginModule::EndFrameCapture(unsigned_int,FString_const_&)_::_2_::TSTR_PixWinEndFrameCapture358>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"PixWinEndFrameCapture");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"PixWinEndFrameCapture",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FPixWinPluginModule::EndFrameCapture(unsigned_int,FString_const_&)_::_2_::TSTR_PixWinEndFrameCapture358>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FPixWinPluginModule::EndFrameCapture(unsigned_int,FString_const_&)_::_2_::TSTR_PixWinEndFrameCapture358>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"PixWinEndFrameCapture");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FPixWinPluginModule::EndFrameCapture(unsigned_int,FString_const_&)_::_2_::TSTR_PixWinEndFrameCapture358>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FPixWinPluginModule::EndFrameCapture(unsigned_int,FString_const_&)_::_2_::TSTR_PixWinEndFrameCapture358>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"PixWinEndFrameCapture",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_PixWinEndFrameC;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

