// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 2

// Get @ 146c279a0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_protected:_void___cdecl_UMediaTexture::TickResource(FTimespan)_::_2_::TSTR_MediaTextureResourceRender500>
* __cdecl TRenderCommandTag<`UMediaTexture::TickResource'::__l2::TSTR_MediaTextureResourceRender500>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_void___cdecl_UMediaTexture::TickResource(FTimespan)_::_2_::TSTR_MediaTextureResourceRender500>_const_&___cdecl_TRenderCommandTag<_protected:_void___cdecl_UMediaTexture::TickResource(FTimespan)_::_2_::TSTR_MediaTextureResourceRender500>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_void___cdecl_UMediaTexture::TickResource(FTimespan)_::_2_::TSTR_MediaTextureResourceRender500>_const_&___cdecl_TRenderCommandTag<_protected:_void___cdecl_UMediaTexture::TickResource(FTimespan)_::_2_::TSTR_MediaTextureResourceRender500>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"MediaTextureResourceRender");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"MediaTextureResourceRender",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_void___cdecl_UMediaTexture::TickResource(FTimespan)_::_2_::TSTR_MediaTextureResourceRender500>_const_&___cdecl_TRenderCommandTag<_protected:_void___cdecl_UMediaTexture::TickResource(FTimespan)_::_2_::TSTR_MediaTextureResourceRender500>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"MediaTextureResourceRender");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_void___cdecl_UMediaTexture::TickResource(FTimespan)_::_2_::TSTR_MediaTextureResourceRender500>_const_&___cdecl_TRenderCommandTag<_protected:_void___cdecl_UMediaTexture::TickResource(FTimespan)_::_2_::TSTR_MediaTextureResourceRender500>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"MediaTextureResourceRender","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_MediaTextureRes;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 146c27b50

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_UMediaTexture::BeginDestroy(void)_::_11_::TSTR_MediaTextureUnregisterGuid261>
* __cdecl TRenderCommandTag<`UMediaTexture::BeginDestroy'::__l11::TSTR_MediaTextureUnregisterGuid261>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UMediaTexture::BeginDestroy(void)_::_11_::TSTR_MediaTextureUnregisterGuid261>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UMediaTexture::BeginDestroy(void)_::_11_::TSTR_MediaTextureUnregisterGuid261>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UMediaTexture::BeginDestroy(void)_::_11_::TSTR_MediaTextureUnregisterGuid261>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UMediaTexture::BeginDestroy(void)_::_11_::TSTR_MediaTextureUnregisterGuid261>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"MediaTextureUnregisterGuid");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"MediaTextureUnregisterGuid",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UMediaTexture::BeginDestroy(void)_::_11_::TSTR_MediaTextureUnregisterGuid261>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UMediaTexture::BeginDestroy(void)_::_11_::TSTR_MediaTextureUnregisterGuid261>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"MediaTextureUnregisterGuid");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UMediaTexture::BeginDestroy(void)_::_11_::TSTR_MediaTextureUnregisterGuid261>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UMediaTexture::BeginDestroy(void)_::_11_::TSTR_MediaTextureUnregisterGuid261>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"MediaTextureUnregisterGuid","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_MediaTextureUnr;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

