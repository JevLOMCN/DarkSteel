// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 9

// FOpenGLUnorderedAccessView @ 145be5820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FOpenGLUnorderedAccessView * __thiscall
FOpenGLUnorderedAccessView::FOpenGLUnorderedAccessView
          (FOpenGLUnorderedAccessView *this,FRHICommandListBase *param_1,
          FRHIViewableResource *param_2,FRHIViewDesc *param_3)

{
  char cVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  FOpenGLUnorderedAccessView *pFVar5;
  FRHICommandBase *pFVar6;
  FOpenGLUnorderedAccessView *local_res8;
  
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_UnorderedAccessView);
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
      pFVar5 = (FOpenGLUnorderedAccessView *)(*pcVar2)();
      return pFVar5;
    }
  }
  this->_padding_ = (longlong)&___7FRHIUnorderedAccessView__6B_;
  cVar1 = (char)this->_padding_;
  if ((cVar1 == '\0') || (cVar1 == '\x02')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ViewDesc.IsUAV()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xce3,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FOpenGLUnorderedAccessView *)(*pcVar2)();
      return pFVar5;
    }
  }
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__FRHIUnorderedAccessView__;
  this->_padding_ = (longlong)&_vftable__for__FOpenGLView__;
  this->_padding_ = 0;
  this->Resource = 0;
  this->BufferResource = 0;
  this->Format = 0;
  this->UnrealFormat = '\0';
  this->Level = '\0';
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
         &TRHILambdaCommand<FRHICommandListBase,`FOpenGLUnorderedAccessView::FOpenGLUnorderedAccessView'::`2'::<lambda_1>_>
          ::_vftable_;
    pFVar6[1].Next = (FRHICommandBase *)L"TRHILambdaCommand";
    pFVar6[1]._padding_ = (longlong)this;
  }
  else {
    `FOpenGLUnorderedAccessView::FOpenGLUnorderedAccessView'::__l2::<lambda_1>::operator()
              (&local_res8,param_1);
  }
  return this;
}

// ~FOpenGLUnorderedAccessView @ 145bea710

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FOpenGLUnorderedAccessView::~FOpenGLUnorderedAccessView(FOpenGLUnorderedAccessView *this)

{
  HGLRC pHVar1;
  
  this->_padding_ = (longlong)&_vftable__for__FRHIUnorderedAccessView__;
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
  this->BufferResource = 0;
  this->Format = 0;
  this->UnrealFormat = '\0';
  this->Level = '\0';
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

// operator() @ 145beb4d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FOpenGLUnorderedAccessView::FOpenGLUnorderedAccessView'::__l2::<lambda_1>::operator()
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
  FOpenGLUnorderedAccessView::UpdateView((FOpenGLUnorderedAccessView *)(*(longlong *)this + 0x30));
  return;
}

// GetBaseResource @ 145c01d20

FOpenGLViewableResource * __thiscall
FOpenGLUnorderedAccessView::GetBaseResource(FOpenGLUnorderedAccessView *this)

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

// Invalidate @ 145c0a260

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall FOpenGLUnorderedAccessView::Invalidate(FOpenGLUnorderedAccessView *this)

{
  if ((this->Resource != 0) && (this->OwnsResource != false)) {
    FOpenGLDynamicRHI::InvalidateTextureResourceInCache(FOpenGLDynamicRHI::Singleton,this->Resource)
    ;
    (*glDeleteTextures)(1,&this->Resource);
  }
  this->Resource = 0;
  this->BufferResource = 0;
  this->Format = 0;
  this->UnrealFormat = '\0';
  this->Level = '\0';
  return;
}

// IsLayered @ 145c0abe0

bool __thiscall FOpenGLUnorderedAccessView::IsLayered(FOpenGLUnorderedAccessView *this)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong lVar5;
  
  cVar1 = (char)this->_padding_;
  if ((cVar1 == '\0') || (cVar1 == '\x01')) {
    return false;
  }
  lVar5 = (**(code **)(*(longlong *)this->_padding_ + 0x20))();
  if (*(char *)(lVar5 + 0x32) != '\x02') {
    cVar1 = (char)this->_padding_;
    if (((cVar1 == '\0') || (cVar1 == '\x01')) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ViewDesc.IsTexture()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xcc3,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    lVar5 = (**(code **)(*(longlong *)this->_padding_ + 0x20))();
    if (*(char *)(lVar5 + 0x32) != '\x01') {
      return false;
    }
  }
  return true;
}

// UpdateView @ 145c37620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall FOpenGLUnorderedAccessView::UpdateView(FOpenGLUnorderedAccessView *this)

{
  char cVar1;
  FRHIBuffer *pFVar2;
  longlong lVar3;
  code *pcVar4;
  FOpenGLDynamicRHI *pFVar5;
  bool bVar6;
  HGLRC pHVar7;
  FOpenGLTexture *this_00;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  undefined1 local_88;
  undefined1 local_87 [3];
  uint local_84 [3];
  FViewInfo local_78;
  longlong local_68;
  FRHIBuffer *local_60;
  FOpenGLTextureFormat *local_58;
  FViewInfo local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pHVar7 = wglGetCurrentContext();
  if (pHVar7 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    uVar10 = (uint)GIsRunningRHIInSeparateThread_InternalUseOnly;
    bVar6 = IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    local_90 = CONCAT44(local_90._4_4_,uVar10);
    local_98 = CONCAT44(local_98._4_4_,(uint)bVar6);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  uVar10 = (uint)this->_padding_;
  if ((uVar10 != 0) && (*(char *)((longlong)&this->_padding_ + 6) != '\0')) {
    FOpenGLDynamicRHI::InvalidateTextureResourceInCache(FOpenGLDynamicRHI::Singleton,uVar10);
    (*glDeleteTextures)(1,(uint *)&this->_padding_);
  }
  this_00 = (FOpenGLTexture *)0x0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  cVar1 = (char)this[-1].Resource;
  if ((cVar1 != '\0') && (cVar1 != '\x01')) {
    if ((longlong *)this[-1]._padding_ != (longlong *)0x0) {
      this_00 = (FOpenGLTexture *)(**(code **)(*(longlong *)this[-1]._padding_ + 0x48))();
    }
    FRHIViewDesc::FTextureUAV::GetViewInfo
              ((FTextureUAV *)&this[-1].Resource,&local_78,(FRHITexture *)this_00);
    if ((local_78._6_1_ & 0x10) == 0) {
      local_88 = 0;
      `FOpenGLUnorderedAccessView::UpdateView'::__l50::<lambda_2>::operator()(&local_88);
    }
    uVar8 = (ulonglong)(byte)local_78._5_1_;
    bVar6 = FOpenGLTexture::CanBeEvicted(this_00);
    if (((bVar6) || (bVar6 = FOpenGLTexture::IsEvicted(this_00), bVar6)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Texture->CanBeEvicted() && !Texture->IsEvicted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLUAV.cpp"
                           ,0xf3,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FOpenGLTexture::TryRestoreGLResource(this_00);
    *(uint *)&this->_padding_ = this_00->Resource;
    *(uint *)&this->_padding_ = GOpenGLTextureFormats[uVar8].InternalFormat[0];
    *(undefined1 *)((longlong)&this->_padding_ + 4) = local_78._5_1_;
    *(uchar *)((longlong)&this->_padding_ + 5) = local_78.MipLevel;
    return;
  }
  pFVar2 = (FRHIBuffer *)this[-1]._padding_;
  local_60 = pFVar2;
  FRHIViewDesc::FBufferUAV::GetViewInfo((FBufferUAV *)&this[-1].Resource,&local_50,pFVar2);
  if (local_50._padding_._2_1_ != '\0') {
    return;
  }
  *(byte *)((longlong)&this->_padding_ + 4) = local_50._padding_._1_1_;
  local_58 = GOpenGLTextureFormats + local_50._padding_._1_1_;
  *(uint *)&this->_padding_ = local_58->InternalFormat[0];
  if ((local_50._padding_._4_4_ != (pFVar2->Desc).Size) || ((int)local_50._padding_ != 0)) {
    local_87[0] = 0;
    `FOpenGLUnorderedAccessView::UpdateView'::__l29::<lambda_1>::operator()(local_87);
  }
  if (((local_50.bAppendBuffer != false) || (local_50.bAtomicCounter != false)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Info.bAppendBuffer && !Info.bAtomicCounter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLUAV.cpp"
                         ,0xca,L"Atomic counter / append buffer not implemented in OpenGL RHI."),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((char)local_50._padding_ != '\x01') {
    if (((char)local_50._padding_ != '\x02') && ((char)local_50._padding_ != '\x04')) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLUAV.cpp"
                         ,0xe5,L"");
      if (!bVar6) {
        return;
      }
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(undefined4 *)((longlong)&this->_padding_ + 4) =
         *(undefined4 *)((longlong)&pFVar2[1]._padding_ + 4);
    return;
  }
  iVar13 = 0x400 - FOpenGL3::NextTextureName;
  local_84[0] = 0;
  if (iVar13 < 2) {
    memcpy(local_84,FOpenGL3::TextureNamesCache + FOpenGL3::NextTextureName,(longlong)iVar13 * 4);
    (*glGenTextures)(0x400,FOpenGL3::TextureNamesCache);
    iVar11 = 1 - iVar13;
    memcpy(local_84 + iVar13,FOpenGL3::TextureNamesCache,(longlong)iVar11 << 2);
  }
  else {
    local_84[0] = FOpenGL3::TextureNamesCache[FOpenGL3::NextTextureName];
    iVar11 = FOpenGL3::NextTextureName + 1;
  }
  uVar10 = local_84[0];
  pFVar5 = FOpenGLDynamicRHI::Singleton;
  FOpenGL3::NextTextureName = iVar11;
  if ((FOpenGLBase::MaxCombinedTextureImageUnits == -1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaxCombinedTextureImageUnits != -1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBase.h"
                         ,0x7c,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar11 = FOpenGLBase::MaxCombinedTextureImageUnits;
  iVar13 = (int)(pFVar5->ContextState)._padding_;
  uVar14 = FOpenGLBase::MaxCombinedTextureImageUnits - 1;
  local_84[1] = ~uVar14 >> 0x1f;
  uVar12 = 0;
  if ((int)uVar14 < iVar13) {
    uVar12 = local_84[1];
  }
  if (uVar12 == 0) {
    local_98 = (longlong)(int)uVar14;
    local_90 = (longlong)iVar13;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar9 = (longlong)(int)uVar14 * 0x28;
  lVar3 = (pFVar5->ContextState)._padding_;
  local_68 = lVar9;
  if ((*(int *)(lVar3 + 0x10 + lVar9) != 0x8c2a) || (*(uint *)(lVar3 + 0x14 + lVar9) != uVar10)) {
    pHVar7 = wglGetCurrentContext();
    if (pHVar7 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
      uVar12 = (uint)GIsRunningRHIInSeparateThread_InternalUseOnly;
      bVar6 = IsInRHIThread();
      IsInRenderingThread();
      IsInGameThread();
      local_90 = CONCAT44(local_90._4_4_,uVar12);
      local_98 = CONCAT44(local_98._4_4_,(uint)bVar6);
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      lVar9 = local_68;
    }
    iVar13 = (int)(pFVar5->ContextState)._padding_;
    uVar12 = 0;
    if ((int)uVar14 < iVar13) {
      uVar12 = local_84[1];
    }
    if ((uVar12 == 0) &&
       (local_98 = (longlong)(int)uVar14, local_90 = (longlong)iVar13,
       bVar6 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar9 = (pFVar5->ContextState)._padding_ + lVar9;
    if ((pFVar5->ContextState).ActiveTexture != uVar14) {
      (*glActiveTexture)(iVar11 + 0x84bf);
      (pFVar5->ContextState).ActiveTexture = uVar14;
    }
    uVar12 = *(uint *)(lVar9 + 0x10);
    if ((uVar12 != 0x8c2a) && (uVar12 != 0)) {
      (*glBindTexture)(uVar12,0);
    }
    (*glBindTexture)(0x8c2a,uVar10);
    *(undefined4 *)(lVar9 + 0x18) = 0;
    *(undefined4 *)(lVar9 + 0x20) = 0;
    *(undefined4 *)(lVar9 + 0x10) = 0x8c2a;
    *(uint *)(lVar9 + 0x14) = uVar10;
  }
  (*glTexBuffer)(0x8c2a,local_58->InternalFormat[0],*(uint *)((longlong)&local_60[1]._padding_ + 4))
  ;
  *(uint *)&this->_padding_ = local_84[0];
  *(undefined1 *)((longlong)&this->_padding_ + 6) = 1;
  return;
}

// operator() @ 1504d9950

bool __thiscall `FOpenGLUnorderedAccessView::UpdateView'::__l29::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1989509970554519753>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1989509970554519753>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504d9a10

bool __thiscall `FOpenGLUnorderedAccessView::UpdateView'::__l50::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1989509970554519791>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1989509970554519791>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

