// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 6

// GetFactoryName @ 1444e8ba0

FName __thiscall Audio::FVectorFFTFactory::GetFactoryName(FVectorFFTFactory *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::FactoryName,L"FVectorFFTFactory");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RDX = ::FactoryName;
  return in_RDX;
}

// IsHardwareAccelerated @ 1444e8c20

bool __thiscall Audio::FVectorFFTFactory::IsHardwareAccelerated(FVectorFFTFactory *this)

{
  return false;
}

// Expects128BitAlignedArrays @ 1444e8c30

bool __thiscall Audio::FVectorFFTFactory::Expects128BitAlignedArrays(FVectorFFTFactory *this)

{
  return false;
}

// AreFFTSettingsSupported @ 1444e8c40

bool __thiscall
Audio::FVectorFFTFactory::AreFFTSettingsSupported(FVectorFFTFactory *this,FFFTSettings *param_1)

{
  if (((4 < param_1->Log2Size) && (param_1->bArrays128BitAligned != false)) &&
     (param_1->Log2Size < 0x12)) {
    return true;
  }
  return false;
}

// NewFFTAlgorithm @ 1444e8c60

TUniquePtr<Audio::IFFTAlgorithm,TDefaultDelete<Audio::IFFTAlgorithm>_> __thiscall
Audio::FVectorFFTFactory::NewFFTAlgorithm(FVectorFFTFactory *this,FFFTSettings *param_1)

{
  char cVar1;
  FVectorRealToComplexFFT *this_00;
  FFFTSettings FVar2;
  int *in_R8;
  
  cVar1 = (**(code **)((longlong)*this + 0x20))();
  if (cVar1 != '\0') {
    this_00 = ::operator_new(0xa8);
    if (this_00 != (FVectorRealToComplexFFT *)0x0) {
      FVar2 = (FFFTSettings)FVectorRealToComplexFFT::FVectorRealToComplexFFT(this_00,*in_R8);
      *param_1 = FVar2;
      return (TUniquePtr<Audio::IFFTAlgorithm,TDefaultDelete<Audio::IFFTAlgorithm>_>)
             (IFFTAlgorithm *)param_1;
    }
  }
  param_1->Log2Size = 0;
  param_1->bArrays128BitAligned = false;
  param_1->bEnableHardwareAcceleration = false;
  *(undefined2 *)&param_1->field_0x6 = 0;
  return (TUniquePtr<Audio::IFFTAlgorithm,TDefaultDelete<Audio::IFFTAlgorithm>_>)
         (IFFTAlgorithm *)param_1;
}

// ~FVectorFFTFactory @ 1444f4820

void __thiscall Audio::FVectorFFTFactory::~FVectorFFTFactory(FVectorFFTFactory *this)

{
  *this = (FVectorFFTFactory)&___7IFFTAlgorithmFactory_Audio__6B_;
  return;
}

