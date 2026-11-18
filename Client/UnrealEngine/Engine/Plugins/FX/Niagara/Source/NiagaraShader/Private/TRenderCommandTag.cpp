// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraShader
// Functions: 4

// Get @ 148dfe300

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_bool___cdecl_FNiagaraShaderScript::QueueForRelease(FThreadSafeBool_&)_::_12_::TSTR_BeginDestroyCommand484>
* __cdecl TRenderCommandTag<`FNiagaraShaderScript::QueueForRelease'::__l12::TSTR_BeginDestroyCommand484>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_bool___cdecl_FNiagaraShaderScript::QueueForRelease(FThreadSafeBool_&)_::_12_::TSTR_BeginDestroyCommand484>_const_&___cdecl_TRenderCommandTag<_public:_bool___cdecl_FNiagaraShaderScript::QueueForRelease(FThreadSafeBool_&)_::_12_::TSTR_BeginDestroyCommand484>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_bool___cdecl_FNiagaraShaderScript::QueueForRelease(FThreadSafeBool_&)_::_12_::TSTR_BeginDestroyCommand484>_const_&___cdecl_TRenderCommandTag<_public:_bool___cdecl_FNiagaraShaderScript::QueueForRelease(FThreadSafeBool_&)_::_12_::TSTR_BeginDestroyCommand484>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"BeginDestroyCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"BeginDestroyCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_bool___cdecl_FNiagaraShaderScript::QueueForRelease(FThreadSafeBool_&)_::_12_::TSTR_BeginDestroyCommand484>_const_&___cdecl_TRenderCommandTag<_public:_bool___cdecl_FNiagaraShaderScript::QueueForRelease(FThreadSafeBool_&)_::_12_::TSTR_BeginDestroyCommand484>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"BeginDestroyCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_bool___cdecl_FNiagaraShaderScript::QueueForRelease(FThreadSafeBool_&)_::_12_::TSTR_BeginDestroyCommand484>_const_&___cdecl_TRenderCommandTag<_public:_bool___cdecl_FNiagaraShaderScript::QueueForRelease(FThreadSafeBool_&)_::_12_::TSTR_BeginDestroyCommand484>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"BeginDestroyCommand",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_BeginDestroyCom;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 148dfe4b0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_FNiagaraShaderScript::ReleaseShaderMap(void)_::_8_::TSTR_ReleaseShaderMap312>
* __cdecl TRenderCommandTag<`FNiagaraShaderScript::ReleaseShaderMap'::__l8::TSTR_ReleaseShaderMap312>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FNiagaraShaderScript::ReleaseShaderMap(void)_::_8_::TSTR_ReleaseShaderMap312>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FNiagaraShaderScript::ReleaseShaderMap(void)_::_8_::TSTR_ReleaseShaderMap312>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FNiagaraShaderScript::ReleaseShaderMap(void)_::_8_::TSTR_ReleaseShaderMap312>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FNiagaraShaderScript::ReleaseShaderMap(void)_::_8_::TSTR_ReleaseShaderMap312>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ReleaseShaderMap");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ReleaseShaderMap",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FNiagaraShaderScript::ReleaseShaderMap(void)_::_8_::TSTR_ReleaseShaderMap312>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FNiagaraShaderScript::ReleaseShaderMap(void)_::_8_::TSTR_ReleaseShaderMap312>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ReleaseShaderMap");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FNiagaraShaderScript::ReleaseShaderMap(void)_::_8_::TSTR_ReleaseShaderMap312>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FNiagaraShaderScript::ReleaseShaderMap(void)_::_8_::TSTR_ReleaseShaderMap312>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ReleaseShaderMap",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_ReleaseShaderMa;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 148dfe660

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_FNiagaraShaderScript::BuildScriptParametersMetadata(FNiagaraShaderScriptParametersMetadata_const_&)_::_2_::TSTR_SetScriptParametersMetadata738>
* __cdecl TRenderCommandTag<`FNiagaraShaderScript::BuildScriptParametersMetadata'::__l2::TSTR_SetScriptParametersMetadata738>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FNiagaraShaderScript::BuildScriptParametersMetadata(FNiagaraShaderScriptParametersMetadata_const_&)_::_2_::TSTR_SetScriptParametersMetadata738>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FNiagaraShaderScript::BuildScriptParametersMetadata(FNiagaraShaderScriptParametersMetadata_const_&)_::_2_::TSTR_SetScriptParametersMetadata738>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FNiagaraShaderScript::BuildScriptParametersMetadata(FNiagaraShaderScriptParametersMetadata_const_&)_::_2_::TSTR_SetScriptParametersMetadata738>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FNiagaraShaderScript::BuildScriptParametersMetadata(FNiagaraShaderScriptParametersMetadata_const_&)_::_2_::TSTR_SetScriptParametersMetadata738>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SetScriptParametersMetadata");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"SetScriptParametersMetadata",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FNiagaraShaderScript::BuildScriptParametersMetadata(FNiagaraShaderScriptParametersMetadata_const_&)_::_2_::TSTR_SetScriptParametersMetadata738>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FNiagaraShaderScript::BuildScriptParametersMetadata(FNiagaraShaderScriptParametersMetadata_const_&)_::_2_::TSTR_SetScriptParametersMetadata738>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SetScriptParametersMetadata");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FNiagaraShaderScript::BuildScriptParametersMetadata(FNiagaraShaderScriptParametersMetadata_const_&)_::_2_::TSTR_SetScriptParametersMetadata738>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FNiagaraShaderScript::BuildScriptParametersMetadata(FNiagaraShaderScriptParametersMetadata_const_&)_::_2_::TSTR_SetScriptParametersMetadata738>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"SetScriptParametersMetadata","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_SetScriptParame;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 148dfe810

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_protected:_void___cdecl_FNiagaraShaderScript::UpdateCachedData_PostCompile(bool)_::_45_::TSTR_UpdateCachedData572>
* __cdecl TRenderCommandTag<`FNiagaraShaderScript::UpdateCachedData_PostCompile'::__l45::TSTR_UpdateCachedData572>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_void___cdecl_FNiagaraShaderScript::UpdateCachedData_PostCompile(bool)_::_45_::TSTR_UpdateCachedData572>_const_&___cdecl_TRenderCommandTag<_protected:_void___cdecl_FNiagaraShaderScript::UpdateCachedData_PostCompile(bool)_::_45_::TSTR_UpdateCachedData572>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_void___cdecl_FNiagaraShaderScript::UpdateCachedData_PostCompile(bool)_::_45_::TSTR_UpdateCachedData572>_const_&___cdecl_TRenderCommandTag<_protected:_void___cdecl_FNiagaraShaderScript::UpdateCachedData_PostCompile(bool)_::_45_::TSTR_UpdateCachedData572>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UpdateCachedData");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"UpdateCachedData",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_void___cdecl_FNiagaraShaderScript::UpdateCachedData_PostCompile(bool)_::_45_::TSTR_UpdateCachedData572>_const_&___cdecl_TRenderCommandTag<_protected:_void___cdecl_FNiagaraShaderScript::UpdateCachedData_PostCompile(bool)_::_45_::TSTR_UpdateCachedData572>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UpdateCachedData");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_void___cdecl_FNiagaraShaderScript::UpdateCachedData_PostCompile(bool)_::_45_::TSTR_UpdateCachedData572>_const_&___cdecl_TRenderCommandTag<_protected:_void___cdecl_FNiagaraShaderScript::UpdateCachedData_PostCompile(bool)_::_45_::TSTR_UpdateCachedData572>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"UpdateCachedData",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_UpdateCachedDat;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

