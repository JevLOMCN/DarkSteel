// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 2

// operator[] @ 14d393f90

double __thiscall
UE::Trace::IAnalyzer::TArrayReader<double>::operator[](TArrayReader<double> *this,uint param_1)

{
  TArrayReader<double> TVar1;
  char cVar2;
  double *pdVar3;
  uint uVar4;
  
  TVar1 = this[0xe];
  uVar4 = -(int)(char)TVar1;
  if ((int)uVar4 < 0) {
    uVar4 = (int)(char)TVar1;
  }
  if ((uVar4 != 0) && (param_1 < *(uint *)(this + 8) / uVar4)) {
    cVar2 = ((byte)TVar1 ^ (char)TVar1 >> 7) - ((char)TVar1 >> 7);
    pdVar3 = (double *)((ulonglong)((int)cVar2 * param_1) + *(longlong *)this);
    if (pdVar3 != (double *)0x0) {
      switch(cVar2) {
      case '\x01':
        return (double)(int)*(char *)pdVar3;
      case '\x02':
        return (double)(int)*(short *)pdVar3;
      case '\x04':
        return (double)(int)*(float *)pdVar3;
      case '\b':
        return (double)(longlong)*pdVar3;
      case -8:
        return *pdVar3;
      default:
        return 0.0;
      case -4:
        return (double)*(float *)pdVar3;
      }
    }
  }
  return 0.0;
}

// operator[] @ 14d393fe0

ulong64 __thiscall
UE::Trace::IAnalyzer::TArrayReader<unsigned___int64>::operator[]
          (TArrayReader<unsigned___int64> *this,uint param_1)

{
  TArrayReader<unsigned___int64> TVar1;
  char cVar2;
  double *pdVar3;
  longlong lVar4;
  uint uVar5;
  float fVar6;
  double dVar7;
  
  TVar1 = this[0xe];
  uVar5 = -(int)(char)TVar1;
  if ((int)uVar5 < 0) {
    uVar5 = (int)(char)TVar1;
  }
  if ((uVar5 != 0) && (param_1 < *(uint *)(this + 8) / uVar5)) {
    cVar2 = ((byte)TVar1 ^ (char)TVar1 >> 7) - ((char)TVar1 >> 7);
    pdVar3 = (double *)((ulonglong)((int)cVar2 * param_1) + *(longlong *)this);
    if (pdVar3 != (double *)0x0) {
      switch(cVar2) {
      case '\x01':
        return (ulonglong)*(byte *)pdVar3;
      case '\x02':
        return (ulonglong)*(ushort *)pdVar3;
      case '\x04':
        return (ulonglong)(uint)*(float *)pdVar3;
      case '\b':
        return (ulong64)*pdVar3;
      case -8:
        goto switchD_14d3868d3_caseD_f8;
      default:
        return 0;
      case -4:
        fVar6 = *(float *)pdVar3;
        lVar4 = 0;
        if ((__real_5f000000 <= fVar6) && (fVar6 = fVar6 - __real_5f000000, fVar6 < __real_5f000000)
           ) {
          lVar4 = -0x8000000000000000;
        }
        return (longlong)fVar6 + lVar4;
      }
    }
  }
  return 0;
switchD_14d3868d3_caseD_f8:
  dVar7 = *pdVar3;
  lVar4 = 0;
  if ((__real_43e0000000000000 <= dVar7) &&
     (dVar7 = dVar7 - __real_43e0000000000000, dVar7 < __real_43e0000000000000)) {
    lVar4 = -0x8000000000000000;
  }
  return (longlong)dVar7 + lVar4;
}

