// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 4

// AddReferencedObjects<ULandscapeGrassType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<ULandscapeGrassType>,int,0>_> @ 145efaaf0

void __thiscall
FReferenceCollector::
AddReferencedObjects<ULandscapeGrassType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<ULandscapeGrassType>,int,0>_>
          (FReferenceCollector *this,
          TMapBase<TObjectPtr<ULandscapeGrassType>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<ULandscapeGrassType>,int,0>_>
          *param_1,UObject *param_2,FProperty *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  UObject *pUVar5;
  FProperty *pFVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  undefined1 *puVar14;
  int iVar15;
  int iVar16;
  undefined1 local_res10 [8];
  UObject *local_res18;
  FProperty *local_res20;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar3 = *(int *)&(param_1->Pairs).Elements.field_0x28;
  puVar1 = &(param_1->Pairs).Elements.field_0x10;
  iVar16 = 0;
  uVar8 = 1;
  iVar15 = 0;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(param_1->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar12 = *puVar13;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar16;
      iVar15 = iVar15 + 0x20;
      iVar16 = iVar16 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_145efab9d;
      uVar12 = puVar13[lVar10 + 1];
    }
    uVar8 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar9 = (int)lVar10 + -1 + iVar15;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_145efab9d:
  uVar12 = *(uint *)&(param_1->Pairs).Elements.field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar8,iVar16);
  TStack_68.CurrentBitIndex = iVar9;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar12 >> 5;
  TStack_68._28_4_ = iVar9;
  TStack_68.BaseBitIndex = iVar15;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(param_1->Pairs).Elements.field_0x8 -
                       *(int *)&(param_1->Pairs).Elements.field_0x34);
  local_res18 = param_2;
  local_res20 = param_3;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar6 = local_res20;
  pUVar5 = local_res18;
  uVar8 = *(uint *)&(param_1->Pairs).Elements.field_0x28;
  if (uVar12 != uVar8) {
    puVar14 = *(undefined1 **)&(param_1->Pairs).Elements.field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar16 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar16;
      uVar11 = uVar11 + 0x20;
      iVar16 = iVar16 + 1;
      uVar12 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_145efaca1;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_145efaca1:
  while( true ) {
    if (*(int *)&(param_1->Pairs).Elements.field_0x8 - *(int *)&(param_1->Pairs).Elements.field_0x34
        != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<ULandscapeGrassType>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_68.CurrentBitIndex == uVar12) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    (**(code **)(this->_padding_ + 0x88))
              (this,*(longlong *)&(param_1->Pairs).Elements +
                    (longlong)TStack_68.CurrentBitIndex * 0x18,pUVar5,pFVar6);
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

// AddReferencedObjects<UE::Math::TIntPoint<int>,ULandscapeHeightmapTextureEdgeFixup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>_> @ 145f69dd0

void __thiscall
FReferenceCollector::
AddReferencedObjects<UE::Math::TIntPoint<int>,ULandscapeHeightmapTextureEdgeFixup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>_>
          (FReferenceCollector *this,
          TMapBase<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>_>
          *param_1,UObject *param_2,FProperty *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  UObject *pUVar5;
  FProperty *pFVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  undefined1 *puVar14;
  int iVar15;
  int iVar16;
  undefined1 local_res10 [8];
  UObject *local_res18;
  FProperty *local_res20;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar3 = *(int *)&(param_1->Pairs).Elements.field_0x28;
  puVar1 = &(param_1->Pairs).Elements.field_0x10;
  iVar16 = 0;
  uVar8 = 1;
  iVar15 = 0;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(param_1->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar12 = *puVar13;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar16;
      iVar15 = iVar15 + 0x20;
      iVar16 = iVar16 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_145f69e7d;
      uVar12 = puVar13[lVar10 + 1];
    }
    uVar8 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar9 = (int)lVar10 + -1 + iVar15;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_145f69e7d:
  uVar12 = *(uint *)&(param_1->Pairs).Elements.field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar8,iVar16);
  TStack_68.CurrentBitIndex = iVar9;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar12 >> 5;
  TStack_68._28_4_ = iVar9;
  TStack_68.BaseBitIndex = iVar15;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(param_1->Pairs).Elements.field_0x8 -
                       *(int *)&(param_1->Pairs).Elements.field_0x34);
  local_res18 = param_2;
  local_res20 = param_3;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar6 = local_res20;
  pUVar5 = local_res18;
  uVar8 = *(uint *)&(param_1->Pairs).Elements.field_0x28;
  if (uVar12 != uVar8) {
    puVar14 = *(undefined1 **)&(param_1->Pairs).Elements.field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar16 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar16;
      uVar11 = uVar11 + 0x20;
      iVar16 = iVar16 + 1;
      uVar12 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_145f69f81;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_145f69f81:
  while( true ) {
    if (*(int *)&(param_1->Pairs).Elements.field_0x8 - *(int *)&(param_1->Pairs).Elements.field_0x34
        != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_68.CurrentBitIndex == uVar12) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    (**(code **)(this->_padding_ + 0x88))
              (this,*(longlong *)&(param_1->Pairs).Elements +
                    ((longlong)TStack_68.CurrentBitIndex * 3 + 1) * 8,pUVar5,pFVar6);
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

// AddReferencedObjects<FGuid,ULandscapeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<ULandscapeInfo>,0>_> @ 145f6a010

void __thiscall
FReferenceCollector::
AddReferencedObjects<FGuid,ULandscapeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<ULandscapeInfo>,0>_>
          (FReferenceCollector *this,
          TMapBase<FGuid,TObjectPtr<ULandscapeInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<ULandscapeInfo>,0>_>
          *param_1,UObject *param_2,FProperty *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  UObject *pUVar5;
  FProperty *pFVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  undefined1 *puVar14;
  int iVar15;
  int iVar16;
  undefined1 local_res10 [8];
  UObject *local_res18;
  FProperty *local_res20;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar3 = *(int *)&(param_1->Pairs).Elements.field_0x28;
  puVar1 = &(param_1->Pairs).Elements.field_0x10;
  iVar16 = 0;
  uVar8 = 1;
  iVar15 = 0;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(param_1->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar12 = *puVar13;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar16;
      iVar15 = iVar15 + 0x20;
      iVar16 = iVar16 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_145f6a0bd;
      uVar12 = puVar13[lVar10 + 1];
    }
    uVar8 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar9 = (int)lVar10 + -1 + iVar15;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_145f6a0bd:
  uVar12 = *(uint *)&(param_1->Pairs).Elements.field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar8,iVar16);
  TStack_68.CurrentBitIndex = iVar9;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar12 >> 5;
  TStack_68._28_4_ = iVar9;
  TStack_68.BaseBitIndex = iVar15;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(param_1->Pairs).Elements.field_0x8 -
                       *(int *)&(param_1->Pairs).Elements.field_0x34);
  local_res18 = param_2;
  local_res20 = param_3;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar6 = local_res20;
  pUVar5 = local_res18;
  uVar8 = *(uint *)&(param_1->Pairs).Elements.field_0x28;
  if (uVar12 != uVar8) {
    puVar14 = *(undefined1 **)&(param_1->Pairs).Elements.field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar16 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar16;
      uVar11 = uVar11 + 0x20;
      iVar16 = iVar16 + 1;
      uVar12 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_145f6a1c1;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_145f6a1c1:
  while( true ) {
    if (*(int *)&(param_1->Pairs).Elements.field_0x8 - *(int *)&(param_1->Pairs).Elements.field_0x34
        != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<FGuid,TObjectPtr<ULandscapeInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_68.CurrentBitIndex == uVar12) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    (**(code **)(this->_padding_ + 0x88))
              (this,*(longlong *)&(param_1->Pairs).Elements + 0x10 +
                    (longlong)TStack_68.CurrentBitIndex * 0x20,pUVar5,pFVar6);
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

// AddReferencedObjects<ULandscapeHeightmapTextureEdgeFixup> @ 145f6a250

void __thiscall
FReferenceCollector::AddReferencedObjects<ULandscapeHeightmapTextureEdgeFixup>
          (FReferenceCollector *this,
          TSet<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,DefaultKeyFuncs<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>,FDefaultSetAllocator>
          *param_1,UObject *param_2,FProperty *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  UObject *pUVar5;
  FProperty *pFVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  undefined1 *puVar14;
  int iVar15;
  int iVar16;
  undefined1 local_res10 [8];
  UObject *local_res18;
  FProperty *local_res20;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar16 = 0;
  uVar8 = 1;
  iVar15 = 0;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar12 = *puVar13;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar16;
      iVar15 = iVar15 + 0x20;
      iVar16 = iVar16 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_145f6a2fd;
      uVar12 = puVar13[lVar10 + 1];
    }
    uVar8 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar9 = (int)lVar10 + -1 + iVar15;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_145f6a2fd:
  uVar12 = *(uint *)&(param_1->Elements).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar8,iVar16);
  TStack_68.CurrentBitIndex = iVar9;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar12 >> 5;
  TStack_68._28_4_ = iVar9;
  TStack_68.BaseBitIndex = iVar15;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  local_res18 = param_2;
  local_res20 = param_3;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar6 = local_res20;
  pUVar5 = local_res18;
  uVar8 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar12 != uVar8) {
    puVar14 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar16 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar16;
      uVar11 = uVar11 + 0x20;
      iVar16 = iVar16 + 1;
      uVar12 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_145f6a401;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_145f6a401:
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_68.CurrentBitIndex == uVar12) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    (**(code **)(this->_padding_ + 0x88))
              (this,(longlong)TStack_68.CurrentBitIndex * 0x10 + *(longlong *)&param_1->Elements,
               pUVar5,pFVar6);
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

