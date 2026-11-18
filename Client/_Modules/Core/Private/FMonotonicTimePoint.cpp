// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// Now @ 1418e9770

FMonotonicTimePoint __cdecl UE::FMonotonicTimePoint::Now(void)

{
  double *in_RCX;
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  *in_RCX = (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
  return (FMonotonicTimePoint)(double)in_RCX;
}

// operator- @ 141c8f050

FMonotonicTimePoint __thiscall
UE::FMonotonicTimePoint::operator-(FMonotonicTimePoint *this,FMonotonicTimeSpan param_1)

{
  double in_R8;
  
  *(double *)param_1.Time = this->Time - in_R8;
  return (FMonotonicTimePoint)param_1.Time;
}

// operator+ @ 141c8f0b0

FMonotonicTimePoint __thiscall
UE::FMonotonicTimePoint::operator+(FMonotonicTimePoint *this,FMonotonicTimeSpan param_1)

{
  double in_R8;
  
  *(double *)param_1.Time = in_R8 + this->Time;
  return (FMonotonicTimePoint)param_1.Time;
}

// Infinity @ 141c94060

FMonotonicTimePoint __cdecl UE::FMonotonicTimePoint::Infinity(void)

{
  undefined8 *in_RCX;
  
  *in_RCX = 0x7ff0000000000000;
  return (FMonotonicTimePoint)(double)in_RCX;
}

// IsNaN @ 141c94510

bool __thiscall UE::FMonotonicTimePoint::IsNaN(FMonotonicTimePoint *this)

{
  int iVar1;
  
  iVar1 = _isnan(this->Time);
  return iVar1 != 0;
}

