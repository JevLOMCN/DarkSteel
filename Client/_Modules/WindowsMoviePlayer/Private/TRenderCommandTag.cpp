// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WindowsMoviePlayer
// Functions: 2

// Get @ 14f12a550

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_bool___cdecl_FMediaFoundationMovieStreamer::OpenNextMovie(void)_::_20_::TSTR_InitMovieTexture289>
* __cdecl TRenderCommandTag<`FMediaFoundationMovieStreamer::OpenNextMovie'::__l20::TSTR_InitMovieTexture289>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_bool___cdecl_FMediaFoundationMovieStreamer::OpenNextMovie(void)_::_20_::TSTR_InitMovieTexture289>_const_&___cdecl_TRenderCommandTag<_private:_bool___cdecl_FMediaFoundationMovieStreamer::OpenNextMovie(void)_::_20_::TSTR_InitMovieTexture289>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_bool___cdecl_FMediaFoundationMovieStreamer::OpenNextMovie(void)_::_20_::TSTR_InitMovieTexture289>_const_&___cdecl_TRenderCommandTag<_private:_bool___cdecl_FMediaFoundationMovieStreamer::OpenNextMovie(void)_::_20_::TSTR_InitMovieTexture289>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"InitMovieTexture");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"InitMovieTexture",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_bool___cdecl_FMediaFoundationMovieStreamer::OpenNextMovie(void)_::_20_::TSTR_InitMovieTexture289>_const_&___cdecl_TRenderCommandTag<_private:_bool___cdecl_FMediaFoundationMovieStreamer::OpenNextMovie(void)_::_20_::TSTR_InitMovieTexture289>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"InitMovieTexture");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_bool___cdecl_FMediaFoundationMovieStreamer::OpenNextMovie(void)_::_20_::TSTR_InitMovieTexture289>_const_&___cdecl_TRenderCommandTag<_private:_bool___cdecl_FMediaFoundationMovieStreamer::OpenNextMovie(void)_::_20_::TSTR_InitMovieTexture289>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"InitMovieTexture",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_InitMovieTextur;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14f12a700

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_bool___cdecl_FMediaFoundationMovieStreamer::OpenNextMovie(void)_::_18_::TSTR_UpdateMovieTexture276>
* __cdecl TRenderCommandTag<`FMediaFoundationMovieStreamer::OpenNextMovie'::__l18::TSTR_UpdateMovieTexture276>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_bool___cdecl_FMediaFoundationMovieStreamer::OpenNextMovie(void)_::_18_::TSTR_UpdateMovieTexture276>_const_&___cdecl_TRenderCommandTag<_private:_bool___cdecl_FMediaFoundationMovieStreamer::OpenNextMovie(void)_::_18_::TSTR_UpdateMovieTexture276>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_bool___cdecl_FMediaFoundationMovieStreamer::OpenNextMovie(void)_::_18_::TSTR_UpdateMovieTexture276>_const_&___cdecl_TRenderCommandTag<_private:_bool___cdecl_FMediaFoundationMovieStreamer::OpenNextMovie(void)_::_18_::TSTR_UpdateMovieTexture276>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UpdateMovieTexture");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"UpdateMovieTexture",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_bool___cdecl_FMediaFoundationMovieStreamer::OpenNextMovie(void)_::_18_::TSTR_UpdateMovieTexture276>_const_&___cdecl_TRenderCommandTag<_private:_bool___cdecl_FMediaFoundationMovieStreamer::OpenNextMovie(void)_::_18_::TSTR_UpdateMovieTexture276>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UpdateMovieTexture");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_bool___cdecl_FMediaFoundationMovieStreamer::OpenNextMovie(void)_::_18_::TSTR_UpdateMovieTexture276>_const_&___cdecl_TRenderCommandTag<_private:_bool___cdecl_FMediaFoundationMovieStreamer::OpenNextMovie(void)_::_18_::TSTR_UpdateMovieTexture276>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"UpdateMovieTexture",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_UpdateMovieText;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

