// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVEncoder
// Functions: 16

// ~FVideoDecoderOutputMPEG4 @ 148d01820

void __thiscall
AVEncoder::FVideoDecoderOutputMPEG4::~FVideoDecoderOutputMPEG4(FVideoDecoderOutputMPEG4 *this)

{
  this->_padding_ = (longlong)&___7FVideoDecoderOutputMPEG4_AVEncoder__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Buffer).ReleaseCallback);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Buffer).RetainCallback);
  return;
}

// AddRef @ 148d03400

int __thiscall AVEncoder::FVideoDecoderOutputMPEG4::AddRef(FVideoDecoderOutputMPEG4 *this)

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

// GetAllocatedBuffer @ 148d0add0

FVideoDecoderAllocFrameBufferResult * __thiscall
AVEncoder::FVideoDecoderOutputMPEG4::GetAllocatedBuffer(FVideoDecoderOutputMPEG4 *this)

{
  return &this->Buffer;
}

// GetAspectX @ 148d0ae20

int __thiscall AVEncoder::FVideoDecoderOutputMPEG4::GetAspectX(FVideoDecoderOutputMPEG4 *this)

{
  return 1;
}

// GetAspectY @ 148d0ae50

int __thiscall AVEncoder::FVideoDecoderOutputMPEG4::GetAspectY(FVideoDecoderOutputMPEG4 *this)

{
  return 1;
}

// GetColorFormat @ 148d0af90

uint __thiscall AVEncoder::FVideoDecoderOutputMPEG4::GetColorFormat(FVideoDecoderOutputMPEG4 *this)

{
  return 0;
}

// GetCropBottom @ 148d0b100

int __thiscall AVEncoder::FVideoDecoderOutputMPEG4::GetCropBottom(FVideoDecoderOutputMPEG4 *this)

{
  return 0;
}

// GetCropLeft @ 148d0b130

int __thiscall AVEncoder::FVideoDecoderOutputMPEG4::GetCropLeft(FVideoDecoderOutputMPEG4 *this)

{
  return 0;
}

// GetCropRight @ 148d0b160

int __thiscall AVEncoder::FVideoDecoderOutputMPEG4::GetCropRight(FVideoDecoderOutputMPEG4 *this)

{
  return 0;
}

// GetCropTop @ 148d0b190

int __thiscall AVEncoder::FVideoDecoderOutputMPEG4::GetCropTop(FVideoDecoderOutputMPEG4 *this)

{
  return 0;
}

// GetHeight @ 148d0b430

int __thiscall AVEncoder::FVideoDecoderOutputMPEG4::GetHeight(FVideoDecoderOutputMPEG4 *this)

{
  return this->Height;
}

// GetPTS @ 148d0bbd0

long64 __thiscall AVEncoder::FVideoDecoderOutputMPEG4::GetPTS(FVideoDecoderOutputMPEG4 *this)

{
  return this->PTS;
}

// GetPitchX @ 148d0bc00

int __thiscall AVEncoder::FVideoDecoderOutputMPEG4::GetPitchX(FVideoDecoderOutputMPEG4 *this)

{
  return this->Pitch;
}

// GetPitchY @ 148d0bc30

int __thiscall AVEncoder::FVideoDecoderOutputMPEG4::GetPitchY(FVideoDecoderOutputMPEG4 *this)

{
  return this->Height;
}

// GetWidth @ 148d0bef0

int __thiscall AVEncoder::FVideoDecoderOutputMPEG4::GetWidth(FVideoDecoderOutputMPEG4 *this)

{
  return this->Width;
}

// Release @ 148d118c0

int __thiscall AVEncoder::FVideoDecoderOutputMPEG4::Release(FVideoDecoderOutputMPEG4 *this)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = &this->RefCount;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 + -1 == 0) && (this != (FVideoDecoderOutputMPEG4 *)0x0)) {
    (**(code **)(this->_padding_ + 0x78))(this,1);
  }
  return iVar2 + -1;
}

