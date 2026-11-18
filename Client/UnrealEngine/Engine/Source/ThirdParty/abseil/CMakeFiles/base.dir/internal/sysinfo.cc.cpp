// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 15

// FUN_1501b81c0 @ 1501b81c0

void FUN_1501b81c0(atomic<unsigned_int> *param_1,SchedulingMode param_2)

{
  atomic<unsigned_int> aVar1;
  uint uVar2;
  LSTATUS LVar3;
  double dVar4;
  DWORD local_res8 [2];
  uint local_res10 [2];
  uint local_res20 [2];
  HKEY local_10;
  
  LOCK();
  aVar1 = *param_1;
  if (aVar1 == (atomic<unsigned_int>)0x0) {
    *param_1 = (atomic<unsigned_int>)0x65c2937b;
  }
  UNLOCK();
  if ((aVar1 == (atomic<unsigned_int>)0x0) ||
     (uVar2 = absl::lts_20240722::base_internal::SpinLockWait
                        (param_1,3,(SpinLockWaitTransition *)&DAT_1536f4008,param_2), uVar2 == 0)) {
    uVar2 = RegOpenKeyExA((HKEY)&DAT_ffffffff80000002,
                          "HARDWARE\\DESCRIPTION\\System\\CentralProcessor\\0",0,0x20019,&local_10);
    dVar4 = __real_3ff0000000000000;
    if (uVar2 == 0) {
      local_res8[0] = 4;
      local_res10[0] = uVar2;
      local_res20[0] = uVar2;
      LVar3 = RegQueryValueExA(local_10,"~MHz",(LPDWORD)0x0,local_res10,(LPBYTE)local_res20,
                               local_res8);
      RegCloseKey(local_10);
      dVar4 = __real_3ff0000000000000;
      if (((LVar3 == 0) && (local_res10[0] == 4)) && (local_res8[0] == 4)) {
        dVar4 = (double)local_res20[0] * __real_412e848000000000;
      }
    }
    LOCK();
    aVar1 = *param_1;
    DAT_154e47220 = dVar4;
    *param_1 = (atomic<unsigned_int>)0xdd;
    UNLOCK();
    if (aVar1 == (atomic<unsigned_int>)0x5a308d2) {
      AbslInternalSpinLockWake_lts_20240722(param_1,1);
      return;
    }
  }
  return;
}

// FUN_1501b82e0 @ 1501b82e0

void FUN_1501b82e0(atomic<unsigned_int> *param_1,SchedulingMode param_2)

{
  atomic<unsigned_int> aVar1;
  uint uVar2;
  BOOL BVar3;
  DWORD DVar4;
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION Buffer;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION p_Var10;
  ulonglong uVar11;
  bool bVar12;
  DWORD local_res10 [2];
  
  LOCK();
  aVar1 = *param_1;
  if (aVar1 == (atomic<unsigned_int>)0x0) {
    *param_1 = (atomic<unsigned_int>)0x65c2937b;
  }
  UNLOCK();
  if ((aVar1 != (atomic<unsigned_int>)0x0) &&
     (uVar2 = absl::lts_20240722::base_internal::SpinLockWait
                        (param_1,3,(SpinLockWaitTransition *)&DAT_1536f3fe0,param_2), uVar2 != 0)) {
    return;
  }
  local_res10[0] = 0x20;
  Buffer = malloc(0x20);
  if (Buffer == (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION)0x0) {
    iVar7 = 0;
  }
  else {
    BVar3 = GetLogicalProcessorInformation(Buffer,local_res10);
    bVar12 = BVar3 != 0;
    if ((BVar3 == 0) && (DVar4 = GetLastError(), DVar4 == 0x7a)) {
      free(Buffer);
      Buffer = malloc((ulonglong)local_res10[0]);
      if (Buffer == (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION)0x0) {
        iVar7 = 0;
        goto LAB_1501b8408;
      }
      BVar3 = GetLogicalProcessorInformation(Buffer,local_res10);
      bVar12 = BVar3 != 0;
    }
    uVar9 = 0;
    iVar7 = 0;
    if ((bVar12) &&
       (uVar8 = uVar9, p_Var10 = Buffer, uVar11 = uVar9, iVar7 = 0, 0x1f < (ulonglong)local_res10[0]
       )) {
      do {
        if (p_Var10->Relationship == RelationProcessorCore) {
          uVar6 = uVar9;
          for (uVar5 = p_Var10->ProcessorMask; uVar5 != 0; uVar5 = uVar5 & uVar5 - 1) {
            uVar6 = (ulonglong)((int)uVar6 + 1);
          }
          uVar8 = (ulonglong)(uint)((int)uVar8 + (int)uVar6);
        }
        iVar7 = (int)uVar8;
        uVar11 = (ulonglong)((int)uVar11 + 0x20);
        p_Var10 = p_Var10 + 1;
      } while (uVar11 + 0x20 <= (ulonglong)local_res10[0]);
    }
    free(Buffer);
  }
LAB_1501b8408:
  DAT_155407698 = 1;
  if (iVar7 != 0) {
    DAT_155407698 = iVar7;
  }
  LOCK();
  aVar1 = *param_1;
  *param_1 = (atomic<unsigned_int>)0xdd;
  UNLOCK();
  if (aVar1 == (atomic<unsigned_int>)0x5a308d2) {
    AbslInternalSpinLockWake_lts_20240722(param_1,1);
  }
  return;
}

