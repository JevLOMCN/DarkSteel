// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CableComponent
// Functions: 2

// Get @ 14f017830

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_UCableComponent::SendRenderDynamicData_Concurrent(void)_::_5_::TSTR_FSendCableDynamicData1251>
* __cdecl TRenderCommandTag<`UCableComponent::SendRenderDynamicData_Concurrent'::__l5::TSTR_FSendCableDynamicData1251>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UCableComponent::SendRenderDynamicData_Concurrent(void)_::_5_::TSTR_FSendCableDynamicData1251>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UCableComponent::SendRenderDynamicData_Concurrent(void)_::_5_::TSTR_FSendCableDynamicData1251>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UCableComponent::SendRenderDynamicData_Concurrent(void)_::_5_::TSTR_FSendCableDynamicData1251>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UCableComponent::SendRenderDynamicData_Concurrent(void)_::_5_::TSTR_FSendCableDynamicData1251>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FSendCableDynamicData");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FSendCableDynamicData",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UCableComponent::SendRenderDynamicData_Concurrent(void)_::_5_::TSTR_FSendCableDynamicData1251>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UCableComponent::SendRenderDynamicData_Concurrent(void)_::_5_::TSTR_FSendCableDynamicData1251>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FSendCableDynamicData");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UCableComponent::SendRenderDynamicData_Concurrent(void)_::_5_::TSTR_FSendCableDynamicData1251>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UCableComponent::SendRenderDynamicData_Concurrent(void)_::_5_::TSTR_FSendCableDynamicData1251>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FSendCableDynamicData",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FSendCableDynam;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14f0179e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:___cdecl_FCableSceneProxy::FCableSceneProxy(UCableComponent_*)_::_2_::TSTR_InitCableResources119>
* __cdecl TRenderCommandTag<`FCableSceneProxy::FCableSceneProxy'::__l2::TSTR_InitCableResources119>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FCableSceneProxy::FCableSceneProxy(class_UCableComponent*___ptr64)___ptr64'::`2'::TSTR_InitCableResources119>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FCableSceneProxy::FCableSceneProxy(UCableComponent*___ptr64)___ptr64'::`2'::TSTR_InitCableResources119>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FCableSceneProxy::FCableSceneProxy(class_UCableComponent*___ptr64)___ptr64'::`2'::TSTR_InitCableResources119>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FCableSceneProxy::FCableSceneProxy(UCableComponent*___ptr64)___ptr64'::`2'::TSTR_InitCableResources119>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FCableSceneProxy::FCableSceneProxy(class_UCableComponent*___ptr64)___ptr64'::`2'::TSTR_InitCableResources119>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FCableSceneProxy::FCableSceneProxy(UCableComponent*___ptr64)___ptr64'::`2'::TSTR_InitCableResources119>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"InitCableResources");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FCableSceneProxy::FCableSceneProxy(class_UCableComponent*___ptr64)___ptr64'::`2'::TSTR_InitCableResources119>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FCableSceneProxy::FCableSceneProxy(UCableComponent*___ptr64)___ptr64'::`2'::TSTR_InitCableResources119>::Get(void)'
                ::__l2::Stat,*pFVar1,L"InitCableResources","STATGROUP_RenderThreadCommands",
               "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FCableSceneProxy::FCableSceneProxy(class_UCableComponent*___ptr64)___ptr64'::`2'::TSTR_InitCableResources119>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FCableSceneProxy::FCableSceneProxy(UCableComponent*___ptr64)___ptr64'::`2'::TSTR_InitCableResources119>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FCableSceneProxy::FCableSceneProxy(class_UCableComponent*___ptr64)___ptr64'::`2'::TSTR_InitCableResources119>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FCableSceneProxy::FCableSceneProxy(UCableComponent*___ptr64)___ptr64'::`2'::TSTR_InitCableResources119>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FCableSceneProxy::FCableSceneProxy(class_UCableComponent*___ptr64)___ptr64'::`2'::TSTR_InitCableResources119>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FCableSceneProxy::FCableSceneProxy(UCableComponent*___ptr64)___ptr64'::`2'::TSTR_InitCableResources119>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FCableSceneProxy::FCableSceneProxy(class_UCableComponent*___ptr64)___ptr64'::`2'::TSTR_InitCableResources119>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FCableSceneProxy::FCableSceneProxy(UCableComponent*___ptr64)___ptr64'::`2'::TSTR_InitCableResources119>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"InitCableResources");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FCableSceneProxy::FCableSceneProxy(class_UCableComponent*___ptr64)___ptr64'::`2'::TSTR_InitCableResources119>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FCableSceneProxy::FCableSceneProxy(UCableComponent*___ptr64)___ptr64'::`2'::TSTR_InitCableResources119>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"InitCableResources",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"InitCableResources";
    _DAT_1553b19b8 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FCableSceneProxy::FCableSceneProxy(class_UCableComponent*___ptr64)___ptr64'::`2'::TSTR_InitCableResources119>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FCableSceneProxy::FCableSceneProxy(UCableComponent*___ptr64)___ptr64'::`2'::TSTR_InitCableResources119>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_public:___cdecl_FCableSceneProxy::FCableSceneProxy(UCableComponent_*)_::_2_::TSTR_InitCableResources119>
          *)&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FCableSceneProxy::FCableSceneProxy(class_UCableComponent*___ptr64)___ptr64'::`2'::TSTR_InitCableResources119>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FCableSceneProxy::FCableSceneProxy(UCableComponent*___ptr64)___ptr64'::`2'::TSTR_InitCableResources119>::Get(void)'
             ::__l2::Tag;
}

