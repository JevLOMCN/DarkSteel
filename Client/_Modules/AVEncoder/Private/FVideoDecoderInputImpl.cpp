// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVEncoder
// Functions: 12

// FVideoDecoderInputImpl @ 148d00300

FVideoDecoderInputImpl * __thiscall
AVEncoder::FVideoDecoderInputImpl::FVideoDecoderInputImpl
          (FVideoDecoderInputImpl *this,FInputData *param_1)

{
  this->_padding_ = (longlong)&___7FVideoDecoderInputImpl_AVEncoder__6B_;
  this->AccessUnit = param_1->EncodedData;
  this->AccessUnitSize = param_1->EncodedDataSize;
  this->PTS = param_1->PTS;
  this->Width = param_1->Width;
  this->Height = param_1->Height;
  this->Rotation = param_1->Rotation;
  this->ContentType = param_1->ContentType;
  this->bIsKeyframe = param_1->bIsKeyframe;
  this->bIsCompleteFrame = param_1->bIsComplete;
  this->bMissingFrames = param_1->bMissingFrames;
  return this;
}

// ~FVideoDecoderInputImpl @ 148d016b0

void __thiscall
AVEncoder::FVideoDecoderInputImpl::~FVideoDecoderInputImpl(FVideoDecoderInputImpl *this)

{
  return;
}

// GetContentType @ 148d0b0d0

int __thiscall AVEncoder::FVideoDecoderInputImpl::GetContentType(FVideoDecoderInputImpl *this)

{
  return this->ContentType;
}

// GetData @ 148d0b220

void * __thiscall AVEncoder::FVideoDecoderInputImpl::GetData(FVideoDecoderInputImpl *this)

{
  return this->AccessUnit;
}

// GetDataSize @ 148d0b230

int __thiscall AVEncoder::FVideoDecoderInputImpl::GetDataSize(FVideoDecoderInputImpl *this)

{
  return this->AccessUnitSize;
}

// GetHeight @ 148d0b400

int __thiscall AVEncoder::FVideoDecoderInputImpl::GetHeight(FVideoDecoderInputImpl *this)

{
  return this->Height;
}

// GetPTS @ 148d0bba0

long64 __thiscall AVEncoder::FVideoDecoderInputImpl::GetPTS(FVideoDecoderInputImpl *this)

{
  return this->PTS;
}

// GetRotation @ 148d0bc40

int __thiscall AVEncoder::FVideoDecoderInputImpl::GetRotation(FVideoDecoderInputImpl *this)

{
  return this->Rotation;
}

// GetWidth @ 148d0bec0

int __thiscall AVEncoder::FVideoDecoderInputImpl::GetWidth(FVideoDecoderInputImpl *this)

{
  return this->Width;
}

// HasMissingFrames @ 148d0bf80

bool __thiscall AVEncoder::FVideoDecoderInputImpl::HasMissingFrames(FVideoDecoderInputImpl *this)

{
  return this->bMissingFrames;
}

// IsCompleteFrame @ 148d0d360

bool __thiscall AVEncoder::FVideoDecoderInputImpl::IsCompleteFrame(FVideoDecoderInputImpl *this)

{
  return this->bIsCompleteFrame;
}

// IsKeyframe @ 148d0d390

bool __thiscall AVEncoder::FVideoDecoderInputImpl::IsKeyframe(FVideoDecoderInputImpl *this)

{
  return this->bIsKeyframe;
}

