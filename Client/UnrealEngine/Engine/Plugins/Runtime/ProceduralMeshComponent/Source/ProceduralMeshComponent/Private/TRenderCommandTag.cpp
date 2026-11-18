// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralMeshComponent
// Functions: 3

// Get @ 14d270e30

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_UProceduralMeshComponent::UpdateMeshSection(int,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&,TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_>_const_&)_::_49_::TSTR_FProcMeshSectionUpdate756>
* __cdecl TRenderCommandTag<`UProceduralMeshComponent::UpdateMeshSection'::__l49::TSTR_FProcMeshSectionUpdate756>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UProceduralMeshComponent::UpdateMeshSection(int,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&,TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_>_const_&)_::_49_::TSTR_FProcMeshSectionUpdate756>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UProceduralMeshComponent::UpdateMeshSection(int,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&,TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_>_const_&)_::_49_::TSTR_FProcMeshSectionUpdate756>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UProceduralMeshComponent::UpdateMeshSection(int,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&,TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_>_const_&)_::_49_::TSTR_FProcMeshSectionUpdate756>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UProceduralMeshComponent::UpdateMeshSection(int,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&,TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_>_const_&)_::_49_::TSTR_FProcMeshSectionUpdate756>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FProcMeshSectionUpdate");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FProcMeshSectionUpdate",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UProceduralMeshComponent::UpdateMeshSection(int,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&,TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_>_const_&)_::_49_::TSTR_FProcMeshSectionUpdate756>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UProceduralMeshComponent::UpdateMeshSection(int,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&,TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_>_const_&)_::_49_::TSTR_FProcMeshSectionUpdate756>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FProcMeshSectionUpdate");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UProceduralMeshComponent::UpdateMeshSection(int,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&,TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_>_const_&)_::_49_::TSTR_FProcMeshSectionUpdate756>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UProceduralMeshComponent::UpdateMeshSection(int,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&,TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_>_const_&)_::_49_::TSTR_FProcMeshSectionUpdate756>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FProcMeshSectionUpdate",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FProcMeshSectio;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14d270fe0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_UProceduralMeshComponent::SetMeshSectionVisible(int,bool)_::_8_::TSTR_FProcMeshSectionVisibilityUpdate800>
* __cdecl TRenderCommandTag<`UProceduralMeshComponent::SetMeshSectionVisible'::__l8::TSTR_FProcMeshSectionVisibilityUpdate800>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UProceduralMeshComponent::SetMeshSectionVisible(int,bool)_::_8_::TSTR_FProcMeshSectionVisibilityUpdate800>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UProceduralMeshComponent::SetMeshSectionVisible(int,bool)_::_8_::TSTR_FProcMeshSectionVisibilityUpdate800>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UProceduralMeshComponent::SetMeshSectionVisible(int,bool)_::_8_::TSTR_FProcMeshSectionVisibilityUpdate800>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UProceduralMeshComponent::SetMeshSectionVisible(int,bool)_::_8_::TSTR_FProcMeshSectionVisibilityUpdate800>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FProcMeshSectionVisibilityUpdate");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FProcMeshSectionVisibilityUpdate",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UProceduralMeshComponent::SetMeshSectionVisible(int,bool)_::_8_::TSTR_FProcMeshSectionVisibilityUpdate800>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UProceduralMeshComponent::SetMeshSectionVisible(int,bool)_::_8_::TSTR_FProcMeshSectionVisibilityUpdate800>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FProcMeshSectionVisibilityUpdate");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UProceduralMeshComponent::SetMeshSectionVisible(int,bool)_::_8_::TSTR_FProcMeshSectionVisibilityUpdate800>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UProceduralMeshComponent::SetMeshSectionVisible(int,bool)_::_8_::TSTR_FProcMeshSectionVisibilityUpdate800>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FProcMeshSectionVisibilityUpdate","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FProcMeshSectio;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14d271190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:___cdecl_FProceduralMeshSceneProxy::FProceduralMeshSceneProxy(UProceduralMeshComponent_*)_::_15_::TSTR_InitProceduralMeshRayTracingGeometry159>
* __cdecl TRenderCommandTag<`FProceduralMeshSceneProxy::FProceduralMeshSceneProxy'::__l15::TSTR_InitProceduralMeshRayTracingGeometry159>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FProceduralMeshSceneProxy::FProceduralMeshSceneProxy(class_UProceduralMeshComponent*___ptr64)___ptr64'::`15'::TSTR_InitProceduralMeshRayTracingGeometry159>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FProceduralMeshSceneProxy::FProceduralMeshSceneProxy(UProceduralMeshComponent*___ptr64)___ptr64'::`15'::TSTR_InitProceduralMeshRayTracingGeometry159>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FProceduralMeshSceneProxy::FProceduralMeshSceneProxy(class_UProceduralMeshComponent*___ptr64)___ptr64'::`15'::TSTR_InitProceduralMeshRayTracingGeometry159>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FProceduralMeshSceneProxy::FProceduralMeshSceneProxy(UProceduralMeshComponent*___ptr64)___ptr64'::`15'::TSTR_InitProceduralMeshRayTracingGeometry159>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FProceduralMeshSceneProxy::FProceduralMeshSceneProxy(class_UProceduralMeshComponent*___ptr64)___ptr64'::`15'::TSTR_InitProceduralMeshRayTracingGeometry159>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FProceduralMeshSceneProxy::FProceduralMeshSceneProxy(UProceduralMeshComponent*___ptr64)___ptr64'::`15'::TSTR_InitProceduralMeshRayTracingGeometry159>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"InitProceduralMeshRayTracingGeometry");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FProceduralMeshSceneProxy::FProceduralMeshSceneProxy(class_UProceduralMeshComponent*___ptr64)___ptr64'::`15'::TSTR_InitProceduralMeshRayTracingGeometry159>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FProceduralMeshSceneProxy::FProceduralMeshSceneProxy(UProceduralMeshComponent*___ptr64)___ptr64'::`15'::TSTR_InitProceduralMeshRayTracingGeometry159>::Get(void)'
                ::__l2::Stat,*pFVar1,L"InitProceduralMeshRayTracingGeometry",
               "STATGROUP_RenderThreadCommands","STATCAT_Advanced",L"Render Thread Commands",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FProceduralMeshSceneProxy::FProceduralMeshSceneProxy(class_UProceduralMeshComponent*___ptr64)___ptr64'::`15'::TSTR_InitProceduralMeshRayTracingGeometry159>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FProceduralMeshSceneProxy::FProceduralMeshSceneProxy(UProceduralMeshComponent*___ptr64)___ptr64'::`15'::TSTR_InitProceduralMeshRayTracingGeometry159>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FProceduralMeshSceneProxy::FProceduralMeshSceneProxy(class_UProceduralMeshComponent*___ptr64)___ptr64'::`15'::TSTR_InitProceduralMeshRayTracingGeometry159>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FProceduralMeshSceneProxy::FProceduralMeshSceneProxy(UProceduralMeshComponent*___ptr64)___ptr64'::`15'::TSTR_InitProceduralMeshRayTracingGeometry159>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FProceduralMeshSceneProxy::FProceduralMeshSceneProxy(class_UProceduralMeshComponent*___ptr64)___ptr64'::`15'::TSTR_InitProceduralMeshRayTracingGeometry159>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FProceduralMeshSceneProxy::FProceduralMeshSceneProxy(UProceduralMeshComponent*___ptr64)___ptr64'::`15'::TSTR_InitProceduralMeshRayTracingGeometry159>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FProceduralMeshSceneProxy::FProceduralMeshSceneProxy(class_UProceduralMeshComponent*___ptr64)___ptr64'::`15'::TSTR_InitProceduralMeshRayTracingGeometry159>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FProceduralMeshSceneProxy::FProceduralMeshSceneProxy(UProceduralMeshComponent*___ptr64)___ptr64'::`15'::TSTR_InitProceduralMeshRayTracingGeometry159>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"InitProceduralMeshRayTracingGeometry");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FProceduralMeshSceneProxy::FProceduralMeshSceneProxy(class_UProceduralMeshComponent*___ptr64)___ptr64'::`15'::TSTR_InitProceduralMeshRayTracingGeometry159>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FProceduralMeshSceneProxy::FProceduralMeshSceneProxy(UProceduralMeshComponent*___ptr64)___ptr64'::`15'::TSTR_InitProceduralMeshRayTracingGeometry159>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"InitProceduralMeshRayTracingGeometry",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"InitProceduralMeshRayTracingGeometry";
    _DAT_155359718 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FProceduralMeshSceneProxy::FProceduralMeshSceneProxy(class_UProceduralMeshComponent*___ptr64)___ptr64'::`15'::TSTR_InitProceduralMeshRayTracingGeometry159>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FProceduralMeshSceneProxy::FProceduralMeshSceneProxy(UProceduralMeshComponent*___ptr64)___ptr64'::`15'::TSTR_InitProceduralMeshRayTracingGeometry159>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_public:___cdecl_FProceduralMeshSceneProxy::FProceduralMeshSceneProxy(UProceduralMeshComponent_*)_::_15_::TSTR_InitProceduralMeshRayTracingGeometry159>
          *)&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FProceduralMeshSceneProxy::FProceduralMeshSceneProxy(class_UProceduralMeshComponent*___ptr64)___ptr64'::`15'::TSTR_InitProceduralMeshRayTracingGeometry159>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FProceduralMeshSceneProxy::FProceduralMeshSceneProxy(UProceduralMeshComponent*___ptr64)___ptr64'::`15'::TSTR_InitProceduralMeshRayTracingGeometry159>::Get(void)'
             ::__l2::Tag;
}

