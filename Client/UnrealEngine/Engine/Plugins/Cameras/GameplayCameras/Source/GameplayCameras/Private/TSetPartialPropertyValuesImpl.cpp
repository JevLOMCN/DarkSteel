// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 4

// ForEachAllocation @ 14d616de0

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::ForEachAllocation(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
                    *this,FEntityAllocation *param_1,TRead<UObject_*> param_2,
                   TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                   *param_3,TReadOptional<double> param_4,TReadOptional<double> param_5,
                   TReadOptional<double> param_6,TReadOptional<double> param_7)

{
  ushort *puVar1;
  TSharedPtr<FTrackInstancePropertyBindings,1> *pTVar2;
  
  if (*(FCustomPropertyIndex **)&param_3->Data != (FCustomPropertyIndex *)0x0) {
    ForEachCustom(this,param_1,(UObject **)param_2,*(FCustomPropertyIndex **)&param_3->Data,
                  (double *)param_4,(double *)param_5,(double *)param_6,(double *)param_7);
    return;
  }
  puVar1 = *(ushort **)&(param_3->Data).field_0x8;
  if (puVar1 != (ushort *)0x0) {
    ForEachFast(this,param_1,(UObject **)param_2,puVar1,(double *)param_4,(double *)param_5,
                (double *)param_6,(double *)param_7);
    return;
  }
  pTVar2 = *(TSharedPtr<FTrackInstancePropertyBindings,1> **)&(param_3->Data).field_0x10;
  if (pTVar2 != (TSharedPtr<FTrackInstancePropertyBindings,1> *)0x0) {
    ForEachSlow(this,param_1,(UObject **)param_2,pTVar2,(double *)param_4,(double *)param_5,
                (double *)param_6,(double *)param_7);
    return;
  }
  return;
}

// ForEachCustom @ 14d616e30

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::ForEachCustom(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
                *this,FEntityAllocation *param_1,UObject **param_2,FCustomPropertyIndex *param_3,
               double *param_4,double *param_5,double *param_6,double *param_7)

