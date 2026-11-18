// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIO
// Functions: 4

// Get @ 14d7701e0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_bool___cdecl_FOpenColorIOTransformResource::CacheShaders(FOpenColorIOShaderMapId_const_&,EShaderPlatform,bool,bool)_::_2_::TSTR_FSetShaderMapOnColorSpaceTransformResources367>
* __cdecl TRenderCommandTag<`FOpenColorIOTransformResource::CacheShaders'::__l2::TSTR_FSetShaderMapOnColorSpaceTransformResources367>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_bool___cdecl_FOpenColorIOTransformResource::CacheShaders(FOpenColorIOShaderMapId_const_&,EShaderPlatform,bool,bool)_::_2_::TSTR_FSetShaderMapOnColorSpaceTransformResources367>_const_&___cdecl_TRenderCommandTag<_public:_bool___cdecl_FOpenColorIOTransformResource::CacheShaders(FOpenColorIOShaderMapId_const_&,EShaderPlatform,bool,bool)_::_2_::TSTR_FSetShaderMapOnColorSpaceTransformResources367>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_bool___cdecl_FOpenColorIOTransformResource::CacheShaders(FOpenColorIOShaderMapId_const_&,EShaderPlatform,bool,bool)_::_2_::TSTR_FSetShaderMapOnColorSpaceTransformResources367>_const_&___cdecl_TRenderCommandTag<_public:_bool___cdecl_FOpenColorIOTransformResource::CacheShaders(FOpenColorIOShaderMapId_const_&,EShaderPlatform,bool,bool)_::_2_::TSTR_FSetShaderMapOnColorSpaceTransformResources367>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FSetShaderMapOnColorSpaceTransformResources");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                   L"FSetShaderMapOnColorSpaceTransformResources","STATGROUP_RenderThreadCommands",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_bool___cdecl_FOpenColorIOTransformResource::CacheShaders(FOpenColorIOShaderMapId_const_&,EShaderPlatform,bool,bool)_::_2_::TSTR_FSetShaderMapOnColorSpaceTransformResources367>_const_&___cdecl_TRenderCommandTag<_public:_bool___cdecl_FOpenColorIOTransformResource::CacheShaders(FOpenColorIOShaderMapId_const_&,EShaderPlatform,bool,bool)_::_2_::TSTR_FSetShaderMapOnColorSpaceTransformResources367>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FSetShaderMapOnColorSpaceTransformResources");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_bool___cdecl_FOpenColorIOTransformResource::CacheShaders(FOpenColorIOShaderMapId_const_&,EShaderPlatform,bool,bool)_::_2_::TSTR_FSetShaderMapOnColorSpaceTransformResources367>_const_&___cdecl_TRenderCommandTag<_public:_bool___cdecl_FOpenColorIOTransformResource::CacheShaders(FOpenColorIOShaderMapId_const_&,EShaderPlatform,bool,bool)_::_2_::TSTR_FSetShaderMapOnColorSpaceTransformResources367>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FSetShaderMapOnColorSpaceTransformResources",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FSetShaderMapOn;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14d770390

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_static_bool___cdecl_FOpenColorIORendering::ApplyColorTransform(UWorld_*,FOpenColorIOColorConversionSettings_const_&,UTexture_*,UTextureRenderTarget2D_*)_::_2_::TSTR_ProcessColorSpaceTransform260>
* __cdecl TRenderCommandTag<`FOpenColorIORendering::ApplyColorTransform'::__l2::TSTR_ProcessColorSpaceTransform260>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_static_bool___cdecl_FOpenColorIORendering::ApplyColorTransform(UWorld_*,FOpenColorIOColorConversionSettings_const_&,UTexture_*,UTextureRenderTarget2D_*)_::_2_::TSTR_ProcessColorSpaceTransform260>_const_&___cdecl_TRenderCommandTag<_public:_static_bool___cdecl_FOpenColorIORendering::ApplyColorTransform(UWorld_*,FOpenColorIOColorConversionSettings_const_&,UTexture_*,UTextureRenderTarget2D_*)_::_2_::TSTR_ProcessColorSpaceTransform260>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_static_bool___cdecl_FOpenColorIORendering::ApplyColorTransform(UWorld_*,FOpenColorIOColorConversionSettings_const_&,UTexture_*,UTextureRenderTarget2D_*)_::_2_::TSTR_ProcessColorSpaceTransform260>_const_&___cdecl_TRenderCommandTag<_public:_static_bool___cdecl_FOpenColorIORendering::ApplyColorTransform(UWorld_*,FOpenColorIOColorConversionSettings_const_&,UTexture_*,UTextureRenderTarget2D_*)_::_2_::TSTR_ProcessColorSpaceTransform260>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ProcessColorSpaceTransform");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ProcessColorSpaceTransform",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_static_bool___cdecl_FOpenColorIORendering::ApplyColorTransform(UWorld_*,FOpenColorIOColorConversionSettings_const_&,UTexture_*,UTextureRenderTarget2D_*)_::_2_::TSTR_ProcessColorSpaceTransform260>_const_&___cdecl_TRenderCommandTag<_public:_static_bool___cdecl_FOpenColorIORendering::ApplyColorTransform(UWorld_*,FOpenColorIOColorConversionSettings_const_&,UTexture_*,UTextureRenderTarget2D_*)_::_2_::TSTR_ProcessColorSpaceTransform260>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ProcessColorSpaceTransform");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_static_bool___cdecl_FOpenColorIORendering::ApplyColorTransform(UWorld_*,FOpenColorIOColorConversionSettings_const_&,UTexture_*,UTextureRenderTarget2D_*)_::_2_::TSTR_ProcessColorSpaceTransform260>_const_&___cdecl_TRenderCommandTag<_public:_static_bool___cdecl_FOpenColorIORendering::ApplyColorTransform(UWorld_*,FOpenColorIOColorConversionSettings_const_&,UTexture_*,UTextureRenderTarget2D_*)_::_2_::TSTR_ProcessColorSpaceTransform260>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"ProcessColorSpaceTransform","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_ProcessColorSpa;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14d770540

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FOpenColorIODisplayExtension::SetupView(FSceneViewFamily_&,FSceneView_&)_::_2_::TSTR_ProcessColorSpaceTransform56>
* __cdecl TRenderCommandTag<`FOpenColorIODisplayExtension::SetupView'::__l2::TSTR_ProcessColorSpaceTransform56>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FOpenColorIODisplayExtension::SetupView(FSceneViewFamily_&,FSceneView_&)_::_2_::TSTR_ProcessColorSpaceTransform56>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FOpenColorIODisplayExtension::SetupView(FSceneViewFamily_&,FSceneView_&)_::_2_::TSTR_ProcessColorSpaceTransform56>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FOpenColorIODisplayExtension::SetupView(FSceneViewFamily_&,FSceneView_&)_::_2_::TSTR_ProcessColorSpaceTransform56>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FOpenColorIODisplayExtension::SetupView(FSceneViewFamily_&,FSceneView_&)_::_2_::TSTR_ProcessColorSpaceTransform56>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ProcessColorSpaceTransform");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ProcessColorSpaceTransform",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FOpenColorIODisplayExtension::SetupView(FSceneViewFamily_&,FSceneView_&)_::_2_::TSTR_ProcessColorSpaceTransform56>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FOpenColorIODisplayExtension::SetupView(FSceneViewFamily_&,FSceneView_&)_::_2_::TSTR_ProcessColorSpaceTransform56>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ProcessColorSpaceTransform");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FOpenColorIODisplayExtension::SetupView(FSceneViewFamily_&,FSceneView_&)_::_2_::TSTR_ProcessColorSpaceTransform56>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FOpenColorIODisplayExtension::SetupView(FSceneViewFamily_&,FSceneView_&)_::_2_::TSTR_ProcessColorSpaceTransform56>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"ProcessColorSpaceTransform","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_ProcessColorSpa;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14d7706f0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_FOpenColorIOTransformResource::ReleaseShaderMap(void)_::_5_::TSTR_ReleaseShaderMap143>
* __cdecl TRenderCommandTag<`FOpenColorIOTransformResource::ReleaseShaderMap'::__l5::TSTR_ReleaseShaderMap143>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FOpenColorIOTransformResource::ReleaseShaderMap(void)_::_5_::TSTR_ReleaseShaderMap143>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FOpenColorIOTransformResource::ReleaseShaderMap(void)_::_5_::TSTR_ReleaseShaderMap143>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FOpenColorIOTransformResource::ReleaseShaderMap(void)_::_5_::TSTR_ReleaseShaderMap143>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FOpenColorIOTransformResource::ReleaseShaderMap(void)_::_5_::TSTR_ReleaseShaderMap143>::Get(void)_::_2_::FStatData>
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FOpenColorIOTransformResource::ReleaseShaderMap(void)_::_5_::TSTR_ReleaseShaderMap143>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FOpenColorIOTransformResource::ReleaseShaderMap(void)_::_5_::TSTR_ReleaseShaderMap143>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ReleaseShaderMap");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FOpenColorIOTransformResource::ReleaseShaderMap(void)_::_5_::TSTR_ReleaseShaderMap143>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FOpenColorIOTransformResource::ReleaseShaderMap(void)_::_5_::TSTR_ReleaseShaderMap143>::Get(void)_::_2_::FStatData>
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

