// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 2

// GetModularFeatureName @ 1444bfe90

FName __cdecl Audio::IFFTAlgorithmFactory::GetModularFeatureName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&ModularFeatureName,L"AudioFFTAlgorithmFactory");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = ModularFeatureName;
  return in_RCX;
}

// ~IFFTAlgorithmFactory @ 1444f49d0

void __thiscall Audio::IFFTAlgorithmFactory::~IFFTAlgorithmFactory(IFFTAlgorithmFactory *this)

{
  *this = (IFFTAlgorithmFactory)&___7IFFTAlgorithmFactory_Audio__6B_;
  return;
}

