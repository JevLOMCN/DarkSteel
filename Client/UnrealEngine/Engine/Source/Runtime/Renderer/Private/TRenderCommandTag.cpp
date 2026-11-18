// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 136

// Get @ 144919660

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FViewElementPDI::RegisterDynamicResource(FDynamicPrimitiveResource_*)_::_5_::TSTR_AddViewInfoDynamicResource60>
* __cdecl TRenderCommandTag<`FViewElementPDI::RegisterDynamicResource'::__l5::TSTR_AddViewInfoDynamicResource60>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FViewElementPDI::RegisterDynamicResource(class_FDynamicPrimitiveResource*___ptr64)___ptr64'::`5'::TSTR_AddViewInfoDynamicResource60>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FViewElementPDI::RegisterDynamicResource(FDynamicPrimitiveResource*___ptr64)___ptr64'::`5'::TSTR_AddViewInfoDynamicResource60>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FViewElementPDI::RegisterDynamicResource(class_FDynamicPrimitiveResource*___ptr64)___ptr64'::`5'::TSTR_AddViewInfoDynamicResource60>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FViewElementPDI::RegisterDynamicResource(FDynamicPrimitiveResource*___ptr64)___ptr64'::`5'::TSTR_AddViewInfoDynamicResource60>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FViewElementPDI::RegisterDynamicResource(class_FDynamicPrimitiveResource*___ptr64)___ptr64'::`5'::TSTR_AddViewInfoDynamicResource60>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FViewElementPDI::RegisterDynamicResource(FDynamicPrimitiveResource*___ptr64)___ptr64'::`5'::TSTR_AddViewInfoDynamicResource60>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"AddViewInfoDynamicResource");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FViewElementPDI::RegisterDynamicResource(class_FDynamicPrimitiveResource*___ptr64)___ptr64'::`5'::TSTR_AddViewInfoDynamicResource60>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FViewElementPDI::RegisterDynamicResource(FDynamicPrimitiveResource*___ptr64)___ptr64'::`5'::TSTR_AddViewInfoDynamicResource60>::Get(void)'
                ::__l2::Stat,*pFVar1,L"AddViewInfoDynamicResource","STATGROUP_RenderThreadCommands",
               "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FViewElementPDI::RegisterDynamicResource(class_FDynamicPrimitiveResource*___ptr64)___ptr64'::`5'::TSTR_AddViewInfoDynamicResource60>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FViewElementPDI::RegisterDynamicResource(FDynamicPrimitiveResource*___ptr64)___ptr64'::`5'::TSTR_AddViewInfoDynamicResource60>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FViewElementPDI::RegisterDynamicResource(class_FDynamicPrimitiveResource*___ptr64)___ptr64'::`5'::TSTR_AddViewInfoDynamicResource60>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FViewElementPDI::RegisterDynamicResource(FDynamicPrimitiveResource*___ptr64)___ptr64'::`5'::TSTR_AddViewInfoDynamicResource60>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FViewElementPDI::RegisterDynamicResource(class_FDynamicPrimitiveResource*___ptr64)___ptr64'::`5'::TSTR_AddViewInfoDynamicResource60>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FViewElementPDI::RegisterDynamicResource(FDynamicPrimitiveResource*___ptr64)___ptr64'::`5'::TSTR_AddViewInfoDynamicResource60>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FViewElementPDI::RegisterDynamicResource(class_FDynamicPrimitiveResource*___ptr64)___ptr64'::`5'::TSTR_AddViewInfoDynamicResource60>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FViewElementPDI::RegisterDynamicResource(FDynamicPrimitiveResource*___ptr64)___ptr64'::`5'::TSTR_AddViewInfoDynamicResource60>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"AddViewInfoDynamicResource");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FViewElementPDI::RegisterDynamicResource(class_FDynamicPrimitiveResource*___ptr64)___ptr64'::`5'::TSTR_AddViewInfoDynamicResource60>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FViewElementPDI::RegisterDynamicResource(FDynamicPrimitiveResource*___ptr64)___ptr64'::`5'::TSTR_AddViewInfoDynamicResource60>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"AddViewInfoDynamicResource",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"AddViewInfoDynamicResource";
    _DAT_1550a8cc8 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FViewElementPDI::RegisterDynamicResource(class_FDynamicPrimitiveResource*___ptr64)___ptr64'::`5'::TSTR_AddViewInfoDynamicResource60>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FViewElementPDI::RegisterDynamicResource(FDynamicPrimitiveResource*___ptr64)___ptr64'::`5'::TSTR_AddViewInfoDynamicResource60>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_public:_virtual_void___cdecl_FViewElementPDI::RegisterDynamicResource(FDynamicPrimitiveResource_*)_::_5_::TSTR_AddViewInfoDynamicResource60>
          *)&`public:_static_class_TRenderCommandTag<struct_`public:_virtual_void___cdecl_FViewElementPDI::RegisterDynamicResource(class_FDynamicPrimitiveResource*___ptr64)___ptr64'::`5'::TSTR_AddViewInfoDynamicResource60>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_void___cdecl_FViewElementPDI::RegisterDynamicResource(FDynamicPrimitiveResource*___ptr64)___ptr64'::`5'::TSTR_AddViewInfoDynamicResource60>::Get(void)'
             ::__l2::Tag;
}

// Get @ 144919820

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_int___cdecl_FViewElementPDI::DrawMesh(FMeshBatch_const_&)_::_16_::TSTR_FCopyDynamicPrimitiveShaderData225>
* __cdecl TRenderCommandTag<`FViewElementPDI::DrawMesh'::__l16::TSTR_FCopyDynamicPrimitiveShaderData225>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:_virtual_int___cdecl_FViewElementPDI::DrawMesh(struct_FMeshBatch_const&___ptr64)___ptr64'::`16'::TSTR_FCopyDynamicPrimitiveShaderData225>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_int___cdecl_FViewElementPDI::DrawMesh(FMeshBatch_const&___ptr64)___ptr64'::`16'::TSTR_FCopyDynamicPrimitiveShaderData225>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:_virtual_int___cdecl_FViewElementPDI::DrawMesh(struct_FMeshBatch_const&___ptr64)___ptr64'::`16'::TSTR_FCopyDynamicPrimitiveShaderData225>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_int___cdecl_FViewElementPDI::DrawMesh(FMeshBatch_const&___ptr64)___ptr64'::`16'::TSTR_FCopyDynamicPrimitiveShaderData225>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`public:_virtual_int___cdecl_FViewElementPDI::DrawMesh(struct_FMeshBatch_const&___ptr64)___ptr64'::`16'::TSTR_FCopyDynamicPrimitiveShaderData225>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_int___cdecl_FViewElementPDI::DrawMesh(FMeshBatch_const&___ptr64)___ptr64'::`16'::TSTR_FCopyDynamicPrimitiveShaderData225>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"FCopyDynamicPrimitiveShaderData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`public:_virtual_int___cdecl_FViewElementPDI::DrawMesh(struct_FMeshBatch_const&___ptr64)___ptr64'::`16'::TSTR_FCopyDynamicPrimitiveShaderData225>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_int___cdecl_FViewElementPDI::DrawMesh(FMeshBatch_const&___ptr64)___ptr64'::`16'::TSTR_FCopyDynamicPrimitiveShaderData225>::Get(void)'
                ::__l2::Stat,*pFVar1,L"FCopyDynamicPrimitiveShaderData",
               "STATGROUP_RenderThreadCommands","STATCAT_Advanced",L"Render Thread Commands",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:_virtual_int___cdecl_FViewElementPDI::DrawMesh(struct_FMeshBatch_const&___ptr64)___ptr64'::`16'::TSTR_FCopyDynamicPrimitiveShaderData225>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_int___cdecl_FViewElementPDI::DrawMesh(FMeshBatch_const&___ptr64)___ptr64'::`16'::TSTR_FCopyDynamicPrimitiveShaderData225>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:_virtual_int___cdecl_FViewElementPDI::DrawMesh(struct_FMeshBatch_const&___ptr64)___ptr64'::`16'::TSTR_FCopyDynamicPrimitiveShaderData225>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_int___cdecl_FViewElementPDI::DrawMesh(FMeshBatch_const&___ptr64)___ptr64'::`16'::TSTR_FCopyDynamicPrimitiveShaderData225>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:_virtual_int___cdecl_FViewElementPDI::DrawMesh(struct_FMeshBatch_const&___ptr64)___ptr64'::`16'::TSTR_FCopyDynamicPrimitiveShaderData225>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_int___cdecl_FViewElementPDI::DrawMesh(FMeshBatch_const&___ptr64)___ptr64'::`16'::TSTR_FCopyDynamicPrimitiveShaderData225>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`public:_virtual_int___cdecl_FViewElementPDI::DrawMesh(struct_FMeshBatch_const&___ptr64)___ptr64'::`16'::TSTR_FCopyDynamicPrimitiveShaderData225>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_int___cdecl_FViewElementPDI::DrawMesh(FMeshBatch_const&___ptr64)___ptr64'::`16'::TSTR_FCopyDynamicPrimitiveShaderData225>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"FCopyDynamicPrimitiveShaderData");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`public:_virtual_int___cdecl_FViewElementPDI::DrawMesh(struct_FMeshBatch_const&___ptr64)___ptr64'::`16'::TSTR_FCopyDynamicPrimitiveShaderData225>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_int___cdecl_FViewElementPDI::DrawMesh(FMeshBatch_const&___ptr64)___ptr64'::`16'::TSTR_FCopyDynamicPrimitiveShaderData225>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"FCopyDynamicPrimitiveShaderData",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"FCopyDynamicPrimitiveShaderData";
    _DAT_1550a8c98 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:_virtual_int___cdecl_FViewElementPDI::DrawMesh(struct_FMeshBatch_const&___ptr64)___ptr64'::`16'::TSTR_FCopyDynamicPrimitiveShaderData225>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_int___cdecl_FViewElementPDI::DrawMesh(FMeshBatch_const&___ptr64)___ptr64'::`16'::TSTR_FCopyDynamicPrimitiveShaderData225>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_public:_virtual_int___cdecl_FViewElementPDI::DrawMesh(FMeshBatch_const_&)_::_16_::TSTR_FCopyDynamicPrimitiveShaderData225>
          *)&`public:_static_class_TRenderCommandTag<struct_`public:_virtual_int___cdecl_FViewElementPDI::DrawMesh(struct_FMeshBatch_const&___ptr64)___ptr64'::`16'::TSTR_FCopyDynamicPrimitiveShaderData225>_const&___ptr64___cdecl_TRenderCommandTag<`public:_virtual_int___cdecl_FViewElementPDI::DrawMesh(FMeshBatch_const&___ptr64)___ptr64'::`16'::TSTR_FCopyDynamicPrimitiveShaderData225>::Get(void)'
             ::__l2::Tag;
}

// Get @ 1449199e0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_RequestGlobalDistanceFieldReadback_GameThread(FGlobalDistanceFieldReadback_*)_::_2_::TSTR_RequestGlobalDistanceFieldReadback530>
* __cdecl TRenderCommandTag<`RequestGlobalDistanceFieldReadback_GameThread'::__l2::TSTR_RequestGlobalDistanceFieldReadback530>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_RequestGlobalDistanceFieldReadback_GameThread(FGlobalDistanceFieldReadback_*)_::_2_::TSTR_RequestGlobalDistanceFieldReadback530>_const_&___cdecl_TRenderCommandTag<_void___cdecl_RequestGlobalDistanceFieldReadback_GameThread(FGlobalDistanceFieldReadback_*)_::_2_::TSTR_RequestGlobalDistanceFieldReadback530>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_RequestGlobalDistanceFieldReadback_GameThread(FGlobalDistanceFieldReadback_*)_::_2_::TSTR_RequestGlobalDistanceFieldReadback530>_const_&___cdecl_TRenderCommandTag<_void___cdecl_RequestGlobalDistanceFieldReadback_GameThread(FGlobalDistanceFieldReadback_*)_::_2_::TSTR_RequestGlobalDistanceFieldReadback530>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"RequestGlobalDistanceFieldReadback");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                   L"RequestGlobalDistanceFieldReadback","STATGROUP_RenderThreadCommands",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_RequestGlobalDistanceFieldReadback_GameThread(FGlobalDistanceFieldReadback_*)_::_2_::TSTR_RequestGlobalDistanceFieldReadback530>_const_&___cdecl_TRenderCommandTag<_void___cdecl_RequestGlobalDistanceFieldReadback_GameThread(FGlobalDistanceFieldReadback_*)_::_2_::TSTR_RequestGlobalDistanceFieldReadback530>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"RequestGlobalDistanceFieldReadback");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_RequestGlobalDistanceFieldReadback_GameThread(FGlobalDistanceFieldReadback_*)_::_2_::TSTR_RequestGlobalDistanceFieldReadback530>_const_&___cdecl_TRenderCommandTag<_void___cdecl_RequestGlobalDistanceFieldReadback_GameThread(FGlobalDistanceFieldReadback_*)_::_2_::TSTR_RequestGlobalDistanceFieldReadback530>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"RequestGlobalDistanceFieldReadback","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_RequestGlobalDi;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 144c41d90

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddLocalFogVolume(FLocalFogVolumeSceneProxy_*)_::_2_::TSTR_FAddLocalFogVolumeCommand264>
* __cdecl TRenderCommandTag<`FScene::AddLocalFogVolume'::__l2::TSTR_FAddLocalFogVolumeCommand264>::
          Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddLocalFogVolume(FLocalFogVolumeSceneProxy_*)_::_2_::TSTR_FAddLocalFogVolumeCommand264>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddLocalFogVolume(FLocalFogVolumeSceneProxy_*)_::_2_::TSTR_FAddLocalFogVolumeCommand264>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddLocalFogVolume(FLocalFogVolumeSceneProxy_*)_::_2_::TSTR_FAddLocalFogVolumeCommand264>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddLocalFogVolume(FLocalFogVolumeSceneProxy_*)_::_2_::TSTR_FAddLocalFogVolumeCommand264>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FAddLocalFogVolumeCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FAddLocalFogVolumeCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddLocalFogVolume(FLocalFogVolumeSceneProxy_*)_::_2_::TSTR_FAddLocalFogVolumeCommand264>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddLocalFogVolume(FLocalFogVolumeSceneProxy_*)_::_2_::TSTR_FAddLocalFogVolumeCommand264>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FAddLocalFogVolumeCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddLocalFogVolume(FLocalFogVolumeSceneProxy_*)_::_2_::TSTR_FAddLocalFogVolumeCommand264>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddLocalFogVolume(FLocalFogVolumeSceneProxy_*)_::_2_::TSTR_FAddLocalFogVolumeCommand264>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FAddLocalFogVolumeCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FAddLocalFogVol;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 144c41f40

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveLocalFogVolume(FLocalFogVolumeSceneProxy_*)_::_2_::TSTR_FRemoveLocalFogVolumeCommand277>
* __cdecl TRenderCommandTag<`FScene::RemoveLocalFogVolume'::__l2::TSTR_FRemoveLocalFogVolumeCommand277>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveLocalFogVolume(FLocalFogVolumeSceneProxy_*)_::_2_::TSTR_FRemoveLocalFogVolumeCommand277>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveLocalFogVolume(FLocalFogVolumeSceneProxy_*)_::_2_::TSTR_FRemoveLocalFogVolumeCommand277>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveLocalFogVolume(FLocalFogVolumeSceneProxy_*)_::_2_::TSTR_FRemoveLocalFogVolumeCommand277>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveLocalFogVolume(FLocalFogVolumeSceneProxy_*)_::_2_::TSTR_FRemoveLocalFogVolumeCommand277>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FRemoveLocalFogVolumeCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FRemoveLocalFogVolumeCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveLocalFogVolume(FLocalFogVolumeSceneProxy_*)_::_2_::TSTR_FRemoveLocalFogVolumeCommand277>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveLocalFogVolume(FLocalFogVolumeSceneProxy_*)_::_2_::TSTR_FRemoveLocalFogVolumeCommand277>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FRemoveLocalFogVolumeCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveLocalFogVolume(FLocalFogVolumeSceneProxy_*)_::_2_::TSTR_FRemoveLocalFogVolumeCommand277>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveLocalFogVolume(FLocalFogVolumeSceneProxy_*)_::_2_::TSTR_FRemoveLocalFogVolumeCommand277>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FRemoveLocalFogVolumeCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FRemoveLocalFog;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1450ce2e0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddPlanarReflection(UPlanarReflectionComponent_*)_::_2_::TSTR_FAddPlanarReflectionCommand649>
* __cdecl TRenderCommandTag<`FScene::AddPlanarReflection'::__l2::TSTR_FAddPlanarReflectionCommand649>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddPlanarReflection(UPlanarReflectionComponent_*)_::_2_::TSTR_FAddPlanarReflectionCommand649>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddPlanarReflection(UPlanarReflectionComponent_*)_::_2_::TSTR_FAddPlanarReflectionCommand649>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddPlanarReflection(UPlanarReflectionComponent_*)_::_2_::TSTR_FAddPlanarReflectionCommand649>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddPlanarReflection(UPlanarReflectionComponent_*)_::_2_::TSTR_FAddPlanarReflectionCommand649>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FAddPlanarReflectionCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FAddPlanarReflectionCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddPlanarReflection(UPlanarReflectionComponent_*)_::_2_::TSTR_FAddPlanarReflectionCommand649>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddPlanarReflection(UPlanarReflectionComponent_*)_::_2_::TSTR_FAddPlanarReflectionCommand649>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FAddPlanarReflectionCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddPlanarReflection(UPlanarReflectionComponent_*)_::_2_::TSTR_FAddPlanarReflectionCommand649>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddPlanarReflection(UPlanarReflectionComponent_*)_::_2_::TSTR_FAddPlanarReflectionCommand649>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FAddPlanarReflectionCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FAddPlanarRefle;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1450ce490

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemovePlanarReflection(UPlanarReflectionComponent_*)_::_2_::TSTR_FRemovePlanarReflectionCommand664>
* __cdecl TRenderCommandTag<`FScene::RemovePlanarReflection'::__l2::TSTR_FRemovePlanarReflectionCommand664>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemovePlanarReflection(UPlanarReflectionComponent_*)_::_2_::TSTR_FRemovePlanarReflectionCommand664>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemovePlanarReflection(UPlanarReflectionComponent_*)_::_2_::TSTR_FRemovePlanarReflectionCommand664>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemovePlanarReflection(UPlanarReflectionComponent_*)_::_2_::TSTR_FRemovePlanarReflectionCommand664>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemovePlanarReflection(UPlanarReflectionComponent_*)_::_2_::TSTR_FRemovePlanarReflectionCommand664>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FRemovePlanarReflectionCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FRemovePlanarReflectionCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemovePlanarReflection(UPlanarReflectionComponent_*)_::_2_::TSTR_FRemovePlanarReflectionCommand664>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemovePlanarReflection(UPlanarReflectionComponent_*)_::_2_::TSTR_FRemovePlanarReflectionCommand664>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FRemovePlanarReflectionCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemovePlanarReflection(UPlanarReflectionComponent_*)_::_2_::TSTR_FRemovePlanarReflectionCommand664>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemovePlanarReflection(UPlanarReflectionComponent_*)_::_2_::TSTR_FRemovePlanarReflectionCommand664>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FRemovePlanarReflectionCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FRemovePlanarRe;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1450ce640

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdatePlanarReflectionTransform(UPlanarReflectionComponent_*)_::_2_::TSTR_FUpdatePlanarReflectionCommand679>
* __cdecl TRenderCommandTag<`FScene::UpdatePlanarReflectionTransform'::__l2::TSTR_FUpdatePlanarReflectionCommand679>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdatePlanarReflectionTransform(UPlanarReflectionComponent_*)_::_2_::TSTR_FUpdatePlanarReflectionCommand679>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdatePlanarReflectionTransform(UPlanarReflectionComponent_*)_::_2_::TSTR_FUpdatePlanarReflectionCommand679>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdatePlanarReflectionTransform(UPlanarReflectionComponent_*)_::_2_::TSTR_FUpdatePlanarReflectionCommand679>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdatePlanarReflectionTransform(UPlanarReflectionComponent_*)_::_2_::TSTR_FUpdatePlanarReflectionCommand679>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FUpdatePlanarReflectionCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FUpdatePlanarReflectionCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdatePlanarReflectionTransform(UPlanarReflectionComponent_*)_::_2_::TSTR_FUpdatePlanarReflectionCommand679>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdatePlanarReflectionTransform(UPlanarReflectionComponent_*)_::_2_::TSTR_FUpdatePlanarReflectionCommand679>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FUpdatePlanarReflectionCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdatePlanarReflectionTransform(UPlanarReflectionComponent_*)_::_2_::TSTR_FUpdatePlanarReflectionCommand679>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdatePlanarReflectionTransform(UPlanarReflectionComponent_*)_::_2_::TSTR_FUpdatePlanarReflectionCommand679>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FUpdatePlanarReflectionCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FUpdatePlanarRe;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1450ce7f0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_PreparePathTracingRTPSO(void)_::_2_::TSTR_PreparePathTracingRTPSO3365>
* __cdecl TRenderCommandTag<`PreparePathTracingRTPSO'::__l2::TSTR_PreparePathTracingRTPSO3365>::Get
                    (void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_PreparePathTracingRTPSO(void)_::_2_::TSTR_PreparePathTracingRTPSO3365>_const_&___cdecl_TRenderCommandTag<_void___cdecl_PreparePathTracingRTPSO(void)_::_2_::TSTR_PreparePathTracingRTPSO3365>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_PreparePathTracingRTPSO(void)_::_2_::TSTR_PreparePathTracingRTPSO3365>_const_&___cdecl_TRenderCommandTag<_void___cdecl_PreparePathTracingRTPSO(void)_::_2_::TSTR_PreparePathTracingRTPSO3365>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"PreparePathTracingRTPSO");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"PreparePathTracingRTPSO",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_PreparePathTracingRTPSO(void)_::_2_::TSTR_PreparePathTracingRTPSO3365>_const_&___cdecl_TRenderCommandTag<_void___cdecl_PreparePathTracingRTPSO(void)_::_2_::TSTR_PreparePathTracingRTPSO3365>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"PreparePathTracingRTPSO");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_PreparePathTracingRTPSO(void)_::_2_::TSTR_PreparePathTracingRTPSO3365>_const_&___cdecl_TRenderCommandTag<_void___cdecl_PreparePathTracingRTPSO(void)_::_2_::TSTR_PreparePathTracingRTPSO3365>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"PreparePathTracingRTPSO"
                             ,"STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_PreparePathTrac;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1450ce9a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:___cdecl__public:_void___cdecl_ISceneRenderBuilder::AddRenderCommand(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_&&)_::_2_::<lambda_1>::operator()(void)_::_2_::TSTR_SceneRenderBuilder_AddRenderCommand79>
* __cdecl TRenderCommandTag<``ISceneRenderBuilder::AddRenderCommand'::__l2::<lambda_1>::operator()'::__l2::TSTR_SceneRenderBuilder_AddRenderCommand79>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_`public:_void___cdecl_ISceneRenderBuilder::AddRenderCommand(class_TUniqueFunction<void___cdecl(class_FRHICommandListImmediate&___ptr64)>&&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)___ptr64'::`2'::TSTR_SceneRenderBuilder_AddRenderCommand79>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_`public:_void___cdecl_ISceneRenderBuilder::AddRenderCommand(TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>&&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)___ptr64'::`2'::TSTR_SceneRenderBuilder_AddRenderCommand79>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_`public:_void___cdecl_ISceneRenderBuilder::AddRenderCommand(class_TUniqueFunction<void___cdecl(class_FRHICommandListImmediate&___ptr64)>&&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)___ptr64'::`2'::TSTR_SceneRenderBuilder_AddRenderCommand79>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_`public:_void___cdecl_ISceneRenderBuilder::AddRenderCommand(TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>&&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)___ptr64'::`2'::TSTR_SceneRenderBuilder_AddRenderCommand79>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_`public:_void___cdecl_ISceneRenderBuilder::AddRenderCommand(class_TUniqueFunction<void___cdecl(class_FRHICommandListImmediate&___ptr64)>&&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)___ptr64'::`2'::TSTR_SceneRenderBuilder_AddRenderCommand79>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_`public:_void___cdecl_ISceneRenderBuilder::AddRenderCommand(TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>&&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)___ptr64'::`2'::TSTR_SceneRenderBuilder_AddRenderCommand79>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"SceneRenderBuilder_AddRenderCommand");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_`public:_void___cdecl_ISceneRenderBuilder::AddRenderCommand(class_TUniqueFunction<void___cdecl(class_FRHICommandListImmediate&___ptr64)>&&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)___ptr64'::`2'::TSTR_SceneRenderBuilder_AddRenderCommand79>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_`public:_void___cdecl_ISceneRenderBuilder::AddRenderCommand(TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>&&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)___ptr64'::`2'::TSTR_SceneRenderBuilder_AddRenderCommand79>::Get(void)'
                ::__l2::Stat,*pFVar1,L"SceneRenderBuilder_AddRenderCommand",
               "STATGROUP_RenderThreadCommands","STATCAT_Advanced",L"Render Thread Commands",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_`public:_void___cdecl_ISceneRenderBuilder::AddRenderCommand(class_TUniqueFunction<void___cdecl(class_FRHICommandListImmediate&___ptr64)>&&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)___ptr64'::`2'::TSTR_SceneRenderBuilder_AddRenderCommand79>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_`public:_void___cdecl_ISceneRenderBuilder::AddRenderCommand(TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>&&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)___ptr64'::`2'::TSTR_SceneRenderBuilder_AddRenderCommand79>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_`public:_void___cdecl_ISceneRenderBuilder::AddRenderCommand(class_TUniqueFunction<void___cdecl(class_FRHICommandListImmediate&___ptr64)>&&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)___ptr64'::`2'::TSTR_SceneRenderBuilder_AddRenderCommand79>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_`public:_void___cdecl_ISceneRenderBuilder::AddRenderCommand(TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>&&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)___ptr64'::`2'::TSTR_SceneRenderBuilder_AddRenderCommand79>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_`public:_void___cdecl_ISceneRenderBuilder::AddRenderCommand(class_TUniqueFunction<void___cdecl(class_FRHICommandListImmediate&___ptr64)>&&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)___ptr64'::`2'::TSTR_SceneRenderBuilder_AddRenderCommand79>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_`public:_void___cdecl_ISceneRenderBuilder::AddRenderCommand(TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>&&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)___ptr64'::`2'::TSTR_SceneRenderBuilder_AddRenderCommand79>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_`public:_void___cdecl_ISceneRenderBuilder::AddRenderCommand(class_TUniqueFunction<void___cdecl(class_FRHICommandListImmediate&___ptr64)>&&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)___ptr64'::`2'::TSTR_SceneRenderBuilder_AddRenderCommand79>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_`public:_void___cdecl_ISceneRenderBuilder::AddRenderCommand(TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>&&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)___ptr64'::`2'::TSTR_SceneRenderBuilder_AddRenderCommand79>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"SceneRenderBuilder_AddRenderCommand");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_`public:_void___cdecl_ISceneRenderBuilder::AddRenderCommand(class_TUniqueFunction<void___cdecl(class_FRHICommandListImmediate&___ptr64)>&&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)___ptr64'::`2'::TSTR_SceneRenderBuilder_AddRenderCommand79>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_`public:_void___cdecl_ISceneRenderBuilder::AddRenderCommand(TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>&&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)___ptr64'::`2'::TSTR_SceneRenderBuilder_AddRenderCommand79>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"SceneRenderBuilder_AddRenderCommand",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"SceneRenderBuilder_AddRenderCommand";
    _DAT_1551045e0 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_`public:_void___cdecl_ISceneRenderBuilder::AddRenderCommand(class_TUniqueFunction<void___cdecl(class_FRHICommandListImmediate&___ptr64)>&&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)___ptr64'::`2'::TSTR_SceneRenderBuilder_AddRenderCommand79>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_`public:_void___cdecl_ISceneRenderBuilder::AddRenderCommand(TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>&&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)___ptr64'::`2'::TSTR_SceneRenderBuilder_AddRenderCommand79>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_public:___cdecl__public:_void___cdecl_ISceneRenderBuilder::AddRenderCommand(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_&&)_::_2_::<lambda_1>::operator()(void)_::_2_::TSTR_SceneRenderBuilder_AddRenderCommand79>
          *)&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_`public:_void___cdecl_ISceneRenderBuilder::AddRenderCommand(class_TUniqueFunction<void___cdecl(class_FRHICommandListImmediate&___ptr64)>&&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)___ptr64'::`2'::TSTR_SceneRenderBuilder_AddRenderCommand79>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_`public:_void___cdecl_ISceneRenderBuilder::AddRenderCommand(TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>&&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)___ptr64'::`2'::TSTR_SceneRenderBuilder_AddRenderCommand79>::Get(void)'
             ::__l2::Tag;
}

// Get @ 145323f80

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_RefreshRayTracingInstancesSinkFunction(void)_::_5_::TSTR_RefreshRayTracingInstancesCmd166>
* __cdecl TRenderCommandTag<`RefreshRayTracingInstancesSinkFunction'::__l5::TSTR_RefreshRayTracingInstancesCmd166>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_RefreshRayTracingInstancesSinkFunction(void)_::_5_::TSTR_RefreshRayTracingInstancesCmd166>_const_&___cdecl_TRenderCommandTag<_void___cdecl_RefreshRayTracingInstancesSinkFunction(void)_::_5_::TSTR_RefreshRayTracingInstancesCmd166>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::Stat = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_RefreshRayTracingInstancesSinkFunction(void)_::_5_::TSTR_RefreshRayTracingInstancesCmd166>_const_&___cdecl_TRenderCommandTag<_void___cdecl_RefreshRayTracingInstancesSinkFunction(void)_::_5_::TSTR_RefreshRayTracingInstancesCmd166>::Get(void)_::_2_::FStatData>
              )0x0;
    pFVar1 = ::FName::FName(&local_res8,"RefreshRayTracingInstancesCmd");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"RefreshRayTracingInstancesCmd",
               "STATGROUP_RenderThreadCommands","STATCAT_Advanced",L"Render Thread Commands",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar3 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    FVar2 = ::Stat;
    if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_RefreshRayTracingInstancesSinkFunction(void)_::_5_::TSTR_RefreshRayTracingInstancesCmd166>_const_&___cdecl_TRenderCommandTag<_void___cdecl_RefreshRayTracingInstancesSinkFunction(void)_::_5_::TSTR_RefreshRayTracingInstancesCmd166>::Get(void)_::_2_::FStatData>
                   )0x0) {
      pFVar1 = ::FName::FName(&local_res8,"RefreshRayTracingInstancesCmd");
      FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_RefreshRayTracingInstancesSinkFunction(void)_::_5_::TSTR_RefreshRayTracingInstancesCmd166>_const_&___cdecl_TRenderCommandTag<_void___cdecl_RefreshRayTracingInstancesSinkFunction(void)_::_5_::TSTR_RefreshRayTracingInstancesCmd166>::Get(void)_::_2_::FStatData>
               )FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                           L"RefreshRayTracingInstancesCmd","STATGROUP_RenderThreadCommands",
                           "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                           false,MCR_Invalid);
    }
    ::Tag._0_8_ = u_RefreshRayTraci;
    ::Tag._8_8_ = FVar2;
    _Init_thread_footer(&::_TSS1);
  }
  return &::Tag;
}

// Get @ 14538b010

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_5_::TSTR_BeginCubemapCapture1286>
* __cdecl TRenderCommandTag<`CaptureSceneIntoScratchCubemap'::__l5::TSTR_BeginCubemapCapture1286>::
          Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_5_::TSTR_BeginCubemapCapture1286>_const_&___cdecl_TRenderCommandTag<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_5_::TSTR_BeginCubemapCapture1286>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_5_::TSTR_BeginCubemapCapture1286>_const_&___cdecl_TRenderCommandTag<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_5_::TSTR_BeginCubemapCapture1286>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"BeginCubemapCapture");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"BeginCubemapCapture",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_5_::TSTR_BeginCubemapCapture1286>_const_&___cdecl_TRenderCommandTag<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_5_::TSTR_BeginCubemapCapture1286>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"BeginCubemapCapture");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_5_::TSTR_BeginCubemapCapture1286>_const_&___cdecl_TRenderCommandTag<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_5_::TSTR_BeginCubemapCapture1286>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"BeginCubemapCapture",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_BeginCubemapCap;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14538b1c0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_FScene::UpdateAllReflectionCaptures(wchar_t_const_*,int,bool,bool,bool)_::_5_::TSTR_CaptureCommand1033>
