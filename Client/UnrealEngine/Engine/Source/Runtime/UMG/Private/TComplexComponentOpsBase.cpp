// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 20

// AddReferencedObjects @ 14690a940

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<UE::MovieScene::FIntermediateMargin>::
AddReferencedObjects
          (TComplexComponentOpsBase<UE::MovieScene::FIntermediateMargin> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  return;
}

// AddReferencedObjects @ 14690a950

void __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsBase<UE::MovieScene::FIntermediateWidgetTransform>::AddReferencedObjects
          (TComplexComponentOpsBase<UE::MovieScene::FIntermediateWidgetTransform> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  return;
}

// AddReferencedObjects @ 14690a960

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<UE::MovieScene::FWidgetMaterialPath>::
AddReferencedObjects
          (TComplexComponentOpsBase<UE::MovieScene::FWidgetMaterialPath> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  return;
}

// AddReferencedObjects @ 14690a970

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<FWidgetMaterialHandle>::
AddReferencedObjects
          (TComplexComponentOpsBase<FWidgetMaterialHandle> *this,FReferenceCollector *param_1,
          void *param_2,int param_3)

{
  return;
}

// ConstructItems @ 1469105e0

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<UE::MovieScene::FIntermediateMargin>::
ConstructItems(TComplexComponentOpsBase<UE::MovieScene::FIntermediateMargin> *this,void *param_1,
              int param_2)

{
  return;
}

// ConstructItems @ 1469105f0

void __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsBase<UE::MovieScene::FIntermediateWidgetTransform>::ConstructItems
          (TComplexComponentOpsBase<UE::MovieScene::FIntermediateWidgetTransform> *this,
          void *param_1,int param_2)

{
  return;
}

// ConstructItems @ 146910600

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<UE::MovieScene::FWidgetMaterialPath>::
ConstructItems(TComplexComponentOpsBase<UE::MovieScene::FWidgetMaterialPath> *this,void *param_1,
              int param_2)

{
  DefaultConstructItems<UE::MovieScene::FWidgetMaterialPath,int>(param_1,param_2);
  return;
}

// ConstructItems @ 146910620

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<FWidgetMaterialHandle>::ConstructItems
          (TComplexComponentOpsBase<FWidgetMaterialHandle> *this,void *param_1,int param_2)

{
  DefaultConstructItems<FWidgetMaterialHandle,int>(param_1,param_2);
  return;
}

// CopyItems @ 146910b50

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<UE::MovieScene::FIntermediateMargin>::
CopyItems(TComplexComponentOpsBase<UE::MovieScene::FIntermediateMargin> *this,void *param_1,
         void *param_2,int param_3)

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

// CopyItems @ 146910b90

void __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsBase<UE::MovieScene::FIntermediateWidgetTransform>::CopyItems
          (TComplexComponentOpsBase<UE::MovieScene::FIntermediateWidgetTransform> *this,
          void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  if (0 < param_3) {
    lVar8 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar3 = ((undefined8 *)(lVar8 + (longlong)param_1))[1];
      param_3 = param_3 + -1;
      uVar2 = *(undefined8 *)(lVar8 + 0x30 + (longlong)param_1);
      puVar1 = (undefined8 *)(lVar8 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar8 + 0x20 + (longlong)param_1);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar8 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x38);
    } while (0 < param_3);
  }
  return;
}

// CopyItems @ 146910be0

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<UE::MovieScene::FWidgetMaterialPath>::
CopyItems(TComplexComponentOpsBase<UE::MovieScene::FWidgetMaterialPath> *this,void *param_1,
         void *param_2,int param_3)

{
  uchar *puVar1;
  int iVar2;
  int iVar3;
  ForElementType<FName> FVar4;
  ForElementType<FName> _Dst;
  ForElementType<FName> _Src;
  
  if (0 < param_3) {
    FVar4 = (ForElementType<FName>)param_1;
    do {
      _Src = (ForElementType<FName>)((longlong)param_2 + ((longlong)FVar4 - (longlong)param_1));
      param_3 = param_3 + -1;
      if (FVar4 != _Src) {
        puVar1 = (uchar *)((longlong)FVar4 + 0x1c);
        iVar2 = *(int *)((longlong)_Src + 0x18);
        iVar3 = *(int *)puVar1;
        if (*(ForElementType<FName> *)((longlong)_Src + 0x10) != (ForElementType<FName>)0x0) {
          _Src = *(ForElementType<FName> *)((longlong)_Src + 0x10);
        }
        *(int *)((ForElementType<FName> *)((longlong)FVar4 + 0x18))->InlineData = iVar2;
        if ((iVar2 == 0) && (iVar3 == 0)) {
          puVar1[0] = '\x02';
          puVar1[1] = '\0';
          puVar1[2] = '\0';
          puVar1[3] = '\0';
        }
        else {
          Core::Private::
          ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                    (8,4,iVar2,iVar3,(ForElementType<FName> *)FVar4,iVar2,(int *)puVar1);
          _Dst = FVar4;
          if (*(ForElementType<FName> *)((longlong)FVar4 + 0x10) != (ForElementType<FName>)0x0) {
            _Dst = *(ForElementType<FName> *)((longlong)FVar4 + 0x10);
          }
          if (iVar2 != 0) {
            memcpy((void *)_Dst,(void *)_Src,(longlong)iVar2 << 3);
          }
        }
      }
      FVar4 = (ForElementType<FName>)((longlong)FVar4 + 0x20);
    } while (0 < param_3);
  }
  return;
}

