// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVEncoder
// Functions: 16

// ~FVideoDecoderOutputDummy @ 148d017a0

void __thiscall
AVEncoder::FVideoDecoderOutputDummy::~FVideoDecoderOutputDummy(FVideoDecoderOutputDummy *this)

{
  this->_padding_ = (longlong)&___7FVideoDecoderOutputDummy_AVEncoder__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Buffer).ReleaseCallback);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Buffer).RetainCallback);
  return;
}

// AddRef @ 148d033c0

int __thiscall AVEncoder::FVideoDecoderOutputDummy::AddRef(FVideoDecoderOutputDummy *this)

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

// GetAllocatedBuffer @ 148d0adb0

FVideoDecoderAllocFrameBufferResult * __thiscall
AVEncoder::FVideoDecoderOutputDummy::GetAllocatedBuffer(FVideoDecoderOutputDummy *this)

{
  return &this->Buffer;
}

// GetAspectX @ 148d0ae00

int __thiscall AVEncoder::FVideoDecoderOutputDummy::GetAspectX(FVideoDecoderOutputDummy *this)

{
  return 1;
}

// GetAspectY @ 148d0ae30

int __thiscall AVEncoder::FVideoDecoderOutputDummy::GetAspectY(FVideoDecoderOutputDummy *this)

{
  return 1;
}

// GetColorFormat @ 148d0af70

uint __thiscall AVEncoder::FVideoDecoderOutputDummy::GetColorFormat(FVideoDecoderOutputDummy *this)

{
  return 0;
}

// GetCropBottom @ 148d0b0e0

int __thiscall AVEncoder::FVideoDecoderOutputDummy::GetCropBottom(FVideoDecoderOutputDummy *this)

{
  return 0;
}

// GetCropLeft @ 148d0b110

int __thiscall AVEncoder::FVideoDecoderOutputDummy::GetCropLeft(FVideoDecoderOutputDummy *this)

{
  return 0;
}

// GetCropRight @ 148d0b140

int __thiscall AVEncoder::FVideoDecoderOutputDummy::GetCropRight(FVideoDecoderOutputDummy *this)

{
  return 0;
}

// GetCropTop @ 148d0b170

int __thiscall AVEncoder::FVideoDecoderOutputDummy::GetCropTop(FVideoDecoderOutputDummy *this)

{
  return 0;
}

// GetHeight @ 148d0b410

int __thiscall AVEncoder::FVideoDecoderOutputDummy::GetHeight(FVideoDecoderOutputDummy *this)

{
  return this->Height;
}

// GetPTS @ 148d0bbb0

long64 __thiscall AVEncoder::FVideoDecoderOutputDummy::GetPTS(FVideoDecoderOutputDummy *this)

{
  return this->PTS;
}

// GetPitchX @ 148d0bbe0

int __thiscall AVEncoder::FVideoDecoderOutputDummy::GetPitchX(FVideoDecoderOutputDummy *this)

{
  return this->Width;
}

// GetPitchY @ 148d0bc10

int __thiscall AVEncoder::FVideoDecoderOutputDummy::GetPitchY(FVideoDecoderOutputDummy *this)

{
  return this->Height;
}

// GetWidth @ 148d0bed0

int __thiscall AVEncoder::FVideoDecoderOutputDummy::GetWidth(FVideoDecoderOutputDummy *this)

{
  return this->Width;
}

// Release @ 148d11810

int __thiscall AVEncoder::FVideoDecoderOutputDummy::Release(FVideoDecoderOutputDummy *this)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = &this->RefCount;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 + -1 == 0) && (this != (FVideoDecoderOutputDummy *)0x0)) {
    (**(code **)(this->_padding_ + 0x78))(this,1);
  }
  return iVar2 + -1;
}