* __cdecl TRenderCommandTag<`FScene::UpdateAllReflectionCaptures'::__l5::TSTR_CaptureCommand1033>::
          Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FScene::UpdateAllReflectionCaptures(wchar_t_const_*,int,bool,bool,bool)_::_5_::TSTR_CaptureCommand1033>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FScene::UpdateAllReflectionCaptures(wchar_t_const_*,int,bool,bool,bool)_::_5_::TSTR_CaptureCommand1033>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FScene::UpdateAllReflectionCaptures(wchar_t_const_*,int,bool,bool,bool)_::_5_::TSTR_CaptureCommand1033>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FScene::UpdateAllReflectionCaptures(wchar_t_const_*,int,bool,bool,bool)_::_5_::TSTR_CaptureCommand1033>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"CaptureCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"CaptureCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FScene::UpdateAllReflectionCaptures(wchar_t_const_*,int,bool,bool,bool)_::_5_::TSTR_CaptureCommand1033>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FScene::UpdateAllReflectionCaptures(wchar_t_const_*,int,bool,bool,bool)_::_5_::TSTR_CaptureCommand1033>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"CaptureCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FScene::UpdateAllReflectionCaptures(wchar_t_const_*,int,bool,bool,bool)_::_5_::TSTR_CaptureCommand1033>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FScene::UpdateAllReflectionCaptures(wchar_t_const_*,int,bool,bool,bool)_::_5_::TSTR_CaptureCommand1033>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"CaptureCommand",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_CaptureCommand;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14538b370

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSkyCaptureContents(USkyLightComponent_const_*,bool,UTextureCube_*,FTexture_*,float_&,TSHVectorRGB<3>_&,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>_*,FLinearColor_*)_::_15_::TSTR_CopyCubemapCommand1783>
* __cdecl TRenderCommandTag<`FScene::UpdateSkyCaptureContents'::__l15::TSTR_CopyCubemapCommand1783>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSkyCaptureContents(USkyLightComponent_const_*,bool,UTextureCube_*,FTexture_*,float_&,TSHVectorRGB<3>_&,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>_*,FLinearColor_*)_::_15_::TSTR_CopyCubemapCommand1783>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSkyCaptureContents(USkyLightComponent_const_*,bool,UTextureCube_*,FTexture_*,float_&,TSHVectorRGB<3>_&,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>_*,FLinearColor_*)_::_15_::TSTR_CopyCubemapCommand1783>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSkyCaptureContents(USkyLightComponent_const_*,bool,UTextureCube_*,FTexture_*,float_&,TSHVectorRGB<3>_&,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>_*,FLinearColor_*)_::_15_::TSTR_CopyCubemapCommand1783>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSkyCaptureContents(USkyLightComponent_const_*,bool,UTextureCube_*,FTexture_*,float_&,TSHVectorRGB<3>_&,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>_*,FLinearColor_*)_::_15_::TSTR_CopyCubemapCommand1783>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"CopyCubemapCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"CopyCubemapCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSkyCaptureContents(USkyLightComponent_const_*,bool,UTextureCube_*,FTexture_*,float_&,TSHVectorRGB<3>_&,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>_*,FLinearColor_*)_::_15_::TSTR_CopyCubemapCommand1783>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSkyCaptureContents(USkyLightComponent_const_*,bool,UTextureCube_*,FTexture_*,float_&,TSHVectorRGB<3>_&,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>_*,FLinearColor_*)_::_15_::TSTR_CopyCubemapCommand1783>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"CopyCubemapCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSkyCaptureContents(USkyLightComponent_const_*,bool,UTextureCube_*,FTexture_*,float_&,TSHVectorRGB<3>_&,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>_*,FLinearColor_*)_::_15_::TSTR_CopyCubemapCommand1783>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSkyCaptureContents(USkyLightComponent_const_*,bool,UTextureCube_*,FTexture_*,float_&,TSHVectorRGB<3>_&,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>_*,FLinearColor_*)_::_15_::TSTR_CopyCubemapCommand1783>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"CopyCubemapCommand",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_CopyCubemapComm;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14538b520

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:___cdecl_TRenderThreadStruct<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::FDummyRenderTarget>::~TRenderThreadStruct<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::FDummyRenderTarget>(void)_::_2_::TSTR_DeleteStruct1255>
* __cdecl TRenderCommandTag<`TRenderThreadStruct<`CaptureSceneIntoScratchCubemap'::__l2::FDummyRenderTarget>::~TRenderThreadStruct<`CaptureSceneIntoScratchCubemap'::__l2::FDummyRenderTarget>'::__l2::TSTR_DeleteStruct1255>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_TRenderThreadStruct<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::FDummyRenderTarget>::~TRenderThreadStruct<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::FDummyRenderTarget>(void)_::_2_::TSTR_DeleteStruct1255>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_TRenderThreadStruct<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::FDummyRenderTarget>::~TRenderThreadStruct<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::FDummyRenderTarget>(void)_::_2_::TSTR_DeleteStruct1255>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_TRenderThreadStruct<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::FDummyRenderTarget>::~TRenderThreadStruct<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::FDummyRenderTarget>(void)_::_2_::TSTR_DeleteStruct1255>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_TRenderThreadStruct<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::FDummyRenderTarget>::~TRenderThreadStruct<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::FDummyRenderTarget>(void)_::_2_::TSTR_DeleteStruct1255>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"DeleteStruct");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"DeleteStruct",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_TRenderThreadStruct<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::FDummyRenderTarget>::~TRenderThreadStruct<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::FDummyRenderTarget>(void)_::_2_::TSTR_DeleteStruct1255>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_TRenderThreadStruct<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::FDummyRenderTarget>::~TRenderThreadStruct<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::FDummyRenderTarget>(void)_::_2_::TSTR_DeleteStruct1255>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"DeleteStruct");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_TRenderThreadStruct<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::FDummyRenderTarget>::~TRenderThreadStruct<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::FDummyRenderTarget>(void)_::_2_::TSTR_DeleteStruct1255>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_TRenderThreadStruct<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::FDummyRenderTarget>::~TRenderThreadStruct<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::FDummyRenderTarget>(void)_::_2_::TSTR_DeleteStruct1255>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"DeleteStruct",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_DeleteStruct;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14538b6d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:___cdecl_TRenderThreadStruct<FReflectionCubemapTexture>::~TRenderThreadStruct<FReflectionCubemapTexture>(void)_::_2_::TSTR_DeleteStruct1255>
* __cdecl TRenderCommandTag<`TRenderThreadStruct<FReflectionCubemapTexture>::~TRenderThreadStruct<FReflectionCubemapTexture>'::__l2::TSTR_DeleteStruct1255>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_TRenderThreadStruct<class_FReflectionCubemapTexture>::~TRenderThreadStruct<class_FReflectionCubemapTexture>(void)___ptr64'::`2'::TSTR_DeleteStruct1255>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_TRenderThreadStruct<FReflectionCubemapTexture>::~TRenderThreadStruct<FReflectionCubemapTexture>(void)___ptr64'::`2'::TSTR_DeleteStruct1255>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_TRenderThreadStruct<class_FReflectionCubemapTexture>::~TRenderThreadStruct<class_FReflectionCubemapTexture>(void)___ptr64'::`2'::TSTR_DeleteStruct1255>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_TRenderThreadStruct<FReflectionCubemapTexture>::~TRenderThreadStruct<FReflectionCubemapTexture>(void)___ptr64'::`2'::TSTR_DeleteStruct1255>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_TRenderThreadStruct<class_FReflectionCubemapTexture>::~TRenderThreadStruct<class_FReflectionCubemapTexture>(void)___ptr64'::`2'::TSTR_DeleteStruct1255>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_TRenderThreadStruct<FReflectionCubemapTexture>::~TRenderThreadStruct<FReflectionCubemapTexture>(void)___ptr64'::`2'::TSTR_DeleteStruct1255>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"DeleteStruct");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_TRenderThreadStruct<class_FReflectionCubemapTexture>::~TRenderThreadStruct<class_FReflectionCubemapTexture>(void)___ptr64'::`2'::TSTR_DeleteStruct1255>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_TRenderThreadStruct<FReflectionCubemapTexture>::~TRenderThreadStruct<FReflectionCubemapTexture>(void)___ptr64'::`2'::TSTR_DeleteStruct1255>::Get(void)'
                ::__l2::Stat,*pFVar1,L"DeleteStruct","STATGROUP_RenderThreadCommands",
               "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_TRenderThreadStruct<class_FReflectionCubemapTexture>::~TRenderThreadStruct<class_FReflectionCubemapTexture>(void)___ptr64'::`2'::TSTR_DeleteStruct1255>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_TRenderThreadStruct<FReflectionCubemapTexture>::~TRenderThreadStruct<FReflectionCubemapTexture>(void)___ptr64'::`2'::TSTR_DeleteStruct1255>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_TRenderThreadStruct<class_FReflectionCubemapTexture>::~TRenderThreadStruct<class_FReflectionCubemapTexture>(void)___ptr64'::`2'::TSTR_DeleteStruct1255>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_TRenderThreadStruct<FReflectionCubemapTexture>::~TRenderThreadStruct<FReflectionCubemapTexture>(void)___ptr64'::`2'::TSTR_DeleteStruct1255>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_TRenderThreadStruct<class_FReflectionCubemapTexture>::~TRenderThreadStruct<class_FReflectionCubemapTexture>(void)___ptr64'::`2'::TSTR_DeleteStruct1255>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_TRenderThreadStruct<FReflectionCubemapTexture>::~TRenderThreadStruct<FReflectionCubemapTexture>(void)___ptr64'::`2'::TSTR_DeleteStruct1255>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_TRenderThreadStruct<class_FReflectionCubemapTexture>::~TRenderThreadStruct<class_FReflectionCubemapTexture>(void)___ptr64'::`2'::TSTR_DeleteStruct1255>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_TRenderThreadStruct<FReflectionCubemapTexture>::~TRenderThreadStruct<FReflectionCubemapTexture>(void)___ptr64'::`2'::TSTR_DeleteStruct1255>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"DeleteStruct");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_TRenderThreadStruct<class_FReflectionCubemapTexture>::~TRenderThreadStruct<class_FReflectionCubemapTexture>(void)___ptr64'::`2'::TSTR_DeleteStruct1255>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_TRenderThreadStruct<FReflectionCubemapTexture>::~TRenderThreadStruct<FReflectionCubemapTexture>(void)___ptr64'::`2'::TSTR_DeleteStruct1255>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"DeleteStruct","STATGROUP_RenderThreadCommands",
                          "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false
                          ,MCR_Invalid);
    }
    _Tag = L"DeleteStruct";
    _DAT_155128460 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_TRenderThreadStruct<class_FReflectionCubemapTexture>::~TRenderThreadStruct<class_FReflectionCubemapTexture>(void)___ptr64'::`2'::TSTR_DeleteStruct1255>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_TRenderThreadStruct<FReflectionCubemapTexture>::~TRenderThreadStruct<FReflectionCubemapTexture>(void)___ptr64'::`2'::TSTR_DeleteStruct1255>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_public:___cdecl_TRenderThreadStruct<FReflectionCubemapTexture>::~TRenderThreadStruct<FReflectionCubemapTexture>(void)_::_2_::TSTR_DeleteStruct1255>
          *)&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_TRenderThreadStruct<class_FReflectionCubemapTexture>::~TRenderThreadStruct<class_FReflectionCubemapTexture>(void)___ptr64'::`2'::TSTR_DeleteStruct1255>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_TRenderThreadStruct<FReflectionCubemapTexture>::~TRenderThreadStruct<FReflectionCubemapTexture>(void)___ptr64'::`2'::TSTR_DeleteStruct1255>::Get(void)'
             ::__l2::Tag;
}

// Get @ 14538b890

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:___cdecl__void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::<lambda_2>::operator()(void)const_::_5_::TSTR_EndCubemapCapture1300>
* __cdecl TRenderCommandTag<``CaptureSceneIntoScratchCubemap'::__l2::<lambda_2>::operator()'::__l5::TSTR_EndCubemapCapture1300>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl__void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::<lambda_2>::operator()(void)const_::_5_::TSTR_EndCubemapCapture1300>_const_&___cdecl_TRenderCommandTag<_public:___cdecl__void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::<lambda_2>::operator()(void)const_::_5_::TSTR_EndCubemapCapture1300>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl__void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::<lambda_2>::operator()(void)const_::_5_::TSTR_EndCubemapCapture1300>_const_&___cdecl_TRenderCommandTag<_public:___cdecl__void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::<lambda_2>::operator()(void)const_::_5_::TSTR_EndCubemapCapture1300>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"EndCubemapCapture");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"EndCubemapCapture",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl__void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::<lambda_2>::operator()(void)const_::_5_::TSTR_EndCubemapCapture1300>_const_&___cdecl_TRenderCommandTag<_public:___cdecl__void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::<lambda_2>::operator()(void)const_::_5_::TSTR_EndCubemapCapture1300>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"EndCubemapCapture");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl__void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::<lambda_2>::operator()(void)const_::_5_::TSTR_EndCubemapCapture1300>_const_&___cdecl_TRenderCommandTag<_public:___cdecl__void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::<lambda_2>::operator()(void)const_::_5_::TSTR_EndCubemapCapture1300>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"EndCubemapCapture",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_EndCubemapCaptu;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14538ba40

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AllocateReflectionCaptures(TArray<UReflectionCaptureComponent_*,TSizedDefaultAllocator<32>_>_const_&,wchar_t_const_*,bool,bool,bool)_::_63_::TSTR_GPUResizeArrayCommand952>
* __cdecl TRenderCommandTag<`FScene::AllocateReflectionCaptures'::__l63::TSTR_GPUResizeArrayCommand952>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AllocateReflectionCaptures(TArray<UReflectionCaptureComponent_*,TSizedDefaultAllocator<32>_>_const_&,wchar_t_const_*,bool,bool,bool)_::_63_::TSTR_GPUResizeArrayCommand952>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AllocateReflectionCaptures(TArray<UReflectionCaptureComponent_*,TSizedDefaultAllocator<32>_>_const_&,wchar_t_const_*,bool,bool,bool)_::_63_::TSTR_GPUResizeArrayCommand952>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AllocateReflectionCaptures(TArray<UReflectionCaptureComponent_*,TSizedDefaultAllocator<32>_>_const_&,wchar_t_const_*,bool,bool,bool)_::_63_::TSTR_GPUResizeArrayCommand952>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AllocateReflectionCaptures(TArray<UReflectionCaptureComponent_*,TSizedDefaultAllocator<32>_>_const_&,wchar_t_const_*,bool,bool,bool)_::_63_::TSTR_GPUResizeArrayCommand952>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"GPUResizeArrayCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"GPUResizeArrayCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AllocateReflectionCaptures(TArray<UReflectionCaptureComponent_*,TSizedDefaultAllocator<32>_>_const_&,wchar_t_const_*,bool,bool,bool)_::_63_::TSTR_GPUResizeArrayCommand952>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AllocateReflectionCaptures(TArray<UReflectionCaptureComponent_*,TSizedDefaultAllocator<32>_>_const_&,wchar_t_const_*,bool,bool,bool)_::_63_::TSTR_GPUResizeArrayCommand952>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"GPUResizeArrayCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AllocateReflectionCaptures(TArray<UReflectionCaptureComponent_*,TSizedDefaultAllocator<32>_>_const_&,wchar_t_const_*,bool,bool,bool)_::_63_::TSTR_GPUResizeArrayCommand952>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AllocateReflectionCaptures(TArray<UReflectionCaptureComponent_*,TSizedDefaultAllocator<32>_>_const_&,wchar_t_const_*,bool,bool,bool)_::_63_::TSTR_GPUResizeArrayCommand952>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"GPUResizeArrayCommand",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_GPUResizeArrayC;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14538bbf0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::GetReflectionCaptureData(UReflectionCaptureComponent_*,FReflectionCaptureData_&)_::_2_::TSTR_GetReflectionDataCommand1129>
* __cdecl TRenderCommandTag<`FScene::GetReflectionCaptureData'::__l2::TSTR_GetReflectionDataCommand1129>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::GetReflectionCaptureData(UReflectionCaptureComponent_*,FReflectionCaptureData_&)_::_2_::TSTR_GetReflectionDataCommand1129>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::GetReflectionCaptureData(UReflectionCaptureComponent_*,FReflectionCaptureData_&)_::_2_::TSTR_GetReflectionDataCommand1129>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::GetReflectionCaptureData(UReflectionCaptureComponent_*,FReflectionCaptureData_&)_::_2_::TSTR_GetReflectionDataCommand1129>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::GetReflectionCaptureData(UReflectionCaptureComponent_*,FReflectionCaptureData_&)_::_2_::TSTR_GetReflectionDataCommand1129>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"GetReflectionDataCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"GetReflectionDataCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::GetReflectionCaptureData(UReflectionCaptureComponent_*,FReflectionCaptureData_&)_::_2_::TSTR_GetReflectionDataCommand1129>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::GetReflectionCaptureData(UReflectionCaptureComponent_*,FReflectionCaptureData_&)_::_2_::TSTR_GetReflectionDataCommand1129>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"GetReflectionDataCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::GetReflectionCaptureData(UReflectionCaptureComponent_*,FReflectionCaptureData_&)_::_2_::TSTR_GetReflectionDataCommand1129>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::GetReflectionCaptureData(UReflectionCaptureComponent_*,FReflectionCaptureData_&)_::_2_::TSTR_GetReflectionDataCommand1129>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"GetReflectionDataCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_GetReflectionDa;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14538bda0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:___cdecl_TRenderThreadStruct<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::FDummyRenderTarget>::TRenderThreadStruct<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::FDummyRenderTarget><>(void)_::_2_::TSTR_InitStruct1247>
* __cdecl TRenderCommandTag<`TRenderThreadStruct<`CaptureSceneIntoScratchCubemap'::__l2::FDummyRenderTarget>::TRenderThreadStruct<`CaptureSceneIntoScratchCubemap'::__l2::FDummyRenderTarget><>'::__l2::TSTR_InitStruct1247>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_TRenderThreadStruct<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::FDummyRenderTarget>::TRenderThreadStruct<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::FDummyRenderTarget><>(void)_::_2_::TSTR_InitStruct1247>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_TRenderThreadStruct<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::FDummyRenderTarget>::TRenderThreadStruct<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::FDummyRenderTarget><>(void)_::_2_::TSTR_InitStruct1247>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_TRenderThreadStruct<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::FDummyRenderTarget>::TRenderThreadStruct<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::FDummyRenderTarget><>(void)_::_2_::TSTR_InitStruct1247>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_TRenderThreadStruct<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::FDummyRenderTarget>::TRenderThreadStruct<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::FDummyRenderTarget><>(void)_::_2_::TSTR_InitStruct1247>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"InitStruct");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"InitStruct",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_TRenderThreadStruct<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::FDummyRenderTarget>::TRenderThreadStruct<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::FDummyRenderTarget><>(void)_::_2_::TSTR_InitStruct1247>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_TRenderThreadStruct<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::FDummyRenderTarget>::TRenderThreadStruct<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::FDummyRenderTarget><>(void)_::_2_::TSTR_InitStruct1247>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"InitStruct");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_TRenderThreadStruct<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::FDummyRenderTarget>::TRenderThreadStruct<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::FDummyRenderTarget><>(void)_::_2_::TSTR_InitStruct1247>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_TRenderThreadStruct<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::FDummyRenderTarget>::TRenderThreadStruct<_void___cdecl_CaptureSceneIntoScratchCubemap(FScene_*,FReflectionCubemapTexture_const_&,UE::Math::TVector<double>,int,bool,bool,float,bool,bool,FLinearColor_const_&,bool,bool)_::_2_::FDummyRenderTarget><>(void)_::_2_::TSTR_InitStruct1247>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"InitStruct",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_InitStruct;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14538bf50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:___cdecl_TRenderThreadStruct<FReflectionCubemapTexture>::TRenderThreadStruct<FReflectionCubemapTexture><int_const_&>(int_const_&)_::_2_::TSTR_InitStruct1247>
* __cdecl TRenderCommandTag<`TRenderThreadStruct<FReflectionCubemapTexture>::TRenderThreadStruct<FReflectionCubemapTexture><int_const_&>'::__l2::TSTR_InitStruct1247>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_TRenderThreadStruct<class_FReflectionCubemapTexture>::TRenderThreadStruct<class_FReflectionCubemapTexture><int_const&___ptr64>(int_const&___ptr64)___ptr64'::`2'::TSTR_InitStruct1247>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_TRenderThreadStruct<FReflectionCubemapTexture>::TRenderThreadStruct<FReflectionCubemapTexture><int_const&___ptr64>(int_const&___ptr64)___ptr64'::`2'::TSTR_InitStruct1247>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_TRenderThreadStruct<class_FReflectionCubemapTexture>::TRenderThreadStruct<class_FReflectionCubemapTexture><int_const&___ptr64>(int_const&___ptr64)___ptr64'::`2'::TSTR_InitStruct1247>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_TRenderThreadStruct<FReflectionCubemapTexture>::TRenderThreadStruct<FReflectionCubemapTexture><int_const&___ptr64>(int_const&___ptr64)___ptr64'::`2'::TSTR_InitStruct1247>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_TRenderThreadStruct<class_FReflectionCubemapTexture>::TRenderThreadStruct<class_FReflectionCubemapTexture><int_const&___ptr64>(int_const&___ptr64)___ptr64'::`2'::TSTR_InitStruct1247>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_TRenderThreadStruct<FReflectionCubemapTexture>::TRenderThreadStruct<FReflectionCubemapTexture><int_const&___ptr64>(int_const&___ptr64)___ptr64'::`2'::TSTR_InitStruct1247>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"InitStruct");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_TRenderThreadStruct<class_FReflectionCubemapTexture>::TRenderThreadStruct<class_FReflectionCubemapTexture><int_const&___ptr64>(int_const&___ptr64)___ptr64'::`2'::TSTR_InitStruct1247>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_TRenderThreadStruct<FReflectionCubemapTexture>::TRenderThreadStruct<FReflectionCubemapTexture><int_const&___ptr64>(int_const&___ptr64)___ptr64'::`2'::TSTR_InitStruct1247>::Get(void)'
                ::__l2::Stat,*pFVar1,L"InitStruct","STATGROUP_RenderThreadCommands",
               "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_TRenderThreadStruct<class_FReflectionCubemapTexture>::TRenderThreadStruct<class_FReflectionCubemapTexture><int_const&___ptr64>(int_const&___ptr64)___ptr64'::`2'::TSTR_InitStruct1247>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_TRenderThreadStruct<FReflectionCubemapTexture>::TRenderThreadStruct<FReflectionCubemapTexture><int_const&___ptr64>(int_const&___ptr64)___ptr64'::`2'::TSTR_InitStruct1247>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_TRenderThreadStruct<class_FReflectionCubemapTexture>::TRenderThreadStruct<class_FReflectionCubemapTexture><int_const&___ptr64>(int_const&___ptr64)___ptr64'::`2'::TSTR_InitStruct1247>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_TRenderThreadStruct<FReflectionCubemapTexture>::TRenderThreadStruct<FReflectionCubemapTexture><int_const&___ptr64>(int_const&___ptr64)___ptr64'::`2'::TSTR_InitStruct1247>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_TRenderThreadStruct<class_FReflectionCubemapTexture>::TRenderThreadStruct<class_FReflectionCubemapTexture><int_const&___ptr64>(int_const&___ptr64)___ptr64'::`2'::TSTR_InitStruct1247>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_TRenderThreadStruct<FReflectionCubemapTexture>::TRenderThreadStruct<FReflectionCubemapTexture><int_const&___ptr64>(int_const&___ptr64)___ptr64'::`2'::TSTR_InitStruct1247>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_TRenderThreadStruct<class_FReflectionCubemapTexture>::TRenderThreadStruct<class_FReflectionCubemapTexture><int_const&___ptr64>(int_const&___ptr64)___ptr64'::`2'::TSTR_InitStruct1247>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_TRenderThreadStruct<FReflectionCubemapTexture>::TRenderThreadStruct<FReflectionCubemapTexture><int_const&___ptr64>(int_const&___ptr64)___ptr64'::`2'::TSTR_InitStruct1247>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"InitStruct");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_TRenderThreadStruct<class_FReflectionCubemapTexture>::TRenderThreadStruct<class_FReflectionCubemapTexture><int_const&___ptr64>(int_const&___ptr64)___ptr64'::`2'::TSTR_InitStruct1247>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_TRenderThreadStruct<FReflectionCubemapTexture>::TRenderThreadStruct<FReflectionCubemapTexture><int_const&___ptr64>(int_const&___ptr64)___ptr64'::`2'::TSTR_InitStruct1247>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"InitStruct","STATGROUP_RenderThreadCommands",
                          "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false
                          ,MCR_Invalid);
    }
    _Tag = L"InitStruct";
    _DAT_155128490 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_TRenderThreadStruct<class_FReflectionCubemapTexture>::TRenderThreadStruct<class_FReflectionCubemapTexture><int_const&___ptr64>(int_const&___ptr64)___ptr64'::`2'::TSTR_InitStruct1247>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_TRenderThreadStruct<FReflectionCubemapTexture>::TRenderThreadStruct<FReflectionCubemapTexture><int_const&___ptr64>(int_const&___ptr64)___ptr64'::`2'::TSTR_InitStruct1247>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_public:___cdecl_TRenderThreadStruct<FReflectionCubemapTexture>::TRenderThreadStruct<FReflectionCubemapTexture><int_const_&>(int_const_&)_::_2_::TSTR_InitStruct1247>
          *)&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_TRenderThreadStruct<class_FReflectionCubemapTexture>::TRenderThreadStruct<class_FReflectionCubemapTexture><int_const&___ptr64>(int_const&___ptr64)___ptr64'::`2'::TSTR_InitStruct1247>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_TRenderThreadStruct<FReflectionCubemapTexture>::TRenderThreadStruct<FReflectionCubemapTexture><int_const&___ptr64>(int_const&___ptr64)___ptr64'::`2'::TSTR_InitStruct1247>::Get(void)'
             ::__l2::Tag;
}

// Get @ 14538c110

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AllocateReflectionCaptures(TArray<UReflectionCaptureComponent_*,TSizedDefaultAllocator<32>_>_const_&,wchar_t_const_*,bool,bool,bool)_::_42_::TSTR_PruneReflectionCaptures912>
* __cdecl TRenderCommandTag<`FScene::AllocateReflectionCaptures'::__l42::TSTR_PruneReflectionCaptures912>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AllocateReflectionCaptures(TArray<UReflectionCaptureComponent_*,TSizedDefaultAllocator<32>_>_const_&,wchar_t_const_*,bool,bool,bool)_::_42_::TSTR_PruneReflectionCaptures912>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AllocateReflectionCaptures(TArray<UReflectionCaptureComponent_*,TSizedDefaultAllocator<32>_>_const_&,wchar_t_const_*,bool,bool,bool)_::_42_::TSTR_PruneReflectionCaptures912>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AllocateReflectionCaptures(TArray<UReflectionCaptureComponent_*,TSizedDefaultAllocator<32>_>_const_&,wchar_t_const_*,bool,bool,bool)_::_42_::TSTR_PruneReflectionCaptures912>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AllocateReflectionCaptures(TArray<UReflectionCaptureComponent_*,TSizedDefaultAllocator<32>_>_const_&,wchar_t_const_*,bool,bool,bool)_::_42_::TSTR_PruneReflectionCaptures912>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"PruneReflectionCaptures");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"PruneReflectionCaptures",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AllocateReflectionCaptures(TArray<UReflectionCaptureComponent_*,TSizedDefaultAllocator<32>_>_const_&,wchar_t_const_*,bool,bool,bool)_::_42_::TSTR_PruneReflectionCaptures912>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AllocateReflectionCaptures(TArray<UReflectionCaptureComponent_*,TSizedDefaultAllocator<32>_>_const_&,wchar_t_const_*,bool,bool,bool)_::_42_::TSTR_PruneReflectionCaptures912>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"PruneReflectionCaptures");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AllocateReflectionCaptures(TArray<UReflectionCaptureComponent_*,TSizedDefaultAllocator<32>_>_const_&,wchar_t_const_*,bool,bool,bool)_::_42_::TSTR_PruneReflectionCaptures912>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AllocateReflectionCaptures(TArray<UReflectionCaptureComponent_*,TSizedDefaultAllocator<32>_>_const_&,wchar_t_const_*,bool,bool,bool)_::_42_::TSTR_PruneReflectionCaptures912>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"PruneReflectionCaptures"
                             ,"STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_PruneReflection;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14538c2c0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_FReflectionEnvironmentSceneData::Reset(FScene_*)_::_2_::TSTR_ReflectionEnvironmentSceneDataReset512>
