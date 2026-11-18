// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 8

// Get @ 14cf8cd30

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_ExecuteOnRenderThread_DoNotWait(TFunction<void___cdecl(void)>_const_&)_::_2_::TSTR_ExecuteOnRenderThread11>
* __cdecl TRenderCommandTag<`ExecuteOnRenderThread_DoNotWait'::__l2::TSTR_ExecuteOnRenderThread11>::
          Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_ExecuteOnRenderThread_DoNotWait(TFunction<void___cdecl(void)>_const_&)_::_2_::TSTR_ExecuteOnRenderThread11>_const_&___cdecl_TRenderCommandTag<_void___cdecl_ExecuteOnRenderThread_DoNotWait(TFunction<void___cdecl(void)>_const_&)_::_2_::TSTR_ExecuteOnRenderThread11>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_ExecuteOnRenderThread_DoNotWait(TFunction<void___cdecl(void)>_const_&)_::_2_::TSTR_ExecuteOnRenderThread11>_const_&___cdecl_TRenderCommandTag<_void___cdecl_ExecuteOnRenderThread_DoNotWait(TFunction<void___cdecl(void)>_const_&)_::_2_::TSTR_ExecuteOnRenderThread11>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ExecuteOnRenderThread");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ExecuteOnRenderThread",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_ExecuteOnRenderThread_DoNotWait(TFunction<void___cdecl(void)>_const_&)_::_2_::TSTR_ExecuteOnRenderThread11>_const_&___cdecl_TRenderCommandTag<_void___cdecl_ExecuteOnRenderThread_DoNotWait(TFunction<void___cdecl(void)>_const_&)_::_2_::TSTR_ExecuteOnRenderThread11>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ExecuteOnRenderThread");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_ExecuteOnRenderThread_DoNotWait(TFunction<void___cdecl(void)>_const_&)_::_2_::TSTR_ExecuteOnRenderThread11>_const_&___cdecl_TRenderCommandTag<_void___cdecl_ExecuteOnRenderThread_DoNotWait(TFunction<void___cdecl(void)>_const_&)_::_2_::TSTR_ExecuteOnRenderThread11>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ExecuteOnRenderThread",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_ExecuteOnRender;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14cf8cee0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_ExecuteOnRenderThread_DoNotWait(TFunction<void___cdecl(FRHICommandListImmediate_&)>_const_&)_::_2_::TSTR_ExecuteOnRenderThread21>
* __cdecl TRenderCommandTag<`ExecuteOnRenderThread_DoNotWait'::__l2::TSTR_ExecuteOnRenderThread21>::
          Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_ExecuteOnRenderThread_DoNotWait(TFunction<void___cdecl(FRHICommandListImmediate_&)>_const_&)_::_2_::TSTR_ExecuteOnRenderThread21>_const_&___cdecl_TRenderCommandTag<_void___cdecl_ExecuteOnRenderThread_DoNotWait(TFunction<void___cdecl(FRHICommandListImmediate_&)>_const_&)_::_2_::TSTR_ExecuteOnRenderThread21>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_ExecuteOnRenderThread_DoNotWait(TFunction<void___cdecl(FRHICommandListImmediate_&)>_const_&)_::_2_::TSTR_ExecuteOnRenderThread21>_const_&___cdecl_TRenderCommandTag<_void___cdecl_ExecuteOnRenderThread_DoNotWait(TFunction<void___cdecl(FRHICommandListImmediate_&)>_const_&)_::_2_::TSTR_ExecuteOnRenderThread21>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ExecuteOnRenderThread");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ExecuteOnRenderThread",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_ExecuteOnRenderThread_DoNotWait(TFunction<void___cdecl(FRHICommandListImmediate_&)>_const_&)_::_2_::TSTR_ExecuteOnRenderThread21>_const_&___cdecl_TRenderCommandTag<_void___cdecl_ExecuteOnRenderThread_DoNotWait(TFunction<void___cdecl(FRHICommandListImmediate_&)>_const_&)_::_2_::TSTR_ExecuteOnRenderThread21>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ExecuteOnRenderThread");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_ExecuteOnRenderThread_DoNotWait(TFunction<void___cdecl(FRHICommandListImmediate_&)>_const_&)_::_2_::TSTR_ExecuteOnRenderThread21>_const_&___cdecl_TRenderCommandTag<_void___cdecl_ExecuteOnRenderThread_DoNotWait(TFunction<void___cdecl(FRHICommandListImmediate_&)>_const_&)_::_2_::TSTR_ExecuteOnRenderThread21>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ExecuteOnRenderThread",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_ExecuteOnRender;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14cf8d090

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_ExecuteOnRenderThread(TFunctionRef<void___cdecl(void)>_const_&)_::_2_::TSTR_ExecuteOnRenderThread31>
* __cdecl TRenderCommandTag<`ExecuteOnRenderThread'::__l2::TSTR_ExecuteOnRenderThread31>::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_ExecuteOnRenderThread(TFunctionRef<void___cdecl(void)>_const_&)_::_2_::TSTR_ExecuteOnRenderThread31>_const_&___cdecl_TRenderCommandTag<_void___cdecl_ExecuteOnRenderThread(TFunctionRef<void___cdecl(void)>_const_&)_::_2_::TSTR_ExecuteOnRenderThread31>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_ExecuteOnRenderThread(TFunctionRef<void___cdecl(void)>_const_&)_::_2_::TSTR_ExecuteOnRenderThread31>_const_&___cdecl_TRenderCommandTag<_void___cdecl_ExecuteOnRenderThread(TFunctionRef<void___cdecl(void)>_const_&)_::_2_::TSTR_ExecuteOnRenderThread31>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ExecuteOnRenderThread");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ExecuteOnRenderThread",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_ExecuteOnRenderThread(TFunctionRef<void___cdecl(void)>_const_&)_::_2_::TSTR_ExecuteOnRenderThread31>_const_&___cdecl_TRenderCommandTag<_void___cdecl_ExecuteOnRenderThread(TFunctionRef<void___cdecl(void)>_const_&)_::_2_::TSTR_ExecuteOnRenderThread31>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ExecuteOnRenderThread");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_ExecuteOnRenderThread(TFunctionRef<void___cdecl(void)>_const_&)_::_2_::TSTR_ExecuteOnRenderThread31>_const_&___cdecl_TRenderCommandTag<_void___cdecl_ExecuteOnRenderThread(TFunctionRef<void___cdecl(void)>_const_&)_::_2_::TSTR_ExecuteOnRenderThread31>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ExecuteOnRenderThread",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_ExecuteOnRender;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14cf8d240

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_ExecuteOnRenderThread(TFunctionRef<void___cdecl(FRHICommandListImmediate_&)>_const_&)_::_2_::TSTR_ExecuteOnRenderThread42>
* __cdecl TRenderCommandTag<`ExecuteOnRenderThread'::__l2::TSTR_ExecuteOnRenderThread42>::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_ExecuteOnRenderThread(TFunctionRef<void___cdecl(FRHICommandListImmediate_&)>_const_&)_::_2_::TSTR_ExecuteOnRenderThread42>_const_&___cdecl_TRenderCommandTag<_void___cdecl_ExecuteOnRenderThread(TFunctionRef<void___cdecl(FRHICommandListImmediate_&)>_const_&)_::_2_::TSTR_ExecuteOnRenderThread42>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_ExecuteOnRenderThread(TFunctionRef<void___cdecl(FRHICommandListImmediate_&)>_const_&)_::_2_::TSTR_ExecuteOnRenderThread42>_const_&___cdecl_TRenderCommandTag<_void___cdecl_ExecuteOnRenderThread(TFunctionRef<void___cdecl(FRHICommandListImmediate_&)>_const_&)_::_2_::TSTR_ExecuteOnRenderThread42>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ExecuteOnRenderThread");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ExecuteOnRenderThread",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_ExecuteOnRenderThread(TFunctionRef<void___cdecl(FRHICommandListImmediate_&)>_const_&)_::_2_::TSTR_ExecuteOnRenderThread42>_const_&___cdecl_TRenderCommandTag<_void___cdecl_ExecuteOnRenderThread(TFunctionRef<void___cdecl(FRHICommandListImmediate_&)>_const_&)_::_2_::TSTR_ExecuteOnRenderThread42>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ExecuteOnRenderThread");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_ExecuteOnRenderThread(TFunctionRef<void___cdecl(FRHICommandListImmediate_&)>_const_&)_::_2_::TSTR_ExecuteOnRenderThread42>_const_&___cdecl_TRenderCommandTag<_void___cdecl_ExecuteOnRenderThread(TFunctionRef<void___cdecl(FRHICommandListImmediate_&)>_const_&)_::_2_::TSTR_ExecuteOnRenderThread42>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ExecuteOnRenderThread",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_ExecuteOnRender;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14cf8d3f0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultStereoLayers::BeginRenderViewFamily(FSceneViewFamily_&)_::_2_::TSTR_FDefaultStereoLayers_CommitLayersToRender239>
* __cdecl TRenderCommandTag<`FDefaultStereoLayers::BeginRenderViewFamily'::__l2::TSTR_FDefaultStereoLayers_CommitLayersToRender239>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultStereoLayers::BeginRenderViewFamily(FSceneViewFamily_&)_::_2_::TSTR_FDefaultStereoLayers_CommitLayersToRender239>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultStereoLayers::BeginRenderViewFamily(FSceneViewFamily_&)_::_2_::TSTR_FDefaultStereoLayers_CommitLayersToRender239>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultStereoLayers::BeginRenderViewFamily(FSceneViewFamily_&)_::_2_::TSTR_FDefaultStereoLayers_CommitLayersToRender239>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultStereoLayers::BeginRenderViewFamily(FSceneViewFamily_&)_::_2_::TSTR_FDefaultStereoLayers_CommitLayersToRender239>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FDefaultStereoLayers_CommitLayersToRender");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                   L"FDefaultStereoLayers_CommitLayersToRender","STATGROUP_RenderThreadCommands",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultStereoLayers::BeginRenderViewFamily(FSceneViewFamily_&)_::_2_::TSTR_FDefaultStereoLayers_CommitLayersToRender239>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultStereoLayers::BeginRenderViewFamily(FSceneViewFamily_&)_::_2_::TSTR_FDefaultStereoLayers_CommitLayersToRender239>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FDefaultStereoLayers_CommitLayersToRender");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultStereoLayers::BeginRenderViewFamily(FSceneViewFamily_&)_::_2_::TSTR_FDefaultStereoLayers_CommitLayersToRender239>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultStereoLayers::BeginRenderViewFamily(FSceneViewFamily_&)_::_2_::TSTR_FDefaultStereoLayers_CommitLayersToRender239>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FDefaultStereoLayers_CommitLayersToRender",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FDefaultStereoL;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14cf8d5a0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultSpectatorScreenController::SetSpectatorScreenMode(ESpectatorScreenMode)_::_2_::TSTR_SetSpectatorScreenMode44>
* __cdecl TRenderCommandTag<`FDefaultSpectatorScreenController::SetSpectatorScreenMode'::__l2::TSTR_SetSpectatorScreenMode44>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultSpectatorScreenController::SetSpectatorScreenMode(ESpectatorScreenMode)_::_2_::TSTR_SetSpectatorScreenMode44>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultSpectatorScreenController::SetSpectatorScreenMode(ESpectatorScreenMode)_::_2_::TSTR_SetSpectatorScreenMode44>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultSpectatorScreenController::SetSpectatorScreenMode(ESpectatorScreenMode)_::_2_::TSTR_SetSpectatorScreenMode44>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultSpectatorScreenController::SetSpectatorScreenMode(ESpectatorScreenMode)_::_2_::TSTR_SetSpectatorScreenMode44>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SetSpectatorScreenMode");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"SetSpectatorScreenMode",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultSpectatorScreenController::SetSpectatorScreenMode(ESpectatorScreenMode)_::_2_::TSTR_SetSpectatorScreenMode44>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultSpectatorScreenController::SetSpectatorScreenMode(ESpectatorScreenMode)_::_2_::TSTR_SetSpectatorScreenMode44>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SetSpectatorScreenMode");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultSpectatorScreenController::SetSpectatorScreenMode(ESpectatorScreenMode)_::_2_::TSTR_SetSpectatorScreenMode44>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultSpectatorScreenController::SetSpectatorScreenMode(ESpectatorScreenMode)_::_2_::TSTR_SetSpectatorScreenMode44>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"SetSpectatorScreenMode",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_SetSpectatorScr;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14cf8d750

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultSpectatorScreenController::SetSpectatorScreenModeTexturePlusEyeLayout(FSpectatorScreenModeTexturePlusEyeLayout_const_&)_::_5_::TSTR_SetSpectatorScreenModeTexturePlusEyeLayout69>
* __cdecl TRenderCommandTag<`FDefaultSpectatorScreenController::SetSpectatorScreenModeTexturePlusEyeLayout'::__l5::TSTR_SetSpectatorScreenModeTexturePlusEyeLayout69>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultSpectatorScreenController::SetSpectatorScreenModeTexturePlusEyeLayout(FSpectatorScreenModeTexturePlusEyeLayout_const_&)_::_5_::TSTR_SetSpectatorScreenModeTexturePlusEyeLayout69>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultSpectatorScreenController::SetSpectatorScreenModeTexturePlusEyeLayout(FSpectatorScreenModeTexturePlusEyeLayout_const_&)_::_5_::TSTR_SetSpectatorScreenModeTexturePlusEyeLayout69>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultSpectatorScreenController::SetSpectatorScreenModeTexturePlusEyeLayout(FSpectatorScreenModeTexturePlusEyeLayout_const_&)_::_5_::TSTR_SetSpectatorScreenModeTexturePlusEyeLayout69>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultSpectatorScreenController::SetSpectatorScreenModeTexturePlusEyeLayout(FSpectatorScreenModeTexturePlusEyeLayout_const_&)_::_5_::TSTR_SetSpectatorScreenModeTexturePlusEyeLayout69>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SetSpectatorScreenModeTexturePlusEyeLayout");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                   L"SetSpectatorScreenModeTexturePlusEyeLayout","STATGROUP_RenderThreadCommands",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultSpectatorScreenController::SetSpectatorScreenModeTexturePlusEyeLayout(FSpectatorScreenModeTexturePlusEyeLayout_const_&)_::_5_::TSTR_SetSpectatorScreenModeTexturePlusEyeLayout69>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultSpectatorScreenController::SetSpectatorScreenModeTexturePlusEyeLayout(FSpectatorScreenModeTexturePlusEyeLayout_const_&)_::_5_::TSTR_SetSpectatorScreenModeTexturePlusEyeLayout69>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SetSpectatorScreenModeTexturePlusEyeLayout");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultSpectatorScreenController::SetSpectatorScreenModeTexturePlusEyeLayout(FSpectatorScreenModeTexturePlusEyeLayout_const_&)_::_5_::TSTR_SetSpectatorScreenModeTexturePlusEyeLayout69>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultSpectatorScreenController::SetSpectatorScreenModeTexturePlusEyeLayout(FSpectatorScreenModeTexturePlusEyeLayout_const_&)_::_5_::TSTR_SetSpectatorScreenModeTexturePlusEyeLayout69>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"SetSpectatorScreenModeTexturePlusEyeLayout",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_SetSpectatorScr;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14cf8d900

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultSpectatorScreenController::BeginRenderViewFamily(FSceneViewFamily_&)_::_2_::TSTR_SetSpectatorScreenTexture97>
* __cdecl TRenderCommandTag<`FDefaultSpectatorScreenController::BeginRenderViewFamily'::__l2::TSTR_SetSpectatorScreenTexture97>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultSpectatorScreenController::BeginRenderViewFamily(FSceneViewFamily_&)_::_2_::TSTR_SetSpectatorScreenTexture97>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultSpectatorScreenController::BeginRenderViewFamily(FSceneViewFamily_&)_::_2_::TSTR_SetSpectatorScreenTexture97>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultSpectatorScreenController::BeginRenderViewFamily(FSceneViewFamily_&)_::_2_::TSTR_SetSpectatorScreenTexture97>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultSpectatorScreenController::BeginRenderViewFamily(FSceneViewFamily_&)_::_2_::TSTR_SetSpectatorScreenTexture97>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SetSpectatorScreenTexture");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"SetSpectatorScreenTexture",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultSpectatorScreenController::BeginRenderViewFamily(FSceneViewFamily_&)_::_2_::TSTR_SetSpectatorScreenTexture97>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultSpectatorScreenController::BeginRenderViewFamily(FSceneViewFamily_&)_::_2_::TSTR_SetSpectatorScreenTexture97>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SetSpectatorScreenTexture");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultSpectatorScreenController::BeginRenderViewFamily(FSceneViewFamily_&)_::_2_::TSTR_SetSpectatorScreenTexture97>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FDefaultSpectatorScreenController::BeginRenderViewFamily(FSceneViewFamily_&)_::_2_::TSTR_SetSpectatorScreenTexture97>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"SetSpectatorScreenTexture","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_SetSpectatorScr;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

