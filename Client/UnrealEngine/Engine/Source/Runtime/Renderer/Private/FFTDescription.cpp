// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// FFTDescription @ 1448ecf70

FFTDescription * __thiscall
GPUFFT::FFTDescription::FFTDescription
          (FFTDescription *this,FFT_XFORM_TYPE *param_1,TIntPoint<int> *param_2)

{
  TIntPoint<int> *pTVar1;
  FFT_XFORM_TYPE FVar2;
  bool bVar3;
  TIntPoint<int> *pTVar4;
  
  FVar2 = *param_1;
  this->XFormType = FVar2;
  this->SignalLength = 0;
  this->NumScanLines = 0;
  this->ComputePassFlags = Compute;
  if ((FVar2 == FORWARD_HORIZONTAL) || (FVar2 == INVERSE_HORIZONTAL)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  pTVar1 = (TIntPoint<int> *)((longlong)&param_2->field0_0x0 + 4);
  pTVar4 = pTVar1;
  if (!bVar3) {
    pTVar4 = param_2;
    param_2 = pTVar1;
  }
  this->SignalLength = (param_2->field0_0x0)._s_0.X;
  this->NumScanLines = (pTVar4->field0_0x0)._s_0.X;
  return this;
}

// FFT_TypeName @ 144918b60

wchar_t * __thiscall GPUFFT::FFTDescription::FFT_TypeName(FFTDescription *this)

{
  FFT_XFORM_TYPE FVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  
  FVar1 = this->XFormType;
  if (FVar1 == FORWARD_HORIZONTAL) {
    return L"Forward Horizontal";
  }
  if (FVar1 == INVERSE_HORIZONTAL) {
    return L"Inverse Horizontal";
  }
  if (FVar1 == FORWARD_VERTICAL) {
    return L"Forward Vertical";
  }
  if (FVar1 == INVERSE_VERTICAL) {
    return L"Inverse Vertical";
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUFastFourierTransform.cpp"
                     ,0x4a,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pwVar4 = (wchar_t *)(*pcVar2)();
    return pwVar4;
  }
  return L"Error";
}

// IsForward @ 14492a460

bool __thiscall GPUFFT::FFTDescription::IsForward(FFTDescription *this)

{
  if ((this->XFormType != FORWARD_HORIZONTAL) && (this->XFormType != FORWARD_VERTICAL)) {
    return false;
  }
  return true;
}

// IsHorizontal @ 14492a530

bool __thiscall GPUFFT::FFTDescription::IsHorizontal(FFTDescription *this)

{
  if ((this->XFormType != FORWARD_HORIZONTAL) && (this->XFormType != INVERSE_HORIZONTAL)) {
    return false;
  }
  return true;
}

// TransformExtent @ 1449378d0

TIntPoint<int> __thiscall GPUFFT::FFTDescription::TransformExtent(FFTDescription *this)

{
  uint uVar1;
  TIntPoint<int>_u_0 in_RDX;
  
  if ((this->XFormType != FORWARD_HORIZONTAL) && (this->XFormType != INVERSE_HORIZONTAL)) {
    uVar1 = this->SignalLength;
    *(uint *)in_RDX = this->NumScanLines;
    *(uint *)((longlong)in_RDX + 4) = uVar1;
    return (TIntPoint<int>)in_RDX;
  }
  uVar1 = this->NumScanLines;
  *(uint *)in_RDX = this->SignalLength;
  *(uint *)((longlong)in_RDX + 4) = uVar1;
  return (TIntPoint<int>)in_RDX;
}

