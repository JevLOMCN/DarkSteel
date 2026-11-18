// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 6

// Get @ 1494ce320

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_ComputeFramework::AbortWork(FSceneInterface_const_*,UObject_*)_::_5_::TSTR_ComputeFrameworkAbortCommand117>
* __cdecl TRenderCommandTag<`ComputeFramework::AbortWork'::__l5::TSTR_ComputeFrameworkAbortCommand117>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_ComputeFramework::AbortWork(FSceneInterface_const_*,UObject_*)_::_5_::TSTR_ComputeFrameworkAbortCommand117>_const_&___cdecl_TRenderCommandTag<_void___cdecl_ComputeFramework::AbortWork(FSceneInterface_const_*,UObject_*)_::_5_::TSTR_ComputeFrameworkAbortCommand117>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_ComputeFramework::AbortWork(FSceneInterface_const_*,UObject_*)_::_5_::TSTR_ComputeFrameworkAbortCommand117>_const_&___cdecl_TRenderCommandTag<_void___cdecl_ComputeFramework::AbortWork(FSceneInterface_const_*,UObject_*)_::_5_::TSTR_ComputeFrameworkAbortCommand117>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ComputeFrameworkAbortCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ComputeFrameworkAbortCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_ComputeFramework::AbortWork(FSceneInterface_const_*,UObject_*)_::_5_::TSTR_ComputeFrameworkAbortCommand117>_const_&___cdecl_TRenderCommandTag<_void___cdecl_ComputeFramework::AbortWork(FSceneInterface_const_*,UObject_*)_::_5_::TSTR_ComputeFrameworkAbortCommand117>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ComputeFrameworkAbortCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_ComputeFramework::AbortWork(FSceneInterface_const_*,UObject_*)_::_5_::TSTR_ComputeFrameworkAbortCommand117>_const_&___cdecl_TRenderCommandTag<_void___cdecl_ComputeFramework::AbortWork(FSceneInterface_const_*,UObject_*)_::_5_::TSTR_ComputeFrameworkAbortCommand117>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"ComputeFrameworkAbortCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_ComputeFramewor;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1494ce4d0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_bool___cdecl_FComputeGraphInstance::EnqueueWork(UComputeGraph_*,FSceneInterface_const_*,FName,FName,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,UObject_*,unsigned_char)_::_2_::TSTR_ComputeFrameworkEnqueueExecutionCommand93>
* __cdecl TRenderCommandTag<`FComputeGraphInstance::EnqueueWork'::__l2::TSTR_ComputeFrameworkEnqueueExecutionCommand93>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_bool___cdecl_FComputeGraphInstance::EnqueueWork(UComputeGraph_*,FSceneInterface_const_*,FName,FName,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,UObject_*,unsigned_char)_::_2_::TSTR_ComputeFrameworkEnqueueExecutionCommand93>_const_&___cdecl_TRenderCommandTag<_public:_bool___cdecl_FComputeGraphInstance::EnqueueWork(UComputeGraph_*,FSceneInterface_const_*,FName,FName,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,UObject_*,unsigned_char)_::_2_::TSTR_ComputeFrameworkEnqueueExecutionCommand93>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_bool___cdecl_FComputeGraphInstance::EnqueueWork(UComputeGraph_*,FSceneInterface_const_*,FName,FName,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,UObject_*,unsigned_char)_::_2_::TSTR_ComputeFrameworkEnqueueExecutionCommand93>_const_&___cdecl_TRenderCommandTag<_public:_bool___cdecl_FComputeGraphInstance::EnqueueWork(UComputeGraph_*,FSceneInterface_const_*,FName,FName,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,UObject_*,unsigned_char)_::_2_::TSTR_ComputeFrameworkEnqueueExecutionCommand93>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ComputeFrameworkEnqueueExecutionCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                   L"ComputeFrameworkEnqueueExecutionCommand","STATGROUP_RenderThreadCommands",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_bool___cdecl_FComputeGraphInstance::EnqueueWork(UComputeGraph_*,FSceneInterface_const_*,FName,FName,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,UObject_*,unsigned_char)_::_2_::TSTR_ComputeFrameworkEnqueueExecutionCommand93>_const_&___cdecl_TRenderCommandTag<_public:_bool___cdecl_FComputeGraphInstance::EnqueueWork(UComputeGraph_*,FSceneInterface_const_*,FName,FName,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,UObject_*,unsigned_char)_::_2_::TSTR_ComputeFrameworkEnqueueExecutionCommand93>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ComputeFrameworkEnqueueExecutionCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_bool___cdecl_FComputeGraphInstance::EnqueueWork(UComputeGraph_*,FSceneInterface_const_*,FName,FName,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,UObject_*,unsigned_char)_::_2_::TSTR_ComputeFrameworkEnqueueExecutionCommand93>_const_&___cdecl_TRenderCommandTag<_public:_bool___cdecl_FComputeGraphInstance::EnqueueWork(UComputeGraph_*,FSceneInterface_const_*,FName,FName,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,UObject_*,unsigned_char)_::_2_::TSTR_ComputeFrameworkEnqueueExecutionCommand93>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"ComputeFrameworkEnqueueExecutionCommand",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_ComputeFramewor;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1494ce680

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_ComputeFramework::FlushWork(FSceneInterface_const_*,FName)_::_5_::TSTR_ComputeFrameworkFlushCommand91>
* __cdecl TRenderCommandTag<`ComputeFramework::FlushWork'::__l5::TSTR_ComputeFrameworkFlushCommand91>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_ComputeFramework::FlushWork(FSceneInterface_const_*,FName)_::_5_::TSTR_ComputeFrameworkFlushCommand91>_const_&___cdecl_TRenderCommandTag<_void___cdecl_ComputeFramework::FlushWork(FSceneInterface_const_*,FName)_::_5_::TSTR_ComputeFrameworkFlushCommand91>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_ComputeFramework::FlushWork(FSceneInterface_const_*,FName)_::_5_::TSTR_ComputeFrameworkFlushCommand91>_const_&___cdecl_TRenderCommandTag<_void___cdecl_ComputeFramework::FlushWork(FSceneInterface_const_*,FName)_::_5_::TSTR_ComputeFrameworkFlushCommand91>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ComputeFrameworkFlushCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ComputeFrameworkFlushCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_ComputeFramework::FlushWork(FSceneInterface_const_*,FName)_::_5_::TSTR_ComputeFrameworkFlushCommand91>_const_&___cdecl_TRenderCommandTag<_void___cdecl_ComputeFramework::FlushWork(FSceneInterface_const_*,FName)_::_5_::TSTR_ComputeFrameworkFlushCommand91>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ComputeFrameworkFlushCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_ComputeFramework::FlushWork(FSceneInterface_const_*,FName)_::_5_::TSTR_ComputeFrameworkFlushCommand91>_const_&___cdecl_TRenderCommandTag<_void___cdecl_ComputeFramework::FlushWork(FSceneInterface_const_*,FName)_::_5_::TSTR_ComputeFrameworkFlushCommand91>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"ComputeFrameworkFlushCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_ComputeFramewor;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1494ce830

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_bool___cdecl_FComputeKernelResource::CacheShaders(FComputeKernelShaderMapId_const_&,EShaderPlatform,bool,bool)_::_55_::TSTR_FSetShaderMapOnComputeKernel408>
* __cdecl TRenderCommandTag<`FComputeKernelResource::CacheShaders'::__l55::TSTR_FSetShaderMapOnComputeKernel408>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_bool___cdecl_FComputeKernelResource::CacheShaders(FComputeKernelShaderMapId_const_&,EShaderPlatform,bool,bool)_::_55_::TSTR_FSetShaderMapOnComputeKernel408>_const_&___cdecl_TRenderCommandTag<_public:_bool___cdecl_FComputeKernelResource::CacheShaders(FComputeKernelShaderMapId_const_&,EShaderPlatform,bool,bool)_::_55_::TSTR_FSetShaderMapOnComputeKernel408>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_bool___cdecl_FComputeKernelResource::CacheShaders(FComputeKernelShaderMapId_const_&,EShaderPlatform,bool,bool)_::_55_::TSTR_FSetShaderMapOnComputeKernel408>_const_&___cdecl_TRenderCommandTag<_public:_bool___cdecl_FComputeKernelResource::CacheShaders(FComputeKernelShaderMapId_const_&,EShaderPlatform,bool,bool)_::_55_::TSTR_FSetShaderMapOnComputeKernel408>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FSetShaderMapOnComputeKernel");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FSetShaderMapOnComputeKernel",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_bool___cdecl_FComputeKernelResource::CacheShaders(FComputeKernelShaderMapId_const_&,EShaderPlatform,bool,bool)_::_55_::TSTR_FSetShaderMapOnComputeKernel408>_const_&___cdecl_TRenderCommandTag<_public:_bool___cdecl_FComputeKernelResource::CacheShaders(FComputeKernelShaderMapId_const_&,EShaderPlatform,bool,bool)_::_55_::TSTR_FSetShaderMapOnComputeKernel408>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FSetShaderMapOnComputeKernel");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_bool___cdecl_FComputeKernelResource::CacheShaders(FComputeKernelShaderMapId_const_&,EShaderPlatform,bool,bool)_::_55_::TSTR_FSetShaderMapOnComputeKernel408>_const_&___cdecl_TRenderCommandTag<_public:_bool___cdecl_FComputeKernelResource::CacheShaders(FComputeKernelShaderMapId_const_&,EShaderPlatform,bool,bool)_::_55_::TSTR_FSetShaderMapOnComputeKernel408>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FSetShaderMapOnComputeKernel","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FSetShaderMapOn;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1494ce9e0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_UComputeGraph::ReleaseRenderProxy(FComputeGraphRenderProxy_*)const_::_5_::TSTR_ReleaseRenderProxy568>
* __cdecl TRenderCommandTag<`UComputeGraph::ReleaseRenderProxy'::__l5::TSTR_ReleaseRenderProxy568>::
          Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_UComputeGraph::ReleaseRenderProxy(FComputeGraphRenderProxy_*)const_::_5_::TSTR_ReleaseRenderProxy568>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_UComputeGraph::ReleaseRenderProxy(FComputeGraphRenderProxy_*)const_::_5_::TSTR_ReleaseRenderProxy568>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_UComputeGraph::ReleaseRenderProxy(FComputeGraphRenderProxy_*)const_::_5_::TSTR_ReleaseRenderProxy568>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_UComputeGraph::ReleaseRenderProxy(FComputeGraphRenderProxy_*)const_::_5_::TSTR_ReleaseRenderProxy568>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ReleaseRenderProxy");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ReleaseRenderProxy",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_UComputeGraph::ReleaseRenderProxy(FComputeGraphRenderProxy_*)const_::_5_::TSTR_ReleaseRenderProxy568>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_UComputeGraph::ReleaseRenderProxy(FComputeGraphRenderProxy_*)const_::_5_::TSTR_ReleaseRenderProxy568>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ReleaseRenderProxy");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_UComputeGraph::ReleaseRenderProxy(FComputeGraphRenderProxy_*)const_::_5_::TSTR_ReleaseRenderProxy568>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_UComputeGraph::ReleaseRenderProxy(FComputeGraphRenderProxy_*)const_::_5_::TSTR_ReleaseRenderProxy568>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ReleaseRenderProxy",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_ReleaseRenderPr;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1494ceb90

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_FComputeKernelResource::ReleaseShaderMap(void)_::_5_::TSTR_ReleaseShaderMap171>
* __cdecl TRenderCommandTag<`FComputeKernelResource::ReleaseShaderMap'::__l5::TSTR_ReleaseShaderMap171>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FComputeKernelResource::ReleaseShaderMap(void)_::_5_::TSTR_ReleaseShaderMap171>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FComputeKernelResource::ReleaseShaderMap(void)_::_5_::TSTR_ReleaseShaderMap171>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FComputeKernelResource::ReleaseShaderMap(void)_::_5_::TSTR_ReleaseShaderMap171>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FComputeKernelResource::ReleaseShaderMap(void)_::_5_::TSTR_ReleaseShaderMap171>::Get(void)_::_2_::FStatData>
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FComputeKernelResource::ReleaseShaderMap(void)_::_5_::TSTR_ReleaseShaderMap171>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FComputeKernelResource::ReleaseShaderMap(void)_::_5_::TSTR_ReleaseShaderMap171>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ReleaseShaderMap");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FComputeKernelResource::ReleaseShaderMap(void)_::_5_::TSTR_ReleaseShaderMap171>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FComputeKernelResource::ReleaseShaderMap(void)_::_5_::TSTR_ReleaseShaderMap171>::Get(void)_::_2_::FStatData>
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

