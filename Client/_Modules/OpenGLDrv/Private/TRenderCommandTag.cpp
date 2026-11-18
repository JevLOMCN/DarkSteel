// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 2

// Get @ 145c01280

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:___cdecl_FOpenGLViewport::FOpenGLViewport(FOpenGLDynamicRHI_*,void_*,unsigned_int,unsigned_int,bool,EPixelFormat)_::_2_::TSTR_CreateFrameSyncEvent209>
* __cdecl TRenderCommandTag<`FOpenGLViewport::FOpenGLViewport'::__l2::TSTR_CreateFrameSyncEvent209>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FOpenGLViewport::FOpenGLViewport(FOpenGLDynamicRHI_*,void_*,unsigned_int,unsigned_int,bool,EPixelFormat)_::_2_::TSTR_CreateFrameSyncEvent209>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FOpenGLViewport::FOpenGLViewport(FOpenGLDynamicRHI_*,void_*,unsigned_int,unsigned_int,bool,EPixelFormat)_::_2_::TSTR_CreateFrameSyncEvent209>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FOpenGLViewport::FOpenGLViewport(FOpenGLDynamicRHI_*,void_*,unsigned_int,unsigned_int,bool,EPixelFormat)_::_2_::TSTR_CreateFrameSyncEvent209>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FOpenGLViewport::FOpenGLViewport(FOpenGLDynamicRHI_*,void_*,unsigned_int,unsigned_int,bool,EPixelFormat)_::_2_::TSTR_CreateFrameSyncEvent209>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"CreateFrameSyncEvent");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"CreateFrameSyncEvent",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FOpenGLViewport::FOpenGLViewport(FOpenGLDynamicRHI_*,void_*,unsigned_int,unsigned_int,bool,EPixelFormat)_::_2_::TSTR_CreateFrameSyncEvent209>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FOpenGLViewport::FOpenGLViewport(FOpenGLDynamicRHI_*,void_*,unsigned_int,unsigned_int,bool,EPixelFormat)_::_2_::TSTR_CreateFrameSyncEvent209>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"CreateFrameSyncEvent");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FOpenGLViewport::FOpenGLViewport(FOpenGLDynamicRHI_*,void_*,unsigned_int,unsigned_int,bool,EPixelFormat)_::_2_::TSTR_CreateFrameSyncEvent209>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FOpenGLViewport::FOpenGLViewport(FOpenGLDynamicRHI_*,void_*,unsigned_int,unsigned_int,bool,EPixelFormat)_::_2_::TSTR_CreateFrameSyncEvent209>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"CreateFrameSyncEvent",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_CreateFrameSync;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145c01430

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_FOpenGLViewport::Resize(unsigned_int,unsigned_int,bool)_::_2_::TSTR_ResizeViewport263>
* __cdecl TRenderCommandTag<`FOpenGLViewport::Resize'::__l2::TSTR_ResizeViewport263>::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FOpenGLViewport::Resize(unsigned_int,unsigned_int,bool)_::_2_::TSTR_ResizeViewport263>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FOpenGLViewport::Resize(unsigned_int,unsigned_int,bool)_::_2_::TSTR_ResizeViewport263>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FOpenGLViewport::Resize(unsigned_int,unsigned_int,bool)_::_2_::TSTR_ResizeViewport263>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FOpenGLViewport::Resize(unsigned_int,unsigned_int,bool)_::_2_::TSTR_ResizeViewport263>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ResizeViewport");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ResizeViewport",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FOpenGLViewport::Resize(unsigned_int,unsigned_int,bool)_::_2_::TSTR_ResizeViewport263>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FOpenGLViewport::Resize(unsigned_int,unsigned_int,bool)_::_2_::TSTR_ResizeViewport263>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ResizeViewport");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FOpenGLViewport::Resize(unsigned_int,unsigned_int,bool)_::_2_::TSTR_ResizeViewport263>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FOpenGLViewport::Resize(unsigned_int,unsigned_int,bool)_::_2_::TSTR_ResizeViewport263>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ResizeViewport",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_ResizeViewport;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