// FUN_1501b8450 @ 1501b8450

void FUN_1501b8450(atomic<unsigned_int> *param_1)

{
  atomic<unsigned_int> aVar1;
  uint uVar2;
  LSTATUS LVar3;
  double dVar4;
  uint local_res8 [4];
  DWORD local_res18 [2];
  uint local_res20 [2];
  HKEY local_20;
  
  if (*param_1 != (atomic<unsigned_int>)0xdd) {
    LOCK();
    aVar1 = *param_1;
    if (aVar1 == (atomic<unsigned_int>)0x0) {
      *param_1 = (atomic<unsigned_int>)0x65c2937b;
    }
    UNLOCK();
    if ((aVar1 == (atomic<unsigned_int>)0x0) ||
       (uVar2 = absl::lts_20240722::base_internal::SpinLockWait
                          (param_1,3,(SpinLockWaitTransition *)&DAT_1536f4008,SCHEDULE_KERNEL_ONLY),
       uVar2 == 0)) {
      uVar2 = RegOpenKeyExA((HKEY)&DAT_ffffffff80000002,
                            "HARDWARE\\DESCRIPTION\\System\\CentralProcessor\\0",0,0x20019,&local_20
                           );
      dVar4 = __real_3ff0000000000000;
      if (uVar2 == 0) {
        local_res18[0] = 4;
        local_res8[0] = uVar2;
        local_res20[0] = uVar2;
        LVar3 = RegQueryValueExA(local_20,"~MHz",(LPDWORD)0x0,local_res8,(LPBYTE)local_res20,
                                 local_res18);
        RegCloseKey(local_20);
        dVar4 = __real_3ff0000000000000;
        if (((LVar3 == 0) && (local_res8[0] == 4)) && (local_res18[0] == 4)) {
          dVar4 = (double)local_res20[0] * __real_412e848000000000;
        }
      }
      LOCK();
      aVar1 = *param_1;
      DAT_154e47220 = dVar4;
      *param_1 = (atomic<unsigned_int>)0xdd;
      UNLOCK();
      if (aVar1 == (atomic<unsigned_int>)0x5a308d2) {
        AbslInternalSpinLockWake_lts_20240722(param_1,1);
      }
    }
  }
  return;
}

// FUN_1501b8570 @ 1501b8570

void FUN_1501b8570(atomic<unsigned_int> *param_1)

