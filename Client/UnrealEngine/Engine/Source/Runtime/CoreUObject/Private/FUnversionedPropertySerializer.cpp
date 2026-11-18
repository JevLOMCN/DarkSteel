// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 9

// IsRangeZero<unsigned_char> @ 141f59d90

bool __cdecl FUnversionedPropertySerializer::IsRangeZero<unsigned_char>(void *param_1,uint param_2)

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  byte *pbVar5;
  byte bVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  uVar7 = 0;
  bVar6 = 0;
  uVar4 = 0;
  if (param_2 != 0) {
    if (0x1f < param_2) {
      auVar9 = ZEXT816(0);
      auVar8 = ZEXT816(0);
      do {
        pauVar1 = (undefined1 (*) [16])((longlong)param_1 + uVar4);
        iVar2 = (int)uVar4;
        uVar3 = iVar2 + 0x20;
        uVar4 = (ulonglong)uVar3;
        auVar9 = auVar9 | *pauVar1;
        auVar8 = auVar8 | *(undefined1 (*) [16])((ulonglong)(iVar2 + 0x10) + (longlong)param_1);
      } while (uVar3 < (param_2 & 0xffffffe0));
      auVar8 = auVar8 | auVar9 | (auVar8 | auVar9) >> 0x40;
      auVar8 = auVar8 | auVar8 >> 0x20;
      auVar8 = auVar8 | auVar8 >> 0x10;
      uVar7 = auVar8._0_4_ | auVar8._1_4_;
      bVar6 = (byte)uVar7;
      if (param_2 <= uVar3) goto LAB_141f59e3d;
    }
    pbVar5 = (byte *)(uVar4 + (longlong)param_1);
    uVar4 = (ulonglong)(param_2 - (int)uVar4);
    do {
      bVar6 = (byte)uVar7 | *pbVar5;
      uVar7 = (uint)bVar6;
      pbVar5 = pbVar5 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
LAB_141f59e3d:
  return bVar6 == 0;
}

// IsRangeZero<unsigned_short> @ 141f59e50

bool __cdecl FUnversionedPropertySerializer::IsRangeZero<unsigned_short>(void *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar5;
  ushort *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  if (param_2 != 0) {
    if (0xf < param_2) {
      auVar8 = ZEXT816(0);
      auVar7 = ZEXT816(0);
      do {
        iVar2 = (int)uVar4;
        lVar1 = uVar4 * 2;
        uVar3 = iVar2 + 0x10;
        uVar4 = (ulonglong)uVar3;
        auVar8 = auVar8 | *(undefined1 (*) [16])((longlong)param_1 + lVar1);
        auVar7 = auVar7 | *(undefined1 (*) [16])((longlong)param_1 + (ulonglong)(iVar2 + 8) * 2);
      } while (uVar3 < (param_2 & 0xfffffff0));
      auVar7 = auVar7 | auVar8 | (auVar7 | auVar8) >> 0x40;
      auVar7 = auVar7 | auVar7 >> 0x20;
      uVar4 = (ulonglong)(auVar7._0_4_ | auVar7._2_4_);
      if (param_2 <= uVar3) goto LAB_141f59ede;
    }
    uVar5 = (ulonglong)(param_2 - uVar3);
    puVar6 = (ushort *)((longlong)param_1 + (ulonglong)uVar3 * 2);
    do {
      uVar4 = (ulonglong)(ushort)((ushort)uVar4 | *puVar6);
      puVar6 = puVar6 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
LAB_141f59ede:
  return (short)uVar4 == 0;
}

// IsRangeZero<unsigned_int> @ 141f59ef0

bool __cdecl FUnversionedPropertySerializer::IsRangeZero<unsigned_int>(void *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar4 = 0;
  uVar5 = 0;
  if (param_2 != 0) {
    if (7 < param_2) {
      uVar9 = 0;
      uVar10 = 0;
      uVar11 = 0;
      uVar12 = 0;
      uVar4 = 0;
      uVar6 = 0;
      uVar7 = 0;
      uVar8 = 0;
      do {
        puVar2 = (uint *)((longlong)param_1 + (ulonglong)uVar5 * 4);
        uVar1 = uVar5 + 4;
        uVar5 = uVar5 + 8;
        uVar9 = uVar9 | *puVar2;
        uVar10 = uVar10 | puVar2[1];
        uVar11 = uVar11 | puVar2[2];
        uVar12 = uVar12 | puVar2[3];
        puVar2 = (uint *)((longlong)param_1 + (ulonglong)uVar1 * 4);
        uVar4 = uVar4 | *puVar2;
        uVar6 = uVar6 | puVar2[1];
        uVar7 = uVar7 | puVar2[2];
        uVar8 = uVar8 | puVar2[3];
      } while (uVar5 < (param_2 & 0xfffffff8));
      uVar4 = uVar4 | uVar9 | uVar7 | uVar11 | uVar6 | uVar10 | uVar8 | uVar12;
      if (param_2 <= uVar5) goto LAB_141f59f6e;
    }
    puVar2 = (uint *)((longlong)param_1 + (ulonglong)uVar5 * 4);
    uVar3 = (ulonglong)(param_2 - uVar5);
    do {
      uVar4 = uVar4 | *puVar2;
      puVar2 = puVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
LAB_141f59f6e:
  return uVar4 == 0;
}

// IsRangeZero<unsigned___int64> @ 141f59f80

bool __cdecl
FUnversionedPropertySerializer::IsRangeZero<unsigned___int64>(void *param_1,uint param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar3 = 0;
  if (param_2 != 0) {
    uVar2 = uVar3;
    if (3 < param_2) {
      uVar8 = 0;
      uVar9 = 0;
      uVar6 = 0;
      uVar7 = 0;
      do {
        iVar4 = (int)uVar2;
        puVar1 = (ulonglong *)((longlong)param_1 + uVar2 * 8);
        uVar5 = iVar4 + 4;
        uVar2 = (ulonglong)uVar5;
        uVar8 = uVar8 | *puVar1;
        uVar9 = uVar9 | puVar1[1];
        puVar1 = (ulonglong *)((longlong)param_1 + (ulonglong)(iVar4 + 2) * 8);
        uVar6 = uVar6 | *puVar1;
        uVar7 = uVar7 | puVar1[1];
      } while (uVar5 < (param_2 & 0xfffffffc));
      uVar3 = uVar6 | uVar8 | uVar7 | uVar9;
      if (param_2 <= uVar5) goto LAB_141f59ffd;
    }
    puVar1 = (ulonglong *)((longlong)param_1 + uVar2 * 8);
    uVar2 = (ulonglong)(param_2 - (int)uVar2);
    do {
      uVar3 = uVar3 | *puVar1;
      puVar1 = puVar1 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
LAB_141f59ffd:
  return uVar3 == 0;
}

// IsZero<unsigned_char> @ 141f5a010

bool __cdecl FUnversionedPropertySerializer::IsZero<unsigned_char>(void *param_1)

{
  return *(char *)param_1 == '\0';
}

// IsZero<unsigned_short> @ 141f5a020

bool __cdecl FUnversionedPropertySerializer::IsZero<unsigned_short>(void *param_1)

{
  return *(short *)param_1 == 0;
}

// IsZero<unsigned_int> @ 141f5a030

bool __cdecl FUnversionedPropertySerializer::IsZero<unsigned_int>(void *param_1)

{
  return *(int *)param_1 == 0;
}

// IsZero<unsigned___int64> @ 141f5a040

bool __cdecl FUnversionedPropertySerializer::IsZero<unsigned___int64>(void *param_1)

{
  return *(longlong *)param_1 == 0;
}

// SerializeAsInteger @ 141f9eae0

void __cdecl
FUnversionedPropertySerializer::SerializeAsInteger
          (FStructuredArchiveSlot param_1,void *param_2,EIntegerType param_3)

{
  longlong lVar1;
  FArchive *pFVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  
  lVar1 = *(longlong *)param_1;
  if (param_3 == Uint8) {
    plVar6 = *(longlong **)(lVar1 + 8);
    puVar7 = *(undefined1 **)plVar6[1];
    if (puVar7 + 1 <= (undefined1 *)((undefined8 *)plVar6[1])[1]) {
      *(undefined1 *)param_2 = *puVar7;
      *(longlong *)plVar6[1] = *(longlong *)plVar6[1] + 1;
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000141f9ebed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x188))(plVar6,param_2,1);
    return;
  }
  if (param_3 == Uint16) {
    pFVar2 = *(FArchive **)(lVar1 + 8);
    puVar5 = (undefined2 *)**(undefined8 **)&pFVar2->field_0x8;
    if (puVar5 + 1 <= (undefined2 *)(*(undefined8 **)&pFVar2->field_0x8)[1]) {
      *(undefined2 *)param_2 = *puVar5;
      **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 2;
      return;
    }
    if ((pFVar2->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141f9ebb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,param_2,2);
      return;
    }
    FArchive::SerializeByteOrderSwapped(pFVar2,param_2);
    return;
  }
  pFVar2 = *(FArchive **)(lVar1 + 8);
  puVar3 = *(undefined8 **)&pFVar2->field_0x8;
  puVar4 = (undefined8 *)*puVar3;
  if (param_3 != Uint32) {
    if (puVar4 + 1 <= (undefined8 *)puVar3[1]) {
      *(undefined8 *)param_2 = *puVar4;
      **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 8;
      return;
    }
    if ((pFVar2->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141f9eb37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,param_2,8);
      return;
    }
    FArchive::SerializeByteOrderSwapped(pFVar2,param_2);
    return;
  }
  if ((undefined4 *)((longlong)puVar4 + 4U) <= (undefined4 *)puVar3[1]) {
    *(undefined4 *)param_2 = *(undefined4 *)puVar4;
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 4;
    return;
  }
  if ((pFVar2->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141f9eb6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,param_2,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(pFVar2,param_2);
  return;
}

