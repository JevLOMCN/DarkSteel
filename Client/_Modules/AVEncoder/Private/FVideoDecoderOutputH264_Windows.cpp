// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVEncoder
// Functions: 17

// FVideoDecoderOutputH264_Windows @ 148d00430

FVideoDecoderOutputH264_Windows * __thiscall
AVEncoder::FVideoDecoderOutputH264_Windows::FVideoDecoderOutputH264_Windows
          (FVideoDecoderOutputH264_Windows *this)

{
  this->_padding_ = (longlong)&___7FVideoDecoderOutputH264_Windows_AVEncoder__6B_;
  (this->Buffer).CallbackValue = (void *)0x0;
  (this->Buffer).AllocatedBuffer = (void *)0x0;
  (this->Buffer).AllocatedSize = 0;
  (this->Buffer).AllocatedPlanesNum = 0;
  (this->Buffer).AllocatedPlaneLayout = 0;
  (this->Buffer).AllocatedPlaneDesc[0].Width = 0;
  (this->Buffer).AllocatedPlaneDesc[0].Height = 0;
  (this->Buffer).AllocatedPlaneDesc[0].BytesPerPixel = 0;
  (this->Buffer).AllocatedPlaneDesc[0].ByteOffsetToFirstPixel = 0;
  (this->Buffer).AllocatedPlaneDesc[0].ByteOffsetBetweenPixels = 0;
  (this->Buffer).AllocatedPlaneDesc[0].ByteOffsetBetweenRows = 0;
  (this->Buffer).AllocatedPlaneDesc[1].Width = 0;
  (this->Buffer).AllocatedPlaneDesc[1].Height = 0;
  (this->Buffer).AllocatedPlaneDesc[1].BytesPerPixel = 0;
  (this->Buffer).AllocatedPlaneDesc[1].ByteOffsetToFirstPixel = 0;
  (this->Buffer).AllocatedPlaneDesc[1].ByteOffsetBetweenPixels = 0;
  (this->Buffer).AllocatedPlaneDesc[1].ByteOffsetBetweenRows = 0;
  (this->Buffer).AllocatedPlaneDesc[2].Width = 0;
  (this->Buffer).AllocatedPlaneDesc[2].Height = 0;
  (this->Buffer).AllocatedPlaneDesc[2].BytesPerPixel = 0;
  (this->Buffer).AllocatedPlaneDesc[2].ByteOffsetToFirstPixel = 0;
  (this->Buffer).AllocatedPlaneDesc[2].ByteOffsetBetweenPixels = 0;
  (this->Buffer).AllocatedPlaneDesc[2].ByteOffsetBetweenRows = 0;
  (this->Buffer).AllocatedPlaneDesc[3].Width = 0;
  (this->Buffer).AllocatedPlaneDesc[3].Height = 0;
  (this->Buffer).AllocatedPlaneDesc[3].BytesPerPixel = 0;
  (this->Buffer).AllocatedPlaneDesc[3].ByteOffsetToFirstPixel = 0;
  (this->Buffer).AllocatedPlaneDesc[3].ByteOffsetBetweenPixels = 0;
  (this->Buffer).AllocatedPlaneDesc[3].ByteOffsetBetweenRows = 0;
  *(undefined8 *)&(this->Buffer).RetainCallback.field_0x10 = 0;
  *(undefined8 *)&(this->Buffer).RetainCallback = 0;
  *(undefined8 *)&(this->Buffer).RetainCallback.field_0x8 = 0;
  *(undefined8 *)&(this->Buffer).ReleaseCallback.field_0x10 = 0;
  *(undefined8 *)&(this->Buffer).ReleaseCallback = 0;
  *(undefined8 *)&(this->Buffer).ReleaseCallback.field_0x8 = 0;
  this->Height = 0;
  this->PTS = 0;
  this->CropLeft = 0;
  this->CropRight = 0;
  this->CropTop = 0;
  this->CropBottom = 0;
  this->PitchY = 0;
  this->ColorFormat = 0;
  this->NativeDecoderOutput = (FNativeVideoDecoderOutput *)0x0;
  this->RefCount = 1;
  this->Width = 0;
  this->AspectX = 1;
  this->AspectY = 1;
  this->PitchX = 0;
  this->bIsValid = true;
  return this;
}

// ~FVideoDecoderOutputH264_Windows @ 148d017e0

