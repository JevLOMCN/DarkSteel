// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 5

// Get @ 145bccd00

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:___cdecl_FVulkanViewport::FVulkanViewport(FVulkanDevice_&,void_*,unsigned_int,unsigned_int,bool,EPixelFormat)_::_2_::TSTR_CreateSwapchain129>
* __cdecl TRenderCommandTag<`FVulkanViewport::FVulkanViewport'::__l2::TSTR_CreateSwapchain129>::Get
                    (void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FVulkanViewport::FVulkanViewport(FVulkanDevice_&,void_*,unsigned_int,unsigned_int,bool,EPixelFormat)_::_2_::TSTR_CreateSwapchain129>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FVulkanViewport::FVulkanViewport(FVulkanDevice_&,void_*,unsigned_int,unsigned_int,bool,EPixelFormat)_::_2_::TSTR_CreateSwapchain129>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FVulkanViewport::FVulkanViewport(FVulkanDevice_&,void_*,unsigned_int,unsigned_int,bool,EPixelFormat)_::_2_::TSTR_CreateSwapchain129>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FVulkanViewport::FVulkanViewport(FVulkanDevice_&,void_*,unsigned_int,unsigned_int,bool,EPixelFormat)_::_2_::TSTR_CreateSwapchain129>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"CreateSwapchain");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"CreateSwapchain",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FVulkanViewport::FVulkanViewport(FVulkanDevice_&,void_*,unsigned_int,unsigned_int,bool,EPixelFormat)_::_2_::TSTR_CreateSwapchain129>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FVulkanViewport::FVulkanViewport(FVulkanDevice_&,void_*,unsigned_int,unsigned_int,bool,EPixelFormat)_::_2_::TSTR_CreateSwapchain129>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"CreateSwapchain");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FVulkanViewport::FVulkanViewport(FVulkanDevice_&,void_*,unsigned_int,unsigned_int,bool,EPixelFormat)_::_2_::TSTR_CreateSwapchain129>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FVulkanViewport::FVulkanViewport(FVulkanDevice_&,void_*,unsigned_int,unsigned_int,bool,EPixelFormat)_::_2_::TSTR_CreateSwapchain129>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"CreateSwapchain",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_CreateSwapchain;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145bcceb0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_protected:_void___cdecl_FVulkanViewport::OnSystemResolutionChanged(unsigned_int,unsigned_int)_::_5_::TSTR_RecreateSwapchain844>
* __cdecl TRenderCommandTag<`FVulkanViewport::OnSystemResolutionChanged'::__l5::TSTR_RecreateSwapchain844>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_void___cdecl_FVulkanViewport::OnSystemResolutionChanged(unsigned_int,unsigned_int)_::_5_::TSTR_RecreateSwapchain844>_const_&___cdecl_TRenderCommandTag<_protected:_void___cdecl_FVulkanViewport::OnSystemResolutionChanged(unsigned_int,unsigned_int)_::_5_::TSTR_RecreateSwapchain844>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_void___cdecl_FVulkanViewport::OnSystemResolutionChanged(unsigned_int,unsigned_int)_::_5_::TSTR_RecreateSwapchain844>_const_&___cdecl_TRenderCommandTag<_protected:_void___cdecl_FVulkanViewport::OnSystemResolutionChanged(unsigned_int,unsigned_int)_::_5_::TSTR_RecreateSwapchain844>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"RecreateSwapchain");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"RecreateSwapchain",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_void___cdecl_FVulkanViewport::OnSystemResolutionChanged(unsigned_int,unsigned_int)_::_5_::TSTR_RecreateSwapchain844>_const_&___cdecl_TRenderCommandTag<_protected:_void___cdecl_FVulkanViewport::OnSystemResolutionChanged(unsigned_int,unsigned_int)_::_5_::TSTR_RecreateSwapchain844>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"RecreateSwapchain");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_void___cdecl_FVulkanViewport::OnSystemResolutionChanged(unsigned_int,unsigned_int)_::_5_::TSTR_RecreateSwapchain844>_const_&___cdecl_TRenderCommandTag<_protected:_void___cdecl_FVulkanViewport::OnSystemResolutionChanged(unsigned_int,unsigned_int)_::_5_::TSTR_RecreateSwapchain844>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"RecreateSwapchain",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_RecreateSwapcha;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145bcd060

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FVulkanDynamicRHI::RHIResizeViewport(FRHIViewport_*,unsigned_int,unsigned_int,bool,EPixelFormat)_::_15_::TSTR_ResizeViewport887>
* __cdecl TRenderCommandTag<`FVulkanDynamicRHI::RHIResizeViewport'::__l15::TSTR_ResizeViewport887>::
          Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FVulkanDynamicRHI::RHIResizeViewport(FRHIViewport_*,unsigned_int,unsigned_int,bool,EPixelFormat)_::_15_::TSTR_ResizeViewport887>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FVulkanDynamicRHI::RHIResizeViewport(FRHIViewport_*,unsigned_int,unsigned_int,bool,EPixelFormat)_::_15_::TSTR_ResizeViewport887>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FVulkanDynamicRHI::RHIResizeViewport(FRHIViewport_*,unsigned_int,unsigned_int,bool,EPixelFormat)_::_15_::TSTR_ResizeViewport887>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FVulkanDynamicRHI::RHIResizeViewport(FRHIViewport_*,unsigned_int,unsigned_int,bool,EPixelFormat)_::_15_::TSTR_ResizeViewport887>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ResizeViewport");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ResizeViewport",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FVulkanDynamicRHI::RHIResizeViewport(FRHIViewport_*,unsigned_int,unsigned_int,bool,EPixelFormat)_::_15_::TSTR_ResizeViewport887>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FVulkanDynamicRHI::RHIResizeViewport(FRHIViewport_*,unsigned_int,unsigned_int,bool,EPixelFormat)_::_15_::TSTR_ResizeViewport887>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ResizeViewport");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FVulkanDynamicRHI::RHIResizeViewport(FRHIViewport_*,unsigned_int,unsigned_int,bool,EPixelFormat)_::_15_::TSTR_ResizeViewport887>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FVulkanDynamicRHI::RHIResizeViewport(FRHIViewport_*,unsigned_int,unsigned_int,bool,EPixelFormat)_::_15_::TSTR_ResizeViewport887>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ResizeViewport",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_ResizeViewport;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145bcd210

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FVulkanDynamicRHI::RHIResizeViewport(FRHIViewport_*,unsigned_int,unsigned_int,bool)_::_12_::TSTR_ResizeViewport905>
* __cdecl TRenderCommandTag<`FVulkanDynamicRHI::RHIResizeViewport'::__l12::TSTR_ResizeViewport905>::
          Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FVulkanDynamicRHI::RHIResizeViewport(FRHIViewport_*,unsigned_int,unsigned_int,bool)_::_12_::TSTR_ResizeViewport905>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FVulkanDynamicRHI::RHIResizeViewport(FRHIViewport_*,unsigned_int,unsigned_int,bool)_::_12_::TSTR_ResizeViewport905>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FVulkanDynamicRHI::RHIResizeViewport(FRHIViewport_*,unsigned_int,unsigned_int,bool)_::_12_::TSTR_ResizeViewport905>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FVulkanDynamicRHI::RHIResizeViewport(FRHIViewport_*,unsigned_int,unsigned_int,bool)_::_12_::TSTR_ResizeViewport905>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ResizeViewport");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ResizeViewport",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FVulkanDynamicRHI::RHIResizeViewport(FRHIViewport_*,unsigned_int,unsigned_int,bool)_::_12_::TSTR_ResizeViewport905>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FVulkanDynamicRHI::RHIResizeViewport(FRHIViewport_*,unsigned_int,unsigned_int,bool)_::_12_::TSTR_ResizeViewport905>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ResizeViewport");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FVulkanDynamicRHI::RHIResizeViewport(FRHIViewport_*,unsigned_int,unsigned_int,bool)_::_12_::TSTR_ResizeViewport905>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FVulkanDynamicRHI::RHIResizeViewport(FRHIViewport_*,unsigned_int,unsigned_int,bool)_::_12_::TSTR_ResizeViewport905>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ResizeViewport",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_ResizeViewport;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145bcd3c0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FVulkanViewport::Tick(float)_::_12_::TSTR_UpdateVsync335>
* __cdecl TRenderCommandTag<`FVulkanViewport::Tick'::__l12::TSTR_UpdateVsync335>::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FVulkanViewport::Tick(float)_::_12_::TSTR_UpdateVsync335>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FVulkanViewport::Tick(float)_::_12_::TSTR_UpdateVsync335>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FVulkanViewport::Tick(float)_::_12_::TSTR_UpdateVsync335>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FVulkanViewport::Tick(float)_::_12_::TSTR_UpdateVsync335>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UpdateVsync");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"UpdateVsync",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FVulkanViewport::Tick(float)_::_12_::TSTR_UpdateVsync335>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FVulkanViewport::Tick(float)_::_12_::TSTR_UpdateVsync335>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UpdateVsync");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FVulkanViewport::Tick(float)_::_12_::TSTR_UpdateVsync335>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FVulkanViewport::Tick(float)_::_12_::TSTR_UpdateVsync335>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"UpdateVsync",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_UpdateVsync;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