{
  ushort uVar1;
  ushort uVar2;
  code *pcVar3;
  FPropertyCompositeDefinition *pFVar4;
  bool bVar5;
  double *pdVar6;
  int iVar7;
  ulonglong uVar8;
  double *pdVar9;
  double *pdVar10;
  ulonglong uVar11;
  double *pdVar12;
  double *pdVar13;
  uint local_res10;
  double local_78 [4];
  undefined1 local_58 [32];
  
  uVar1 = param_1->Size;
  uVar8 = 0;
  local_res10 = 0;
  uVar11 = uVar8;
  if ((ulonglong)uVar1 != 0) {
    do {
      pdVar9 = (double *)0x0;
      uVar2 = param_3[uVar11].Value;
      local_78[0] = 0.0;
      local_78[1] = 0.0;
      local_78[2] = 0.0;
      local_78[3] = 0.0;
      pdVar6 = (double *)
               (**(code **)((this->CustomAccessors).Base +
                           (longlong)(int)((uint)uVar2 * (this->CustomAccessors).Stride) + 0x18))
                         (local_58,param_2[uVar11]);
      local_78[0] = *pdVar6;
      local_78[1] = pdVar6[1];
      local_78[2] = pdVar6[2];
      local_78[3] = pdVar6[3];
      iVar7 = (int)uVar8;
      pdVar6 = param_7 + iVar7;
      if (param_7 == (double *)0x0) {
        pdVar6 = pdVar9;
      }
      pdVar13 = param_6 + iVar7;
      if (param_6 == (double *)0x0) {
        pdVar13 = pdVar9;
      }
      pdVar12 = param_5 + iVar7;
      if (param_5 == (double *)0x0) {
        pdVar12 = pdVar9;
      }
      pdVar10 = param_4 + iVar7;
      if (param_4 == (double *)0x0) {
        pdVar10 = pdVar9;
      }
      pFVar4 = (this->CompositeDefinitions).DataPtr;
      iVar7 = (this->CompositeDefinitions).ArrayNum;
      if ((iVar7 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (pdVar10 != (double *)0x0) {
        *(double *)((longlong)local_78 + (ulonglong)pFVar4->CompositeOffset) = *pdVar10;
      }
      if ((iVar7 < 2) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (pdVar12 != (double *)0x0) {
        *(double *)((longlong)local_78 + (ulonglong)pFVar4[1].CompositeOffset) = *pdVar12;
      }
      if ((iVar7 < 3) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (pdVar13 != (double *)0x0) {
        *(double *)((longlong)local_78 + (ulonglong)pFVar4[2].CompositeOffset) = *pdVar13;
      }
      if ((iVar7 < 4) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (pdVar6 != (double *)0x0) {
        *(double *)((longlong)local_78 + (ulonglong)pFVar4[3].CompositeOffset) = *pdVar6;
      }
      (**(code **)((this->CustomAccessors).Base +
                  (longlong)(int)((uint)uVar2 * (this->CustomAccessors).Stride) + 0x20))
                (param_2[uVar11],local_78);
      uVar11 = uVar11 + 1;
      local_res10 = local_res10 + 1;
      uVar8 = (ulonglong)local_res10;
    } while ((longlong)uVar11 < (longlong)(ulonglong)uVar1);
  }
  return;
}

// ForEachFast @ 14d617240

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::ForEachFast(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
              *this,FEntityAllocation *param_1,UObject **param_2,ushort *param_3,double *param_4,
             double *param_5,double *param_6,double *param_7)

{
  undefined8 *puVar1;
  ushort uVar2;
  ushort uVar3;
  UObject *pUVar4;
  code *pcVar5;
  FPropertyCompositeDefinition *pFVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  double *pdVar11;
  double *pdVar12;
  double *pdVar13;
  double *pdVar14;
  double *pdVar15;
  uint local_res10;
  double local_68 [5];
  
  uVar2 = param_1->Size;
  uVar9 = 0;
  local_res10 = 0;
  uVar10 = uVar9;
  if ((ulonglong)uVar2 != 0) {
    do {
      pdVar12 = (double *)0x0;
      uVar3 = param_3[uVar10];
      pdVar13 = (double *)(&param_2[uVar10]->field_0x0 + uVar3);
      local_68[0] = *pdVar13;
      local_68[1] = pdVar13[1];
      puVar1 = (undefined8 *)(&param_2[uVar10]->field_0x10 + uVar3);
      local_68[2] = (double)*puVar1;
      local_68[3] = (double)puVar1[1];
      iVar8 = (int)uVar9;
      pdVar13 = param_7 + iVar8;
      if (param_7 == (double *)0x0) {
        pdVar13 = pdVar12;
      }
      pdVar15 = param_6 + iVar8;
      if (param_6 == (double *)0x0) {
        pdVar15 = pdVar12;
      }
      pdVar14 = param_5 + iVar8;
      if (param_5 == (double *)0x0) {
        pdVar14 = pdVar12;
      }
      pdVar11 = param_4 + iVar8;
      if (param_4 == (double *)0x0) {
        pdVar11 = pdVar12;
      }
      pFVar6 = (this->CompositeDefinitions).DataPtr;
      iVar8 = (this->CompositeDefinitions).ArrayNum;
      if ((iVar8 < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (pdVar11 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar6->CompositeOffset) = *pdVar11;
      }
      if ((iVar8 < 2) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (pdVar14 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar6[1].CompositeOffset) = *pdVar14;
      }
      if ((iVar8 < 3) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (pdVar15 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar6[2].CompositeOffset) = *pdVar15;
      }
      if ((iVar8 < 4) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (pdVar13 != (double *)0x0) {
        *(double *)((longlong)local_68 + (ulonglong)pFVar6[3].CompositeOffset) = *pdVar13;
      }
      local_res10 = local_res10 + 1;
      uVar9 = (ulonglong)local_res10;
      pUVar4 = param_2[uVar10];
      uVar10 = uVar10 + 1;
      pdVar13 = (double *)(&pUVar4->field_0x0 + uVar3);
      *pdVar13 = local_68[0];
      pdVar13[1] = local_68[1];
      puVar1 = (undefined8 *)(&pUVar4->field_0x10 + uVar3);
      *puVar1 = local_68[2];
      puVar1[1] = local_68[3];
    } while ((longlong)uVar10 < (longlong)(ulonglong)uVar2);
  }
  return;
}

// ForEachSlow @ 14d6174f0

void __thiscall
UE::MovieScene::
TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::ForEachSlow(TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
              *this,FEntityAllocation *param_1,UObject **param_2,
             TSharedPtr<FTrackInstancePropertyBindings,1> *param_3,double *param_4,double *param_5,
             double *param_6,double *param_7)

{
  uchar uVar1;
  ushort uVar2;
  int iVar3;
  FTrackInstancePropertyBindings *this_00;
  code *pcVar4;
  FPropertyCompositeDefinition *pFVar5;
  bool bVar6;
  FResolvedPropertyAndFunction *this_01;
  FCameraFramingZone *pFVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  double *pdVar14;
  double *pdVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  FCameraFramingZone local_88 [2];
  
  uVar11 = 0;
  uVar2 = param_1->Size;
  uVar13 = uVar11;
  if ((ulonglong)uVar2 != 0) {
    do {
      pdVar9 = (double *)0x0;
      this_00 = param_3->Object;
      local_88[0].Left = 0.0;
      local_88[0].Top = 0.0;
      local_88[0].Right = 0.0;
      local_88[0].Bottom = 0.0;
      uVar16 = 0;
      uVar17 = 0;
      uVar18 = 0;
      uVar19 = 0;
      uVar20 = 0;
      uVar21 = 0;
      uVar22 = 0;
      uVar23 = 0;
      this_01 = FTrackInstancePropertyBindings::FindOrAdd(this_00,param_2[uVar11]);
      uVar1 = (this_01->ResolvedProperty).TypeIndex;
      if (uVar1 == '\0') {
        pFVar7 = FCachedProperty::GetPropertyAddress<FCameraFramingZone>((FCachedProperty *)this_01)
        ;
LAB_14d61759e:
        if (pFVar7 != (FCameraFramingZone *)0x0) {
          uVar16 = *(undefined4 *)&pFVar7->Left;
          uVar17 = *(undefined4 *)((longlong)&pFVar7->Left + 4);
          uVar18 = *(undefined4 *)&pFVar7->Top;
          uVar19 = *(undefined4 *)((longlong)&pFVar7->Top + 4);
          uVar20 = *(undefined4 *)&pFVar7->Right;
          uVar21 = *(undefined4 *)((longlong)&pFVar7->Right + 4);
          uVar22 = *(undefined4 *)&pFVar7->Bottom;
          uVar23 = *(undefined4 *)((longlong)&pFVar7->Bottom + 4);
        }
      }
      else if (uVar1 == '\x01') {
        pFVar7 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this_01,false);
        goto LAB_14d61759e;
      }
      iVar12 = (int)uVar13;
      local_88[0].Left = (double)CONCAT44(uVar17,uVar16);
      local_88[0].Right = (double)CONCAT44(uVar21,uVar20);
      local_88[0].Top = (double)CONCAT44(uVar19,uVar18);
      local_88[0].Bottom = (double)CONCAT44(uVar23,uVar22);
      pdVar8 = param_7 + iVar12;
      if (param_7 == (double *)0x0) {
        pdVar8 = pdVar9;
      }
      pdVar15 = param_6 + iVar12;
      if (param_6 == (double *)0x0) {
        pdVar15 = pdVar9;
      }
      pdVar14 = param_5 + iVar12;
      if (param_5 == (double *)0x0) {
        pdVar14 = pdVar9;
      }
      pdVar10 = param_4 + iVar12;
      if (param_4 == (double *)0x0) {
        pdVar10 = pdVar9;
      }
      pFVar5 = (this->CompositeDefinitions).DataPtr;
      iVar3 = (this->CompositeDefinitions).ArrayNum;
      if ((iVar3 < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pdVar10 != (double *)0x0) {
        *(double *)((longlong)&local_88[0].Left + (ulonglong)pFVar5->CompositeOffset) = *pdVar10;
      }
      if ((iVar3 < 2) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pdVar14 != (double *)0x0) {
        *(double *)((longlong)&local_88[0].Left + (ulonglong)pFVar5[1].CompositeOffset) = *pdVar14;
      }
      if ((iVar3 < 3) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pdVar15 != (double *)0x0) {
        *(double *)((longlong)&local_88[0].Left + (ulonglong)pFVar5[2].CompositeOffset) = *pdVar15;
      }
      if ((iVar3 < 4) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pdVar8 != (double *)0x0) {
        *(double *)((longlong)&local_88[0].Left + (ulonglong)pFVar5[3].CompositeOffset) = *pdVar8;
      }
      FTrackInstancePropertyBindings::CallFunction<FCameraFramingZone>
                (this_00,param_2[uVar11],local_88);
      param_3 = param_3 + 1;
      uVar11 = uVar11 + 1;
      uVar13 = (ulonglong)(iVar12 + 1);
    } while ((longlong)uVar11 < (longlong)(ulonglong)uVar2);
  }
  return;
}

