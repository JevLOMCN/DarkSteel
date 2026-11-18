// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 6

// Get @ 14dcca2e0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_protected:_void___cdecl_UMovieGraphDefaultRenderer::FlushAsyncEngineSystems(TObjectPtr<UMovieGraphEvaluatedConfig>_const_&)const_::_18_::TSTR_VirtualTextureSystemFlushCommand437>
* __cdecl TRenderCommandTag<`UMovieGraphDefaultRenderer::FlushAsyncEngineSystems'::__l18::TSTR_VirtualTextureSystemFlushCommand437>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_void___cdecl_UMovieGraphDefaultRenderer::FlushAsyncEngineSystems(TObjectPtr<UMovieGraphEvaluatedConfig>_const_&)const_::_18_::TSTR_VirtualTextureSystemFlushCommand437>_const_&___cdecl_TRenderCommandTag<_protected:_void___cdecl_UMovieGraphDefaultRenderer::FlushAsyncEngineSystems(TObjectPtr<UMovieGraphEvaluatedConfig>_const_&)const_::_18_::TSTR_VirtualTextureSystemFlushCommand437>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_void___cdecl_UMovieGraphDefaultRenderer::FlushAsyncEngineSystems(TObjectPtr<UMovieGraphEvaluatedConfig>_const_&)const_::_18_::TSTR_VirtualTextureSystemFlushCommand437>_const_&___cdecl_TRenderCommandTag<_protected:_void___cdecl_UMovieGraphDefaultRenderer::FlushAsyncEngineSystems(TObjectPtr<UMovieGraphEvaluatedConfig>_const_&)const_::_18_::TSTR_VirtualTextureSystemFlushCommand437>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"VirtualTextureSystemFlushCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"VirtualTextureSystemFlushCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_void___cdecl_UMovieGraphDefaultRenderer::FlushAsyncEngineSystems(TObjectPtr<UMovieGraphEvaluatedConfig>_const_&)const_::_18_::TSTR_VirtualTextureSystemFlushCommand437>_const_&___cdecl_TRenderCommandTag<_protected:_void___cdecl_UMovieGraphDefaultRenderer::FlushAsyncEngineSystems(TObjectPtr<UMovieGraphEvaluatedConfig>_const_&)const_::_18_::TSTR_VirtualTextureSystemFlushCommand437>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"VirtualTextureSystemFlushCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_void___cdecl_UMovieGraphDefaultRenderer::FlushAsyncEngineSystems(TObjectPtr<UMovieGraphEvaluatedConfig>_const_&)const_::_18_::TSTR_VirtualTextureSystemFlushCommand437>_const_&___cdecl_TRenderCommandTag<_protected:_void___cdecl_UMovieGraphDefaultRenderer::FlushAsyncEngineSystems(TObjectPtr<UMovieGraphEvaluatedConfig>_const_&)const_::_18_::TSTR_VirtualTextureSystemFlushCommand437>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"VirtualTextureSystemFlushCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_VirtualTextureS;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14dd22cc0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass::Render(FMovieGraphTraversalContext_const_&,FMovieGraphTimeStepData_const_&)_::_50_::TSTR_WidgetRenderTargetResolveCommand214>
* __cdecl TRenderCommandTag<`UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass::Render'::__l50::TSTR_WidgetRenderTargetResolveCommand214>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass::Render(FMovieGraphTraversalContext_const_&,FMovieGraphTimeStepData_const_&)_::_50_::TSTR_WidgetRenderTargetResolveCommand214>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass::Render(FMovieGraphTraversalContext_const_&,FMovieGraphTimeStepData_const_&)_::_50_::TSTR_WidgetRenderTargetResolveCommand214>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass::Render(FMovieGraphTraversalContext_const_&,FMovieGraphTimeStepData_const_&)_::_50_::TSTR_WidgetRenderTargetResolveCommand214>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass::Render(FMovieGraphTraversalContext_const_&,FMovieGraphTimeStepData_const_&)_::_50_::TSTR_WidgetRenderTargetResolveCommand214>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"WidgetRenderTargetResolveCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"WidgetRenderTargetResolveCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass::Render(FMovieGraphTraversalContext_const_&,FMovieGraphTimeStepData_const_&)_::_50_::TSTR_WidgetRenderTargetResolveCommand214>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass::Render(FMovieGraphTraversalContext_const_&,FMovieGraphTimeStepData_const_&)_::_50_::TSTR_WidgetRenderTargetResolveCommand214>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"WidgetRenderTargetResolveCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass::Render(FMovieGraphTraversalContext_const_&,FMovieGraphTimeStepData_const_&)_::_50_::TSTR_WidgetRenderTargetResolveCommand214>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass::Render(FMovieGraphTraversalContext_const_&,FMovieGraphTimeStepData_const_&)_::_50_::TSTR_WidgetRenderTargetResolveCommand214>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"WidgetRenderTargetResolveCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_WidgetRenderTar;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14dd855e0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_protected:_void___cdecl_FMoviePipelineSurfaceReader::ResizeImpl(unsigned_int,unsigned_int)_::_2_::TSTR_CreateCaptureFrameTexture47>
* __cdecl TRenderCommandTag<`FMoviePipelineSurfaceReader::ResizeImpl'::__l2::TSTR_CreateCaptureFrameTexture47>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_void___cdecl_FMoviePipelineSurfaceReader::ResizeImpl(unsigned_int,unsigned_int)_::_2_::TSTR_CreateCaptureFrameTexture47>_const_&___cdecl_TRenderCommandTag<_protected:_void___cdecl_FMoviePipelineSurfaceReader::ResizeImpl(unsigned_int,unsigned_int)_::_2_::TSTR_CreateCaptureFrameTexture47>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_void___cdecl_FMoviePipelineSurfaceReader::ResizeImpl(unsigned_int,unsigned_int)_::_2_::TSTR_CreateCaptureFrameTexture47>_const_&___cdecl_TRenderCommandTag<_protected:_void___cdecl_FMoviePipelineSurfaceReader::ResizeImpl(unsigned_int,unsigned_int)_::_2_::TSTR_CreateCaptureFrameTexture47>::Get(void)_::_2_::FStatData>
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_void___cdecl_FMoviePipelineSurfaceReader::ResizeImpl(unsigned_int,unsigned_int)_::_2_::TSTR_CreateCaptureFrameTexture47>_const_&___cdecl_TRenderCommandTag<_protected:_void___cdecl_FMoviePipelineSurfaceReader::ResizeImpl(unsigned_int,unsigned_int)_::_2_::TSTR_CreateCaptureFrameTexture47>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"CreateCaptureFrameTexture");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_void___cdecl_FMoviePipelineSurfaceReader::ResizeImpl(unsigned_int,unsigned_int)_::_2_::TSTR_CreateCaptureFrameTexture47>_const_&___cdecl_TRenderCommandTag<_protected:_void___cdecl_FMoviePipelineSurfaceReader::ResizeImpl(unsigned_int,unsigned_int)_::_2_::TSTR_CreateCaptureFrameTexture47>::Get(void)_::_2_::FStatData>
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

// Get @ 14dd85790

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_UMoviePipeline::RenderFrame(void)_::_122_::TSTR_MRQFrameThrottle489>
* __cdecl TRenderCommandTag<`UMoviePipeline::RenderFrame'::__l122::TSTR_MRQFrameThrottle489>::Get
                    (void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_UMoviePipeline::RenderFrame(void)_::_122_::TSTR_MRQFrameThrottle489>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_UMoviePipeline::RenderFrame(void)_::_122_::TSTR_MRQFrameThrottle489>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_UMoviePipeline::RenderFrame(void)_::_122_::TSTR_MRQFrameThrottle489>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_UMoviePipeline::RenderFrame(void)_::_122_::TSTR_MRQFrameThrottle489>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"MRQFrameThrottle");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"MRQFrameThrottle",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_UMoviePipeline::RenderFrame(void)_::_122_::TSTR_MRQFrameThrottle489>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_UMoviePipeline::RenderFrame(void)_::_122_::TSTR_MRQFrameThrottle489>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"MRQFrameThrottle");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_UMoviePipeline::RenderFrame(void)_::_122_::TSTR_MRQFrameThrottle489>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_UMoviePipeline::RenderFrame(void)_::_122_::TSTR_MRQFrameThrottle489>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"MRQFrameThrottle",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_MRQFrameThrottl;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14dd85940

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_FMoviePipelineSurfaceQueue::Shutdown(void)_::_4_::TSTR_PerformReadback302>
* __cdecl TRenderCommandTag<`FMoviePipelineSurfaceQueue::Shutdown'::__l4::TSTR_PerformReadback302>::
          Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FMoviePipelineSurfaceQueue::Shutdown(void)_::_4_::TSTR_PerformReadback302>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FMoviePipelineSurfaceQueue::Shutdown(void)_::_4_::TSTR_PerformReadback302>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FMoviePipelineSurfaceQueue::Shutdown(void)_::_4_::TSTR_PerformReadback302>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FMoviePipelineSurfaceQueue::Shutdown(void)_::_4_::TSTR_PerformReadback302>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"PerformReadback");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"PerformReadback",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FMoviePipelineSurfaceQueue::Shutdown(void)_::_4_::TSTR_PerformReadback302>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FMoviePipelineSurfaceQueue::Shutdown(void)_::_4_::TSTR_PerformReadback302>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"PerformReadback");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FMoviePipelineSurfaceQueue::Shutdown(void)_::_4_::TSTR_PerformReadback302>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FMoviePipelineSurfaceQueue::Shutdown(void)_::_4_::TSTR_PerformReadback302>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"PerformReadback",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_PerformReadback;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14dd85af0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_UMoviePipeline::FlushAsyncEngineSystems(void)_::_2_::TSTR_VirtualTextureSystemFlushCommand678>
* __cdecl TRenderCommandTag<`UMoviePipeline::FlushAsyncEngineSystems'::__l2::TSTR_VirtualTextureSystemFlushCommand678>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_UMoviePipeline::FlushAsyncEngineSystems(void)_::_2_::TSTR_VirtualTextureSystemFlushCommand678>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_UMoviePipeline::FlushAsyncEngineSystems(void)_::_2_::TSTR_VirtualTextureSystemFlushCommand678>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_UMoviePipeline::FlushAsyncEngineSystems(void)_::_2_::TSTR_VirtualTextureSystemFlushCommand678>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_UMoviePipeline::FlushAsyncEngineSystems(void)_::_2_::TSTR_VirtualTextureSystemFlushCommand678>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"VirtualTextureSystemFlushCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"VirtualTextureSystemFlushCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_UMoviePipeline::FlushAsyncEngineSystems(void)_::_2_::TSTR_VirtualTextureSystemFlushCommand678>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_UMoviePipeline::FlushAsyncEngineSystems(void)_::_2_::TSTR_VirtualTextureSystemFlushCommand678>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"VirtualTextureSystemFlushCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_UMoviePipeline::FlushAsyncEngineSystems(void)_::_2_::TSTR_VirtualTextureSystemFlushCommand678>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_UMoviePipeline::FlushAsyncEngineSystems(void)_::_2_::TSTR_VirtualTextureSystemFlushCommand678>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"VirtualTextureSystemFlushCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_VirtualTextureS;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

