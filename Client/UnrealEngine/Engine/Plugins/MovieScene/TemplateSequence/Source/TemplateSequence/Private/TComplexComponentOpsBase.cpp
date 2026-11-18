// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 10

// AddReferencedObjects @ 14ac73620

void __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsBase<UE::MovieScene::FTemplateSequenceComponentData>::AddReferencedObjects
          (TComplexComponentOpsBase<UE::MovieScene::FTemplateSequenceComponentData> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  return;
}

// AddReferencedObjects @ 14ac73630

void __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsBase<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>::
AddReferencedObjects
          (TComplexComponentOpsBase<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>
           *this,FReferenceCollector *param_1,void *param_2,int param_3)

{
  return;
}

// ConstructItems @ 14ac73f10

void __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsBase<UE::MovieScene::FTemplateSequenceComponentData>::ConstructItems
          (TComplexComponentOpsBase<UE::MovieScene::FTemplateSequenceComponentData> *this,
          void *param_1,int param_2)

{
  DefaultConstructItems<UE::MovieScene::FTemplateSequenceComponentData,int>(param_1,param_2);
  return;
}

// ConstructItems @ 14ac73f30

void __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsBase<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>::
ConstructItems(TComplexComponentOpsBase<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>
               *this,void *param_1,int param_2)

{
  DefaultConstructItems<UE::MovieScene::FTemplateSequencePropertyScaleComponentData,int>
            (param_1,param_2);
  return;
}

// CopyItems @ 14ac73f50

void __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsBase<UE::MovieScene::FTemplateSequenceComponentData>::CopyItems
          (TComplexComponentOpsBase<UE::MovieScene::FTemplateSequenceComponentData> *this,
          void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (0 < param_3) {
    puVar4 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      uVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      param_3 = param_3 + -1;
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      *(undefined4 *)(puVar4 + 2) = uVar2;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
    } while (0 < param_3);
  }
  return;
}

// CopyItems @ 14ac73f90

void __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsBase<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>::CopyItems
          (TComplexComponentOpsBase<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>
           *this,void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (0 < param_3) {
    lVar7 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar4 = ((undefined8 *)(lVar7 + (longlong)param_1))[1];
      uVar3 = *(undefined4 *)(lVar7 + 0x28 + (longlong)param_1);
      param_3 = param_3 + -1;
      uVar2 = *(undefined8 *)(lVar7 + 0x20 + (longlong)param_1);
      puVar1 = (undefined8 *)(lVar7 + 0x10 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar7 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x28) = uVar3;
      param_1 = (void *)((longlong)param_1 + 0x2c);
    } while (0 < param_3);
  }
  return;
}

// DestructItems @ 14ac74b30

void __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsBase<UE::MovieScene::FTemplateSequenceComponentData>::DestructItems
          (TComplexComponentOpsBase<UE::MovieScene::FTemplateSequenceComponentData> *this,
          void *param_1,int param_2)

{
  return;
}

// DestructItems @ 14ac74b40

void __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsBase<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>::DestructItems
          (TComplexComponentOpsBase<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>
           *this,void *param_1,int param_2)

{
  return;
}

// RelocateConstructItems @ 14ac7e650

void __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsBase<UE::MovieScene::FTemplateSequenceComponentData>::RelocateConstructItems
          (TComplexComponentOpsBase<UE::MovieScene::FTemplateSequenceComponentData> *this,
          void *param_1,void *param_2,int param_3)

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
      *(undefined4 *)(puVar3 + 2) =
           *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + -4 + (longlong)puVar3 + 0x14);
      puVar3 = (undefined8 *)((longlong)puVar3 + 0x14);
    } while (0 < param_3);
  }
  return;
}

// RelocateConstructItems @ 14ac7e690

void __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsBase<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>::
RelocateConstructItems
          (TComplexComponentOpsBase<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>
           *this,void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (0 < param_3) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar3 = ((undefined8 *)(lVar4 + (longlong)param_1))[1];
      param_3 = param_3 + -1;
      puVar1 = (undefined8 *)((longlong)param_1 + 0x2c);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar4 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      puVar2 = (undefined8 *)(lVar4 + -0x1c + (longlong)puVar1);
      uVar3 = puVar2[1];
      *(undefined8 *)((longlong)param_1 + 0x10) = *puVar2;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)(lVar4 + -0xc + (longlong)puVar1);
      *(undefined4 *)((longlong)param_1 + 0x28) = *(undefined4 *)(lVar4 + -4 + (longlong)puVar1);
      param_1 = puVar1;
    } while (0 < param_3);
  }
  return;
}

