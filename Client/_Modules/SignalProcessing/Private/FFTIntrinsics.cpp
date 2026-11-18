// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 1

// GetScalingExponent @ 1444c12c0

float __cdecl Audio::FFTIntrinsics::GetScalingExponent(EFFTScaling param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (param_1 != None) {
    if (param_1 == MultipliedByFFTSize) {
      return __real_3f800000;
    }
    if (param_1 == MultipliedBySqrtFFTSize) {
      return __real_3f000000;
    }
    if (param_1 == DividedByFFTSize) {
      return __real_bf800000;
    }
    if (param_1 == DividedBySqrtFFTSize) {
      return __real_bf000000;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AudioFFT.cpp"
                       ,0xe7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  return 0.0;
}

