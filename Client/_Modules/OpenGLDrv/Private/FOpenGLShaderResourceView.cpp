// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 8

// FOpenGLShaderResourceView @ 145be4670

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FOpenGLShaderResourceView * __thiscall
FOpenGLShaderResourceView::FOpenGLShaderResourceView
          (FOpenGLShaderResourceView *this,FRHICommandListBase *param_1,
          FRHIViewableResource *param_2,FRHIViewDesc *param_3)

{
  char cVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  FOpenGLShaderResourceView *pFVar5;
  FRHICommandBase *pFVar6;
  FOpenGLShaderResourceView *local_res8;
  
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_ShaderResourceView);
  this->_padding_ = (longlong)&___7FRHIView__6B_;
  this->_padding_ = (longlong)param_2;
  if (param_2 != (FRHIViewableResource *)0x0) {
    FRHIResource::AddRef((FRHIResource *)param_2);
  }
  lVar3 = *(longlong *)((longlong)&param_3->field0_0x0 + 8);
  this->_padding_ = *(longlong *)&param_3->field0_0x0;
  this->_padding_ = lVar3;
  if (param_2 == (FRHIViewableResource *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InResource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xcae,L"Cannot create a view of a nullptr resource.");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FOpenGLShaderResourceView *)(*pcVar2)();
      return pFVar5;
    }
  }
  this->_padding_ = (longlong)&___7FRHIShaderResourceView__6B_;
  cVar1 = (char)this->_padding_;
  if ((cVar1 != '\0') && (cVar1 != '\x02')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ViewDesc.IsSRV()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xced,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FOpenGLShaderResourceView *)(*pcVar2)();
      return pFVar5;
    }
  }
  this->Target = 0x8c2a;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__FRHIShaderResourceView__;
  this->_padding_ = (longlong)&_vftable__for__FOpenGLView__;
  this->_padding_ = 0;
  this->Resource = 0;
  this->LimitMip = -1;
  this->OwnsResource = false;
  local_res8 = this;
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->PersistentState).bImmediate == '\0'))
     && (param_1->bExecuting == false)) {
    pFVar6 = FMemStackBase::Alloc(&param_1->MemManager,0x20,8);
    param_1->NumCommands = param_1->NumCommands + 1;
    *param_1->CommandLink = pFVar6;
    param_1->CommandLink = &pFVar6->Next;
    pFVar6->Next = (FRHICommandBase *)0x0;
    pFVar6->_padding_ =
         (longlong)
         &TRHILambdaCommand<FRHICommandListBase,`FOpenGLShaderResourceView::FOpenGLShaderResourceView'::`2'::<lambda_1>_>
          ::_vftable_;
    pFVar6[1].Next = (FRHICommandBase *)L"TRHILambdaCommand";
    pFVar6[1]._padding_ = (longlong)this;
  }
  else {
    `FOpenGLShaderResourceView::FOpenGLShaderResourceView'::__l2::<lambda_1>::operator()
              (&local_res8,param_1);
  }
  return this;
}

// ~FOpenGLShaderResourceView @ 145be9e20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FOpenGLShaderResourceView::~FOpenGLShaderResourceView(FOpenGLShaderResourceView *this)

{
  HGLRC pHVar1;
  
  this->_padding_ = (longlong)&_vftable__for__FRHIShaderResourceView__;
  this->_padding_ = (longlong)&_vftable__for__FOpenGLView__;
  pHVar1 = wglGetCurrentContext();
  if (pHVar1 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (this->_padding_ != 0) {
    *(longlong *)(this->_padding_ + 0x10) = this->_padding_;
  }
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    *(longlong *)this->_padding_ = this->_padding_;
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  if ((this->Resource != 0) && (this->OwnsResource != false)) {
    FOpenGLDynamicRHI::InvalidateTextureResourceInCache(FOpenGLDynamicRHI::Singleton,this->Resource)
    ;
    (*glDeleteTextures)(1,&this->Resource);
  }
  this->Resource = 0;
  this->OwnsResource = false;
  this->Target = 0x8c2a;
  this->LimitMip = -1;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

// operator() @ 145beb420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FOpenGLShaderResourceView::FOpenGLShaderResourceView'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  lVar2 = *(longlong *)this;
  plVar6 = (longlong *)0x0;
  plVar1 = (longlong *)(lVar2 + 0x38);
  if ((*(char *)(lVar2 + 0x20) == '\0') || (*(char *)(lVar2 + 0x20) == '\x01')) {
    plVar5 = (longlong *)(*(longlong *)(lVar2 + 0x18) + 0xe8);
    if (*(longlong *)(lVar2 + 0x18) == 0) {
      plVar5 = (longlong *)0x0;
    }
  }
  else {
    plVar5 = plVar6;
    if ((*(longlong **)(lVar2 + 0x18) != (longlong *)0x0) &&
       (lVar3 = (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x48))(), lVar3 != 0)) {
      plVar5 = (longlong *)(lVar3 + 0x138);
    }
  }
  if (*plVar5 != 0) {
    *(longlong **)(*plVar5 + 0x10) = plVar1;
  }
  *plVar1 = *plVar5;
  *(longlong **)(lVar2 + 0x40) = plVar5;
  plVar4 = (longlong *)(lVar2 + 0x30);
  if (plVar1 == (longlong *)0x0) {
    plVar4 = plVar6;
  }
  *plVar5 = (longlong)plVar4;
  FOpenGLShaderResourceView::UpdateView((FOpenGLShaderResourceView *)(*(longlong *)this + 0x30));
  return;
}

// GetBaseResource @ 145c01cc0

FOpenGLViewableResource * __thiscall
FOpenGLShaderResourceView::GetBaseResource(FOpenGLShaderResourceView *this)

{
  char cVar1;
  longlong lVar2;
  FOpenGLViewableResource *pFVar3;
  
  cVar1 = (char)this->_padding_;
  if ((cVar1 != '\0') && (cVar1 != '\x01')) {
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      lVar2 = (**(code **)(*(longlong *)this->_padding_ + 0x48))();
      if (lVar2 != 0) {
        return (FOpenGLViewableResource *)(lVar2 + 0x138);
      }
    }
    return (FOpenGLViewableResource *)0x0;
  }
  pFVar3 = (FOpenGLViewableResource *)(this->_padding_ + 0xe8);
  if (this->_padding_ == 0) {
    pFVar3 = (FOpenGLViewableResource *)0x0;
  }
  return pFVar3;
}

// Invalidate @ 145c0a200

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall FOpenGLShaderResourceView::Invalidate(FOpenGLShaderResourceView *this)

{
  if ((this->Resource != 0) && (this->OwnsResource != false)) {
    FOpenGLDynamicRHI::InvalidateTextureResourceInCache(FOpenGLDynamicRHI::Singleton,this->Resource)
    ;
    (*glDeleteTextures)(1,&this->Resource);
  }
  this->Resource = 0;
  this->Target = 0x8c2a;
  this->LimitMip = -1;
  this->OwnsResource = false;
  return;
}

// UpdateView @ 145c37030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall FOpenGLShaderResourceView::UpdateView(FOpenGLShaderResourceView *this)

{
  longlong *_Dst;
  byte bVar1;
  FRHIBuffer *pFVar2;
  longlong lVar3;
  code *pcVar4;
  FOpenGLDynamicRHI *pFVar5;
  bool bVar6;
  HGLRC pHVar7;
  FOpenGLTexture *this_00;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 auStackY_98 [32];
  undefined1 local_68;
  undefined1 local_67 [3];
  int local_64;
  FViewInfo local_60;
  FViewInfo local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_98;
  pHVar7 = wglGetCurrentContext();
  if (pHVar7 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  uVar12 = (uint)this->_padding_;
  _Dst = &this->_padding_;
  if ((uVar12 != 0) && (*(char *)((longlong)&this->_padding_ + 4) != '\0')) {
    FOpenGLDynamicRHI::InvalidateTextureResourceInCache(FOpenGLDynamicRHI::Singleton,uVar12);
    (*glDeleteTextures)(1,(uint *)_Dst);
  }
  this_00 = (FOpenGLTexture *)0x0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x8c2a;
  uVar12 = 0xffffffff;
  *(undefined4 *)_Dst = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  if ((byte)this[-1].Resource < 2) {
    pFVar2 = (FRHIBuffer *)this[-1]._padding_;
    FRHIViewDesc::FBufferSRV::GetViewInfo((FBufferSRV *)&this[-1].Resource,&local_50,pFVar2);
    if (local_50._18_1_ == '\0') {
      if (local_50._16_1_ == '\x01') {
        *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x8c2a;
        *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
        iVar10 = 0x400 - FOpenGL3::NextTextureName;
        if (iVar10 < 2) {
          memcpy(_Dst,FOpenGL3::TextureNamesCache + FOpenGL3::NextTextureName,(longlong)iVar10 * 4);
          (*glGenTextures)(0x400,FOpenGL3::TextureNamesCache);
          iVar14 = 1 - iVar10;
          memcpy((void *)((longlong)iVar10 * 4 + (longlong)_Dst),FOpenGL3::TextureNamesCache,
                 (longlong)iVar14 << 2);
        }
        else {
          *(uint *)_Dst = FOpenGL3::TextureNamesCache[FOpenGL3::NextTextureName];
          iVar14 = FOpenGL3::NextTextureName + 1;
        }
        pFVar5 = FOpenGLDynamicRHI::Singleton;
        lVar8 = *_Dst;
        FOpenGL3::NextTextureName = iVar14;
        if ((FOpenGLBase::MaxCombinedTextureImageUnits == -1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("MaxCombinedTextureImageUnits != -1",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBase.h"
                               ,0x7c,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar9 = FOpenGLBase::MaxCombinedTextureImageUnits - 1;
        uVar12 = 0;
        if ((int)uVar9 < (int)(pFVar5->ContextState)._padding_) {
          uVar12 = ~uVar9 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar3 = (pFVar5->ContextState)._padding_;
        if ((*(int *)(lVar3 + 0x10 + (longlong)(int)uVar9 * 0x28) != 0x8c2a) ||
           (*(uint *)(lVar3 + 0x14 + (longlong)(int)uVar9 * 0x28) != (uint)lVar8)) {
          FOpenGLDynamicRHI::CachedSetupTextureStageInner(pFVar5,uVar9,0x8c2a,(uint)lVar8,-1,1);
        }
        uVar12 = *(uint *)((longlong)&pFVar2[1]._padding_ + 4);
        iVar10 = GPixelFormats[(byte)local_50._17_1_].BlockBytes;
        uVar9 = GOpenGLTextureFormats[(byte)local_50._17_1_].InternalFormat[0];
        if ((local_50._0_4_ == 0) && (local_50._8_4_ == -1)) {
          (*glTexBuffer)(0x8c2a,uVar9,uVar12);
        }
        else {
          if (((iVar10 == 0) ||
              ((longlong)(ulonglong)(uint)local_50._0_4_ %
               (longlong)FOpenGLBase::TextureBufferAlignment != 0)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Stride > 0 && Offset % Alignment == 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLUAV.cpp"
                                 ,0x21,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (*glTexBufferRange)(0x8c2a,uVar9,uVar12,(ulonglong)(uint)local_50._0_4_,
                              (ulonglong)(uint)(local_50._8_4_ * iVar10));
        }
      }
      else if ((local_50._16_1_ == '\x02') || (local_50._16_1_ == '\x04')) {
        if (((local_50._0_4_ != 0) || (local_50._12_4_ != (pFVar2->Desc).Size)) &&
           (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<1989509970554519652>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLUAV.cpp"
                               ,100,
                               "Info.OffsetInBytes == 0 && Info.SizeInBytes == Buffer->GetDesc().Size"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x90d2;
        *(undefined4 *)_Dst = *(undefined4 *)((longlong)&pFVar2[1]._padding_ + 4);
      }
      else {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLUAV.cpp"
                           ,0x6a,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
  }
  else {
    if ((longlong *)this[-1]._padding_ != (longlong *)0x0) {
      this_00 = (FOpenGLTexture *)(**(code **)(*(longlong *)this[-1]._padding_ + 0x48))();
    }
    FRHIViewDesc::FTextureSRV::GetViewInfo
              ((FTextureSRV *)&this[-1].Resource,&local_60,(FRHITexture *)this_00);
    *(uint *)((longlong)&this->_padding_ + 4) = this_00->Target;
    if (local_60.MipRange.Num == '\x01') {
      uVar12 = (uint)local_60.MipRange.First;
    }
    *(uint *)&this->_padding_ = uVar12;
    lVar8 = (**(code **)(this_00->_padding_ + 0x20))(this_00);
    if ((uchar)(local_60.MipRange.First + local_60.MipRange.Num) != *(char *)(lVar8 + 0x30)) {
      local_68 = 0;
      `FOpenGLShaderResourceView::UpdateView'::__l40::<lambda_1>::operator()(&local_68);
    }
    if ((local_60._6_1_ & 0x10) == 0) {
      local_67[0] = 0;
      `FOpenGLShaderResourceView::UpdateView'::__l40::<lambda_2>::operator()(local_67);
    }
    lVar8 = (**(code **)(this_00->_padding_ + 0x20))(this_00);
    if (((local_60._5_1_ != *(char *)(lVar8 + 0x33)) && (local_60._5_1_ != ',')) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("bFormatsMatch",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLUAV.cpp"
                           ,0x7c,
                           L"SRVs cannot modify the pixel format of a texture when texture views are unsupported."
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FOpenGLTexture::TryRestoreGLResource(this_00);
    *(uint *)&this->_padding_ = this_00->Resource;
    pFVar5 = FOpenGLDynamicRHI::Singleton;
    if (local_60._5_1_ == ',') {
      lVar8 = (**(code **)(this_00->_padding_ + 0x20))(this_00);
      uVar12 = (uint)this->_padding_;
      uVar9 = *(uint *)((longlong)&this->_padding_ + 4);
      bVar1 = *(byte *)(lVar8 + 0x30);
      local_64 = (int)this->_padding_;
      if ((FOpenGLBase::MaxCombinedTextureImageUnits == -1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("MaxCombinedTextureImageUnits != -1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBase.h"
                             ,0x7c,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar13 = FOpenGLBase::MaxCombinedTextureImageUnits - 1;
      uVar11 = 0;
      if ((int)uVar13 < (int)(pFVar5->ContextState)._padding_) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar8 = (pFVar5->ContextState)._padding_;
      if ((*(uint *)(lVar8 + 0x10 + (longlong)(int)uVar13 * 0x28) != uVar9) ||
         (*(uint *)(lVar8 + 0x14 + (longlong)(int)uVar13 * 0x28) != uVar12)) {
        FOpenGLDynamicRHI::CachedSetupTextureStageInner
                  (pFVar5,uVar13,uVar9,uVar12,local_64,(uint)bVar1);
      }
      (*glTexParameteri)(*(uint *)((longlong)&this->_padding_ + 4),0x90ea,0x1901);
      (*glTexParameteri)(*(uint *)((longlong)&this->_padding_ + 4),0x8e42,0);
      (*glTexParameteri)(*(uint *)((longlong)&this->_padding_ + 4),0x8e43,0x1903);
      (*glTexParameteri)(*(uint *)((longlong)&this->_padding_ + 4),0x8e44,0);
      (*glTexParameteri)(*(uint *)((longlong)&this->_padding_ + 4),0x8e45,0);
      this_00->bInStencilTextureMode = true;
    }
  }
  return;
}

// operator() @ 1504d9990

bool __thiscall `FOpenGLShaderResourceView::UpdateView'::__l40::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1989509970554519671>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1989509970554519671>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504d99d0

bool __thiscall `FOpenGLShaderResourceView::UpdateView'::__l40::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1989509970554519672>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1989509970554519672>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

