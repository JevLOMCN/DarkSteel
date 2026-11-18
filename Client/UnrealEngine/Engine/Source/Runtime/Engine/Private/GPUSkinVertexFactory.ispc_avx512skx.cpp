// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// UpdateBoneData_CopyBones_avx512skx @ 140a971d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UpdateBoneData_CopyBones_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [16];
  undefined1 (*pauVar4) [16];
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  
  auVar3 = ___xmm_0000000e0000000a0000000600000002;
  auVar2 = ___ymm_0000000d0000000900000005000000010000000c000000080000000400000000;
  if (0 < (int)param_4) {
    pauVar4 = (undefined1 (*) [16])(param_1 + 0x20);
    uVar5 = 0;
    do {
      lVar6 = (ulonglong)*(ushort *)(param_3 + uVar5 * 2) * 0x40;
      auVar8 = *(undefined1 (*) [32])(param_2 + lVar6);
      auVar1 = *(undefined1 (*) [32])(param_2 + 0x20 + lVar6);
      auVar7 = vpermt2ps_avx512vl(auVar8,auVar2,auVar1);
      *(undefined1 (*) [32])(pauVar4 + -2) = auVar7;
      auVar8 = vpermt2ps_avx512vl(auVar8,ZEXT1632(auVar3),auVar1);
      *pauVar4 = auVar8._0_16_;
      uVar5 = uVar5 + 1;
      pauVar4 = pauVar4 + 3;
    } while (param_4 != uVar5);
  }
  return;
}

