// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WebMMedia
// Functions: 55

// StaticResource'' @ 141452f50

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIBlendState> this;
  TRefCountPtr<FRHIBlendState> TVar1;
  FRHIResource *local_res8;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__0P__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
  ;
  TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource.StateRHI.Reference = (FRHIBlendState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    TVar1 = TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>
            ::CreateRHI();
    this = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHIBlendState *)
        &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI) {
                    /* WARNING: Load size is inaccurate */
      TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference = *TVar1.Reference;
      *(undefined8 *)TVar1.Reference = 0;
      if (this.Reference != (FRHIBlendState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 141453010

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIDepthStencilState> this;
  TRefCountPtr<FRHIDepthStencilState> TVar1;
  FRHIResource *local_res8;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticDepthStencilState__0A__06_0A__06_0A__0A__0A__0A__06_0A__0A__0A__0PP__0PP___V__TRefCountPtr_VFRHIDepthStencilState____PEAVFRHIDepthStencilState____6B_
  ;
  TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
  ::StaticResource.StateRHI.Reference = (FRHIDepthStencilState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    TVar1 = TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>::CreateRHI();
    this = TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHIDepthStencilState *)
        &TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource.StateRHI) {
      TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
      ::StaticResource.StateRHI.Reference = (FRHIDepthStencilState *)(TVar1.Reference)->_padding_;
      (TVar1.Reference)->_padding_ = 0;
      if (this.Reference != (FRHIDepthStencilState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 1414530d0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIRasterizerState> this;
  TRefCountPtr<FRHIRasterizerState> TVar1;
  FRHIResource *local_res8;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticRasterizerState__01_0A__0A__00__V__TRefCountPtr_VFRHIRasterizerState____PEAVFRHIRasterizerState____6B_
  ;
  TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource.StateRHI.Reference = (FRHIRasterizerState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    TVar1 = TStaticRasterizerState<2,0,0,1>::CreateRHI();
    this = TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHIRasterizerState *)
        &TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
         ::StaticResource.StateRHI) {
                    /* WARNING: Load size is inaccurate */
      TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
      ::StaticResource.StateRHI.Reference = *TVar1.Reference;
      *(undefined8 *)TVar1.Reference = 0;
      if (this.Reference != (FRHIRasterizerState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
         ::StaticResource__);
  return;
}

// `dynamic_initializer_for_'GMoviePlayerResources'' @ 141453190

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__GMoviePlayerResources__(void)

{
  code *pcVar1;
  bool bVar2;
  FRHICommandListBase *pFVar3;
  
  FRenderResource::FRenderResource((FRenderResource *)&GMoviePlayerResources);
  GMoviePlayerResources._0_8_ = &TGlobalResource<FMoviePlaybackResources,1>::_vftable_;
  GMoviePlayerResources._32_8_ = 0;
  GMoviePlayerResources._40_8_ = 0;
  if (GMoviePlayerResources._24_4_ != -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderResource.h"
                       ,0xb9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  GMoviePlayerResources._29_1_ = 1;
  bVar2 = IsInRenderingThread();
  if (bVar2) {
    pcVar1 = *(code **)(GMoviePlayerResources._0_8_ + 0x18);
    pFVar3 = FRenderResource::GetImmediateCommandList();
    (*pcVar1)(&GMoviePlayerResources,pFVar3);
    atexit(_dynamic_atexit_destructor_for__GMoviePlayerResources__);
    return;
  }
  BeginInitResource((FRenderResource *)&GMoviePlayerResources,(FRenderCommandPipe *)0x0);
  atexit(_dynamic_atexit_destructor_for__GMoviePlayerResources__);
  return;
}

// `dynamic_initializer_for_'LogWebMMedia'' @ 141453260

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogWebMMedia__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogWebMMedia,L"LogWebMMedia",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogWebMMedia__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantWebMMedia'' @ 1414532a0

void __cdecl _dynamic_initializer_for__ModuleRegistrantWebMMedia__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "WebMMedia";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"WebMMedia",9);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FWebMMediaModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14f118c10

void * __thiscall
_anon_5A0D1067::FMoviePlaybackResources::_scalar_deleting_destructor_
          (FMoviePlaybackResources *this,uint param_1)

{
  FRHIBuffer *this_00;
  FRHIResource *this_01;
  
  this->_padding_ = (longlong)&::FMoviePlaybackResources::_vftable_;
  this_00 = (this->VertexBufferRHI).Reference;
  if (this_00 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (FRHIResource *)(this->VertexDeclarationRHI).Reference;
  if (this_01 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_01);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f118c80

void * __thiscall
TGlobalResource<`anonymous_namespace'::FMoviePlaybackResources,1>::_scalar_deleting_destructor_
          (TGlobalResource<_anonymous_namespace_::FMoviePlaybackResources,1> *this,uint param_1)

{
  *(undefined ***)this = &TGlobalResource<FMoviePlaybackResources,1>::_vftable_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &FMoviePlaybackResources::_vftable_;
  if (*(FRHIResource **)&this->field_0x28 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x28);
  }
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f118d00

void * __thiscall
IWebMMediaModule::_scalar_deleting_destructor_(IWebMMediaModule *this,uint param_1)

{
  *this = (IWebMMediaModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f118db0

void * __thiscall
FWebMMediaModule::_scalar_deleting_destructor_(FWebMMediaModule *this,uint param_1)

{
  *this = (FWebMMediaModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f118e00

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FWebMMediaPlayer,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FWebMMediaPlayer,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// ConstructItems<TSharedPtr<FWebMFrame,1>,TSharedPtr<FWebMFrame,1>,int> @ 14f118f80

void __cdecl
ConstructItems<TSharedPtr<FWebMFrame,1>,TSharedPtr<FWebMFrame,1>,int>
          (void *param_1,TSharedPtr<FWebMFrame,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FWebMFrame **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<FWebMFrame,1>,int> @ 14f118fc0

void __cdecl
DestructItems<TSharedPtr<FWebMFrame,1>,int>(TSharedPtr<FWebMFrame,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Enqueue<TRenderCommandTag<`FWebMVideoDecoder::DoDecodeVideoFrames'::__l29::TSTR_WebMMediaPlayerConvertYUVToRGB159>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14f119000

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FWebMVideoDecoder::DoDecodeVideoFrames_::__l29::TSTR_WebMMediaPlayerConvertYUVToRGB159>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FWebMVideoDecoder::DoDecodeVideoFrames'::__l29::TSTR_WebMMediaPlayerConvertYUVToRGB159>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_14f119151;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_14f119345;
  }
LAB_14f119151:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14f11922f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14f11922f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_14f119345:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FWebMVideoDecoder::DoDecodeVideoFrames'::__l32::TSTR_WebMMediaPlayerCreateTextures145>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14f119380

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FWebMVideoDecoder::DoDecodeVideoFrames_::__l32::TSTR_WebMMediaPlayerCreateTextures145>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FWebMVideoDecoder::DoDecodeVideoFrames'::__l32::TSTR_WebMMediaPlayerCreateTextures145>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_14f1194d1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_14f1196c5;
  }
LAB_14f1194d1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14f1195af:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14f1195af;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_14f1196c5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// MakeShared<FWebMMediaPlayer,1,IMediaEventSink_&> @ 14f119700

TSharedRef<FWebMMediaPlayer,1> * __cdecl
MakeShared<FWebMMediaPlayer,1,IMediaEventSink_&>
          (TSharedRef<FWebMMediaPlayer,1> *__return_storage_ptr__,IMediaEventSink *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FWebMMediaPlayer,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  pTVar3 = operator_new(0xe8);
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FWebMMediaPlayer *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFWebMMediaPlayer___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = (longlong)&FWebMMediaPlayer::_vftable__for__IMediaPlayer__;
    *(undefined ***)&pTVar3[1].SharedReferenceCount =
         &FWebMMediaPlayer::_vftable__for__IWebMSamplesSink__;
    pTVar3[2]._padding_ = (longlong)&FWebMMediaPlayer::_vftable__for__IMediaCache__;
    *(undefined ***)&pTVar3[2].SharedReferenceCount =
         &FWebMMediaPlayer::_vftable__for__IMediaControls__;
    pTVar3[3]._padding_ = (longlong)&FWebMMediaPlayer::_vftable__for__IMediaTracks__;
    *(undefined ***)&pTVar3[3].SharedReferenceCount = &FWebMMediaPlayer::_vftable__for__IMediaView__
    ;
    pTVar3[4]._padding_ = 0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[5]._padding_ = (longlong)param_1;
    pTVar4 = operator_new(0x290);
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      pTVar3[5].SharedReferenceCount = (atomic<int>)0x10;
      pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[6]._padding_ = 0;
    }
    else {
      pTVar4->SharedReferenceCount = (atomic<int>)0x1;
      pTVar4->WeakReferenceCount = (atomic<int>)0x1;
      pTVar4->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFMediaSamples___00_SharedPointerInternals__6B_;
      FMediaSamples::FMediaSamples((FMediaSamples *)(pTVar4 + 1),4,4,4,4,4);
      if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
        bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pTVar5 = (TSharedRef<FWebMMediaPlayer,1> *)(*pcVar1)();
          return pTVar5;
        }
      }
      *(TReferenceControllerBase<1> **)&pTVar3[5].SharedReferenceCount = pTVar4 + 1;
      pTVar3[6]._padding_ = (longlong)pTVar4;
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      pTVar6 = pTVar4;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[7]._padding_ = 0;
    pTVar3[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[8]._padding_ = 0;
    pTVar3[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[9]._padding_ = 0;
    pTVar3[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[9].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[10]._padding_ = 0;
    pTVar3[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xb].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0xc]._padding_ = 0;
    pTVar3[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xd].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[10].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0xb]._padding_ = 0;
    pTVar3[0xc].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined8 *)&pTVar3[0xc].WeakReferenceCount = 0xffffffffffffffff;
    *(undefined2 *)&pTVar3[0xe]._padding_ = 0;
    __return_storage_ptr__->Object = (FWebMMediaPlayer *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FWebMMediaPlayer *)(pTVar3 + 1) == (FWebMMediaPlayer *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TSharedRef<FWebMMediaPlayer,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// SetShaderParametersLegacy<FRHICommandListImmediate,FYUVConvertPS,FRHIPixelShader,FRHITexture_*,FRHITexture_*,FRHITexture_*,UE::Math::TIntPoint<int>,UE::Math::TMatrix<double>_const_&,UE::Math::TVector<double>_const_&,bool> @ 14f119920

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
SetShaderParametersLegacy<FRHICommandListImmediate,FYUVConvertPS,FRHIPixelShader,FRHITexture_*,FRHITexture_*,FRHITexture_*,UE::Math::TIntPoint<int>,UE::Math::TMatrix<double>_const_&,UE::Math::TVector<double>_const_&,bool>
          (FRHICommandListImmediate *param_1,
          TShaderRefBase<FYUVConvertPS,FShaderMapPointerTable> *param_2,FRHIPixelShader *param_3,
          FRHITexture **param_4,FRHITexture **param_5,FRHITexture **param_6,TIntPoint<int> *param_7,
          TMatrix<double> *param_8,TVector<double> *param_9,bool *param_10)

{
  longlong *plVar1;
  FRHIBatchedShaderParameters *pFVar2;
  FYUVConvertPS *this;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  FRHITexture *local_res8;
  uint uStack_2c;
  
  puVar6 = (undefined8 *)0x0;
  puVar4 = *(undefined8 **)&param_1->field_0xc0;
  if (*(undefined8 **)&param_1->field_0xc0 == (undefined8 *)0x0) {
    puVar4 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x48,0x10);
    if (puVar4 != (undefined8 *)0x0) {
      puVar5 = FMemStackBase::Alloc((FMemStackBase *)param_1,0xb8,0x10);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = *(undefined8 *)&param_1->field_0xc8;
        puVar5[1] = param_1;
        FMemStackBase::FMemStackBase((FMemStackBase *)(puVar5 + 2),Small);
        FMemStackBase::FMemStackBase((FMemStackBase *)(puVar5 + 7),Small);
        FMemStackBase::FMemStackBase((FMemStackBase *)(puVar5 + 0xc),Small);
        FMemStackBase::FMemStackBase((FMemStackBase *)(puVar5 + 0x11),Small);
        puVar5[0x16] = 0;
        *(undefined8 **)&param_1->field_0xc8 = puVar5;
        puVar6 = puVar5;
      }
      *puVar4 = puVar6;
      puVar4[1] = 0;
      *(undefined4 *)(puVar4 + 2) = 0;
      puVar4[3] = 0;
      *(undefined4 *)(puVar4 + 4) = 0;
      puVar4[5] = 0;
      *(undefined4 *)(puVar4 + 6) = 0;
      puVar4[7] = 0;
      *(undefined4 *)(puVar4 + 8) = 0;
      puVar6 = puVar4;
    }
    *(undefined8 **)&param_1->field_0xc0 = puVar6;
    puVar4 = puVar6;
  }
  if ((0 < *(int *)(puVar4 + 8) + *(int *)(puVar4 + 6) + *(int *)(puVar4 + 4)) &&
     (bVar3 = `FRHICommandListBase::GetScratchShaderParameters'::__l6::<lambda_1>::operator()
                        (&local_res8), !bVar3)) {
    plVar1 = *(longlong **)&param_1->field_0xc0;
    *(undefined8 *)(*plVar1 + 0xb0) = 0;
    plVar1[1] = 0;
    plVar1[2] = (ulonglong)uStack_2c << 0x20;
    plVar1[3] = 0;
    plVar1[4] = (ulonglong)uStack_2c << 0x20;
    plVar1[5] = 0;
    plVar1[6] = (ulonglong)uStack_2c << 0x20;
    plVar1[7] = 0;
    plVar1[8] = (ulonglong)uStack_2c << 0x20;
  }
  pFVar2 = *(FRHIBatchedShaderParameters **)&param_1->field_0xc0;
  this = param_2->ShaderContent;
  bVar3 = *param_10;
  param_10 = (bool *)*param_6;
  if ((FRHITexture *)param_10 != (FRHITexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)param_10);
  }
  param_6 = (FRHITexture **)*param_5;
  if ((FRHITexture *)param_6 != (FRHITexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)param_6);
  }
  local_res8 = *param_4;
  if (local_res8 != (FRHITexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_res8);
  }
  FYUVConvertPS::SetParameters
            (this,pFVar2,(FRHITexture *)&local_res8,(FRHITexture *)&param_6,(FRHITexture *)&param_10
             ,param_7,param_8,param_9,bVar3);
  FRHICommandList::SetBatchedShaderParameters
            ((FRHICommandList *)param_1,(FRHIGraphicsShader *)param_3,pFVar2);
  return;
}

// ~TFunction_OwnedObject<`FWebMAudioDecoder::DecodeAudioFramesAsync'::__l2::<lambda_1>,1,1> @ 14f119fd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWebMAudioDecoder::DecodeAudioFramesAsync'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FWebMAudioDecoder::DecodeAudioFramesAsync_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWebMAudioDecoder::DecodeAudioFramesAsync'::`2'::<lambda_1>,1,1>::
        _vftable_;
  DestructItems<TSharedPtr<FWebMFrame,1>,int>
            (*(TSharedPtr<FWebMFrame,1> **)((longlong)this + 0x18),*(int *)((longlong)this + 0x20));
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  puVar3 = *(undefined8 **)((longlong)this + 0x10);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014f11a022. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`FWebMVideoDecoder::DecodeVideoFramesAsync'::__l5::<lambda_1>,1,1> @ 14f11a040

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWebMVideoDecoder::DecodeVideoFramesAsync'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FWebMVideoDecoder::DecodeVideoFramesAsync_::__l5::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWebMVideoDecoder::DecodeVideoFramesAsync'::`5'::<lambda_1>,1,1>::
        _vftable_;
  DestructItems<TSharedPtr<FWebMFrame,1>,int>
            (*(TSharedPtr<FWebMFrame,1> **)((longlong)this + 0x10),*(int *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FWebMVideoDecoder::DoDecodeVideoFrames'::__l32::<lambda_1>,1,0> @ 14f11a080

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWebMVideoDecoder::DoDecodeVideoFrames'::__l32::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FWebMVideoDecoder::DoDecodeVideoFrames_::__l32::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWebMVideoDecoder::DoDecodeVideoFrames'::`32'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWebMVideoDecoder::DoDecodeVideoFrames'::__l29::<lambda_2>,1,1> @ 14f11a0a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWebMVideoDecoder::DoDecodeVideoFrames'::__l29::<lambda_2>,1,1>::
~TFunction_OwnedObject<_FWebMVideoDecoder::DoDecodeVideoFrames_::__l29::<lambda_2>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWebMVideoDecoder::DoDecodeVideoFrames'::`29'::<lambda_2>,1,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  return;
}

// ~TGlobalResource<`anonymous_namespace'::FMoviePlaybackResources,1> @ 14f11a0c0

void __thiscall
TGlobalResource<`anonymous_namespace'::FMoviePlaybackResources,1>::
~TGlobalResource<_anonymous_namespace_::FMoviePlaybackResources,1>
          (TGlobalResource<_anonymous_namespace_::FMoviePlaybackResources,1> *this)

{
  *(undefined ***)this = &TGlobalResource<FMoviePlaybackResources,1>::_vftable_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &FMoviePlaybackResources::_vftable_;
  if (*(FRHIResource **)&this->field_0x28 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x28);
  }
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14f11ae38

/* [thunk]:public: virtual void * __ptr64 __cdecl FWebMMediaAudioSample::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FWebMMediaAudioSample::_vector_deleting_destructor__adjustor_8__
          (FWebMMediaAudioSample *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FWebMMediaAudioSample *)&this[-1].Time,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14f11ae48

/* [thunk]:public: virtual void * __ptr64 __cdecl FWebMMediaPlayer::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FWebMMediaPlayer::_vector_deleting_destructor__adjustor_8__(FWebMMediaPlayer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FWebMMediaPlayer *)&this[-1].bNoMoreToRead,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{16}' @ 14f11ae58

/* [thunk]:public: virtual void * __ptr64 __cdecl FWebMMediaPlayer::`vector deleting
   destructor'`adjustor{16}' (unsigned int) __ptr64 */

void * __thiscall
FWebMMediaPlayer::_vector_deleting_destructor__adjustor_16__(FWebMMediaPlayer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FWebMMediaPlayer *)&this[-1].CurrentTime,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{24}' @ 14f11ae68

/* [thunk]:public: virtual void * __ptr64 __cdecl FWebMMediaPlayer::`vector deleting
   destructor'`adjustor{24}' (unsigned int) __ptr64 */

void * __thiscall
FWebMMediaPlayer::_vector_deleting_destructor__adjustor_24__(FWebMMediaPlayer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FWebMMediaPlayer *)&this[-1].SelectedVideoTrack,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{32}' @ 14f11ae78

/* [thunk]:public: virtual void * __ptr64 __cdecl FWebMMediaPlayer::`vector deleting
   destructor'`adjustor{32}' (unsigned int) __ptr64 */

void * __thiscall
FWebMMediaPlayer::_vector_deleting_destructor__adjustor_32__(FWebMMediaPlayer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FWebMMediaPlayer *)&this[-1].CurrentState,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14f11ae88

/* [thunk]:public: virtual void * __ptr64 __cdecl FWebMMediaPlayer::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
FWebMMediaPlayer::_vector_deleting_destructor__adjustor_40__(FWebMMediaPlayer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FWebMMediaPlayer *)&this[-1].MediaUrl.Data.ArrayNum,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14f11ae98

/* [thunk]:public: virtual void * __ptr64 __cdecl FWebMMediaTextureSample::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FWebMMediaTextureSample::_vector_deleting_destructor__adjustor_8__
          (FWebMMediaTextureSample *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FWebMMediaTextureSample *)&this[-1].DisplaySize,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14f11aeb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWebMAudioDecoder::DecodeAudioFramesAsync'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWebMAudioDecoder::DecodeAudioFramesAsync'::`2'::<lambda_1>,1,1>::
        _vftable_;
  DestructItems<TSharedPtr<FWebMFrame,1>,int>
            (*(TSharedPtr<FWebMFrame,1> **)((longlong)this + 0x18),*(int *)((longlong)this + 0x20));
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  puVar3 = *(undefined8 **)((longlong)this + 0x10);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f11af30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWebMVideoDecoder::DecodeVideoFramesAsync'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWebMVideoDecoder::DecodeVideoFramesAsync'::`5'::<lambda_1>,1,1>::
        _vftable_;
  DestructItems<TSharedPtr<FWebMFrame,1>,int>
            (*(TSharedPtr<FWebMFrame,1> **)((longlong)this + 0x10),*(int *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f11af90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWebMVideoDecoder::DoDecodeVideoFrames'::__l32::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWebMVideoDecoder::DoDecodeVideoFrames'::`32'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f11afd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWebMVideoDecoder::DoDecodeVideoFrames'::__l29::<lambda_2>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWebMVideoDecoder::DoDecodeVideoFrames'::`29'::<lambda_2>,1,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f11b020

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FWebMFrame,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FWebMFrame,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f11b060

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMediaSamples,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FMediaSamples,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x290);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f11b0a0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FWebMMediaAudioSample,TMediaObjectPool<FWebMMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample>_>::TDeleter,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FWebMMediaAudioSample,TMediaObjectPool<FWebMMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample>_>::TDeleter,1>
           *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f11b110

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FWebMMediaTextureSample,TMediaObjectPool<FWebMMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample>_>::TDeleter,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FWebMMediaTextureSample,TMediaObjectPool<FWebMMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample>_>::TDeleter,1>
           *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f11b180

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TMediaObjectPool<FWebMMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample>_>::TStorage,SharedPointerInternals::DefaultDeleter<TMediaObjectPool<FWebMMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample>_>::TStorage>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TMediaObjectPool<FWebMMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample>_>::TStorage,SharedPointerInternals::DefaultDeleter<TMediaObjectPool<FWebMMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample>_>::TStorage>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f11b1c0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TMediaObjectPool<FWebMMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample>_>::TStorage,SharedPointerInternals::DefaultDeleter<TMediaObjectPool<FWebMMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample>_>::TStorage>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TMediaObjectPool<FWebMMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample>_>::TStorage,SharedPointerInternals::DefaultDeleter<TMediaObjectPool<FWebMMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample>_>::TStorage>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f11b200

void * __thiscall FMkvFileReader::_scalar_deleting_destructor_(FMkvFileReader *this,uint param_1)

{
  IFileHandle *pIVar1;
  
  pIVar1 = (this->m_file).Ptr;
  if (pIVar1 != (IFileHandle *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  mkvparser::IMkvReader::~IMkvReader((IMkvReader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f11b260

void * __thiscall FWebMContainer::_scalar_deleting_destructor_(FWebMContainer *this,uint param_1)

{
  FMkvFileState *pFVar1;
  Segment *this_00;
  FScriptContainerElement *pFVar2;
  FMkvFileReader *pFVar3;
  
  this->_padding_ = (longlong)&___7FWebMContainer__6B_;
  pFVar1 = (this->MkvFile).Ptr;
  if (pFVar1 != (FMkvFileState *)0x0) {
    this_00 = (pFVar1->CurrentSegment).Ptr;
    if (this_00 != (Segment *)0x0) {
      mkvparser::Segment::~Segment(this_00);
      ::operator_delete(this_00,0xb8);
    }
    pFVar2 = (pFVar1->AudioTracks).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->VideoTracks).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x38);
  }
  pFVar3 = (this->MkvReader).Ptr;
  if (pFVar3 != (FMkvFileReader *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3,1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f11b320

void * __thiscall
FWebMMediaAudioSample::_scalar_deleting_destructor_(FWebMMediaAudioSample *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__IMediaAudioSample__;
  this->_padding_ = (longlong)&_vftable__for__IMediaPoolable__;
  pFVar1 = (this->Buffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMediaPoolable__6B_;
  this->_padding_ = (longlong)&___7IMediaAudioSample__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f11b390

void * __thiscall
FWebMMediaPlayer::_scalar_deleting_destructor_(FWebMMediaPlayer *this,uint param_1)

{
  ~FWebMMediaPlayer(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f11b3d0

void * __thiscall
FWebMMediaTextureSample::_scalar_deleting_destructor_(FWebMMediaTextureSample *this,uint param_1)

{
  FRHITexture *this_00;
  
  this_00 = (this->Texture).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)&___7IMediaPoolable__6B_;
  this->_padding_ = (longlong)&___7IMediaTextureSample__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f11b430

void * __thiscall mkvparser::IMkvReader::_scalar_deleting_destructor_(IMkvReader *this,uint param_1)

{
  ~IMkvReader(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f11b470

void * __thiscall
IWebMSamplesSink::_scalar_deleting_destructor_(IWebMSamplesSink *this,uint param_1)

{
  *this = (IWebMSamplesSink)&___7IWebMSamplesSink__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f11b4b0

void * __thiscall
TMediaObjectPool<FWebMMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample>_>::
TStorage::_scalar_deleting_destructor_(TStorage *this,uint param_1)

{
  TNode *pTVar1;
  TNode *pTVar2;
  FWebMMediaAudioSample *pFVar3;
  FScriptContainerElement *pFVar4;
  
  Reserve(this,0);
  while( true ) {
    pTVar1 = ((this->WaitReadyForReuse).Tail)->NextNode;
    pTVar2 = (this->WaitReadyForReuse).Tail;
    if (pTVar1 == (TNode *)0x0) break;
    pFVar3 = pTVar1->Item;
    (this->WaitReadyForReuse).Tail = pTVar1;
    pTVar1->Item = (FWebMMediaAudioSample *)0x0;
    ::operator_delete(pTVar2,0x10);
    (**(code **)(pFVar3->_padding_ + 8))(&pFVar3->_padding_);
    if (pFVar3 != (FWebMMediaAudioSample *)0x0) {
      (**(code **)(pFVar3->_padding_ + 0x40))(pFVar3,1);
    }
  }
  while (pTVar2 != (TNode *)0x0) {
    (this->WaitReadyForReuse).Tail = pTVar2->NextNode;
    ::operator_delete(pTVar2,0x10);
    pTVar2 = (this->WaitReadyForReuse).Tail;
  }
  pFVar4 = (this->Pool).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f11b5a0

void * __thiscall
TMediaObjectPool<FWebMMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample>_>
::TStorage::_scalar_deleting_destructor_(TStorage *this,uint param_1)

{
  TNode *pTVar1;
  TNode *pTVar2;
  FWebMMediaTextureSample *pFVar3;
  FScriptContainerElement *pFVar4;
  
  Reserve(this,0);
  while( true ) {
    pTVar1 = ((this->WaitReadyForReuse).Tail)->NextNode;
    pTVar2 = (this->WaitReadyForReuse).Tail;
    if (pTVar1 == (TNode *)0x0) break;
    pFVar3 = pTVar1->Item;
    (this->WaitReadyForReuse).Tail = pTVar1;
    pTVar1->Item = (FWebMMediaTextureSample *)0x0;
    ::operator_delete(pTVar2,0x10);
    (**(code **)(pFVar3->_padding_ + 8))(&pFVar3->_padding_);
    if (pFVar3 != (FWebMMediaTextureSample *)0x0) {
      (**(code **)(pFVar3->_padding_ + 0x138))(pFVar3,1);
    }
  }
  while (pTVar2 != (TNode *)0x0) {
    (this->WaitReadyForReuse).Tail = pTVar2->NextNode;
    ::operator_delete(pTVar2,0x10);
    pTVar2 = (this->WaitReadyForReuse).Tail;
  }
  pFVar4 = (this->Pool).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// IMPLEMENT_MODULE_WebMMedia @ 14f123b40

void __cdecl IMPLEMENT_MODULE_WebMMedia(void)

{
  return;
}

// StaticResource'' @ 150471f00

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__0P__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
  ;
  if ((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::ReleaseResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference != (FRHIBlendState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 150471f80

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticDepthStencilState__0A__06_0A__06_0A__0A__0A__0A__06_0A__0A__0A__0PP__0PP___V__TRefCountPtr_VFRHIDepthStencilState____PEAVFRHIDepthStencilState____6B_
  ;
  if ((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::ReleaseResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
      ::StaticResource.StateRHI.Reference != (FRHIDepthStencilState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 150472000

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticRasterizerState__01_0A__0A__00__V__TRefCountPtr_VFRHIRasterizerState____PEAVFRHIRasterizerState____6B_
  ;
  if ((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::ReleaseResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
      ::StaticResource.StateRHI.Reference != (FRHIRasterizerState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  return;
}

// `dynamic_atexit_destructor_for_'GMoviePlayerResources'' @ 150472080

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__GMoviePlayerResources__(void)

{
  GMoviePlayerResources._0_8_ = &TGlobalResource<FMoviePlaybackResources,1>::_vftable_;
  FRenderResource::ReleaseResource((FRenderResource *)&GMoviePlayerResources);
  GMoviePlayerResources._0_8_ = &FMoviePlaybackResources::_vftable_;
  if (GMoviePlayerResources._40_8_ != 0) {
    FRHIResource::Release((FRHIResource *)GMoviePlayerResources._40_8_);
  }
  if (GMoviePlayerResources._32_8_ != 0) {
    FRHIResource::Release((FRHIResource *)GMoviePlayerResources._32_8_);
  }
  FRenderResource::~FRenderResource((FRenderResource *)&GMoviePlayerResources);
  return;
}

// `dynamic_atexit_destructor_for_'Language'' @ 1504720f0

void __cdecl
`FWebMMediaPlayer::GetTrackLanguage'::__l2::_dynamic_atexit_destructor_for__Language__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Language.Data.AllocatorInstance.Data;
  if (Language.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Language.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogWebMMedia'' @ 150472110

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogWebMMedia__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogWebMMedia);
  return;
}