void __thiscall
AVEncoder::FVideoDecoderOutputH264_Windows::~FVideoDecoderOutputH264_Windows
          (FVideoDecoderOutputH264_Windows *this)

{
  this->_padding_ = (longlong)&___7FVideoDecoderOutputH264_Windows_AVEncoder__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Buffer).ReleaseCallback);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Buffer).RetainCallback);
  return;
}

// AddRef @ 148d033e0

int __thiscall
AVEncoder::FVideoDecoderOutputH264_Windows::AddRef(FVideoDecoderOutputH264_Windows *this)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = &this->RefCount;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}

// GetAllocatedBuffer @ 148d0adc0

FVideoDecoderAllocFrameBufferResult * __thiscall
AVEncoder::FVideoDecoderOutputH264_Windows::GetAllocatedBuffer
          (FVideoDecoderOutputH264_Windows *this)

{
  return &this->Buffer;
}

// GetAspectX @ 148d0ae10

int __thiscall
AVEncoder::FVideoDecoderOutputH264_Windows::GetAspectX(FVideoDecoderOutputH264_Windows *this)

{
  return this->AspectX;
}

// GetAspectY @ 148d0ae40

int __thiscall
AVEncoder::FVideoDecoderOutputH264_Windows::GetAspectY(FVideoDecoderOutputH264_Windows *this)

{
  return this->AspectY;
}

// GetColorFormat @ 148d0af80

uint __thiscall
AVEncoder::FVideoDecoderOutputH264_Windows::GetColorFormat(FVideoDecoderOutputH264_Windows *this)

{
  return this->ColorFormat;
}

// GetCropBottom @ 148d0b0f0

int __thiscall
AVEncoder::FVideoDecoderOutputH264_Windows::GetCropBottom(FVideoDecoderOutputH264_Windows *this)

{
  return this->CropBottom;
}

// GetCropLeft @ 148d0b120

int __thiscall
AVEncoder::FVideoDecoderOutputH264_Windows::GetCropLeft(FVideoDecoderOutputH264_Windows *this)

{
  return this->CropLeft;
}

// GetCropRight @ 148d0b150

int __thiscall
AVEncoder::FVideoDecoderOutputH264_Windows::GetCropRight(FVideoDecoderOutputH264_Windows *this)

{
  return this->CropRight;
}

// GetCropTop @ 148d0b180

int __thiscall
AVEncoder::FVideoDecoderOutputH264_Windows::GetCropTop(FVideoDecoderOutputH264_Windows *this)

{
  return this->CropTop;
}

// GetHeight @ 148d0b420

int __thiscall
AVEncoder::FVideoDecoderOutputH264_Windows::GetHeight(FVideoDecoderOutputH264_Windows *this)

{
  return this->Height;
}

// GetPTS @ 148d0bbc0

long64 __thiscall
AVEncoder::FVideoDecoderOutputH264_Windows::GetPTS(FVideoDecoderOutputH264_Windows *this)

{
  return this->PTS;
}

// GetPitchX @ 148d0bbf0

int __thiscall
AVEncoder::FVideoDecoderOutputH264_Windows::GetPitchX(FVideoDecoderOutputH264_Windows *this)

{
  return this->PitchX;
}

// GetPitchY @ 148d0bc20

int __thiscall
AVEncoder::FVideoDecoderOutputH264_Windows::GetPitchY(FVideoDecoderOutputH264_Windows *this)

{
  return this->PitchY;
}

// GetWidth @ 148d0bee0

int __thiscall
AVEncoder::FVideoDecoderOutputH264_Windows::GetWidth(FVideoDecoderOutputH264_Windows *this)

{
  return this->Width;
}

// Release @ 148d11850

int __thiscall
AVEncoder::FVideoDecoderOutputH264_Windows::Release(FVideoDecoderOutputH264_Windows *this)

{
  int *piVar1;
  int iVar2;
  FNativeVideoDecoderOutput *pFVar3;
  
  LOCK();
  piVar1 = &this->RefCount;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 == 0) {
    pFVar3 = this->NativeDecoderOutput;
    if (pFVar3 != (FNativeVideoDecoderOutput *)0x0) {
      (**(code **)*pFVar3)(pFVar3,1);
    }
    this->NativeDecoderOutput = (FNativeVideoDecoderOutput *)0x0;
    (**(code **)(this->_padding_ + 0x78))(this,1);
  }
  return iVar2 + -1;
}

