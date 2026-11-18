// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 1

// Get @ 145ee2c10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_FInteractiveFoliageSceneProxy::UpdateParameters_GameThread(UE::Math::TVector<double>_const_&,UE::Math::TVector4<double>_const_&)_::_2_::TSTR_UpdateFoliageParameters48>
* __cdecl TRenderCommandTag<`FInteractiveFoliageSceneProxy::UpdateParameters_GameThread'::__l2::TSTR_UpdateFoliageParameters48>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FInteractiveFoliageSceneProxy::UpdateParameters_GameThread(struct_UE::Math::TVector<double>_const&___ptr64,struct_UE::Math::TVector4<double>_const&___ptr64)___ptr64'::`2'::TSTR_UpdateFoliageParameters48>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FInteractiveFoliageSceneProxy::UpdateParameters_GameThread(UE::Math::TVector<double>_const&___ptr64,UE::Math::TVector4<double>_const&___ptr64)___ptr64'::`2'::TSTR_UpdateFoliageParameters48>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FInteractiveFoliageSceneProxy::UpdateParameters_GameThread(struct_UE::Math::TVector<double>_const&___ptr64,struct_UE::Math::TVector4<double>_const&___ptr64)___ptr64'::`2'::TSTR_UpdateFoliageParameters48>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FInteractiveFoliageSceneProxy::UpdateParameters_GameThread(UE::Math::TVector<double>_const&___ptr64,UE::Math::TVector4<double>_const&___ptr64)___ptr64'::`2'::TSTR_UpdateFoliageParameters48>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FInteractiveFoliageSceneProxy::UpdateParameters_GameThread(struct_UE::Math::TVector<double>_const&___ptr64,struct_UE::Math::TVector4<double>_const&___ptr64)___ptr64'::`2'::TSTR_UpdateFoliageParameters48>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FInteractiveFoliageSceneProxy::UpdateParameters_GameThread(UE::Math::TVector<double>_const&___ptr64,UE::Math::TVector4<double>_const&___ptr64)___ptr64'::`2'::TSTR_UpdateFoliageParameters48>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"UpdateFoliageParameters");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FInteractiveFoliageSceneProxy::UpdateParameters_GameThread(struct_UE::Math::TVector<double>_const&___ptr64,struct_UE::Math::TVector4<double>_const&___ptr64)___ptr64'::`2'::TSTR_UpdateFoliageParameters48>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FInteractiveFoliageSceneProxy::UpdateParameters_GameThread(UE::Math::TVector<double>_const&___ptr64,UE::Math::TVector4<double>_const&___ptr64)___ptr64'::`2'::TSTR_UpdateFoliageParameters48>::Get(void)'
                ::__l2::Stat,*pFVar1,L"UpdateFoliageParameters","STATGROUP_RenderThreadCommands",
               "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FInteractiveFoliageSceneProxy::UpdateParameters_GameThread(struct_UE::Math::TVector<double>_const&___ptr64,struct_UE::Math::TVector4<double>_const&___ptr64)___ptr64'::`2'::TSTR_UpdateFoliageParameters48>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FInteractiveFoliageSceneProxy::UpdateParameters_GameThread(UE::Math::TVector<double>_const&___ptr64,UE::Math::TVector4<double>_const&___ptr64)___ptr64'::`2'::TSTR_UpdateFoliageParameters48>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FInteractiveFoliageSceneProxy::UpdateParameters_GameThread(struct_UE::Math::TVector<double>_const&___ptr64,struct_UE::Math::TVector4<double>_const&___ptr64)___ptr64'::`2'::TSTR_UpdateFoliageParameters48>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FInteractiveFoliageSceneProxy::UpdateParameters_GameThread(UE::Math::TVector<double>_const&___ptr64,UE::Math::TVector4<double>_const&___ptr64)___ptr64'::`2'::TSTR_UpdateFoliageParameters48>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FInteractiveFoliageSceneProxy::UpdateParameters_GameThread(struct_UE::Math::TVector<double>_const&___ptr64,struct_UE::Math::TVector4<double>_const&___ptr64)___ptr64'::`2'::TSTR_UpdateFoliageParameters48>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FInteractiveFoliageSceneProxy::UpdateParameters_GameThread(UE::Math::TVector<double>_const&___ptr64,UE::Math::TVector4<double>_const&___ptr64)___ptr64'::`2'::TSTR_UpdateFoliageParameters48>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FInteractiveFoliageSceneProxy::UpdateParameters_GameThread(struct_UE::Math::TVector<double>_const&___ptr64,struct_UE::Math::TVector4<double>_const&___ptr64)___ptr64'::`2'::TSTR_UpdateFoliageParameters48>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FInteractiveFoliageSceneProxy::UpdateParameters_GameThread(UE::Math::TVector<double>_const&___ptr64,UE::Math::TVector4<double>_const&___ptr64)___ptr64'::`2'::TSTR_UpdateFoliageParameters48>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"UpdateFoliageParameters");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FInteractiveFoliageSceneProxy::UpdateParameters_GameThread(struct_UE::Math::TVector<double>_const&___ptr64,struct_UE::Math::TVector4<double>_const&___ptr64)___ptr64'::`2'::TSTR_UpdateFoliageParameters48>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FInteractiveFoliageSceneProxy::UpdateParameters_GameThread(UE::Math::TVector<double>_const&___ptr64,UE::Math::TVector4<double>_const&___ptr64)___ptr64'::`2'::TSTR_UpdateFoliageParameters48>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"UpdateFoliageParameters",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"UpdateFoliageParameters";
    _DAT_155197058 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FInteractiveFoliageSceneProxy::UpdateParameters_GameThread(struct_UE::Math::TVector<double>_const&___ptr64,struct_UE::Math::TVector4<double>_const&___ptr64)___ptr64'::`2'::TSTR_UpdateFoliageParameters48>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FInteractiveFoliageSceneProxy::UpdateParameters_GameThread(UE::Math::TVector<double>_const&___ptr64,UE::Math::TVector4<double>_const&___ptr64)___ptr64'::`2'::TSTR_UpdateFoliageParameters48>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_public:_void___cdecl_FInteractiveFoliageSceneProxy::UpdateParameters_GameThread(UE::Math::TVector<double>_const_&,UE::Math::TVector4<double>_const_&)_::_2_::TSTR_UpdateFoliageParameters48>
          *)&`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FInteractiveFoliageSceneProxy::UpdateParameters_GameThread(struct_UE::Math::TVector<double>_const&___ptr64,struct_UE::Math::TVector4<double>_const&___ptr64)___ptr64'::`2'::TSTR_UpdateFoliageParameters48>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FInteractiveFoliageSceneProxy::UpdateParameters_GameThread(UE::Math::TVector<double>_const&___ptr64,UE::Math::TVector4<double>_const&___ptr64)___ptr64'::`2'::TSTR_UpdateFoliageParameters48>::Get(void)'
             ::__l2::Tag;
}

