// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 2

// Frequency @ 150244ab0

/* private: static double __cdecl
   absl::lts_20240722::base_internal::UnscaledCycleClock::Frequency(void) */

double __cdecl absl::lts_20240722::base_internal::UnscaledCycleClock::Frequency(void)

{
  int iVar1;
  uint uVar2;
  LSTATUS LVar3;
  bool bVar4;
  double dVar5;
  uint auStackX_8 [2];
  DWORD aDStackX_10 [2];
  uint auStackX_18 [4];
  HKEY apHStack_28 [3];
  
  if (DAT_15540769c != 0xdd) {
    LOCK();
    bVar4 = DAT_15540769c == 0;
    if (bVar4) {
      DAT_15540769c = 0x65c2937b;
    }
    UNLOCK();
    if ((bVar4) ||
       (uVar2 = SpinLockWait((atomic<unsigned_int> *)&DAT_15540769c,3,
                             (SpinLockWaitTransition *)&DAT_1536f4008,SCHEDULE_KERNEL_ONLY),
       uVar2 == 0)) {
      uVar2 = RegOpenKeyExA((HKEY)&DAT_ffffffff80000002,
                            "HARDWARE\\DESCRIPTION\\System\\CentralProcessor\\0",0,0x20019,
                            apHStack_28);
      dVar5 = __real_3ff0000000000000;
      if (uVar2 == 0) {
        aDStackX_10[0] = 4;
        auStackX_8[0] = uVar2;
        auStackX_18[0] = uVar2;
        LVar3 = RegQueryValueExA(apHStack_28[0],"~MHz",(LPDWORD)0x0,auStackX_8,(LPBYTE)auStackX_18,
                                 aDStackX_10);
        RegCloseKey(apHStack_28[0]);
        dVar5 = __real_3ff0000000000000;
        if (((LVar3 == 0) && (auStackX_8[0] == 4)) && (aDStackX_10[0] == 4)) {
          dVar5 = (double)auStackX_18[0] * __real_412e848000000000;
        }
      }
      iVar1 = DAT_15540769c;
      LOCK();
      DAT_15540769c = 0xdd;
      UNLOCK();
      DAT_154e47220 = dVar5;
      if (iVar1 == 0x5a308d2) {
        AbslInternalSpinLockWake_lts_20240722(&DAT_15540769c,1);
      }
    }
  }
  return DAT_154e47220;
}

// Now @ 150244ac0

/* private: static __int64 __cdecl absl::lts_20240722::base_internal::UnscaledCycleClock::Now(void)
    */

__int64 __cdecl absl::lts_20240722::base_internal::UnscaledCycleClock::Now(void)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  
  uVar1 = rdtsc();
  return CONCAT44((int)((ulonglong)in_RAX >> 0x20),(int)uVar1) | uVar1 & 0xffffffff00000000;
}