* __cdecl TRenderCommandTag<`FReflectionEnvironmentSceneData::Reset'::__l2::TSTR_ReflectionEnvironmentSceneDataReset512>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FReflectionEnvironmentSceneData::Reset(FScene_*)_::_2_::TSTR_ReflectionEnvironmentSceneDataReset512>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FReflectionEnvironmentSceneData::Reset(FScene_*)_::_2_::TSTR_ReflectionEnvironmentSceneDataReset512>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FReflectionEnvironmentSceneData::Reset(FScene_*)_::_2_::TSTR_ReflectionEnvironmentSceneDataReset512>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FReflectionEnvironmentSceneData::Reset(FScene_*)_::_2_::TSTR_ReflectionEnvironmentSceneDataReset512>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ReflectionEnvironmentSceneDataReset");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                   L"ReflectionEnvironmentSceneDataReset","STATGROUP_RenderThreadCommands",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FReflectionEnvironmentSceneData::Reset(FScene_*)_::_2_::TSTR_ReflectionEnvironmentSceneDataReset512>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FReflectionEnvironmentSceneData::Reset(FScene_*)_::_2_::TSTR_ReflectionEnvironmentSceneDataReset512>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ReflectionEnvironmentSceneDataReset");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FReflectionEnvironmentSceneData::Reset(FScene_*)_::_2_::TSTR_ReflectionEnvironmentSceneDataReset512>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FReflectionEnvironmentSceneData::Reset(FScene_*)_::_2_::TSTR_ReflectionEnvironmentSceneDataReset512>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"ReflectionEnvironmentSceneDataReset","STATGROUP_RenderThreadCommands"
                             ,"STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_ReflectionEnvir;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14538c470

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AllocateReflectionCaptures(TArray<UReflectionCaptureComponent_*,TSizedDefaultAllocator<32>_>_const_&,wchar_t_const_*,bool,bool,bool)_::_66_::TSTR_ResizeArrayCommand969>
* __cdecl TRenderCommandTag<`FScene::AllocateReflectionCaptures'::__l66::TSTR_ResizeArrayCommand969>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AllocateReflectionCaptures(TArray<UReflectionCaptureComponent_*,TSizedDefaultAllocator<32>_>_const_&,wchar_t_const_*,bool,bool,bool)_::_66_::TSTR_ResizeArrayCommand969>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AllocateReflectionCaptures(TArray<UReflectionCaptureComponent_*,TSizedDefaultAllocator<32>_>_const_&,wchar_t_const_*,bool,bool,bool)_::_66_::TSTR_ResizeArrayCommand969>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AllocateReflectionCaptures(TArray<UReflectionCaptureComponent_*,TSizedDefaultAllocator<32>_>_const_&,wchar_t_const_*,bool,bool,bool)_::_66_::TSTR_ResizeArrayCommand969>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AllocateReflectionCaptures(TArray<UReflectionCaptureComponent_*,TSizedDefaultAllocator<32>_>_const_&,wchar_t_const_*,bool,bool,bool)_::_66_::TSTR_ResizeArrayCommand969>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ResizeArrayCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ResizeArrayCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AllocateReflectionCaptures(TArray<UReflectionCaptureComponent_*,TSizedDefaultAllocator<32>_>_const_&,wchar_t_const_*,bool,bool,bool)_::_66_::TSTR_ResizeArrayCommand969>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AllocateReflectionCaptures(TArray<UReflectionCaptureComponent_*,TSizedDefaultAllocator<32>_>_const_&,wchar_t_const_*,bool,bool,bool)_::_66_::TSTR_ResizeArrayCommand969>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ResizeArrayCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AllocateReflectionCaptures(TArray<UReflectionCaptureComponent_*,TSizedDefaultAllocator<32>_>_const_&,wchar_t_const_*,bool,bool,bool)_::_66_::TSTR_ResizeArrayCommand969>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AllocateReflectionCaptures(TArray<UReflectionCaptureComponent_*,TSizedDefaultAllocator<32>_>_const_&,wchar_t_const_*,bool,bool,bool)_::_66_::TSTR_ResizeArrayCommand969>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ResizeArrayCommand",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_ResizeArrayComm;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14538c620

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSkyCaptureContents(USkyLightComponent_const_*,bool,UTextureCube_*,FTexture_*,float_&,TSHVectorRGB<3>_&,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>_*,FLinearColor_*)_::_5_::TSTR_UpdateCaptureContents1831>
* __cdecl TRenderCommandTag<`FScene::UpdateSkyCaptureContents'::__l5::TSTR_UpdateCaptureContents1831>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSkyCaptureContents(USkyLightComponent_const_*,bool,UTextureCube_*,FTexture_*,float_&,TSHVectorRGB<3>_&,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>_*,FLinearColor_*)_::_5_::TSTR_UpdateCaptureContents1831>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSkyCaptureContents(USkyLightComponent_const_*,bool,UTextureCube_*,FTexture_*,float_&,TSHVectorRGB<3>_&,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>_*,FLinearColor_*)_::_5_::TSTR_UpdateCaptureContents1831>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSkyCaptureContents(USkyLightComponent_const_*,bool,UTextureCube_*,FTexture_*,float_&,TSHVectorRGB<3>_&,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>_*,FLinearColor_*)_::_5_::TSTR_UpdateCaptureContents1831>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSkyCaptureContents(USkyLightComponent_const_*,bool,UTextureCube_*,FTexture_*,float_&,TSHVectorRGB<3>_&,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>_*,FLinearColor_*)_::_5_::TSTR_UpdateCaptureContents1831>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UpdateCaptureContents");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"UpdateCaptureContents",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSkyCaptureContents(USkyLightComponent_const_*,bool,UTextureCube_*,FTexture_*,float_&,TSHVectorRGB<3>_&,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>_*,FLinearColor_*)_::_5_::TSTR_UpdateCaptureContents1831>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSkyCaptureContents(USkyLightComponent_const_*,bool,UTextureCube_*,FTexture_*,float_&,TSHVectorRGB<3>_&,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>_*,FLinearColor_*)_::_5_::TSTR_UpdateCaptureContents1831>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UpdateCaptureContents");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSkyCaptureContents(USkyLightComponent_const_*,bool,UTextureCube_*,FTexture_*,float_&,TSHVectorRGB<3>_&,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>_*,FLinearColor_*)_::_5_::TSTR_UpdateCaptureContents1831>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSkyCaptureContents(USkyLightComponent_const_*,bool,UTextureCube_*,FTexture_*,float_&,TSHVectorRGB<3>_&,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>_*,FLinearColor_*)_::_5_::TSTR_UpdateCaptureContents1831>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"UpdateCaptureContents",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_UpdateCaptureCo;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14538c7d0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_FScene::CaptureOrUploadReflectionCapture(UReflectionCaptureComponent_*,int,bool,bool,bool)_::_8_::TSTR_UploadCaptureCommand1458>
* __cdecl TRenderCommandTag<`FScene::CaptureOrUploadReflectionCapture'::__l8::TSTR_UploadCaptureCommand1458>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FScene::CaptureOrUploadReflectionCapture(UReflectionCaptureComponent_*,int,bool,bool,bool)_::_8_::TSTR_UploadCaptureCommand1458>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FScene::CaptureOrUploadReflectionCapture(UReflectionCaptureComponent_*,int,bool,bool,bool)_::_8_::TSTR_UploadCaptureCommand1458>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FScene::CaptureOrUploadReflectionCapture(UReflectionCaptureComponent_*,int,bool,bool,bool)_::_8_::TSTR_UploadCaptureCommand1458>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FScene::CaptureOrUploadReflectionCapture(UReflectionCaptureComponent_*,int,bool,bool,bool)_::_8_::TSTR_UploadCaptureCommand1458>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UploadCaptureCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"UploadCaptureCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FScene::CaptureOrUploadReflectionCapture(UReflectionCaptureComponent_*,int,bool,bool,bool)_::_8_::TSTR_UploadCaptureCommand1458>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FScene::CaptureOrUploadReflectionCapture(UReflectionCaptureComponent_*,int,bool,bool,bool)_::_8_::TSTR_UploadCaptureCommand1458>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UploadCaptureCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FScene::CaptureOrUploadReflectionCapture(UReflectionCaptureComponent_*,int,bool,bool,bool)_::_8_::TSTR_UploadCaptureCommand1458>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FScene::CaptureOrUploadReflectionCapture(UReflectionCaptureComponent_*,int,bool,bool,bool)_::_8_::TSTR_UploadCaptureCommand1458>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"UploadCaptureCommand",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_UploadCaptureCo;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145434c00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_FScene::BatchAddPrimitivesInternal<FPrimitiveSceneDesc>(TArrayView<FPrimitiveSceneDesc_*,int>)_::_72_::TSTR_AddPrimitiveCommand1462>
* __cdecl TRenderCommandTag<`FScene::BatchAddPrimitivesInternal<FPrimitiveSceneDesc>'::__l72::TSTR_AddPrimitiveCommand1462>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<struct_FPrimitiveSceneDesc>(class_TArrayView<struct_FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<FPrimitiveSceneDesc>(TArrayView<FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<struct_FPrimitiveSceneDesc>(class_TArrayView<struct_FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<FPrimitiveSceneDesc>(TArrayView<FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<struct_FPrimitiveSceneDesc>(class_TArrayView<struct_FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<FPrimitiveSceneDesc>(TArrayView<FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"AddPrimitiveCommand");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<struct_FPrimitiveSceneDesc>(class_TArrayView<struct_FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<FPrimitiveSceneDesc>(TArrayView<FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>::Get(void)'
                ::__l2::Stat,*pFVar1,L"AddPrimitiveCommand","STATGROUP_RenderThreadCommands",
               "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<struct_FPrimitiveSceneDesc>(class_TArrayView<struct_FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<FPrimitiveSceneDesc>(TArrayView<FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<struct_FPrimitiveSceneDesc>(class_TArrayView<struct_FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<FPrimitiveSceneDesc>(TArrayView<FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<struct_FPrimitiveSceneDesc>(class_TArrayView<struct_FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<FPrimitiveSceneDesc>(TArrayView<FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<struct_FPrimitiveSceneDesc>(class_TArrayView<struct_FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<FPrimitiveSceneDesc>(TArrayView<FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"AddPrimitiveCommand");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<struct_FPrimitiveSceneDesc>(class_TArrayView<struct_FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<FPrimitiveSceneDesc>(TArrayView<FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"AddPrimitiveCommand",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"AddPrimitiveCommand";
    _DAT_15512b178 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<struct_FPrimitiveSceneDesc>(class_TArrayView<struct_FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<FPrimitiveSceneDesc>(TArrayView<FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_private:_void___cdecl_FScene::BatchAddPrimitivesInternal<FPrimitiveSceneDesc>(TArrayView<FPrimitiveSceneDesc_*,int>)_::_72_::TSTR_AddPrimitiveCommand1462>
          *)&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<struct_FPrimitiveSceneDesc>(class_TArrayView<struct_FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<FPrimitiveSceneDesc>(TArrayView<FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>::Get(void)'
             ::__l2::Tag;
}

// Get @ 145434dc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_FScene::BatchAddPrimitivesInternal<UPrimitiveComponent>(TArrayView<UPrimitiveComponent_*,int>)_::_72_::TSTR_AddPrimitiveCommand1462>
* __cdecl TRenderCommandTag<`FScene::BatchAddPrimitivesInternal<UPrimitiveComponent>'::__l72::TSTR_AddPrimitiveCommand1462>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<class_UPrimitiveComponent>(class_TArrayView<class_UPrimitiveComponent*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<UPrimitiveComponent>(TArrayView<UPrimitiveComponent*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<class_UPrimitiveComponent>(class_TArrayView<class_UPrimitiveComponent*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<UPrimitiveComponent>(TArrayView<UPrimitiveComponent*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<class_UPrimitiveComponent>(class_TArrayView<class_UPrimitiveComponent*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<UPrimitiveComponent>(TArrayView<UPrimitiveComponent*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"AddPrimitiveCommand");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<class_UPrimitiveComponent>(class_TArrayView<class_UPrimitiveComponent*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<UPrimitiveComponent>(TArrayView<UPrimitiveComponent*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>::Get(void)'
                ::__l2::Stat,*pFVar1,L"AddPrimitiveCommand","STATGROUP_RenderThreadCommands",
               "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<class_UPrimitiveComponent>(class_TArrayView<class_UPrimitiveComponent*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<UPrimitiveComponent>(TArrayView<UPrimitiveComponent*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<class_UPrimitiveComponent>(class_TArrayView<class_UPrimitiveComponent*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<UPrimitiveComponent>(TArrayView<UPrimitiveComponent*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<class_UPrimitiveComponent>(class_TArrayView<class_UPrimitiveComponent*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<UPrimitiveComponent>(TArrayView<UPrimitiveComponent*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<class_UPrimitiveComponent>(class_TArrayView<class_UPrimitiveComponent*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<UPrimitiveComponent>(TArrayView<UPrimitiveComponent*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"AddPrimitiveCommand");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<class_UPrimitiveComponent>(class_TArrayView<class_UPrimitiveComponent*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<UPrimitiveComponent>(TArrayView<UPrimitiveComponent*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"AddPrimitiveCommand",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"AddPrimitiveCommand";
    _DAT_15512b1a8 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<class_UPrimitiveComponent>(class_TArrayView<class_UPrimitiveComponent*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<UPrimitiveComponent>(TArrayView<UPrimitiveComponent*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_private:_void___cdecl_FScene::BatchAddPrimitivesInternal<UPrimitiveComponent>(TArrayView<UPrimitiveComponent_*,int>)_::_72_::TSTR_AddPrimitiveCommand1462>
          *)&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<class_UPrimitiveComponent>(class_TArrayView<class_UPrimitiveComponent*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchAddPrimitivesInternal<UPrimitiveComponent>(TArrayView<UPrimitiveComponent*___ptr64,int>)___ptr64'::`72'::TSTR_AddPrimitiveCommand1462>::Get(void)'
             ::__l2::Tag;
}

// Get @ 145434f80

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*)_::_5_::TSTR_AddRuntimeVirtualTextureCommand3202>
* __cdecl TRenderCommandTag<`FScene::AddRuntimeVirtualTexture'::__l5::TSTR_AddRuntimeVirtualTextureCommand3202>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*)_::_5_::TSTR_AddRuntimeVirtualTextureCommand3202>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*)_::_5_::TSTR_AddRuntimeVirtualTextureCommand3202>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*)_::_5_::TSTR_AddRuntimeVirtualTextureCommand3202>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*)_::_5_::TSTR_AddRuntimeVirtualTextureCommand3202>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"AddRuntimeVirtualTextureCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"AddRuntimeVirtualTextureCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*)_::_5_::TSTR_AddRuntimeVirtualTextureCommand3202>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*)_::_5_::TSTR_AddRuntimeVirtualTextureCommand3202>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"AddRuntimeVirtualTextureCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*)_::_5_::TSTR_AddRuntimeVirtualTextureCommand3202>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*)_::_5_::TSTR_AddRuntimeVirtualTextureCommand3202>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"AddRuntimeVirtualTextureCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_AddRuntimeVirtu;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145435130

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddPrecomputedLightVolume(FPrecomputedLightVolume_const_*)_::_2_::TSTR_AddVolumeCommand3061>
* __cdecl TRenderCommandTag<`FScene::AddPrecomputedLightVolume'::__l2::TSTR_AddVolumeCommand3061>::
          Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddPrecomputedLightVolume(FPrecomputedLightVolume_const_*)_::_2_::TSTR_AddVolumeCommand3061>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddPrecomputedLightVolume(FPrecomputedLightVolume_const_*)_::_2_::TSTR_AddVolumeCommand3061>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddPrecomputedLightVolume(FPrecomputedLightVolume_const_*)_::_2_::TSTR_AddVolumeCommand3061>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddPrecomputedLightVolume(FPrecomputedLightVolume_const_*)_::_2_::TSTR_AddVolumeCommand3061>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"AddVolumeCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"AddVolumeCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddPrecomputedLightVolume(FPrecomputedLightVolume_const_*)_::_2_::TSTR_AddVolumeCommand3061>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddPrecomputedLightVolume(FPrecomputedLightVolume_const_*)_::_2_::TSTR_AddVolumeCommand3061>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"AddVolumeCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddPrecomputedLightVolume(FPrecomputedLightVolume_const_*)_::_2_::TSTR_AddVolumeCommand3061>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddPrecomputedLightVolume(FPrecomputedLightVolume_const_*)_::_2_::TSTR_AddVolumeCommand3061>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"AddVolumeCommand",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_AddVolumeComman;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1454352e0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddPrecomputedVolumetricLightmap(FPrecomputedVolumetricLightmap_const_*,bool)_::_2_::TSTR_AddVolumeCommand3160>
