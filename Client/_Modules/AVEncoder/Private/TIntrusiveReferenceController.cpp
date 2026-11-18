// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVEncoder
// Functions: 2

// DestroyObject @ 148d09820

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<AVEncoder::FVideoDecoderInputImpl,1>::
DestroyObject(TIntrusiveReferenceController<AVEncoder::FVideoDecoderInputImpl,1> *this)

{
  return;
}

// DestroyObject @ 148d09830

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<AVEncoder::FVideoEncoderInputImpl,1>::
DestroyObject(TIntrusiveReferenceController<AVEncoder::FVideoEncoderInputImpl,1> *this)

{
  AVEncoder::FVideoEncoderInputImpl::~FVideoEncoderInputImpl
            ((FVideoEncoderInputImpl *)&this->ObjectStorage);
  return;
}

