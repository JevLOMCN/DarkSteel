// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 5

// has_env_var @ 14f38c160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl oo2::has_env_var(char *param_1)

{
  DWORD DVar1;
  undefined1 auStack_48 [32];
  CHAR local_28 [16];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  DVar1 = GetEnvironmentVariableA(param_1,local_28,0x10);
  return DVar1 != 0;
}

// rrCPUx86_detect @ 14f38c1c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014f38c354) */
/* WARNING: Removing unreachable block (ram,0x00014f38c258) */
/* WARNING: Removing unreachable block (ram,0x00014f38c1fd) */

void __cdecl oo2::rrCPUx86_detect(uint param_1)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  DWORD DVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  uint in_XCR0;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  uint local_34;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_58;
  bVar6 = false;
  bVar7 = false;
  if ((g_rrCPUx86_feature_flags & 1) == 0) {
    puVar1 = (uint *)cpuid_basic_info(0);
    if (puVar1[1] == 0x756e6547) {
      if ((puVar1[2] == 0x49656e69) && (puVar1[3] == 0x6c65746e)) {
        bVar6 = true;
      }
    }
    else if (((puVar1[1] == 0x68747541) && (puVar1[2] == 0x69746e65)) &&
            (bVar7 = false, puVar1[3] == 0x444d4163)) {
      bVar7 = true;
    }
    puVar2 = (uint *)cpuid_Version_info(1);
    uVar11 = *puVar2;
    local_34 = puVar2[1];
    uVar9 = puVar2[3];
    uVar13 = g_rrCPUx86_feature_flags;
    if ((bVar6) && (uVar11 == 0xb0671)) {
      uVar13 = g_rrCPUx86_feature_flags | 0x4000;
    }
    uVar10 = uVar13 | 2;
    if ((puVar2[2] & 0x4000000) == 0) {
      uVar10 = uVar13;
    }
    uVar13 = uVar10 | 4;
    if ((uVar9 & 0x200) == 0) {
      uVar13 = uVar10;
    }
    uVar10 = uVar13 | 8;
    if ((uVar9 & 0x80000) == 0) {
      uVar10 = uVar13;
    }
    uVar13 = uVar10 | 0x10;
    if ((uVar9 & 0x100000) == 0) {
      uVar13 = uVar10;
    }
    bVar5 = (byte)(uVar9 >> 0x18);
    bVar12 = bVar5 >> 4 & 1;
    if (((bVar7) && ((uVar11 & 0xf00) == 0xf00)) && (7 < (byte)((int)uVar11 >> 0x14))) {
      uVar13 = uVar13 | 0x200;
    }
    uVar11 = 0;
    if ((bVar5 >> 3 & 1) != 0) {
      uVar4 = xinuse(0);
      uVar11 = in_XCR0 & (uint)uVar4;
    }
    uVar10 = uVar13;
    if ((uVar11 & 6) == 6) {
      uVar10 = uVar13 | 0x20;
      if (bVar12 == 0) {
        uVar10 = uVar13;
      }
      if ((bVar5 >> 5 & 1) != 0) {
        uVar10 = uVar10 | 0x400;
      }
    }
    if (6 < *puVar1) {
      puVar3 = (undefined4 *)cpuid_Extended_Feature_Enumeration_info(7);
      local_38 = *puVar3;
      uVar13 = puVar3[1];
      local_2c = puVar3[2];
      if (((bVar12 != 0) && ((uVar11 & 6) == 6)) && ((uVar9 >> 0x17 & 1) != 0)) {
        uVar9 = uVar10 | 0x40;
        if ((uVar13 & 8) == 0) {
          uVar9 = uVar10;
        }
        uVar10 = uVar9 | 0x80;
        if ((uVar13 & 0x100) == 0) {
          uVar10 = uVar9;
        }
        uVar9 = uVar10 | 0x100;
        if ((uVar13 & 0x128) != 0x128) {
          uVar9 = uVar10;
        }
        uVar10 = uVar9;
        if ((((uVar11 & 0xe6) == 0xe6) && ((uVar13 & 0xc0030000) == 0xc0030000)) &&
           (uVar10 = uVar9 | 0x800, (puVar3[3] & 0x40) != 0)) {
          uVar10 = uVar9 | 0x1800;
        }
      }
    }
    if (((uVar10 >> 9 & 1) != 0) && ((uVar10 & 0x5fe) != 0x5fe)) {
      uVar10 = uVar10 & 0xfffffdff;
    }
    DVar8 = GetEnvironmentVariableA("OODLE_SAFE_MODE",(LPSTR)&local_38,0x10);
    if (DVar8 != 0) {
      uVar10 = uVar10 & param_1 | 0x2000;
    }
    g_rrCPUx86_feature_flags = uVar10 | 1;
  }
  return;
}

// rrCPUx86_flush_with_cpuid @ 14f38c440

/* WARNING: Removing unreachable block (ram,0x00014f38c44a) */

void __cdecl oo2::rrCPUx86_flush_with_cpuid(void)

{
  cpuid_basic_info(0);
  return;
}

// safe_mode_enabled @ 14f38c460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl oo2::safe_mode_enabled(void)

{
  DWORD DVar1;
  undefined1 auStack_48 [32];
  CHAR local_28 [16];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  DVar1 = GetEnvironmentVariableA("OODLE_SAFE_MODE",local_28,0x10);
  return DVar1 != 0;
}

// xgetbv @ 14f38c4b0

ulong64 __cdecl xgetbv(uint param_1)

{
  bool bVar1;
  ulonglong uVar2;
  undefined8 in_RAX;
  ulonglong in_XCR0;
  
  bVar1 = param_1 == 1;
  uVar2 = xinuse(bVar1);
  uVar2 = bVar1 * in_XCR0 + (ulonglong)!bVar1 * (in_XCR0 & uVar2);
  return CONCAT44((int)((ulonglong)in_RAX >> 0x20),(int)uVar2) | uVar2 & 0xffffffff00000000;
}

