// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// AddReferencedObjects<USoundModulatorBase> @ 14733a1e0

void __thiscall
FReferenceCollector::AddReferencedObjects<USoundModulatorBase>
          (FReferenceCollector *this,
          TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14733a28d;
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
LAB_14733a28d:
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
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14733a391;
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
LAB_14733a391:
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// AddReferencedObjects<USoundMix,FSoundMixState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<USoundMix>,FSoundMixState,0>_> @ 147609610

void __thiscall
FReferenceCollector::
AddReferencedObjects<USoundMix,FSoundMixState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<USoundMix>,FSoundMixState,0>_>
          (FReferenceCollector *this,
          TMapBase<TObjectPtr<USoundMix>,FSoundMixState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<USoundMix>,FSoundMixState,0>_>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_1476096bd;
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
LAB_1476096bd:
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
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_1476097c1;
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
LAB_1476097c1:
  while( true ) {
    if (*(int *)&(param_1->Pairs).Elements.field_0x8 - *(int *)&(param_1->Pairs).Elements.field_0x34
        != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USoundMix>,FSoundMixState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_68.CurrentBitIndex == uVar12) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    (**(code **)(this->_padding_ + 0x88))
              (this,(longlong)TStack_68.CurrentBitIndex * 0x50 +
                    *(longlong *)&(param_1->Pairs).Elements,pUVar5,pFVar6);
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

// AddReferencedObjects<USceneComponent,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>_> @ 147740f30

void __thiscall
FReferenceCollector::
AddReferencedObjects<USceneComponent,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>_>
          (FReferenceCollector *this,
          TMapBase<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>_>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_147740fdd;
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
LAB_147740fdd:
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
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_1477410e1;
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
LAB_1477410e1:
  while( true ) {
    if (*(int *)&(param_1->Pairs).Elements.field_0x8 - *(int *)&(param_1->Pairs).Elements.field_0x34
        != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_68.CurrentBitIndex == uVar12) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    (**(code **)(this->_padding_ + 0x88))
              (this,(longlong)TStack_68.CurrentBitIndex * 0x80 +
                    *(longlong *)&(param_1->Pairs).Elements,pUVar5,pFVar6);
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

// AddReferencedObjects<FName,UObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UObject>,0>_> @ 14867e170

void __thiscall
FReferenceCollector::
AddReferencedObjects<FName,UObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UObject>,0>_>
          (FReferenceCollector *this,
          TMapBase<FName,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UObject>,0>_>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14867e21d;
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
LAB_14867e21d:
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
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14867e321;
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
LAB_14867e321:
  while( true ) {
    if (*(int *)&(param_1->Pairs).Elements.field_0x8 - *(int *)&(param_1->Pairs).Elements.field_0x34
        != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// AddStableReferenceMap<TObjectPtr<UClass>,TObjectPtr<USubsystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>_> @ 1487f2cc0

void __thiscall
FReferenceCollector::
AddStableReferenceMap<TObjectPtr<UClass>,TObjectPtr<USubsystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>_>
          (FReferenceCollector *this,
          TMapBase<TObjectPtr<UClass>,TObjectPtr<USubsystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>_>
          *param_1)

{
  undefined1 *puVar1;
  FObjectPtr *pFVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar4 = *(int *)&(param_1->Pairs).Elements.field_0x28;
  puVar1 = &(param_1->Pairs).Elements.field_0x10;
  iVar12 = 0;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&(param_1->Pairs).Elements.field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1487f2d5d;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar3 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    iVar8 = local_res18 + -1 + iVar14;
    if (iVar4 < iVar8) {
      iVar8 = iVar4;
    }
  }
LAB_1487f2d5d:
  uVar11 = *(uint *)&(param_1->Pairs).Elements.field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar12);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(param_1->Pairs).Elements.field_0x8 -
                       *(int *)&(param_1->Pairs).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar4 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(param_1->Pairs).Elements.field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(param_1->Pairs).Elements.field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1487f2e60;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_1487f2e60:
  while( true ) {
    if (*(int *)&(param_1->Pairs).Elements.field_0x8 - *(int *)&(param_1->Pairs).Elements.field_0x34
        != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UClass>,TObjectPtr<USubsystem>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pFVar2 = (FObjectPtr *)
             (*(longlong *)&(param_1->Pairs).Elements + (longlong)TStack_60.CurrentBitIndex * 0x18);
    AddStableReferenceFwd(this,pFVar2);
    AddStableReferenceFwd(this,pFVar2 + 1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

