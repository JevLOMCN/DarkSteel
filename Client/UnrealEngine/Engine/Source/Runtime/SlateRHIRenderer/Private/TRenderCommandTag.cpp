// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 17

// Get @ 14600a580

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::ClearScenes(void)_::_5_::TSTR_ClearScenesOnPolicy1607>
* __cdecl TRenderCommandTag<`FSlateRHIRenderer::ClearScenes'::__l5::TSTR_ClearScenesOnPolicy1607>::
          Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::ClearScenes(void)_::_5_::TSTR_ClearScenesOnPolicy1607>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::ClearScenes(void)_::_5_::TSTR_ClearScenesOnPolicy1607>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::ClearScenes(void)_::_5_::TSTR_ClearScenesOnPolicy1607>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::ClearScenes(void)_::_5_::TSTR_ClearScenesOnPolicy1607>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ClearScenesOnPolicy");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ClearScenesOnPolicy",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::ClearScenes(void)_::_5_::TSTR_ClearScenesOnPolicy1607>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::ClearScenes(void)_::_5_::TSTR_ClearScenesOnPolicy1607>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ClearScenesOnPolicy");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::ClearScenes(void)_::_5_::TSTR_ClearScenesOnPolicy1607>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::ClearScenes(void)_::_5_::TSTR_ClearScenesOnPolicy1607>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ClearScenesOnPolicy",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_ClearScenesOnPo;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14600a730

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::AddWidgetRendererUpdate(FRenderThreadUpdateContext_const_&,bool)_::_7_::TSTR_DrawWidgetRendererImmediate1726>
* __cdecl TRenderCommandTag<`FSlateRHIRenderer::AddWidgetRendererUpdate'::__l7::TSTR_DrawWidgetRendererImmediate1726>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::AddWidgetRendererUpdate(FRenderThreadUpdateContext_const_&,bool)_::_7_::TSTR_DrawWidgetRendererImmediate1726>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::AddWidgetRendererUpdate(FRenderThreadUpdateContext_const_&,bool)_::_7_::TSTR_DrawWidgetRendererImmediate1726>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::AddWidgetRendererUpdate(FRenderThreadUpdateContext_const_&,bool)_::_7_::TSTR_DrawWidgetRendererImmediate1726>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::AddWidgetRendererUpdate(FRenderThreadUpdateContext_const_&,bool)_::_7_::TSTR_DrawWidgetRendererImmediate1726>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"DrawWidgetRendererImmediate");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"DrawWidgetRendererImmediate",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::AddWidgetRendererUpdate(FRenderThreadUpdateContext_const_&,bool)_::_7_::TSTR_DrawWidgetRendererImmediate1726>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::AddWidgetRendererUpdate(FRenderThreadUpdateContext_const_&,bool)_::_7_::TSTR_DrawWidgetRendererImmediate1726>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"DrawWidgetRendererImmediate");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::AddWidgetRendererUpdate(FRenderThreadUpdateContext_const_&,bool)_::_7_::TSTR_DrawWidgetRendererImmediate1726>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::AddWidgetRendererUpdate(FRenderThreadUpdateContext_const_&,bool)_::_7_::TSTR_DrawWidgetRendererImmediate1726>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"DrawWidgetRendererImmediate","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_DrawWidgetRende;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14600a8e0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_FSlateRHIRenderer::ResizeViewportIfNeeded(FSlateViewportInfo_*,UE::Math::TIntPoint<int>,bool,SWindow_*)_::_9_::TSTR_FAsyncCleanup407>
* __cdecl TRenderCommandTag<`FSlateRHIRenderer::ResizeViewportIfNeeded'::__l9::TSTR_FAsyncCleanup407>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FSlateRHIRenderer::ResizeViewportIfNeeded(FSlateViewportInfo_*,UE::Math::TIntPoint<int>,bool,SWindow_*)_::_9_::TSTR_FAsyncCleanup407>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FSlateRHIRenderer::ResizeViewportIfNeeded(FSlateViewportInfo_*,UE::Math::TIntPoint<int>,bool,SWindow_*)_::_9_::TSTR_FAsyncCleanup407>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FSlateRHIRenderer::ResizeViewportIfNeeded(FSlateViewportInfo_*,UE::Math::TIntPoint<int>,bool,SWindow_*)_::_9_::TSTR_FAsyncCleanup407>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FSlateRHIRenderer::ResizeViewportIfNeeded(FSlateViewportInfo_*,UE::Math::TIntPoint<int>,bool,SWindow_*)_::_9_::TSTR_FAsyncCleanup407>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FAsyncCleanup");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FAsyncCleanup",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FSlateRHIRenderer::ResizeViewportIfNeeded(FSlateViewportInfo_*,UE::Math::TIntPoint<int>,bool,SWindow_*)_::_9_::TSTR_FAsyncCleanup407>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FSlateRHIRenderer::ResizeViewportIfNeeded(FSlateViewportInfo_*,UE::Math::TIntPoint<int>,bool,SWindow_*)_::_9_::TSTR_FAsyncCleanup407>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FAsyncCleanup");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FSlateRHIRenderer::ResizeViewportIfNeeded(FSlateViewportInfo_*,UE::Math::TIntPoint<int>,bool,SWindow_*)_::_9_::TSTR_FAsyncCleanup407>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FSlateRHIRenderer::ResizeViewportIfNeeded(FSlateViewportInfo_*,UE::Math::TIntPoint<int>,bool,SWindow_*)_::_9_::TSTR_FAsyncCleanup407>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FAsyncCleanup",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FAsyncCleanup;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14600aa90

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FSlatePostBufferBlurProxy::OnUpdateValuesRenderThread(void)_::_16_::TSTR_FUpdateValuesRenderThreadFX_Blur64>
* __cdecl TRenderCommandTag<`FSlatePostBufferBlurProxy::OnUpdateValuesRenderThread'::__l16::TSTR_FUpdateValuesRenderThreadFX_Blur64>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSlatePostBufferBlurProxy::OnUpdateValuesRenderThread(void)_::_16_::TSTR_FUpdateValuesRenderThreadFX_Blur64>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSlatePostBufferBlurProxy::OnUpdateValuesRenderThread(void)_::_16_::TSTR_FUpdateValuesRenderThreadFX_Blur64>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSlatePostBufferBlurProxy::OnUpdateValuesRenderThread(void)_::_16_::TSTR_FUpdateValuesRenderThreadFX_Blur64>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSlatePostBufferBlurProxy::OnUpdateValuesRenderThread(void)_::_16_::TSTR_FUpdateValuesRenderThreadFX_Blur64>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FUpdateValuesRenderThreadFX_Blur");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FUpdateValuesRenderThreadFX_Blur",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSlatePostBufferBlurProxy::OnUpdateValuesRenderThread(void)_::_16_::TSTR_FUpdateValuesRenderThreadFX_Blur64>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSlatePostBufferBlurProxy::OnUpdateValuesRenderThread(void)_::_16_::TSTR_FUpdateValuesRenderThreadFX_Blur64>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FUpdateValuesRenderThreadFX_Blur");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSlatePostBufferBlurProxy::OnUpdateValuesRenderThread(void)_::_16_::TSTR_FUpdateValuesRenderThreadFX_Blur64>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSlatePostBufferBlurProxy::OnUpdateValuesRenderThread(void)_::_16_::TSTR_FUpdateValuesRenderThreadFX_Blur64>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FUpdateValuesRenderThreadFX_Blur","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FUpdateValuesRe;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14600ac40

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_class_TSharedPtr<FSlateDynamicTextureResource,1>___cdecl_FSlateRHIResourceManager::MakeDynamicTextureResource(FName,TSharedRef<FSlateTextureData,1>)_::_2_::TSTR_InitNewSlateDynamicTextureResource735>
* __cdecl TRenderCommandTag<`FSlateRHIResourceManager::MakeDynamicTextureResource'::__l2::TSTR_InitNewSlateDynamicTextureResource735>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_class_TSharedPtr<FSlateDynamicTextureResource,1>___cdecl_FSlateRHIResourceManager::MakeDynamicTextureResource(FName,TSharedRef<FSlateTextureData,1>)_::_2_::TSTR_InitNewSlateDynamicTextureResource735>_const_&___cdecl_TRenderCommandTag<_public:_class_TSharedPtr<FSlateDynamicTextureResource,1>___cdecl_FSlateRHIResourceManager::MakeDynamicTextureResource(FName,TSharedRef<FSlateTextureData,1>)_::_2_::TSTR_InitNewSlateDynamicTextureResource735>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_class_TSharedPtr<FSlateDynamicTextureResource,1>___cdecl_FSlateRHIResourceManager::MakeDynamicTextureResource(FName,TSharedRef<FSlateTextureData,1>)_::_2_::TSTR_InitNewSlateDynamicTextureResource735>_const_&___cdecl_TRenderCommandTag<_public:_class_TSharedPtr<FSlateDynamicTextureResource,1>___cdecl_FSlateRHIResourceManager::MakeDynamicTextureResource(FName,TSharedRef<FSlateTextureData,1>)_::_2_::TSTR_InitNewSlateDynamicTextureResource735>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"InitNewSlateDynamicTextureResource");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                   L"InitNewSlateDynamicTextureResource","STATGROUP_RenderThreadCommands",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_class_TSharedPtr<FSlateDynamicTextureResource,1>___cdecl_FSlateRHIResourceManager::MakeDynamicTextureResource(FName,TSharedRef<FSlateTextureData,1>)_::_2_::TSTR_InitNewSlateDynamicTextureResource735>_const_&___cdecl_TRenderCommandTag<_public:_class_TSharedPtr<FSlateDynamicTextureResource,1>___cdecl_FSlateRHIResourceManager::MakeDynamicTextureResource(FName,TSharedRef<FSlateTextureData,1>)_::_2_::TSTR_InitNewSlateDynamicTextureResource735>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"InitNewSlateDynamicTextureResource");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_class_TSharedPtr<FSlateDynamicTextureResource,1>___cdecl_FSlateRHIResourceManager::MakeDynamicTextureResource(FName,TSharedRef<FSlateTextureData,1>)_::_2_::TSTR_InitNewSlateDynamicTextureResource735>_const_&___cdecl_TRenderCommandTag<_public:_class_TSharedPtr<FSlateDynamicTextureResource,1>___cdecl_FSlateRHIResourceManager::MakeDynamicTextureResource(FName,TSharedRef<FSlateTextureData,1>)_::_2_::TSTR_InitNewSlateDynamicTextureResource735>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"InitNewSlateDynamicTextureResource","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_InitNewSlateDyn;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14600adf0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_int___cdecl_FSlateRHIRenderer::RegisterCurrentScene(FSceneInterface_*)_::_18_::TSTR_RegisterCurrentSceneOnPolicy1575>
* __cdecl TRenderCommandTag<`FSlateRHIRenderer::RegisterCurrentScene'::__l18::TSTR_RegisterCurrentSceneOnPolicy1575>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_int___cdecl_FSlateRHIRenderer::RegisterCurrentScene(FSceneInterface_*)_::_18_::TSTR_RegisterCurrentSceneOnPolicy1575>_const_&___cdecl_TRenderCommandTag<_public:_virtual_int___cdecl_FSlateRHIRenderer::RegisterCurrentScene(FSceneInterface_*)_::_18_::TSTR_RegisterCurrentSceneOnPolicy1575>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_int___cdecl_FSlateRHIRenderer::RegisterCurrentScene(FSceneInterface_*)_::_18_::TSTR_RegisterCurrentSceneOnPolicy1575>_const_&___cdecl_TRenderCommandTag<_public:_virtual_int___cdecl_FSlateRHIRenderer::RegisterCurrentScene(FSceneInterface_*)_::_18_::TSTR_RegisterCurrentSceneOnPolicy1575>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"RegisterCurrentSceneOnPolicy");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"RegisterCurrentSceneOnPolicy",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_int___cdecl_FSlateRHIRenderer::RegisterCurrentScene(FSceneInterface_*)_::_18_::TSTR_RegisterCurrentSceneOnPolicy1575>_const_&___cdecl_TRenderCommandTag<_public:_virtual_int___cdecl_FSlateRHIRenderer::RegisterCurrentScene(FSceneInterface_*)_::_18_::TSTR_RegisterCurrentSceneOnPolicy1575>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"RegisterCurrentSceneOnPolicy");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_int___cdecl_FSlateRHIRenderer::RegisterCurrentScene(FSceneInterface_*)_::_18_::TSTR_RegisterCurrentSceneOnPolicy1575>_const_&___cdecl_TRenderCommandTag<_public:_virtual_int___cdecl_FSlateRHIRenderer::RegisterCurrentScene(FSceneInterface_*)_::_18_::TSTR_RegisterCurrentSceneOnPolicy1575>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"RegisterCurrentSceneOnPolicy","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_RegisterCurrent;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14600afa0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_FSlateRHIRenderer::FlushPendingDeletes(void)_::_5_::TSTR_SlateDeferredDelete1638>
* __cdecl TRenderCommandTag<`FSlateRHIRenderer::FlushPendingDeletes'::__l5::TSTR_SlateDeferredDelete1638>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FSlateRHIRenderer::FlushPendingDeletes(void)_::_5_::TSTR_SlateDeferredDelete1638>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FSlateRHIRenderer::FlushPendingDeletes(void)_::_5_::TSTR_SlateDeferredDelete1638>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FSlateRHIRenderer::FlushPendingDeletes(void)_::_5_::TSTR_SlateDeferredDelete1638>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FSlateRHIRenderer::FlushPendingDeletes(void)_::_5_::TSTR_SlateDeferredDelete1638>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SlateDeferredDelete");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"SlateDeferredDelete",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FSlateRHIRenderer::FlushPendingDeletes(void)_::_5_::TSTR_SlateDeferredDelete1638>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FSlateRHIRenderer::FlushPendingDeletes(void)_::_5_::TSTR_SlateDeferredDelete1638>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SlateDeferredDelete");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FSlateRHIRenderer::FlushPendingDeletes(void)_::_5_::TSTR_SlateDeferredDelete1638>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FSlateRHIRenderer::FlushPendingDeletes(void)_::_5_::TSTR_SlateDeferredDelete1638>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"SlateDeferredDelete",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_SlateDeferredDe;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14600b150

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_FSlateRHIRenderer::DrawWindows_Private(FSlateDrawBuffer_&)_::_76_::TSTR_SlateDrawWindowsCommand1350>
* __cdecl TRenderCommandTag<`FSlateRHIRenderer::DrawWindows_Private'::__l76::TSTR_SlateDrawWindowsCommand1350>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FSlateRHIRenderer::DrawWindows_Private(FSlateDrawBuffer_&)_::_76_::TSTR_SlateDrawWindowsCommand1350>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FSlateRHIRenderer::DrawWindows_Private(FSlateDrawBuffer_&)_::_76_::TSTR_SlateDrawWindowsCommand1350>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FSlateRHIRenderer::DrawWindows_Private(FSlateDrawBuffer_&)_::_76_::TSTR_SlateDrawWindowsCommand1350>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FSlateRHIRenderer::DrawWindows_Private(FSlateDrawBuffer_&)_::_76_::TSTR_SlateDrawWindowsCommand1350>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SlateDrawWindowsCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"SlateDrawWindowsCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FSlateRHIRenderer::DrawWindows_Private(FSlateDrawBuffer_&)_::_76_::TSTR_SlateDrawWindowsCommand1350>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FSlateRHIRenderer::DrawWindows_Private(FSlateDrawBuffer_&)_::_76_::TSTR_SlateDrawWindowsCommand1350>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SlateDrawWindowsCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FSlateRHIRenderer::DrawWindows_Private(FSlateDrawBuffer_&)_::_76_::TSTR_SlateDrawWindowsCommand1350>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FSlateRHIRenderer::DrawWindows_Private(FSlateDrawBuffer_&)_::_76_::TSTR_SlateDrawWindowsCommand1350>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"SlateDrawWindowsCommand"
                             ,"STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_SlateDrawWindow;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14600b300

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::BeginFrame(void)const_::_2_::TSTR_SlateRHIBeginFrame1453>
* __cdecl TRenderCommandTag<`FSlateRHIRenderer::BeginFrame'::__l2::TSTR_SlateRHIBeginFrame1453>::Get
                    (void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::BeginFrame(void)const_::_2_::TSTR_SlateRHIBeginFrame1453>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::BeginFrame(void)const_::_2_::TSTR_SlateRHIBeginFrame1453>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::BeginFrame(void)const_::_2_::TSTR_SlateRHIBeginFrame1453>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::BeginFrame(void)const_::_2_::TSTR_SlateRHIBeginFrame1453>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SlateRHIBeginFrame");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"SlateRHIBeginFrame",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::BeginFrame(void)const_::_2_::TSTR_SlateRHIBeginFrame1453>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::BeginFrame(void)const_::_2_::TSTR_SlateRHIBeginFrame1453>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SlateRHIBeginFrame");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::BeginFrame(void)const_::_2_::TSTR_SlateRHIBeginFrame1453>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::BeginFrame(void)const_::_2_::TSTR_SlateRHIBeginFrame1453>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"SlateRHIBeginFrame",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_SlateRHIBeginFr;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14600b4b0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::EndFrame(void)const_::_2_::TSTR_SlateRHIEndFrame1462>
* __cdecl TRenderCommandTag<`FSlateRHIRenderer::EndFrame'::__l2::TSTR_SlateRHIEndFrame1462>::Get
                    (void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::EndFrame(void)const_::_2_::TSTR_SlateRHIEndFrame1462>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::EndFrame(void)const_::_2_::TSTR_SlateRHIEndFrame1462>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::EndFrame(void)const_::_2_::TSTR_SlateRHIEndFrame1462>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::EndFrame(void)const_::_2_::TSTR_SlateRHIEndFrame1462>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SlateRHIEndFrame");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"SlateRHIEndFrame",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::EndFrame(void)const_::_2_::TSTR_SlateRHIEndFrame1462>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::EndFrame(void)const_::_2_::TSTR_SlateRHIEndFrame1462>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SlateRHIEndFrame");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::EndFrame(void)const_::_2_::TSTR_SlateRHIEndFrame1462>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::EndFrame(void)const_::_2_::TSTR_SlateRHIEndFrame1462>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"SlateRHIEndFrame",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_SlateRHIEndFram;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14600b660

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::ReleaseDrawBuffer(FSlateDrawBuffer_&)_::_2_::TSTR_SlateReleaseDrawBufferCommand334>
* __cdecl TRenderCommandTag<`FSlateRHIRenderer::ReleaseDrawBuffer'::__l2::TSTR_SlateReleaseDrawBufferCommand334>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::ReleaseDrawBuffer(FSlateDrawBuffer_&)_::_2_::TSTR_SlateReleaseDrawBufferCommand334>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::ReleaseDrawBuffer(FSlateDrawBuffer_&)_::_2_::TSTR_SlateReleaseDrawBufferCommand334>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::ReleaseDrawBuffer(FSlateDrawBuffer_&)_::_2_::TSTR_SlateReleaseDrawBufferCommand334>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::ReleaseDrawBuffer(FSlateDrawBuffer_&)_::_2_::TSTR_SlateReleaseDrawBufferCommand334>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SlateReleaseDrawBufferCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"SlateReleaseDrawBufferCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::ReleaseDrawBuffer(FSlateDrawBuffer_&)_::_2_::TSTR_SlateReleaseDrawBufferCommand334>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::ReleaseDrawBuffer(FSlateDrawBuffer_&)_::_2_::TSTR_SlateReleaseDrawBufferCommand334>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SlateReleaseDrawBufferCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::ReleaseDrawBuffer(FSlateDrawBuffer_&)_::_2_::TSTR_SlateReleaseDrawBufferCommand334>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateRHIRenderer::ReleaseDrawBuffer(FSlateDrawBuffer_&)_::_2_::TSTR_SlateReleaseDrawBufferCommand334>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"SlateReleaseDrawBufferCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_SlateReleaseDra;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14600b810

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FSlate3DRenderer::ReleaseDrawBuffer(FSlateDrawBuffer_&)_::_2_::TSTR_SlateReleaseDrawBufferCommand76>
* __cdecl TRenderCommandTag<`FSlate3DRenderer::ReleaseDrawBuffer'::__l2::TSTR_SlateReleaseDrawBufferCommand76>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSlate3DRenderer::ReleaseDrawBuffer(FSlateDrawBuffer_&)_::_2_::TSTR_SlateReleaseDrawBufferCommand76>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSlate3DRenderer::ReleaseDrawBuffer(FSlateDrawBuffer_&)_::_2_::TSTR_SlateReleaseDrawBufferCommand76>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSlate3DRenderer::ReleaseDrawBuffer(FSlateDrawBuffer_&)_::_2_::TSTR_SlateReleaseDrawBufferCommand76>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSlate3DRenderer::ReleaseDrawBuffer(FSlateDrawBuffer_&)_::_2_::TSTR_SlateReleaseDrawBufferCommand76>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SlateReleaseDrawBufferCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"SlateReleaseDrawBufferCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSlate3DRenderer::ReleaseDrawBuffer(FSlateDrawBuffer_&)_::_2_::TSTR_SlateReleaseDrawBufferCommand76>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSlate3DRenderer::ReleaseDrawBuffer(FSlateDrawBuffer_&)_::_2_::TSTR_SlateReleaseDrawBufferCommand76>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SlateReleaseDrawBufferCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSlate3DRenderer::ReleaseDrawBuffer(FSlateDrawBuffer_&)_::_2_::TSTR_SlateReleaseDrawBufferCommand76>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSlate3DRenderer::ReleaseDrawBuffer(FSlateDrawBuffer_&)_::_2_::TSTR_SlateReleaseDrawBufferCommand76>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"SlateReleaseDrawBufferCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_SlateReleaseDra;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14600b9c0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual___cdecl_FSlateUpdatableInstanceBuffer::~FSlateUpdatableInstanceBuffer(void)_::_2_::TSTR_SlateUpdatableInstanceBuffer_DeleteProxy16>
* __cdecl TRenderCommandTag<`FSlateUpdatableInstanceBuffer::~FSlateUpdatableInstanceBuffer'::__l2::TSTR_SlateUpdatableInstanceBuffer_DeleteProxy16>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual___cdecl_FSlateUpdatableInstanceBuffer::~FSlateUpdatableInstanceBuffer(void)_::_2_::TSTR_SlateUpdatableInstanceBuffer_DeleteProxy16>_const_&___cdecl_TRenderCommandTag<_public:_virtual___cdecl_FSlateUpdatableInstanceBuffer::~FSlateUpdatableInstanceBuffer(void)_::_2_::TSTR_SlateUpdatableInstanceBuffer_DeleteProxy16>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual___cdecl_FSlateUpdatableInstanceBuffer::~FSlateUpdatableInstanceBuffer(void)_::_2_::TSTR_SlateUpdatableInstanceBuffer_DeleteProxy16>_const_&___cdecl_TRenderCommandTag<_public:_virtual___cdecl_FSlateUpdatableInstanceBuffer::~FSlateUpdatableInstanceBuffer(void)_::_2_::TSTR_SlateUpdatableInstanceBuffer_DeleteProxy16>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SlateUpdatableInstanceBuffer_DeleteProxy");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                   L"SlateUpdatableInstanceBuffer_DeleteProxy","STATGROUP_RenderThreadCommands",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual___cdecl_FSlateUpdatableInstanceBuffer::~FSlateUpdatableInstanceBuffer(void)_::_2_::TSTR_SlateUpdatableInstanceBuffer_DeleteProxy16>_const_&___cdecl_TRenderCommandTag<_public:_virtual___cdecl_FSlateUpdatableInstanceBuffer::~FSlateUpdatableInstanceBuffer(void)_::_2_::TSTR_SlateUpdatableInstanceBuffer_DeleteProxy16>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SlateUpdatableInstanceBuffer_DeleteProxy");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual___cdecl_FSlateUpdatableInstanceBuffer::~FSlateUpdatableInstanceBuffer(void)_::_2_::TSTR_SlateUpdatableInstanceBuffer_DeleteProxy16>_const_&___cdecl_TRenderCommandTag<_public:_virtual___cdecl_FSlateUpdatableInstanceBuffer::~FSlateUpdatableInstanceBuffer(void)_::_2_::TSTR_SlateUpdatableInstanceBuffer_DeleteProxy16>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"SlateUpdatableInstanceBuffer_DeleteProxy",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_SlateUpdatableI;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14600bb70

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_virtual_void___cdecl_FSlateUpdatableInstanceBuffer::Update(TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_&)_::_12_::TSTR_SlateUpdatableInstanceBuffer_Update33>
* __cdecl TRenderCommandTag<`FSlateUpdatableInstanceBuffer::Update'::__l12::TSTR_SlateUpdatableInstanceBuffer_Update33>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_virtual_void___cdecl_FSlateUpdatableInstanceBuffer::Update(TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_&)_::_12_::TSTR_SlateUpdatableInstanceBuffer_Update33>_const_&___cdecl_TRenderCommandTag<_private:_virtual_void___cdecl_FSlateUpdatableInstanceBuffer::Update(TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_&)_::_12_::TSTR_SlateUpdatableInstanceBuffer_Update33>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_virtual_void___cdecl_FSlateUpdatableInstanceBuffer::Update(TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_&)_::_12_::TSTR_SlateUpdatableInstanceBuffer_Update33>_const_&___cdecl_TRenderCommandTag<_private:_virtual_void___cdecl_FSlateUpdatableInstanceBuffer::Update(TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_&)_::_12_::TSTR_SlateUpdatableInstanceBuffer_Update33>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SlateUpdatableInstanceBuffer_Update");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                   L"SlateUpdatableInstanceBuffer_Update","STATGROUP_RenderThreadCommands",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_virtual_void___cdecl_FSlateUpdatableInstanceBuffer::Update(TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_&)_::_12_::TSTR_SlateUpdatableInstanceBuffer_Update33>_const_&___cdecl_TRenderCommandTag<_private:_virtual_void___cdecl_FSlateUpdatableInstanceBuffer::Update(TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_&)_::_12_::TSTR_SlateUpdatableInstanceBuffer_Update33>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SlateUpdatableInstanceBuffer_Update");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_virtual_void___cdecl_FSlateUpdatableInstanceBuffer::Update(TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_&)_::_12_::TSTR_SlateUpdatableInstanceBuffer_Update33>_const_&___cdecl_TRenderCommandTag<_private:_virtual_void___cdecl_FSlateUpdatableInstanceBuffer::Update(TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_&)_::_12_::TSTR_SlateUpdatableInstanceBuffer_Update33>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"SlateUpdatableInstanceBuffer_Update","STATGROUP_RenderThreadCommands"
                             ,"STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_SlateUpdatableI;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14600bd20

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FSlateTextureAtlasRHI::ConditionalUpdateTexture(void)_::_6_::TSTR_SlateUpdateAtlasTextureCommand88>
* __cdecl TRenderCommandTag<`FSlateTextureAtlasRHI::ConditionalUpdateTexture'::__l6::TSTR_SlateUpdateAtlasTextureCommand88>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateTextureAtlasRHI::ConditionalUpdateTexture(void)_::_6_::TSTR_SlateUpdateAtlasTextureCommand88>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateTextureAtlasRHI::ConditionalUpdateTexture(void)_::_6_::TSTR_SlateUpdateAtlasTextureCommand88>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateTextureAtlasRHI::ConditionalUpdateTexture(void)_::_6_::TSTR_SlateUpdateAtlasTextureCommand88>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateTextureAtlasRHI::ConditionalUpdateTexture(void)_::_6_::TSTR_SlateUpdateAtlasTextureCommand88>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SlateUpdateAtlasTextureCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"SlateUpdateAtlasTextureCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateTextureAtlasRHI::ConditionalUpdateTexture(void)_::_6_::TSTR_SlateUpdateAtlasTextureCommand88>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateTextureAtlasRHI::ConditionalUpdateTexture(void)_::_6_::TSTR_SlateUpdateAtlasTextureCommand88>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SlateUpdateAtlasTextureCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateTextureAtlasRHI::ConditionalUpdateTexture(void)_::_6_::TSTR_SlateUpdateAtlasTextureCommand88>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateTextureAtlasRHI::ConditionalUpdateTexture(void)_::_6_::TSTR_SlateUpdateAtlasTextureCommand88>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"SlateUpdateAtlasTextureCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_SlateUpdateAtla;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14600bed0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FSlateFontAtlasRHI::ConditionalUpdateTexture(void)_::_10_::TSTR_SlateUpdateFontAtlasTextureCommand157>
* __cdecl TRenderCommandTag<`FSlateFontAtlasRHI::ConditionalUpdateTexture'::__l10::TSTR_SlateUpdateFontAtlasTextureCommand157>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateFontAtlasRHI::ConditionalUpdateTexture(void)_::_10_::TSTR_SlateUpdateFontAtlasTextureCommand157>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateFontAtlasRHI::ConditionalUpdateTexture(void)_::_10_::TSTR_SlateUpdateFontAtlasTextureCommand157>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateFontAtlasRHI::ConditionalUpdateTexture(void)_::_10_::TSTR_SlateUpdateFontAtlasTextureCommand157>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateFontAtlasRHI::ConditionalUpdateTexture(void)_::_10_::TSTR_SlateUpdateFontAtlasTextureCommand157>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SlateUpdateFontAtlasTextureCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                   L"SlateUpdateFontAtlasTextureCommand","STATGROUP_RenderThreadCommands",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateFontAtlasRHI::ConditionalUpdateTexture(void)_::_10_::TSTR_SlateUpdateFontAtlasTextureCommand157>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateFontAtlasRHI::ConditionalUpdateTexture(void)_::_10_::TSTR_SlateUpdateFontAtlasTextureCommand157>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SlateUpdateFontAtlasTextureCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateFontAtlasRHI::ConditionalUpdateTexture(void)_::_10_::TSTR_SlateUpdateFontAtlasTextureCommand157>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FSlateFontAtlasRHI::ConditionalUpdateTexture(void)_::_10_::TSTR_SlateUpdateFontAtlasTextureCommand157>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"SlateUpdateFontAtlasTextureCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_SlateUpdateFont;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14600c080

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:___cdecl_FSlateFontTextureRHI::FSlateFontTextureRHI(unsigned_int,unsigned_int,ESlateFontAtlasContentType,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&)_::_7_::TSTR_SlateUpdateFontTextureCommand189>
* __cdecl TRenderCommandTag<`FSlateFontTextureRHI::FSlateFontTextureRHI'::__l7::TSTR_SlateUpdateFontTextureCommand189>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FSlateFontTextureRHI::FSlateFontTextureRHI(unsigned_int,unsigned_int,ESlateFontAtlasContentType,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&)_::_7_::TSTR_SlateUpdateFontTextureCommand189>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FSlateFontTextureRHI::FSlateFontTextureRHI(unsigned_int,unsigned_int,ESlateFontAtlasContentType,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&)_::_7_::TSTR_SlateUpdateFontTextureCommand189>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FSlateFontTextureRHI::FSlateFontTextureRHI(unsigned_int,unsigned_int,ESlateFontAtlasContentType,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&)_::_7_::TSTR_SlateUpdateFontTextureCommand189>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FSlateFontTextureRHI::FSlateFontTextureRHI(unsigned_int,unsigned_int,ESlateFontAtlasContentType,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&)_::_7_::TSTR_SlateUpdateFontTextureCommand189>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SlateUpdateFontTextureCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"SlateUpdateFontTextureCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FSlateFontTextureRHI::FSlateFontTextureRHI(unsigned_int,unsigned_int,ESlateFontAtlasContentType,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&)_::_7_::TSTR_SlateUpdateFontTextureCommand189>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FSlateFontTextureRHI::FSlateFontTextureRHI(unsigned_int,unsigned_int,ESlateFontAtlasContentType,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&)_::_7_::TSTR_SlateUpdateFontTextureCommand189>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"SlateUpdateFontTextureCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FSlateFontTextureRHI::FSlateFontTextureRHI(unsigned_int,unsigned_int,ESlateFontAtlasContentType,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&)_::_7_::TSTR_SlateUpdateFontTextureCommand189>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FSlateFontTextureRHI::FSlateFontTextureRHI(unsigned_int,unsigned_int,ESlateFontAtlasContentType,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&)_::_7_::TSTR_SlateUpdateFontTextureCommand189>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"SlateUpdateFontTextureCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_SlateUpdateFont;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