{
  atomic<unsigned_int> aVar1;
  uint uVar2;
  BOOL BVar3;
  DWORD DVar4;
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION Buffer;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION p_Var10;
  ulonglong uVar11;
  bool bVar12;
  DWORD local_res8 [2];
  
  if (*param_1 == (atomic<unsigned_int>)0xdd) {
    return;
  }
  LOCK();
  aVar1 = *param_1;
  if (aVar1 == (atomic<unsigned_int>)0x0) {
    *param_1 = (atomic<unsigned_int>)0x65c2937b;
  }
  UNLOCK();
  if ((aVar1 != (atomic<unsigned_int>)0x0) &&
     (uVar2 = absl::lts_20240722::base_internal::SpinLockWait
                        (param_1,3,(SpinLockWaitTransition *)&DAT_1536f3fe0,SCHEDULE_KERNEL_ONLY),
     uVar2 != 0)) {
    return;
  }
  local_res8[0] = 0x20;
  Buffer = malloc(0x20);
  if (Buffer == (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION)0x0) {
    iVar7 = 0;
  }
  else {
    BVar3 = GetLogicalProcessorInformation(Buffer,local_res8);
    bVar12 = BVar3 != 0;
    if ((BVar3 == 0) && (DVar4 = GetLastError(), DVar4 == 0x7a)) {
      free(Buffer);
      Buffer = malloc((ulonglong)local_res8[0]);
      if (Buffer == (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION)0x0) {
        iVar7 = 0;
        goto LAB_1501b86a8;
      }
      BVar3 = GetLogicalProcessorInformation(Buffer,local_res8);
      bVar12 = BVar3 != 0;
    }
    uVar9 = 0;
    iVar7 = 0;
    if ((bVar12) &&
       (uVar8 = uVar9, p_Var10 = Buffer, uVar11 = uVar9, iVar7 = 0, 0x1f < (ulonglong)local_res8[0])
       ) {
      do {
        if (p_Var10->Relationship == RelationProcessorCore) {
          uVar6 = uVar9;
          for (uVar5 = p_Var10->ProcessorMask; uVar5 != 0; uVar5 = uVar5 & uVar5 - 1) {
            uVar6 = (ulonglong)((int)uVar6 + 1);
          }
          uVar8 = (ulonglong)(uint)((int)uVar8 + (int)uVar6);
        }
        iVar7 = (int)uVar8;
        uVar11 = (ulonglong)((int)uVar11 + 0x20);
        p_Var10 = p_Var10 + 1;
      } while (uVar11 + 0x20 <= (ulonglong)local_res8[0]);
    }
    free(Buffer);
  }
LAB_1501b86a8:
  DAT_155407698 = 1;
  if (iVar7 != 0) {
    DAT_155407698 = iVar7;
  }
  LOCK();
  aVar1 = *param_1;
  *param_1 = (atomic<unsigned_int>)0xdd;
  UNLOCK();
  if (aVar1 == (atomic<unsigned_int>)0x5a308d2) {
    AbslInternalSpinLockWake_lts_20240722(param_1,1);
  }
  return;
}

// FUN_1501b8710 @ 1501b8710

void FUN_1501b8710(void)

{
  LSTATUS LVar1;
  uint local_res10 [2];
  DWORD local_res18 [2];
  uint local_res20 [2];
  HKEY local_18 [2];
  
  local_res10[0] =
       RegOpenKeyExA((HKEY)&DAT_ffffffff80000002,
                     "HARDWARE\\DESCRIPTION\\System\\CentralProcessor\\0",0,0x20019,local_18);
  if (local_res10[0] == 0) {
    local_res18[0] = 4;
    local_res20[0] = local_res10[0];
    LVar1 = RegQueryValueExA(local_18[0],"~MHz",(LPDWORD)0x0,local_res10,(LPBYTE)local_res20,
                             local_res18);
    RegCloseKey(local_18[0]);
    if (((LVar1 == 0) && (local_res10[0] == 4)) && (local_res18[0] == 4)) {
      DAT_154e47220 = (double)local_res20[0] * __real_412e848000000000;
      return;
    }
  }
  DAT_154e47220 = (double)__real_3ff0000000000000;
  return;
}

