// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CorePreciseFP
// Functions: 14

// operator== @ 141e47160

bool __cdecl Verse::operator==(VFloat param_1,VFloat param_2)

{
  if (NAN(param_1.Value) || NAN(param_1.Value)) {
    if (NAN(param_2.Value)) {
      return true;
    }
  }
  else if (param_1.Value == param_2.Value) {
    return true;
  }
  return false;
}

// operator* @ 141e47190

VFloat __cdecl Verse::operator*(VFloat param_1,VFloat param_2)

{
  double in_R8;
  
  *(double *)param_1.Value = in_R8 * param_2.Value;
  return (VFloat)param_1.Value;
}

// operator- @ 141e471b0

VFloat __cdecl Verse::operator-(VFloat param_1,VFloat param_2)

{
  double in_R8;
  
  *(double *)param_1.Value = param_2.Value - in_R8;
  return (VFloat)param_1.Value;
}

// operator- @ 141e471d0

VFloat __cdecl Verse::operator-(VFloat param_1)

{
  undefined8 in_RDX;
  
  *(ulonglong *)param_1.Value =
       CONCAT44((uint)((ulonglong)in_RDX >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_,
                (uint)in_RDX ^ (uint)__xmm_80000000000000008000000000000000);
  return (VFloat)param_1.Value;
}

// operator+ @ 141e471f0

VFloat __cdecl Verse::operator+(VFloat param_1,VFloat param_2)

{
  double in_R8;
  
  *(double *)param_1.Value = in_R8 + param_2.Value;
  return (VFloat)param_1.Value;
}

// operator/ @ 141e47210

VFloat __cdecl Verse::operator/(VFloat param_1,VFloat param_2)

{
  double in_R8;
  
  *(double *)param_1.Value = param_2.Value / (in_R8 + 0.0);
  return (VFloat)param_1.Value;
}

// operator< @ 141e47240

bool __cdecl Verse::operator<(VFloat param_1,VFloat param_2)

{
  return param_1.Value < param_2.Value;
}

// operator<= @ 141e47260

bool __cdecl Verse::operator<=(VFloat param_1,VFloat param_2)

{
  if (!NAN(param_1.Value) && !NAN(param_1.Value)) {
    return param_1.Value <= param_2.Value;
  }
  if (NAN(param_2.Value)) {
    return true;
  }
  return false;
}

// IsFinite @ 141e47290

bool __thiscall Verse::VFloat::IsFinite(VFloat *this)

{
  if ((__real_ffefffffffffffff <= this->Value) && (this->Value <= __real_7fefffffffffffff)) {
    return true;
  }
  return false;
}

// IsInfinite @ 141e472c0

bool __thiscall Verse::VFloat::IsInfinite(VFloat *this)

{
  if ((this->Value != __real_7ff0000000000000) && (this->Value != __real_fff0000000000000)) {
    return false;
  }
  return true;
}

// IsNaN @ 141e472f0

bool __thiscall Verse::VFloat::IsNaN(VFloat *this)

{
  if (NAN(this->Value)) {
    return true;
  }
  return false;
}

// NormalizeSignedZero @ 141e47310

VFloat __thiscall Verse::VFloat::NormalizeSignedZero(VFloat *this)

{
  double *in_RDX;
  
  *in_RDX = this->Value + 0.0;
  return (VFloat)(double)in_RDX;
}

// Purify @ 141e474b0

VFloat __thiscall Verse::VFloat::Purify(VFloat *this)

{
  double *in_RDX;
  
  if (NAN(this->Value)) {
    *in_RDX = NAN;
    return (VFloat)(double)in_RDX;
  }
  *in_RDX = this->Value;
  return (VFloat)(double)in_RDX;
}

// Ranking @ 141e474f0

long64 __thiscall Verse::VFloat::Ranking(VFloat *this)

{
  double dVar1;
  
  if (NAN(this->Value)) {
    return 0x7fffffffffffffff;
  }
  dVar1 = this->Value;
  if ((longlong)dVar1 < 0) {
    dVar1 = (double)(((ulonglong)dVar1 ^ 0x7fffffffffffffff) + 1);
  }
  return (long64)dVar1;
}