* __cdecl TRenderCommandTag<`FScene::AddPrecomputedVolumetricLightmap'::__l2::TSTR_AddVolumeCommand3160>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddPrecomputedVolumetricLightmap(FPrecomputedVolumetricLightmap_const_*,bool)_::_2_::TSTR_AddVolumeCommand3160>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddPrecomputedVolumetricLightmap(FPrecomputedVolumetricLightmap_const_*,bool)_::_2_::TSTR_AddVolumeCommand3160>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddPrecomputedVolumetricLightmap(FPrecomputedVolumetricLightmap_const_*,bool)_::_2_::TSTR_AddVolumeCommand3160>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddPrecomputedVolumetricLightmap(FPrecomputedVolumetricLightmap_const_*,bool)_::_2_::TSTR_AddVolumeCommand3160>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"AddVolumeCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"AddVolumeCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddPrecomputedVolumetricLightmap(FPrecomputedVolumetricLightmap_const_*,bool)_::_2_::TSTR_AddVolumeCommand3160>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddPrecomputedVolumetricLightmap(FPrecomputedVolumetricLightmap_const_*,bool)_::_2_::TSTR_AddVolumeCommand3160>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"AddVolumeCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddPrecomputedVolumetricLightmap(FPrecomputedVolumetricLightmap_const_*,bool)_::_2_::TSTR_AddVolumeCommand3160>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddPrecomputedVolumetricLightmap(FPrecomputedVolumetricLightmap_const_*,bool)_::_2_::TSTR_AddVolumeCommand3160>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"AddVolumeCommand",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_AddVolumeComman;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145435490

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::BatchRemovePrimitives(TArray<FPrimitiveSceneProxy_*,TSizedDefaultAllocator<32>_>_&&)_::_5_::TSTR_BatchRemovePrimitives2073>
* __cdecl TRenderCommandTag<`FScene::BatchRemovePrimitives'::__l5::TSTR_BatchRemovePrimitives2073>::
          Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::BatchRemovePrimitives(TArray<FPrimitiveSceneProxy_*,TSizedDefaultAllocator<32>_>_&&)_::_5_::TSTR_BatchRemovePrimitives2073>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::BatchRemovePrimitives(TArray<FPrimitiveSceneProxy_*,TSizedDefaultAllocator<32>_>_&&)_::_5_::TSTR_BatchRemovePrimitives2073>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::BatchRemovePrimitives(TArray<FPrimitiveSceneProxy_*,TSizedDefaultAllocator<32>_>_&&)_::_5_::TSTR_BatchRemovePrimitives2073>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::BatchRemovePrimitives(TArray<FPrimitiveSceneProxy_*,TSizedDefaultAllocator<32>_>_&&)_::_5_::TSTR_BatchRemovePrimitives2073>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"BatchRemovePrimitives");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"BatchRemovePrimitives",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::BatchRemovePrimitives(TArray<FPrimitiveSceneProxy_*,TSizedDefaultAllocator<32>_>_&&)_::_5_::TSTR_BatchRemovePrimitives2073>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::BatchRemovePrimitives(TArray<FPrimitiveSceneProxy_*,TSizedDefaultAllocator<32>_>_&&)_::_5_::TSTR_BatchRemovePrimitives2073>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"BatchRemovePrimitives");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::BatchRemovePrimitives(TArray<FPrimitiveSceneProxy_*,TSizedDefaultAllocator<32>_>_&&)_::_5_::TSTR_BatchRemovePrimitives2073>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::BatchRemovePrimitives(TArray<FPrimitiveSceneProxy_*,TSizedDefaultAllocator<32>_>_&&)_::_5_::TSTR_BatchRemovePrimitives2073>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"BatchRemovePrimitives",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_BatchRemovePrim;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145435640

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddReflectionCapture(UReflectionCaptureComponent_*)_::_5_::TSTR_FAddCaptureCommand2762>
* __cdecl TRenderCommandTag<`FScene::AddReflectionCapture'::__l5::TSTR_FAddCaptureCommand2762>::Get
                    (void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddReflectionCapture(UReflectionCaptureComponent_*)_::_5_::TSTR_FAddCaptureCommand2762>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddReflectionCapture(UReflectionCaptureComponent_*)_::_5_::TSTR_FAddCaptureCommand2762>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddReflectionCapture(UReflectionCaptureComponent_*)_::_5_::TSTR_FAddCaptureCommand2762>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddReflectionCapture(UReflectionCaptureComponent_*)_::_5_::TSTR_FAddCaptureCommand2762>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FAddCaptureCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FAddCaptureCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddReflectionCapture(UReflectionCaptureComponent_*)_::_5_::TSTR_FAddCaptureCommand2762>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddReflectionCapture(UReflectionCaptureComponent_*)_::_5_::TSTR_FAddCaptureCommand2762>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FAddCaptureCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddReflectionCapture(UReflectionCaptureComponent_*)_::_5_::TSTR_FAddCaptureCommand2762>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddReflectionCapture(UReflectionCaptureComponent_*)_::_5_::TSTR_FAddCaptureCommand2762>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FAddCaptureCommand",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FAddCaptureComm;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1454357f0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddDecal(UDecalComponent_*)_::_5_::TSTR_FAddDecalCommand2511>
* __cdecl TRenderCommandTag<`FScene::AddDecal'::__l5::TSTR_FAddDecalCommand2511>::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddDecal(UDecalComponent_*)_::_5_::TSTR_FAddDecalCommand2511>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddDecal(UDecalComponent_*)_::_5_::TSTR_FAddDecalCommand2511>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddDecal(UDecalComponent_*)_::_5_::TSTR_FAddDecalCommand2511>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddDecal(UDecalComponent_*)_::_5_::TSTR_FAddDecalCommand2511>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FAddDecalCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FAddDecalCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddDecal(UDecalComponent_*)_::_5_::TSTR_FAddDecalCommand2511>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddDecal(UDecalComponent_*)_::_5_::TSTR_FAddDecalCommand2511>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FAddDecalCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddDecal(UDecalComponent_*)_::_5_::TSTR_FAddDecalCommand2511>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddDecal(UDecalComponent_*)_::_5_::TSTR_FAddDecalCommand2511>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FAddDecalCommand",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FAddDecalComman;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1454359a0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddExponentialHeightFog(unsigned___int64,FExponentialHeightFogDynamicState_const_&)_::_2_::TSTR_FAddFogCommand3675>
* __cdecl TRenderCommandTag<`FScene::AddExponentialHeightFog'::__l2::TSTR_FAddFogCommand3675>::Get
                    (void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddExponentialHeightFog(unsigned___int64,FExponentialHeightFogDynamicState_const_&)_::_2_::TSTR_FAddFogCommand3675>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddExponentialHeightFog(unsigned___int64,FExponentialHeightFogDynamicState_const_&)_::_2_::TSTR_FAddFogCommand3675>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddExponentialHeightFog(unsigned___int64,FExponentialHeightFogDynamicState_const_&)_::_2_::TSTR_FAddFogCommand3675>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddExponentialHeightFog(unsigned___int64,FExponentialHeightFogDynamicState_const_&)_::_2_::TSTR_FAddFogCommand3675>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FAddFogCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FAddFogCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddExponentialHeightFog(unsigned___int64,FExponentialHeightFogDynamicState_const_&)_::_2_::TSTR_FAddFogCommand3675>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddExponentialHeightFog(unsigned___int64,FExponentialHeightFogDynamicState_const_&)_::_2_::TSTR_FAddFogCommand3675>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FAddFogCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddExponentialHeightFog(unsigned___int64,FExponentialHeightFogDynamicState_const_&)_::_2_::TSTR_FAddFogCommand3675>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddExponentialHeightFog(unsigned___int64,FExponentialHeightFogDynamicState_const_&)_::_2_::TSTR_FAddFogCommand3675>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FAddFogCommand",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FAddFogCommand;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145435b50

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddLight(ULightComponent_*)_::_5_::TSTR_FAddLightCommand2319>
* __cdecl TRenderCommandTag<`FScene::AddLight'::__l5::TSTR_FAddLightCommand2319>::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddLight(ULightComponent_*)_::_5_::TSTR_FAddLightCommand2319>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddLight(ULightComponent_*)_::_5_::TSTR_FAddLightCommand2319>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddLight(ULightComponent_*)_::_5_::TSTR_FAddLightCommand2319>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddLight(ULightComponent_*)_::_5_::TSTR_FAddLightCommand2319>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FAddLightCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FAddLightCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddLight(ULightComponent_*)_::_5_::TSTR_FAddLightCommand2319>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddLight(ULightComponent_*)_::_5_::TSTR_FAddLightCommand2319>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FAddLightCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddLight(ULightComponent_*)_::_5_::TSTR_FAddLightCommand2319>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddLight(ULightComponent_*)_::_5_::TSTR_FAddLightCommand2319>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FAddLightCommand",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FAddLightComman;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145435d00

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddInvisibleLight(ULightComponent_*)_::_5_::TSTR_FAddLightCommand2353>
* __cdecl TRenderCommandTag<`FScene::AddInvisibleLight'::__l5::TSTR_FAddLightCommand2353>::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddInvisibleLight(ULightComponent_*)_::_5_::TSTR_FAddLightCommand2353>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddInvisibleLight(ULightComponent_*)_::_5_::TSTR_FAddLightCommand2353>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddInvisibleLight(ULightComponent_*)_::_5_::TSTR_FAddLightCommand2353>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddInvisibleLight(ULightComponent_*)_::_5_::TSTR_FAddLightCommand2353>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FAddLightCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FAddLightCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddInvisibleLight(ULightComponent_*)_::_5_::TSTR_FAddLightCommand2353>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddInvisibleLight(ULightComponent_*)_::_5_::TSTR_FAddLightCommand2353>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FAddLightCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddInvisibleLight(ULightComponent_*)_::_5_::TSTR_FAddLightCommand2353>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddInvisibleLight(ULightComponent_*)_::_5_::TSTR_FAddLightCommand2353>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FAddLightCommand",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FAddLightComman;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145435eb0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddSpeedTreeWind(FVertexFactory_*,UStaticMesh_const_*)_::_5_::TSTR_FAddSpeedTreeWindCommand3897>
* __cdecl TRenderCommandTag<`FScene::AddSpeedTreeWind'::__l5::TSTR_FAddSpeedTreeWindCommand3897>::
          Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddSpeedTreeWind(FVertexFactory_*,UStaticMesh_const_*)_::_5_::TSTR_FAddSpeedTreeWindCommand3897>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddSpeedTreeWind(FVertexFactory_*,UStaticMesh_const_*)_::_5_::TSTR_FAddSpeedTreeWindCommand3897>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddSpeedTreeWind(FVertexFactory_*,UStaticMesh_const_*)_::_5_::TSTR_FAddSpeedTreeWindCommand3897>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddSpeedTreeWind(FVertexFactory_*,UStaticMesh_const_*)_::_5_::TSTR_FAddSpeedTreeWindCommand3897>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FAddSpeedTreeWindCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FAddSpeedTreeWindCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddSpeedTreeWind(FVertexFactory_*,UStaticMesh_const_*)_::_5_::TSTR_FAddSpeedTreeWindCommand3897>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddSpeedTreeWind(FVertexFactory_*,UStaticMesh_const_*)_::_5_::TSTR_FAddSpeedTreeWindCommand3897>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FAddSpeedTreeWindCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddSpeedTreeWind(FVertexFactory_*,UStaticMesh_const_*)_::_5_::TSTR_FAddSpeedTreeWindCommand3897>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddSpeedTreeWind(FVertexFactory_*,UStaticMesh_const_*)_::_5_::TSTR_FAddSpeedTreeWindCommand3897>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FAddSpeedTreeWindCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FAddSpeedTreeWi;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145436060

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddWindSource(UWindDirectionalSourceComponent_*)_::_2_::TSTR_FAddWindSourceCommand3721>
* __cdecl TRenderCommandTag<`FScene::AddWindSource'::__l2::TSTR_FAddWindSourceCommand3721>::Get
                    (void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddWindSource(UWindDirectionalSourceComponent_*)_::_2_::TSTR_FAddWindSourceCommand3721>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddWindSource(UWindDirectionalSourceComponent_*)_::_2_::TSTR_FAddWindSourceCommand3721>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddWindSource(UWindDirectionalSourceComponent_*)_::_2_::TSTR_FAddWindSourceCommand3721>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddWindSource(UWindDirectionalSourceComponent_*)_::_2_::TSTR_FAddWindSourceCommand3721>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FAddWindSourceCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FAddWindSourceCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddWindSource(UWindDirectionalSourceComponent_*)_::_2_::TSTR_FAddWindSourceCommand3721>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddWindSource(UWindDirectionalSourceComponent_*)_::_2_::TSTR_FAddWindSourceCommand3721>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FAddWindSourceCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddWindSource(UWindDirectionalSourceComponent_*)_::_2_::TSTR_FAddWindSourceCommand3721>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddWindSource(UWindDirectionalSourceComponent_*)_::_2_::TSTR_FAddWindSourceCommand3721>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FAddWindSourceCommand",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FAddWindSourceC;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145436210

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateWindSource(UWindDirectionalSourceComponent_*)_::_8_::TSTR_FAddWindSourceCommand3773>
* __cdecl TRenderCommandTag<`FScene::UpdateWindSource'::__l8::TSTR_FAddWindSourceCommand3773>::Get
                    (void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateWindSource(UWindDirectionalSourceComponent_*)_::_8_::TSTR_FAddWindSourceCommand3773>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateWindSource(UWindDirectionalSourceComponent_*)_::_8_::TSTR_FAddWindSourceCommand3773>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateWindSource(UWindDirectionalSourceComponent_*)_::_8_::TSTR_FAddWindSourceCommand3773>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateWindSource(UWindDirectionalSourceComponent_*)_::_8_::TSTR_FAddWindSourceCommand3773>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FAddWindSourceCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FAddWindSourceCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateWindSource(UWindDirectionalSourceComponent_*)_::_8_::TSTR_FAddWindSourceCommand3773>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateWindSource(UWindDirectionalSourceComponent_*)_::_8_::TSTR_FAddWindSourceCommand3773>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FAddWindSourceCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateWindSource(UWindDirectionalSourceComponent_*)_::_8_::TSTR_FAddWindSourceCommand3773>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateWindSource(UWindDirectionalSourceComponent_*)_::_8_::TSTR_FAddWindSourceCommand3773>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FAddWindSourceCommand",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FAddWindSourceC;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1454363c0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::ApplyWorldOffset(UE::Math::TVector<double>_const_&)_::_2_::TSTR_FApplyWorldOffset4398>
* __cdecl TRenderCommandTag<`FScene::ApplyWorldOffset'::__l2::TSTR_FApplyWorldOffset4398>::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::ApplyWorldOffset(UE::Math::TVector<double>_const_&)_::_2_::TSTR_FApplyWorldOffset4398>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::ApplyWorldOffset(UE::Math::TVector<double>_const_&)_::_2_::TSTR_FApplyWorldOffset4398>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::ApplyWorldOffset(UE::Math::TVector<double>_const_&)_::_2_::TSTR_FApplyWorldOffset4398>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::ApplyWorldOffset(UE::Math::TVector<double>_const_&)_::_2_::TSTR_FApplyWorldOffset4398>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FApplyWorldOffset");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FApplyWorldOffset",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::ApplyWorldOffset(UE::Math::TVector<double>_const_&)_::_2_::TSTR_FApplyWorldOffset4398>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::ApplyWorldOffset(UE::Math::TVector<double>_const_&)_::_2_::TSTR_FApplyWorldOffset4398>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FApplyWorldOffset");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::ApplyWorldOffset(UE::Math::TVector<double>_const_&)_::_2_::TSTR_FApplyWorldOffset4398>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::ApplyWorldOffset(UE::Math::TVector<double>_const_&)_::_2_::TSTR_FApplyWorldOffset4398>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FApplyWorldOffset",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FApplyWorldOffs;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145436570

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::BatchUpdateDecals(TArray<FDeferredDecalUpdateParams,TSizedDefaultAllocator<32>_>_&&)_::_2_::TSTR_FBatchUpdateDecalsCommand2616>
* __cdecl TRenderCommandTag<`FScene::BatchUpdateDecals'::__l2::TSTR_FBatchUpdateDecalsCommand2616>::
          Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::BatchUpdateDecals(TArray<FDeferredDecalUpdateParams,TSizedDefaultAllocator<32>_>_&&)_::_2_::TSTR_FBatchUpdateDecalsCommand2616>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::BatchUpdateDecals(TArray<FDeferredDecalUpdateParams,TSizedDefaultAllocator<32>_>_&&)_::_2_::TSTR_FBatchUpdateDecalsCommand2616>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::BatchUpdateDecals(TArray<FDeferredDecalUpdateParams,TSizedDefaultAllocator<32>_>_&&)_::_2_::TSTR_FBatchUpdateDecalsCommand2616>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::BatchUpdateDecals(TArray<FDeferredDecalUpdateParams,TSizedDefaultAllocator<32>_>_&&)_::_2_::TSTR_FBatchUpdateDecalsCommand2616>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FBatchUpdateDecalsCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FBatchUpdateDecalsCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::BatchUpdateDecals(TArray<FDeferredDecalUpdateParams,TSizedDefaultAllocator<32>_>_&&)_::_2_::TSTR_FBatchUpdateDecalsCommand2616>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::BatchUpdateDecals(TArray<FDeferredDecalUpdateParams,TSizedDefaultAllocator<32>_>_&&)_::_2_::TSTR_FBatchUpdateDecalsCommand2616>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FBatchUpdateDecalsCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::BatchUpdateDecals(TArray<FDeferredDecalUpdateParams,TSizedDefaultAllocator<32>_>_&&)_::_2_::TSTR_FBatchUpdateDecalsCommand2616>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::BatchUpdateDecals(TArray<FDeferredDecalUpdateParams,TSizedDefaultAllocator<32>_>_&&)_::_2_::TSTR_FBatchUpdateDecalsCommand2616>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FBatchUpdateDecalsCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FBatchUpdateDec;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145436720

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::DisableSkyLight(FSkyLightSceneProxy_*)_::_2_::TSTR_FDisableSkyLightCommand2389>
* __cdecl TRenderCommandTag<`FScene::DisableSkyLight'::__l2::TSTR_FDisableSkyLightCommand2389>::Get
                    (void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::DisableSkyLight(FSkyLightSceneProxy_*)_::_2_::TSTR_FDisableSkyLightCommand2389>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::DisableSkyLight(FSkyLightSceneProxy_*)_::_2_::TSTR_FDisableSkyLightCommand2389>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::DisableSkyLight(FSkyLightSceneProxy_*)_::_2_::TSTR_FDisableSkyLightCommand2389>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::DisableSkyLight(FSkyLightSceneProxy_*)_::_2_::TSTR_FDisableSkyLightCommand2389>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FDisableSkyLightCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FDisableSkyLightCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::DisableSkyLight(FSkyLightSceneProxy_*)_::_2_::TSTR_FDisableSkyLightCommand2389>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::DisableSkyLight(FSkyLightSceneProxy_*)_::_2_::TSTR_FDisableSkyLightCommand2389>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FDisableSkyLightCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::DisableSkyLight(FSkyLightSceneProxy_*)_::_2_::TSTR_FDisableSkyLightCommand2389>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::DisableSkyLight(FSkyLightSceneProxy_*)_::_2_::TSTR_FDisableSkyLightCommand2389>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FDisableSkyLightCommand"
                             ,"STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FDisableSkyLigh;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1454368d0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::GetRelevantLights(UPrimitiveComponent_*,TArray<ULightComponent_const_*,TSizedDefaultAllocator<32>_>_*)const_::_5_::TSTR_FGetRelevantLightsCommand4090>
* __cdecl TRenderCommandTag<`FScene::GetRelevantLights'::__l5::TSTR_FGetRelevantLightsCommand4090>::
          Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::GetRelevantLights(UPrimitiveComponent_*,TArray<ULightComponent_const_*,TSizedDefaultAllocator<32>_>_*)const_::_5_::TSTR_FGetRelevantLightsCommand4090>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::GetRelevantLights(UPrimitiveComponent_*,TArray<ULightComponent_const_*,TSizedDefaultAllocator<32>_>_*)const_::_5_::TSTR_FGetRelevantLightsCommand4090>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::GetRelevantLights(UPrimitiveComponent_*,TArray<ULightComponent_const_*,TSizedDefaultAllocator<32>_>_*)const_::_5_::TSTR_FGetRelevantLightsCommand4090>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::GetRelevantLights(UPrimitiveComponent_*,TArray<ULightComponent_const_*,TSizedDefaultAllocator<32>_>_*)const_::_5_::TSTR_FGetRelevantLightsCommand4090>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FGetRelevantLightsCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FGetRelevantLightsCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::GetRelevantLights(UPrimitiveComponent_*,TArray<ULightComponent_const_*,TSizedDefaultAllocator<32>_>_*)const_::_5_::TSTR_FGetRelevantLightsCommand4090>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::GetRelevantLights(UPrimitiveComponent_*,TArray<ULightComponent_const_*,TSizedDefaultAllocator<32>_>_*)const_::_5_::TSTR_FGetRelevantLightsCommand4090>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FGetRelevantLightsCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::GetRelevantLights(UPrimitiveComponent_*,TArray<ULightComponent_const_*,TSizedDefaultAllocator<32>_>_*)const_::_5_::TSTR_FGetRelevantLightsCommand4090>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::GetRelevantLights(UPrimitiveComponent_*,TArray<ULightComponent_const_*,TSizedDefaultAllocator<32>_>_*)const_::_5_::TSTR_FGetRelevantLightsCommand4090>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FGetRelevantLightsCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FGetRelevantLig;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145436a80

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::OnLevelAddedToWorld(FName_const_&,UWorld_*,bool)_::_2_::TSTR_FLevelAddedToWorld4531>
* __cdecl TRenderCommandTag<`FScene::OnLevelAddedToWorld'::__l2::TSTR_FLevelAddedToWorld4531>::Get
                    (void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::OnLevelAddedToWorld(FName_const_&,UWorld_*,bool)_::_2_::TSTR_FLevelAddedToWorld4531>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::OnLevelAddedToWorld(FName_const_&,UWorld_*,bool)_::_2_::TSTR_FLevelAddedToWorld4531>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::OnLevelAddedToWorld(FName_const_&,UWorld_*,bool)_::_2_::TSTR_FLevelAddedToWorld4531>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::OnLevelAddedToWorld(FName_const_&,UWorld_*,bool)_::_2_::TSTR_FLevelAddedToWorld4531>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FLevelAddedToWorld");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FLevelAddedToWorld",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::OnLevelAddedToWorld(FName_const_&,UWorld_*,bool)_::_2_::TSTR_FLevelAddedToWorld4531>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::OnLevelAddedToWorld(FName_const_&,UWorld_*,bool)_::_2_::TSTR_FLevelAddedToWorld4531>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FLevelAddedToWorld");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::OnLevelAddedToWorld(FName_const_&,UWorld_*,bool)_::_2_::TSTR_FLevelAddedToWorld4531>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::OnLevelAddedToWorld(FName_const_&,UWorld_*,bool)_::_2_::TSTR_FLevelAddedToWorld4531>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FLevelAddedToWorld",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FLevelAddedToWo;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145436c30

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::OnLevelRemovedFromWorld(FName_const_&,UWorld_*,bool)_::_2_::TSTR_FLevelRemovedFromWorld4550>
* __cdecl TRenderCommandTag<`FScene::OnLevelRemovedFromWorld'::__l2::TSTR_FLevelRemovedFromWorld4550>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::OnLevelRemovedFromWorld(FName_const_&,UWorld_*,bool)_::_2_::TSTR_FLevelRemovedFromWorld4550>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::OnLevelRemovedFromWorld(FName_const_&,UWorld_*,bool)_::_2_::TSTR_FLevelRemovedFromWorld4550>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::OnLevelRemovedFromWorld(FName_const_&,UWorld_*,bool)_::_2_::TSTR_FLevelRemovedFromWorld4550>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::OnLevelRemovedFromWorld(FName_const_&,UWorld_*,bool)_::_2_::TSTR_FLevelRemovedFromWorld4550>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FLevelRemovedFromWorld");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FLevelRemovedFromWorld",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::OnLevelRemovedFromWorld(FName_const_&,UWorld_*,bool)_::_2_::TSTR_FLevelRemovedFromWorld4550>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::OnLevelRemovedFromWorld(FName_const_&,UWorld_*,bool)_::_2_::TSTR_FLevelRemovedFromWorld4550>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FLevelRemovedFromWorld");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::OnLevelRemovedFromWorld(FName_const_&,UWorld_*,bool)_::_2_::TSTR_FLevelRemovedFromWorld4550>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::OnLevelRemovedFromWorld(FName_const_&,UWorld_*,bool)_::_2_::TSTR_FLevelRemovedFromWorld4550>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FLevelRemovedFromWorld",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FLevelRemovedFr;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145436de0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveLight(ULightComponent_*)_::_5_::TSTR_FQueueRemoveLightCommand3646>
* __cdecl TRenderCommandTag<`FScene::RemoveLight'::__l5::TSTR_FQueueRemoveLightCommand3646>::Get
                    (void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveLight(ULightComponent_*)_::_5_::TSTR_FQueueRemoveLightCommand3646>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveLight(ULightComponent_*)_::_5_::TSTR_FQueueRemoveLightCommand3646>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveLight(ULightComponent_*)_::_5_::TSTR_FQueueRemoveLightCommand3646>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveLight(ULightComponent_*)_::_5_::TSTR_FQueueRemoveLightCommand3646>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FQueueRemoveLightCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FQueueRemoveLightCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveLight(ULightComponent_*)_::_5_::TSTR_FQueueRemoveLightCommand3646>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveLight(ULightComponent_*)_::_5_::TSTR_FQueueRemoveLightCommand3646>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FQueueRemoveLightCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveLight(ULightComponent_*)_::_5_::TSTR_FQueueRemoveLightCommand3646>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveLight(ULightComponent_*)_::_5_::TSTR_FQueueRemoveLightCommand3646>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FQueueRemoveLightCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FQueueRemoveLig;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145436f90

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::Release(void)_::_2_::TSTR_FReleaseCommand4221>
* __cdecl TRenderCommandTag<`FScene::Release'::__l2::TSTR_FReleaseCommand4221>::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::Release(void)_::_2_::TSTR_FReleaseCommand4221>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::Release(void)_::_2_::TSTR_FReleaseCommand4221>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::Release(void)_::_2_::TSTR_FReleaseCommand4221>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::Release(void)_::_2_::TSTR_FReleaseCommand4221>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FReleaseCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FReleaseCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::Release(void)_::_2_::TSTR_FReleaseCommand4221>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::Release(void)_::_2_::TSTR_FReleaseCommand4221>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FReleaseCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::Release(void)_::_2_::TSTR_FReleaseCommand4221>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::Release(void)_::_2_::TSTR_FReleaseCommand4221>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FReleaseCommand",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FReleaseCommand;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145437140

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<FPrimitiveSceneDesc>(TArrayView<FPrimitiveSceneDesc_*,int>)_::_2_::TSTR_FReleasePrimitiveCommand2123>
* __cdecl TRenderCommandTag<`FScene::BatchReleasePrimitivesInternal<FPrimitiveSceneDesc>'::__l2::TSTR_FReleasePrimitiveCommand2123>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<struct_FPrimitiveSceneDesc>(class_TArrayView<struct_FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<FPrimitiveSceneDesc>(TArrayView<FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<struct_FPrimitiveSceneDesc>(class_TArrayView<struct_FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<FPrimitiveSceneDesc>(TArrayView<FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<struct_FPrimitiveSceneDesc>(class_TArrayView<struct_FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<FPrimitiveSceneDesc>(TArrayView<FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"FReleasePrimitiveCommand");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<struct_FPrimitiveSceneDesc>(class_TArrayView<struct_FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<FPrimitiveSceneDesc>(TArrayView<FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>::Get(void)'
                ::__l2::Stat,*pFVar1,L"FReleasePrimitiveCommand","STATGROUP_RenderThreadCommands",
               "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<struct_FPrimitiveSceneDesc>(class_TArrayView<struct_FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<FPrimitiveSceneDesc>(TArrayView<FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<struct_FPrimitiveSceneDesc>(class_TArrayView<struct_FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<FPrimitiveSceneDesc>(TArrayView<FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<struct_FPrimitiveSceneDesc>(class_TArrayView<struct_FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<FPrimitiveSceneDesc>(TArrayView<FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<struct_FPrimitiveSceneDesc>(class_TArrayView<struct_FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<FPrimitiveSceneDesc>(TArrayView<FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"FReleasePrimitiveCommand");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<struct_FPrimitiveSceneDesc>(class_TArrayView<struct_FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<FPrimitiveSceneDesc>(TArrayView<FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"FReleasePrimitiveCommand",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"FReleasePrimitiveCommand";
    _DAT_15512aed8 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<struct_FPrimitiveSceneDesc>(class_TArrayView<struct_FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<FPrimitiveSceneDesc>(TArrayView<FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<FPrimitiveSceneDesc>(TArrayView<FPrimitiveSceneDesc_*,int>)_::_2_::TSTR_FReleasePrimitiveCommand2123>
          *)&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<struct_FPrimitiveSceneDesc>(class_TArrayView<struct_FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<FPrimitiveSceneDesc>(TArrayView<FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>::Get(void)'
             ::__l2::Tag;
}

// Get @ 145437300

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<UPrimitiveComponent>(TArrayView<UPrimitiveComponent_*,int>)_::_2_::TSTR_FReleasePrimitiveCommand2123>
* __cdecl TRenderCommandTag<`FScene::BatchReleasePrimitivesInternal<UPrimitiveComponent>'::__l2::TSTR_FReleasePrimitiveCommand2123>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<class_UPrimitiveComponent>(class_TArrayView<class_UPrimitiveComponent*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<UPrimitiveComponent>(TArrayView<UPrimitiveComponent*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<class_UPrimitiveComponent>(class_TArrayView<class_UPrimitiveComponent*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<UPrimitiveComponent>(TArrayView<UPrimitiveComponent*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<class_UPrimitiveComponent>(class_TArrayView<class_UPrimitiveComponent*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<UPrimitiveComponent>(TArrayView<UPrimitiveComponent*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"FReleasePrimitiveCommand");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<class_UPrimitiveComponent>(class_TArrayView<class_UPrimitiveComponent*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<UPrimitiveComponent>(TArrayView<UPrimitiveComponent*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>::Get(void)'
                ::__l2::Stat,*pFVar1,L"FReleasePrimitiveCommand","STATGROUP_RenderThreadCommands",
               "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<class_UPrimitiveComponent>(class_TArrayView<class_UPrimitiveComponent*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<UPrimitiveComponent>(TArrayView<UPrimitiveComponent*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<class_UPrimitiveComponent>(class_TArrayView<class_UPrimitiveComponent*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<UPrimitiveComponent>(TArrayView<UPrimitiveComponent*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<class_UPrimitiveComponent>(class_TArrayView<class_UPrimitiveComponent*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<UPrimitiveComponent>(TArrayView<UPrimitiveComponent*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<class_UPrimitiveComponent>(class_TArrayView<class_UPrimitiveComponent*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<UPrimitiveComponent>(TArrayView<UPrimitiveComponent*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"FReleasePrimitiveCommand");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<class_UPrimitiveComponent>(class_TArrayView<class_UPrimitiveComponent*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<UPrimitiveComponent>(TArrayView<UPrimitiveComponent*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"FReleasePrimitiveCommand",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"FReleasePrimitiveCommand";
    _DAT_15512af08 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<class_UPrimitiveComponent>(class_TArrayView<class_UPrimitiveComponent*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<UPrimitiveComponent>(TArrayView<UPrimitiveComponent*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<UPrimitiveComponent>(TArrayView<UPrimitiveComponent_*,int>)_::_2_::TSTR_FReleasePrimitiveCommand2123>
          *)&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<class_UPrimitiveComponent>(class_TArrayView<class_UPrimitiveComponent*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchReleasePrimitivesInternal<UPrimitiveComponent>(TArrayView<UPrimitiveComponent*___ptr64,int>)___ptr64'::`2'::TSTR_FReleasePrimitiveCommand2123>::Get(void)'
             ::__l2::Tag;
}

// Get @ 1454374c0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveReflectionCapture(UReflectionCaptureComponent_*)_::_5_::TSTR_FRemoveCaptureCommand2793>
* __cdecl TRenderCommandTag<`FScene::RemoveReflectionCapture'::__l5::TSTR_FRemoveCaptureCommand2793>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveReflectionCapture(UReflectionCaptureComponent_*)_::_5_::TSTR_FRemoveCaptureCommand2793>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveReflectionCapture(UReflectionCaptureComponent_*)_::_5_::TSTR_FRemoveCaptureCommand2793>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveReflectionCapture(UReflectionCaptureComponent_*)_::_5_::TSTR_FRemoveCaptureCommand2793>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveReflectionCapture(UReflectionCaptureComponent_*)_::_5_::TSTR_FRemoveCaptureCommand2793>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FRemoveCaptureCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FRemoveCaptureCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveReflectionCapture(UReflectionCaptureComponent_*)_::_5_::TSTR_FRemoveCaptureCommand2793>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveReflectionCapture(UReflectionCaptureComponent_*)_::_5_::TSTR_FRemoveCaptureCommand2793>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FRemoveCaptureCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveReflectionCapture(UReflectionCaptureComponent_*)_::_5_::TSTR_FRemoveCaptureCommand2793>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveReflectionCapture(UReflectionCaptureComponent_*)_::_5_::TSTR_FRemoveCaptureCommand2793>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FRemoveCaptureCommand",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FRemoveCaptureC;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145437670

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveDecal(UDecalComponent_*)_::_5_::TSTR_FRemoveDecalCommand2528>
* __cdecl TRenderCommandTag<`FScene::RemoveDecal'::__l5::TSTR_FRemoveDecalCommand2528>::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveDecal(UDecalComponent_*)_::_5_::TSTR_FRemoveDecalCommand2528>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveDecal(UDecalComponent_*)_::_5_::TSTR_FRemoveDecalCommand2528>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveDecal(UDecalComponent_*)_::_5_::TSTR_FRemoveDecalCommand2528>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveDecal(UDecalComponent_*)_::_5_::TSTR_FRemoveDecalCommand2528>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FRemoveDecalCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FRemoveDecalCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveDecal(UDecalComponent_*)_::_5_::TSTR_FRemoveDecalCommand2528>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveDecal(UDecalComponent_*)_::_5_::TSTR_FRemoveDecalCommand2528>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FRemoveDecalCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveDecal(UDecalComponent_*)_::_5_::TSTR_FRemoveDecalCommand2528>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveDecal(UDecalComponent_*)_::_5_::TSTR_FRemoveDecalCommand2528>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FRemoveDecalCommand",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FRemoveDecalCom;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145437820

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveExponentialHeightFog(unsigned___int64)_::_2_::TSTR_FRemoveFogCommand3686>
* __cdecl TRenderCommandTag<`FScene::RemoveExponentialHeightFog'::__l2::TSTR_FRemoveFogCommand3686>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveExponentialHeightFog(unsigned___int64)_::_2_::TSTR_FRemoveFogCommand3686>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveExponentialHeightFog(unsigned___int64)_::_2_::TSTR_FRemoveFogCommand3686>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveExponentialHeightFog(unsigned___int64)_::_2_::TSTR_FRemoveFogCommand3686>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveExponentialHeightFog(unsigned___int64)_::_2_::TSTR_FRemoveFogCommand3686>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FRemoveFogCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FRemoveFogCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveExponentialHeightFog(unsigned___int64)_::_2_::TSTR_FRemoveFogCommand3686>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveExponentialHeightFog(unsigned___int64)_::_2_::TSTR_FRemoveFogCommand3686>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FRemoveFogCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveExponentialHeightFog(unsigned___int64)_::_2_::TSTR_FRemoveFogCommand3686>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveExponentialHeightFog(unsigned___int64)_::_2_::TSTR_FRemoveFogCommand3686>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FRemoveFogCommand",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FRemoveFogComma;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1454379d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<FPrimitiveSceneDesc>(TArrayView<FPrimitiveSceneDesc_*,int>)_::_15_::TSTR_FRemovePrimitiveCommand2043>
* __cdecl TRenderCommandTag<`FScene::BatchRemovePrimitivesInternal<FPrimitiveSceneDesc>'::__l15::TSTR_FRemovePrimitiveCommand2043>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<struct_FPrimitiveSceneDesc>(class_TArrayView<struct_FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<FPrimitiveSceneDesc>(TArrayView<FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<struct_FPrimitiveSceneDesc>(class_TArrayView<struct_FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<FPrimitiveSceneDesc>(TArrayView<FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<struct_FPrimitiveSceneDesc>(class_TArrayView<struct_FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<FPrimitiveSceneDesc>(TArrayView<FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"FRemovePrimitiveCommand");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<struct_FPrimitiveSceneDesc>(class_TArrayView<struct_FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<FPrimitiveSceneDesc>(TArrayView<FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>::Get(void)'
                ::__l2::Stat,*pFVar1,L"FRemovePrimitiveCommand","STATGROUP_RenderThreadCommands",
               "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<struct_FPrimitiveSceneDesc>(class_TArrayView<struct_FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<FPrimitiveSceneDesc>(TArrayView<FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<struct_FPrimitiveSceneDesc>(class_TArrayView<struct_FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<FPrimitiveSceneDesc>(TArrayView<FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<struct_FPrimitiveSceneDesc>(class_TArrayView<struct_FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<FPrimitiveSceneDesc>(TArrayView<FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<struct_FPrimitiveSceneDesc>(class_TArrayView<struct_FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<FPrimitiveSceneDesc>(TArrayView<FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"FRemovePrimitiveCommand");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<struct_FPrimitiveSceneDesc>(class_TArrayView<struct_FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<FPrimitiveSceneDesc>(TArrayView<FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"FRemovePrimitiveCommand",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"FRemovePrimitiveCommand";
    _DAT_15512af38 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<struct_FPrimitiveSceneDesc>(class_TArrayView<struct_FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<FPrimitiveSceneDesc>(TArrayView<FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<FPrimitiveSceneDesc>(TArrayView<FPrimitiveSceneDesc_*,int>)_::_15_::TSTR_FRemovePrimitiveCommand2043>
          *)&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<struct_FPrimitiveSceneDesc>(class_TArrayView<struct_FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<FPrimitiveSceneDesc>(TArrayView<FPrimitiveSceneDesc*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>::Get(void)'
             ::__l2::Tag;
}

// Get @ 145437b90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<UPrimitiveComponent>(TArrayView<UPrimitiveComponent_*,int>)_::_15_::TSTR_FRemovePrimitiveCommand2043>
* __cdecl TRenderCommandTag<`FScene::BatchRemovePrimitivesInternal<UPrimitiveComponent>'::__l15::TSTR_FRemovePrimitiveCommand2043>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<class_UPrimitiveComponent>(class_TArrayView<class_UPrimitiveComponent*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<UPrimitiveComponent>(TArrayView<UPrimitiveComponent*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<class_UPrimitiveComponent>(class_TArrayView<class_UPrimitiveComponent*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<UPrimitiveComponent>(TArrayView<UPrimitiveComponent*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<class_UPrimitiveComponent>(class_TArrayView<class_UPrimitiveComponent*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<UPrimitiveComponent>(TArrayView<UPrimitiveComponent*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"FRemovePrimitiveCommand");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<class_UPrimitiveComponent>(class_TArrayView<class_UPrimitiveComponent*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<UPrimitiveComponent>(TArrayView<UPrimitiveComponent*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>::Get(void)'
                ::__l2::Stat,*pFVar1,L"FRemovePrimitiveCommand","STATGROUP_RenderThreadCommands",
               "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<class_UPrimitiveComponent>(class_TArrayView<class_UPrimitiveComponent*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<UPrimitiveComponent>(TArrayView<UPrimitiveComponent*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<class_UPrimitiveComponent>(class_TArrayView<class_UPrimitiveComponent*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<UPrimitiveComponent>(TArrayView<UPrimitiveComponent*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<class_UPrimitiveComponent>(class_TArrayView<class_UPrimitiveComponent*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<UPrimitiveComponent>(TArrayView<UPrimitiveComponent*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<class_UPrimitiveComponent>(class_TArrayView<class_UPrimitiveComponent*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<UPrimitiveComponent>(TArrayView<UPrimitiveComponent*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"FRemovePrimitiveCommand");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<class_UPrimitiveComponent>(class_TArrayView<class_UPrimitiveComponent*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<UPrimitiveComponent>(TArrayView<UPrimitiveComponent*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"FRemovePrimitiveCommand",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"FRemovePrimitiveCommand";
    _DAT_15512af68 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<class_UPrimitiveComponent>(class_TArrayView<class_UPrimitiveComponent*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<UPrimitiveComponent>(TArrayView<UPrimitiveComponent*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<UPrimitiveComponent>(TArrayView<UPrimitiveComponent_*,int>)_::_15_::TSTR_FRemovePrimitiveCommand2043>
          *)&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<class_UPrimitiveComponent>(class_TArrayView<class_UPrimitiveComponent*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::BatchRemovePrimitivesInternal<UPrimitiveComponent>(TArrayView<UPrimitiveComponent*___ptr64,int>)___ptr64'::`15'::TSTR_FRemovePrimitiveCommand2043>::Get(void)'
             ::__l2::Tag;
}

// Get @ 145437d50

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveWindSource(UWindDirectionalSourceComponent_*)_::_5_::TSTR_FRemoveWindSourceCommand3739>
* __cdecl TRenderCommandTag<`FScene::RemoveWindSource'::__l5::TSTR_FRemoveWindSourceCommand3739>::
          Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveWindSource(UWindDirectionalSourceComponent_*)_::_5_::TSTR_FRemoveWindSourceCommand3739>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveWindSource(UWindDirectionalSourceComponent_*)_::_5_::TSTR_FRemoveWindSourceCommand3739>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveWindSource(UWindDirectionalSourceComponent_*)_::_5_::TSTR_FRemoveWindSourceCommand3739>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveWindSource(UWindDirectionalSourceComponent_*)_::_5_::TSTR_FRemoveWindSourceCommand3739>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FRemoveWindSourceCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FRemoveWindSourceCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveWindSource(UWindDirectionalSourceComponent_*)_::_5_::TSTR_FRemoveWindSourceCommand3739>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveWindSource(UWindDirectionalSourceComponent_*)_::_5_::TSTR_FRemoveWindSourceCommand3739>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FRemoveWindSourceCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveWindSource(UWindDirectionalSourceComponent_*)_::_5_::TSTR_FRemoveWindSourceCommand3739>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveWindSource(UWindDirectionalSourceComponent_*)_::_5_::TSTR_FRemoveWindSourceCommand3739>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FRemoveWindSourceCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FRemoveWindSour;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145437f00

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateWindSource(UWindDirectionalSourceComponent_*)_::_5_::TSTR_FRemoveWindSourceCommand3759>
* __cdecl TRenderCommandTag<`FScene::UpdateWindSource'::__l5::TSTR_FRemoveWindSourceCommand3759>::
          Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateWindSource(UWindDirectionalSourceComponent_*)_::_5_::TSTR_FRemoveWindSourceCommand3759>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateWindSource(UWindDirectionalSourceComponent_*)_::_5_::TSTR_FRemoveWindSourceCommand3759>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateWindSource(UWindDirectionalSourceComponent_*)_::_5_::TSTR_FRemoveWindSourceCommand3759>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateWindSource(UWindDirectionalSourceComponent_*)_::_5_::TSTR_FRemoveWindSourceCommand3759>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FRemoveWindSourceCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FRemoveWindSourceCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateWindSource(UWindDirectionalSourceComponent_*)_::_5_::TSTR_FRemoveWindSourceCommand3759>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateWindSource(UWindDirectionalSourceComponent_*)_::_5_::TSTR_FRemoveWindSourceCommand3759>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FRemoveWindSourceCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateWindSource(UWindDirectionalSourceComponent_*)_::_5_::TSTR_FRemoveWindSourceCommand3759>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateWindSource(UWindDirectionalSourceComponent_*)_::_5_::TSTR_FRemoveWindSourceCommand3759>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FRemoveWindSourceCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FRemoveWindSour;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1454380b0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::ResetPhysicsField(void)_::_2_::TSTR_FResetPhysicsFieldCommand2474>
* __cdecl TRenderCommandTag<`FScene::ResetPhysicsField'::__l2::TSTR_FResetPhysicsFieldCommand2474>::
          Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::ResetPhysicsField(void)_::_2_::TSTR_FResetPhysicsFieldCommand2474>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::ResetPhysicsField(void)_::_2_::TSTR_FResetPhysicsFieldCommand2474>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::ResetPhysicsField(void)_::_2_::TSTR_FResetPhysicsFieldCommand2474>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::ResetPhysicsField(void)_::_2_::TSTR_FResetPhysicsFieldCommand2474>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FResetPhysicsFieldCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FResetPhysicsFieldCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::ResetPhysicsField(void)_::_2_::TSTR_FResetPhysicsFieldCommand2474>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::ResetPhysicsField(void)_::_2_::TSTR_FResetPhysicsFieldCommand2474>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FResetPhysicsFieldCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::ResetPhysicsField(void)_::_2_::TSTR_FResetPhysicsFieldCommand2474>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::ResetPhysicsField(void)_::_2_::TSTR_FResetPhysicsFieldCommand2474>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FResetPhysicsFieldCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FResetPhysicsFi;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145438260

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:___cdecl__public:_virtual_void___cdecl_FRendererModule::StartupModule(void)_::_2_::<lambda_1>::operator()(void)const_::_2_::TSTR_FSceneRendererCleanUp99>
* __cdecl TRenderCommandTag<``FRendererModule::StartupModule'::__l2::<lambda_1>::operator()'::__l2::TSTR_FSceneRendererCleanUp99>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl__public:_virtual_void___cdecl_FRendererModule::StartupModule(void)_::_2_::<lambda_1>::operator()(void)const_::_2_::TSTR_FSceneRendererCleanUp99>_const_&___cdecl_TRenderCommandTag<_public:___cdecl__public:_virtual_void___cdecl_FRendererModule::StartupModule(void)_::_2_::<lambda_1>::operator()(void)const_::_2_::TSTR_FSceneRendererCleanUp99>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl__public:_virtual_void___cdecl_FRendererModule::StartupModule(void)_::_2_::<lambda_1>::operator()(void)const_::_2_::TSTR_FSceneRendererCleanUp99>_const_&___cdecl_TRenderCommandTag<_public:___cdecl__public:_virtual_void___cdecl_FRendererModule::StartupModule(void)_::_2_::<lambda_1>::operator()(void)const_::_2_::TSTR_FSceneRendererCleanUp99>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FSceneRendererCleanUp");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FSceneRendererCleanUp",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl__public:_virtual_void___cdecl_FRendererModule::StartupModule(void)_::_2_::<lambda_1>::operator()(void)const_::_2_::TSTR_FSceneRendererCleanUp99>_const_&___cdecl_TRenderCommandTag<_public:___cdecl__public:_virtual_void___cdecl_FRendererModule::StartupModule(void)_::_2_::<lambda_1>::operator()(void)const_::_2_::TSTR_FSceneRendererCleanUp99>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FSceneRendererCleanUp");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl__public:_virtual_void___cdecl_FRendererModule::StartupModule(void)_::_2_::<lambda_1>::operator()(void)const_::_2_::TSTR_FSceneRendererCleanUp99>_const_&___cdecl_TRenderCommandTag<_public:___cdecl__public:_virtual_void___cdecl_FRendererModule::StartupModule(void)_::_2_::<lambda_1>::operator()(void)const_::_2_::TSTR_FSceneRendererCleanUp99>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FSceneRendererCleanUp",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FSceneRendererC;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145438410

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::SetPhysicsField(FPhysicsFieldSceneProxy_*)_::_2_::TSTR_FSetPhysicsFieldCommand2451>
* __cdecl TRenderCommandTag<`FScene::SetPhysicsField'::__l2::TSTR_FSetPhysicsFieldCommand2451>::Get
                    (void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::SetPhysicsField(FPhysicsFieldSceneProxy_*)_::_2_::TSTR_FSetPhysicsFieldCommand2451>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::SetPhysicsField(FPhysicsFieldSceneProxy_*)_::_2_::TSTR_FSetPhysicsFieldCommand2451>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::SetPhysicsField(FPhysicsFieldSceneProxy_*)_::_2_::TSTR_FSetPhysicsFieldCommand2451>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::SetPhysicsField(FPhysicsFieldSceneProxy_*)_::_2_::TSTR_FSetPhysicsFieldCommand2451>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FSetPhysicsFieldCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FSetPhysicsFieldCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::SetPhysicsField(FPhysicsFieldSceneProxy_*)_::_2_::TSTR_FSetPhysicsFieldCommand2451>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::SetPhysicsField(FPhysicsFieldSceneProxy_*)_::_2_::TSTR_FSetPhysicsFieldCommand2451>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FSetPhysicsFieldCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::SetPhysicsField(FPhysicsFieldSceneProxy_*)_::_2_::TSTR_FSetPhysicsFieldCommand2451>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::SetPhysicsField(FPhysicsFieldSceneProxy_*)_::_2_::TSTR_FSetPhysicsFieldCommand2451>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FSetPhysicsFieldCommand"
                             ,"STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FSetPhysicsFiel;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1454385c0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::SetSkyLight(FSkyLightSceneProxy_*)_::_2_::TSTR_FSetSkyLightCommand2369>
* __cdecl TRenderCommandTag<`FScene::SetSkyLight'::__l2::TSTR_FSetSkyLightCommand2369>::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::SetSkyLight(FSkyLightSceneProxy_*)_::_2_::TSTR_FSetSkyLightCommand2369>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::SetSkyLight(FSkyLightSceneProxy_*)_::_2_::TSTR_FSetSkyLightCommand2369>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::SetSkyLight(FSkyLightSceneProxy_*)_::_2_::TSTR_FSetSkyLightCommand2369>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::SetSkyLight(FSkyLightSceneProxy_*)_::_2_::TSTR_FSetSkyLightCommand2369>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FSetSkyLightCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FSetSkyLightCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::SetSkyLight(FSkyLightSceneProxy_*)_::_2_::TSTR_FSetSkyLightCommand2369>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::SetSkyLight(FSkyLightSceneProxy_*)_::_2_::TSTR_FSetSkyLightCommand2369>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FSetSkyLightCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::SetSkyLight(FSkyLightSceneProxy_*)_::_2_::TSTR_FSetSkyLightCommand2369>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::SetSkyLight(FSkyLightSceneProxy_*)_::_2_::TSTR_FSetSkyLightCommand2369>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FSetSkyLightCommand",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FSetSkyLightCom;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145438770

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateDecalFadeOutTime(UDecalComponent_*)_::_5_::TSTR_FUpdateDecalFadeInTimeCommand2571>
* __cdecl TRenderCommandTag<`FScene::UpdateDecalFadeOutTime'::__l5::TSTR_FUpdateDecalFadeInTimeCommand2571>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateDecalFadeOutTime(UDecalComponent_*)_::_5_::TSTR_FUpdateDecalFadeInTimeCommand2571>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateDecalFadeOutTime(UDecalComponent_*)_::_5_::TSTR_FUpdateDecalFadeInTimeCommand2571>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateDecalFadeOutTime(UDecalComponent_*)_::_5_::TSTR_FUpdateDecalFadeInTimeCommand2571>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateDecalFadeOutTime(UDecalComponent_*)_::_5_::TSTR_FUpdateDecalFadeInTimeCommand2571>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FUpdateDecalFadeInTimeCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FUpdateDecalFadeInTimeCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateDecalFadeOutTime(UDecalComponent_*)_::_5_::TSTR_FUpdateDecalFadeInTimeCommand2571>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateDecalFadeOutTime(UDecalComponent_*)_::_5_::TSTR_FUpdateDecalFadeInTimeCommand2571>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FUpdateDecalFadeInTimeCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateDecalFadeOutTime(UDecalComponent_*)_::_5_::TSTR_FUpdateDecalFadeInTimeCommand2571>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateDecalFadeOutTime(UDecalComponent_*)_::_5_::TSTR_FUpdateDecalFadeInTimeCommand2571>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FUpdateDecalFadeInTimeCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FUpdateDecalFad;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145438920

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateDecalFadeInTime(UDecalComponent_*)_::_5_::TSTR_FUpdateDecalFadeInTimeCommand2597>
* __cdecl TRenderCommandTag<`FScene::UpdateDecalFadeInTime'::__l5::TSTR_FUpdateDecalFadeInTimeCommand2597>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateDecalFadeInTime(UDecalComponent_*)_::_5_::TSTR_FUpdateDecalFadeInTimeCommand2597>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateDecalFadeInTime(UDecalComponent_*)_::_5_::TSTR_FUpdateDecalFadeInTimeCommand2597>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateDecalFadeInTime(UDecalComponent_*)_::_5_::TSTR_FUpdateDecalFadeInTimeCommand2597>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateDecalFadeInTime(UDecalComponent_*)_::_5_::TSTR_FUpdateDecalFadeInTimeCommand2597>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FUpdateDecalFadeInTimeCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FUpdateDecalFadeInTimeCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateDecalFadeInTime(UDecalComponent_*)_::_5_::TSTR_FUpdateDecalFadeInTimeCommand2597>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateDecalFadeInTime(UDecalComponent_*)_::_5_::TSTR_FUpdateDecalFadeInTimeCommand2597>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FUpdateDecalFadeInTimeCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateDecalFadeInTime(UDecalComponent_*)_::_5_::TSTR_FUpdateDecalFadeInTimeCommand2597>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateDecalFadeInTime(UDecalComponent_*)_::_5_::TSTR_FUpdateDecalFadeInTimeCommand2597>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FUpdateDecalFadeInTimeCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FUpdateDecalFad;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145438ad0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateStaticDrawLists(void)_::_2_::TSTR_FUpdateDrawLists4138>
* __cdecl TRenderCommandTag<`FScene::UpdateStaticDrawLists'::__l2::TSTR_FUpdateDrawLists4138>::Get
                    (void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateStaticDrawLists(void)_::_2_::TSTR_FUpdateDrawLists4138>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateStaticDrawLists(void)_::_2_::TSTR_FUpdateDrawLists4138>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateStaticDrawLists(void)_::_2_::TSTR_FUpdateDrawLists4138>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateStaticDrawLists(void)_::_2_::TSTR_FUpdateDrawLists4138>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FUpdateDrawLists");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FUpdateDrawLists",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateStaticDrawLists(void)_::_2_::TSTR_FUpdateDrawLists4138>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateStaticDrawLists(void)_::_2_::TSTR_FUpdateDrawLists4138>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FUpdateDrawLists");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateStaticDrawLists(void)_::_2_::TSTR_FUpdateDrawLists4138>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateStaticDrawLists(void)_::_2_::TSTR_FUpdateDrawLists4138>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FUpdateDrawLists",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FUpdateDrawList;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145438c80

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSpeedTreeWind(double)_::_2_::TSTR_FUpdateSpeedTreeWindCommand3951>
* __cdecl TRenderCommandTag<`FScene::UpdateSpeedTreeWind'::__l2::TSTR_FUpdateSpeedTreeWindCommand3951>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSpeedTreeWind(double)_::_2_::TSTR_FUpdateSpeedTreeWindCommand3951>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSpeedTreeWind(double)_::_2_::TSTR_FUpdateSpeedTreeWindCommand3951>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSpeedTreeWind(double)_::_2_::TSTR_FUpdateSpeedTreeWindCommand3951>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSpeedTreeWind(double)_::_2_::TSTR_FUpdateSpeedTreeWindCommand3951>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FUpdateSpeedTreeWindCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FUpdateSpeedTreeWindCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSpeedTreeWind(double)_::_2_::TSTR_FUpdateSpeedTreeWindCommand3951>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSpeedTreeWind(double)_::_2_::TSTR_FUpdateSpeedTreeWindCommand3951>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FUpdateSpeedTreeWindCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSpeedTreeWind(double)_::_2_::TSTR_FUpdateSpeedTreeWindCommand3951>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSpeedTreeWind(double)_::_2_::TSTR_FUpdateSpeedTreeWindCommand3951>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FUpdateSpeedTreeWindCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FUpdateSpeedTre;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145438e30

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_UpdateStaticMeshesForMaterials(TArray<FMaterial_const_*,TSizedDefaultAllocator<32>_>_const_&)_::_2_::TSTR_FUpdateStaticMeshesForMaterials6901>
* __cdecl TRenderCommandTag<`UpdateStaticMeshesForMaterials'::__l2::TSTR_FUpdateStaticMeshesForMaterials6901>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_UpdateStaticMeshesForMaterials(TArray<FMaterial_const_*,TSizedDefaultAllocator<32>_>_const_&)_::_2_::TSTR_FUpdateStaticMeshesForMaterials6901>_const_&___cdecl_TRenderCommandTag<_void___cdecl_UpdateStaticMeshesForMaterials(TArray<FMaterial_const_*,TSizedDefaultAllocator<32>_>_const_&)_::_2_::TSTR_FUpdateStaticMeshesForMaterials6901>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_UpdateStaticMeshesForMaterials(TArray<FMaterial_const_*,TSizedDefaultAllocator<32>_>_const_&)_::_2_::TSTR_FUpdateStaticMeshesForMaterials6901>_const_&___cdecl_TRenderCommandTag<_void___cdecl_UpdateStaticMeshesForMaterials(TArray<FMaterial_const_*,TSizedDefaultAllocator<32>_>_const_&)_::_2_::TSTR_FUpdateStaticMeshesForMaterials6901>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FUpdateStaticMeshesForMaterials");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FUpdateStaticMeshesForMaterials",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_UpdateStaticMeshesForMaterials(TArray<FMaterial_const_*,TSizedDefaultAllocator<32>_>_const_&)_::_2_::TSTR_FUpdateStaticMeshesForMaterials6901>_const_&___cdecl_TRenderCommandTag<_void___cdecl_UpdateStaticMeshesForMaterials(TArray<FMaterial_const_*,TSizedDefaultAllocator<32>_>_const_&)_::_2_::TSTR_FUpdateStaticMeshesForMaterials6901>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FUpdateStaticMeshesForMaterials");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_UpdateStaticMeshesForMaterials(TArray<FMaterial_const_*,TSizedDefaultAllocator<32>_>_const_&)_::_2_::TSTR_FUpdateStaticMeshesForMaterials6901>_const_&___cdecl_TRenderCommandTag<_void___cdecl_UpdateStaticMeshesForMaterials(TArray<FMaterial_const_*,TSizedDefaultAllocator<32>_>_const_&)_::_2_::TSTR_FUpdateStaticMeshesForMaterials6901>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FUpdateStaticMeshesForMaterials","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FUpdateStaticMe;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145438fe0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:___cdecl_FScene::FScene(UWorld_*,bool,bool,bool,ERHIFeatureLevel::Type)_::_2_::TSTR_InitializeUniformBuffers1210>
* __cdecl TRenderCommandTag<`FScene::FScene'::__l2::TSTR_InitializeUniformBuffers1210>::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FScene::FScene(UWorld_*,bool,bool,bool,ERHIFeatureLevel::Type)_::_2_::TSTR_InitializeUniformBuffers1210>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FScene::FScene(UWorld_*,bool,bool,bool,ERHIFeatureLevel::Type)_::_2_::TSTR_InitializeUniformBuffers1210>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FScene::FScene(UWorld_*,bool,bool,bool,ERHIFeatureLevel::Type)_::_2_::TSTR_InitializeUniformBuffers1210>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FScene::FScene(UWorld_*,bool,bool,bool,ERHIFeatureLevel::Type)_::_2_::TSTR_InitializeUniformBuffers1210>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"InitializeUniformBuffers");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"InitializeUniformBuffers",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FScene::FScene(UWorld_*,bool,bool,bool,ERHIFeatureLevel::Type)_::_2_::TSTR_InitializeUniformBuffers1210>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FScene::FScene(UWorld_*,bool,bool,bool,ERHIFeatureLevel::Type)_::_2_::TSTR_InitializeUniformBuffers1210>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"InitializeUniformBuffers");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FScene::FScene(UWorld_*,bool,bool,bool,ERHIFeatureLevel::Type)_::_2_::TSTR_InitializeUniformBuffers1210>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FScene::FScene(UWorld_*,bool,bool,bool,ERHIFeatureLevel::Type)_::_2_::TSTR_InitializeUniformBuffers1210>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"InitializeUniformBuffers","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_InitializeUnifo;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145439190

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::InvalidateLumenSurfaceCache_GameThread(UPrimitiveComponent_*)_::_12_::TSTR_InvalidateLumenSurfaceCacheCmd3314>
* __cdecl TRenderCommandTag<`FScene::InvalidateLumenSurfaceCache_GameThread'::__l12::TSTR_InvalidateLumenSurfaceCacheCmd3314>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::InvalidateLumenSurfaceCache_GameThread(UPrimitiveComponent_*)_::_12_::TSTR_InvalidateLumenSurfaceCacheCmd3314>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::InvalidateLumenSurfaceCache_GameThread(UPrimitiveComponent_*)_::_12_::TSTR_InvalidateLumenSurfaceCacheCmd3314>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::InvalidateLumenSurfaceCache_GameThread(UPrimitiveComponent_*)_::_12_::TSTR_InvalidateLumenSurfaceCacheCmd3314>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::InvalidateLumenSurfaceCache_GameThread(UPrimitiveComponent_*)_::_12_::TSTR_InvalidateLumenSurfaceCacheCmd3314>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"InvalidateLumenSurfaceCacheCmd");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"InvalidateLumenSurfaceCacheCmd",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::InvalidateLumenSurfaceCache_GameThread(UPrimitiveComponent_*)_::_12_::TSTR_InvalidateLumenSurfaceCacheCmd3314>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::InvalidateLumenSurfaceCache_GameThread(UPrimitiveComponent_*)_::_12_::TSTR_InvalidateLumenSurfaceCacheCmd3314>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"InvalidateLumenSurfaceCacheCmd");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::InvalidateLumenSurfaceCache_GameThread(UPrimitiveComponent_*)_::_12_::TSTR_InvalidateLumenSurfaceCacheCmd3314>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::InvalidateLumenSurfaceCache_GameThread(UPrimitiveComponent_*)_::_12_::TSTR_InvalidateLumenSurfaceCacheCmd3314>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"InvalidateLumenSurfaceCacheCmd","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_InvalidateLumen;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145439340

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::InvalidateRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*,UE::Math::TBoxSphereBounds<double,double>_const_&,EVTInvalidatePriority)_::_5_::TSTR_InvalidateRuntimeVirtualTextureCommand3267>
* __cdecl TRenderCommandTag<`FScene::InvalidateRuntimeVirtualTexture'::__l5::TSTR_InvalidateRuntimeVirtualTextureCommand3267>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::InvalidateRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*,UE::Math::TBoxSphereBounds<double,double>_const_&,EVTInvalidatePriority)_::_5_::TSTR_InvalidateRuntimeVirtualTextureCommand3267>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::InvalidateRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*,UE::Math::TBoxSphereBounds<double,double>_const_&,EVTInvalidatePriority)_::_5_::TSTR_InvalidateRuntimeVirtualTextureCommand3267>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::InvalidateRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*,UE::Math::TBoxSphereBounds<double,double>_const_&,EVTInvalidatePriority)_::_5_::TSTR_InvalidateRuntimeVirtualTextureCommand3267>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::InvalidateRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*,UE::Math::TBoxSphereBounds<double,double>_const_&,EVTInvalidatePriority)_::_5_::TSTR_InvalidateRuntimeVirtualTextureCommand3267>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"InvalidateRuntimeVirtualTextureCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                   L"InvalidateRuntimeVirtualTextureCommand","STATGROUP_RenderThreadCommands",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::InvalidateRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*,UE::Math::TBoxSphereBounds<double,double>_const_&,EVTInvalidatePriority)_::_5_::TSTR_InvalidateRuntimeVirtualTextureCommand3267>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::InvalidateRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*,UE::Math::TBoxSphereBounds<double,double>_const_&,EVTInvalidatePriority)_::_5_::TSTR_InvalidateRuntimeVirtualTextureCommand3267>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"InvalidateRuntimeVirtualTextureCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::InvalidateRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*,UE::Math::TBoxSphereBounds<double,double>_const_&,EVTInvalidatePriority)_::_5_::TSTR_InvalidateRuntimeVirtualTextureCommand3267>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::InvalidateRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*,UE::Math::TBoxSphereBounds<double,double>_const_&,EVTInvalidatePriority)_::_5_::TSTR_InvalidateRuntimeVirtualTextureCommand3267>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"InvalidateRuntimeVirtualTextureCommand",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_InvalidateRunti;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1454394f0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::OnWorldCleanup(UWorld_*,bool,bool,bool)_::_2_::TSTR_OnWorldCleanup163>
* __cdecl TRenderCommandTag<`FRendererModule::OnWorldCleanup'::__l2::TSTR_OnWorldCleanup163>::Get
                    (void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::OnWorldCleanup(UWorld_*,bool,bool,bool)_::_2_::TSTR_OnWorldCleanup163>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::OnWorldCleanup(UWorld_*,bool,bool,bool)_::_2_::TSTR_OnWorldCleanup163>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::OnWorldCleanup(UWorld_*,bool,bool,bool)_::_2_::TSTR_OnWorldCleanup163>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::OnWorldCleanup(UWorld_*,bool,bool,bool)_::_2_::TSTR_OnWorldCleanup163>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"OnWorldCleanup");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"OnWorldCleanup",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::OnWorldCleanup(UWorld_*,bool,bool,bool)_::_2_::TSTR_OnWorldCleanup163>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::OnWorldCleanup(UWorld_*,bool,bool,bool)_::_2_::TSTR_OnWorldCleanup163>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"OnWorldCleanup");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::OnWorldCleanup(UWorld_*,bool,bool,bool)_::_2_::TSTR_OnWorldCleanup163>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::OnWorldCleanup(UWorld_*,bool,bool,bool)_::_2_::TSTR_OnWorldCleanup163>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"OnWorldCleanup",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_OnWorldCleanup;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1454396a0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RequestPreloadRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*,UE::Math::TBoxSphereBounds<double,double>_const_&,int)_::_5_::TSTR_PreloadRuntimeVirtualTextureCommand3289>
* __cdecl TRenderCommandTag<`FScene::RequestPreloadRuntimeVirtualTexture'::__l5::TSTR_PreloadRuntimeVirtualTextureCommand3289>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RequestPreloadRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*,UE::Math::TBoxSphereBounds<double,double>_const_&,int)_::_5_::TSTR_PreloadRuntimeVirtualTextureCommand3289>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RequestPreloadRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*,UE::Math::TBoxSphereBounds<double,double>_const_&,int)_::_5_::TSTR_PreloadRuntimeVirtualTextureCommand3289>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RequestPreloadRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*,UE::Math::TBoxSphereBounds<double,double>_const_&,int)_::_5_::TSTR_PreloadRuntimeVirtualTextureCommand3289>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RequestPreloadRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*,UE::Math::TBoxSphereBounds<double,double>_const_&,int)_::_5_::TSTR_PreloadRuntimeVirtualTextureCommand3289>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"PreloadRuntimeVirtualTextureCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                   L"PreloadRuntimeVirtualTextureCommand","STATGROUP_RenderThreadCommands",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RequestPreloadRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*,UE::Math::TBoxSphereBounds<double,double>_const_&,int)_::_5_::TSTR_PreloadRuntimeVirtualTextureCommand3289>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RequestPreloadRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*,UE::Math::TBoxSphereBounds<double,double>_const_&,int)_::_5_::TSTR_PreloadRuntimeVirtualTextureCommand3289>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"PreloadRuntimeVirtualTextureCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RequestPreloadRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*,UE::Math::TBoxSphereBounds<double,double>_const_&,int)_::_5_::TSTR_PreloadRuntimeVirtualTextureCommand3289>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RequestPreloadRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*,UE::Math::TBoxSphereBounds<double,double>_const_&,int)_::_5_::TSTR_PreloadRuntimeVirtualTextureCommand3289>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"PreloadRuntimeVirtualTextureCommand","STATGROUP_RenderThreadCommands"
                             ,"STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_PreloadRuntimeV;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145439850

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::ReleaseReflectionCubemap(UReflectionCaptureComponent_*)_::_10_::TSTR_RemoveCaptureCommand2884>
* __cdecl TRenderCommandTag<`FScene::ReleaseReflectionCubemap'::__l10::TSTR_RemoveCaptureCommand2884>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::ReleaseReflectionCubemap(UReflectionCaptureComponent_*)_::_10_::TSTR_RemoveCaptureCommand2884>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::ReleaseReflectionCubemap(UReflectionCaptureComponent_*)_::_10_::TSTR_RemoveCaptureCommand2884>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::ReleaseReflectionCubemap(UReflectionCaptureComponent_*)_::_10_::TSTR_RemoveCaptureCommand2884>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::ReleaseReflectionCubemap(UReflectionCaptureComponent_*)_::_10_::TSTR_RemoveCaptureCommand2884>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"RemoveCaptureCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"RemoveCaptureCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::ReleaseReflectionCubemap(UReflectionCaptureComponent_*)_::_10_::TSTR_RemoveCaptureCommand2884>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::ReleaseReflectionCubemap(UReflectionCaptureComponent_*)_::_10_::TSTR_RemoveCaptureCommand2884>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"RemoveCaptureCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::ReleaseReflectionCubemap(UReflectionCaptureComponent_*)_::_10_::TSTR_RemoveCaptureCommand2884>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::ReleaseReflectionCubemap(UReflectionCaptureComponent_*)_::_10_::TSTR_RemoveCaptureCommand2884>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"RemoveCaptureCommand",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_RemoveCaptureCo;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145439a00

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*)_::_5_::TSTR_RemoveRuntimeVirtualTextureCommand3245>
* __cdecl TRenderCommandTag<`FScene::RemoveRuntimeVirtualTexture'::__l5::TSTR_RemoveRuntimeVirtualTextureCommand3245>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*)_::_5_::TSTR_RemoveRuntimeVirtualTextureCommand3245>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*)_::_5_::TSTR_RemoveRuntimeVirtualTextureCommand3245>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*)_::_5_::TSTR_RemoveRuntimeVirtualTextureCommand3245>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*)_::_5_::TSTR_RemoveRuntimeVirtualTextureCommand3245>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"RemoveRuntimeVirtualTextureCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                   L"RemoveRuntimeVirtualTextureCommand","STATGROUP_RenderThreadCommands",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*)_::_5_::TSTR_RemoveRuntimeVirtualTextureCommand3245>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*)_::_5_::TSTR_RemoveRuntimeVirtualTextureCommand3245>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"RemoveRuntimeVirtualTextureCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*)_::_5_::TSTR_RemoveRuntimeVirtualTextureCommand3245>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*)_::_5_::TSTR_RemoveRuntimeVirtualTextureCommand3245>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"RemoveRuntimeVirtualTextureCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_RemoveRuntimeVi;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145439bb0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemovePrecomputedLightVolume(FPrecomputedLightVolume_const_*)_::_2_::TSTR_RemoveVolumeCommand3073>
* __cdecl TRenderCommandTag<`FScene::RemovePrecomputedLightVolume'::__l2::TSTR_RemoveVolumeCommand3073>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemovePrecomputedLightVolume(FPrecomputedLightVolume_const_*)_::_2_::TSTR_RemoveVolumeCommand3073>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemovePrecomputedLightVolume(FPrecomputedLightVolume_const_*)_::_2_::TSTR_RemoveVolumeCommand3073>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemovePrecomputedLightVolume(FPrecomputedLightVolume_const_*)_::_2_::TSTR_RemoveVolumeCommand3073>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemovePrecomputedLightVolume(FPrecomputedLightVolume_const_*)_::_2_::TSTR_RemoveVolumeCommand3073>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"RemoveVolumeCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"RemoveVolumeCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemovePrecomputedLightVolume(FPrecomputedLightVolume_const_*)_::_2_::TSTR_RemoveVolumeCommand3073>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemovePrecomputedLightVolume(FPrecomputedLightVolume_const_*)_::_2_::TSTR_RemoveVolumeCommand3073>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"RemoveVolumeCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemovePrecomputedLightVolume(FPrecomputedLightVolume_const_*)_::_2_::TSTR_RemoveVolumeCommand3073>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemovePrecomputedLightVolume(FPrecomputedLightVolume_const_*)_::_2_::TSTR_RemoveVolumeCommand3073>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"RemoveVolumeCommand",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_RemoveVolumeCom;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145439d60

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemovePrecomputedVolumetricLightmap(FPrecomputedVolumetricLightmap_const_*)_::_2_::TSTR_RemoveVolumeCommand3171>
* __cdecl TRenderCommandTag<`FScene::RemovePrecomputedVolumetricLightmap'::__l2::TSTR_RemoveVolumeCommand3171>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemovePrecomputedVolumetricLightmap(FPrecomputedVolumetricLightmap_const_*)_::_2_::TSTR_RemoveVolumeCommand3171>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemovePrecomputedVolumetricLightmap(FPrecomputedVolumetricLightmap_const_*)_::_2_::TSTR_RemoveVolumeCommand3171>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemovePrecomputedVolumetricLightmap(FPrecomputedVolumetricLightmap_const_*)_::_2_::TSTR_RemoveVolumeCommand3171>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemovePrecomputedVolumetricLightmap(FPrecomputedVolumetricLightmap_const_*)_::_2_::TSTR_RemoveVolumeCommand3171>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"RemoveVolumeCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"RemoveVolumeCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemovePrecomputedVolumetricLightmap(FPrecomputedVolumetricLightmap_const_*)_::_2_::TSTR_RemoveVolumeCommand3171>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemovePrecomputedVolumetricLightmap(FPrecomputedVolumetricLightmap_const_*)_::_2_::TSTR_RemoveVolumeCommand3171>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"RemoveVolumeCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemovePrecomputedVolumetricLightmap(FPrecomputedVolumetricLightmap_const_*)_::_2_::TSTR_RemoveVolumeCommand3171>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemovePrecomputedVolumetricLightmap(FPrecomputedVolumetricLightmap_const_*)_::_2_::TSTR_RemoveVolumeCommand3171>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"RemoveVolumeCommand",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_RemoveVolumeCom;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145439f10

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::GPUBenchmark(FSynthBenchmarkResults_&,float)_::_2_::TSTR_RendererGPUBenchmarkCommand657>
* __cdecl TRenderCommandTag<`FRendererModule::GPUBenchmark'::__l2::TSTR_RendererGPUBenchmarkCommand657>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::GPUBenchmark(FSynthBenchmarkResults_&,float)_::_2_::TSTR_RendererGPUBenchmarkCommand657>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::GPUBenchmark(FSynthBenchmarkResults_&,float)_::_2_::TSTR_RendererGPUBenchmarkCommand657>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::GPUBenchmark(FSynthBenchmarkResults_&,float)_::_2_::TSTR_RendererGPUBenchmarkCommand657>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::GPUBenchmark(FSynthBenchmarkResults_&,float)_::_2_::TSTR_RendererGPUBenchmarkCommand657>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"RendererGPUBenchmarkCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"RendererGPUBenchmarkCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::GPUBenchmark(FSynthBenchmarkResults_&,float)_::_2_::TSTR_RendererGPUBenchmarkCommand657>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::GPUBenchmark(FSynthBenchmarkResults_&,float)_::_2_::TSTR_RendererGPUBenchmarkCommand657>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"RendererGPUBenchmarkCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::GPUBenchmark(FSynthBenchmarkResults_&,float)_::_2_::TSTR_RendererGPUBenchmarkCommand657>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::GPUBenchmark(FSynthBenchmarkResults_&,float)_::_2_::TSTR_RendererGPUBenchmarkCommand657>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"RendererGPUBenchmarkCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_RendererGPUBenc;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14543a0c0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::IncrementFrameNumber(void)_::_2_::TSTR_SceneStartFrame6971>
* __cdecl TRenderCommandTag<`FScene::IncrementFrameNumber'::__l2::TSTR_SceneStartFrame6971>::Get
                    (void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::IncrementFrameNumber(void)_::_2_::TSTR_SceneStartFrame6971>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::IncrementFrameNumber(void)_::_2_::TSTR_SceneStartFrame6971>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::IncrementFrameNumber(void)_::_2_::TSTR_SceneStartFrame6971>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::IncrementFrameNumber(void)_::_2_::TSTR_SceneStartFrame6971>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SceneStartFrame");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"SceneStartFrame",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::IncrementFrameNumber(void)_::_2_::TSTR_SceneStartFrame6971>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::IncrementFrameNumber(void)_::_2_::TSTR_SceneStartFrame6971>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SceneStartFrame");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::IncrementFrameNumber(void)_::_2_::TSTR_SceneStartFrame6971>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::IncrementFrameNumber(void)_::_2_::TSTR_SceneStartFrame6971>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"SceneStartFrame",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_SceneStartFrame;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14543a270

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:___cdecl_FSceneViewState::FSceneViewState(ERHIFeatureLevel::Type,FSceneViewState_*)_::_2_::TSTR_SceneViewStateAdddUniqueID307>
* __cdecl TRenderCommandTag<`FSceneViewState::FSceneViewState'::__l2::TSTR_SceneViewStateAdddUniqueID307>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FSceneViewState::FSceneViewState(ERHIFeatureLevel::Type,FSceneViewState_*)_::_2_::TSTR_SceneViewStateAdddUniqueID307>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FSceneViewState::FSceneViewState(ERHIFeatureLevel::Type,FSceneViewState_*)_::_2_::TSTR_SceneViewStateAdddUniqueID307>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FSceneViewState::FSceneViewState(ERHIFeatureLevel::Type,FSceneViewState_*)_::_2_::TSTR_SceneViewStateAdddUniqueID307>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FSceneViewState::FSceneViewState(ERHIFeatureLevel::Type,FSceneViewState_*)_::_2_::TSTR_SceneViewStateAdddUniqueID307>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SceneViewStateAdddUniqueID");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"SceneViewStateAdddUniqueID",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FSceneViewState::FSceneViewState(ERHIFeatureLevel::Type,FSceneViewState_*)_::_2_::TSTR_SceneViewStateAdddUniqueID307>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FSceneViewState::FSceneViewState(ERHIFeatureLevel::Type,FSceneViewState_*)_::_2_::TSTR_SceneViewStateAdddUniqueID307>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SceneViewStateAdddUniqueID");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FSceneViewState::FSceneViewState(ERHIFeatureLevel::Type,FSceneViewState_*)_::_2_::TSTR_SceneViewStateAdddUniqueID307>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FSceneViewState::FSceneViewState(ERHIFeatureLevel::Type,FSceneViewState_*)_::_2_::TSTR_SceneViewStateAdddUniqueID307>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"SceneViewStateAdddUniqueID","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_SceneViewStateA;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14543a420

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateLightProxy(ULightComponent_*,TFunction<void___cdecl(FLightSceneProxy_*)>_&&)_::_5_::TSTR_UpdateLightProxy3518>
* __cdecl TRenderCommandTag<`FScene::UpdateLightProxy'::__l5::TSTR_UpdateLightProxy3518>::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateLightProxy(ULightComponent_*,TFunction<void___cdecl(FLightSceneProxy_*)>_&&)_::_5_::TSTR_UpdateLightProxy3518>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateLightProxy(ULightComponent_*,TFunction<void___cdecl(FLightSceneProxy_*)>_&&)_::_5_::TSTR_UpdateLightProxy3518>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateLightProxy(ULightComponent_*,TFunction<void___cdecl(FLightSceneProxy_*)>_&&)_::_5_::TSTR_UpdateLightProxy3518>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateLightProxy(ULightComponent_*,TFunction<void___cdecl(FLightSceneProxy_*)>_&&)_::_5_::TSTR_UpdateLightProxy3518>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UpdateLightProxy");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"UpdateLightProxy",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateLightProxy(ULightComponent_*,TFunction<void___cdecl(FLightSceneProxy_*)>_&&)_::_5_::TSTR_UpdateLightProxy3518>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateLightProxy(ULightComponent_*,TFunction<void___cdecl(FLightSceneProxy_*)>_&&)_::_5_::TSTR_UpdateLightProxy3518>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UpdateLightProxy");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateLightProxy(ULightComponent_*,TFunction<void___cdecl(FLightSceneProxy_*)>_&&)_::_5_::TSTR_UpdateLightProxy3518>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateLightProxy(ULightComponent_*,TFunction<void___cdecl(FLightSceneProxy_*)>_&&)_::_5_::TSTR_UpdateLightProxy3518>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"UpdateLightProxy",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_UpdateLightProx;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14543a5d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_FScene::UpdateLightInternal<FUpdateLightColorParameters>(FLightSceneProxy_*,FUpdateLightColorParameters_&&)_::_8_::TSTR_UpdateLightTransform3490>
* __cdecl TRenderCommandTag<`FScene::UpdateLightInternal<FUpdateLightColorParameters>'::__l8::TSTR_UpdateLightTransform3490>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdateLightInternal<struct_FUpdateLightColorParameters>(class_FLightSceneProxy*___ptr64,struct_FUpdateLightColorParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdateLightInternal<FUpdateLightColorParameters>(FLightSceneProxy*___ptr64,FUpdateLightColorParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdateLightInternal<struct_FUpdateLightColorParameters>(class_FLightSceneProxy*___ptr64,struct_FUpdateLightColorParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdateLightInternal<FUpdateLightColorParameters>(FLightSceneProxy*___ptr64,FUpdateLightColorParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdateLightInternal<struct_FUpdateLightColorParameters>(class_FLightSceneProxy*___ptr64,struct_FUpdateLightColorParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdateLightInternal<FUpdateLightColorParameters>(FLightSceneProxy*___ptr64,FUpdateLightColorParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"UpdateLightTransform");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdateLightInternal<struct_FUpdateLightColorParameters>(class_FLightSceneProxy*___ptr64,struct_FUpdateLightColorParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdateLightInternal<FUpdateLightColorParameters>(FLightSceneProxy*___ptr64,FUpdateLightColorParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>::Get(void)'
                ::__l2::Stat,*pFVar1,L"UpdateLightTransform","STATGROUP_RenderThreadCommands",
               "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdateLightInternal<struct_FUpdateLightColorParameters>(class_FLightSceneProxy*___ptr64,struct_FUpdateLightColorParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdateLightInternal<FUpdateLightColorParameters>(FLightSceneProxy*___ptr64,FUpdateLightColorParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdateLightInternal<struct_FUpdateLightColorParameters>(class_FLightSceneProxy*___ptr64,struct_FUpdateLightColorParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdateLightInternal<FUpdateLightColorParameters>(FLightSceneProxy*___ptr64,FUpdateLightColorParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdateLightInternal<struct_FUpdateLightColorParameters>(class_FLightSceneProxy*___ptr64,struct_FUpdateLightColorParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdateLightInternal<FUpdateLightColorParameters>(FLightSceneProxy*___ptr64,FUpdateLightColorParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdateLightInternal<struct_FUpdateLightColorParameters>(class_FLightSceneProxy*___ptr64,struct_FUpdateLightColorParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdateLightInternal<FUpdateLightColorParameters>(FLightSceneProxy*___ptr64,FUpdateLightColorParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"UpdateLightTransform");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdateLightInternal<struct_FUpdateLightColorParameters>(class_FLightSceneProxy*___ptr64,struct_FUpdateLightColorParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdateLightInternal<FUpdateLightColorParameters>(FLightSceneProxy*___ptr64,FUpdateLightColorParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"UpdateLightTransform",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"UpdateLightTransform";
    _DAT_15512ae78 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdateLightInternal<struct_FUpdateLightColorParameters>(class_FLightSceneProxy*___ptr64,struct_FUpdateLightColorParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdateLightInternal<FUpdateLightColorParameters>(FLightSceneProxy*___ptr64,FUpdateLightColorParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_private:_void___cdecl_FScene::UpdateLightInternal<FUpdateLightColorParameters>(FLightSceneProxy_*,FUpdateLightColorParameters_&&)_::_8_::TSTR_UpdateLightTransform3490>
          *)&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdateLightInternal<struct_FUpdateLightColorParameters>(class_FLightSceneProxy*___ptr64,struct_FUpdateLightColorParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdateLightInternal<FUpdateLightColorParameters>(FLightSceneProxy*___ptr64,FUpdateLightColorParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>::Get(void)'
             ::__l2::Tag;
}

// Get @ 14543a790

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_FScene::UpdateLightInternal<FUpdateLightTransformParameters>(FLightSceneProxy_*,FUpdateLightTransformParameters_&&)_::_8_::TSTR_UpdateLightTransform3490>
* __cdecl TRenderCommandTag<`FScene::UpdateLightInternal<FUpdateLightTransformParameters>'::__l8::TSTR_UpdateLightTransform3490>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdateLightInternal<struct_FUpdateLightTransformParameters>(class_FLightSceneProxy*___ptr64,struct_FUpdateLightTransformParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdateLightInternal<FUpdateLightTransformParameters>(FLightSceneProxy*___ptr64,FUpdateLightTransformParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdateLightInternal<struct_FUpdateLightTransformParameters>(class_FLightSceneProxy*___ptr64,struct_FUpdateLightTransformParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdateLightInternal<FUpdateLightTransformParameters>(FLightSceneProxy*___ptr64,FUpdateLightTransformParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdateLightInternal<struct_FUpdateLightTransformParameters>(class_FLightSceneProxy*___ptr64,struct_FUpdateLightTransformParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdateLightInternal<FUpdateLightTransformParameters>(FLightSceneProxy*___ptr64,FUpdateLightTransformParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"UpdateLightTransform");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdateLightInternal<struct_FUpdateLightTransformParameters>(class_FLightSceneProxy*___ptr64,struct_FUpdateLightTransformParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdateLightInternal<FUpdateLightTransformParameters>(FLightSceneProxy*___ptr64,FUpdateLightTransformParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>::Get(void)'
                ::__l2::Stat,*pFVar1,L"UpdateLightTransform","STATGROUP_RenderThreadCommands",
               "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdateLightInternal<struct_FUpdateLightTransformParameters>(class_FLightSceneProxy*___ptr64,struct_FUpdateLightTransformParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdateLightInternal<FUpdateLightTransformParameters>(FLightSceneProxy*___ptr64,FUpdateLightTransformParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdateLightInternal<struct_FUpdateLightTransformParameters>(class_FLightSceneProxy*___ptr64,struct_FUpdateLightTransformParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdateLightInternal<FUpdateLightTransformParameters>(FLightSceneProxy*___ptr64,FUpdateLightTransformParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdateLightInternal<struct_FUpdateLightTransformParameters>(class_FLightSceneProxy*___ptr64,struct_FUpdateLightTransformParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdateLightInternal<FUpdateLightTransformParameters>(FLightSceneProxy*___ptr64,FUpdateLightTransformParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdateLightInternal<struct_FUpdateLightTransformParameters>(class_FLightSceneProxy*___ptr64,struct_FUpdateLightTransformParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdateLightInternal<FUpdateLightTransformParameters>(FLightSceneProxy*___ptr64,FUpdateLightTransformParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"UpdateLightTransform");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdateLightInternal<struct_FUpdateLightTransformParameters>(class_FLightSceneProxy*___ptr64,struct_FUpdateLightTransformParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdateLightInternal<FUpdateLightTransformParameters>(FLightSceneProxy*___ptr64,FUpdateLightTransformParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"UpdateLightTransform",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"UpdateLightTransform";
    _DAT_15512aea8 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdateLightInternal<struct_FUpdateLightTransformParameters>(class_FLightSceneProxy*___ptr64,struct_FUpdateLightTransformParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdateLightInternal<FUpdateLightTransformParameters>(FLightSceneProxy*___ptr64,FUpdateLightTransformParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_private:_void___cdecl_FScene::UpdateLightInternal<FUpdateLightTransformParameters>(FLightSceneProxy_*,FUpdateLightTransformParameters_&&)_::_8_::TSTR_UpdateLightTransform3490>
          *)&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdateLightInternal<struct_FUpdateLightTransformParameters>(class_FLightSceneProxy*___ptr64,struct_FUpdateLightTransformParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdateLightInternal<FUpdateLightTransformParameters>(FLightSceneProxy*___ptr64,FUpdateLightTransformParameters&&___ptr64)___ptr64'::`8'::TSTR_UpdateLightTransform3490>::Get(void)'
             ::__l2::Tag;
}

// Get @ 14543a950

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateParameterCollections(TArray<FMaterialParameterCollectionInstanceResource_*,TSizedDefaultAllocator<32>_>_const_&)_::_2_::TSTR_UpdateParameterCollectionsCommand748>
* __cdecl TRenderCommandTag<`FScene::UpdateParameterCollections'::__l2::TSTR_UpdateParameterCollectionsCommand748>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateParameterCollections(TArray<FMaterialParameterCollectionInstanceResource_*,TSizedDefaultAllocator<32>_>_const_&)_::_2_::TSTR_UpdateParameterCollectionsCommand748>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateParameterCollections(TArray<FMaterialParameterCollectionInstanceResource_*,TSizedDefaultAllocator<32>_>_const_&)_::_2_::TSTR_UpdateParameterCollectionsCommand748>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateParameterCollections(TArray<FMaterialParameterCollectionInstanceResource_*,TSizedDefaultAllocator<32>_>_const_&)_::_2_::TSTR_UpdateParameterCollectionsCommand748>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateParameterCollections(TArray<FMaterialParameterCollectionInstanceResource_*,TSizedDefaultAllocator<32>_>_const_&)_::_2_::TSTR_UpdateParameterCollectionsCommand748>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UpdateParameterCollectionsCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"UpdateParameterCollectionsCommand"
                   ,"STATGROUP_RenderThreadCommands","STATCAT_Advanced",L"Render Thread Commands",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar3 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      FVar2 = ::Stat;
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateParameterCollections(TArray<FMaterialParameterCollectionInstanceResource_*,TSizedDefaultAllocator<32>_>_const_&)_::_2_::TSTR_UpdateParameterCollectionsCommand748>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateParameterCollections(TArray<FMaterialParameterCollectionInstanceResource_*,TSizedDefaultAllocator<32>_>_const_&)_::_2_::TSTR_UpdateParameterCollectionsCommand748>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UpdateParameterCollectionsCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateParameterCollections(TArray<FMaterialParameterCollectionInstanceResource_*,TSizedDefaultAllocator<32>_>_const_&)_::_2_::TSTR_UpdateParameterCollectionsCommand748>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateParameterCollections(TArray<FMaterialParameterCollectionInstanceResource_*,TSizedDefaultAllocator<32>_>_const_&)_::_2_::TSTR_UpdateParameterCollectionsCommand748>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"UpdateParameterCollectionsCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_UpdateParameter;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14543ab00

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::SetPrecomputedVisibility(FPrecomputedVisibilityHandler_const_*)_::_2_::TSTR_UpdatePrecomputedVisibility4110>
* __cdecl TRenderCommandTag<`FScene::SetPrecomputedVisibility'::__l2::TSTR_UpdatePrecomputedVisibility4110>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::SetPrecomputedVisibility(FPrecomputedVisibilityHandler_const_*)_::_2_::TSTR_UpdatePrecomputedVisibility4110>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::SetPrecomputedVisibility(FPrecomputedVisibilityHandler_const_*)_::_2_::TSTR_UpdatePrecomputedVisibility4110>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::SetPrecomputedVisibility(FPrecomputedVisibilityHandler_const_*)_::_2_::TSTR_UpdatePrecomputedVisibility4110>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::SetPrecomputedVisibility(FPrecomputedVisibilityHandler_const_*)_::_2_::TSTR_UpdatePrecomputedVisibility4110>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UpdatePrecomputedVisibility");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"UpdatePrecomputedVisibility",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::SetPrecomputedVisibility(FPrecomputedVisibilityHandler_const_*)_::_2_::TSTR_UpdatePrecomputedVisibility4110>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::SetPrecomputedVisibility(FPrecomputedVisibilityHandler_const_*)_::_2_::TSTR_UpdatePrecomputedVisibility4110>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UpdatePrecomputedVisibility");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::SetPrecomputedVisibility(FPrecomputedVisibilityHandler_const_*)_::_2_::TSTR_UpdatePrecomputedVisibility4110>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::SetPrecomputedVisibility(FPrecomputedVisibilityHandler_const_*)_::_2_::TSTR_UpdatePrecomputedVisibility4110>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"UpdatePrecomputedVisibility","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_UpdatePrecomput;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14543acb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::TPayloadBase<7,0>_>(FPrimitiveSceneProxy_*,TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::TPayloadBase<7,0>_&&)_::_5_::TSTR_UpdatePrimitiveCmd1545>
* __cdecl TRenderCommandTag<`FScene::UpdatePrimitiveInternal<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::TPayloadBase<7,0>_>'::__l5::TSTR_UpdatePrimitiveCmd1545>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSceneUpdateCommandQueue<class_FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::TPayloadBase<7,0>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSceneUpdateCommandQueue<class_FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::TPayloadBase<7,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::TPayloadBase<7,0>_>(FPrimitiveSceneProxy*___ptr64,TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::TPayloadBase<7,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSceneUpdateCommandQueue<class_FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::TPayloadBase<7,0>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSceneUpdateCommandQueue<class_FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::TPayloadBase<7,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::TPayloadBase<7,0>_>(FPrimitiveSceneProxy*___ptr64,TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::TPayloadBase<7,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSceneUpdateCommandQueue<class_FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::TPayloadBase<7,0>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSceneUpdateCommandQueue<class_FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::TPayloadBase<7,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::TPayloadBase<7,0>_>(FPrimitiveSceneProxy*___ptr64,TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::TPayloadBase<7,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"UpdatePrimitiveCmd");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSceneUpdateCommandQueue<class_FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::TPayloadBase<7,0>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSceneUpdateCommandQueue<class_FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::TPayloadBase<7,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::TPayloadBase<7,0>_>(FPrimitiveSceneProxy*___ptr64,TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::TPayloadBase<7,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                ::__l2::Stat,*pFVar1,L"UpdatePrimitiveCmd","STATGROUP_RenderThreadCommands",
               "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSceneUpdateCommandQueue<class_FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::TPayloadBase<7,0>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSceneUpdateCommandQueue<class_FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::TPayloadBase<7,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::TPayloadBase<7,0>_>(FPrimitiveSceneProxy*___ptr64,TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::TPayloadBase<7,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSceneUpdateCommandQueue<class_FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::TPayloadBase<7,0>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSceneUpdateCommandQueue<class_FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::TPayloadBase<7,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::TPayloadBase<7,0>_>(FPrimitiveSceneProxy*___ptr64,TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::TPayloadBase<7,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSceneUpdateCommandQueue<class_FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::TPayloadBase<7,0>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSceneUpdateCommandQueue<class_FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::TPayloadBase<7,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::TPayloadBase<7,0>_>(FPrimitiveSceneProxy*___ptr64,TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::TPayloadBase<7,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSceneUpdateCommandQueue<class_FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::TPayloadBase<7,0>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSceneUpdateCommandQueue<class_FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::TPayloadBase<7,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::TPayloadBase<7,0>_>(FPrimitiveSceneProxy*___ptr64,TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::TPayloadBase<7,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"UpdatePrimitiveCmd");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSceneUpdateCommandQueue<class_FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::TPayloadBase<7,0>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSceneUpdateCommandQueue<class_FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::TPayloadBase<7,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::TPayloadBase<7,0>_>(FPrimitiveSceneProxy*___ptr64,TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::TPayloadBase<7,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"UpdatePrimitiveCmd",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"UpdatePrimitiveCmd";
    _DAT_15512af98 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSceneUpdateCommandQueue<class_FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::TPayloadBase<7,0>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSceneUpdateCommandQueue<class_FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::TPayloadBase<7,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::TPayloadBase<7,0>_>(FPrimitiveSceneProxy*___ptr64,TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::TPayloadBase<7,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::TPayloadBase<7,0>_>(FPrimitiveSceneProxy_*,TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::TPayloadBase<7,0>_&&)_::_5_::TSTR_UpdatePrimitiveCmd1545>
          *)&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSceneUpdateCommandQueue<class_FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::TPayloadBase<7,0>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSceneUpdateCommandQueue<class_FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::TPayloadBase<7,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::TPayloadBase<7,0>_>(FPrimitiveSceneProxy*___ptr64,TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::TPayloadBase<7,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
             ::__l2::Tag;
}

// Get @ 14543ae70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<float,4,0>_>(FPrimitiveSceneProxy_*,TSingleValuePrimitiveUpdatePayload<float,4,0>_&&)_::_5_::TSTR_UpdatePrimitiveCmd1545>
* __cdecl TRenderCommandTag<`FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<float,4,0>_>'::__l5::TSTR_UpdatePrimitiveCmd1545>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<float,4,0>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<float,4,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<float,4,0>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<float,4,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<float,4,0>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<float,4,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<float,4,0>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<float,4,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<float,4,0>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<float,4,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<float,4,0>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<float,4,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"UpdatePrimitiveCmd");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<float,4,0>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<float,4,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<float,4,0>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<float,4,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                ::__l2::Stat,*pFVar1,L"UpdatePrimitiveCmd","STATGROUP_RenderThreadCommands",
               "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<float,4,0>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<float,4,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<float,4,0>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<float,4,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<float,4,0>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<float,4,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<float,4,0>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<float,4,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<float,4,0>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<float,4,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<float,4,0>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<float,4,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<float,4,0>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<float,4,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<float,4,0>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<float,4,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"UpdatePrimitiveCmd");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<float,4,0>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<float,4,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<float,4,0>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<float,4,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"UpdatePrimitiveCmd",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"UpdatePrimitiveCmd";
    _DAT_15512b0e8 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<float,4,0>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<float,4,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<float,4,0>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<float,4,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<float,4,0>_>(FPrimitiveSceneProxy_*,TSingleValuePrimitiveUpdatePayload<float,4,0>_&&)_::_5_::TSTR_UpdatePrimitiveCmd1545>
          *)&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<float,4,0>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<float,4,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<float,4,0>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<float,4,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
             ::__l2::Tag;
}