// FUN_1501b87f0 @ 1501b87f0

void FUN_1501b87f0(void)

{
  BOOL BVar1;
  DWORD DVar2;
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION Buffer;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar6;
  ulonglong uVar7;
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION p_Var8;
  ulonglong uVar9;
  bool bVar10;
  DWORD local_res10 [2];
  ulonglong uVar5;
  
  local_res10[0] = 0x20;
  Buffer = malloc(0x20);
  if (Buffer == (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION)0x0) {
    uVar4 = 0;
  }
  else {
    BVar1 = GetLogicalProcessorInformation(Buffer,local_res10);
    bVar10 = BVar1 != 0;
    if ((BVar1 == 0) && (DVar2 = GetLastError(), DVar2 == 0x7a)) {
      free(Buffer);
      Buffer = malloc((ulonglong)local_res10[0]);
      if (Buffer == (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION)0x0) {
        uVar4 = 0;
        goto LAB_1501b88e8;
      }
      BVar1 = GetLogicalProcessorInformation(Buffer,local_res10);
      bVar10 = BVar1 != 0;
    }
    uVar7 = 0;
    uVar4 = 0;
    if ((bVar10) &&
       (uVar6 = uVar7, p_Var8 = Buffer, uVar9 = uVar7, uVar4 = 0, 0x1f < (ulonglong)local_res10[0]))
    {
      do {
        if (p_Var8->Relationship == RelationProcessorCore) {
          uVar5 = uVar7;
          uVar4 = 0;
          for (uVar3 = p_Var8->ProcessorMask; uVar3 != 0; uVar3 = uVar3 & uVar3 - 1) {
            uVar4 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar4;
          }
          uVar6 = (ulonglong)((int)uVar6 + uVar4);
        }
        uVar4 = (uint)uVar6;
        uVar9 = (ulonglong)((int)uVar9 + 0x20);
        p_Var8 = p_Var8 + 1;
      } while (uVar9 + 0x20 <= (ulonglong)local_res10[0]);
    }
    free(Buffer);
  }
LAB_1501b88e8:
  DAT_155407698 = 1;
  if (uVar4 != 0) {
    DAT_155407698 = uVar4;
  }
  return;
}

// FUN_1501b8910 @ 1501b8910

void FUN_1501b8910(void)

{
  LSTATUS LVar1;
  uint local_res10 [2];
  DWORD local_res18 [2];
  uint local_res20 [2];
  HKEY local_18 [2];
  
  local_res10[0] =
       RegOpenKeyExA((HKEY)&DAT_ffffffff80000002,
                     "HARDWARE\\DESCRIPTION\\System\\CentralProcessor\\0",0,0x20019,local_18);
  if (local_res10[0] == 0) {
    local_res18[0] = 4;
    local_res20[0] = local_res10[0];
    LVar1 = RegQueryValueExA(local_18[0],"~MHz",(LPDWORD)0x0,local_res10,(LPBYTE)local_res20,
                             local_res18);
    RegCloseKey(local_18[0]);
    if (((LVar1 == 0) && (local_res10[0] == 4)) && (local_res18[0] == 4)) {
      DAT_154e47220 = (double)local_res20[0] * __real_412e848000000000;
      return;
    }
  }
  DAT_154e47220 = (double)__real_3ff0000000000000;
  return;
}

// FUN_1501b89f0 @ 1501b89f0

void FUN_1501b89f0(void)

