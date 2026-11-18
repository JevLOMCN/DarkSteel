// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 3

// LowLevelHash @ 14f8e8090

/* unsigned __int64 __cdecl absl::lts_20240722::hash_internal::LowLevelHash(void const *
   __ptr64,unsigned __int64,unsigned __int64,unsigned __int64 const * __ptr64 const) */

__uint64 __cdecl
absl::lts_20240722::hash_internal::LowLevelHash
          (void *param_1,__uint64 param_2,__uint64 param_3,__uint64 *param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  __uint64 _Var21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong *puVar25;
  ulonglong uVar26;
  
  if (0x10 < param_2) {
    uVar22 = param_3 ^ *param_4;
    _Var21 = param_2;
    puVar25 = param_1;
    if (0x40 < param_2) {
      uVar23 = uVar22;
      uVar24 = uVar22;
      uVar26 = uVar22;
      do {
        _Var21 = _Var21 - 0x40;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar23 ^ puVar25[1];
        auVar13._8_8_ = 0;
        auVar13._0_8_ = param_4[1] ^ *puVar25;
        uVar23 = SUB168(auVar4 * auVar13,0) ^ SUB168(auVar4 * auVar13,8);
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar24 ^ puVar25[3];
        auVar14._8_8_ = 0;
        auVar14._0_8_ = param_4[2] ^ puVar25[2];
        uVar24 = SUB168(auVar5 * auVar14,0) ^ SUB168(auVar5 * auVar14,8);
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar22 ^ puVar25[5];
        auVar15._8_8_ = 0;
        auVar15._0_8_ = param_4[3] ^ puVar25[4];
        uVar22 = SUB168(auVar6 * auVar15,0) ^ SUB168(auVar6 * auVar15,8);
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar26 ^ puVar25[7];
        auVar16._8_8_ = 0;
        auVar16._0_8_ = param_4[4] ^ puVar25[6];
        puVar25 = puVar25 + 8;
        uVar26 = SUB168(auVar7 * auVar16,0) ^ SUB168(auVar7 * auVar16,8);
      } while (0x40 < _Var21);
      uVar22 = uVar23 ^ uVar26 + uVar22 ^ uVar24;
    }
    uVar23 = param_4[1];
    if (0x20 < _Var21) {
      puVar1 = puVar25 + 3;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar22 ^ puVar25[1];
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar23 ^ *puVar25;
      puVar2 = puVar25 + 2;
      puVar25 = puVar25 + 4;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar22 ^ *puVar1;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = *puVar2 ^ param_4[2];
      uVar22 = SUB168(auVar9 * auVar18,0) ^ SUB168(auVar8 * auVar17,0) ^ SUB168(auVar9 * auVar18,8)
               ^ SUB168(auVar8 * auVar17,8);
      _Var21 = _Var21 - 0x20;
    }
    if (0x10 < _Var21) {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar22 ^ puVar25[1];
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar23 ^ *puVar25;
      uVar22 = SUB168(auVar10 * auVar19,0) ^ SUB168(auVar10 * auVar19,8);
    }
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar22 ^ *(ulonglong *)((longlong)param_1 + (param_2 - 8));
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar23 ^ *(ulonglong *)((longlong)param_1 + (param_2 - 0x10)) ^ param_2;
    return SUB168(auVar11 * auVar20,0) ^ SUB168(auVar11 * auVar20,8);
  }
  if (param_2 == 0) {
    return param_3 ^ *param_4;
  }
  if (param_2 < 9) {
    if (param_2 < 4) {
      uVar22 = (ulonglong)
               CONCAT11(*(undefined1 *)param_1,*(undefined1 *)((longlong)param_1 + (param_2 - 1)));
      uVar23 = (ulonglong)*(byte *)((param_2 >> 1) + (longlong)param_1);
    }
    else {
      uVar22 = (ulonglong)*(uint *)param_1;
      uVar23 = (ulonglong)*(uint *)((longlong)param_1 + (param_2 - 4));
    }
  }
  else {
    uVar22 = *(ulonglong *)param_1;
    uVar23 = *(ulonglong *)((longlong)param_1 + (param_2 - 8));
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar23 ^ param_3 ^ *param_4;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar22 ^ param_4[1] ^ param_2;
  return SUB168(auVar3 * auVar12,0) ^ SUB168(auVar3 * auVar12,8);
}

// LowLevelHashLenGt16 @ 14f8e8100

/* unsigned __int64 __cdecl absl::lts_20240722::hash_internal::LowLevelHashLenGt16(void const *
   __ptr64,unsigned __int64,unsigned __int64,unsigned __int64 const * __ptr64 const) */

__uint64 __cdecl
absl::lts_20240722::hash_internal::LowLevelHashLenGt16
          (void *param_1,__uint64 param_2,__uint64 param_3,__uint64 *param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  __uint64 _Var19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong *puVar23;
  ulonglong uVar24;
  
  uVar20 = param_3 ^ *param_4;
  _Var19 = param_2;
  puVar23 = param_1;
  if (0x40 < param_2) {
    uVar21 = uVar20;
    uVar22 = uVar20;
    uVar24 = uVar20;
    do {
      _Var19 = _Var19 - 0x40;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar21 ^ puVar23[1];
      auVar11._8_8_ = 0;
      auVar11._0_8_ = param_4[1] ^ *puVar23;
      uVar21 = SUB168(auVar3 * auVar11,0) ^ SUB168(auVar3 * auVar11,8);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar22 ^ puVar23[3];
      auVar12._8_8_ = 0;
      auVar12._0_8_ = param_4[2] ^ puVar23[2];
      uVar22 = SUB168(auVar4 * auVar12,0) ^ SUB168(auVar4 * auVar12,8);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar20 ^ puVar23[5];
      auVar13._8_8_ = 0;
      auVar13._0_8_ = param_4[3] ^ puVar23[4];
      uVar20 = SUB168(auVar5 * auVar13,0) ^ SUB168(auVar5 * auVar13,8);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar24 ^ puVar23[7];
      auVar14._8_8_ = 0;
      auVar14._0_8_ = param_4[4] ^ puVar23[6];
      puVar23 = puVar23 + 8;
      uVar24 = SUB168(auVar6 * auVar14,0) ^ SUB168(auVar6 * auVar14,8);
    } while (0x40 < _Var19);
    uVar20 = uVar21 ^ uVar24 + uVar20 ^ uVar22;
  }
  uVar21 = param_4[1];
  if (0x20 < _Var19) {
    puVar1 = puVar23 + 3;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar20 ^ puVar23[1];
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar21 ^ *puVar23;
    puVar2 = puVar23 + 2;
    puVar23 = puVar23 + 4;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar20 ^ *puVar1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = *puVar2 ^ param_4[2];
    uVar20 = SUB168(auVar8 * auVar16,0) ^ SUB168(auVar7 * auVar15,0) ^ SUB168(auVar8 * auVar16,8) ^
             SUB168(auVar7 * auVar15,8);
    _Var19 = _Var19 - 0x20;
  }
  if (0x10 < _Var19) {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar20 ^ puVar23[1];
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar21 ^ *puVar23;
    uVar20 = SUB168(auVar9 * auVar17,0) ^ SUB168(auVar9 * auVar17,8);
  }
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar20 ^ *(ulonglong *)((longlong)param_1 + (param_2 - 8));
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar21 ^ *(ulonglong *)((longlong)param_1 + (param_2 - 0x10)) ^ param_2;
  return SUB168(auVar10 * auVar18,0) ^ SUB168(auVar10 * auVar18,8);
}

// PrefetchToLocalCache @ 14f8e8290

/* void __cdecl absl::lts_20240722::PrefetchToLocalCache(void const * __ptr64) */

void __cdecl absl::lts_20240722::PrefetchToLocalCache(void *param_1)

{
  return;
}

