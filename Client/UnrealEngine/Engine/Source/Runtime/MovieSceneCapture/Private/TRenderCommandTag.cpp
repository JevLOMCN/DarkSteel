// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 2

// Get @ 146bdf870

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_protected:_void___cdecl_FViewportSurfaceReader::Resize(unsigned_int,unsigned_int)_::_2_::TSTR_CreateCaptureFrameTexture58>
* __cdecl TRenderCommandTag<`FViewportSurfaceReader::Resize'::__l2::TSTR_CreateCaptureFrameTexture58>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_void___cdecl_FViewportSurfaceReader::Resize(unsigned_int,unsigned_int)_::_2_::TSTR_CreateCaptureFrameTexture58>_const_&___cdecl_TRenderCommandTag<_protected:_void___cdecl_FViewportSurfaceReader::Resize(unsigned_int,unsigned_int)_::_2_::TSTR_CreateCaptureFrameTexture58>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_void___cdecl_FViewportSurfaceReader::Resize(unsigned_int,unsigned_int)_::_2_::TSTR_CreateCaptureFrameTexture58>_const_&___cdecl_TRenderCommandTag<_protected:_void___cdecl_FViewportSurfaceReader::Resize(unsigned_int,unsigned_int)_::_2_::TSTR_CreateCaptureFrameTexture58>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"CreateCaptureFrameTexture");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"CreateCaptureFrameTexture",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_void___cdecl_FViewportSurfaceReader::Resize(unsigned_int,unsigned_int)_::_2_::TSTR_CreateCaptureFrameTexture58>_const_&___cdecl_TRenderCommandTag<_protected:_void___cdecl_FViewportSurfaceReader::Resize(unsigned_int,unsigned_int)_::_2_::TSTR_CreateCaptureFrameTexture58>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"CreateCaptureFrameTexture");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_void___cdecl_FViewportSurfaceReader::Resize(unsigned_int,unsigned_int)_::_2_::TSTR_CreateCaptureFrameTexture58>_const_&___cdecl_TRenderCommandTag<_protected:_void___cdecl_FViewportSurfaceReader::Resize(unsigned_int,unsigned_int)_::_2_::TSTR_CreateCaptureFrameTexture58>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"CreateCaptureFrameTexture","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_CreateCaptureFr;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 146bdfa20

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_FFrameGrabber::CaptureThisFrame(TSharedPtr<IFramePayload,1>)_::_2_::TSTR_FrameGrabber_AppendFramePayload294>
* __cdecl TRenderCommandTag<`FFrameGrabber::CaptureThisFrame'::__l2::TSTR_FrameGrabber_AppendFramePayload294>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FFrameGrabber::CaptureThisFrame(TSharedPtr<IFramePayload,1>)_::_2_::TSTR_FrameGrabber_AppendFramePayload294>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FFrameGrabber::CaptureThisFrame(TSharedPtr<IFramePayload,1>)_::_2_::TSTR_FrameGrabber_AppendFramePayload294>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FFrameGrabber::CaptureThisFrame(TSharedPtr<IFramePayload,1>)_::_2_::TSTR_FrameGrabber_AppendFramePayload294>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FFrameGrabber::CaptureThisFrame(TSharedPtr<IFramePayload,1>)_::_2_::TSTR_FrameGrabber_AppendFramePayload294>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FrameGrabber_AppendFramePayload");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FrameGrabber_AppendFramePayload",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FFrameGrabber::CaptureThisFrame(TSharedPtr<IFramePayload,1>)_::_2_::TSTR_FrameGrabber_AppendFramePayload294>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FFrameGrabber::CaptureThisFrame(TSharedPtr<IFramePayload,1>)_::_2_::TSTR_FrameGrabber_AppendFramePayload294>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FrameGrabber_AppendFramePayload");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FFrameGrabber::CaptureThisFrame(TSharedPtr<IFramePayload,1>)_::_2_::TSTR_FrameGrabber_AppendFramePayload294>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FFrameGrabber::CaptureThisFrame(TSharedPtr<IFramePayload,1>)_::_2_::TSTR_FrameGrabber_AppendFramePayload294>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FrameGrabber_AppendFramePayload","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FrameGrabber_Ap;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

