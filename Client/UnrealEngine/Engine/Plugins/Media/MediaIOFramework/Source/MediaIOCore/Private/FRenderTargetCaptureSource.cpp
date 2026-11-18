// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 9

// GetRenderTarget @ 14d7ad560

UTextureRenderTarget2D * __thiscall
UE::MediaCapture::Private::FRenderTargetCaptureSource::GetRenderTarget
          (FRenderTargetCaptureSource *this)

{
  UTextureRenderTarget2D *pUVar1;
  
  pUVar1 = (UTextureRenderTarget2D *)FWeakObjectPtr::Get(&(this->RenderTarget).WeakPtr);
  return pUVar1;
}

// GetSize @ 14d7adb70

TIntPoint<int> __thiscall
UE::MediaCapture::Private::FRenderTargetCaptureSource::GetSize(FRenderTargetCaptureSource *this)

{
  TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr> *this_00;
  undefined4 uVar1;
  bool bVar2;
  UObject *pUVar3;
  TIntPoint<int>_u_0 in_RDX;
  
  this_00 = &this->RenderTarget;
  bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    uVar1 = *(undefined4 *)&pUVar3[8].field_0x1c;
    pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    *(undefined4 *)((longlong)in_RDX + 4) = uVar1;
    *(undefined4 *)in_RDX = *(undefined4 *)&pUVar3[8].field_0x18;
    return (TIntPoint<int>)in_RDX;
  }
  *(undefined8 *)in_RDX = 0;
  return (TIntPoint<int>)in_RDX;
}

// GetSourceTextureForInput_RenderThread @ 14d7add70

TRefCountPtr<FRHITexture> __thiscall
UE::MediaCapture::Private::FRenderTargetCaptureSource::GetSourceTextureForInput_RenderThread
          (FRenderTargetCaptureSource *this)

{
  TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr> *this_00;
  FRHIResource *this_01;
  bool bVar1;
  UTextureRenderTarget *pUVar2;
  FTextureRenderTargetResource *pFVar3;
  longlong lVar4;
  FRHITexture *in_RDX;
  
  this_00 = &this->RenderTarget;
  bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr,false,true);
  if (bVar1) {
    pUVar2 = (UTextureRenderTarget *)FWeakObjectPtr::GetEvenIfUnreachable(&this_00->WeakPtr);
    pFVar3 = UTextureRenderTarget::GetRenderTargetResource(pUVar2);
    if (pFVar3 != (FTextureRenderTargetResource *)0x0) {
      pUVar2 = (UTextureRenderTarget *)FWeakObjectPtr::GetEvenIfUnreachable(&this_00->WeakPtr);
      pFVar3 = UTextureRenderTarget::GetRenderTargetResource(pUVar2);
      lVar4 = (**(code **)(pFVar3->_padding_ + 0xa0))(pFVar3);
      this_01 = *(FRHIResource **)(lVar4 + 0x20);
      in_RDX->_padding_ = (longlong)this_01;
      if (this_01 == (FRHIResource *)0x0) {
        return (TRefCountPtr<FRHITexture>)in_RDX;
      }
      FRHIResource::AddRef(this_01);
      return (TRefCountPtr<FRHITexture>)in_RDX;
    }
  }
  in_RDX->_padding_ = 0;
  return (TRefCountPtr<FRHITexture>)in_RDX;
}

// GetSourceType @ 14d7adef0

EMediaCaptureSourceType __thiscall
UE::MediaCapture::Private::FRenderTargetCaptureSource::GetSourceType
          (FRenderTargetCaptureSource *this)

{
  return RENDER_TARGET;
}

// IsValid @ 14d7b1aa0

bool __thiscall
UE::MediaCapture::Private::FRenderTargetCaptureSource::IsValid(FRenderTargetCaptureSource *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->RenderTarget).WeakPtr);
  return bVar1;
}

// PostInitialize @ 14d7b6000

bool __thiscall
UE::MediaCapture::Private::FRenderTargetCaptureSource::PostInitialize
          (FRenderTargetCaptureSource *this)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)pUVar2 + 0x2d8);
  pUVar3 = FWeakObjectPtr::Get(&(this->RenderTarget).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x00014d7b604c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(pUVar2,pUVar3);
  return (bool)uVar1;
}

// ResizeSourceBuffer @ 14d7bb240

void __thiscall
UE::MediaCapture::Private::FRenderTargetCaptureSource::ResizeSourceBuffer
          (FRenderTargetCaptureSource *this,TIntPoint<int> param_1)

{
  bool bVar1;
  UTextureRenderTarget2D *this_00;
  uint uStackX_14;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->RenderTarget).WeakPtr);
  if (bVar1) {
    this_00 = (UTextureRenderTarget2D *)FWeakObjectPtr::Get(&(this->RenderTarget).WeakPtr);
    uStackX_14 = param_1.field0_0x0._4_4_;
    UTextureRenderTarget2D::ResizeTarget(this_00,param_1.field0_0x0._0_4_,uStackX_14);
  }
  return;
}

// UpdateSourceImpl @ 14d7c2d90

bool __thiscall
UE::MediaCapture::Private::FRenderTargetCaptureSource::UpdateSourceImpl
          (FRenderTargetCaptureSource *this)

{
  code *UNRECOVERED_JUMPTABLE;
  bool bVar1;
  undefined1 uVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar1) {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)pUVar3 + 0x2f0);
    pUVar4 = FWeakObjectPtr::Get(&(this->RenderTarget).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x00014d7c2de9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(pUVar3,pUVar4);
    return (bool)uVar2;
  }
  return false;
}

// ValidateSource @ 14d7c3a50

bool __thiscall
UE::MediaCapture::Private::FRenderTargetCaptureSource::ValidateSource
          (FRenderTargetCaptureSource *this,TIntPoint<int> *param_1,EPixelFormat param_2,
          bool param_3)

{
  bool bVar1;
  UTextureRenderTarget2D *pUVar2;
  
  pUVar2 = (UTextureRenderTarget2D *)FWeakObjectPtr::Get(&(this->RenderTarget).WeakPtr);
  bVar1 = ValidateTextureRenderTarget2D
                    (pUVar2,(FMediaCaptureOptions *)&this->_padding_,param_1,param_2,param_3);
  return bVar1;
}

