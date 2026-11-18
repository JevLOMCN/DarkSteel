// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 6

// Get @ 14ddde4b0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_protected:_virtual_void___cdecl_UMoviePipelineDeferredPassBase::PostRendererSubmission(FMoviePipelineRenderPassMetrics_const_&,FMoviePipelinePassIdentifier,int,FCanvas_&)_::_2_::TSTR_CanvasRenderTargetResolveCommand1192>
* __cdecl TRenderCommandTag<`UMoviePipelineDeferredPassBase::PostRendererSubmission'::__l2::TSTR_CanvasRenderTargetResolveCommand1192>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_virtual_void___cdecl_UMoviePipelineDeferredPassBase::PostRendererSubmission(FMoviePipelineRenderPassMetrics_const_&,FMoviePipelinePassIdentifier,int,FCanvas_&)_::_2_::TSTR_CanvasRenderTargetResolveCommand1192>_const_&___cdecl_TRenderCommandTag<_protected:_virtual_void___cdecl_UMoviePipelineDeferredPassBase::PostRendererSubmission(FMoviePipelineRenderPassMetrics_const_&,FMoviePipelinePassIdentifier,int,FCanvas_&)_::_2_::TSTR_CanvasRenderTargetResolveCommand1192>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_virtual_void___cdecl_UMoviePipelineDeferredPassBase::PostRendererSubmission(FMoviePipelineRenderPassMetrics_const_&,FMoviePipelinePassIdentifier,int,FCanvas_&)_::_2_::TSTR_CanvasRenderTargetResolveCommand1192>_const_&___cdecl_TRenderCommandTag<_protected:_virtual_void___cdecl_UMoviePipelineDeferredPassBase::PostRendererSubmission(FMoviePipelineRenderPassMetrics_const_&,FMoviePipelinePassIdentifier,int,FCanvas_&)_::_2_::TSTR_CanvasRenderTargetResolveCommand1192>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"CanvasRenderTargetResolveCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"CanvasRenderTargetResolveCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_virtual_void___cdecl_UMoviePipelineDeferredPassBase::PostRendererSubmission(FMoviePipelineRenderPassMetrics_const_&,FMoviePipelinePassIdentifier,int,FCanvas_&)_::_2_::TSTR_CanvasRenderTargetResolveCommand1192>_const_&___cdecl_TRenderCommandTag<_protected:_virtual_void___cdecl_UMoviePipelineDeferredPassBase::PostRendererSubmission(FMoviePipelineRenderPassMetrics_const_&,FMoviePipelinePassIdentifier,int,FCanvas_&)_::_2_::TSTR_CanvasRenderTargetResolveCommand1192>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"CanvasRenderTargetResolveCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_virtual_void___cdecl_UMoviePipelineDeferredPassBase::PostRendererSubmission(FMoviePipelineRenderPassMetrics_const_&,FMoviePipelinePassIdentifier,int,FCanvas_&)_::_2_::TSTR_CanvasRenderTargetResolveCommand1192>_const_&___cdecl_TRenderCommandTag<_protected:_virtual_void___cdecl_UMoviePipelineDeferredPassBase::PostRendererSubmission(FMoviePipelineRenderPassMetrics_const_&,FMoviePipelinePassIdentifier,int,FCanvas_&)_::_2_::TSTR_CanvasRenderTargetResolveCommand1192>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"CanvasRenderTargetResolveCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_CanvasRenderTar;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14ddde660

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_protected:_virtual_void___cdecl_UE::MovieGraph::Rendering::FMovieGraphImagePassBase::PostRendererSubmission(UE::MovieGraph::FMovieGraphSampleState_const_&,UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams_const_&,FCanvas_&,UE::MovieGraph::DefaultRenderer::FCameraInfo_const_&)const_::_2_::TSTR_CanvasRenderTargetResolveCommand539>
* __cdecl TRenderCommandTag<`UE::MovieGraph::Rendering::FMovieGraphImagePassBase::PostRendererSubmission'::__l2::TSTR_CanvasRenderTargetResolveCommand539>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_virtual_void___cdecl_UE::MovieGraph::Rendering::FMovieGraphImagePassBase::PostRendererSubmission(UE::MovieGraph::FMovieGraphSampleState_const_&,UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams_const_&,FCanvas_&,UE::MovieGraph::DefaultRenderer::FCameraInfo_const_&)const_::_2_::TSTR_CanvasRenderTargetResolveCommand539>_const_&___cdecl_TRenderCommandTag<_protected:_virtual_void___cdecl_UE::MovieGraph::Rendering::FMovieGraphImagePassBase::PostRendererSubmission(UE::MovieGraph::FMovieGraphSampleState_const_&,UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams_const_&,FCanvas_&,UE::MovieGraph::DefaultRenderer::FCameraInfo_const_&)const_::_2_::TSTR_CanvasRenderTargetResolveCommand539>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_virtual_void___cdecl_UE::MovieGraph::Rendering::FMovieGraphImagePassBase::PostRendererSubmission(UE::MovieGraph::FMovieGraphSampleState_const_&,UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams_const_&,FCanvas_&,UE::MovieGraph::DefaultRenderer::FCameraInfo_const_&)const_::_2_::TSTR_CanvasRenderTargetResolveCommand539>_const_&___cdecl_TRenderCommandTag<_protected:_virtual_void___cdecl_UE::MovieGraph::Rendering::FMovieGraphImagePassBase::PostRendererSubmission(UE::MovieGraph::FMovieGraphSampleState_const_&,UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams_const_&,FCanvas_&,UE::MovieGraph::DefaultRenderer::FCameraInfo_const_&)const_::_2_::TSTR_CanvasRenderTargetResolveCommand539>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"CanvasRenderTargetResolveCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"CanvasRenderTargetResolveCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_virtual_void___cdecl_UE::MovieGraph::Rendering::FMovieGraphImagePassBase::PostRendererSubmission(UE::MovieGraph::FMovieGraphSampleState_const_&,UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams_const_&,FCanvas_&,UE::MovieGraph::DefaultRenderer::FCameraInfo_const_&)const_::_2_::TSTR_CanvasRenderTargetResolveCommand539>_const_&___cdecl_TRenderCommandTag<_protected:_virtual_void___cdecl_UE::MovieGraph::Rendering::FMovieGraphImagePassBase::PostRendererSubmission(UE::MovieGraph::FMovieGraphSampleState_const_&,UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams_const_&,FCanvas_&,UE::MovieGraph::DefaultRenderer::FCameraInfo_const_&)const_::_2_::TSTR_CanvasRenderTargetResolveCommand539>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"CanvasRenderTargetResolveCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_virtual_void___cdecl_UE::MovieGraph::Rendering::FMovieGraphImagePassBase::PostRendererSubmission(UE::MovieGraph::FMovieGraphSampleState_const_&,UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams_const_&,FCanvas_&,UE::MovieGraph::DefaultRenderer::FCameraInfo_const_&)const_::_2_::TSTR_CanvasRenderTargetResolveCommand539>_const_&___cdecl_TRenderCommandTag<_protected:_virtual_void___cdecl_UE::MovieGraph::Rendering::FMovieGraphImagePassBase::PostRendererSubmission(UE::MovieGraph::FMovieGraphSampleState_const_&,UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams_const_&,FCanvas_&,UE::MovieGraph::DefaultRenderer::FCameraInfo_const_&)const_::_2_::TSTR_CanvasRenderTargetResolveCommand539>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"CanvasRenderTargetResolveCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_CanvasRenderTar;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14ddde810

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_UE::MovieGraph::Rendering::FMovieGraphDeferredPass::Render(FMovieGraphTraversalContext_const_&,FMovieGraphTimeStepData_const_&)_::_38_::TSTR_TransitionTextureSRVState577>
* __cdecl TRenderCommandTag<`UE::MovieGraph::Rendering::FMovieGraphDeferredPass::Render'::__l38::TSTR_TransitionTextureSRVState577>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UE::MovieGraph::Rendering::FMovieGraphDeferredPass::Render(FMovieGraphTraversalContext_const_&,FMovieGraphTimeStepData_const_&)_::_38_::TSTR_TransitionTextureSRVState577>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UE::MovieGraph::Rendering::FMovieGraphDeferredPass::Render(FMovieGraphTraversalContext_const_&,FMovieGraphTimeStepData_const_&)_::_38_::TSTR_TransitionTextureSRVState577>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UE::MovieGraph::Rendering::FMovieGraphDeferredPass::Render(FMovieGraphTraversalContext_const_&,FMovieGraphTimeStepData_const_&)_::_38_::TSTR_TransitionTextureSRVState577>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UE::MovieGraph::Rendering::FMovieGraphDeferredPass::Render(FMovieGraphTraversalContext_const_&,FMovieGraphTimeStepData_const_&)_::_38_::TSTR_TransitionTextureSRVState577>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"TransitionTextureSRVState");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"TransitionTextureSRVState",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UE::MovieGraph::Rendering::FMovieGraphDeferredPass::Render(FMovieGraphTraversalContext_const_&,FMovieGraphTimeStepData_const_&)_::_38_::TSTR_TransitionTextureSRVState577>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UE::MovieGraph::Rendering::FMovieGraphDeferredPass::Render(FMovieGraphTraversalContext_const_&,FMovieGraphTimeStepData_const_&)_::_38_::TSTR_TransitionTextureSRVState577>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"TransitionTextureSRVState");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UE::MovieGraph::Rendering::FMovieGraphDeferredPass::Render(FMovieGraphTraversalContext_const_&,FMovieGraphTimeStepData_const_&)_::_38_::TSTR_TransitionTextureSRVState577>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UE::MovieGraph::Rendering::FMovieGraphDeferredPass::Render(FMovieGraphTraversalContext_const_&,FMovieGraphTimeStepData_const_&)_::_38_::TSTR_TransitionTextureSRVState577>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"TransitionTextureSRVState","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_TransitionTextu;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14ddde9c0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_protected:_virtual_void___cdecl_UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl(FMoviePipelineRenderPassMetrics_const_&)_::_9_::TSTR_TransitionTextureSRVState677>
* __cdecl TRenderCommandTag<`UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl'::__l9::TSTR_TransitionTextureSRVState677>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_virtual_void___cdecl_UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl(FMoviePipelineRenderPassMetrics_const_&)_::_9_::TSTR_TransitionTextureSRVState677>_const_&___cdecl_TRenderCommandTag<_protected:_virtual_void___cdecl_UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl(FMoviePipelineRenderPassMetrics_const_&)_::_9_::TSTR_TransitionTextureSRVState677>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_virtual_void___cdecl_UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl(FMoviePipelineRenderPassMetrics_const_&)_::_9_::TSTR_TransitionTextureSRVState677>_const_&___cdecl_TRenderCommandTag<_protected:_virtual_void___cdecl_UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl(FMoviePipelineRenderPassMetrics_const_&)_::_9_::TSTR_TransitionTextureSRVState677>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"TransitionTextureSRVState");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"TransitionTextureSRVState",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_virtual_void___cdecl_UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl(FMoviePipelineRenderPassMetrics_const_&)_::_9_::TSTR_TransitionTextureSRVState677>_const_&___cdecl_TRenderCommandTag<_protected:_virtual_void___cdecl_UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl(FMoviePipelineRenderPassMetrics_const_&)_::_9_::TSTR_TransitionTextureSRVState677>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"TransitionTextureSRVState");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_virtual_void___cdecl_UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl(FMoviePipelineRenderPassMetrics_const_&)_::_9_::TSTR_TransitionTextureSRVState677>_const_&___cdecl_TRenderCommandTag<_protected:_virtual_void___cdecl_UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl(FMoviePipelineRenderPassMetrics_const_&)_::_9_::TSTR_TransitionTextureSRVState677>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"TransitionTextureSRVState","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_TransitionTextu;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14dddeb70

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_UE::MovieGraph::Rendering::FMovieGraphDeferredPanoramicPass::Render(FMovieGraphTraversalContext_const_&,FMovieGraphTimeStepData_const_&)_::_38_::TSTR_TransitionTextureSRVState707>
* __cdecl TRenderCommandTag<`UE::MovieGraph::Rendering::FMovieGraphDeferredPanoramicPass::Render'::__l38::TSTR_TransitionTextureSRVState707>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UE::MovieGraph::Rendering::FMovieGraphDeferredPanoramicPass::Render(FMovieGraphTraversalContext_const_&,FMovieGraphTimeStepData_const_&)_::_38_::TSTR_TransitionTextureSRVState707>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UE::MovieGraph::Rendering::FMovieGraphDeferredPanoramicPass::Render(FMovieGraphTraversalContext_const_&,FMovieGraphTimeStepData_const_&)_::_38_::TSTR_TransitionTextureSRVState707>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UE::MovieGraph::Rendering::FMovieGraphDeferredPanoramicPass::Render(FMovieGraphTraversalContext_const_&,FMovieGraphTimeStepData_const_&)_::_38_::TSTR_TransitionTextureSRVState707>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UE::MovieGraph::Rendering::FMovieGraphDeferredPanoramicPass::Render(FMovieGraphTraversalContext_const_&,FMovieGraphTimeStepData_const_&)_::_38_::TSTR_TransitionTextureSRVState707>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"TransitionTextureSRVState");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"TransitionTextureSRVState",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UE::MovieGraph::Rendering::FMovieGraphDeferredPanoramicPass::Render(FMovieGraphTraversalContext_const_&,FMovieGraphTimeStepData_const_&)_::_38_::TSTR_TransitionTextureSRVState707>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UE::MovieGraph::Rendering::FMovieGraphDeferredPanoramicPass::Render(FMovieGraphTraversalContext_const_&,FMovieGraphTimeStepData_const_&)_::_38_::TSTR_TransitionTextureSRVState707>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"TransitionTextureSRVState");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UE::MovieGraph::Rendering::FMovieGraphDeferredPanoramicPass::Render(FMovieGraphTraversalContext_const_&,FMovieGraphTimeStepData_const_&)_::_38_::TSTR_TransitionTextureSRVState707>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UE::MovieGraph::Rendering::FMovieGraphDeferredPanoramicPass::Render(FMovieGraphTraversalContext_const_&,FMovieGraphTimeStepData_const_&)_::_38_::TSTR_TransitionTextureSRVState707>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"TransitionTextureSRVState","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_TransitionTextu;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14ddded20

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_protected:_virtual_void___cdecl_UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl(FMoviePipelineRenderPassMetrics_const_&)_::_87_::TSTR_TransitionTextureSRVState824>
* __cdecl TRenderCommandTag<`UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl'::__l87::TSTR_TransitionTextureSRVState824>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_virtual_void___cdecl_UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl(FMoviePipelineRenderPassMetrics_const_&)_::_87_::TSTR_TransitionTextureSRVState824>_const_&___cdecl_TRenderCommandTag<_protected:_virtual_void___cdecl_UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl(FMoviePipelineRenderPassMetrics_const_&)_::_87_::TSTR_TransitionTextureSRVState824>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_virtual_void___cdecl_UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl(FMoviePipelineRenderPassMetrics_const_&)_::_87_::TSTR_TransitionTextureSRVState824>_const_&___cdecl_TRenderCommandTag<_protected:_virtual_void___cdecl_UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl(FMoviePipelineRenderPassMetrics_const_&)_::_87_::TSTR_TransitionTextureSRVState824>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"TransitionTextureSRVState");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"TransitionTextureSRVState",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_virtual_void___cdecl_UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl(FMoviePipelineRenderPassMetrics_const_&)_::_87_::TSTR_TransitionTextureSRVState824>_const_&___cdecl_TRenderCommandTag<_protected:_virtual_void___cdecl_UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl(FMoviePipelineRenderPassMetrics_const_&)_::_87_::TSTR_TransitionTextureSRVState824>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"TransitionTextureSRVState");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_virtual_void___cdecl_UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl(FMoviePipelineRenderPassMetrics_const_&)_::_87_::TSTR_TransitionTextureSRVState824>_const_&___cdecl_TRenderCommandTag<_protected:_virtual_void___cdecl_UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl(FMoviePipelineRenderPassMetrics_const_&)_::_87_::TSTR_TransitionTextureSRVState824>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"TransitionTextureSRVState","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_TransitionTextu;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

