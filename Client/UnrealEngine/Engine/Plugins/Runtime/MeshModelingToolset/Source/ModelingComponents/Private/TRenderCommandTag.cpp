// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 9

// Get @ 14ca8cc90

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_bool___cdecl_UE::AssetUtils::ForceVirtualTexturePrefetch(UE::Geometry::FImageDimensions,bool)_::_5_::TSTR_AssetUtils_ForceVirtualTexturePrefetch356>
* __cdecl TRenderCommandTag<`UE::AssetUtils::ForceVirtualTexturePrefetch'::__l5::TSTR_AssetUtils_ForceVirtualTexturePrefetch356>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_bool___cdecl_UE::AssetUtils::ForceVirtualTexturePrefetch(UE::Geometry::FImageDimensions,bool)_::_5_::TSTR_AssetUtils_ForceVirtualTexturePrefetch356>_const_&___cdecl_TRenderCommandTag<_bool___cdecl_UE::AssetUtils::ForceVirtualTexturePrefetch(UE::Geometry::FImageDimensions,bool)_::_5_::TSTR_AssetUtils_ForceVirtualTexturePrefetch356>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_bool___cdecl_UE::AssetUtils::ForceVirtualTexturePrefetch(UE::Geometry::FImageDimensions,bool)_::_5_::TSTR_AssetUtils_ForceVirtualTexturePrefetch356>_const_&___cdecl_TRenderCommandTag<_bool___cdecl_UE::AssetUtils::ForceVirtualTexturePrefetch(UE::Geometry::FImageDimensions,bool)_::_5_::TSTR_AssetUtils_ForceVirtualTexturePrefetch356>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"AssetUtils_ForceVirtualTexturePrefetch");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                   L"AssetUtils_ForceVirtualTexturePrefetch","STATGROUP_RenderThreadCommands",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_bool___cdecl_UE::AssetUtils::ForceVirtualTexturePrefetch(UE::Geometry::FImageDimensions,bool)_::_5_::TSTR_AssetUtils_ForceVirtualTexturePrefetch356>_const_&___cdecl_TRenderCommandTag<_bool___cdecl_UE::AssetUtils::ForceVirtualTexturePrefetch(UE::Geometry::FImageDimensions,bool)_::_5_::TSTR_AssetUtils_ForceVirtualTexturePrefetch356>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"AssetUtils_ForceVirtualTexturePrefetch");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_bool___cdecl_UE::AssetUtils::ForceVirtualTexturePrefetch(UE::Geometry::FImageDimensions,bool)_::_5_::TSTR_AssetUtils_ForceVirtualTexturePrefetch356>_const_&___cdecl_TRenderCommandTag<_bool___cdecl_UE::AssetUtils::ForceVirtualTexturePrefetch(UE::Geometry::FImageDimensions,bool)_::_5_::TSTR_AssetUtils_ForceVirtualTexturePrefetch356>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"AssetUtils_ForceVirtualTexturePrefetch",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_AssetUtils_Forc;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14ca8ce40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_FOctreeDynamicMeshSceneProxy::InitializeFromDecomposition(UE::Geometry::FArrayIndexSetsDecomposition_const_&)_::_16_::TSTR_FOctreeDynamicMeshSceneProxyInitializeFromDecomposition150>
* __cdecl TRenderCommandTag<`FOctreeDynamicMeshSceneProxy::InitializeFromDecomposition'::__l16::TSTR_FOctreeDynamicMeshSceneProxyInitializeFromDecomposition150>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::InitializeFromDecomposition(class_UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64)___ptr64'::`16'::TSTR_FOctreeDynamicMeshSceneProxyInitializeFromDecomposition150>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::InitializeFromDecomposition(UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64)___ptr64'::`16'::TSTR_FOctreeDynamicMeshSceneProxyInitializeFromDecomposition150>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::InitializeFromDecomposition(class_UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64)___ptr64'::`16'::TSTR_FOctreeDynamicMeshSceneProxyInitializeFromDecomposition150>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::InitializeFromDecomposition(UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64)___ptr64'::`16'::TSTR_FOctreeDynamicMeshSceneProxyInitializeFromDecomposition150>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::InitializeFromDecomposition(class_UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64)___ptr64'::`16'::TSTR_FOctreeDynamicMeshSceneProxyInitializeFromDecomposition150>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::InitializeFromDecomposition(UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64)___ptr64'::`16'::TSTR_FOctreeDynamicMeshSceneProxyInitializeFromDecomposition150>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"FOctreeDynamicMeshSceneProxyInitializeFromDecomposition");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::InitializeFromDecomposition(class_UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64)___ptr64'::`16'::TSTR_FOctreeDynamicMeshSceneProxyInitializeFromDecomposition150>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::InitializeFromDecomposition(UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64)___ptr64'::`16'::TSTR_FOctreeDynamicMeshSceneProxyInitializeFromDecomposition150>::Get(void)'
                ::__l2::Stat,*pFVar1,L"FOctreeDynamicMeshSceneProxyInitializeFromDecomposition",
               "STATGROUP_RenderThreadCommands","STATCAT_Advanced",L"Render Thread Commands",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::InitializeFromDecomposition(class_UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64)___ptr64'::`16'::TSTR_FOctreeDynamicMeshSceneProxyInitializeFromDecomposition150>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::InitializeFromDecomposition(UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64)___ptr64'::`16'::TSTR_FOctreeDynamicMeshSceneProxyInitializeFromDecomposition150>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::InitializeFromDecomposition(class_UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64)___ptr64'::`16'::TSTR_FOctreeDynamicMeshSceneProxyInitializeFromDecomposition150>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::InitializeFromDecomposition(UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64)___ptr64'::`16'::TSTR_FOctreeDynamicMeshSceneProxyInitializeFromDecomposition150>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::InitializeFromDecomposition(class_UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64)___ptr64'::`16'::TSTR_FOctreeDynamicMeshSceneProxyInitializeFromDecomposition150>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::InitializeFromDecomposition(UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64)___ptr64'::`16'::TSTR_FOctreeDynamicMeshSceneProxyInitializeFromDecomposition150>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::InitializeFromDecomposition(class_UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64)___ptr64'::`16'::TSTR_FOctreeDynamicMeshSceneProxyInitializeFromDecomposition150>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::InitializeFromDecomposition(UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64)___ptr64'::`16'::TSTR_FOctreeDynamicMeshSceneProxyInitializeFromDecomposition150>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"FOctreeDynamicMeshSceneProxyInitializeFromDecomposition")
      ;
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::InitializeFromDecomposition(class_UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64)___ptr64'::`16'::TSTR_FOctreeDynamicMeshSceneProxyInitializeFromDecomposition150>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::InitializeFromDecomposition(UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64)___ptr64'::`16'::TSTR_FOctreeDynamicMeshSceneProxyInitializeFromDecomposition150>::Get(void)'
                           ::__l2::Stat,*pFVar1,
                          L"FOctreeDynamicMeshSceneProxyInitializeFromDecomposition",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"FOctreeDynamicMeshSceneProxyInitializeFromDecomposition";
    _DAT_1553482d8 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::InitializeFromDecomposition(class_UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64)___ptr64'::`16'::TSTR_FOctreeDynamicMeshSceneProxyInitializeFromDecomposition150>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::InitializeFromDecomposition(UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64)___ptr64'::`16'::TSTR_FOctreeDynamicMeshSceneProxyInitializeFromDecomposition150>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_public:_void___cdecl_FOctreeDynamicMeshSceneProxy::InitializeFromDecomposition(UE::Geometry::FArrayIndexSetsDecomposition_const_&)_::_16_::TSTR_FOctreeDynamicMeshSceneProxyInitializeFromDecomposition150>
          *)&`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::InitializeFromDecomposition(class_UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64)___ptr64'::`16'::TSTR_FOctreeDynamicMeshSceneProxyInitializeFromDecomposition150>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::InitializeFromDecomposition(UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64)___ptr64'::`16'::TSTR_FOctreeDynamicMeshSceneProxyInitializeFromDecomposition150>::Get(void)'
             ::__l2::Tag;
}

// Get @ 14ca8d000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:___cdecl__public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(UE::Geometry::FArrayIndexSetsDecomposition_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&)_::_6_::<lambda_2>::operator()(int)const_::_2_::TSTR_FOctreeDynamicMeshSceneProxyUpdateAddOne213>
* __cdecl TRenderCommandTag<``FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition'::__l6::<lambda_2>::operator()'::__l2::TSTR_FOctreeDynamicMeshSceneProxyUpdateAddOne213>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(class_UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,class_TArray<int,class_TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`6'::<lambda_2>::operator()(int)const___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdateAddOne213>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`6'::<lambda_2>::operator()(int)const___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdateAddOne213>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(class_UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,class_TArray<int,class_TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`6'::<lambda_2>::operator()(int)const___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdateAddOne213>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`6'::<lambda_2>::operator()(int)const___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdateAddOne213>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(class_UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,class_TArray<int,class_TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`6'::<lambda_2>::operator()(int)const___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdateAddOne213>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`6'::<lambda_2>::operator()(int)const___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdateAddOne213>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"FOctreeDynamicMeshSceneProxyUpdateAddOne");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(class_UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,class_TArray<int,class_TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`6'::<lambda_2>::operator()(int)const___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdateAddOne213>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`6'::<lambda_2>::operator()(int)const___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdateAddOne213>::Get(void)'
                ::__l2::Stat,*pFVar1,L"FOctreeDynamicMeshSceneProxyUpdateAddOne",
               "STATGROUP_RenderThreadCommands","STATCAT_Advanced",L"Render Thread Commands",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(class_UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,class_TArray<int,class_TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`6'::<lambda_2>::operator()(int)const___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdateAddOne213>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`6'::<lambda_2>::operator()(int)const___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdateAddOne213>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(class_UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,class_TArray<int,class_TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`6'::<lambda_2>::operator()(int)const___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdateAddOne213>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`6'::<lambda_2>::operator()(int)const___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdateAddOne213>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(class_UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,class_TArray<int,class_TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`6'::<lambda_2>::operator()(int)const___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdateAddOne213>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`6'::<lambda_2>::operator()(int)const___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdateAddOne213>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(class_UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,class_TArray<int,class_TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`6'::<lambda_2>::operator()(int)const___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdateAddOne213>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`6'::<lambda_2>::operator()(int)const___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdateAddOne213>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"FOctreeDynamicMeshSceneProxyUpdateAddOne");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(class_UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,class_TArray<int,class_TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`6'::<lambda_2>::operator()(int)const___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdateAddOne213>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`6'::<lambda_2>::operator()(int)const___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdateAddOne213>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"FOctreeDynamicMeshSceneProxyUpdateAddOne",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"FOctreeDynamicMeshSceneProxyUpdateAddOne";
    _DAT_155348278 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(class_UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,class_TArray<int,class_TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`6'::<lambda_2>::operator()(int)const___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdateAddOne213>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`6'::<lambda_2>::operator()(int)const___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdateAddOne213>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_public:___cdecl__public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(UE::Geometry::FArrayIndexSetsDecomposition_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&)_::_6_::<lambda_2>::operator()(int)const_::_2_::TSTR_FOctreeDynamicMeshSceneProxyUpdateAddOne213>
          *)&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(class_UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,class_TArray<int,class_TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`6'::<lambda_2>::operator()(int)const___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdateAddOne213>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`6'::<lambda_2>::operator()(int)const___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdateAddOne213>::Get(void)'
             ::__l2::Tag;
}

// Get @ 14ca8d1c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(UE::Geometry::FArrayIndexSetsDecomposition_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&)_::_2_::TSTR_FOctreeDynamicMeshSceneProxyUpdatePreClean170>
* __cdecl TRenderCommandTag<`FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition'::__l2::TSTR_FOctreeDynamicMeshSceneProxyUpdatePreClean170>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(class_UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,class_TArray<int,class_TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdatePreClean170>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdatePreClean170>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(class_UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,class_TArray<int,class_TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdatePreClean170>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdatePreClean170>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(class_UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,class_TArray<int,class_TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdatePreClean170>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdatePreClean170>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"FOctreeDynamicMeshSceneProxyUpdatePreClean");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(class_UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,class_TArray<int,class_TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdatePreClean170>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdatePreClean170>::Get(void)'
                ::__l2::Stat,*pFVar1,L"FOctreeDynamicMeshSceneProxyUpdatePreClean",
               "STATGROUP_RenderThreadCommands","STATCAT_Advanced",L"Render Thread Commands",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(class_UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,class_TArray<int,class_TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdatePreClean170>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdatePreClean170>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(class_UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,class_TArray<int,class_TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdatePreClean170>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdatePreClean170>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(class_UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,class_TArray<int,class_TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdatePreClean170>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdatePreClean170>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(class_UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,class_TArray<int,class_TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdatePreClean170>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdatePreClean170>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"FOctreeDynamicMeshSceneProxyUpdatePreClean");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(class_UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,class_TArray<int,class_TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdatePreClean170>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdatePreClean170>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"FOctreeDynamicMeshSceneProxyUpdatePreClean",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"FOctreeDynamicMeshSceneProxyUpdatePreClean";
    _DAT_1553482a8 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(class_UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,class_TArray<int,class_TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdatePreClean170>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdatePreClean170>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(UE::Geometry::FArrayIndexSetsDecomposition_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&)_::_2_::TSTR_FOctreeDynamicMeshSceneProxyUpdatePreClean170>
          *)&`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(class_UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,class_TArray<int,class_TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdatePreClean170>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition(UE::Geometry::FArrayIndexSetsDecomposition_const&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`2'::TSTR_FOctreeDynamicMeshSceneProxyUpdatePreClean170>::Get(void)'
             ::__l2::Tag;
}

// Get @ 14ca8d380

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:___cdecl_FLineSetSceneProxy::FLineSetSceneProxy(ULineSetComponent_*)_::_2_::TSTR_LineSetVertexBuffersInit117>
* __cdecl TRenderCommandTag<`FLineSetSceneProxy::FLineSetSceneProxy'::__l2::TSTR_LineSetVertexBuffersInit117>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FLineSetSceneProxy::FLineSetSceneProxy(class_ULineSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit117>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FLineSetSceneProxy::FLineSetSceneProxy(ULineSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit117>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FLineSetSceneProxy::FLineSetSceneProxy(class_ULineSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit117>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FLineSetSceneProxy::FLineSetSceneProxy(ULineSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit117>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FLineSetSceneProxy::FLineSetSceneProxy(class_ULineSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit117>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FLineSetSceneProxy::FLineSetSceneProxy(ULineSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit117>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"LineSetVertexBuffersInit");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FLineSetSceneProxy::FLineSetSceneProxy(class_ULineSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit117>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FLineSetSceneProxy::FLineSetSceneProxy(ULineSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit117>::Get(void)'
                ::__l2::Stat,*pFVar1,L"LineSetVertexBuffersInit","STATGROUP_RenderThreadCommands",
               "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FLineSetSceneProxy::FLineSetSceneProxy(class_ULineSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit117>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FLineSetSceneProxy::FLineSetSceneProxy(ULineSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit117>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FLineSetSceneProxy::FLineSetSceneProxy(class_ULineSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit117>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FLineSetSceneProxy::FLineSetSceneProxy(ULineSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit117>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FLineSetSceneProxy::FLineSetSceneProxy(class_ULineSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit117>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FLineSetSceneProxy::FLineSetSceneProxy(ULineSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit117>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FLineSetSceneProxy::FLineSetSceneProxy(class_ULineSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit117>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FLineSetSceneProxy::FLineSetSceneProxy(ULineSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit117>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"LineSetVertexBuffersInit");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FLineSetSceneProxy::FLineSetSceneProxy(class_ULineSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit117>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FLineSetSceneProxy::FLineSetSceneProxy(ULineSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit117>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"LineSetVertexBuffersInit",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"LineSetVertexBuffersInit";
    _DAT_155348248 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FLineSetSceneProxy::FLineSetSceneProxy(class_ULineSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit117>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FLineSetSceneProxy::FLineSetSceneProxy(ULineSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit117>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_public:___cdecl_FLineSetSceneProxy::FLineSetSceneProxy(ULineSetComponent_*)_::_2_::TSTR_LineSetVertexBuffersInit117>
          *)&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FLineSetSceneProxy::FLineSetSceneProxy(class_ULineSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit117>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FLineSetSceneProxy::FLineSetSceneProxy(ULineSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit117>::Get(void)'
             ::__l2::Tag;
}

// Get @ 14ca8d540

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:___cdecl_FMeshWireframeSceneProxy::FMeshWireframeSceneProxy(UMeshWireframeComponent_*,IMeshWireframeSource_const_*)_::_2_::TSTR_MeshWireframeVertexBuffersInit243>
* __cdecl TRenderCommandTag<`FMeshWireframeSceneProxy::FMeshWireframeSceneProxy'::__l2::TSTR_MeshWireframeVertexBuffersInit243>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FMeshWireframeSceneProxy::FMeshWireframeSceneProxy(class_UMeshWireframeComponent*___ptr64,class_IMeshWireframeSource_const*___ptr64)___ptr64'::`2'::TSTR_MeshWireframeVertexBuffersInit243>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FMeshWireframeSceneProxy::FMeshWireframeSceneProxy(UMeshWireframeComponent*___ptr64,IMeshWireframeSource_const*___ptr64)___ptr64'::`2'::TSTR_MeshWireframeVertexBuffersInit243>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FMeshWireframeSceneProxy::FMeshWireframeSceneProxy(class_UMeshWireframeComponent*___ptr64,class_IMeshWireframeSource_const*___ptr64)___ptr64'::`2'::TSTR_MeshWireframeVertexBuffersInit243>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FMeshWireframeSceneProxy::FMeshWireframeSceneProxy(UMeshWireframeComponent*___ptr64,IMeshWireframeSource_const*___ptr64)___ptr64'::`2'::TSTR_MeshWireframeVertexBuffersInit243>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FMeshWireframeSceneProxy::FMeshWireframeSceneProxy(class_UMeshWireframeComponent*___ptr64,class_IMeshWireframeSource_const*___ptr64)___ptr64'::`2'::TSTR_MeshWireframeVertexBuffersInit243>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FMeshWireframeSceneProxy::FMeshWireframeSceneProxy(UMeshWireframeComponent*___ptr64,IMeshWireframeSource_const*___ptr64)___ptr64'::`2'::TSTR_MeshWireframeVertexBuffersInit243>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"MeshWireframeVertexBuffersInit");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FMeshWireframeSceneProxy::FMeshWireframeSceneProxy(class_UMeshWireframeComponent*___ptr64,class_IMeshWireframeSource_const*___ptr64)___ptr64'::`2'::TSTR_MeshWireframeVertexBuffersInit243>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FMeshWireframeSceneProxy::FMeshWireframeSceneProxy(UMeshWireframeComponent*___ptr64,IMeshWireframeSource_const*___ptr64)___ptr64'::`2'::TSTR_MeshWireframeVertexBuffersInit243>::Get(void)'
                ::__l2::Stat,*pFVar1,L"MeshWireframeVertexBuffersInit",
               "STATGROUP_RenderThreadCommands","STATCAT_Advanced",L"Render Thread Commands",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FMeshWireframeSceneProxy::FMeshWireframeSceneProxy(class_UMeshWireframeComponent*___ptr64,class_IMeshWireframeSource_const*___ptr64)___ptr64'::`2'::TSTR_MeshWireframeVertexBuffersInit243>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FMeshWireframeSceneProxy::FMeshWireframeSceneProxy(UMeshWireframeComponent*___ptr64,IMeshWireframeSource_const*___ptr64)___ptr64'::`2'::TSTR_MeshWireframeVertexBuffersInit243>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FMeshWireframeSceneProxy::FMeshWireframeSceneProxy(class_UMeshWireframeComponent*___ptr64,class_IMeshWireframeSource_const*___ptr64)___ptr64'::`2'::TSTR_MeshWireframeVertexBuffersInit243>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FMeshWireframeSceneProxy::FMeshWireframeSceneProxy(UMeshWireframeComponent*___ptr64,IMeshWireframeSource_const*___ptr64)___ptr64'::`2'::TSTR_MeshWireframeVertexBuffersInit243>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FMeshWireframeSceneProxy::FMeshWireframeSceneProxy(class_UMeshWireframeComponent*___ptr64,class_IMeshWireframeSource_const*___ptr64)___ptr64'::`2'::TSTR_MeshWireframeVertexBuffersInit243>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FMeshWireframeSceneProxy::FMeshWireframeSceneProxy(UMeshWireframeComponent*___ptr64,IMeshWireframeSource_const*___ptr64)___ptr64'::`2'::TSTR_MeshWireframeVertexBuffersInit243>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FMeshWireframeSceneProxy::FMeshWireframeSceneProxy(class_UMeshWireframeComponent*___ptr64,class_IMeshWireframeSource_const*___ptr64)___ptr64'::`2'::TSTR_MeshWireframeVertexBuffersInit243>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FMeshWireframeSceneProxy::FMeshWireframeSceneProxy(UMeshWireframeComponent*___ptr64,IMeshWireframeSource_const*___ptr64)___ptr64'::`2'::TSTR_MeshWireframeVertexBuffersInit243>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"MeshWireframeVertexBuffersInit");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FMeshWireframeSceneProxy::FMeshWireframeSceneProxy(class_UMeshWireframeComponent*___ptr64,class_IMeshWireframeSource_const*___ptr64)___ptr64'::`2'::TSTR_MeshWireframeVertexBuffersInit243>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FMeshWireframeSceneProxy::FMeshWireframeSceneProxy(UMeshWireframeComponent*___ptr64,IMeshWireframeSource_const*___ptr64)___ptr64'::`2'::TSTR_MeshWireframeVertexBuffersInit243>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"MeshWireframeVertexBuffersInit",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"MeshWireframeVertexBuffersInit";
    _DAT_155348218 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FMeshWireframeSceneProxy::FMeshWireframeSceneProxy(class_UMeshWireframeComponent*___ptr64,class_IMeshWireframeSource_const*___ptr64)___ptr64'::`2'::TSTR_MeshWireframeVertexBuffersInit243>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FMeshWireframeSceneProxy::FMeshWireframeSceneProxy(UMeshWireframeComponent*___ptr64,IMeshWireframeSource_const*___ptr64)___ptr64'::`2'::TSTR_MeshWireframeVertexBuffersInit243>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_public:___cdecl_FMeshWireframeSceneProxy::FMeshWireframeSceneProxy(UMeshWireframeComponent_*,IMeshWireframeSource_const_*)_::_2_::TSTR_MeshWireframeVertexBuffersInit243>
          *)&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FMeshWireframeSceneProxy::FMeshWireframeSceneProxy(class_UMeshWireframeComponent*___ptr64,class_IMeshWireframeSource_const*___ptr64)___ptr64'::`2'::TSTR_MeshWireframeVertexBuffersInit243>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FMeshWireframeSceneProxy::FMeshWireframeSceneProxy(UMeshWireframeComponent*___ptr64,IMeshWireframeSource_const*___ptr64)___ptr64'::`2'::TSTR_MeshWireframeVertexBuffersInit243>::Get(void)'
             ::__l2::Tag;
}

// Get @ 14ca8d700

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:___cdecl_FPointSetSceneProxy::FPointSetSceneProxy(UPointSetComponent_*)_::_2_::TSTR_OverlayVertexBuffersInit132>
* __cdecl TRenderCommandTag<`FPointSetSceneProxy::FPointSetSceneProxy'::__l2::TSTR_OverlayVertexBuffersInit132>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FPointSetSceneProxy::FPointSetSceneProxy(class_UPointSetComponent*___ptr64)___ptr64'::`2'::TSTR_OverlayVertexBuffersInit132>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FPointSetSceneProxy::FPointSetSceneProxy(UPointSetComponent*___ptr64)___ptr64'::`2'::TSTR_OverlayVertexBuffersInit132>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FPointSetSceneProxy::FPointSetSceneProxy(class_UPointSetComponent*___ptr64)___ptr64'::`2'::TSTR_OverlayVertexBuffersInit132>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FPointSetSceneProxy::FPointSetSceneProxy(UPointSetComponent*___ptr64)___ptr64'::`2'::TSTR_OverlayVertexBuffersInit132>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FPointSetSceneProxy::FPointSetSceneProxy(class_UPointSetComponent*___ptr64)___ptr64'::`2'::TSTR_OverlayVertexBuffersInit132>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FPointSetSceneProxy::FPointSetSceneProxy(UPointSetComponent*___ptr64)___ptr64'::`2'::TSTR_OverlayVertexBuffersInit132>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"OverlayVertexBuffersInit");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FPointSetSceneProxy::FPointSetSceneProxy(class_UPointSetComponent*___ptr64)___ptr64'::`2'::TSTR_OverlayVertexBuffersInit132>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FPointSetSceneProxy::FPointSetSceneProxy(UPointSetComponent*___ptr64)___ptr64'::`2'::TSTR_OverlayVertexBuffersInit132>::Get(void)'
                ::__l2::Stat,*pFVar1,L"OverlayVertexBuffersInit","STATGROUP_RenderThreadCommands",
               "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FPointSetSceneProxy::FPointSetSceneProxy(class_UPointSetComponent*___ptr64)___ptr64'::`2'::TSTR_OverlayVertexBuffersInit132>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FPointSetSceneProxy::FPointSetSceneProxy(UPointSetComponent*___ptr64)___ptr64'::`2'::TSTR_OverlayVertexBuffersInit132>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FPointSetSceneProxy::FPointSetSceneProxy(class_UPointSetComponent*___ptr64)___ptr64'::`2'::TSTR_OverlayVertexBuffersInit132>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FPointSetSceneProxy::FPointSetSceneProxy(UPointSetComponent*___ptr64)___ptr64'::`2'::TSTR_OverlayVertexBuffersInit132>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FPointSetSceneProxy::FPointSetSceneProxy(class_UPointSetComponent*___ptr64)___ptr64'::`2'::TSTR_OverlayVertexBuffersInit132>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FPointSetSceneProxy::FPointSetSceneProxy(UPointSetComponent*___ptr64)___ptr64'::`2'::TSTR_OverlayVertexBuffersInit132>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FPointSetSceneProxy::FPointSetSceneProxy(class_UPointSetComponent*___ptr64)___ptr64'::`2'::TSTR_OverlayVertexBuffersInit132>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FPointSetSceneProxy::FPointSetSceneProxy(UPointSetComponent*___ptr64)___ptr64'::`2'::TSTR_OverlayVertexBuffersInit132>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"OverlayVertexBuffersInit");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FPointSetSceneProxy::FPointSetSceneProxy(class_UPointSetComponent*___ptr64)___ptr64'::`2'::TSTR_OverlayVertexBuffersInit132>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FPointSetSceneProxy::FPointSetSceneProxy(UPointSetComponent*___ptr64)___ptr64'::`2'::TSTR_OverlayVertexBuffersInit132>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"OverlayVertexBuffersInit",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"OverlayVertexBuffersInit";
    _DAT_1553481e8 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FPointSetSceneProxy::FPointSetSceneProxy(class_UPointSetComponent*___ptr64)___ptr64'::`2'::TSTR_OverlayVertexBuffersInit132>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FPointSetSceneProxy::FPointSetSceneProxy(UPointSetComponent*___ptr64)___ptr64'::`2'::TSTR_OverlayVertexBuffersInit132>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_public:___cdecl_FPointSetSceneProxy::FPointSetSceneProxy(UPointSetComponent_*)_::_2_::TSTR_OverlayVertexBuffersInit132>
          *)&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FPointSetSceneProxy::FPointSetSceneProxy(class_UPointSetComponent*___ptr64)___ptr64'::`2'::TSTR_OverlayVertexBuffersInit132>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FPointSetSceneProxy::FPointSetSceneProxy(UPointSetComponent*___ptr64)___ptr64'::`2'::TSTR_OverlayVertexBuffersInit132>::Get(void)'
             ::__l2::Tag;
}

// Get @ 14cb0cfc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:___cdecl_FTriangleSetSceneProxy::FTriangleSetSceneProxy(UTriangleSetComponent_*)_::_2_::TSTR_LineSetVertexBuffersInit101>
* __cdecl TRenderCommandTag<`FTriangleSetSceneProxy::FTriangleSetSceneProxy'::__l2::TSTR_LineSetVertexBuffersInit101>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FTriangleSetSceneProxy::FTriangleSetSceneProxy(class_UTriangleSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit101>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FTriangleSetSceneProxy::FTriangleSetSceneProxy(UTriangleSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit101>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FTriangleSetSceneProxy::FTriangleSetSceneProxy(class_UTriangleSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit101>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FTriangleSetSceneProxy::FTriangleSetSceneProxy(UTriangleSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit101>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FTriangleSetSceneProxy::FTriangleSetSceneProxy(class_UTriangleSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit101>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FTriangleSetSceneProxy::FTriangleSetSceneProxy(UTriangleSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit101>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"LineSetVertexBuffersInit");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FTriangleSetSceneProxy::FTriangleSetSceneProxy(class_UTriangleSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit101>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FTriangleSetSceneProxy::FTriangleSetSceneProxy(UTriangleSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit101>::Get(void)'
                ::__l2::Stat,*pFVar1,L"LineSetVertexBuffersInit","STATGROUP_RenderThreadCommands",
               "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FTriangleSetSceneProxy::FTriangleSetSceneProxy(class_UTriangleSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit101>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FTriangleSetSceneProxy::FTriangleSetSceneProxy(UTriangleSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit101>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FTriangleSetSceneProxy::FTriangleSetSceneProxy(class_UTriangleSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit101>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FTriangleSetSceneProxy::FTriangleSetSceneProxy(UTriangleSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit101>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FTriangleSetSceneProxy::FTriangleSetSceneProxy(class_UTriangleSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit101>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FTriangleSetSceneProxy::FTriangleSetSceneProxy(UTriangleSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit101>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FTriangleSetSceneProxy::FTriangleSetSceneProxy(class_UTriangleSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit101>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FTriangleSetSceneProxy::FTriangleSetSceneProxy(UTriangleSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit101>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"LineSetVertexBuffersInit");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FTriangleSetSceneProxy::FTriangleSetSceneProxy(class_UTriangleSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit101>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FTriangleSetSceneProxy::FTriangleSetSceneProxy(UTriangleSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit101>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"LineSetVertexBuffersInit",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"LineSetVertexBuffersInit";
    _DAT_1553493e8 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FTriangleSetSceneProxy::FTriangleSetSceneProxy(class_UTriangleSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit101>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FTriangleSetSceneProxy::FTriangleSetSceneProxy(UTriangleSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit101>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_public:___cdecl_FTriangleSetSceneProxy::FTriangleSetSceneProxy(UTriangleSetComponent_*)_::_2_::TSTR_LineSetVertexBuffersInit101>
          *)&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_FTriangleSetSceneProxy::FTriangleSetSceneProxy(class_UTriangleSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit101>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_FTriangleSetSceneProxy::FTriangleSetSceneProxy(UTriangleSetComponent*___ptr64)___ptr64'::`2'::TSTR_LineSetVertexBuffersInit101>::Get(void)'
             ::__l2::Tag;
}

// Get @ 14cb94040

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_UE::Internal::FlushRHIThreadToUpdateTextureRenderTargetReference(void)_::_2_::TSTR_FlushRHIThreadToUpdateTextureRenderTargetReference155>
* __cdecl TRenderCommandTag<`UE::Internal::FlushRHIThreadToUpdateTextureRenderTargetReference'::__l2::TSTR_FlushRHIThreadToUpdateTextureRenderTargetReference155>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_UE::Internal::FlushRHIThreadToUpdateTextureRenderTargetReference(void)_::_2_::TSTR_FlushRHIThreadToUpdateTextureRenderTargetReference155>_const_&___cdecl_TRenderCommandTag<_void___cdecl_UE::Internal::FlushRHIThreadToUpdateTextureRenderTargetReference(void)_::_2_::TSTR_FlushRHIThreadToUpdateTextureRenderTargetReference155>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_UE::Internal::FlushRHIThreadToUpdateTextureRenderTargetReference(void)_::_2_::TSTR_FlushRHIThreadToUpdateTextureRenderTargetReference155>_const_&___cdecl_TRenderCommandTag<_void___cdecl_UE::Internal::FlushRHIThreadToUpdateTextureRenderTargetReference(void)_::_2_::TSTR_FlushRHIThreadToUpdateTextureRenderTargetReference155>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FlushRHIThreadToUpdateTextureRenderTargetReference");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                   L"FlushRHIThreadToUpdateTextureRenderTargetReference",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_UE::Internal::FlushRHIThreadToUpdateTextureRenderTargetReference(void)_::_2_::TSTR_FlushRHIThreadToUpdateTextureRenderTargetReference155>_const_&___cdecl_TRenderCommandTag<_void___cdecl_UE::Internal::FlushRHIThreadToUpdateTextureRenderTargetReference(void)_::_2_::TSTR_FlushRHIThreadToUpdateTextureRenderTargetReference155>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FlushRHIThreadToUpdateTextureRenderTargetReference");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_UE::Internal::FlushRHIThreadToUpdateTextureRenderTargetReference(void)_::_2_::TSTR_FlushRHIThreadToUpdateTextureRenderTargetReference155>_const_&___cdecl_TRenderCommandTag<_void___cdecl_UE::Internal::FlushRHIThreadToUpdateTextureRenderTargetReference(void)_::_2_::TSTR_FlushRHIThreadToUpdateTextureRenderTargetReference155>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FlushRHIThreadToUpdateTextureRenderTargetReference",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FlushRHIThreadT;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

