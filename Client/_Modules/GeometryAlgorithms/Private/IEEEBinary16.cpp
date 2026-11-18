// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryAlgorithms
// Functions: 17

// IEEEBinary16 @ 1495a6610

IEEEBinary16 * __thiscall gte::IEEEBinary16::IEEEBinary16(IEEEBinary16 *this,IEEEBinary16 *param_1)

{
  *this = *param_1;
  return this;
}

// IEEEBinary16 @ 1495a6620

IEEEBinary16 * __thiscall gte::IEEEBinary16::IEEEBinary16(IEEEBinary16 *this,ushort param_1)

{
  *this = (IEEEBinary16)param_1;
  return this;
}

// IEEEBinary16 @ 1495a6630

IEEEBinary16 * __thiscall gte::IEEEBinary16::IEEEBinary16(IEEEBinary16 *this,float param_1)

{
  IEEEBinary16 IVar1;
  
  IVar1 = (IEEEBinary16)Convert32To16((uint)param_1);
  *this = IVar1;
  return this;
}

// IEEEBinary16 @ 1495a6660

IEEEBinary16 * __thiscall gte::IEEEBinary16::IEEEBinary16(IEEEBinary16 *this,double param_1)

{
  IEEEBinary16 IVar1;
  
  IVar1 = (IEEEBinary16)Convert32To16((uint)(float)param_1);
  *this = IVar1;
  return this;
}

// IEEEBinary16 @ 1495a66a0

IEEEBinary16 * __thiscall gte::IEEEBinary16::IEEEBinary16(IEEEBinary16 *this)

{
  return this;
}

// ~IEEEBinary16 @ 1495aa370

void __thiscall gte::IEEEBinary16::~IEEEBinary16(IEEEBinary16 *this)

{
  return;
}

// operator= @ 1495ab9d0

IEEEBinary16 * __thiscall gte::IEEEBinary16::operator=(IEEEBinary16 *this,IEEEBinary16 *param_1)

{
  *this = *param_1;
  return this;
}

// operator== @ 1495abd60

bool __thiscall gte::IEEEBinary16::operator==(IEEEBinary16 *this,IEEEBinary16 *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)Convert16To32((ushort)*this);
  fVar2 = (float)Convert16To32((ushort)*param_1);
  if (fVar1 == fVar2) {
    return true;
  }
  return false;
}

// operator!= @ 1495abdf0

bool __thiscall gte::IEEEBinary16::operator!=(IEEEBinary16 *this,IEEEBinary16 *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)Convert16To32((ushort)*this);
  fVar2 = (float)Convert16To32((ushort)*param_1);
  if (fVar1 != fVar2) {
    return true;
  }
  return false;
}

// operator_float @ 1495ac1c0

float __thiscall gte::IEEEBinary16::operator_float(IEEEBinary16 *this)

{
  float fVar1;
  
  fVar1 = (float)Convert16To32((ushort)*this);
  return fVar1;
}

// operator_double @ 1495ac1f0

double __thiscall gte::IEEEBinary16::operator_double(IEEEBinary16 *this)

{
  float fVar1;
  
  fVar1 = (float)Convert16To32((ushort)*this);
  return (double)fVar1;
}

// operator< @ 1495ad2f0

bool __thiscall gte::IEEEBinary16::operator<(IEEEBinary16 *this,IEEEBinary16 *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)Convert16To32((ushort)*this);
  fVar2 = (float)Convert16To32((ushort)*param_1);
  return fVar1 < fVar2;
}

// operator<= @ 1495ad430

bool __thiscall gte::IEEEBinary16::operator<=(IEEEBinary16 *this,IEEEBinary16 *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)Convert16To32((ushort)*this);
  fVar2 = (float)Convert16To32((ushort)*param_1);
  return fVar1 <= fVar2;
}

// operator> @ 1495ad4b0

bool __thiscall gte::IEEEBinary16::operator>(IEEEBinary16 *this,IEEEBinary16 *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)Convert16To32((ushort)*this);
  fVar2 = (float)Convert16To32((ushort)*param_1);
  return fVar2 < fVar1;
}

// operator>= @ 1495ad530

bool __thiscall gte::IEEEBinary16::operator>=(IEEEBinary16 *this,IEEEBinary16 *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)Convert16To32((ushort)*this);
  fVar2 = (float)Convert16To32((ushort)*param_1);
  return fVar2 <= fVar1;
}

// Convert16To32 @ 1495bb280

uint __cdecl gte::IEEEBinary16::Convert16To32(ushort param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  
  uVar4 = (param_1 & 0x8000) << 0x10;
  uVar3 = param_1 & 0x3ff;
  uVar2 = param_1 >> 10 & 0x1f;
  if (uVar2 == 0) {
    if (uVar3 != 0) {
      uVar2 = uVar3 >> 1 | uVar3;
      uVar1 = uVar2 >> 2 | uVar2;
      return (0x7e - (0x17 - gsLeadingBitTable
                             [(uint)(ushort)(uVar2 >> 8 | uVar1 >> 4 | uVar1) * 0x7c4acdd >> 0x1b]))
             * 0x800000 |
             (uint)uVar3 <<
             ((byte)(0x17 - gsLeadingBitTable
                            [(uint)(ushort)(uVar2 >> 8 | uVar1 >> 4 | uVar1) * 0x7c4acdd >> 0x1b]) &
             0x1f) & 0x7fffff | uVar4;
    }
  }
  else {
    if (uVar2 < 0x1f) {
      return (uVar2 + 0x70) * 0x800000 | (uint)uVar3 << 0xd | uVar4;
    }
    if (uVar3 != 0) {
      return (uVar3 | 0x3fc00) << 0xd | uVar4;
    }
    uVar4 = uVar4 | 0x7f800000;
  }
  return uVar4;
}

// Convert32To16 @ 1495bb350

ushort __cdecl gte::IEEEBinary16::Convert32To16(uint param_1)

{
  uint uVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = param_1 >> 0x17 & 0xff;
  uVar5 = param_1 & 0x7fffffff;
  uVar3 = (ushort)(param_1 >> 0x10) & 0x8000;
  uVar1 = param_1 & 0x7fffff;
  if (uVar6 != 0) {
    if (0xfe < uVar6) {
      if (uVar1 != 0) {
        return (ushort)(uVar1 >> 0xd) | uVar3 | 0x7c00;
      }
LAB_1495bb428:
      return uVar3 | 0x7c00;
    }
    if (0x33000000 < uVar5) {
      if (0x33800000 < uVar5) {
        if (uVar5 < 0x38800000) {
          uVar4 = (ushort)(uVar1 >> 0xd);
          if ((0x1000 < (param_1 & 0x1fff)) ||
             (((param_1 & 0x1fff) == 0x1000 && ((uVar1 >> 0xd & 1) != 0)))) {
            uVar4 = uVar4 + 1;
          }
          return uVar4 | uVar3;
        }
        if (uVar5 < 0x477fe001) {
          sVar2 = (short)(uVar1 >> 0xd);
          if ((0x1000 < (param_1 & 0x1fff)) ||
             (((param_1 & 0x1fff) == 0x1000 && ((uVar1 >> 0xd & 1) != 0)))) {
            sVar2 = sVar2 + 1;
          }
          return ((short)uVar6 + 0x10) * 0x400 + sVar2 | uVar3;
        }
        if (uVar5 < 0x477ff000) {
          return uVar3 | 0x7bff;
        }
        goto LAB_1495bb428;
      }
      uVar3 = uVar3 | 1;
    }
  }
  return uVar3;
}

