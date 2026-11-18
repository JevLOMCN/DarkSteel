// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 1

// operator= @ 14f0c0e10

TUniquePtr<Audio::FConvolutionReverb,TDefaultDelete<Audio::FConvolutionReverb>_> * __thiscall
TUniquePtr<Audio::FConvolutionReverb,TDefaultDelete<Audio::FConvolutionReverb>_>::operator=
          (TUniquePtr<Audio::FConvolutionReverb,TDefaultDelete<Audio::FConvolutionReverb>_> *this,
          TUniquePtr<Audio::FConvolutionReverb,TDefaultDelete<Audio::FConvolutionReverb>_> *param_1)

{
  FConvolutionReverb *this_00;
  
  if (this != param_1) {
    this_00 = this->Ptr;
    this->Ptr = param_1->Ptr;
    param_1->Ptr = (FConvolutionReverb *)0x0;
    if (this_00 != (FConvolutionReverb *)0x0) {
      Audio::FConvolutionReverb::~FConvolutionReverb(this_00);
      ::operator_delete(this_00,0xd0);
    }
    return this;
  }
  return this;
}