// Get @ 14543b030

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>_>(FPrimitiveSceneProxy_*,TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>_&&)_::_5_::TSTR_UpdatePrimitiveCmd1545>
* __cdecl TRenderCommandTag<`FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>_>'::__l5::TSTR_UpdatePrimitiveCmd1545>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector2<float>,5,24>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector2<float>,5,24>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector2<float>,5,24>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector2<float>,5,24>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector2<float>,5,24>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector2<float>,5,24>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"UpdatePrimitiveCmd");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector2<float>,5,24>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector2<float>,5,24>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                ::__l2::Stat,*pFVar1,L"UpdatePrimitiveCmd","STATGROUP_RenderThreadCommands",
               "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector2<float>,5,24>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector2<float>,5,24>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector2<float>,5,24>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector2<float>,5,24>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector2<float>,5,24>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector2<float>,5,24>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector2<float>,5,24>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector2<float>,5,24>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"UpdatePrimitiveCmd");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector2<float>,5,24>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector2<float>,5,24>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"UpdatePrimitiveCmd",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"UpdatePrimitiveCmd";
    _DAT_15512b088 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector2<float>,5,24>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector2<float>,5,24>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>_>(FPrimitiveSceneProxy_*,TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>_&&)_::_5_::TSTR_UpdatePrimitiveCmd1545>
          *)&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector2<float>,5,24>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector2<float>,5,24>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
             ::__l2::Tag;
}

// Get @ 14543b1f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>_>(FPrimitiveSceneProxy_*,TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>_&&)_::_5_::TSTR_UpdatePrimitiveCmd1545>
* __cdecl TRenderCommandTag<`FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>_>'::__l5::TSTR_UpdatePrimitiveCmd1545>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector<float>,6,8>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector<float>,6,8>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector<float>,6,8>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector<float>,6,8>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector<float>,6,8>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector<float>,6,8>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"UpdatePrimitiveCmd");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector<float>,6,8>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector<float>,6,8>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                ::__l2::Stat,*pFVar1,L"UpdatePrimitiveCmd","STATGROUP_RenderThreadCommands",
               "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector<float>,6,8>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector<float>,6,8>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector<float>,6,8>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector<float>,6,8>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector<float>,6,8>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector<float>,6,8>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector<float>,6,8>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector<float>,6,8>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"UpdatePrimitiveCmd");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector<float>,6,8>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector<float>,6,8>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"UpdatePrimitiveCmd",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"UpdatePrimitiveCmd";
    _DAT_15512b0b8 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector<float>,6,8>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector<float>,6,8>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>_>(FPrimitiveSceneProxy_*,TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>_&&)_::_5_::TSTR_UpdatePrimitiveCmd1545>
          *)&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector<float>,6,8>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<struct_UE::Math::TVector<float>,6,8>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
             ::__l2::Tag;
}