{
  BOOL BVar1;
  DWORD DVar2;
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION Buffer;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar6;
  ulonglong uVar7;
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION p_Var8;
  ulonglong uVar9;
  bool bVar10;
  DWORD local_res10 [2];
  ulonglong uVar5;
  
  local_res10[0] = 0x20;
  Buffer = malloc(0x20);
  if (Buffer == (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION)0x0) {
    uVar4 = 0;
  }
  else {
    BVar1 = GetLogicalProcessorInformation(Buffer,local_res10);
    bVar10 = BVar1 != 0;
    if ((BVar1 == 0) && (DVar2 = GetLastError(), DVar2 == 0x7a)) {
      free(Buffer);
      Buffer = malloc((ulonglong)local_res10[0]);
      if (Buffer == (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION)0x0) {
        uVar4 = 0;
        goto LAB_1501b8ae8;
      }
      BVar1 = GetLogicalProcessorInformation(Buffer,local_res10);
      bVar10 = BVar1 != 0;
    }
    uVar7 = 0;
    uVar4 = 0;
    if ((bVar10) &&
       (uVar6 = uVar7, p_Var8 = Buffer, uVar9 = uVar7, uVar4 = 0, 0x1f < (ulonglong)local_res10[0]))
    {
      do {
        if (p_Var8->Relationship == RelationProcessorCore) {
          uVar5 = uVar7;
          uVar4 = 0;
          for (uVar3 = p_Var8->ProcessorMask; uVar3 != 0; uVar3 = uVar3 & uVar3 - 1) {
            uVar4 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar4;
          }
          uVar6 = (ulonglong)((int)uVar6 + uVar4);
        }
        uVar4 = (uint)uVar6;
        uVar9 = (ulonglong)((int)uVar9 + 0x20);
        p_Var8 = p_Var8 + 1;
      } while (uVar9 + 0x20 <= (ulonglong)local_res10[0]);
    }
    free(Buffer);
  }
LAB_1501b8ae8:
  DAT_155407698 = 1;
  if (uVar4 != 0) {
    DAT_155407698 = uVar4;
  }
  return;
}

// GetCachedTID @ 1501b8b10

/* unsigned int __cdecl absl::lts_20240722::base_internal::GetCachedTID(void) */

uint __cdecl absl::lts_20240722::base_internal::GetCachedTID(void)

{
  longlong lVar1;
  DWORD DVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(uint *)(lVar1 + 0x9e64) & 1) == 0) {
    *(uint *)(lVar1 + 0x9e64) = *(uint *)(lVar1 + 0x9e64) | 1;
    DVar2 = GetCurrentThreadId();
    *(DWORD *)(lVar1 + 0x9e60) = DVar2;
    return DVar2;
  }
  return *(uint *)(lVar1 + 0x9e60);
}

// FUN_1501b8b70 @ 1501b8b70

double FUN_1501b8b70(void)

{
  LSTATUS LVar1;
  uint local_res8 [2];
  DWORD local_res10 [2];
  uint local_res18 [2];
  HKEY local_res20;
  
  local_res8[0] =
       RegOpenKeyExA((HKEY)&DAT_ffffffff80000002,
                     "HARDWARE\\DESCRIPTION\\System\\CentralProcessor\\0",0,0x20019,&local_res20);
  if (local_res8[0] == 0) {
    local_res10[0] = 4;
    local_res18[0] = local_res8[0];
    LVar1 = RegQueryValueExA(local_res20,"~MHz",(LPDWORD)0x0,local_res8,(LPBYTE)local_res18,
                             local_res10);
    RegCloseKey(local_res20);
    if (((LVar1 == 0) && (local_res8[0] == 4)) && (local_res10[0] == 4)) {
      return (double)local_res18[0] * __real_412e848000000000;
    }
  }
  return __real_3ff0000000000000;
}

// FUN_1501b8c40 @ 1501b8c40

/* WARNING: Removing unreachable block (ram,0x0001501b8c6c) */

uint FUN_1501b8c40(void)

