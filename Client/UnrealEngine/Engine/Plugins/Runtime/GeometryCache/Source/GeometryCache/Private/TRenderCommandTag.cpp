// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 5

// Get @ 14ca19da0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:___cdecl_FGeometryCacheSceneProxy::FGeometryCacheSceneProxy(UGeometryCacheComponent_*,TFunction<FGeomCacheTrackProxy_*___cdecl(void)>)_::_18_::TSTR_FGeometryCacheInitRayTracingGeometry187>
* __cdecl TRenderCommandTag<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::__l18::TSTR_FGeometryCacheInitRayTracingGeometry187>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FGeometryCacheSceneProxy::FGeometryCacheSceneProxy(UGeometryCacheComponent_*,TFunction<FGeomCacheTrackProxy_*___cdecl(void)>)_::_18_::TSTR_FGeometryCacheInitRayTracingGeometry187>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FGeometryCacheSceneProxy::FGeometryCacheSceneProxy(UGeometryCacheComponent_*,TFunction<FGeomCacheTrackProxy_*___cdecl(void)>)_::_18_::TSTR_FGeometryCacheInitRayTracingGeometry187>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FGeometryCacheSceneProxy::FGeometryCacheSceneProxy(UGeometryCacheComponent_*,TFunction<FGeomCacheTrackProxy_*___cdecl(void)>)_::_18_::TSTR_FGeometryCacheInitRayTracingGeometry187>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FGeometryCacheSceneProxy::FGeometryCacheSceneProxy(UGeometryCacheComponent_*,TFunction<FGeomCacheTrackProxy_*___cdecl(void)>)_::_18_::TSTR_FGeometryCacheInitRayTracingGeometry187>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FGeometryCacheInitRayTracingGeometry");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                   L"FGeometryCacheInitRayTracingGeometry","STATGROUP_RenderThreadCommands",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FGeometryCacheSceneProxy::FGeometryCacheSceneProxy(UGeometryCacheComponent_*,TFunction<FGeomCacheTrackProxy_*___cdecl(void)>)_::_18_::TSTR_FGeometryCacheInitRayTracingGeometry187>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FGeometryCacheSceneProxy::FGeometryCacheSceneProxy(UGeometryCacheComponent_*,TFunction<FGeomCacheTrackProxy_*___cdecl(void)>)_::_18_::TSTR_FGeometryCacheInitRayTracingGeometry187>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FGeometryCacheInitRayTracingGeometry");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FGeometryCacheSceneProxy::FGeometryCacheSceneProxy(UGeometryCacheComponent_*,TFunction<FGeomCacheTrackProxy_*___cdecl(void)>)_::_18_::TSTR_FGeometryCacheInitRayTracingGeometry187>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FGeometryCacheSceneProxy::FGeometryCacheSceneProxy(UGeometryCacheComponent_*,TFunction<FGeomCacheTrackProxy_*___cdecl(void)>)_::_18_::TSTR_FGeometryCacheInitRayTracingGeometry187>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FGeometryCacheInitRayTracingGeometry",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FGeometryCacheI;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14ca19f50

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:___cdecl_FGeometryCacheSceneProxy::FGeometryCacheSceneProxy(UGeometryCacheComponent_*,TFunction<FGeomCacheTrackProxy_*___cdecl(void)>)_::_14_::TSTR_FGeometryCacheInitResources154>
* __cdecl TRenderCommandTag<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::__l14::TSTR_FGeometryCacheInitResources154>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FGeometryCacheSceneProxy::FGeometryCacheSceneProxy(UGeometryCacheComponent_*,TFunction<FGeomCacheTrackProxy_*___cdecl(void)>)_::_14_::TSTR_FGeometryCacheInitResources154>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FGeometryCacheSceneProxy::FGeometryCacheSceneProxy(UGeometryCacheComponent_*,TFunction<FGeomCacheTrackProxy_*___cdecl(void)>)_::_14_::TSTR_FGeometryCacheInitResources154>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FGeometryCacheSceneProxy::FGeometryCacheSceneProxy(UGeometryCacheComponent_*,TFunction<FGeomCacheTrackProxy_*___cdecl(void)>)_::_14_::TSTR_FGeometryCacheInitResources154>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FGeometryCacheSceneProxy::FGeometryCacheSceneProxy(UGeometryCacheComponent_*,TFunction<FGeomCacheTrackProxy_*___cdecl(void)>)_::_14_::TSTR_FGeometryCacheInitResources154>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FGeometryCacheInitResources");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FGeometryCacheInitResources",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FGeometryCacheSceneProxy::FGeometryCacheSceneProxy(UGeometryCacheComponent_*,TFunction<FGeomCacheTrackProxy_*___cdecl(void)>)_::_14_::TSTR_FGeometryCacheInitResources154>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FGeometryCacheSceneProxy::FGeometryCacheSceneProxy(UGeometryCacheComponent_*,TFunction<FGeomCacheTrackProxy_*___cdecl(void)>)_::_14_::TSTR_FGeometryCacheInitResources154>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FGeometryCacheInitResources");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FGeometryCacheSceneProxy::FGeometryCacheSceneProxy(UGeometryCacheComponent_*,TFunction<FGeomCacheTrackProxy_*___cdecl(void)>)_::_14_::TSTR_FGeometryCacheInitResources154>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FGeometryCacheSceneProxy::FGeometryCacheSceneProxy(UGeometryCacheComponent_*,TFunction<FGeomCacheTrackProxy_*___cdecl(void)>)_::_14_::TSTR_FGeometryCacheInitResources154>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FGeometryCacheInitResources","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FGeometryCacheI;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14ca1a100

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_protected:_void___cdecl_UGeometryCacheComponent::JumpAnimationToTime(float,bool,bool,bool)_::_10_::TSTR_FGeometryCacheUpdateAnimation107>
* __cdecl TRenderCommandTag<`UGeometryCacheComponent::JumpAnimationToTime'::__l10::TSTR_FGeometryCacheUpdateAnimation107>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_void___cdecl_UGeometryCacheComponent::JumpAnimationToTime(float,bool,bool,bool)_::_10_::TSTR_FGeometryCacheUpdateAnimation107>_const_&___cdecl_TRenderCommandTag<_protected:_void___cdecl_UGeometryCacheComponent::JumpAnimationToTime(float,bool,bool,bool)_::_10_::TSTR_FGeometryCacheUpdateAnimation107>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_void___cdecl_UGeometryCacheComponent::JumpAnimationToTime(float,bool,bool,bool)_::_10_::TSTR_FGeometryCacheUpdateAnimation107>_const_&___cdecl_TRenderCommandTag<_protected:_void___cdecl_UGeometryCacheComponent::JumpAnimationToTime(float,bool,bool,bool)_::_10_::TSTR_FGeometryCacheUpdateAnimation107>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FGeometryCacheUpdateAnimation");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FGeometryCacheUpdateAnimation",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_void___cdecl_UGeometryCacheComponent::JumpAnimationToTime(float,bool,bool,bool)_::_10_::TSTR_FGeometryCacheUpdateAnimation107>_const_&___cdecl_TRenderCommandTag<_protected:_void___cdecl_UGeometryCacheComponent::JumpAnimationToTime(float,bool,bool,bool)_::_10_::TSTR_FGeometryCacheUpdateAnimation107>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FGeometryCacheUpdateAnimation");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_void___cdecl_UGeometryCacheComponent::JumpAnimationToTime(float,bool,bool,bool)_::_10_::TSTR_FGeometryCacheUpdateAnimation107>_const_&___cdecl_TRenderCommandTag<_protected:_void___cdecl_UGeometryCacheComponent::JumpAnimationToTime(float,bool,bool,bool)_::_10_::TSTR_FGeometryCacheUpdateAnimation107>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FGeometryCacheUpdateAnimation","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FGeometryCacheU;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14ca1a2b0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:___cdecl_FGeometryCacheSceneProxy::FGeometryCacheSceneProxy(UGeometryCacheComponent_*,TFunction<FGeomCacheTrackProxy_*___cdecl(void)>)_::_2_::TSTR_FGeometryCacheUpdateAnimation176>
* __cdecl TRenderCommandTag<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::__l2::TSTR_FGeometryCacheUpdateAnimation176>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FGeometryCacheSceneProxy::FGeometryCacheSceneProxy(UGeometryCacheComponent_*,TFunction<FGeomCacheTrackProxy_*___cdecl(void)>)_::_2_::TSTR_FGeometryCacheUpdateAnimation176>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FGeometryCacheSceneProxy::FGeometryCacheSceneProxy(UGeometryCacheComponent_*,TFunction<FGeomCacheTrackProxy_*___cdecl(void)>)_::_2_::TSTR_FGeometryCacheUpdateAnimation176>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FGeometryCacheSceneProxy::FGeometryCacheSceneProxy(UGeometryCacheComponent_*,TFunction<FGeomCacheTrackProxy_*___cdecl(void)>)_::_2_::TSTR_FGeometryCacheUpdateAnimation176>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FGeometryCacheSceneProxy::FGeometryCacheSceneProxy(UGeometryCacheComponent_*,TFunction<FGeomCacheTrackProxy_*___cdecl(void)>)_::_2_::TSTR_FGeometryCacheUpdateAnimation176>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FGeometryCacheUpdateAnimation");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FGeometryCacheUpdateAnimation",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FGeometryCacheSceneProxy::FGeometryCacheSceneProxy(UGeometryCacheComponent_*,TFunction<FGeomCacheTrackProxy_*___cdecl(void)>)_::_2_::TSTR_FGeometryCacheUpdateAnimation176>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FGeometryCacheSceneProxy::FGeometryCacheSceneProxy(UGeometryCacheComponent_*,TFunction<FGeomCacheTrackProxy_*___cdecl(void)>)_::_2_::TSTR_FGeometryCacheUpdateAnimation176>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FGeometryCacheUpdateAnimation");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FGeometryCacheSceneProxy::FGeometryCacheSceneProxy(UGeometryCacheComponent_*,TFunction<FGeomCacheTrackProxy_*___cdecl(void)>)_::_2_::TSTR_FGeometryCacheUpdateAnimation176>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FGeometryCacheSceneProxy::FGeometryCacheSceneProxy(UGeometryCacheComponent_*,TFunction<FGeomCacheTrackProxy_*___cdecl(void)>)_::_2_::TSTR_FGeometryCacheUpdateAnimation176>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FGeometryCacheUpdateAnimation","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FGeometryCacheU;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14ca1a460

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_UGeometryCacheComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_27_::TSTR_FGeometryCacheUpdateAnimation211>
* __cdecl TRenderCommandTag<`UGeometryCacheComponent::TickComponent'::__l27::TSTR_FGeometryCacheUpdateAnimation211>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UGeometryCacheComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_27_::TSTR_FGeometryCacheUpdateAnimation211>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UGeometryCacheComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_27_::TSTR_FGeometryCacheUpdateAnimation211>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UGeometryCacheComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_27_::TSTR_FGeometryCacheUpdateAnimation211>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UGeometryCacheComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_27_::TSTR_FGeometryCacheUpdateAnimation211>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FGeometryCacheUpdateAnimation");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FGeometryCacheUpdateAnimation",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UGeometryCacheComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_27_::TSTR_FGeometryCacheUpdateAnimation211>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UGeometryCacheComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_27_::TSTR_FGeometryCacheUpdateAnimation211>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FGeometryCacheUpdateAnimation");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UGeometryCacheComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_27_::TSTR_FGeometryCacheUpdateAnimation211>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UGeometryCacheComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_27_::TSTR_FGeometryCacheUpdateAnimation211>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FGeometryCacheUpdateAnimation","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FGeometryCacheU;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