// Get @ 14543b3b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16>_>(FPrimitiveSceneProxy_*,TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16>_&&)_::_5_::TSTR_UpdatePrimitiveCmd1545>
* __cdecl TRenderCommandTag<`FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16>_>'::__l5::TSTR_UpdatePrimitiveCmd1545>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<struct_FCustomPrimitiveData,3,16>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<struct_FCustomPrimitiveData,3,16>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<struct_FCustomPrimitiveData,3,16>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<struct_FCustomPrimitiveData,3,16>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<struct_FCustomPrimitiveData,3,16>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<struct_FCustomPrimitiveData,3,16>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"UpdatePrimitiveCmd");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<struct_FCustomPrimitiveData,3,16>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<struct_FCustomPrimitiveData,3,16>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                ::__l2::Stat,*pFVar1,L"UpdatePrimitiveCmd","STATGROUP_RenderThreadCommands",
               "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<struct_FCustomPrimitiveData,3,16>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<struct_FCustomPrimitiveData,3,16>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<struct_FCustomPrimitiveData,3,16>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<struct_FCustomPrimitiveData,3,16>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<struct_FCustomPrimitiveData,3,16>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<struct_FCustomPrimitiveData,3,16>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<struct_FCustomPrimitiveData,3,16>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<struct_FCustomPrimitiveData,3,16>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"UpdatePrimitiveCmd");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<struct_FCustomPrimitiveData,3,16>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<struct_FCustomPrimitiveData,3,16>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"UpdatePrimitiveCmd",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"UpdatePrimitiveCmd";
    _DAT_15512afc8 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<struct_FCustomPrimitiveData,3,16>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<struct_FCustomPrimitiveData,3,16>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16>_>(FPrimitiveSceneProxy_*,TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16>_&&)_::_5_::TSTR_UpdatePrimitiveCmd1545>
          *)&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<struct_FCustomPrimitiveData,3,16>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<struct_FCustomPrimitiveData,3,16>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
             ::__l2::Tag;
}

// Get @ 14543b570

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>_>(FPrimitiveSceneProxy_*,TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>_&&)_::_5_::TSTR_UpdatePrimitiveCmd1545>
* __cdecl TRenderCommandTag<`FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>_>'::__l5::TSTR_UpdatePrimitiveCmd1545>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<class_FPrimitiveComponentId,2,0>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<class_FPrimitiveComponentId,2,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<class_FPrimitiveComponentId,2,0>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<class_FPrimitiveComponentId,2,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<class_FPrimitiveComponentId,2,0>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<class_FPrimitiveComponentId,2,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"UpdatePrimitiveCmd");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<class_FPrimitiveComponentId,2,0>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<class_FPrimitiveComponentId,2,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                ::__l2::Stat,*pFVar1,L"UpdatePrimitiveCmd","STATGROUP_RenderThreadCommands",
               "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<class_FPrimitiveComponentId,2,0>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<class_FPrimitiveComponentId,2,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<class_FPrimitiveComponentId,2,0>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<class_FPrimitiveComponentId,2,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<class_FPrimitiveComponentId,2,0>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<class_FPrimitiveComponentId,2,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<class_FPrimitiveComponentId,2,0>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<class_FPrimitiveComponentId,2,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"UpdatePrimitiveCmd");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<class_FPrimitiveComponentId,2,0>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<class_FPrimitiveComponentId,2,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"UpdatePrimitiveCmd",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"UpdatePrimitiveCmd";
    _DAT_15512aff8 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<class_FPrimitiveComponentId,2,0>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<class_FPrimitiveComponentId,2,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>_>(FPrimitiveSceneProxy_*,TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>_&&)_::_5_::TSTR_UpdatePrimitiveCmd1545>
          *)&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_TSingleValuePrimitiveUpdatePayload<class_FPrimitiveComponentId,2,0>_>(class_FPrimitiveSceneProxy*___ptr64,struct_TSingleValuePrimitiveUpdatePayload<class_FPrimitiveComponentId,2,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>_>(FPrimitiveSceneProxy*___ptr64,TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
             ::__l2::Tag;
}

// Get @ 14543b730

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_FScene::UpdatePrimitiveInternal<FUpdateInstanceCommand>(FPrimitiveSceneProxy_*,FUpdateInstanceCommand_&&)_::_5_::TSTR_UpdatePrimitiveCmd1545>
* __cdecl TRenderCommandTag<`FScene::UpdatePrimitiveInternal<FUpdateInstanceCommand>'::__l5::TSTR_UpdatePrimitiveCmd1545>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_FUpdateInstanceCommand>(class_FPrimitiveSceneProxy*___ptr64,struct_FUpdateInstanceCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<FUpdateInstanceCommand>(FPrimitiveSceneProxy*___ptr64,FUpdateInstanceCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_FUpdateInstanceCommand>(class_FPrimitiveSceneProxy*___ptr64,struct_FUpdateInstanceCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<FUpdateInstanceCommand>(FPrimitiveSceneProxy*___ptr64,FUpdateInstanceCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_FUpdateInstanceCommand>(class_FPrimitiveSceneProxy*___ptr64,struct_FUpdateInstanceCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<FUpdateInstanceCommand>(FPrimitiveSceneProxy*___ptr64,FUpdateInstanceCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"UpdatePrimitiveCmd");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_FUpdateInstanceCommand>(class_FPrimitiveSceneProxy*___ptr64,struct_FUpdateInstanceCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<FUpdateInstanceCommand>(FPrimitiveSceneProxy*___ptr64,FUpdateInstanceCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                ::__l2::Stat,*pFVar1,L"UpdatePrimitiveCmd","STATGROUP_RenderThreadCommands",
               "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_FUpdateInstanceCommand>(class_FPrimitiveSceneProxy*___ptr64,struct_FUpdateInstanceCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<FUpdateInstanceCommand>(FPrimitiveSceneProxy*___ptr64,FUpdateInstanceCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_FUpdateInstanceCommand>(class_FPrimitiveSceneProxy*___ptr64,struct_FUpdateInstanceCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<FUpdateInstanceCommand>(FPrimitiveSceneProxy*___ptr64,FUpdateInstanceCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_FUpdateInstanceCommand>(class_FPrimitiveSceneProxy*___ptr64,struct_FUpdateInstanceCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<FUpdateInstanceCommand>(FPrimitiveSceneProxy*___ptr64,FUpdateInstanceCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_FUpdateInstanceCommand>(class_FPrimitiveSceneProxy*___ptr64,struct_FUpdateInstanceCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<FUpdateInstanceCommand>(FPrimitiveSceneProxy*___ptr64,FUpdateInstanceCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"UpdatePrimitiveCmd");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_FUpdateInstanceCommand>(class_FPrimitiveSceneProxy*___ptr64,struct_FUpdateInstanceCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<FUpdateInstanceCommand>(FPrimitiveSceneProxy*___ptr64,FUpdateInstanceCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"UpdatePrimitiveCmd",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"UpdatePrimitiveCmd";
    _DAT_15512b028 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_FUpdateInstanceCommand>(class_FPrimitiveSceneProxy*___ptr64,struct_FUpdateInstanceCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<FUpdateInstanceCommand>(FPrimitiveSceneProxy*___ptr64,FUpdateInstanceCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_private:_void___cdecl_FScene::UpdatePrimitiveInternal<FUpdateInstanceCommand>(FPrimitiveSceneProxy_*,FUpdateInstanceCommand_&&)_::_5_::TSTR_UpdatePrimitiveCmd1545>
          *)&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_FUpdateInstanceCommand>(class_FPrimitiveSceneProxy*___ptr64,struct_FUpdateInstanceCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<FUpdateInstanceCommand>(FPrimitiveSceneProxy*___ptr64,FUpdateInstanceCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
             ::__l2::Tag;
}

// Get @ 14543b8f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_FScene::UpdatePrimitiveInternal<FUpdateInstanceFromComputeCommand>(FPrimitiveSceneProxy_*,FUpdateInstanceFromComputeCommand_&&)_::_5_::TSTR_UpdatePrimitiveCmd1545>
* __cdecl TRenderCommandTag<`FScene::UpdatePrimitiveInternal<FUpdateInstanceFromComputeCommand>'::__l5::TSTR_UpdatePrimitiveCmd1545>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_FUpdateInstanceFromComputeCommand>(class_FPrimitiveSceneProxy*___ptr64,struct_FUpdateInstanceFromComputeCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<FUpdateInstanceFromComputeCommand>(FPrimitiveSceneProxy*___ptr64,FUpdateInstanceFromComputeCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_FUpdateInstanceFromComputeCommand>(class_FPrimitiveSceneProxy*___ptr64,struct_FUpdateInstanceFromComputeCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<FUpdateInstanceFromComputeCommand>(FPrimitiveSceneProxy*___ptr64,FUpdateInstanceFromComputeCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_FUpdateInstanceFromComputeCommand>(class_FPrimitiveSceneProxy*___ptr64,struct_FUpdateInstanceFromComputeCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<FUpdateInstanceFromComputeCommand>(FPrimitiveSceneProxy*___ptr64,FUpdateInstanceFromComputeCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"UpdatePrimitiveCmd");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_FUpdateInstanceFromComputeCommand>(class_FPrimitiveSceneProxy*___ptr64,struct_FUpdateInstanceFromComputeCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<FUpdateInstanceFromComputeCommand>(FPrimitiveSceneProxy*___ptr64,FUpdateInstanceFromComputeCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                ::__l2::Stat,*pFVar1,L"UpdatePrimitiveCmd","STATGROUP_RenderThreadCommands",
               "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_FUpdateInstanceFromComputeCommand>(class_FPrimitiveSceneProxy*___ptr64,struct_FUpdateInstanceFromComputeCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<FUpdateInstanceFromComputeCommand>(FPrimitiveSceneProxy*___ptr64,FUpdateInstanceFromComputeCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_FUpdateInstanceFromComputeCommand>(class_FPrimitiveSceneProxy*___ptr64,struct_FUpdateInstanceFromComputeCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<FUpdateInstanceFromComputeCommand>(FPrimitiveSceneProxy*___ptr64,FUpdateInstanceFromComputeCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_FUpdateInstanceFromComputeCommand>(class_FPrimitiveSceneProxy*___ptr64,struct_FUpdateInstanceFromComputeCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<FUpdateInstanceFromComputeCommand>(FPrimitiveSceneProxy*___ptr64,FUpdateInstanceFromComputeCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_FUpdateInstanceFromComputeCommand>(class_FPrimitiveSceneProxy*___ptr64,struct_FUpdateInstanceFromComputeCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<FUpdateInstanceFromComputeCommand>(FPrimitiveSceneProxy*___ptr64,FUpdateInstanceFromComputeCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"UpdatePrimitiveCmd");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_FUpdateInstanceFromComputeCommand>(class_FPrimitiveSceneProxy*___ptr64,struct_FUpdateInstanceFromComputeCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<FUpdateInstanceFromComputeCommand>(FPrimitiveSceneProxy*___ptr64,FUpdateInstanceFromComputeCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"UpdatePrimitiveCmd",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"UpdatePrimitiveCmd";
    _DAT_15512b058 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_FUpdateInstanceFromComputeCommand>(class_FPrimitiveSceneProxy*___ptr64,struct_FUpdateInstanceFromComputeCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<FUpdateInstanceFromComputeCommand>(FPrimitiveSceneProxy*___ptr64,FUpdateInstanceFromComputeCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_private:_void___cdecl_FScene::UpdatePrimitiveInternal<FUpdateInstanceFromComputeCommand>(FPrimitiveSceneProxy_*,FUpdateInstanceFromComputeCommand_&&)_::_5_::TSTR_UpdatePrimitiveCmd1545>
          *)&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveInternal<struct_FUpdateInstanceFromComputeCommand>(class_FPrimitiveSceneProxy*___ptr64,struct_FUpdateInstanceFromComputeCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveInternal<FUpdateInstanceFromComputeCommand>(FPrimitiveSceneProxy*___ptr64,FUpdateInstanceFromComputeCommand&&___ptr64)___ptr64'::`5'::TSTR_UpdatePrimitiveCmd1545>::Get(void)'
             ::__l2::Tag;
}

// Get @ 14543bab0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateReflectionCaptureTransform(UReflectionCaptureComponent_*)_::_5_::TSTR_UpdateReflectionCaptureTransformCommand2840>
* __cdecl TRenderCommandTag<`FScene::UpdateReflectionCaptureTransform'::__l5::TSTR_UpdateReflectionCaptureTransformCommand2840>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateReflectionCaptureTransform(UReflectionCaptureComponent_*)_::_5_::TSTR_UpdateReflectionCaptureTransformCommand2840>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateReflectionCaptureTransform(UReflectionCaptureComponent_*)_::_5_::TSTR_UpdateReflectionCaptureTransformCommand2840>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateReflectionCaptureTransform(UReflectionCaptureComponent_*)_::_5_::TSTR_UpdateReflectionCaptureTransformCommand2840>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateReflectionCaptureTransform(UReflectionCaptureComponent_*)_::_5_::TSTR_UpdateReflectionCaptureTransformCommand2840>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UpdateReflectionCaptureTransformCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                   L"UpdateReflectionCaptureTransformCommand","STATGROUP_RenderThreadCommands",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateReflectionCaptureTransform(UReflectionCaptureComponent_*)_::_5_::TSTR_UpdateReflectionCaptureTransformCommand2840>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateReflectionCaptureTransform(UReflectionCaptureComponent_*)_::_5_::TSTR_UpdateReflectionCaptureTransformCommand2840>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UpdateReflectionCaptureTransformCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateReflectionCaptureTransform(UReflectionCaptureComponent_*)_::_5_::TSTR_UpdateReflectionCaptureTransformCommand2840>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateReflectionCaptureTransform(UReflectionCaptureComponent_*)_::_5_::TSTR_UpdateReflectionCaptureTransformCommand2840>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"UpdateReflectionCaptureTransformCommand",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_UpdateReflectio;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14543bc60

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*)_::_7_::TSTR_UpdateRuntimeVirtualTextureCommand3222>
* __cdecl TRenderCommandTag<`FScene::AddRuntimeVirtualTexture'::__l7::TSTR_UpdateRuntimeVirtualTextureCommand3222>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*)_::_7_::TSTR_UpdateRuntimeVirtualTextureCommand3222>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*)_::_7_::TSTR_UpdateRuntimeVirtualTextureCommand3222>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*)_::_7_::TSTR_UpdateRuntimeVirtualTextureCommand3222>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*)_::_7_::TSTR_UpdateRuntimeVirtualTextureCommand3222>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UpdateRuntimeVirtualTextureCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                   L"UpdateRuntimeVirtualTextureCommand","STATGROUP_RenderThreadCommands",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*)_::_7_::TSTR_UpdateRuntimeVirtualTextureCommand3222>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*)_::_7_::TSTR_UpdateRuntimeVirtualTextureCommand3222>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UpdateRuntimeVirtualTextureCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*)_::_7_::TSTR_UpdateRuntimeVirtualTextureCommand3222>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddRuntimeVirtualTexture(URuntimeVirtualTextureComponent_*)_::_7_::TSTR_UpdateRuntimeVirtualTextureCommand3222>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"UpdateRuntimeVirtualTextureCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_UpdateRuntimeVi;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14543be10

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSceneSettings(AWorldSettings_*)_::_2_::TSTR_UpdateSceneSettings699>
* __cdecl TRenderCommandTag<`FScene::UpdateSceneSettings'::__l2::TSTR_UpdateSceneSettings699>::Get
                    (void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSceneSettings(AWorldSettings_*)_::_2_::TSTR_UpdateSceneSettings699>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSceneSettings(AWorldSettings_*)_::_2_::TSTR_UpdateSceneSettings699>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSceneSettings(AWorldSettings_*)_::_2_::TSTR_UpdateSceneSettings699>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSceneSettings(AWorldSettings_*)_::_2_::TSTR_UpdateSceneSettings699>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UpdateSceneSettings");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"UpdateSceneSettings",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSceneSettings(AWorldSettings_*)_::_2_::TSTR_UpdateSceneSettings699>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSceneSettings(AWorldSettings_*)_::_2_::TSTR_UpdateSceneSettings699>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UpdateSceneSettings");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSceneSettings(AWorldSettings_*)_::_2_::TSTR_UpdateSceneSettings699>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSceneSettings(AWorldSettings_*)_::_2_::TSTR_UpdateSceneSettings699>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"UpdateSceneSettings",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_UpdateSceneSett;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14543bfc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<FPrimitiveSceneDesc>(FPrimitiveSceneDesc_*)_::_49_::TSTR_UpdateTransformCommand1645>
* __cdecl TRenderCommandTag<`FScene::UpdatePrimitiveTransformInternal<FPrimitiveSceneDesc>'::__l49::TSTR_UpdateTransformCommand1645>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<struct_FPrimitiveSceneDesc>(struct_FPrimitiveSceneDesc*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<FPrimitiveSceneDesc>(FPrimitiveSceneDesc*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<struct_FPrimitiveSceneDesc>(struct_FPrimitiveSceneDesc*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<FPrimitiveSceneDesc>(FPrimitiveSceneDesc*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<struct_FPrimitiveSceneDesc>(struct_FPrimitiveSceneDesc*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<FPrimitiveSceneDesc>(FPrimitiveSceneDesc*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"UpdateTransformCommand");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<struct_FPrimitiveSceneDesc>(struct_FPrimitiveSceneDesc*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<FPrimitiveSceneDesc>(FPrimitiveSceneDesc*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>::Get(void)'
                ::__l2::Stat,*pFVar1,L"UpdateTransformCommand","STATGROUP_RenderThreadCommands",
               "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<struct_FPrimitiveSceneDesc>(struct_FPrimitiveSceneDesc*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<FPrimitiveSceneDesc>(FPrimitiveSceneDesc*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<struct_FPrimitiveSceneDesc>(struct_FPrimitiveSceneDesc*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<FPrimitiveSceneDesc>(FPrimitiveSceneDesc*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<struct_FPrimitiveSceneDesc>(struct_FPrimitiveSceneDesc*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<FPrimitiveSceneDesc>(FPrimitiveSceneDesc*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<struct_FPrimitiveSceneDesc>(struct_FPrimitiveSceneDesc*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<FPrimitiveSceneDesc>(FPrimitiveSceneDesc*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"UpdateTransformCommand");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<struct_FPrimitiveSceneDesc>(struct_FPrimitiveSceneDesc*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<FPrimitiveSceneDesc>(FPrimitiveSceneDesc*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"UpdateTransformCommand",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"UpdateTransformCommand";
    _DAT_15512b118 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<struct_FPrimitiveSceneDesc>(struct_FPrimitiveSceneDesc*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<FPrimitiveSceneDesc>(FPrimitiveSceneDesc*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<FPrimitiveSceneDesc>(FPrimitiveSceneDesc_*)_::_49_::TSTR_UpdateTransformCommand1645>
          *)&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<struct_FPrimitiveSceneDesc>(struct_FPrimitiveSceneDesc*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<FPrimitiveSceneDesc>(FPrimitiveSceneDesc*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>::Get(void)'
             ::__l2::Tag;
}

// Get @ 14543c180

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<UPrimitiveComponent>(UPrimitiveComponent_*)_::_49_::TSTR_UpdateTransformCommand1645>
* __cdecl TRenderCommandTag<`FScene::UpdatePrimitiveTransformInternal<UPrimitiveComponent>'::__l49::TSTR_UpdateTransformCommand1645>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<class_UPrimitiveComponent>(class_UPrimitiveComponent*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<UPrimitiveComponent>(UPrimitiveComponent*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<class_UPrimitiveComponent>(class_UPrimitiveComponent*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<UPrimitiveComponent>(UPrimitiveComponent*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<class_UPrimitiveComponent>(class_UPrimitiveComponent*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<UPrimitiveComponent>(UPrimitiveComponent*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"UpdateTransformCommand");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<class_UPrimitiveComponent>(class_UPrimitiveComponent*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<UPrimitiveComponent>(UPrimitiveComponent*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>::Get(void)'
                ::__l2::Stat,*pFVar1,L"UpdateTransformCommand","STATGROUP_RenderThreadCommands",
               "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<class_UPrimitiveComponent>(class_UPrimitiveComponent*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<UPrimitiveComponent>(UPrimitiveComponent*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<class_UPrimitiveComponent>(class_UPrimitiveComponent*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<UPrimitiveComponent>(UPrimitiveComponent*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<class_UPrimitiveComponent>(class_UPrimitiveComponent*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<UPrimitiveComponent>(UPrimitiveComponent*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<class_UPrimitiveComponent>(class_UPrimitiveComponent*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<UPrimitiveComponent>(UPrimitiveComponent*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"UpdateTransformCommand");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<class_UPrimitiveComponent>(class_UPrimitiveComponent*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<UPrimitiveComponent>(UPrimitiveComponent*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"UpdateTransformCommand",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"UpdateTransformCommand";
    _DAT_15512b148 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<class_UPrimitiveComponent>(class_UPrimitiveComponent*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<UPrimitiveComponent>(UPrimitiveComponent*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<UPrimitiveComponent>(UPrimitiveComponent_*)_::_49_::TSTR_UpdateTransformCommand1645>
          *)&`public:_static_class_TRenderCommandTag<struct_`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<class_UPrimitiveComponent>(class_UPrimitiveComponent*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>_const&___ptr64___cdecl_TRenderCommandTag<`private:_void___cdecl_FScene::UpdatePrimitiveTransformInternal<UPrimitiveComponent>(UPrimitiveComponent*___ptr64)___ptr64'::`49'::TSTR_UpdateTransformCommand1645>::Get(void)'
             ::__l2::Tag;
}

// Get @ 14543c340

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_virtual_void___cdecl_FScene::UpdatePrimitiveTransforms(FSceneInterface::IPrimitiveTransformUpdater_*)_::_5_::TSTR_UpdateTransformCommand1702>
* __cdecl TRenderCommandTag<`FScene::UpdatePrimitiveTransforms'::__l5::TSTR_UpdateTransformCommand1702>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_virtual_void___cdecl_FScene::UpdatePrimitiveTransforms(FSceneInterface::IPrimitiveTransformUpdater_*)_::_5_::TSTR_UpdateTransformCommand1702>_const_&___cdecl_TRenderCommandTag<_private:_virtual_void___cdecl_FScene::UpdatePrimitiveTransforms(FSceneInterface::IPrimitiveTransformUpdater_*)_::_5_::TSTR_UpdateTransformCommand1702>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_virtual_void___cdecl_FScene::UpdatePrimitiveTransforms(FSceneInterface::IPrimitiveTransformUpdater_*)_::_5_::TSTR_UpdateTransformCommand1702>_const_&___cdecl_TRenderCommandTag<_private:_virtual_void___cdecl_FScene::UpdatePrimitiveTransforms(FSceneInterface::IPrimitiveTransformUpdater_*)_::_5_::TSTR_UpdateTransformCommand1702>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UpdateTransformCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"UpdateTransformCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_virtual_void___cdecl_FScene::UpdatePrimitiveTransforms(FSceneInterface::IPrimitiveTransformUpdater_*)_::_5_::TSTR_UpdateTransformCommand1702>_const_&___cdecl_TRenderCommandTag<_private:_virtual_void___cdecl_FScene::UpdatePrimitiveTransforms(FSceneInterface::IPrimitiveTransformUpdater_*)_::_5_::TSTR_UpdateTransformCommand1702>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UpdateTransformCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_virtual_void___cdecl_FScene::UpdatePrimitiveTransforms(FSceneInterface::IPrimitiveTransformUpdater_*)_::_5_::TSTR_UpdateTransformCommand1702>_const_&___cdecl_TRenderCommandTag<_private:_virtual_void___cdecl_FScene::UpdatePrimitiveTransforms(FSceneInterface::IPrimitiveTransformUpdater_*)_::_5_::TSTR_UpdateTransformCommand1702>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"UpdateTransformCommand",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_UpdateTransform;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14543c4f0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateDecalTransform(UDecalComponent_*)_::_5_::TSTR_UpdateTransformCommand2548>
* __cdecl TRenderCommandTag<`FScene::UpdateDecalTransform'::__l5::TSTR_UpdateTransformCommand2548>::
          Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateDecalTransform(UDecalComponent_*)_::_5_::TSTR_UpdateTransformCommand2548>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateDecalTransform(UDecalComponent_*)_::_5_::TSTR_UpdateTransformCommand2548>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateDecalTransform(UDecalComponent_*)_::_5_::TSTR_UpdateTransformCommand2548>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateDecalTransform(UDecalComponent_*)_::_5_::TSTR_UpdateTransformCommand2548>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UpdateTransformCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"UpdateTransformCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateDecalTransform(UDecalComponent_*)_::_5_::TSTR_UpdateTransformCommand2548>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateDecalTransform(UDecalComponent_*)_::_5_::TSTR_UpdateTransformCommand2548>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UpdateTransformCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateDecalTransform(UDecalComponent_*)_::_5_::TSTR_UpdateTransformCommand2548>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateDecalTransform(UDecalComponent_*)_::_5_::TSTR_UpdateTransformCommand2548>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"UpdateTransformCommand",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_UpdateTransform;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1454a66e0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::Destroy(void)_::_2_::TSTR_FSceneViewState_Destroy311>
* __cdecl TRenderCommandTag<`FSceneViewState::Destroy'::__l2::TSTR_FSceneViewState_Destroy311>::Get
                    (void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::Destroy(void)_::_2_::TSTR_FSceneViewState_Destroy311>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::Destroy(void)_::_2_::TSTR_FSceneViewState_Destroy311>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::Destroy(void)_::_2_::TSTR_FSceneViewState_Destroy311>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::Destroy(void)_::_2_::TSTR_FSceneViewState_Destroy311>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FSceneViewState_Destroy");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FSceneViewState_Destroy",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::Destroy(void)_::_2_::TSTR_FSceneViewState_Destroy311>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::Destroy(void)_::_2_::TSTR_FSceneViewState_Destroy311>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FSceneViewState_Destroy");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::Destroy(void)_::_2_::TSTR_FSceneViewState_Destroy311>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::Destroy(void)_::_2_::TSTR_FSceneViewState_Destroy311>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FSceneViewState_Destroy"
                             ,"STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FSceneViewState;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1454a6890

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSceneCaptureContents(USceneCaptureComponent2D_*,ISceneRenderBuilder_&)_::_12_::TSTR_ResizeSceneCapture1558>
* __cdecl TRenderCommandTag<`FScene::UpdateSceneCaptureContents'::__l12::TSTR_ResizeSceneCapture1558>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSceneCaptureContents(USceneCaptureComponent2D_*,ISceneRenderBuilder_&)_::_12_::TSTR_ResizeSceneCapture1558>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSceneCaptureContents(USceneCaptureComponent2D_*,ISceneRenderBuilder_&)_::_12_::TSTR_ResizeSceneCapture1558>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSceneCaptureContents(USceneCaptureComponent2D_*,ISceneRenderBuilder_&)_::_12_::TSTR_ResizeSceneCapture1558>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSceneCaptureContents(USceneCaptureComponent2D_*,ISceneRenderBuilder_&)_::_12_::TSTR_ResizeSceneCapture1558>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ResizeSceneCapture");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ResizeSceneCapture",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSceneCaptureContents(USceneCaptureComponent2D_*,ISceneRenderBuilder_&)_::_12_::TSTR_ResizeSceneCapture1558>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSceneCaptureContents(USceneCaptureComponent2D_*,ISceneRenderBuilder_&)_::_12_::TSTR_ResizeSceneCapture1558>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ResizeSceneCapture");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSceneCaptureContents(USceneCaptureComponent2D_*,ISceneRenderBuilder_&)_::_12_::TSTR_ResizeSceneCapture1558>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::UpdateSceneCaptureContents(USceneCaptureComponent2D_*,ISceneRenderBuilder_&)_::_12_::TSTR_ResizeSceneCapture1558>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ResizeSceneCapture",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_ResizeSceneCapt;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1454a6a40

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_21_::TSTR_SceneRenderBuilder_BeginGroup799>
* __cdecl TRenderCommandTag<`FSceneRenderProcessor::Execute'::__l21::TSTR_SceneRenderBuilder_BeginGroup799>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_21_::TSTR_SceneRenderBuilder_BeginGroup799>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_21_::TSTR_SceneRenderBuilder_BeginGroup799>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_21_::TSTR_SceneRenderBuilder_BeginGroup799>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_21_::TSTR_SceneRenderBuilder_BeginGroup799>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SceneRenderBuilder_BeginGroup");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"SceneRenderBuilder_BeginGroup",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_21_::TSTR_SceneRenderBuilder_BeginGroup799>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_21_::TSTR_SceneRenderBuilder_BeginGroup799>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SceneRenderBuilder_BeginGroup");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_21_::TSTR_SceneRenderBuilder_BeginGroup799>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_21_::TSTR_SceneRenderBuilder_BeginGroup799>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"SceneRenderBuilder_BeginGroup","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_SceneRenderBuil;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1454a6bf0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_2_::TSTR_SceneRenderBuilder_End924>
* __cdecl TRenderCommandTag<`FSceneRenderProcessor::Execute'::__l2::TSTR_SceneRenderBuilder_End924>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_2_::TSTR_SceneRenderBuilder_End924>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_2_::TSTR_SceneRenderBuilder_End924>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_2_::TSTR_SceneRenderBuilder_End924>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_2_::TSTR_SceneRenderBuilder_End924>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SceneRenderBuilder_End");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"SceneRenderBuilder_End",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_2_::TSTR_SceneRenderBuilder_End924>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_2_::TSTR_SceneRenderBuilder_End924>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SceneRenderBuilder_End");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_2_::TSTR_SceneRenderBuilder_End924>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_2_::TSTR_SceneRenderBuilder_End924>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"SceneRenderBuilder_End",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_SceneRenderBuil;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1454a6da0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_28_::TSTR_SceneRenderBuilder_EndGroup809>
* __cdecl TRenderCommandTag<`FSceneRenderProcessor::Execute'::__l28::TSTR_SceneRenderBuilder_EndGroup809>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_28_::TSTR_SceneRenderBuilder_EndGroup809>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_28_::TSTR_SceneRenderBuilder_EndGroup809>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_28_::TSTR_SceneRenderBuilder_EndGroup809>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_28_::TSTR_SceneRenderBuilder_EndGroup809>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SceneRenderBuilder_EndGroup");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"SceneRenderBuilder_EndGroup",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_28_::TSTR_SceneRenderBuilder_EndGroup809>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_28_::TSTR_SceneRenderBuilder_EndGroup809>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SceneRenderBuilder_EndGroup");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_28_::TSTR_SceneRenderBuilder_EndGroup809>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_28_::TSTR_SceneRenderBuilder_EndGroup809>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"SceneRenderBuilder_EndGroup","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_SceneRenderBuil;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1454a6f50

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_30_::TSTR_SceneRenderBuilder_Render829>
* __cdecl TRenderCommandTag<`FSceneRenderProcessor::Execute'::__l30::TSTR_SceneRenderBuilder_Render829>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_30_::TSTR_SceneRenderBuilder_Render829>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_30_::TSTR_SceneRenderBuilder_Render829>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_30_::TSTR_SceneRenderBuilder_Render829>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_30_::TSTR_SceneRenderBuilder_Render829>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SceneRenderBuilder_Render");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"SceneRenderBuilder_Render",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_30_::TSTR_SceneRenderBuilder_Render829>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_30_::TSTR_SceneRenderBuilder_Render829>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SceneRenderBuilder_Render");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_30_::TSTR_SceneRenderBuilder_Render829>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_30_::TSTR_SceneRenderBuilder_Render829>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"SceneRenderBuilder_Render","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_SceneRenderBuil;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1454a7100

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_14_::TSTR_ScheduleGPUDebugCrash766>
* __cdecl TRenderCommandTag<`FSceneRenderProcessor::Execute'::__l14::TSTR_ScheduleGPUDebugCrash766>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_14_::TSTR_ScheduleGPUDebugCrash766>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_14_::TSTR_ScheduleGPUDebugCrash766>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_14_::TSTR_ScheduleGPUDebugCrash766>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_14_::TSTR_ScheduleGPUDebugCrash766>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ScheduleGPUDebugCrash");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ScheduleGPUDebugCrash",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_14_::TSTR_ScheduleGPUDebugCrash766>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_14_::TSTR_ScheduleGPUDebugCrash766>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ScheduleGPUDebugCrash");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_14_::TSTR_ScheduleGPUDebugCrash766>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FSceneRenderProcessor::Execute(void)_::_14_::TSTR_ScheduleGPUDebugCrash766>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ScheduleGPUDebugCrash",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_ScheduleGPUDebu;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1454f0770

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::AddLumenSceneData(FSceneInterface_*,float)_::_22_::TSTR_ChangeLumenSceneDataQuality540>
* __cdecl TRenderCommandTag<`FSceneViewState::AddLumenSceneData'::__l22::TSTR_ChangeLumenSceneDataQuality540>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::AddLumenSceneData(FSceneInterface_*,float)_::_22_::TSTR_ChangeLumenSceneDataQuality540>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::AddLumenSceneData(FSceneInterface_*,float)_::_22_::TSTR_ChangeLumenSceneDataQuality540>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::AddLumenSceneData(FSceneInterface_*,float)_::_22_::TSTR_ChangeLumenSceneDataQuality540>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::AddLumenSceneData(FSceneInterface_*,float)_::_22_::TSTR_ChangeLumenSceneDataQuality540>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ChangeLumenSceneDataQuality");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ChangeLumenSceneDataQuality",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::AddLumenSceneData(FSceneInterface_*,float)_::_22_::TSTR_ChangeLumenSceneDataQuality540>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::AddLumenSceneData(FSceneInterface_*,float)_::_22_::TSTR_ChangeLumenSceneDataQuality540>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ChangeLumenSceneDataQuality");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::AddLumenSceneData(FSceneInterface_*,float)_::_22_::TSTR_ChangeLumenSceneDataQuality540>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::AddLumenSceneData(FSceneInterface_*,float)_::_22_::TSTR_ChangeLumenSceneDataQuality540>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"ChangeLumenSceneDataQuality","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_ChangeLumenScen;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1454f0920

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::PerFrameCleanupIfSkipRenderer(void)_::_2_::TSTR_CmdPerFrameCleanupIfSkipRenderer5256>
* __cdecl TRenderCommandTag<`FRendererModule::PerFrameCleanupIfSkipRenderer'::__l2::TSTR_CmdPerFrameCleanupIfSkipRenderer5256>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::PerFrameCleanupIfSkipRenderer(void)_::_2_::TSTR_CmdPerFrameCleanupIfSkipRenderer5256>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::PerFrameCleanupIfSkipRenderer(void)_::_2_::TSTR_CmdPerFrameCleanupIfSkipRenderer5256>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::PerFrameCleanupIfSkipRenderer(void)_::_2_::TSTR_CmdPerFrameCleanupIfSkipRenderer5256>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::PerFrameCleanupIfSkipRenderer(void)_::_2_::TSTR_CmdPerFrameCleanupIfSkipRenderer5256>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"CmdPerFrameCleanupIfSkipRenderer");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"CmdPerFrameCleanupIfSkipRenderer",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::PerFrameCleanupIfSkipRenderer(void)_::_2_::TSTR_CmdPerFrameCleanupIfSkipRenderer5256>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::PerFrameCleanupIfSkipRenderer(void)_::_2_::TSTR_CmdPerFrameCleanupIfSkipRenderer5256>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"CmdPerFrameCleanupIfSkipRenderer");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::PerFrameCleanupIfSkipRenderer(void)_::_2_::TSTR_CmdPerFrameCleanupIfSkipRenderer5256>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::PerFrameCleanupIfSkipRenderer(void)_::_2_::TSTR_CmdPerFrameCleanupIfSkipRenderer5256>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"CmdPerFrameCleanupIfSkipRenderer","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_CmdPerFrameClea;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1454f0ad0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::AddLumenSceneData(FSceneInterface_*,float)_::_18_::TSTR_LinkLumenSceneData524>
* __cdecl TRenderCommandTag<`FSceneViewState::AddLumenSceneData'::__l18::TSTR_LinkLumenSceneData524>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::AddLumenSceneData(FSceneInterface_*,float)_::_18_::TSTR_LinkLumenSceneData524>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::AddLumenSceneData(FSceneInterface_*,float)_::_18_::TSTR_LinkLumenSceneData524>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::AddLumenSceneData(FSceneInterface_*,float)_::_18_::TSTR_LinkLumenSceneData524>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::AddLumenSceneData(FSceneInterface_*,float)_::_18_::TSTR_LinkLumenSceneData524>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"LinkLumenSceneData");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"LinkLumenSceneData",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::AddLumenSceneData(FSceneInterface_*,float)_::_18_::TSTR_LinkLumenSceneData524>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::AddLumenSceneData(FSceneInterface_*,float)_::_18_::TSTR_LinkLumenSceneData524>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"LinkLumenSceneData");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::AddLumenSceneData(FSceneInterface_*,float)_::_18_::TSTR_LinkLumenSceneData524>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::AddLumenSceneData(FSceneInterface_*,float)_::_18_::TSTR_LinkLumenSceneData524>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"LinkLumenSceneData",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_LinkLumenSceneD;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1454f0c80

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::PostRenderAllViewports(void)_::_2_::TSTR_PostRenderAllViewports_RenderThread5238>
* __cdecl TRenderCommandTag<`FRendererModule::PostRenderAllViewports'::__l2::TSTR_PostRenderAllViewports_RenderThread5238>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::PostRenderAllViewports(void)_::_2_::TSTR_PostRenderAllViewports_RenderThread5238>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::PostRenderAllViewports(void)_::_2_::TSTR_PostRenderAllViewports_RenderThread5238>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::PostRenderAllViewports(void)_::_2_::TSTR_PostRenderAllViewports_RenderThread5238>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::PostRenderAllViewports(void)_::_2_::TSTR_PostRenderAllViewports_RenderThread5238>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"PostRenderAllViewports_RenderThread");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                   L"PostRenderAllViewports_RenderThread","STATGROUP_RenderThreadCommands",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::PostRenderAllViewports(void)_::_2_::TSTR_PostRenderAllViewports_RenderThread5238>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::PostRenderAllViewports(void)_::_2_::TSTR_PostRenderAllViewports_RenderThread5238>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"PostRenderAllViewports_RenderThread");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::PostRenderAllViewports(void)_::_2_::TSTR_PostRenderAllViewports_RenderThread5238>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::PostRenderAllViewports(void)_::_2_::TSTR_PostRenderAllViewports_RenderThread5238>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"PostRenderAllViewports_RenderThread","STATGROUP_RenderThreadCommands"
                             ,"STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_PostRenderAllVi;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1454f0e30

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::RemoveLumenSceneData(FSceneInterface_*)_::_12_::TSTR_RemoveLumenSceneData561>
* __cdecl TRenderCommandTag<`FSceneViewState::RemoveLumenSceneData'::__l12::TSTR_RemoveLumenSceneData561>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::RemoveLumenSceneData(FSceneInterface_*)_::_12_::TSTR_RemoveLumenSceneData561>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::RemoveLumenSceneData(FSceneInterface_*)_::_12_::TSTR_RemoveLumenSceneData561>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::RemoveLumenSceneData(FSceneInterface_*)_::_12_::TSTR_RemoveLumenSceneData561>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::RemoveLumenSceneData(FSceneInterface_*)_::_12_::TSTR_RemoveLumenSceneData561>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"RemoveLumenSceneData");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"RemoveLumenSceneData",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::RemoveLumenSceneData(FSceneInterface_*)_::_12_::TSTR_RemoveLumenSceneData561>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::RemoveLumenSceneData(FSceneInterface_*)_::_12_::TSTR_RemoveLumenSceneData561>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"RemoveLumenSceneData");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::RemoveLumenSceneData(FSceneInterface_*)_::_12_::TSTR_RemoveLumenSceneData561>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::RemoveLumenSceneData(FSceneInterface_*)_::_12_::TSTR_RemoveLumenSceneData561>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"RemoveLumenSceneData",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_RemoveLumenScen;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1454f0fe0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::AddLumenSceneData(FSceneInterface_*,float)_::_12_::TSTR_SceneViewStateAdd504>
* __cdecl TRenderCommandTag<`FSceneViewState::AddLumenSceneData'::__l12::TSTR_SceneViewStateAdd504>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::AddLumenSceneData(FSceneInterface_*,float)_::_12_::TSTR_SceneViewStateAdd504>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::AddLumenSceneData(FSceneInterface_*,float)_::_12_::TSTR_SceneViewStateAdd504>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::AddLumenSceneData(FSceneInterface_*,float)_::_12_::TSTR_SceneViewStateAdd504>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::AddLumenSceneData(FSceneInterface_*,float)_::_12_::TSTR_SceneViewStateAdd504>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SceneViewStateAdd");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"SceneViewStateAdd",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::AddLumenSceneData(FSceneInterface_*,float)_::_12_::TSTR_SceneViewStateAdd504>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::AddLumenSceneData(FSceneInterface_*,float)_::_12_::TSTR_SceneViewStateAdd504>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SceneViewStateAdd");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::AddLumenSceneData(FSceneInterface_*,float)_::_12_::TSTR_SceneViewStateAdd504>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::AddLumenSceneData(FSceneInterface_*,float)_::_12_::TSTR_SceneViewStateAdd504>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"SceneViewStateAdd",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_SceneViewStateA;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1454f1190

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::BeginRenderingViewFamilies(FCanvas_*,TArrayView<FSceneViewFamily_*_const,int>)_::_94_::TSTR_SetDrawSceneCommand_StartDelay5159>
* __cdecl TRenderCommandTag<`FRendererModule::BeginRenderingViewFamilies'::__l94::TSTR_SetDrawSceneCommand_StartDelay5159>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::BeginRenderingViewFamilies(FCanvas_*,TArrayView<FSceneViewFamily_*_const,int>)_::_94_::TSTR_SetDrawSceneCommand_StartDelay5159>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::BeginRenderingViewFamilies(FCanvas_*,TArrayView<FSceneViewFamily_*_const,int>)_::_94_::TSTR_SetDrawSceneCommand_StartDelay5159>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::BeginRenderingViewFamilies(FCanvas_*,TArrayView<FSceneViewFamily_*_const,int>)_::_94_::TSTR_SetDrawSceneCommand_StartDelay5159>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::BeginRenderingViewFamilies(FCanvas_*,TArrayView<FSceneViewFamily_*_const,int>)_::_94_::TSTR_SetDrawSceneCommand_StartDelay5159>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SetDrawSceneCommand_StartDelay");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"SetDrawSceneCommand_StartDelay",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::BeginRenderingViewFamilies(FCanvas_*,TArrayView<FSceneViewFamily_*_const,int>)_::_94_::TSTR_SetDrawSceneCommand_StartDelay5159>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::BeginRenderingViewFamilies(FCanvas_*,TArrayView<FSceneViewFamily_*_const,int>)_::_94_::TSTR_SetDrawSceneCommand_StartDelay5159>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SetDrawSceneCommand_StartDelay");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::BeginRenderingViewFamilies(FCanvas_*,TArrayView<FSceneViewFamily_*_const,int>)_::_94_::TSTR_SetDrawSceneCommand_StartDelay5159>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::BeginRenderingViewFamilies(FCanvas_*,TArrayView<FSceneViewFamily_*_const,int>)_::_94_::TSTR_SetDrawSceneCommand_StartDelay5159>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"SetDrawSceneCommand_StartDelay","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_SetDrawSceneCom;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1454f1340

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::BeginRenderingViewFamilies(FCanvas_*,TArrayView<FSceneViewFamily_*_const,int>)_::_2_::TSTR_SetRtWaitCriticalPath5076>
* __cdecl TRenderCommandTag<`FRendererModule::BeginRenderingViewFamilies'::__l2::TSTR_SetRtWaitCriticalPath5076>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::BeginRenderingViewFamilies(FCanvas_*,TArrayView<FSceneViewFamily_*_const,int>)_::_2_::TSTR_SetRtWaitCriticalPath5076>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::BeginRenderingViewFamilies(FCanvas_*,TArrayView<FSceneViewFamily_*_const,int>)_::_2_::TSTR_SetRtWaitCriticalPath5076>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::BeginRenderingViewFamilies(FCanvas_*,TArrayView<FSceneViewFamily_*_const,int>)_::_2_::TSTR_SetRtWaitCriticalPath5076>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::BeginRenderingViewFamilies(FCanvas_*,TArrayView<FSceneViewFamily_*_const,int>)_::_2_::TSTR_SetRtWaitCriticalPath5076>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SetRtWaitCriticalPath");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"SetRtWaitCriticalPath",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::BeginRenderingViewFamilies(FCanvas_*,TArrayView<FSceneViewFamily_*_const,int>)_::_2_::TSTR_SetRtWaitCriticalPath5076>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::BeginRenderingViewFamilies(FCanvas_*,TArrayView<FSceneViewFamily_*_const,int>)_::_2_::TSTR_SetRtWaitCriticalPath5076>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SetRtWaitCriticalPath");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::BeginRenderingViewFamilies(FCanvas_*,TArrayView<FSceneViewFamily_*_const,int>)_::_2_::TSTR_SetRtWaitCriticalPath5076>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::BeginRenderingViewFamilies(FCanvas_*,TArrayView<FSceneViewFamily_*_const,int>)_::_2_::TSTR_SetRtWaitCriticalPath5076>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"SetRtWaitCriticalPath",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_SetRtWaitCritic;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1454f14f0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::BeginRenderingViewFamilies(FCanvas_*,TArrayView<FSceneViewFamily_*_const,int>)_::_2_::TSTR_UpdateFastVRamConfig5085>
* __cdecl TRenderCommandTag<`FRendererModule::BeginRenderingViewFamilies'::__l2::TSTR_UpdateFastVRamConfig5085>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::BeginRenderingViewFamilies(FCanvas_*,TArrayView<FSceneViewFamily_*_const,int>)_::_2_::TSTR_UpdateFastVRamConfig5085>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::BeginRenderingViewFamilies(FCanvas_*,TArrayView<FSceneViewFamily_*_const,int>)_::_2_::TSTR_UpdateFastVRamConfig5085>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::BeginRenderingViewFamilies(FCanvas_*,TArrayView<FSceneViewFamily_*_const,int>)_::_2_::TSTR_UpdateFastVRamConfig5085>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::BeginRenderingViewFamilies(FCanvas_*,TArrayView<FSceneViewFamily_*_const,int>)_::_2_::TSTR_UpdateFastVRamConfig5085>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UpdateFastVRamConfig");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"UpdateFastVRamConfig",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::BeginRenderingViewFamilies(FCanvas_*,TArrayView<FSceneViewFamily_*_const,int>)_::_2_::TSTR_UpdateFastVRamConfig5085>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::BeginRenderingViewFamilies(FCanvas_*,TArrayView<FSceneViewFamily_*_const,int>)_::_2_::TSTR_UpdateFastVRamConfig5085>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UpdateFastVRamConfig");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::BeginRenderingViewFamilies(FCanvas_*,TArrayView<FSceneViewFamily_*_const,int>)_::_2_::TSTR_UpdateFastVRamConfig5085>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FRendererModule::BeginRenderingViewFamilies(FCanvas_*,TArrayView<FSceneViewFamily_*_const,int>)_::_2_::TSTR_UpdateFastVRamConfig5085>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"UpdateFastVRamConfig",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_UpdateFastVRamC;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1454f16a0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::SystemMemoryMirrorBackup(FSceneViewStateSystemMemoryMirror_*)_::_2_::TSTR_ViewStateSystemMemoryBackup832>
* __cdecl TRenderCommandTag<`FSceneViewState::SystemMemoryMirrorBackup'::__l2::TSTR_ViewStateSystemMemoryBackup832>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::SystemMemoryMirrorBackup(FSceneViewStateSystemMemoryMirror_*)_::_2_::TSTR_ViewStateSystemMemoryBackup832>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::SystemMemoryMirrorBackup(FSceneViewStateSystemMemoryMirror_*)_::_2_::TSTR_ViewStateSystemMemoryBackup832>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::SystemMemoryMirrorBackup(FSceneViewStateSystemMemoryMirror_*)_::_2_::TSTR_ViewStateSystemMemoryBackup832>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::SystemMemoryMirrorBackup(FSceneViewStateSystemMemoryMirror_*)_::_2_::TSTR_ViewStateSystemMemoryBackup832>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ViewStateSystemMemoryBackup");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ViewStateSystemMemoryBackup",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::SystemMemoryMirrorBackup(FSceneViewStateSystemMemoryMirror_*)_::_2_::TSTR_ViewStateSystemMemoryBackup832>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::SystemMemoryMirrorBackup(FSceneViewStateSystemMemoryMirror_*)_::_2_::TSTR_ViewStateSystemMemoryBackup832>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ViewStateSystemMemoryBackup");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::SystemMemoryMirrorBackup(FSceneViewStateSystemMemoryMirror_*)_::_2_::TSTR_ViewStateSystemMemoryBackup832>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::SystemMemoryMirrorBackup(FSceneViewStateSystemMemoryMirror_*)_::_2_::TSTR_ViewStateSystemMemoryBackup832>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"ViewStateSystemMemoryBackup","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_ViewStateSystem;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1454f1850

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::SystemMemoryMirrorRestore(FSceneViewStateSystemMemoryMirror_*)_::_2_::TSTR_ViewStateSystemMemoryRestore853>
* __cdecl TRenderCommandTag<`FSceneViewState::SystemMemoryMirrorRestore'::__l2::TSTR_ViewStateSystemMemoryRestore853>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::SystemMemoryMirrorRestore(FSceneViewStateSystemMemoryMirror_*)_::_2_::TSTR_ViewStateSystemMemoryRestore853>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::SystemMemoryMirrorRestore(FSceneViewStateSystemMemoryMirror_*)_::_2_::TSTR_ViewStateSystemMemoryRestore853>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::SystemMemoryMirrorRestore(FSceneViewStateSystemMemoryMirror_*)_::_2_::TSTR_ViewStateSystemMemoryRestore853>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::SystemMemoryMirrorRestore(FSceneViewStateSystemMemoryMirror_*)_::_2_::TSTR_ViewStateSystemMemoryRestore853>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ViewStateSystemMemoryRestore");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ViewStateSystemMemoryRestore",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::SystemMemoryMirrorRestore(FSceneViewStateSystemMemoryMirror_*)_::_2_::TSTR_ViewStateSystemMemoryRestore853>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::SystemMemoryMirrorRestore(FSceneViewStateSystemMemoryMirror_*)_::_2_::TSTR_ViewStateSystemMemoryRestore853>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ViewStateSystemMemoryRestore");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::SystemMemoryMirrorRestore(FSceneViewStateSystemMemoryMirror_*)_::_2_::TSTR_ViewStateSystemMemoryRestore853>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSceneViewState::SystemMemoryMirrorRestore(FSceneViewStateSystemMemoryMirror_*)_::_2_::TSTR_ViewStateSystemMemoryRestore853>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"ViewStateSystemMemoryRestore","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_ViewStateSystem;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145634f10

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_DumpShadowDumpSetup(void)_::_2_::TSTR_DumpShadowDumpSetup373> *
__cdecl TRenderCommandTag<`DumpShadowDumpSetup'::__l2::TSTR_DumpShadowDumpSetup373>::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_DumpShadowDumpSetup(void)_::_2_::TSTR_DumpShadowDumpSetup373>_const_&___cdecl_TRenderCommandTag<_void___cdecl_DumpShadowDumpSetup(void)_::_2_::TSTR_DumpShadowDumpSetup373>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_DumpShadowDumpSetup(void)_::_2_::TSTR_DumpShadowDumpSetup373>_const_&___cdecl_TRenderCommandTag<_void___cdecl_DumpShadowDumpSetup(void)_::_2_::TSTR_DumpShadowDumpSetup373>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"DumpShadowDumpSetup");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"DumpShadowDumpSetup",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_DumpShadowDumpSetup(void)_::_2_::TSTR_DumpShadowDumpSetup373>_const_&___cdecl_TRenderCommandTag<_void___cdecl_DumpShadowDumpSetup(void)_::_2_::TSTR_DumpShadowDumpSetup373>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"DumpShadowDumpSetup");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_DumpShadowDumpSetup(void)_::_2_::TSTR_DumpShadowDumpSetup373>_const_&___cdecl_TRenderCommandTag<_void___cdecl_DumpShadowDumpSetup(void)_::_2_::TSTR_DumpShadowDumpSetup373>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"DumpShadowDumpSetup",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_DumpShadowDumpS;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1456811d0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddSkyAtmosphere(FSkyAtmosphereSceneProxy_*,bool)_::_2_::TSTR_FAddSkyAtmosphereCommand593>
* __cdecl TRenderCommandTag<`FScene::AddSkyAtmosphere'::__l2::TSTR_FAddSkyAtmosphereCommand593>::Get
                    (void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddSkyAtmosphere(FSkyAtmosphereSceneProxy_*,bool)_::_2_::TSTR_FAddSkyAtmosphereCommand593>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddSkyAtmosphere(FSkyAtmosphereSceneProxy_*,bool)_::_2_::TSTR_FAddSkyAtmosphereCommand593>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddSkyAtmosphere(FSkyAtmosphereSceneProxy_*,bool)_::_2_::TSTR_FAddSkyAtmosphereCommand593>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddSkyAtmosphere(FSkyAtmosphereSceneProxy_*,bool)_::_2_::TSTR_FAddSkyAtmosphereCommand593>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FAddSkyAtmosphereCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FAddSkyAtmosphereCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddSkyAtmosphere(FSkyAtmosphereSceneProxy_*,bool)_::_2_::TSTR_FAddSkyAtmosphereCommand593>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddSkyAtmosphere(FSkyAtmosphereSceneProxy_*,bool)_::_2_::TSTR_FAddSkyAtmosphereCommand593>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FAddSkyAtmosphereCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddSkyAtmosphere(FSkyAtmosphereSceneProxy_*,bool)_::_2_::TSTR_FAddSkyAtmosphereCommand593>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddSkyAtmosphere(FSkyAtmosphereSceneProxy_*,bool)_::_2_::TSTR_FAddSkyAtmosphereCommand593>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FAddSkyAtmosphereCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FAddSkyAtmosphe;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145681380

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddSparseVolumeTextureViewer(FSparseVolumeTextureViewerSceneProxy_*)_::_2_::TSTR_FAddSparseVolumeTextureViewerCommand18>
* __cdecl TRenderCommandTag<`FScene::AddSparseVolumeTextureViewer'::__l2::TSTR_FAddSparseVolumeTextureViewerCommand18>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddSparseVolumeTextureViewer(FSparseVolumeTextureViewerSceneProxy_*)_::_2_::TSTR_FAddSparseVolumeTextureViewerCommand18>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddSparseVolumeTextureViewer(FSparseVolumeTextureViewerSceneProxy_*)_::_2_::TSTR_FAddSparseVolumeTextureViewerCommand18>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddSparseVolumeTextureViewer(FSparseVolumeTextureViewerSceneProxy_*)_::_2_::TSTR_FAddSparseVolumeTextureViewerCommand18>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddSparseVolumeTextureViewer(FSparseVolumeTextureViewerSceneProxy_*)_::_2_::TSTR_FAddSparseVolumeTextureViewerCommand18>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FAddSparseVolumeTextureViewerCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                   L"FAddSparseVolumeTextureViewerCommand","STATGROUP_RenderThreadCommands",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddSparseVolumeTextureViewer(FSparseVolumeTextureViewerSceneProxy_*)_::_2_::TSTR_FAddSparseVolumeTextureViewerCommand18>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddSparseVolumeTextureViewer(FSparseVolumeTextureViewerSceneProxy_*)_::_2_::TSTR_FAddSparseVolumeTextureViewerCommand18>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FAddSparseVolumeTextureViewerCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddSparseVolumeTextureViewer(FSparseVolumeTextureViewerSceneProxy_*)_::_2_::TSTR_FAddSparseVolumeTextureViewerCommand18>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddSparseVolumeTextureViewer(FSparseVolumeTextureViewerSceneProxy_*)_::_2_::TSTR_FAddSparseVolumeTextureViewerCommand18>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FAddSparseVolumeTextureViewerCommand",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FAddSparseVolum;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145681530

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:___cdecl_FSkyAtmosphereRenderSceneInfo::FSkyAtmosphereRenderSceneInfo(FSkyAtmosphereSceneProxy_&)_::_2_::TSTR_FCreateUniformBuffer530>
* __cdecl TRenderCommandTag<`FSkyAtmosphereRenderSceneInfo::FSkyAtmosphereRenderSceneInfo'::__l2::TSTR_FCreateUniformBuffer530>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FSkyAtmosphereRenderSceneInfo::FSkyAtmosphereRenderSceneInfo(FSkyAtmosphereSceneProxy_&)_::_2_::TSTR_FCreateUniformBuffer530>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FSkyAtmosphereRenderSceneInfo::FSkyAtmosphereRenderSceneInfo(FSkyAtmosphereSceneProxy_&)_::_2_::TSTR_FCreateUniformBuffer530>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FSkyAtmosphereRenderSceneInfo::FSkyAtmosphereRenderSceneInfo(FSkyAtmosphereSceneProxy_&)_::_2_::TSTR_FCreateUniformBuffer530>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FSkyAtmosphereRenderSceneInfo::FSkyAtmosphereRenderSceneInfo(FSkyAtmosphereSceneProxy_&)_::_2_::TSTR_FCreateUniformBuffer530>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FCreateUniformBuffer");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FCreateUniformBuffer",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FSkyAtmosphereRenderSceneInfo::FSkyAtmosphereRenderSceneInfo(FSkyAtmosphereSceneProxy_&)_::_2_::TSTR_FCreateUniformBuffer530>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FSkyAtmosphereRenderSceneInfo::FSkyAtmosphereRenderSceneInfo(FSkyAtmosphereSceneProxy_&)_::_2_::TSTR_FCreateUniformBuffer530>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FCreateUniformBuffer");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FSkyAtmosphereRenderSceneInfo::FSkyAtmosphereRenderSceneInfo(FSkyAtmosphereSceneProxy_&)_::_2_::TSTR_FCreateUniformBuffer530>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FSkyAtmosphereRenderSceneInfo::FSkyAtmosphereRenderSceneInfo(FSkyAtmosphereSceneProxy_&)_::_2_::TSTR_FCreateUniformBuffer530>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FCreateUniformBuffer",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FCreateUniformB;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1456816e0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_USparseVolumeTextureViewerComponent::DestroyRenderState_Concurrent(void)_::_5_::TSTR_FDestroySparseVolumeTextureViewerSceneProxyCommand156>
* __cdecl TRenderCommandTag<`USparseVolumeTextureViewerComponent::DestroyRenderState_Concurrent'::__l5::TSTR_FDestroySparseVolumeTextureViewerSceneProxyCommand156>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_USparseVolumeTextureViewerComponent::DestroyRenderState_Concurrent(void)_::_5_::TSTR_FDestroySparseVolumeTextureViewerSceneProxyCommand156>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_USparseVolumeTextureViewerComponent::DestroyRenderState_Concurrent(void)_::_5_::TSTR_FDestroySparseVolumeTextureViewerSceneProxyCommand156>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_USparseVolumeTextureViewerComponent::DestroyRenderState_Concurrent(void)_::_5_::TSTR_FDestroySparseVolumeTextureViewerSceneProxyCommand156>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_USparseVolumeTextureViewerComponent::DestroyRenderState_Concurrent(void)_::_5_::TSTR_FDestroySparseVolumeTextureViewerSceneProxyCommand156>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FDestroySparseVolumeTextureViewerSceneProxyCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                   L"FDestroySparseVolumeTextureViewerSceneProxyCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_USparseVolumeTextureViewerComponent::DestroyRenderState_Concurrent(void)_::_5_::TSTR_FDestroySparseVolumeTextureViewerSceneProxyCommand156>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_USparseVolumeTextureViewerComponent::DestroyRenderState_Concurrent(void)_::_5_::TSTR_FDestroySparseVolumeTextureViewerSceneProxyCommand156>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FDestroySparseVolumeTextureViewerSceneProxyCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_USparseVolumeTextureViewerComponent::DestroyRenderState_Concurrent(void)_::_5_::TSTR_FDestroySparseVolumeTextureViewerSceneProxyCommand156>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_USparseVolumeTextureViewerComponent::DestroyRenderState_Concurrent(void)_::_5_::TSTR_FDestroySparseVolumeTextureViewerSceneProxyCommand156>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FDestroySparseVolumeTextureViewerSceneProxyCommand",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FDestroySparseV;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145681890

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveSkyAtmosphere(FSkyAtmosphereSceneProxy_*)_::_2_::TSTR_FRemoveSkyAtmosphereCommand617>
* __cdecl TRenderCommandTag<`FScene::RemoveSkyAtmosphere'::__l2::TSTR_FRemoveSkyAtmosphereCommand617>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveSkyAtmosphere(FSkyAtmosphereSceneProxy_*)_::_2_::TSTR_FRemoveSkyAtmosphereCommand617>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveSkyAtmosphere(FSkyAtmosphereSceneProxy_*)_::_2_::TSTR_FRemoveSkyAtmosphereCommand617>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveSkyAtmosphere(FSkyAtmosphereSceneProxy_*)_::_2_::TSTR_FRemoveSkyAtmosphereCommand617>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveSkyAtmosphere(FSkyAtmosphereSceneProxy_*)_::_2_::TSTR_FRemoveSkyAtmosphereCommand617>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FRemoveSkyAtmosphereCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FRemoveSkyAtmosphereCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveSkyAtmosphere(FSkyAtmosphereSceneProxy_*)_::_2_::TSTR_FRemoveSkyAtmosphereCommand617>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveSkyAtmosphere(FSkyAtmosphereSceneProxy_*)_::_2_::TSTR_FRemoveSkyAtmosphereCommand617>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FRemoveSkyAtmosphereCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveSkyAtmosphere(FSkyAtmosphereSceneProxy_*)_::_2_::TSTR_FRemoveSkyAtmosphereCommand617>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveSkyAtmosphere(FSkyAtmosphereSceneProxy_*)_::_2_::TSTR_FRemoveSkyAtmosphereCommand617>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FRemoveSkyAtmosphereCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FRemoveSkyAtmos;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145681a40

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveSparseVolumeTextureViewer(FSparseVolumeTextureViewerSceneProxy_*)_::_2_::TSTR_FRemoveSparseVolumeTextureCommand30>
* __cdecl TRenderCommandTag<`FScene::RemoveSparseVolumeTextureViewer'::__l2::TSTR_FRemoveSparseVolumeTextureCommand30>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveSparseVolumeTextureViewer(FSparseVolumeTextureViewerSceneProxy_*)_::_2_::TSTR_FRemoveSparseVolumeTextureCommand30>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveSparseVolumeTextureViewer(FSparseVolumeTextureViewerSceneProxy_*)_::_2_::TSTR_FRemoveSparseVolumeTextureCommand30>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveSparseVolumeTextureViewer(FSparseVolumeTextureViewerSceneProxy_*)_::_2_::TSTR_FRemoveSparseVolumeTextureCommand30>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveSparseVolumeTextureViewer(FSparseVolumeTextureViewerSceneProxy_*)_::_2_::TSTR_FRemoveSparseVolumeTextureCommand30>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FRemoveSparseVolumeTextureCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FRemoveSparseVolumeTextureCommand"
                   ,"STATGROUP_RenderThreadCommands","STATCAT_Advanced",L"Render Thread Commands",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar3 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      FVar2 = ::Stat;
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveSparseVolumeTextureViewer(FSparseVolumeTextureViewerSceneProxy_*)_::_2_::TSTR_FRemoveSparseVolumeTextureCommand30>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveSparseVolumeTextureViewer(FSparseVolumeTextureViewerSceneProxy_*)_::_2_::TSTR_FRemoveSparseVolumeTextureCommand30>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FRemoveSparseVolumeTextureCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveSparseVolumeTextureViewer(FSparseVolumeTextureViewerSceneProxy_*)_::_2_::TSTR_FRemoveSparseVolumeTextureCommand30>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveSparseVolumeTextureViewer(FSparseVolumeTextureViewerSceneProxy_*)_::_2_::TSTR_FRemoveSparseVolumeTextureCommand30>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FRemoveSparseVolumeTextureCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FRemoveSparseVo;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145681bf0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_bool___cdecl_FSkinningSceneExtension::Tick(float)_::_2_::TSTR_FTickSkinningSceneExtension635>
* __cdecl TRenderCommandTag<`FSkinningSceneExtension::Tick'::__l2::TSTR_FTickSkinningSceneExtension635>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_bool___cdecl_FSkinningSceneExtension::Tick(float)_::_2_::TSTR_FTickSkinningSceneExtension635>_const_&___cdecl_TRenderCommandTag<_private:_bool___cdecl_FSkinningSceneExtension::Tick(float)_::_2_::TSTR_FTickSkinningSceneExtension635>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_bool___cdecl_FSkinningSceneExtension::Tick(float)_::_2_::TSTR_FTickSkinningSceneExtension635>_const_&___cdecl_TRenderCommandTag<_private:_bool___cdecl_FSkinningSceneExtension::Tick(float)_::_2_::TSTR_FTickSkinningSceneExtension635>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FTickSkinningSceneExtension");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FTickSkinningSceneExtension",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_bool___cdecl_FSkinningSceneExtension::Tick(float)_::_2_::TSTR_FTickSkinningSceneExtension635>_const_&___cdecl_TRenderCommandTag<_private:_bool___cdecl_FSkinningSceneExtension::Tick(float)_::_2_::TSTR_FTickSkinningSceneExtension635>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FTickSkinningSceneExtension");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_bool___cdecl_FSkinningSceneExtension::Tick(float)_::_2_::TSTR_FTickSkinningSceneExtension635>_const_&___cdecl_TRenderCommandTag<_private:_bool___cdecl_FSkinningSceneExtension::Tick(float)_::_2_::TSTR_FTickSkinningSceneExtension635>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FTickSkinningSceneExtension","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FTickSkinningSc;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145681da0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_USparseVolumeTextureViewerComponent::SendRenderTransformCommand(void)_::_5_::TSTR_FUpdateSparseVolumeTextureViewerProxyTransformCommand192>
* __cdecl TRenderCommandTag<`USparseVolumeTextureViewerComponent::SendRenderTransformCommand'::__l5::TSTR_FUpdateSparseVolumeTextureViewerProxyTransformCommand192>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_USparseVolumeTextureViewerComponent::SendRenderTransformCommand(void)_::_5_::TSTR_FUpdateSparseVolumeTextureViewerProxyTransformCommand192>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_USparseVolumeTextureViewerComponent::SendRenderTransformCommand(void)_::_5_::TSTR_FUpdateSparseVolumeTextureViewerProxyTransformCommand192>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_USparseVolumeTextureViewerComponent::SendRenderTransformCommand(void)_::_5_::TSTR_FUpdateSparseVolumeTextureViewerProxyTransformCommand192>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_USparseVolumeTextureViewerComponent::SendRenderTransformCommand(void)_::_5_::TSTR_FUpdateSparseVolumeTextureViewerProxyTransformCommand192>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FUpdateSparseVolumeTextureViewerProxyTransformCommand")
        ;
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                   L"FUpdateSparseVolumeTextureViewerProxyTransformCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_USparseVolumeTextureViewerComponent::SendRenderTransformCommand(void)_::_5_::TSTR_FUpdateSparseVolumeTextureViewerProxyTransformCommand192>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_USparseVolumeTextureViewerComponent::SendRenderTransformCommand(void)_::_5_::TSTR_FUpdateSparseVolumeTextureViewerProxyTransformCommand192>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FUpdateSparseVolumeTextureViewerProxyTransformCommand")
        ;
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_USparseVolumeTextureViewerComponent::SendRenderTransformCommand(void)_::_5_::TSTR_FUpdateSparseVolumeTextureViewerProxyTransformCommand192>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_USparseVolumeTextureViewerComponent::SendRenderTransformCommand(void)_::_5_::TSTR_FUpdateSparseVolumeTextureViewerProxyTransformCommand192>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FUpdateSparseVolumeTextureViewerProxyTransformCommand",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FUpdateSparseVo;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14576f420

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_FViewDebugInfo::DisableLiveCapture(void)_::_2_::TSTR_CmdDisableLiveDebugCapture232>
* __cdecl TRenderCommandTag<`FViewDebugInfo::DisableLiveCapture'::__l2::TSTR_CmdDisableLiveDebugCapture232>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FViewDebugInfo::DisableLiveCapture(void)_::_2_::TSTR_CmdDisableLiveDebugCapture232>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FViewDebugInfo::DisableLiveCapture(void)_::_2_::TSTR_CmdDisableLiveDebugCapture232>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FViewDebugInfo::DisableLiveCapture(void)_::_2_::TSTR_CmdDisableLiveDebugCapture232>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FViewDebugInfo::DisableLiveCapture(void)_::_2_::TSTR_CmdDisableLiveDebugCapture232>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"CmdDisableLiveDebugCapture");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"CmdDisableLiveDebugCapture",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FViewDebugInfo::DisableLiveCapture(void)_::_2_::TSTR_CmdDisableLiveDebugCapture232>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FViewDebugInfo::DisableLiveCapture(void)_::_2_::TSTR_CmdDisableLiveDebugCapture232>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"CmdDisableLiveDebugCapture");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FViewDebugInfo::DisableLiveCapture(void)_::_2_::TSTR_CmdDisableLiveDebugCapture232>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FViewDebugInfo::DisableLiveCapture(void)_::_2_::TSTR_CmdDisableLiveDebugCapture232>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"CmdDisableLiveDebugCapture","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_CmdDisableLiveD;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14576f5d0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_FViewDebugInfo::EnableLiveCapture(void)_::_2_::TSTR_CmdEnableLiveDebugCapture222>
* __cdecl TRenderCommandTag<`FViewDebugInfo::EnableLiveCapture'::__l2::TSTR_CmdEnableLiveDebugCapture222>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FViewDebugInfo::EnableLiveCapture(void)_::_2_::TSTR_CmdEnableLiveDebugCapture222>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FViewDebugInfo::EnableLiveCapture(void)_::_2_::TSTR_CmdEnableLiveDebugCapture222>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FViewDebugInfo::EnableLiveCapture(void)_::_2_::TSTR_CmdEnableLiveDebugCapture222>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FViewDebugInfo::EnableLiveCapture(void)_::_2_::TSTR_CmdEnableLiveDebugCapture222>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"CmdEnableLiveDebugCapture");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"CmdEnableLiveDebugCapture",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FViewDebugInfo::EnableLiveCapture(void)_::_2_::TSTR_CmdEnableLiveDebugCapture222>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FViewDebugInfo::EnableLiveCapture(void)_::_2_::TSTR_CmdEnableLiveDebugCapture222>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"CmdEnableLiveDebugCapture");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FViewDebugInfo::EnableLiveCapture(void)_::_2_::TSTR_CmdEnableLiveDebugCapture222>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FViewDebugInfo::EnableLiveCapture(void)_::_2_::TSTR_CmdEnableLiveDebugCapture222>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"CmdEnableLiveDebugCapture","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_CmdEnableLiveDe;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14576f780

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_FViewDebugInfo::CaptureNextFrame(void)_::_2_::TSTR_CmdShouldCaptureNextFrame212>
* __cdecl TRenderCommandTag<`FViewDebugInfo::CaptureNextFrame'::__l2::TSTR_CmdShouldCaptureNextFrame212>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FViewDebugInfo::CaptureNextFrame(void)_::_2_::TSTR_CmdShouldCaptureNextFrame212>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FViewDebugInfo::CaptureNextFrame(void)_::_2_::TSTR_CmdShouldCaptureNextFrame212>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FViewDebugInfo::CaptureNextFrame(void)_::_2_::TSTR_CmdShouldCaptureNextFrame212>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FViewDebugInfo::CaptureNextFrame(void)_::_2_::TSTR_CmdShouldCaptureNextFrame212>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"CmdShouldCaptureNextFrame");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"CmdShouldCaptureNextFrame",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FViewDebugInfo::CaptureNextFrame(void)_::_2_::TSTR_CmdShouldCaptureNextFrame212>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FViewDebugInfo::CaptureNextFrame(void)_::_2_::TSTR_CmdShouldCaptureNextFrame212>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"CmdShouldCaptureNextFrame");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FViewDebugInfo::CaptureNextFrame(void)_::_2_::TSTR_CmdShouldCaptureNextFrame212>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FViewDebugInfo::CaptureNextFrame(void)_::_2_::TSTR_CmdShouldCaptureNextFrame212>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"CmdShouldCaptureNextFrame","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_CmdShouldCaptur;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14576f930

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_FViewDebugInfo::ClearCaptureData(void)_::_2_::TSTR_CmdShouldCaptureNextFrame242>
* __cdecl TRenderCommandTag<`FViewDebugInfo::ClearCaptureData'::__l2::TSTR_CmdShouldCaptureNextFrame242>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FViewDebugInfo::ClearCaptureData(void)_::_2_::TSTR_CmdShouldCaptureNextFrame242>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FViewDebugInfo::ClearCaptureData(void)_::_2_::TSTR_CmdShouldCaptureNextFrame242>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FViewDebugInfo::ClearCaptureData(void)_::_2_::TSTR_CmdShouldCaptureNextFrame242>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FViewDebugInfo::ClearCaptureData(void)_::_2_::TSTR_CmdShouldCaptureNextFrame242>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"CmdShouldCaptureNextFrame");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"CmdShouldCaptureNextFrame",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FViewDebugInfo::ClearCaptureData(void)_::_2_::TSTR_CmdShouldCaptureNextFrame242>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FViewDebugInfo::ClearCaptureData(void)_::_2_::TSTR_CmdShouldCaptureNextFrame242>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"CmdShouldCaptureNextFrame");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FViewDebugInfo::ClearCaptureData(void)_::_2_::TSTR_CmdShouldCaptureNextFrame242>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FViewDebugInfo::ClearCaptureData(void)_::_2_::TSTR_CmdShouldCaptureNextFrame242>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"CmdShouldCaptureNextFrame","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_CmdShouldCaptur;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14576fae0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_protected:_virtual_bool___cdecl_FRayTracingTestbed::RunTest(FString_const_&)_::_2_::TSTR_FRayTracingTestbed374>
* __cdecl TRenderCommandTag<`FRayTracingTestbed::RunTest'::__l2::TSTR_FRayTracingTestbed374>::Get
                    (void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_virtual_bool___cdecl_FRayTracingTestbed::RunTest(FString_const_&)_::_2_::TSTR_FRayTracingTestbed374>_const_&___cdecl_TRenderCommandTag<_protected:_virtual_bool___cdecl_FRayTracingTestbed::RunTest(FString_const_&)_::_2_::TSTR_FRayTracingTestbed374>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_virtual_bool___cdecl_FRayTracingTestbed::RunTest(FString_const_&)_::_2_::TSTR_FRayTracingTestbed374>_const_&___cdecl_TRenderCommandTag<_protected:_virtual_bool___cdecl_FRayTracingTestbed::RunTest(FString_const_&)_::_2_::TSTR_FRayTracingTestbed374>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FRayTracingTestbed");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FRayTracingTestbed",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_virtual_bool___cdecl_FRayTracingTestbed::RunTest(FString_const_&)_::_2_::TSTR_FRayTracingTestbed374>_const_&___cdecl_TRenderCommandTag<_protected:_virtual_bool___cdecl_FRayTracingTestbed::RunTest(FString_const_&)_::_2_::TSTR_FRayTracingTestbed374>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FRayTracingTestbed");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_virtual_bool___cdecl_FRayTracingTestbed::RunTest(FString_const_&)_::_2_::TSTR_FRayTracingTestbed374>_const_&___cdecl_TRenderCommandTag<_protected:_virtual_bool___cdecl_FRayTracingTestbed::RunTest(FString_const_&)_::_2_::TSTR_FRayTracingTestbed374>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FRayTracingTestbed",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FRayTracingTest;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1457f1ed0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_DumpVSMLightNames(void)_::_2_::TSTR_DumpVSMLightNames454> * __cdecl
TRenderCommandTag<`DumpVSMLightNames'::__l2::TSTR_DumpVSMLightNames454>::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_DumpVSMLightNames(void)_::_2_::TSTR_DumpVSMLightNames454>_const_&___cdecl_TRenderCommandTag<_void___cdecl_DumpVSMLightNames(void)_::_2_::TSTR_DumpVSMLightNames454>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_DumpVSMLightNames(void)_::_2_::TSTR_DumpVSMLightNames454>_const_&___cdecl_TRenderCommandTag<_void___cdecl_DumpVSMLightNames(void)_::_2_::TSTR_DumpVSMLightNames454>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"DumpVSMLightNames");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"DumpVSMLightNames",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_DumpVSMLightNames(void)_::_2_::TSTR_DumpVSMLightNames454>_const_&___cdecl_TRenderCommandTag<_void___cdecl_DumpVSMLightNames(void)_::_2_::TSTR_DumpVSMLightNames454>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"DumpVSMLightNames");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_DumpVSMLightNames(void)_::_2_::TSTR_DumpVSMLightNames454>_const_&___cdecl_TRenderCommandTag<_void___cdecl_DumpVSMLightNames(void)_::_2_::TSTR_DumpVSMLightNames454>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"DumpVSMLightNames",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_DumpVSMLightNam;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145870470

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddVolumetricCloud(FVolumetricCloudSceneProxy_*)_::_2_::TSTR_FAddVolumetricCloudCommand582>
* __cdecl TRenderCommandTag<`FScene::AddVolumetricCloud'::__l2::TSTR_FAddVolumetricCloudCommand582>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddVolumetricCloud(FVolumetricCloudSceneProxy_*)_::_2_::TSTR_FAddVolumetricCloudCommand582>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddVolumetricCloud(FVolumetricCloudSceneProxy_*)_::_2_::TSTR_FAddVolumetricCloudCommand582>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddVolumetricCloud(FVolumetricCloudSceneProxy_*)_::_2_::TSTR_FAddVolumetricCloudCommand582>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddVolumetricCloud(FVolumetricCloudSceneProxy_*)_::_2_::TSTR_FAddVolumetricCloudCommand582>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FAddVolumetricCloudCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FAddVolumetricCloudCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddVolumetricCloud(FVolumetricCloudSceneProxy_*)_::_2_::TSTR_FAddVolumetricCloudCommand582>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddVolumetricCloud(FVolumetricCloudSceneProxy_*)_::_2_::TSTR_FAddVolumetricCloudCommand582>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FAddVolumetricCloudCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddVolumetricCloud(FVolumetricCloudSceneProxy_*)_::_2_::TSTR_FAddVolumetricCloudCommand582>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::AddVolumetricCloud(FVolumetricCloudSceneProxy_*)_::_2_::TSTR_FAddVolumetricCloudCommand582>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FAddVolumetricCloudCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FAddVolumetricC;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145870620

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveVolumetricCloud(FVolumetricCloudSceneProxy_*)_::_2_::TSTR_FRemoveVolumetricCloudCommand601>
* __cdecl TRenderCommandTag<`FScene::RemoveVolumetricCloud'::__l2::TSTR_FRemoveVolumetricCloudCommand601>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveVolumetricCloud(FVolumetricCloudSceneProxy_*)_::_2_::TSTR_FRemoveVolumetricCloudCommand601>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveVolumetricCloud(FVolumetricCloudSceneProxy_*)_::_2_::TSTR_FRemoveVolumetricCloudCommand601>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveVolumetricCloud(FVolumetricCloudSceneProxy_*)_::_2_::TSTR_FRemoveVolumetricCloudCommand601>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveVolumetricCloud(FVolumetricCloudSceneProxy_*)_::_2_::TSTR_FRemoveVolumetricCloudCommand601>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FRemoveVolumetricCloudCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FRemoveVolumetricCloudCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveVolumetricCloud(FVolumetricCloudSceneProxy_*)_::_2_::TSTR_FRemoveVolumetricCloudCommand601>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveVolumetricCloud(FVolumetricCloudSceneProxy_*)_::_2_::TSTR_FRemoveVolumetricCloudCommand601>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FRemoveVolumetricCloudCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveVolumetricCloud(FVolumetricCloudSceneProxy_*)_::_2_::TSTR_FRemoveVolumetricCloudCommand601>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FScene::RemoveVolumetricCloud(FVolumetricCloudSceneProxy_*)_::_2_::TSTR_FRemoveVolumetricCloudCommand601>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FRemoveVolumetricCloudCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FRemoveVolumetr;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1458fe4c0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:___cdecl_FRuntimeVirtualTextureSceneProxy::FRuntimeVirtualTextureSceneProxy(URuntimeVirtualTextureComponent_*)_::_8_::TSTR_GetProducerHandle135>
* __cdecl TRenderCommandTag<`FRuntimeVirtualTextureSceneProxy::FRuntimeVirtualTextureSceneProxy'::__l8::TSTR_GetProducerHandle135>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FRuntimeVirtualTextureSceneProxy::FRuntimeVirtualTextureSceneProxy(URuntimeVirtualTextureComponent_*)_::_8_::TSTR_GetProducerHandle135>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FRuntimeVirtualTextureSceneProxy::FRuntimeVirtualTextureSceneProxy(URuntimeVirtualTextureComponent_*)_::_8_::TSTR_GetProducerHandle135>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FRuntimeVirtualTextureSceneProxy::FRuntimeVirtualTextureSceneProxy(URuntimeVirtualTextureComponent_*)_::_8_::TSTR_GetProducerHandle135>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FRuntimeVirtualTextureSceneProxy::FRuntimeVirtualTextureSceneProxy(URuntimeVirtualTextureComponent_*)_::_8_::TSTR_GetProducerHandle135>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"GetProducerHandle");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"GetProducerHandle",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FRuntimeVirtualTextureSceneProxy::FRuntimeVirtualTextureSceneProxy(URuntimeVirtualTextureComponent_*)_::_8_::TSTR_GetProducerHandle135>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FRuntimeVirtualTextureSceneProxy::FRuntimeVirtualTextureSceneProxy(URuntimeVirtualTextureComponent_*)_::_8_::TSTR_GetProducerHandle135>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"GetProducerHandle");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FRuntimeVirtualTextureSceneProxy::FRuntimeVirtualTextureSceneProxy(URuntimeVirtualTextureComponent_*)_::_8_::TSTR_GetProducerHandle135>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FRuntimeVirtualTextureSceneProxy::FRuntimeVirtualTextureSceneProxy(URuntimeVirtualTextureComponent_*)_::_8_::TSTR_GetProducerHandle135>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"GetProducerHandle",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_GetProducerHand;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1458fe670

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_FRuntimeVirtualTextureSceneProxy::MarkUnused(void)_::_2_::TSTR_GetProducerHandle170>
* __cdecl TRenderCommandTag<`FRuntimeVirtualTextureSceneProxy::MarkUnused'::__l2::TSTR_GetProducerHandle170>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FRuntimeVirtualTextureSceneProxy::MarkUnused(void)_::_2_::TSTR_GetProducerHandle170>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FRuntimeVirtualTextureSceneProxy::MarkUnused(void)_::_2_::TSTR_GetProducerHandle170>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FRuntimeVirtualTextureSceneProxy::MarkUnused(void)_::_2_::TSTR_GetProducerHandle170>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FRuntimeVirtualTextureSceneProxy::MarkUnused(void)_::_2_::TSTR_GetProducerHandle170>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"GetProducerHandle");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"GetProducerHandle",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FRuntimeVirtualTextureSceneProxy::MarkUnused(void)_::_2_::TSTR_GetProducerHandle170>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FRuntimeVirtualTextureSceneProxy::MarkUnused(void)_::_2_::TSTR_GetProducerHandle170>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"GetProducerHandle");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FRuntimeVirtualTextureSceneProxy::MarkUnused(void)_::_2_::TSTR_GetProducerHandle170>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FRuntimeVirtualTextureSceneProxy::MarkUnused(void)_::_2_::TSTR_GetProducerHandle170>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"GetProducerHandle",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_GetProducerHand;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 1458fe820

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_unsigned_int___cdecl_RuntimeVirtualTexture::GetRuntimeVirtualTextureSceneIndex_GameThread(URuntimeVirtualTextureComponent_*)_::_2_::TSTR_GetSceneIndexCommand2459>
* __cdecl TRenderCommandTag<`RuntimeVirtualTexture::GetRuntimeVirtualTextureSceneIndex_GameThread'::__l2::TSTR_GetSceneIndexCommand2459>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_unsigned_int___cdecl_RuntimeVirtualTexture::GetRuntimeVirtualTextureSceneIndex_GameThread(URuntimeVirtualTextureComponent_*)_::_2_::TSTR_GetSceneIndexCommand2459>_const_&___cdecl_TRenderCommandTag<_unsigned_int___cdecl_RuntimeVirtualTexture::GetRuntimeVirtualTextureSceneIndex_GameThread(URuntimeVirtualTextureComponent_*)_::_2_::TSTR_GetSceneIndexCommand2459>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_unsigned_int___cdecl_RuntimeVirtualTexture::GetRuntimeVirtualTextureSceneIndex_GameThread(URuntimeVirtualTextureComponent_*)_::_2_::TSTR_GetSceneIndexCommand2459>_const_&___cdecl_TRenderCommandTag<_unsigned_int___cdecl_RuntimeVirtualTexture::GetRuntimeVirtualTextureSceneIndex_GameThread(URuntimeVirtualTextureComponent_*)_::_2_::TSTR_GetSceneIndexCommand2459>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"GetSceneIndexCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"GetSceneIndexCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_unsigned_int___cdecl_RuntimeVirtualTexture::GetRuntimeVirtualTextureSceneIndex_GameThread(URuntimeVirtualTextureComponent_*)_::_2_::TSTR_GetSceneIndexCommand2459>_const_&___cdecl_TRenderCommandTag<_unsigned_int___cdecl_RuntimeVirtualTexture::GetRuntimeVirtualTextureSceneIndex_GameThread(URuntimeVirtualTextureComponent_*)_::_2_::TSTR_GetSceneIndexCommand2459>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"GetSceneIndexCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_unsigned_int___cdecl_RuntimeVirtualTexture::GetRuntimeVirtualTextureSceneIndex_GameThread(URuntimeVirtualTextureComponent_*)_::_2_::TSTR_GetSceneIndexCommand2459>_const_&___cdecl_TRenderCommandTag<_unsigned_int___cdecl_RuntimeVirtualTexture::GetRuntimeVirtualTextureSceneIndex_GameThread(URuntimeVirtualTextureComponent_*)_::_2_::TSTR_GetSceneIndexCommand2459>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"GetSceneIndexCommand",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_GetSceneIndexCo;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

