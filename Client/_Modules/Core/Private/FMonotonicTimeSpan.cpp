// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// operator- @ 141c8f070

FMonotonicTimeSpan __thiscall
UE::FMonotonicTimeSpan::operator-(FMonotonicTimeSpan *this,FMonotonicTimeSpan param_1)

{
  double in_R8;
  
  *(double *)param_1.Time = this->Time - in_R8;
  return (FMonotonicTimeSpan)param_1.Time;
}

// operator- @ 141c8f090

FMonotonicTimeSpan __thiscall UE::FMonotonicTimeSpan::operator-(FMonotonicTimeSpan *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = CONCAT44((uint)((ulonglong)this->Time >> 0x20) ^
                     __xmm_80000000000000008000000000000000._4_4_,
                     SUB84(this->Time,0) ^ (uint)__xmm_80000000000000008000000000000000);
  return (FMonotonicTimeSpan)(double)in_RDX;
}

// operator+ @ 141c8f0d0

FMonotonicTimeSpan __thiscall
UE::FMonotonicTimeSpan::operator+(FMonotonicTimeSpan *this,FMonotonicTimeSpan param_1)

{
  double in_R8;
  
  *(double *)param_1.Time = in_R8 + this->Time;
  return (FMonotonicTimeSpan)param_1.Time;
}

// Infinity @ 141c94080

FMonotonicTimeSpan __cdecl UE::FMonotonicTimeSpan::Infinity(void)

{
  undefined8 *in_RCX;
  
  *in_RCX = 0x7ff0000000000000;
  return (FMonotonicTimeSpan)(double)in_RCX;
}

// IsNaN @ 141c94530

bool __thiscall UE::FMonotonicTimeSpan::IsNaN(FMonotonicTimeSpan *this)

{
  int iVar1;
  
  iVar1 = _isnan(this->Time);
  return iVar1 != 0;
}