// CopyItems @ 146910cd0

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<FWidgetMaterialHandle>::CopyItems
          (TComplexComponentOpsBase<FWidgetMaterialHandle> *this,void *param_1,void *param_2,
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
      puVar3 = puVar3 + 2;
    } while (0 < param_3);
  }
  return;
}

// DestructItems @ 1469141b0

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<UE::MovieScene::FIntermediateMargin>::
DestructItems(TComplexComponentOpsBase<UE::MovieScene::FIntermediateMargin> *this,void *param_1,
             int param_2)

{
  return;
}

// DestructItems @ 1469141c0

void __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsBase<UE::MovieScene::FIntermediateWidgetTransform>::DestructItems
          (TComplexComponentOpsBase<UE::MovieScene::FIntermediateWidgetTransform> *this,
          void *param_1,int param_2)

{
  return;
}

// DestructItems @ 1469141d0

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<UE::MovieScene::FWidgetMaterialPath>::
DestructItems(TComplexComponentOpsBase<UE::MovieScene::FWidgetMaterialPath> *this,void *param_1,
             int param_2)

{
  DestructItems<UE::MovieScene::FWidgetMaterialPath,int>(param_1,param_2);
  return;
}

// DestructItems @ 1469141f0

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<FWidgetMaterialHandle>::DestructItems
          (TComplexComponentOpsBase<FWidgetMaterialHandle> *this,void *param_1,int param_2)

{
  return;
}

// RelocateConstructItems @ 14693ad20

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<UE::MovieScene::FIntermediateMargin>::
RelocateConstructItems
          (TComplexComponentOpsBase<UE::MovieScene::FIntermediateMargin> *this,void *param_1,
          void *param_2,int param_3)

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

// RelocateConstructItems @ 14693ad60

void __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsBase<UE::MovieScene::FIntermediateWidgetTransform>::RelocateConstructItems
          (TComplexComponentOpsBase<UE::MovieScene::FIntermediateWidgetTransform> *this,
          void *param_1,void *param_2,int param_3)

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
      puVar1 = (undefined8 *)((longlong)param_1 + 0x38);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar4 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      puVar2 = (undefined8 *)(lVar4 + -0x28 + (longlong)puVar1);
      uVar3 = puVar2[1];
      *(undefined8 *)((longlong)param_1 + 0x10) = *puVar2;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar3;
      puVar2 = (undefined8 *)(lVar4 + -0x18 + (longlong)puVar1);
      uVar3 = puVar2[1];
      *(undefined8 *)((longlong)param_1 + 0x20) = *puVar2;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)(lVar4 + -8 + (longlong)puVar1);
      param_1 = puVar1;
    } while (0 < param_3);
  }
  return;
}

// RelocateConstructItems @ 14693adb0

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<UE::MovieScene::FWidgetMaterialPath>::
RelocateConstructItems
          (TComplexComponentOpsBase<UE::MovieScene::FWidgetMaterialPath> *this,void *param_1,
          void *param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (0 < param_3) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      param_3 = param_3 + -1;
      *puVar1 = 0;
      if (*(longlong *)((longlong)puVar1 + lVar2) == 0) {
        memmove(puVar1 + -2,(void *)(lVar2 + -0x10 + (longlong)puVar1),0x10);
      }
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      *puVar1 = *(undefined8 *)((longlong)puVar1 + lVar2);
      *(undefined8 *)((longlong)puVar1 + lVar2) = 0;
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(lVar2 + 8 + (longlong)puVar1);
      *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(lVar2 + 0xc + (longlong)puVar1);
      *(undefined4 *)(lVar2 + 8 + (longlong)puVar1) = 0;
      *(undefined4 *)(lVar2 + 0xc + (longlong)puVar1) = 2;
      if (*(void **)((longlong)puVar1 + lVar2) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)puVar1 + lVar2));
      }
      puVar1 = puVar1 + 4;
    } while (0 < param_3);
  }
  return;
}

// RelocateConstructItems @ 14693ae70

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<FWidgetMaterialHandle>::
RelocateConstructItems
          (TComplexComponentOpsBase<FWidgetMaterialHandle> *this,void *param_1,void *param_2,
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
      puVar3 = puVar3 + 2;
    } while (0 < param_3);
  }
  return;
}

