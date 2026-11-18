// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 1

// FromFrameNumber @ 14d042ff0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTimecode * __cdecl
FTimecode::FromFrameNumber
          (FTimecode *__return_storage_ptr__,FFrameNumber *param_1,FFrameRate *param_2)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = (double)param_2->Numerator / (double)param_2->Denominator;
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
      bVar1 = true;
      goto LAB_14d043065;
    }
  }
  bVar1 = false;
LAB_14d043065:
  FromFrameNumber(__return_storage_ptr__,param_1,param_2,bVar1);
  return __return_storage_ptr__;
}

