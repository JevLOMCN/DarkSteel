// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 5

// AddReferencedObjects @ 14d607760

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<FCameraFramingZone>::
AddReferencedObjects
          (TComplexComponentOpsBase<FCameraFramingZone> *this,FReferenceCollector *param_1,
          void *param_2,int param_3)

{
  return;
}

// ConstructItems @ 14d611ba0

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<FCameraFramingZone>::ConstructItems
          (TComplexComponentOpsBase<FCameraFramingZone> *this,void *param_1,int param_2)

{
  DefaultConstructItems<FCameraFramingZone,int>(param_1,param_2);
  return;
}

// CopyItems @ 14d611ce0

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<FCameraFramingZone>::CopyItems
          (TComplexComponentOpsBase<FCameraFramingZone> *this,void *param_1,void *param_2,
          int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (0 < param_3) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar6 + (longlong)param_1);
      uVar3 = puVar1[1];
      param_3 = param_3 + -1;
      puVar2 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      param_1 = (void *)((longlong)param_1 + 0x20);
    } while (0 < param_3);
  }
  return;
}

// DestructItems @ 14d613360

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<FCameraFramingZone>::DestructItems
          (TComplexComponentOpsBase<FCameraFramingZone> *this,void *param_1,int param_2)

{
  return;
}

// RelocateConstructItems @ 14d631060

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<FCameraFramingZone>::
RelocateConstructItems
          (TComplexComponentOpsBase<FCameraFramingZone> *this,void *param_1,void *param_2,
          int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (0 < param_3) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      param_3 = param_3 + -1;
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      puVar1 = (undefined8 *)
               (((longlong)param_2 - (longlong)param_1) + -0x10 + (longlong)(puVar3 + 4));
      uVar2 = puVar1[1];
      puVar3[2] = *puVar1;
      puVar3[3] = uVar2;
      puVar3 = puVar3 + 4;
    } while (0 < param_3);
  }
  return;
}

