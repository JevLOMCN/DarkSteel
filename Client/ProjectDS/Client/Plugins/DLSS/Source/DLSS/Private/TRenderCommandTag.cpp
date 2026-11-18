// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DLSS
// Functions: 2

// Get @ 14de263d0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_bool___cdecl_FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily(FInstancedPropertyBag_const_&,UE::VirtualProduction::FUpscalerModularFeatureParameters_const_&,FSceneViewFamilyContext_&)_::_21_::TSTR_DLSSTemporalUpscalerModularFeature_ClearData359>
* __cdecl TRenderCommandTag<`FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily'::__l21::TSTR_DLSSTemporalUpscalerModularFeature_ClearData359>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_bool___cdecl_FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily(FInstancedPropertyBag_const_&,UE::VirtualProduction::FUpscalerModularFeatureParameters_const_&,FSceneViewFamilyContext_&)_::_21_::TSTR_DLSSTemporalUpscalerModularFeature_ClearData359>_const_&___cdecl_TRenderCommandTag<_public:_virtual_bool___cdecl_FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily(FInstancedPropertyBag_const_&,UE::VirtualProduction::FUpscalerModularFeatureParameters_const_&,FSceneViewFamilyContext_&)_::_21_::TSTR_DLSSTemporalUpscalerModularFeature_ClearData359>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_bool___cdecl_FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily(FInstancedPropertyBag_const_&,UE::VirtualProduction::FUpscalerModularFeatureParameters_const_&,FSceneViewFamilyContext_&)_::_21_::TSTR_DLSSTemporalUpscalerModularFeature_ClearData359>_const_&___cdecl_TRenderCommandTag<_public:_virtual_bool___cdecl_FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily(FInstancedPropertyBag_const_&,UE::VirtualProduction::FUpscalerModularFeatureParameters_const_&,FSceneViewFamilyContext_&)_::_21_::TSTR_DLSSTemporalUpscalerModularFeature_ClearData359>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"DLSSTemporalUpscalerModularFeature_ClearData");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                   L"DLSSTemporalUpscalerModularFeature_ClearData","STATGROUP_RenderThreadCommands",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_bool___cdecl_FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily(FInstancedPropertyBag_const_&,UE::VirtualProduction::FUpscalerModularFeatureParameters_const_&,FSceneViewFamilyContext_&)_::_21_::TSTR_DLSSTemporalUpscalerModularFeature_ClearData359>_const_&___cdecl_TRenderCommandTag<_public:_virtual_bool___cdecl_FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily(FInstancedPropertyBag_const_&,UE::VirtualProduction::FUpscalerModularFeatureParameters_const_&,FSceneViewFamilyContext_&)_::_21_::TSTR_DLSSTemporalUpscalerModularFeature_ClearData359>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"DLSSTemporalUpscalerModularFeature_ClearData");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_bool___cdecl_FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily(FInstancedPropertyBag_const_&,UE::VirtualProduction::FUpscalerModularFeatureParameters_const_&,FSceneViewFamilyContext_&)_::_21_::TSTR_DLSSTemporalUpscalerModularFeature_ClearData359>_const_&___cdecl_TRenderCommandTag<_public:_virtual_bool___cdecl_FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily(FInstancedPropertyBag_const_&,UE::VirtualProduction::FUpscalerModularFeatureParameters_const_&,FSceneViewFamilyContext_&)_::_21_::TSTR_DLSSTemporalUpscalerModularFeature_ClearData359>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"DLSSTemporalUpscalerModularFeature_ClearData",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_DLSSTemporalUps;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14de26580

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_bool___cdecl_FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily(FInstancedPropertyBag_const_&,UE::VirtualProduction::FUpscalerModularFeatureParameters_const_&,FSceneViewFamilyContext_&)_::_25_::TSTR_DLSSTemporalUpscalerModularFeature_SetData385>
* __cdecl TRenderCommandTag<`FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily'::__l25::TSTR_DLSSTemporalUpscalerModularFeature_SetData385>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_bool___cdecl_FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily(FInstancedPropertyBag_const_&,UE::VirtualProduction::FUpscalerModularFeatureParameters_const_&,FSceneViewFamilyContext_&)_::_25_::TSTR_DLSSTemporalUpscalerModularFeature_SetData385>_const_&___cdecl_TRenderCommandTag<_public:_virtual_bool___cdecl_FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily(FInstancedPropertyBag_const_&,UE::VirtualProduction::FUpscalerModularFeatureParameters_const_&,FSceneViewFamilyContext_&)_::_25_::TSTR_DLSSTemporalUpscalerModularFeature_SetData385>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_bool___cdecl_FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily(FInstancedPropertyBag_const_&,UE::VirtualProduction::FUpscalerModularFeatureParameters_const_&,FSceneViewFamilyContext_&)_::_25_::TSTR_DLSSTemporalUpscalerModularFeature_SetData385>_const_&___cdecl_TRenderCommandTag<_public:_virtual_bool___cdecl_FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily(FInstancedPropertyBag_const_&,UE::VirtualProduction::FUpscalerModularFeatureParameters_const_&,FSceneViewFamilyContext_&)_::_25_::TSTR_DLSSTemporalUpscalerModularFeature_SetData385>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"DLSSTemporalUpscalerModularFeature_SetData");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                   L"DLSSTemporalUpscalerModularFeature_SetData","STATGROUP_RenderThreadCommands",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_bool___cdecl_FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily(FInstancedPropertyBag_const_&,UE::VirtualProduction::FUpscalerModularFeatureParameters_const_&,FSceneViewFamilyContext_&)_::_25_::TSTR_DLSSTemporalUpscalerModularFeature_SetData385>_const_&___cdecl_TRenderCommandTag<_public:_virtual_bool___cdecl_FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily(FInstancedPropertyBag_const_&,UE::VirtualProduction::FUpscalerModularFeatureParameters_const_&,FSceneViewFamilyContext_&)_::_25_::TSTR_DLSSTemporalUpscalerModularFeature_SetData385>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"DLSSTemporalUpscalerModularFeature_SetData");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_bool___cdecl_FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily(FInstancedPropertyBag_const_&,UE::VirtualProduction::FUpscalerModularFeatureParameters_const_&,FSceneViewFamilyContext_&)_::_25_::TSTR_DLSSTemporalUpscalerModularFeature_SetData385>_const_&___cdecl_TRenderCommandTag<_public:_virtual_bool___cdecl_FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily(FInstancedPropertyBag_const_&,UE::VirtualProduction::FUpscalerModularFeatureParameters_const_&,FSceneViewFamilyContext_&)_::_25_::TSTR_DLSSTemporalUpscalerModularFeature_SetData385>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"DLSSTemporalUpscalerModularFeature_SetData",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_DLSSTemporalUps;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

