// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 8

// ~FCaptureSource @ 14d78c500

void __thiscall UE::MediaCapture::Private::FCaptureSource::~FCaptureSource(FCaptureSource *this)

{
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            (&(this->CaptureOptions).ColorConversionSettings);
  return;
}

// GetCaptureType @ 14d7a9640

ECaptureType __thiscall
UE::MediaCapture::Private::FCaptureSource::GetCaptureType(FCaptureSource *this)

{
  return OnTick;
}

// GetRenderTarget @ 14d7ad550

UTextureRenderTarget2D * __thiscall
UE::MediaCapture::Private::FCaptureSource::GetRenderTarget(FCaptureSource *this)

{
  return (UTextureRenderTarget2D *)0x0;
}

// GetSceneViewport @ 14d7adab0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TSharedPtr<FSceneViewport,1> * __thiscall
UE::MediaCapture::Private::FCaptureSource::GetSceneViewport
          (FCaptureSource *this,TSharedPtr<FSceneViewport,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (FSceneViewport *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetSourceTextureForInput_RenderThread @ 14d7add50

TRefCountPtr<FRHITexture> __thiscall
UE::MediaCapture::Private::FCaptureSource::GetSourceTextureForInput_RenderThread
          (FCaptureSource *this)

{
  FRHITexture *in_RDX;
  
  in_RDX->_padding_ = 0;
  return (TRefCountPtr<FRHITexture>)in_RDX;
}

// ResetSourceBufferSize @ 14d7bb160

void __thiscall
UE::MediaCapture::Private::FCaptureSource::ResetSourceBufferSize(FCaptureSource *this,bool param_1)

{
  return;
}

// ResizeSourceBuffer @ 14d7bb230

void __thiscall
UE::MediaCapture::Private::FCaptureSource::ResizeSourceBuffer
          (FCaptureSource *this,TIntPoint<int> param_1)

{
  return;
}

// UpdateSourceImpl @ 14d7c2d80

bool __thiscall UE::MediaCapture::Private::FCaptureSource::UpdateSourceImpl(FCaptureSource *this)

{
  return true;
}

