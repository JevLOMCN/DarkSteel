// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 1

// UseDropFormatTimecode @ 146050750

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl FTimecode::UseDropFormatTimecode(FFrameRate *param_1)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = (double)param_1->Numerator / (double)param_1->Denominator;
  dVar2 = dVar3 - ___real_403df853e2556b29;
  if (((double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
       __real_3e45798ee2308c3a) ||
     (dVar3 = dVar3 - ___real_404df853e2556b29,
     (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
     __real_3e45798ee2308c3a)) {
    bVar1 = UseDropFormatTimecodeByDefaultWhenSupported();
    if (bVar1) {
      return true;
    }
  }
  return false;
}