{
  BOOL BVar1;
  DWORD DVar2;
  uint uVar3;
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION Buffer;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar7;
  ulonglong uVar8;
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION p_Var9;
  ulonglong uVar10;
  bool bVar11;
  DWORD local_res8 [2];
  ulonglong uVar6;
  
  local_res8[0] = 0x20;
  Buffer = malloc(0x20);
  if (Buffer == (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION)0x0) {
    return 1;
  }
  BVar1 = GetLogicalProcessorInformation(Buffer,local_res8);
  bVar11 = BVar1 != 0;
  if ((BVar1 == 0) && (DVar2 = GetLastError(), DVar2 == 0x7a)) {
    free(Buffer);
    Buffer = malloc((ulonglong)local_res8[0]);
    if (Buffer == (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION)0x0) {
      uVar5 = 0;
      goto LAB_1501b8d36;
    }
    BVar1 = GetLogicalProcessorInformation(Buffer,local_res8);
    bVar11 = BVar1 != 0;
  }
  uVar8 = 0;
  uVar5 = 0;
  if ((bVar11) &&
     (uVar7 = uVar8, p_Var9 = Buffer, uVar10 = uVar8, uVar5 = 0, 0x1f < (ulonglong)local_res8[0])) {
    do {
      if (p_Var9->Relationship == RelationProcessorCore) {
        uVar6 = uVar8;
        uVar5 = 0;
        for (uVar4 = p_Var9->ProcessorMask; uVar4 != 0; uVar4 = uVar4 & uVar4 - 1) {
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar5;
        }
        uVar7 = (ulonglong)((int)uVar7 + uVar5);
      }
      uVar5 = (uint)uVar7;
      uVar10 = (ulonglong)((int)uVar10 + 0x20);
      p_Var9 = p_Var9 + 1;
    } while (uVar10 + 0x20 <= (ulonglong)local_res8[0]);
  }
  free(Buffer);
LAB_1501b8d36:
  uVar3 = 1;
  if (uVar5 != 0) {
    uVar3 = uVar5;
  }
  return uVar3;
}

// GetTID @ 1501b8d60

/* unsigned int __cdecl absl::lts_20240722::base_internal::GetTID(void) */

uint __cdecl absl::lts_20240722::base_internal::GetTID(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501b8d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentThreadId();
  return DVar1;
}

// NominalCPUFrequency @ 1501b8d70

/* double __cdecl absl::lts_20240722::base_internal::NominalCPUFrequency(void) */

double __cdecl absl::lts_20240722::base_internal::NominalCPUFrequency(void)

