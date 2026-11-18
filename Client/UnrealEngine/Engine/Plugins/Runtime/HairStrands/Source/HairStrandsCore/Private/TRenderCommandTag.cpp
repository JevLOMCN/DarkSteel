// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 30

// Get @ 14dfc3d60

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_InitAtlasTexture<FHairCardsRestResource>(FHairCardsRestResource_*,FHairGroupCardsTextures_const_&,bool)_::_15_::TSTR_HairStrandsCardsTextureCommand462>
* __cdecl TRenderCommandTag<`InitAtlasTexture<FHairCardsRestResource>'::__l15::TSTR_HairStrandsCardsTextureCommand462>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_InitAtlasTexture<FHairCardsRestResource>(FHairCardsRestResource_*,FHairGroupCardsTextures_const_&,bool)_::_15_::TSTR_HairStrandsCardsTextureCommand462>_const_&___cdecl_TRenderCommandTag<_void___cdecl_InitAtlasTexture<FHairCardsRestResource>(FHairCardsRestResource_*,FHairGroupCardsTextures_const_&,bool)_::_15_::TSTR_HairStrandsCardsTextureCommand462>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_InitAtlasTexture<FHairCardsRestResource>(FHairCardsRestResource_*,FHairGroupCardsTextures_const_&,bool)_::_15_::TSTR_HairStrandsCardsTextureCommand462>_const_&___cdecl_TRenderCommandTag<_void___cdecl_InitAtlasTexture<FHairCardsRestResource>(FHairCardsRestResource_*,FHairGroupCardsTextures_const_&,bool)_::_15_::TSTR_HairStrandsCardsTextureCommand462>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"HairStrandsCardsTextureCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"HairStrandsCardsTextureCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_InitAtlasTexture<FHairCardsRestResource>(FHairCardsRestResource_*,FHairGroupCardsTextures_const_&,bool)_::_15_::TSTR_HairStrandsCardsTextureCommand462>_const_&___cdecl_TRenderCommandTag<_void___cdecl_InitAtlasTexture<FHairCardsRestResource>(FHairCardsRestResource_*,FHairGroupCardsTextures_const_&,bool)_::_15_::TSTR_HairStrandsCardsTextureCommand462>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"HairStrandsCardsTextureCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_InitAtlasTexture<FHairCardsRestResource>(FHairCardsRestResource_*,FHairGroupCardsTextures_const_&,bool)_::_15_::TSTR_HairStrandsCardsTextureCommand462>_const_&___cdecl_TRenderCommandTag<_void___cdecl_InitAtlasTexture<FHairCardsRestResource>(FHairCardsRestResource_*,FHairGroupCardsTextures_const_&,bool)_::_15_::TSTR_HairStrandsCardsTextureCommand462>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"HairStrandsCardsTextureCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_HairStrandsCard;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14dfc3f10

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_InitAtlasTexture<FHairMeshesRestResource>(FHairMeshesRestResource_*,FHairGroupCardsTextures_const_&,bool)_::_15_::TSTR_HairStrandsCardsTextureCommand462>
* __cdecl TRenderCommandTag<`InitAtlasTexture<FHairMeshesRestResource>'::__l15::TSTR_HairStrandsCardsTextureCommand462>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_InitAtlasTexture<FHairMeshesRestResource>(FHairMeshesRestResource_*,FHairGroupCardsTextures_const_&,bool)_::_15_::TSTR_HairStrandsCardsTextureCommand462>_const_&___cdecl_TRenderCommandTag<_void___cdecl_InitAtlasTexture<FHairMeshesRestResource>(FHairMeshesRestResource_*,FHairGroupCardsTextures_const_&,bool)_::_15_::TSTR_HairStrandsCardsTextureCommand462>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_InitAtlasTexture<FHairMeshesRestResource>(FHairMeshesRestResource_*,FHairGroupCardsTextures_const_&,bool)_::_15_::TSTR_HairStrandsCardsTextureCommand462>_const_&___cdecl_TRenderCommandTag<_void___cdecl_InitAtlasTexture<FHairMeshesRestResource>(FHairMeshesRestResource_*,FHairGroupCardsTextures_const_&,bool)_::_15_::TSTR_HairStrandsCardsTextureCommand462>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"HairStrandsCardsTextureCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"HairStrandsCardsTextureCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_InitAtlasTexture<FHairMeshesRestResource>(FHairMeshesRestResource_*,FHairGroupCardsTextures_const_&,bool)_::_15_::TSTR_HairStrandsCardsTextureCommand462>_const_&___cdecl_TRenderCommandTag<_void___cdecl_InitAtlasTexture<FHairMeshesRestResource>(FHairMeshesRestResource_*,FHairGroupCardsTextures_const_&,bool)_::_15_::TSTR_HairStrandsCardsTextureCommand462>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"HairStrandsCardsTextureCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_InitAtlasTexture<FHairMeshesRestResource>(FHairMeshesRestResource_*,FHairGroupCardsTextures_const_&,bool)_::_15_::TSTR_HairStrandsCardsTextureCommand462>_const_&___cdecl_TRenderCommandTag<_void___cdecl_InitAtlasTexture<FHairMeshesRestResource>(FHairMeshesRestResource_*,FHairGroupCardsTextures_const_&,bool)_::_15_::TSTR_HairStrandsCardsTextureCommand462>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"HairStrandsCardsTextureCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_HairStrandsCard;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14dfc40c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_InternalReleaseResource<FHairCardsInterpolationResource>(FHairCardsInterpolationResource_*_&,bool)_::_5_::TSTR_ReleaseHairResourceCommand1048>
* __cdecl TRenderCommandTag<`InternalReleaseResource<FHairCardsInterpolationResource>'::__l5::TSTR_ReleaseHairResourceCommand1048>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairCardsInterpolationResource>(struct_FHairCardsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairCardsInterpolationResource>(FHairCardsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairCardsInterpolationResource>(struct_FHairCardsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairCardsInterpolationResource>(FHairCardsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairCardsInterpolationResource>(struct_FHairCardsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairCardsInterpolationResource>(FHairCardsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"ReleaseHairResourceCommand");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairCardsInterpolationResource>(struct_FHairCardsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairCardsInterpolationResource>(FHairCardsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                ::__l2::Stat,*pFVar1,L"ReleaseHairResourceCommand","STATGROUP_RenderThreadCommands",
               "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairCardsInterpolationResource>(struct_FHairCardsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairCardsInterpolationResource>(FHairCardsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairCardsInterpolationResource>(struct_FHairCardsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairCardsInterpolationResource>(FHairCardsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairCardsInterpolationResource>(struct_FHairCardsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairCardsInterpolationResource>(FHairCardsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairCardsInterpolationResource>(struct_FHairCardsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairCardsInterpolationResource>(FHairCardsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"ReleaseHairResourceCommand");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairCardsInterpolationResource>(struct_FHairCardsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairCardsInterpolationResource>(FHairCardsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"ReleaseHairResourceCommand",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"ReleaseHairResourceCommand";
    _DAT_155383518 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairCardsInterpolationResource>(struct_FHairCardsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairCardsInterpolationResource>(FHairCardsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_void___cdecl_InternalReleaseResource<FHairCardsInterpolationResource>(FHairCardsInterpolationResource_*_&,bool)_::_5_::TSTR_ReleaseHairResourceCommand1048>
          *)&`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairCardsInterpolationResource>(struct_FHairCardsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairCardsInterpolationResource>(FHairCardsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
             ::__l2::Tag;
}

// Get @ 14dfc4280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_InternalReleaseResource<FHairCardsRestResource>(FHairCardsRestResource_*_&,bool)_::_5_::TSTR_ReleaseHairResourceCommand1048>
* __cdecl TRenderCommandTag<`InternalReleaseResource<FHairCardsRestResource>'::__l5::TSTR_ReleaseHairResourceCommand1048>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairCardsRestResource>(struct_FHairCardsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairCardsRestResource>(FHairCardsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairCardsRestResource>(struct_FHairCardsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairCardsRestResource>(FHairCardsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairCardsRestResource>(struct_FHairCardsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairCardsRestResource>(FHairCardsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"ReleaseHairResourceCommand");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairCardsRestResource>(struct_FHairCardsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairCardsRestResource>(FHairCardsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                ::__l2::Stat,*pFVar1,L"ReleaseHairResourceCommand","STATGROUP_RenderThreadCommands",
               "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairCardsRestResource>(struct_FHairCardsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairCardsRestResource>(FHairCardsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairCardsRestResource>(struct_FHairCardsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairCardsRestResource>(FHairCardsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairCardsRestResource>(struct_FHairCardsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairCardsRestResource>(FHairCardsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairCardsRestResource>(struct_FHairCardsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairCardsRestResource>(FHairCardsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"ReleaseHairResourceCommand");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairCardsRestResource>(struct_FHairCardsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairCardsRestResource>(FHairCardsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"ReleaseHairResourceCommand",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"ReleaseHairResourceCommand";
    _DAT_155383548 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairCardsRestResource>(struct_FHairCardsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairCardsRestResource>(FHairCardsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_void___cdecl_InternalReleaseResource<FHairCardsRestResource>(FHairCardsRestResource_*_&,bool)_::_5_::TSTR_ReleaseHairResourceCommand1048>
          *)&`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairCardsRestResource>(struct_FHairCardsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairCardsRestResource>(FHairCardsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
             ::__l2::Tag;
}

// Get @ 14dfc4440

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_InternalReleaseResource<FHairMeshesRestResource>(FHairMeshesRestResource_*_&,bool)_::_5_::TSTR_ReleaseHairResourceCommand1048>
* __cdecl TRenderCommandTag<`InternalReleaseResource<FHairMeshesRestResource>'::__l5::TSTR_ReleaseHairResourceCommand1048>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairMeshesRestResource>(struct_FHairMeshesRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairMeshesRestResource>(FHairMeshesRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairMeshesRestResource>(struct_FHairMeshesRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairMeshesRestResource>(FHairMeshesRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairMeshesRestResource>(struct_FHairMeshesRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairMeshesRestResource>(FHairMeshesRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"ReleaseHairResourceCommand");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairMeshesRestResource>(struct_FHairMeshesRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairMeshesRestResource>(FHairMeshesRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                ::__l2::Stat,*pFVar1,L"ReleaseHairResourceCommand","STATGROUP_RenderThreadCommands",
               "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairMeshesRestResource>(struct_FHairMeshesRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairMeshesRestResource>(FHairMeshesRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairMeshesRestResource>(struct_FHairMeshesRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairMeshesRestResource>(FHairMeshesRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairMeshesRestResource>(struct_FHairMeshesRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairMeshesRestResource>(FHairMeshesRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairMeshesRestResource>(struct_FHairMeshesRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairMeshesRestResource>(FHairMeshesRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"ReleaseHairResourceCommand");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairMeshesRestResource>(struct_FHairMeshesRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairMeshesRestResource>(FHairMeshesRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"ReleaseHairResourceCommand",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"ReleaseHairResourceCommand";
    _DAT_1553834e8 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairMeshesRestResource>(struct_FHairMeshesRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairMeshesRestResource>(FHairMeshesRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_void___cdecl_InternalReleaseResource<FHairMeshesRestResource>(FHairMeshesRestResource_*_&,bool)_::_5_::TSTR_ReleaseHairResourceCommand1048>
          *)&`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairMeshesRestResource>(struct_FHairMeshesRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairMeshesRestResource>(FHairMeshesRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
             ::__l2::Tag;
}

// Get @ 14dfc4600

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_InternalReleaseResource<FHairStrandsClusterResource>(FHairStrandsClusterResource_*_&,bool)_::_5_::TSTR_ReleaseHairResourceCommand1048>
* __cdecl TRenderCommandTag<`InternalReleaseResource<FHairStrandsClusterResource>'::__l5::TSTR_ReleaseHairResourceCommand1048>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsClusterResource>(struct_FHairStrandsClusterResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsClusterResource>(FHairStrandsClusterResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsClusterResource>(struct_FHairStrandsClusterResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsClusterResource>(FHairStrandsClusterResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsClusterResource>(struct_FHairStrandsClusterResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsClusterResource>(FHairStrandsClusterResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"ReleaseHairResourceCommand");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsClusterResource>(struct_FHairStrandsClusterResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsClusterResource>(FHairStrandsClusterResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                ::__l2::Stat,*pFVar1,L"ReleaseHairResourceCommand","STATGROUP_RenderThreadCommands",
               "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsClusterResource>(struct_FHairStrandsClusterResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsClusterResource>(FHairStrandsClusterResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsClusterResource>(struct_FHairStrandsClusterResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsClusterResource>(FHairStrandsClusterResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsClusterResource>(struct_FHairStrandsClusterResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsClusterResource>(FHairStrandsClusterResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsClusterResource>(struct_FHairStrandsClusterResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsClusterResource>(FHairStrandsClusterResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"ReleaseHairResourceCommand");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsClusterResource>(struct_FHairStrandsClusterResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsClusterResource>(FHairStrandsClusterResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"ReleaseHairResourceCommand",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"ReleaseHairResourceCommand";
    _DAT_1553835d8 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsClusterResource>(struct_FHairStrandsClusterResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsClusterResource>(FHairStrandsClusterResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_void___cdecl_InternalReleaseResource<FHairStrandsClusterResource>(FHairStrandsClusterResource_*_&,bool)_::_5_::TSTR_ReleaseHairResourceCommand1048>
          *)&`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsClusterResource>(struct_FHairStrandsClusterResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsClusterResource>(FHairStrandsClusterResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
             ::__l2::Tag;
}

// Get @ 14dfc47c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_InternalReleaseResource<FHairStrandsInterpolationResource>(FHairStrandsInterpolationResource_*_&,bool)_::_5_::TSTR_ReleaseHairResourceCommand1048>
* __cdecl TRenderCommandTag<`InternalReleaseResource<FHairStrandsInterpolationResource>'::__l5::TSTR_ReleaseHairResourceCommand1048>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsInterpolationResource>(struct_FHairStrandsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsInterpolationResource>(FHairStrandsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsInterpolationResource>(struct_FHairStrandsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsInterpolationResource>(FHairStrandsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsInterpolationResource>(struct_FHairStrandsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsInterpolationResource>(FHairStrandsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"ReleaseHairResourceCommand");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsInterpolationResource>(struct_FHairStrandsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsInterpolationResource>(FHairStrandsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                ::__l2::Stat,*pFVar1,L"ReleaseHairResourceCommand","STATGROUP_RenderThreadCommands",
               "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsInterpolationResource>(struct_FHairStrandsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsInterpolationResource>(FHairStrandsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsInterpolationResource>(struct_FHairStrandsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsInterpolationResource>(FHairStrandsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsInterpolationResource>(struct_FHairStrandsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsInterpolationResource>(FHairStrandsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsInterpolationResource>(struct_FHairStrandsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsInterpolationResource>(FHairStrandsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"ReleaseHairResourceCommand");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsInterpolationResource>(struct_FHairStrandsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsInterpolationResource>(FHairStrandsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"ReleaseHairResourceCommand",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"ReleaseHairResourceCommand";
    _DAT_1553835a8 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsInterpolationResource>(struct_FHairStrandsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsInterpolationResource>(FHairStrandsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_void___cdecl_InternalReleaseResource<FHairStrandsInterpolationResource>(FHairStrandsInterpolationResource_*_&,bool)_::_5_::TSTR_ReleaseHairResourceCommand1048>
          *)&`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsInterpolationResource>(struct_FHairStrandsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsInterpolationResource>(FHairStrandsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
             ::__l2::Tag;
}

// Get @ 14dfc4980

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_InternalReleaseResource<FHairStrandsRaytracingResource>(FHairStrandsRaytracingResource_*_&,bool)_::_5_::TSTR_ReleaseHairResourceCommand1048>
* __cdecl TRenderCommandTag<`InternalReleaseResource<FHairStrandsRaytracingResource>'::__l5::TSTR_ReleaseHairResourceCommand1048>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsRaytracingResource>(struct_FHairStrandsRaytracingResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsRaytracingResource>(FHairStrandsRaytracingResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsRaytracingResource>(struct_FHairStrandsRaytracingResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsRaytracingResource>(FHairStrandsRaytracingResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsRaytracingResource>(struct_FHairStrandsRaytracingResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsRaytracingResource>(FHairStrandsRaytracingResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"ReleaseHairResourceCommand");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsRaytracingResource>(struct_FHairStrandsRaytracingResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsRaytracingResource>(FHairStrandsRaytracingResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                ::__l2::Stat,*pFVar1,L"ReleaseHairResourceCommand","STATGROUP_RenderThreadCommands",
               "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsRaytracingResource>(struct_FHairStrandsRaytracingResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsRaytracingResource>(FHairStrandsRaytracingResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsRaytracingResource>(struct_FHairStrandsRaytracingResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsRaytracingResource>(FHairStrandsRaytracingResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsRaytracingResource>(struct_FHairStrandsRaytracingResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsRaytracingResource>(FHairStrandsRaytracingResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsRaytracingResource>(struct_FHairStrandsRaytracingResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsRaytracingResource>(FHairStrandsRaytracingResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"ReleaseHairResourceCommand");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsRaytracingResource>(struct_FHairStrandsRaytracingResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsRaytracingResource>(FHairStrandsRaytracingResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"ReleaseHairResourceCommand",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"ReleaseHairResourceCommand";
    _DAT_155383578 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsRaytracingResource>(struct_FHairStrandsRaytracingResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsRaytracingResource>(FHairStrandsRaytracingResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_void___cdecl_InternalReleaseResource<FHairStrandsRaytracingResource>(FHairStrandsRaytracingResource_*_&,bool)_::_5_::TSTR_ReleaseHairResourceCommand1048>
          *)&`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsRaytracingResource>(struct_FHairStrandsRaytracingResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsRaytracingResource>(FHairStrandsRaytracingResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
             ::__l2::Tag;
}

// Get @ 14dfc4b40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_InternalReleaseResource<FHairStrandsRestResource>(FHairStrandsRestResource_*_&,bool)_::_5_::TSTR_ReleaseHairResourceCommand1048>
* __cdecl TRenderCommandTag<`InternalReleaseResource<FHairStrandsRestResource>'::__l5::TSTR_ReleaseHairResourceCommand1048>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsRestResource>(struct_FHairStrandsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsRestResource>(FHairStrandsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsRestResource>(struct_FHairStrandsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsRestResource>(FHairStrandsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsRestResource>(struct_FHairStrandsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsRestResource>(FHairStrandsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"ReleaseHairResourceCommand");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsRestResource>(struct_FHairStrandsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsRestResource>(FHairStrandsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                ::__l2::Stat,*pFVar1,L"ReleaseHairResourceCommand","STATGROUP_RenderThreadCommands",
               "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsRestResource>(struct_FHairStrandsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsRestResource>(FHairStrandsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsRestResource>(struct_FHairStrandsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsRestResource>(FHairStrandsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsRestResource>(struct_FHairStrandsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsRestResource>(FHairStrandsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsRestResource>(struct_FHairStrandsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsRestResource>(FHairStrandsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"ReleaseHairResourceCommand");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsRestResource>(struct_FHairStrandsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsRestResource>(FHairStrandsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"ReleaseHairResourceCommand",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"ReleaseHairResourceCommand";
    _DAT_155383608 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsRestResource>(struct_FHairStrandsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsRestResource>(FHairStrandsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_void___cdecl_InternalReleaseResource<FHairStrandsRestResource>(FHairStrandsRestResource_*_&,bool)_::_5_::TSTR_ReleaseHairResourceCommand1048>
          *)&`public:_static_class_TRenderCommandTag<struct_`void___cdecl_InternalReleaseResource<struct_FHairStrandsRestResource>(struct_FHairStrandsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_const&___ptr64___cdecl_TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsRestResource>(FHairStrandsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>::Get(void)'
             ::__l2::Tag;
}

// Get @ 14dfc4d00

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_UGroomBindingAsset::ReleaseResource(bool)_::_17_::TSTR_ReleaseHairStrandsPlatformDataCommand455>
* __cdecl TRenderCommandTag<`UGroomBindingAsset::ReleaseResource'::__l17::TSTR_ReleaseHairStrandsPlatformDataCommand455>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UGroomBindingAsset::ReleaseResource(bool)_::_17_::TSTR_ReleaseHairStrandsPlatformDataCommand455>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UGroomBindingAsset::ReleaseResource(bool)_::_17_::TSTR_ReleaseHairStrandsPlatformDataCommand455>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UGroomBindingAsset::ReleaseResource(bool)_::_17_::TSTR_ReleaseHairStrandsPlatformDataCommand455>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UGroomBindingAsset::ReleaseResource(bool)_::_17_::TSTR_ReleaseHairStrandsPlatformDataCommand455>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ReleaseHairStrandsPlatformDataCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                   L"ReleaseHairStrandsPlatformDataCommand","STATGROUP_RenderThreadCommands",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UGroomBindingAsset::ReleaseResource(bool)_::_17_::TSTR_ReleaseHairStrandsPlatformDataCommand455>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UGroomBindingAsset::ReleaseResource(bool)_::_17_::TSTR_ReleaseHairStrandsPlatformDataCommand455>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ReleaseHairStrandsPlatformDataCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UGroomBindingAsset::ReleaseResource(bool)_::_17_::TSTR_ReleaseHairStrandsPlatformDataCommand455>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UGroomBindingAsset::ReleaseResource(bool)_::_17_::TSTR_ReleaseHairStrandsPlatformDataCommand455>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"ReleaseHairStrandsPlatformDataCommand",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_ReleaseHairStra;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14dfc4eb0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_UGroomBindingAsset::ReleaseResource(bool)_::_9_::TSTR_ReleaseHairStrandsResourceCommand390>
* __cdecl TRenderCommandTag<`UGroomBindingAsset::ReleaseResource'::__l9::TSTR_ReleaseHairStrandsResourceCommand390>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UGroomBindingAsset::ReleaseResource(bool)_::_9_::TSTR_ReleaseHairStrandsResourceCommand390>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UGroomBindingAsset::ReleaseResource(bool)_::_9_::TSTR_ReleaseHairStrandsResourceCommand390>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UGroomBindingAsset::ReleaseResource(bool)_::_9_::TSTR_ReleaseHairStrandsResourceCommand390>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UGroomBindingAsset::ReleaseResource(bool)_::_9_::TSTR_ReleaseHairStrandsResourceCommand390>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ReleaseHairStrandsResourceCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ReleaseHairStrandsResourceCommand"
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UGroomBindingAsset::ReleaseResource(bool)_::_9_::TSTR_ReleaseHairStrandsResourceCommand390>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UGroomBindingAsset::ReleaseResource(bool)_::_9_::TSTR_ReleaseHairStrandsResourceCommand390>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ReleaseHairStrandsResourceCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UGroomBindingAsset::ReleaseResource(bool)_::_9_::TSTR_ReleaseHairStrandsResourceCommand390>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UGroomBindingAsset::ReleaseResource(bool)_::_9_::TSTR_ReleaseHairStrandsResourceCommand390>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"ReleaseHairStrandsResourceCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_ReleaseHairStra;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14dfc5060

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_UGroomBindingAsset::ReleaseResource(bool)_::_13_::TSTR_ReleaseHairStrandsResourceCommand413>
* __cdecl TRenderCommandTag<`UGroomBindingAsset::ReleaseResource'::__l13::TSTR_ReleaseHairStrandsResourceCommand413>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UGroomBindingAsset::ReleaseResource(bool)_::_13_::TSTR_ReleaseHairStrandsResourceCommand413>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UGroomBindingAsset::ReleaseResource(bool)_::_13_::TSTR_ReleaseHairStrandsResourceCommand413>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UGroomBindingAsset::ReleaseResource(bool)_::_13_::TSTR_ReleaseHairStrandsResourceCommand413>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UGroomBindingAsset::ReleaseResource(bool)_::_13_::TSTR_ReleaseHairStrandsResourceCommand413>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ReleaseHairStrandsResourceCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ReleaseHairStrandsResourceCommand"
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UGroomBindingAsset::ReleaseResource(bool)_::_13_::TSTR_ReleaseHairStrandsResourceCommand413>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UGroomBindingAsset::ReleaseResource(bool)_::_13_::TSTR_ReleaseHairStrandsResourceCommand413>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ReleaseHairStrandsResourceCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UGroomBindingAsset::ReleaseResource(bool)_::_13_::TSTR_ReleaseHairStrandsResourceCommand413>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UGroomBindingAsset::ReleaseResource(bool)_::_13_::TSTR_ReleaseHairStrandsResourceCommand413>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"ReleaseHairStrandsResourceCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_ReleaseHairStra;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14dfc5210

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_UGroomBindingAsset::ReleaseResource(bool)_::_15_::TSTR_ReleaseHairStrandsResourceCommand434>
* __cdecl TRenderCommandTag<`UGroomBindingAsset::ReleaseResource'::__l15::TSTR_ReleaseHairStrandsResourceCommand434>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UGroomBindingAsset::ReleaseResource(bool)_::_15_::TSTR_ReleaseHairStrandsResourceCommand434>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UGroomBindingAsset::ReleaseResource(bool)_::_15_::TSTR_ReleaseHairStrandsResourceCommand434>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UGroomBindingAsset::ReleaseResource(bool)_::_15_::TSTR_ReleaseHairStrandsResourceCommand434>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UGroomBindingAsset::ReleaseResource(bool)_::_15_::TSTR_ReleaseHairStrandsResourceCommand434>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ReleaseHairStrandsResourceCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ReleaseHairStrandsResourceCommand"
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UGroomBindingAsset::ReleaseResource(bool)_::_15_::TSTR_ReleaseHairStrandsResourceCommand434>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UGroomBindingAsset::ReleaseResource(bool)_::_15_::TSTR_ReleaseHairStrandsResourceCommand434>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ReleaseHairStrandsResourceCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UGroomBindingAsset::ReleaseResource(bool)_::_15_::TSTR_ReleaseHairStrandsResourceCommand434>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UGroomBindingAsset::ReleaseResource(bool)_::_15_::TSTR_ReleaseHairStrandsResourceCommand434>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"ReleaseHairStrandsResourceCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_ReleaseHairStra;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14e012550

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_UGroomComponent::TickAtThisTime(float,bool,bool,bool)_::_5_::TSTR_FGroomCacheUpdate3669>
* __cdecl TRenderCommandTag<`UGroomComponent::TickAtThisTime'::__l5::TSTR_FGroomCacheUpdate3669>::
          Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UGroomComponent::TickAtThisTime(float,bool,bool,bool)_::_5_::TSTR_FGroomCacheUpdate3669>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UGroomComponent::TickAtThisTime(float,bool,bool,bool)_::_5_::TSTR_FGroomCacheUpdate3669>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UGroomComponent::TickAtThisTime(float,bool,bool,bool)_::_5_::TSTR_FGroomCacheUpdate3669>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UGroomComponent::TickAtThisTime(float,bool,bool,bool)_::_5_::TSTR_FGroomCacheUpdate3669>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FGroomCacheUpdate");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FGroomCacheUpdate",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UGroomComponent::TickAtThisTime(float,bool,bool,bool)_::_5_::TSTR_FGroomCacheUpdate3669>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UGroomComponent::TickAtThisTime(float,bool,bool,bool)_::_5_::TSTR_FGroomCacheUpdate3669>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FGroomCacheUpdate");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UGroomComponent::TickAtThisTime(float,bool,bool,bool)_::_5_::TSTR_FGroomCacheUpdate3669>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UGroomComponent::TickAtThisTime(float,bool,bool,bool)_::_5_::TSTR_FGroomCacheUpdate3669>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FGroomCacheUpdate",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FGroomCacheUpda;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14e012700

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_UGroomComponent::SetForcedLOD(int)_::_28_::TSTR_FHairComponentSendLODIndex1879>
* __cdecl TRenderCommandTag<`UGroomComponent::SetForcedLOD'::__l28::TSTR_FHairComponentSendLODIndex1879>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UGroomComponent::SetForcedLOD(int)_::_28_::TSTR_FHairComponentSendLODIndex1879>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UGroomComponent::SetForcedLOD(int)_::_28_::TSTR_FHairComponentSendLODIndex1879>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UGroomComponent::SetForcedLOD(int)_::_28_::TSTR_FHairComponentSendLODIndex1879>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UGroomComponent::SetForcedLOD(int)_::_28_::TSTR_FHairComponentSendLODIndex1879>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FHairComponentSendLODIndex");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FHairComponentSendLODIndex",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UGroomComponent::SetForcedLOD(int)_::_28_::TSTR_FHairComponentSendLODIndex1879>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UGroomComponent::SetForcedLOD(int)_::_28_::TSTR_FHairComponentSendLODIndex1879>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FHairComponentSendLODIndex");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UGroomComponent::SetForcedLOD(int)_::_28_::TSTR_FHairComponentSendLODIndex1879>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UGroomComponent::SetForcedLOD(int)_::_28_::TSTR_FHairComponentSendLODIndex1879>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FHairComponentSendLODIndex","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FHairComponentS;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14e0128b0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_UGroomComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_58_::TSTR_FHairStrandsTick_TransformUpdate3839>
* __cdecl TRenderCommandTag<`UGroomComponent::TickComponent'::__l58::TSTR_FHairStrandsTick_TransformUpdate3839>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UGroomComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_58_::TSTR_FHairStrandsTick_TransformUpdate3839>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UGroomComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_58_::TSTR_FHairStrandsTick_TransformUpdate3839>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UGroomComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_58_::TSTR_FHairStrandsTick_TransformUpdate3839>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UGroomComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_58_::TSTR_FHairStrandsTick_TransformUpdate3839>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FHairStrandsTick_TransformUpdate");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FHairStrandsTick_TransformUpdate",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UGroomComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_58_::TSTR_FHairStrandsTick_TransformUpdate3839>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UGroomComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_58_::TSTR_FHairStrandsTick_TransformUpdate3839>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FHairStrandsTick_TransformUpdate");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UGroomComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_58_::TSTR_FHairStrandsTick_TransformUpdate3839>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UGroomComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_58_::TSTR_FHairStrandsTick_TransformUpdate3839>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FHairStrandsTick_TransformUpdate","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FHairStrandsTic;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14e012a60

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_UGroomComponent::SendRenderDynamicData_Concurrent(void)_::_5_::TSTR_FHairStrandsTick_TransformUpdate3885>
* __cdecl TRenderCommandTag<`UGroomComponent::SendRenderDynamicData_Concurrent'::__l5::TSTR_FHairStrandsTick_TransformUpdate3885>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UGroomComponent::SendRenderDynamicData_Concurrent(void)_::_5_::TSTR_FHairStrandsTick_TransformUpdate3885>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UGroomComponent::SendRenderDynamicData_Concurrent(void)_::_5_::TSTR_FHairStrandsTick_TransformUpdate3885>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UGroomComponent::SendRenderDynamicData_Concurrent(void)_::_5_::TSTR_FHairStrandsTick_TransformUpdate3885>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UGroomComponent::SendRenderDynamicData_Concurrent(void)_::_5_::TSTR_FHairStrandsTick_TransformUpdate3885>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FHairStrandsTick_TransformUpdate");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FHairStrandsTick_TransformUpdate",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UGroomComponent::SendRenderDynamicData_Concurrent(void)_::_5_::TSTR_FHairStrandsTick_TransformUpdate3885>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UGroomComponent::SendRenderDynamicData_Concurrent(void)_::_5_::TSTR_FHairStrandsTick_TransformUpdate3885>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FHairStrandsTick_TransformUpdate");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UGroomComponent::SendRenderDynamicData_Concurrent(void)_::_5_::TSTR_FHairStrandsTick_TransformUpdate3885>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UGroomComponent::SendRenderDynamicData_Concurrent(void)_::_5_::TSTR_FHairStrandsTick_TransformUpdate3885>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FHairStrandsTick_TransformUpdate","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FHairStrandsTic;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14e012c10

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_UGroomComponent::UpdateSimulatedGroups(void)_::_5_::TSTR_FHairStrandsTick_UEnableSimulatedGroups2450>
* __cdecl TRenderCommandTag<`UGroomComponent::UpdateSimulatedGroups'::__l5::TSTR_FHairStrandsTick_UEnableSimulatedGroups2450>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UGroomComponent::UpdateSimulatedGroups(void)_::_5_::TSTR_FHairStrandsTick_UEnableSimulatedGroups2450>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UGroomComponent::UpdateSimulatedGroups(void)_::_5_::TSTR_FHairStrandsTick_UEnableSimulatedGroups2450>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UGroomComponent::UpdateSimulatedGroups(void)_::_5_::TSTR_FHairStrandsTick_UEnableSimulatedGroups2450>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UGroomComponent::UpdateSimulatedGroups(void)_::_5_::TSTR_FHairStrandsTick_UEnableSimulatedGroups2450>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FHairStrandsTick_UEnableSimulatedGroups");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                   L"FHairStrandsTick_UEnableSimulatedGroups","STATGROUP_RenderThreadCommands",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UGroomComponent::UpdateSimulatedGroups(void)_::_5_::TSTR_FHairStrandsTick_UEnableSimulatedGroups2450>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UGroomComponent::UpdateSimulatedGroups(void)_::_5_::TSTR_FHairStrandsTick_UEnableSimulatedGroups2450>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FHairStrandsTick_UEnableSimulatedGroups");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UGroomComponent::UpdateSimulatedGroups(void)_::_5_::TSTR_FHairStrandsTick_UEnableSimulatedGroups2450>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UGroomComponent::UpdateSimulatedGroups(void)_::_5_::TSTR_FHairStrandsTick_UEnableSimulatedGroups2450>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FHairStrandsTick_UEnableSimulatedGroups",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FHairStrandsTic;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14e0992a0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_static_void___cdecl_FGroomTextureBuilder::BuildFollicleTexture(TArray<FFollicleInfo,TSizedDefaultAllocator<32>_>_const_&,UTexture2D_*,bool)_::_29_::TSTR_FFollicleTextureQuery444>
* __cdecl TRenderCommandTag<`FGroomTextureBuilder::BuildFollicleTexture'::__l29::TSTR_FFollicleTextureQuery444>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_static_void___cdecl_FGroomTextureBuilder::BuildFollicleTexture(TArray<FFollicleInfo,TSizedDefaultAllocator<32>_>_const_&,UTexture2D_*,bool)_::_29_::TSTR_FFollicleTextureQuery444>_const_&___cdecl_TRenderCommandTag<_public:_static_void___cdecl_FGroomTextureBuilder::BuildFollicleTexture(TArray<FFollicleInfo,TSizedDefaultAllocator<32>_>_const_&,UTexture2D_*,bool)_::_29_::TSTR_FFollicleTextureQuery444>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_static_void___cdecl_FGroomTextureBuilder::BuildFollicleTexture(TArray<FFollicleInfo,TSizedDefaultAllocator<32>_>_const_&,UTexture2D_*,bool)_::_29_::TSTR_FFollicleTextureQuery444>_const_&___cdecl_TRenderCommandTag<_public:_static_void___cdecl_FGroomTextureBuilder::BuildFollicleTexture(TArray<FFollicleInfo,TSizedDefaultAllocator<32>_>_const_&,UTexture2D_*,bool)_::_29_::TSTR_FFollicleTextureQuery444>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FFollicleTextureQuery");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FFollicleTextureQuery",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_static_void___cdecl_FGroomTextureBuilder::BuildFollicleTexture(TArray<FFollicleInfo,TSizedDefaultAllocator<32>_>_const_&,UTexture2D_*,bool)_::_29_::TSTR_FFollicleTextureQuery444>_const_&___cdecl_TRenderCommandTag<_public:_static_void___cdecl_FGroomTextureBuilder::BuildFollicleTexture(TArray<FFollicleInfo,TSizedDefaultAllocator<32>_>_const_&,UTexture2D_*,bool)_::_29_::TSTR_FFollicleTextureQuery444>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FFollicleTextureQuery");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_static_void___cdecl_FGroomTextureBuilder::BuildFollicleTexture(TArray<FFollicleInfo,TSizedDefaultAllocator<32>_>_const_&,UTexture2D_*,bool)_::_29_::TSTR_FFollicleTextureQuery444>_const_&___cdecl_TRenderCommandTag<_public:_static_void___cdecl_FGroomTextureBuilder::BuildFollicleTexture(TArray<FFollicleInfo,TSizedDefaultAllocator<32>_>_const_&,UTexture2D_*,bool)_::_29_::TSTR_FFollicleTextureQuery444>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FFollicleTextureQuery",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FFollicleTextur;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14e099450

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_FHairCardsVertexFactory::InitResources(FRHICommandListBase_&)_::_17_::TSTR_FHairCardsVertexFactoryTransition459>
* __cdecl TRenderCommandTag<`FHairCardsVertexFactory::InitResources'::__l17::TSTR_FHairCardsVertexFactoryTransition459>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FHairCardsVertexFactory::InitResources(FRHICommandListBase_&)_::_17_::TSTR_FHairCardsVertexFactoryTransition459>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FHairCardsVertexFactory::InitResources(FRHICommandListBase_&)_::_17_::TSTR_FHairCardsVertexFactoryTransition459>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FHairCardsVertexFactory::InitResources(FRHICommandListBase_&)_::_17_::TSTR_FHairCardsVertexFactoryTransition459>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FHairCardsVertexFactory::InitResources(FRHICommandListBase_&)_::_17_::TSTR_FHairCardsVertexFactoryTransition459>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FHairCardsVertexFactoryTransition");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FHairCardsVertexFactoryTransition"
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FHairCardsVertexFactory::InitResources(FRHICommandListBase_&)_::_17_::TSTR_FHairCardsVertexFactoryTransition459>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FHairCardsVertexFactory::InitResources(FRHICommandListBase_&)_::_17_::TSTR_FHairCardsVertexFactoryTransition459>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FHairCardsVertexFactoryTransition");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FHairCardsVertexFactory::InitResources(FRHICommandListBase_&)_::_17_::TSTR_FHairCardsVertexFactoryTransition459>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FHairCardsVertexFactory::InitResources(FRHICommandListBase_&)_::_17_::TSTR_FHairCardsVertexFactoryTransition459>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FHairCardsVertexFactoryTransition","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FHairCardsVerte;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14e099600

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_FHairCardsVertexFactory::InitResources(FRHICommandListBase_&)_::_26_::TSTR_FHairCardsVertexFactoryTransition510>
* __cdecl TRenderCommandTag<`FHairCardsVertexFactory::InitResources'::__l26::TSTR_FHairCardsVertexFactoryTransition510>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FHairCardsVertexFactory::InitResources(FRHICommandListBase_&)_::_26_::TSTR_FHairCardsVertexFactoryTransition510>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FHairCardsVertexFactory::InitResources(FRHICommandListBase_&)_::_26_::TSTR_FHairCardsVertexFactoryTransition510>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FHairCardsVertexFactory::InitResources(FRHICommandListBase_&)_::_26_::TSTR_FHairCardsVertexFactoryTransition510>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FHairCardsVertexFactory::InitResources(FRHICommandListBase_&)_::_26_::TSTR_FHairCardsVertexFactoryTransition510>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FHairCardsVertexFactoryTransition");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FHairCardsVertexFactoryTransition"
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FHairCardsVertexFactory::InitResources(FRHICommandListBase_&)_::_26_::TSTR_FHairCardsVertexFactoryTransition510>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FHairCardsVertexFactory::InitResources(FRHICommandListBase_&)_::_26_::TSTR_FHairCardsVertexFactoryTransition510>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FHairCardsVertexFactoryTransition");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FHairCardsVertexFactory::InitResources(FRHICommandListBase_&)_::_26_::TSTR_FHairCardsVertexFactoryTransition510>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FHairCardsVertexFactory::InitResources(FRHICommandListBase_&)_::_26_::TSTR_FHairCardsVertexFactoryTransition510>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FHairCardsVertexFactoryTransition","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FHairCardsVerte;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14e0997b0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_FHairStrandsVertexFactory::Copy(FHairStrandsVertexFactory_const_&)_::_2_::TSTR_FHairStrandsVertexFactoryCopyData234>
* __cdecl TRenderCommandTag<`FHairStrandsVertexFactory::Copy'::__l2::TSTR_FHairStrandsVertexFactoryCopyData234>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FHairStrandsVertexFactory::Copy(FHairStrandsVertexFactory_const_&)_::_2_::TSTR_FHairStrandsVertexFactoryCopyData234>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FHairStrandsVertexFactory::Copy(FHairStrandsVertexFactory_const_&)_::_2_::TSTR_FHairStrandsVertexFactoryCopyData234>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FHairStrandsVertexFactory::Copy(FHairStrandsVertexFactory_const_&)_::_2_::TSTR_FHairStrandsVertexFactoryCopyData234>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FHairStrandsVertexFactory::Copy(FHairStrandsVertexFactory_const_&)_::_2_::TSTR_FHairStrandsVertexFactoryCopyData234>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FHairStrandsVertexFactoryCopyData");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FHairStrandsVertexFactoryCopyData"
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FHairStrandsVertexFactory::Copy(FHairStrandsVertexFactory_const_&)_::_2_::TSTR_FHairStrandsVertexFactoryCopyData234>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FHairStrandsVertexFactory::Copy(FHairStrandsVertexFactory_const_&)_::_2_::TSTR_FHairStrandsVertexFactoryCopyData234>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FHairStrandsVertexFactoryCopyData");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FHairStrandsVertexFactory::Copy(FHairStrandsVertexFactory_const_&)_::_2_::TSTR_FHairStrandsVertexFactoryCopyData234>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FHairStrandsVertexFactory::Copy(FHairStrandsVertexFactory_const_&)_::_2_::TSTR_FHairStrandsVertexFactoryCopyData234>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FHairStrandsVertexFactoryCopyData","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FHairStrandsVer;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14e099960

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_FHairCardsVertexFactory::Copy(FHairCardsVertexFactory_const_&)_::_2_::TSTR_FHairStrandsVertexFactoryCopyData367>
* __cdecl TRenderCommandTag<`FHairCardsVertexFactory::Copy'::__l2::TSTR_FHairStrandsVertexFactoryCopyData367>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FHairCardsVertexFactory::Copy(FHairCardsVertexFactory_const_&)_::_2_::TSTR_FHairStrandsVertexFactoryCopyData367>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FHairCardsVertexFactory::Copy(FHairCardsVertexFactory_const_&)_::_2_::TSTR_FHairStrandsVertexFactoryCopyData367>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FHairCardsVertexFactory::Copy(FHairCardsVertexFactory_const_&)_::_2_::TSTR_FHairStrandsVertexFactoryCopyData367>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FHairCardsVertexFactory::Copy(FHairCardsVertexFactory_const_&)_::_2_::TSTR_FHairStrandsVertexFactoryCopyData367>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FHairStrandsVertexFactoryCopyData");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FHairStrandsVertexFactoryCopyData"
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FHairCardsVertexFactory::Copy(FHairCardsVertexFactory_const_&)_::_2_::TSTR_FHairStrandsVertexFactoryCopyData367>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FHairCardsVertexFactory::Copy(FHairCardsVertexFactory_const_&)_::_2_::TSTR_FHairStrandsVertexFactoryCopyData367>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FHairStrandsVertexFactoryCopyData");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FHairCardsVertexFactory::Copy(FHairCardsVertexFactory_const_&)_::_2_::TSTR_FHairStrandsVertexFactoryCopyData367>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FHairCardsVertexFactory::Copy(FHairCardsVertexFactory_const_&)_::_2_::TSTR_FHairStrandsVertexFactoryCopyData367>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FHairStrandsVertexFactoryCopyData","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FHairStrandsVer;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14e0e7ee0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_FNDIHairStrandsData::Release(void)_::_5_::TSTR_DeleteResource498>
* __cdecl TRenderCommandTag<`FNDIHairStrandsData::Release'::__l5::TSTR_DeleteResource498>::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FNDIHairStrandsData::Release(void)_::_5_::TSTR_DeleteResource498>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FNDIHairStrandsData::Release(void)_::_5_::TSTR_DeleteResource498>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FNDIHairStrandsData::Release(void)_::_5_::TSTR_DeleteResource498>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FNDIHairStrandsData::Release(void)_::_5_::TSTR_DeleteResource498>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"DeleteResource");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"DeleteResource",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FNDIHairStrandsData::Release(void)_::_5_::TSTR_DeleteResource498>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FNDIHairStrandsData::Release(void)_::_5_::TSTR_DeleteResource498>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"DeleteResource");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FNDIHairStrandsData::Release(void)_::_5_::TSTR_DeleteResource498>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FNDIHairStrandsData::Release(void)_::_5_::TSTR_DeleteResource498>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"DeleteResource",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_DeleteResource;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14e0e8090

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_FNDIVelocityGridData::Release(void)_::_5_::TSTR_DeleteResourceA89>
* __cdecl TRenderCommandTag<`FNDIVelocityGridData::Release'::__l5::TSTR_DeleteResourceA89>::Get
                    (void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FNDIVelocityGridData::Release(void)_::_5_::TSTR_DeleteResourceA89>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FNDIVelocityGridData::Release(void)_::_5_::TSTR_DeleteResourceA89>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FNDIVelocityGridData::Release(void)_::_5_::TSTR_DeleteResourceA89>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FNDIVelocityGridData::Release(void)_::_5_::TSTR_DeleteResourceA89>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"DeleteResourceA");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"DeleteResourceA",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FNDIVelocityGridData::Release(void)_::_5_::TSTR_DeleteResourceA89>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FNDIVelocityGridData::Release(void)_::_5_::TSTR_DeleteResourceA89>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"DeleteResourceA");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FNDIVelocityGridData::Release(void)_::_5_::TSTR_DeleteResourceA89>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FNDIVelocityGridData::Release(void)_::_5_::TSTR_DeleteResourceA89>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"DeleteResourceA",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_DeleteResourceA;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14e0e8240

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_FNDIVelocityGridData::Release(void)_::_8_::TSTR_DeleteResourceB100>
* __cdecl TRenderCommandTag<`FNDIVelocityGridData::Release'::__l8::TSTR_DeleteResourceB100>::Get
                    (void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FNDIVelocityGridData::Release(void)_::_8_::TSTR_DeleteResourceB100>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FNDIVelocityGridData::Release(void)_::_8_::TSTR_DeleteResourceB100>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FNDIVelocityGridData::Release(void)_::_8_::TSTR_DeleteResourceB100>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FNDIVelocityGridData::Release(void)_::_8_::TSTR_DeleteResourceB100>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"DeleteResourceB");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"DeleteResourceB",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FNDIVelocityGridData::Release(void)_::_8_::TSTR_DeleteResourceB100>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FNDIVelocityGridData::Release(void)_::_8_::TSTR_DeleteResourceB100>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"DeleteResourceB");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FNDIVelocityGridData::Release(void)_::_8_::TSTR_DeleteResourceB100>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FNDIVelocityGridData::Release(void)_::_8_::TSTR_DeleteResourceB100>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"DeleteResourceB",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_DeleteResourceB;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14e0e83f0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceVelocityGrid::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_2_::TSTR_FNiagaraDIDestroyInstanceData185>
* __cdecl TRenderCommandTag<`UNiagaraDataInterfaceVelocityGrid::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData185>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceVelocityGrid::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_2_::TSTR_FNiagaraDIDestroyInstanceData185>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceVelocityGrid::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_2_::TSTR_FNiagaraDIDestroyInstanceData185>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceVelocityGrid::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_2_::TSTR_FNiagaraDIDestroyInstanceData185>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceVelocityGrid::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_2_::TSTR_FNiagaraDIDestroyInstanceData185>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FNiagaraDIDestroyInstanceData");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FNiagaraDIDestroyInstanceData",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceVelocityGrid::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_2_::TSTR_FNiagaraDIDestroyInstanceData185>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceVelocityGrid::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_2_::TSTR_FNiagaraDIDestroyInstanceData185>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FNiagaraDIDestroyInstanceData");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceVelocityGrid::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_2_::TSTR_FNiagaraDIDestroyInstanceData185>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceVelocityGrid::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_2_::TSTR_FNiagaraDIDestroyInstanceData185>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FNiagaraDIDestroyInstanceData","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FNiagaraDIDestr;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14e0e85a0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceHairStrands::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_2_::TSTR_FNiagaraDIDestroyInstanceData887>
* __cdecl TRenderCommandTag<`UNiagaraDataInterfaceHairStrands::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData887>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceHairStrands::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_2_::TSTR_FNiagaraDIDestroyInstanceData887>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceHairStrands::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_2_::TSTR_FNiagaraDIDestroyInstanceData887>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceHairStrands::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_2_::TSTR_FNiagaraDIDestroyInstanceData887>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceHairStrands::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_2_::TSTR_FNiagaraDIDestroyInstanceData887>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FNiagaraDIDestroyInstanceData");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FNiagaraDIDestroyInstanceData",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceHairStrands::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_2_::TSTR_FNiagaraDIDestroyInstanceData887>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceHairStrands::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_2_::TSTR_FNiagaraDIDestroyInstanceData887>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FNiagaraDIDestroyInstanceData");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceHairStrands::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_2_::TSTR_FNiagaraDIDestroyInstanceData887>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceHairStrands::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_2_::TSTR_FNiagaraDIDestroyInstanceData887>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FNiagaraDIDestroyInstanceData","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FNiagaraDIDestr;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14e0e8750

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_bool___cdecl_UNiagaraDataInterfaceHairStrands::PerInstanceTick(void_*,FNiagaraSystemInstance_*,float)_::_8_::TSTR_FNiagaraDIDestroyInstanceData908>
* __cdecl TRenderCommandTag<`UNiagaraDataInterfaceHairStrands::PerInstanceTick'::__l8::TSTR_FNiagaraDIDestroyInstanceData908>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_bool___cdecl_UNiagaraDataInterfaceHairStrands::PerInstanceTick(void_*,FNiagaraSystemInstance_*,float)_::_8_::TSTR_FNiagaraDIDestroyInstanceData908>_const_&___cdecl_TRenderCommandTag<_public:_virtual_bool___cdecl_UNiagaraDataInterfaceHairStrands::PerInstanceTick(void_*,FNiagaraSystemInstance_*,float)_::_8_::TSTR_FNiagaraDIDestroyInstanceData908>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_bool___cdecl_UNiagaraDataInterfaceHairStrands::PerInstanceTick(void_*,FNiagaraSystemInstance_*,float)_::_8_::TSTR_FNiagaraDIDestroyInstanceData908>_const_&___cdecl_TRenderCommandTag<_public:_virtual_bool___cdecl_UNiagaraDataInterfaceHairStrands::PerInstanceTick(void_*,FNiagaraSystemInstance_*,float)_::_8_::TSTR_FNiagaraDIDestroyInstanceData908>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FNiagaraDIDestroyInstanceData");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FNiagaraDIDestroyInstanceData",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_bool___cdecl_UNiagaraDataInterfaceHairStrands::PerInstanceTick(void_*,FNiagaraSystemInstance_*,float)_::_8_::TSTR_FNiagaraDIDestroyInstanceData908>_const_&___cdecl_TRenderCommandTag<_public:_virtual_bool___cdecl_UNiagaraDataInterfaceHairStrands::PerInstanceTick(void_*,FNiagaraSystemInstance_*,float)_::_8_::TSTR_FNiagaraDIDestroyInstanceData908>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FNiagaraDIDestroyInstanceData");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_bool___cdecl_UNiagaraDataInterfaceHairStrands::PerInstanceTick(void_*,FNiagaraSystemInstance_*,float)_::_8_::TSTR_FNiagaraDIDestroyInstanceData908>_const_&___cdecl_TRenderCommandTag<_public:_virtual_bool___cdecl_UNiagaraDataInterfaceHairStrands::PerInstanceTick(void_*,FNiagaraSystemInstance_*,float)_::_8_::TSTR_FNiagaraDIDestroyInstanceData908>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FNiagaraDIDestroyInstanceData","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FNiagaraDIDestr;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14e0e8900

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceHairStrands::SimCachePostReadFrame(void_*,FNiagaraSystemInstance_*)_::_6_::TSTR_NiagaraInterpolateGroomSimCache1116>
* __cdecl TRenderCommandTag<`UNiagaraDataInterfaceHairStrands::SimCachePostReadFrame'::__l6::TSTR_NiagaraInterpolateGroomSimCache1116>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceHairStrands::SimCachePostReadFrame(void_*,FNiagaraSystemInstance_*)_::_6_::TSTR_NiagaraInterpolateGroomSimCache1116>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceHairStrands::SimCachePostReadFrame(void_*,FNiagaraSystemInstance_*)_::_6_::TSTR_NiagaraInterpolateGroomSimCache1116>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceHairStrands::SimCachePostReadFrame(void_*,FNiagaraSystemInstance_*)_::_6_::TSTR_NiagaraInterpolateGroomSimCache1116>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceHairStrands::SimCachePostReadFrame(void_*,FNiagaraSystemInstance_*)_::_6_::TSTR_NiagaraInterpolateGroomSimCache1116>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"NiagaraInterpolateGroomSimCache");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"NiagaraInterpolateGroomSimCache",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceHairStrands::SimCachePostReadFrame(void_*,FNiagaraSystemInstance_*)_::_6_::TSTR_NiagaraInterpolateGroomSimCache1116>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceHairStrands::SimCachePostReadFrame(void_*,FNiagaraSystemInstance_*)_::_6_::TSTR_NiagaraInterpolateGroomSimCache1116>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"NiagaraInterpolateGroomSimCache");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceHairStrands::SimCachePostReadFrame(void_*,FNiagaraSystemInstance_*)_::_6_::TSTR_NiagaraInterpolateGroomSimCache1116>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceHairStrands::SimCachePostReadFrame(void_*,FNiagaraSystemInstance_*)_::_6_::TSTR_NiagaraInterpolateGroomSimCache1116>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"NiagaraInterpolateGroomSimCache","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_NiagaraInterpol;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

