// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 2

// ~IConvolutionAlgorithmFactory @ 1444a6910

void __thiscall
Audio::IConvolutionAlgorithmFactory::~IConvolutionAlgorithmFactory
          (IConvolutionAlgorithmFactory *this)

{
  *this = (IConvolutionAlgorithmFactory)&___7IConvolutionAlgorithmFactory_Audio__6B_;
  return;
}

// GetModularFeatureName @ 1444bfe10

FName __cdecl Audio::IConvolutionAlgorithmFactory::GetModularFeatureName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&ModularFeatureName,L"AudioConvolutionAlgorithmFactory");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = ModularFeatureName;
  return in_RCX;
}

