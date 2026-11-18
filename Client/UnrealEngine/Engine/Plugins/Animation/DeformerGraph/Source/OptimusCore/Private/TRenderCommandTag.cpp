// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 2

// Get @ 14e1b7260

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_protected:_virtual_void___cdecl_UOptimusDeformerInstance::EnqueueWork(UMeshDeformerInstance::FEnqueueWorkDesc_const_&)_::_28_::TSTR_ComputeFrameworkEnqueueFallback577>
* __cdecl TRenderCommandTag<`UOptimusDeformerInstance::EnqueueWork'::__l28::TSTR_ComputeFrameworkEnqueueFallback577>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_virtual_void___cdecl_UOptimusDeformerInstance::EnqueueWork(UMeshDeformerInstance::FEnqueueWorkDesc_const_&)_::_28_::TSTR_ComputeFrameworkEnqueueFallback577>_const_&___cdecl_TRenderCommandTag<_protected:_virtual_void___cdecl_UOptimusDeformerInstance::EnqueueWork(UMeshDeformerInstance::FEnqueueWorkDesc_const_&)_::_28_::TSTR_ComputeFrameworkEnqueueFallback577>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_virtual_void___cdecl_UOptimusDeformerInstance::EnqueueWork(UMeshDeformerInstance::FEnqueueWorkDesc_const_&)_::_28_::TSTR_ComputeFrameworkEnqueueFallback577>_const_&___cdecl_TRenderCommandTag<_protected:_virtual_void___cdecl_UOptimusDeformerInstance::EnqueueWork(UMeshDeformerInstance::FEnqueueWorkDesc_const_&)_::_28_::TSTR_ComputeFrameworkEnqueueFallback577>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ComputeFrameworkEnqueueFallback");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ComputeFrameworkEnqueueFallback",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_virtual_void___cdecl_UOptimusDeformerInstance::EnqueueWork(UMeshDeformerInstance::FEnqueueWorkDesc_const_&)_::_28_::TSTR_ComputeFrameworkEnqueueFallback577>_const_&___cdecl_TRenderCommandTag<_protected:_virtual_void___cdecl_UOptimusDeformerInstance::EnqueueWork(UMeshDeformerInstance::FEnqueueWorkDesc_const_&)_::_28_::TSTR_ComputeFrameworkEnqueueFallback577>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ComputeFrameworkEnqueueFallback");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_virtual_void___cdecl_UOptimusDeformerInstance::EnqueueWork(UMeshDeformerInstance::FEnqueueWorkDesc_const_&)_::_28_::TSTR_ComputeFrameworkEnqueueFallback577>_const_&___cdecl_TRenderCommandTag<_protected:_virtual_void___cdecl_UOptimusDeformerInstance::EnqueueWork(UMeshDeformerInstance::FEnqueueWorkDesc_const_&)_::_28_::TSTR_ComputeFrameworkEnqueueFallback577>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"ComputeFrameworkEnqueueFallback","STATGROUP_RenderThreadCommands",
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

// Get @ 14e1b7410

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_protected:_virtual_void___cdecl_UOptimusDeformerInstance::ReleaseResources(void)_::_5_::TSTR_OptimusReleaseResources502>
* __cdecl TRenderCommandTag<`UOptimusDeformerInstance::ReleaseResources'::__l5::TSTR_OptimusReleaseResources502>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_virtual_void___cdecl_UOptimusDeformerInstance::ReleaseResources(void)_::_5_::TSTR_OptimusReleaseResources502>_const_&___cdecl_TRenderCommandTag<_protected:_virtual_void___cdecl_UOptimusDeformerInstance::ReleaseResources(void)_::_5_::TSTR_OptimusReleaseResources502>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_virtual_void___cdecl_UOptimusDeformerInstance::ReleaseResources(void)_::_5_::TSTR_OptimusReleaseResources502>_const_&___cdecl_TRenderCommandTag<_protected:_virtual_void___cdecl_UOptimusDeformerInstance::ReleaseResources(void)_::_5_::TSTR_OptimusReleaseResources502>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"OptimusReleaseResources");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"OptimusReleaseResources",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_virtual_void___cdecl_UOptimusDeformerInstance::ReleaseResources(void)_::_5_::TSTR_OptimusReleaseResources502>_const_&___cdecl_TRenderCommandTag<_protected:_virtual_void___cdecl_UOptimusDeformerInstance::ReleaseResources(void)_::_5_::TSTR_OptimusReleaseResources502>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"OptimusReleaseResources");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_virtual_void___cdecl_UOptimusDeformerInstance::ReleaseResources(void)_::_5_::TSTR_OptimusReleaseResources502>_const_&___cdecl_TRenderCommandTag<_protected:_virtual_void___cdecl_UOptimusDeformerInstance::ReleaseResources(void)_::_5_::TSTR_OptimusReleaseResources502>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"OptimusReleaseResources"
                             ,"STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_OptimusReleaseR;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

