// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVEncoder
// Functions: 2

// DestroyObject @ 148d09840

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<unsigned_char,`AVEncoder::FCodecPacket::Create'::__l2::<lambda_1>,1>
::DestroyObject(void *this)

{
  FMemory::Free(*(void **)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 148d09850

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<AVEncoder::FVideoEncoderInputFrameImpl,SharedPointerInternals::DefaultDeleter<AVEncoder::FVideoEncoderInputFrameImpl>,1>
::DestroyObject(TReferenceControllerWithDeleter<AVEncoder::FVideoEncoderInputFrameImpl,SharedPointerInternals::DefaultDeleter<AVEncoder::FVideoEncoderInputFrameImpl>,1>
                *this)

{
  FVideoEncoderInputFrameImpl *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FVideoEncoderInputFrameImpl *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d09861. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x10))(pFVar1,1);
    return;
  }
  return;
}