{
  int iVar1;
  uint uVar2;
  LSTATUS LVar3;
  bool bVar4;
  double dVar5;
  uint local_res8 [2];
  DWORD local_res10 [2];
  uint local_res18 [4];
  HKEY local_28 [3];
  
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
                            "HARDWARE\\DESCRIPTION\\System\\CentralProcessor\\0",0,0x20019,local_28)
      ;
      dVar5 = __real_3ff0000000000000;
      if (uVar2 == 0) {
        local_res10[0] = 4;
        local_res8[0] = uVar2;
        local_res18[0] = uVar2;
        LVar3 = RegQueryValueExA(local_28[0],"~MHz",(LPDWORD)0x0,local_res8,(LPBYTE)local_res18,
                                 local_res10);
        RegCloseKey(local_28[0]);
        dVar5 = __real_3ff0000000000000;
        if (((LVar3 == 0) && (local_res8[0] == 4)) && (local_res10[0] == 4)) {
          dVar5 = (double)local_res18[0] * __real_412e848000000000;
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

// NumCPUs @ 1501b8eb0

/* int __cdecl absl::lts_20240722::base_internal::NumCPUs(void) */

int __cdecl absl::lts_20240722::base_internal::NumCPUs(void)

{
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  DWORD DVar4;
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION Buffer;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION p_Var10;
  ulonglong uVar11;
  bool bVar12;
  DWORD local_res8 [2];
  
  if (DAT_155407694 == 0xdd) {
    return DAT_155407698;
  }
  LOCK();
  bVar12 = DAT_155407694 == 0;
  if (bVar12) {
    DAT_155407694 = 0x65c2937b;
  }
  UNLOCK();
  if ((!bVar12) &&
     (uVar2 = SpinLockWait((atomic<unsigned_int> *)&DAT_155407694,3,
                           (SpinLockWaitTransition *)&DAT_1536f3fe0,SCHEDULE_KERNEL_ONLY),
     uVar2 != 0)) {
    return DAT_155407698;
  }
  local_res8[0] = 0x20;
  Buffer = malloc(0x20);
  if (Buffer == (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION)0x0) {
    iVar7 = 0;
  }
  else {
    BVar3 = GetLogicalProcessorInformation(Buffer,local_res8);
    bVar12 = BVar3 != 0;
    if ((BVar3 == 0) && (DVar4 = GetLastError(), DVar4 == 0x7a)) {
      free(Buffer);
      Buffer = malloc((ulonglong)local_res8[0]);
      if (Buffer == (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION)0x0) {
        iVar7 = 0;
        goto LAB_1501b8fe8;
      }
      BVar3 = GetLogicalProcessorInformation(Buffer,local_res8);
      bVar12 = BVar3 != 0;
    }
    uVar9 = 0;
    iVar7 = 0;
    if ((bVar12) &&
       (uVar8 = uVar9, p_Var10 = Buffer, uVar11 = uVar9, iVar7 = 0, 0x1f < (ulonglong)local_res8[0])
       ) {
      do {
        if (p_Var10->Relationship == RelationProcessorCore) {
          uVar6 = uVar9;
          for (uVar5 = p_Var10->ProcessorMask; uVar5 != 0; uVar5 = uVar5 & uVar5 - 1) {
            uVar6 = (ulonglong)((int)uVar6 + 1);
          }
          uVar8 = (ulonglong)(uint)((int)uVar8 + (int)uVar6);
        }
        iVar7 = (int)uVar8;
        uVar11 = (ulonglong)((int)uVar11 + 0x20);
        p_Var10 = p_Var10 + 1;
      } while (uVar11 + 0x20 <= (ulonglong)local_res8[0]);
    }
    free(Buffer);
  }
LAB_1501b8fe8:
  iVar1 = DAT_155407694;
  DAT_155407698 = 1;
  if (iVar7 != 0) {
    DAT_155407698 = iVar7;
  }
  LOCK();
  DAT_155407694 = 0xdd;
  UNLOCK();
  if (iVar1 == 0x5a308d2) {
    AbslInternalSpinLockWake_lts_20240722(&DAT_155407694,1);
  }
  return DAT_155407698;
}

// FUN_1501b9060 @ 1501b9060

int FUN_1501b9060(void)

{
  BOOL BVar1;
  DWORD DVar2;
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION Buffer;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION p_Var6;
  uint uVar7;
  bool bVar8;
  DWORD local_res8 [2];
  
  local_res8[0] = 0x20;
  Buffer = malloc(0x20);
  if (Buffer == (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION)0x0) {
    return 0;
  }
  BVar1 = GetLogicalProcessorInformation(Buffer,local_res8);
  bVar8 = BVar1 != 0;
  if ((BVar1 == 0) && (DVar2 = GetLastError(), DVar2 == 0x7a)) {
    free(Buffer);
    Buffer = malloc((ulonglong)local_res8[0]);
    if (Buffer == (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION)0x0) {
      return 0;
    }
    BVar1 = GetLogicalProcessorInformation(Buffer,local_res8);
    bVar8 = BVar1 != 0;
  }
  iVar5 = 0;
  iVar4 = iVar5;
  if (bVar8) {
    uVar7 = 0;
    p_Var6 = Buffer;
    iVar4 = 0;
    if (0x1f < (ulonglong)local_res8[0]) {
      do {
        if (p_Var6->Relationship == RelationProcessorCore) {
          iVar4 = 0;
          for (uVar3 = p_Var6->ProcessorMask; uVar3 != 0; uVar3 = uVar3 & uVar3 - 1) {
            iVar4 = iVar4 + 1;
          }
          iVar5 = iVar5 + iVar4;
        }
        uVar7 = uVar7 + 0x20;
        p_Var6 = p_Var6 + 1;
        iVar4 = iVar5;
      } while ((ulonglong)uVar7 + 0x20 <= (ulonglong)local_res8[0]);
    }
  }
  free(Buffer);
  return iVar4;
}

