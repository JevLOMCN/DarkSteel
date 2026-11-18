// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 119

// operator()<TMap<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>_> @ 142ab1c70

void __thiscall
`FAssetRegistryState::GetAllocatedSize'::__l2::<lambda_1>::
operator()<TMap<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>_>
          (void *this,
          TMap<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_142ab1d0d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    iVar7 = local_res18 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_142ab1d0d:
  uVar10 = *(uint *)&param_1->field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&param_1->field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_142ab1e10;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_142ab1e10:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    **(longlong **)this =
         **(longlong **)this +
         (longlong)
         *(int *)((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x14 + *(longlong *)param_1) * 8;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// operator()<TMap<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>_> @ 142ab1e90

void __thiscall
`FAssetRegistryState::GetAllocatedSize'::__l2::<lambda_1>::
operator()<TMap<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>_>
          (void *this,
          TMap<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar11 = 0;
  iVar13 = 0;
  uVar6 = 1;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_142ab1f2d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    iVar7 = local_res18 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_142ab1f2d:
  uVar10 = *(uint *)&param_1->field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&param_1->field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_142ab2030;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_142ab2030:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    uVar6 = *(uint *)(*(longlong *)param_1 + 0x1c + (longlong)TStack_60.CurrentBitIndex * 0x28);
    if (uVar6 < 2) {
      lVar8 = 0;
    }
    else {
      lVar8 = (longlong)(int)uVar6 << 3;
    }
    **(longlong **)this = **(longlong **)this + lVar8;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// operator()<TMap<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>_>_> @ 142ab20c0

void __thiscall
`FAssetRegistryState::GetAllocatedSize'::__l2::<lambda_1>::
operator()<TMap<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>_>_>
          (void *this,
          TMap<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>_>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  longlong lVar14;
  uint *puVar15;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar11 = 0;
  iVar13 = 0;
  uVar6 = 1;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar10 = *puVar15;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_142ab215d;
      uVar10 = puVar15[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    iVar7 = local_res18 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_142ab215d:
  uVar10 = *(uint *)&param_1->field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&param_1->field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_142ab2260;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_142ab2260:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar8 = (longlong)TStack_60.CurrentBitIndex * 0x60 + *(longlong *)param_1;
    if (*(uint *)(lVar8 + 0x50) < 2) {
      lVar14 = 0;
    }
    else {
      lVar14 = (longlong)(int)*(uint *)(lVar8 + 0x50) << 2;
    }
    **(longlong **)this =
         **(longlong **)this +
         lVar14 + (ulonglong)((*(int *)(lVar8 + 0x34) + 0x1fU >> 5) << 2) +
         (longlong)*(int *)(lVar8 + 0x14) * 0x18;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Load<FAssetRegistryReader_&> @ 142ac96b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAssetRegistryState::Load<FAssetRegistryReader_&>
          (FAssetRegistryState *this,FAssetRegistryReader *param_1,FAssetRegistryHeader *param_2,
          FAssetRegistryLoadOptions *param_3)

{
  int *piVar1;
  TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FAssetPackageData_*,TSizedDefaultAllocator<32>_> *pTVar3;
  Type TVar4;
  int iVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  bool bVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  ulong64 uVar15;
  ulonglong *puVar16;
  FAssetData *pFVar17;
  longlong lVar18;
  uint uVar19;
  FAssetData *pFVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined1 auStack_1b8 [32];
  FAssetData **local_198;
  FScriptContainerElement *local_190;
  longlong local_188;
  longlong local_180;
  undefined8 local_178;
  uint local_168;
  uint local_164;
  FAssetData *local_160;
  FAssetData *local_158;
  undefined8 local_150;
  FAssetPackageData *local_148;
  FAssetRegistryLoadOptions *local_140;
  undefined4 local_138;
  undefined1 local_134 [20];
  uint uStack_120;
  undefined4 uStack_11c;
  undefined8 *local_118;
  FAssetPackageData **local_110;
  TArrayView<FAssetData,int> local_108;
  undefined1 local_f8 [24];
  undefined1 local_e0 [64];
  void *local_a0;
  undefined4 local_98;
  ForAnyElementType local_90;
  undefined8 local_88;
  long64 local_80;
  FPackageFileVersion local_78;
  int local_70;
  FPackageCustomVersion *local_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  TVar4 = param_2->Version;
  plVar6 = (longlong *)param_1->_padding_;
  local_164 = 0;
  local_140 = param_3;
  if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,&local_164,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,&local_164);
    }
  }
  else {
    local_164 = *(uint *)*plVar6;
    *plVar6 = *plVar6 + 4;
  }
  uVar19 = local_164;
  uVar22 = (ulonglong)(int)local_164;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar22;
  uVar14 = SUB168(ZEXT816(0x68) * auVar9,0);
  if (SUB168(ZEXT816(0x68) * auVar9,8) != 0) {
    uVar14 = 0xffffffffffffffff;
  }
  uVar15 = uVar14 + 8;
  if (0xfffffffffffffff7 < uVar14) {
    uVar15 = 0xffffffffffffffff;
  }
  puVar16 = operator_new__(uVar15);
  if (puVar16 == (ulonglong *)0x0) {
    pFVar20 = (FAssetData *)0x0;
  }
  else {
    *puVar16 = uVar22;
    pFVar20 = (FAssetData *)(puVar16 + 1);
    pFVar17 = pFVar20;
    uVar14 = uVar22;
    if (uVar19 != 0) {
      do {
        (pFVar17->PackageName).ComparisonIndex = 0;
        (pFVar17->PackageName).Number = 0;
        (pFVar17->PackagePath).ComparisonIndex = 0;
        (pFVar17->PackagePath).Number = 0;
        (pFVar17->AssetName).ComparisonIndex = 0;
        (pFVar17->AssetName).Number = 0;
        (pFVar17->AssetClass).ComparisonIndex = 0;
        (pFVar17->AssetClass).Number = 0;
        (pFVar17->AssetClassPath).PackageName.ComparisonIndex = 0;
        (pFVar17->AssetClassPath).PackageName.Number = 0;
        (pFVar17->AssetClassPath).AssetName.ComparisonIndex = 0;
        (pFVar17->AssetClassPath).AssetName.Number = 0;
        (pFVar17->ChunkArrayRegistryHandle).Index = -1;
        pFVar17->PackageFlags = 0;
        (pFVar17->TagsAndValues).field0_0x0.Loose = (FAssetDataTagMap *)0x0;
        (pFVar17->TaggedAssetBundles).Object = (FAssetBundleData *)0x0;
        (pFVar17->TaggedAssetBundles).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        (pFVar17->ChunkIDs).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
        (pFVar17->ChunkIDs).ArrayNum = 0;
        (pFVar17->ChunkIDs).ArrayMax = 2;
        uVar14 = uVar14 - 1;
        pFVar17 = pFVar17 + 1;
      } while (uVar14 != 0);
    }
  }
  uStack_120 = uVar19;
  local_134._12_8_ = pFVar20;
  if (((int)uVar19 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar2 = &this->PreallocatedAssetDataBuffers;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_160 = pFVar20;
  if ((pFVar7 <= (FScriptContainerElement *)&local_160) &&
     (lVar18 = (longlong)(this->PreallocatedAssetDataBuffers).ArrayMax,
     (FScriptContainerElement *)&local_160 < pFVar7 + lVar18 * 8)) {
    local_180 = (longlong)(this->PreallocatedAssetDataBuffers).ArrayNum;
    local_178 = 8;
    local_198 = &local_160;
    local_190 = pFVar7;
    local_188 = lVar18;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar12 = (this->PreallocatedAssetDataBuffers).ArrayNum;
  piVar1 = &(this->PreallocatedAssetDataBuffers).ArrayMax;
  if (iVar12 == *piVar1) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->PreallocatedAssetDataBuffers).ArrayNum = iVar12 + 1;
  *(FAssetData **)((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_160;
  pFVar17 = pFVar20 + uVar22;
  if (TVar4 == LatestVersion) {
    for (; pFVar20 != pFVar17; pFVar20 = pFVar20 + 1) {
      FAssetData::SerializeForCacheWithTagsAndBundles
                (pFVar20,(FArchive *)param_1,
                 `FAssetData::SerializeForCache<FAssetRegistryReader_&>'::__l2::<lambda_1>::
                 <lambda_invoker_cdecl>);
    }
  }
  else {
    for (; pFVar20 != pFVar17; pFVar20 = pFVar20 + 1) {
      FAssetData::SerializeForCacheOldVersionWithTagsAndBundles
                (pFVar20,(FArchive *)param_1,TVar4,
                 `FAssetData::SerializeForCacheOldVersion<FAssetRegistryReader_&>'::__l2::<lambda_1>
                 ::<lambda_invoker_cdecl>);
    }
  }
  local_108._12_4_ = uStack_11c;
  local_108.ArrayNum = uStack_120;
  local_108.DataPtr = (FAssetData *)local_134._12_8_;
  SetAssetDatas(this,&local_108,param_3);
  LoadDependencies(this,(FArchive *)param_1,param_3,TVar4);
  plVar6 = (longlong *)param_1->_padding_;
  local_168 = 0;
  if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,&local_168);
    }
  }
  else {
    local_168 = *(uint *)*plVar6;
    *plVar6 = *plVar6 + 4;
  }
  uVar19 = local_168;
  pFVar20 = (FAssetData *)0x0;
  uVar14 = (ulonglong)(int)local_168;
  if (0 < (int)local_168) {
    local_f8[0] = false;
    local_f8[0x11] = Unspecified;
    local_f8._20_4_ = 0;
    local_e0._0_8_ = 0;
    local_e0._8_8_ = 0;
    local_e0._32_8_ = 0;
    local_e0._40_8_ = ___xmm_00000000ffffffff0000008000000000;
    local_e0._48_8_ = _UNK_150631d98;
    local_a0 = (void *)0x0;
    local_98 = 0;
    local_90.Data = (FScriptContainerElement *)0x0;
    local_88._0_4_ = 0;
    local_88._4_4_ = 0;
    local_80 = 0;
    local_78.FileVersionUE4 = 0;
    local_78.FileVersionUE5 = 0;
    local_70 = -1;
    local_68 = (FPackageCustomVersion *)0x0;
    local_60 = 0;
    uVar21 = 0;
    if (local_140->bLoadPackageData != false) {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar14;
      uVar22 = SUB168(ZEXT816(0xa0) * auVar10,0);
      if (SUB168(ZEXT816(0xa0) * auVar10,8) != 0) {
        uVar22 = 0xffffffffffffffff;
      }
      uVar15 = uVar22 + 8;
      if (0xfffffffffffffff7 < uVar22) {
        uVar15 = 0xffffffffffffffff;
      }
      puVar16 = operator_new__(uVar15);
      if (puVar16 == (ulonglong *)0x0) {
        pFVar20 = (FAssetData *)0x0;
      }
      else {
        *puVar16 = uVar14;
        pFVar20 = (FAssetData *)(puVar16 + 1);
        pFVar17 = pFVar20;
        if (uVar19 != 0) {
          do {
            *(undefined1 *)&(pFVar17->PackageName).ComparisonIndex.Value = 0;
            (pFVar17->AssetClass).ComparisonIndex = 0;
            (pFVar17->AssetClass).Number = 0;
            (pFVar17->AssetClassPath).PackageName.ComparisonIndex = 0;
            (pFVar17->AssetClassPath).PackageName.Number = 0;
            (pFVar17->TagsAndValues).field0_0x0.Loose = (FAssetDataTagMap *)0x0;
            *(undefined1 *)((longlong)&(pFVar17->AssetName).ComparisonIndex.Value + 1) = 0;
            (pFVar17->AssetName).Number = 0;
            *(undefined4 *)&(pFVar17->TaggedAssetBundles).Object = 0;
            *(undefined4 *)((longlong)&(pFVar17->TaggedAssetBundles).Object + 4) = 0x80;
            *(undefined4 *)&(pFVar17->TaggedAssetBundles).SharedReferenceCount.ReferenceController =
                 0xffffffff;
            *(undefined4 *)
             ((longlong)&(pFVar17->TaggedAssetBundles).SharedReferenceCount.ReferenceController + 4)
                 = 0;
            (pFVar17->ChunkIDs).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
            (pFVar17->ChunkIDs).ArrayNum = 0;
            pFVar17[1].PackageName.ComparisonIndex = 0;
            pFVar17[1].PackageName.Number = 0;
            pFVar17[1].PackagePath.ComparisonIndex = 0;
            pFVar17[1].PackagePath.Number = 0;
            pFVar17[1].AssetName.ComparisonIndex = 0;
            pFVar17[1].AssetName.Number = 0;
            pFVar17[1].AssetClass.ComparisonIndex = 0;
            pFVar17[1].AssetClass.Number = 0;
            pFVar17[1].AssetClassPath.PackageName.ComparisonIndex.Value = 0xffffffff;
            pFVar17[1].AssetClassPath.AssetName.ComparisonIndex = 0;
            pFVar17[1].AssetClassPath.AssetName.Number = 0;
            pFVar17[1].ChunkArrayRegistryHandle.Index = 0;
            uVar14 = uVar14 - 1;
            pFVar17 = (FAssetData *)&pFVar17[1].TagsAndValues;
          } while (uVar14 != 0);
        }
      }
      if (((int)uVar19 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar3 = &this->PreallocatedPackageDataBuffers;
      pFVar7 = (pTVar3->AllocatorInstance).Data;
      local_158 = pFVar20;
      if ((pFVar7 <= (FScriptContainerElement *)&local_158) &&
         (lVar18 = (longlong)(this->PreallocatedPackageDataBuffers).ArrayMax,
         (FScriptContainerElement *)&local_158 < pFVar7 + lVar18 * 8)) {
        local_180 = (longlong)(this->PreallocatedPackageDataBuffers).ArrayNum;
        local_178 = 8;
        local_198 = &local_158;
        local_190 = pFVar7;
        local_188 = lVar18;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar12 = (this->PreallocatedPackageDataBuffers).ArrayNum;
      piVar1 = &(this->PreallocatedPackageDataBuffers).ArrayMax;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar3->AllocatorInstance,piVar1);
      }
      uVar13 = local_168;
      (this->PreallocatedPackageDataBuffers).ArrayNum = iVar12 + 1;
      *(FAssetData **)((pTVar3->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_158;
      uVar21 = uVar19;
      if ((uint)(*(int *)&(this->CachedPackageData).field_0x8 -
                *(int *)&(this->CachedPackageData).field_0x34) < local_168) {
        if ((int)local_168 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidSetNum((longlong)(int)local_168);
        }
        TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)&this->CachedPackageData,local_168);
        if (uVar13 < 4) {
          iVar12 = 1;
        }
        else {
          uVar14 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
          lVar18 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          local_138 = (undefined4)lVar18;
          iVar12 = 1 << ((byte)lVar18 & 0x1f);
        }
        iVar5 = *(int *)&(this->CachedPackageData).field_0x48;
        if ((iVar5 == 0) || (iVar5 < iVar12)) {
          *(int *)&(this->CachedPackageData).field_0x48 = iVar12;
          TSet<TTuple<FName,FAssetPackageData_*>,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>,FDefaultSetAllocator>
          ::Rehash((TSet<TTuple<FName,FAssetPackageData_*>,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>,FDefaultSetAllocator>
                    *)&this->CachedPackageData);
        }
      }
    }
    uVar19 = 0;
    if (0 < (int)local_168) {
      do {
        local_150 = 0;
        (**(code **)(param_1->_padding_ + 0x178))(param_1,&local_150);
        if (local_140->bLoadPackageData == false) {
          local_148 = (FAssetPackageData *)local_f8;
        }
        else {
          uVar13 = 0;
          if ((int)uVar19 < (int)uVar21) {
            uVar13 = ~uVar19 >> 0x1f;
          }
          if (uVar13 == 0) {
            local_190 = (FScriptContainerElement *)(longlong)(int)uVar21;
            local_198 = (FAssetData **)(longlong)(int)uVar19;
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               );
            if (bVar11) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          local_118 = &local_150;
          local_148 = (FAssetPackageData *)((longlong)pFVar20 + (longlong)(int)uVar19 * 0xa0);
          local_110 = &local_148;
          TSet<TTuple<FName,FAssetPackageData_*>,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FName_const_&,FAssetPackageData_*_const_&>_>
                    ((TSet<TTuple<FName,FAssetPackageData_*>,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>,FDefaultSetAllocator>
                      *)&this->CachedPackageData,
                     (TPairInitializer<FName_const_&,FAssetPackageData_*_const_&> *)local_134,
                     (bool *)&local_118);
        }
        if ((int)TVar4 < 0x16) {
          FAssetPackageData::SerializeForCacheOldVersion(local_148,(FArchive *)param_1,TVar4);
        }
        else {
          FAssetPackageData::SerializeForCache(local_148,(FArchive *)param_1);
        }
        uVar19 = uVar19 + 1;
      } while ((int)uVar19 < (int)local_168);
    }
    if (local_90.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data);
    }
    local_98 = 0;
    if (local_a0 != (void *)0x0) {
      FMemory::Free(local_a0);
    }
    TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_e0);
  }
  return;
}

// Load<FNameTableArchiveReader_&> @ 142ac9d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAssetRegistryState::Load<FNameTableArchiveReader_&>
          (FAssetRegistryState *this,FNameTableArchiveReader *param_1,FAssetRegistryHeader *param_2,
          FAssetRegistryLoadOptions *param_3)

{
  int *piVar1;
  TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FAssetPackageData_*,TSizedDefaultAllocator<32>_> *pTVar3;
  Type TVar4;
  int iVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  bool bVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  ulong64 uVar15;
  ulonglong *puVar16;
  FAssetData *pFVar17;
  longlong lVar18;
  uint uVar19;
  FAssetData *pFVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined1 auStack_1b8 [32];
  FAssetData **local_198;
  FScriptContainerElement *local_190;
  longlong local_188;
  longlong local_180;
  undefined8 local_178;
  uint local_168;
  uint local_164;
  FAssetData *local_160;
  FAssetData *local_158;
  undefined8 local_150;
  FAssetPackageData *local_148;
  FAssetRegistryLoadOptions *local_140;
  undefined4 local_138;
  undefined1 local_134 [20];
  uint uStack_120;
  undefined4 uStack_11c;
  undefined8 *local_118;
  FAssetPackageData **local_110;
  TArrayView<FAssetData,int> local_108;
  undefined1 local_f8 [24];
  undefined1 local_e0 [64];
  void *local_a0;
  undefined4 local_98;
  ForAnyElementType local_90;
  undefined8 local_88;
  long64 local_80;
  FPackageFileVersion local_78;
  int local_70;
  FPackageCustomVersion *local_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  TVar4 = param_2->Version;
  plVar6 = (longlong *)param_1->_padding_;
  local_164 = 0;
  local_140 = param_3;
  if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,&local_164,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,&local_164);
    }
  }
  else {
    local_164 = *(uint *)*plVar6;
    *plVar6 = *plVar6 + 4;
  }
  uVar19 = local_164;
  uVar22 = (ulonglong)(int)local_164;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar22;
  uVar14 = SUB168(ZEXT816(0x68) * auVar9,0);
  if (SUB168(ZEXT816(0x68) * auVar9,8) != 0) {
    uVar14 = 0xffffffffffffffff;
  }
  uVar15 = uVar14 + 8;
  if (0xfffffffffffffff7 < uVar14) {
    uVar15 = 0xffffffffffffffff;
  }
  puVar16 = operator_new__(uVar15);
  if (puVar16 == (ulonglong *)0x0) {
    pFVar20 = (FAssetData *)0x0;
  }
  else {
    *puVar16 = uVar22;
    pFVar20 = (FAssetData *)(puVar16 + 1);
    pFVar17 = pFVar20;
    uVar14 = uVar22;
    if (uVar19 != 0) {
      do {
        (pFVar17->PackageName).ComparisonIndex = 0;
        (pFVar17->PackageName).Number = 0;
        (pFVar17->PackagePath).ComparisonIndex = 0;
        (pFVar17->PackagePath).Number = 0;
        (pFVar17->AssetName).ComparisonIndex = 0;
        (pFVar17->AssetName).Number = 0;
        (pFVar17->AssetClass).ComparisonIndex = 0;
        (pFVar17->AssetClass).Number = 0;
        (pFVar17->AssetClassPath).PackageName.ComparisonIndex = 0;
        (pFVar17->AssetClassPath).PackageName.Number = 0;
        (pFVar17->AssetClassPath).AssetName.ComparisonIndex = 0;
        (pFVar17->AssetClassPath).AssetName.Number = 0;
        (pFVar17->ChunkArrayRegistryHandle).Index = -1;
        pFVar17->PackageFlags = 0;
        (pFVar17->TagsAndValues).field0_0x0.Loose = (FAssetDataTagMap *)0x0;
        (pFVar17->TaggedAssetBundles).Object = (FAssetBundleData *)0x0;
        (pFVar17->TaggedAssetBundles).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        (pFVar17->ChunkIDs).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
        (pFVar17->ChunkIDs).ArrayNum = 0;
        (pFVar17->ChunkIDs).ArrayMax = 2;
        uVar14 = uVar14 - 1;
        pFVar17 = pFVar17 + 1;
      } while (uVar14 != 0);
    }
  }
  uStack_120 = uVar19;
  local_134._12_8_ = pFVar20;
  if (((int)uVar19 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar2 = &this->PreallocatedAssetDataBuffers;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  local_160 = pFVar20;
  if ((pFVar7 <= (FScriptContainerElement *)&local_160) &&
     (lVar18 = (longlong)(this->PreallocatedAssetDataBuffers).ArrayMax,
     (FScriptContainerElement *)&local_160 < pFVar7 + lVar18 * 8)) {
    local_180 = (longlong)(this->PreallocatedAssetDataBuffers).ArrayNum;
    local_178 = 8;
    local_198 = &local_160;
    local_190 = pFVar7;
    local_188 = lVar18;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar12 = (this->PreallocatedAssetDataBuffers).ArrayNum;
  piVar1 = &(this->PreallocatedAssetDataBuffers).ArrayMax;
  if (iVar12 == *piVar1) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->PreallocatedAssetDataBuffers).ArrayNum = iVar12 + 1;
  *(FAssetData **)((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_160;
  pFVar17 = pFVar20 + uVar22;
  if (TVar4 == LatestVersion) {
    for (; pFVar20 != pFVar17; pFVar20 = pFVar20 + 1) {
      FAssetData::SerializeForCacheWithTagsAndBundles
                (pFVar20,(FArchive *)param_1,
                 `FAssetData::SerializeForCache<FNameTableArchiveReader_&>'::__l2::<lambda_1>::
                 <lambda_invoker_cdecl>);
    }
  }
  else {
    for (; pFVar20 != pFVar17; pFVar20 = pFVar20 + 1) {
      FAssetData::SerializeForCacheOldVersionWithTagsAndBundles
                (pFVar20,(FArchive *)param_1,TVar4,
                 `FAssetData::SerializeForCacheOldVersion<FNameTableArchiveReader_&>'::__l2::
                 <lambda_1>::<lambda_invoker_cdecl>);
    }
  }
  local_108._12_4_ = uStack_11c;
  local_108.ArrayNum = uStack_120;
  local_108.DataPtr = (FAssetData *)local_134._12_8_;
  SetAssetDatas(this,&local_108,param_3);
  LoadDependencies(this,(FArchive *)param_1,param_3,TVar4);
  plVar6 = (longlong *)param_1->_padding_;
  local_168 = 0;
  if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,&local_168);
    }
  }
  else {
    local_168 = *(uint *)*plVar6;
    *plVar6 = *plVar6 + 4;
  }
  uVar19 = local_168;
  pFVar20 = (FAssetData *)0x0;
  uVar14 = (ulonglong)(int)local_168;
  if (0 < (int)local_168) {
    local_f8[0] = false;
    local_f8[0x11] = Unspecified;
    local_f8._20_4_ = 0;
    local_e0._0_8_ = 0;
    local_e0._8_8_ = 0;
    local_e0._32_8_ = 0;
    local_e0._40_8_ = ___xmm_00000000ffffffff0000008000000000;
    local_e0._48_8_ = _UNK_150631d98;
    local_a0 = (void *)0x0;
    local_98 = 0;
    local_90.Data = (FScriptContainerElement *)0x0;
    local_88._0_4_ = 0;
    local_88._4_4_ = 0;
    local_80 = 0;
    local_78.FileVersionUE4 = 0;
    local_78.FileVersionUE5 = 0;
    local_70 = -1;
    local_68 = (FPackageCustomVersion *)0x0;
    local_60 = 0;
    uVar21 = 0;
    if (local_140->bLoadPackageData != false) {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar14;
      uVar22 = SUB168(ZEXT816(0xa0) * auVar10,0);
      if (SUB168(ZEXT816(0xa0) * auVar10,8) != 0) {
        uVar22 = 0xffffffffffffffff;
      }
      uVar15 = uVar22 + 8;
      if (0xfffffffffffffff7 < uVar22) {
        uVar15 = 0xffffffffffffffff;
      }
      puVar16 = operator_new__(uVar15);
      if (puVar16 == (ulonglong *)0x0) {
        pFVar20 = (FAssetData *)0x0;
      }
      else {
        *puVar16 = uVar14;
        pFVar20 = (FAssetData *)(puVar16 + 1);
        pFVar17 = pFVar20;
        if (uVar19 != 0) {
          do {
            *(undefined1 *)&(pFVar17->PackageName).ComparisonIndex.Value = 0;
            (pFVar17->AssetClass).ComparisonIndex = 0;
            (pFVar17->AssetClass).Number = 0;
            (pFVar17->AssetClassPath).PackageName.ComparisonIndex = 0;
            (pFVar17->AssetClassPath).PackageName.Number = 0;
            (pFVar17->TagsAndValues).field0_0x0.Loose = (FAssetDataTagMap *)0x0;
            *(undefined1 *)((longlong)&(pFVar17->AssetName).ComparisonIndex.Value + 1) = 0;
            (pFVar17->AssetName).Number = 0;
            *(undefined4 *)&(pFVar17->TaggedAssetBundles).Object = 0;
            *(undefined4 *)((longlong)&(pFVar17->TaggedAssetBundles).Object + 4) = 0x80;
            *(undefined4 *)&(pFVar17->TaggedAssetBundles).SharedReferenceCount.ReferenceController =
                 0xffffffff;
            *(undefined4 *)
             ((longlong)&(pFVar17->TaggedAssetBundles).SharedReferenceCount.ReferenceController + 4)
                 = 0;
            (pFVar17->ChunkIDs).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
            (pFVar17->ChunkIDs).ArrayNum = 0;
            pFVar17[1].PackageName.ComparisonIndex = 0;
            pFVar17[1].PackageName.Number = 0;
            pFVar17[1].PackagePath.ComparisonIndex = 0;
            pFVar17[1].PackagePath.Number = 0;
            pFVar17[1].AssetName.ComparisonIndex = 0;
            pFVar17[1].AssetName.Number = 0;
            pFVar17[1].AssetClass.ComparisonIndex = 0;
            pFVar17[1].AssetClass.Number = 0;
            pFVar17[1].AssetClassPath.PackageName.ComparisonIndex.Value = 0xffffffff;
            pFVar17[1].AssetClassPath.AssetName.ComparisonIndex = 0;
            pFVar17[1].AssetClassPath.AssetName.Number = 0;
            pFVar17[1].ChunkArrayRegistryHandle.Index = 0;
            uVar14 = uVar14 - 1;
            pFVar17 = (FAssetData *)&pFVar17[1].TagsAndValues;
          } while (uVar14 != 0);
        }
      }
      if (((int)uVar19 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar3 = &this->PreallocatedPackageDataBuffers;
      pFVar7 = (pTVar3->AllocatorInstance).Data;
      local_158 = pFVar20;
      if ((pFVar7 <= (FScriptContainerElement *)&local_158) &&
         (lVar18 = (longlong)(this->PreallocatedPackageDataBuffers).ArrayMax,
         (FScriptContainerElement *)&local_158 < pFVar7 + lVar18 * 8)) {
        local_180 = (longlong)(this->PreallocatedPackageDataBuffers).ArrayNum;
        local_178 = 8;
        local_198 = &local_158;
        local_190 = pFVar7;
        local_188 = lVar18;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar12 = (this->PreallocatedPackageDataBuffers).ArrayNum;
      piVar1 = &(this->PreallocatedPackageDataBuffers).ArrayMax;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar3->AllocatorInstance,piVar1);
      }
      uVar13 = local_168;
      (this->PreallocatedPackageDataBuffers).ArrayNum = iVar12 + 1;
      *(FAssetData **)((pTVar3->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_158;
      uVar21 = uVar19;
      if ((uint)(*(int *)&(this->CachedPackageData).field_0x8 -
                *(int *)&(this->CachedPackageData).field_0x34) < local_168) {
        if ((int)local_168 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidSetNum((longlong)(int)local_168);
        }
        TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)&this->CachedPackageData,local_168);
        if (uVar13 < 4) {
          iVar12 = 1;
        }
        else {
          uVar14 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
          lVar18 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          local_138 = (undefined4)lVar18;
          iVar12 = 1 << ((byte)lVar18 & 0x1f);
        }
        iVar5 = *(int *)&(this->CachedPackageData).field_0x48;
        if ((iVar5 == 0) || (iVar5 < iVar12)) {
          *(int *)&(this->CachedPackageData).field_0x48 = iVar12;
          TSet<TTuple<FName,FAssetPackageData_*>,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>,FDefaultSetAllocator>
          ::Rehash((TSet<TTuple<FName,FAssetPackageData_*>,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>,FDefaultSetAllocator>
                    *)&this->CachedPackageData);
        }
      }
    }
    uVar19 = 0;
    if (0 < (int)local_168) {
      do {
        local_150 = 0;
        (**(code **)(param_1->_padding_ + 0x178))(param_1,&local_150);
        if (local_140->bLoadPackageData == false) {
          local_148 = (FAssetPackageData *)local_f8;
        }
        else {
          uVar13 = 0;
          if ((int)uVar19 < (int)uVar21) {
            uVar13 = ~uVar19 >> 0x1f;
          }
          if (uVar13 == 0) {
            local_190 = (FScriptContainerElement *)(longlong)(int)uVar21;
            local_198 = (FAssetData **)(longlong)(int)uVar19;
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               );
            if (bVar11) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          local_118 = &local_150;
          local_148 = (FAssetPackageData *)((longlong)pFVar20 + (longlong)(int)uVar19 * 0xa0);
          local_110 = &local_148;
          TSet<TTuple<FName,FAssetPackageData_*>,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FName_const_&,FAssetPackageData_*_const_&>_>
                    ((TSet<TTuple<FName,FAssetPackageData_*>,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>,FDefaultSetAllocator>
                      *)&this->CachedPackageData,
                     (TPairInitializer<FName_const_&,FAssetPackageData_*_const_&> *)local_134,
                     (bool *)&local_118);
        }
        if ((int)TVar4 < 0x16) {
          FAssetPackageData::SerializeForCacheOldVersion(local_148,(FArchive *)param_1,TVar4);
        }
        else {
          FAssetPackageData::SerializeForCache(local_148,(FArchive *)param_1);
        }
        uVar19 = uVar19 + 1;
      } while ((int)uVar19 < (int)local_168);
    }
    if (local_90.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data);
    }
    local_98 = 0;
    if (local_a0 != (void *)0x0) {
      FMemory::Free(local_a0);
    }
    TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_e0);
  }
  return;
}

// LoadDependenciesImpl<1> @ 142aca390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAssetRegistryState::LoadDependenciesImpl<1>
          (FAssetRegistryState *this,FArchive *param_1,Type param_2)

{
  int *piVar1;
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  ulonglong *puVar9;
  uint uVar10;
  bool bVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulong64 uVar15;
  undefined ***pppuVar16;
  int iVar17;
  TMap<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
  *this_00;
  undefined1 auStackY_128 [32];
  uint local_d8 [2];
  ulonglong *local_d0;
  FDependsNode *local_c8 [2];
  FLoadScratch local_b8;
  undefined4 local_6c;
  code *local_68 [2];
  undefined **local_58;
  ulonglong **local_50;
  uint local_48;
  undefined4 local_44;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  iVar17 = 0;
  plVar4 = *(longlong **)&param_1->field_0x8;
  local_d8[0] = 0;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_d8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_d8);
    }
  }
  else {
    local_d8[0] = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  uVar13 = (ulonglong)(int)local_d8[0];
  if (0 < (int)local_d8[0]) {
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar13;
    uVar14 = SUB168(ZEXT816(0xa8) * auVar8,0);
    if (SUB168(ZEXT816(0xa8) * auVar8,8) != 0) {
      uVar14 = 0xffffffffffffffff;
    }
    uVar15 = uVar14 + 8;
    if (0xfffffffffffffff7 < uVar14) {
      uVar15 = 0xffffffffffffffff;
    }
    local_d0 = operator_new__(uVar15);
    if (local_d0 == (ulonglong *)0x0) {
      local_d0 = (ulonglong *)0x0;
    }
    else {
      *local_d0 = uVar13;
      local_d0 = local_d0 + 1;
      puVar9 = local_d0;
      for (; uVar13 != 0; uVar13 = uVar13 - 1) {
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar9[3] = 0;
        puVar9[4] = 0;
        puVar9[5] = 0;
        puVar9[6] = 0;
        puVar9[7] = 0;
        puVar9[8] = 0;
        puVar9[9] = 0;
        puVar9[10] = 0;
        puVar9[0xb] = 0;
        puVar9[0xe] = 0;
        *(undefined4 *)(puVar9 + 0xf) = 0;
        *(undefined4 *)((longlong)puVar9 + 0x7c) = 0x80;
        puVar9[0x12] = 0;
        *(undefined4 *)(puVar9 + 0x13) = 0;
        *(undefined4 *)((longlong)puVar9 + 0x9c) = 0x80;
        *(uint *)(puVar9 + 0x14) = (uint)puVar9[0x14] & 0xffffffcf | 0xf;
        puVar9 = puVar9 + 0x15;
      }
    }
    pTVar2 = &this->PreallocatedDependsNodeDataBuffers;
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar5 <= (FScriptContainerElement *)&local_d0) &&
        ((FScriptContainerElement *)&local_d0 <
         pFVar5 + (longlong)(this->PreallocatedDependsNodeDataBuffers).ArrayMax * 8)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar12 = (this->PreallocatedDependsNodeDataBuffers).ArrayNum;
    piVar1 = &(this->PreallocatedDependsNodeDataBuffers).ArrayMax;
    if (iVar12 == *piVar1) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    uVar10 = local_d8[0];
    this_00 = &this->CachedDependsNodes;
    (this->PreallocatedDependsNodeDataBuffers).ArrayNum = iVar12 + 1;
    *(ulonglong **)((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_d0;
    if ((uint)(*(int *)&(this->CachedDependsNodes).field_0x8 -
              *(int *)&(this->CachedDependsNodes).field_0x34) < local_d8[0]) {
      if ((int)local_d8[0] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidSetNum((longlong)(int)local_d8[0]);
      }
      TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00,local_d8[0]);
      if (uVar10 < 4) {
        iVar12 = 1;
      }
      else {
        uVar13 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
        lVar6 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar12 = 1 << ((byte)lVar6 & 0x1f);
      }
      iVar3 = *(int *)&(this->CachedDependsNodes).field_0x48;
      if ((iVar3 == 0) || (iVar3 < iVar12)) {
        *(int *)&(this->CachedDependsNodes).field_0x48 = iVar12;
        TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
                  *)this_00);
      }
    }
    local_40 = (undefined ***)0x0;
    local_58 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__1____LoadDependenciesImpl__00_FAssetRegistryState__AEAAXAEAVFArchive__W4Type_FAssetRegistryVersion___Z__00_0A__Function_Private_Core_UE__6B_
    ;
    local_50 = &local_d0;
    local_44 = local_6c;
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FAssetRegistryState::LoadDependenciesImpl<1>'::__l2::<lambda_1>,FDependsNode_*,int>
                  ::Call;
    local_48 = local_d8[0];
    local_b8.InDependencies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.InDependencies.ArrayNum = 0;
    local_b8.InDependencies.ArrayMax = 0;
    local_b8.InFlagBits.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.InFlagBits.ArrayNum = 0;
    local_b8.InFlagBits.ArrayMax = 0;
    local_b8.PointerDependencies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.PointerDependencies.ArrayNum = 0;
    local_b8.PointerDependencies.ArrayMax = 0;
    local_b8.SortIndexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.SortIndexes.ArrayNum = 0;
    local_b8.SortIndexes.ArrayMax = 0;
    if (0 < (int)local_d8[0]) {
      do {
        local_c8[0] = (FDependsNode *)(local_d0 + (longlong)iVar17 * 0x15);
        FDependsNode::SerializeLoad<1>
                  (local_c8[0],param_1,(TUniqueFunction<FDependsNode_*___cdecl(int)> *)local_68,
                   &local_b8,param_2);
        TMapBase<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
        ::Emplace<FAssetIdentifier_const_&,FDependsNode_*_const_&>
                  ((TMapBase<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
                    *)this_00,&local_c8[0]->Identifier,local_c8);
        iVar17 = iVar17 + 1;
      } while (iVar17 < (int)local_d8[0]);
    }
    if (local_b8.SortIndexes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.SortIndexes.AllocatorInstance.Data);
    }
    if (local_b8.PointerDependencies.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.PointerDependencies.AllocatorInstance.Data);
    }
    if (local_b8.InFlagBits.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.InFlagBits.AllocatorInstance.Data);
    }
    if (local_b8.InDependencies.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.InDependencies.AllocatorInstance.Data);
    }
    if (local_68[0] != (code *)0x0) {
      pppuVar16 = &local_58;
      if (local_40 != (undefined ***)0x0) {
        pppuVar16 = local_40;
      }
      (*(code *)(*pppuVar16)[2])();
    }
  }
  return;
}

// LoadDependenciesImpl<0> @ 142aca700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAssetRegistryState::LoadDependenciesImpl<0>
          (FAssetRegistryState *this,FArchive *param_1,Type param_2)

{
  int *piVar1;
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  ulonglong *puVar9;
  uint uVar10;
  bool bVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulong64 uVar15;
  undefined ***pppuVar16;
  int iVar17;
  TMap<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
  *this_00;
  undefined1 auStackY_128 [32];
  uint local_d8 [2];
  ulonglong *local_d0;
  FDependsNode *local_c8 [2];
  FLoadScratch local_b8;
  undefined4 local_6c;
  code *local_68 [2];
  undefined **local_58;
  ulonglong **local_50;
  uint local_48;
  undefined4 local_44;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  iVar17 = 0;
  plVar4 = *(longlong **)&param_1->field_0x8;
  local_d8[0] = 0;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_d8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_d8);
    }
  }
  else {
    local_d8[0] = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  uVar13 = (ulonglong)(int)local_d8[0];
  if (0 < (int)local_d8[0]) {
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar13;
    uVar14 = SUB168(ZEXT816(0xa8) * auVar8,0);
    if (SUB168(ZEXT816(0xa8) * auVar8,8) != 0) {
      uVar14 = 0xffffffffffffffff;
    }
    uVar15 = uVar14 + 8;
    if (0xfffffffffffffff7 < uVar14) {
      uVar15 = 0xffffffffffffffff;
    }
    local_d0 = operator_new__(uVar15);
    if (local_d0 == (ulonglong *)0x0) {
      local_d0 = (ulonglong *)0x0;
    }
    else {
      *local_d0 = uVar13;
      local_d0 = local_d0 + 1;
      puVar9 = local_d0;
      for (; uVar13 != 0; uVar13 = uVar13 - 1) {
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar9[3] = 0;
        puVar9[4] = 0;
        puVar9[5] = 0;
        puVar9[6] = 0;
        puVar9[7] = 0;
        puVar9[8] = 0;
        puVar9[9] = 0;
        puVar9[10] = 0;
        puVar9[0xb] = 0;
        puVar9[0xe] = 0;
        *(undefined4 *)(puVar9 + 0xf) = 0;
        *(undefined4 *)((longlong)puVar9 + 0x7c) = 0x80;
        puVar9[0x12] = 0;
        *(undefined4 *)(puVar9 + 0x13) = 0;
        *(undefined4 *)((longlong)puVar9 + 0x9c) = 0x80;
        *(uint *)(puVar9 + 0x14) = (uint)puVar9[0x14] & 0xffffffcf | 0xf;
        puVar9 = puVar9 + 0x15;
      }
    }
    pTVar2 = &this->PreallocatedDependsNodeDataBuffers;
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar5 <= (FScriptContainerElement *)&local_d0) &&
        ((FScriptContainerElement *)&local_d0 <
         pFVar5 + (longlong)(this->PreallocatedDependsNodeDataBuffers).ArrayMax * 8)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar12 = (this->PreallocatedDependsNodeDataBuffers).ArrayNum;
    piVar1 = &(this->PreallocatedDependsNodeDataBuffers).ArrayMax;
    if (iVar12 == *piVar1) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    uVar10 = local_d8[0];
    this_00 = &this->CachedDependsNodes;
    (this->PreallocatedDependsNodeDataBuffers).ArrayNum = iVar12 + 1;
    *(ulonglong **)((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_d0;
    if ((uint)(*(int *)&(this->CachedDependsNodes).field_0x8 -
              *(int *)&(this->CachedDependsNodes).field_0x34) < local_d8[0]) {
      if ((int)local_d8[0] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidSetNum((longlong)(int)local_d8[0]);
      }
      TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00,local_d8[0]);
      if (uVar10 < 4) {
        iVar12 = 1;
      }
      else {
        uVar13 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
        lVar6 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar12 = 1 << ((byte)lVar6 & 0x1f);
      }
      iVar3 = *(int *)&(this->CachedDependsNodes).field_0x48;
      if ((iVar3 == 0) || (iVar3 < iVar12)) {
        *(int *)&(this->CachedDependsNodes).field_0x48 = iVar12;
        TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
                  *)this_00);
      }
    }
    local_40 = (undefined ***)0x0;
    local_58 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__1____LoadDependenciesImpl__0A__FAssetRegistryState__AEAAXAEAVFArchive__W4Type_FAssetRegistryVersion___Z__00_0A__Function_Private_Core_UE__6B_
    ;
    local_50 = &local_d0;
    local_44 = local_6c;
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FAssetRegistryState::LoadDependenciesImpl<0>'::__l2::<lambda_1>,FDependsNode_*,int>
                  ::Call;
    local_48 = local_d8[0];
    local_b8.InDependencies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.InDependencies.ArrayNum = 0;
    local_b8.InDependencies.ArrayMax = 0;
    local_b8.InFlagBits.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.InFlagBits.ArrayNum = 0;
    local_b8.InFlagBits.ArrayMax = 0;
    local_b8.PointerDependencies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.PointerDependencies.ArrayNum = 0;
    local_b8.PointerDependencies.ArrayMax = 0;
    local_b8.SortIndexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.SortIndexes.ArrayNum = 0;
    local_b8.SortIndexes.ArrayMax = 0;
    if (0 < (int)local_d8[0]) {
      do {
        local_c8[0] = (FDependsNode *)(local_d0 + (longlong)iVar17 * 0x15);
        FDependsNode::SerializeLoad<0>
                  (local_c8[0],param_1,(TUniqueFunction<FDependsNode_*___cdecl(int)> *)local_68,
                   &local_b8,param_2);
        TMapBase<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
        ::Emplace<FAssetIdentifier_const_&,FDependsNode_*_const_&>
                  ((TMapBase<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
                    *)this_00,&local_c8[0]->Identifier,local_c8);
        iVar17 = iVar17 + 1;
      } while (iVar17 < (int)local_d8[0]);
    }
    if (local_b8.SortIndexes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.SortIndexes.AllocatorInstance.Data);
    }
    if (local_b8.PointerDependencies.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.PointerDependencies.AllocatorInstance.Data);
    }
    if (local_b8.InFlagBits.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.InFlagBits.AllocatorInstance.Data);
    }
    if (local_b8.InDependencies.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.InDependencies.AllocatorInstance.Data);
    }
    if (local_68[0] != (code *)0x0) {
      pppuVar16 = &local_58;
      if (local_40 != (undefined ***)0x0) {
        pppuVar16 = local_40;
      }
      (*(code *)(*pppuVar16)[2])();
    }
  }
  return;
}

// RemoveAssetDatasImpl<FDefaultBitArrayAllocator> @ 142ad0640

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAssetRegistryState::RemoveAssetDatasImpl<FDefaultBitArrayAllocator>
          (FAssetRegistryState *this,TArrayView<FAssetData_*,int> *param_1,
          TArrayView<UE::AssetRegistry::Private::FCachedAssetKey_const_,int> *param_2,bool param_3,
          TBitArray<FDefaultBitArrayAllocator> *param_4,
          TBitArray<FDefaultBitArrayAllocator> *param_5)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  void *pvVar3;
  ForElementType<unsigned_int> FVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FTaskBase *this_00;
  FTask *pFVar8;
  FTaskBase *this_01;
  undefined8 uVar9;
  FTaskBase *this_02;
  ForElementType<unsigned_int> FVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  ETaskPriority local_res20 [8];
  FAssetRegistryState *local_b8;
  FCachedAssetKey *pFStack_b0;
  longlong lStack_a8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_a0;
  FAssetRegistryState *local_98;
  FAssetData **ppFStack_90;
  longlong lStack_88;
  FCachedAssetKey *pFStack_80;
  longlong lStack_78;
  undefined1 local_70;
  undefined7 uStack_6f;
  TBitArray<FDefaultBitArrayAllocator> *local_68;
  FAssetRegistryState *local_60;
  FAssetData **ppFStack_58;
  longlong lStack_50;
  FCachedAssetKey *pFStack_48;
  longlong lStack_40;
  
  pFStack_b0 = param_2->DataPtr;
  lStack_a8 = *(longlong *)&param_2->ArrayNum;
  ppFStack_90 = param_1->DataPtr;
  lStack_88 = *(longlong *)&param_1->ArrayNum;
  uVar13 = 1;
  local_68 = param_5;
  pTStack_a0 = param_4;
  local_b8 = this;
  local_98 = this;
  pFStack_80 = pFStack_b0;
  lStack_78 = lStack_a8;
  local_70 = param_3;
  local_60 = this;
  ppFStack_58 = ppFStack_90;
  lStack_50 = lStack_88;
  pFStack_48 = pFStack_b0;
  lStack_40 = lStack_a8;
  if (param_2->ArrayNum < 100) {
    `FAssetRegistryState::RemoveAssetDatasImpl<FDefaultBitArrayAllocator>'::__l2::<lambda_1>::
    operator()(&local_98);
    `FAssetRegistryState::RemoveAssetDatasImpl<FDefaultBitArrayAllocator>'::__l2::<lambda_2>::
    operator()(&local_60);
    `FAssetRegistryState::RemoveAssetDatasImpl<FDefaultBitArrayAllocator>'::__l2::<lambda_3>::
    operator()(&local_b8);
  }
  else {
    this_00 = FMemory::Malloc(0x140,0x40);
    if (this_00 == (FTaskBase *)0x0) {
      this_00 = (FTaskBase *)0x0;
    }
    else {
      UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
      this_00->_padding_ =
           (longlong)
           &
           ___7__TExecutableTaskBase_V<lambda_1>__1____RemoveAssetDatasImpl_VFDefaultBitArrayAllocator___FAssetRegistryState__AEAAXV__TArrayView_PEAUFAssetData__H__V__TArrayView___CBUFCachedAssetKey_Private_AssetRegistry_UE__H___NAEAV__TBitArray_VFDefaultBitArrayAllocator____3_Z_XX_Private_Tasks_UE__6B_
      ;
      if (((*(ulonglong *)&(this_00->LowLevelTask).field_0x38 & 0x20) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsCompleted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                             ,0x1dd,L"State: %d"), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (**(code **)(*(longlong *)&(this_00->LowLevelTask).field_0x28 + 0x18))
                (&(this_00->LowLevelTask).field_0x28,&this_00->LowLevelTask);
      *(undefined ***)&(this_00->LowLevelTask).field_0x28 =
           &
           ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
      ;
      *(FTaskBase **)&this_00->LowLevelTask = this_00;
      *(FTaskBase **)&(this_00->LowLevelTask).field_0x8 = this_00;
      pFVar8 = LowLevelTasks::FTask::GetActiveTask();
      uVar9 = 0;
      if (pFVar8 != (FTask *)0x0) {
        uVar9 = *(undefined8 *)&pFVar8->field_0x30;
      }
      *(undefined8 *)&(this_00->LowLevelTask).field_0x30 = uVar9;
      *(undefined8 *)&(this_00->LowLevelTask).field_0x38 = 0xc80000542656c400;
      this_00->ExtendedPriority = None;
      UE::FInheritedContextBase::CaptureInheritedContext
                ((FInheritedContextBase *)&this_00->_padding_);
      this_00[1]._padding_ = (longlong)local_98;
      this_00[1]._padding_ = (longlong)ppFStack_90;
      this_00[1]._padding_ = lStack_88;
      this_00[1]._padding_ = (longlong)pFStack_80;
      this_00[1]._padding_ = lStack_78;
      this_00[1]._padding_ = CONCAT71(uStack_6f,local_70);
      *(TBitArray<FDefaultBitArrayAllocator> **)&this_00[1].RefCount = local_68;
      this_00->_padding_ =
           (longlong)
           &
           ___7__TExecutableTask_V<lambda_1>__1____RemoveAssetDatasImpl_VFDefaultBitArrayAllocator___FAssetRegistryState__AEAAXV__TArrayView_PEAUFAssetData__H__V__TArrayView___CBUFCachedAssetKey_Private_AssetRegistry_UE__H___NAEAV__TBitArray_VFDefaultBitArrayAllocator____3_Z__Private_Tasks_UE__6B_
      ;
    }
    UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x140);
    this_01 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                          *)&UE::Tasks::Private::SmallTaskAllocator);
    if (this_01 == (FTaskBase *)0x0) {
      this_01 = (FTaskBase *)0x0;
    }
    else {
      UE::Tasks::Private::FTaskBase::FTaskBase(this_01,2,true);
      this_01->_padding_ =
           (longlong)
           &
           ___7__TExecutableTaskBase_V<lambda_2>__1____RemoveAssetDatasImpl_VFDefaultBitArrayAllocator___FAssetRegistryState__AEAAXV__TArrayView_PEAUFAssetData__H__V__TArrayView___CBUFCachedAssetKey_Private_AssetRegistry_UE__H___NAEAV__TBitArray_VFDefaultBitArrayAllocator____3_Z_XX_Private_Tasks_UE__6B_
      ;
      if (((*(ulonglong *)&(this_01->LowLevelTask).field_0x38 & 0x20) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsCompleted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                             ,0x1dd,L"State: %d"), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (**(code **)(*(longlong *)&(this_01->LowLevelTask).field_0x28 + 0x18))
                (&(this_01->LowLevelTask).field_0x28,&this_01->LowLevelTask);
      *(FTaskBase **)&this_01->LowLevelTask = this_01;
      *(undefined ***)&(this_01->LowLevelTask).field_0x28 =
           &
           ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
      ;
      *(FTaskBase **)&(this_01->LowLevelTask).field_0x8 = this_01;
      pFVar8 = LowLevelTasks::FTask::GetActiveTask();
      uVar9 = 0;
      if (pFVar8 != (FTask *)0x0) {
        uVar9 = *(undefined8 *)&pFVar8->field_0x30;
      }
      *(undefined8 *)&(this_01->LowLevelTask).field_0x30 = uVar9;
      *(undefined8 *)&(this_01->LowLevelTask).field_0x38 = 0xc80000542656d800;
      this_01->ExtendedPriority = None;
      UE::FInheritedContextBase::CaptureInheritedContext
                ((FInheritedContextBase *)&this_01->_padding_);
      this_01[1]._padding_ = (longlong)local_60;
      this_01[1]._padding_ = (longlong)ppFStack_58;
      this_01[1]._padding_ = lStack_50;
      this_01[1]._padding_ = (longlong)pFStack_48;
      this_01[1]._padding_ = lStack_40;
      this_01->_padding_ =
           (longlong)
           &
           ___7__TExecutableTask_V<lambda_2>__1____RemoveAssetDatasImpl_VFDefaultBitArrayAllocator___FAssetRegistryState__AEAAXV__TArrayView_PEAUFAssetData__H__V__TArrayView___CBUFCachedAssetKey_Private_AssetRegistry_UE__H___NAEAV__TBitArray_VFDefaultBitArrayAllocator____3_Z__Private_Tasks_UE__6B_
      ;
    }
    UE::Tasks::Private::FTaskBase::TryLaunch(this_01,0x100);
    this_02 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                          *)&UE::Tasks::Private::SmallTaskAllocator);
    if (this_02 == (FTaskBase *)0x0) {
      this_02 = (FTaskBase *)0x0;
    }
    else {
      UE::Tasks::Private::FTaskBase::FTaskBase(this_02,2,true);
      local_res20[0] = Default;
      this_02->_padding_ =
           (longlong)
           &
           ___7__TExecutableTaskBase_V<lambda_3>__1____RemoveAssetDatasImpl_VFDefaultBitArrayAllocator___FAssetRegistryState__AEAAXV__TArrayView_PEAUFAssetData__H__V__TArrayView___CBUFCachedAssetKey_Private_AssetRegistry_UE__H___NAEAV__TBitArray_VFDefaultBitArrayAllocator____3_Z_XX_Private_Tasks_UE__6B_
      ;
      if (((*(ulonglong *)&(this_02->LowLevelTask).field_0x38 & 0x20) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsCompleted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                             ,0x1dd,L"State: %d"), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (**(code **)(*(longlong *)&(this_02->LowLevelTask).field_0x28 + 0x18))
                (&(this_02->LowLevelTask).field_0x28,&this_02->LowLevelTask);
      *(FTaskBase **)&this_02->LowLevelTask = this_02;
      *(undefined ***)&(this_02->LowLevelTask).field_0x28 =
           &
           ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
      ;
      *(FTaskBase **)&(this_02->LowLevelTask).field_0x8 = this_02;
      LowLevelTasks::FTask::InheritParentData(&this_02->LowLevelTask,local_res20);
      *(ulonglong *)&(this_02->LowLevelTask).field_0x38 =
           ((longlong)(char)local_res20[0] << 0x35 | 0xff00000150995bb0U) << 6;
      this_02->ExtendedPriority = None;
      UE::FInheritedContextBase::CaptureInheritedContext
                ((FInheritedContextBase *)&this_02->_padding_);
      this_02[1]._padding_ = (longlong)local_b8;
      this_02[1]._padding_ = (longlong)pFStack_b0;
      this_02[1]._padding_ = lStack_a8;
      this_02[1]._padding_ = (longlong)pTStack_a0;
      this_02->_padding_ =
           (longlong)
           &
           ___7__TExecutableTask_V<lambda_3>__1____RemoveAssetDatasImpl_VFDefaultBitArrayAllocator___FAssetRegistryState__AEAAXV__TArrayView_PEAUFAssetData__H__V__TArrayView___CBUFCachedAssetKey_Private_AssetRegistry_UE__H___NAEAV__TBitArray_VFDefaultBitArrayAllocator____3_Z__Private_Tasks_UE__6B_
      ;
    }
    UE::Tasks::Private::FTaskBase::TryLaunch(this_02,0x100);
    if (this_00 != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::Wait(this_00);
    }
    if (this_01 != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::Wait(this_01);
    }
    if (this_02 != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::Wait(this_02);
      LOCK();
      paVar1 = &this_02->RefCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<unsigned_int>)0x1) {
        (**(code **)this_02->_padding_)(this_02,1);
      }
    }
    if (this_01 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &this_01->RefCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<unsigned_int>)0x1) {
        (**(code **)this_01->_padding_)(this_01,1);
      }
    }
    if (this_00 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &this_00->RefCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<unsigned_int>)0x1) {
        (**(code **)this_00->_padding_)(this_00,1);
      }
    }
  }
  if (((this->PreallocatedAssetDataBuffers).ArrayNum == 0) && (uVar11 = 0, 0 < param_2->ArrayNum)) {
    lVar12 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pvVar3 = *(void **)(lVar12 + (longlong)param_1->DataPtr);
      if ((((int)uVar11 < 0) || (param_4->NumBits <= (int)uVar11)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar4 = (param_4->AllocatorInstance).SecondaryData;
      FVar10 = (ForElementType<unsigned_int>)param_4;
      if (FVar4 != (ForElementType<unsigned_int>)0x0) {
        FVar10 = FVar4;
      }
      uVar7 = uVar11;
      if ((int)uVar11 < 0) {
        uVar7 = uVar11 + 0x1f;
      }
      if (((*(uint *)((longlong)FVar10 + (longlong)((int)uVar7 >> 5) * 4) & uVar13) != 0) &&
         (pvVar3 != (void *)0x0)) {
        if (*(void **)((longlong)pvVar3 + 0x58) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)pvVar3 + 0x58));
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)((longlong)pvVar3 + 0x48));
        FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView
                  ((FAssetDataTagMapSharedView *)((longlong)pvVar3 + 0x38));
        ::operator_delete(pvVar3,0x68);
      }
      uVar11 = uVar11 + 1;
      uVar13 = uVar13 << 1 | (uint)((int)uVar13 < 0);
      lVar12 = lVar12 + 8;
    } while ((int)uVar11 < param_2->ArrayNum);
  }
  return;
}

// RemoveAssetDatasImpl<FDefaultBitArrayAllocator> @ 142ad0c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAssetRegistryState::RemoveAssetDatasImpl<FDefaultBitArrayAllocator>
          (FAssetRegistryState *this,TArrayView<FAssetData_*,int> *param_1,bool param_2,
          TBitArray<FDefaultBitArrayAllocator> *param_3,
          TBitArray<FDefaultBitArrayAllocator> *param_4)

{
  FAssetData **ppFVar1;
  FAssetData *pFVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ForElementType<UE::AssetRegistry::Private::FCachedAssetKey> FVar9;
  FString *pFVar10;
  ForElementType<unsigned_int> FVar11;
  FName *pFVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  uint uVar15;
  FAssetData **ppFVar16;
  uint uVar17;
  undefined1 auStackY_968 [32];
  FName local_934;
  FName local_92c;
  undefined4 uStack_8fc;
  TArrayView<UE::AssetRegistry::Private::FCachedAssetKey_const_,int> local_8f8;
  TArrayView<FAssetData_*,int> local_8e8;
  FString local_8d8;
  FString local_8c8;
  ForElementType<UE::AssetRegistry::Private::FCachedAssetKey> local_8b8;
  int local_8a0;
  int local_89c;
  TStringBuilderBase<wchar_t> local_898;
  wchar_t local_878 [1035];
  wchar_t local_62 [5];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_968;
  uVar14 = param_1->ArrayNum;
  TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>(param_3,uVar14,false);
  TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>(param_4,uVar14,false);
  local_89c = 1;
  local_8b8.SecondaryData = (ForElementType<UE::AssetRegistry::Private::FCachedAssetKey>)0x0;
  local_8a0 = 0;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  if (1 < (int)uVar14) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AssetRegistry::Private::FCachedAssetKey>_>
              (0x10,4,uVar14,&local_8b8,0,&local_89c);
  }
  ppFVar16 = param_1->DataPtr;
  ppFVar1 = ppFVar16 + (int)uVar14;
  iVar6 = local_8a0;
  for (; local_8a0 = iVar6, ppFVar16 != ppFVar1; ppFVar16 = ppFVar16 + 1) {
    pFVar2 = *ppFVar16;
    if (iVar6 == local_89c) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AssetRegistry::Private::FCachedAssetKey>_>
                        (0x410,&local_8b8,&local_89c);
    }
    local_8a0 = iVar6 + 1;
    FVar9 = (ForElementType<UE::AssetRegistry::Private::FCachedAssetKey>)&local_8b8;
    if (local_8b8.SecondaryData != (ForElementType<UE::AssetRegistry::Private::FCachedAssetKey>)0x0)
    {
      FVar9 = local_8b8.SecondaryData;
    }
    pFVar12 = (FName *)((longlong)iVar6 * 0x10 + (longlong)FVar9);
    pFVar12->ComparisonIndex = 0;
    pFVar12->Number = 0;
    pFVar12[1].ComparisonIndex = 0;
    pFVar12[1].Number = 0;
    if (pFVar2 != (FAssetData *)0x0) {
      *pFVar12 = pFVar2->PackageName;
      pFVar12[1] = pFVar2->AssetName;
    }
    iVar6 = local_8a0;
  }
  FVar9 = (ForElementType<UE::AssetRegistry::Private::FCachedAssetKey>)&local_8b8;
  if (local_8b8.SecondaryData != (ForElementType<UE::AssetRegistry::Private::FCachedAssetKey>)0x0) {
    FVar9 = local_8b8.SecondaryData;
  }
  if ((iVar6 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_8e8.DataPtr = param_1->DataPtr;
  local_8e8.ArrayNum = param_1->ArrayNum;
  local_8e8._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_8f8._12_4_ = uStack_8fc;
  local_8f8.ArrayNum = iVar6;
  local_8f8.DataPtr = (FCachedAssetKey *)FVar9;
  RemoveAssetDatasImpl<FDefaultBitArrayAllocator>
            (this,&local_8e8,&local_8f8,param_2,param_3,param_4);
  uVar17 = 0;
  uVar14 = 1;
  uVar15 = uVar17;
  if (0 < param_3->NumBits) {
    do {
      if (1 < (byte)LogAssetRegistry._0_1_) {
        FVar3 = (param_3->AllocatorInstance).SecondaryData;
        FVar11 = (ForElementType<unsigned_int>)param_3;
        if (FVar3 != (ForElementType<unsigned_int>)0x0) {
          FVar11 = FVar3;
        }
        if ((*(uint *)((longlong)FVar11 + (longlong)(int)uVar17 * 4) & uVar14) == 0) {
          uVar7 = 0;
          if ((int)uVar15 < param_1->ArrayNum) {
            uVar7 = ~uVar15 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_934.ComparisonIndex.Value = 0;
          local_934.Number = 0;
          local_92c.ComparisonIndex.Value = 0;
          local_92c.Number = 0;
          pFVar2 = param_1->DataPtr[(int)uVar15];
          if (pFVar2 != (FAssetData *)0x0) {
            local_934 = pFVar2->PackageName;
            local_92c = pFVar2->AssetName;
          }
          local_898.Base = local_878;
          local_898.bIsDynamic = false;
          local_898.bIsExternal = false;
          local_898.CurPos = local_878;
          local_898.End = local_62;
          UE::AssetRegistry::Private::ConcatenateOuterPathAndObjectName
                    (&local_898,local_934,local_92c);
          pFVar10 = ::FString::ConstructFromPtrSize
                              (&local_8d8,local_898.Base,
                               (int)((longlong)local_898.CurPos - (longlong)local_898.Base >> 1));
          pFVar13 = (FScriptContainerElement *)0x0;
          if (&local_8c8 != pFVar10) {
            pFVar13 = (pFVar10->Data).AllocatorInstance.Data;
            (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pFVar10->Data).ArrayNum = 0;
            (pFVar10->Data).ArrayMax = 0;
          }
          if (local_8d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_8d8.Data.AllocatorInstance.Data);
          }
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_898);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_void___cdecl_FAssetRegistryState::RemoveAssetDatasImpl<FDefaultBitArrayAllocator>(TArrayView<FAssetData*___ptr64,int>,bool,TBitArray<FDefaultBitArrayAllocator>&___ptr64,TBitArray<FDefaultBitArrayAllocator>&___ptr64)___ptr64'
                      ::__l9::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
          if (pFVar13 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar13);
          }
        }
      }
      uVar7 = uVar14 * 2;
      uVar15 = uVar15 + 1;
      uVar8 = uVar17 + 1;
      if (uVar7 != 0) {
        uVar8 = uVar17;
      }
      uVar14 = 1;
      if (uVar7 != 0) {
        uVar14 = uVar7;
      }
      uVar17 = uVar8;
    } while ((int)uVar15 < param_3->NumBits);
  }
  if (local_8b8.SecondaryData != (ForElementType<UE::AssetRegistry::Private::FCachedAssetKey>)0x0) {
    FMemory::Free((void *)local_8b8.SecondaryData);
  }
  return;
}

// RemovePackageData<DefaultKeyFuncs<FAssetIdentifier,0>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_> @ 142ad16b0

bool __thiscall
FAssetRegistryState::
RemovePackageData<DefaultKeyFuncs<FAssetIdentifier,0>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
          (FAssetRegistryState *this,
          TSet<FAssetIdentifier,DefaultKeyFuncs<FAssetIdentifier,0>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
          *param_1)

{
  undefined1 *puVar1;
  TMap<FName,FAssetPackageData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>_>
  *this_00;
  ulonglong uVar2;
  int iVar3;
  TSet<FAssetIdentifier,DefaultKeyFuncs<FAssetIdentifier,0>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar4;
  undefined1 *puVar5;
  longlong lVar6;
  void *pvVar7;
  code *pcVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  uint *puVar16;
  TSet<FAssetIdentifier,DefaultKeyFuncs<FAssetIdentifier,0>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  bool bVar23;
  bool local_res18;
  undefined1 local_res20 [8];
  uint local_b8;
  undefined4 uStack_7c;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> TStack_68;
  undefined8 uStack_48;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x48;
  puVar1 = &(param_1->Elements).field_0x38;
  bVar23 = false;
  iVar21 = 0;
  local_res18 = false;
  iVar22 = 0;
  uVar11 = 1;
  iVar12 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(param_1->Elements).field_0x40;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar18 = *puVar16;
    while (uVar18 == 0) {
      lVar13 = (longlong)iVar21;
      iVar22 = iVar22 + 0x20;
      iVar21 = iVar21 + 1;
      iVar12 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar21) goto LAB_142ad175d;
      uVar18 = puVar16[lVar13 + 1];
    }
    uVar11 = -uVar18 & uVar18;
    uVar2 = (ulonglong)uVar11 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar12 = (int)lVar13 + -1 + iVar22;
    if (iVar3 < iVar12) {
      iVar12 = iVar3;
    }
  }
LAB_142ad175d:
  local_b8 = *(uint *)&(param_1->Elements).field_0x48;
  uVar18 = local_b8 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar11,iVar21);
  TStack_68.CurrentBitIndex = iVar12;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar21 = (int)local_b8 >> 5;
  TStack_68._28_4_ = iVar12;
  TStack_68.BaseBitIndex = iVar22;
  uStack_48 = CONCAT44(uStack_7c,
                       *(int *)&(param_1->Elements).field_0x30 -
                       *(int *)&(param_1->Elements).field_0x54);
  TStack_68.Array = (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)puVar1;
  if ((((int)local_b8 < 0) || (iVar3 < (int)local_b8)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    uVar10 = (*pcVar8)();
    return (bool)uVar10;
  }
  uVar11 = *(uint *)&(param_1->Elements).field_0x48;
  if (local_b8 != uVar11) {
    puVar14 = *(undefined1 **)&(param_1->Elements).field_0x40;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar20 = -1 << ((byte)local_b8 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar21 * 4);
    while (uVar20 == 0) {
      lVar13 = (longlong)iVar21;
      uVar18 = uVar18 + 0x20;
      iVar21 = iVar21 + 1;
      local_b8 = uVar11;
      if ((int)(((int)(uVar11 - 1) >> 0x1f & 0x1fU) + (uVar11 - 1)) >> 5 < iVar21)
      goto LAB_142ad1860;
      uVar20 = *(uint *)(puVar14 + lVar13 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_b8 = (int)lVar13 + -1 + uVar18;
    if ((int)uVar11 < (int)local_b8) {
      local_b8 = uVar11;
    }
  }
LAB_142ad1860:
  if (*(int *)&(param_1->Elements).field_0x30 - *(int *)&(param_1->Elements).field_0x54 !=
      (int)uStack_48) {
    local_res20[0] = 0;
    `TSparseArray<TSparseSetElement<FAssetIdentifier>,TInlineSparseArrayAllocator<1,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
    ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
  }
  if ((TStack_68.CurrentBitIndex == local_b8) &&
     (TStack_68.Array ==
      (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)puVar1)) {
    return bVar23;
  }
  pTVar4 = *(TSet<FAssetIdentifier,DefaultKeyFuncs<FAssetIdentifier,0>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
             **)&(param_1->Elements).field_0x28;
  this_00 = &this->CachedPackageData;
  pTVar17 = param_1;
  if (pTVar4 != (TSet<FAssetIdentifier,DefaultKeyFuncs<FAssetIdentifier,0>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                 *)0x0) {
    pTVar17 = pTVar4;
  }
  lVar13 = *(longlong *)
            ((longlong)&pTVar17->Hash + (longlong)TStack_68.CurrentBitIndex * 0x28 + -0x58);
  uVar11 = ::GetTypeHash((FNameEntryId)(uint)lVar13);
  if (*(int *)&(this->CachedPackageData).field_0x8 != *(int *)&(this->CachedPackageData).field_0x34)
  {
    puVar5 = *(undefined1 **)&(this->CachedPackageData).field_0x40;
    puVar14 = &(this->CachedPackageData).field_0x38;
    puVar15 = puVar14;
    if (puVar5 != (undefined1 *)0x0) {
      puVar15 = puVar5;
    }
    uVar11 = *(uint *)(puVar15 +
                      (ulonglong)
                      (*(int *)&(this->CachedPackageData).field_0x48 - 1U &
                      uVar11 + (int)((ulonglong)lVar13 >> 0x20)) * 4);
    bVar23 = local_res18;
    if (uVar11 != 0xffffffff) {
      lVar6 = *(longlong *)&this_00->field_0x0;
      do {
        lVar19 = (longlong)(int)uVar11 * 0x18;
        if (*(longlong *)(lVar19 + lVar6) == lVar13) {
          pvVar7 = *(void **)(lVar19 + 8 + lVar6);
          if (((int)uVar11 < 0) || (*(int *)&(this->CachedPackageData).field_0x28 <= (int)uVar11)) {
LAB_142ad1988:
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Elements.IsValidIndex(ElementIndex)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                               ,0x2ab,
                               L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
            if (bVar9) {
              pcVar8 = (code *)swi(3);
              uVar10 = (*pcVar8)();
              return (bool)uVar10;
            }
          }
          else {
            if ((*(int *)&(this->CachedPackageData).field_0x28 <= (int)uVar11) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5c6,L""), bVar9)) {
              pcVar8 = (code *)swi(3);
              uVar10 = (*pcVar8)();
              return (bool)uVar10;
            }
            puVar5 = *(undefined1 **)&(this->CachedPackageData).field_0x20;
            puVar15 = &(this->CachedPackageData).field_0x10;
            if (puVar5 != (undefined1 *)0x0) {
              puVar15 = puVar5;
            }
            uVar18 = uVar11;
            if ((int)uVar11 < 0) {
              uVar18 = uVar11 + 0x1f;
            }
            if ((*(uint *)(puVar15 + (longlong)((int)uVar18 >> 5) * 4) >> (uVar11 & 0x1f) & 1) == 0)
            goto LAB_142ad1988;
          }
          puVar5 = *(undefined1 **)&(this->CachedPackageData).field_0x40;
          lVar19 = lVar19 + *(longlong *)&this_00->field_0x0;
          if (puVar5 != (undefined1 *)0x0) {
            puVar14 = puVar5;
          }
          puVar16 = (uint *)(puVar14 + (longlong)*(int *)(lVar19 + 0x14) * 4);
          goto LAB_142ad19c5;
        }
        uVar11 = *(uint *)(lVar19 + 0x10 + lVar6);
      } while (uVar11 != 0xffffffff);
    }
  }
  goto LAB_142ad1a94;
LAB_142ad19c5:
  uVar18 = *puVar16;
  if (uVar18 == 0xffffffff) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("NextElementIndex != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                       ,0x2b5,L"Corrupt hash");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      uVar10 = (*pcVar8)();
      return (bool)uVar10;
    }
  }
  else if (uVar18 == uVar11) goto LAB_142ad1a19;
  puVar16 = (uint *)(*(longlong *)&this_00->field_0x0 + (longlong)(int)uVar18 * 0x18 + 0x10);
  goto LAB_142ad19c5;
LAB_142ad1a19:
  *puVar16 = *(uint *)(lVar19 + 0x10);
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this_00,uVar11,1);
  if (pvVar7 != (void *)0x0) {
    this->NumPackageData = this->NumPackageData + -1;
    if ((this->PreallocatedPackageDataBuffers).ArrayNum == 0) {
      if (*(void **)((longlong)pvVar7 + 0x68) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar7 + 0x68));
      }
      *(undefined4 *)((longlong)pvVar7 + 0x60) = 0;
      if (*(void **)((longlong)pvVar7 + 0x58) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar7 + 0x58));
      }
      TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)((longlong)pvVar7 + 0x18));
      ::operator_delete(pvVar7,0xa0);
    }
    local_res18 = true;
    bVar23 = true;
  }
LAB_142ad1a94:
  TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FindFirstSetBit
            (&TStack_68);
  goto LAB_142ad1860;
}

// ~FAssetRegistryState @ 142ada3a0

void __thiscall FAssetRegistryState::~FAssetRegistryState(FAssetRegistryState *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ForElementType<FSetElementId> FVar3;
  
  Reset(this);
  pFVar1 = (this->PreallocatedPackageDataBuffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PreallocatedDependsNodeDataBuffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PreallocatedAssetDataBuffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->CachedPackageData).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CachedPackageData).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FAssetPackageData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FAssetPackageData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FAssetPackageData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedPackageData);
  *(undefined4 *)&(this->CachedDependsNodes).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CachedDependsNodes).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FAssetIdentifier,FDependsNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FAssetIdentifier,FDependsNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FAssetIdentifier,FDependsNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedDependsNodes);
  *(undefined4 *)&(this->CachedClassesByTag).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CachedClassesByTag).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedClassesByTag);
  *(undefined4 *)&(this->CachedAssetsByClass).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CachedAssetsByClass).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedAssetsByClass);
  *(undefined4 *)&(this->CachedAssetsByPath).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CachedAssetsByPath).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedAssetsByPath);
  *(undefined4 *)&(this->CachedAssetsByPackageName).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CachedAssetsByPackageName).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedAssetsByPackageName);
  (this->CachedAssets).HashSize = 0;
  FVar3 = (this->CachedAssets).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FAssetData_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FAssetData_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FAssetData_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// operator= @ 142adbbf0

FAssetRegistryState * __thiscall
FAssetRegistryState::operator=(FAssetRegistryState *this,FAssetRegistryState *param_1)

{
  TMap<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *pTVar1;
  TMap<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *this_00;
  undefined1 *puVar2;
  undefined1 *puVar3;
  TMap<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar4;
  TMap<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>
  *this_01;
  TMap<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar5;
  TMap<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>
  *this_02;
  TMap<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>_>
  *pTVar6;
  TMap<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>_>
  *this_03;
  TMap<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
  *pTVar7;
  TMap<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
  *pTVar8;
  TMap<FName,FAssetPackageData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>_>
  *pTVar9;
  TMap<FName,FAssetPackageData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>_>
  *pTVar10;
  TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *pTVar12;
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *pTVar13;
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *pTVar14;
  TArray<FAssetPackageData_*,TSizedDefaultAllocator<32>_> *pTVar15;
  TArray<FAssetPackageData_*,TSizedDefaultAllocator<32>_> *pTVar16;
  int iVar17;
  ForElementType<FSetElementId> FVar18;
  void *pvVar19;
  FScriptContainerElement *pFVar20;
  
  Reset(this);
  if (this != param_1) {
    TSparseArray<TSparseSetElement<FAssetData_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<FAssetData_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this,(TSparseArray<TSparseSetElement<FAssetData_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_1);
    if ((param_1->CachedAssets).Hash.SecondaryData == (ForElementType<FSetElementId>)0x0) {
      *(undefined4 *)(this->CachedAssets).Hash.InlineData =
           *(undefined4 *)(param_1->CachedAssets).Hash.InlineData;
    }
    FVar18 = (this->CachedAssets).Hash.SecondaryData;
    if (FVar18 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar18);
    }
    (this->CachedAssets).Hash.SecondaryData = (param_1->CachedAssets).Hash.SecondaryData;
    (param_1->CachedAssets).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    (this->CachedAssets).HashSize = (param_1->CachedAssets).HashSize;
    (param_1->CachedAssets).HashSize = 0;
  }
  pTVar1 = &param_1->CachedAssetsByPackageName;
  this_00 = &this->CachedAssetsByPackageName;
  if (this_00 != pTVar1) {
    TSparseArray<TSparseSetElement<TTuple<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,0,*(int *)&(this->CachedAssetsByPackageName).field_0x8);
    if (*(void **)this_00 != (void *)0x0) {
      FMemory::Free(*(void **)this_00);
    }
    puVar2 = &(param_1->CachedAssetsByPackageName).field_0x10;
    *(undefined8 *)this_00 = *(undefined8 *)pTVar1;
    puVar3 = &(this->CachedAssetsByPackageName).field_0x10;
    *(undefined8 *)pTVar1 = 0;
    *(undefined4 *)&(this->CachedAssetsByPackageName).field_0x8 =
         *(undefined4 *)&(param_1->CachedAssetsByPackageName).field_0x8;
    *(undefined4 *)&(this->CachedAssetsByPackageName).field_0xc =
         *(undefined4 *)&(param_1->CachedAssetsByPackageName).field_0xc;
    *(undefined8 *)&(param_1->CachedAssetsByPackageName).field_0x8 = 0;
    if (puVar3 != puVar2) {
      if (*(longlong *)&(param_1->CachedAssetsByPackageName).field_0x20 == 0) {
        memmove(puVar3,puVar2,0x10);
      }
      pvVar19 = *(void **)&(this->CachedAssetsByPackageName).field_0x20;
      if (pvVar19 != (void *)0x0) {
        FMemory::Free(pvVar19);
      }
      *(undefined8 *)&(this->CachedAssetsByPackageName).field_0x20 =
           *(undefined8 *)&(param_1->CachedAssetsByPackageName).field_0x20;
      *(undefined8 *)&(param_1->CachedAssetsByPackageName).field_0x20 = 0;
      *(undefined4 *)&(this->CachedAssetsByPackageName).field_0x28 =
           *(undefined4 *)&(param_1->CachedAssetsByPackageName).field_0x28;
      *(undefined4 *)&(this->CachedAssetsByPackageName).field_0x2c =
           *(undefined4 *)&(param_1->CachedAssetsByPackageName).field_0x2c;
      *(undefined8 *)&(param_1->CachedAssetsByPackageName).field_0x28 = 0;
    }
    *(undefined4 *)&(this->CachedAssetsByPackageName).field_0x30 =
         *(undefined4 *)&(param_1->CachedAssetsByPackageName).field_0x30;
    *(undefined4 *)&(this->CachedAssetsByPackageName).field_0x34 =
         *(undefined4 *)&(param_1->CachedAssetsByPackageName).field_0x34;
    *(undefined4 *)&(param_1->CachedAssetsByPackageName).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->CachedAssetsByPackageName).field_0x34 = 0;
    if (*(longlong *)&(param_1->CachedAssetsByPackageName).field_0x40 == 0) {
      *(undefined4 *)&(this->CachedAssetsByPackageName).field_0x38 =
           *(undefined4 *)&(param_1->CachedAssetsByPackageName).field_0x38;
    }
    pvVar19 = *(void **)&(this->CachedAssetsByPackageName).field_0x40;
    if (pvVar19 != (void *)0x0) {
      FMemory::Free(pvVar19);
    }
    *(undefined8 *)&(this->CachedAssetsByPackageName).field_0x40 =
         *(undefined8 *)&(param_1->CachedAssetsByPackageName).field_0x40;
    *(undefined8 *)&(param_1->CachedAssetsByPackageName).field_0x40 = 0;
    *(undefined4 *)&(this->CachedAssetsByPackageName).field_0x48 =
         *(undefined4 *)&(param_1->CachedAssetsByPackageName).field_0x48;
    *(undefined4 *)&(param_1->CachedAssetsByPackageName).field_0x48 = 0;
  }
  pTVar4 = &param_1->CachedAssetsByPath;
  this_01 = &this->CachedAssetsByPath;
  if (this_01 != pTVar4) {
    TSparseArray<TSparseSetElement<TTuple<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_01,0,*(int *)&(this->CachedAssetsByPath).field_0x8);
    if (*(void **)this_01 != (void *)0x0) {
      FMemory::Free(*(void **)this_01);
    }
    puVar2 = &(param_1->CachedAssetsByPath).field_0x10;
    *(undefined8 *)this_01 = *(undefined8 *)pTVar4;
    puVar3 = &(this->CachedAssetsByPath).field_0x10;
    *(undefined8 *)pTVar4 = 0;
    *(undefined4 *)&(this->CachedAssetsByPath).field_0x8 =
         *(undefined4 *)&(param_1->CachedAssetsByPath).field_0x8;
    *(undefined4 *)&(this->CachedAssetsByPath).field_0xc =
         *(undefined4 *)&(param_1->CachedAssetsByPath).field_0xc;
    *(undefined8 *)&(param_1->CachedAssetsByPath).field_0x8 = 0;
    if (puVar3 != puVar2) {
      if (*(longlong *)&(param_1->CachedAssetsByPath).field_0x20 == 0) {
        memmove(puVar3,puVar2,0x10);
      }
      pvVar19 = *(void **)&(this->CachedAssetsByPath).field_0x20;
      if (pvVar19 != (void *)0x0) {
        FMemory::Free(pvVar19);
      }
      *(undefined8 *)&(this->CachedAssetsByPath).field_0x20 =
           *(undefined8 *)&(param_1->CachedAssetsByPath).field_0x20;
      *(undefined8 *)&(param_1->CachedAssetsByPath).field_0x20 = 0;
      *(undefined4 *)&(this->CachedAssetsByPath).field_0x28 =
           *(undefined4 *)&(param_1->CachedAssetsByPath).field_0x28;
      *(undefined4 *)&(this->CachedAssetsByPath).field_0x2c =
           *(undefined4 *)&(param_1->CachedAssetsByPath).field_0x2c;
      *(undefined8 *)&(param_1->CachedAssetsByPath).field_0x28 = 0;
    }
    *(undefined4 *)&(this->CachedAssetsByPath).field_0x30 =
         *(undefined4 *)&(param_1->CachedAssetsByPath).field_0x30;
    *(undefined4 *)&(this->CachedAssetsByPath).field_0x34 =
         *(undefined4 *)&(param_1->CachedAssetsByPath).field_0x34;
    *(undefined4 *)&(param_1->CachedAssetsByPath).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->CachedAssetsByPath).field_0x34 = 0;
    if (*(longlong *)&(param_1->CachedAssetsByPath).field_0x40 == 0) {
      *(undefined4 *)&(this->CachedAssetsByPath).field_0x38 =
           *(undefined4 *)&(param_1->CachedAssetsByPath).field_0x38;
    }
    pvVar19 = *(void **)&(this->CachedAssetsByPath).field_0x40;
    if (pvVar19 != (void *)0x0) {
      FMemory::Free(pvVar19);
    }
    *(undefined8 *)&(this->CachedAssetsByPath).field_0x40 =
         *(undefined8 *)&(param_1->CachedAssetsByPath).field_0x40;
    *(undefined8 *)&(param_1->CachedAssetsByPath).field_0x40 = 0;
    *(undefined4 *)&(this->CachedAssetsByPath).field_0x48 =
         *(undefined4 *)&(param_1->CachedAssetsByPath).field_0x48;
    *(undefined4 *)&(param_1->CachedAssetsByPath).field_0x48 = 0;
  }
  pTVar5 = &param_1->CachedAssetsByClass;
  this_02 = &this->CachedAssetsByClass;
  if (this_02 != pTVar5) {
    TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_02,0,*(int *)&(this->CachedAssetsByClass).field_0x8);
    if (*(void **)this_02 != (void *)0x0) {
      FMemory::Free(*(void **)this_02);
    }
    puVar2 = &(param_1->CachedAssetsByClass).field_0x10;
    *(undefined8 *)this_02 = *(undefined8 *)pTVar5;
    puVar3 = &(this->CachedAssetsByClass).field_0x10;
    *(undefined8 *)pTVar5 = 0;
    *(undefined4 *)&(this->CachedAssetsByClass).field_0x8 =
         *(undefined4 *)&(param_1->CachedAssetsByClass).field_0x8;
    *(undefined4 *)&(this->CachedAssetsByClass).field_0xc =
         *(undefined4 *)&(param_1->CachedAssetsByClass).field_0xc;
    *(undefined8 *)&(param_1->CachedAssetsByClass).field_0x8 = 0;
    if (puVar3 != puVar2) {
      if (*(longlong *)&(param_1->CachedAssetsByClass).field_0x20 == 0) {
        memmove(puVar3,puVar2,0x10);
      }
      pvVar19 = *(void **)&(this->CachedAssetsByClass).field_0x20;
      if (pvVar19 != (void *)0x0) {
        FMemory::Free(pvVar19);
      }
      *(undefined8 *)&(this->CachedAssetsByClass).field_0x20 =
           *(undefined8 *)&(param_1->CachedAssetsByClass).field_0x20;
      *(undefined8 *)&(param_1->CachedAssetsByClass).field_0x20 = 0;
      *(undefined4 *)&(this->CachedAssetsByClass).field_0x28 =
           *(undefined4 *)&(param_1->CachedAssetsByClass).field_0x28;
      *(undefined4 *)&(this->CachedAssetsByClass).field_0x2c =
           *(undefined4 *)&(param_1->CachedAssetsByClass).field_0x2c;
      *(undefined8 *)&(param_1->CachedAssetsByClass).field_0x28 = 0;
    }
    *(undefined4 *)&(this->CachedAssetsByClass).field_0x30 =
         *(undefined4 *)&(param_1->CachedAssetsByClass).field_0x30;
    *(undefined4 *)&(this->CachedAssetsByClass).field_0x34 =
         *(undefined4 *)&(param_1->CachedAssetsByClass).field_0x34;
    *(undefined4 *)&(param_1->CachedAssetsByClass).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->CachedAssetsByClass).field_0x34 = 0;
    if (*(longlong *)&(param_1->CachedAssetsByClass).field_0x40 == 0) {
      *(undefined4 *)&(this->CachedAssetsByClass).field_0x38 =
           *(undefined4 *)&(param_1->CachedAssetsByClass).field_0x38;
    }
    pvVar19 = *(void **)&(this->CachedAssetsByClass).field_0x40;
    if (pvVar19 != (void *)0x0) {
      FMemory::Free(pvVar19);
    }
    *(undefined8 *)&(this->CachedAssetsByClass).field_0x40 =
         *(undefined8 *)&(param_1->CachedAssetsByClass).field_0x40;
    *(undefined8 *)&(param_1->CachedAssetsByClass).field_0x40 = 0;
    *(undefined4 *)&(this->CachedAssetsByClass).field_0x48 =
         *(undefined4 *)&(param_1->CachedAssetsByClass).field_0x48;
    *(undefined4 *)&(param_1->CachedAssetsByClass).field_0x48 = 0;
  }
  pTVar6 = &param_1->CachedClassesByTag;
  this_03 = &this->CachedClassesByTag;
  if (this_03 != pTVar6) {
    TSparseArray<TSparseSetElement<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_03,0,*(int *)&(this->CachedClassesByTag).field_0x8);
    if (*(void **)this_03 != (void *)0x0) {
      FMemory::Free(*(void **)this_03);
    }
    puVar2 = &(param_1->CachedClassesByTag).field_0x10;
    *(undefined8 *)this_03 = *(undefined8 *)pTVar6;
    puVar3 = &(this->CachedClassesByTag).field_0x10;
    *(undefined8 *)pTVar6 = 0;
    *(undefined4 *)&(this->CachedClassesByTag).field_0x8 =
         *(undefined4 *)&(param_1->CachedClassesByTag).field_0x8;
    *(undefined4 *)&(this->CachedClassesByTag).field_0xc =
         *(undefined4 *)&(param_1->CachedClassesByTag).field_0xc;
    *(undefined8 *)&(param_1->CachedClassesByTag).field_0x8 = 0;
    if (puVar3 != puVar2) {
      if (*(longlong *)&(param_1->CachedClassesByTag).field_0x20 == 0) {
        memmove(puVar3,puVar2,0x10);
      }
      pvVar19 = *(void **)&(this->CachedClassesByTag).field_0x20;
      if (pvVar19 != (void *)0x0) {
        FMemory::Free(pvVar19);
      }
      *(undefined8 *)&(this->CachedClassesByTag).field_0x20 =
           *(undefined8 *)&(param_1->CachedClassesByTag).field_0x20;
      *(undefined8 *)&(param_1->CachedClassesByTag).field_0x20 = 0;
      *(undefined4 *)&(this->CachedClassesByTag).field_0x28 =
           *(undefined4 *)&(param_1->CachedClassesByTag).field_0x28;
      *(undefined4 *)&(this->CachedClassesByTag).field_0x2c =
           *(undefined4 *)&(param_1->CachedClassesByTag).field_0x2c;
      *(undefined8 *)&(param_1->CachedClassesByTag).field_0x28 = 0;
    }
    *(undefined4 *)&(this->CachedClassesByTag).field_0x30 =
         *(undefined4 *)&(param_1->CachedClassesByTag).field_0x30;
    *(undefined4 *)&(this->CachedClassesByTag).field_0x34 =
         *(undefined4 *)&(param_1->CachedClassesByTag).field_0x34;
    *(undefined4 *)&(param_1->CachedClassesByTag).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->CachedClassesByTag).field_0x34 = 0;
    if (*(longlong *)&(param_1->CachedClassesByTag).field_0x40 == 0) {
      *(undefined4 *)&(this->CachedClassesByTag).field_0x38 =
           *(undefined4 *)&(param_1->CachedClassesByTag).field_0x38;
    }
    pvVar19 = *(void **)&(this->CachedClassesByTag).field_0x40;
    if (pvVar19 != (void *)0x0) {
      FMemory::Free(pvVar19);
    }
    *(undefined8 *)&(this->CachedClassesByTag).field_0x40 =
         *(undefined8 *)&(param_1->CachedClassesByTag).field_0x40;
    *(undefined8 *)&(param_1->CachedClassesByTag).field_0x40 = 0;
    *(undefined4 *)&(this->CachedClassesByTag).field_0x48 =
         *(undefined4 *)&(param_1->CachedClassesByTag).field_0x48;
    *(undefined4 *)&(param_1->CachedClassesByTag).field_0x48 = 0;
  }
  pTVar7 = &param_1->CachedDependsNodes;
  pTVar8 = &this->CachedDependsNodes;
  if (pTVar8 != pTVar7) {
    if (*(void **)pTVar8 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar8);
    }
    puVar2 = &(param_1->CachedDependsNodes).field_0x10;
    *(undefined8 *)pTVar8 = *(undefined8 *)pTVar7;
    puVar3 = &(this->CachedDependsNodes).field_0x10;
    *(undefined8 *)pTVar7 = 0;
    *(undefined4 *)&(this->CachedDependsNodes).field_0x8 =
         *(undefined4 *)&(param_1->CachedDependsNodes).field_0x8;
    *(undefined4 *)&(this->CachedDependsNodes).field_0xc =
         *(undefined4 *)&(param_1->CachedDependsNodes).field_0xc;
    *(undefined8 *)&(param_1->CachedDependsNodes).field_0x8 = 0;
    if (puVar3 != puVar2) {
      if (*(longlong *)&(param_1->CachedDependsNodes).field_0x20 == 0) {
        memmove(puVar3,puVar2,0x10);
      }
      pvVar19 = *(void **)&(this->CachedDependsNodes).field_0x20;
      if (pvVar19 != (void *)0x0) {
        FMemory::Free(pvVar19);
      }
      *(undefined8 *)&(this->CachedDependsNodes).field_0x20 =
           *(undefined8 *)&(param_1->CachedDependsNodes).field_0x20;
      *(undefined8 *)&(param_1->CachedDependsNodes).field_0x20 = 0;
      *(undefined4 *)&(this->CachedDependsNodes).field_0x28 =
           *(undefined4 *)&(param_1->CachedDependsNodes).field_0x28;
      *(undefined4 *)&(this->CachedDependsNodes).field_0x2c =
           *(undefined4 *)&(param_1->CachedDependsNodes).field_0x2c;
      *(undefined8 *)&(param_1->CachedDependsNodes).field_0x28 = 0;
    }
    *(undefined4 *)&(this->CachedDependsNodes).field_0x30 =
         *(undefined4 *)&(param_1->CachedDependsNodes).field_0x30;
    *(undefined4 *)&(this->CachedDependsNodes).field_0x34 =
         *(undefined4 *)&(param_1->CachedDependsNodes).field_0x34;
    *(undefined4 *)&(param_1->CachedDependsNodes).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->CachedDependsNodes).field_0x34 = 0;
    if (*(longlong *)&(param_1->CachedDependsNodes).field_0x40 == 0) {
      *(undefined4 *)&(this->CachedDependsNodes).field_0x38 =
           *(undefined4 *)&(param_1->CachedDependsNodes).field_0x38;
    }
    pvVar19 = *(void **)&(this->CachedDependsNodes).field_0x40;
    if (pvVar19 != (void *)0x0) {
      FMemory::Free(pvVar19);
    }
    *(undefined8 *)&(this->CachedDependsNodes).field_0x40 =
         *(undefined8 *)&(param_1->CachedDependsNodes).field_0x40;
    *(undefined8 *)&(param_1->CachedDependsNodes).field_0x40 = 0;
    *(undefined4 *)&(this->CachedDependsNodes).field_0x48 =
         *(undefined4 *)&(param_1->CachedDependsNodes).field_0x48;
    *(undefined4 *)&(param_1->CachedDependsNodes).field_0x48 = 0;
  }
  pTVar9 = &param_1->CachedPackageData;
  pTVar10 = &this->CachedPackageData;
  if (pTVar10 != pTVar9) {
    if (*(void **)pTVar10 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar10);
    }
    puVar2 = &(param_1->CachedPackageData).field_0x10;
    *(undefined8 *)pTVar10 = *(undefined8 *)pTVar9;
    puVar3 = &(this->CachedPackageData).field_0x10;
    *(undefined8 *)pTVar9 = 0;
    *(undefined4 *)&(this->CachedPackageData).field_0x8 =
         *(undefined4 *)&(param_1->CachedPackageData).field_0x8;
    *(undefined4 *)&(this->CachedPackageData).field_0xc =
         *(undefined4 *)&(param_1->CachedPackageData).field_0xc;
    *(undefined8 *)&(param_1->CachedPackageData).field_0x8 = 0;
    if (puVar3 != puVar2) {
      if (*(longlong *)&(param_1->CachedPackageData).field_0x20 == 0) {
        memmove(puVar3,puVar2,0x10);
      }
      pvVar19 = *(void **)&(this->CachedPackageData).field_0x20;
      if (pvVar19 != (void *)0x0) {
        FMemory::Free(pvVar19);
      }
      *(undefined8 *)&(this->CachedPackageData).field_0x20 =
           *(undefined8 *)&(param_1->CachedPackageData).field_0x20;
      *(undefined8 *)&(param_1->CachedPackageData).field_0x20 = 0;
      *(undefined4 *)&(this->CachedPackageData).field_0x28 =
           *(undefined4 *)&(param_1->CachedPackageData).field_0x28;
      *(undefined4 *)&(this->CachedPackageData).field_0x2c =
           *(undefined4 *)&(param_1->CachedPackageData).field_0x2c;
      *(undefined8 *)&(param_1->CachedPackageData).field_0x28 = 0;
    }
    *(undefined4 *)&(this->CachedPackageData).field_0x30 =
         *(undefined4 *)&(param_1->CachedPackageData).field_0x30;
    *(undefined4 *)&(this->CachedPackageData).field_0x34 =
         *(undefined4 *)&(param_1->CachedPackageData).field_0x34;
    *(undefined4 *)&(param_1->CachedPackageData).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->CachedPackageData).field_0x34 = 0;
    if (*(longlong *)&(param_1->CachedPackageData).field_0x40 == 0) {
      *(undefined4 *)&(this->CachedPackageData).field_0x38 =
           *(undefined4 *)&(param_1->CachedPackageData).field_0x38;
    }
    pvVar19 = *(void **)&(this->CachedPackageData).field_0x40;
    if (pvVar19 != (void *)0x0) {
      FMemory::Free(pvVar19);
    }
    *(undefined8 *)&(this->CachedPackageData).field_0x40 =
         *(undefined8 *)&(param_1->CachedPackageData).field_0x40;
    *(undefined8 *)&(param_1->CachedPackageData).field_0x40 = 0;
    *(undefined4 *)&(this->CachedPackageData).field_0x48 =
         *(undefined4 *)&(param_1->CachedPackageData).field_0x48;
    *(undefined4 *)&(param_1->CachedPackageData).field_0x48 = 0;
  }
  pTVar11 = &param_1->PreallocatedAssetDataBuffers;
  pTVar12 = &this->PreallocatedAssetDataBuffers;
  if (pTVar12 != pTVar11) {
    pFVar20 = (pTVar12->AllocatorInstance).Data;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    (pTVar12->AllocatorInstance).Data = (pTVar11->AllocatorInstance).Data;
    (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->PreallocatedAssetDataBuffers).ArrayNum = (param_1->PreallocatedAssetDataBuffers).ArrayNum
    ;
    (this->PreallocatedAssetDataBuffers).ArrayMax = (param_1->PreallocatedAssetDataBuffers).ArrayMax
    ;
    (param_1->PreallocatedAssetDataBuffers).ArrayNum = 0;
    (param_1->PreallocatedAssetDataBuffers).ArrayMax = 0;
  }
  pTVar13 = &param_1->PreallocatedDependsNodeDataBuffers;
  pTVar14 = &this->PreallocatedDependsNodeDataBuffers;
  if (pTVar14 != pTVar13) {
    pFVar20 = (pTVar14->AllocatorInstance).Data;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    (pTVar14->AllocatorInstance).Data = (pTVar13->AllocatorInstance).Data;
    (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->PreallocatedDependsNodeDataBuffers).ArrayNum =
         (param_1->PreallocatedDependsNodeDataBuffers).ArrayNum;
    (this->PreallocatedDependsNodeDataBuffers).ArrayMax =
         (param_1->PreallocatedDependsNodeDataBuffers).ArrayMax;
    (param_1->PreallocatedDependsNodeDataBuffers).ArrayNum = 0;
    (param_1->PreallocatedDependsNodeDataBuffers).ArrayMax = 0;
  }
  pTVar15 = &param_1->PreallocatedPackageDataBuffers;
  pTVar16 = &this->PreallocatedPackageDataBuffers;
  if (pTVar16 != pTVar15) {
    pFVar20 = (pTVar16->AllocatorInstance).Data;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    (pTVar16->AllocatorInstance).Data = (pTVar15->AllocatorInstance).Data;
    (pTVar15->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->PreallocatedPackageDataBuffers).ArrayNum =
         (param_1->PreallocatedPackageDataBuffers).ArrayNum;
    (this->PreallocatedPackageDataBuffers).ArrayMax =
         (param_1->PreallocatedPackageDataBuffers).ArrayMax;
    (param_1->PreallocatedPackageDataBuffers).ArrayNum = 0;
    (param_1->PreallocatedPackageDataBuffers).ArrayMax = 0;
  }
  iVar17 = this->NumAssets;
  this->NumAssets = param_1->NumAssets;
  param_1->NumAssets = iVar17;
  iVar17 = this->NumDependsNodes;
  this->NumDependsNodes = param_1->NumDependsNodes;
  param_1->NumDependsNodes = iVar17;
  iVar17 = this->NumPackageData;
  this->NumPackageData = param_1->NumPackageData;
  param_1->NumPackageData = iVar17;
  return this;
}

// operator() @ 142add200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

bool __thiscall
`FAssetRegistryState::Dump'::__l97::<lambda_10>::operator()
          (void *this,FAssetDependency *param_1,FAssetDependency *param_2)

{
  int iVar1;
  ForAnyElementType FVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  undefined1 auStack_278 [32];
  FString local_258;
  FString local_248;
  TStringBuilderBase<wchar_t> local_238;
  wchar_t local_218 [256];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_278;
  local_238.bIsDynamic = false;
  local_238.bIsExternal = false;
  local_238.Base = local_218;
  local_238.CurPos = local_218;
  local_238.End = (wchar_t *)local_18;
  FAssetIdentifier::AppendString(&param_1->AssetId,&local_238);
  ::FString::ConstructFromPtrSize
            (&local_248,local_238.Base,
             (int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
  local_238.Base = local_218;
  local_238.bIsDynamic = false;
  local_238.bIsExternal = false;
  local_238.CurPos = local_218;
  local_238.End = (wchar_t *)local_18;
  FAssetIdentifier::AppendString(&param_2->AssetId,&local_238);
  ::FString::ConstructFromPtrSize
            (&local_258,local_238.Base,
             (int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
  if (local_248.Data.ArrayNum == local_258.Data.ArrayNum) {
    if (1 < local_248.Data.ArrayNum) {
      iVar1 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_248.Data.AllocatorInstance.Data,
                         (wchar_t *)local_258.Data.AllocatorInstance.Data);
      bVar4 = iVar1 == 0;
      goto LAB_142add31a;
    }
  }
  else {
    bVar4 = local_258.Data.ArrayNum + local_248.Data.ArrayNum == 1;
LAB_142add31a:
    if (!bVar4) {
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_258.Data.ArrayNum != 0) {
        FVar3.Data = local_258.Data.AllocatorInstance.Data;
      }
      FVar2.Data = (FScriptContainerElement *)L"";
      if (local_248.Data.ArrayNum != 0) {
        FVar2.Data = local_248.Data.AllocatorInstance.Data;
      }
      iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar2.Data,(wchar_t *)FVar3.Data);
      bVar4 = SUB41((uint)iVar1 >> 0x1f,0);
      goto LAB_142add353;
    }
  }
  bVar4 = param_1->Properties < param_2->Properties;
LAB_142add353:
  if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Data.AllocatorInstance.Data);
  }
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  return bVar4;
}

// operator() @ 142add3a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall
`FAssetRegistryState::RemoveAssetDatasImpl<FDefaultBitArrayAllocator>'::__l2::<lambda_1>::operator()
          (void *this)

{
  int *piVar1;
  uint *puVar2;
  FName *pFVar3;
  FAssetRegistryState *this_00;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  TTuple<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
  *pTVar11;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_> FVar12;
  ForElementType<unsigned_int> FVar13;
  int iVar14;
  longlong lVar15;
  undefined8 *puVar16;
  ForAnyElementType FVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 *puVar20;
  uint uVar21;
  undefined8 *puVar22;
  FAssetIdentifier *pFVar23;
  undefined8 *puVar24;
  uint uVar25;
  ulonglong uVar26;
  ForElementType<unsigned_int> FVar27;
  uint uVar28;
  undefined1 auStackY_228 [32];
  uint local_1e8;
  uint local_1e0;
  uint uStack_1dc;
  int iStack_1cc;
  uint uStack_1c8;
  int local_1c0;
  uint uStack_1bc;
  int iStack_1ac;
  int iStack_1a8;
  longlong local_1a0;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_170;
  undefined1 *local_150;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_148;
  undefined4 local_128;
  int local_124;
  undefined4 local_120;
  int local_11c;
  FName local_118;
  longlong local_110;
  FSparseArrayAllocationInfo local_108;
  undefined1 local_f8 [40];
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_> local_d0;
  int local_c8;
  int local_c4;
  TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_c0;
  int local_a8;
  int local_a4;
  FScriptContainerElement local_a0 [8];
  ForAnyElementType local_98;
  uint local_90;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_228;
  uVar8 = *(uint *)((longlong)this + 0x20);
  uVar19 = 0;
  local_d0 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>)0x0;
  local_c8 = 0;
  local_c4 = 1;
  local_c0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_c0.NumBits = 0;
  local_c0.MaxBits = 0x20;
  local_a8 = -1;
  local_a4 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  if (uVar8 == 0) goto LAB_142add6a6;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar8);
  }
  TSparseArrayBase<40,4,TInlineSparseArrayAllocator<1,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::Reserve((TSparseArrayBase<40,4,TInlineSparseArrayAllocator<1,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
             *)local_f8,uVar8);
  uVar21 = 1;
  if (uVar8 >> 1 != 0) {
    uVar21 = uVar8 >> 1;
  }
  uVar18 = (ulonglong)(uVar21 - 1) * 2 + 1;
  lVar15 = 0x3f;
  if (uVar18 != 0) {
    for (; uVar18 >> lVar15 == 0; lVar15 = lVar15 + -1) {
    }
  }
  uVar21 = 1 << ((byte)lVar15 & 0x1f);
  local_128 = (undefined4)lVar15;
  if (uVar21 == 0) {
    uVar21 = 1;
  }
  else if (uVar8 < 4) {
    uVar21 = 1;
  }
  if ((local_90 != 0) && ((int)uVar21 <= (int)local_90)) goto LAB_142add6a6;
  local_90 = uVar21;
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_98,0,0,4);
  }
  if (uVar21 != 0) {
    uVar8 = uVar21;
    if (uVar21 < 2) {
      if (local_98.Data != (FScriptContainerElement *)0x0) {
        uVar8 = 0;
        goto LAB_142add4c5;
      }
    }
    else {
LAB_142add4c5:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_98,0,uVar8,4);
    }
    if (0 < (int)uVar21) {
      uVar26 = (ulonglong)uVar21;
      uVar18 = uVar19;
      do {
        FVar17.Data = local_a0;
        if (local_98.Data != (FScriptContainerElement *)0x0) {
          FVar17.Data = local_98.Data;
        }
        uVar10 = (longlong)(int)uVar21 - 1U & uVar18;
        uVar18 = uVar18 + 1;
        *(undefined4 *)(FVar17.Data + uVar10 * 4) = 0xffffffff;
        uVar26 = uVar26 - 1;
      } while (uVar26 != 0);
    }
  }
  if (local_90 != 0) {
    local_170.Array = &local_c0;
    local_1e0 = 0;
    uStack_1dc = 1;
    iStack_1cc = 0;
    uStack_1c8 = 0;
    if (local_c0.NumBits != 0) {
      FVar27 = (ForElementType<unsigned_int>)&local_c0;
      if (local_c0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar27 = local_c0.AllocatorInstance.SecondaryData;
      }
      uVar8 = *(uint *)FVar27;
      uVar18 = uVar19;
      uVar26 = uVar19;
      while (uVar8 == 0) {
        uStack_1c8 = (int)uVar26 + 0x20;
        uVar26 = (ulonglong)uStack_1c8;
        iVar9 = (int)uVar18;
        local_1e0 = iVar9 + 1;
        uVar18 = (ulonglong)local_1e0;
        if ((int)(local_c0.NumBits + -1 + (local_c0.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 <
            (int)local_1e0) {
          iStack_1cc = local_c0.NumBits;
          goto LAB_142add5d5;
        }
        uVar8 = ((int *)((longlong)FVar27 + 4))[iVar9];
      }
      uStack_1dc = ~(uVar8 - 1) & uVar8;
      uVar18 = (ulonglong)uStack_1dc * 2 + 1;
      lVar15 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_124 = (int)lVar15;
      iStack_1cc = (uStack_1c8 - 1) + local_124;
      if (local_c0.NumBits < iStack_1cc) {
        iStack_1cc = local_c0.NumBits;
      }
    }
LAB_142add5d5:
    local_170._padding_ = CONCAT44(uStack_1dc,local_1e0);
    local_170.UnvisitedBitMask = 0xffffffff;
    local_170.CurrentBitIndex = iStack_1cc;
    local_170.BaseBitIndex = uStack_1c8;
    if (iStack_1cc < local_c0.NumBits) {
      do {
        iVar9 = local_170.CurrentBitIndex;
        FVar12 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>)local_f8;
        if (local_d0 !=
            (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>)0x0) {
          FVar12 = local_d0;
        }
        pFVar23 = (FAssetIdentifier *)
                  ((longlong)FVar12 + (longlong)local_170.CurrentBitIndex * 0x28);
        uVar8 = ::GetTypeHash(pFVar23);
        uVar8 = local_90 - 1 & uVar8;
        pFVar23[1].PackageName.Number = uVar8;
        FVar17.Data = local_a0;
        if (local_98.Data != (FScriptContainerElement *)0x0) {
          FVar17.Data = local_98.Data;
        }
        lVar15 = (longlong)(int)(local_90 - 1 & uVar8);
        pFVar23[1].PackageName.ComparisonIndex.Value = *(uint *)(FVar17.Data + lVar15 * 4);
        *(int *)(FVar17.Data + lVar15 * 4) = iVar9;
        local_170.UnvisitedBitMask = local_170.UnvisitedBitMask & ~local_170._padding_._4_4_;
        TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
        FindFirstSetBit(&local_170);
      } while (local_170.CurrentBitIndex < (local_170.Array)->NumBits);
    }
  }
LAB_142add6a6:
  if (0 < *(int *)((longlong)this + 0x20)) {
    local_1e8 = 1;
    local_1a0 = 0;
LAB_142add6d0:
    lVar15 = *(longlong *)((longlong)this + 0x30);
    uVar8 = (uint)uVar19;
    if ((((int)uVar8 < 0) || (*(int *)(lVar15 + 0x18) <= (int)uVar8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (*(longlong *)(lVar15 + 0x10) != 0) {
      lVar15 = *(longlong *)(lVar15 + 0x10);
    }
    uVar21 = uVar8;
    if ((int)uVar8 < 0) {
      uVar21 = uVar8 + 0x1f;
    }
    local_110 = (longlong)((int)uVar21 >> 5) * 4;
    *(uint *)(local_110 + lVar15) = *(uint *)(local_110 + lVar15) & ~local_1e8;
    uVar21 = 0;
    if ((int)uVar8 < *(int *)((longlong)this + 0x10)) {
      uVar21 = ~uVar8 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar3 = *(FName **)(local_1a0 + *(longlong *)((longlong)this + 8));
    pTVar11 = TSet<TTuple<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
                      *)(*(longlong *)this + 0x50),*pFVar3);
    puVar24 = (undefined8 *)&pTVar11->field_0x8;
    if (pTVar11 ==
        (TTuple<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
         *)0x0) {
      puVar24 = (undefined8 *)0x0;
    }
    piVar1 = (int *)(puVar24 + 2);
    puVar16 = puVar24;
    if ((undefined8 *)puVar24[1] != (undefined8 *)0x0) {
      puVar16 = (undefined8 *)puVar24[1];
    }
    for (puVar22 = puVar16; puVar22 != puVar16 + *(int *)(puVar24 + 2); puVar22 = puVar22 + 1) {
      if ((FName *)*puVar22 == pFVar3) {
        uVar21 = (uint)((longlong)puVar22 - (longlong)puVar16 >> 3);
        if (uVar21 != 0xffffffff) {
          uVar28 = 0;
          if ((int)(uVar21 + 1) <= *(int *)(puVar24 + 2)) {
            uVar28 = ~uVar21 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((undefined8 *)puVar24[1] != (undefined8 *)0x0) {
            puVar24 = (undefined8 *)puVar24[1];
          }
          iVar9 = (*piVar1 - uVar21) + -1;
          if (1 < iVar9) {
            iVar9 = 1;
          }
          if (iVar9 != 0) {
            memmove(puVar24 + (int)uVar21,puVar24 + (*piVar1 - iVar9),(longlong)iVar9 << 3);
          }
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            lVar15 = *(longlong *)this;
            bVar6 = true;
            FVar4 = *pFVar3;
            local_118 = FVar4;
            if (*(int *)(lVar15 + 0x58) != *(int *)(lVar15 + 0x84)) {
              uVar21 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
              TSet<TTuple<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
              ::RemoveImpl<FName>((TSet<TTuple<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
                                   *)(lVar15 + 0x50),FVar4.Number + uVar21,&local_118);
            }
            FVar4 = *pFVar3;
            pFVar23 = (FAssetIdentifier *)0x0;
            TSparseArrayBase<40,4,TInlineSparseArrayAllocator<1,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            ::AddUninitialized((TSparseArrayBase<40,4,TInlineSparseArrayAllocator<1,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                                *)local_f8,&local_108);
            if (local_108.Pointer != (FAssetIdentifier *)0x0) {
              *local_108.Pointer = FVar4;
              ((FPrimaryAssetType *)((longlong)local_108.Pointer + 8))->Name = (FName)0x0;
              ((FName *)((longlong)local_108.Pointer + 0x10))->ComparisonIndex = 0;
              ((FName *)((longlong)local_108.Pointer + 0x10))->Number = 0;
              ((FName *)((longlong)local_108.Pointer + 0x18))->ComparisonIndex = 0;
              ((FName *)((longlong)local_108.Pointer + 0x18))->Number = 0;
              (((FAssetIdentifier *)((longlong)local_108.Pointer + 0x20))->PackageName).
              ComparisonIndex.Value = 0xffffffff;
              pFVar23 = local_108.Pointer;
            }
            uVar21 = ::GetTypeHash(pFVar23);
            uVar28 = local_c8 - local_a4;
            if ((uVar28 == 1) || (uVar28 == 0)) goto LAB_142adda9f;
            FVar17.Data = local_a0;
            if (local_98.Data != (FScriptContainerElement *)0x0) {
              FVar17.Data = local_98.Data;
            }
            iVar9 = *(int *)(FVar17.Data + (ulonglong)(local_90 - 1 & uVar21) * 4);
            if (iVar9 == -1) goto LAB_142adda9f;
            goto LAB_142adda50;
          }
        }
        break;
      }
    }
    bVar6 = false;
    uVar21 = local_148.UnvisitedBitMask;
    goto LAB_142add7ec;
  }
LAB_142add87f:
  uVar19 = 0;
  if ((*(char *)((longlong)this + 0x28) != '\0') && (local_c8 != local_a4)) {
    this_00 = *(FAssetRegistryState **)this;
    if (local_c8 - local_a4 == 1) {
      if (local_a4 == 0) {
        iVar14 = local_c8 + -1;
      }
      else {
        FVar27 = (ForElementType<unsigned_int>)&local_c0;
        if (local_c0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar27 = local_c0.AllocatorInstance.SecondaryData;
        }
        FVar13 = FVar27;
        if (local_c0.NumBits + 0x1fU >> 5 != 0) {
LAB_142addda0:
          if (*(uint *)FVar13 == 0) goto code_r0x000142addda5;
          puVar2 = (uint *)((longlong)FVar27 + uVar19 * 4);
          iVar9 = 0;
          bVar6 = *puVar2 != 0;
          if (bVar6) {
            for (; (*puVar2 >> iVar9 & 1) == 0; iVar9 = iVar9 + 1) {
            }
          }
          iVar14 = 0x20;
          if (bVar6) {
            iVar14 = iVar9;
          }
          iVar14 = iVar14 + (int)uVar19 * 0x20;
          if (local_c0.NumBits <= iVar14) goto LAB_142adddc6;
          goto LAB_142adddcb;
        }
LAB_142adddc6:
        iVar14 = -1;
      }
LAB_142adddcb:
      if (iVar14 == -1) {
        FAssetRegistryState::RemoveDependsNode(this_00,(FAssetIdentifier *)0x0);
      }
      else {
        FVar12 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>)local_f8;
        if (local_d0 !=
            (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>)0x0) {
          FVar12 = local_d0;
        }
        FAssetRegistryState::RemoveDependsNode
                  (this_00,(FAssetIdentifier *)((longlong)FVar12 + (longlong)iVar14 * 0x28));
      }
    }
    else {
      local_88._0_8_ = (FScriptContainerElement *)0x0;
      local_88._8_8_ = 0;
      local_68 = (void *)0x0;
      local_60 = 0;
      local_5c = 0x80;
      local_58 = 0xffffffff;
      local_54 = 0;
      local_48 = (ForElementType<FSetElementId>)0x0;
      local_40 = 0;
      TSet<FAssetIdentifier,DefaultKeyFuncs<FAssetIdentifier,0>,FDefaultSetAllocator>::
      Append<TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                ((TSet<FAssetIdentifier,DefaultKeyFuncs<FAssetIdentifier,0>,FDefaultSetAllocator> *)
                 local_88,(TSet<FAssetIdentifier,DefaultKeyFuncs<FAssetIdentifier,0>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                           *)local_f8);
      FAssetRegistryState::RemoveDependsNodes
                (this_00,(TSet<FAssetIdentifier,DefaultKeyFuncs<FAssetIdentifier,0>,FDefaultSetAllocator>
                          *)local_88);
      local_40 = 0;
      if (local_48 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_48);
      }
      bVar6 = local_88._12_4_ != 0;
      local_88._8_8_ = (ulonglong)(uint)local_88._12_4_ << 0x20;
      if (bVar6) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,4,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
      }
      local_58 = 0xffffffff;
      local_54 = 0;
      local_60 = 0;
      if (0x80 < local_5c) {
        local_5c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
      }
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_88._0_8_);
      }
    }
  }
  FAssetRegistryState::
  RemovePackageData<DefaultKeyFuncs<FAssetIdentifier,0>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
            (*(FAssetRegistryState **)this,
             (TSet<FAssetIdentifier,DefaultKeyFuncs<FAssetIdentifier,0>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
              *)local_f8);
  local_90 = 0;
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  TSparseArray<TSparseSetElement<FAssetIdentifier>,TInlineSparseArrayAllocator<1,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<FAssetIdentifier>,TInlineSparseArrayAllocator<1,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            ((TSparseArray<TSparseSetElement<FAssetIdentifier>,TInlineSparseArrayAllocator<1,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
              *)local_f8);
  return;
  while( true ) {
    FVar12 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>)local_f8;
    if (local_d0 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>)0x0) {
      FVar12 = local_d0;
    }
    iVar9 = *(int *)((undefined1 *)((longlong)FVar12 + 0x20) + lVar15 * 0x28);
    if (iVar9 == -1) break;
LAB_142adda50:
    lVar15 = (longlong)iVar9;
    FVar12 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>)local_f8;
    if (local_d0 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>)0x0) {
      FVar12 = local_d0;
    }
    if ((((*(FName *)((longlong)FVar12 + lVar15 * 0x28) == pFVar23->PackageName) &&
         (*(FName *)((undefined1 *)((longlong)FVar12 + 8) + lVar15 * 0x28) ==
          (pFVar23->PrimaryAssetType).Name)) &&
        (*(FName *)((undefined1 *)((longlong)FVar12 + 0x10) + lVar15 * 0x28) == pFVar23->ObjectName)
        ) && (*(FName *)((undefined1 *)((longlong)FVar12 + 0x18) + lVar15 * 0x28) ==
              pFVar23->ValueName)) {
      if (iVar9 != -1) {
        FVar12 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>)local_f8;
        if (local_d0 !=
            (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>)0x0) {
          FVar12 = local_d0;
        }
        memmove((undefined1 *)((longlong)FVar12 + (longlong)iVar9 * 0x28),pFVar23,0x20);
        TSparseArrayBase<40,4,TInlineSparseArrayAllocator<1,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
        ::RemoveAtUninitialized
                  ((TSparseArrayBase<40,4,TInlineSparseArrayAllocator<1,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                    *)local_f8,local_108.Index,1);
        uVar21 = local_148.UnvisitedBitMask;
        bVar6 = true;
        goto LAB_142add7ec;
      }
      break;
    }
  }
LAB_142adda9f:
  uVar25 = 1;
  if (uVar28 >> 1 != 0) {
    uVar25 = uVar28 >> 1;
  }
  uVar19 = (ulonglong)(uVar25 - 1) * 2 + 1;
  lVar15 = 0x3f;
  if (uVar19 != 0) {
    for (; uVar19 >> lVar15 == 0; lVar15 = lVar15 + -1) {
    }
  }
  uVar25 = 1 << ((byte)lVar15 & 0x1f);
  local_120 = (undefined4)lVar15;
  if (uVar25 == 0) {
    uVar25 = 1;
  }
  else if (uVar28 < 4) {
    uVar25 = 1;
  }
  if (((int)uVar28 < 1) || ((int)uVar25 <= (int)local_90)) {
    uVar21 = local_90 - 1 & uVar21;
    pFVar23[1].PackageName.Number = uVar21;
    FVar17.Data = local_a0;
    if (local_98.Data != (FScriptContainerElement *)0x0) {
      FVar17.Data = local_98.Data;
    }
    lVar15 = (longlong)(int)(local_90 - 1 & uVar21);
    pFVar23[1].PackageName.ComparisonIndex.Value = *(uint *)(FVar17.Data + lVar15 * 4);
    *(int *)(FVar17.Data + lVar15 * 4) = local_108.Index;
    uVar21 = local_148.UnvisitedBitMask;
    goto LAB_142add7ec;
  }
  local_90 = uVar25;
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_98,0,0,4);
  }
  if (uVar25 != 0) {
    uVar21 = uVar25;
    if (uVar25 < 2) {
      if (local_98.Data != (FScriptContainerElement *)0x0) {
        uVar21 = 0;
        goto LAB_142addb65;
      }
    }
    else {
LAB_142addb65:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_98,0,uVar21,4);
    }
    if (0 < (int)uVar25) {
      uVar19 = 0;
      uVar18 = (ulonglong)uVar25;
      do {
        FVar17.Data = local_a0;
        if (local_98.Data != (FScriptContainerElement *)0x0) {
          FVar17.Data = local_98.Data;
        }
        uVar26 = (longlong)(int)uVar25 - 1U & uVar19;
        uVar19 = uVar19 + 1;
        *(undefined4 *)(FVar17.Data + uVar26 * 4) = 0xffffffff;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
  }
  uVar21 = local_148.UnvisitedBitMask;
  if (local_90 != 0) {
    local_1c0 = 0;
    uStack_1bc = 1;
    local_148.Array = &local_c0;
    iStack_1ac = 0;
    iStack_1a8 = 0;
    if (local_c0.NumBits != 0) {
      FVar27 = (ForElementType<unsigned_int>)&local_c0;
      if (local_c0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar27 = local_c0.AllocatorInstance.SecondaryData;
      }
      uVar21 = *(uint *)FVar27;
      while (uVar21 == 0) {
        iStack_1a8 = iStack_1a8 + 0x20;
        lVar15 = (longlong)local_1c0;
        local_1c0 = local_1c0 + 1;
        if ((int)(local_c0.NumBits + -1 + (local_c0.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 < local_1c0)
        {
          iStack_1ac = local_c0.NumBits;
          goto LAB_142addc75;
        }
        uVar21 = ((int *)((longlong)FVar27 + 4))[lVar15];
      }
      uStack_1bc = ~(uVar21 - 1) & uVar21;
      uVar19 = (ulonglong)uStack_1bc * 2 + 1;
      lVar15 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_11c = (int)lVar15;
      iStack_1ac = iStack_1a8 + -1 + local_11c;
      if (local_c0.NumBits < iStack_1ac) {
        iStack_1ac = local_c0.NumBits;
      }
    }
LAB_142addc75:
    local_148.CurrentBitIndex = iStack_1ac;
    local_148.BaseBitIndex = iStack_1a8;
    local_150 = local_f8;
    local_148._padding_ = CONCAT44(uStack_1bc,local_1c0);
    local_148.UnvisitedBitMask = 0xffffffff;
    uVar21 = 0xffffffff;
    if (iStack_1ac < local_c0.NumBits) {
      do {
        iVar9 = local_148.CurrentBitIndex;
        puVar20 = local_150;
        if (*(undefined1 **)(local_150 + 0x28) != (undefined1 *)0x0) {
          puVar20 = *(undefined1 **)(local_150 + 0x28);
        }
        pFVar23 = (FAssetIdentifier *)(puVar20 + (longlong)local_148.CurrentBitIndex * 0x28);
        uVar21 = ::GetTypeHash(pFVar23);
        uVar21 = local_90 - 1 & uVar21;
        pFVar23[1].PackageName.Number = uVar21;
        FVar17.Data = local_a0;
        if (local_98.Data != (FScriptContainerElement *)0x0) {
          FVar17.Data = local_98.Data;
        }
        lVar15 = (longlong)(int)(local_90 - 1 & uVar21);
        pFVar23[1].PackageName.ComparisonIndex.Value = *(uint *)(FVar17.Data + lVar15 * 4);
        *(int *)(FVar17.Data + lVar15 * 4) = iVar9;
        local_148.UnvisitedBitMask = local_148.UnvisitedBitMask & ~local_148._padding_._4_4_;
        TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
        FindFirstSetBit(&local_148);
        uVar21 = local_148.UnvisitedBitMask;
      } while (local_148.CurrentBitIndex < (local_148.Array)->NumBits);
    }
  }
LAB_142add7ec:
  local_148.UnvisitedBitMask = uVar21;
  lVar15 = *(longlong *)((longlong)this + 0x30);
  if ((((int)uVar8 < 0) || (*(int *)(lVar15 + 0x18) <= (int)uVar8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (*(longlong *)(lVar15 + 0x10) != 0) {
    lVar15 = *(longlong *)(lVar15 + 0x10);
  }
  uVar21 = ~local_1e8 & *(uint *)(local_110 + lVar15);
  if (bVar6) {
    uVar21 = *(uint *)(local_110 + lVar15) | local_1e8;
  }
  local_1e8 = local_1e8 << 1 | (uint)((int)local_1e8 < 0);
  local_1a0 = local_1a0 + 8;
  *(uint *)(local_110 + lVar15) = uVar21;
  uVar19 = (ulonglong)(uVar8 + 1);
  if (*(int *)((longlong)this + 0x20) <= (int)(uVar8 + 1)) goto LAB_142add87f;
  goto LAB_142add6d0;
code_r0x000142addda5:
  uVar8 = (int)uVar19 + 1;
  uVar19 = (ulonglong)uVar8;
  FVar13 = (ForElementType<unsigned_int>)((longlong)FVar13 + 4);
  if ((int)(local_c0.NumBits + 0x1fU >> 5) <= (int)uVar8) goto LAB_142adddc6;
  goto LAB_142addda0;
}

// operator() @ 142adea70

void __thiscall `FAssetRegistryState::Dump'::__l2::<lambda_1>::operator()(void *this,bool param_1)

{
  ushort *puVar1;
  int *piVar2;
  longlong lVar3;
  ForAnyElementType *pFVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  longlong *plVar10;
  int iVar11;
  wchar_t *pwVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  uint local_res8;
  uint local_res10;
  FString local_48;
  
  plVar10 = *(longlong **)this;
  uVar18 = 0;
  local_res8 = 0;
  iVar11 = (int)(plVar10[1] - *plVar10 >> 1);
  lVar3 = *plVar10 + (longlong)iVar11 * 2;
  uVar14 = 0;
  if (((!param_1) && (uVar14 = 0, *(int *)((longlong)this + 0x18) < **(int **)((longlong)this + 8)))
     && (local_res10 = 0, lVar15 = lVar3, lVar19 = lVar3, uVar14 = 0, uVar17 = uVar18,
        0 < *(int *)((longlong)this + 0x18))) {
    do {
      uVar14 = *(uint *)((longlong)this + 0x10);
      lVar16 = lVar15;
      while( true ) {
        pwVar12 = (wchar_t *)(lVar16 + (longlong)*(int *)((longlong)this + 0x30) * -2);
        if ((*pwVar12 == L'\r') &&
           (iVar8 = wcsncmp(L"\r\n",pwVar12,(longlong)*(int *)((longlong)this + 0x30)), iVar8 == 0))
        break;
        puVar1 = (ushort *)(lVar16 + -2);
        lVar16 = lVar16 + -2;
        uVar14 = uVar14 * *(int *)((longlong)this + 0x14) +
                 (uint)(ushort)((-(ushort)(*puVar1 - 0x41 < 0x1a) & 0x20) + *puVar1);
      }
      lVar20 = lVar15;
      uVar6 = uVar18;
      if ((uVar18 != 0) && (uVar17 <= uVar14)) {
        lVar20 = lVar19;
        uVar6 = local_res10;
        uVar14 = uVar17;
      }
      uVar17 = uVar14;
      local_res10 = uVar6;
      uVar18 = uVar18 + 1;
      lVar15 = lVar16 + (longlong)*(int *)((longlong)this + 0x30) * -2;
      lVar19 = lVar20;
    } while ((int)uVar18 < *(int *)((longlong)this + 0x18));
    plVar10 = *(longlong **)this;
    uVar14 = local_res8;
    if (lVar20 != lVar3) {
      iVar11 = (int)(lVar20 - *plVar10 >> 1);
      uVar14 = local_res10;
    }
  }
  pFVar4 = *(ForAnyElementType **)((longlong)this + 0x20);
  pFVar9 = (FScriptContainerElement *)
           ::FString::ConstructFromPtrSize(&local_48,(wchar_t *)*plVar10,iVar11);
  if (((pFVar4->Data <= pFVar9) &&
      (pFVar9 < pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 0x10)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = *(int *)&pFVar4[1].Data;
  piVar2 = (int *)((longlong)&pFVar4[1].Data + 4);
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar4,piVar2);
  }
  *(int *)&pFVar4[1].Data = iVar8 + 1;
  pFVar13 = pFVar4->Data + (longlong)iVar8 * 0x10;
  *(undefined8 *)pFVar13 = 0;
  *(undefined8 *)pFVar13 = *(undefined8 *)pFVar9;
  *(undefined8 *)pFVar9 = 0;
  *(undefined4 *)(pFVar13 + 8) = *(undefined4 *)(pFVar9 + 8);
  *(undefined4 *)(pFVar13 + 0xc) = *(undefined4 *)(pFVar9 + 0xc);
  *(undefined8 *)(pFVar9 + 8) = 0;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  plVar10 = *(longlong **)this;
  if (iVar11 == (int)(plVar10[1] - *plVar10 >> 1)) {
    plVar10[1] = *plVar10;
    **(undefined4 **)((longlong)this + 8) = 0;
    return;
  }
  iVar11 = *(int *)((longlong)this + 0x30) + iVar11;
  (*(undefined8 **)((longlong)this + 0x28))[1] = **(undefined8 **)((longlong)this + 0x28);
  lVar3 = **(longlong **)this;
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            (*(TStringBuilderBase<wchar_t> **)((longlong)this + 0x28),
             (wchar_t *)(lVar3 + (longlong)iVar11 * 2),
             (int)((*(longlong **)this)[1] - lVar3 >> 1) - iVar11);
  (*(undefined8 **)this)[1] = **(undefined8 **)this;
  pwVar12 = (wchar_t *)**(undefined8 **)((longlong)this + 0x28);
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            (*(TStringBuilderBase<wchar_t> **)this,pwVar12,
             (int)((*(undefined8 **)((longlong)this + 0x28))[1] - (longlong)pwVar12 >> 1));
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(*(TStringBuilderBase<wchar_t> **)this,L"\r\n",2);
  **(uint **)((longlong)this + 8) = uVar14;
  return;
}

// operator() @ 142aded50

bool __thiscall
`FAssetRegistryState::EnumerateAllAssets'::__l2::<lambda_1>::operator()
          (void *this,FAssetData *param_1)

{
  FName FVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  
  FVar1 = param_1->PackageName;
  plVar2 = *(longlong **)this;
  uVar4 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
    plVar6 = (longlong *)plVar2[8];
    if ((longlong *)plVar2[8] == (longlong *)0x0) {
      plVar6 = plVar2 + 7;
    }
    iVar5 = *(int *)((longlong)plVar6 + (ulonglong)((int)plVar2[9] - 1U & FVar1.Number + uVar4) * 4)
    ;
    if (iVar5 != -1) {
      do {
        if (*(FName *)(*plVar2 + (longlong)iVar5 * 0x10) == FVar1) {
          return true;
        }
        iVar5 = *(int *)(*plVar2 + 8 + (longlong)iVar5 * 0x10);
      } while (iVar5 != -1);
    }
  }
  cVar3 = (*(code *)**(undefined8 **)((longlong)this + 8))
                    ((*(undefined8 **)((longlong)this + 8))[1],param_1);
  return cVar3 != '\0';
}

// operator() @ 142adeee0

void __thiscall
`FAssetRegistryState::InitializeFromExisting'::__l2::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  ForElementType<int> FVar4;
  ForAnyElementType *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  FAssetData *pFVar8;
  bool bVar9;
  int iVar10;
  FPartialMapHandle FVar11;
  bool local_res8 [8];
  FAssetDataTagMapSharedView local_res10;
  FAssetData *local_68;
  FAssetData *local_60;
  FAssetData *local_58;
  undefined8 uStack_50;
  FAssetData *local_48;
  FAssetData *pFStack_40;
  FAssetData *local_38;
  FAssetData *pFStack_30;
  
  do {
    while( true ) {
      lVar2 = *(longlong *)this;
      lVar3 = **(longlong **)(lVar2 + 8);
      if (lVar3 == 0) {
        return;
      }
      local_48 = *(FAssetData **)(lVar3 + 8);
      pFStack_40 = *(FAssetData **)(lVar3 + 0x10);
      local_38 = local_48;
      pFStack_30 = pFStack_40;
      FMemory::Free(*(void **)(lVar2 + 8));
      *(longlong *)(lVar2 + 8) = lVar3;
      local_68 = local_48;
      local_60 = pFStack_40;
      if (pFStack_40 != (FAssetData *)0x0) break;
      FAssetRegistryState::AddAssetData(*(FAssetRegistryState **)((longlong)this + 8),local_48);
      pFVar5 = *(ForAnyElementType **)((longlong)this + 0x10);
      if (pFVar5 != (ForAnyElementType *)0x0) {
        if ((pFVar5->Data <= (FScriptContainerElement *)&local_68) &&
           ((FScriptContainerElement *)&local_68 <
            pFVar5->Data + (longlong)*(int *)((longlong)&pFVar5[1].Data + 4) * 8)) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        iVar10 = *(int *)&pFVar5[1].Data;
        piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,pFVar5,piVar1);
        }
        *(int *)&pFVar5[1].Data = iVar10 + 1;
        *(FAssetData **)(pFVar5->Data + (longlong)iVar10 * 8) = local_68;
      }
      pFVar5 = *(ForAnyElementType **)((longlong)this + 0x20);
      FVar11 = FixedTagPrivate::FStoreBuilder::AddTagMap
                         (*(FStoreBuilder **)((longlong)this + 0x18),&local_res10);
      local_58 = local_68;
      uStack_50 = *(undefined8 *)FVar11;
      if ((pFVar5->Data <= (FScriptContainerElement *)&local_58) &&
         ((FScriptContainerElement *)&local_58 <
          pFVar5->Data + (longlong)*(int *)((longlong)&pFVar5[1].Data + 4) * 0x10)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar10 = *(int *)&pFVar5[1].Data;
      piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,pFVar5,piVar1);
      }
      *(int *)&pFVar5[1].Data = iVar10 + 1;
      pFVar6 = pFVar5->Data;
      *(FAssetData **)(pFVar6 + (longlong)iVar10 * 0x10) = local_58;
      *(undefined8 *)(pFVar6 + (longlong)iVar10 * 0x10 + 8) = uStack_50;
    }
    local_res8[0] = false;
    FAssetRegistryState::UpdateAssetData
              (*(FAssetRegistryState **)((longlong)this + 8),pFStack_40,local_48,local_res8);
    lVar2 = *(longlong *)((longlong)this + 0x10);
    if ((lVar2 != 0) && (local_res8[0] != false)) {
      if ((*(FAssetData ***)(lVar2 + 0x10) <= &local_60) &&
         (&local_60 < *(FAssetData ***)(lVar2 + 0x10) + *(int *)(lVar2 + 0x1c))) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar10 = *(int *)(lVar2 + 0x18);
      if (iVar10 == *(int *)(lVar2 + 0x1c)) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)(lVar2 + 0x10),(int *)(lVar2 + 0x1c));
      }
      *(int *)(lVar2 + 0x18) = iVar10 + 1;
      *(FAssetData **)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar10 * 8) = local_60;
    }
    pFVar8 = local_68;
    if (local_68 != (FAssetData *)0x0) {
      FVar4 = (local_68->ChunkIDs).AllocatorInstance.SecondaryData;
      if (FVar4 != (ForElementType<int>)0x0) {
        FMemory::Free((void *)FVar4);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar8->TaggedAssetBundles).SharedReferenceCount.ReferenceController);
      FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&pFVar8->TagsAndValues);
      ::operator_delete(pFVar8,0x68);
    }
  } while( true );
}

// operator() @ 142adf1f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FAssetRegistryState::InitializeFromExistingAndPrune'::__l2::<lambda_1>::operator()
          (void *this,FAssetData *param_1)

{
  undefined8 *puVar1;
  FName FVar2;
  longlong *plVar3;
  FAssetDataTagMap *pFVar4;
  undefined8 *puVar5;
  FAssetRegistrySerializationOptions *pFVar6;
  FName FVar7;
  FName FVar8;
  FName FVar9;
  bool bVar10;
  bool bVar11;
  longlong lVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  TArrayView<int_const_,int> *pTVar16;
  int *piVar17;
  undefined8 *puVar18;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar19;
  FAssetData *pFVar20;
  FString *pFVar21;
  FString *pFVar22;
  TSharedPtr<FAssetBundleData,1> *pTVar23;
  longlong *plVar24;
  FAssetData *pFVar25;
  undefined1 auStackY_388 [32];
  undefined1 local_338 [16];
  FAssetDataTagMap local_328;
  undefined1 local_308 [16];
  FAssetDataTagMap local_2f8;
  FAssetDataTagMap local_2e0;
  TArrayView<int_const_,int> local_2c8;
  FString local_2b8;
  TArrayView<int_const_,int> local_2a8;
  TArrayView<int_const_,int> local_298;
  TStringBuilderBase<wchar_t> local_288;
  wchar_t local_268 [256];
  ulonglong local_68 [6];
  
  local_68[0] = __security_cookie.value ^ (ulonglong)auStackY_388;
  pFVar20 = (FAssetData *)0x0;
  if (*(char *)((longlong)this + 0x20) != '\0') {
    pTVar16 = FAssetData::GetChunkIDs(param_1,&local_2c8);
    piVar17 = TArrayView<int_const_,int>::
              FindByPredicate<__FAssetRegistryState::InitializeFromExistingAndPrune_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
                        (pTVar16,*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)
                                  ((longlong)this + 0x10));
    if (piVar17 == (int *)0x0) {
      return;
    }
  }
  if (*(char *)((longlong)this + 0x21) != '\0') {
    FVar2 = param_1->PackageName;
    plVar3 = *(longlong **)this;
    uVar14 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    if ((int)plVar3[1] == *(int *)((longlong)plVar3 + 0x34)) {
      return;
    }
    plVar24 = (longlong *)plVar3[8];
    if ((longlong *)plVar3[8] == (longlong *)0x0) {
      plVar24 = plVar3 + 7;
    }
    iVar15 = *(int *)((longlong)plVar24 +
                     (ulonglong)((int)plVar3[9] - 1U & FVar2.Number + uVar14) * 4);
    if (iVar15 == -1) {
      return;
    }
    while (*(FName *)(*plVar3 + (longlong)iVar15 * 0x10) != FVar2) {
      iVar15 = *(int *)(*plVar3 + 8 + (longlong)iVar15 * 0x10);
      if (iVar15 == -1) {
        return;
      }
    }
  }
  if (*(char *)((longlong)this + 0x22) != '\0') {
    FVar2 = param_1->PackageName;
    plVar3 = *(longlong **)((longlong)this + 8);
    uVar14 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
      plVar24 = (longlong *)plVar3[8];
      if ((longlong *)plVar3[8] == (longlong *)0x0) {
        plVar24 = plVar3 + 7;
      }
      iVar15 = *(int *)((longlong)plVar24 +
                       (ulonglong)((int)plVar3[9] - 1U & FVar2.Number + uVar14) * 4);
      if (iVar15 != -1) {
        do {
          if (*(FName *)(*plVar3 + (longlong)iVar15 * 0x10) == FVar2) {
            return;
          }
          iVar15 = *(int *)(*plVar3 + 8 + (longlong)iVar15 * 0x10);
        } while (iVar15 != -1);
      }
    }
  }
  pFVar25 = pFVar20;
  if (*(char *)(*(longlong *)((longlong)this + 0x18) + 6) != '\0') {
    if ((*(byte *)&(param_1->TagsAndValues).field0_0x0 & 1) == 0) {
      pFVar4 = (param_1->TagsAndValues).field0_0x0.Loose;
      if (pFVar4 != (FAssetDataTagMap *)0x0) {
        uVar14 = (uint)pFVar4->_padding_;
        goto LAB_142adf362;
      }
    }
    else {
      uVar14 = (uint)(param_1->TagsAndValues).field0_0x0.Fixed.Num;
LAB_142adf362:
      pFVar25 = (FAssetData *)0x0;
      if (uVar14 != 0) goto LAB_142adf3cc;
    }
    local_288.Base = local_268;
    local_288.bIsDynamic = false;
    local_288.bIsExternal = false;
    local_288.CurPos = local_268;
    local_288.End = (wchar_t *)local_68;
    ::FName::AppendString(&param_1->PackageName,&local_288);
    pFVar25 = (FAssetData *)&DAT_00000001;
    local_338._8_4_ = (uint)((longlong)local_288.CurPos - (longlong)local_288.Base >> 1);
    local_338._0_8_ = local_288.Base;
    bVar13 = FPackageName::IsLocalizedPackage((TStringView<wchar_t> *)local_338);
    if (!bVar13) {
      bVar13 = true;
      goto LAB_142adf3d2;
    }
  }
LAB_142adf3cc:
  bVar13 = false;
LAB_142adf3d2:
  if (pFVar25 != (FAssetData *)0x0) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_288);
  }
  bVar11 = false;
  bVar10 = false;
  if (bVar13) {
    if (*(char *)(*(longlong *)((longlong)this + 0x18) + 7) == '\0') {
      puVar5 = *(undefined8 **)((longlong)this + 0x28);
      puVar18 = FMemory::Malloc(0x10,8);
      *puVar18 = 0;
      *(FName *)(puVar18 + 1) = param_1->PackageName;
      LOCK();
      puVar1 = (undefined8 *)*puVar5;
      *puVar5 = puVar18;
      UNLOCK();
      *puVar1 = puVar18;
    }
  }
  else {
    pFVar6 = *(FAssetRegistrySerializationOptions **)((longlong)this + 0x18);
    local_328._padding_ = 0;
    local_328._padding_ = 0;
    local_328.RefCount.Counter = 0;
    pTVar19 = TMapBase<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
              ::Find((TMapBase<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
                      *)&pFVar6->CookFilterlistTagsByClass,&param_1->AssetClassPath);
    FAssetRegistryState::FilterTags(&param_1->TagsAndValues,&local_328,pTVar19,pFVar6);
    bVar13 = FAssetData::IsTopLevelAsset(param_1);
    if (bVar13) {
      pFVar25 = ::operator_new(0x68);
      if (pFVar25 != (FAssetData *)0x0) {
        uVar14 = param_1->PackageFlags;
        pTVar16 = FAssetData::GetChunkIDs(param_1,&local_2a8);
        lVar12 = local_328._padding_;
        iVar15 = (int)local_328._padding_;
        FVar2 = (FName)pTVar16->DataPtr;
        FVar8.ComparisonIndex.Value = pTVar16->ArrayNum;
        FVar8.Number = *(uint *)&pTVar16->field_0xc;
        local_2f8._padding_._0_4_ = (int)local_328._padding_;
        local_2f8._padding_ = 0;
        if ((int)local_328._padding_ == 0) {
          local_2f8._padding_._4_4_ = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,(int)local_328._padding_,0,(ForAnyElementType *)&local_2f8,
                     (int)local_328._padding_,(int *)((longlong)&local_2f8._padding_ + 4));
          ConstructItems<TTuple<FName,FString>,TTuple<FName,FString>,int>
                    ((void *)local_2f8._padding_,(TTuple<FName,FString> *)lVar12,iVar15);
        }
        local_308._0_8_ = (param_1->AssetClassPath).PackageName;
        local_308._8_8_ = (param_1->AssetClassPath).AssetName;
        local_2f8.RefCount.Counter = 0;
        local_338._0_8_ = FVar2;
        local_338._8_8_ = FVar8;
        pFVar20 = FAssetData::FAssetData
                            (pFVar25,param_1->PackageName,param_1->PackagePath,param_1->AssetName,
                             (FTopLevelAssetPath *)local_308,&local_2f8,
                             (TArrayView<int_const_,int> *)local_338,uVar14);
      }
    }
    else {
      pFVar25 = ::operator_new(0x68);
      if (pFVar25 != (FAssetData *)0x0) {
        uVar14 = param_1->PackageFlags;
        pTVar16 = FAssetData::GetChunkIDs(param_1,&local_298);
        lVar12 = local_328._padding_;
        iVar15 = (int)local_328._padding_;
        FVar2 = (FName)pTVar16->DataPtr;
        FVar7.ComparisonIndex.Value = pTVar16->ArrayNum;
        FVar7.Number = *(uint *)&pTVar16->field_0xc;
        local_2e0._padding_ = 0;
        local_2e0._padding_._0_4_ = (int)local_328._padding_;
        if ((int)local_328._padding_ == 0) {
          local_2e0._padding_._4_4_ = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,(int)local_328._padding_,0,(ForAnyElementType *)&local_2e0,
                     (int)local_328._padding_,(int *)((longlong)&local_2e0._padding_ + 4));
          ConstructItems<TTuple<FName,FString>,TTuple<FName,FString>,int>
                    ((void *)local_2e0._padding_,(TTuple<FName,FString> *)lVar12,iVar15);
        }
        FVar8 = (param_1->AssetClassPath).PackageName;
        FVar9 = (param_1->AssetClassPath).AssetName;
        local_2e0.RefCount.Counter = 0;
        pFVar21 = FAssetData::GetObjectPathString(param_1,(FString *)&local_2c8);
        bVar11 = true;
        bVar10 = true;
        pFVar22 = ::FName::ToString(&param_1->PackageName,&local_2b8);
        local_338._0_8_ = FVar8;
        local_338._8_8_ = FVar9;
        local_308._0_8_ = FVar2;
        local_308._8_8_ = FVar7;
        pFVar20 = FAssetData::FAssetData
                            (pFVar25,pFVar22,pFVar21,(FTopLevelAssetPath *)local_338,&local_2e0,
                             (TArrayView<int_const_,int> *)local_308,uVar14);
      }
      if ((bVar10) && (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
      }
      if ((bVar11) && (local_2c8.DataPtr != (int *)0x0)) {
        FMemory::Free(local_2c8.DataPtr);
      }
    }
    pTVar23 = FAssetRegistryState::FilterBundles
                        ((TSharedPtr<FAssetBundleData,1> *)local_308,&param_1->TaggedAssetBundles,
                         *(FAssetRegistrySerializationOptions **)((longlong)this + 0x18));
    if (&pFVar20->TaggedAssetBundles != pTVar23) {
      (pFVar20->TaggedAssetBundles).Object = pTVar23->Object;
      pTVar23->Object = (FAssetBundleData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pFVar20->TaggedAssetBundles).SharedReferenceCount,&pTVar23->SharedReferenceCount)
      ;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_308._8_8_);
    puVar5 = *(undefined8 **)((longlong)this + 0x30);
    puVar18 = FMemory::Malloc(0x10,8);
    *puVar18 = 0;
    puVar18[1] = pFVar20;
    LOCK();
    puVar1 = (undefined8 *)*puVar5;
    *puVar5 = puVar18;
    UNLOCK();
    *puVar1 = puVar18;
    DestructItems<TTuple<FName,FString>,int>
              ((TTuple<FName,FString> *)local_328._padding_,(int)local_328._padding_);
    if ((TTuple<FName,FString> *)local_328._padding_ != (TTuple<FName,FString> *)0x0) {
      FMemory::Free((void *)local_328._padding_);
    }
  }
  return;
}

// operator() @ 142adf9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall `FAssetRegistryState::Prune'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  FAssetData *this_00;
  FAssetDataTagMap *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  TArrayView<int_const_,int> *this_01;
  int *piVar10;
  schar *psVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 *puVar14;
  byte bVar15;
  longlong lVar16;
  undefined1 auStack_348 [32];
  longlong local_328;
  longlong local_320;
  uint local_318;
  longlong local_310;
  int local_308;
  undefined8 local_304;
  undefined8 local_2fc;
  FAssetIdentifier local_2f4;
  FAssetIdentifier local_2d4;
  wchar_t *local_2a8;
  int iStack_2a0;
  undefined4 uStack_29c;
  FPrimaryAssetId local_298;
  TStringView<wchar_t> local_288;
  TArrayView<int_const_,int> local_278;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_348;
  plVar1 = *(longlong **)this;
  lVar16 = (longlong)param_1;
  local_318 = (uint)~param_1 >> 0x1f;
  iVar8 = (int)plVar1[1];
  uVar9 = 0;
  if (param_1 < iVar8) {
    uVar9 = local_318;
  }
  local_308 = param_1;
  if ((uVar9 == 0) &&
     (local_328 = lVar16, local_320 = (longlong)iVar8,
     bVar5 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar5
     )) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = *(FAssetData **)(*plVar1 + lVar16 * 8);
  bVar15 = 1;
  bVar5 = true;
  local_310 = lVar16;
  if (*(char *)((longlong)this + 0x50) != '\0') {
    this_01 = FAssetData::GetChunkIDs(this_00,&local_278);
    piVar10 = TArrayView<int_const_,int>::
              FindByPredicate<__FAssetRegistryState::Prune_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
                        (this_01,*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)
                                  ((longlong)this + 0x38));
    if (piVar10 == (int *)0x0) {
      bVar15 = 0;
      bVar5 = false;
      goto LAB_142adfc44;
    }
  }
  if (*(char *)((longlong)this + 0x51) != '\0') {
    FVar3 = this_00->PackageName;
    plVar1 = *(longlong **)((longlong)this + 0x28);
    uVar9 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
    if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
      plVar12 = (longlong *)plVar1[8];
      if ((longlong *)plVar1[8] == (longlong *)0x0) {
        plVar12 = plVar1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar12 +
                      (ulonglong)((int)plVar1[9] - 1U & FVar3.Number + uVar9) * 4);
      if (iVar8 != -1) {
        do {
          if (*(FName *)(*plVar1 + (longlong)iVar8 * 0x10) == FVar3) goto LAB_142adfb1f;
          iVar8 = *(int *)(*plVar1 + 8 + (longlong)iVar8 * 0x10);
        } while (iVar8 != -1);
      }
    }
LAB_142adfb14:
    bVar15 = 0;
    bVar5 = false;
    lVar16 = local_310;
    goto LAB_142adfc44;
  }
LAB_142adfb1f:
  if (*(char *)((longlong)this + 0x52) != '\0') {
    FVar3 = this_00->PackageName;
    plVar1 = *(longlong **)((longlong)this + 0x30);
    uVar9 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
    if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
      plVar12 = (longlong *)plVar1[8];
      if ((longlong *)plVar1[8] == (longlong *)0x0) {
        plVar12 = plVar1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar12 +
                      (ulonglong)((int)plVar1[9] - 1U & FVar3.Number + uVar9) * 4);
      if (iVar8 != -1) {
        do {
          if (*(FName *)(*plVar1 + (longlong)iVar8 * 0x10) == FVar3) goto LAB_142adfb14;
          iVar8 = *(int *)(*plVar1 + 8 + (longlong)iVar8 * 0x10);
        } while (iVar8 != -1);
      }
    }
  }
  bVar7 = false;
  if (*(char *)(*(longlong *)((longlong)this + 0x40) + 6) == '\0') {
LAB_142adfc1c:
    bVar6 = false;
  }
  else {
    if ((*(byte *)&(this_00->TagsAndValues).field0_0x0 & 1) == 0) {
      pFVar2 = (this_00->TagsAndValues).field0_0x0.Loose;
      if (pFVar2 != (FAssetDataTagMap *)0x0) {
        uVar9 = (uint)pFVar2->_padding_;
        goto LAB_142adfbab;
      }
    }
    else {
      uVar9 = (uint)(this_00->TagsAndValues).field0_0x0.Fixed.Num;
LAB_142adfbab:
      bVar7 = false;
      if (uVar9 != 0) goto LAB_142adfc1c;
    }
    local_268.bIsDynamic = false;
    local_268.bIsExternal = false;
    local_268.End = (wchar_t *)local_48;
    local_268.Base = local_248;
    local_268.CurPos = local_248;
    ::FName::AppendString(&this_00->PackageName,&local_268);
    bVar7 = true;
    local_2a8 = local_268.Base;
    iStack_2a0 = (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1);
    local_288._12_4_ = uStack_29c;
    local_288.Size = iStack_2a0;
    local_288.DataPtr = local_268.Base;
    bVar6 = FPackageName::IsLocalizedPackage(&local_288);
    if ((bVar6) || ((this_00->PackageFlags & 0x8000000) != 0)) goto LAB_142adfc1c;
    bVar6 = true;
  }
  if (bVar7) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  }
  lVar16 = local_310;
  if (bVar6) {
    bVar15 = 0;
    bVar5 = *(char *)(*(longlong *)((longlong)this + 0x40) + 7) == '\0';
  }
LAB_142adfc44:
  plVar1 = *(longlong **)((longlong)this + 8);
  iVar8 = (int)plVar1[1];
  uVar9 = 0;
  if (local_308 < iVar8) {
    uVar9 = local_318;
  }
  if ((uVar9 == 0) &&
     (local_328 = lVar16, local_320 = (longlong)iVar8,
     bVar7 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar7
     )) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(byte *)(lVar16 + *plVar1) = bVar15;
  **(int **)((longlong)this + 0x18) = **(int **)((longlong)this + 0x18) + (bVar15 ^ 1);
  if (bVar5) {
    FVar3 = this_00->PackageName;
    lVar16 = *(longlong *)((longlong)this + 0x20);
    local_2f4.ObjectName.ComparisonIndex.Value = 0;
    local_2f4.ObjectName.Number = 0;
    local_304 = 0;
    local_2f4.PrimaryAssetType.Name.ComparisonIndex.Value = 0;
    local_2f4.PrimaryAssetType.Name.Number = 0;
    local_2f4.ValueName.ComparisonIndex.Value = 0;
    local_2f4.ValueName.Number = 0;
    local_2f4.PackageName = FVar3;
    uVar9 = ::GetTypeHash(&local_2f4);
    if (*(int *)(lVar16 + 0x198) != *(int *)(lVar16 + 0x1c4)) {
      lVar13 = *(longlong *)(lVar16 + 0x1d0);
      if (*(longlong *)(lVar16 + 0x1d0) == 0) {
        lVar13 = lVar16 + 0x1c8;
      }
      iVar8 = *(int *)(lVar13 + (ulonglong)(*(int *)(lVar16 + 0x1d8) - 1U & uVar9) * 4);
      if (iVar8 != -1) {
        lVar16 = *(longlong *)(lVar16 + 400);
        do {
          lVar13 = (longlong)iVar8 * 0x30;
          if ((((*(FName *)(lVar16 + lVar13) == FVar3) && (*(longlong *)(lVar16 + 8 + lVar13) == 0))
              && (*(longlong *)(lVar16 + 0x10 + lVar13) == 0)) &&
             (*(longlong *)(lVar16 + 0x18 + lVar13) == 0)) {
            if (iVar8 != -1) {
              puVar14 = (undefined8 *)(lVar13 + lVar16 + 0x20);
              if (lVar13 + lVar16 == 0) {
                puVar14 = (undefined8 *)0x0;
              }
              if (puVar14 != (undefined8 *)0x0) {
                psVar11 = TMapBase<FDependsNode_*,signed_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDependsNode_*,signed_char,0>_>
                          ::FindChecked(*(TMapBase<FDependsNode_*,signed_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDependsNode_*,signed_char,0>_>
                                          **)((longlong)this + 0x10),(FDependsNode *)*puVar14);
                *psVar11 = '\x01';
              }
            }
            break;
          }
          iVar8 = *(int *)(lVar16 + 0x28 + lVar13);
        } while (iVar8 != -1);
      }
    }
    FAssetData::GetPrimaryAssetId(this_00,&local_298);
    local_2fc = 0;
    if ((local_298.PrimaryAssetType.Name != (FName)0x0) &&
       (local_298.PrimaryAssetName != (FName)0x0)) {
      lVar16 = *(longlong *)((longlong)this + 0x20);
      local_2d4.PackageName.ComparisonIndex.Value = 0;
      local_2d4.PackageName.Number = 0;
      local_2d4.PrimaryAssetType.Name = local_298.PrimaryAssetType.Name;
      local_2d4.ObjectName = local_298.PrimaryAssetName;
      local_2d4.ValueName.ComparisonIndex.Value = 0;
      local_2d4.ValueName.Number = 0;
      uVar9 = ::GetTypeHash(&local_2d4);
      if (*(int *)(lVar16 + 0x198) != *(int *)(lVar16 + 0x1c4)) {
        lVar13 = *(longlong *)(lVar16 + 0x1d0);
        if (*(longlong *)(lVar16 + 0x1d0) == 0) {
          lVar13 = lVar16 + 0x1c8;
        }
        iVar8 = *(int *)(lVar13 + (ulonglong)(*(int *)(lVar16 + 0x1d8) - 1U & uVar9) * 4);
        if (iVar8 != -1) {
          lVar16 = *(longlong *)(lVar16 + 400);
          do {
            lVar13 = (longlong)iVar8 * 0x30;
            if (((*(longlong *)(lVar16 + lVar13) == 0) &&
                (*(FName *)(lVar16 + 8 + lVar13) == local_298.PrimaryAssetType.Name)) &&
               ((*(FName *)(lVar16 + 0x10 + lVar13) == local_298.PrimaryAssetName &&
                (*(longlong *)(lVar16 + 0x18 + lVar13) == 0)))) {
              if (iVar8 == -1) {
                return;
              }
              puVar14 = (undefined8 *)(lVar13 + lVar16 + 0x20);
              if (lVar13 + lVar16 == 0) {
                puVar14 = (undefined8 *)0x0;
              }
              if (puVar14 == (undefined8 *)0x0) {
                return;
              }
              psVar11 = TMapBase<FDependsNode_*,signed_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDependsNode_*,signed_char,0>_>
                        ::FindChecked(*(TMapBase<FDependsNode_*,signed_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDependsNode_*,signed_char,0>_>
                                        **)((longlong)this + 0x10),(FDependsNode *)*puVar14);
              *psVar11 = '\x01';
              return;
            }
            iVar8 = *(int *)(lVar16 + 0x28 + lVar13);
          } while (iVar8 != -1);
        }
      }
    }
  }
  return;
}

// operator() @ 142adfea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall `FAssetRegistryState::RemoveDependsNodes'::__l2::<lambda_1>::operator()(void *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *plVar5;
  FDependsNode *this_00;
  FDependsNode *this_01;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator> *this_02;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  uint uVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8;
  undefined1 local_1b7;
  undefined1 local_1b6;
  undefined1 local_1b5 [5];
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> local_1b0;
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> local_1a0;
  longlong *local_190;
  int iStack_188;
  uint uStack_184;
  TBitArray<FDefaultBitArrayAllocator> *local_180;
  undefined4 uStack_178;
  int iStack_174;
  int local_170;
  int iStack_168;
  undefined4 uStack_164;
  int local_160;
  int local_15c;
  int local_158;
  FDependsNode *local_154;
  longlong *local_148;
  longlong *local_140;
  FDependsNode *local_138;
  FDependsNode *local_130;
  longlong *local_128;
  int iStack_120;
  uint uStack_11c;
  TBitArray<FDefaultBitArrayAllocator> *local_118;
  undefined4 uStack_110;
  int iStack_10c;
  int local_108;
  int iStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  longlong *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  longlong *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  undefined4 local_7c;
  FDependencyQuery local_78;
  FDependencyQuery local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  plVar5 = *(longlong **)this;
  iStack_188 = 0;
  iVar13 = (int)plVar5[5];
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar5 + 2);
  local_170 = 0;
  uStack_184 = 1;
  iStack_174 = 0;
  if (iVar13 != 0) {
    pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)plVar5[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar5[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar17 = pTVar1;
    }
    uVar16 = *(uint *)(pTVar17->AllocatorInstance).InlineData;
    while (uVar16 == 0) {
      lVar9 = (longlong)iStack_188;
      local_170 = local_170 + 0x20;
      iStack_188 = iStack_188 + 1;
      iStack_174 = iVar13;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_188) goto LAB_142adff6e;
      uVar16 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar9 * 4 + 4);
    }
    uStack_184 = -uVar16 & uVar16;
    uVar3 = (ulonglong)uStack_184 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_160 = (int)lVar9;
    iStack_174 = local_170 + -1 + local_160;
    if (iVar13 < iStack_174) {
      iStack_174 = iVar13;
    }
  }
LAB_142adff6e:
  uVar16 = *(uint *)(plVar5 + 5);
  iStack_168 = (int)plVar5[1] - *(int *)((longlong)plVar5 + 0x34);
  uVar15 = uVar16 & 0xffffffe0;
  TStack_f0._padding_ = CONCAT44(uStack_184,iStack_188);
  uStack_178 = 0xffffffff;
  TStack_f0.CurrentBitIndex = iStack_174;
  TStack_f0.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar16 >> 5;
  TStack_f0._28_4_ = local_7c;
  TStack_f0.BaseBitIndex = local_170;
  uStack_d0 = CONCAT44(uStack_164,iStack_168);
  local_190 = plVar5;
  local_180 = pTVar1;
  local_148 = plVar5;
  local_140 = this;
  local_f8 = plVar5;
  TStack_f0.Array = pTVar1;
  if ((((int)uVar16 < 0) || (iVar13 < (int)uVar16)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar4 = *(uint *)(plVar5 + 5);
  if (uVar16 != uVar4) {
    pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)plVar5[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar5[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar17 = pTVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) &
             *(uint *)((pTVar17->AllocatorInstance).InlineData + (longlong)iVar12 * 4);
    while (uVar16 == 0) {
      lVar9 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar16 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_142ae0081;
      uVar16 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_15c = (int)lVar9;
    uVar16 = local_15c + -1 + uVar15;
    if ((int)uVar4 < (int)uVar16) {
      uVar16 = uVar4;
    }
  }
LAB_142ae0081:
  while( true ) {
    plVar5 = local_f8;
    if ((int)local_f8[1] - *(int *)((longlong)local_f8 + 0x34) != (int)uStack_d0) {
      local_1b8 = 0;
      `TSparseArray<TSparseSetElement<FDependsNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1b8);
    }
    if (((TStack_f0.CurrentBitIndex == uVar16) && (TStack_f0.Array == pTVar1)) &&
       (plVar5 == local_148)) break;
    local_78.RequiredUnions.ArrayMax = 1;
    this_00 = *(FDependsNode **)(*plVar5 + (longlong)TStack_f0.CurrentBitIndex * 0x10);
    local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b0.ArrayNum = 0;
    local_1b0.ArrayMax = 0;
    local_78.RequiredUnions.AllocatorInstance.SecondaryData =
         (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0;
    local_78.RequiredUnions.ArrayNum = 0;
    local_78.Required = None;
    local_78.Excluded = None;
    FDependsNode::GetReferencers(this_00,&local_1b0,All,&local_78);
    if (local_78.RequiredUnions.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
      FMemory::Free((void *)local_78.RequiredUnions.AllocatorInstance.SecondaryData);
    }
    iVar13 = local_1b0.ArrayNum;
    pFVar2 = local_1b0.AllocatorInstance.Data + (longlong)local_1b0.ArrayNum * 8;
    FVar14.Data = local_1b0.AllocatorInstance.Data;
    while( true ) {
      if (local_1b0.ArrayNum != iVar13) {
        local_1b7 = 0;
        `TCheckedPointerIterator<FDependsNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_1b7);
      }
      if (FVar14.Data == pFVar2) break;
      plVar5 = *(longlong **)this;
      this_01 = *(FDependsNode **)FVar14.Data;
      uVar15 = ((uint)((ulonglong)this_01 >> 0x14) & 0xffff ^ (uint)((ulonglong)this_01 >> 4)) *
               -0x7a143595;
      uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
      if ((int)plVar5[1] != *(int *)((longlong)plVar5 + 0x34)) {
        plVar10 = plVar5 + 7;
        if ((longlong *)plVar5[8] != (longlong *)0x0) {
          plVar10 = (longlong *)plVar5[8];
        }
        iVar12 = *(int *)((longlong)plVar10 +
                         (ulonglong)((int)plVar5[9] - 1U & (uVar15 >> 0x10 ^ uVar15)) * 4);
        if (iVar12 != -1) {
          do {
            if (*(FDependsNode **)(*plVar5 + (longlong)iVar12 * 0x10) == this_01)
            goto LAB_142ae01b5;
            iVar12 = *(int *)(*plVar5 + 8 + (longlong)iVar12 * 0x10);
          } while (iVar12 != -1);
        }
      }
      FDependsNode::RemoveDependency(this_01,this_00,All);
LAB_142ae01b5:
      FVar14.Data = FVar14.Data + 8;
    }
    if (local_1b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.AllocatorInstance.Data);
    }
    TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
  }
  plVar5 = *(longlong **)this;
  iVar13 = (int)plVar5[5];
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar5 + 2);
  iStack_120 = 0;
  uStack_11c = 1;
  local_108 = 0;
  iStack_10c = iStack_120;
  if (iVar13 != 0) {
    pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)plVar5[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar5[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar17 = pTVar1;
    }
    uVar16 = *(uint *)(pTVar17->AllocatorInstance).InlineData;
    local_108 = 0;
    iStack_120 = 0;
    while (uVar16 == 0) {
      lVar9 = (longlong)iStack_120;
      local_108 = local_108 + 0x20;
      iStack_120 = iStack_120 + 1;
      iStack_10c = iVar13;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_120) goto LAB_142ae026d;
      uVar16 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar9 * 4 + 4);
    }
    uStack_11c = -uVar16 & uVar16;
    uVar3 = (ulonglong)uStack_11c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_158 = (int)lVar9;
    iStack_10c = local_108 + -1 + local_158;
    if (iVar13 < iStack_10c) {
      iStack_10c = iVar13;
    }
  }
LAB_142ae026d:
  uVar16 = *(uint *)(plVar5 + 5);
  iStack_104 = iStack_174;
  iStack_100 = (int)plVar5[1] - *(int *)((longlong)plVar5 + 0x34);
  uVar15 = uVar16 & 0xffffffe0;
  uStack_110 = 0xffffffff;
  TStack_c0._padding_ = CONCAT44(uStack_11c,iStack_120);
  TStack_c0.CurrentBitIndex = iStack_10c;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar16 >> 5;
  TStack_c0._28_4_ = iStack_174;
  TStack_c0.BaseBitIndex = local_108;
  uStack_a0 = CONCAT44(uStack_fc,iStack_100);
  local_128 = plVar5;
  local_118 = pTVar1;
  local_c8 = plVar5;
  TStack_c0.Array = pTVar1;
  if (((int)uVar16 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  plVar10 = local_140;
  uVar4 = *(uint *)(plVar5 + 5);
  if (uVar16 != uVar4) {
    pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)plVar5[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar5[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar17 = pTVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) &
             *(uint *)((pTVar17->AllocatorInstance).InlineData + (longlong)iVar13 * 4);
    while (uVar16 == 0) {
      lVar9 = (longlong)iVar13;
      uVar15 = uVar15 + 0x20;
      iVar13 = iVar13 + 1;
      uVar16 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_142ae0360;
      uVar16 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar16 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar16) {
      uVar16 = uVar4;
    }
  }
LAB_142ae0360:
  do {
    plVar6 = local_c8;
    if ((int)local_c8[1] - *(int *)((longlong)local_c8 + 0x34) != (int)uStack_a0) {
      `TSparseArray<TSparseSetElement<FDependsNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1b6);
    }
    if (((TStack_c0.CurrentBitIndex == uVar16) && (TStack_c0.Array == pTVar1)) && (plVar6 == plVar5)
       ) {
      return;
    }
    local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a0.ArrayNum = 0;
    local_1a0.ArrayMax = 0;
    local_58.RequiredUnions.AllocatorInstance.SecondaryData =
         (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0;
    local_58.RequiredUnions.ArrayNum = 0;
    local_58.RequiredUnions.ArrayMax = 1;
    local_130 = *(FDependsNode **)(*plVar6 + (longlong)TStack_c0.CurrentBitIndex * 0x10);
    local_58.Required = None;
    local_58.Excluded = None;
    FDependsNode::GetDependencies(local_130,&local_1a0,All,&local_58);
    if (local_58.RequiredUnions.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
      FMemory::Free((void *)local_58.RequiredUnions.AllocatorInstance.SecondaryData);
    }
    iVar13 = local_1a0.ArrayNum;
    pFVar2 = local_1a0.AllocatorInstance.Data + (longlong)local_1a0.ArrayNum * 8;
    FVar14.Data = local_1a0.AllocatorInstance.Data;
    while( true ) {
      if (local_1a0.ArrayNum != iVar13) {
        `TCheckedPointerIterator<FDependsNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_1b5);
      }
      if (FVar14.Data == pFVar2) break;
      local_138 = *(FDependsNode **)FVar14.Data;
      plVar6 = (longlong *)*plVar10;
      uVar15 = ((uint)((ulonglong)local_138 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_138 >> 4)) *
               -0x7a143595;
      uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
      if ((int)plVar6[1] != *(int *)((longlong)plVar6 + 0x34)) {
        plVar11 = plVar6 + 7;
        if ((longlong *)plVar6[8] != (longlong *)0x0) {
          plVar11 = (longlong *)plVar6[8];
        }
        iVar12 = *(int *)((longlong)plVar11 +
                         (ulonglong)((int)plVar6[9] - 1U & (uVar15 >> 0x10 ^ uVar15)) * 4);
        if (iVar12 != -1) {
          do {
            if (*(FDependsNode **)(*plVar6 + (longlong)iVar12 * 0x10) == local_138)
            goto LAB_142ae04df;
            iVar12 = *(int *)(*plVar6 + 8 + (longlong)iVar12 * 0x10);
          } while (iVar12 != -1);
        }
      }
      uVar15 = ((uint)((ulonglong)local_138 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_138 >> 4)) *
               -0x7a143595;
      uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
      this_02 = TMapBase<FDependsNode_*,TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDependsNode_*,TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>,0>_>
                ::FindOrAddImpl<FDependsNode_*_const_&>
                          ((TMapBase<FDependsNode_*,TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDependsNode_*,TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>,0>_>
                            *)plVar10[1],uVar15 >> 0x10 ^ uVar15,&local_138);
      TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>::
      Emplace<FDependsNode_*_const_&>(this_02,&local_154,(bool *)&local_130);
LAB_142ae04df:
      FVar14.Data = FVar14.Data + 8;
    }
    if (local_1a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.AllocatorInstance.Data);
    }
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  } while( true );
}

// operator() @ 142ae0630

void __thiscall `FAssetRegistryState::SetAssetDatas'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  FAssetData *local_res8;
  longlong local_res10;
  
  TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>::Empty
            (*(TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
               **)this,
             *(int *)&(*(TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
                         **)this)[7].Elements.field_0x30);
  lVar3 = **(longlong **)((longlong)this + 8);
  lVar4 = (longlong)(int)(*(longlong **)((longlong)this + 8))[1] * 0x68 + lVar3;
  for (; lVar3 != lVar4; lVar3 = lVar3 + 0x68) {
    local_res10 = lVar3;
    TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>::
    Emplace<FAssetData_*>
              (*(TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
                 **)this,&local_res8,(bool *)&local_res10);
  }
  lVar3 = *(longlong *)this;
  if ((*(int *)(lVar3 + 0x260) != *(int *)(lVar3 + 8) - *(int *)(lVar3 + 0x34)) &&
     (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3136563660776797374>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistryState.cpp"
                         ,0xb42,"NumAssets == CachedAssets.Num()"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// operator() @ 142ae14d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

bool __thiscall
`FAssetRegistryState::ResolveRedirector'::__l14::<lambda_1>::operator()
          (void *this,FAssetData *param_1)

{
  code *pcVar1;
  FDependsNode *this_00;
  code *pcVar2;
  code *pcVar3;
  bool bVar4;
  code **ppcVar5;
  undefined1 auStack_a8 [32];
  FTopLevelAssetPath local_88;
  FDependencyQuery local_78;
  code *local_58 [2];
  code *local_48 [3];
  code **local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88.PackageName = (param_1->AssetClassPath).PackageName;
  local_88.AssetName = (param_1->AssetClassPath).AssetName;
  bVar4 = FAssetData::IsRedirectorClassName(&local_88);
  if (bVar4) {
    pcVar1 = *(code **)((longlong)this + 8);
    local_88.PackageName.ComparisonIndex.Value = 0;
    local_88.PackageName.Number = 0;
    this_00 = (FDependsNode *)**(undefined8 **)this;
    pcVar2 = *(code **)((longlong)this + 0x18);
    pcVar3 = *(code **)((longlong)this + 0x10);
    local_78.RequiredUnions.AllocatorInstance.SecondaryData =
         (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0;
    local_78.RequiredUnions.ArrayNum = 0;
    local_78.RequiredUnions.ArrayMax = 1;
    local_78.Required = None;
    local_78.Excluded = None;
    local_58[0] = (code *)0x0;
    local_30 = FMemory::Malloc(0x28,8);
    *local_30 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<``FAssetRegistryState::ResolveRedirector'::`14'::<lambda_1>::operator()'::`5'::<lambda_1>,1,1>
                         ::_vftable_;
    local_30[1] = pcVar1;
    local_30[2] = (code *)&local_88;
    local_30[3] = pcVar3;
    local_30[4] = pcVar2;
    if (local_30 + 1 != (code **)0x0) {
      local_58[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<``FAssetRegistryState::ResolveRedirector'::__l14::<lambda_1>::operator()'::__l5::<lambda_1>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
                    ::Call;
    }
    FDependsNode::IterateOverDependencies
              (this_00,(TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
                        *)local_58,Package,&local_78);
    if (local_58[0] != (code *)0x0) {
      ppcVar5 = local_58 + 2;
      if (local_30 != (code **)0x0) {
        ppcVar5 = local_30;
      }
      (**(code **)(*ppcVar5 + 0x10))();
    }
    if (local_78.RequiredUnions.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
      FMemory::Free((void *)local_78.RequiredUnions.AllocatorInstance.SecondaryData);
    }
    if (local_88.PackageName != (FName)0x0) {
      **(FName **)this = local_88.PackageName;
      return false;
    }
  }
  else {
    **(undefined8 **)((longlong)this + 0x10) = **(undefined8 **)this;
  }
  return **(longlong **)((longlong)this + 0x10) == 0;
}

// operator() @ 142ae1660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FAssetRegistryState::RemoveAssetDatasImpl<FDefaultBitArrayAllocator>'::__l2::<lambda_2>::operator()
          (void *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  longlong *plVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TTuple<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_> *pTVar12;
  TSet<FAssetData_*,DefaultKeyFuncs<FAssetData_*,0>,FDefaultSetAllocator> *this_00;
  TTuple<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_> *pTVar13;
  uint *puVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  FTopLevelAssetPath *pFVar18;
  uint uVar19;
  ForAnyElementType *pFVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined1 auStackY_178 [32];
  undefined1 local_138 [4];
  uint local_134;
  undefined4 local_130;
  undefined8 local_12c;
  int local_124;
  longlong local_120;
  FTopLevelAssetPath *local_118;
  longlong *local_110;
  longlong *local_108;
  uint uStack_100;
  uint uStack_fc;
  TBitArray<FDefaultBitArrayAllocator> *local_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  uint local_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  undefined4 local_8c;
  undefined1 local_88 [32];
  TBitArray<FDefaultBitArrayAllocator> *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  uVar21 = 0;
  local_88._0_8_ = 0;
  local_88._8_4_ = 0;
  local_88._8_8_ = 0;
  local_68 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  uVar22 = uVar21;
  local_110 = this;
  if (0 < *(int *)((longlong)this + 0x20)) {
    do {
      uVar19 = (uint)uVar22;
      uVar9 = 0;
      if ((int)uVar19 < *(int *)((longlong)this + 0x10)) {
        uVar9 = ~uVar19 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar15 = *(longlong *)(uVar21 + *(longlong *)((longlong)this + 8));
      local_120 = lVar15;
      pTVar12 = TSet<TTuple<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)(*(longlong *)this + 0xa0),*(FName *)(lVar15 + 8));
      pFVar20 = (ForAnyElementType *)&pTVar12->field_0x8;
      if (pTVar12 == (TTuple<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_> *)0x0) {
        pFVar20 = (ForAnyElementType *)0x0;
      }
      pFVar2 = pFVar20->Data;
      for (pFVar16 = pFVar2; pFVar16 != pFVar2 + (longlong)*(int *)&pFVar20[1].Data * 8;
          pFVar16 = pFVar16 + 8) {
        if (*(longlong *)pFVar16 == lVar15) {
          uVar9 = (uint)((longlong)pFVar16 - (longlong)pFVar2 >> 3);
          if (uVar9 != 0xffffffff) {
            uVar10 = 0;
            if ((int)(uVar9 + 1) <= *(int *)&pFVar20[1].Data) {
              uVar10 = ~uVar9 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar11 = *(int *)&pFVar20[1].Data + ~uVar9;
            if (1 < iVar11) {
              iVar11 = 1;
            }
            if (iVar11 != 0) {
              memmove(pFVar20->Data + (longlong)(int)uVar9 * 8,
                      pFVar20->Data + (longlong)(*(int *)&pFVar20[1].Data - iVar11) * 8,
                      (longlong)iVar11 << 3);
            }
            *(int *)&pFVar20[1].Data = *(int *)&pFVar20[1].Data + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,pFVar20,*(int *)&pFVar20[1].Data,(int *)((longlong)&pFVar20[1].Data + 4))
            ;
          }
          break;
        }
      }
      uVar3 = *(undefined8 *)(lVar15 + 0x28);
      uVar9 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
      uVar4 = *(undefined8 *)(lVar15 + 0x20);
      uVar10 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
      uVar10 = uVar10 + (int)((ulonglong)uVar4 >> 0x20);
      this_00 = TMapBase<FTopLevelAssetPath,TSet<FAssetData_*,DefaultKeyFuncs<FAssetData_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FAssetData_*,DefaultKeyFuncs<FAssetData_*,0>,FDefaultSetAllocator>,0>_>
                ::FindOrAddImpl<FTopLevelAssetPath_const_&>
                          ((TMapBase<FTopLevelAssetPath,TSet<FAssetData_*,DefaultKeyFuncs<FAssetData_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FAssetData_*,DefaultKeyFuncs<FAssetData_*,0>,FDefaultSetAllocator>,0>_>
                            *)local_88,
                           uVar10 * 0x40 + uVar9 + (int)((ulonglong)uVar3 >> 0x20) +
                           (uVar10 >> 2) + 0x9e3779b9 ^ uVar10,(FTopLevelAssetPath *)(lVar15 + 0x20)
                          );
      if (*(int *)&(this_00->Elements).field_0x8 == *(int *)&(this_00->Elements).field_0x34) {
        pTVar13 = TSet<TTuple<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                          *)(*(longlong *)this + 0xf0),(FTopLevelAssetPath *)(lVar15 + 0x20));
        puVar14 = (uint *)&pTVar13->field_0x18;
        if (pTVar13 ==
            (TTuple<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_> *)0x0) {
          puVar14 = (uint *)&DAT_00000008;
        }
        uVar9 = *puVar14;
        if ((uint)(*(int *)&(this_00->Elements).field_0x8 - *(int *)&(this_00->Elements).field_0x34)
            < uVar9) {
          if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar9);
          }
          TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,uVar9);
          iVar11 = 1;
          if (3 < uVar9) {
            uVar22 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
            lVar15 = 0x3f;
            if (uVar22 != 0) {
              for (; uVar22 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            local_130 = (undefined4)lVar15;
            iVar11 = 1 << ((byte)lVar15 & 0x1f);
          }
          if ((this_00->HashSize == 0) || (this_00->HashSize < iVar11)) {
            this_00->HashSize = iVar11;
            TSet<FAssetData_*,DefaultKeyFuncs<FAssetData_*,0>,FDefaultSetAllocator>::Rehash(this_00)
            ;
          }
        }
      }
      TSet<FAssetData_*,DefaultKeyFuncs<FAssetData_*,0>,FDefaultSetAllocator>::
      Emplace<FAssetData_*_const_&>(this_00,(FAssetData **)&local_12c,(bool *)&local_120);
      uVar21 = uVar21 + 8;
      uVar22 = (ulonglong)(uVar19 + 1);
    } while ((int)(uVar19 + 1) < *(int *)((longlong)this + 0x20));
    uVar21 = (ulonglong)local_60;
  }
  uStack_100 = 0;
  local_e8 = 0;
  uVar9 = (uint)uVar21;
  uStack_fc = 1;
  uStack_ec = uStack_100;
  if (uVar9 != 0) {
    pTVar17 = pTVar1;
    if (local_68 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar17 = local_68;
    }
    uStack_fc = *(uint *)(pTVar17->AllocatorInstance).InlineData;
    local_e8 = 0;
    uStack_100 = 0;
    while (uStack_fc == 0) {
      lVar15 = (longlong)(int)uStack_100;
      local_e8 = local_e8 + 0x20;
      uStack_100 = uStack_100 + 1;
      uStack_fc = 1;
      uStack_ec = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_100)
      goto LAB_142ae19d0;
      uStack_fc = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar15 * 4 + 4);
    }
    uStack_fc = -uStack_fc & uStack_fc;
    uVar22 = (ulonglong)uStack_fc * 2 + 1;
    lVar15 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_12c._4_4_ = (int)lVar15;
    uStack_ec = local_12c._4_4_ + -1 + local_e8;
    if ((int)uVar9 < (int)uStack_ec) {
      uStack_ec = uVar9;
    }
  }
LAB_142ae19d0:
  iStack_e0 = local_88._8_4_ - local_54;
  local_108 = (longlong *)local_88;
  uStack_f0 = 0xffffffff;
  TStack_d0.CurrentBitIndex = uStack_ec;
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  TStack_d0._padding_ = CONCAT44(uStack_fc,uStack_100);
  uVar19 = uVar9 & 0xffffffe0;
  uStack_e4 = local_8c;
  iVar11 = (int)uVar9 >> 5;
  TStack_d0._28_4_ = local_8c;
  TStack_d0.BaseBitIndex = local_e8;
  uStack_b0 = CONCAT44(uStack_dc,iStack_e0);
  uVar10 = uVar9;
  local_134 = uVar9;
  local_f8 = pTVar1;
  local_d8 = local_108;
  TStack_d0.Array = pTVar1;
  if (((int)uVar9 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), uVar10 = local_60, bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar9 != uVar10) {
    pTVar17 = pTVar1;
    if (local_68 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar17 = local_68;
    }
    uVar9 = -1 << ((byte)uVar21 & 0x1f) &
            *(uint *)((pTVar17->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
    while (uVar9 == 0) {
      lVar15 = (longlong)iVar11;
      uVar19 = uVar19 + 0x20;
      iVar11 = iVar11 + 1;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) {
        uVar21 = (ulonglong)uVar10;
        local_134 = uVar10;
        goto LAB_142ae1ae0;
      }
      uVar9 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar15 * 4 + 4);
    }
    uVar22 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_124 = (int)lVar15;
    local_134 = local_124 + -1 + uVar19;
    if ((int)uVar10 < (int)local_134) {
      local_134 = uVar10;
    }
    uVar21 = (ulonglong)local_134;
  }
LAB_142ae1ae0:
  do {
    plVar6 = local_d8;
    if ((int)local_d8[1] - *(int *)((longlong)local_d8 + 0x34) != (int)uStack_b0) {
      local_138[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TSet<FAssetData_*,DefaultKeyFuncs<FAssetData_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_138);
    }
    if (((TStack_d0.CurrentBitIndex == (int)uVar21) && (TStack_d0.Array == pTVar1)) &&
       (plVar6 == (longlong *)local_88)) {
      local_40 = 0;
      if (local_48 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_48);
      }
      TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TSet<FAssetData_*,DefaultKeyFuncs<FAssetData_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TSet<FAssetData_*,DefaultKeyFuncs<FAssetData_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TSet<FAssetData_*,DefaultKeyFuncs<FAssetData_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_88);
      return;
    }
    pFVar18 = (FTopLevelAssetPath *)(*plVar6 + (longlong)TStack_d0.CurrentBitIndex * 0x68);
    pTVar13 = TSet<TTuple<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)(*(longlong *)this + 0xf0),pFVar18);
    pFVar20 = (ForAnyElementType *)&pTVar13->field_0x10;
    if (pTVar13 ==
        (TTuple<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_> *)0x0) {
      pFVar20 = (ForAnyElementType *)0x0;
    }
    local_118 = pFVar18 + 1;
    bVar7 = false;
    uVar9 = 0;
    iVar11 = *(int *)&pFVar20[1].Data;
    if (0 < iVar11) {
      lVar15 = 0;
      do {
        uVar19 = 0;
        if ((int)uVar9 < iVar11) {
          uVar19 = ~uVar9 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        bVar8 = ``FAssetRegistryState::RemoveAssetDatasImpl<FDefaultBitArrayAllocator>'::__l2::
                <lambda_2>::operator()'::__l12::<lambda_1>::operator()<FAssetData_*>
                          (&local_118,*(FAssetData **)(pFVar20->Data + lVar15));
        if (bVar8) {
          bVar7 = true;
          uVar19 = 0;
          if ((int)uVar9 < *(int *)&pFVar20[1].Data) {
            uVar19 = ~uVar9 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar11 = ~uVar9 + *(int *)&pFVar20[1].Data;
          if (1 < iVar11) {
            iVar11 = 1;
          }
          if (iVar11 != 0) {
            memmove(pFVar20->Data + (longlong)(int)uVar9 * 8,
                    pFVar20->Data + (longlong)(*(int *)&pFVar20[1].Data - iVar11) * 8,
                    (longlong)iVar11 << 3);
          }
          *(int *)&pFVar20[1].Data = *(int *)&pFVar20[1].Data + -1;
        }
        else {
          uVar9 = uVar9 + 1;
          lVar15 = lVar15 + 8;
        }
        this = local_110;
        iVar11 = *(int *)&pFVar20[1].Data;
      } while ((int)uVar9 < iVar11);
      uVar21 = (ulonglong)local_134;
      if (bVar7) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,pFVar20,iVar11,(int *)((longlong)&pFVar20[1].Data + 4));
      }
    }
    TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
  } while( true );
}

// operator() @ 142ae1d20

void __thiscall `FAssetRegistryState::Dump'::__l2::<lambda_2>::operator()(void *this)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  wchar_t *pwVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FString local_18;
  
  if (*(int *)((longlong)this + 8) == 1) {
    pFVar2 = *(ForAnyElementType **)((longlong)this + 0x20);
    pwVar3 = (wchar_t *)**(undefined8 **)this;
    pFVar7 = (FScriptContainerElement *)
             ::FString::ConstructFromPtrSize
                       (&local_18,pwVar3,(int)((*(undefined8 **)this)[1] - (longlong)pwVar3 >> 1));
    if ((pFVar2->Data <= pFVar7) &&
       (pFVar7 < pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar6 + 1;
    pFVar8 = pFVar2->Data + (longlong)iVar6 * 0x10;
    *(undefined8 *)pFVar8 = 0;
    *(undefined8 *)pFVar8 = *(undefined8 *)pFVar7;
    *(undefined8 *)pFVar7 = 0;
    *(undefined4 *)(pFVar8 + 8) = *(undefined4 *)(pFVar7 + 8);
    *(undefined4 *)(pFVar8 + 0xc) = *(undefined4 *)(pFVar7 + 0xc);
    *(undefined8 *)(pFVar7 + 8) = 0;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    (*(undefined8 **)this)[1] = **(undefined8 **)this;
    return;
  }
  **(int **)((longlong)this + 0x10) = **(int **)((longlong)this + 0x10) + 1;
  if ((*(int *)((longlong)this + 8) != 0) &&
     (*(int *)((longlong)this + 8) <= **(int **)((longlong)this + 0x10))) {
    __l2::<lambda_1>::operator()(*(void **)((longlong)this + 0x18),false);
    return;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(*(TStringBuilderBase<wchar_t> **)this,L"\r\n",2);
  return;
}

// operator() @ 142ae1e80

void __thiscall
`FAssetRegistryState::GetAllocatedSize'::__l2::<lambda_2>::operator()
          (void *this,FAssetData *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FAssetBundleData *pFVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  **(longlong **)this = **(longlong **)this + 0x68;
  FAssetDataTagMapSharedView::FMemoryCounter::Include
            (*(FMemoryCounter **)((longlong)this + 8),&param_1->TagsAndValues);
  if ((param_1->TaggedAssetBundles).Object != (FAssetBundleData *)0x0) {
    **(longlong **)((longlong)this + 0x20) = **(longlong **)((longlong)this + 0x20) + 0x10;
    if (((param_1->TaggedAssetBundles).Object == (FAssetBundleData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    **(longlong **)((longlong)this + 0x20) =
         **(longlong **)((longlong)this + 0x20) +
         (longlong)(((param_1->TaggedAssetBundles).Object)->Bundles).ArrayMax * 0x18;
    if (((param_1->TaggedAssetBundles).Object == (FAssetBundleData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    **(longlong **)((longlong)this + 0x10) =
         **(longlong **)((longlong)this + 0x10) +
         (longlong)(((param_1->TaggedAssetBundles).Object)->Bundles).ArrayNum;
    if (((param_1->TaggedAssetBundles).Object == (FAssetBundleData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (param_1->TaggedAssetBundles).Object;
    iVar2 = (pFVar3->Bundles).ArrayNum;
    pFVar6 = (pFVar3->Bundles).AllocatorInstance.Data;
    pFVar1 = pFVar6 + (longlong)iVar2 * 0x18;
    while( true ) {
      if ((pFVar3->Bundles).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FAssetBundleEntry,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar6 == pFVar1) break;
      **(longlong **)((longlong)this + 0x20) =
           **(longlong **)((longlong)this + 0x20) + (longlong)*(int *)(pFVar6 + 0x14) * 0x10;
      **(longlong **)((longlong)this + 0x28) =
           **(longlong **)((longlong)this + 0x28) + (longlong)*(int *)(pFVar6 + 0x10);
      pFVar6 = pFVar6 + 0x18;
    }
  }
  return;
}

// operator() @ 142ae1fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FAssetRegistryState::InitializeFromExisting'::__l2::<lambda_2>::operator()(void *this,int param_1)

{
  int iVar1;
  undefined8 *puVar2;
  FAssetData *this_00;
  longlong *plVar3;
  FAssetDataTagMap *pFVar4;
  FAssetRegistrySerializationOptions *pFVar5;
  undefined8 *puVar6;
  int *piVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  BOOL BVar13;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar14;
  FAssetData *this_01;
  FAssetData *pFVar15;
  FAssetDataTagMapSharedView *pFVar16;
  undefined8 *puVar17;
  longlong lVar18;
  bool bVar19;
  longlong lVar20;
  undefined1 auStack_2e8 [32];
  longlong local_2c8;
  longlong local_2c0;
  FAssetDataTagMapSharedView_u_0 local_2b8;
  TSharedPtr<FAssetBundleData,1> local_2b0;
  FAssetDataTagMap local_2a0;
  wchar_t *local_288;
  int iStack_280;
  undefined4 uStack_27c;
  TStringView<wchar_t> local_278;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_2e8;
  lVar18 = (longlong)param_1;
  local_2b8.Bits._0_4_ = 0;
  bVar10 = TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
           ::IsValidId(*(TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
                         **)((longlong)this + 0x18),(FSetElementId)param_1);
  if (!bVar10) {
    return;
  }
  this_00 = *(FAssetData **)(**(longlong **)((longlong)this + 0x18) + lVar18 * 0x10);
  if (this_00 == (FAssetData *)0x0) {
    return;
  }
  lVar20 = 0;
  if (*(int *)this != 0) {
    plVar3 = *(longlong **)((longlong)this + 0x20);
    iVar1 = (int)plVar3[1];
    uVar12 = 0;
    if (param_1 < iVar1) {
      uVar12 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (local_2c8 = lVar18, local_2c0 = (longlong)iVar1,
       bVar10 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar20 = *(longlong *)(*plVar3 + lVar18 * 8);
  }
  if (*(int *)this == 1) {
    if (lVar20 == 0) {
      return;
    }
  }
  else if ((*(int *)this == 3) && (lVar20 != 0)) {
    return;
  }
  bVar19 = true;
  bVar10 = false;
  if (*(char *)(*(longlong *)((longlong)this + 8) + 6) != '\0') {
    bVar9 = true;
    if ((*(byte *)&(this_00->TagsAndValues).field0_0x0 & 1) == 0) {
      pFVar4 = (this_00->TagsAndValues).field0_0x0.Loose;
      if (pFVar4 != (FAssetDataTagMap *)0x0) {
        uVar12 = (uint)pFVar4->_padding_;
        goto LAB_142ae2109;
      }
    }
    else {
      uVar12 = (uint)(this_00->TagsAndValues).field0_0x0.Fixed.Num;
LAB_142ae2109:
      bVar10 = false;
      if (uVar12 != 0) goto LAB_142ae2172;
    }
    local_268.Base = local_248;
    local_268.bIsDynamic = false;
    local_268.bIsExternal = false;
    local_268.CurPos = local_248;
    local_268.End = (wchar_t *)local_48;
    ::FName::AppendString(&this_00->PackageName,&local_268);
    local_288 = local_268.Base;
    iStack_280 = (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1);
    local_278._12_4_ = uStack_27c;
    local_278.Size = iStack_280;
    local_278.DataPtr = local_268.Base;
    bVar11 = FPackageName::IsLocalizedPackage(&local_278);
    bVar10 = bVar19;
    if (!bVar11) goto LAB_142ae2178;
  }
LAB_142ae2172:
  bVar19 = bVar10;
  bVar9 = false;
LAB_142ae2178:
  if (bVar19) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  }
  if (!bVar9) {
    pFVar5 = *(FAssetRegistrySerializationOptions **)((longlong)this + 8);
    pFVar15 = (FAssetData *)0x0;
    local_2a0._padding_ = 0;
    local_2a0._padding_ = 0;
    local_2a0.RefCount.Counter = 0;
    pTVar14 = TMapBase<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
              ::Find((TMapBase<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
                      *)&pFVar5->CookFilterlistTagsByClass,&this_00->AssetClassPath);
    FAssetRegistryState::FilterTags(&this_00->TagsAndValues,&local_2a0,pTVar14,pFVar5);
    FAssetRegistryState::FilterBundles
              (&local_2b0,&this_00->TaggedAssetBundles,
               *(FAssetRegistrySerializationOptions **)((longlong)this + 8));
    this_01 = ::operator_new(0x68);
    if (this_01 != (FAssetData *)0x0) {
      pFVar15 = FAssetData::FAssetData(this_01,this_00);
    }
    pFVar16 = FAssetDataTagMapSharedView::FAssetDataTagMapSharedView
                        ((FAssetDataTagMapSharedView *)&local_2b8.Fixed,&local_2a0);
    FAssetDataTagMapSharedView::operator=(&pFVar15->TagsAndValues,pFVar16);
    FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView
              ((FAssetDataTagMapSharedView *)&local_2b8.Fixed);
    if (&pFVar15->TaggedAssetBundles != &local_2b0) {
      (pFVar15->TaggedAssetBundles).Object = local_2b0.Object;
      local_2b0.Object = (FAssetBundleData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pFVar15->TaggedAssetBundles).SharedReferenceCount,&local_2b0.SharedReferenceCount
                );
    }
    puVar6 = *(undefined8 **)((longlong)this + 0x10);
    puVar17 = FMemory::Malloc(0x18,8);
    *puVar17 = 0;
    puVar17[1] = pFVar15;
    puVar17[2] = lVar20;
    LOCK();
    puVar2 = (undefined8 *)*puVar6;
    *puVar6 = puVar17;
    UNLOCK();
    *puVar2 = puVar17;
    piVar7 = *(int **)((longlong)this + 0x28);
    LOCK();
    iVar1 = *piVar7;
    *piVar7 = *piVar7 + 1;
    UNLOCK();
    if (iVar1 == *(int *)((longlong)this + 0x30)) {
      **(undefined4 **)((longlong)this + 0x28) = 0;
      BVar13 = TryEnterCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x40));
      if (BVar13 != 0) {
        __l2::<lambda_1>::operator()(*(void **)((longlong)this + 0x38));
        LeaveCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x40));
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2b0.SharedReferenceCount.ReferenceController);
    DestructItems<TTuple<FName,FString>,int>
              ((TTuple<FName,FString> *)local_2a0._padding_,(int)local_2a0._padding_);
    if ((TTuple<FName,FString> *)local_2a0._padding_ != (TTuple<FName,FString> *)0x0) {
      FMemory::Free((void *)local_2a0._padding_);
    }
  }
  return;
}

// operator() @ 142ae2310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FAssetRegistryState::InitializeFromExistingAndPrune'::__l2::<lambda_2>::operator()
          (void *this,int param_1)

{
  FName *this_00;
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  TTuple<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
  *pTVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStack_2c8 [32];
  longlong local_2a8;
  longlong local_2a0;
  undefined4 local_298;
  wchar_t *local_288;
  int iStack_280;
  undefined4 uStack_27c;
  TStringView<wchar_t> local_278;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_2c8;
  uVar7 = 0;
  puVar8 = (undefined1 *)0x0;
  lVar9 = (longlong)param_1;
  local_298 = 0;
  if ((((param_1 < 0) || (*(int *)(*(longlong *)this + 0x1e8) <= param_1)) ||
      (bVar4 = TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::IsAllocated((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              *)(*(longlong *)this + 0x1e0),param_1), !bVar4)) ||
     (this_00 = (FName *)(*(longlong *)(*(longlong *)this + 0x1e0) + lVar9 * 0x18),
     *(longlong *)(*(longlong *)(*(longlong *)this + 0x1e0) + 8 + lVar9 * 0x18) == 0))
  goto LAB_142ae2457;
  pTVar5 = TSet<TTuple<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
                   *)(*(longlong *)((longlong)this + 0x10) + 0x50),*this_00);
  puVar6 = &pTVar5->field_0x8;
  if (pTVar5 == (TTuple<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                 *)0x0) {
    puVar6 = puVar8;
  }
  if (puVar6 == (undefined1 *)0x0) {
    local_268.Base = local_248;
    local_268.bIsDynamic = false;
    local_268.bIsExternal = false;
    local_268.CurPos = local_248;
    local_268.End = (wchar_t *)local_48;
    ::FName::AppendString(this_00,&local_268);
    puVar8 = &DAT_00000001;
    local_288 = local_268.Base;
    iStack_280 = (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1);
    local_278._12_4_ = uStack_27c;
    local_278.Size = iStack_280;
    local_278.DataPtr = local_268.Base;
    bVar4 = FPackageName::IsScriptPackage(&local_278);
    if (bVar4) goto LAB_142ae2437;
    bVar4 = false;
  }
  else {
LAB_142ae2437:
    bVar4 = true;
  }
  if (puVar8 != (undefined1 *)0x0) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  }
  if (bVar4) {
    uVar7 = 1;
  }
LAB_142ae2457:
  plVar2 = *(longlong **)((longlong)this + 8);
  iVar1 = (int)plVar2[1];
  local_2a0 = (longlong)iVar1;
  uVar10 = 0;
  if (param_1 < iVar1) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (local_2a8 = lVar9,
     bVar4 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar4
     )) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(undefined1 *)(lVar9 + *plVar2) = uVar7;
  return;
}

// operator() @ 142ae2500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `FAssetRegistryState::Prune'::__l2::<lambda_2>::operator()(void *this,int param_1)

{
  longlong lVar1;
  FAssetIdentifier *this_00;
  FName FVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_268 [32];
  TStringView<wchar_t> local_248;
  TStringBuilderBase<wchar_t> local_238;
  FScriptContainerElement local_218 [512];
  ulonglong local_18 [2];
  
  if (-1 < param_1) {
    local_18[0] = __security_cookie.value ^ (ulonglong)auStack_268;
    if ((param_1 < ((*(TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       **)this)->Data).ArrayNum) &&
       (bVar4 = TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::IsAllocated(*(TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                **)this,param_1), bVar4)) {
      lVar1 = **(longlong **)this + (longlong)param_1 * 0x18;
      this_00 = *(FAssetIdentifier **)(**(longlong **)this + (longlong)param_1 * 0x18);
      if (this_00->ValueName == (FName)0x0) {
        FVar2 = (this_00->PrimaryAssetType).Name;
        if (FVar2 == (FName)0x0) {
          if ((this_00->PackageName != (FName)0x0) && (this_00->ObjectName == (FName)0x0)) {
            local_238.Base = (wchar_t *)local_218;
            local_238.bIsDynamic = false;
            local_238.bIsExternal = false;
            local_238.CurPos = (wchar_t *)local_218;
            local_238.End = (wchar_t *)local_18;
            ::FName::AppendString(&this_00->PackageName,&local_238);
            local_248.Size = (int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1);
            local_248.DataPtr = local_238.Base;
            bVar4 = FPackageName::IsScriptPackage(&local_248);
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
            *(byte *)(lVar1 + 8) = *(byte *)(lVar1 + 8) | bVar4;
            return;
          }
        }
        else {
          local_248.DataPtr = (wchar_t *)0x0;
          if ((FVar2 != (FName)0x0) && (this_00->ObjectName != (FName)0x0)) {
            lVar3 = *(longlong *)((longlong)this + 0x10);
            if (*(char *)(lVar3 + 0x240) != '\0') {
              uVar5 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
              if (*(int *)(lVar3 + 0x250) != *(int *)(lVar3 + 0x27c)) {
                lVar7 = *(longlong *)(lVar3 + 0x288);
                if (*(longlong *)(lVar3 + 0x288) == 0) {
                  lVar7 = lVar3 + 0x280;
                }
                iVar6 = *(int *)(lVar7 + (ulonglong)
                                         (*(int *)(lVar3 + 0x290) - 1U & FVar2.Number + uVar5) * 4);
                if (iVar6 != -1) {
                  do {
                    if (*(FName *)(*(longlong *)(lVar3 + 0x248) + (longlong)iVar6 * 0x10) == FVar2)
                    goto LAB_142ae261b;
                    iVar6 = *(int *)(*(longlong *)(lVar3 + 0x248) + 8 + (longlong)iVar6 * 0x10);
                  } while (iVar6 != -1);
                }
              }
              *(undefined1 *)(lVar1 + 8) = *(undefined1 *)(lVar1 + 8);
              return;
            }
LAB_142ae261b:
            *(byte *)(lVar1 + 8) = *(byte *)(lVar1 + 8) | 1;
            return;
          }
          if (2 < (byte)LogAssetRegistry._0_1_) {
            FAssetIdentifier::ToString(this_00,(FString *)&local_248);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
            if (local_248.DataPtr != (wchar_t *)0x0) {
              FMemory::Free(local_248.DataPtr);
            }
          }
        }
        *(undefined1 *)(lVar1 + 8) = 0;
      }
      else {
        *(bool *)(lVar1 + 8) = *(char *)(*(longlong *)((longlong)this + 8) + 8) == '\0';
      }
    }
  }
  return;
}

// operator() @ 142ae2720

void __thiscall `FAssetRegistryState::RemoveDependsNodes'::__l2::<lambda_2>::operator()(void *this)

{
  <lambda_1> local_res8;
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> local_48;
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *local_38;
  undefined8 local_30;
  TArrayView<std::nullptr_t,int> local_28;
  code *local_18;
  undefined8 **local_10;
  
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  TMapBase<FDependsNode_*,TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDependsNode_*,TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            (*(TMapBase<FDependsNode_*,TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDependsNode_*,TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>,0>_>
               **)this,&local_48);
  local_38 = &local_48;
  local_30 = *(undefined8 *)this;
  local_28.DataPtr = (void **)0x0;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<``FAssetRegistryState::RemoveDependsNodes'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void,int>
             ::Call;
  local_10 = (undefined8 **)&local_38;
  local_28.ArrayNum = 0;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"RemoveDependsNode_RemoveReferencerParallel",local_48.ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&local_18,local_res8,Unbalanced,&local_28);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 142ae27e0

void __thiscall `FAssetRegistryState::SetAssetDatas'::__l2::<lambda_2>::operator()(void *this)

{
  FName FVar1;
  longlong lVar2;
  ForElementType<FAssetData_*> FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ForElementType<FAssetData_*> FVar8;
  ForElementType<FAssetData_*> FVar9;
  FName *pFVar10;
  FName *pFVar11;
  FName *local_18 [2];
  
  TSet<TTuple<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
  ::Empty((TSet<TTuple<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
           *)(*(longlong *)this + 0x50),*(int *)(*(longlong *)((longlong)this + 8) + 8));
  pFVar11 = (FName *)**(longlong **)((longlong)this + 8);
  pFVar10 = pFVar11 + (longlong)(int)(*(longlong **)((longlong)this + 8))[1] * 0xd;
  do {
    if (pFVar11 == pFVar10) {
      return;
    }
    FVar1 = *pFVar11;
    lVar2 = *(longlong *)this;
    uVar6 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    FVar8 = (ForElementType<FAssetData_*>)
            TMapBase<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
            ::FindOrAddImpl<FName_const_&>
                      ((TMapBase<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
                        *)(lVar2 + 0x50),uVar6 + FVar1.Number,pFVar11);
    FVar3 = *(ForElementType<FAssetData_*> *)((longlong)FVar8 + 8);
    FVar9 = FVar8;
    if (FVar3 != (ForElementType<FAssetData_*>)0x0) {
      FVar9 = FVar3;
    }
    local_18[0] = pFVar11;
    if ((ulonglong)FVar9 <= local_18) {
      FVar9 = FVar8;
      if (FVar3 != (ForElementType<FAssetData_*>)0x0) {
        FVar9 = FVar3;
      }
      if ((local_18 < (FName **)((longlong)FVar9 + (longlong)*(int *)((longlong)FVar8 + 0x14) * 8))
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar7 = *(int *)((longlong)FVar8 + 0x10);
    if (iVar7 == *(int *)((longlong)FVar8 + 0x14)) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FAssetData_*>_>
                        (0x808,(ForElementType<FAssetData_*> *)FVar8,(int *)((longlong)FVar8 + 0x14)
                        );
    }
    *(int *)((longlong)FVar8 + 0x10) = iVar7 + 1;
    if (*(ForElementType<FAssetData_*> *)((longlong)FVar8 + 8) != (ForElementType<FAssetData_*>)0x0)
    {
      FVar8 = *(ForElementType<FAssetData_*> *)((longlong)FVar8 + 8);
    }
    pFVar11 = pFVar11 + 0xd;
    *(FName **)((longlong)FVar8 + (longlong)iVar7 * 8) = local_18[0];
  } while( true );
}

// operator() @ 142ae3960

void __thiscall
`FAssetRegistryState::EnumerateAllMutableAssets'::__l26::<lambda_2>::operator()
          (void *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar3 = TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>::
          IsValidId(*(TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
                      **)this,(FSetElementId)param_1);
  if (bVar3) {
    lVar1 = *(longlong *)(**(longlong **)this + (longlong)param_1 * 0x10);
    if ((lVar1 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("AssetData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistryState.cpp"
                           ,0x706,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((*(char *)((longlong)this + 0x14) == '\0') &&
       (bVar3 = UE::AssetRegistry::FFiltering::ShouldSkipAsset
                          ((FTopLevelAssetPath *)(lVar1 + 0x20),*(uint *)(lVar1 + 0x34)), bVar3)) {
      return;
    }
    (*(code *)**(undefined8 **)((longlong)this + 8))
              ((*(undefined8 **)((longlong)this + 8))[1],lVar1);
  }
  return;
}

// operator() @ 142ae39f0

int __thiscall
`FAssetRegistryState::Save'::__l26::<lambda_2>::operator()
          (void *this,FDependsNode *param_1,bool param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  longlong *plVar6;
  
  if (!param_2) {
    param_1 = FAssetRegistryState::ResolveRedirector
                        (*(FAssetRegistryState **)this,param_1,
                         &(*(FAssetRegistryState **)this)->CachedAssets,
                         *(TMap<FDependsNode_*,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDependsNode_*,FDependsNode_*,0>_>
                           **)((longlong)this + 8));
  }
  if (param_1 != (FDependsNode *)0x0) {
    plVar2 = *(longlong **)((longlong)this + 0x10);
    uVar4 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
      plVar6 = (longlong *)plVar2[8];
      if ((longlong *)plVar2[8] == (longlong *)0x0) {
        plVar6 = plVar2 + 7;
      }
      iVar3 = *(int *)((longlong)plVar6 +
                      (ulonglong)((int)plVar2[9] - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
      if (iVar3 != -1) {
        do {
          lVar1 = *plVar2 + (longlong)iVar3 * 0x18;
          if (*(FDependsNode **)(*plVar2 + (longlong)iVar3 * 0x18) == param_1) {
            piVar5 = (int *)(lVar1 + 8);
            if (lVar1 == 0) {
              piVar5 = (int *)0x0;
            }
            if (piVar5 == (int *)0x0) {
              return -1;
            }
            return *piVar5;
          }
          iVar3 = *(int *)(lVar1 + 0x10);
        } while (iVar3 != -1);
      }
    }
  }
  return -1;
}

// operator() @ 142ae3ad0

void __thiscall
`FAssetRegistryState::RemoveAssetDatasImpl<FDefaultBitArrayAllocator>'::__l2::<lambda_3>::operator()
          (void *this)

{
  FName *pFVar1;
  uint *puVar2;
  TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator> *this_00;
  code *pcVar3;
  FName FVar4;
  FName FVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  FCachedAssetKey local_28;
  
  iVar9 = *(int *)((longlong)this + 0x10);
  uVar12 = 0;
  if (0 < iVar9) {
    uVar11 = 1;
    lVar13 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar12 < iVar9) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = *(TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
                  **)this;
      pFVar1 = (FName *)(*(longlong *)((longlong)this + 8) + lVar13);
      FVar4 = *pFVar1;
      FVar5 = pFVar1[1];
      local_28.OuterPath = FVar4;
      local_28.ObjectName = FVar5;
      if (*(int *)&(this_00->Elements).field_0x8 == *(int *)&(this_00->Elements).field_0x34) {
        iVar9 = 0;
      }
      else {
        uVar7 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
        uVar8 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
        uVar8 = uVar8 + FVar4.Number;
        iVar9 = TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
                ::RemoveImpl<UE::AssetRegistry::Private::FCachedAssetKey>
                          (this_00,(uVar8 >> 2) + uVar8 * 0x40 + uVar7 + FVar5.Number + -0x61c88647
                                   ^ uVar8,&local_28);
      }
      lVar10 = *(longlong *)((longlong)this + 0x18);
      if ((((int)uVar12 < 0) || (*(int *)(lVar10 + 0x18) <= (int)uVar12)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(longlong *)(lVar10 + 0x10) != 0) {
        lVar10 = *(longlong *)(lVar10 + 0x10);
      }
      uVar7 = uVar12;
      if ((int)uVar12 < 0) {
        uVar7 = uVar12 + 0x1f;
      }
      uVar8 = *(uint *)(lVar10 + (longlong)((int)uVar7 >> 5) * 4);
      puVar2 = (uint *)(lVar10 + (longlong)((int)uVar7 >> 5) * 4);
      if (iVar9 < 1) {
        *puVar2 = ~uVar11 & uVar8;
      }
      else {
        *puVar2 = uVar11 | uVar8;
        *(int *)(*(longlong *)this + 0x260) = *(int *)(*(longlong *)this + 0x260) + -1;
      }
      iVar9 = *(int *)((longlong)this + 0x10);
      uVar12 = uVar12 + 1;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      lVar13 = lVar13 + 0x10;
    } while ((int)uVar12 < iVar9);
  }
  return;
}

// operator() @ 142ae3c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
`FAssetRegistryState::InitializeFromExistingAndPrune'::__l2::<lambda_3>::operator()
          (void *this,int param_1)

{
  FDependsNode *this_00;
  FDependsNode *this_01;
  code *pcVar1;
  code *pcVar2;
  bool bVar3;
  code **ppcVar4;
  undefined1 auStack_88 [32];
  FDependencyQuery local_68;
  code *local_48 [2];
  code *local_38 [3];
  code **local_20;
  ulonglong local_18;
  
  if (-1 < param_1) {
    local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
    if ((param_1 < ((*(TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       **)this)->Data).ArrayNum) &&
       (bVar3 = TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::IsAllocated(*(TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                **)this,param_1), bVar3)) {
      this_00 = *(FDependsNode **)(**(longlong **)this + (longlong)param_1 * 0x18);
      this_01 = *(FDependsNode **)(**(longlong **)this + 8 + (longlong)param_1 * 0x18);
      FDependsNode::Reserve(this_01,this_00);
      FDependsNode::SetIsDependencyListSorted(this_01,All,false);
      FDependsNode::SetIsReferencersSorted(this_01,false);
      pcVar1 = *(code **)this;
      pcVar2 = *(code **)((longlong)this + 8);
      local_68.RequiredUnions.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0;
      local_68.RequiredUnions.ArrayNum = 0;
      local_68.Required = None;
      local_68.Excluded = None;
      local_48[0] = (code *)0x0;
      local_68.RequiredUnions.ArrayMax = 1;
      local_20 = FMemory::Malloc(0x28,8);
      *local_20 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<``FAssetRegistryState::InitializeFromExistingAndPrune'::`2'::<lambda_3>::operator()'::`5'::<lambda_1>,1,1>
                           ::_vftable_;
      local_20[1] = (code *)this_00;
      local_20[2] = (code *)this_01;
      local_20[3] = pcVar1;
      local_20[4] = pcVar2;
      if (local_20 + 1 != (code **)0x0) {
        local_48[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<``FAssetRegistryState::InitializeFromExistingAndPrune'::__l2::<lambda_3>::operator()'::__l5::<lambda_1>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
                      ::Call;
      }
      FDependsNode::IterateOverDependencies
                (this_00,(TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
                          *)local_48,All,&local_68);
      if (local_48[0] != (code *)0x0) {
        ppcVar4 = local_48 + 2;
        if (local_20 != (code **)0x0) {
          ppcVar4 = local_20;
        }
        (**(code **)(*ppcVar4 + 0x10))();
      }
      if (local_68.RequiredUnions.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
        FMemory::Free((void *)local_68.RequiredUnions.AllocatorInstance.SecondaryData);
      }
      bVar3 = FDependsNode::IsScriptDependenciesInitialized(this_00);
      FDependsNode::SetIsScriptDependenciesInitialized(this_01,bVar3);
      FDependsNode::SetIsDependencyListSorted(this_01,All,true);
    }
  }
  return;
}

// operator() @ 142ae3e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall `FAssetRegistryState::Prune'::__l2::<lambda_3>::operator()(void *this,int param_1)

{
  undefined8 *puVar1;
  FDependsNode *this_00;
  bool bVar2;
  int iVar3;
  undefined ***pppuVar4;
  undefined1 auStack_68 [32];
  code *local_48 [2];
  undefined **local_38;
  longlong *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  if (-1 < param_1) {
    local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
    if ((param_1 < ((*(TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       **)this)->Data).ArrayNum) &&
       (bVar2 = TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::IsAllocated(*(TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                **)this,param_1), bVar2)) {
      local_30 = *(longlong **)this;
      puVar1 = (undefined8 *)(*local_30 + (longlong)param_1 * 0x18);
      if (*(char *)(*local_30 + 8 + (longlong)param_1 * 0x18) != '\0') {
        this_00 = (FDependsNode *)*puVar1;
        local_38 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<``FAssetRegistryState::Prune'::`2'::<lambda_3>::operator()'::`8'::<lambda_1>,1,0>
                    ::_vftable_;
        local_48[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<``FAssetRegistryState::Prune'::__l2::<lambda_3>::operator()'::__l8::<lambda_1>,bool,FDependsNode_const_*>
                      ::Call;
        local_20 = (undefined ***)0x0;
        FDependsNode::RemoveLinks
                  (this_00,(TUniqueFunction<bool___cdecl(FDependsNode_const_*)> *)local_48);
        if (local_48[0] != (code *)0x0) {
          pppuVar4 = &local_38;
          if (local_20 != (undefined ***)0x0) {
            pppuVar4 = local_20;
          }
          (*(code *)(*pppuVar4)[2])();
        }
        iVar3 = FDependsNode::GetConnectionCount(this_00);
        if (iVar3 == 0) {
          *(undefined1 *)(puVar1 + 1) = 0;
        }
      }
    }
  }
  return;
}

// operator() @ 142ae3ef0

void __thiscall `FAssetRegistryState::SetAssetDatas'::__l2::<lambda_3>::operator()(void *this)

{
  undefined8 uVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *pTVar8;
  TSet<TTuple<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *this_00;
  longlong lVar9;
  longlong lVar10;
  longlong local_28 [2];
  
  lVar9 = *(longlong *)this;
  this_00 = (TSet<TTuple<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             *)(lVar9 + 0xa0);
  bVar5 = 1 < *(int *)(lVar9 + 0xe8);
  if (!bVar5) {
    TSet<TTuple<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)(lVar9 + 0xa8));
  *(undefined4 *)(lVar9 + 0xa8) = 0;
  if (*(int *)(lVar9 + 0xac) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)(lVar9 + 0xac));
  }
  *(undefined4 *)(lVar9 + 0xd0) = 0xffffffff;
  *(undefined4 *)(lVar9 + 0xd4) = 0;
  *(undefined4 *)(lVar9 + 200) = 0;
  if ((*(int *)(lVar9 + 0xcc) < 0) || (0x80 < *(int *)(lVar9 + 0xcc))) {
    *(undefined4 *)(lVar9 + 0xcc) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(lVar9 + 0xb0),0);
  }
  if (bVar5) {
    *(undefined4 *)(lVar9 + 0xe8) = 1;
    TSet<TTuple<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Rehash(this_00);
  }
  lVar9 = **(longlong **)((longlong)this + 8);
  lVar10 = (longlong)(int)(*(longlong **)((longlong)this + 8))[1] * 0x68 + lVar9;
  while( true ) {
    if (lVar9 == lVar10) {
      ShrinkMultimap<FName,FAssetData_*>
                ((TMap<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>
                  *)(*(longlong *)this + 0xa0));
      return;
    }
    uVar1 = *(undefined8 *)(lVar9 + 8);
    lVar2 = *(longlong *)this;
    uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
    pTVar8 = TMapBase<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>
             ::FindOrAddImpl<FName_const_&>
                       ((TMapBase<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>
                         *)(lVar2 + 0xa0),uVar6 + (int)((ulonglong)uVar1 >> 0x20),
                        (FName *)(lVar9 + 8));
    pFVar3 = (pTVar8->AllocatorInstance).Data;
    local_28[0] = lVar9;
    if (((pFVar3 <= (FScriptContainerElement *)local_28) &&
        ((FScriptContainerElement *)local_28 < pFVar3 + (longlong)pTVar8->ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) break;
    iVar7 = pTVar8->ArrayNum;
    if (iVar7 == pTVar8->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
    }
    pTVar8->ArrayNum = iVar7 + 1;
    lVar9 = lVar9 + 0x68;
    *(longlong *)((pTVar8->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_28[0];
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// operator() @ 142ae40d0

void __thiscall `FAssetRegistryState::RemoveDependsNodes'::__l16::<lambda_3>::operator()(void *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  FDependsNode *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  int iVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  plVar4 = *(longlong **)this;
  iVar12 = 0;
  iVar3 = (int)plVar4[5];
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar4 + 2);
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    pTVar13 = (TBitArray<FDefaultBitArrayAllocator> *)plVar4[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar4[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar13 = pTVar1;
    }
    uVar11 = *(uint *)(pTVar13->AllocatorInstance).InlineData;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_142ae416d;
      uVar11 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar9 * 4 + 4);
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar8 = local_res10 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_142ae416d:
  uVar11 = *(uint *)(plVar4 + 5);
  uVar10 = uVar11 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar7,iVar12);
  TStack_50.CurrentBitIndex = iVar8;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_50._28_4_ = iVar8;
  TStack_50.BaseBitIndex = iVar14;
  uStack_30 = CONCAT44(uStack_5c,(int)plVar4[1] - *(int *)((longlong)plVar4 + 0x34));
  TStack_50.Array = pTVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)(plVar4 + 5);
  if (uVar11 != uVar7) {
    pTVar13 = (TBitArray<FDefaultBitArrayAllocator> *)plVar4[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar4[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar13 = pTVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) &
             *(uint *)((pTVar13->AllocatorInstance).InlineData + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_142ae4270;
      uVar11 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_142ae4270:
  while( true ) {
    if ((int)plVar4[1] - *(int *)((longlong)plVar4 + 0x34) != (int)uStack_30) {
      `TSparseArray<TSparseSetElement<FDependsNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar11) && (TStack_50.Array == pTVar1)) break;
    this_00 = *(FDependsNode **)(*plVar4 + (longlong)TStack_50.CurrentBitIndex * 0x10);
    if (this_00 != (FDependsNode *)0x0) {
      FDependsNode::~FDependsNode(this_00);
      ::operator_delete(this_00,0xa8);
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// operator() @ 142ae45b0

bool __thiscall
`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_4>::operator()
          (void *this,FSortData *param_1,FSortData *param_2)

{
  uchar *_Str1;
  int iVar1;
  
  iVar1 = strcmp((char *)param_1->PackageName,(char *)param_2->PackageName);
  if (iVar1 == 0) {
    iVar1 = ::FName::Compare(&param_1->AssetName,&param_2->AssetName);
    if (iVar1 == 0) {
      _Str1 = param_1->SubPath;
      if ((_Str1 == (uchar *)0x0) != (param_2->SubPath == (uchar *)0x0)) {
        return _Str1 == (uchar *)0x0;
      }
      if (_Str1 != (uchar *)0x0) {
        iVar1 = strcmp((char *)_Str1,(char *)param_2->SubPath);
        if (iVar1 != 0) goto LAB_142ae45d1;
      }
      return false;
    }
  }
LAB_142ae45d1:
  return SUB41((uint)iVar1 >> 0x1f,0);
}

// operator() @ 142ae4650

void __thiscall `FAssetRegistryState::SetAssetDatas'::__l2::<lambda_4>::operator()(void *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ushort uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  longlong *plVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *pTVar16;
  FNumberedPair *pFVar17;
  TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator> *this_00;
  int iVar18;
  TSet<TTuple<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *this_01;
  TSet<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  *this_02;
  FName FVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  undefined1 local_res10 [8];
  FTopLevelAssetPath local_res18;
  longlong local_118;
  longlong local_110;
  FName local_108;
  ulonglong uStack_100;
  FName local_f8;
  FValueId local_f0;
  longlong *local_e8;
  int iStack_e0;
  uint uStack_dc;
  TBitArray<FDefaultBitArrayAllocator> *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  FName local_88;
  ulonglong uStack_80;
  FNumberedPair local_78 [3];
  undefined4 local_4c;
  
  lVar23 = *(longlong *)this;
  this_01 = (TSet<TTuple<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             *)(lVar23 + 0xf0);
  bVar11 = 1 < *(int *)(lVar23 + 0x138);
  if (!bVar11) {
    TSet<TTuple<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::UnhashElements(this_01);
  }
  TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_01,0,*(int *)(lVar23 + 0xf8));
  *(undefined4 *)(lVar23 + 0xf8) = 0;
  if (*(int *)(lVar23 + 0xfc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this_01,0,(int *)(lVar23 + 0xfc));
  }
  *(undefined4 *)(lVar23 + 0x120) = 0xffffffff;
  *(undefined4 *)(lVar23 + 0x124) = 0;
  *(undefined4 *)(lVar23 + 0x118) = 0;
  if ((*(int *)(lVar23 + 0x11c) < 0) || (0x80 < *(int *)(lVar23 + 0x11c))) {
    *(undefined4 *)(lVar23 + 0x11c) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(lVar23 + 0x100),0);
  }
  if (bVar11) {
    *(undefined4 *)(lVar23 + 0x138) = 1;
    TSet<TTuple<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Rehash(this_01);
  }
  lVar23 = **(longlong **)((longlong)this + 8);
  lVar22 = (longlong)(int)(*(longlong **)((longlong)this + 8))[1] * 0x68 + lVar23;
  for (; lVar23 != lVar22; lVar23 = lVar23 + 0x68) {
    uVar5 = *(undefined8 *)(lVar23 + 0x28);
    lVar6 = *(longlong *)this;
    uVar12 = ::GetTypeHash((FNameEntryId)(uint)uVar5);
    uVar7 = *(undefined8 *)(lVar23 + 0x20);
    uVar13 = ::GetTypeHash((FNameEntryId)(uint)uVar7);
    uVar13 = uVar13 + (int)((ulonglong)uVar7 >> 0x20);
    pTVar16 = TMapBase<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>
              ::FindOrAddImpl<FTopLevelAssetPath_const_&>
                        ((TMapBase<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>
                          *)(lVar6 + 0xf0),
                         (uVar13 >> 2) +
                         uVar13 * 0x40 + -0x61c88647 + uVar12 + (int)((ulonglong)uVar5 >> 0x20) ^
                         uVar13,(FTopLevelAssetPath *)(lVar23 + 0x20));
    pFVar8 = (pTVar16->AllocatorInstance).Data;
    local_118 = lVar23;
    if (((pFVar8 <= (FScriptContainerElement *)&local_118) &&
        ((FScriptContainerElement *)&local_118 < pFVar8 + (longlong)pTVar16->ArrayMax * 8)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar14 = pTVar16->ArrayNum;
    if (iVar14 == pTVar16->ArrayMax) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar16->AllocatorInstance,&pTVar16->ArrayMax);
    }
    pTVar16->ArrayNum = iVar14 + 1;
    *(longlong *)((pTVar16->AllocatorInstance).Data + (longlong)iVar14 * 8) = local_118;
  }
  ShrinkMultimap<FTopLevelAssetPath,FAssetData_*>
            ((TMap<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>
              *)(*(longlong *)this + 0xf0));
  lVar23 = *(longlong *)this;
  this_02 = (TSet<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
             *)(lVar23 + 0x140);
  bVar11 = 1 < *(int *)(lVar23 + 0x188);
  if (!bVar11) {
    TSet<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::UnhashElements(this_02);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_02,0,*(int *)(lVar23 + 0x148));
  *(undefined4 *)(lVar23 + 0x148) = 0;
  if (*(int *)(lVar23 + 0x14c) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)this_02,0,(int *)(lVar23 + 0x14c));
  }
  *(undefined4 *)(lVar23 + 0x170) = 0xffffffff;
  *(undefined4 *)(lVar23 + 0x174) = 0;
  *(undefined4 *)(lVar23 + 0x168) = 0;
  if ((*(int *)(lVar23 + 0x16c) < 0) || (0x80 < *(int *)(lVar23 + 0x16c))) {
    *(undefined4 *)(lVar23 + 0x16c) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(lVar23 + 0x150),0);
  }
  if (bVar11) {
    *(undefined4 *)(lVar23 + 0x188) = 1;
    TSet<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::Rehash(this_02);
  }
  lVar23 = **(longlong **)((longlong)this + 8);
  lVar22 = (longlong)(int)(*(longlong **)((longlong)this + 8))[1] * 0x68 + lVar23;
  local_110 = lVar22;
  if (lVar23 != lVar22) {
    do {
      uVar12 = 0;
      if ((*(byte *)(lVar23 + 0x38) & 1) == 0) {
        lVar22 = local_110;
        if (*(longlong *)(lVar23 + 0x38) != 0) {
          uVar13 = *(uint *)(*(longlong *)(lVar23 + 0x38) + 8);
          goto LAB_142ae4937;
        }
      }
      else {
        uVar13 = (uint)*(ushort *)(lVar23 + 0x3a);
LAB_142ae4937:
        if (uVar13 != 0) {
          do {
            if ((*(longlong *)(lVar23 + 0x38) == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("View.Bits != 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\AssetRegistry\\AssetDataTagMap.h"
                                    ,0x1a6,L""), bVar11)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            if ((*(byte *)(lVar23 + 0x38) & 1) == 0) {
              FVar19 = *(FName *)(**(longlong **)(lVar23 + 0x38) + (ulonglong)uVar12 * 0x18);
              uStack_100 = **(longlong **)(lVar23 + 0x38) + ((ulonglong)uVar12 * 3 + 1) * 8;
            }
            else {
              uVar4 = *(ushort *)(lVar23 + 0x38);
              pFVar17 = FixedTagPrivate::FMapHandle::At
                                  ((FMapHandle *)(lVar23 + 0x38),local_78,uVar12);
              FVar19 = pFVar17->Key;
              local_f0 = pFVar17->Value;
              uStack_100 = (ulonglong)CONCAT24(uVar4 >> 2,local_f0) | 0x8000000000000000;
              local_f8 = FVar19;
            }
            uStack_80 = uStack_100;
            lVar22 = *(longlong *)this;
            local_108 = FVar19;
            local_88 = FVar19;
            uVar15 = ::GetTypeHash(FVar19.ComparisonIndex.Value);
            this_00 = TMapBase<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>_>
                      ::FindOrAddImpl<FName_const_&>
                                ((TMapBase<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>_>
                                  *)(lVar22 + 0x140),uVar15 + FVar19.Number,&local_88);
            TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::
            Emplace<FTopLevelAssetPath_const_&>(this_00,&local_res18,(bool *)(lVar23 + 0x20));
            uVar12 = uVar12 + 1;
            lVar22 = local_110;
          } while (uVar12 != uVar13);
        }
      }
      lVar23 = lVar23 + 0x68;
    } while (lVar23 != lVar22);
  }
  iVar21 = 0;
  TSet<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::Shrink((TSet<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
            *)(*(longlong *)this + 0x140));
  lVar23 = *(longlong *)this;
  uStack_dc = 1;
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar23 + 0x150);
  iVar14 = *(int *)(lVar23 + 0x168);
  plVar2 = (longlong *)(lVar23 + 0x140);
  iStack_cc = iVar21;
  local_c8 = iVar21;
  if (iVar14 != 0) {
    pTVar20 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar23 + 0x160);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar23 + 0x160) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar20 = pTVar1;
    }
    uVar12 = *(uint *)(pTVar20->AllocatorInstance).InlineData;
    local_c8 = 0;
    while (uVar12 == 0) {
      lVar22 = (longlong)iVar21;
      local_c8 = local_c8 + 0x20;
      iVar21 = iVar21 + 1;
      iStack_cc = iVar14;
      if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_142ae4ae3;
      uVar12 = *(uint *)((pTVar20->AllocatorInstance).InlineData + lVar22 * 4 + 4);
    }
    uStack_dc = -uVar12 & uVar12;
    uVar3 = (ulonglong)uStack_dc * 2 + 1;
    lVar22 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    local_res18.AssetName.ComparisonIndex.Value = (uint)lVar22;
    iStack_cc = local_c8 + -1 + local_res18.AssetName.ComparisonIndex.Value;
    if (iVar14 < iStack_cc) {
      iStack_cc = iVar14;
    }
  }
LAB_142ae4ae3:
  uStack_c4 = local_4c;
  iStack_c0 = *(int *)(lVar23 + 0x148) - *(int *)(lVar23 + 0x174);
  uVar12 = *(uint *)(lVar23 + 0x168);
  uStack_d0 = 0xffffffff;
  uVar13 = uVar12 & 0xffffffe0;
  TStack_b0._padding_ = CONCAT44(uStack_dc,iVar21);
  TStack_b0.CurrentBitIndex = iStack_cc;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar12 >> 5;
  TStack_b0._28_4_ = local_4c;
  TStack_b0.BaseBitIndex = local_c8;
  uStack_90 = CONCAT44(uStack_bc,iStack_c0);
  local_e8 = plVar2;
  iStack_e0 = iVar21;
  local_d8 = pTVar1;
  local_b8 = plVar2;
  TStack_b0.Array = pTVar1;
  if ((((int)uVar12 < 0) || (iVar14 < (int)uVar12)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar15 = *(uint *)(lVar23 + 0x168);
  if (uVar12 != uVar15) {
    pTVar20 = pTVar1;
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar23 + 0x160) !=
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar20 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar23 + 0x160);
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) &
             *(uint *)((pTVar20->AllocatorInstance).InlineData + (longlong)iVar18 * 4);
    while (uVar12 == 0) {
      lVar23 = (longlong)iVar18;
      uVar13 = uVar13 + 0x20;
      iVar18 = iVar18 + 1;
      uVar12 = uVar15;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_142ae4bf0;
      uVar12 = *(uint *)((pTVar20->AllocatorInstance).InlineData + lVar23 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar23 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    uVar12 = (int)lVar23 + -1 + uVar13;
    if ((int)uVar15 < (int)uVar12) {
      uVar12 = uVar15;
    }
  }
LAB_142ae4bf0:
  while( true ) {
    plVar10 = local_b8;
    if ((int)local_b8[1] - *(int *)((longlong)local_b8 + 0x34) != (int)uStack_90) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_b0.CurrentBitIndex == uVar12) && (TStack_b0.Array == pTVar1)) &&
       (plVar10 == plVar2)) break;
    lVar23 = *plVar10 + (longlong)TStack_b0.CurrentBitIndex * 0x60;
    TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Shrink((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(lVar23 + 8));
    uVar13 = *(int *)(lVar23 + 0x10) - *(int *)(lVar23 + 0x3c);
    if (uVar13 < 4) {
      iVar14 = 1;
    }
    else {
      uVar3 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
      lVar22 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      iVar14 = 1 << ((byte)lVar22 & 0x1f);
    }
    if (((0 < (int)uVar13) && (*(int *)(lVar23 + 0x50) < iVar14)) ||
       (iVar14 < *(int *)(lVar23 + 0x50))) {
      *(int *)(lVar23 + 0x50) = iVar14;
      TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::Rehash
                ((TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>
                  *)(lVar23 + 8));
    }
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  }
  return;
}

// operator() @ 142ae5090

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
`FAssetRegistryState::InitializeFromExisting'::__l62::<lambda_4>::operator()
          (void *this,FDependsNode *param_1,EDependencyCategory param_2,EDependencyProperty param_3,
          bool param_4)

{
  TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
  *this_00;
  TSet<FAssetIdentifier,DefaultKeyFuncs<FAssetIdentifier,0>,FDefaultSetAllocator> *this_01;
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  FDependsNode *this_02;
  
  this_00 = *(TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
              **)((longlong)this + 8);
  uVar1 = ::GetTypeHash(&param_1->Identifier);
  iVar2 = TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FAssetIdentifier>(this_00,uVar1,&param_1->Identifier);
  if (iVar2 != -1) {
    lVar3 = (longlong)iVar2 * 0x30 + *(longlong *)&this_00->Elements;
    lVar4 = lVar3 + 0x20;
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    if (lVar4 != 0) goto LAB_142ae5110;
  }
  this_01 = *(TSet<FAssetIdentifier,DefaultKeyFuncs<FAssetIdentifier,0>,FDefaultSetAllocator> **)
             ((longlong)this + 0x10);
  uVar1 = ::GetTypeHash(&param_1->Identifier);
  iVar2 = TSet<FAssetIdentifier,DefaultKeyFuncs<FAssetIdentifier,0>,FDefaultSetAllocator>::
          FindIndexByHash<FAssetIdentifier>(this_01,uVar1,&param_1->Identifier);
  if (iVar2 == -1) {
    return;
  }
LAB_142ae5110:
  this_02 = FAssetRegistryState::CreateOrFindDependsNode
                      (*(FAssetRegistryState **)this,&param_1->Identifier,(bool *)0x0);
  FDependsNode::SetIsDependencyListSorted(*(FDependsNode **)((longlong)this + 0x18),param_2,false);
  FDependsNode::AddDependency(*(FDependsNode **)((longlong)this + 0x18),this_02,param_2,param_3);
  FDependsNode::SetIsReferencersSorted(this_02,false);
  FDependsNode::AddReferencer(this_02,*(FDependsNode **)((longlong)this + 0x18));
  return;
}

// operator() @ 142ae5180

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`FAssetRegistryState::Dump'::__l8::<lambda_5>::operator()
          (void *this,FCachedAssetKey *param_1,FCachedAssetKey *param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_1088 [32];
  TStringBuilderBase<wchar_t> local_1068;
  wchar_t local_1048 [1024];
  TStringBuilderBase<wchar_t> local_848;
  wchar_t local_828 [1024];
  ulonglong local_28 [2];
  
  local_28[1] = 0x142ae51a0;
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_1088;
  local_848.Base = local_828;
  local_848.bIsDynamic = false;
  local_848.bIsExternal = false;
  local_848.CurPos = local_828;
  local_848.End = (wchar_t *)local_28;
  UE::AssetRegistry::Private::ConcatenateOuterPathAndObjectName
            (&local_848,param_1->OuterPath,param_1->ObjectName);
  pwVar1 = local_848.Base;
  local_1068.Base = local_1048;
  lVar4 = (longlong)local_848.CurPos - (longlong)local_848.Base;
  local_1068.CurPos = local_1048;
  local_1068.End = (wchar_t *)&local_848;
  local_1068.bIsDynamic = false;
  local_1068.bIsExternal = false;
  UE::AssetRegistry::Private::ConcatenateOuterPathAndObjectName
            (&local_1068,param_2->OuterPath,param_2->ObjectName);
  iVar3 = (int)(lVar4 >> 1);
  iVar5 = (int)((longlong)local_1068.CurPos - (longlong)local_1068.Base >> 1);
  if ((iVar3 != 0) && (iVar5 != 0)) {
    iVar2 = iVar5;
    if (iVar3 < iVar5) {
      iVar2 = iVar3;
    }
    iVar2 = FGenericPlatformStricmp::Strnicmp(pwVar1,local_1068.Base,(longlong)iVar2);
    if (iVar2 != 0) goto LAB_142ae527d;
  }
  iVar2 = iVar3 - iVar5;
LAB_142ae527d:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1068);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_848);
  return SUB41((uint)iVar2 >> 0x1f,0);
}

// operator() @ 142ae52d0

bool __thiscall
`FAssetRegistryState::EnumerateAssets'::__l26::<lambda_5>::operator()
          (void *this,FAssetData *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  TBitArray<FDefaultBitArrayAllocator> *pTVar14;
  int iVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar4 = *(longlong *)this;
  iVar13 = 0;
  uVar8 = 1;
  iVar15 = 0;
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar4 + 0x1f0);
  iVar3 = *(int *)(lVar4 + 0x208);
  iVar9 = 0;
  if (iVar3 != 0) {
    pTVar14 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar4 + 0x200);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar4 + 0x200) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar14 = pTVar1;
    }
    uVar12 = *(uint *)(pTVar14->AllocatorInstance).InlineData;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_142ae537d;
      uVar12 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar10 * 4 + 4);
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
LAB_142ae537d:
  uVar12 = *(uint *)(lVar4 + 0x208);
  uVar11 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,iVar13);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_6c,*(int *)(lVar4 + 0x1e8) - *(int *)(lVar4 + 0x214));
  TStack_60.Array = pTVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar8 = *(uint *)(lVar4 + 0x208);
  if (uVar12 != uVar8) {
    pTVar14 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar4 + 0x200);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar4 + 0x200) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar14 = pTVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) &
             *(uint *)((pTVar14->AllocatorInstance).InlineData + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_142ae5480;
      uVar12 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar10 * 4 + 4);
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
LAB_142ae5480:
  while( true ) {
    if (*(int *)(lVar4 + 0x1e8) - *(int *)(lVar4 + 0x214) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) && (TStack_60.Array == pTVar1)) break;
    bVar6 = UE::AssetRegistry::Private::AssetDataMatchesTag
                      (param_1,*(FName *)((longlong)TStack_60.CurrentBitIndex * 0x20 +
                                         *(longlong *)(lVar4 + 0x1e0)),
                       (TOptional<FString> *)
                       (*(longlong *)(lVar4 + 0x1e0) + 8 +
                       (longlong)TStack_60.CurrentBitIndex * 0x20));
    if (bVar6) {
      return true;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return false;
}

// operator() @ 142ae5510

void __thiscall `FAssetRegistryState::Dump'::__l2::<lambda_6>::operator()(void *this)

{
  ForAnyElementType *pFVar1;
  uint uVar2;
  undefined8 local_res8;
  code **local_res10 [3];
  code *local_28;
  undefined8 *local_20;
  code *local_18;
  undefined8 **local_10;
  
  pFVar1 = *(ForAnyElementType **)this;
  uVar2 = *(int *)(*(longlong *)((longlong)this + 8) + 8) -
          *(int *)(*(longlong *)((longlong)this + 8) + 0x34);
  if (*(uint *)&pFVar1[1].Data == uVar2) {
    return;
  }
  if (-1 < (int)uVar2) {
    if (*(int *)((longlong)&pFVar1[1].Data + 4) < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar2,pFVar1,*(uint *)&pFVar1[1].Data,(int *)((longlong)&pFVar1[1].Data + 4));
    }
    local_res8 = *(undefined8 *)this;
    local_20 = &local_res8;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<``FAssetRegistryState::Dump'::__l2::<lambda_6>::operator()'::__l5::<lambda_1>,void,FAssetData_const_&>
               ::Call;
    local_res10[0] = &local_28;
    local_10 = local_res10;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`FAssetRegistryState::EnumerateAllAssets'::__l2::<lambda_1>,void,FAssetData_&>
               ::Call;
    FAssetRegistryState::EnumerateAllMutableAssets
              (*(FAssetRegistryState **)((longlong)this + 8),
               (TFunctionRef<void___cdecl(FAssetData_&)> *)&local_18,AllowAll);
    AlgoImpl::
    IntroSortInternal<FAssetData_const_*,int,FIdentityFunctor,__FAssetRegistryState::Dump_::__l2::<lambda_6>::operator()_::__l5::<lambda_2>_>
              ((FAssetData **)**(undefined8 **)this,*(int *)(*(undefined8 **)this + 1),
               local_res8._0_1_,(<lambda_2>)local_res8._0_1_);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// operator() @ 142ae59d0

void __thiscall
`FAssetRegistryState::Dump'::__l31::<lambda_7>::operator()
          (void *this,TTuple<FName,FAssetTagValueRef> *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  pFVar2 = *(ForAnyElementType **)this;
  if (((TTuple<FName,FAssetTagValueRef> *)pFVar2->Data <= param_1) &&
     (param_1 < (TTuple<FName,FAssetTagValueRef> *)
                (&((TTuple<FName,FAssetTagValueRef> *)pFVar2->Data)->field_0x0 +
                (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  *(undefined8 *)(pFVar2->Data + (longlong)iVar5 * 8) = *(undefined8 *)param_1;
  return;
}

// operator() @ 142ae5a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`FAssetRegistryState::Dump'::__l41::<lambda_8>::operator()
          (void *this,FDependsNode *param_1,FDependsNode *param_2)

{
  int iVar1;
  ForAnyElementType FVar2;
  ForAnyElementType FVar3;
  undefined1 auStack_278 [32];
  FString local_258;
  FString local_248;
  TStringBuilderBase<wchar_t> local_238;
  wchar_t local_218 [256];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_278;
  local_238.Base = local_218;
  local_238.bIsDynamic = false;
  local_238.bIsExternal = false;
  local_238.CurPos = local_218;
  local_238.End = (wchar_t *)local_18;
  FAssetIdentifier::AppendString(&param_2->Identifier,&local_238);
  ::FString::ConstructFromPtrSize
            (&local_248,local_238.Base,
             (int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
  local_238.Base = local_218;
  local_238.bIsDynamic = false;
  local_238.bIsExternal = false;
  local_238.CurPos = local_218;
  local_238.End = (wchar_t *)local_18;
  FAssetIdentifier::AppendString(&param_1->Identifier,&local_238);
  ::FString::ConstructFromPtrSize
            (&local_258,local_238.Base,
             (int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_248.Data.ArrayNum != 0) {
    FVar3.Data = local_248.Data.AllocatorInstance.Data;
  }
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_258.Data.ArrayNum != 0) {
    FVar2.Data = local_258.Data.AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar2.Data,(wchar_t *)FVar3.Data);
  if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Data.AllocatorInstance.Data);
  }
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  return SUB41((uint)iVar1 >> 0x1f,0);
}

// operator() @ 142ae5bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`FAssetRegistryState::Dump'::__l48::<lambda_9>::operator()
          (void *this,FDependsNode *param_1,FDependsNode *param_2)

{
  int iVar1;
  ForAnyElementType FVar2;
  ForAnyElementType FVar3;
  undefined1 auStack_278 [32];
  FString local_258;
  FString local_248;
  TStringBuilderBase<wchar_t> local_238;
  wchar_t local_218 [256];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_278;
  local_238.Base = local_218;
  local_238.bIsDynamic = false;
  local_238.bIsExternal = false;
  local_238.CurPos = local_218;
  local_238.End = (wchar_t *)local_18;
  FAssetIdentifier::AppendString(&param_2->Identifier,&local_238);
  ::FString::ConstructFromPtrSize
            (&local_248,local_238.Base,
             (int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
  local_238.Base = local_218;
  local_238.bIsDynamic = false;
  local_238.bIsExternal = false;
  local_238.CurPos = local_218;
  local_238.End = (wchar_t *)local_18;
  FAssetIdentifier::AppendString(&param_1->Identifier,&local_238);
  ::FString::ConstructFromPtrSize
            (&local_258,local_238.Base,
             (int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_248.Data.ArrayNum != 0) {
    FVar3.Data = local_248.Data.AllocatorInstance.Data;
  }
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_258.Data.ArrayNum != 0) {
    FVar2.Data = local_258.Data.AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar2.Data,(wchar_t *)FVar3.Data);
  if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Data.AllocatorInstance.Data);
  }
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  return SUB41((uint)iVar1 >> 0x1f,0);
}

// AddAssetData @ 142ae82f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAssetRegistryState::AddAssetData(FAssetRegistryState *this,FAssetData *param_1)

{
  FAssetDataTagMapSharedView *this_00;
  TMap<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>_>
  *this_01;
  FName FVar1;
  ForElementType<FAssetData_*> FVar2;
  FScriptContainerElement *pFVar3;
  FName FVar4;
  undefined1 *puVar5;
  code *pcVar6;
  void *pvVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ForElementType<FAssetData_*> FVar12;
  ForElementType<FAssetData_*> FVar13;
  TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *pTVar14;
  FNumberedPair *pFVar15;
  FName *pFVar16;
  undefined1 *puVar17;
  longlong lVar18;
  ulonglong uVar19;
  FAssetData *local_res10;
  char local_res18;
  int local_res20 [2];
  FAssetData *local_d8;
  uint local_d0;
  FCachedAssetKey local_cc;
  FName local_b8;
  undefined1 local_b0 [8];
  TKeyInitializer<FName_const_&> local_a8 [2];
  FName local_98;
  FValueId local_90;
  FName local_88;
  FSparseArrayAllocationInfo local_78;
  FString local_68;
  FNumberedPair local_58 [2];
  
  local_res18 = '\0';
  local_res10 = param_1;
  TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>::
  Emplace<FAssetData_*_const_&>(&this->CachedAssets,(FAssetData **)local_b0,(bool *)&local_res10);
  uVar19 = 0;
  local_d8 = param_1;
  if (local_res18 == '\0') {
    this->NumAssets = this->NumAssets + 1;
  }
  else if (1 < (byte)LogAssetRegistry._0_1_) {
    local_cc.OuterPath.ComparisonIndex.Value = 0;
    local_cc.OuterPath.Number = 0;
    local_cc.ObjectName.ComparisonIndex.Value = 0;
    local_cc.ObjectName.Number = 0;
    if (param_1 != (FAssetData *)0x0) {
      local_cc.OuterPath = param_1->PackageName;
      local_cc.ObjectName = param_1->AssetName;
    }
    UE::AssetRegistry::Private::FCachedAssetKey::ToString(&local_cc,&local_68);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  FVar1 = param_1->PackageName;
  uVar9 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  FVar12 = (ForElementType<FAssetData_*>)
           TMapBase<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
           ::FindOrAddImpl<FName_const_&>
                     ((TMapBase<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
                       *)&this->CachedAssetsByPackageName,uVar9 + FVar1.Number,&param_1->PackageName
                     );
  FVar2 = *(ForElementType<FAssetData_*> *)((longlong)FVar12 + 8);
  FVar13 = FVar12;
  if (FVar2 != (ForElementType<FAssetData_*>)0x0) {
    FVar13 = FVar2;
  }
  if ((ulonglong)FVar13 <= &local_d8) {
    FVar13 = FVar12;
    if (FVar2 != (ForElementType<FAssetData_*>)0x0) {
      FVar13 = FVar2;
    }
    if ((&local_d8 <
         (FAssetData **)((longlong)FVar13 + (longlong)*(int *)((longlong)FVar12 + 0x14) * 8)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar10 = *(int *)((longlong)FVar12 + 0x10);
  if (iVar10 == *(int *)((longlong)FVar12 + 0x14)) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FAssetData_*>_>
                       (0x808,(ForElementType<FAssetData_*> *)FVar12,
                        (int *)((longlong)FVar12 + 0x14));
  }
  *(int *)((longlong)FVar12 + 0x10) = iVar10 + 1;
  if (*(ForElementType<FAssetData_*> *)((longlong)FVar12 + 8) != (ForElementType<FAssetData_*>)0x0)
  {
    FVar12 = *(ForElementType<FAssetData_*> *)((longlong)FVar12 + 8);
  }
  *(FAssetData **)((longlong)FVar12 + (longlong)iVar10 * 8) = local_d8;
  FVar1 = param_1->PackagePath;
  uVar9 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  pTVar14 = TMapBase<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>
            ::FindOrAddImpl<FName_const_&>
                      ((TMapBase<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>
                        *)&this->CachedAssetsByPath,uVar9 + FVar1.Number,&param_1->PackagePath);
  pFVar3 = (pTVar14->AllocatorInstance).Data;
  if (((pFVar3 <= (FScriptContainerElement *)&local_d8) &&
      ((FScriptContainerElement *)&local_d8 < pFVar3 + (longlong)pTVar14->ArrayMax * 8)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar10 = pTVar14->ArrayNum;
  if (iVar10 == pTVar14->ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar14->AllocatorInstance,&pTVar14->ArrayMax);
  }
  pTVar14->ArrayNum = iVar10 + 1;
  *(FAssetData **)((pTVar14->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_d8;
  FVar1 = (param_1->AssetClassPath).AssetName;
  uVar9 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  FVar4 = (param_1->AssetClassPath).PackageName;
  uVar11 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
  uVar11 = uVar11 + FVar4.Number;
  pTVar14 = TMapBase<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>
            ::FindOrAddImpl<FTopLevelAssetPath_const_&>
                      ((TMapBase<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>
                        *)&this->CachedAssetsByClass,
                       uVar11 * 0x40 + -0x61c88647 + uVar9 + FVar1.Number + (uVar11 >> 2) ^ uVar11,
                       &param_1->AssetClassPath);
  pFVar3 = (pTVar14->AllocatorInstance).Data;
  if (((pFVar3 <= (FScriptContainerElement *)&local_d8) &&
      ((FScriptContainerElement *)&local_d8 < pFVar3 + (longlong)pTVar14->ArrayMax * 8)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar10 = pTVar14->ArrayNum;
  if (iVar10 == pTVar14->ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar14->AllocatorInstance,&pTVar14->ArrayMax);
  }
  pTVar14->ArrayNum = iVar10 + 1;
  this_00 = &param_1->TagsAndValues;
  *(FAssetData **)((pTVar14->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_d8;
  if ((*(byte *)&this_00->field0_0x0 & 1) == 0) {
    if ((this_00->field0_0x0).Loose == (FAssetDataTagMap *)0x0) {
      return;
    }
    local_d0 = (uint)((this_00->field0_0x0).Loose)->_padding_;
  }
  else {
    local_d0 = (uint)(param_1->TagsAndValues).field0_0x0.Fixed.Num;
  }
  if (local_d0 != 0) {
    this_01 = &this->CachedClassesByTag;
    do {
      if (((this_00->field0_0x0).Loose == (FAssetDataTagMap *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("View.Bits != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\AssetRegistry\\AssetDataTagMap.h"
                             ,0x1a6,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((*(byte *)&this_00->field0_0x0 & 1) == 0) {
        local_b8 = *(FName *)(((this_00->field0_0x0).Loose)->_padding_ + uVar19 * 0x18);
      }
      else {
        pFVar15 = FixedTagPrivate::FMapHandle::At((FMapHandle *)this_00,local_58,(uint)uVar19);
        local_b8 = pFVar15->Key;
        local_90 = pFVar15->Value;
        local_98 = local_b8;
      }
      local_88 = local_b8;
      uVar9 = ::GetTypeHash(local_b8.ComparisonIndex.Value);
      uVar9 = local_88.Number + uVar9;
      if (*(int *)&(this->CachedClassesByTag).field_0x8 !=
          *(int *)&(this->CachedClassesByTag).field_0x34) {
        puVar5 = *(undefined1 **)&(this->CachedClassesByTag).field_0x40;
        puVar17 = &(this->CachedClassesByTag).field_0x38;
        if (puVar5 != (undefined1 *)0x0) {
          puVar17 = puVar5;
        }
        uVar11 = *(uint *)(puVar17 +
                          (ulonglong)(*(int *)&(this->CachedClassesByTag).field_0x48 - 1U & uVar9) *
                          4);
        if (uVar11 != 0xffffffff) {
          do {
            pFVar16 = (FName *)((longlong)(int)uVar11 * 0x60 + *(longlong *)&this_01->field_0x0);
            if (*pFVar16 == local_b8) {
              if (pFVar16 != (FName *)0x0) goto LAB_142ae87cd;
              break;
            }
            uVar11 = pFVar16[0xb].ComparisonIndex.Value;
          } while (uVar11 != 0xffffffff);
        }
      }
      local_a8[0].Key = &local_b8;
      TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AddUninitialized((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)this_01,&local_78);
      pvVar7 = local_78.Pointer;
      if (local_78.Pointer !=
          (TSparseSetElement<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>_>
           *)0x0) {
        TKeyInitializer<FName_const_&>::
        operator<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>_TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>
                  (local_a8,local_78.Pointer);
        *(undefined4 *)((longlong)pvVar7 + 0x58) = 0xffffffff;
      }
      local_res20[0] = local_78.Index;
      bVar8 = TSet<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
              ::TryReplaceExisting
                        ((TSet<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                          *)this_01,uVar9,pvVar7,local_res20,(bool *)0x0);
      lVar18 = (longlong)local_res20[0];
      if (!bVar8) {
        TSet<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
        ::RehashOrLink((TSet<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                        *)this_01,uVar9,pvVar7,local_res20[0]);
      }
      pFVar16 = (FName *)(lVar18 * 0x60 + *(longlong *)&this_01->field_0x0);
LAB_142ae87cd:
      TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::
      Emplace<FTopLevelAssetPath_const_&>
                ((TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>
                  *)(pFVar16 + 1),(FTopLevelAssetPath *)(local_b0 + 4),
                 (bool *)&param_1->AssetClassPath);
      uVar9 = (uint)uVar19 + 1;
      uVar19 = (ulonglong)uVar9;
    } while (uVar9 != local_d0);
  }
  return;
}

// AddDependencies @ 142ae8b90

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
FAssetRegistryState::AddDependencies
          (FAssetRegistryState *this,FAssetIdentifier *param_1,
          TArrayView<FAssetDependency_const_,int> *param_2)

{
  FAssetDependency *pFVar1;
  int iVar2;
  FAssetDependency *pFVar3;
  FDependsNode *this_00;
  FDependsNode *this_01;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 != 0) {
    this_00 = CreateOrFindDependsNode(this,param_1,(bool *)0x0);
    pFVar3 = param_2->DataPtr;
    pFVar1 = pFVar3 + iVar2;
    for (; pFVar3 != pFVar1; pFVar3 = pFVar3 + 1) {
      this_01 = CreateOrFindDependsNode(this,&pFVar3->AssetId,(bool *)0x0);
      FDependsNode::AddDependency(this_00,this_01,pFVar3->Category,pFVar3->Properties);
      FDependsNode::AddReferencer(this_01,this_00);
    }
  }
  return;
}

// AddReferencers @ 142ae9ef0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
FAssetRegistryState::AddReferencers
          (FAssetRegistryState *this,FAssetIdentifier *param_1,
          TArrayView<FAssetDependency_const_,int> *param_2)

{
  FAssetDependency *pFVar1;
  int iVar2;
  FAssetDependency *pFVar3;
  FDependsNode *this_00;
  FDependsNode *this_01;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 != 0) {
    this_00 = CreateOrFindDependsNode(this,param_1,(bool *)0x0);
    pFVar3 = param_2->DataPtr;
    pFVar1 = pFVar3 + iVar2;
    for (; pFVar3 != pFVar1; pFVar3 = pFVar3 + 1) {
      this_01 = CreateOrFindDependsNode(this,&pFVar3->AssetId,(bool *)0x0);
      FDependsNode::AddDependency(this_01,this_00,pFVar3->Category,pFVar3->Properties);
      FDependsNode::AddReferencer(this_00,this_01);
    }
  }
  return;
}

// AddTagsToAssetData @ 142aea2c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAssetRegistryState::AddTagsToAssetData
          (FAssetRegistryState *this,FSoftObjectPath *param_1,FAssetDataTagMap *param_2)

{
  int *piVar1;
  FName *pFVar2;
  FAssetData *pFVar3;
  FName FVar4;
  FName FVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  FCachedAssetKey *pFVar9;
  TTuple<FName,FString> *pTVar10;
  FName *pFVar11;
  undefined1 local_res18 [16];
  FCachedAssetKey local_68;
  FCachedAssetKey local_58;
  FAssetDataTagMap local_48;
  
  if ((int)param_2->_padding_ != 0) {
    pFVar9 = UE::AssetRegistry::Private::FCachedAssetKey::FCachedAssetKey(&local_58,param_1);
    FVar4 = pFVar9->OuterPath;
    FVar5 = pFVar9->ObjectName;
    local_68.OuterPath = FVar4;
    local_68.ObjectName = FVar5;
    uVar6 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
    uVar7 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
    uVar7 = uVar7 + FVar4.Number;
    iVar8 = TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
            ::FindIndexByHash<UE::AssetRegistry::Private::FCachedAssetKey>
                      (&this->CachedAssets,
                       uVar7 * 0x40 + uVar6 + FVar5.Number + (uVar7 >> 2) + 0x9e3779b9 ^ uVar7,
                       &local_68);
    if (iVar8 == -1) {
      if (2 < (byte)LogAssetRegistry._0_1_) {
        FSoftObjectPath::ToString(param_1,(FString *)&local_68);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        if (local_68.OuterPath != (FName)0x0) {
          FMemory::Free((void *)local_68.OuterPath);
        }
      }
    }
    else {
      pFVar3 = *(FAssetData **)
                (*(longlong *)&(this->CachedAssets).Elements + (longlong)iVar8 * 0x10);
      FAssetDataTagMapSharedView::CopyMap(&pFVar3->TagsAndValues,&local_48);
      uVar6 = (int)param_2->_padding_ + (int)local_48._padding_;
      if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
      }
      if (local_48._padding_._4_4_ < (int)uVar6) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,uVar6,(ForAnyElementType *)&local_48,(int)local_48._padding_,
                   (int *)((longlong)&local_48._padding_ + 4));
      }
      iVar8 = (int)param_2->_padding_;
      pFVar11 = (FName *)param_2->_padding_;
      pFVar2 = pFVar11 + (longlong)iVar8 * 3;
      while( true ) {
        if ((int)param_2->_padding_ != iVar8) {
          `TCheckedPointerIterator<TTuple<FName,FString>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if (pFVar11 == pFVar2) break;
        pTVar10 = TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::
                  AllocateMemoryForEmplace<FName_&>
                            ((TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess> *)
                             &local_48,pFVar11);
        uVar6 = pFVar11->Number;
        *(uint *)&pTVar10->field_0x0 = (pFVar11->ComparisonIndex).Value;
        *(uint *)&pTVar10->field_0x4 = uVar6;
        *(undefined8 *)&pTVar10->field_0x8 = 0;
        uVar6 = pFVar11[1].Number;
        *(uint *)&pTVar10->field_0x8 = pFVar11[1].ComparisonIndex.Value;
        *(uint *)&pTVar10->field_0xc = uVar6;
        pFVar11[1].ComparisonIndex = 0;
        pFVar11[1].Number = 0;
        *(uint *)&pTVar10->field_0x10 = pFVar11[2].ComparisonIndex.Value;
        *(uint *)&pTVar10->field_0x14 = pFVar11[2].Number;
        pFVar11[2].ComparisonIndex = 0;
        pFVar11[2].Number = 0;
        pFVar11 = pFVar11 + 3;
      }
      piVar1 = (int *)((longlong)&param_2->_padding_ + 4);
      iVar8 = (int)param_2->_padding_;
      if (*piVar1 < 0) {
        DestructItems<TTuple<FName,FString>,int>((TTuple<FName,FString> *)param_2->_padding_,iVar8);
        *(undefined4 *)&param_2->_padding_ = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,(ForAnyElementType *)param_2,0,piVar1);
        }
      }
      else {
        DestructItems<TTuple<FName,FString>,int>((TTuple<FName,FString> *)param_2->_padding_,iVar8);
        *(undefined4 *)&param_2->_padding_ = 0;
      }
      SetTagsOnExistingAsset(this,pFVar3,&local_48);
      DestructItems<TTuple<FName,FString>,int>
                ((TTuple<FName,FString> *)local_48._padding_,(int)local_48._padding_);
      if ((TTuple<FName,FString> *)local_48._padding_ != (TTuple<FName,FString> *)0x0) {
        FMemory::Free((void *)local_48._padding_);
      }
    }
  }
  return;
}

// ClearDependencies @ 142aecf00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
FAssetRegistryState::ClearDependencies
          (FAssetRegistryState *this,FAssetIdentifier *param_1,EDependencyCategory param_2)

{
  FScriptContainerElement *pFVar1;
  FDependsNode *this_00;
  FDependsNode *this_01;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForAnyElementType FVar7;
  undefined8 *puVar8;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> local_70;
  FDependencyQuery local_60;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_98;
  uVar3 = ::GetTypeHash(param_1);
  iVar4 = TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FAssetIdentifier>
                    ((TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
                      *)&this->CachedDependsNodes,uVar3,param_1);
  if (iVar4 != -1) {
    lVar5 = (longlong)iVar4 * 0x30 + *(longlong *)&(this->CachedDependsNodes).field_0x0;
    puVar8 = (undefined8 *)(lVar5 + 0x20);
    if (lVar5 == 0) {
      puVar8 = (undefined8 *)0x0;
    }
    if ((puVar8 != (undefined8 *)0x0) &&
       (this_00 = (FDependsNode *)*puVar8, this_00 != (FDependsNode *)0x0)) {
      local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_70.ArrayNum = 0;
      local_70.ArrayMax = 0;
      local_60.RequiredUnions.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0;
      local_60.RequiredUnions.ArrayNum = 0;
      local_60.RequiredUnions.ArrayMax = 1;
      local_60.Required = None;
      local_60.Excluded = None;
      FDependsNode::GetDependencies(this_00,&local_70,All,&local_60);
      if (local_60.RequiredUnions.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
        FMemory::Free((void *)local_60.RequiredUnions.AllocatorInstance.SecondaryData);
      }
      FDependsNode::ClearDependencies(this_00,param_2);
      iVar4 = local_70.ArrayNum;
      uVar6 = (ulonglong)local_70.ArrayNum;
      pFVar1 = local_70.AllocatorInstance.Data + uVar6 * 8;
      FVar7.Data = local_70.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar6 != iVar4) {
          `TCheckedPointerIterator<FDependsNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_78);
        }
        if (FVar7.Data == pFVar1) break;
        this_01 = *(FDependsNode **)FVar7.Data;
        local_60.RequiredUnions.AllocatorInstance.SecondaryData =
             (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0;
        local_60.RequiredUnions.ArrayNum = 0;
        local_60.RequiredUnions.ArrayMax = 1;
        local_60.Required = None;
        local_60.Excluded = None;
        bVar2 = FDependsNode::ContainsDependency(this_00,this_01,All,&local_60);
        if (local_60.RequiredUnions.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
          FMemory::Free((void *)local_60.RequiredUnions.AllocatorInstance.SecondaryData);
        }
        if (!bVar2) {
          FDependsNode::RemoveReferencer(this_01,this_00);
        }
        uVar6 = local_70._8_8_ & 0xffffffff;
        FVar7.Data = FVar7.Data + 8;
      }
      if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// ClearReferencers @ 142aed0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
FAssetRegistryState::ClearReferencers
          (FAssetRegistryState *this,FAssetIdentifier *param_1,EDependencyCategory param_2)

{
  FScriptContainerElement *pFVar1;
  FDependsNode *this_00;
  FDependsNode *this_01;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForAnyElementType FVar7;
  undefined8 *puVar8;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> local_70;
  FDependencyQuery local_60;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_98;
  uVar3 = ::GetTypeHash(param_1);
  iVar4 = TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FAssetIdentifier>
                    ((TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
                      *)&this->CachedDependsNodes,uVar3,param_1);
  if (iVar4 != -1) {
    lVar5 = (longlong)iVar4 * 0x30 + *(longlong *)&(this->CachedDependsNodes).field_0x0;
    puVar8 = (undefined8 *)(lVar5 + 0x20);
    if (lVar5 == 0) {
      puVar8 = (undefined8 *)0x0;
    }
    if ((puVar8 != (undefined8 *)0x0) &&
       (this_00 = (FDependsNode *)*puVar8, this_00 != (FDependsNode *)0x0)) {
      local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_70.ArrayNum = 0;
      local_70.ArrayMax = 0;
      local_60.RequiredUnions.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0;
      local_60.RequiredUnions.ArrayNum = 0;
      local_60.RequiredUnions.ArrayMax = 1;
      local_60.Required = None;
      local_60.Excluded = None;
      FDependsNode::GetReferencers(this_00,&local_70,param_2,&local_60);
      if (local_60.RequiredUnions.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
        FMemory::Free((void *)local_60.RequiredUnions.AllocatorInstance.SecondaryData);
      }
      iVar4 = local_70.ArrayNum;
      uVar6 = (ulonglong)local_70.ArrayNum;
      pFVar1 = local_70.AllocatorInstance.Data + uVar6 * 8;
      FVar7.Data = local_70.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar6 != iVar4) {
          `TCheckedPointerIterator<FDependsNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_78);
        }
        if (FVar7.Data == pFVar1) break;
        this_01 = *(FDependsNode **)FVar7.Data;
        FDependsNode::RemoveDependency(this_01,this_00,param_2);
        local_60.RequiredUnions.AllocatorInstance.SecondaryData =
             (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0;
        local_60.RequiredUnions.ArrayNum = 0;
        local_60.RequiredUnions.ArrayMax = 1;
        local_60.Required = None;
        local_60.Excluded = None;
        bVar2 = FDependsNode::ContainsDependency(this_01,this_00,All,&local_60);
        if (local_60.RequiredUnions.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
          FMemory::Free((void *)local_60.RequiredUnions.AllocatorInstance.SecondaryData);
        }
        if (!bVar2) {
          FDependsNode::RemoveReferencer(this_00,this_01);
        }
        uVar6 = local_70._8_8_ & 0xffffffff;
        FVar7.Data = FVar7.Data + 8;
      }
      if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// ContainsDependency @ 142aedfe0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

bool __thiscall
FAssetRegistryState::ContainsDependency
          (FAssetRegistryState *this,FAssetIdentifier *param_1,FAssetIdentifier *param_2,
          EDependencyCategory param_3,FDependencyQuery *param_4)

{
  TMap<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
  *this_00;
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  this_00 = &this->CachedDependsNodes;
  uVar2 = ::GetTypeHash(param_1);
  iVar3 = TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FAssetIdentifier>
                    ((TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
                      *)this_00,uVar2,param_1);
  puVar7 = (undefined8 *)0x0;
  puVar4 = puVar7;
  if (iVar3 != -1) {
    puVar4 = (undefined8 *)((longlong)iVar3 * 0x30 + *(longlong *)&this_00->field_0x0);
  }
  puVar6 = puVar4 + 4;
  if (puVar4 == (undefined8 *)0x0) {
    puVar6 = puVar7;
  }
  uVar2 = ::GetTypeHash(param_2);
  iVar3 = TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FAssetIdentifier>
                    ((TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
                      *)this_00,uVar2,param_2);
  puVar4 = puVar7;
  if (iVar3 != -1) {
    puVar4 = (undefined8 *)((longlong)iVar3 * 0x30 + *(longlong *)&this_00->field_0x0);
  }
  puVar5 = puVar4 + 4;
  if (puVar4 == (undefined8 *)0x0) {
    puVar5 = puVar7;
  }
  if ((puVar6 == (undefined8 *)0x0) || (puVar5 == (undefined8 *)0x0)) {
    bVar1 = false;
  }
  else {
    bVar1 = FDependsNode::ContainsDependency
                      ((FDependsNode *)*puVar6,(FDependsNode *)*puVar5,param_3,param_4);
  }
  return bVar1;
}

// CreateOrFindDependsNode @ 142aee170

FDependsNode * __thiscall
FAssetRegistryState::CreateOrFindDependsNode
          (FAssetRegistryState *this,FAssetIdentifier *param_1,bool *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  FDependsNode *this_00;
  FDependsNode *pFVar5;
  longlong lVar6;
  FDependsNode **ppFVar7;
  bool bVar8;
  
  bVar8 = true;
  uVar3 = ::GetTypeHash(param_1);
  iVar4 = TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FAssetIdentifier>
                    ((TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
                      *)&this->CachedDependsNodes,uVar3,param_1);
  if ((iVar4 == -1) ||
     (lVar6 = (longlong)iVar4 * 0x30 + *(longlong *)&this->CachedDependsNodes, lVar6 == 0)) {
    ppFVar7 = TMapBase<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
              ::EmplaceByHash<FAssetIdentifier_const_&>
                        ((TMapBase<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
                          *)&this->CachedDependsNodes,uVar3,param_1);
  }
  else {
    ppFVar7 = (FDependsNode **)(lVar6 + 0x20);
  }
  if (*ppFVar7 == (FDependsNode *)0x0) {
    bVar8 = false;
    this_00 = ::operator_new(0xa8);
    pFVar5 = (FDependsNode *)0x0;
    if (this_00 != (FDependsNode *)0x0) {
      (this_00->Identifier).PackageName.ComparisonIndex = 0;
      (this_00->Identifier).PackageName.Number = 0;
      (this_00->Identifier).PrimaryAssetType.Name = (FName)0x0;
      (this_00->Identifier).ObjectName.ComparisonIndex = 0;
      (this_00->Identifier).ObjectName.Number = 0;
      (this_00->Identifier).ValueName.ComparisonIndex = 0;
      (this_00->Identifier).ValueName.Number = 0;
      (this_00->PackageDependencies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this_00->PackageDependencies).ArrayNum = 0;
      (this_00->PackageDependencies).ArrayMax = 0;
      (this_00->NameDependencies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this_00->NameDependencies).ArrayNum = 0;
      (this_00->NameDependencies).ArrayMax = 0;
      (this_00->ManageDependencies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this_00->ManageDependencies).ArrayNum = 0;
      (this_00->ManageDependencies).ArrayMax = 0;
      (this_00->Referencers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this_00->Referencers).ArrayNum = 0;
      (this_00->Referencers).ArrayMax = 0;
      (this_00->PackageFlags).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      (this_00->PackageFlags).NumBits = 0;
      (this_00->PackageFlags).MaxBits = 0x80;
      (this_00->ManageFlags).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      (this_00->ManageFlags).NumBits = 0;
      (this_00->ManageFlags).MaxBits = 0x80;
      puVar2 = &this_00->field_0xa0;
      this_00->PackageIsSorted = 1;
      this_00->bScriptPath = 0;
      this_00->DependenciesInitialized = 0;
      this_00->ReferencersIsSorted = 1;
      this_00->ManageIsSorted = 1;
      this_00->SearchableNameIsSorted = 1;
      FDependsNode::SetIdentifier(this_00,param_1);
      pFVar5 = this_00;
    }
    *ppFVar7 = pFVar5;
    this->NumDependsNodes = this->NumDependsNodes + 1;
  }
  if (param_2 != (bool *)0x0) {
    *param_2 = bVar8;
  }
  return *ppFVar7;
}

// CreateOrGetAssetPackageData @ 142aee2c0

FAssetPackageData * __thiscall
FAssetRegistryState::CreateOrGetAssetPackageData(FAssetRegistryState *this,FName param_1)

{
  uint uVar1;
  FAssetPackageData **ppFVar2;
  FAssetPackageData *pFVar3;
  FName local_res10 [3];
  
  local_res10[0] = param_1;
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  ppFVar2 = TMapBase<FName,FAssetPackageData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>_>
            ::FindOrAddImpl<FName_const_&>
                      ((TMapBase<FName,FAssetPackageData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>_>
                        *)&this->CachedPackageData,uVar1 + param_1.Number,local_res10);
  if (*ppFVar2 != (FAssetPackageData *)0x0) {
    return *ppFVar2;
  }
  pFVar3 = ::operator_new(0xa0);
  if (pFVar3 != (FAssetPackageData *)0x0) {
    (pFVar3->CookedHash).bIsValid = false;
    *(undefined8 *)&pFVar3->ChunkHashes = 0;
    *(undefined8 *)&(pFVar3->ChunkHashes).field_0x8 = 0;
    *(undefined8 *)&(pFVar3->ChunkHashes).field_0x20 = 0;
    pFVar3->Extension = Unspecified;
    pFVar3->Flags = 0;
    *(undefined4 *)&(pFVar3->ChunkHashes).field_0x28 = 0;
    *(undefined4 *)&(pFVar3->ChunkHashes).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar3->ChunkHashes).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar3->ChunkHashes).field_0x34 = 0;
    *(undefined8 *)&(pFVar3->ChunkHashes).field_0x40 = 0;
    *(undefined4 *)&(pFVar3->ChunkHashes).field_0x48 = 0;
    (pFVar3->ImportedClasses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->ImportedClasses).ArrayNum = 0;
    (pFVar3->ImportedClasses).ArrayMax = 0;
    pFVar3->DiskSize = 0;
    (pFVar3->FileVersionUE).FileVersionUE4 = 0;
    (pFVar3->FileVersionUE).FileVersionUE5 = 0;
    pFVar3->FileVersionLicenseeUE = -1;
    (pFVar3->CustomVersions).Ptr.DataPtr = (FPackageCustomVersion *)0x0;
    (pFVar3->CustomVersions).Ptr.ArrayNum = 0;
    *ppFVar2 = pFVar3;
    this->NumPackageData = this->NumPackageData + 1;
    return *ppFVar2;
  }
  *ppFVar2 = (FAssetPackageData *)0x0;
  this->NumPackageData = this->NumPackageData + 1;
  return *ppFVar2;
}

// Dump @ 142aef9c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
FAssetRegistryState::Dump
          (FAssetRegistryState *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,int param_3)

{
  FAssetDependency *pFVar1;
  FName *pFVar2;
  EDependencyCategory EVar3;
  longlong lVar4;
  FDependsNode *pFVar5;
  code *pcVar6;
  char cVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  FAssetRegistryState *pFVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  FString *pFVar14;
  FValueId *pFVar15;
  size_t sVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  TTuple<FName,FAssetPackageData_*> *pTVar19;
  void *pvVar20;
  TStringBuilderBase<wchar_t> *pTVar21;
  longlong *plVar22;
  ulonglong uVar23;
  longlong lVar24;
  ForElementType<UE::AssetRegistry::EDependencyProperty> FVar25;
  FName *pFVar26;
  FName *this_00;
  wchar_t *pwVar27;
  FScriptContainerElement *pFVar28;
  ulonglong uVar29;
  FNameLexicalLess FVar30;
  FIdentityFunctor FVar31;
  int iVar32;
  FName FVar33;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar34;
  FTopLevelAssetPath *this_01;
  FNameLexicalLess FVar35;
  FIdentityFunctor FVar36;
  FCachedAssetKey *pFVar37;
  FName FVar38;
  uint uVar39;
  char cVar40;
  longlong lVar41;
  FAssetRegistryState *pFVar42;
  FTopLevelAssetPath *pFVar43;
  FNameEntryId FVar44;
  ForAnyElementType FVar45;
  int *piVar46;
  undefined1 auStackY_668 [32];
  FNameLexicalLess local_618;
  undefined1 local_617;
  char local_616;
  char local_615;
  FIdentityFunctor local_614;
  FIdentityFunctor local_613;
  FIdentityFunctor local_612 [2];
  int local_610;
  int local_60c;
  undefined1 local_608 [8];
  TStringBuilderWithBuffer<wchar_t,16> *local_600;
  int local_5f8;
  int *local_5f0;
  TStringBuilderWithBuffer<wchar_t,16> **local_5e8;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_5e0;
  undefined1 local_5d8;
  undefined1 local_5d7;
  undefined1 local_5d6;
  undefined1 local_5d5;
  undefined1 local_5d4;
  undefined1 local_5d3;
  undefined1 local_5d2;
  undefined1 local_5d1;
  undefined1 local_5d0;
  undefined1 local_5cf;
  FIdentityFunctor local_5ce;
  FIdentityFunctor local_5cd;
  undefined1 local_5cc [4];
  undefined1 local_5c8 [8];
  uint local_5c0;
  FName local_5b8;
  undefined4 local_5b0 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> *local_5a8;
  FName local_5a0;
  undefined4 local_598;
  undefined2 local_594;
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> local_590;
  undefined1 local_580 [8];
  TArray<FAssetDependency,TSizedDefaultAllocator<32>_> local_578;
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> local_568;
  FName local_558;
  ForAnyElementType local_550;
  undefined8 local_548;
  FName local_540;
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> local_538;
  FAssetRegistryState *local_528;
  ForAnyElementType local_520;
  undefined8 local_518;
  FName local_510;
  undefined8 local_508;
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> local_500;
  TArray<FName,TSizedDefaultAllocator<32>_> local_4f0;
  FAssetTagValueRef_u_0 local_4e0;
  FName local_4d8;
  FName local_4d0;
  undefined8 local_4c8;
  FName local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  TStringBuilderWithBuffer<wchar_t,16> *local_498;
  int *local_490;
  undefined4 local_488;
  undefined4 local_484;
  int local_480;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_478;
  TStringBuilderBase<wchar_t> *local_470;
  undefined4 local_468;
  undefined1 *local_460;
  TStringBuilderWithBuffer<wchar_t,16> *local_458;
  undefined1 *local_450;
  uint local_448;
  undefined8 local_444;
  undefined4 local_43c;
  undefined8 local_438;
  ForAnyElementType *local_430;
  FName local_428;
  FName local_420;
  FName local_418;
  FName local_410;
  FName local_408;
  FName local_400;
  FName local_3f8;
  FName local_3f0;
  FName local_3e8;
  FName local_3e0;
  FName *local_3d8;
  FAssetRegistryState *local_3d0;
  FName local_3c8;
  code *local_3c0;
  ForAnyElementType **local_3b8;
  code *local_3b0;
  TStringBuilderWithBuffer<wchar_t,16> **local_3a8;
  code *local_3a0;
  TStringBuilderWithBuffer<wchar_t,16> **local_398;
  code *local_390;
  TStringBuilderWithBuffer<wchar_t,16> **local_388;
  code *local_380;
  TStringBuilderWithBuffer<wchar_t,16> **local_378;
  uchar *local_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  wchar_t *local_358;
  wchar_t *local_350;
  wchar_t *local_348;
  wchar_t *local_340;
  wchar_t *local_338;
  wchar_t *local_330;
  wchar_t *local_328;
  wchar_t *local_320;
  wchar_t *local_318;
  wchar_t *local_310;
  FString local_308;
  FString local_2f8;
  TArrayView<unsigned_char_const_,int> local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  TStringBuilderWithBuffer<wchar_t,16> local_208;
  FDependencyQuery local_1c8;
  FDependencyQuery local_1a8;
  FDependencyQuery local_188;
  FDependencyQuery local_168;
  TStringBuilderBase<wchar_t> local_148;
  wchar_t local_128 [16];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined1 local_e8 [40];
  longlong *local_c0;
  undefined1 local_b8 [40];
  longlong *local_90;
  undefined1 local_88 [40];
  longlong *local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_668;
  iVar32 = *(int *)&(this->CachedDependsNodes).field_0x8 + 0xe +
           (((*(int *)&(this->CachedAssets).Elements.field_0x8 -
             *(int *)&(this->CachedAssets).Elements.field_0x34) * 5 -
            *(int *)&(this->CachedPackageData).field_0x34) -
           *(int *)&(this->CachedDependsNodes).field_0x34) +
           *(int *)&(this->CachedPackageData).field_0x8;
  local_610 = param_3;
  local_5b8 = (FName)&this->CachedDependsNodes;
  local_5a8 = param_1;
  local_528 = this;
  local_616 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<wchar_t_[4]>
                        (param_1,(wchar_t (*) [4])L"All");
  if ((bool)local_616) {
LAB_142aefa90:
    cVar40 = '\x01';
    iVar32 = iVar32 + (*(int *)&(this->CachedDependsNodes).field_0x8 -
                      *(int *)&(this->CachedDependsNodes).field_0x34) * 0x17;
  }
  else {
    pFVar28 = (param_1->AllocatorInstance).Data;
    pFVar17 = pFVar28 + (longlong)param_1->ArrayNum * 0x10;
    for (; pFVar28 != pFVar17; pFVar28 = pFVar28 + 0x10) {
      if (*(int *)(pFVar28 + 8) == 0) {
        pwVar27 = L"";
      }
      else {
        pwVar27 = *(wchar_t **)pFVar28;
      }
      iVar12 = FGenericPlatformStricmp::Stricmp(pwVar27,L"DependencyDetails");
      if (iVar12 == 0) goto LAB_142aefa90;
    }
    cVar40 = '\0';
  }
  iVar12 = local_610;
  if (local_610 < 0) {
    iVar12 = 0;
  }
  if (iVar12 < 1) {
    uVar39 = 1;
  }
  else {
    uVar39 = iVar32 / iVar12;
  }
  local_208._padding_._0_2_ = 0;
  local_148.bIsDynamic = false;
  local_148.bIsExternal = false;
  if (iVar12 < iVar32) {
    iVar32 = iVar12;
  }
  iVar13 = iVar32 / 0x14;
  local_208._padding_ = (longlong)local_208.StringBuffer;
  local_208._padding_ = (longlong)local_208.StringBuffer;
  local_208._padding_ = (longlong)&local_1c8;
  local_148.Base = local_128;
  local_148.CurPos = local_128;
  local_148.End = (wchar_t *)&local_108;
  local_615 = cVar40;
  local_610 = iVar12;
  if ((int)uVar39 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar39);
  }
  if (param_2->ArrayMax < (int)uVar39) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar39,&param_2->AllocatorInstance,param_2->ArrayNum,&param_2->ArrayMax);
  }
  TStringBuilderBase<wchar_t>::AddUninitialized
            ((TStringBuilderBase<wchar_t> *)&local_208,iVar32 * 100);
  local_208._padding_ = local_208._padding_;
  TStringBuilderBase<wchar_t>::AddUninitialized(&local_148,iVar13 * 100);
  pTVar34 = local_5a8;
  cVar7 = local_616;
  local_498 = &local_208;
  local_490 = &local_60c;
  local_470 = &local_148;
  local_600 = &local_208;
  local_5f0 = &local_60c;
  local_5e8 = &local_498;
  local_148.CurPos = local_148.Base;
  local_60c = 0;
  local_488 = 0xfd055ed2;
  local_484 = 0x40b953f;
  local_468 = 2;
  local_5f8 = iVar12;
  local_5e0 = param_2;
  local_480 = iVar13;
  local_478 = param_2;
  if (local_616 == '\0') {
    pFVar28 = (local_5a8->AllocatorInstance).Data;
    pFVar17 = pFVar28 + (longlong)local_5a8->ArrayNum * 0x10;
    for (; pFVar28 != pFVar17; pFVar28 = pFVar28 + 0x10) {
      if (*(int *)(pFVar28 + 8) == 0) {
        pwVar27 = L"";
      }
      else {
        pwVar27 = *(wchar_t **)pFVar28;
      }
      iVar32 = FGenericPlatformStricmp::Stricmp(pwVar27,L"ObjectPath");
      iVar12 = local_610;
      if (iVar32 == 0) goto LAB_142aefc9c;
    }
LAB_142aefe0a:
    bVar11 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<wchar_t_[12]>
                       (pTVar34,(wchar_t (*) [12])L"PackageName");
    iVar32 = local_610;
    if (bVar11) goto LAB_142aefe21;
LAB_142aefed7:
    bVar11 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<wchar_t_[5]>
                       (pTVar34,(wchar_t (*) [5])L"Path");
    if (bVar11) goto LAB_142aefeee;
LAB_142aeffa1:
    pFVar28 = (pTVar34->AllocatorInstance).Data;
    pFVar17 = pFVar28 + (longlong)pTVar34->ArrayNum * 0x10;
    iVar32 = local_610;
    for (; local_610 = iVar32, pFVar28 != pFVar17; pFVar28 = pFVar28 + 0x10) {
      if (*(int *)(pFVar28 + 8) == 0) {
        pwVar27 = L"";
      }
      else {
        pwVar27 = *(wchar_t **)pFVar28;
      }
      iVar12 = FGenericPlatformStricmp::Stricmp(pwVar27,L"Class");
      iVar32 = local_610;
      if (iVar12 == 0) goto LAB_142af00b6;
    }
  }
  else {
LAB_142aefc9c:
    if ((1 < iVar12) && (local_60c != 0)) {
      `FAssetRegistryState::Dump'::__l2::<lambda_1>::operator()(&local_498,true);
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              ((TStringBuilderBase<wchar_t> *)&local_208,L"--- Begin CachedAssetsByObjectPath ---",
               0x26);
    `FAssetRegistryState::Dump'::__l2::<lambda_2>::operator()(&local_600);
    uVar39 = *(int *)&(this->CachedAssets).Elements.field_0x8 -
             *(int *)&(this->CachedAssets).Elements.field_0x34;
    local_520.Data = (FScriptContainerElement *)0x0;
    local_518 = 0;
    if ((int)uVar39 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar39);
    }
    if (0 < (int)uVar39) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,uVar39,&local_520,0,(int *)((longlong)&local_518 + 4));
    }
    local_430 = &local_520;
    local_3b8 = &local_430;
    local_3c0 = UE::Core::Private::Function::
                TFunctionRefCaller<`FAssetRegistryState::Dump'::__l8::<lambda_4>,void,FAssetData_const_&>
                ::Call;
    EnumerateAllAssets(this,(TFunctionRef<void___cdecl(FAssetData_const_&)> *)&local_3c0,AllowAll);
    AlgoImpl::
    IntroSortInternal<UE::AssetRegistry::Private::FCachedAssetKey,int,FIdentityFunctor,TDereferenceWrapper<UE::AssetRegistry::Private::FCachedAssetKey,_FAssetRegistryState::Dump_::__l8::<lambda_5>_>_>
              ((FCachedAssetKey *)local_520.Data,(int)local_518,local_5ce,(<lambda_5> *)&local_5ce);
    iVar32 = (int)local_518;
    uVar29 = (ulonglong)(int)local_518;
    pFVar37 = (FCachedAssetKey *)(local_520.Data + uVar29 * 0x10);
    FVar45.Data = local_520.Data;
    while( true ) {
      if ((int)uVar29 != iVar32) {
        local_5d8 = 0;
        `TCheckedPointerIterator<UE::AssetRegistry::Private::FCachedAssetKey,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_5d8);
      }
      if ((FCachedAssetKey *)FVar45.Data == pFVar37) break;
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                ((TStringBuilderBase<wchar_t> *)&local_208,L"\t",1);
      UE::AssetRegistry::Private::ConcatenateOuterPathAndObjectName
                ((TStringBuilderBase<wchar_t> *)&local_208,
                 ((FCachedAssetKey *)FVar45.Data)->OuterPath,
                 ((FCachedAssetKey *)FVar45.Data)->ObjectName);
      `FAssetRegistryState::Dump'::__l2::<lambda_2>::operator()(&local_600);
      uVar29 = local_518 & 0xffffffff;
      FVar45.Data = FVar45.Data + 0x10;
    }
    TStringBuilderBase<wchar_t>::AppendfImpl
              ((TStringBuilderBase<wchar_t> *)&local_208,
               L"--- End CachedAssetsByObjectPath : %d entries ---");
    `FAssetRegistryState::Dump'::__l2::<lambda_2>::operator()(&local_600);
    if ((FCachedAssetKey *)local_520.Data != (FCachedAssetKey *)0x0) {
      FMemory::Free(local_520.Data);
    }
    pTVar34 = local_5a8;
    if (cVar7 == '\0') goto LAB_142aefe0a;
LAB_142aefe21:
    iVar32 = local_610;
    if ((1 < local_610) && (local_60c != 0)) {
      `FAssetRegistryState::Dump'::__l2::<lambda_1>::operator()(&local_498,true);
    }
    local_88._0_8_ = 0;
    local_60 = (longlong *)0x0;
    local_3a8 = &local_600;
    local_3b0 = UE::Core::Private::Function::
                TFunctionRefCaller<`FAssetRegistryState::Dump'::__l2::<lambda_2>,void>::Call;
    pFVar14 = ::FString::FString(&local_218,L"CachedAssetsByPackageName");
    PrintAssetDataMap<TMap<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>_>
              (pFVar14,&this->CachedAssetsByPackageName,&local_208,
               (TFunctionRef<void___cdecl(void)> *)&local_3b0,&this->CachedAssets,
               (TUniqueFunction<void___cdecl(FName_const_&,FAssetData_const_&)> *)local_88);
    if (local_88._0_8_ != 0) {
      plVar22 = (longlong *)(local_88 + 0x10);
      if (local_60 != (longlong *)0x0) {
        plVar22 = local_60;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
    if (cVar7 == '\0') goto LAB_142aefed7;
LAB_142aefeee:
    if ((1 < iVar32) && (local_60c != 0)) {
      `FAssetRegistryState::Dump'::__l2::<lambda_1>::operator()(&local_498,true);
    }
    local_e8._0_8_ = 0;
    local_c0 = (longlong *)0x0;
    local_398 = &local_600;
    local_3a0 = UE::Core::Private::Function::
                TFunctionRefCaller<`FAssetRegistryState::Dump'::__l2::<lambda_2>,void>::Call;
    pFVar14 = ::FString::FString(&local_248,L"CachedAssetsByPath");
    PrintAssetDataMap<TMap<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>_>
              (pFVar14,&this->CachedAssetsByPath,&local_208,
               (TFunctionRef<void___cdecl(void)> *)&local_3a0,&this->CachedAssets,
               (TUniqueFunction<void___cdecl(FName_const_&,FAssetData_const_&)> *)local_e8);
    if (local_e8._0_8_ != 0) {
      plVar22 = (longlong *)(local_e8 + 0x10);
      if (local_c0 != (longlong *)0x0) {
        plVar22 = local_c0;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
    if (cVar7 == '\0') goto LAB_142aeffa1;
LAB_142af00b6:
    if ((1 < iVar32) && (local_60c != 0)) {
      `FAssetRegistryState::Dump'::__l2::<lambda_1>::operator()(&local_498,true);
    }
    local_b8._0_8_ = 0;
    local_90 = (longlong *)0x0;
    local_388 = &local_600;
    local_390 = UE::Core::Private::Function::
                TFunctionRefCaller<`FAssetRegistryState::Dump'::__l2::<lambda_2>,void>::Call;
    pFVar14 = ::FString::FString(&local_238,L"CachedAssetsByClass");
    PrintAssetDataMap<TMap<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>_>
              (pFVar14,&this->CachedAssetsByClass,&local_208,
               (TFunctionRef<void___cdecl(void)> *)&local_390,&this->CachedAssets,
               (TUniqueFunction<void___cdecl(FTopLevelAssetPath_const_&,FAssetData_const_&)> *)
               local_b8);
    if (local_b8._0_8_ != 0) {
      plVar22 = (longlong *)(local_b8 + 0x10);
      if (local_90 != (longlong *)0x0) {
        plVar22 = local_90;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
  }
  bVar11 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<wchar_t_[4]>
                     (pTVar34,(wchar_t (*) [4])L"Tag");
  if (bVar11) {
    if ((1 < iVar32) && (local_60c != 0)) {
      `FAssetRegistryState::Dump'::__l2::<lambda_1>::operator()(&local_498,true);
    }
    local_378 = &local_600;
    local_380 = UE::Core::Private::Function::
                TFunctionRefCaller<`FAssetRegistryState::Dump'::__l2::<lambda_2>,void>::Call;
    pFVar14 = ::FString::FString(&local_228,L"CachedClassesByTag");
    PrintClassDataMap<TMap<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>_>_>
              (pFVar14,&this->CachedClassesByTag,&local_208,
               (TFunctionRef<void___cdecl(void)> *)&local_380);
  }
  local_510.ComparisonIndex.Value = 0;
  local_510.Number = 0;
  local_508 = 0;
  local_3d8 = &local_510;
  local_3d0 = this;
  if (cVar7 == '\0') {
    pFVar28 = (pTVar34->AllocatorInstance).Data;
    pFVar17 = pFVar28 + (longlong)pTVar34->ArrayNum * 0x10;
    for (; FVar33 = (FName)&this->CachedDependsNodes, pFVar28 != pFVar17; pFVar28 = pFVar28 + 0x10)
    {
      if (*(int *)(pFVar28 + 8) == 0) {
        pwVar27 = L"";
      }
      else {
        pwVar27 = *(wchar_t **)pFVar28;
      }
      iVar32 = FGenericPlatformStricmp::Stricmp(pwVar27,L"AssetTags");
      if (iVar32 == 0) goto LAB_142af0192;
    }
LAB_142af060d:
    bVar11 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<wchar_t_[13]>
                       (pTVar34,(wchar_t (*) [13])L"Dependencies");
    if (bVar11) goto LAB_142af06c3;
    pFVar42 = local_528;
    if (cVar40 != '\0') goto LAB_142af062d;
LAB_142af1cca:
    pFVar28 = (pTVar34->AllocatorInstance).Data;
    pFVar17 = pFVar28 + (longlong)pTVar34->ArrayNum * 0x10;
    iVar32 = local_610;
    for (; local_610 = iVar32, pFVar28 != pFVar17; pFVar28 = pFVar28 + 0x10) {
      if (*(int *)(pFVar28 + 8) == 0) {
        pwVar27 = L"";
      }
      else {
        pwVar27 = *(wchar_t **)pFVar28;
      }
      iVar32 = FGenericPlatformStricmp::Stricmp(pwVar27,L"PackageData");
      if (iVar32 == 0) goto LAB_142af1d42;
      iVar32 = local_610;
    }
  }
  else {
LAB_142af0192:
    FVar44.Value = 0;
    if ((1 < local_610) && (local_60c != 0)) {
      `FAssetRegistryState::Dump'::__l2::<lambda_1>::operator()(&local_498,true);
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              ((TStringBuilderBase<wchar_t> *)&local_208,L"--- Begin AssetTags ---",0x17);
    `FAssetRegistryState::Dump'::__l2::<lambda_2>::operator()(&local_600);
    `FAssetRegistryState::Dump'::__l2::<lambda_6>::operator()(&local_3d8);
    uVar29 = (ulonglong)(int)(uint)local_508;
    local_550.Data = (FScriptContainerElement *)0x0;
    local_558 = (FName)((longlong)local_510 + uVar29 * 8);
    local_548 = 0;
    local_5c0 = (uint)local_508;
    FVar33 = local_510;
    FVar30 = local_618;
    FVar35 = local_618;
    while( true ) {
      FVar38 = local_558;
      local_5a0 = FVar33;
      if ((uint)local_508 != (int)uVar29) {
        local_5d7 = 0;
        `TCheckedPointerIterator<FAssetData_const_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_5d7);
      }
      if (FVar33 == FVar38) break;
      pFVar26 = *(FName **)FVar33;
      if ((pFVar26[7].ComparisonIndex.Value & 1) == 0) {
        if (pFVar26[7] != (FName)0x0) {
          uVar39 = *(uint *)((longlong)pFVar26[7] + 8);
          goto LAB_142af0246;
        }
      }
      else {
        uVar39 = (uint)*(ushort *)((longlong)&pFVar26[7].ComparisonIndex.Value + 2);
LAB_142af0246:
        if (uVar39 != 0) {
          local_540.ComparisonIndex.Value = FVar44.Value + 1;
          pTVar21 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                              ((TStringBuilderBase<wchar_t> *)&local_208,L"  ",2);
          local_4d8.ComparisonIndex.Value = 0;
          local_4d8.Number = 0;
          local_4d0.ComparisonIndex.Value = 0;
          local_4d0.Number = 0;
          if (pFVar26 != (FName *)0x0) {
            local_4d8 = *pFVar26;
            local_4d0 = pFVar26[2];
          }
          UE::AssetRegistry::Private::ConcatenateOuterPathAndObjectName(pTVar21,local_4d8,local_4d0)
          ;
          `FAssetRegistryState::Dump'::__l2::<lambda_2>::operator()(&local_600);
          uVar29 = local_548;
          uVar39 = local_548._4_4_;
          local_548 = (ulonglong)local_548._4_4_ << 0x20;
          if (((longlong)uVar29 < 0) && (uVar39 != 0)) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,0,&local_550,0,(int *)((longlong)&local_548 + 4));
          }
          FAssetDataTagMapSharedView::ForEach<_FAssetRegistryState::Dump_::__l31::<lambda_7>_>
                    ((FAssetDataTagMapSharedView *)(pFVar26 + 7),
                     (TArray<FName,TSizedDefaultAllocator<32>_> *)&local_550);
          AlgoImpl::IntroSortInternal<FName,int,FIdentityFunctor,FNameLexicalLess>
                    ((FName *)local_550.Data,(int)local_548,(FIdentityFunctor)FVar35,FVar30);
          iVar32 = (int)local_548;
          uVar29 = (ulonglong)(int)local_548;
          pFVar26 = pFVar26 + 7;
          pFVar2 = (FName *)(local_550.Data + uVar29 * 8);
          FVar45.Data = local_550.Data;
          while( true ) {
            if ((int)uVar29 != iVar32) {
              local_618 = (FNameLexicalLess)0x0;
              `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_618);
            }
            if ((FName *)FVar45.Data == pFVar2) break;
            local_3c8 = *(FName *)FVar45.Data;
            if (((pFVar26->ComparisonIndex).Value & 1) == 0) {
              if (*pFVar26 == (FName)0x0) {
                local_4e0.Loose = (FString *)0x0;
              }
              else {
                local_4e0.Loose =
                     TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::Find
                               ((TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>
                                 *)*pFVar26,local_3c8);
              }
            }
            else {
              pFVar15 = FixedTagPrivate::FMapHandle::FindValue((FMapHandle *)pFVar26,local_3c8);
              if (pFVar15 == (FValueId *)0x0) {
                local_4e0.Loose = (FString *)0x0;
              }
              else {
                local_4e0.Bits =
                     ((ulonglong)(ushort)(pFVar26->ComparisonIndex).Value & 0xfffffffffffffffc |
                     0xfffffffe00000000) << 0x1e | (ulonglong)(uint)*pFVar15;
              }
            }
            pTVar21 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                                ((TStringBuilderBase<wchar_t> *)&local_208,L"    ",4);
            ::FName::AppendString(&local_3c8,pTVar21);
            pTVar21 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar21,L" : ",3);
            pFVar14 = FAssetTagValueRef::AsString((FAssetTagValueRef *)&local_4e0.Fixed,&local_2a8);
            if ((pFVar14->Data).ArrayNum == 0) {
              pwVar27 = L"";
LAB_142af0425:
              sVar16 = wcslen(pwVar27);
              iVar12 = (int)sVar16;
            }
            else {
              pwVar27 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
              iVar12 = 0;
              if ((FScriptContainerElement *)pwVar27 != (FScriptContainerElement *)0x0)
              goto LAB_142af0425;
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar21,pwVar27,iVar12);
            if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
            }
            pTVar34 = local_5e0;
            if (local_5f8 == 1) {
              pFVar17 = (FScriptContainerElement *)
                        ::FString::ConstructFromPtrSize
                                  (&local_298,(wchar_t *)local_600->_padding_,
                                   (int)(local_600->_padding_ - local_600->_padding_ >> 1));
              pFVar28 = (pTVar34->AllocatorInstance).Data;
              if (((pFVar28 <= pFVar17) && (pFVar17 < pFVar28 + (longlong)pTVar34->ArrayMax * 0x10))
                 && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar11)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar12 = pTVar34->ArrayNum;
              if (iVar12 == pTVar34->ArrayMax) {
                iVar12 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&pTVar34->AllocatorInstance,&pTVar34->ArrayMax);
              }
              pTVar34->ArrayNum = iVar12 + 1;
              pFVar28 = (pTVar34->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
              *(undefined8 *)pFVar28 = 0;
              *(FScriptContainerElement **)pFVar28 =
                   (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar17->field_0x0)->
                   AllocatorInstance).Data;
              (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar17->field_0x0)->
              AllocatorInstance).Data = (FScriptContainerElement *)0x0;
              *(int *)(pFVar28 + 8) = *(int *)&pFVar17[8].field_0x0;
              *(int *)(pFVar28 + 0xc) = *(int *)&pFVar17[0xc].field_0x0;
              *(undefined8 *)&pFVar17[8].field_0x0 = 0;
              if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_298.Data.AllocatorInstance.Data);
              }
              FVar45.Data = FVar45.Data + 8;
              local_600->_padding_ = local_600->_padding_;
              uVar29 = local_548 & 0xffffffff;
            }
            else {
              iVar12 = *local_5f0;
              *local_5f0 = iVar12 + 1;
              if ((local_5f8 == 0) || (iVar12 + 1 < local_5f8)) {
                TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                          ((TStringBuilderBase<wchar_t> *)local_600,L"\r\n",2);
                uVar29 = local_548 & 0xffffffff;
                FVar45.Data = FVar45.Data + 8;
              }
              else {
                `FAssetRegistryState::Dump'::__l2::<lambda_1>::operator()(local_5e8,false);
                uVar29 = local_548 & 0xffffffff;
                FVar45.Data = FVar45.Data + 8;
              }
            }
          }
          FVar30 = local_618;
          FVar35 = local_618;
          FVar44.Value = local_540.ComparisonIndex.Value;
        }
      }
      uVar29 = (ulonglong)local_5c0;
      FVar33 = (FName)((longlong)local_5a0 + 8);
    }
    TStringBuilderBase<wchar_t>::AppendfImpl
              ((TStringBuilderBase<wchar_t> *)&local_208,L"--- End AssetTags : %d entries ---");
    `FAssetRegistryState::Dump'::__l2::<lambda_2>::operator()(&local_600);
    if ((FName *)local_550.Data != (FName *)0x0) {
      FMemory::Free(local_550.Data);
    }
    pTVar34 = local_5a8;
    FVar33 = local_5b8;
    cVar40 = local_615;
    if (local_616 == '\0') goto LAB_142af060d;
LAB_142af06c3:
    if (cVar40 == '\0') {
      if ((1 < local_610) && (local_60c != 0)) {
        `FAssetRegistryState::Dump'::__l2::<lambda_1>::operator()(&local_498,true);
      }
      TStringBuilderBase<wchar_t>::AppendfImpl
                ((TStringBuilderBase<wchar_t> *)&local_208,L"--- Begin CachedDependsNodes ---");
      `FAssetRegistryState::Dump'::__l2::<lambda_2>::operator()(&local_600);
      local_500.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_500.ArrayNum = 0;
      local_500.ArrayMax = 0;
      TMapBase<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
      ::GenerateValueArray<TSizedDefaultAllocator<32>_>
                ((TMapBase<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
                  *)FVar33,&local_500);
      AlgoImpl::
      IntroSortInternal<FDependsNode_*,int,FIdentityFunctor,TDereferenceWrapper<FDependsNode_*,_FAssetRegistryState::Dump_::__l41::<lambda_8>_>_>
                ((FDependsNode **)local_500.AllocatorInstance.Data,local_500.ArrayNum,local_614,
                 (<lambda_8> *)&local_614);
      iVar32 = local_500.ArrayNum;
      uVar29 = (ulonglong)local_500.ArrayNum;
      FVar33 = (FName)((longlong)local_500.AllocatorInstance.Data + uVar29 * 8);
      FVar38 = (FName)local_500.AllocatorInstance;
      while( true ) {
        if ((int)uVar29 != iVar32) {
          local_5d6 = 0;
          `TCheckedPointerIterator<FDependsNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_5d6);
        }
        pFVar42 = local_528;
        if (FVar38 == FVar33) break;
        pFVar5 = *(FDependsNode **)FVar38;
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                  ((TStringBuilderBase<wchar_t> *)&local_208,L"\t",1);
        FAssetIdentifier::AppendString
                  (&pFVar5->Identifier,(TStringBuilderBase<wchar_t> *)&local_208);
        FDependsNode::GetConnectionCount(pFVar5);
        TStringBuilderBase<wchar_t>::AppendfImpl
                  ((TStringBuilderBase<wchar_t> *)&local_208,L" : %d connection(s)");
        `FAssetRegistryState::Dump'::__l2::<lambda_2>::operator()(&local_600);
        uVar29 = local_500._8_8_ & 0xffffffff;
        FVar38 = (FName)((longlong)FVar38 + 8);
      }
      TStringBuilderBase<wchar_t>::AppendfImpl
                ((TStringBuilderBase<wchar_t> *)&local_208,
                 L"--- End CachedDependsNodes : %d entries ---");
      `FAssetRegistryState::Dump'::__l2::<lambda_2>::operator()(&local_600);
      FVar33 = (FName)local_500.AllocatorInstance;
    }
    else {
LAB_142af062d:
      if ((1 < local_610) && (local_60c != 0)) {
        `FAssetRegistryState::Dump'::__l2::<lambda_1>::operator()(&local_498,true);
      }
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                ((TStringBuilderBase<wchar_t> *)&local_208,L"--- Begin CachedDependsNodes ---",0x20)
      ;
      `FAssetRegistryState::Dump'::__l2::<lambda_2>::operator()(&local_600);
      local_538.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_538.ArrayNum = 0;
      local_538.ArrayMax = 0;
      TMapBase<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
      ::GenerateValueArray<TSizedDefaultAllocator<32>_>
                ((TMapBase<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
                  *)FVar33,&local_538);
      AlgoImpl::
      IntroSortInternal<FDependsNode_*,int,FIdentityFunctor,TDereferenceWrapper<FDependsNode_*,_FAssetRegistryState::Dump_::__l48::<lambda_9>_>_>
                ((FDependsNode **)local_538.AllocatorInstance.Data,local_538.ArrayNum,local_614,
                 (<lambda_9> *)local_608);
      pFVar28 = (pTVar34->AllocatorInstance).Data;
      pFVar17 = pFVar28 + (longlong)pTVar34->ArrayNum * 0x10;
      FVar31 = local_614;
      FVar33 = (FName)local_538.AllocatorInstance;
      for (; local_538.AllocatorInstance.Data = (FScriptContainerElement *)FVar33,
          pFVar28 != pFVar17; pFVar28 = pFVar28 + 0x10) {
        if (*(int *)(pFVar28 + 8) == 0) {
          pwVar27 = L"";
        }
        else {
          pwVar27 = *(wchar_t **)pFVar28;
        }
        local_614 = FVar31;
        iVar32 = FGenericPlatformStricmp::Stricmp(pwVar27,L"LegacyDependencies");
        if (iVar32 == 0) {
          uVar23 = (ulonglong)local_538.ArrayNum;
          local_338 = L"Hard";
          local_330 = L"Soft";
          local_328 = L"SearchableName";
          local_5a0 = (FName)((longlong)local_538.AllocatorInstance.Data + uVar23 * 8);
          local_598 = 0x2040101;
          local_320 = L"HardManage";
          local_318 = L"SoftManage";
          local_310 = L"References";
          local_594 = 2;
          local_448 = 1;
          local_444 = 2;
          local_43c = 0x100;
          local_438 = 0x200;
          local_590.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_590.ArrayNum = 0;
          local_590.ArrayMax = 0;
          local_5c0 = local_538.ArrayNum;
          uVar29 = uVar23;
          FVar33 = (FName)local_538.AllocatorInstance;
          FVar31 = local_612[0];
          goto LAB_142af09df;
        }
        FVar31 = local_614;
        FVar33 = (FName)local_538.AllocatorInstance;
      }
      uVar23 = (ulonglong)local_538.ArrayNum;
      local_358 = L"Package";
      local_350 = L"SearchableName";
      local_558 = (FName)((longlong)FVar33 + uVar23 * 8);
      local_5b0[0] = 0x20401;
      local_348 = L"Manage";
      local_340 = L"References";
      local_578.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_578.ArrayNum = 0;
      local_578.ArrayMax = 0;
      local_568.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_568.ArrayNum = 0;
      local_568.ArrayMax = 0;
      local_5c0 = local_538.ArrayNum;
      uVar29 = uVar23;
      FVar36 = local_613;
      while( true ) {
        FVar38 = local_558;
        local_540 = FVar33;
        if ((int)uVar23 != (int)uVar29) {
          local_5d4 = 0;
          `TCheckedPointerIterator<FDependsNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_5d4);
        }
        if (FVar33 == FVar38) break;
        FVar33 = *(FName *)FVar33;
        local_5b8 = FVar33;
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                  ((TStringBuilderBase<wchar_t> *)&local_208,L"\t",1);
        FVar38 = *(FName *)((longlong)FVar33 + 8);
        if (FVar38 == (FName)0x0) {
          ::FName::AppendString((FName *)FVar33,(TStringBuilderBase<wchar_t> *)&local_208);
          if (*(FName *)((longlong)FVar33 + 0x10) != (FName)0x0) {
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)&local_208,L".",1);
            pFVar26 = (FName *)((longlong)FVar33 + 0x10);
            goto LAB_142af1216;
          }
        }
        else {
          local_400 = *(FName *)((longlong)FVar33 + 0x10);
          local_4b8 = 0;
          local_408 = FVar38;
          if ((FVar38 != (FName)0x0) && (local_400 != (FName)0x0)) {
            ::FName::AppendString(&local_408,(TStringBuilderBase<wchar_t> *)&local_208);
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)&local_208,L":",1);
            pFVar26 = &local_400;
LAB_142af1216:
            ::FName::AppendString(pFVar26,(TStringBuilderBase<wchar_t> *)&local_208);
          }
        }
        if (*(FName *)((longlong)FVar33 + 0x18) != (FName)0x0) {
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                    ((TStringBuilderBase<wchar_t> *)&local_208,L"::",2);
          ::FName::AppendString
                    ((FName *)((longlong)FVar33 + 0x18),(TStringBuilderBase<wchar_t> *)&local_208);
        }
        `FAssetRegistryState::Dump'::__l2::<lambda_2>::operator()(&local_600);
        local_5a0.ComparisonIndex.Value = 0;
        local_5a0.Number = 0;
        do {
          uVar9 = local_568._8_8_;
          uVar8 = local_578._8_8_;
          EVar3 = *(EDependencyCategory *)((longlong)local_5b0 + (longlong)local_5a0);
          if (EVar3 == None) {
            iVar32 = local_568.ArrayMax;
            local_568._8_8_ = (ulonglong)(uint)local_568.ArrayMax << 0x20;
            if (((longlong)uVar9 < 0) && (iVar32 != 0)) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,0,&local_568.AllocatorInstance,0,&local_568.ArrayMax);
            }
            local_168.RequiredUnions.AllocatorInstance.SecondaryData =
                 (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0;
            local_168.RequiredUnions.ArrayNum = 0;
            local_168.RequiredUnions.ArrayMax = 1;
            local_168.Required = None;
            local_168.Excluded = None;
            FDependsNode::GetReferencers((FDependsNode *)FVar33,&local_568,All,&local_168);
            if (local_168.RequiredUnions.AllocatorInstance.SecondaryData !=
                (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
              FMemory::Free((void *)local_168.RequiredUnions.AllocatorInstance.SecondaryData);
            }
            if (0 < local_568.ArrayNum) {
              TStringBuilderBase<wchar_t>::AppendfImpl
                        ((TStringBuilderBase<wchar_t> *)&local_208,L"\t\t%s");
              pTVar34 = local_5e0;
              if (local_5f8 == 1) {
                pFVar17 = (FScriptContainerElement *)
                          ::FString::ConstructFromPtrSize
                                    (&local_308,(wchar_t *)local_600->_padding_,
                                     (int)(local_600->_padding_ - local_600->_padding_ >> 1));
                pFVar28 = (pTVar34->AllocatorInstance).Data;
                if (((pFVar28 <= pFVar17) &&
                    (pFVar17 < pFVar28 + (longlong)pTVar34->ArrayMax * 0x10)) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar11)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                iVar32 = pTVar34->ArrayNum;
                if (iVar32 == pTVar34->ArrayMax) {
                  iVar32 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,&pTVar34->AllocatorInstance,&pTVar34->ArrayMax);
                }
                pTVar34->ArrayNum = iVar32 + 1;
                pFVar28 = (pTVar34->AllocatorInstance).Data + (longlong)iVar32 * 0x10;
                *(undefined8 *)pFVar28 = 0;
                *(FScriptContainerElement **)pFVar28 =
                     (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar17->field_0x0)->
                     AllocatorInstance).Data;
                (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar17->field_0x0)->
                AllocatorInstance).Data = (FScriptContainerElement *)0x0;
                *(int *)(pFVar28 + 8) = *(int *)&pFVar17[8].field_0x0;
                *(int *)(pFVar28 + 0xc) = *(int *)&pFVar17[0xc].field_0x0;
                *(undefined8 *)&pFVar17[8].field_0x0 = 0;
                if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_308.Data.AllocatorInstance.Data);
                }
                local_600->_padding_ = local_600->_padding_;
              }
              else {
                iVar32 = *local_5f0;
                *local_5f0 = iVar32 + 1;
                if ((local_5f8 == 0) || (iVar32 + 1 < local_5f8)) {
                  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                            ((TStringBuilderBase<wchar_t> *)local_600,L"\r\n",2);
                }
                else {
                  `FAssetRegistryState::Dump'::__l2::<lambda_1>::operator()(local_5e8,false);
                }
              }
              AlgoImpl::
              IntroSortInternal<FDependsNode_*,int,FIdentityFunctor,TDereferenceWrapper<FDependsNode_*,_FAssetRegistryState::Dump_::__l48::<lambda_9>_>_>
                        ((FDependsNode **)local_568.AllocatorInstance.Data,local_568.ArrayNum,FVar31
                         ,(<lambda_9> *)local_608);
              iVar32 = local_568.ArrayNum;
              uVar29 = (ulonglong)local_568.ArrayNum;
              pFVar28 = local_568.AllocatorInstance.Data + uVar29 * 8;
              FVar45.Data = local_568.AllocatorInstance.Data;
              while( true ) {
                if ((int)uVar29 != iVar32) {
                  local_613 = (FIdentityFunctor)0x0;
                  `TCheckedPointerIterator<FDependsNode_*,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(&local_613);
                }
                FVar33 = local_5b8;
                FVar36 = local_613;
                if (FVar45.Data == pFVar28) break;
                pFVar5 = *(FDependsNode **)FVar45.Data;
                TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                          ((TStringBuilderBase<wchar_t> *)&local_208,L"\t\t\t",3);
                FVar33 = (pFVar5->Identifier).PrimaryAssetType.Name;
                if (FVar33 == (FName)0x0) {
                  ::FName::AppendString((FName *)pFVar5,(TStringBuilderBase<wchar_t> *)&local_208);
                  if ((pFVar5->Identifier).ObjectName != (FName)0x0) {
                    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                              ((TStringBuilderBase<wchar_t> *)&local_208,L".",1);
                    pFVar26 = &(pFVar5->Identifier).ObjectName;
                    goto LAB_142af1a9c;
                  }
                }
                else {
                  local_3e0 = (pFVar5->Identifier).ObjectName;
                  local_4c8 = 0;
                  local_3e8 = FVar33;
                  if ((FVar33 != (FName)0x0) && (local_3e0 != (FName)0x0)) {
                    ::FName::AppendString(&local_3e8,(TStringBuilderBase<wchar_t> *)&local_208);
                    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                              ((TStringBuilderBase<wchar_t> *)&local_208,L":",1);
                    pFVar26 = &local_3e0;
LAB_142af1a9c:
                    ::FName::AppendString(pFVar26,(TStringBuilderBase<wchar_t> *)&local_208);
                  }
                }
                if ((pFVar5->Identifier).ValueName != (FName)0x0) {
                  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                            ((TStringBuilderBase<wchar_t> *)&local_208,L"::",2);
                  ::FName::AppendString
                            (&(pFVar5->Identifier).ValueName,
                             (TStringBuilderBase<wchar_t> *)&local_208);
                }
                pTVar34 = local_5e0;
                if (local_5f8 == 1) {
                  pFVar18 = (FScriptContainerElement *)
                            ::FString::ConstructFromPtrSize
                                      (&local_2f8,(wchar_t *)local_600->_padding_,
                                       (int)(local_600->_padding_ - local_600->_padding_ >> 1));
                  pFVar17 = (pTVar34->AllocatorInstance).Data;
                  if (((pFVar17 <= pFVar18) &&
                      (pFVar18 < pFVar17 + (longlong)pTVar34->ArrayMax * 0x10)) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar11)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  iVar12 = pTVar34->ArrayNum;
                  if (iVar12 == pTVar34->ArrayMax) {
                    iVar12 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x810,&pTVar34->AllocatorInstance,&pTVar34->ArrayMax);
                  }
                  pTVar34->ArrayNum = iVar12 + 1;
                  pFVar17 = (pTVar34->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
                  *(undefined8 *)pFVar17 = 0;
                  *(FScriptContainerElement **)pFVar17 =
                       (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar18->field_0x0)->
                       AllocatorInstance).Data;
                  (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar18->field_0x0)->
                  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
                  *(int *)(pFVar17 + 8) = *(int *)&pFVar18[8].field_0x0;
                  *(int *)(pFVar17 + 0xc) = *(int *)&pFVar18[0xc].field_0x0;
                  *(undefined8 *)&pFVar18[8].field_0x0 = 0;
                  if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
                  }
                  FVar45.Data = FVar45.Data + 8;
                  local_600->_padding_ = local_600->_padding_;
                  uVar29 = local_568._8_8_ & 0xffffffff;
                }
                else {
                  iVar12 = *local_5f0;
                  *local_5f0 = iVar12 + 1;
                  if ((local_5f8 == 0) || (iVar12 + 1 < local_5f8)) {
                    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                              ((TStringBuilderBase<wchar_t> *)local_600,L"\r\n",2);
                    uVar29 = local_568._8_8_ & 0xffffffff;
                    FVar45.Data = FVar45.Data + 8;
                  }
                  else {
                    `FAssetRegistryState::Dump'::__l2::<lambda_1>::operator()(local_5e8,false);
                    uVar29 = local_568._8_8_ & 0xffffffff;
                    FVar45.Data = FVar45.Data + 8;
                  }
                }
              }
            }
          }
          else {
            iVar32 = local_578.ArrayMax;
            local_578._8_8_ = (ulonglong)(uint)local_578.ArrayMax << 0x20;
            if (((longlong)uVar8 < 0) && (iVar32 != 0)) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x24,4,0,&local_578.AllocatorInstance,0,&local_578.ArrayMax);
            }
            local_188.RequiredUnions.AllocatorInstance.SecondaryData =
                 (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0;
            local_188.RequiredUnions.ArrayNum = 0;
            local_188.RequiredUnions.ArrayMax = 1;
            local_188.Required = None;
            local_188.Excluded = None;
            FDependsNode::GetDependencies((FDependsNode *)FVar33,&local_578,EVar3,&local_188);
            if (local_188.RequiredUnions.AllocatorInstance.SecondaryData !=
                (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
              FMemory::Free((void *)local_188.RequiredUnions.AllocatorInstance.SecondaryData);
            }
            if (0 < local_578.ArrayNum) {
              TStringBuilderBase<wchar_t>::AppendfImpl
                        ((TStringBuilderBase<wchar_t> *)&local_208,L"\t\t%s");
              pTVar34 = local_5e0;
              if (local_5f8 == 1) {
                pFVar17 = (FScriptContainerElement *)
                          ::FString::ConstructFromPtrSize
                                    (&local_268,(wchar_t *)local_600->_padding_,
                                     (int)(local_600->_padding_ - local_600->_padding_ >> 1));
                pFVar28 = (pTVar34->AllocatorInstance).Data;
                if (((pFVar28 <= pFVar17) &&
                    (pFVar17 < pFVar28 + (longlong)pTVar34->ArrayMax * 0x10)) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar11)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                iVar32 = pTVar34->ArrayNum;
                if (iVar32 == pTVar34->ArrayMax) {
                  iVar32 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,&pTVar34->AllocatorInstance,&pTVar34->ArrayMax);
                }
                pTVar34->ArrayNum = iVar32 + 1;
                pFVar28 = (pTVar34->AllocatorInstance).Data + (longlong)iVar32 * 0x10;
                *(undefined8 *)pFVar28 = 0;
                *(FScriptContainerElement **)pFVar28 =
                     (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar17->field_0x0)->
                     AllocatorInstance).Data;
                (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar17->field_0x0)->
                AllocatorInstance).Data = (FScriptContainerElement *)0x0;
                *(int *)(pFVar28 + 8) = *(int *)&pFVar17[8].field_0x0;
                *(int *)(pFVar28 + 0xc) = *(int *)&pFVar17[0xc].field_0x0;
                *(undefined8 *)&pFVar17[8].field_0x0 = 0;
                if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_268.Data.AllocatorInstance.Data);
                }
                local_600->_padding_ = local_600->_padding_;
              }
              else {
                iVar32 = *local_5f0;
                *local_5f0 = iVar32 + 1;
                if ((local_5f8 == 0) || (iVar32 + 1 < local_5f8)) {
                  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                            ((TStringBuilderBase<wchar_t> *)local_600,L"\r\n",2);
                }
                else {
                  `FAssetRegistryState::Dump'::__l2::<lambda_1>::operator()(local_5e8,false);
                }
              }
              AlgoImpl::
              IntroSortInternal<FAssetDependency,int,FIdentityFunctor,TDereferenceWrapper<FAssetDependency,_FAssetRegistryState::Dump_::__l97::<lambda_10>_>_>
                        ((FAssetDependency *)local_578.AllocatorInstance.Data,local_578.ArrayNum,
                         FVar36,(<lambda_10> *)local_580);
              iVar32 = local_578.ArrayNum;
              uVar29 = (ulonglong)local_578.ArrayNum;
              pFVar2 = (FName *)(local_578.AllocatorInstance.Data + uVar29 * 0x24);
              pFVar26 = (FName *)(local_578.AllocatorInstance.Data + 0x10);
              while( true ) {
                if ((int)uVar29 != iVar32) {
                  local_5d3 = 0;
                  `TCheckedPointerIterator<FAssetDependency,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(&local_5d3);
                }
                FVar33 = local_5b8;
                if (pFVar26 + -2 == pFVar2) break;
                TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                          ((TStringBuilderBase<wchar_t> *)&local_208,L"\t\t\t",3);
                FVar33 = pFVar26[-1];
                if (FVar33 == (FName)0x0) {
                  ::FName::AppendString(pFVar26 + -2,(TStringBuilderBase<wchar_t> *)&local_208);
                  if (*pFVar26 != (FName)0x0) {
                    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                              ((TStringBuilderBase<wchar_t> *)&local_208,L".",1);
                    this_00 = pFVar26;
                    goto LAB_142af154d;
                  }
                }
                else {
                  local_3f0 = *pFVar26;
                  local_4a0 = 0;
                  local_3f8 = FVar33;
                  if ((FVar33 != (FName)0x0) && (local_3f0 != (FName)0x0)) {
                    ::FName::AppendString(&local_3f8,(TStringBuilderBase<wchar_t> *)&local_208);
                    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                              ((TStringBuilderBase<wchar_t> *)&local_208,L":",1);
                    this_00 = &local_3f0;
LAB_142af154d:
                    ::FName::AppendString(this_00,(TStringBuilderBase<wchar_t> *)&local_208);
                  }
                }
                if (pFVar26[1] != (FName)0x0) {
                  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                            ((TStringBuilderBase<wchar_t> *)&local_208,L"::",2);
                  ::FName::AppendString(pFVar26 + 1,(TStringBuilderBase<wchar_t> *)&local_208);
                }
                TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                          ((TStringBuilderBase<wchar_t> *)&local_208,L"\t\t{",3);
                local_5c8[0] = *(undefined1 *)((longlong)&pFVar26[2].ComparisonIndex.Value + 1);
                uVar39 = pFVar26[2].ComparisonIndex.Value;
                local_460 = local_5c8;
                local_458 = &local_208;
                local_450 = &local_5d2;
                local_5d2 = 1;
                if ((uVar39 & 1) != 0) {
                  `UE::AssetRegistry::PropertiesToString'::__l2::<lambda_1>::operator()
                            (&local_460,Hard,L"Hard",L"Soft");
                  `UE::AssetRegistry::PropertiesToString'::__l2::<lambda_1>::operator()
                            (&local_460,Game,L"Game",L"EditorOnly");
                  `UE::AssetRegistry::PropertiesToString'::__l2::<lambda_1>::operator()
                            (&local_460,Build,L"Build",L"NotBuild");
                }
                if ((uVar39 & 2) != 0) {
                  `UE::AssetRegistry::PropertiesToString'::__l2::<lambda_1>::operator()
                            (&local_460,Direct,L"Direct",L"Indirect");
                  `UE::AssetRegistry::PropertiesToString'::__l2::<lambda_1>::operator()
                            (&local_460,CookRule,L"CookRule",L"ChunkOnly");
                }
                TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                          ((TStringBuilderBase<wchar_t> *)&local_208,L"}",1);
                pTVar34 = local_5e0;
                if (local_5f8 == 1) {
                  pFVar17 = (FScriptContainerElement *)
                            ::FString::ConstructFromPtrSize
                                      (&local_258,(wchar_t *)local_600->_padding_,
                                       (int)(local_600->_padding_ - local_600->_padding_ >> 1));
                  pFVar28 = (pTVar34->AllocatorInstance).Data;
                  if (((pFVar28 <= pFVar17) &&
                      (pFVar17 < pFVar28 + (longlong)pTVar34->ArrayMax * 0x10)) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar11)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  iVar12 = pTVar34->ArrayNum;
                  if (iVar12 == pTVar34->ArrayMax) {
                    iVar12 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x810,&pTVar34->AllocatorInstance,&pTVar34->ArrayMax);
                  }
                  pTVar34->ArrayNum = iVar12 + 1;
                  pFVar28 = (pTVar34->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
                  *(undefined8 *)pFVar28 = 0;
                  *(FScriptContainerElement **)pFVar28 =
                       (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar17->field_0x0)->
                       AllocatorInstance).Data;
                  (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar17->field_0x0)->
                  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
                  *(int *)(pFVar28 + 8) = *(int *)&pFVar17[8].field_0x0;
                  *(int *)(pFVar28 + 0xc) = *(int *)&pFVar17[0xc].field_0x0;
                  *(undefined8 *)&pFVar17[8].field_0x0 = 0;
                  if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_258.Data.AllocatorInstance.Data);
                  }
                  pFVar26 = (FName *)&pFVar26[4].Number;
                  local_600->_padding_ = local_600->_padding_;
                  uVar29 = local_578._8_8_ & 0xffffffff;
                }
                else {
                  iVar12 = *local_5f0;
                  *local_5f0 = iVar12 + 1;
                  if ((local_5f8 == 0) || (iVar12 + 1 < local_5f8)) {
                    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                              ((TStringBuilderBase<wchar_t> *)local_600,L"\r\n",2);
                    uVar29 = local_578._8_8_ & 0xffffffff;
                    pFVar26 = (FName *)&pFVar26[4].Number;
                  }
                  else {
                    `FAssetRegistryState::Dump'::__l2::<lambda_1>::operator()(local_5e8,false);
                    uVar29 = local_578._8_8_ & 0xffffffff;
                    pFVar26 = (FName *)&pFVar26[4].Number;
                  }
                }
              }
            }
          }
          local_5a0 = (FName)((longlong)local_5a0 + 1);
        } while ((longlong)local_5a0 < 4);
        uVar23 = local_538._8_8_ & 0xffffffff;
        FVar33 = (FName)((longlong)local_540 + 8);
        uVar29 = (ulonglong)local_5c0;
      }
      FVar45.Data = local_578.AllocatorInstance.Data;
      if (local_568.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_568.AllocatorInstance.Data);
        FVar45.Data = local_578.AllocatorInstance.Data;
      }
LAB_142af1c74:
      if ((FAssetDependency *)FVar45.Data != (FAssetDependency *)0x0) {
        FMemory::Free(FVar45.Data);
      }
      pFVar42 = local_528;
      TStringBuilderBase<wchar_t>::AppendfImpl
                ((TStringBuilderBase<wchar_t> *)&local_208,
                 L"--- End CachedDependsNodes : %d entries ---");
      `FAssetRegistryState::Dump'::__l2::<lambda_2>::operator()(&local_600);
      FVar33 = (FName)local_538.AllocatorInstance;
    }
    if (FVar33 != (FName)0x0) {
      FMemory::Free((void *)FVar33);
    }
    pTVar34 = local_5a8;
    if (local_616 == '\0') goto LAB_142af1cca;
LAB_142af1d42:
    iVar32 = local_610;
    if ((1 < local_610) && (local_60c != 0)) {
      `FAssetRegistryState::Dump'::__l2::<lambda_1>::operator()(&local_498,true);
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              ((TStringBuilderBase<wchar_t> *)&local_208,L"--- Begin CachedPackageData ---",0x1f);
    `FAssetRegistryState::Dump'::__l2::<lambda_2>::operator()(&local_600);
    local_4f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4f0.ArrayNum = 0;
    local_4f0.ArrayMax = 0;
    TMapBase<FName,FAssetPackageData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>_>
    ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
              ((TMapBase<FName,FAssetPackageData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>_>
                *)&pFVar42->CachedPackageData,&local_4f0);
    AlgoImpl::
    IntroSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,FNameLexicalLess>_>
              ((FName *)local_4f0.AllocatorInstance.Data,local_4f0.ArrayNum,local_5cd,
               (FNameLexicalLess *)&local_5cd);
    iVar12 = local_4f0.ArrayNum;
    uVar29 = (ulonglong)local_4f0.ArrayNum;
    pFVar26 = (FName *)(local_4f0.AllocatorInstance.Data + uVar29 * 8);
    FVar45.Data = local_4f0.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar29 != iVar12) {
        local_5d1 = 0;
        `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_5d1)
        ;
      }
      if ((FName *)FVar45.Data == pFVar26) break;
      pTVar19 = TSet<TTuple<FName,FAssetPackageData_*>,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,FAssetPackageData_*>,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>,FDefaultSetAllocator>
                        *)&pFVar42->CachedPackageData,*(FName *)FVar45.Data);
      if ((pTVar19 == (TTuple<FName,FAssetPackageData_*> *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x27b,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((ulonglong)local_208._padding_ < (FDependencyQuery *)(local_208._padding_ + 2)) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_208,1);
      }
      pvVar20 = FGenericPlatformString::Memcpy((void *)local_208._padding_,L"\t",2);
      local_208._padding_ = (longlong)pvVar20 + 2;
      ::FName::AppendString((FName *)FVar45.Data,(TStringBuilderBase<wchar_t> *)&local_208);
      if ((ulonglong)local_208._padding_ < (FDependencyQuery *)(local_208._padding_ + 6U)) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_208,3);
      }
      pvVar20 = FGenericPlatformString::Memcpy((void *)local_208._padding_,L" : ",6);
      local_208._padding_ = (longlong)pvVar20 + 6;
      uStack_360 = 0x14;
      local_f8 = 0;
      local_368 = (uchar *)&local_108;
      local_108 = 0;
      uStack_100 = 0;
      local_2e8._12_4_ = uStack_35c;
      local_2e8.ArrayNum = 0x14;
      local_2e8.DataPtr = local_368;
      UE::String::BytesToHexLower(&local_2e8,(TStringBuilderBase<wchar_t> *)&local_208);
      TStringBuilderBase<wchar_t>::AppendfImpl
                ((TStringBuilderBase<wchar_t> *)&local_208,L" : %d bytes");
      pTVar34 = local_5e0;
      if (local_5f8 == 1) {
        pFVar17 = (FScriptContainerElement *)
                  ::FString::ConstructFromPtrSize
                            (&local_2d8,(wchar_t *)local_600->_padding_,
                             (int)(local_600->_padding_ - local_600->_padding_ >> 1));
        pFVar28 = (pTVar34->AllocatorInstance).Data;
        if (((pFVar28 <= pFVar17) && (pFVar17 < pFVar28 + (longlong)pTVar34->ArrayMax * 0x10)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar13 = pTVar34->ArrayNum;
        if (iVar13 == pTVar34->ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar34->AllocatorInstance,&pTVar34->ArrayMax);
        }
        pTVar34->ArrayNum = iVar13 + 1;
        pFVar28 = (pTVar34->AllocatorInstance).Data + (longlong)iVar13 * 0x10;
        *(undefined8 *)pFVar28 = 0;
        *(FScriptContainerElement **)pFVar28 =
             (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar17->field_0x0)->
             AllocatorInstance).Data;
        (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar17->field_0x0)->AllocatorInstance).
        Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar28 + 8) = *(int *)&pFVar17[8].field_0x0;
        *(int *)(pFVar28 + 0xc) = *(int *)&pFVar17[0xc].field_0x0;
        *(undefined8 *)&pFVar17[8].field_0x0 = 0;
        if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
        }
        FVar45.Data = FVar45.Data + 8;
        local_600->_padding_ = local_600->_padding_;
        uVar29 = local_4f0._8_8_ & 0xffffffff;
      }
      else {
        iVar13 = *local_5f0;
        *local_5f0 = iVar13 + 1;
        if ((local_5f8 == 0) || (iVar13 + 1 < local_5f8)) {
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                    ((TStringBuilderBase<wchar_t> *)local_600,L"\r\n",2);
          uVar29 = local_4f0._8_8_ & 0xffffffff;
          FVar45.Data = FVar45.Data + 8;
        }
        else {
          `FAssetRegistryState::Dump'::__l2::<lambda_1>::operator()(local_5e8,false);
          uVar29 = local_4f0._8_8_ & 0xffffffff;
          FVar45.Data = FVar45.Data + 8;
        }
      }
    }
    TStringBuilderBase<wchar_t>::AppendfImpl
              ((TStringBuilderBase<wchar_t> *)&local_208,
               L"--- End CachedPackageData : %d entries ---");
    `FAssetRegistryState::Dump'::__l2::<lambda_2>::operator()(&local_600);
    if ((FName *)local_4f0.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_4f0.AllocatorInstance.Data);
    }
    pTVar34 = local_5a8;
    if (local_616 != '\0') {
LAB_142af20fe:
      FVar44.Value = 0;
      if ((1 < iVar32) && (local_60c != 0)) {
        `FAssetRegistryState::Dump'::__l2::<lambda_1>::operator()(&local_498,true);
      }
      if ((ulonglong)local_208._padding_ < (FDependencyQuery *)(local_208._padding_ + 0x34)) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_208,0x1a);
      }
      pvVar20 = FGenericPlatformString::Memcpy
                          ((void *)local_208._padding_,L"--- Begin AssetBundles ---",0x34);
      local_208._padding_ = (longlong)pvVar20 + 0x34;
      `FAssetRegistryState::Dump'::__l2::<lambda_2>::operator()(&local_600);
      `FAssetRegistryState::Dump'::__l2::<lambda_6>::operator()(&local_3d8);
      uVar29 = (ulonglong)(int)(uint)local_508;
      local_5a8 = (TArray<FString,TSizedDefaultAllocator<32>_> *)
                  CONCAT44(local_5a8._4_4_,(uint)local_508);
      local_4c0 = (FName)((longlong)local_510 + uVar29 * 8);
      FVar33 = local_510;
      while( true ) {
        FVar38 = local_4c0;
        local_5b8 = FVar33;
        if ((uint)local_508 != (int)uVar29) {
          local_5d0 = 0;
          `TCheckedPointerIterator<FAssetData_const_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_5d0);
        }
        if (FVar33 == FVar38) break;
        local_5a0 = *(FName *)FVar33;
        local_558 = *(FName *)((longlong)local_5a0 + 0x40);
        if (local_558 != (FName)0x0) {
          local_5c0 = *(uint *)((longlong)local_558 + 8);
          uVar29 = (ulonglong)(int)local_5c0;
          pFVar42 = *(FAssetRegistryState **)local_558;
          local_540.ComparisonIndex.Value = FVar44.Value + 1;
          local_528 = (FAssetRegistryState *)
                      ((longlong)&(pFVar42->CachedAssets).Hash + uVar29 * 0x18 + -0x38);
          piVar46 = (int *)&(pFVar42->CachedAssets).Elements.field_0x10;
          while( true ) {
            pFVar10 = local_528;
            FVar33 = local_5a0;
            if (*(int *)((longlong)local_558 + 8) != (int)uVar29) {
              local_5cf = 0;
              `TCheckedPointerIterator<FAssetBundleEntry,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_5cf);
            }
            if (pFVar42 == pFVar10) break;
            if ((ulonglong)local_208._padding_ < (FDependencyQuery *)(local_208._padding_ + 0x12)) {
              TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_208,9);
            }
            pvVar20 = FGenericPlatformString::Memcpy((void *)local_208._padding_,L"  Owner: ",0x12);
            local_208._padding_ = (longlong)pvVar20 + 0x12;
            UE::AssetRegistry::Private::ConcatenateOuterPathAndObjectName
                      ((TStringBuilderBase<wchar_t> *)&local_208,*(FName *)FVar33,
                       *(FName *)((longlong)FVar33 + 0x10));
            pTVar21 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                                ((TStringBuilderBase<wchar_t> *)&local_208,L" BundleName: ",0xd);
            ::FName::AppendString((FName *)pFVar42,pTVar21);
            pTVar34 = local_5e0;
            if (local_5f8 == 1) {
              pFVar17 = (FScriptContainerElement *)
                        ::FString::ConstructFromPtrSize
                                  (&local_2c8,(wchar_t *)local_600->_padding_,
                                   (int)(local_600->_padding_ - local_600->_padding_ >> 1));
              pFVar28 = (pTVar34->AllocatorInstance).Data;
              if (((pFVar28 <= pFVar17) && (pFVar17 < pFVar28 + (longlong)pTVar34->ArrayMax * 0x10))
                 && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar11)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar32 = pTVar34->ArrayNum;
              if (iVar32 == pTVar34->ArrayMax) {
                iVar32 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&pTVar34->AllocatorInstance,&pTVar34->ArrayMax);
              }
              pTVar34->ArrayNum = iVar32 + 1;
              pFVar28 = (pTVar34->AllocatorInstance).Data + (longlong)iVar32 * 0x10;
              *(undefined8 *)pFVar28 = 0;
              *(FScriptContainerElement **)pFVar28 =
                   (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar17->field_0x0)->
                   AllocatorInstance).Data;
              (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar17->field_0x0)->
              AllocatorInstance).Data = (FScriptContainerElement *)0x0;
              *(int *)(pFVar28 + 8) = *(int *)&pFVar17[8].field_0x0;
              *(int *)(pFVar28 + 0xc) = *(int *)&pFVar17[0xc].field_0x0;
              *(undefined8 *)&pFVar17[8].field_0x0 = 0;
              if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
              }
              local_600->_padding_ = local_600->_padding_;
            }
            else {
              iVar32 = *local_5f0;
              *local_5f0 = iVar32 + 1;
              if ((local_5f8 == 0) || (iVar32 + 1 < local_5f8)) {
                TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                          ((TStringBuilderBase<wchar_t> *)local_600,L"\r\n",2);
              }
              else {
                `FAssetRegistryState::Dump'::__l2::<lambda_1>::operator()(local_5e8,false);
              }
            }
            iVar32 = *piVar46;
            this_01 = *(FTopLevelAssetPath **)(piVar46 + -2);
            pFVar43 = this_01 + iVar32;
            while( true ) {
              if (*piVar46 != iVar32) {
                local_5cc[0] = 0;
                `TCheckedPointerIterator<FTopLevelAssetPath_const_,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_5cc);
              }
              if (this_01 == pFVar43) break;
              if ((ulonglong)local_208._padding_ < (FDependencyQuery *)(local_208._padding_ + 8)) {
                TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_208,4);
              }
              pvVar20 = FGenericPlatformString::Memcpy((void *)local_208._padding_,L"    ",8);
              local_208._padding_ = (longlong)pvVar20 + 8;
              FTopLevelAssetPath::AppendString(this_01,(TStringBuilderBase<wchar_t> *)&local_208);
              pTVar34 = local_5e0;
              if (local_5f8 == 1) {
                pFVar17 = (FScriptContainerElement *)
                          ::FString::ConstructFromPtrSize
                                    (&local_2b8,(wchar_t *)local_600->_padding_,
                                     (int)(local_600->_padding_ - local_600->_padding_ >> 1));
                pFVar28 = (pTVar34->AllocatorInstance).Data;
                if (((pFVar28 <= pFVar17) &&
                    (pFVar17 < pFVar28 + (longlong)pTVar34->ArrayMax * 0x10)) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar11)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                iVar12 = pTVar34->ArrayNum;
                if (iVar12 == pTVar34->ArrayMax) {
                  iVar12 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,&pTVar34->AllocatorInstance,&pTVar34->ArrayMax);
                }
                pTVar34->ArrayNum = iVar12 + 1;
                pFVar28 = (pTVar34->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
                *(undefined8 *)pFVar28 = 0;
                *(FScriptContainerElement **)pFVar28 =
                     (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar17->field_0x0)->
                     AllocatorInstance).Data;
                (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar17->field_0x0)->
                AllocatorInstance).Data = (FScriptContainerElement *)0x0;
                *(int *)(pFVar28 + 8) = *(int *)&pFVar17[8].field_0x0;
                *(int *)(pFVar28 + 0xc) = *(int *)&pFVar17[0xc].field_0x0;
                *(undefined8 *)&pFVar17[8].field_0x0 = 0;
                if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
                }
                this_01 = this_01 + 1;
                local_600->_padding_ = local_600->_padding_;
              }
              else {
                iVar12 = *local_5f0;
                *local_5f0 = iVar12 + 1;
                if ((local_5f8 == 0) || (iVar12 + 1 < local_5f8)) {
                  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                            ((TStringBuilderBase<wchar_t> *)local_600,L"\r\n",2);
                  this_01 = this_01 + 1;
                }
                else {
                  `FAssetRegistryState::Dump'::__l2::<lambda_1>::operator()(local_5e8,false);
                  this_01 = this_01 + 1;
                }
              }
            }
            pFVar42 = (FAssetRegistryState *)&(pFVar42->CachedAssets).Elements.field_0x18;
            piVar46 = piVar46 + 6;
            uVar29 = (ulonglong)local_5c0;
          }
          FVar33 = local_5b8;
          FVar44.Value = local_540.ComparisonIndex.Value;
        }
        uVar29 = (ulonglong)local_5a8 & 0xffffffff;
        FVar33 = (FName)((longlong)FVar33 + 8);
      }
      TStringBuilderBase<wchar_t>::AppendfImpl
                ((TStringBuilderBase<wchar_t> *)&local_208,L"--- End AssetBundles : %d entries ---")
      ;
      `FAssetRegistryState::Dump'::__l2::<lambda_2>::operator()(&local_600);
      iVar32 = local_610;
      goto LAB_142af25f0;
    }
  }
  pFVar28 = (pTVar34->AllocatorInstance).Data;
  pFVar17 = pFVar28 + (longlong)pTVar34->ArrayNum * 0x10;
  for (; pFVar28 != pFVar17; pFVar28 = pFVar28 + 0x10) {
    if (*(int *)(pFVar28 + 8) == 0) {
      pwVar27 = L"";
    }
    else {
      pwVar27 = *(wchar_t **)pFVar28;
    }
    iVar12 = FGenericPlatformStricmp::Stricmp(pwVar27,L"AssetBundles");
    if (iVar12 == 0) goto LAB_142af20fe;
  }
LAB_142af25f0:
  if (0 < (int)(local_208._padding_ - local_208._padding_ >> 1)) {
    if (iVar32 == 1) {
      `FAssetRegistryState::Dump'::__l2::<lambda_2>::operator()(&local_600);
    }
    else {
      `FAssetRegistryState::Dump'::__l2::<lambda_1>::operator()(&local_498,true);
    }
  }
  if (local_510 != (FName)0x0) {
    FMemory::Free((void *)local_510);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_148);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)&local_208);
  return;
LAB_142af09df:
  FVar38 = local_5a0;
  lVar41 = 0;
  local_5b8 = FVar33;
  if ((int)uVar23 != (int)uVar29) {
    local_5d5 = 0;
    `TCheckedPointerIterator<FDependsNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
              (&local_5d5);
  }
  FVar45.Data = local_590.AllocatorInstance.Data;
  if (FVar33 == FVar38) goto LAB_142af1c74;
  FVar33 = *(FName *)FVar33;
  local_558 = FVar33;
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>((TStringBuilderBase<wchar_t> *)&local_208,L"\t",1);
  FVar38 = *(FName *)((longlong)FVar33 + 8);
  if (FVar38 == (FName)0x0) {
    ::FName::AppendString((FName *)FVar33,(TStringBuilderBase<wchar_t> *)&local_208);
    if (*(longlong *)((longlong)FVar33 + 0x10) != 0) {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                ((TStringBuilderBase<wchar_t> *)&local_208,L".",1);
      pFVar26 = (FName *)((longlong)FVar33 + 0x10);
      goto LAB_142af0ab9;
    }
  }
  else {
    local_420 = *(FName *)((longlong)FVar33 + 0x10);
    local_4b0 = 0;
    local_428 = FVar38;
    if ((FVar38 != (FName)0x0) && (local_420 != (FName)0x0)) {
      ::FName::AppendString(&local_428,(TStringBuilderBase<wchar_t> *)&local_208);
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                ((TStringBuilderBase<wchar_t> *)&local_208,L":",1);
      pFVar26 = &local_420;
LAB_142af0ab9:
      ::FName::AppendString(pFVar26,(TStringBuilderBase<wchar_t> *)&local_208);
    }
  }
  if (*(longlong *)((longlong)FVar33 + 0x18) != 0) {
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              ((TStringBuilderBase<wchar_t> *)&local_208,L"::",2);
    ::FName::AppendString
              ((FName *)((longlong)FVar33 + 0x18),(TStringBuilderBase<wchar_t> *)&local_208);
  }
  `FAssetRegistryState::Dump'::__l2::<lambda_2>::operator()(&local_600);
  do {
    uVar8 = local_590._8_8_;
    iVar32 = local_590.ArrayMax;
    EVar3 = *(EDependencyCategory *)((longlong)&local_598 + lVar41);
    uVar39 = (&local_448)[lVar41];
    local_590._8_8_ = (ulonglong)(uint)local_590.ArrayMax << 0x20;
    if (((longlong)uVar8 < 0) && (iVar32 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&local_590.AllocatorInstance,0,&local_590.ArrayMax);
    }
    if (EVar3 == None) {
      local_1a8.RequiredUnions.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0;
      local_1a8.RequiredUnions.ArrayNum = 0;
      local_1a8.RequiredUnions.ArrayMax = 1;
      local_1a8.Required = None;
      local_1a8.Excluded = None;
      FDependsNode::GetReferencers((FDependsNode *)FVar33,&local_590,All,&local_1a8);
      FVar25 = local_1a8.RequiredUnions.AllocatorInstance.SecondaryData;
    }
    else {
      local_1c8.RequiredUnions.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0;
      local_1c8.RequiredUnions.ArrayNum = 0;
      local_1c8.RequiredUnions.ArrayMax = 1;
      if ((uVar39 & 0x40) == 0) {
        local_1c8.Required =
             (EDependencyProperty)(uVar39 >> 2) & Build | (EDependencyProperty)(uVar39 >> 1) & Game;
      }
      else {
        uVar39 = uVar39 & 0xffffffc3;
        local_1c8.Required = None;
        local_617 = 6;
        if (((&local_1c8.RequiredUnions <= &local_617) &&
            (&local_617 < &local_1c8.RequiredUnions.AllocatorInstance.field_0x1)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (local_1c8.RequiredUnions.ArrayNum == local_1c8.RequiredUnions.ArrayMax) {
          local_1c8.RequiredUnions.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::AssetRegistry::EDependencyProperty>_>
                         (0x101,&local_1c8.RequiredUnions.AllocatorInstance,
                          &local_1c8.RequiredUnions.ArrayMax);
        }
        FVar25 = (ForElementType<UE::AssetRegistry::EDependencyProperty>)&local_1c8.RequiredUnions;
        if (local_1c8.RequiredUnions.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
          FVar25 = local_1c8.RequiredUnions.AllocatorInstance.SecondaryData;
        }
        lVar24 = (longlong)local_1c8.RequiredUnions.ArrayNum;
        local_1c8.RequiredUnions.ArrayNum = local_1c8.RequiredUnions.ArrayNum + 1;
        *(undefined1 *)(lVar24 + (longlong)FVar25) = local_617;
      }
      local_1c8.Required =
           local_1c8.Required |
           (EDependencyProperty)(uVar39 >> 6) & CookRule |
           (EDependencyProperty)(uVar39 >> 5) & Direct | (EDependencyProperty)uVar39 & Hard;
      local_1c8.Excluded =
           (EDependencyProperty)(uVar39 >> 7) & CookRule |
           (EDependencyProperty)(uVar39 >> 6) & Direct | (EDependencyProperty)(uVar39 >> 3) & Build
           | (EDependencyProperty)(uVar39 >> 2) & Game | (EDependencyProperty)(uVar39 >> 1) & Hard;
      FDependsNode::GetDependencies((FDependsNode *)FVar33,&local_590,EVar3,&local_1c8);
      FVar25 = local_1c8.RequiredUnions.AllocatorInstance.SecondaryData;
    }
    if (FVar25 != (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
      FMemory::Free((void *)FVar25);
    }
    if (0 < local_590.ArrayNum) {
      TStringBuilderBase<wchar_t>::AppendfImpl((TStringBuilderBase<wchar_t> *)&local_208,L"\t\t%s");
      pTVar34 = local_5e0;
      if (local_5f8 == 1) {
        pFVar17 = (FScriptContainerElement *)
                  ::FString::ConstructFromPtrSize
                            (&local_288,(wchar_t *)local_600->_padding_,
                             (int)(local_600->_padding_ - local_600->_padding_ >> 1));
        pFVar28 = (pTVar34->AllocatorInstance).Data;
        if (((pFVar28 <= pFVar17) && (pFVar17 < pFVar28 + (longlong)pTVar34->ArrayMax * 0x10)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar32 = pTVar34->ArrayNum;
        if (iVar32 == pTVar34->ArrayMax) {
          iVar32 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar34->AllocatorInstance,&pTVar34->ArrayMax);
        }
        pTVar34->ArrayNum = iVar32 + 1;
        pFVar28 = (pTVar34->AllocatorInstance).Data + (longlong)iVar32 * 0x10;
        *(undefined8 *)pFVar28 = 0;
        *(FScriptContainerElement **)pFVar28 =
             (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar17->field_0x0)->
             AllocatorInstance).Data;
        (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar17->field_0x0)->AllocatorInstance).
        Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar28 + 8) = *(int *)&pFVar17[8].field_0x0;
        *(int *)(pFVar28 + 0xc) = *(int *)&pFVar17[0xc].field_0x0;
        *(undefined8 *)&pFVar17[8].field_0x0 = 0;
        if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_288.Data.AllocatorInstance.Data);
        }
        local_600->_padding_ = local_600->_padding_;
      }
      else {
        iVar32 = *local_5f0;
        *local_5f0 = iVar32 + 1;
        if ((local_5f8 == 0) || (iVar32 + 1 < local_5f8)) {
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                    ((TStringBuilderBase<wchar_t> *)local_600,L"\r\n",2);
        }
        else {
          `FAssetRegistryState::Dump'::__l2::<lambda_1>::operator()(local_5e8,false);
        }
      }
      AlgoImpl::
      IntroSortInternal<FDependsNode_*,int,FIdentityFunctor,TDereferenceWrapper<FDependsNode_*,_FAssetRegistryState::Dump_::__l48::<lambda_9>_>_>
                ((FDependsNode **)local_590.AllocatorInstance.Data,local_590.ArrayNum,FVar31,
                 (<lambda_9> *)local_608);
      iVar32 = local_590.ArrayNum;
      uVar29 = (ulonglong)local_590.ArrayNum;
      pFVar1 = (FAssetDependency *)(local_590.AllocatorInstance.Data + uVar29 * 8);
      FVar45.Data = local_590.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar29 != iVar32) {
          local_612[0] = (FIdentityFunctor)0x0;
          `TCheckedPointerIterator<FDependsNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_612);
        }
        FVar33 = local_558;
        FVar31 = local_612[0];
        if ((FAssetDependency *)FVar45.Data == pFVar1) break;
        FVar33 = (((FAssetDependency *)FVar45.Data)->AssetId).PackageName;
        if ((ulonglong)local_208._padding_ < (FDependencyQuery *)(local_208._padding_ + 6)) {
          TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_208,3);
        }
        pvVar20 = FGenericPlatformString::Memcpy((void *)local_208._padding_,L"\t\t\t",6);
        local_208._padding_ = (longlong)pvVar20 + 6;
        FVar38 = *(FName *)&((FName *)((longlong)FVar33 + 8))->ComparisonIndex;
        if (FVar38 == (FName)0x0) {
          ::FName::AppendString((FName *)FVar33,(TStringBuilderBase<wchar_t> *)&local_208);
          lVar24._0_4_ = ((FName *)((longlong)FVar33 + 0x10))->ComparisonIndex;
          lVar24._4_4_ = ((FName *)((longlong)FVar33 + 0x10))->Number;
          if (lVar24 != 0) {
            if ((ulonglong)local_208._padding_ < (FDependencyQuery *)(local_208._padding_ + 2)) {
              TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_208,1);
            }
            pvVar20 = FGenericPlatformString::Memcpy((void *)local_208._padding_,L".",2);
            pFVar26 = (FName *)((longlong)FVar33 + 0x10);
            goto LAB_142af0fe3;
          }
        }
        else {
          local_410 = *(FName *)&((FName *)((longlong)FVar33 + 0x10))->ComparisonIndex;
          local_4a8 = 0;
          local_418 = FVar38;
          if ((FVar38 != (FName)0x0) && (local_410 != (FName)0x0)) {
            ::FName::AppendString(&local_418,(TStringBuilderBase<wchar_t> *)&local_208);
            if ((ulonglong)local_208._padding_ < (FDependencyQuery *)(local_208._padding_ + 2)) {
              TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_208,1);
            }
            pvVar20 = FGenericPlatformString::Memcpy((void *)local_208._padding_,L":",2);
            pFVar26 = &local_410;
LAB_142af0fe3:
            local_208._padding_ = (longlong)pvVar20 + 2;
            ::FName::AppendString(pFVar26,(TStringBuilderBase<wchar_t> *)&local_208);
          }
        }
        lVar4._0_4_ = ((FName *)((longlong)FVar33 + 0x18))->ComparisonIndex;
        lVar4._4_4_ = ((FName *)((longlong)FVar33 + 0x18))->Number;
        if (lVar4 != 0) {
          if ((ulonglong)local_208._padding_ < (FDependencyQuery *)(local_208._padding_ + 4)) {
            TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_208,2);
          }
          pvVar20 = FGenericPlatformString::Memcpy((void *)local_208._padding_,L"::",4);
          local_208._padding_ = (longlong)pvVar20 + 4;
          ::FName::AppendString
                    ((FName *)((longlong)FVar33 + 0x18),(TStringBuilderBase<wchar_t> *)&local_208);
        }
        pTVar34 = local_5e0;
        if (local_5f8 == 1) {
          pFVar17 = (FScriptContainerElement *)
                    ::FString::ConstructFromPtrSize
                              (&local_278,(wchar_t *)local_600->_padding_,
                               (int)(local_600->_padding_ - local_600->_padding_ >> 1));
          pFVar28 = (pTVar34->AllocatorInstance).Data;
          if (((pFVar28 <= pFVar17) && (pFVar17 < pFVar28 + (longlong)pTVar34->ArrayMax * 0x10)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar12 = pTVar34->ArrayNum;
          if (iVar12 == pTVar34->ArrayMax) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&pTVar34->AllocatorInstance,&pTVar34->ArrayMax);
          }
          pTVar34->ArrayNum = iVar12 + 1;
          pFVar28 = (pTVar34->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
          *(undefined8 *)pFVar28 = 0;
          *(FScriptContainerElement **)pFVar28 =
               (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar17->field_0x0)->
               AllocatorInstance).Data;
          (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar17->field_0x0)->AllocatorInstance).
          Data = (FScriptContainerElement *)0x0;
          *(int *)(pFVar28 + 8) = *(int *)&pFVar17[8].field_0x0;
          *(int *)(pFVar28 + 0xc) = *(int *)&pFVar17[0xc].field_0x0;
          *(undefined8 *)&pFVar17[8].field_0x0 = 0;
          if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_278.Data.AllocatorInstance.Data);
          }
          FVar45.Data = (FScriptContainerElement *)
                        &(((FAssetDependency *)FVar45.Data)->AssetId).PrimaryAssetType;
          local_600->_padding_ = local_600->_padding_;
          uVar29 = local_590._8_8_ & 0xffffffff;
        }
        else {
          iVar12 = *local_5f0;
          *local_5f0 = iVar12 + 1;
          if ((local_5f8 == 0) || (iVar12 + 1 < local_5f8)) {
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)local_600,L"\r\n",2);
            uVar29 = local_590._8_8_ & 0xffffffff;
            FVar45.Data = (FScriptContainerElement *)
                          &(((FAssetDependency *)FVar45.Data)->AssetId).PrimaryAssetType;
          }
          else {
            `FAssetRegistryState::Dump'::__l2::<lambda_1>::operator()(local_5e8,false);
            uVar29 = local_590._8_8_ & 0xffffffff;
            FVar45.Data = (FScriptContainerElement *)
                          &(((FAssetDependency *)FVar45.Data)->AssetId).PrimaryAssetType;
          }
        }
      }
    }
    lVar41 = lVar41 + 1;
  } while (lVar41 < 6);
  uVar23 = local_538._8_8_ & 0xffffffff;
  FVar33 = (FName)((longlong)local_5b8 + 8);
  uVar29 = (ulonglong)local_5c0;
  goto LAB_142af09df;
}

// EnumerateAllAssets @ 142af2d10

void __thiscall
FAssetRegistryState::EnumerateAllAssets
          (FAssetRegistryState *this,TFunctionRef<void___cdecl(FAssetData_const_&)> *param_1,
          EEnumerateAssetsFlags param_2)

{
  TFunctionRef<void___cdecl(FAssetData_const_&)> *local_res10 [3];
  code *local_18;
  TFunctionRef<void___cdecl(FAssetData_const_&)> **local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FAssetRegistryState::EnumerateAllAssets'::__l2::<lambda_1>,void,FAssetData_&>
             ::Call;
  local_res10[0] = param_1;
  EnumerateAllMutableAssets(this,(TFunctionRef<void___cdecl(FAssetData_&)> *)&local_18,param_2);
  return;
}

// EnumerateAllAssets @ 142af2d50

bool __thiscall
FAssetRegistryState::EnumerateAllAssets
          (FAssetRegistryState *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1,
          TFunctionRef<bool___cdecl(FAssetData_const_&)> *param_2,EEnumerateAssetsFlags param_3)

{
  code *local_38;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> **local_30;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_28;
  TFunctionRef<bool___cdecl(FAssetData_const_&)> *local_20;
  FAssetRegistryState *local_18;
  
  local_30 = &local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`FAssetRegistryState::EnumerateAllAssets'::__l2::<lambda_1>,void,FAssetData_&>
             ::Call;
  local_28 = param_1;
  local_20 = param_2;
  local_18 = this;
  EnumerateAllMutableAssets(this,(TFunctionRef<void___cdecl(FAssetData_&)> *)&local_38,param_3);
  return true;
}

// EnumerateAllMutableAssets @ 142af2d90

void __thiscall
FAssetRegistryState::EnumerateAllMutableAssets
          (FAssetRegistryState *this,TFunctionRef<void___cdecl(FAssetData_&)> *param_1,
          EEnumerateAssetsFlags param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  FAssetRegistryState *pFVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  EEnumerateAssetsFlags EVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  <lambda_1> local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 uStack_12c;
  FAssetRegistryState *local_110;
  TFunctionRef<void___cdecl(FAssetData_&)> *local_108;
  EEnumerateAssetsFlags local_100;
  undefined1 local_fc;
  undefined1 local_fb;
  FAssetRegistryState *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  FAssetRegistryState *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  FAssetRegistryState *local_98;
  TFunctionRef<void___cdecl(FAssetData_&)> *local_90;
  code *local_88;
  FAssetRegistryState **local_80;
  TArrayView<std::nullptr_t,int> local_78;
  code *local_68;
  FAssetRegistryState **local_60;
  undefined4 local_3c;
  
  local_80 = &local_98;
  EVar8 = param_2 & AllowUnfilteredArAssets;
  local_fc = EVar8 != None;
  local_fb = (param_2 & AllowUnmountedPaths) != None;
  if ((EVar8 == None) || ((param_2 & AllowUnmountedPaths) == None)) {
    if ((param_2 & Parallel) == None) {
      iVar12 = *(int *)&(this->CachedAssets).Elements.field_0x28;
      puVar1 = &(this->CachedAssets).Elements.field_0x10;
      iVar13 = 0;
      uVar6 = 1;
      iVar15 = 0;
      iVar10 = 0;
      iVar7 = 0;
      if (iVar12 != 0) {
        puVar16 = *(uint **)&(this->CachedAssets).Elements.field_0x20;
        if (puVar16 == (uint *)0x0) {
          puVar16 = (uint *)puVar1;
        }
        uVar11 = *puVar16;
        while (uVar11 == 0) {
          lVar9 = (longlong)iVar13;
          iVar15 = iVar15 + 0x20;
          iVar13 = iVar13 + 1;
          if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) {
            iVar10 = *(int *)&(this->CachedAssets).Elements.field_0x28;
            iVar7 = iVar12;
            goto LAB_142af3146;
          }
          uVar11 = puVar16[lVar9 + 1];
        }
        iVar10 = *(int *)&(this->CachedAssets).Elements.field_0x28;
        uVar6 = -uVar11 & uVar11;
        uVar2 = (ulonglong)uVar6 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar7 = iVar15 + -1 + (int)lVar9;
        if (iVar10 < iVar7) {
          iVar7 = iVar12;
        }
      }
LAB_142af3146:
      uVar11 = *(uint *)&(this->CachedAssets).Elements.field_0x28;
      uVar17 = uVar11 & 0xffffffe0;
      TStack_c0._padding_ = CONCAT44(uVar6,iVar13);
      TStack_c0.CurrentBitIndex = iVar7;
      TStack_c0.UnvisitedBitMask = 0xffffffff;
      iVar12 = (int)uVar11 >> 5;
      TStack_c0._28_4_ = iVar7;
      TStack_c0.BaseBitIndex = iVar15;
      uStack_a0 = CONCAT44(uStack_12c,
                           *(int *)&(this->CachedAssets).Elements.field_0x8 -
                           *(int *)&(this->CachedAssets).Elements.field_0x34);
      local_c8 = this;
      TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar11 < 0) || (iVar10 < (int)uVar11)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar6 = *(uint *)&(this->CachedAssets).Elements.field_0x28;
      if (uVar11 != uVar6) {
        puVar14 = *(undefined1 **)&(this->CachedAssets).Elements.field_0x20;
        if (puVar14 == (undefined1 *)0x0) {
          puVar14 = puVar1;
        }
        uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar12 * 4);
        while (uVar11 == 0) {
          lVar9 = (longlong)iVar12;
          uVar17 = uVar17 + 0x20;
          iVar12 = iVar12 + 1;
          uVar11 = uVar6;
          if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
          goto LAB_142af3260;
          uVar11 = *(uint *)(puVar14 + lVar9 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        uVar11 = (int)lVar9 + -1 + uVar17;
        if ((int)uVar6 < (int)uVar11) {
          uVar11 = uVar6;
        }
      }
LAB_142af3260:
      while( true ) {
        pFVar4 = local_c8;
        if (*(int *)&(local_c8->CachedAssets).Elements.field_0x8 -
            *(int *)&(local_c8->CachedAssets).Elements.field_0x34 != (int)uStack_a0) {
          local_res20[0] = 0;
          `TSparseArray<TSparseSetElement<FAssetData_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (((TStack_c0.CurrentBitIndex == uVar11) &&
            (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar4 == this)
           ) break;
        lVar9 = *(longlong *)
                 (*(longlong *)&(pFVar4->CachedAssets).Elements +
                 (longlong)TStack_c0.CurrentBitIndex * 0x10);
        if ((lVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("AssetData",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistryState.cpp"
                               ,0x714,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((EVar8 != None) ||
           (bVar5 = UE::AssetRegistry::FFiltering::ShouldSkipAsset
                              ((FTopLevelAssetPath *)(lVar9 + 0x20),*(uint *)(lVar9 + 0x34)), !bVar5
           )) {
          (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,lVar9);
        }
        TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
      }
    }
    else {
      local_68 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FAssetRegistryState::EnumerateAllMutableAssets'::__l26::<lambda_2>,void,int>
                 ::Call;
      local_60 = &local_110;
      local_78.DataPtr = (void **)0x0;
      local_78.ArrayNum = 0;
      local_110 = this;
      local_108 = param_1;
      local_100 = param_2;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",*(int *)&(this->CachedAssets).Elements.field_0x8,1,
                 (TFunctionRef<void___cdecl(int)> *)&local_68,local_res18[0],None,&local_78);
    }
  }
  else if ((param_2 & Parallel) == None) {
    iVar12 = *(int *)&(this->CachedAssets).Elements.field_0x28;
    puVar1 = &(this->CachedAssets).Elements.field_0x10;
    iVar13 = 0;
    uVar6 = 1;
    iVar15 = 0;
    iVar10 = 0;
    iVar7 = 0;
    if (iVar12 != 0) {
      puVar16 = *(uint **)&(this->CachedAssets).Elements.field_0x20;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)puVar1;
      }
      uVar11 = *puVar16;
      while (uVar11 == 0) {
        lVar9 = (longlong)iVar13;
        iVar15 = iVar15 + 0x20;
        iVar13 = iVar13 + 1;
        if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) {
          iVar10 = *(int *)&(this->CachedAssets).Elements.field_0x28;
          iVar7 = iVar12;
          goto LAB_142af2ea6;
        }
        uVar11 = puVar16[lVar9 + 1];
      }
      iVar10 = *(int *)&(this->CachedAssets).Elements.field_0x28;
      uVar6 = -uVar11 & uVar11;
      uVar2 = (ulonglong)uVar6 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = iVar15 + -1 + (int)lVar9;
      if (iVar10 < iVar7) {
        iVar7 = iVar12;
      }
    }
LAB_142af2ea6:
    uVar11 = *(uint *)&(this->CachedAssets).Elements.field_0x28;
    uVar17 = uVar11 & 0xffffffe0;
    TStack_f0._padding_ = CONCAT44(uVar6,iVar13);
    TStack_f0.CurrentBitIndex = iVar7;
    TStack_f0.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar11 >> 5;
    TStack_f0._28_4_ = local_3c;
    TStack_f0.BaseBitIndex = iVar15;
    uStack_d0 = CONCAT44(uStack_12c,
                         *(int *)&(this->CachedAssets).Elements.field_0x8 -
                         *(int *)&(this->CachedAssets).Elements.field_0x34);
    local_f8 = this;
    TStack_f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar11 < 0) || (iVar10 < (int)uVar11)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar6 = *(uint *)&(this->CachedAssets).Elements.field_0x28;
    if (uVar11 != uVar6) {
      puVar14 = *(undefined1 **)&(this->CachedAssets).Elements.field_0x20;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = puVar1;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar12 * 4);
      while (uVar11 == 0) {
        lVar9 = (longlong)iVar12;
        uVar17 = uVar17 + 0x20;
        iVar12 = iVar12 + 1;
        uVar11 = uVar6;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_142af2fb0;
        uVar11 = *(uint *)(puVar14 + lVar9 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar11 = (int)lVar9 + -1 + uVar17;
      if ((int)uVar6 < (int)uVar11) {
        uVar11 = uVar6;
      }
    }
LAB_142af2fb0:
    while( true ) {
      pFVar4 = local_f8;
      if (*(int *)&(local_f8->CachedAssets).Elements.field_0x8 -
          *(int *)&(local_f8->CachedAssets).Elements.field_0x34 != (int)uStack_d0) {
        local_res18[0] = (<lambda_1>)0x0;
        `TSparseArray<TSparseSetElement<FAssetData_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_f0.CurrentBitIndex == uVar11) &&
          (TStack_f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar4 == this))
      break;
      lVar9 = *(longlong *)
               (*(longlong *)&(pFVar4->CachedAssets).Elements +
               (longlong)TStack_f0.CurrentBitIndex * 0x10);
      if ((lVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("AssetData",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistryState.cpp"
                             ,0x6f5,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,lVar9);
      TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
    }
  }
  else {
    local_88 = UE::Core::Private::Function::
               TFunctionRefCaller<`FAssetRegistryState::EnumerateAllMutableAssets'::__l8::<lambda_1>,void,int>
               ::Call;
    local_98 = this;
    local_90 = param_1;
    ParallelFor(*(int *)&(this->CachedAssets).Elements.field_0x8,
                (TFunctionRef<void___cdecl(int)> *)&local_88,None);
  }
  return;
}

// EnumerateAllPaths @ 142af3320

void __thiscall
FAssetRegistryState::EnumerateAllPaths
          (FAssetRegistryState *this,TFunctionRef<void___cdecl(FName)> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined8 local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar11 = 0;
  puVar1 = &(this->CachedAssetsByPath).field_0x10;
  iVar3 = *(int *)&(this->CachedAssetsByPath).field_0x28;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->CachedAssetsByPath).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_142af33cd;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_142af33cd:
  uVar10 = *(uint *)&(this->CachedAssetsByPath).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->CachedAssetsByPath).field_0x8 -
                       *(int *)&(this->CachedAssetsByPath).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->CachedAssetsByPath).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->CachedAssetsByPath).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_142af34d0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_142af34d0:
  while( true ) {
    if (*(int *)&(this->CachedAssetsByPath).field_0x8 -
        *(int *)&(this->CachedAssetsByPath).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_res20 = *(undefined8 *)
                   ((longlong)TStack_60.CurrentBitIndex * 0x20 +
                   *(longlong *)&this->CachedAssetsByPath);
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_res20);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// EnumerateAssets @ 142af3560

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FAssetRegistryState::EnumerateAssets
          (FAssetRegistryState *this,FARCompiledFilter *param_1,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_2,
          TFunctionRef<bool___cdecl(FAssetData_const_&)> *param_3,EEnumerateAssetsFlags param_4)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *plVar5;
  ForElementType<FSetElementId> FVar6;
  code *pcVar7;
  FAssetRegistryState *pFVar8;
  bool bVar9;
  undefined1 uVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  ForElementType<FSetElementId> FVar16;
  ForAnyElementType FVar17;
  undefined1 *puVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 local_res10 [16];
  TFunctionRef<bool___cdecl(FAssetData_const_&)> *local_res20;
  TArray<FAssetData_const_*,TSizedDefaultAllocator<32>_> local_f8;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  uint local_d8;
  uint local_d4;
  FAssetRegistryState *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  int local_a0;
  int local_9c;
  <lambda_2> local_98;
  <lambda_3> local_90;
  <lambda_4> local_88;
  <lambda_5> local_80;
  <lambda_6> local_78;
  FAssetRegistryState *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  if (((((((*(int *)&(param_1->TagsAndValues).field_0x8 ==
            *(int *)&(param_1->TagsAndValues).field_0x34 &&
           *(int *)&(param_1->ClassPaths).Elements.field_0x8 ==
           *(int *)&(param_1->ClassPaths).Elements.field_0x34) &&
          *(int *)&(param_1->SoftObjectPaths).Elements.field_0x8 ==
          *(int *)&(param_1->SoftObjectPaths).Elements.field_0x34) &&
         *(int *)&(param_1->PackagePaths).Elements.field_0x8 ==
         *(int *)&(param_1->PackagePaths).Elements.field_0x34) &&
        *(int *)&(param_1->PackageNames).Elements.field_0x8 ==
        *(int *)&(param_1->PackageNames).Elements.field_0x34) && param_1->WithPackageFlags == 0) &&
       param_1->WithoutPackageFlags == 0) ||
     (local_res20 = param_3, bVar9 = UE::AssetRegistry::Utils::IsFilterValid(param_1), !bVar9)) {
    return false;
  }
  local_d4 = param_1->WithoutPackageFlags;
  local_d8 = param_1->WithPackageFlags;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  iVar12 = *(int *)&(param_1->SoftObjectPaths).Elements.field_0x8 -
           *(int *)&(param_1->SoftObjectPaths).Elements.field_0x34;
  if (((((iVar12 < 1) ||
        (local_98.Filter = param_1,
        UE::AssetRegistry::Private::
        FilterAssets<_FAssetRegistryState::EnumerateAssets_::__l8::<lambda_2>_>
                  (&local_f8,&this->CachedAssets,&param_1->SoftObjectPaths,&local_98,iVar12),
        local_f8.ArrayNum != 0)) &&
       ((iVar12 = *(int *)&(param_1->PackageNames).Elements.field_0x8 -
                  *(int *)&(param_1->PackageNames).Elements.field_0x34, iVar12 < 1 ||
        (local_90.Filter = param_1,
        UE::AssetRegistry::Private::
        FilterAssets<TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FName,_FAssetRegistryState::EnumerateAssets_::__l14::<lambda_3>_>
                  (&local_f8,&this->CachedAssetsByPackageName,&param_1->PackageNames,&local_90,
                   iVar12,&this->CachedAssets), local_f8.ArrayNum != 0)))) &&
      ((iVar12 = *(int *)&(param_1->PackagePaths).Elements.field_0x8 -
                 *(int *)&(param_1->PackagePaths).Elements.field_0x34, iVar12 < 1 ||
       (local_88.Filter = param_1,
       UE::AssetRegistry::Private::
       FilterAssets<TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FName,_FAssetRegistryState::EnumerateAssets_::__l20::<lambda_4>_>
                 (&local_f8,&this->CachedAssetsByPath,&param_1->PackagePaths,&local_88,iVar12,
                  &this->CachedAssets), local_f8.ArrayNum != 0)))) &&
     ((iVar12 = *(int *)&(param_1->TagsAndValues).field_0x8 -
                *(int *)&(param_1->TagsAndValues).field_0x34, iVar12 < 1 ||
      (local_80.Filter = param_1,
      UE::AssetRegistry::Private::
      FilterAssetsByCachedClassesByTag<_FAssetRegistryState::EnumerateAssets_::__l26::<lambda_5>_>
                (&local_f8,&this->CachedClassesByTag,&this->CachedAssetsByClass,
                 &param_1->TagsAndValues,&local_80,iVar12,&this->CachedAssets),
      local_f8.ArrayNum != 0)))) {
    iVar12 = *(int *)&(param_1->ClassPaths).Elements.field_0x8 -
             *(int *)&(param_1->ClassPaths).Elements.field_0x34;
    if (iVar12 < 1) {
      if (local_f8.ArrayNum == 0) {
        uVar13 = *(int *)&(this->CachedAssets).Elements.field_0x8 -
                 *(int *)&(this->CachedAssets).Elements.field_0x34;
        if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
        }
        if (local_f8.ArrayMax < (int)uVar13) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar13,&local_f8.AllocatorInstance,0,&local_f8.ArrayMax);
        }
        iVar12 = *(int *)&(this->CachedAssets).Elements.field_0x28;
        puVar1 = &(this->CachedAssets).Elements.field_0x10;
        iStack_c8 = 0;
        local_b0 = 0;
        iStack_b4 = 0;
        uStack_c4 = 1;
        if (iVar12 != 0) {
          puVar19 = *(uint **)&(this->CachedAssets).Elements.field_0x20;
          if (puVar19 == (uint *)0x0) {
            puVar19 = (uint *)puVar1;
          }
          uStack_c4 = *puVar19;
          while (uStack_c4 == 0) {
            lVar15 = (longlong)iStack_c8;
            local_b0 = local_b0 + 0x20;
            iStack_c8 = iStack_c8 + 1;
            iStack_b4 = iVar12;
            uStack_c4 = 1;
            if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c8)
            goto LAB_142af381d;
            uStack_c4 = puVar19[lVar15 + 1];
          }
          uStack_c4 = -uStack_c4 & uStack_c4;
          uVar3 = (ulonglong)uStack_c4 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          local_a0 = (int)lVar15;
          iStack_b4 = local_b0 + -1 + local_a0;
          if (iVar12 < iStack_b4) {
            iStack_b4 = iVar12;
          }
        }
LAB_142af381d:
        uVar13 = *(uint *)&(this->CachedAssets).Elements.field_0x28;
        uVar20 = uVar13 & 0xffffffe0;
        iStack_a8 = *(int *)&(this->CachedAssets).Elements.field_0x8 -
                    *(int *)&(this->CachedAssets).Elements.field_0x34;
        uStack_b8 = 0xffffffff;
        TStack_68._padding_ = CONCAT44(uStack_c4,iStack_c8);
        TStack_68.CurrentBitIndex = iStack_b4;
        TStack_68.UnvisitedBitMask = 0xffffffff;
        iVar12 = (int)uVar13 >> 5;
        TStack_68._28_4_ = iStack_b4;
        TStack_68.BaseBitIndex = local_b0;
        uStack_48 = CONCAT44(uStack_a4,iStack_a8);
        local_d0 = this;
        local_c0 = puVar1;
        iStack_ac = iStack_b4;
        local_70 = this;
        TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
        if (((int)uVar13 < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
        uVar4 = *(uint *)&(this->CachedAssets).Elements.field_0x28;
        if (uVar13 != uVar4) {
          puVar18 = *(undefined1 **)&(this->CachedAssets).Elements.field_0x20;
          if (puVar18 == (undefined1 *)0x0) {
            puVar18 = puVar1;
          }
          uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar12 * 4);
          while (uVar13 == 0) {
            lVar15 = (longlong)iVar12;
            uVar20 = uVar20 + 0x20;
            iVar12 = iVar12 + 1;
            uVar13 = uVar4;
            if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
            goto LAB_142af3911;
            uVar13 = *(uint *)(puVar18 + lVar15 * 4 + 4);
          }
          uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
          lVar15 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          local_9c = (int)lVar15;
          uVar13 = local_9c + -1 + uVar20;
          if ((int)uVar4 < (int)uVar13) {
            uVar13 = uVar4;
          }
        }
LAB_142af3911:
        while( true ) {
          pFVar8 = local_70;
          if (*(int *)&(local_70->CachedAssets).Elements.field_0x8 -
              *(int *)&(local_70->CachedAssets).Elements.field_0x34 != (int)uStack_48) {
            local_res10[0] = 0;
            `TSparseArray<TSparseSetElement<FAssetData_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
          }
          if (((TStack_68.CurrentBitIndex == uVar13) &&
              (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
             (pFVar8 == this)) break;
          local_e0 = *(undefined8 *)
                      (*(longlong *)&(pFVar8->CachedAssets).Elements +
                      (longlong)TStack_68.CurrentBitIndex * 0x10);
          if (((local_f8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_e0) &&
              ((FScriptContainerElement *)&local_e0 <
               local_f8.AllocatorInstance.Data + (longlong)local_f8.ArrayMax * 8)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar7 = (code *)swi(3);
            uVar10 = (*pcVar7)();
            return (bool)uVar10;
          }
          if (local_f8.ArrayNum == local_f8.ArrayMax) {
            local_f8.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_f8.AllocatorInstance,&local_f8.ArrayMax);
          }
          lVar15 = (longlong)local_f8.ArrayNum;
          local_f8.ArrayNum = local_f8.ArrayNum + 1;
          *(undefined8 *)(local_f8.AllocatorInstance.Data + lVar15 * 8) = local_e0;
          TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
        }
      }
    }
    else {
      local_78.Filter = param_1;
      UE::AssetRegistry::Private::
      FilterAssets<TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FTopLevelAssetPath,_FAssetRegistryState::EnumerateAssets_::__l32::<lambda_6>_>
                (&local_f8,&this->CachedAssetsByClass,&param_1->ClassPaths,&local_78,iVar12,
                 &this->CachedAssets);
      if (local_f8.ArrayNum == 0) goto LAB_142af374d;
    }
    iVar12 = local_f8.ArrayNum;
    pFVar2 = local_f8.AllocatorInstance.Data + (longlong)local_f8.ArrayNum * 8;
    FVar17.Data = local_f8.AllocatorInstance.Data;
    while( true ) {
      if (local_f8.ArrayNum != iVar12) {
        `TCheckedPointerIterator<FAssetData_const_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_e8);
      }
      if (FVar17.Data == pFVar2) break;
      plVar5 = *(longlong **)FVar17.Data;
      lVar15 = *plVar5;
      uVar13 = ::GetTypeHash((FNameEntryId)(uint)lVar15);
      if (*(int *)&(param_2->Elements).field_0x8 != *(int *)&(param_2->Elements).field_0x34) {
        FVar6 = (param_2->Hash).SecondaryData;
        FVar16 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar6 != (ForElementType<FSetElementId>)0x0) {
          FVar16 = FVar6;
        }
        iVar14 = *(int *)((longlong)FVar16 +
                         (ulonglong)
                         (param_2->HashSize - 1U & (int)((ulonglong)lVar15 >> 0x20) + uVar13) * 4);
        if (iVar14 != -1) {
          do {
            if (*(longlong *)(*(longlong *)&param_2->Elements + (longlong)iVar14 * 0x10) == lVar15)
            goto LAB_142af3aba;
            iVar14 = *(int *)(*(longlong *)&param_2->Elements + 8 + (longlong)iVar14 * 0x10);
          } while (iVar14 != -1);
        }
      }
      iVar14 = -1;
LAB_142af3aba:
      uVar13 = *(uint *)((longlong)plVar5 + 0x34);
      if (((iVar14 == -1 && ((uVar13 & local_d8) == local_d8 && (local_d4 & uVar13) == 0)) &&
          (((param_4 & AllowUnfilteredArAssets) != None ||
           (bVar9 = UE::AssetRegistry::FFiltering::ShouldSkipAsset
                              ((FTopLevelAssetPath *)(plVar5 + 4),uVar13), !bVar9)))) &&
         (cVar11 = (**(code **)local_res20)(*(undefined8 *)&local_res20->field_0x8,plVar5),
         cVar11 == '\0')) break;
      FVar17.Data = FVar17.Data + 8;
    }
  }
LAB_142af374d:
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  return true;
}

// EnumerateAssetsByTagName @ 142af3b50

void __thiscall
FAssetRegistryState::EnumerateAssetsByTagName
          (FAssetRegistryState *this,FName param_1,
          TFunctionRef<bool___cdecl(FAssetData_const_*)> *param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>
  *pTVar9;
  TTuple<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_> *pTVar10;
  FValueId *pFVar11;
  FString *pFVar12;
  longlong *plVar13;
  longlong lVar14;
  uint uVar15;
  ForAnyElementType FVar16;
  int iVar17;
  ForAnyElementType *pFVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  longlong *plVar20;
  longlong *plVar21;
  uint uVar22;
  undefined1 local_res20 [8];
  undefined1 local_d8 [8];
  ForAnyElementType local_d0;
  int local_c8 [2];
  longlong *local_c0;
  uint uStack_b8;
  uint uStack_b4;
  TBitArray<FDefaultBitArrayAllocator> *local_b0;
  undefined4 uStack_a8;
  uint uStack_a4;
  uint local_a0;
  uint uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  int local_90;
  int local_8c;
  longlong local_88;
  longlong *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  pTVar9 = TSet<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                   *)&this->CachedClassesByTag,param_1);
  plVar13 = (longlong *)0x0;
  plVar21 = (longlong *)&pTVar9->field_0x8;
  if (pTVar9 == (TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>
                 *)0x0) {
    plVar21 = plVar13;
  }
  if (plVar21 != (longlong *)0x0) {
    uStack_b8 = 0;
    uStack_b4 = 1;
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar21 + 2);
    local_d0.Data = (FScriptContainerElement *)0x0;
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_a0 = 0;
    uVar4 = *(uint *)(plVar21 + 5);
    uStack_a4 = uStack_b8;
    if (uVar4 != 0) {
      pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)plVar21[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar21[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar19 = pTVar1;
      }
      uVar15 = *(uint *)(pTVar19->AllocatorInstance).InlineData;
      plVar20 = plVar13;
      local_a0 = 0;
      uStack_b8 = 0;
      while (uVar15 == 0) {
        iVar17 = (int)plVar13;
        local_a0 = (int)plVar20 + 0x20;
        plVar20 = (longlong *)(ulonglong)local_a0;
        uStack_b8 = iVar17 + 1;
        plVar13 = (longlong *)(ulonglong)uStack_b8;
        uStack_a4 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_b8)
        goto LAB_142af3c3e;
        uVar15 = *(uint *)((pTVar19->AllocatorInstance).InlineData + (longlong)iVar17 * 4 + 4);
      }
      uStack_b4 = -uVar15 & uVar15;
      uVar3 = (ulonglong)uStack_b4 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_90 = (int)lVar14;
      uStack_a4 = (local_a0 - 1) + local_90;
      if ((int)uVar4 < (int)uStack_a4) {
        uStack_a4 = uVar4;
      }
    }
LAB_142af3c3e:
    uVar15 = *(uint *)(plVar21 + 5);
    uVar22 = uVar15 & 0xffffffe0;
    iStack_98 = (int)plVar21[1] - *(int *)((longlong)plVar21 + 0x34);
    uStack_a8 = 0xffffffff;
    TStack_78._padding_ = CONCAT44(uStack_b4,uStack_b8);
    TStack_78.CurrentBitIndex = uStack_a4;
    TStack_78.UnvisitedBitMask = 0xffffffff;
    iVar17 = (int)uVar15 >> 5;
    TStack_78._28_4_ = uStack_a4;
    TStack_78.BaseBitIndex = local_a0;
    uStack_58 = CONCAT44(uStack_94,iStack_98);
    local_c0 = plVar21;
    local_b0 = pTVar1;
    uStack_9c = uStack_a4;
    local_80 = plVar21;
    TStack_78.Array = pTVar1;
    if ((((int)uVar15 < 0) || ((int)uVar4 < (int)uVar15)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar4 = *(uint *)(plVar21 + 5);
    if (uVar15 != uVar4) {
      pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)plVar21[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar21[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar19 = pTVar1;
      }
      uVar15 = -1 << ((byte)uVar15 & 0x1f) &
               *(uint *)((pTVar19->AllocatorInstance).InlineData + (longlong)iVar17 * 4);
      while (uVar15 == 0) {
        lVar14 = (longlong)iVar17;
        uVar22 = uVar22 + 0x20;
        iVar17 = iVar17 + 1;
        uVar15 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
        goto LAB_142af3d3f;
        uVar15 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar14 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_8c = (int)lVar14;
      uVar15 = local_8c + -1 + uVar22;
      if ((int)uVar4 < (int)uVar15) {
        uVar15 = uVar4;
      }
    }
LAB_142af3d3f:
    while( true ) {
      plVar13 = local_80;
      if ((int)local_80[1] - *(int *)((longlong)local_80 + 0x34) != (int)uStack_58) {
        local_res20[0] = 0;
        `TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (((TStack_78.CurrentBitIndex == uVar15) && (TStack_78.Array == pTVar1)) &&
         (plVar13 == plVar21)) break;
      pTVar10 = TSet<TTuple<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)&this->CachedAssetsByClass,
                       (FTopLevelAssetPath *)(*plVar13 + (longlong)TStack_78.CurrentBitIndex * 0x18)
                      );
      pFVar18 = (ForAnyElementType *)&pTVar10->field_0x10;
      if (pTVar10 ==
          (TTuple<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_> *)0x0) {
        pFVar18 = (ForAnyElementType *)0x0;
      }
      if (pFVar18 != (ForAnyElementType *)0x0) {
        if ((&local_d0 == pFVar18) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar17 = *(int *)&pFVar18[1].Data;
        if (iVar17 != 0) {
          iVar8 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,8,iVar17,&local_d0,local_c8,local_c8 + 1);
          memcpy(local_d0.Data + (longlong)iVar8 * 8,pFVar18->Data,(longlong)iVar17 << 3);
        }
      }
      TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
    }
    iVar17 = local_c8[0];
    pFVar2 = local_d0.Data + (longlong)local_c8[0] * 8;
    FVar16.Data = local_d0.Data;
    while( true ) {
      if (local_c8[0] != iVar17) {
        `TCheckedPointerIterator<FAssetData_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_d8);
      }
      if (FVar16.Data == pFVar2) break;
      lVar14 = *(longlong *)FVar16.Data;
      if ((*(byte *)(lVar14 + 0x38) & 1) == 0) {
        if (*(TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess> **)(lVar14 + 0x38)
            == (TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess> *)0x0)
        goto LAB_142af3eac;
        pFVar12 = TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::Find
                            (*(TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess> **
                              )(lVar14 + 0x38),param_1);
      }
      else {
        pFVar11 = FixedTagPrivate::FMapHandle::FindValue((FMapHandle *)(lVar14 + 0x38),param_1);
        if (pFVar11 == (FValueId *)0x0) {
LAB_142af3eac:
          pFVar12 = (FString *)0x0;
        }
        else {
          pFVar12 = (FString *)
                    (((ulonglong)*(ushort *)(lVar14 + 0x38) & 0xfffffffffffffffc |
                     0xfffffffe00000000) << 0x1e | (ulonglong)(uint)*pFVar11);
        }
      }
      if ((pFVar12 != (FString *)0x0) &&
         (local_88 = lVar14,
         cVar7 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_88), cVar7 == '\0'))
      break;
      FVar16.Data = FVar16.Data + 8;
    }
    if (local_d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data);
    }
  }
  return;
}

// EnumerateMutableAssetsByPackageName @ 142af3f20

void __thiscall
FAssetRegistryState::EnumerateMutableAssetsByPackageName
          (FAssetRegistryState *this,FName param_1,TFunctionRef<bool___cdecl(FAssetData_*)> *param_2
          )

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  TTuple<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
  *pTVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined8 local_res8;
  
  pTVar4 = TSet<TTuple<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
                   *)&this->CachedAssetsByPackageName,param_1);
  puVar5 = (undefined8 *)&pTVar4->field_0x8;
  if (pTVar4 == (TTuple<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  if (puVar5 != (undefined8 *)0x0) {
    piVar6 = (int *)&pTVar4->field_0x18;
    if ((undefined8 *)puVar5[1] != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)puVar5[1];
    }
    if (pTVar4 == (TTuple<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                   *)0x0) {
      piVar6 = (int *)&DAT_00000010;
    }
    iVar2 = *piVar6;
    puVar1 = puVar5 + iVar2;
    while( true ) {
      if (*piVar6 != iVar2) {
        `TCheckedPointerIterator<FAssetData_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (puVar5 == puVar1) break;
      local_res8 = *puVar5;
      cVar3 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_res8);
      if (cVar3 == '\0') {
        return;
      }
      puVar5 = puVar5 + 1;
    }
  }
  return;
}

// EnumerateTagToAssetDatas @ 142af3fd0

void __thiscall
FAssetRegistryState::EnumerateTagToAssetDatas
          (FAssetRegistryState *this,
          TFunctionRef<bool___cdecl(FName,TFunctionRef<bool___cdecl(TFunctionRef<bool___cdecl(FAssetData_const_*)>)>)>
          *param_1)

{
  undefined1 *puVar1;
  TMap<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  TMap<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>_>
  *pTVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_9c;
  undefined8 local_98;
  TMap<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined8 *local_60;
  FAssetRegistryState *local_58;
  code *local_50;
  undefined8 **local_48;
  
  iVar14 = 0;
  puVar1 = &(this->CachedClassesByTag).field_0x10;
  iVar4 = *(int *)&(this->CachedClassesByTag).field_0x28;
  pTVar2 = &this->CachedClassesByTag;
  uVar9 = 1;
  iVar16 = 0;
  iVar10 = 0;
  if (iVar4 != 0) {
    puVar17 = *(uint **)&(this->CachedClassesByTag).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar10 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_142af407e;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar9 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uVar9 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iVar10 = iVar16 + -1 + local_res20;
    if (iVar4 < iVar10) {
      iVar10 = iVar4;
    }
  }
LAB_142af407e:
  uVar13 = *(uint *)&(this->CachedClassesByTag).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_88._padding_ = CONCAT44(uVar9,iVar14);
  TStack_88.CurrentBitIndex = iVar10;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_88._28_4_ = iVar10;
  TStack_88.BaseBitIndex = iVar16;
  uStack_68 = CONCAT44(uStack_9c,
                       *(int *)&(this->CachedClassesByTag).field_0x8 -
                       *(int *)&(this->CachedClassesByTag).field_0x34);
  local_90 = pTVar2;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar9 = *(uint *)&(this->CachedClassesByTag).field_0x28;
  if (uVar13 != uVar9) {
    puVar15 = *(undefined1 **)&(this->CachedClassesByTag).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_142af4190;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar9 < (int)uVar13) {
      uVar13 = uVar9;
    }
  }
LAB_142af4190:
  while( true ) {
    pTVar6 = local_90;
    if (*(int *)&local_90->field_0x8 - *(int *)&local_90->field_0x34 != (int)uStack_68) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_88.CurrentBitIndex == uVar13) &&
        (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == pTVar2))
    break;
    local_60 = (undefined8 *)(*(longlong *)pTVar6 + (longlong)TStack_88.CurrentBitIndex * 0x60);
    local_50 = UE::Core::Private::Function::
               TFunctionRefCaller<`FAssetRegistryState::EnumerateTagToAssetDatas'::__l6::<lambda_1>,bool,TFunctionRef<bool___cdecl(FAssetData_const_*)>_>
               ::Call;
    local_48 = &local_60;
    local_98 = *local_60;
    local_58 = this;
    cVar8 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_98,&local_50);
    if (cVar8 == '\0') {
      return;
    }
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
  return;
}

// FilterBundles @ 142af4760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

TSharedPtr<FAssetBundleData,1> * __cdecl
FAssetRegistryState::FilterBundles
          (TSharedPtr<FAssetBundleData,1> *__return_storage_ptr__,
          TSharedPtr<FAssetBundleData,1> *param_1,FAssetRegistrySerializationOptions *param_2)

{
  undefined1 *puVar1;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  uint *puVar6;
  undefined1 *puVar7;
  code *pcVar8;
  FAssetRegistrySerializationOptions *pFVar9;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar10;
  bool bVar11;
  bool bVar12;
  atomic<int> aVar13;
  TSharedPtr<FAssetBundleData,1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  longlong lVar16;
  wchar_t *pwVar17;
  int iVar18;
  FAssetBundleEntry *pFVar19;
  TReferenceControllerBase<1> *pTVar20;
  uint uVar21;
  TReferenceControllerBase<1> *pTVar22;
  uint uVar23;
  FAssetBundleData *pFVar24;
  undefined1 *puVar25;
  uint *puVar26;
  uint uVar27;
  undefined1 auStackY_988 [32];
  TReferenceControllerBase<1> local_930;
  undefined1 local_920 [4];
  uint local_91c;
  TSharedPtr<FAssetBundleData,1> *local_918;
  FAssetBundleData *local_910;
  TSharedPtr<FAssetBundleData,1> *local_908;
  int local_900;
  int local_8fc;
  FAssetRegistrySerializationOptions *local_8f8;
  longlong local_8f0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_8e8;
  uint uStack_8e0;
  uint uStack_8dc;
  undefined1 *local_8d8;
  undefined4 uStack_8d0;
  uint uStack_8cc;
  uint local_8c8;
  undefined4 uStack_8c4;
  int iStack_8c0;
  undefined4 uStack_8bc;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_8b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_8b0;
  undefined8 uStack_890;
  undefined4 local_86c;
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1024];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_988;
  if (param_1->Object == (FAssetBundleData *)0x0) {
LAB_142af4dc0:
    __return_storage_ptr__->Object = param_1->Object;
    pTVar22 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar22;
    if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar22->SharedReferenceCount = (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
      UNLOCK();
    }
    return __return_storage_ptr__;
  }
  uVar27 = 0;
  local_930._padding_ = 0;
  local_930.SharedReferenceCount = (atomic<int>)0x0;
  local_930.WeakReferenceCount = (atomic<int>)0x0;
  uVar23 = (param_1->Object->Bundles).ArrayNum;
  local_918 = __return_storage_ptr__;
  local_908 = param_1;
  local_8f8 = param_2;
  if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
  }
  if (0 < (int)uVar23) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar23,(ForAnyElementType *)&local_930,0,(int *)&local_930.WeakReferenceCount)
    ;
  }
  bVar12 = false;
  if ((param_1->Object == (FAssetBundleData *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    pTVar14 = (TSharedPtr<FAssetBundleData,1> *)(*pcVar8)();
    return pTVar14;
  }
  pFVar24 = param_1->Object;
  local_910 = pFVar24;
LAB_142af4833:
  pTVar22 = (TReferenceControllerBase<1> *)0x0;
  if ((-1 < (int)uVar27) && ((int)uVar27 < (pFVar24->Bundles).ArrayNum)) {
    local_868.Base = local_848;
    local_868.bIsDynamic = false;
    local_868.bIsExternal = false;
    local_868.CurPos = local_848;
    local_868.End = (wchar_t *)local_48;
    local_91c = ~uVar27 >> 0x1f;
    if (((int)uVar27 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      pTVar14 = (TSharedPtr<FAssetBundleData,1> *)(*pcVar8)();
      return pTVar14;
    }
    local_8f0 = (longlong)(int)uVar27 * 0x18;
    ::FName::AppendString
              ((FName *)((pFVar24->Bundles).AllocatorInstance.Data + local_8f0),&local_868);
    pFVar9 = local_8f8;
    uStack_8e0 = 0;
    uStack_8dc = 1;
    puVar1 = &(local_8f8->AssetBundlesDenyList).Elements.field_0x10;
    uVar23 = *(uint *)&(local_8f8->AssetBundlesDenyList).Elements.field_0x28;
    pTVar2 = &local_8f8->AssetBundlesDenyList;
    uStack_8cc = uStack_8e0;
    local_8c8 = uStack_8e0;
    if (uVar23 != 0) {
      puVar6 = *(uint **)&(local_8f8->AssetBundlesDenyList).Elements.field_0x20;
      puVar26 = (uint *)puVar1;
      if (puVar6 != (uint *)0x0) {
        puVar26 = puVar6;
      }
      uVar21 = *puVar26;
      pTVar15 = pTVar22;
      while( true ) {
        uStack_8e0 = (uint)pTVar22;
        local_8c8 = (uint)pTVar15;
        if (uVar21 != 0) break;
        lVar16 = (longlong)(int)uStack_8e0;
        local_8c8 = local_8c8 + 0x20;
        pTVar15 = (TReferenceControllerBase<1> *)(ulonglong)local_8c8;
        uStack_8e0 = uStack_8e0 + 1;
        pTVar22 = (TReferenceControllerBase<1> *)(ulonglong)uStack_8e0;
        uStack_8cc = uVar23;
        if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_8e0)
        goto LAB_142af495d;
        uVar21 = puVar26[lVar16 + 1];
      }
      uStack_8dc = -uVar21 & uVar21;
      uVar4 = (ulonglong)uStack_8dc * 2 + 1;
      lVar16 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_900 = (int)lVar16;
      uStack_8cc = local_900 + -1 + local_8c8;
      if ((int)uVar23 < (int)uStack_8cc) {
        uStack_8cc = uVar23;
      }
    }
LAB_142af495d:
    uVar23 = *(uint *)&(local_8f8->AssetBundlesDenyList).Elements.field_0x28;
    uStack_8c4 = local_86c;
    iStack_8c0 = *(int *)&(local_8f8->AssetBundlesDenyList).Elements.field_0x8 -
                 *(int *)&(local_8f8->AssetBundlesDenyList).Elements.field_0x34;
    uVar21 = uVar23 & 0xffffffe0;
    TStack_8b0._padding_ = CONCAT44(uStack_8dc,uStack_8e0);
    uStack_8d0 = 0xffffffff;
    TStack_8b0.CurrentBitIndex = uStack_8cc;
    TStack_8b0.UnvisitedBitMask = 0xffffffff;
    iVar18 = (int)uVar23 >> 5;
    TStack_8b0._28_4_ = local_86c;
    TStack_8b0.BaseBitIndex = local_8c8;
    uStack_890 = CONCAT44(uStack_8bc,iStack_8c0);
    local_8e8 = pTVar2;
    local_8d8 = puVar1;
    local_8b8 = pTVar2;
    TStack_8b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if (((int)uVar23 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      pTVar14 = (TSharedPtr<FAssetBundleData,1> *)(*pcVar8)();
      return pTVar14;
    }
    uVar5 = *(uint *)&(pFVar9->AssetBundlesDenyList).Elements.field_0x28;
    if (uVar23 != uVar5) {
      puVar7 = *(undefined1 **)&(pFVar9->AssetBundlesDenyList).Elements.field_0x20;
      puVar25 = puVar1;
      if (puVar7 != (undefined1 *)0x0) {
        puVar25 = puVar7;
      }
      uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar18 * 4);
      while (uVar23 == 0) {
        lVar16 = (longlong)iVar18;
        uVar21 = uVar21 + 0x20;
        iVar18 = iVar18 + 1;
        uVar23 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
        goto LAB_142af4a60;
        uVar23 = *(uint *)(puVar25 + lVar16 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
      lVar16 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_8fc = (int)lVar16;
      uVar23 = local_8fc + -1 + uVar21;
      if ((int)uVar5 < (int)uVar23) {
        uVar23 = uVar5;
      }
    }
LAB_142af4a60:
    do {
      pTVar10 = local_8b8;
      if (*(int *)&(local_8b8->Elements).field_0x8 - *(int *)&(local_8b8->Elements).field_0x34 !=
          (int)uStack_890) {
        local_920[0] = 0;
        `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_920);
      }
      pFVar24 = local_910;
      if (((TStack_8b0.CurrentBitIndex == uVar23) &&
          (TStack_8b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar10 == pTVar2)) {
        uVar23 = 0;
        if ((int)uVar27 < (local_910->Bundles).ArrayNum) {
          uVar23 = local_91c;
        }
        if ((uVar23 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          pTVar14 = (TSharedPtr<FAssetBundleData,1> *)(*pcVar8)();
          return pTVar14;
        }
        pFVar19 = (FAssetBundleEntry *)((pFVar24->Bundles).AllocatorInstance.Data + local_8f0);
        if ((((ulonglong)local_930._padding_ <= pFVar19) &&
            (pFVar19 < (FAssetBundleEntry *)
                       (local_930._padding_ + (longlong)(int)local_930.WeakReferenceCount * 0x18)))
           && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar11)) {
          pcVar8 = (code *)swi(3);
          pTVar14 = (TSharedPtr<FAssetBundleData,1> *)(*pcVar8)();
          return pTVar14;
        }
        aVar13 = local_930.SharedReferenceCount;
        if (local_930.SharedReferenceCount == local_930.WeakReferenceCount) {
          aVar13 = (atomic<int>)
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,(ForAnyElementType *)&local_930,
                              (int *)&local_930.WeakReferenceCount);
        }
        local_930.SharedReferenceCount = (atomic<int>)((int)aVar13 + 1);
        FAssetBundleEntry::FAssetBundleEntry
                  ((FAssetBundleEntry *)(local_930._padding_ + (longlong)(int)aVar13 * 0x18),pFVar19
                  );
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
        uVar27 = uVar27 + 1;
        goto LAB_142af4833;
      }
      puVar3 = (undefined8 *)
               (*(longlong *)&pTVar10->Elements + (longlong)TStack_8b0.CurrentBitIndex * 0x18);
      if (*(int *)(puVar3 + 1) == 0) {
        pwVar17 = L"";
      }
      else {
        pwVar17 = (wchar_t *)*puVar3;
      }
      bVar11 = FWildcardString::IsMatchSubstring
                         (pwVar17,local_868.Base,
                          local_868.Base +
                          (int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1),
                          IgnoreCase);
      pFVar24 = local_910;
      if (bVar11) goto LAB_142af4bfc;
      TStack_8b0.UnvisitedBitMask = TStack_8b0.UnvisitedBitMask & ~TStack_8b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_8b0);
    } while( true );
  }
  if (!bVar12) {
    DestructItems<FAssetBundleEntry,int>
              ((FAssetBundleEntry *)local_930._padding_,(int)local_930.SharedReferenceCount);
    param_1 = local_908;
    __return_storage_ptr__ = local_918;
    if ((FAssetBundleEntry *)local_930._padding_ != (FAssetBundleEntry *)0x0) {
      FMemory::Free((void *)local_930._padding_);
      param_1 = local_908;
      __return_storage_ptr__ = local_918;
    }
    goto LAB_142af4dc0;
  }
  if (local_930.WeakReferenceCount != local_930.SharedReferenceCount) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,(int)local_930.SharedReferenceCount,(ForAnyElementType *)&local_930,
               (int)local_930.SharedReferenceCount,(int *)&local_930.WeakReferenceCount);
  }
  pTVar15 = ::operator_new(0x20);
  if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
    pTVar20 = (TReferenceControllerBase<1> *)&DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
LAB_142af4d22:
    if (pTVar20 == &local_930) goto LAB_142af4d68;
  }
  else {
    pTVar15->SharedReferenceCount = (atomic<int>)0x1;
    pTVar20 = pTVar15 + 1;
    pTVar15->WeakReferenceCount = (atomic<int>)0x1;
    pTVar15->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFAssetBundleData___00_SharedPointerInternals__6B_;
    pTVar15[1]._padding_ = 0;
    pTVar15[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar15[1].WeakReferenceCount = (atomic<int>)0x0;
    if ((pTVar20 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      pTVar14 = (TSharedPtr<FAssetBundleData,1> *)(*pcVar8)();
      return pTVar14;
    }
    LOCK();
    pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
    pTVar22 = pTVar15;
    if (pTVar20 != (TReferenceControllerBase<1> *)0x0) goto LAB_142af4d22;
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar12) {
      pcVar8 = (code *)swi(3);
      pTVar14 = (TSharedPtr<FAssetBundleData,1> *)(*pcVar8)();
      return pTVar14;
    }
  }
  DestructItems<FAssetBundleEntry,int>
            ((FAssetBundleEntry *)pTVar20->_padding_,(int)pTVar20->SharedReferenceCount);
  if ((void *)pTVar20->_padding_ != (void *)0x0) {
    FMemory::Free((void *)pTVar20->_padding_);
  }
  pTVar20->_padding_ = local_930._padding_;
  local_930._padding_ = 0;
  pTVar20->SharedReferenceCount = local_930.SharedReferenceCount;
  pTVar20->WeakReferenceCount = local_930.WeakReferenceCount;
  local_930.SharedReferenceCount = (atomic<int>)0x0;
  local_930.WeakReferenceCount = (atomic<int>)0x0;
LAB_142af4d68:
  pTVar14 = local_918;
  local_918->Object = (FAssetBundleData *)pTVar20;
  (local_918->SharedReferenceCount).ReferenceController = pTVar22;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  DestructItems<FAssetBundleEntry,int>
            ((FAssetBundleEntry *)local_930._padding_,(int)local_930.SharedReferenceCount);
  if ((FAssetBundleEntry *)local_930._padding_ == (FAssetBundleEntry *)0x0) {
    return pTVar14;
  }
  FMemory::Free((void *)local_930._padding_);
  return pTVar14;
LAB_142af4bfc:
  bVar12 = true;
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
  uVar27 = uVar27 + 1;
  goto LAB_142af4833;
}

// FilterTags @ 142af4e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FAssetRegistryState::FilterTags
          (FAssetDataTagMapSharedView *param_1,FAssetDataTagMap *param_2,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_3,
          FAssetRegistrySerializationOptions *param_4)

{
  ushort uVar1;
  longlong lVar2;
  ForElementType<FSetElementId> FVar3;
  code *pcVar4;
  bool bVar5;
  FName FVar6;
  FName FVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar11;
  FNumberedPair *pFVar12;
  FString *pFVar13;
  TTuple<FName,FString> *pTVar14;
  ForElementType<FSetElementId> FVar15;
  int iVar16;
  undefined1 auStack_188 [32];
  uint local_168;
  uint local_164;
  FName local_158;
  FAssetTagValueRef_u_0 FStack_150;
  FName local_148;
  ulonglong uStack_140;
  FAssetRegistrySerializationOptions *local_138;
  FAssetDataTagMap *local_130;
  FName local_128;
  FValueId local_120;
  FString local_118;
  FNumberedPair local_108;
  TStringView<wchar_t> local_f8;
  TStringBuilderBase<wchar_t> local_e8;
  wchar_t local_c8 [64];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_188;
  local_138 = param_4;
  local_130 = param_2;
  pTVar11 = TMapBase<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
            ::Find((TMapBase<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
                    *)&param_4->CookFilterlistTagsByClass,&UE::AssetRegistry::WildcardPathName);
  local_e8.bIsDynamic = false;
  local_e8.bIsExternal = false;
  local_e8.Base = local_c8;
  local_e8.CurPos = local_c8;
  local_e8.End = (wchar_t *)local_48;
  local_168 = 0;
  if ((*(byte *)&param_1->field0_0x0 & 1) == 0) {
    if ((param_1->field0_0x0).Loose == (FAssetDataTagMap *)0x0) goto LAB_142af525c;
    local_164 = (uint)((param_1->field0_0x0).Loose)->_padding_;
  }
  else {
    local_164 = (uint)(param_1->field0_0x0).Fixed.Num;
  }
  if (local_164 != 0) {
LAB_142af4ed0:
    if (((param_1->field0_0x0).Loose == (FAssetDataTagMap *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("View.Bits != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\AssetRegistry\\AssetDataTagMap.h"
                           ,0x1a6,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((*(byte *)&param_1->field0_0x0 & 1) == 0) {
      lVar2 = ((param_1->field0_0x0).Loose)->_padding_;
      local_158 = *(FName *)(lVar2 + (ulonglong)local_168 * 0x18);
      uStack_140 = lVar2 + 8 + (ulonglong)local_168 * 0x18;
    }
    else {
      uVar1 = *(ushort *)&param_1->field0_0x0;
      pFVar12 = FixedTagPrivate::FMapHandle::At((FMapHandle *)param_1,&local_108,local_168);
      local_158 = pFVar12->Key;
      local_120 = pFVar12->Value;
      uStack_140 = (ulonglong)CONCAT24(uVar1 >> 2,local_120) | 0x8000000000000000;
      local_128 = local_158;
    }
    FStack_150.Bits = uStack_140;
    local_e8.CurPos = local_e8.Base;
    local_148 = local_158;
    ::FName::AppendString(&local_158,&local_e8);
    iVar9 = (int)((longlong)local_e8.CurPos - (longlong)local_e8.Base >> 1);
    local_f8 = UE::AssetRegistry::CookTagPrefix;
    if (5 < iVar9) {
      iVar9 = 5;
    }
    iVar16 = 0;
    if (0 < iVar9) {
      iVar16 = iVar9;
    }
    if ((iVar16 != 5) ||
       (iVar9 = FGenericPlatformStricmp::Strnicmp
                          (UE::AssetRegistry::CookTagPrefix.DataPtr,local_e8.Base,5), iVar9 != 0)) {
      FVar7 = local_158;
      if (pTVar11 != (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)0x0) {
        uVar10 = ::GetTypeHash(local_158.ComparisonIndex.Value);
        FVar6 = UE::AssetRegistry::WildcardFName;
        if (*(int *)&(pTVar11->Elements).field_0x8 != *(int *)&(pTVar11->Elements).field_0x34) {
          FVar3 = (pTVar11->Hash).SecondaryData;
          FVar15 = (ForElementType<FSetElementId>)&pTVar11->Hash;
          if (FVar3 != (ForElementType<FSetElementId>)0x0) {
            FVar15 = FVar3;
          }
          iVar9 = *(int *)((longlong)FVar15 +
                          (ulonglong)(pTVar11->HashSize - 1U & FVar7.Number + uVar10) * 4);
          if (iVar9 != -1) {
            do {
              if (*(FName *)(*(longlong *)&pTVar11->Elements + (longlong)iVar9 * 0x10) == FVar7) {
                if (iVar9 != -1) goto LAB_142af5139;
                break;
              }
              iVar9 = *(int *)(*(longlong *)&pTVar11->Elements + 8 + (longlong)iVar9 * 0x10);
            } while (iVar9 != -1);
          }
        }
        uVar10 = ::GetTypeHash(UE::AssetRegistry::WildcardFName.ComparisonIndex.Value);
        if (*(int *)&(pTVar11->Elements).field_0x8 != *(int *)&(pTVar11->Elements).field_0x34) {
          FVar3 = (pTVar11->Hash).SecondaryData;
          FVar15 = (ForElementType<FSetElementId>)&pTVar11->Hash;
          if (FVar3 != (ForElementType<FSetElementId>)0x0) {
            FVar15 = FVar3;
          }
          iVar9 = *(int *)((longlong)FVar15 +
                          (ulonglong)(pTVar11->HashSize - 1U & FVar6.Number + uVar10) * 4);
          if (iVar9 != -1) {
            do {
              if (*(FName *)(*(longlong *)&pTVar11->Elements + (longlong)iVar9 * 0x10) == FVar6)
              goto LAB_142af5139;
              iVar9 = *(int *)(*(longlong *)&pTVar11->Elements + 8 + (longlong)iVar9 * 0x10);
            } while (iVar9 != -1);
          }
        }
      }
      bVar8 = false;
      goto LAB_142af50bb;
    }
    if (param_4->bKeepDevelopmentAssetRegistryTags != false) goto LAB_142af51c9;
    goto LAB_142af5221;
  }
LAB_142af525c:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_e8);
  return;
LAB_142af5139:
  bVar8 = true;
LAB_142af50bb:
  FVar7 = local_158;
  if (param_3 != (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)0x0) {
    uVar10 = ::GetTypeHash(local_158.ComparisonIndex.Value);
    FVar6 = UE::AssetRegistry::WildcardFName;
    if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
      FVar3 = (param_3->Hash).SecondaryData;
      FVar15 = (ForElementType<FSetElementId>)&param_3->Hash;
      if (FVar3 != (ForElementType<FSetElementId>)0x0) {
        FVar15 = FVar3;
      }
      iVar9 = *(int *)((longlong)FVar15 +
                      (ulonglong)(param_3->HashSize - 1U & FVar7.Number + uVar10) * 4);
      if (iVar9 != -1) {
        do {
          if (*(FName *)(*(longlong *)&param_3->Elements + (longlong)iVar9 * 0x10) == FVar7) {
            if (iVar9 != -1) goto LAB_142af51bc;
            break;
          }
          iVar9 = *(int *)(*(longlong *)&param_3->Elements + 8 + (longlong)iVar9 * 0x10);
        } while (iVar9 != -1);
      }
    }
    uVar10 = ::GetTypeHash(UE::AssetRegistry::WildcardFName.ComparisonIndex.Value);
    if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
      FVar3 = (param_3->Hash).SecondaryData;
      FVar15 = (ForElementType<FSetElementId>)&param_3->Hash;
      if (FVar3 != (ForElementType<FSetElementId>)0x0) {
        FVar15 = FVar3;
      }
      iVar9 = *(int *)((longlong)FVar15 +
                      (ulonglong)(param_3->HashSize - 1U & FVar6.Number + uVar10) * 4);
      if (iVar9 != -1) {
        do {
          if (*(FName *)(*(longlong *)&param_3->Elements + (longlong)iVar9 * 0x10) == FVar6)
          goto LAB_142af51bc;
          iVar9 = *(int *)(*(longlong *)&param_3->Elements + 8 + (longlong)iVar9 * 0x10);
        } while (iVar9 != -1);
      }
    }
  }
  bVar5 = false;
LAB_142af51a6:
  param_4 = local_138;
  if (local_138->bUseAssetRegistryTagsAllowListInsteadOfDenyList == false) {
    if ((bVar8) || (bVar5)) goto LAB_142af5221;
  }
  else if ((!bVar8) && (!bVar5)) goto LAB_142af5221;
LAB_142af51c9:
  pFVar13 = FAssetTagValueRef::ToLoose((FAssetTagValueRef *)&FStack_150.Fixed,&local_118);
  pTVar14 = TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::
            AllocateMemoryForEmplace<FName_const_&>
                      ((TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess> *)
                       local_130,&local_158);
  *(uint *)&pTVar14->field_0x0 = local_158.ComparisonIndex.Value;
  *(uint *)&pTVar14->field_0x4 = local_158.Number;
  *(undefined8 *)&pTVar14->field_0x8 = 0;
  *(FScriptContainerElement **)&pTVar14->field_0x8 = (pFVar13->Data).AllocatorInstance.Data;
  (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&pTVar14->field_0x10 = (pFVar13->Data).ArrayNum;
  *(int *)&pTVar14->field_0x14 = (pFVar13->Data).ArrayMax;
  (pFVar13->Data).ArrayNum = 0;
  (pFVar13->Data).ArrayMax = 0;
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
LAB_142af5221:
  local_168 = local_168 + 1;
  if (local_168 == local_164) goto LAB_142af525c;
  goto LAB_142af4ed0;
LAB_142af51bc:
  bVar5 = true;
  goto LAB_142af51a6;
}

// FilterTags @ 142af5290

void __thiscall
FAssetRegistryState::FilterTags
          (FAssetRegistryState *this,FAssetRegistrySerializationOptions *param_1)

{
  FMapHandle *this_00;
  TSharedPtr<FAssetBundleData,1> *pTVar1;
  TMap<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>_>
  *this_01;
  int iVar2;
  code *pcVar3;
  TMap<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>_>
  *pTVar4;
  FAssetRegistryState *pFVar5;
  void *pvVar6;
  bool bVar7;
  uint uVar8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar9;
  FAssetDataTagMapSharedView *pFVar10;
  TSharedPtr<FAssetBundleData,1> *pTVar11;
  FNumberedPair *pFVar12;
  longlong lVar13;
  FName *pFVar14;
  undefined1 *puVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  undefined1 *puVar19;
  uint *puVar20;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  uint uVar22;
  ulonglong uVar23;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_1e8;
  int local_1e0 [2];
  FAssetDataTagMap local_1d8;
  FName local_1c0;
  TBitArray<FDefaultBitArrayAllocator> *local_1b8;
  TMap<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>_>
  *local_1b0;
  int iStack_1a8;
  uint uStack_1a4;
  undefined1 *local_1a0;
  undefined4 uStack_198;
  int iStack_194;
  int local_190;
  int iStack_188;
  undefined4 uStack_184;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  FTopLevelAssetPath local_170;
  TKeyInitializer<FName_&&> local_160;
  FTopLevelAssetPath *local_158;
  FName local_148;
  FValueId local_140;
  FAssetRegistryState *local_138;
  int iStack_130;
  uint uStack_12c;
  undefined1 *local_128;
  undefined4 uStack_120;
  int iStack_11c;
  int local_118;
  int iStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  TMap<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>_>
  *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  FAssetRegistryState *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  FName local_a8;
  FSparseArrayAllocationInfo local_98;
  TSharedPtr<FAssetBundleData,1> local_88;
  FNumberedPair local_78 [3];
  undefined4 local_4c;
  
  puVar19 = &(this->CachedClassesByTag).field_0x10;
  iVar2 = *(int *)&(this->CachedClassesByTag).field_0x28;
  this_01 = &this->CachedClassesByTag;
  iStack_1a8 = 0;
  local_1e8 = 1;
  local_190 = 0;
  uStack_1a4 = 1;
  iStack_194 = 0;
  if (iVar2 != 0) {
    puVar20 = *(uint **)&(this->CachedClassesByTag).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar19;
    }
    uStack_1a4 = *puVar20;
    while (uStack_1a4 == 0) {
      lVar13 = (longlong)iStack_1a8;
      local_190 = local_190 + 0x20;
      iStack_1a8 = iStack_1a8 + 1;
      uStack_1a4 = 1;
      iStack_194 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1a8) goto LAB_142af534d;
      uStack_1a4 = puVar20[lVar13 + 1];
    }
    uStack_1a4 = -uStack_1a4 & uStack_1a4;
    uVar23 = (ulonglong)uStack_1a4 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_180 = (int)lVar13;
    iStack_194 = local_190 + -1 + local_180;
    if (iVar2 < iStack_194) {
      iStack_194 = iVar2;
    }
  }
LAB_142af534d:
  iStack_188 = *(int *)&(this->CachedClassesByTag).field_0x8 -
               *(int *)&(this->CachedClassesByTag).field_0x34;
  uVar17 = *(uint *)&(this->CachedClassesByTag).field_0x28;
  uVar22 = uVar17 & 0xffffffe0;
  TStack_100._padding_ = CONCAT44(uStack_1a4,iStack_1a8);
  uStack_198 = 0xffffffff;
  TStack_100.CurrentBitIndex = iStack_194;
  TStack_100.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar17 >> 5;
  TStack_100._28_4_ = local_4c;
  TStack_100.BaseBitIndex = local_190;
  uStack_e0 = CONCAT44(uStack_184,iStack_188);
  local_1b0 = this_01;
  local_1a0 = puVar19;
  local_108 = this_01;
  TStack_100.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar19;
  if ((((int)uVar17 < 0) || (iVar2 < (int)uVar17)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar8 = *(uint *)&(this->CachedClassesByTag).field_0x28;
  if (uVar17 != uVar8) {
    puVar15 = *(undefined1 **)&(this->CachedClassesByTag).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar19;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar16 * 4);
    while (uVar17 == 0) {
      lVar13 = (longlong)iVar16;
      uVar22 = uVar22 + 0x20;
      iVar16 = iVar16 + 1;
      uVar17 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_142af5460;
      uVar17 = *(uint *)(puVar15 + lVar13 * 4 + 4);
    }
    uVar23 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_17c = (int)lVar13;
    uVar17 = local_17c + -1 + uVar22;
    if ((int)uVar8 < (int)uVar17) {
      uVar17 = uVar8;
    }
  }
LAB_142af5460:
  while( true ) {
    pTVar4 = local_108;
    if (*(int *)(&local_108->field_0x0 + 8) - *(int *)(&local_108->field_0x0 + 0x34) !=
        (int)uStack_e0) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_100.CurrentBitIndex == uVar17) &&
        (TStack_100.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar19)) &&
       (pTVar4 == this_01)) break;
    lVar13 = (longlong)TStack_100.CurrentBitIndex * 0x60 + *(longlong *)&pTVar4->field_0x0;
    if (*(int *)(lVar13 + 0x10) != *(int *)(lVar13 + 0x3c)) {
      TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::
      UnhashElements((TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>
                      *)(lVar13 + 8));
      *(undefined4 *)(lVar13 + 0x10) = 0;
      if (*(int *)(lVar13 + 0x14) < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,4,0,(ForAnyElementType *)(lVar13 + 8),0,(int *)(lVar13 + 0x14));
      }
      *(undefined4 *)(lVar13 + 0x38) = 0xffffffff;
      *(undefined4 *)(lVar13 + 0x3c) = 0;
      *(undefined4 *)(lVar13 + 0x30) = 0;
    }
    TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
  }
  iStack_130 = 0;
  iVar2 = *(int *)&(this->CachedAssets).Elements.field_0x28;
  pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->CachedAssets).Elements.field_0x10;
  local_118 = 0;
  iStack_11c = 0;
  if (iVar2 != 0) {
    puVar20 = *(uint **)&(this->CachedAssets).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)pTVar21;
    }
    uVar17 = *puVar20;
    while (uVar17 == 0) {
      lVar13 = (longlong)iStack_130;
      local_118 = local_118 + 0x20;
      iStack_130 = iStack_130 + 1;
      iStack_11c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_130) goto LAB_142af5590;
      uVar17 = puVar20[lVar13 + 1];
    }
    local_1e8 = -uVar17 & uVar17;
    uVar23 = (ulonglong)local_1e8 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_178 = (int)lVar13;
    iStack_11c = local_118 + -1 + local_178;
    if (iVar2 < iStack_11c) {
      iStack_11c = iVar2;
    }
  }
LAB_142af5590:
  uVar17 = *(uint *)&(this->CachedAssets).Elements.field_0x28;
  uStack_12c = local_1e8;
  uVar22 = uVar17 & 0xffffffe0;
  iStack_114 = iStack_194;
  iStack_110 = *(int *)&(this->CachedAssets).Elements.field_0x8 -
               *(int *)&(this->CachedAssets).Elements.field_0x34;
  uStack_120 = 0xffffffff;
  TStack_d0._padding_ = CONCAT44(local_1e8,iStack_130);
  TStack_d0.CurrentBitIndex = iStack_11c;
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar17 >> 5;
  TStack_d0._28_4_ = iStack_194;
  TStack_d0.BaseBitIndex = local_118;
  uStack_b0 = CONCAT44(uStack_10c,iStack_110);
  local_1b8 = pTVar21;
  local_138 = this;
  local_128 = (undefined1 *)pTVar21;
  local_d8 = this;
  TStack_d0.Array = pTVar21;
  if ((((int)uVar17 < 0) || (iVar2 < (int)uVar17)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar8 = *(uint *)&(this->CachedAssets).Elements.field_0x28;
  if (uVar17 != uVar8) {
    puVar19 = *(undefined1 **)&(this->CachedAssets).Elements.field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = (undefined1 *)pTVar21;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar16 * 4);
    while (uVar17 == 0) {
      lVar13 = (longlong)iVar16;
      uVar22 = uVar22 + 0x20;
      iVar16 = iVar16 + 1;
      uVar17 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_142af56b0;
      uVar17 = *(uint *)(puVar19 + lVar13 * 4 + 4);
    }
    uVar23 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_174 = (int)lVar13;
    uVar17 = local_174 + -1 + uVar22;
    if ((int)uVar8 < (int)uVar17) {
      uVar17 = uVar8;
    }
  }
LAB_142af56b0:
  do {
    pFVar5 = local_d8;
    if (*(int *)&(local_d8->CachedAssets).Elements.field_0x8 -
        *(int *)&(local_d8->CachedAssets).Elements.field_0x34 != (int)uStack_b0) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<FAssetData_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_d0.CurrentBitIndex == uVar17) && (TStack_d0.Array == pTVar21)) && (pFVar5 == this))
    {
      return;
    }
    lVar13 = *(longlong *)
              (*(longlong *)&(pFVar5->CachedAssets).Elements +
              (longlong)TStack_d0.CurrentBitIndex * 0x10);
    local_1d8._padding_ = 0;
    local_1d8._padding_ = 0;
    local_1d8.RefCount.Counter = 0;
    local_158 = (FTopLevelAssetPath *)(lVar13 + 0x20);
    pTVar9 = TMapBase<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
             ::Find((TMapBase<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
                     *)&param_1->CookFilterlistTagsByClass,local_158);
    this_00 = (FMapHandle *)(lVar13 + 0x38);
    FilterTags((FAssetDataTagMapSharedView *)this_00,&local_1d8,pTVar9,param_1);
    bVar7 = ::operator==((FAssetDataTagMapSharedView *)this_00,&local_1d8);
    if (!bVar7) {
      pFVar10 = FAssetDataTagMapSharedView::FAssetDataTagMapSharedView
                          ((FAssetDataTagMapSharedView *)&local_170.AssetName,&local_1d8);
      FAssetDataTagMapSharedView::operator=((FAssetDataTagMapSharedView *)this_00,pFVar10);
      FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView
                ((FAssetDataTagMapSharedView *)&local_170.AssetName);
    }
    pTVar1 = (TSharedPtr<FAssetBundleData,1> *)(lVar13 + 0x40);
    pTVar11 = FilterBundles(&local_88,pTVar1,param_1);
    if (pTVar1 != pTVar11) {
      pTVar1->Object = pTVar11->Object;
      pTVar11->Object = (FAssetBundleData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)(lVar13 + 0x48),&pTVar11->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
    if (this_00->IsValid == 0) {
      if (*this_00 != (FMapHandle)0x0) {
        uVar22 = *(uint *)((longlong)*this_00 + 8);
        goto LAB_142af57ca;
      }
    }
    else {
      uVar22 = (uint)*(ushort *)(lVar13 + 0x3a);
LAB_142af57ca:
      uVar23 = 0;
      pTVar21 = local_1b8;
      if (uVar22 != 0) {
        do {
          if ((*this_00 == (FMapHandle)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("View.Bits != 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\AssetRegistry\\AssetDataTagMap.h"
                                 ,0x1a6,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (this_00->IsValid == 0) {
            local_1c0 = *(FName *)(*(longlong *)*this_00 + uVar23 * 0x18);
          }
          else {
            pFVar12 = FixedTagPrivate::FMapHandle::At(this_00,local_78,(uint)uVar23);
            local_1c0 = pFVar12->Key;
            local_140 = pFVar12->Value;
            local_148 = local_1c0;
          }
          local_a8 = local_1c0;
          uVar8 = ::GetTypeHash(local_1c0.ComparisonIndex.Value);
          uVar8 = local_a8.Number + uVar8;
          if (*(int *)&(this->CachedClassesByTag).field_0x8 !=
              *(int *)&(this->CachedClassesByTag).field_0x34) {
            puVar19 = *(undefined1 **)&(this->CachedClassesByTag).field_0x40;
            puVar15 = &(this->CachedClassesByTag).field_0x38;
            if (puVar19 != (undefined1 *)0x0) {
              puVar15 = puVar19;
            }
            uVar18 = *(uint *)(puVar15 +
                              (ulonglong)
                              (*(int *)&(this->CachedClassesByTag).field_0x48 - 1U & uVar8) * 4);
            if (uVar18 != 0xffffffff) {
              do {
                pFVar14 = (FName *)((longlong)(int)uVar18 * 0x60 + *(longlong *)&this_01->field_0x0)
                ;
                if (*pFVar14 == local_1c0) {
                  if (pFVar14 != (FName *)0x0) goto LAB_142af593a;
                  break;
                }
                uVar18 = pFVar14[0xb].ComparisonIndex.Value;
              } while (uVar18 != 0xffffffff);
            }
          }
          local_160.Key = &local_1c0;
          TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::AddUninitialized((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              *)this_01,&local_98);
          pvVar6 = local_98.Pointer;
          if (local_98.Pointer !=
              (TSparseSetElement<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>_>
               *)0x0) {
            TKeyInitializer<FName_&&>::
            operator<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>_TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>
                      (&local_160,local_98.Pointer);
            *(undefined4 *)((longlong)pvVar6 + 0x58) = 0xffffffff;
          }
          local_1e0[0] = local_98.Index;
          bVar7 = TSet<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                  ::TryReplaceExisting
                            ((TSet<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                              *)this_01,uVar8,pvVar6,local_1e0,(bool *)0x0);
          lVar13 = (longlong)local_1e0[0];
          if (!bVar7) {
            TSet<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
            ::RehashOrLink((TSet<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                            *)this_01,uVar8,pvVar6,local_1e0[0]);
          }
          pFVar14 = (FName *)(lVar13 * 0x60 + *(longlong *)&this_01->field_0x0);
LAB_142af593a:
          TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::
          Emplace<FTopLevelAssetPath_const_&>
                    ((TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>
                      *)(pFVar14 + 1),&local_170,(bool *)local_158);
          uVar8 = (uint)uVar23 + 1;
          uVar23 = (ulonglong)uVar8;
          pTVar21 = local_1b8;
        } while (uVar8 != uVar22);
      }
    }
    DestructItems<TTuple<FName,FString>,int>
              ((TTuple<FName,FString> *)local_1d8._padding_,(int)local_1d8._padding_);
    if ((TTuple<FName,FString> *)local_1d8._padding_ != (TTuple<FName,FString> *)0x0) {
      FMemory::Free((void *)local_1d8._padding_);
    }
    TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
  } while( true );
}

// FindDependsNode @ 142af6670

FDependsNode * __thiscall
FAssetRegistryState::FindDependsNode(FAssetRegistryState *this,FAssetIdentifier *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  uVar1 = ::GetTypeHash(param_1);
  iVar2 = TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FAssetIdentifier>
                    ((TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
                      *)&this->CachedDependsNodes,uVar1,param_1);
  if (iVar2 != -1) {
    lVar3 = (longlong)iVar2 * 0x30 + *(longlong *)&(this->CachedDependsNodes).field_0x0;
    puVar4 = (undefined8 *)(lVar3 + 0x20);
    if (lVar3 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    if (puVar4 != (undefined8 *)0x0) {
      return (FDependsNode *)*puVar4;
    }
  }
  return (FDependsNode *)0x0;
}

// GetAllAssets @ 142af9410

bool __thiscall
FAssetRegistryState::GetAllAssets
          (FAssetRegistryState *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1,
          TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  uint uVar1;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> *local_res8;
  code *local_48;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> **local_40;
  code *local_38;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> **local_30;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_28;
  code **local_20;
  FAssetRegistryState *local_18;
  
  uVar1 = ((*(int *)&(param_1->Elements).field_0x34 - *(int *)&(param_1->Elements).field_0x8) -
          *(int *)&(this->CachedAssets).Elements.field_0x34) +
          *(int *)&(this->CachedAssets).Elements.field_0x8 + param_2->ArrayNum;
  if (-1 < (int)uVar1) {
    if (param_2->ArrayMax < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,uVar1,&param_2->AllocatorInstance,param_2->ArrayNum,&param_2->ArrayMax);
    }
    local_40 = &local_res8;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`FAssetRegistryState::GetAllAssets'::__l2::<lambda_1>,bool,FAssetData_const_&>
               ::Call;
    local_20 = &local_48;
    local_30 = &local_28;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`FAssetRegistryState::EnumerateAllAssets'::__l2::<lambda_1>,void,FAssetData_&>
               ::Call;
    local_res8 = param_2;
    local_28 = param_1;
    local_18 = this;
    EnumerateAllMutableAssets
              (this,(TFunctionRef<void___cdecl(FAssetData_&)> *)&local_38,(param_3 ^ 1) << 2);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
}

// GetAllocatedSize @ 142afa230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall FAssetRegistryState::GetAllocatedSize(FAssetRegistryState *this,bool param_1)

{
  undefined1 *puVar1;
  TMap<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar2;
  TMap<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
  *pTVar3;
  TMap<FName,FAssetPackageData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>_>
  *pTVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  code *pcVar10;
  char cVar11;
  TMap<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar12;
  TMap<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
  *pTVar13;
  TMap<FName,FAssetPackageData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>_>
  *pTVar14;
  bool bVar15;
  ulong64 uVar16;
  ulong64 uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  undefined1 *puVar28;
  longlong lVar29;
  uint *puVar30;
  uint uVar31;
  int iVar32;
  undefined1 auStack_2b8 [32];
  char local_298;
  undefined1 local_297;
  undefined1 local_296;
  undefined1 local_295 [5];
  ulonglong local_290;
  longlong local_288;
  longlong *local_280;
  longlong local_278;
  longlong local_270;
  longlong local_268;
  longlong local_260;
  TMap<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
  *local_258;
  int iStack_250;
  uint uStack_24c;
  undefined1 *local_248;
  undefined4 uStack_240;
  int iStack_23c;
  int local_238;
  int iStack_234;
  int iStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  longlong local_210;
  TMap<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>
  *local_208;
  int iStack_200;
  uint uStack_1fc;
  undefined1 *local_1f8;
  undefined4 uStack_1f0;
  int iStack_1ec;
  int local_1e8;
  undefined4 uStack_1e4;
  int iStack_1e0;
  undefined4 uStack_1dc;
  int local_1d8;
  int local_1d4;
  int local_1d0;
  int local_1cc;
  int local_1c8;
  code **local_1c0;
  TMap<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>
  *local_1b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b0;
  undefined8 uStack_190;
  TMap<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
  *local_188;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_180;
  undefined8 uStack_160;
  TMap<FName,FAssetPackageData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>_>
  *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  code *local_128;
  longlong **local_120;
  code *local_118;
  code ***local_110;
  longlong *local_108;
  FMemoryCounter *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  longlong *local_e8;
  undefined8 *local_e0;
  undefined4 local_bc;
  undefined4 local_9c;
  FMemoryCounter local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  uVar23 = (this->CachedAssets).HashSize;
  if (uVar23 < 2) {
    lVar19 = 0;
  }
  else {
    lVar19 = (longlong)(int)uVar23 << 2;
  }
  uVar23 = *(uint *)&(this->CachedAssetsByPackageName).field_0x48;
  if (uVar23 < 2) {
    lVar25 = 0;
  }
  else {
    lVar25 = (longlong)(int)uVar23 << 2;
  }
  uVar23 = *(uint *)&(this->CachedAssetsByPath).field_0x48;
  if (uVar23 < 2) {
    lVar20 = 0;
  }
  else {
    lVar20 = (longlong)(int)uVar23 << 2;
  }
  uVar23 = *(uint *)&(this->CachedAssetsByClass).field_0x48;
  if (uVar23 < 2) {
    lVar29 = 0;
  }
  else {
    lVar29 = (longlong)(int)uVar23 << 2;
  }
  uVar23 = *(uint *)&(this->CachedClassesByTag).field_0x48;
  if (uVar23 < 2) {
    lVar26 = 0;
  }
  else {
    lVar26 = (longlong)(int)uVar23 << 2;
  }
  uVar23 = *(uint *)&(this->CachedDependsNodes).field_0x48;
  if (uVar23 < 2) {
    lVar27 = 0;
  }
  else {
    lVar27 = (longlong)(int)uVar23 << 2;
  }
  uVar23 = *(uint *)&(this->CachedPackageData).field_0x48;
  if (uVar23 < 2) {
    lVar18 = 0;
  }
  else {
    lVar18 = (longlong)(int)uVar23 << 2;
  }
  local_288 = 0;
  local_210 = (ulonglong)((*(int *)&(this->CachedAssetsByClass).field_0x2c + 0x1fU >> 5) << 2) +
              lVar25 + ((longlong)*(int *)&(this->CachedAssetsByClass).field_0xc +
                       (longlong)*(int *)&(this->CachedAssetsByPackageName).field_0xc) * 0x28 +
              lVar29 + (longlong)*(int *)&(this->CachedAssetsByPath).field_0xc * 0x20 +
                       (ulonglong)
                       ((*(int *)&(this->CachedAssetsByPath).field_0x2c + 0x1fU >> 5) << 2) + lVar20
              + (ulonglong)
                ((*(int *)&(this->CachedAssetsByPackageName).field_0x2c + 0x1fU >> 5) << 2) +
              (longlong)*(int *)&(this->CachedAssets).Elements.field_0xc * 0x10 +
              (ulonglong)((*(int *)&(this->CachedAssets).Elements.field_0x2c + 0x1fU >> 5) << 2) +
              lVar19 + (longlong)*(int *)&(this->CachedClassesByTag).field_0xc * 0x60 +
                       lVar26 + (ulonglong)
                                ((*(int *)&(this->CachedClassesByTag).field_0x2c + 0x1fU >> 5) << 2)
              + (longlong)*(int *)&(this->CachedDependsNodes).field_0xc * 0x30 +
                lVar27 + (ulonglong)
                         ((*(int *)&(this->CachedDependsNodes).field_0x2c + 0x1fU >> 5) << 2) +
              lVar18 + (ulonglong)
                       ((*(int *)&(this->CachedPackageData).field_0x2c + 0x1fU >> 5) << 2) +
              ((longlong)*(int *)&(this->CachedPackageData).field_0xc * 3 +
               (longlong)(this->PreallocatedPackageDataBuffers).ArrayMax +
               (longlong)(this->PreallocatedDependsNodeDataBuffers).ArrayMax +
              (longlong)(this->PreallocatedAssetDataBuffers).ArrayMax) * 8;
  local_280 = &local_288;
  local_298 = param_1;
  `FAssetRegistryState::GetAllocatedSize'::__l2::<lambda_1>::
  operator()<TMap<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>_>
            (&local_280,&this->CachedAssetsByPackageName);
  `FAssetRegistryState::GetAllocatedSize'::__l2::<lambda_1>::
  operator()<TMap<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>_>
            (&local_280,&this->CachedAssetsByPath);
  puVar1 = &(this->CachedAssetsByClass).field_0x10;
  iVar32 = *(int *)&(this->CachedAssetsByClass).field_0x28;
  pTVar2 = &this->CachedAssetsByClass;
  iStack_200 = 0;
  local_290 = 1;
  local_1e8 = 0;
  uStack_1fc = 1;
  iStack_1ec = 0;
  if (iVar32 != 0) {
    puVar30 = *(uint **)&(this->CachedAssetsByClass).field_0x20;
    if (puVar30 == (uint *)0x0) {
      puVar30 = (uint *)puVar1;
    }
    uStack_1fc = *puVar30;
    while (uStack_1fc == 0) {
      lVar19 = (longlong)iStack_200;
      local_1e8 = local_1e8 + 0x20;
      iStack_200 = iStack_200 + 1;
      uStack_1fc = 1;
      iStack_1ec = iVar32;
      if ((int)(iVar32 + -1 + (iVar32 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_200) goto LAB_142afa4ed;
      uStack_1fc = puVar30[lVar19 + 1];
    }
    uStack_1fc = -uStack_1fc & uStack_1fc;
    uVar5 = (ulonglong)uStack_1fc * 2 + 1;
    lVar19 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_1d8 = (int)lVar19;
    iStack_1ec = local_1d8 + -1 + local_1e8;
    if (iVar32 < iStack_1ec) {
      iStack_1ec = iVar32;
    }
  }
LAB_142afa4ed:
  uVar23 = *(uint *)&(this->CachedAssetsByClass).field_0x28;
  uStack_1e4 = local_bc;
  uVar31 = uVar23 & 0xffffffe0;
  iStack_1e0 = *(int *)&(this->CachedAssetsByClass).field_0x8 -
               *(int *)&(this->CachedAssetsByClass).field_0x34;
  TStack_1b0._padding_ = CONCAT44(uStack_1fc,iStack_200);
  uStack_1f0 = 0xffffffff;
  TStack_1b0.CurrentBitIndex = iStack_1ec;
  TStack_1b0.UnvisitedBitMask = 0xffffffff;
  iVar21 = (int)uVar23 >> 5;
  TStack_1b0._28_4_ = local_bc;
  TStack_1b0.BaseBitIndex = local_1e8;
  uStack_190 = CONCAT44(uStack_1dc,iStack_1e0);
  local_208 = pTVar2;
  local_1f8 = puVar1;
  local_1b8 = pTVar2;
  TStack_1b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar23 < 0) || (iVar32 < (int)uVar23)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar15)) {
    pcVar10 = (code *)swi(3);
    uVar16 = (*pcVar10)();
    return uVar16;
  }
  uVar24 = *(uint *)&(this->CachedAssetsByClass).field_0x28;
  if (uVar23 != uVar24) {
    puVar28 = *(undefined1 **)&(this->CachedAssetsByClass).field_0x20;
    if (puVar28 == (undefined1 *)0x0) {
      puVar28 = puVar1;
    }
    uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar28 + (longlong)iVar21 * 4);
    while (uVar23 == 0) {
      lVar19 = (longlong)iVar21;
      uVar31 = uVar31 + 0x20;
      iVar21 = iVar21 + 1;
      uVar23 = uVar24;
      if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
      goto LAB_142afa600;
      uVar23 = *(uint *)(puVar28 + lVar19 * 4 + 4);
    }
    uVar5 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_1d4 = (int)lVar19;
    uVar23 = local_1d4 + -1 + uVar31;
    if ((int)uVar24 < (int)uVar23) {
      uVar23 = uVar24;
    }
  }
LAB_142afa600:
  while( true ) {
    pTVar12 = local_1b8;
    if (*(int *)&local_1b8->field_0x8 - *(int *)&local_1b8->field_0x34 != (int)uStack_190) {
      local_297 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_297);
    }
    if (((TStack_1b0.CurrentBitIndex == uVar23) &&
        (TStack_1b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar12 == pTVar2)
       ) break;
    local_288 = local_288 +
                (longlong)
                *(int *)(*(longlong *)pTVar12 + 0x1c + (longlong)TStack_1b0.CurrentBitIndex * 0x28)
                * 8;
    TStack_1b0.UnvisitedBitMask = TStack_1b0.UnvisitedBitMask & ~TStack_1b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b0);
  }
  `FAssetRegistryState::GetAllocatedSize'::__l2::<lambda_1>::
  operator()<TMap<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>_>_>
            (&local_280,&this->CachedClassesByTag);
  cVar11 = local_298;
  if ((local_298 != '\0') && (4 < (byte)LogAssetRegistry._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
  }
  iVar32 = 0;
  local_98.FixedStoreIndices.Elements._44_4_ = 0x80;
  local_108 = &local_260;
  local_260 = 0;
  local_100 = &local_98;
  local_268 = 0;
  local_f8 = &local_228;
  local_228 = 0;
  local_f0 = &local_220;
  local_220 = 0;
  local_e8 = &local_268;
  local_e0 = &local_218;
  local_120 = &local_108;
  local_128 = UE::Core::Private::Function::
              TFunctionRefCaller<`FAssetRegistryState::GetAllocatedSize'::__l2::<lambda_2>,void,FAssetData_const_&>
              ::Call;
  local_1c0 = &local_128;
  local_110 = &local_1c0;
  local_118 = UE::Core::Private::Function::
              TFunctionRefCaller<`FAssetRegistryState::EnumerateAllAssets'::__l2::<lambda_1>,void,FAssetData_&>
              ::Call;
  local_218 = 0;
  local_98.FixedStoreIndices.Elements._0_8_ = 0;
  local_98.FixedStoreIndices.Elements._8_8_ = 0;
  local_98.FixedStoreIndices.Elements._32_8_ = 0;
  local_98.FixedStoreIndices.Elements._40_4_ = 0;
  local_98.FixedStoreIndices.Elements._48_4_ = 0xffffffff;
  local_98.FixedStoreIndices.Elements._52_4_ = 0;
  local_98.FixedStoreIndices.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.FixedStoreIndices.HashSize = 0;
  local_98.LooseBytes = 0;
  EnumerateAllMutableAssets(this,(TFunctionRef<void___cdecl(FAssetData_&)> *)&local_118,AllowAll);
  if (cVar11 != '\0') {
    if (((4 < (byte)LogAssetRegistry._0_1_) &&
        (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry),
        4 < (byte)LogAssetRegistry._0_1_)) &&
       (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry),
       4 < (byte)LogAssetRegistry._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
    }
    FAssetDataTagMapSharedView::FMemoryCounter::ReportFixedStoreBreakdown(&local_98);
    if (4 < (byte)LogAssetRegistry._0_1_) {
      FAssetDataTagMapSharedView::FMemoryCounter::GetFixedSize(&local_98);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
      if (((4 < (byte)LogAssetRegistry._0_1_) &&
          (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry),
          4 < (byte)LogAssetRegistry._0_1_)) &&
         ((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry),
          4 < (byte)LogAssetRegistry._0_1_ &&
          ((UE::Logging::Private::BasicLog<5>
                      ((FStaticBasicLogRecord *)&PTR_u_AssetBundle_Siz_150994290,
                       (FLogCategoryBase *)&LogAssetRegistry), 4 < (byte)LogAssetRegistry._0_1_ &&
           (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry),
           4 < (byte)LogAssetRegistry._0_1_)))))) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
      }
    }
  }
  puVar1 = &(this->CachedDependsNodes).field_0x10;
  iVar21 = *(int *)&(this->CachedDependsNodes).field_0x28;
  pTVar3 = &this->CachedDependsNodes;
  local_270 = 0;
  iStack_250 = 0;
  uStack_24c = (uint)local_290;
  iStack_23c = iVar32;
  if (iVar21 != 0) {
    puVar30 = *(uint **)&(this->CachedDependsNodes).field_0x20;
    if (puVar30 == (uint *)0x0) {
      puVar30 = (uint *)puVar1;
    }
    uVar23 = *puVar30;
    while (uVar23 == 0) {
      lVar19 = (longlong)iStack_250;
      iVar32 = iVar32 + 0x20;
      iStack_250 = iStack_250 + 1;
      iStack_23c = iVar21;
      if ((int)(iVar21 + -1 + (iVar21 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_250) goto LAB_142afa9ad;
      uVar23 = puVar30[lVar19 + 1];
    }
    uStack_24c = -uVar23 & uVar23;
    uVar5 = (ulonglong)uStack_24c * 2 + 1;
    lVar19 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_1d0 = (int)lVar19;
    iStack_23c = local_1d0 + -1 + iVar32;
    if (iVar21 < iStack_23c) {
      iStack_23c = iVar21;
    }
  }
LAB_142afa9ad:
  uVar23 = *(uint *)&(this->CachedDependsNodes).field_0x28;
  iStack_234 = local_9c;
  uVar31 = uVar23 & 0xffffffe0;
  iStack_230 = *(int *)&(this->CachedDependsNodes).field_0x8 -
               *(int *)&(this->CachedDependsNodes).field_0x34;
  uStack_240 = 0xffffffff;
  TStack_180._padding_ = CONCAT44(uStack_24c,iStack_250);
  TStack_180.CurrentBitIndex = iStack_23c;
  TStack_180.UnvisitedBitMask = 0xffffffff;
  iVar22 = (int)uVar23 >> 5;
  TStack_180._28_4_ = local_9c;
  TStack_180.BaseBitIndex = iVar32;
  uStack_160 = CONCAT44(uStack_22c,iStack_230);
  local_258 = pTVar3;
  local_248 = puVar1;
  local_238 = iVar32;
  local_188 = pTVar3;
  TStack_180.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar23 < 0) || (iVar21 < (int)uVar23)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar15)) {
    pcVar10 = (code *)swi(3);
    uVar16 = (*pcVar10)();
    return uVar16;
  }
  uVar24 = *(uint *)&(this->CachedDependsNodes).field_0x28;
  lVar19 = local_270;
  lVar25 = local_270;
  if (uVar23 != uVar24) {
    puVar28 = *(undefined1 **)&(this->CachedDependsNodes).field_0x20;
    if (puVar28 == (undefined1 *)0x0) {
      puVar28 = puVar1;
    }
    uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar28 + (longlong)iVar22 * 4);
    while (uVar23 == 0) {
      lVar20 = (longlong)iVar22;
      uVar31 = uVar31 + 0x20;
      iVar22 = iVar22 + 1;
      uVar23 = uVar24;
      if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
      goto LAB_142afaad0;
      uVar23 = *(uint *)(puVar28 + lVar20 * 4 + 4);
    }
    uVar5 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_1cc = (int)lVar20;
    uVar23 = (uVar31 - 1) + local_1cc;
    if ((int)uVar24 < (int)uVar23) {
      uVar23 = uVar24;
    }
  }
LAB_142afaad0:
  while( true ) {
    pTVar13 = local_188;
    if (*(int *)&local_188->field_0x8 - *(int *)&local_188->field_0x34 != (int)uStack_160) {
      local_296 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FAssetIdentifier,FDependsNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_296);
    }
    if (((TStack_180.CurrentBitIndex == uVar23) &&
        (TStack_180.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar13 == pTVar3)
       ) break;
    lVar20 = *(longlong *)
              (*(longlong *)pTVar13 + 0x20 + (longlong)TStack_180.CurrentBitIndex * 0x30);
    iVar32 = *(int *)(lVar20 + 0x4c);
    iVar21 = *(int *)(lVar20 + 0x5c);
    iVar22 = *(int *)(lVar20 + 0x3c);
    iVar6 = *(int *)(lVar20 + 0x2c);
    iVar7 = *(int *)(lVar20 + 0x9c);
    iVar8 = *(int *)(lVar20 + 0x7c);
    TStack_180.UnvisitedBitMask = TStack_180.UnvisitedBitMask & ~TStack_180._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_180);
    lVar19 = lVar19 + 0xa8;
    lVar25 = lVar25 + (ulonglong)((iVar8 + 0x1fU >> 5) << 2) +
             (ulonglong)((iVar7 + 0x1fU >> 5) << 2) +
             ((longlong)iVar21 + (longlong)iVar32 + (longlong)iVar22 + (longlong)iVar6) * 8;
  }
  local_278 = lVar25;
  local_270 = lVar19;
  if (((local_298 != '\0') && (4 < (byte)LogAssetRegistry._0_1_)) &&
     ((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry),
      4 < (byte)LogAssetRegistry._0_1_ &&
      (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry),
      4 < (byte)LogAssetRegistry._0_1_)))) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
  }
  puVar1 = &(this->CachedPackageData).field_0x10;
  iStack_230 = *(int *)&(this->CachedPackageData).field_0x8 -
               *(int *)&(this->CachedPackageData).field_0x34;
  pTVar4 = &this->CachedPackageData;
  iVar32 = *(int *)&(this->CachedPackageData).field_0x28;
  iStack_250 = 0;
  lVar19 = (longlong)iStack_230 * 0xa8;
  local_238 = 0;
  iStack_23c = 0;
  if (iVar32 != 0) {
    puVar30 = *(uint **)&(this->CachedPackageData).field_0x20;
    if (puVar30 == (uint *)0x0) {
      puVar30 = (uint *)puVar1;
    }
    uVar23 = *puVar30;
    while (uVar23 == 0) {
      lVar25 = (longlong)iStack_250;
      local_238 = local_238 + 0x20;
      iStack_250 = iStack_250 + 1;
      iStack_23c = iVar32;
      if ((int)(iVar32 + -1 + (iVar32 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_250) goto LAB_142afac90;
      uVar23 = puVar30[lVar25 + 1];
    }
    local_290 = (ulonglong)(-uVar23 & uVar23);
    uVar5 = local_290 * 2 + 1;
    lVar25 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_1c8 = (int)lVar25;
    iStack_23c = local_238 + -1 + local_1c8;
    if (iVar32 < iStack_23c) {
      iStack_23c = iVar32;
    }
  }
LAB_142afac90:
  uVar23 = *(uint *)&(this->CachedPackageData).field_0x28;
  uStack_24c = (uint)local_290;
  uVar24 = uVar23 & 0xffffffe0;
  uStack_240 = 0xffffffff;
  uVar31 = -1 << ((byte)uVar23 & 0x1f);
  TStack_150._padding_ = CONCAT44(uStack_24c,iStack_250);
  TStack_150.CurrentBitIndex = iStack_23c;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  iStack_234 = iStack_1ec;
  TStack_150._28_4_ = iStack_1ec;
  TStack_150.BaseBitIndex = local_238;
  uStack_130 = CONCAT44(uStack_22c,iStack_230);
  iVar21 = (int)uVar23 >> 5;
  local_290 = CONCAT44(local_290._4_4_,uVar31);
  local_258 = (TMap<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
               *)pTVar4;
  local_248 = puVar1;
  local_158 = pTVar4;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if (((int)uVar23 < 0) || (iVar32 < (int)uVar23)) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar15) {
      pcVar10 = (code *)swi(3);
      uVar16 = (*pcVar10)();
      return uVar16;
    }
    uVar31 = (uint)local_290;
  }
  uVar9 = *(uint *)&(this->CachedPackageData).field_0x28;
  if (uVar23 != uVar9) {
    puVar28 = *(undefined1 **)&(this->CachedPackageData).field_0x20;
    if (puVar28 == (undefined1 *)0x0) {
      puVar28 = puVar1;
    }
    uVar31 = uVar31 & *(uint *)(puVar28 + (longlong)iVar21 * 4);
    while (uVar31 == 0) {
      lVar25 = (longlong)iVar21;
      uVar24 = uVar24 + 0x20;
      iVar21 = iVar21 + 1;
      uVar23 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_142afada0;
      uVar31 = *(uint *)(puVar28 + lVar25 * 4 + 4);
    }
    uVar5 = (ulonglong)(-uVar31 & uVar31) * 2 + 1;
    lVar25 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    uVar23 = (int)lVar25 + -1 + uVar24;
    if ((int)uVar9 < (int)uVar23) {
      uVar23 = uVar9;
    }
  }
LAB_142afada0:
  while( true ) {
    pTVar14 = local_158;
    if (*(int *)&local_158->field_0x8 - *(int *)&local_158->field_0x34 != (int)uStack_130) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FAssetPackageData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_295);
    }
    uVar16 = local_98.LooseBytes;
    if (((TStack_150.CurrentBitIndex == uVar23) &&
        (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar14 == pTVar4)
       ) break;
    lVar19 = lVar19 + (longlong)
                      *(int *)(*(longlong *)
                                (*(longlong *)pTVar14 + 8 +
                                (longlong)TStack_150.CurrentBitIndex * 0x18) + 0x74) * 8;
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  }
  uVar17 = FAssetDataTagMapSharedView::FMemoryCounter::GetFixedSize(&local_98);
  uVar16 = uVar16 + uVar17 + lVar19 + local_278 + local_270 + local_268 + local_260 + local_288 +
           local_210;
  if (((local_298 != '\0') && (4 < (byte)LogAssetRegistry._0_1_)) &&
     ((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry),
      4 < (byte)LogAssetRegistry._0_1_ &&
      (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry),
      4 < (byte)LogAssetRegistry._0_1_)))) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
  }
  local_98.FixedStoreIndices.HashSize = 0;
  if (local_98.FixedStoreIndices.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.FixedStoreIndices.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_98);
  return uVar16;
}

// GetAssetPackageData @ 142afbd30

FAssetPackageData * __thiscall
FAssetRegistryState::GetAssetPackageData(FAssetRegistryState *this,FName param_1)

{
  TTuple<FName,FAssetPackageData_*> *pTVar1;
  undefined8 *puVar2;
  
  pTVar1 = TSet<TTuple<FName,FAssetPackageData_*>,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FAssetPackageData_*>,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>,FDefaultSetAllocator>
                   *)&this->CachedPackageData,param_1);
  puVar2 = (undefined8 *)&pTVar1->field_0x8;
  if (pTVar1 == (TTuple<FName,FAssetPackageData_*> *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  if (puVar2 != (undefined8 *)0x0) {
    return (FAssetPackageData *)*puVar2;
  }
  return (FAssetPackageData *)0x0;
}

// GetAssetPackageData @ 142afbd70

FAssetPackageData * __thiscall
FAssetRegistryState::GetAssetPackageData(FAssetRegistryState *this,FName param_1)

{
  TTuple<FName,FAssetPackageData_*> *pTVar1;
  undefined8 *puVar2;
  
  pTVar1 = TSet<TTuple<FName,FAssetPackageData_*>,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FAssetPackageData_*>,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>,FDefaultSetAllocator>
                   *)&this->CachedPackageData,param_1);
  puVar2 = (undefined8 *)&pTVar1->field_0x8;
  if (pTVar1 == (TTuple<FName,FAssetPackageData_*> *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  if (puVar2 != (undefined8 *)0x0) {
    return (FAssetPackageData *)*puVar2;
  }
  return (FAssetPackageData *)0x0;
}

// GetAssetPackageData @ 142afbdb0

FAssetPackageData * __thiscall
FAssetRegistryState::GetAssetPackageData(FAssetRegistryState *this,FName param_1,FName *param_2)

{
  FName *pFVar1;
  TBaseKeyIterator<1> local_28;
  
  TSet<TTuple<FName,FAssetPackageData_*>,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>,FDefaultSetAllocator>
  ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
            (&local_28,
             (TSet<TTuple<FName,FAssetPackageData_*>,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>,FDefaultSetAllocator>
              *)&this->CachedPackageData,param_1);
  if (local_28.Index == -1) {
    return (FAssetPackageData *)0x0;
  }
  pFVar1 = (FName *)(*(longlong *)&(this->CachedPackageData).field_0x0 +
                    (longlong)local_28.Index * 0x18);
  *param_2 = *pFVar1;
  return (FAssetPackageData *)pFVar1[1];
}

// GetAssets @ 142afbe90

bool __thiscall
FAssetRegistryState::GetAssets
          (FAssetRegistryState *this,FARCompiledFilter *param_1,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_2,
          TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_3,bool param_4)

{
  bool bVar1;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> *local_res20;
  code *local_18;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> **local_10;
  
  local_10 = &local_res20;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FAssetRegistryState::GetAssets'::__l2::<lambda_1>,bool,FAssetData_const_&>
             ::Call;
  local_res20 = param_3;
  bVar1 = EnumerateAssets(this,param_1,param_2,
                          (TFunctionRef<bool___cdecl(FAssetData_const_&)> *)&local_18,
                          (param_4 ^ 1) << 2);
  return bVar1;
}

// GetDependencies @ 142afdbd0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

bool __thiscall
FAssetRegistryState::GetDependencies
          (FAssetRegistryState *this,FAssetIdentifier *param_1,
          TArray<FAssetDependency,TSizedDefaultAllocator<32>_> *param_2,EDependencyCategory param_3,
          FDependencyQuery *param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  uVar1 = ::GetTypeHash(param_1);
  iVar2 = TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FAssetIdentifier>
                    ((TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
                      *)&this->CachedDependsNodes,uVar1,param_1);
  if (iVar2 != -1) {
    lVar3 = (longlong)iVar2 * 0x30 + *(longlong *)&(this->CachedDependsNodes).field_0x0;
    puVar4 = (undefined8 *)(lVar3 + 0x20);
    if (lVar3 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    if ((puVar4 != (undefined8 *)0x0) && ((FDependsNode *)*puVar4 != (FDependsNode *)0x0)) {
      FDependsNode::GetDependencies((FDependsNode *)*puVar4,param_2,param_3,param_4);
      return true;
    }
  }
  return false;
}

// GetDependencies @ 142afdc70

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

bool __thiscall
FAssetRegistryState::GetDependencies
          (FAssetRegistryState *this,FAssetIdentifier *param_1,
          TArray<FAssetIdentifier,TSizedDefaultAllocator<32>_> *param_2,EDependencyCategory param_3,
          FDependencyQuery *param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  uVar1 = ::GetTypeHash(param_1);
  iVar2 = TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FAssetIdentifier>
                    ((TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
                      *)&this->CachedDependsNodes,uVar1,param_1);
  if (iVar2 != -1) {
    lVar3 = (longlong)iVar2 * 0x30 + *(longlong *)&(this->CachedDependsNodes).field_0x0;
    puVar4 = (undefined8 *)(lVar3 + 0x20);
    if (lVar3 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    if ((puVar4 != (undefined8 *)0x0) && ((FDependsNode *)*puVar4 != (FDependsNode *)0x0)) {
      FDependsNode::GetDependencies((FDependsNode *)*puVar4,param_2,param_3,param_4);
      return true;
    }
  }
  return false;
}

// GetFirstPackageByName @ 142afea80

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
FAssetRegistryState::GetFirstPackageByName(FAssetRegistryState *this,TStringView<wchar_t> *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  FName FVar4;
  undefined8 *in_R8;
  undefined4 local_res18 [2];
  TArray<FName,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  TStringView<wchar_t> local_58;
  FString local_48;
  FString local_38;
  
  local_res18[0] = 0;
  local_58.DataPtr = (wchar_t *)*in_R8;
  local_58._8_8_ = in_R8[1];
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  GetPackagesByName(this,&local_58,&local_78);
  if (local_78.ArrayNum == 0) {
    param_1->DataPtr = (wchar_t *)0x0;
    if ((FName *)local_78.AllocatorInstance.Data == (FName *)0x0) {
      return (FName)param_1;
    }
  }
  else {
    if (1 < local_78.ArrayNum) {
      AlgoImpl::
      IntroSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,FNameLexicalLess>_>
                ((FName *)local_78.AllocatorInstance.Data,local_78.ArrayNum,local_res18[0]._0_1_,
                 (FNameLexicalLess *)local_res18);
      if (2 < (byte)LogAssetRegistry._0_1_) {
        bVar3 = 2 < local_78.ArrayNum;
        if (bVar3) {
          ::FString::PrintfImpl(&local_68,L" and %d others");
        }
        if ((local_78.ArrayNum < 2) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          FVar4 = (FName)(*pcVar1)();
          return FVar4;
        }
        ::FName::ToString((FName *)(local_78.AllocatorInstance.Data + 8),&local_38);
        if ((local_78.ArrayNum < 1) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          FVar4 = (FName)(*pcVar1)();
          return FVar4;
        }
        ::FName::ToString((FName *)local_78.AllocatorInstance.Data,&local_48);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if ((bVar3) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
    }
    if ((local_78.ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      FVar4 = (FName)(*pcVar1)();
      return FVar4;
    }
    param_1->DataPtr = (wchar_t *)*(FName *)local_78.AllocatorInstance.Data;
  }
  FMemory::Free(local_78.AllocatorInstance.Data);
  return (FName)param_1;
}

// GetMutableAssetByObjectPath @ 142aff3c0

FAssetData * __thiscall
FAssetRegistryState::GetMutableAssetByObjectPath(FAssetRegistryState *this,FCachedAssetKey *param_1)

{
  FName FVar1;
  FName FVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  FCachedAssetKey local_18;
  
  FVar1 = param_1->OuterPath;
  FVar2 = param_1->ObjectName;
  local_18.OuterPath = FVar1;
  local_18.ObjectName = FVar2;
  uVar3 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  uVar4 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  uVar4 = uVar4 + FVar1.Number;
  iVar5 = TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>::
          FindIndexByHash<UE::AssetRegistry::Private::FCachedAssetKey>
                    (&this->CachedAssets,
                     uVar4 * 0x40 + uVar3 + FVar2.Number + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4,
                     &local_18);
  if ((iVar5 != -1) &&
     (puVar6 = (undefined8 *)((longlong)iVar5 * 0x10 + *(longlong *)&(this->CachedAssets).Elements),
     puVar6 != (undefined8 *)0x0)) {
    return (FAssetData *)*puVar6;
  }
  return (FAssetData *)0x0;
}

// GetMutableAssetsSortedByObjectPath @ 142aff470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FAssetData_*,TSizedDefaultAllocator<32>_> * __thiscall
FAssetRegistryState::GetMutableAssetsSortedByObjectPath
          (FAssetRegistryState *this,
          TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  char *_Str1;
  FSortData *pFVar3;
  code *pcVar4;
  FAssetData **ppFVar5;
  <lambda_4> <Var6;
  ForAnyElementType FVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *pTVar11;
  FSoftObjectPath *pFVar12;
  ulonglong uVar13;
  ForAnyElementType FVar14;
  FSortData *pFVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 auStackY_1c8 [32];
  <lambda_4> local_178 [8];
  TArray<_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::FSortData,TSizedDefaultAllocator<32>_>
  local_170;
  undefined1 local_160 [4];
  uint local_15c;
  TArray<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>_> local_158;
  TArray<_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::FSortData,TSizedDefaultAllocator<32>_>
  *local_148;
  <lambda_2> local_140;
  ulonglong local_138;
  code *local_130;
  TArray<_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::FSortData,TSizedDefaultAllocator<32>_>
  **local_128;
  <lambda_3> local_120;
  FString local_110;
  FString local_100;
  FSoftObjectPath local_f0;
  FSoftObjectPath local_d0;
  FLinearBlockAllocator local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  uVar13 = 0;
  uVar17 = *(int *)&(this->CachedAssets).Elements.field_0x8 -
           *(int *)&(this->CachedAssets).Elements.field_0x34;
  local_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_170.ArrayNum = 0;
  local_170.ArrayMax = 0;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  if (0 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar17,&local_170.AllocatorInstance,0,&local_170.ArrayMax);
  }
  local_148 = &local_170;
  local_128 = &local_148;
  local_130 = UE::Core::Private::Function::
              TFunctionRefCaller<`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_1>,void,FAssetData_&>
              ::Call;
  EnumerateAllMutableAssets(this,(TFunctionRef<void___cdecl(FAssetData_&)> *)&local_130,AllowAll);
  local_a8.BlockAllocs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.BlockAllocs.ArrayNum = 0;
  local_a8.BlockAllocs.ArrayMax = 0;
  local_a8.LastBlock = (FBlock *)0x0;
  local_a8.BlockAlignment = 4;
  local_a8.BlockSize = 0x10000;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&local_a8.LockForThreadSafeAllocator,4000);
  local_120.SortDatas = &local_170;
  local_140.SharedAllocator = &local_a8;
  local_a8.ReferenceCount = (atomic<int>)0x0;
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 0;
  local_158.ArrayMax = 0;
  local_120.__this = this;
  ParallelForWithTaskContext<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>,_FAssetRegistryState::GetMutableAssetsSortedByObjectPath_::__l2::<lambda_2>,_FAssetRegistryState::GetMutableAssetsSortedByObjectPath_::__l2::<lambda_3>_>
            (L"GetMutableAssetsSortedByObjectPath",&local_158,local_170.ArrayNum,500,&local_140,
             &local_120,None);
  <Var6 = local_178[0];
  Algo::MergeSort::
  ParallelMergeSortPointerAndNum<_FAssetRegistryState::GetMutableAssetsSortedByObjectPath_::__l2::FSortData,int,_FAssetRegistryState::GetMutableAssetsSortedByObjectPath_::__l2::<lambda_4>_>
            ((FSortData *)local_170.AllocatorInstance.Data,local_170.ArrayNum,local_178[0]);
  uVar19 = uVar13;
  if (0 < local_170.ArrayNum + -1) {
    do {
      uVar16 = (uint)uVar13;
      uVar17 = 0;
      if ((int)uVar16 < local_170.ArrayNum) {
        uVar17 = ~uVar16 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar11;
      }
      FVar14.Data = local_170.AllocatorInstance.Data;
      uVar18 = uVar16 + 1;
      local_15c = ~uVar18 >> 0x1f;
      uVar17 = 0;
      if ((int)uVar18 < local_170.ArrayNum) {
        uVar17 = local_15c;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar11;
      }
      FVar7.Data = local_170.AllocatorInstance.Data;
      local_138 = uVar19 + 0x20;
      iVar9 = strcmp(*(char **)(local_170.AllocatorInstance.Data + uVar19 + 0x28),
                     *(char **)(FVar14.Data + uVar19 + 8));
      if (iVar9 == 0) {
        iVar9 = ::FName::Compare((FName *)(FVar7.Data + uVar19 + 0x30),
                                 (FName *)(FVar14.Data + uVar19 + 0x10));
        if (iVar9 != 0) {
          bVar8 = SUB41((uint)iVar9 >> 0x1f,0);
          goto LAB_142aff707;
        }
        _Str1 = *(char **)(FVar7.Data + uVar19 + 0x38);
        if ((_Str1 == (char *)0x0) != (*(char **)(FVar14.Data + uVar19 + 0x18) == (char *)0x0)) {
          bVar8 = _Str1 == (char *)0x0;
          goto LAB_142aff707;
        }
        if ((_Str1 != (char *)0x0) &&
           (iVar9 = strcmp(_Str1,*(char **)(FVar14.Data + uVar19 + 0x18)), iVar9 != 0)) {
          bVar8 = SUB41((uint)iVar9 >> 0x1f,0);
          goto LAB_142aff707;
        }
      }
      else {
        bVar8 = SUB41((uint)iVar9 >> 0x1f,0);
LAB_142aff707:
        if (bVar8 != false) {
          if (2 < (byte)LogAssetRegistry._0_1_) {
            uVar17 = 0;
            if ((int)uVar18 < local_170.ArrayNum) {
              uVar17 = local_15c;
            }
            if ((uVar17 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              pTVar11 = (TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
              return pTVar11;
            }
            pFVar12 = FAssetData::GetSoftObjectPath
                                (*(FAssetData **)
                                  &local_170.AllocatorInstance.Data[(longlong)(int)uVar18 * 0x20].
                                   field_0x0,&local_d0);
            FSoftObjectPath::ToString(pFVar12,&local_100);
            uVar17 = 0;
            if ((int)uVar16 < local_170.ArrayNum) {
              uVar17 = ~uVar16 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              pTVar11 = (TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
              return pTVar11;
            }
            pFVar12 = FAssetData::GetSoftObjectPath
                                (*(FAssetData **)
                                  &local_170.AllocatorInstance.Data[(longlong)(int)uVar16 * 0x20].
                                   field_0x0,&local_f0);
            FSoftObjectPath::ToString(pFVar12,&local_110);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
            if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_110.Data.AllocatorInstance.Data);
            }
            if (local_f0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
               ) {
              FMemory::Free(local_f0.SubPathString.Data.AllocatorInstance.Data);
            }
            if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_100.Data.AllocatorInstance.Data);
            }
            if (local_d0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
               ) {
              FMemory::Free(local_d0.SubPathString.Data.AllocatorInstance.Data);
            }
          }
          AlgoImpl::
          IntroSortInternal<_FAssetRegistryState::GetMutableAssetsSortedByObjectPath_::__l2::FSortData,int,FIdentityFunctor,_FAssetRegistryState::GetMutableAssetsSortedByObjectPath_::__l2::<lambda_4>_>
                    ((FSortData *)local_170.AllocatorInstance.Data,local_170.ArrayNum,
                     (FIdentityFunctor)local_178[0],<Var6);
          break;
        }
      }
      uVar13 = (ulonglong)uVar18;
      uVar19 = local_138;
    } while ((int)uVar18 < local_170.ArrayNum + -1);
  }
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  if (local_170.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(local_170._8_8_ & 0xffffffff);
  }
  if (0 < local_170.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_170.ArrayNum,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iVar9 = local_170.ArrayNum;
  pFVar15 = (FSortData *)(local_170.AllocatorInstance.Data + (longlong)local_170.ArrayNum * 0x20);
  FVar14.Data = local_170.AllocatorInstance.Data;
  while( true ) {
    if (local_170.ArrayNum != iVar9) {
      local_178[0] = (<lambda_4>)0x0;
      `TCheckedPointerIterator<`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::FSortData,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_178);
    }
    if ((FSortData *)FVar14.Data == pFVar15) break;
    pFVar3 = (FSortData *)(__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar3 <= FVar14.Data) && (FVar14.Data < (FSortData *)(&pFVar3->AssetData + *piVar1))) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar11;
    }
    iVar10 = __return_storage_ptr__->ArrayNum;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar10 + 1;
    ppFVar5 = &((FSortData *)FVar14.Data)->AssetData;
    FVar14.Data = FVar14.Data + 0x20;
    *(FAssetData **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar10 * 8) =
         *ppFVar5;
  }
  DestructItems<UE::FLinearBlockAllocatorThreadAccessor,int>
            ((FLinearBlockAllocatorThreadAccessor *)local_158.AllocatorInstance.Data,
             local_158.ArrayNum);
  if ((FLinearBlockAllocatorThreadAccessor *)local_158.AllocatorInstance.Data !=
      (FLinearBlockAllocatorThreadAccessor *)0x0) {
    FMemory::Free(local_158.AllocatorInstance.Data);
  }
  if ((local_a8.ReferenceCount != (atomic<int>)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ReferenceCount.load(std::memory_order_relaxed) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Internal\\AssetRegistry\\LinearBlockAllocator.h"
                         ,0x6b,
                         L"FLinearBlockAllocator is destroyed while still in use by a FLinearBlockAllocatorThreadAccessor."
                        ), bVar8)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar11;
  }
  iVar9 = local_a8.BlockAllocs.ArrayNum;
  uVar13 = (ulonglong)local_a8.BlockAllocs.ArrayNum;
  pFVar2 = local_a8.BlockAllocs.AllocatorInstance.Data + uVar13 * 8;
  FVar14.Data = local_a8.BlockAllocs.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar13 != iVar9) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_160);
    }
    if (FVar14.Data == pFVar2) break;
    FMemory::Free(*(void **)FVar14.Data);
    uVar13 = local_a8.BlockAllocs._8_8_ & 0xffffffff;
    FVar14.Data = FVar14.Data + 8;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&local_a8.LockForThreadSafeAllocator);
  if (local_a8.BlockAllocs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.BlockAllocs.AllocatorInstance.Data);
  }
  if ((FSortData *)local_170.AllocatorInstance.Data != (FSortData *)0x0) {
    FMemory::Free(local_170.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPackagesByName @ 142afff00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAssetRegistryState::GetPackagesByName
          (FAssetRegistryState *this,TStringView<wchar_t> *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2)

{
  TMap<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *pTVar1;
  ulonglong uVar2;
  uint uVar3;
  FName FVar4;
  FName *pFVar5;
  code *pcVar6;
  TMap<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  FName *pFVar12;
  longlong lVar13;
  undefined1 *puVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 auStack_2a8 [32];
  FName *local_288;
  FName *local_280;
  longlong local_278;
  longlong local_270;
  undefined8 local_268;
  undefined1 local_258 [8];
  FName local_250;
  TMap<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *local_248;
  int iStack_240;
  uint uStack_23c;
  undefined1 *local_238;
  undefined4 uStack_230;
  int iStack_22c;
  int local_228;
  int iStack_224;
  int iStack_220;
  undefined4 uStack_21c;
  int local_218;
  int local_214;
  TStringView<wchar_t> *local_210;
  TMap<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *local_208;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_200;
  undefined8 uStack_1e0;
  TStringView<wchar_t> local_1d8;
  TStringView<wchar_t> local_1c8;
  FName local_1b8 [2];
  TStringView<wchar_t> local_1a8;
  wchar_t *local_198;
  undefined8 uStack_190;
  wchar_t *local_188;
  undefined8 uStack_180;
  wchar_t *local_178;
  undefined8 uStack_170;
  TStringBuilderBase<wchar_t> local_168;
  wchar_t local_148 [128];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_2a8;
  local_1a8.DataPtr = param_1->DataPtr;
  local_1a8.Size = param_1->Size;
  local_1a8._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pTVar1 = &this->CachedAssetsByPackageName;
  local_210 = param_1;
  bVar8 = FPackageName::IsShortPackageName(&local_1a8);
  if (!bVar8) {
    local_198 = param_1->DataPtr;
    uStack_190 = *(undefined8 *)&param_1->Size;
    pFVar12 = ::FName::FName(local_1b8,(int)uStack_190,local_198,FNAME_Add);
    FVar4 = *pFVar12;
    local_250 = FVar4;
    uVar9 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
    if (*(int *)&(this->CachedAssetsByPackageName).field_0x8 !=
        *(int *)&(this->CachedAssetsByPackageName).field_0x34) {
      puVar14 = *(undefined1 **)&(this->CachedAssetsByPackageName).field_0x40;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = &(this->CachedAssetsByPackageName).field_0x38;
      }
      iVar10 = *(int *)(puVar14 +
                       (ulonglong)
                       (*(int *)&(this->CachedAssetsByPackageName).field_0x48 - 1U &
                       FVar4.Number + uVar9) * 4);
      if (iVar10 != -1) {
        do {
          if (*(FName *)(*(longlong *)pTVar1 + (longlong)iVar10 * 0x28) == FVar4) {
            pFVar12 = (FName *)(param_2->AllocatorInstance).Data;
            if ((pFVar12 <= &local_250) && (&local_250 < pFVar12 + param_2->ArrayMax)) {
              local_270 = (longlong)param_2->ArrayNum;
              local_268 = 8;
              local_288 = &local_250;
              local_280 = pFVar12;
              local_278 = (longlong)param_2->ArrayMax;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar8) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            iVar10 = param_2->ArrayNum;
            if (iVar10 == param_2->ArrayMax) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x408,&param_2->AllocatorInstance,&param_2->ArrayMax);
            }
            param_2->ArrayNum = iVar10 + 1;
            *(FName *)((param_2->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_250;
            return;
          }
          iVar10 = *(int *)(*(longlong *)pTVar1 + 0x20 + (longlong)iVar10 * 0x28);
        } while (iVar10 != -1);
      }
    }
    return;
  }
  local_168.Base = local_148;
  puVar14 = &(this->CachedAssetsByPackageName).field_0x10;
  iStack_240 = 0;
  local_168.CurPos = local_148;
  local_168.bIsDynamic = false;
  local_168.bIsExternal = false;
  uStack_23c = 1;
  local_168.End = (wchar_t *)local_48;
  iVar10 = *(int *)&(this->CachedAssetsByPackageName).field_0x28;
  local_228 = 0;
  iStack_22c = 0;
  if (iVar10 != 0) {
    puVar17 = *(uint **)&(this->CachedAssetsByPackageName).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar14;
    }
    uVar9 = *puVar17;
    while (uVar9 == 0) {
      lVar13 = (longlong)iStack_240;
      local_228 = local_228 + 0x20;
      iStack_240 = iStack_240 + 1;
      iStack_22c = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_240) goto LAB_142b0013f;
      uVar9 = puVar17[lVar13 + 1];
    }
    uStack_23c = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_23c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_218 = (int)lVar13;
    iStack_22c = local_228 + -1 + local_218;
    if (iVar10 < iStack_22c) {
      iStack_22c = iVar10;
    }
  }
LAB_142b0013f:
  uVar9 = *(uint *)&(this->CachedAssetsByPackageName).field_0x28;
  uVar18 = uVar9 & 0xffffffe0;
  iStack_220 = *(int *)&(this->CachedAssetsByPackageName).field_0x8 -
               *(int *)&(this->CachedAssetsByPackageName).field_0x34;
  uStack_230 = 0xffffffff;
  TStack_200._padding_ = CONCAT44(uStack_23c,iStack_240);
  TStack_200.CurrentBitIndex = iStack_22c;
  TStack_200.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar9 >> 5;
  TStack_200._28_4_ = iStack_22c;
  TStack_200.BaseBitIndex = local_228;
  uStack_1e0 = CONCAT44(uStack_21c,iStack_220);
  local_248 = pTVar1;
  local_238 = puVar14;
  iStack_224 = iStack_22c;
  local_208 = pTVar1;
  TStack_200.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar14;
  if ((((int)uVar9 < 0) || (iVar10 < (int)uVar9)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar3 = *(uint *)&(this->CachedAssetsByPackageName).field_0x28;
  if (uVar9 != uVar3) {
    puVar16 = *(undefined1 **)&(this->CachedAssetsByPackageName).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar14;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
    while (uVar9 == 0) {
      lVar13 = (longlong)iVar15;
      uVar18 = uVar18 + 0x20;
      iVar15 = iVar15 + 1;
      uVar9 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_142b00250;
      uVar9 = *(uint *)(puVar16 + lVar13 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_214 = (int)lVar13;
    uVar9 = local_214 + -1 + uVar18;
    if ((int)uVar3 < (int)uVar9) {
      uVar9 = uVar3;
    }
  }
LAB_142b00250:
  do {
    pTVar7 = local_208;
    if (*(int *)&local_208->field_0x8 - *(int *)&local_208->field_0x34 != (int)uStack_1e0) {
      local_258[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_258);
    }
    if (((TStack_200.CurrentBitIndex == uVar9) &&
        (TStack_200.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar14)) && (pTVar7 == pTVar1)
       ) {
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
      return;
    }
    pFVar12 = (FName *)(*(longlong *)pTVar7 + (longlong)TStack_200.CurrentBitIndex * 0x28);
    ::FName::ToString(pFVar12,&local_168);
    local_1d8.DataPtr = local_168.Base;
    local_1d8.Size = (int)((longlong)local_168.CurPos - (longlong)local_168.Base >> 1);
    FPathViews::GetBaseFilename(&local_1c8,&local_1d8);
    iVar10 = local_1c8.Size;
    local_188 = local_210->DataPtr;
    uStack_180 = *(undefined8 *)&local_210->Size;
    iVar15 = (int)*(undefined8 *)&local_210->Size;
    if (local_1c8.Size == iVar15) {
      local_178 = local_188;
      uStack_170 = uStack_180;
      if ((local_1c8.Size != 0) && (iVar15 != 0)) {
        iVar11 = iVar15;
        if (local_1c8.Size < iVar15) {
          iVar11 = local_1c8.Size;
        }
        iVar11 = FGenericPlatformStricmp::Strnicmp(local_1c8.DataPtr,local_188,(longlong)iVar11);
        if (iVar11 != 0) goto LAB_142b00397;
      }
      if (iVar10 == iVar15) {
        pFVar5 = (FName *)(param_2->AllocatorInstance).Data;
        if ((pFVar5 <= pFVar12) && (pFVar12 < pFVar5 + param_2->ArrayMax)) {
          local_270 = (longlong)param_2->ArrayNum;
          local_268 = 8;
          local_288 = pFVar12;
          local_280 = pFVar5;
          local_278 = (longlong)param_2->ArrayMax;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar10 = param_2->ArrayNum;
        if (iVar10 == param_2->ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar10 + 1;
        *(FName *)((param_2->AllocatorInstance).Data + (longlong)iVar10 * 8) = *pFVar12;
      }
    }
LAB_142b00397:
    TStack_200.UnvisitedBitMask = TStack_200.UnvisitedBitMask & ~TStack_200._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_200);
  } while( true );
}

// GetPrimaryAssetsIds @ 142b00410

void __thiscall
FAssetRegistryState::GetPrimaryAssetsIds
          (FAssetRegistryState *this,
          TSet<FPrimaryAssetId,DefaultKeyFuncs<FPrimaryAssetId,0>,FDefaultSetAllocator> *param_1)

{
  TSet<FPrimaryAssetId,DefaultKeyFuncs<FPrimaryAssetId,0>,FDefaultSetAllocator> *local_res10;
  code **local_res18 [2];
  code *local_28;
  TSet<FPrimaryAssetId,DefaultKeyFuncs<FPrimaryAssetId,0>,FDefaultSetAllocator> **local_20;
  code *local_18;
  undefined8 **local_10;
  
  local_20 = &local_res10;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`FAssetRegistryState::GetPrimaryAssetsIds'::__l2::<lambda_1>,void,FAssetData_const_&>
             ::Call;
  local_res18[0] = &local_28;
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FAssetRegistryState::EnumerateAllAssets'::__l2::<lambda_1>,void,FAssetData_&>
             ::Call;
  local_res10 = param_1;
  EnumerateAllMutableAssets(this,(TFunctionRef<void___cdecl(FAssetData_&)> *)&local_18,AllowAll);
  return;
}

// GetReferencers @ 142b00520

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

bool __thiscall
FAssetRegistryState::GetReferencers
          (FAssetRegistryState *this,FAssetIdentifier *param_1,
          TArray<FAssetDependency,TSizedDefaultAllocator<32>_> *param_2,EDependencyCategory param_3,
          FDependencyQuery *param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  uVar1 = ::GetTypeHash(param_1);
  iVar2 = TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FAssetIdentifier>
                    ((TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
                      *)&this->CachedDependsNodes,uVar1,param_1);
  if (iVar2 != -1) {
    lVar3 = (longlong)iVar2 * 0x30 + *(longlong *)&(this->CachedDependsNodes).field_0x0;
    puVar4 = (undefined8 *)(lVar3 + 0x20);
    if (lVar3 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    if ((puVar4 != (undefined8 *)0x0) && ((FDependsNode *)*puVar4 != (FDependsNode *)0x0)) {
      FDependsNode::GetReferencers((FDependsNode *)*puVar4,param_2,param_3,param_4);
      return true;
    }
  }
  return false;
}

// GetReferencers @ 142b005c0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

bool __thiscall
FAssetRegistryState::GetReferencers
          (FAssetRegistryState *this,FAssetIdentifier *param_1,
          TArray<FAssetIdentifier,TSizedDefaultAllocator<32>_> *param_2,EDependencyCategory param_3,
          FDependencyQuery *param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined8 *puVar14;
  ForAnyElementType FVar15;
  undefined1 local_res8 [8];
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> local_28;
  
  uVar10 = ::GetTypeHash(param_1);
  iVar11 = TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FAssetIdentifier>
                     ((TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
                       *)&this->CachedDependsNodes,uVar10,param_1);
  if (iVar11 != -1) {
    lVar13 = (longlong)iVar11 * 0x30 + *(longlong *)&(this->CachedDependsNodes).field_0x0;
    puVar14 = (undefined8 *)(lVar13 + 0x20);
    if (lVar13 == 0) {
      puVar14 = (undefined8 *)0x0;
    }
    if ((puVar14 != (undefined8 *)0x0) && ((FDependsNode *)*puVar14 != (FDependsNode *)0x0)) {
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      FDependsNode::GetReferencers((FDependsNode *)*puVar14,&local_28,param_3,param_4);
      uVar10 = param_2->ArrayNum + local_28.ArrayNum;
      if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
      }
      piVar1 = &param_2->ArrayMax;
      iVar11 = local_28.ArrayNum;
      if (*piVar1 < (int)uVar10) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,4,uVar10,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
        iVar11 = local_28.ArrayNum;
      }
      pFVar2 = local_28.AllocatorInstance.Data + (longlong)iVar11 * 8;
      FVar15.Data = local_28.AllocatorInstance.Data;
      iVar12 = iVar11;
      while( true ) {
        if (iVar12 != iVar11) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FDependsNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (FVar15.Data == pFVar2) break;
                    /* WARNING: Load size is inaccurate */
        pFVar3 = *FVar15.Data;
        pFVar4 = (param_2->AllocatorInstance).Data;
        if ((pFVar4 <= pFVar3) && (pFVar3 < pFVar4 + (longlong)*piVar1 * 0x20)) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
        }
        iVar12 = param_2->ArrayNum;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x420,&param_2->AllocatorInstance,piVar1);
        }
        param_2->ArrayNum = iVar12 + 1;
        uVar7 = *(undefined8 *)(pFVar3 + 8);
        pFVar5 = (param_2->AllocatorInstance).Data;
        FVar15.Data = FVar15.Data + 8;
        pFVar4 = pFVar5 + (longlong)iVar12 * 0x20;
        *(undefined8 *)pFVar4 = *(undefined8 *)pFVar3;
        *(undefined8 *)(pFVar4 + 8) = uVar7;
        uVar7 = *(undefined8 *)(pFVar3 + 0x18);
        pFVar5 = pFVar5 + (longlong)iVar12 * 0x20 + 0x10;
        *(undefined8 *)pFVar5 = *(undefined8 *)(pFVar3 + 0x10);
        *(undefined8 *)(pFVar5 + 8) = uVar7;
        iVar12 = local_28.ArrayNum;
      }
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      return true;
    }
  }
  return false;
}

// HasAssets @ 142b00bb0

bool __thiscall FAssetRegistryState::HasAssets(FAssetRegistryState *this,FName param_1,bool param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  bool bVar3;
  TTuple<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_> *pTVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  FAssetData *local_res8;
  undefined1 local_res18 [16];
  FAssetRegistryState *local_38;
  undefined1 local_30;
  undefined1 *local_28;
  
  local_28 = local_res18;
  local_res18[0] = 0;
  local_38 = this;
  local_30 = param_2;
  pTVar4 = TSet<TTuple<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                   *)&this->CachedAssetsByPath,param_1);
  plVar6 = (longlong *)&pTVar4->field_0x8;
  if (pTVar4 == (TTuple<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_> *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  if (plVar6 != (longlong *)0x0) {
    puVar5 = (undefined8 *)*plVar6;
    lVar2 = plVar6[1];
    puVar1 = puVar5 + (int)lVar2;
    while( true ) {
      if ((int)plVar6[1] != (int)lVar2) {
        `TCheckedPointerIterator<FAssetData_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (puVar5 == puVar1) break;
      local_res8 = (FAssetData *)*puVar5;
      bVar3 = UE::Core::Private::Function::
              TFunctionRefCaller<`FAssetRegistryState::HasAssets'::__l2::<lambda_1>,bool,FAssetData_const_*>
              ::Call(&local_38,&local_res8);
      if (!bVar3) {
        return (bool)local_res18[0];
      }
      puVar5 = puVar5 + 1;
    }
    return (bool)local_res18[0];
  }
  return (bool)local_res18[0];
}

// InitializeFromExisting @ 142b01570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
FAssetRegistryState::InitializeFromExisting
          (FAssetRegistryState *this,
          TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
          *param_1,TMap<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
                   *param_2,
          TMap<FName,FAssetPackageData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>_>
          *param_3,FAssetRegistrySerializationOptions *param_4,EAppendMode param_5,
          FAssetRegistryAppendResult *param_6)

{
  FName *pFVar1;
  uint uVar2;
  FName FVar3;
  code *pcVar4;
  TBitArray<FDefaultBitArrayAllocator> *pTVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  FPackageCustomVersion *pFVar9;
  undefined8 *puVar10;
  FName FVar11;
  TMap<FName,FAssetPackageData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>_>
  *pTVar12;
  TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
  *pTVar13;
  bool bVar14;
  uint uVar15;
  undefined8 *puVar16;
  FOptions *pFVar17;
  ulonglong uVar18;
  FAssetDataTagMapSharedView *pFVar19;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar20;
  TTuple<FName,FAssetPackageData_*> *pTVar21;
  TTuple<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
  *pTVar22;
  FAssetPackageData *pFVar23;
  FDependsNode *pFVar24;
  undefined1 *puVar25;
  longlong *plVar26;
  TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
  *pTVar27;
  int iVar28;
  longlong lVar29;
  undefined1 *puVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  longlong *plVar34;
  FAssetIdentifier *pFVar35;
  int iVar36;
  undefined1 *puVar37;
  int iVar38;
  uint *puVar39;
  ulonglong uVar40;
  ForElementType<FSetElementId> FVar41;
  ForElementType<FSetElementId> FVar42;
  undefined1 auStackY_ad8 [32];
  bool local_aa8;
  undefined1 local_aa7;
  undefined1 local_aa6;
  undefined1 local_aa5;
  undefined1 local_aa4;
  undefined1 local_aa3 [3];
  TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
  *local_aa0;
  TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
  *local_a98;
  undefined8 uStack_a90;
  ForElementType<FSetElementId> FStack_a88;
  undefined8 uStack_a80;
  FScriptContainerElement *pFStack_a78;
  uint local_a70;
  int iStack_a6c;
  ForElementType<FSetElementId> local_a68;
  ForAnyElementType local_a60;
  undefined8 local_a58;
  TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
  *local_a50;
  longlong local_a48;
  FName local_a38;
  FName FStack_a30;
  undefined8 *local_a28;
  undefined8 *local_a20;
  uint local_a18;
  undefined4 local_a14;
  TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
  *local_a10;
  longlong *local_a08;
  ulonglong local_a00;
  FStore *local_9f8;
  undefined8 local_9f0;
  FName local_9e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_9e0;
  uchar local_9c0 [4];
  int iStack_9bc;
  ForElementType<FSetElementId> FStack_9b8;
  uint local_9b0;
  int iStack_9ac;
  int iStack_9a8;
  int iStack_9a4;
  int local_9a0;
  longlong local_998;
  FMapHandle local_990;
  FAssetDataTagMapSharedView local_988;
  TMap<FName,FAssetPackageData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>_>
  *local_980;
  undefined1 local_978 [12];
  FName local_96c;
  undefined8 local_964;
  undefined8 local_95c;
  undefined8 local_954;
  int local_94c;
  TMap<FName,FAssetPackageData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>_>
  *local_948;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_940;
  int iStack_920;
  TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
  *local_918;
  undefined1 auStack_910 [20];
  uint uStack_8fc;
  undefined8 local_8f8;
  undefined1 auStack_8f0 [16];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_8e0;
  int iStack_8c0;
  TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
  *local_8b8;
  undefined1 auStack_8b0 [32];
  int iStack_890;
  TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
  *local_888;
  EAppendMode *local_880;
  code *local_878;
  TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
  **local_870;
  wchar_t *local_868;
  int iStack_860;
  undefined4 uStack_85c;
  undefined8 **local_858;
  FAssetRegistryState *local_850;
  FAssetRegistryAppendResult *local_848;
  FStoreBuilder *local_840;
  longlong **local_838;
  EAppendMode local_828 [2];
  ForElementType<FSetElementId> local_820;
  undefined8 **local_818;
  TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
  *local_810;
  ForAnyElementType *local_808;
  undefined4 *local_800;
  undefined4 local_7f8;
  undefined8 ***local_7f0;
  _RTL_CRITICAL_SECTION *local_7e8;
  TStringView<wchar_t> local_7d8;
  FCachedAssetKey local_7c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_7b8 [3];
  FDependencyQuery local_758;
  TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
  local_738;
  ForAnyElementType local_6e8;
  longlong local_6d8 [3];
  longlong *local_6c0;
  TSet<FAssetIdentifier,DefaultKeyFuncs<FAssetIdentifier,0>,FDefaultSetAllocator> local_6b8;
  _RTL_CRITICAL_SECTION local_668;
  TStringBuilderBase<wchar_t> local_638;
  wchar_t local_618 [256];
  FOptions local_418;
  FStoreBuilder local_378;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_ad8;
  uVar32 = 1;
  uVar31 = *(uint *)&(param_1->Elements).field_0x8;
  lVar29 = (longlong)(int)uVar31;
  local_a68 = (ForElementType<FSetElementId>)param_4;
  local_a60.Data = (FScriptContainerElement *)0x0;
  local_a58 = 0;
  local_a50 = (TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
               *)param_2;
  local_a18 = uVar31;
  local_a10 = param_1;
  local_980 = param_3;
  if (param_5 == Rebuild) {
    Reset(this);
  }
  else {
    if ((int)uVar31 < 1) {
      if ((int)uVar31 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar31);
      }
    }
    else {
      iVar28 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (8,8,uVar31,&local_a60,(int *)&local_a58,(int *)((longlong)&local_a58 + 4))
      ;
      memset(local_a60.Data + (longlong)iVar28 * 8,0,lVar29 << 3);
    }
    uVar18 = 0;
    local_998 = lVar29;
    if (0 < (int)uVar31) {
      local_a48 = 0;
      uVar40 = uVar18;
      do {
        lVar29 = local_a48;
        pTVar27 = (TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
                   *)0x0;
        local_aa0 = (TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
                     *)0x0;
        uVar31 = (uint)uVar18;
        if (uVar31 == 0xffffffff) {
LAB_142b0179c:
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar14) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        else {
          if ((-1 < (int)uVar31) && ((int)uVar31 < *(int *)&(param_1->Elements).field_0x8)) {
            if ((*(int *)&(param_1->Elements).field_0x28 <= (int)uVar31) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5c6,L""), bVar14)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            puVar25 = *(undefined1 **)&(param_1->Elements).field_0x20;
            puVar30 = &(param_1->Elements).field_0x10;
            if (puVar25 != (undefined1 *)0x0) {
              puVar30 = puVar25;
            }
            uVar33 = uVar31;
            if ((int)uVar31 < 0) {
              uVar33 = uVar31 + 0x1f;
            }
            pTVar27 = local_aa0;
            if ((*(uint *)(puVar30 + (longlong)((int)uVar33 >> 5) * 4) & uVar32) != 0) {
              local_a38.ComparisonIndex.Value = 0;
              local_a38.Number = 0;
              FStack_a30.ComparisonIndex.Value = 0;
              FStack_a30.Number = 0;
              pFVar1 = *(FName **)(lVar29 + *(longlong *)&param_1->Elements);
              if (pFVar1 != (FName *)0x0) {
                FStack_a30 = pFVar1[2];
                local_a38 = *pFVar1;
              }
              FVar11 = FStack_a30;
              FVar3 = local_a38;
              local_7c8.OuterPath = local_a38;
              local_7c8.ObjectName = FStack_a30;
              uVar33 = ::GetTypeHash(FStack_a30.ComparisonIndex.Value);
              uVar15 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
              uVar15 = uVar15 + FVar3.Number;
              iVar28 = TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
                       ::FindIndexByHash<UE::AssetRegistry::Private::FCachedAssetKey>
                                 (&this->CachedAssets,
                                  uVar15 * 0x40 + FVar11.Number + uVar33 +
                                  (uVar15 >> 2) + 0x9e3779b9 ^ uVar15,&local_7c8);
              pTVar27 = local_aa0;
              param_1 = local_a10;
              lVar29 = local_a48;
              if ((iVar28 != -1) &&
                 (puVar16 = (undefined8 *)
                            ((longlong)iVar28 * 0x10 + *(longlong *)&(this->CachedAssets).Elements),
                 puVar16 != (undefined8 *)0x0)) {
                pTVar27 = (TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
                           *)*puVar16;
              }
            }
          }
          uVar33 = 0;
          if ((int)uVar31 < (int)local_a58) {
            uVar33 = ~uVar31 >> 0x1f;
          }
          if (uVar33 == 0) goto LAB_142b0179c;
        }
        local_a48 = lVar29 + 0x10;
        uVar18 = (ulonglong)(uVar31 + 1);
        uVar32 = uVar32 << 1 | (uint)((int)uVar32 < 0);
        *(TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
          **)(local_a60.Data + uVar40 * 8) = pTVar27;
        uVar40 = uVar40 + 1;
        param_3 = local_980;
        param_4 = (FAssetRegistrySerializationOptions *)local_a68;
        uVar31 = local_a18;
      } while ((longlong)uVar40 < local_998);
    }
  }
  local_a08 = (longlong *)0x0;
  local_a00 = 0;
  pFVar17 = &FAssetRegistryWriterOptions::FAssetRegistryWriterOptions
                       ((FAssetRegistryWriterOptions *)&local_418,param_4)->Tags;
  FixedTagPrivate::FStoreBuilder::FStoreBuilder(&local_378,pFVar17);
  FixedTagPrivate::FOptions::~FOptions(&local_418);
  local_a14 = 0;
  InitializeCriticalSectionAndSpinCount(&local_668,4000);
  local_a28 = (undefined8 *)0x0;
  local_a28 = FMemory::Malloc(0x18,8);
  *local_a28 = 0;
  local_858 = &local_a28;
  local_848 = param_6;
  local_840 = &local_378;
  local_838 = &local_a08;
  local_828[0] = param_5;
  local_818 = &local_a28;
  local_808 = &local_a60;
  local_800 = &local_a14;
  local_7f0 = &local_858;
  local_7e8 = &local_668;
  local_880 = local_828;
  local_870 = &local_888;
  local_878 = UE::Core::Private::Function::
              TFunctionRefCaller<`FAssetRegistryState::InitializeFromExisting'::__l2::<lambda_3>,void,int>
              ::Call;
  local_7f8 = 100;
  local_a20 = local_a28;
  local_888 = param_1;
  local_850 = this;
  local_820 = (ForElementType<FSetElementId>)param_4;
  local_810 = param_1;
  ParallelFor(uVar31,(TFunctionRef<void___cdecl(int)> *)&local_878,None);
  `FAssetRegistryState::InitializeFromExisting'::__l2::<lambda_1>::operator()(&local_858);
  FixedTagPrivate::InitializeFromBuilder((FStoreBuilder *)&local_9f8);
  iVar28 = (int)local_a00;
  uVar18 = (ulonglong)(int)local_a00;
  plVar34 = local_a08 + uVar18 * 2;
  plVar26 = local_a08;
  while( true ) {
    if ((int)uVar18 != iVar28) {
      local_aa7 = 0;
      `TCheckedPointerIterator<TTuple<FAssetData_*,FixedTagPrivate::FPartialMapHandle>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_aa7);
    }
    if (plVar26 == plVar34) break;
    FixedTagPrivate::FPartialMapHandle::MakeFullHandle
              ((FPartialMapHandle *)(plVar26 + 1),(uint)&local_990);
    pFVar19 = FAssetDataTagMapSharedView::FAssetDataTagMapSharedView(&local_988,local_990);
    FAssetDataTagMapSharedView::operator=((FAssetDataTagMapSharedView *)(*plVar26 + 0x38),pFVar19);
    FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_988);
    uVar18 = local_a00 & 0xffffffff;
    plVar26 = plVar26 + 2;
  }
  local_6b8.Elements._0_8_ = 0;
  local_6b8.Elements._8_8_ = 0;
  local_6b8.Elements._32_8_ = 0;
  local_6b8.Elements._40_4_ = 0;
  local_6b8.Elements._44_4_ = 0x80;
  local_6b8.Elements._48_4_ = 0xffffffff;
  local_6b8.Elements._52_4_ = 0;
  local_6b8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_6b8.HashSize = 0;
  if (param_5 != OnlyUpdateExisting) {
    puVar25 = &param_3->field_0x10;
    local_9e0._padding_._0_4_ = 0;
    local_9e0._padding_._4_4_ = 1;
    local_9e0.UnvisitedBitMask = 0xffffffff;
    local_9e0.CurrentBitIndex = 0;
    local_9e0.BaseBitIndex = 0;
    local_9e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar25;
    if (*(int *)&param_3->field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_9e0);
    }
    uStack_a90 = CONCAT44(local_9e0._padding_._4_4_,(undefined4)local_9e0._padding_);
    uStack_a80._4_4_ = local_9e0.CurrentBitIndex;
    uStack_a80._0_4_ = local_9e0.UnvisitedBitMask;
    pFStack_a78._4_4_ = local_9e0._28_4_;
    pFStack_a78._0_4_ = local_9e0.BaseBitIndex;
    local_a70 = *(int *)&param_3->field_0x8 - *(int *)&param_3->field_0x34;
    FStack_a88 = (ForElementType<FSetElementId>)local_9e0.Array;
    unique0x10001053 = iStack_a6c;
    iStack_920 = local_a70;
    TStack_940.Array = local_9e0.Array;
    local_a98 = (TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
                 *)param_3;
    local_948 = param_3;
    TStack_940._padding_ = uStack_a90;
    TStack_940._16_8_ = uStack_a80;
    TStack_940._24_8_ = pFStack_a78;
    pTVar20 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (local_7b8,(TBitArray<FDefaultBitArrayAllocator> *)puVar25,
                         *(int *)&param_3->field_0x28);
    uStack_a90 = pTVar20->_padding_;
    pTVar5 = pTVar20->Array;
    uVar6._0_4_ = pTVar20->UnvisitedBitMask;
    uVar6._4_4_ = pTVar20->CurrentBitIndex;
    pFStack_a78 = *(FScriptContainerElement **)&pTVar20->BaseBitIndex;
    FStack_a88 = (ForElementType<FSetElementId>)pTVar5;
    uStack_a80 = (FScriptContainerElement *)uVar6;
    while( true ) {
      pTVar12 = local_948;
      if (*(int *)&local_948->field_0x8 - *(int *)&local_948->field_0x34 != iStack_920) {
        local_aa6 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,FAssetPackageData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_aa6);
      }
      pTVar27 = local_a50;
      if (((TStack_940.CurrentBitIndex == uVar6._4_4_) && (TStack_940.Array == pTVar5)) &&
         (pTVar12 == param_3)) break;
      local_638.bIsDynamic = false;
      local_638.bIsExternal = false;
      pFVar1 = (FName *)(*(longlong *)pTVar12 + (longlong)TStack_940.CurrentBitIndex * 0x18);
      local_638.Base = local_618;
      local_638.CurPos = local_618;
      local_638.End = (wchar_t *)&local_418;
      ::FName::AppendString(pFVar1,&local_638);
      local_868 = local_638.Base;
      iStack_860 = (int)((longlong)local_638.CurPos - (longlong)local_638.Base >> 1);
      local_7d8._12_4_ = uStack_85c;
      local_7d8.Size = iStack_860;
      local_7d8.DataPtr = local_638.Base;
      bVar14 = FPackageName::IsScriptPackage(&local_7d8);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_638);
      if (param_5 == OnlyUpdateNew) {
        pTVar21 = TSet<TTuple<FName,FAssetPackageData_*>,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FName,FAssetPackageData_*>,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>,FDefaultSetAllocator>
                          *)&this->CachedPackageData,*pFVar1);
        puVar25 = &pTVar21->field_0x8;
        if (pTVar21 == (TTuple<FName,FAssetPackageData_*> *)0x0) {
          puVar25 = (undefined1 *)0x0;
        }
        if (puVar25 == (undefined1 *)0x0) goto LAB_142b01be8;
      }
      else {
LAB_142b01be8:
        if (pFVar1[1] != (FName)0x0) {
          if (bVar14) {
            local_964._0_4_ = 0;
            local_964._4_4_ = 0;
            local_9f0 = 0;
            local_95c._0_4_ = 0;
            local_95c._4_4_ = 0;
            local_954._0_4_ = 0;
            local_954._4_4_ = 0;
            local_96c = *pFVar1;
            TSet<FAssetIdentifier,DefaultKeyFuncs<FAssetIdentifier,0>,FDefaultSetAllocator>::
            Emplace<FAssetIdentifier>
                      (&local_6b8,(FAssetIdentifier *)local_978,(bool *)(local_978 + 0xc));
          }
          else {
            pTVar22 = TSet<TTuple<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
                              *)&this->CachedAssetsByPackageName,*pFVar1);
            puVar25 = &pTVar22->field_0x8;
            if (pTVar22 ==
                (TTuple<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                 *)0x0) {
              puVar25 = (undefined1 *)0x0;
            }
            if (puVar25 == (undefined1 *)0x0) goto LAB_142b01d05;
          }
          pFVar23 = CreateOrGetAssetPackageData(this,*pFVar1);
          if (pFVar23 != (FAssetPackageData *)0x0) {
            FVar3 = pFVar1[1];
            uVar31 = pFVar23->Flags;
            uVar7 = *(undefined8 *)FVar3;
            uVar8 = *(undefined8 *)((longlong)FVar3 + 8);
            (pFVar23->CookedHash).bIsValid = (bool)(char)uVar7;
            (pFVar23->CookedHash).Bytes[0] = (char)((ulonglong)uVar7 >> 8);
            (pFVar23->CookedHash).Bytes[1] = (char)((ulonglong)uVar7 >> 0x10);
            (pFVar23->CookedHash).Bytes[2] = (char)((ulonglong)uVar7 >> 0x18);
            (pFVar23->CookedHash).Bytes[3] = (char)((ulonglong)uVar7 >> 0x20);
            (pFVar23->CookedHash).Bytes[4] = (char)((ulonglong)uVar7 >> 0x28);
            (pFVar23->CookedHash).Bytes[5] = (char)((ulonglong)uVar7 >> 0x30);
            (pFVar23->CookedHash).Bytes[6] = (char)((ulonglong)uVar7 >> 0x38);
            *(undefined8 *)((pFVar23->CookedHash).Bytes + 7) = uVar8;
            (pFVar23->CookedHash).Bytes[0xf] = *(uchar *)((longlong)FVar3 + 0x10);
            pFVar23->Extension = *(EPackageExtension *)((longlong)FVar3 + 0x11);
            pFVar23->Flags = *(uint *)((longlong)FVar3 + 0x14);
            TSet<TTuple<FIoChunkId,FIoHash>,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoHash,0>,FDefaultSetAllocator>
            ::operator=((TSet<TTuple<FIoChunkId,FIoHash>,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoHash,0>,FDefaultSetAllocator>
                         *)&pFVar23->ChunkHashes,
                        (TSet<TTuple<FIoChunkId,FIoHash>,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoHash,0>,FDefaultSetAllocator>
                         *)((longlong)FVar3 + 0x18));
            if (&pFVar23->ImportedClasses !=
                (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)FVar3 + 0x68)) {
              TArray<FName,TSizedDefaultAllocator<32>_>::CopyToEmpty<FName,int>
                        (&pFVar23->ImportedClasses,*(FName **)((longlong)FVar3 + 0x68),
                         *(int *)((longlong)FVar3 + 0x70),(pFVar23->ImportedClasses).ArrayMax);
            }
            uVar31 = uVar31 | pFVar23->Flags;
            pFVar23->DiskSize = *(long64 *)((longlong)FVar3 + 0x78);
            pFVar23->FileVersionUE = *(FPackageFileVersion *)((longlong)FVar3 + 0x80);
            pFVar23->FileVersionLicenseeUE = *(int *)((longlong)FVar3 + 0x88);
            pFVar9 = *(FPackageCustomVersion **)((longlong)FVar3 + 0x90);
            uVar7 = *(undefined8 *)((longlong)FVar3 + 0x98);
            pFVar23->Flags = (uVar31 ^ pFVar23->Flags) & 0x3fffffff ^ uVar31;
            (pFVar23->CustomVersions).Ptr.DataPtr = pFVar9;
            *(undefined8 *)&(pFVar23->CustomVersions).Ptr.ArrayNum = uVar7;
          }
        }
      }
LAB_142b01d05:
      TStack_940.UnvisitedBitMask = TStack_940.UnvisitedBitMask & ~TStack_940._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_940);
    }
    iVar28 = 0;
    local_738.Elements._0_8_ = 0;
    local_738.Elements._8_8_ = 0;
    local_738.Elements._32_8_ = 0;
    local_738.Elements._40_4_ = 0;
    FVar41 = (ForElementType<FSetElementId>)&(local_a50->Elements).field_0x10;
    local_738.Elements._44_4_ = 0x80;
    local_738.Elements._48_4_ = 0xffffffff;
    local_738.Elements._52_4_ = 0;
    local_738.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_738.HashSize = 0;
    local_aa0 = local_a50;
    if (param_5 == OnlyUpdateNew) {
      local_a68 = FVar41;
      TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
      ::Reserve(&local_738,
                *(int *)&(local_a50->Elements).field_0x8 - *(int *)&(local_a50->Elements).field_0x34
               );
      local_918 = local_a50;
      local_aa0 = &local_738;
      local_9c0[0] = '\0';
      local_9c0[1] = '\0';
      local_9c0[2] = '\0';
      local_9c0[3] = '\0';
      iStack_9bc = 1;
      local_9b0 = 0xffffffff;
      iStack_9ac = 0;
      iStack_9a8 = 0;
      FStack_9b8 = FVar41;
      if (*(int *)&(local_a50->Elements).field_0x28 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_9c0);
      }
      uVar31 = *(uint *)&(local_918->Elements).field_0x28;
      local_a70 = *(int *)&(local_918->Elements).field_0x8 -
                  *(int *)&(local_918->Elements).field_0x34;
      uStack_a90 = CONCAT44(iStack_9bc,local_9c0);
      local_a98 = local_918;
      uStack_a80 = (FScriptContainerElement *)CONCAT44(iStack_9ac,local_9b0);
      pFStack_a78._4_4_ = iStack_9a4;
      pFStack_a78._0_4_ = iStack_9a8;
      uVar32 = uVar31 & 0xffffffe0;
      FStack_a88 = FStack_9b8;
      iVar28 = (int)uVar31 >> 5;
      auStack_8f0._4_4_ = iStack_a6c;
      auStack_8f0._0_4_ = local_a70;
      auStack_910._8_8_ = FStack_9b8;
      auStack_910._0_8_ = uStack_a90;
      unique0x10002689 = uStack_a80;
      local_8f8 = pFStack_a78;
      if (((int)uVar31 < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar14)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar33 = *(uint *)&(pTVar27->Elements).field_0x28;
      if (uVar31 != uVar33) {
        puVar25 = *(undefined1 **)&(pTVar27->Elements).field_0x20;
        puVar30 = (undefined1 *)FVar41;
        if (puVar25 != (undefined1 *)0x0) {
          puVar30 = puVar25;
        }
        uVar31 = -1 << ((byte)uVar31 & 0x1f) & *(uint *)(puVar30 + (longlong)iVar28 * 4);
        while (uVar31 == 0) {
          lVar29 = (longlong)iVar28;
          uVar32 = uVar32 + 0x20;
          iVar28 = iVar28 + 1;
          uVar31 = uVar33;
          if ((int)((uVar33 - 1) + ((int)(uVar33 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar28)
          goto LAB_142b01ed0;
          uVar31 = *(uint *)(puVar30 + 4 + lVar29 * 4);
        }
        uVar18 = (ulonglong)(-uVar31 & uVar31) * 2 + 1;
        lVar29 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar29 == 0; lVar29 = lVar29 + -1) {
          }
        }
        local_978._4_4_ = (undefined4)lVar29;
        uVar31 = (local_978._4_4_ - 1) + uVar32;
        if ((int)uVar33 < (int)uVar31) {
          uVar31 = uVar33;
        }
      }
LAB_142b01ed0:
      while( true ) {
        pTVar27 = local_918;
        if (*(int *)&(local_918->Elements).field_0x8 - *(int *)&(local_918->Elements).field_0x34 !=
            auStack_8f0._0_4_) {
          local_aa5 = 0;
          `TSparseArray<TSparseSetElement<TTuple<FAssetIdentifier,FDependsNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_aa5);
        }
        if (((uStack_8fc == uVar31) && ((ForElementType<FSetElementId>)auStack_910._8_8_ == FVar41))
           && (pTVar27 == local_a50)) break;
        local_aa8 = false;
        pFVar35 = (FAssetIdentifier *)
                  ((longlong)(int)uStack_8fc * 0x30 + *(longlong *)&pTVar27->Elements);
        local_9e8 = pFVar35[1].PackageName;
        pFVar24 = CreateOrFindDependsNode(this,pFVar35,&local_aa8);
        if (local_aa8 == false) {
          TMapBase<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
          ::Emplace<FAssetIdentifier_const_&,FDependsNode_*_const_&>
                    ((TMapBase<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
                      *)&local_738,pFVar35,(FDependsNode **)&local_9e8);
        }
        uVar32 = *(uint *)((longlong)local_9e8 + 0x28);
        uVar33 = *(uint *)((longlong)local_9e8 + 0x58);
        uVar15 = *(uint *)((longlong)local_9e8 + 0x48);
        uVar2 = *(uint *)((longlong)local_9e8 + 0x38);
        if ((int)uVar32 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar32);
        }
        if ((pFVar24->PackageDependencies).ArrayMax < (int)uVar32) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar32,&(pFVar24->PackageDependencies).AllocatorInstance,
                     (pFVar24->PackageDependencies).ArrayNum,
                     &(pFVar24->PackageDependencies).ArrayMax);
        }
        TBitArray<FDefaultBitArrayAllocator>::Reserve(&pFVar24->PackageFlags,uVar32 * 5);
        if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
        }
        if ((pFVar24->NameDependencies).ArrayMax < (int)uVar2) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar2,&(pFVar24->NameDependencies).AllocatorInstance,
                     (pFVar24->NameDependencies).ArrayNum,&(pFVar24->NameDependencies).ArrayMax);
        }
        if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
        }
        if ((pFVar24->ManageDependencies).ArrayMax < (int)uVar15) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar15,&(pFVar24->ManageDependencies).AllocatorInstance,
                     (pFVar24->ManageDependencies).ArrayNum,&(pFVar24->ManageDependencies).ArrayMax)
          ;
        }
        TBitArray<FDefaultBitArrayAllocator>::Reserve(&pFVar24->ManageFlags,uVar15 * 3);
        if ((int)uVar33 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar33);
        }
        if ((pFVar24->Referencers).ArrayMax < (int)uVar33) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar33,&(pFVar24->Referencers).AllocatorInstance,
                     (pFVar24->Referencers).ArrayNum,&(pFVar24->Referencers).ArrayMax);
        }
        auStack_910._16_4_ = auStack_910._16_4_ & ~auStack_910._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_910);
        FVar41 = local_a68;
      }
    }
    else {
      iVar38 = *(int *)&(local_a50->Elements).field_0x28;
      iVar36 = 0;
      uVar31 = 1;
      uStack_a80._4_4_ = iVar36;
      if (iVar38 != 0) {
        puVar39 = *(uint **)&(local_a50->Elements).field_0x20;
        if (puVar39 == (uint *)0x0) {
          puVar39 = (uint *)FVar41;
        }
        uVar32 = *puVar39;
        while (uVar32 == 0) {
          lVar29 = (longlong)iVar28;
          iVar36 = iVar36 + 0x20;
          iVar28 = iVar28 + 1;
          uStack_a80._4_4_ = iVar38;
          if ((int)(iVar38 + -1 + (iVar38 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar28) goto LAB_142b020ed;
          uVar32 = puVar39[lVar29 + 1];
        }
        uVar31 = -uVar32 & uVar32;
        uVar18 = (ulonglong)uVar31 * 2 + 1;
        lVar29 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar29 == 0; lVar29 = lVar29 + -1) {
          }
        }
        local_978._8_4_ = (undefined4)lVar29;
        uStack_a80._4_4_ = local_978._8_4_ + -1 + iVar36;
        if (iVar38 < uStack_a80._4_4_) {
          uStack_a80._4_4_ = iVar38;
        }
      }
LAB_142b020ed:
      uVar32 = *(uint *)&(local_a50->Elements).field_0x28;
      uVar33 = uVar32 & 0xffffffe0;
      local_a70 = *(int *)&(local_a50->Elements).field_0x8 -
                  *(int *)&(local_a50->Elements).field_0x34;
      FVar42 = (ForElementType<FSetElementId>)&(local_a50->Elements).field_0x10;
      uStack_a80._0_4_ = 0xffffffff;
      local_a98 = local_a50;
      uStack_a90 = CONCAT44(uVar31,iVar28);
      pFStack_a78 = (FScriptContainerElement *)CONCAT44(local_7b8[1]._28_4_,iVar36);
      auStack_8f0._8_8_ = local_a50;
      TStack_8e0._padding_ = uStack_a90;
      iVar28 = (int)uVar32 >> 5;
      unique0x10001063 = iStack_a6c;
      iStack_8c0 = local_a70;
      TStack_8e0._24_8_ = pFStack_a78;
      TStack_8e0.UnvisitedBitMask = 0xffffffff;
      TStack_8e0.CurrentBitIndex = uStack_a80._4_4_;
      FStack_a88 = FVar41;
      local_a68 = FVar42;
      TStack_8e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar41;
      if ((((int)uVar32 < 0) || (iVar38 < (int)uVar32)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar14)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar31 = *(uint *)&(pTVar27->Elements).field_0x28;
      if (uVar32 != uVar31) {
        puVar25 = *(undefined1 **)&(pTVar27->Elements).field_0x20;
        puVar30 = (undefined1 *)FVar42;
        if (puVar25 != (undefined1 *)0x0) {
          puVar30 = puVar25;
        }
        uVar32 = -1 << ((byte)uVar32 & 0x1f) & *(uint *)(puVar30 + (longlong)iVar28 * 4);
        while (uVar32 == 0) {
          lVar29 = (longlong)iVar28;
          uVar33 = uVar33 + 0x20;
          iVar28 = iVar28 + 1;
          uVar32 = uVar31;
          if ((int)((uVar31 - 1) + ((int)(uVar31 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar28)
          goto LAB_142b02210;
          uVar32 = *(uint *)(puVar30 + 4 + lVar29 * 4);
        }
        uVar18 = (ulonglong)(-uVar32 & uVar32) * 2 + 1;
        lVar29 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar29 == 0; lVar29 = lVar29 + -1) {
          }
        }
        local_94c = (int)lVar29;
        uVar32 = local_94c + -1 + uVar33;
        if ((int)uVar31 < (int)uVar32) {
          uVar32 = uVar31;
        }
      }
LAB_142b02210:
      while( true ) {
        uVar6 = auStack_8f0._8_8_;
        if (*(int *)&((TSparseArray<TSparseSetElement<TTuple<FAssetIdentifier,FDependsNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)auStack_8f0._8_8_)->field_0x8 -
            *(int *)&((TSparseArray<TSparseSetElement<TTuple<FAssetIdentifier,FDependsNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)auStack_8f0._8_8_)->field_0x34 != iStack_8c0) {
          local_aa4 = 0;
          `TSparseArray<TSparseSetElement<TTuple<FAssetIdentifier,FDependsNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_aa4);
        }
        if (((TStack_8e0.CurrentBitIndex == uVar32) &&
            ((ForElementType<FSetElementId>)TStack_8e0.Array == FVar42)) &&
           ((TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
             *)uVar6 == pTVar27)) break;
        pFVar35 = (FAssetIdentifier *)
                  ((longlong)TStack_8e0.CurrentBitIndex * 0x30 +
                  *(longlong *)
                   (TSparseArray<TSparseSetElement<TTuple<FAssetIdentifier,FDependsNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)uVar6);
        FVar3 = pFVar35[1].PackageName;
        pFVar24 = CreateOrFindDependsNode(this,pFVar35,(bool *)0x0);
        uVar31 = *(uint *)((longlong)FVar3 + 0x58);
        uVar33 = *(uint *)((longlong)FVar3 + 0x48);
        uVar15 = *(uint *)((longlong)FVar3 + 0x38);
        uVar2 = *(uint *)((longlong)FVar3 + 0x28);
        if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
        }
        if ((pFVar24->PackageDependencies).ArrayMax < (int)uVar2) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar2,&(pFVar24->PackageDependencies).AllocatorInstance,
                     (pFVar24->PackageDependencies).ArrayNum,
                     &(pFVar24->PackageDependencies).ArrayMax);
        }
        TBitArray<FDefaultBitArrayAllocator>::Reserve(&pFVar24->PackageFlags,uVar2 * 5);
        if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
        }
        if ((pFVar24->NameDependencies).ArrayMax < (int)uVar15) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar15,&(pFVar24->NameDependencies).AllocatorInstance,
                     (pFVar24->NameDependencies).ArrayNum,&(pFVar24->NameDependencies).ArrayMax);
        }
        if ((int)uVar33 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar33);
        }
        if ((pFVar24->ManageDependencies).ArrayMax < (int)uVar33) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar33,&(pFVar24->ManageDependencies).AllocatorInstance,
                     (pFVar24->ManageDependencies).ArrayNum,&(pFVar24->ManageDependencies).ArrayMax)
          ;
        }
        TBitArray<FDefaultBitArrayAllocator>::Reserve(&pFVar24->ManageFlags,uVar33 * 3);
        if ((int)uVar31 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar31);
        }
        if ((pFVar24->Referencers).ArrayMax < (int)uVar31) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar31,&(pFVar24->Referencers).AllocatorInstance,
                     (pFVar24->Referencers).ArrayNum,&(pFVar24->Referencers).ArrayMax);
        }
        TStack_8e0.UnvisitedBitMask = TStack_8e0.UnvisitedBitMask & ~TStack_8e0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_8e0);
        FVar42 = local_a68;
        pTVar27 = local_a50;
      }
    }
    pTVar27 = local_aa0;
    iVar28 = *(int *)&(local_aa0->Elements).field_0x28;
    FStack_a88 = (ForElementType<FSetElementId>)&(local_aa0->Elements).field_0x10;
    iVar36 = 0;
    uVar31 = 1;
    iVar38 = 0;
    uStack_a80._4_4_ = 0;
    if (iVar28 != 0) {
      puVar39 = *(uint **)&(local_aa0->Elements).field_0x20;
      if (puVar39 == (uint *)0x0) {
        puVar39 = (uint *)FStack_a88;
      }
      uVar32 = *puVar39;
      iVar38 = 0;
      while (uVar32 == 0) {
        lVar29 = (longlong)iVar36;
        iVar38 = iVar38 + 0x20;
        iVar36 = iVar36 + 1;
        uStack_a80._4_4_ = iVar28;
        if ((int)(iVar28 + -1 + (iVar28 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar36) goto LAB_142b0240e;
        uVar32 = puVar39[lVar29 + 1];
      }
      uVar31 = -uVar32 & uVar32;
      uVar18 = (ulonglong)uVar31 * 2 + 1;
      lVar29 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar29 == 0; lVar29 = lVar29 + -1) {
        }
      }
      local_9a0 = (int)lVar29;
      uStack_a80._4_4_ = iVar38 + -1 + local_9a0;
      if (iVar28 < uStack_a80._4_4_) {
        uStack_a80._4_4_ = iVar28;
      }
    }
LAB_142b0240e:
    puVar25 = &(local_aa0->Elements).field_0x10;
    local_a70 = *(int *)&(local_aa0->Elements).field_0x8 - *(int *)&(local_aa0->Elements).field_0x34
    ;
    uVar32 = *(uint *)&(local_aa0->Elements).field_0x28;
    uStack_a80._0_4_ = 0xffffffff;
    local_a98 = local_aa0;
    uStack_a90 = CONCAT44(uVar31,iVar36);
    uVar31 = uVar32 & 0xffffffe0;
    pFStack_a78 = (FScriptContainerElement *)CONCAT44(local_7b8[2]._28_4_,iVar38);
    local_8b8 = local_aa0;
    auStack_8b0._0_8_ = uStack_a90;
    iVar38 = (int)uVar32 >> 5;
    unique0x1000106b = iStack_a6c;
    iStack_890 = local_a70;
    auStack_8b0._16_4_ = 0xffffffff;
    auStack_8b0._20_4_ = uStack_a80._4_4_;
    auStack_8b0._24_8_ = pFStack_a78;
    auStack_8b0._8_8_ = FStack_a88;
    if ((((int)uVar32 < 0) || (iVar28 < (int)uVar32)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar14)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar33 = *(uint *)&(pTVar27->Elements).field_0x28;
    if (uVar32 != uVar33) {
      puVar30 = *(undefined1 **)&(pTVar27->Elements).field_0x20;
      puVar37 = puVar25;
      if (puVar30 != (undefined1 *)0x0) {
        puVar37 = puVar30;
      }
      uVar32 = -1 << ((byte)uVar32 & 0x1f) & *(uint *)(puVar37 + (longlong)iVar38 * 4);
      while (uVar32 == 0) {
        lVar29 = (longlong)iVar38;
        uVar31 = uVar31 + 0x20;
        iVar38 = iVar38 + 1;
        uVar32 = uVar33;
        if ((int)((uVar33 - 1) + ((int)(uVar33 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar38)
        goto LAB_142b02532;
        uVar32 = *(uint *)(puVar37 + lVar29 * 4 + 4);
      }
      uVar18 = (ulonglong)(-uVar32 & uVar32) * 2 + 1;
      lVar29 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar29 == 0; lVar29 = lVar29 + -1) {
        }
      }
      uVar32 = (int)lVar29 + -1 + uVar31;
      if ((int)uVar33 < (int)uVar32) {
        uVar32 = uVar33;
      }
    }
LAB_142b02532:
    while( true ) {
      pTVar13 = local_8b8;
      if (*(int *)&(local_8b8->Elements).field_0x8 - *(int *)&(local_8b8->Elements).field_0x34 !=
          iStack_890) {
        `TSparseArray<TSparseSetElement<TTuple<FAssetIdentifier,FDependsNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_aa3);
      }
      if (((auStack_8b0._20_4_ == uVar32) && ((undefined1 *)auStack_8b0._8_8_ == puVar25)) &&
         (pTVar13 == pTVar27)) break;
      pFVar35 = (FAssetIdentifier *)
                ((longlong)(int)auStack_8b0._20_4_ * 0x30 + *(longlong *)&pTVar13->Elements);
      FVar3 = pFVar35[1].PackageName;
      pFVar24 = CreateOrFindDependsNode(this,pFVar35,(bool *)0x0);
      local_758.RequiredUnions.ArrayMax = 1;
      local_758.RequiredUnions.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0;
      local_758.RequiredUnions.ArrayNum = 0;
      local_758.Required = None;
      local_758.Excluded = None;
      local_6e8.Data = (FScriptContainerElement *)0x0;
      local_6c0 = (longlong *)0x0;
      local_6c0 = FMemory::Malloc(0x28,8);
      *local_6c0 = (longlong)
                   &UE::Core::Private::Function::
                    TFunction_OwnedObject<`FAssetRegistryState::InitializeFromExisting'::`62'::<lambda_4>,1,1>
                    ::_vftable_;
      local_6c0[1] = (longlong)this;
      local_6c0[2] = (longlong)local_a50;
      local_6c0[3] = (longlong)&local_6b8;
      local_6c0[4] = (longlong)pFVar24;
      if (local_6c0 + 1 != (longlong *)0x0) {
        local_6e8.Data =
             (FScriptContainerElement *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`FAssetRegistryState::InitializeFromExisting'::__l62::<lambda_4>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
             ::Call;
      }
      FDependsNode::IterateOverDependencies
                ((FDependsNode *)FVar3,
                 (TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
                  *)&local_6e8,All,&local_758);
      if (local_6e8.Data != (FScriptContainerElement *)0x0) {
        plVar26 = local_6d8;
        if (local_6c0 != (longlong *)0x0) {
          plVar26 = local_6c0;
        }
        (**(code **)(*plVar26 + 0x10))();
      }
      if (local_758.RequiredUnions.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
        FMemory::Free((void *)local_758.RequiredUnions.AllocatorInstance.SecondaryData);
      }
      bVar14 = FDependsNode::IsScriptDependenciesInitialized((FDependsNode *)FVar3);
      FDependsNode::SetIsScriptDependenciesInitialized(pFVar24,bVar14);
      auStack_8b0._16_4_ = auStack_8b0._16_4_ & ~auStack_8b0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_8b0);
    }
    SetDependencyNodeSorting(this,true,true);
    local_738.HashSize = 0;
    if (local_738.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_738.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FAssetIdentifier,FDependsNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FAssetIdentifier,FDependsNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_738.Elements);
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Shrink((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *)this);
  uVar31 = *(int *)&(this->CachedAssets).Elements.field_0x8 -
           *(int *)&(this->CachedAssets).Elements.field_0x34;
  if (uVar31 < 4) {
    iVar28 = 1;
  }
  else {
    uVar18 = (ulonglong)((uVar31 >> 1) + 7) * 2 + 1;
    lVar29 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar29 == 0; lVar29 = lVar29 + -1) {
      }
    }
    iVar28 = 1 << ((byte)lVar29 & 0x1f);
  }
  if (((0 < (int)uVar31) && ((this->CachedAssets).HashSize < iVar28)) ||
     (iVar28 < (this->CachedAssets).HashSize)) {
    (this->CachedAssets).HashSize = iVar28;
    TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>::Rehash
              (&this->CachedAssets);
  }
  TSet<TTuple<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
  ::Shrink((TSet<TTuple<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
            *)&this->CachedAssetsByPackageName);
  ShrinkMultimap<FName,FAssetData_*>(&this->CachedAssetsByPath);
  ShrinkMultimap<FTopLevelAssetPath,FAssetData_*>(&this->CachedAssetsByClass);
  TSet<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::Shrink((TSet<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
            *)&this->CachedClassesByTag);
  TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
  ::Shrink((TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
            *)&this->CachedDependsNodes);
  TSet<TTuple<FName,FAssetPackageData_*>,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>,FDefaultSetAllocator>
  ::Shrink((TSet<TTuple<FName,FAssetPackageData_*>,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>,FDefaultSetAllocator>
            *)&this->CachedPackageData);
  local_6b8.HashSize = 0;
  if (local_6b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_6b8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FAssetIdentifier>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FAssetIdentifier>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_6b8.Elements);
  if (local_9f8 != (FStore *)0x0) {
    FixedTagPrivate::FStore::Release(local_9f8);
  }
  puVar16 = (undefined8 *)*local_a20;
  FMemory::Free(local_a20);
  puVar10 = local_a20;
  while (local_a20 = puVar16, local_a20 != (undefined8 *)0x0) {
    puVar16 = (undefined8 *)*local_a20;
    FMemory::Free(local_a20);
    puVar10 = local_a20;
  }
  local_a20 = puVar10;
  DeleteCriticalSection(&local_668);
  FixedTagPrivate::FStoreBuilder::~FStoreBuilder(&local_378);
  if (local_a08 != (longlong *)0x0) {
    FMemory::Free(local_a08);
  }
  if (local_a60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a60.Data);
  }
  return;
}

// InitializeFromExistingAndPrune @ 142b02870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAssetRegistryState::InitializeFromExistingAndPrune
          (FAssetRegistryState *this,FAssetRegistryState *param_1,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_2,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_3,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_4,
          FAssetRegistrySerializationOptions *param_5)

{
  undefined1 *puVar1;
  TMap<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
  *pTVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  FAssetData *pFVar9;
  longlong lVar10;
  undefined1 *puVar11;
  FAssetIdentifier *pFVar12;
  FName FVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  TMap<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
  *pTVar17;
  bool bVar18;
  int iVar19;
  FAssetPackageData *pFVar20;
  FDependsNode *pFVar21;
  ulonglong uVar22;
  undefined1 *puVar23;
  ForElementType<FSetElementId> FVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint *puVar28;
  longlong lVar29;
  uint uVar30;
  ulonglong uVar31;
  undefined1 auStackY_378 [32];
  <lambda_1> local_338 [8];
  undefined8 *local_330;
  undefined8 *local_328;
  undefined8 *local_320;
  undefined8 *local_318;
  undefined8 *local_310;
  undefined8 *local_308;
  FAssetIdentifier *local_300;
  ForAnyElementType local_2f8;
  undefined8 local_2f0;
  int local_2e8 [2];
  int local_2e0;
  uint uStack_2dc;
  undefined1 *puStack_2d8;
  undefined4 local_2d0;
  int iStack_2cc;
  int iStack_2c8;
  undefined4 uStack_2c4;
  FAssetRegistryState *local_2c0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_2b8;
  FDependsNode *local_2b0;
  FDependsNode *pFStack_2a8;
  longlong *local_298;
  undefined1 auStack_290 [16];
  uint uStack_280;
  uint uStack_27c;
  longlong local_278;
  TSet<TTuple<FDependsNode_*,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FDependsNode_*,FDependsNode_*,0>,FDefaultSetAllocator>
  *pTStack_270;
  TSet<TTuple<FDependsNode_*,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FDependsNode_*,FDependsNode_*,0>,FDefaultSetAllocator>
  *local_268;
  char local_260;
  char cStack_25f;
  FName local_258;
  undefined8 local_250 [2];
  FAssetIdentifier **local_240;
  TSet<TTuple<FDependsNode_*,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FDependsNode_*,FDependsNode_*,0>,FDefaultSetAllocator>
  *local_238;
  TMap<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
  *local_230;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_228;
  undefined8 uStack_208;
  code *local_200;
  ForAnyElementType *local_1f8;
  code *local_1f0;
  FAssetRegistryState **local_1e8;
  undefined1 local_1e0 [24];
  FNameEntryId local_1c8;
  TArrayView<std::nullptr_t,int> local_1c0;
  ForAnyElementType local_1b0;
  TSet<TTuple<FDependsNode_*,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FDependsNode_*,FDependsNode_*,0>,FDefaultSetAllocator>
  **local_1a8;
  ForAnyElementType local_1a0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_198;
  ForAnyElementType local_190;
  FAssetRegistrySerializationOptions *local_188;
  uchar local_180;
  uchar local_17f;
  uchar local_17e;
  undefined8 **local_178;
  ForElementType<unsigned_int> local_170;
  FAssetRegistryState *local_168;
  FAssetRegistryState *local_160;
  ForAnyElementType *local_158;
  ForElementType<unsigned_int> local_150;
  TMap<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
  *local_148;
  longlong lStack_140;
  undefined1 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  int local_120;
  undefined4 uStack_11c;
  undefined1 local_118 [32];
  longlong local_f8;
  TSet<TTuple<FDependsNode_*,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FDependsNode_*,FDependsNode_*,0>,FDefaultSetAllocator>
  *pTStack_f0;
  TSet<TTuple<FDependsNode_*,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FDependsNode_*,FDependsNode_*,0>,FDefaultSetAllocator>
  local_e8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_378;
  local_2b8 = param_4;
  iVar19 = *(int *)&(param_4->Elements).field_0x34;
  iVar25 = *(int *)&(param_4->Elements).field_0x8;
  iVar3 = *(int *)&(param_2->Elements).field_0x34;
  iVar4 = *(int *)&(param_2->Elements).field_0x8;
  iVar5 = *(int *)&(param_3->Elements).field_0x34;
  iVar6 = *(int *)&(param_3->Elements).field_0x8;
  local_330 = (undefined8 *)0x0;
  local_2c0 = param_1;
  local_330 = FMemory::Malloc(0x10,8);
  *local_330 = 0;
  local_310 = (undefined8 *)0x0;
  local_328 = local_330;
  local_310 = FMemory::Malloc(0x10,8);
  *local_310 = 0;
  local_190.Data = (FScriptContainerElement *)local_2b8;
  local_188 = param_5;
  local_178 = &local_330;
  local_170 = (ForElementType<unsigned_int>)&local_310;
  local_1f8 = &local_1a0;
  local_200 = UE::Core::Private::Function::
              TFunctionRefCaller<`FAssetRegistryState::InitializeFromExistingAndPrune'::__l2::<lambda_1>,void,FAssetData_&>
              ::Call;
  local_308 = local_310;
  local_1a0.Data = (FScriptContainerElement *)param_2;
  local_198 = param_3;
  local_180 = iVar25 != iVar19;
  local_17f = iVar4 != iVar3;
  local_17e = iVar6 != iVar5;
  local_168 = this;
  EnumerateAllMutableAssets
            (param_1,(TFunctionRef<void___cdecl(FAssetData_&)> *)&local_200,Parallel|AllowAll);
  uVar22 = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_98.Elements._48_4_ = 0xffffffff;
  while (puVar7 = (undefined8 *)*local_328, puVar7 != (undefined8 *)0x0) {
    uVar8 = puVar7[1];
    iVar19 = (int)uVar8;
    if ((iVar19 == -1) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0xbd,
                            L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                           ), bVar18)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    FMemory::Free(local_328);
    local_328 = puVar7;
    if (iVar19 == -1) break;
    local_250[0] = uVar8;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (&local_98,&local_258,(bool *)local_250);
  }
  while (puVar7 = (undefined8 *)*local_308, puVar7 != (undefined8 *)0x0) {
    pFVar9 = (FAssetData *)puVar7[1];
    FMemory::Free(local_308);
    local_308 = puVar7;
    AddAssetData(this,pFVar9);
  }
  uVar30 = *(uint *)&(param_1->CachedPackageData).field_0x8;
  local_2f8.Data = (FScriptContainerElement *)0x0;
  local_2f0 = 0;
  if ((int)uVar30 < 1) {
    if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar30);
    }
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar30,&local_2f8,(int *)&local_2f0,(int *)((longlong)&local_2f0 + 4));
  }
  local_158 = &local_2f8;
  local_1e8 = &local_160;
  local_1f0 = UE::Core::Private::Function::
              TFunctionRefCaller<`FAssetRegistryState::InitializeFromExistingAndPrune'::__l2::<lambda_2>,void,int>
              ::Call;
  local_160 = param_1;
  local_150 = (ForElementType<unsigned_int>)this;
  ParallelFor(uVar30,(TFunctionRef<void___cdecl(int)> *)&local_1f0,None);
  if (0 < (int)uVar30) {
    lVar29 = 0;
    uVar31 = uVar22;
    do {
      uVar26 = (uint)uVar22;
      uVar27 = 0;
      if ((int)uVar26 < (int)local_2f0) {
        uVar27 = ~uVar26 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      if (local_2f8.Data[uVar31] != (FScriptContainerElement)0x0) {
        if (((((int)uVar26 < 0) || (*(int *)&(param_1->CachedPackageData).field_0x8 <= (int)uVar26))
            || (bVar18 = TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         ::IsAllocated((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                        *)&param_1->CachedPackageData,uVar26), !bVar18)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("ExistingState.CachedPackageData.IsValidId(Id)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistryState.cpp"
                                ,0x17a,L""), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        lVar10 = *(longlong *)&param_1->CachedPackageData;
        pFVar20 = CreateOrGetAssetPackageData(this,*(FName *)(lVar10 + lVar29));
        puVar7 = *(undefined8 **)(lVar10 + 8 + lVar29);
        uVar8 = *puVar7;
        uVar15 = puVar7[1];
        (pFVar20->CookedHash).bIsValid = (bool)(char)uVar8;
        (pFVar20->CookedHash).Bytes[0] = (char)((ulonglong)uVar8 >> 8);
        (pFVar20->CookedHash).Bytes[1] = (char)((ulonglong)uVar8 >> 0x10);
        (pFVar20->CookedHash).Bytes[2] = (char)((ulonglong)uVar8 >> 0x18);
        (pFVar20->CookedHash).Bytes[3] = (char)((ulonglong)uVar8 >> 0x20);
        (pFVar20->CookedHash).Bytes[4] = (char)((ulonglong)uVar8 >> 0x28);
        (pFVar20->CookedHash).Bytes[5] = (char)((ulonglong)uVar8 >> 0x30);
        (pFVar20->CookedHash).Bytes[6] = (char)((ulonglong)uVar8 >> 0x38);
        *(undefined8 *)((pFVar20->CookedHash).Bytes + 7) = uVar15;
        (pFVar20->CookedHash).Bytes[0xf] = *(uchar *)(puVar7 + 2);
        pFVar20->Extension = *(EPackageExtension *)((longlong)puVar7 + 0x11);
        pFVar20->Flags = *(uint *)((longlong)puVar7 + 0x14);
        TSet<TTuple<FIoChunkId,FIoHash>,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoHash,0>,FDefaultSetAllocator>
        ::operator=((TSet<TTuple<FIoChunkId,FIoHash>,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoHash,0>,FDefaultSetAllocator>
                     *)&pFVar20->ChunkHashes,
                    (TSet<TTuple<FIoChunkId,FIoHash>,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoHash,0>,FDefaultSetAllocator>
                     *)(puVar7 + 3));
        if (&pFVar20->ImportedClasses != (TArray<FName,TSizedDefaultAllocator<32>_> *)(puVar7 + 0xd)
           ) {
          TArray<FName,TSizedDefaultAllocator<32>_>::CopyToEmpty<FName,int>
                    (&pFVar20->ImportedClasses,(FName *)puVar7[0xd],*(int *)(puVar7 + 0xe),
                     (pFVar20->ImportedClasses).ArrayMax);
        }
        pFVar20->DiskSize = puVar7[0xf];
        pFVar20->FileVersionUE = *(FPackageFileVersion *)(puVar7 + 0x10);
        pFVar20->FileVersionLicenseeUE = *(int *)(puVar7 + 0x11);
        uVar8 = puVar7[0x13];
        (pFVar20->CustomVersions).Ptr.DataPtr = (FPackageCustomVersion *)puVar7[0x12];
        *(undefined8 *)&(pFVar20->CustomVersions).Ptr.ArrayNum = uVar8;
        param_1 = local_2c0;
      }
      uVar22 = (ulonglong)(uVar26 + 1);
      uVar31 = uVar31 + 1;
      lVar29 = lVar29 + 0x18;
    } while ((longlong)uVar31 < (longlong)(int)uVar30);
  }
  local_e8.Elements._0_8_ = 0;
  local_e8.Elements._8_8_ = 0;
  local_e8.Elements._32_8_ = 0;
  local_e8.Elements._40_4_ = 0;
  local_e8.Elements._44_4_ = 0x80;
  local_e8.Elements._48_4_ = 0xffffffff;
  local_e8.Elements._52_4_ = 0;
  local_e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_e8.HashSize = 0;
  TSet<TTuple<FDependsNode_*,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FDependsNode_*,FDependsNode_*,0>,FDefaultSetAllocator>
  ::Reserve(&local_e8,
            *(int *)&(param_1->CachedDependsNodes).field_0x8 -
            *(int *)&(param_1->CachedDependsNodes).field_0x34);
  uStack_2dc = 1;
  puVar1 = &(param_1->CachedDependsNodes).field_0x10;
  local_2e0 = 0;
  iVar19 = *(int *)&(param_1->CachedDependsNodes).field_0x28;
  pTVar2 = &param_1->CachedDependsNodes;
  iStack_2cc = 0;
  iStack_2c8 = 0;
  if (iVar19 != 0) {
    puVar28 = *(uint **)&(param_1->CachedDependsNodes).field_0x20;
    if (puVar28 == (uint *)0x0) {
      puVar28 = (uint *)puVar1;
    }
    uVar30 = *puVar28;
    iStack_2c8 = 0;
    while (uVar30 == 0) {
      iStack_2c8 = iStack_2c8 + 0x20;
      lVar29 = (longlong)local_2e0;
      local_2e0 = local_2e0 + 1;
      if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 < local_2e0) goto LAB_142b02d99;
      uVar30 = puVar28[lVar29 + 1];
    }
    uStack_2dc = -uVar30 & uVar30;
    uVar22 = (ulonglong)uStack_2dc * 2 + 1;
    lVar29 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar29 == 0; lVar29 = lVar29 + -1) {
      }
    }
    local_258.Number = (uint)lVar29;
    iStack_2cc = (local_258.Number - 1) + iStack_2c8;
    if (iVar19 < iStack_2cc) {
LAB_142b02d99:
      iStack_2cc = iVar19;
    }
  }
  local_2d0 = 0xffffffff;
  TStack_228._padding_ = CONCAT44(uStack_2dc,local_2e0);
  local_120 = *(int *)&(param_1->CachedDependsNodes).field_0x8 -
              *(int *)&(param_1->CachedDependsNodes).field_0x34;
  uVar30 = *(uint *)&(param_1->CachedDependsNodes).field_0x28;
  TStack_228.CurrentBitIndex = iStack_2cc;
  TStack_228.UnvisitedBitMask = 0xffffffff;
  TStack_228._28_4_ = uStack_2c4;
  TStack_228.BaseBitIndex = iStack_2c8;
  iVar25 = (int)uVar30 >> 5;
  uVar27 = uVar30 & 0xffffffe0;
  uStack_208 = CONCAT44(uStack_11c,local_120);
  puStack_2d8 = puVar1;
  local_230 = pTVar2;
  TStack_228.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_148 = pTVar2;
  lStack_140 = TStack_228._padding_;
  puStack_138 = puVar1;
  uStack_130 = TStack_228._16_8_;
  uStack_128 = TStack_228._24_8_;
  if ((((int)uVar30 < 0) || (iVar19 < (int)uVar30)) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar18)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  uVar26 = *(uint *)&(param_1->CachedDependsNodes).field_0x28;
  if (uVar30 != uVar26) {
    puVar11 = *(undefined1 **)&(param_1->CachedDependsNodes).field_0x20;
    puVar23 = puVar1;
    if (puVar11 != (undefined1 *)0x0) {
      puVar23 = puVar11;
    }
    uVar30 = -1 << ((byte)uVar30 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar25 * 4);
    while (uVar30 == 0) {
      lVar29 = (longlong)iVar25;
      uVar27 = uVar27 + 0x20;
      iVar25 = iVar25 + 1;
      uVar30 = uVar26;
      if ((int)((uVar26 - 1) + ((int)(uVar26 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25)
      goto LAB_142b02eb0;
      uVar30 = *(uint *)(puVar23 + lVar29 * 4 + 4);
    }
    uVar22 = (ulonglong)(-uVar30 & uVar30) * 2 + 1;
    lVar29 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar29 == 0; lVar29 = lVar29 + -1) {
      }
    }
    uVar30 = (int)lVar29 + -1 + uVar27;
    if ((int)uVar26 < (int)uVar30) {
      uVar30 = uVar26;
    }
  }
LAB_142b02eb0:
  do {
    pTVar17 = local_230;
    if (*(int *)&local_230->field_0x8 - *(int *)&local_230->field_0x34 != (int)uStack_208) {
      `TSparseArray<TSparseSetElement<TTuple<FAssetIdentifier,FDependsNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_338);
    }
    if (((TStack_228.CurrentBitIndex == uVar30) &&
        (TStack_228.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar17 == pTVar2)
       ) {
      local_320 = (undefined8 *)0x0;
      local_320 = FMemory::Malloc(0x18,8);
      local_1e0._16_4_ = 0;
      local_1e0._20_4_ = 0;
      local_1c8.Value = 0;
      *local_320 = 0;
      local_1e0._0_8_ = &local_e8;
      local_1e0._8_8_ = &local_320;
      local_2b0 = (FDependsNode *)
                  UE::Core::Private::Function::
                  TFunctionRefCaller<`FAssetRegistryState::InitializeFromExistingAndPrune'::__l2::<lambda_3>,void,int>
                  ::Call;
      pFStack_2a8 = (FDependsNode *)local_1e0;
      local_318 = local_320;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",local_e8.Elements._8_4_,1,
                 (TFunctionRef<void___cdecl(int)> *)&local_2b0,local_338[0],None,
                 (TArrayView<std::nullptr_t,int> *)(local_1e0 + 0x10));
      while (puVar7 = (undefined8 *)*local_318, puVar7 != (undefined8 *)0x0) {
        local_2b0 = (FDependsNode *)puVar7[1];
        pFStack_2a8 = (FDependsNode *)puVar7[2];
        FMemory::Free(local_318);
        local_318 = puVar7;
        FDependsNode::AddReferencer(pFStack_2a8,local_2b0);
      }
      TSet<TTuple<FDependsNode_*,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FDependsNode_*,FDependsNode_*,0>,FDefaultSetAllocator>
      ::TIterator::TIterator((TIterator *)local_118,&local_e8);
      local_268 = &local_e8;
      local_260 = '\0';
      cStack_25f = '\0';
      stack0xfffffffffffffd78 = local_118._16_16_;
      local_298 = (longlong *)local_118._0_8_;
      auStack_290._0_8_ = local_118._8_8_;
      local_278 = local_f8;
      pTStack_270 = pTStack_f0;
      uVar22 = local_118._24_8_ >> 0x20;
      uVar30 = local_118._28_4_;
      if ((int)uVar30 < *(int *)(local_118._16_8_ + 0x18)) {
        do {
          pFVar21 = *(FDependsNode **)(*local_298 + 8 + (longlong)(int)uVar22 * 0x18);
          iVar19 = FDependsNode::GetConnectionCount(pFVar21);
          if (iVar19 == 0) {
            RemoveDependsNode(this,&pFVar21->Identifier);
            TSet<TTuple<FDependsNode_*,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FDependsNode_*,FDependsNode_*,0>,FDefaultSetAllocator>
            ::RemoveByIndex(pTStack_270,uVar30);
            local_260 = '\x01';
          }
          uStack_280 = uStack_280 & ~auStack_290._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_290);
          uVar22 = (ulonglong)uStack_27c;
          uVar30 = uStack_27c;
        } while ((int)uStack_27c < *(int *)(auStack_290._8_8_ + 0x18));
        if ((local_260 != '\0') && (cStack_25f != '\0')) {
          uVar30 = *(int *)&(local_268->Elements).field_0x8 -
                   *(int *)&(local_268->Elements).field_0x34;
          if (uVar30 < 4) {
            iVar19 = 1;
          }
          else {
            uVar22 = (ulonglong)((uVar30 >> 1) + 7) * 2 + 1;
            lVar29 = 0x3f;
            if (uVar22 != 0) {
              for (; uVar22 >> lVar29 == 0; lVar29 = lVar29 + -1) {
              }
            }
            iVar19 = 1 << ((byte)lVar29 & 0x1f);
          }
          if (((0 < (int)uVar30) && (local_268->HashSize < iVar19)) ||
             (iVar19 < local_268->HashSize)) {
            local_268->HashSize = iVar19;
            TSet<TTuple<FDependsNode_*,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FDependsNode_*,FDependsNode_*,0>,FDefaultSetAllocator>
            ::Rehash(local_268);
          }
        }
      }
      local_238 = &local_e8;
      local_1c0.DataPtr = (void **)0x0;
      local_1b0.Data =
           (FScriptContainerElement *)
           UE::Core::Private::Function::
           TFunctionRefCaller<`FAssetRegistryState::InitializeFromExistingAndPrune'::__l2::<lambda_4>,void,int>
           ::Call;
      local_1a8 = &local_238;
      local_1c0.ArrayNum = 0;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",local_e8.Elements._8_4_,1,
                 (TFunctionRef<void___cdecl(int)> *)&local_1b0,local_338[0],None,&local_1c0);
      puVar7 = (undefined8 *)*local_318;
      FMemory::Free(local_318);
      puVar16 = local_318;
      while (local_318 = puVar7, local_318 != (undefined8 *)0x0) {
        puVar7 = (undefined8 *)*local_318;
        FMemory::Free(local_318);
        puVar16 = local_318;
      }
      local_e8.HashSize = 0;
      local_318 = puVar16;
      if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_e8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FDependsNode_*,FDependsNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FDependsNode_*,FDependsNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_e8.Elements);
      if (local_2f8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2f8.Data);
      }
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
      puVar7 = (undefined8 *)*local_308;
      FMemory::Free(local_308);
      puVar16 = local_308;
      while (local_308 = puVar7, local_308 != (undefined8 *)0x0) {
        puVar7 = (undefined8 *)*local_308;
        FMemory::Free(local_308);
        puVar16 = local_308;
      }
      puVar7 = (undefined8 *)*local_328;
      local_308 = puVar16;
      FMemory::Free(local_328);
      puVar16 = local_328;
      this_00 = local_2b8;
      while (local_328 = puVar7, local_2b8 = this_00, local_328 != (undefined8 *)0x0) {
        puVar7 = (undefined8 *)*local_328;
        FMemory::Free(local_328);
        puVar16 = local_328;
        this_00 = local_2b8;
      }
      this_00->HashSize = 0;
      FVar24 = (this_00->Hash).SecondaryData;
      local_328 = puVar16;
      if (FVar24 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FVar24);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&this_00->Elements);
      return;
    }
    pFVar12 = *(FAssetIdentifier **)
               (*(longlong *)pTVar17 + 0x20 + (longlong)TStack_228.CurrentBitIndex * 0x30);
    local_300 = pFVar12;
    if ((param_5->bFilterSearchableNames == false) || (pFVar12->ValueName == (FName)0x0)) {
      FVar13 = pFVar12->PackageName;
      if ((FVar13 != (FName)0x0) &&
         ((pFVar12->ObjectName == (FName)0x0 && (pFVar12->ValueName == (FName)0x0)))) {
        uVar27 = ::GetTypeHash(FVar13.ComparisonIndex.Value);
        if (*(int *)&(this->CachedAssetsByPackageName).field_0x8 !=
            *(int *)&(this->CachedAssetsByPackageName).field_0x34) {
          puVar11 = *(undefined1 **)&(this->CachedAssetsByPackageName).field_0x40;
          puVar23 = &(this->CachedAssetsByPackageName).field_0x38;
          if (puVar11 != (undefined1 *)0x0) {
            puVar23 = puVar11;
          }
          iVar19 = *(int *)(puVar23 +
                           (ulonglong)
                           (*(int *)&(this->CachedAssetsByPackageName).field_0x48 - 1U &
                           FVar13.Number + uVar27) * 4);
          if (iVar19 != -1) {
            do {
              if (*(FName *)(*(longlong *)&this->CachedAssetsByPackageName + (longlong)iVar19 * 0x28
                            ) == FVar13) goto LAB_142b0301a;
              iVar19 = *(int *)(*(longlong *)&this->CachedAssetsByPackageName + 0x20 +
                               (longlong)iVar19 * 0x28);
            } while (iVar19 != -1);
          }
        }
        FVar13 = pFVar12->PackageName;
        uVar27 = ::GetTypeHash(FVar13.ComparisonIndex.Value);
        if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
          FVar24 = (ForElementType<FSetElementId>)&local_98.Hash;
          if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar24 = local_98.Hash.SecondaryData;
          }
          for (iVar19 = *(int *)((longlong)FVar24 +
                                (ulonglong)(local_98.HashSize - 1U & FVar13.Number + uVar27) * 4);
              iVar19 != -1; iVar19 = *(int *)(local_98.Elements._0_8_ + 8 + (longlong)iVar19 * 0x10)
              ) {
            if (*(FName *)(local_98.Elements._0_8_ + (longlong)iVar19 * 0x10) == FVar13)
            goto LAB_142b0301a;
          }
        }
        if ((local_300[5].PackageName.ComparisonIndex.Value & 0x20) == 0) goto LAB_142b0311b;
      }
LAB_142b0301a:
      uVar27 = ((uint)((ulonglong)local_300 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_300 >> 4)) *
               -0x7a143595;
      uVar27 = (uVar27 >> 0xd ^ uVar27) * -0x3d4d51cb;
      uVar27 = uVar27 >> 0x10 ^ uVar27;
      if (local_e8.Elements._8_4_ != local_e8.Elements._52_4_) {
        FVar24 = (ForElementType<FSetElementId>)&local_e8.Hash;
        if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar24 = local_e8.Hash.SecondaryData;
        }
        iVar19 = *(int *)((longlong)FVar24 + (ulonglong)(local_e8.HashSize - 1U & uVar27) * 4);
        while (iVar19 != -1) {
          lVar29 = local_e8.Elements._0_8_ + (longlong)iVar19 * 0x18;
          if (*(FAssetIdentifier **)(local_e8.Elements._0_8_ + (longlong)iVar19 * 0x18) == local_300
             ) {
            if (lVar29 != 0) goto LAB_142b03102;
            break;
          }
          iVar19 = *(int *)(lVar29 + 0x10);
        }
      }
      local_240 = &local_300;
      TSet<TTuple<FDependsNode_*,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FDependsNode_*,FDependsNode_*,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<FDependsNode_*_const_&>_>
                (&local_e8,(uint)local_2e8,
                 (TKeyInitializer<FDependsNode_*_const_&> *)(ulonglong)uVar27,(bool *)&local_240);
      lVar29 = local_e8.Elements._0_8_ + (longlong)local_2e8[0] * 0x18;
LAB_142b03102:
      if (*(longlong *)(lVar29 + 8) == 0) {
        pFVar21 = CreateOrFindDependsNode(this,local_300,(bool *)0x0);
        *(FDependsNode **)(lVar29 + 8) = pFVar21;
      }
    }
LAB_142b0311b:
    TStack_228.UnvisitedBitMask = TStack_228.UnvisitedBitMask & ~TStack_228._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_228);
  } while( true );
}

// IsFilterValid @ 142b045b0

bool __cdecl FAssetRegistryState::IsFilterValid(FARCompiledFilter *param_1)

{
  longlong lVar1;
  bool bVar2;
  FName FVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ForElementType<FSetElementId> FVar8;
  bool bVar9;
  undefined1 *puVar10;
  FSoftObjectPath FStack_38;
  
  uVar4 = ::GetTypeHash((FNameEntryId)0x0);
  if (*(int *)&(param_1->PackageNames).Elements.field_0x8 !=
      *(int *)&(param_1->PackageNames).Elements.field_0x34) {
    FVar8 = (param_1->PackageNames).Hash.SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&(param_1->PackageNames).Hash;
    }
    iVar6 = *(int *)((longlong)FVar8 +
                    (ulonglong)((param_1->PackageNames).HashSize - 1U & uVar4) * 4);
    if (iVar6 != -1) {
      lVar1 = *(longlong *)&(param_1->PackageNames).Elements;
      do {
        bVar9 = false;
        if (*(longlong *)(lVar1 + (longlong)iVar6 * 0x10) == 0) goto LAB_142b048bd;
        iVar6 = *(int *)(lVar1 + 8 + (longlong)iVar6 * 0x10);
      } while (iVar6 != -1);
    }
  }
  uVar4 = ::GetTypeHash((FNameEntryId)0x0);
  if (*(int *)&(param_1->PackagePaths).Elements.field_0x8 !=
      *(int *)&(param_1->PackagePaths).Elements.field_0x34) {
    FVar8 = (param_1->PackagePaths).Hash.SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&(param_1->PackagePaths).Hash;
    }
    iVar6 = *(int *)((longlong)FVar8 +
                    (ulonglong)((param_1->PackagePaths).HashSize - 1U & uVar4) * 4);
    if (iVar6 != -1) {
      lVar1 = *(longlong *)&(param_1->PackagePaths).Elements;
      do {
        bVar9 = false;
        if (*(longlong *)(lVar1 + (longlong)iVar6 * 0x10) == 0) goto LAB_142b048bd;
        iVar6 = *(int *)(lVar1 + 8 + (longlong)iVar6 * 0x10);
      } while (iVar6 != -1);
    }
  }
  FStack_38.AssetPath.PackageName.ComparisonIndex.Value = 0;
  FStack_38.AssetPath.PackageName.Number = 0;
  FStack_38.AssetPath.AssetName.ComparisonIndex.Value = 0;
  FStack_38.AssetPath.AssetName.Number = 0;
  FStack_38.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_38.SubPathString.Data.ArrayNum = 0;
  FStack_38.SubPathString.Data.ArrayMax = 0;
  uVar4 = ::GetTypeHash((FNameEntryId)0x0);
  FVar3 = FStack_38.AssetPath.PackageName;
  uVar5 = ::GetTypeHash(FStack_38.AssetPath.PackageName.ComparisonIndex.Value);
  uVar5 = uVar5 + FVar3.Number;
  uVar5 = uVar4 + 0x9e3779b9 + uVar5 * 0x40 + (uVar5 >> 2) ^ uVar5;
  if (1 < FStack_38.SubPathString.Data.ArrayNum) {
    iVar6 = FStack_38.SubPathString.Data.ArrayNum + -1;
    if (FStack_38.SubPathString.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    uVar4 = FCrc::Strihash_DEPRECATED<char8_t>
                      (iVar6,(uchar *)FStack_38.SubPathString.Data.AllocatorInstance.Data);
    uVar5 = uVar5 ^ uVar4 + 0x9e3779b9 + uVar5 * 0x40 + (uVar5 >> 2);
  }
  bVar9 = true;
  iVar6 = TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>::
          FindIndexByHash<FSoftObjectPath>(&param_1->SoftObjectPaths,uVar5,&FStack_38);
  if (iVar6 == -1) {
    uVar4 = ::GetTypeHash((FNameEntryId)0x0);
    uVar5 = ::GetTypeHash((FNameEntryId)0x0);
    if (*(int *)&(param_1->ClassPaths).Elements.field_0x8 !=
        *(int *)&(param_1->ClassPaths).Elements.field_0x34) {
      FVar8 = (param_1->ClassPaths).Hash.SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&(param_1->ClassPaths).Hash;
      }
      iVar6 = *(int *)((longlong)FVar8 +
                      (ulonglong)
                      ((param_1->ClassPaths).HashSize - 1U &
                      (uVar5 * 0x40 + uVar4 + 0x9e3779b9 + (uVar5 >> 2) ^ uVar5)) * 4);
      if (iVar6 != -1) {
        lVar1 = *(longlong *)&(param_1->ClassPaths).Elements;
        do {
          lVar7 = (longlong)iVar6;
          if ((*(longlong *)(lVar1 + lVar7 * 0x18) == 0) &&
             (*(longlong *)(lVar1 + 8 + lVar7 * 0x18) == 0)) {
            bVar9 = true;
            if (iVar6 != -1) goto LAB_142b048bd;
            break;
          }
          iVar6 = *(int *)(lVar1 + 0x10 + lVar7 * 0x18);
        } while (iVar6 != -1);
      }
    }
    uVar4 = ::GetTypeHash((FNameEntryId)0x0);
    if (*(int *)&(param_1->TagsAndValues).field_0x8 != *(int *)&(param_1->TagsAndValues).field_0x34)
    {
      puVar10 = *(undefined1 **)&(param_1->TagsAndValues).field_0x40;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = &(param_1->TagsAndValues).field_0x38;
      }
      iVar6 = *(int *)(puVar10 +
                      (ulonglong)(*(int *)&(param_1->TagsAndValues).field_0x48 - 1U & uVar4) * 4);
      if (iVar6 != -1) {
        do {
          if (*(longlong *)((longlong)iVar6 * 0x20 + *(longlong *)&param_1->TagsAndValues) == 0) {
            bVar9 = true;
            if (iVar6 != -1) goto LAB_142b048bd;
            goto LAB_142b048b8;
          }
          iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + *(longlong *)&param_1->TagsAndValues);
        } while (iVar6 != -1);
        bVar2 = false;
        goto LAB_142b048c5;
      }
    }
LAB_142b048b8:
    bVar2 = false;
  }
  else {
LAB_142b048bd:
    bVar2 = true;
    if (!bVar9) {
      return false;
    }
  }
LAB_142b048c5:
  if (FStack_38.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.SubPathString.Data.AllocatorInstance.Data);
  }
  return !bVar2;
}

// IsPackageUnmountedAndFiltered @ 142b05650

bool __thiscall
FAssetRegistryState::IsPackageUnmountedAndFiltered(FAssetRegistryState *this,FName param_1)

{
  return false;
}

// LegacyLoadDependencies_BeforeFlags @ 142b05fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAssetRegistryState::LegacyLoadDependencies_BeforeFlags
          (FAssetRegistryState *this,FArchive *param_1,bool param_2,Type param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined1 *puVar3;
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  FDependsNode *pFVar11;
  uint uVar12;
  bool bVar13;
  int iVar14;
  ulonglong uVar15;
  ulong64 uVar16;
  ulonglong *puVar17;
  undefined ***pppuVar18;
  int iVar19;
  ulonglong uVar20;
  undefined1 auStackY_1b8 [32];
  uint local_168 [2];
  FDependsNode *local_160;
  FDependsNode *local_158 [2];
  undefined4 local_144;
  FDependsNode local_138;
  code *local_88;
  undefined **local_78;
  FDependsNode **local_70;
  int local_68;
  undefined4 local_64;
  undefined ***local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  iVar19 = 0;
  plVar6 = *(longlong **)&param_1->field_0x8;
  local_168[0] = 0;
  if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_168,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_168);
    }
  }
  else {
    local_168[0] = *(uint *)*plVar6;
    *plVar6 = *plVar6 + 4;
  }
  local_138.bScriptPath = 0;
  local_138.DependenciesInitialized = 0;
  local_138.ReferencersIsSorted = 1;
  local_138.ManageIsSorted = 1;
  local_138.SearchableNameIsSorted = 1;
  local_138.PackageIsSorted = 1;
  local_138.Identifier.PackageName.ComparisonIndex.Value = 0;
  local_138.Identifier.PackageName.Number = 0;
  local_138.Identifier.PrimaryAssetType.Name.ComparisonIndex.Value = 0;
  local_138.Identifier.PrimaryAssetType.Name.Number = 0;
  local_138.Identifier.ObjectName.ComparisonIndex.Value = 0;
  local_138.Identifier.ObjectName.Number = 0;
  local_138.Identifier.ValueName.ComparisonIndex.Value = 0;
  local_138.Identifier.ValueName.Number = 0;
  local_138.PackageDependencies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.PackageDependencies.ArrayNum = 0;
  local_138.PackageDependencies.ArrayMax = 0;
  local_138.NameDependencies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.NameDependencies.ArrayNum = 0;
  local_138.NameDependencies.ArrayMax = 0;
  local_138.ManageDependencies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ManageDependencies.ArrayNum = 0;
  local_138.ManageDependencies.ArrayMax = 0;
  local_138.Referencers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.Referencers.ArrayNum = 0;
  local_138.Referencers.ArrayMax = 0;
  local_138.PackageFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_138.PackageFlags.NumBits = 0;
  local_138.PackageFlags.MaxBits = 0x80;
  local_138.ManageFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_138.ManageFlags.NumBits = 0;
  local_138.ManageFlags.MaxBits = 0x80;
  local_160 = (FDependsNode *)0x0;
  if (param_2) {
    uVar20 = (ulonglong)(int)local_168[0];
    if ((int)local_168[0] < 1) goto LAB_142b062ad;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar20;
    uVar15 = SUB168(ZEXT816(0xa8) * auVar10,0);
    if (SUB168(ZEXT816(0xa8) * auVar10,8) != 0) {
      uVar15 = 0xffffffffffffffff;
    }
    uVar16 = uVar15 + 8;
    if (0xfffffffffffffff7 < uVar15) {
      uVar16 = 0xffffffffffffffff;
    }
    puVar17 = operator_new__(uVar16);
    if (puVar17 == (ulonglong *)0x0) {
      local_160 = (FDependsNode *)0x0;
    }
    else {
      *puVar17 = uVar20;
      local_160 = (FDependsNode *)(puVar17 + 1);
      pFVar11 = local_160;
      for (; uVar20 != 0; uVar20 = uVar20 - 1) {
        (pFVar11->Identifier).PackageName.ComparisonIndex = 0;
        (pFVar11->Identifier).PackageName.Number = 0;
        (pFVar11->Identifier).PrimaryAssetType.Name = (FName)0x0;
        (pFVar11->Identifier).ObjectName.ComparisonIndex = 0;
        (pFVar11->Identifier).ObjectName.Number = 0;
        (pFVar11->Identifier).ValueName.ComparisonIndex = 0;
        (pFVar11->Identifier).ValueName.Number = 0;
        (pFVar11->PackageDependencies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar11->PackageDependencies).ArrayNum = 0;
        (pFVar11->PackageDependencies).ArrayMax = 0;
        (pFVar11->NameDependencies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar11->NameDependencies).ArrayNum = 0;
        (pFVar11->NameDependencies).ArrayMax = 0;
        (pFVar11->ManageDependencies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar11->ManageDependencies).ArrayNum = 0;
        (pFVar11->ManageDependencies).ArrayMax = 0;
        (pFVar11->Referencers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar11->Referencers).ArrayNum = 0;
        (pFVar11->Referencers).ArrayMax = 0;
        (pFVar11->PackageFlags).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        (pFVar11->PackageFlags).NumBits = 0;
        (pFVar11->PackageFlags).MaxBits = 0x80;
        (pFVar11->ManageFlags).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        (pFVar11->ManageFlags).NumBits = 0;
        (pFVar11->ManageFlags).MaxBits = 0x80;
        puVar1 = &pFVar11->field_0xa0;
        pFVar11->PackageIsSorted = 1;
        pFVar11->bScriptPath = 0;
        pFVar11->DependenciesInitialized = 0;
        pFVar11->ReferencersIsSorted = 1;
        pFVar11->ManageIsSorted = 1;
        pFVar11->SearchableNameIsSorted = 1;
        pFVar11 = pFVar11 + 1;
      }
    }
    pTVar4 = &this->PreallocatedDependsNodeDataBuffers;
    pFVar7 = (pTVar4->AllocatorInstance).Data;
    if (((pFVar7 <= (FScriptContainerElement *)&local_160) &&
        ((FScriptContainerElement *)&local_160 <
         pFVar7 + (longlong)(this->PreallocatedDependsNodeDataBuffers).ArrayMax * 8)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar14 = (this->PreallocatedDependsNodeDataBuffers).ArrayNum;
    piVar2 = &(this->PreallocatedDependsNodeDataBuffers).ArrayMax;
    if (iVar14 == *piVar2) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar4->AllocatorInstance,piVar2);
    }
    uVar12 = local_168[0];
    (this->PreallocatedDependsNodeDataBuffers).ArrayNum = iVar14 + 1;
    *(FDependsNode **)((pTVar4->AllocatorInstance).Data + (longlong)iVar14 * 8) = local_160;
    uVar20 = (ulonglong)(int)local_168[0];
    if (local_168[0] <=
        (uint)(*(int *)&(this->CachedDependsNodes).field_0x8 -
              *(int *)&(this->CachedDependsNodes).field_0x34)) goto LAB_142b062ad;
    if ((int)local_168[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum(uVar20);
    }
    TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)&this->CachedDependsNodes,local_168[0]);
    if (uVar12 < 4) {
      iVar14 = 1;
    }
    else {
      uVar20 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar14 = 1 << ((byte)lVar8 & 0x1f);
    }
    iVar5 = *(int *)&(this->CachedDependsNodes).field_0x48;
    if ((iVar5 == 0) || (iVar5 < iVar14)) {
      *(int *)&(this->CachedDependsNodes).field_0x48 = iVar14;
      TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
                *)&this->CachedDependsNodes);
    }
  }
  uVar20 = (ulonglong)local_168[0];
LAB_142b062ad:
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FAssetRegistryState::LegacyLoadDependencies_BeforeFlags'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_70 = &local_160;
  local_64 = local_144;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`FAssetRegistryState::LegacyLoadDependencies_BeforeFlags'::__l2::<lambda_1>,FDependsNode_*,int>
             ::Call;
  local_68 = (int)uVar20;
  if (0 < (int)uVar20) {
    do {
      if (param_2) {
        local_158[0] = local_160 + iVar19;
        FDependsNode::LegacySerializeLoad_BeforeFlags
                  (local_158[0],param_1,param_3,local_160,(int)uVar20,param_2);
        TMapBase<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
        ::Emplace<FAssetIdentifier_const_&,FDependsNode_*_const_&>
                  ((TMapBase<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
                    *)&this->CachedDependsNodes,&local_158[0]->Identifier,local_158);
      }
      else {
        local_158[0] = &local_138;
        FDependsNode::LegacySerializeLoad_BeforeFlags
                  (local_158[0],param_1,param_3,local_160,(int)uVar20,param_2);
      }
      uVar20 = (ulonglong)local_168[0];
      iVar19 = iVar19 + 1;
    } while (iVar19 < (int)local_168[0]);
  }
  if (local_88 != (code *)0x0) {
    pppuVar18 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar18 = local_60;
    }
    (*(code *)(*pppuVar18)[2])();
  }
  if (local_138.ManageFlags.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_138.ManageFlags.AllocatorInstance.SecondaryData);
  }
  if (local_138.PackageFlags.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_138.PackageFlags.AllocatorInstance.SecondaryData);
  }
  if (local_138.Referencers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Referencers.AllocatorInstance.Data);
  }
  if (local_138.ManageDependencies.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.ManageDependencies.AllocatorInstance.Data);
  }
  if (local_138.NameDependencies.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.NameDependencies.AllocatorInstance.Data);
  }
  if (local_138.PackageDependencies.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.PackageDependencies.AllocatorInstance.Data);
  }
  return;
}

// Load @ 142b06790

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FAssetRegistryState::Load
          (FAssetRegistryState *this,FArchive *param_1,FAssetRegistryLoadOptions *param_2,
          Type *param_3)

{
  FScriptContainerElement *pFVar1;
  ForAnyElementType FVar2;
  FAssetRegistryHeader FVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  uint *puVar7;
  FTlsAutoCleanup *pFVar8;
  bool bVar9;
  FSoftObjectPathSerializationScope local_res20 [8];
  FAssetRegistryHeader local_118;
  FLLMScope local_110 [2];
  undefined8 local_108;
  undefined8 local_100;
  FMemScope local_f8;
  code *local_f0;
  FSoftObjectPathSerializationScope *local_e8;
  FAssetRegistryReader local_d8;
  
  FLLMScope::FLLMScope(local_110,AssetRegistry,false,None,Default,true);
  FMemScope::FMemScope(&local_f8,AssetRegistry,true);
  local_118.Version = LatestVersion;
  local_118._4_4_ = local_118._4_4_ & 0xffffff00;
  FAssetRegistryVersion::SerializeVersion(param_1,&local_118.Version);
  if ((int)local_118.Version < 0x10) {
    uVar4 = local_118.bFilterEditorOnlyData;
    if ((param_1->field_0x28 & 1) != 0) {
      uVar4 = 0;
    }
    local_118.bFilterEditorOnlyData = (bool)uVar4;
  }
  else {
    ::operator<<(param_1,&local_118.bFilterEditorOnlyData);
  }
  if (param_3 != (Type *)0x0) {
    *param_3 = local_118.Version;
  }
  local_100 = 0;
  local_108 = 0;
  puVar7 = TThreadSingleton<FSoftObjectPathThreadContext>::GetTlsSlot();
  local_e8 = local_res20;
  local_f0 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FSoftObjectPathThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar8 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_f0,puVar7);
  iVar6 = *(int *)(pFVar8 + 3);
  if (iVar6 == *(int *)&pFVar8[3].field_0x4) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x414,(ForAnyElementType *)(pFVar8 + 2),(int *)&pFVar8[3].field_0x4);
  }
  *(int *)(pFVar8 + 3) = iVar6 + 1;
  FVar2.Data = *(FScriptContainerElement **)(pFVar8 + 2);
  *(undefined2 *)(FVar2.Data + (longlong)iVar6 * 0x14 + 0x10) = 0x200;
  pFVar1 = FVar2.Data + (longlong)iVar6 * 0x14;
  *(undefined8 *)pFVar1 = local_108;
  *(undefined8 *)(pFVar1 + 8) = local_100;
  if ((int)local_118.Version < 4) {
LAB_142b0691e:
    bVar9 = false;
  }
  else {
    if ((int)local_118.Version < 8) {
      FNameTableArchiveReader::FNameTableArchiveReader((FNameTableArchiveReader *)&local_d8,param_1)
      ;
      Load<FNameTableArchiveReader_&>(this,(FNameTableArchiveReader *)&local_d8,&local_118,param_2);
      if (local_d8.Names.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Names.AllocatorInstance.Data);
      }
      FArchive::~FArchive((FArchive *)&local_d8);
    }
    else {
      FVar3.bFilterEditorOnlyData = local_118.bFilterEditorOnlyData;
      FVar3._5_3_ = local_118._5_3_;
      FVar3.Version = local_118.Version;
      FAssetRegistryReader::FAssetRegistryReader(&local_d8,param_1,param_2->ParallelWorkers,FVar3);
      if ((local_d8._padding_._1_1_ & 2) != 0) {
        FAssetRegistryReader::~FAssetRegistryReader(&local_d8);
        goto LAB_142b0691e;
      }
      Load<FAssetRegistryReader_&>(this,&local_d8,&local_118,param_2);
      if (local_d8.Task._0_8_ != 0) {
        do {
          cVar5 = (**(code **)(**(longlong **)(local_d8.Task._0_8_ + 0x60) + 0x20))
                            (*(longlong **)(local_d8.Task._0_8_ + 0x60),0xffffffff,0);
        } while (cVar5 == '\0');
      }
      FAssetRegistryReader::~FAssetRegistryReader(&local_d8);
    }
    bVar9 = (bool)(~((byte)param_1->field_0x29 >> 1) & 1);
  }
  FSoftObjectPathSerializationScope::~FSoftObjectPathSerializationScope(local_res20);
  FMemScope::~FMemScope(&local_f8);
  FLLMScope::~FLLMScope(local_110);
  return bVar9;
}

// LoadDependencies @ 142b087d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAssetRegistryState::LoadDependencies
          (FAssetRegistryState *this,FArchive *param_1,FAssetRegistryLoadOptions *param_2,
          Type param_3)

{
  longlong *plVar1;
  longlong lVar2;
  ulong64 local_18 [2];
  
  if ((int)param_3 < 7) {
    LegacyLoadDependencies_BeforeFlags(this,param_1,param_2->bLoadDependencies,param_3);
  }
  else {
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((ulong64 *)plVar1[1] < (ulong64 *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_18,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_18);
      }
    }
    else {
      local_18[0] = *(ulong64 *)*plVar1;
      *plVar1 = *plVar1 + 8;
    }
    lVar2 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
    lVar2 = lVar2 + local_18[0];
    if (param_2->bLoadDependencies != false) {
      if (param_3 == LatestVersion) {
        LoadDependenciesImpl<1>(this,param_1,LatestVersion);
      }
      else {
        LoadDependenciesImpl<0>(this,param_1,param_3);
      }
      if ((param_2->bLoadDependencies != false) && ((param_1->field_0x29 & 2) == 0)) {
        return;
      }
    }
    (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,lVar2);
  }
  return;
}

// LoadFromDisk @ 142b08cb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FAssetRegistryState::LoadFromDisk
          (wchar_t *param_1,FAssetRegistryLoadOptions *param_2,FAssetRegistryState *param_3,
          Type *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  IFileManager *pIVar4;
  longlong *plVar5;
  ulong64 uVar6;
  size_t _Size;
  longlong lVar7;
  bool bVar8;
  ForAnyElementType local_108;
  long64 alStack_100 [3];
  FLargeMemoryReader local_e8;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2413,"FAssetRegistryState::LoadFromDisk",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistryState.cpp"
               ,0x96d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2413);
  }
  if ((param_1 == (wchar_t *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InPath",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistryState.cpp"
                         ,0x96e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pIVar4 = IFileManager::Get();
  plVar5 = (longlong *)(**(code **)((longlong)*pIVar4 + 0x18))(pIVar4,param_1,0);
  if (plVar5 == (longlong *)0x0) {
    bVar2 = false;
  }
  else {
    alStack_100[1] = 0;
    local_108.Data = (FScriptContainerElement *)0x0;
    alStack_100[0] = 0;
    uVar6 = (**(code **)(*plVar5 + 0x30))(plVar5);
    if (alStack_100[0] < (longlong)uVar6) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (1,1,uVar6 - alStack_100[0],&local_108,alStack_100,alStack_100 + 1);
    }
    else {
      if ((longlong)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar6);
      }
      if ((longlong)uVar6 < alStack_100[0]) {
        lVar7 = alStack_100[0] - uVar6;
        if (((((uint)(uVar6 >> 0x3f) ^ 1) & ((uint)((ulonglong)lVar7 >> 0x3f) ^ 1)) == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        if (lVar7 != 0) {
          _Size = (alStack_100[0] - lVar7) - uVar6;
          if (_Size != 0) {
            memmove(local_108.Data + uVar6,local_108.Data + uVar6 + lVar7,_Size);
          }
          alStack_100[0] = alStack_100[0] - lVar7;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,&local_108,alStack_100[0],alStack_100 + 1);
        }
      }
    }
    (**(code **)(*plVar5 + 0x188))(plVar5,local_108.Data,alStack_100[0]);
    if (((*(byte *)((longlong)plVar5 + 0x29) & 2) != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!FileReader->IsError()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistryState.cpp"
                           ,0x977,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    FLargeMemoryReader::FLargeMemoryReader
              (&local_e8,(uchar *)local_108.Data,alStack_100[0],None,(FName)0x0);
    bVar2 = Load(param_3,(FArchive *)&local_e8,param_2,param_4);
    FLargeMemoryReader::~FLargeMemoryReader(&local_e8);
    if (local_108.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data);
    }
    (**(code **)*plVar5)(plVar5,1);
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar2;
}

// Prune @ 142b0d2c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAssetRegistryState::Prune(FAssetRegistryState *this,FAssetRegistryPruneOptions *param_1)

{
  FScriptContainerElement *pFVar1;
  FDependsNode *this_00;
  code *pcVar2;
  longlong *plVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  byte bVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  ulong64 uVar14;
  uint uVar15;
  uint uVar16;
  ForAnyElementType FVar17;
  longlong lVar18;
  FAssetRegistryPruneOptions *pFVar19;
  ulonglong uVar20;
  ForElementType<unsigned_int> FVar21;
  ulonglong uVar22;
  <lambda_1> <Var23;
  undefined1 auStackY_378 [32];
  undefined1 local_327;
  undefined1 local_326;
  undefined1 local_325;
  undefined1 local_324;
  ForAnyElementType local_320;
  int local_318;
  int iStack_314;
  ForAnyElementType local_310;
  int local_308 [2];
  undefined1 local_300 [4];
  uint local_2fc;
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> local_2f8;
  uint local_2e8;
  TArray<FAssetData_*,TSizedDefaultAllocator<32>_> local_2e0;
  uint local_2d0;
  uint uStack_2cc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2c8;
  undefined4 local_2c0;
  uint uStack_2bc;
  uint uStack_2b8;
  undefined4 uStack_2b4;
  FAssetRegistryPruneOptions *local_2b0;
  undefined4 local_2a8;
  int local_2a4;
  TPairInitializer<FDependsNode_*_const_&,signed_char_&&> local_2a0;
  longlong *local_290;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_288;
  longlong *local_268;
  uint uStack_260;
  uint uStack_25c;
  TBitArray<FDefaultBitArrayAllocator> *local_258;
  undefined4 uStack_250;
  uint uStack_24c;
  uint local_248;
  undefined4 uStack_244;
  int iStack_240;
  undefined4 uStack_23c;
  longlong *local_238;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_230;
  undefined8 uStack_210;
  TArrayView<std::nullptr_t,int> local_208;
  code *local_1f8;
  undefined8 **local_1f0;
  TArrayView<std::nullptr_t,int> local_1e8;
  code *local_1d8;
  undefined8 **local_1d0;
  schar **local_1c8;
  undefined1 *local_1c0;
  TArrayView<std::nullptr_t,int> local_1b8;
  code *local_1a8;
  TArray<FAssetData_*,TSizedDefaultAllocator<32>_> **local_1a0;
  FScriptContainerElement *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  undefined8 *local_188;
  FAssetRegistrySerializationOptions *local_180;
  FAssetRegistryPruneOptions *local_178;
  undefined8 *local_170;
  FAssetRegistrySerializationOptions *local_168;
  FAssetRegistryPruneOptions *local_160;
  TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *local_158;
  ForAnyElementType *local_150;
  undefined1 *local_148;
  uint *local_140;
  FAssetRegistryState *local_138;
  FAssetRegistryPruneOptions *local_130;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_128;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_120;
  FAssetRegistrySerializationOptions *local_118;
  FAssetRegistryPruneOptions *local_110;
  undefined1 local_108;
  undefined1 local_107;
  <lambda_1> local_106;
  TArrayView<FAssetData_*,int> local_f8 [2];
  undefined4 local_cc;
  undefined1 local_c8 [32];
  ForElementType<unsigned_int> local_a8;
  uint local_a0;
  int local_9c;
  int local_98;
  int local_94;
  FScriptContainerElement local_90 [8];
  ForAnyElementType local_88;
  uint local_80;
  TBitArray<FDefaultBitArrayAllocator> local_78;
  TBitArray<FDefaultBitArrayAllocator> local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_378;
  local_325 = *(int *)&(param_1->ChunksToKeep).Elements.field_0x8 !=
              *(int *)&(param_1->ChunksToKeep).Elements.field_0x34;
  local_324 = *(int *)&(param_1->RequiredPackages).Elements.field_0x8 !=
              *(int *)&(param_1->RequiredPackages).Elements.field_0x34;
  <Var23 = (<lambda_1>)
           (*(int *)&(param_1->RemovePackages).Elements.field_0x8 !=
           *(int *)&(param_1->RemovePackages).Elements.field_0x34);
  local_2b0 = param_1;
  TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>::Array
            (&this->CachedAssets,&local_2e0);
  local_2e8 = local_2e0.ArrayNum;
  local_2fc = 0;
  local_310.Data = (FScriptContainerElement *)0x0;
  local_308[0] = 0;
  local_308[1] = 0;
  local_2f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f8.ArrayNum = 0;
  local_2f8.ArrayMax = 0;
  local_c8._0_8_ = (FScriptContainerElement *)0x0;
  local_c8._8_8_ = 0;
  local_a8 = (ForElementType<unsigned_int>)0x0;
  local_a0 = 0;
  local_94 = 0;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_9c = 0x80;
  local_98 = -1;
  TMapBase<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
              *)&this->CachedDependsNodes,&local_2f8);
  iVar6 = local_2e0.ArrayNum;
  lVar13 = (longlong)local_2e0.ArrayNum;
  uVar12 = 1;
  if (local_308[0] < local_2e0.ArrayNum) {
    iVar11 = local_2e0.ArrayNum - local_308[0];
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar11,&local_310,local_308,local_308 + 1);
    memset(local_310.Data + iVar6,0,(longlong)iVar11);
  }
  else {
    if (local_2e0.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_2e0.ArrayNum);
    }
    if (local_2e0.ArrayNum < local_308[0]) {
      uVar16 = local_308[0] - local_2e0.ArrayNum;
      if ((int)(local_2e0.ArrayNum | uVar16) < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (uVar16 != 0) {
        iVar6 = (local_308[0] - uVar16) - iVar6;
        iVar11 = local_308[0];
        if (iVar6 != 0) {
          memmove(local_310.Data + lVar13,local_310.Data + lVar13 + (int)uVar16,(longlong)iVar6);
          iVar11 = local_308[0];
        }
        local_308[0] = iVar11 - uVar16;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,&local_310,iVar11 - uVar16,local_308 + 1);
      }
    }
  }
  uVar9 = 0;
  iVar6 = local_2f8.ArrayNum;
  uVar14 = (ulong64)local_2f8.ArrayNum;
  if ((uint)local_2f8.ArrayNum <= (uint)(local_c8._8_4_ - local_94)) goto LAB_142b0d729;
  if (local_2f8.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum(uVar14);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_c8,local_2f8.ArrayNum);
  if (3 < (uint)iVar6) {
    uVar20 = (ulonglong)(((uint)iVar6 >> 1) + 7) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_2a8 = (undefined4)lVar13;
    uVar12 = 1 << ((byte)lVar13 & 0x1f);
  }
  if ((local_80 == 0) || ((int)local_80 < (int)uVar12)) {
    local_80 = uVar12;
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_88,0,0,4);
    }
    if (uVar12 != 0) {
      uVar16 = uVar12;
      if (uVar12 < 2) {
        if (local_88.Data != (FScriptContainerElement *)0x0) {
          uVar16 = 0;
          goto LAB_142b0d547;
        }
      }
      else {
LAB_142b0d547:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_88,0,uVar16,4);
      }
      if (0 < (int)uVar12) {
        uVar22 = (ulonglong)uVar12;
        uVar20 = uVar9;
        do {
          FVar17.Data = local_90;
          if (local_88.Data != (FScriptContainerElement *)0x0) {
            FVar17.Data = local_88.Data;
          }
          uVar7 = uVar20 & (longlong)(int)uVar12 - 1U;
          uVar20 = uVar20 + 1;
          *(undefined4 *)(FVar17.Data + uVar7 * 4) = 0xffffffff;
          uVar22 = uVar22 - 1;
        } while (uVar22 != 0);
      }
    }
    if (local_80 != 0) {
      pTStack_2c8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10);
      local_2d0 = 0;
      uStack_2cc = 1;
      uStack_2bc = 0;
      uStack_2b8 = 0;
      if (local_a0 != 0) {
        FVar21 = (ForElementType<unsigned_int>)((longlong)local_c8 + 0x10);
        if (local_a8 != (ForElementType<unsigned_int>)0x0) {
          FVar21 = local_a8;
        }
        uVar12 = *(uint *)FVar21;
        uVar20 = uVar9;
        while (uVar12 == 0) {
          uStack_2b8 = (int)uVar20 + 0x20;
          uVar20 = (ulonglong)uStack_2b8;
          iVar6 = (int)uVar9;
          local_2d0 = iVar6 + 1;
          uVar9 = (ulonglong)local_2d0;
          if ((int)((local_a0 - 1) + ((int)(local_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_2d0)
          goto LAB_142b0d65a;
          uVar12 = ((uint *)((longlong)FVar21 + 4))[iVar6];
        }
        uStack_2cc = -uVar12 & uVar12;
        uVar9 = (ulonglong)uStack_2cc * 2 + 1;
        lVar13 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_2a4 = (int)lVar13;
        uStack_2bc = (uStack_2b8 - 1) + local_2a4;
        uVar9 = (ulonglong)uStack_2bc;
        if ((int)local_a0 < (int)uStack_2bc) {
LAB_142b0d65a:
          uVar9 = (ulonglong)local_a0;
          uStack_2bc = local_a0;
        }
      }
      local_2c0 = 0xffffffff;
      local_290 = (longlong *)local_c8;
      local_288._padding_ = CONCAT44(uStack_2cc,local_2d0);
      local_288.CurrentBitIndex = uStack_2bc;
      local_288.UnvisitedBitMask = 0xffffffff;
      local_288._28_4_ = uStack_2b4;
      local_288.BaseBitIndex = uStack_2b8;
      local_288.Array = pTStack_2c8;
      if ((int)uVar9 < (int)local_a0) {
        do {
          iVar6 = (int)uVar9;
          lVar13 = *local_290 + (longlong)iVar6 * 0x18;
          uVar9 = *(ulonglong *)(*local_290 + (longlong)iVar6 * 0x18);
          uVar12 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
          uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
          uVar12 = (uVar12 >> 0x10 ^ uVar12) & local_80 - 1;
          *(uint *)(lVar13 + 0x14) = uVar12;
          FVar17.Data = local_90;
          if (local_88.Data != (FScriptContainerElement *)0x0) {
            FVar17.Data = local_88.Data;
          }
          uVar9 = (longlong)(int)local_80 - 1U & (longlong)(int)uVar12;
          *(undefined4 *)(lVar13 + 0x10) = *(undefined4 *)(FVar17.Data + uVar9 * 4);
          *(int *)(FVar17.Data + uVar9 * 4) = iVar6;
          local_288.UnvisitedBitMask = local_288.UnvisitedBitMask & ~local_288._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_288);
          uVar9 = (ulonglong)(uint)local_288.CurrentBitIndex;
        } while (local_288.CurrentBitIndex < (local_288.Array)->NumBits);
      }
    }
  }
  uVar14 = local_2f8._8_8_ & 0xffffffff;
LAB_142b0d729:
  iVar6 = (int)uVar14;
  pFVar1 = local_2f8.AllocatorInstance.Data + (longlong)iVar6 * 8;
  FVar17.Data = local_2f8.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar14 != iVar6) {
      local_327 = 0;
      `TCheckedPointerIterator<FDependsNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_327);
    }
    pFVar19 = local_2b0;
    if (FVar17.Data == pFVar1) break;
    local_2a0.Value = *(schar **)FVar17.Data;
    local_1c8 = &local_2a0.Value;
    local_326 = 0;
    local_1c0 = &local_326;
    TSet<TTuple<FDependsNode_*,signed_char>,TDefaultMapHashableKeyFuncs<FDependsNode_*,signed_char,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FDependsNode_*_const_&,signed_char_&&>_>
              ((TSet<TTuple<FDependsNode_*,signed_char>,TDefaultMapHashableKeyFuncs<FDependsNode_*,signed_char,0>,FDefaultSetAllocator>
                *)local_c8,&local_2a0,(bool *)&local_1c8);
    uVar14 = local_2f8._8_8_ & 0xffffffff;
    FVar17.Data = FVar17.Data + 8;
  }
  local_158 = &local_2e0;
  local_150 = &local_310;
  local_1b8.DataPtr = (void **)0x0;
  local_148 = local_c8;
  local_1b8.ArrayNum = 0;
  local_140 = &local_2fc;
  local_128 = &local_2b0->RemovePackages;
  local_120 = &local_2b0->ChunksToKeep;
  local_118 = &local_2b0->Options;
  local_108 = local_325;
  local_107 = local_324;
  local_1a8 = UE::Core::Private::Function::
              TFunctionRefCaller<`FAssetRegistryState::Prune'::__l2::<lambda_1>,void,int>::Call;
  local_1a0 = &local_158;
  local_130 = local_2b0;
  local_110 = local_2b0;
  local_138 = this;
  local_106 = <Var23;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",local_2e0.ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_1a8,
             <Var23,None,&local_1b8);
  local_320.Data = (FScriptContainerElement *)0x0;
  local_318 = 0;
  iStack_314 = 0;
  if ((int)local_2fc < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)local_2fc);
  }
  if (0 < (int)local_2fc) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_2fc,&local_320,0,&iStack_314);
  }
  lVar13 = (longlong)(int)local_2e8;
  uVar12 = 0;
  if (0 < lVar13) {
    lVar18 = 0;
    do {
      uVar16 = 0;
      if ((int)uVar12 < local_308[0]) {
        uVar16 = ~uVar12 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_310.Data[lVar18] == (FScriptContainerElement)0x0) {
        uVar16 = 0;
        if ((int)uVar12 < local_2e0.ArrayNum) {
          uVar16 = ~uVar12 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = local_2e0.AllocatorInstance.Data + lVar18 * 8;
        if (((local_320.Data <= pFVar1) && (pFVar1 < local_320.Data + (longlong)iStack_314 * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (local_318 == iStack_314) {
          local_318 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_320,&iStack_314);
        }
        lVar10 = (longlong)local_318;
        local_318 = local_318 + 1;
        *(undefined8 *)(local_320.Data + lVar10 * 8) = *(undefined8 *)pFVar1;
      }
      uVar12 = uVar12 + 1;
      lVar18 = lVar18 + 1;
      pFVar19 = local_2b0;
    } while (lVar18 < lVar13);
  }
  iVar6 = local_318;
  local_198 = local_320.Data;
  local_58.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_58.NumBits = 0;
  local_58.MaxBits = 0x80;
  local_78.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_78.NumBits = 0;
  local_78.MaxBits = 0x80;
  if ((local_318 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iStack_190 = iVar6;
  local_f8[0]._12_4_ = uStack_18c;
  local_f8[0].ArrayNum = iVar6;
  local_f8[0].DataPtr = (FAssetData **)local_198;
  RemoveAssetDatasImpl<FDefaultBitArrayAllocator>(this,local_f8,false,&local_58,&local_78);
  uVar4 = local_c8._8_4_;
  local_188 = (undefined8 *)local_c8;
  local_1f8 = UE::Core::Private::Function::
              TFunctionRefCaller<`FAssetRegistryState::Prune'::__l2::<lambda_2>,void,int>::Call;
  local_1f0 = &local_188;
  local_208.DataPtr = (void **)0x0;
  uVar12 = 0;
  local_208.ArrayNum = 0;
  local_180 = &pFVar19->Options;
  local_178 = pFVar19;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",local_c8._8_4_,1,(TFunctionRef<void___cdecl(int)> *)&local_1f8,
             <Var23,None,&local_208);
  local_170 = (undefined8 *)local_c8;
  local_1d8 = UE::Core::Private::Function::
              TFunctionRefCaller<`FAssetRegistryState::Prune'::__l2::<lambda_3>,void,int>::Call;
  local_1d0 = &local_170;
  local_1e8.DataPtr = (void **)0x0;
  local_1e8.ArrayNum = 0;
  local_168 = &pFVar19->Options;
  local_160 = pFVar19;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",uVar4,1,(TFunctionRef<void___cdecl(int)> *)&local_1d8,<Var23,None,
             &local_1e8);
  uVar16 = local_a0;
  local_248 = 0;
  uStack_24c = local_248;
  uStack_25c = 1;
  if (local_a0 != 0) {
    FVar21 = (ForElementType<unsigned_int>)((longlong)local_c8 + 0x10);
    if (local_a8 != (ForElementType<unsigned_int>)0x0) {
      FVar21 = local_a8;
    }
    uVar15 = *(uint *)FVar21;
    local_248 = 0;
    uVar12 = 0;
    while (uVar15 == 0) {
      lVar13 = (longlong)(int)uVar12;
      local_248 = local_248 + 0x20;
      uVar12 = uVar12 + 1;
      uStack_24c = local_a0;
      if ((int)((local_a0 - 1) + ((int)(local_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar12)
      goto LAB_142b0dc71;
      uVar15 = ((uint *)((longlong)FVar21 + 4))[lVar13];
    }
    uStack_25c = -uVar15 & uVar15;
    uVar9 = (ulonglong)uStack_25c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_2a0.Key._4_4_ = (int)lVar13;
    uStack_24c = (local_248 - 1) + local_2a0.Key._4_4_;
    if ((int)local_a0 < (int)uStack_24c) {
      uStack_24c = local_a0;
    }
  }
LAB_142b0dc71:
  local_268 = (longlong *)local_c8;
  uStack_244 = local_cc;
  local_258 = (TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10);
  uVar15 = local_a0 & 0xffffffe0;
  iStack_240 = local_c8._8_4_ - local_94;
  uStack_250 = 0xffffffff;
  TStack_230.CurrentBitIndex = uStack_24c;
  TStack_230.UnvisitedBitMask = 0xffffffff;
  TStack_230._padding_ = CONCAT44(uStack_25c,uVar12);
  iVar6 = (int)local_a0 >> 5;
  TStack_230._28_4_ = local_cc;
  TStack_230.BaseBitIndex = local_248;
  uStack_210 = CONCAT44(uStack_23c,iStack_240);
  bVar8 = (byte)local_a0;
  uStack_260 = uVar12;
  local_238 = local_268;
  TStack_230.Array = local_258;
  if (((int)local_a0 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar16 != local_a0) {
    FVar21 = (ForElementType<unsigned_int>)((longlong)local_c8 + 0x10);
    if (local_a8 != (ForElementType<unsigned_int>)0x0) {
      FVar21 = local_a8;
    }
    uVar12 = -1 << (bVar8 & 0x1f) & *(uint *)((longlong)FVar21 + (longlong)iVar6 * 4);
    while (uVar12 == 0) {
      lVar13 = (longlong)iVar6;
      uVar15 = uVar15 + 0x20;
      iVar6 = iVar6 + 1;
      uVar16 = local_a0;
      if ((int)((local_a0 - 1) + ((int)(local_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar6)
      goto LAB_142b0dd90;
      uVar12 = ((uint *)((longlong)FVar21 + 4))[lVar13];
    }
    uVar9 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar16 = (uVar15 - 1) + (int)lVar13;
    if ((int)local_a0 < (int)uVar16) {
      uVar16 = local_a0;
    }
  }
LAB_142b0dd90:
  while( true ) {
    plVar3 = local_238;
    if ((int)local_238[1] - *(int *)((longlong)local_238 + 0x34) != (int)uStack_210) {
      `TSparseArray<TSparseSetElement<TTuple<FDependsNode_*,signed_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_300);
    }
    if (((TStack_230.CurrentBitIndex == uVar16) &&
        (TStack_230.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10))) &&
       (plVar3 == (longlong *)local_c8)) break;
    lVar13 = *plVar3;
    this_00 = *(FDependsNode **)(lVar13 + (longlong)TStack_230.CurrentBitIndex * 0x18);
    if (*(char *)(lVar13 + 8 + (longlong)TStack_230.CurrentBitIndex * 0x18) == '\0') {
      if (*(int *)&(this->CachedDependsNodes).field_0x8 !=
          *(int *)&(this->CachedDependsNodes).field_0x34) {
        uVar12 = ::GetTypeHash(&this_00->Identifier);
        TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
        ::RemoveImpl<FAssetIdentifier>
                  ((TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
                    *)&this->CachedDependsNodes,uVar12,&this_00->Identifier);
      }
      this->NumDependsNodes = this->NumDependsNodes + -1;
      if (((this->PreallocatedDependsNodeDataBuffers).ArrayNum == 0) &&
         (this_00 != (FDependsNode *)0x0)) {
        FDependsNode::~FDependsNode(this_00);
        ::operator_delete(this_00,0xa8);
      }
    }
    TStack_230.UnvisitedBitMask = TStack_230.UnvisitedBitMask & ~TStack_230._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_230);
  }
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_58.AllocatorInstance.SecondaryData);
  }
  if (local_320.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_320.Data);
  }
  local_80 = 0;
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FDependsNode_*,signed_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FDependsNode_*,signed_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FDependsNode_*,signed_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_c8);
  if (local_2f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.AllocatorInstance.Data);
  }
  if (local_310.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_310.Data);
  }
  if (local_2e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e0.AllocatorInstance.Data);
  }
  return;
}

// PruneAssetData @ 142b0df30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FAssetRegistryState::PruneAssetData
          (FAssetRegistryState *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_2,
          FAssetRegistrySerializationOptions *param_3)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_58;
  
  local_58.Elements._16_8_ = 0;
  local_58.Elements._24_8_ = 0;
  local_58.Hash.InlineData[0] = '\0';
  local_58.Hash.InlineData[1] = '\0';
  local_58.Hash.InlineData[2] = '\0';
  local_58.Hash.InlineData[3] = '\0';
  local_58.Hash._padding_ = 0;
  local_58.HashSize = 0;
  local_58._76_4_ = 0;
  local_58.Elements._0_8_ = 0;
  local_58.Elements._8_8_ = 0;
  local_58.Elements._32_8_ = 0;
  local_58.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_58.Elements._48_8_ = _UNK_150631d98;
  local_58.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  PruneAssetData(this,param_1,param_2,&local_58,param_3);
  return;
}

// PruneAssetData @ 142b0df90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FAssetRegistryState::PruneAssetData
          (FAssetRegistryState *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_2,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_3,
          FAssetRegistrySerializationOptions *param_4)

{
  int iVar1;
  ForElementType<FSetElementId> FVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 *puVar5;
  void *_Src;
  undefined1 auStackY_318 [32];
  undefined1 local_2e8 [32];
  void *local_2c8;
  undefined4 local_2c0;
  uint local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  ForElementType<FSetElementId> local_2a8;
  int local_2a0;
  undefined1 local_298 [32];
  void *local_278;
  undefined4 local_270;
  uint local_26c;
  undefined4 local_268;
  undefined4 local_264;
  ForElementType<FSetElementId> local_258;
  int local_250;
  undefined1 local_248 [32];
  undefined1 *local_228;
  int local_220;
  uint local_21c;
  undefined4 local_218;
  undefined4 local_214;
  ForElementType<FSetElementId> local_210;
  int local_200 [2];
  undefined1 local_1f8 [72];
  ForElementType<FSetElementId> local_1b0;
  int local_1a0 [2];
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_198;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_148;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_f8;
  bool local_a8;
  ForAnyElementType local_a0;
  undefined8 local_98;
  TBitArray<FDefaultBitArrayAllocator> local_90;
  undefined8 uStack_70;
  ForElementType<FSetElementId> local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_318;
  local_2e8._0_8_ = (FScriptContainerElement *)0x0;
  local_2e8._8_8_ = 0;
  local_2c8 = (void *)0x0;
  local_2c0 = 0;
  local_2b4 = 0;
  local_2a8 = (ForElementType<FSetElementId>)0x0;
  local_2a0 = 0;
  local_298._0_8_ = (FScriptContainerElement *)0x0;
  local_298._8_8_ = 0;
  local_278 = (void *)0x0;
  local_270 = 0;
  local_264 = 0;
  local_258 = (ForElementType<FSetElementId>)0x0;
  local_250 = 0;
  local_248._0_8_ = (FScriptContainerElement *)0x0;
  local_248._8_8_ = 0;
  local_228 = (undefined1 *)0x0;
  local_220 = 0;
  local_214 = 0;
  local_210.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_200[0] = 0;
  local_2bc = 0x80;
  local_2b8 = 0xffffffff;
  local_26c = 0x80;
  local_268 = 0xffffffff;
  local_21c = 0x80;
  local_218 = 0xffffffff;
  FAssetRegistrySerializationOptions::FAssetRegistrySerializationOptions
            ((FAssetRegistrySerializationOptions *)local_1f8,ForGame);
  local_90.NumBits = ___xmm_00000000ffffffff0000008000000000;
  local_90.MaxBits = _UNK_150631d94;
  uStack_70 = _UNK_150631d98;
  local_a8 = false;
  local_a0.Data = (FScriptContainerElement *)0x0;
  local_98 = 0;
  local_90.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_60 = (ForElementType<FSetElementId>)0x0;
  local_58 = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_2e8,param_1);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_298,param_2);
  if ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_248 != param_3) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              (&local_210,local_200,&param_3->Hash,param_3->HashSize);
    iVar1 = *(int *)&(param_3->Elements).field_0x8;
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_248,iVar1);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar1,(ForAnyElementType *)local_248,(int *)(local_248 + 8),
               (int *)(local_248 + 0xc));
    local_218 = *(undefined4 *)&(param_3->Elements).field_0x30;
    puVar5 = &(param_3->Elements).field_0x10;
    local_214 = *(undefined4 *)&(param_3->Elements).field_0x34;
    if (local_248 + 0x10 != puVar5) {
      uVar4 = *(int *)&(param_3->Elements).field_0x28 + 0x1fU & 0xffffffe0;
      local_220 = 0;
      if (((int)local_21c < (int)uVar4) || (0x80 < (int)local_21c)) {
        local_21c = 0x80;
        if (0x80 < (int)uVar4) {
          local_21c = uVar4;
        }
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_248 + 0x10),0);
      }
      local_220 = *(int *)&(param_3->Elements).field_0x28;
      if (local_220 != 0) {
        _Src = *(void **)&(param_3->Elements).field_0x20;
        if (_Src == (void *)0x0) {
          _Src = puVar5;
        }
        puVar5 = local_248 + 0x10;
        if (local_228 != (undefined1 *)0x0) {
          puVar5 = local_228;
        }
        memcpy(puVar5,_Src,(ulonglong)(local_220 + 0x1fU >> 5) << 2);
      }
    }
    if (iVar1 != 0) {
      memcpy((void *)local_248._0_8_,*(void **)&param_3->Elements,(longlong)iVar1 * 0xc);
    }
  }
  local_1f8[0] = param_4->bSerializeAssetRegistry;
  local_1f8[1] = param_4->bSerializeDependencies;
  local_1f8[2] = param_4->bSerializeSearchableNameDependencies;
  local_1f8[3] = param_4->bSerializeManageDependencies;
  local_1f8[4] = param_4->bSerializePackageData;
  local_1f8[5] = param_4->bUseAssetRegistryTagsAllowListInsteadOfDenyList;
  local_1f8[6] = param_4->bFilterAssetDataWithNoTags;
  local_1f8[7] = param_4->bFilterDependenciesWithNoTags;
  local_1f8[8] = param_4->bFilterSearchableNames;
  local_1f8[9] = param_4->bKeepDevelopmentAssetRegistryTags;
  if ((TMap<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
       *)(local_1f8 + 0x10) != &param_4->CookFilterlistTagsByClass) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              (&local_1b0,local_1a0,
               (ForElementType<FSetElementId> *)&(param_4->CookFilterlistTagsByClass).field_0x38,
               *(int *)&(param_4->CookFilterlistTagsByClass).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)(local_1f8 + 0x10),
                (TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_4->CookFilterlistTagsByClass);
  }
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            (&local_198,&param_4->CookTagsAsName);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            (&local_148,&param_4->CookTagsAsPath);
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
            (&local_f8,&param_4->AssetBundlesDenyList);
  Prune(this,(FAssetRegistryPruneOptions *)local_2e8);
  local_58 = 0;
  if (local_60 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_60);
  }
  uVar3 = local_98 >> 0x20;
  local_98 = local_98 & 0xffffffff00000000;
  if ((int)uVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&local_a0,0,(int *)((longlong)&local_98 + 4));
  }
  iVar1 = local_90.MaxBits;
  uStack_70 = 0xffffffff;
  local_90._24_8_ = (ulonglong)(uint)local_90.MaxBits << 0x20;
  if (0x80 < (uint)iVar1) {
    local_90.NumBits = 0;
    local_90.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_90,0);
  }
  if (local_90.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_90.AllocatorInstance.SecondaryData);
  }
  if (local_a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data);
  }
  FAssetRegistrySerializationOptions::~FAssetRegistrySerializationOptions
            ((FAssetRegistrySerializationOptions *)local_1f8);
  local_200[0] = 0;
  if (local_210.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_210.SecondaryData);
  }
  iVar1 = SUB84(local_248._8_8_,4);
  local_248._8_8_ = local_248._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_248,0,(int *)(local_248 + 0xc));
  }
  local_218 = 0xffffffff;
  local_214 = 0;
  local_220 = 0;
  if (0x80 < local_21c) {
    local_21c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_248 + 0x10),0);
  }
  if (local_228 != (undefined1 *)0x0) {
    FMemory::Free(local_228);
  }
  if ((FScriptContainerElement *)local_248._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_248._0_8_);
  }
  local_250 = 0;
  if (local_258 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_258);
  }
  iVar1 = SUB84(local_298._8_8_,4);
  local_298._8_8_ = local_298._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_298,0,(int *)(local_298 + 0xc));
  }
  local_268 = 0xffffffff;
  local_264 = 0;
  local_270 = 0;
  if (0x80 < local_26c) {
    local_26c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_298 + 0x10),0);
  }
  if (local_278 != (void *)0x0) {
    FMemory::Free(local_278);
  }
  if ((FScriptContainerElement *)local_298._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_298._0_8_);
  }
  local_2a0 = 0;
  if (local_2a8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_2a8);
  }
  iVar1 = SUB84(local_2e8._8_8_,4);
  local_2e8._8_8_ = local_2e8._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_2e8,0,(int *)(local_2e8 + 0xc));
  }
  local_2b8 = 0xffffffff;
  local_2b4 = 0;
  local_2c0 = 0;
  if (0x80 < local_2bc) {
    local_2bc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_2e8 + 0x10),0);
  }
  if (local_2c8 != (void *)0x0) {
    FMemory::Free(local_2c8);
  }
  if ((FScriptContainerElement *)local_2e8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2e8._0_8_);
  }
  param_3->HashSize = 0;
  FVar2 = (param_3->Hash).SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&param_3->Elements);
  return;
}

// RemoveAssetData @ 142b13e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAssetRegistryState::RemoveAssetData
          (FAssetRegistryState *this,FAssetData *param_1,FCachedAssetKey *param_2,bool param_3,
          bool *param_4,bool *param_5)

{
  code *pcVar1;
  bool bVar2;
  ForElementType<unsigned_int> FVar3;
  FAssetData *local_res10 [3];
  undefined1 auStackY_d8 [32];
  undefined4 uStack_9c;
  undefined4 uStack_8c;
  TArrayView<UE::AssetRegistry::Private::FCachedAssetKey_const_,int> local_88;
  TArrayView<FAssetData_*,int> local_78;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  TBitArray<FDefaultBitArrayAllocator> local_48;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.AllocatorInstance.InlineData[0] = '\0';
  local_68.AllocatorInstance.InlineData[1] = '\0';
  local_68.AllocatorInstance.InlineData[2] = '\0';
  local_68.AllocatorInstance.InlineData[3] = '\0';
  local_48.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.MaxBits = 0x80;
  local_68.NumBits = 1;
  local_48.MaxBits = 0x80;
  local_48.NumBits = 1;
  local_48.AllocatorInstance.InlineData[0] = '\0';
  local_48.AllocatorInstance.InlineData[1] = '\0';
  local_48.AllocatorInstance.InlineData[2] = '\0';
  local_48.AllocatorInstance.InlineData[3] = '\0';
  local_78.DataPtr = local_res10;
  local_88._12_4_ = uStack_9c;
  local_88.ArrayNum = 1;
  local_78._12_4_ = uStack_8c;
  local_78.ArrayNum = 1;
  local_res10[0] = param_1;
  local_88.DataPtr = param_2;
  RemoveAssetDatasImpl<FDefaultBitArrayAllocator>
            (this,&local_78,&local_88,param_3,&local_68,&local_48);
  if ((local_68.NumBits < 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FVar3 = (ForElementType<unsigned_int>)&local_68;
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar3 = local_68.AllocatorInstance.SecondaryData;
  }
  *param_4 = (bool)(*(byte *)FVar3 & 1);
  if ((local_48.NumBits < 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FVar3 = (ForElementType<unsigned_int>)&local_48;
  if (local_48.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar3 = local_48.AllocatorInstance.SecondaryData;
  }
  *param_5 = (bool)(*(byte *)FVar3 & 1);
  if (local_48.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_48.AllocatorInstance.SecondaryData);
  }
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  return;
}

// RemoveAssetData @ 142b13fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAssetRegistryState::RemoveAssetData
          (FAssetRegistryState *this,FSoftObjectPath *param_1,bool param_2,bool *param_3,
          bool *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong *plVar4;
  ForElementType<unsigned_int> FVar5;
  int iVar6;
  undefined1 auStackY_128 [32];
  undefined8 local_f8;
  uint uStack_f0;
  uint uStack_ec;
  FCachedAssetKey local_e8;
  FCachedAssetKey *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  FAssetData **local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  FCachedAssetKey local_b8;
  TArrayView<UE::AssetRegistry::Private::FCachedAssetKey_const_,int> local_a8;
  TArrayView<FAssetData_*,int> local_98;
  TBitArray<FDefaultBitArrayAllocator> local_88;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  UE::AssetRegistry::Private::FCachedAssetKey::FCachedAssetKey(&local_e8,param_1);
  local_b8.OuterPath.ComparisonIndex.Value = local_e8.OuterPath.ComparisonIndex.Value;
  local_b8.OuterPath.Number = local_e8.OuterPath.Number;
  local_b8.ObjectName.ComparisonIndex.Value = local_e8.ObjectName.ComparisonIndex.Value;
  local_b8.ObjectName.Number = local_e8.ObjectName.Number;
  local_f8._0_4_ = local_e8.OuterPath.ComparisonIndex.Value;
  local_f8._4_4_ = local_e8.OuterPath.Number;
  uStack_f0 = local_e8.ObjectName.ComparisonIndex.Value;
  uStack_ec = local_e8.ObjectName.Number;
  uVar3 = ::GetTypeHash(local_e8.ObjectName.ComparisonIndex);
  iVar6 = uStack_ec + uVar3;
  uVar3 = ::GetTypeHash(local_f8._0_4_);
  uVar3 = uVar3 + local_f8._4_4_;
  iVar6 = TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>::
          FindIndexByHash<UE::AssetRegistry::Private::FCachedAssetKey>
                    (&this->CachedAssets,uVar3 * 0x40 + iVar6 + (uVar3 >> 2) + 0x9e3779b9 ^ uVar3,
                     &local_b8);
  if (((iVar6 == -1) ||
      (plVar4 = (longlong *)((longlong)iVar6 * 0x10 + *(longlong *)&(this->CachedAssets).Elements),
      plVar4 == (longlong *)0x0)) ||
     (local_f8 = (FAssetData *)*plVar4, local_f8 == (FAssetData *)0x0)) {
    *param_3 = false;
    *param_4 = false;
  }
  else {
    local_88.MaxBits = 0x80;
    local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_88.AllocatorInstance.InlineData[0] = '\0';
    local_88.AllocatorInstance.InlineData[1] = '\0';
    local_88.AllocatorInstance.InlineData[2] = '\0';
    local_88.AllocatorInstance.InlineData[3] = '\0';
    local_88.NumBits = 1;
    local_68.MaxBits = 0x80;
    local_68.NumBits = 1;
    local_68.AllocatorInstance.InlineData[0] = '\0';
    local_68.AllocatorInstance.InlineData[1] = '\0';
    local_68.AllocatorInstance.InlineData[2] = '\0';
    local_68.AllocatorInstance.InlineData[3] = '\0';
    local_d8 = &local_e8;
    local_c8 = (FAssetData **)&local_f8;
    uStack_d0 = 1;
    local_a8._12_4_ = uStack_cc;
    local_a8.ArrayNum = 1;
    uStack_c0 = 1;
    local_98._12_4_ = uStack_bc;
    local_98.ArrayNum = 1;
    local_a8.DataPtr = local_d8;
    local_98.DataPtr = local_c8;
    RemoveAssetDatasImpl<FDefaultBitArrayAllocator>
              (this,&local_98,&local_a8,param_2,&local_88,&local_68);
    if ((local_88.NumBits < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FVar5 = (ForElementType<unsigned_int>)&local_88;
    if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar5 = local_88.AllocatorInstance.SecondaryData;
    }
    *param_3 = (bool)(*(byte *)FVar5 & 1);
    if ((local_68.NumBits < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FVar5 = (ForElementType<unsigned_int>)&local_68;
    if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar5 = local_68.AllocatorInstance.SecondaryData;
    }
    *param_4 = (bool)(*(byte *)FVar5 & 1);
    if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
    }
    if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// RemoveAssetData @ 142b141e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAssetRegistryState::RemoveAssetData
          (FAssetRegistryState *this,FAssetData *param_1,bool param_2,bool *param_3,bool *param_4)

{
  code *pcVar1;
  bool bVar2;
  ForElementType<unsigned_int> FVar3;
  FAssetData *local_res10 [3];
  undefined1 auStackY_a8 [32];
  undefined4 uStack_6c;
  TArrayView<FAssetData_*,int> local_68;
  TBitArray<FDefaultBitArrayAllocator> local_58;
  TBitArray<FDefaultBitArrayAllocator> local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_38.MaxBits = 0x80;
  local_58.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_38.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_38.NumBits = 1;
  local_38.AllocatorInstance.InlineData[0] = '\0';
  local_38.AllocatorInstance.InlineData[1] = '\0';
  local_38.AllocatorInstance.InlineData[2] = '\0';
  local_38.AllocatorInstance.InlineData[3] = '\0';
  local_58.MaxBits = 0x80;
  local_58.NumBits = 1;
  local_58.AllocatorInstance.InlineData[0] = '\0';
  local_58.AllocatorInstance.InlineData[1] = '\0';
  local_58.AllocatorInstance.InlineData[2] = '\0';
  local_58.AllocatorInstance.InlineData[3] = '\0';
  local_68.DataPtr = local_res10;
  local_68._12_4_ = uStack_6c;
  local_68.ArrayNum = 1;
  local_res10[0] = param_1;
  RemoveAssetDatasImpl<FDefaultBitArrayAllocator>(this,&local_68,param_2,&local_38,&local_58);
  if (local_38.NumBits < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_58.NumBits < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FVar3 = (ForElementType<unsigned_int>)&local_58;
  if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar3 = local_58.AllocatorInstance.SecondaryData;
  }
  *param_4 = (bool)(*(byte *)FVar3 & 1);
  if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_58.AllocatorInstance.SecondaryData);
  }
  if (local_38.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_38.AllocatorInstance.SecondaryData);
  }
  return;
}

// RemoveAssetDatas @ 142b14330

void __thiscall
FAssetRegistryState::RemoveAssetDatas
          (FAssetRegistryState *this,TArrayView<FAssetData_*,int> *param_1,bool param_2,
          TBitArray<FDefaultBitArrayAllocator> *param_3,
          TBitArray<FDefaultBitArrayAllocator> *param_4)

{
  TArrayView<FAssetData_*,int> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  RemoveAssetDatasImpl<FDefaultBitArrayAllocator>(this,&local_18,param_2,param_3,param_4);
  return;
}

// RemoveDependsNode @ 142b14fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

bool __thiscall
FAssetRegistryState::RemoveDependsNode(FAssetRegistryState *this,FAssetIdentifier *param_1)

{
  FScriptContainerElement *pFVar1;
  FDependsNode *this_00;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  ForAnyElementType FVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> local_80;
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> local_70;
  FDependencyQuery local_60;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_a8;
  uVar2 = ::GetTypeHash(param_1);
  iVar3 = TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FAssetIdentifier>
                    ((TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
                      *)&this->CachedDependsNodes,uVar2,param_1);
  if (iVar3 != -1) {
    lVar6 = (longlong)iVar3 * 0x30 + *(longlong *)&this->CachedDependsNodes;
    puVar7 = (undefined8 *)(lVar6 + 0x20);
    if (lVar6 == 0) {
      puVar7 = (undefined8 *)0x0;
    }
    if ((puVar7 != (undefined8 *)0x0) &&
       (this_00 = (FDependsNode *)*puVar7, this_00 != (FDependsNode *)0x0)) {
      local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_70.ArrayNum = 0;
      local_70.ArrayMax = 0;
      local_60.RequiredUnions.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0;
      local_60.RequiredUnions.ArrayNum = 0;
      local_60.RequiredUnions.ArrayMax = 1;
      local_60.Required = None;
      local_60.Excluded = None;
      FDependsNode::GetDependencies(this_00,&local_70,All,&local_60);
      if (local_60.RequiredUnions.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
        FMemory::Free((void *)local_60.RequiredUnions.AllocatorInstance.SecondaryData);
      }
      iVar3 = local_70.ArrayNum;
      uVar4 = (ulonglong)local_70.ArrayNum;
      pFVar1 = local_70.AllocatorInstance.Data + uVar4 * 8;
      FVar5.Data = local_70.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar4 != iVar3) {
          `TCheckedPointerIterator<FDependsNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_88);
        }
        if (FVar5.Data == pFVar1) break;
        FDependsNode::RemoveReferencer(*(FDependsNode **)FVar5.Data,this_00);
        uVar4 = local_70._8_8_ & 0xffffffff;
        FVar5.Data = FVar5.Data + 8;
      }
      local_60.RequiredUnions.ArrayMax = 1;
      local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_80.ArrayNum = 0;
      local_80.ArrayMax = 0;
      local_60.RequiredUnions.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0;
      local_60.RequiredUnions.ArrayNum = 0;
      local_60.Required = None;
      local_60.Excluded = None;
      FDependsNode::GetReferencers(this_00,&local_80,All,&local_60);
      if (local_60.RequiredUnions.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
        FMemory::Free((void *)local_60.RequiredUnions.AllocatorInstance.SecondaryData);
      }
      iVar3 = local_80.ArrayNum;
      uVar4 = (ulonglong)local_80.ArrayNum;
      pFVar1 = local_80.AllocatorInstance.Data + uVar4 * 8;
      FVar5.Data = local_80.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar4 != iVar3) {
          `TCheckedPointerIterator<FDependsNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_88);
        }
        if (FVar5.Data == pFVar1) break;
        FDependsNode::RemoveDependency(*(FDependsNode **)FVar5.Data,this_00,All);
        uVar4 = local_80._8_8_ & 0xffffffff;
        FVar5.Data = FVar5.Data + 8;
      }
      if (*(int *)&(this->CachedDependsNodes).field_0x8 !=
          *(int *)&(this->CachedDependsNodes).field_0x34) {
        uVar2 = ::GetTypeHash(param_1);
        TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
        ::RemoveImpl<FAssetIdentifier>
                  ((TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
                    *)&this->CachedDependsNodes,uVar2,param_1);
      }
      this->NumDependsNodes = this->NumDependsNodes + -1;
      if ((this->PreallocatedDependsNodeDataBuffers).ArrayNum == 0) {
        FDependsNode::~FDependsNode(this_00);
        ::operator_delete(this_00,0xa8);
      }
      if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.AllocatorInstance.Data);
      }
      if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.AllocatorInstance.Data);
      }
      return true;
    }
  }
  return false;
}

// RemoveDependsNodes @ 142b151f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
FAssetRegistryState::RemoveDependsNodes
          (FAssetRegistryState *this,
          TSet<FAssetIdentifier,DefaultKeyFuncs<FAssetIdentifier,0>,FDefaultSetAllocator> *param_1)

{
  atomic<unsigned_int> *paVar1;
  ulonglong uVar2;
  atomic<unsigned_int> aVar3;
  undefined1 *puVar4;
  longlong lVar5;
  code *pcVar6;
  FName FVar7;
  FName FVar8;
  TSet<FAssetIdentifier,DefaultKeyFuncs<FAssetIdentifier,0>,FDefaultSetAllocator> *pTVar9;
  undefined1 uVar10;
  int iVar11;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar12;
  FTaskBase *pFVar13;
  FTaskBase *pFVar14;
  FTask *pFVar15;
  FTaskBase *pFVar16;
  FTaskBase *pFVar17;
  undefined1 *puVar18;
  uint uVar19;
  FName *pFVar20;
  bool bVar21;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1c7 [7];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1c0;
  FAssetIdentifier local_1a0;
  undefined8 uStack_180;
  undefined4 local_170;
  undefined1 local_16c [12];
  TSet<FAssetIdentifier,DefaultKeyFuncs<FAssetIdentifier,0>,FDefaultSetAllocator> *local_160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_158;
  undefined8 uStack_138;
  undefined1 *local_130;
  TSparseArray<TSparseSetElement<TTuple<FDependsNode_*,TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTStack_128;
  undefined1 local_120 [40];
  int local_f8;
  undefined4 uStack_f4;
  undefined1 local_e8 [40];
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  TSparseArray<TSparseSetElement<TTuple<FDependsNode_*,TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_98;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_8_ = 0;
  local_e8._32_8_ = (ForElementType<unsigned_int>)0x0;
  local_c0 = 0;
  local_bc = 0x80;
  local_b8 = -1;
  local_b4 = 0;
  local_a8 = (ForElementType<FSetElementId>)0x0;
  local_a0 = 0;
  uVar19 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  if (uVar19 != 0) {
    if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar19);
    }
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_e8,uVar19);
    if (uVar19 < 4) {
      iVar11 = 1;
    }
    else {
      uVar2 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
      lVar5 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      local_170 = (undefined4)lVar5;
      iVar11 = 1 << ((byte)lVar5 & 0x1f);
    }
    if ((local_a0 == 0) || (local_a0 < iVar11)) {
      local_a0 = iVar11;
      TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>::Rehash
                ((TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator> *)
                 local_e8);
    }
  }
  bVar21 = -1 < CpuChannel->Enabled;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3782,"RemoveDependsNode_UpdateCachedDependsNode",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistryState.cpp"
               ,0xec6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3782);
  }
  puVar4 = &(param_1->Elements).field_0x10;
  local_1c0._padding_._0_4_ = 0;
  local_1c0._padding_._4_4_ = 1;
  local_1c0.UnvisitedBitMask = 0xffffffff;
  local_1c0.CurrentBitIndex = 0;
  local_1c0.BaseBitIndex = 0;
  local_1c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar4;
  if (*(int *)&(param_1->Elements).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1c0);
  }
  TStack_158._padding_ = CONCAT44(local_1c0._padding_._4_4_,(undefined4)local_1c0._padding_);
  TStack_158.CurrentBitIndex = local_1c0.CurrentBitIndex;
  TStack_158.UnvisitedBitMask = local_1c0.UnvisitedBitMask;
  TStack_158._28_4_ = local_1c0._28_4_;
  TStack_158.BaseBitIndex = local_1c0.BaseBitIndex;
  local_f8 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  local_120._16_8_ = local_1c0.Array;
  uStack_138 = CONCAT44(uStack_f4,local_f8);
  TStack_158.Array = local_1c0.Array;
  local_160 = param_1;
  local_120._0_8_ = param_1;
  local_120._8_8_ = TStack_158._padding_;
  local_120._24_8_ = TStack_158._16_8_;
  local_120._32_8_ = TStack_158._24_8_;
  pTVar12 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_120,
                       (TBitArray<FDefaultBitArrayAllocator> *)puVar4,
                       *(int *)&(param_1->Elements).field_0x28);
  local_1a0.PrimaryAssetType.Name = (FName)pTVar12->_padding_;
  FVar7 = (FName)pTVar12->Array;
  FVar8.ComparisonIndex.Value = pTVar12->UnvisitedBitMask;
  FVar8.Number = pTVar12->CurrentBitIndex;
  uStack_180 = *(undefined8 *)&pTVar12->BaseBitIndex;
  local_1a0.ObjectName = FVar7;
  local_1a0.ValueName = FVar8;
  do {
    pTVar9 = local_160;
    if (*(int *)&(local_160->Elements).field_0x8 - *(int *)&(local_160->Elements).field_0x34 !=
        (int)uStack_138) {
      local_1c7[0] = 0;
      `TSparseArray<TSparseSetElement<FAssetIdentifier>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1c7);
    }
    if (((TStack_158.CurrentBitIndex == FVar8.Number) && ((FName)TStack_158.Array == FVar7)) &&
       (pTVar9 == param_1)) {
      if (bVar21) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      pFVar13 = (FTaskBase *)0x0;
      local_98._44_4_ = 0x80;
      local_130 = local_e8;
      local_98._0_8_ = 0;
      pTStack_128 = &local_98;
      local_98._8_8_ = 0;
      local_98._32_8_ = 0;
      local_98._40_4_ = 0;
      local_98._48_4_ = 0xffffffff;
      local_98._52_4_ = 0;
      local_58 = (void *)0x0;
      local_50 = 0;
      pFVar14 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                            *)&UE::Tasks::Private::SmallTaskAllocator);
      pFVar16 = pFVar13;
      if (pFVar14 != (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::FTaskBase(pFVar14,2,true);
        pFVar14->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTaskBase<`FAssetRegistryState::RemoveDependsNodes'::`2'::<lambda_1>,void,void>
              ::_vftable_;
        if (((*(ulonglong *)&(pFVar14->LowLevelTask).field_0x38 & 0x20) == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsCompleted()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                                ,0x1dd,L"State: %d"), bVar21)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        (**(code **)(*(longlong *)&(pFVar14->LowLevelTask).field_0x28 + 0x18))
                  (&(pFVar14->LowLevelTask).field_0x28,&pFVar14->LowLevelTask);
        *(undefined ***)&(pFVar14->LowLevelTask).field_0x28 =
             &
             ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
        ;
        *(FTaskBase **)&pFVar14->LowLevelTask = pFVar14;
        *(FTaskBase **)&(pFVar14->LowLevelTask).field_0x8 = pFVar14;
        pFVar15 = LowLevelTasks::FTask::GetActiveTask();
        if (pFVar15 != (FTask *)0x0) {
          pFVar16 = *(FTaskBase **)&pFVar15->field_0x30;
        }
        *(FTaskBase **)&(pFVar14->LowLevelTask).field_0x30 = pFVar16;
        *(undefined8 *)&(pFVar14->LowLevelTask).field_0x38 = 0xc800005426531800;
        pFVar14->ExtendedPriority = None;
        UE::FInheritedContextBase::CaptureInheritedContext
                  ((FInheritedContextBase *)&pFVar14->_padding_);
        pFVar14[1]._padding_ = (longlong)local_130;
        pFVar14[1]._padding_ = (longlong)pTStack_128;
        pFVar14->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTask<`FAssetRegistryState::RemoveDependsNodes'::`2'::<lambda_1>_>::
              _vftable_;
        pFVar16 = pFVar14;
      }
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar16,0x100);
      pFVar17 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                            *)&UE::Tasks::Private::SmallTaskAllocator);
      pFVar14 = pFVar13;
      if (pFVar17 != (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::FTaskBase(pFVar17,2,true);
        pFVar17->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTaskBase<`FAssetRegistryState::RemoveDependsNodes'::`2'::<lambda_2>,void,void>
              ::_vftable_;
        if (((*(ulonglong *)&(pFVar17->LowLevelTask).field_0x38 & 0x20) == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsCompleted()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                                ,0x1dd,L"State: %d"), bVar21)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        (**(code **)(*(longlong *)&(pFVar17->LowLevelTask).field_0x28 + 0x18))
                  (&(pFVar17->LowLevelTask).field_0x28,&pFVar17->LowLevelTask);
        *(FTaskBase **)&pFVar17->LowLevelTask = pFVar17;
        *(undefined ***)&(pFVar17->LowLevelTask).field_0x28 =
             &
             ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
        ;
        *(FTaskBase **)&(pFVar17->LowLevelTask).field_0x8 = pFVar17;
        pFVar15 = LowLevelTasks::FTask::GetActiveTask();
        if (pFVar15 != (FTask *)0x0) {
          pFVar14 = *(FTaskBase **)&pFVar15->field_0x30;
        }
        *(FTaskBase **)&(pFVar17->LowLevelTask).field_0x30 = pFVar14;
        *(undefined8 *)&(pFVar17->LowLevelTask).field_0x38 = 0xc800005426532c00;
        pFVar17->ExtendedPriority = None;
        UE::FInheritedContextBase::CaptureInheritedContext
                  ((FInheritedContextBase *)&pFVar17->_padding_);
        pFVar17[1]._padding_ = (longlong)&local_98;
        pFVar17->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTask<`FAssetRegistryState::RemoveDependsNodes'::`2'::<lambda_2>_>::
              _vftable_;
        pFVar14 = pFVar17;
      }
      if (pFVar16 != (FTaskBase *)0x0) {
        if (((pFVar14->NumLocks == (atomic<unsigned_int>)0x0) ||
            (0x7fffffff < (uint)pFVar14->NumLocks)) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("NumLocks.load(std::memory_order_relaxed) >= NumInitialLocks && NumLocks.load(std::memory_order_relaxed) < ExecutionFlag"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                                ,0xe3,L"Prerequisites can be added only before the task is launched"
                               ), bVar21)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        LOCK();
        paVar1 = &pFVar14->NumLocks;
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + 1);
        UNLOCK();
        if ((0x7fffffff < (int)aVar3 + 1U) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("PrevNumLocks + 1 < ExecutionFlag",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                                ,0xea,L"Max number of task prerequisites reached: %d"), bVar21)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        bVar21 = UE::Tasks::Private::FTaskBase::AddSubsequent(pFVar16,pFVar14);
        if (bVar21) {
          LOCK();
          pFVar16->RefCount = (atomic<unsigned_int>)((int)pFVar16->RefCount + 1);
          UNLOCK();
          UE::Tasks::Private::FTaskBase::
          FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Push
                    (&pFVar14->Prerequisites,pFVar16);
        }
        else {
          LOCK();
          pFVar14->NumLocks = (atomic<unsigned_int>)((int)pFVar14->NumLocks + -1);
          UNLOCK();
        }
      }
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar14,0x100);
      pFVar17 = (FTaskBase *)0x0;
      if ((this->PreallocatedDependsNodeDataBuffers).ArrayNum == 0) {
        pFVar17 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                  ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                              *)&UE::Tasks::Private::SmallTaskAllocator);
        if (pFVar17 != (FTaskBase *)0x0) {
          UE::Tasks::Private::FTaskBase::FTaskBase(pFVar17,2,true);
          pFVar17->_padding_ =
               (longlong)
               &UE::Tasks::Private::
                TExecutableTaskBase<`FAssetRegistryState::RemoveDependsNodes'::`16'::<lambda_3>,void,void>
                ::_vftable_;
          UE::Tasks::Private::FTaskBase::Init
                    (pFVar17,L"RemoveDependsNode_DeleteNodes",Default,None,None);
          pFVar17[1]._padding_ = (longlong)local_e8;
          pFVar17->_padding_ =
               (longlong)
               &UE::Tasks::Private::
                TExecutableTask<`FAssetRegistryState::RemoveDependsNodes'::`16'::<lambda_3>_>::
                _vftable_;
          pFVar13 = pFVar17;
        }
        if (pFVar16 != (FTaskBase *)0x0) {
          if (((pFVar13->NumLocks == (atomic<unsigned_int>)0x0) ||
              (0x7fffffff < (uint)pFVar13->NumLocks)) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("NumLocks.load(std::memory_order_relaxed) >= NumInitialLocks && NumLocks.load(std::memory_order_relaxed) < ExecutionFlag"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                                  ,0xe3,
                                  L"Prerequisites can be added only before the task is launched"),
             bVar21)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          LOCK();
          paVar1 = &pFVar13->NumLocks;
          aVar3 = *paVar1;
          *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + 1);
          UNLOCK();
          if ((0x7fffffff < (int)aVar3 + 1U) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("PrevNumLocks + 1 < ExecutionFlag",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                                  ,0xea,L"Max number of task prerequisites reached: %d"), bVar21)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          bVar21 = UE::Tasks::Private::FTaskBase::AddSubsequent(pFVar16,pFVar13);
          if (bVar21) {
            LOCK();
            pFVar16->RefCount = (atomic<unsigned_int>)((int)pFVar16->RefCount + 1);
            UNLOCK();
            UE::Tasks::Private::FTaskBase::
            FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Push
                      (&pFVar13->Prerequisites,pFVar16);
          }
          else {
            LOCK();
            pFVar13->NumLocks = (atomic<unsigned_int>)((int)pFVar13->NumLocks + -1);
            UNLOCK();
          }
        }
        UE::Tasks::Private::FTaskBase::TryLaunch(pFVar13,0x100);
        pFVar17 = pFVar13;
      }
      this->NumDependsNodes = this->NumDependsNodes + (local_b4 - local_e8._8_4_);
      if (pFVar14 != (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::Wait(pFVar14);
      }
      if (pFVar17 == (FTaskBase *)0x0) {
        bVar21 = local_e8._8_4_ != local_b4;
      }
      else {
        UE::Tasks::Private::FTaskBase::Wait(pFVar17);
        bVar21 = local_e8._8_4_ != local_b4;
        LOCK();
        paVar1 = &pFVar17->RefCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (**(code **)pFVar17->_padding_)(pFVar17,1);
        }
      }
      if (pFVar14 != (FTaskBase *)0x0) {
        LOCK();
        paVar1 = &pFVar14->RefCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (**(code **)pFVar14->_padding_)(pFVar14,1);
        }
      }
      if (pFVar16 != (FTaskBase *)0x0) {
        LOCK();
        paVar1 = &pFVar16->RefCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (**(code **)pFVar16->_padding_)(pFVar16,1);
        }
      }
      local_50 = 0;
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
      }
      TSparseArray<TSparseSetElement<TTuple<FDependsNode_*,TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FDependsNode_*,TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98);
      local_a0 = 0;
      if (local_a8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8);
      }
      TSparseArray<TSparseSetElement<FDependsNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FDependsNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FDependsNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_e8);
      return bVar21;
    }
    lVar5 = *(longlong *)&pTVar9->Elements;
    pFVar20 = (FName *)(lVar5 + (longlong)TStack_158.CurrentBitIndex * 0x28);
    local_1a0.PackageName = *pFVar20;
    local_1a0.PrimaryAssetType.Name = pFVar20[1];
    pFVar20 = (FName *)(lVar5 + 0x10 + (longlong)TStack_158.CurrentBitIndex * 0x28);
    local_1a0.ObjectName = *pFVar20;
    local_1a0.ValueName = pFVar20[1];
    uVar19 = ::GetTypeHash(&local_1a0);
    if (*(int *)&(this->CachedDependsNodes).field_0x8 !=
        *(int *)&(this->CachedDependsNodes).field_0x34) {
      puVar4 = *(undefined1 **)&(this->CachedDependsNodes).field_0x40;
      puVar18 = &(this->CachedDependsNodes).field_0x38;
      if (puVar4 != (undefined1 *)0x0) {
        puVar18 = puVar4;
      }
      uVar19 = *(uint *)(puVar18 +
                        (ulonglong)(*(int *)&(this->CachedDependsNodes).field_0x48 - 1U & uVar19) *
                        4);
      if (uVar19 != 0xffffffff) {
        do {
          pFVar20 = (FName *)((longlong)(int)uVar19 * 0x30 + *(longlong *)&this->CachedDependsNodes)
          ;
          if ((((*pFVar20 == local_1a0.PackageName) &&
               (pFVar20[1] == local_1a0.PrimaryAssetType.Name)) &&
              (pFVar20[2] == local_1a0.ObjectName)) && (pFVar20[3] == local_1a0.ValueName)) {
            if (uVar19 != 0xffffffff) {
              pFVar13 = (FTaskBase *)(pFVar20 + 4);
              if (pFVar20 == (FName *)0x0) {
                pFVar13 = (FTaskBase *)0x0;
              }
              if (((pFVar13 != (FTaskBase *)0x0) &&
                  (local_16c._4_8_ = pFVar13->_padding_, local_16c._4_8_ != 0)) &&
                 (TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>::
                  Emplace<FDependsNode_*_const_&>
                            ((TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>
                              *)local_e8,(FDependsNode **)local_16c,(bool *)(local_16c + 4)),
                 *(int *)&(this->CachedDependsNodes).field_0x8 !=
                 *(int *)&(this->CachedDependsNodes).field_0x34)) {
                uVar19 = ::GetTypeHash(&local_1a0);
                TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
                ::RemoveImpl<FAssetIdentifier>
                          ((TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
                            *)&this->CachedDependsNodes,uVar19,&local_1a0);
              }
            }
            break;
          }
          uVar19 = pFVar20[5].ComparisonIndex.Value;
        } while (uVar19 != 0xffffffff);
      }
    }
    TStack_158.UnvisitedBitMask = TStack_158.UnvisitedBitMask & ~TStack_158._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_158);
  } while( true );
}

// RemovePackageData @ 142b168a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FAssetRegistryState::RemovePackageData(FAssetRegistryState *this,FName param_1)

{
  bool bVar1;
  undefined1 auStack_d8 [32];
  initializer_list<FAssetIdentifier> local_b8;
  FAssetIdentifier local_a8;
  TSet<FAssetIdentifier,DefaultKeyFuncs<FAssetIdentifier,0>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  local_88;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_a8.ObjectName.ComparisonIndex.Value = 0;
  local_a8.ObjectName.Number = 0;
  local_b8._First = &local_a8;
  local_a8.PrimaryAssetType.Name.ComparisonIndex.Value = 0;
  local_a8.PrimaryAssetType.Name.Number = 0;
  local_b8._Last = (FAssetIdentifier *)&local_88;
  local_a8.ValueName.ComparisonIndex.Value = 0;
  local_a8.ValueName.Number = 0;
  local_a8.PackageName = param_1;
  TSet<FAssetIdentifier,DefaultKeyFuncs<FAssetIdentifier,0>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  ::
  TSet<FAssetIdentifier,DefaultKeyFuncs<FAssetIdentifier,0>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
            (&local_88,&local_b8);
  bVar1 = RemovePackageData<DefaultKeyFuncs<FAssetIdentifier,0>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                    (this,&local_88);
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FAssetIdentifier>,TInlineSparseArrayAllocator<1,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<FAssetIdentifier>,TInlineSparseArrayAllocator<1,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            (&local_88.Elements);
  return bVar1;
}

// Reset @ 142b17430

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAssetRegistryState::Reset(FAssetRegistryState *this)

{
  undefined1 *puVar1;
  int *piVar2;
  TMap<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  TMap<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>
  *this_01;
  TMap<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>_>
  *this_02;
  TMap<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
  *this_03;
  TMap<FName,FAssetPackageData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>_>
  *this_04;
  uint uVar3;
  void *pvVar4;
  FDependsNode *this_05;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  undefined8 *puVar13;
  longlong lVar14;
  int iVar15;
  uint *puVar16;
  FScriptContainerElement *pFVar17;
  undefined1 local_res10 [8];
  FScriptContainerElement *local_res18;
  undefined1 local_res20 [8];
  undefined8 uStack_1a8;
  uint uStack_198;
  int iStack_194;
  int local_190;
  undefined4 uStack_18c;
  undefined4 uStack_184;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_160;
  int local_140;
  TMap<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
  *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  TMap<FName,FAssetPackageData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>_>
  *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined1 local_e8 [12];
  uint uStack_dc;
  TBitArray<FDefaultBitArrayAllocator> *local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  TRangedForIterator local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_88;
  undefined4 local_4c;
  
  iVar15 = (this->PreallocatedAssetDataBuffers).ArrayNum;
  if (iVar15 == 0) {
    local_180._padding_._4_4_ = 1;
    puVar1 = &(this->CachedAssets).Elements.field_0x10;
    local_180._padding_._0_4_ = 0;
    local_180.UnvisitedBitMask = 0xffffffff;
    local_180.CurrentBitIndex = 0;
    local_180.BaseBitIndex = 0;
    local_180.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if (*(int *)&(this->CachedAssets).Elements.field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_180);
    }
    unique0x10000d0a = CONCAT44(local_180._padding_._4_4_,(undefined4)local_180._padding_);
    uStack_d0 = CONCAT44(local_180.CurrentBitIndex,local_180.UnvisitedBitMask);
    local_c8 = CONCAT44(local_180._28_4_,local_180.BaseBitIndex);
    uStack_c0._4_4_ = uStack_184;
    uStack_c0._0_4_ =
         *(int *)&(this->CachedAssets).Elements.field_0x8 -
         *(int *)&(this->CachedAssets).Elements.field_0x34;
    local_d8 = local_180.Array;
    local_e8._0_8_ = this;
    pTVar8 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
             TConstSetBitIterator<FDefaultBitArrayAllocator>
                       (&local_88,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                        *(int *)&(this->CachedAssets).Elements.field_0x28);
    local_b8._padding_ = pTVar8->_padding_;
    local_b8._padding_ = (longlong)pTVar8->Array;
    local_b8._padding_._0_4_ = pTVar8->UnvisitedBitMask;
    local_b8._padding_._4_4_ = pTVar8->CurrentBitIndex;
    local_b8._padding_ = *(longlong *)&pTVar8->BaseBitIndex;
    local_b8._44_4_ = uStack_184;
    local_b8.InitialNum =
         *(int *)&(this->CachedAssets).Elements.field_0x8 -
         *(int *)&(this->CachedAssets).Elements.field_0x34;
    local_b8._padding_ = (longlong)this;
    bVar6 = TSparseArray<TSparseSetElement<FAssetData_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!=((TRangedForIterator *)local_e8,&local_b8);
    if (bVar6) {
      do {
        pvVar4 = *(void **)(*(longlong *)
                             &((TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
                                *)local_e8._0_8_)->Elements + (longlong)uStack_d0._4_4_ * 0x10);
        if (pvVar4 != (void *)0x0) {
          if (*(void **)((longlong)pvVar4 + 0x58) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)pvVar4 + 0x58));
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<1> **)((longlong)pvVar4 + 0x48));
          FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView
                    ((FAssetDataTagMapSharedView *)((longlong)pvVar4 + 0x38));
          ::operator_delete(pvVar4,0x68);
        }
        this->NumAssets = this->NumAssets + -1;
        uStack_d0 = CONCAT44(uStack_d0._4_4_,(uint)uStack_d0 & ~uStack_dc);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_e8 + 8));
        bVar6 = TSparseArray<TSparseSetElement<FAssetData_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForIterator::operator!=((TRangedForIterator *)local_e8,&local_b8);
      } while (bVar6);
    }
  }
  else {
    pFVar17 = (this->PreallocatedAssetDataBuffers).AllocatorInstance.Data;
    pFVar12 = pFVar17 + (longlong)iVar15 * 8;
    local_res18 = pFVar12;
    while( true ) {
      if ((this->PreallocatedAssetDataBuffers).ArrayNum != iVar15) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FAssetData_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar17 == pFVar12) break;
      lVar11 = *(longlong *)pFVar17;
      if (lVar11 != 0) {
        lVar14 = *(longlong *)(lVar11 + -8);
        if (lVar14 != 0) {
          puVar13 = (undefined8 *)(lVar14 * 0x68 + 0x48 + lVar11);
          do {
            lVar14 = lVar14 + -1;
            if ((void *)puVar13[-0xb] != (void *)0x0) {
              FMemory::Free((void *)puVar13[-0xb]);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)puVar13[-0xd]);
            FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView
                      ((FAssetDataTagMapSharedView *)(puVar13 + -0xf));
            puVar13 = puVar13 + -0xd;
          } while (lVar14 != 0);
        }
        operator_delete__((longlong *)(lVar11 + -8),*(longlong *)(lVar11 + -8) * 0x68 + 8);
        pFVar12 = local_res18;
      }
      pFVar17 = pFVar17 + 8;
    }
    piVar2 = &(this->PreallocatedAssetDataBuffers).ArrayMax;
    (this->PreallocatedAssetDataBuffers).ArrayNum = 0;
    if (*piVar2 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->PreallocatedAssetDataBuffers).AllocatorInstance,0,piVar2);
    }
    this->NumAssets = 0;
  }
  iVar15 = 0;
  if ((3 < (byte)LogAssetRegistry._0_1_) && (this->NumAssets != 0)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
  }
  iVar9 = (this->PreallocatedDependsNodeDataBuffers).ArrayNum;
  if (iVar9 == 0) {
    local_160.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->CachedDependsNodes).field_0x10
    ;
    local_160._padding_._0_4_ = 0;
    local_160._padding_._4_4_ = 1;
    local_160.UnvisitedBitMask = 0xffffffff;
    local_160.CurrentBitIndex = 0;
    local_160.BaseBitIndex = 0;
    if (*(int *)&(this->CachedDependsNodes).field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_160);
    }
    TStack_130._padding_ = CONCAT44(local_160._padding_._4_4_,(undefined4)local_160._padding_);
    TStack_130.Array = local_160.Array;
    TStack_130.UnvisitedBitMask = local_160.UnvisitedBitMask;
    TStack_130.CurrentBitIndex = local_160.CurrentBitIndex;
    TStack_130.BaseBitIndex = local_160.BaseBitIndex;
    TStack_130._28_4_ = local_160._28_4_;
    iVar9 = local_160.CurrentBitIndex;
    local_138 = &this->CachedDependsNodes;
    if (local_160.CurrentBitIndex < (local_160.Array)->NumBits) {
      do {
        this_05 = *(FDependsNode **)(*(longlong *)local_138 + 0x20 + (longlong)iVar9 * 0x30);
        if (this_05 != (FDependsNode *)0x0) {
          FDependsNode::~FDependsNode(this_05);
          ::operator_delete(this_05,0xa8);
          this->NumDependsNodes = this->NumDependsNodes + -1;
        }
        TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
        iVar9 = TStack_130.CurrentBitIndex;
      } while (TStack_130.CurrentBitIndex < (TStack_130.Array)->NumBits);
    }
  }
  else {
    pFVar17 = (this->PreallocatedDependsNodeDataBuffers).AllocatorInstance.Data;
    pFVar12 = pFVar17 + (longlong)iVar9 * 8;
    while( true ) {
      if ((this->PreallocatedDependsNodeDataBuffers).ArrayNum != iVar9) {
        local_res18 = (FScriptContainerElement *)((ulonglong)local_res18 & 0xffffffffffffff00);
        `TCheckedPointerIterator<FDependsNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res18);
      }
      if (pFVar17 == pFVar12) break;
      lVar11 = *(longlong *)pFVar17;
      if (lVar11 != 0) {
        lVar14 = *(longlong *)(lVar11 + -8);
        if (lVar14 != 0) {
          puVar13 = (undefined8 *)(lVar14 * 0xa8 + 0x70 + lVar11);
          do {
            lVar14 = lVar14 + -1;
            if ((void *)puVar13[-0x11] != (void *)0x0) {
              FMemory::Free((void *)puVar13[-0x11]);
            }
            pvVar4 = (void *)puVar13[-0x15];
            if (pvVar4 != (void *)0x0) {
              FMemory::Free(pvVar4);
            }
            if ((void *)puVar13[-0x19] != (void *)0x0) {
              FMemory::Free((void *)puVar13[-0x19]);
            }
            if ((void *)puVar13[-0x1b] != (void *)0x0) {
              FMemory::Free((void *)puVar13[-0x1b]);
            }
            if ((void *)puVar13[-0x1d] != (void *)0x0) {
              FMemory::Free((void *)puVar13[-0x1d]);
            }
            if ((void *)puVar13[-0x1f] != (void *)0x0) {
              FMemory::Free((void *)puVar13[-0x1f]);
            }
            puVar13 = puVar13 + -0x15;
          } while (lVar14 != 0);
        }
        operator_delete__((longlong *)(lVar11 + -8),*(longlong *)(lVar11 + -8) * 0xa8 + 8);
      }
      pFVar17 = pFVar17 + 8;
    }
    (this->PreallocatedDependsNodeDataBuffers).ArrayNum = 0;
    if ((this->PreallocatedDependsNodeDataBuffers).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->PreallocatedDependsNodeDataBuffers).AllocatorInstance,0,
                 &(this->PreallocatedDependsNodeDataBuffers).ArrayMax);
    }
    this->NumDependsNodes = 0;
  }
  if ((this->NumDependsNodes != 0) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3136563660776800123>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistryState.cpp"
                         ,0x85,"NumDependsNodes == 0"), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = (this->PreallocatedPackageDataBuffers).ArrayNum;
  uVar10 = (ulonglong)(int)uVar7;
  if (uVar7 == 0) {
    local_110 = &this->CachedPackageData;
    iVar9 = *(int *)&(this->CachedPackageData).field_0x28;
    TStack_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->CachedPackageData).field_0x10
    ;
    uVar7 = 1;
    TStack_108.BaseBitIndex = iVar15;
    TStack_108.CurrentBitIndex = 0;
    if (iVar9 != 0) {
      puVar16 = *(uint **)&(this->CachedPackageData).field_0x20;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)TStack_108.Array;
      }
      uVar3 = *puVar16;
      while (uVar3 == 0) {
        lVar11 = (longlong)iVar15;
        TStack_108.BaseBitIndex = TStack_108.BaseBitIndex + 0x20;
        iVar15 = iVar15 + 1;
        TStack_108.CurrentBitIndex = iVar9;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_142b17aaf;
        uVar3 = puVar16[lVar11 + 1];
      }
      uVar7 = -uVar3 & uVar3;
      uVar10 = (ulonglong)uVar7 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_140 = (int)lVar11;
      TStack_108.CurrentBitIndex = TStack_108.BaseBitIndex + -1 + local_140;
      if (iVar9 < TStack_108.CurrentBitIndex) {
        TStack_108.CurrentBitIndex = iVar9;
      }
    }
LAB_142b17aaf:
    uStack_1a8 = CONCAT44(uVar7,iVar15);
    TStack_108._padding_ = uStack_1a8;
    TStack_108._28_4_ = local_4c;
    TStack_108.UnvisitedBitMask = 0xffffffff;
    iVar15 = TStack_108.CurrentBitIndex;
    if (TStack_108.CurrentBitIndex < iVar9) {
      do {
        pvVar4 = *(void **)(*(longlong *)local_110 + 8 + (longlong)iVar15 * 0x18);
        if (pvVar4 != (void *)0x0) {
          if (*(void **)((longlong)pvVar4 + 0x68) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)pvVar4 + 0x68));
          }
          *(undefined4 *)((longlong)pvVar4 + 0x60) = 0;
          if (*(void **)((longlong)pvVar4 + 0x58) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)pvVar4 + 0x58));
          }
          TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)((longlong)pvVar4 + 0x18));
          ::operator_delete(pvVar4,0xa0);
          this->NumPackageData = this->NumPackageData + -1;
        }
        TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
        iVar15 = TStack_108.CurrentBitIndex;
      } while (TStack_108.CurrentBitIndex < (TStack_108.Array)->NumBits);
    }
  }
  else {
    pFVar17 = (this->PreallocatedPackageDataBuffers).AllocatorInstance.Data;
    pFVar12 = pFVar17 + uVar10 * 8;
    while( true ) {
      if ((this->PreallocatedPackageDataBuffers).ArrayNum != (int)uVar10) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FAssetPackageData_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pFVar17 == pFVar12) break;
      lVar11 = *(longlong *)pFVar17;
      if (lVar11 != 0) {
        lVar14 = *(longlong *)(lVar11 + -8);
        if (lVar14 != 0) {
          puVar13 = (undefined8 *)(lVar14 * 0xa0 + 0x58 + lVar11);
          do {
            lVar14 = lVar14 + -1;
            if ((void *)puVar13[-0x12] != (void *)0x0) {
              FMemory::Free((void *)puVar13[-0x12]);
            }
            *(undefined4 *)(puVar13 + -0x13) = 0;
            pvVar4 = (void *)puVar13[-0x14];
            if (pvVar4 != (void *)0x0) {
              FMemory::Free(pvVar4);
            }
            TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)(puVar13 + -0x1c));
            puVar13 = puVar13 + -0x14;
          } while (lVar14 != 0);
        }
        operator_delete__((void *)(lVar11 + -8),*(longlong *)(lVar11 + -8) * 0xa0 + 8);
      }
      uVar10 = (ulonglong)uVar7;
      pFVar17 = pFVar17 + 8;
    }
    (this->PreallocatedPackageDataBuffers).ArrayNum = 0;
    if ((this->PreallocatedPackageDataBuffers).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->PreallocatedPackageDataBuffers).AllocatorInstance,0,
                 &(this->PreallocatedPackageDataBuffers).ArrayMax);
    }
    this->NumPackageData = 0;
  }
  if ((this->NumPackageData != 0) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3136563660776800098>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistryState.cpp"
                         ,0x9e,"NumPackageData == 0"), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  bVar6 = 1 < *(int *)&(this->CachedAssetsByPackageName).field_0x48;
  if (!bVar6) {
    TSet<TTuple<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
                      *)&this->CachedAssetsByPackageName);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->CachedAssetsByPackageName,0,
                    *(int *)&(this->CachedAssetsByPackageName).field_0x8);
  *(undefined4 *)&(this->CachedAssetsByPackageName).field_0x8 = 0;
  if (*(int *)&(this->CachedAssetsByPackageName).field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)&this->CachedAssetsByPackageName,0,
               (int *)&(this->CachedAssetsByPackageName).field_0xc);
  }
  *(undefined4 *)&(this->CachedAssetsByPackageName).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedAssetsByPackageName).field_0x34 = 0;
  iVar15 = *(int *)&(this->CachedAssetsByPackageName).field_0x2c;
  *(undefined4 *)&(this->CachedAssetsByPackageName).field_0x28 = 0;
  if ((iVar15 < 0) || (0x80 < iVar15)) {
    *(undefined4 *)&(this->CachedAssetsByPackageName).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CachedAssetsByPackageName).field_0x10
               ,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->CachedAssetsByPackageName).field_0x48 = 1;
    TSet<TTuple<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
              *)&this->CachedAssetsByPackageName);
  }
  this_00 = &this->CachedAssetsByPath;
  bVar6 = 1 < *(int *)&(this->CachedAssetsByPath).field_0x48;
  if (!bVar6) {
    TSet<TTuple<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->CachedAssetsByPath).field_0x8);
  *(undefined4 *)&(this->CachedAssetsByPath).field_0x8 = 0;
  if (*(int *)&(this->CachedAssetsByPath).field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)&(this->CachedAssetsByPath).field_0xc)
    ;
  }
  *(undefined4 *)&(this->CachedAssetsByPath).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedAssetsByPath).field_0x34 = 0;
  iVar15 = *(int *)&(this->CachedAssetsByPath).field_0x2c;
  *(undefined4 *)&(this->CachedAssetsByPath).field_0x28 = 0;
  if ((iVar15 < 0) || (0x80 < iVar15)) {
    *(undefined4 *)&(this->CachedAssetsByPath).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CachedAssetsByPath).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->CachedAssetsByPath).field_0x48 = 1;
    TSet<TTuple<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  this_01 = &this->CachedAssetsByClass;
  bVar6 = 1 < *(int *)&(this->CachedAssetsByClass).field_0x48;
  if (!bVar6) {
    TSet<TTuple<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)this_01);
  }
  TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_01,0,*(int *)&(this->CachedAssetsByClass).field_0x8);
  *(undefined4 *)&(this->CachedAssetsByClass).field_0x8 = 0;
  if (*(int *)&(this->CachedAssetsByClass).field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this_01,0,(int *)&(this->CachedAssetsByClass).field_0xc
              );
  }
  *(undefined4 *)&(this->CachedAssetsByClass).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedAssetsByClass).field_0x34 = 0;
  iVar15 = *(int *)&(this->CachedAssetsByClass).field_0x2c;
  *(undefined4 *)&(this->CachedAssetsByClass).field_0x28 = 0;
  if ((iVar15 < 0) || (0x80 < iVar15)) {
    *(undefined4 *)&(this->CachedAssetsByClass).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CachedAssetsByClass).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->CachedAssetsByClass).field_0x48 = 1;
    TSet<TTuple<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)this_01);
  }
  this_02 = &this->CachedClassesByTag;
  bVar6 = 1 < *(int *)&(this->CachedClassesByTag).field_0x48;
  if (!bVar6) {
    TSet<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                      *)this_02);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_02,0,*(int *)&(this->CachedClassesByTag).field_0x8);
  *(undefined4 *)&(this->CachedClassesByTag).field_0x8 = 0;
  if (*(int *)&(this->CachedClassesByTag).field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)this_02,0,(int *)&(this->CachedClassesByTag).field_0xc)
    ;
  }
  *(undefined4 *)&(this->CachedClassesByTag).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedClassesByTag).field_0x34 = 0;
  iVar15 = *(int *)&(this->CachedClassesByTag).field_0x2c;
  *(undefined4 *)&(this->CachedClassesByTag).field_0x28 = 0;
  if ((iVar15 < 0) || (0x80 < iVar15)) {
    *(undefined4 *)&(this->CachedClassesByTag).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CachedClassesByTag).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->CachedClassesByTag).field_0x48 = 1;
    TSet<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
              *)this_02);
  }
  this_03 = &this->CachedDependsNodes;
  bVar6 = 1 < *(int *)&(this->CachedDependsNodes).field_0x48;
  if (!bVar6) {
    TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
                      *)this_03);
  }
  *(undefined4 *)&(this->CachedDependsNodes).field_0x8 = 0;
  if (*(int *)&(this->CachedDependsNodes).field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)this_03,0,(int *)&(this->CachedDependsNodes).field_0xc)
    ;
  }
  *(undefined4 *)&(this->CachedDependsNodes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedDependsNodes).field_0x34 = 0;
  iVar15 = *(int *)&(this->CachedDependsNodes).field_0x2c;
  *(undefined4 *)&(this->CachedDependsNodes).field_0x28 = 0;
  if ((iVar15 < 0) || (0x80 < iVar15)) {
    *(undefined4 *)&(this->CachedDependsNodes).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CachedDependsNodes).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->CachedDependsNodes).field_0x48 = 1;
    TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
              *)this_03);
  }
  this_04 = &this->CachedPackageData;
  bVar6 = 1 < *(int *)&(this->CachedPackageData).field_0x48;
  if (!bVar6) {
    TSet<TTuple<FName,FAssetPackageData_*>,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,FAssetPackageData_*>,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>,FDefaultSetAllocator>
                      *)this_04);
  }
  *(undefined4 *)&(this->CachedPackageData).field_0x8 = 0;
  if (*(int *)&(this->CachedPackageData).field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_04,0,(int *)&(this->CachedPackageData).field_0xc);
  }
  *(undefined4 *)&(this->CachedPackageData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedPackageData).field_0x34 = 0;
  iVar15 = *(int *)&(this->CachedPackageData).field_0x2c;
  *(undefined4 *)&(this->CachedPackageData).field_0x28 = 0;
  if ((iVar15 < 0) || (0x80 < iVar15)) {
    *(undefined4 *)&(this->CachedPackageData).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CachedPackageData).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->CachedPackageData).field_0x48 = 1;
    TSet<TTuple<FName,FAssetPackageData_*>,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,FAssetPackageData_*>,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>,FDefaultSetAllocator>
              *)this_04);
  }
  bVar6 = 1 < (this->CachedAssets).HashSize;
  if (!bVar6) {
    TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>::
    UnhashElements(&this->CachedAssets);
  }
  iVar15 = *(int *)&(this->CachedAssets).Elements.field_0xc;
  *(undefined4 *)&(this->CachedAssets).Elements.field_0x8 = 0;
  if (iVar15 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this,0,(int *)&(this->CachedAssets).Elements.field_0xc)
    ;
  }
  *(undefined4 *)&(this->CachedAssets).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->CachedAssets).Elements.field_0x30 = 0xffffffff;
  iVar15 = *(int *)&(this->CachedAssets).Elements.field_0x2c;
  *(undefined4 *)&(this->CachedAssets).Elements.field_0x28 = 0;
  if ((iVar15 < 0) || (0x80 < iVar15)) {
    *(undefined4 *)&(this->CachedAssets).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CachedAssets).Elements.field_0x10,0);
  }
  if (bVar6) {
    (this->CachedAssets).HashSize = 1;
    TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>::Rehash
              (&this->CachedAssets);
  }
  return;
}

// ResolveRedirector @ 142b187b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDependsNode * __thiscall
FAssetRegistryState::ResolveRedirector
          (FAssetRegistryState *this,FDependsNode *param_1,
          TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
          *param_2,TMap<FDependsNode_*,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDependsNode_*,FDependsNode_*,0>_>
                   *param_3)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTuple<FDependsNode_*,FDependsNode_*> *pTVar5;
  FDependsNode *pFVar6;
  uint uVar7;
  undefined1 *puVar8;
  ForElementType<FSetElementId> FVar9;
  undefined1 *puVar10;
  undefined1 auStackY_148 [32];
  FDependsNode *local_118;
  FDependsNode *local_110;
  undefined1 local_108 [8];
  FName local_100;
  code **local_f8;
  FDependsNode *local_f0;
  code *local_e8;
  FDependsNode ***local_e0;
  code *local_d8;
  code ***local_d0;
  FDependsNode **local_c8;
  FDependsNode **local_c0;
  FDependsNode **local_b8;
  TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator> *local_b0
  ;
  FDependsNode **local_a8;
  FAssetRegistryState *local_a0;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [8];
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  uVar7 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  local_f0 = param_1;
  if (*(int *)&param_3->field_0x8 != *(int *)&param_3->field_0x34) {
    puVar8 = *(undefined1 **)&param_3->field_0x40;
    if (*(undefined1 **)&param_3->field_0x40 == (undefined1 *)0x0) {
      puVar8 = &param_3->field_0x38;
    }
    iVar4 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&param_3->field_0x48 - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
    if (iVar4 != -1) {
      do {
        if (*(FDependsNode **)(*(longlong *)param_3 + (longlong)iVar4 * 0x18) == param_1) {
          pTVar5 = TSet<TTuple<FDependsNode_*,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FDependsNode_*,FDependsNode_*,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<FDependsNode_*,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FDependsNode_*,FDependsNode_*,0>,FDefaultSetAllocator>
                           *)param_3,param_1);
          if ((pTVar5 == (TTuple<FDependsNode_*,FDependsNode_*> *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x288,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            pFVar6 = (FDependsNode *)(*pcVar2)();
            return pFVar6;
          }
          return *(FDependsNode **)&pTVar5->field_0x8;
        }
        iVar4 = *(int *)(*(longlong *)param_3 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  local_110 = (FDependsNode *)0x0;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_118 = param_1;
  do {
    FVar1 = (local_118->Identifier).PackageName;
    uVar7 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    if (local_98._8_4_ != local_64) {
      FVar9 = (ForElementType<FSetElementId>)local_60;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FVar9 = local_58;
      }
      for (iVar4 = *(int *)((longlong)FVar9 + (ulonglong)(local_50 - 1U & FVar1.Number + uVar7) * 4)
          ; iVar4 != -1; iVar4 = *(int *)(local_98._0_8_ + (longlong)iVar4 * 0x10 + 8)) {
        if (*(FName *)(local_98._0_8_ + (longlong)iVar4 * 0x10) == FVar1) goto LAB_142b189c1;
      }
    }
    local_100 = (local_118->Identifier).PackageName;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98,
               (FName *)local_108,(bool *)&local_100);
    FVar1 = (local_118->Identifier).PackageName;
    uVar7 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    if (*(int *)&(this->CachedAssetsByPackageName).field_0x8 !=
        *(int *)&(this->CachedAssetsByPackageName).field_0x34) {
      puVar8 = *(undefined1 **)&(this->CachedAssetsByPackageName).field_0x40;
      puVar10 = &(this->CachedAssetsByPackageName).field_0x38;
      if (puVar8 != (undefined1 *)0x0) {
        puVar10 = puVar8;
      }
      iVar4 = *(int *)(puVar10 +
                      (ulonglong)
                      (*(int *)&(this->CachedAssetsByPackageName).field_0x48 - 1U &
                      FVar1.Number + uVar7) * 4);
      if (iVar4 != -1) {
        do {
          if (*(FName *)(*(longlong *)&this->CachedAssetsByPackageName + (longlong)iVar4 * 0x28) ==
              FVar1) {
            if (iVar4 != -1) {
              local_b8 = &local_118;
              local_a8 = &local_110;
              local_e0 = &local_b8;
              local_f8 = &local_e8;
              local_d0 = &local_f8;
              local_e8 = UE::Core::Private::Function::
                         TFunctionRefCaller<`FAssetRegistryState::ResolveRedirector'::__l14::<lambda_1>,bool,FAssetData_const_*>
                         ::Call;
              local_d8 = UE::Core::Private::Function::
                         TFunctionRefCaller<`FAssetRegistryState::EnumerateAssetsByPackageName'::__l2::<lambda_1>,bool,FAssetData_*>
                         ::Call;
              local_b0 = param_2;
              local_a0 = this;
              EnumerateMutableAssetsByPackageName
                        (this,(local_118->Identifier).PackageName,
                         (TFunctionRef<bool___cdecl(FAssetData_*)> *)&local_d8);
              goto LAB_142b189b8;
            }
            break;
          }
          iVar4 = *(int *)(*(longlong *)&this->CachedAssetsByPackageName + 0x20 +
                          (longlong)iVar4 * 0x28);
        } while (iVar4 != -1);
      }
    }
    local_110 = local_118;
LAB_142b189b8:
    if (local_110 != (FDependsNode *)0x0) {
LAB_142b189c1:
      local_c8 = &local_f0;
      local_c0 = &local_110;
      TSet<TTuple<FDependsNode_*,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FDependsNode_*,FDependsNode_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FDependsNode_*_const_&,FDependsNode_*_const_&>_>
                ((TSet<TTuple<FDependsNode_*,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FDependsNode_*,FDependsNode_*,0>,FDefaultSetAllocator>
                  *)param_3,
                 (TPairInitializer<FDependsNode_*_const_&,FDependsNode_*_const_&> *)(local_108 + 4),
                 (bool *)&local_c8);
      pFVar6 = local_110;
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      iVar4 = SUB84(local_98._8_8_,4);
      local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
      if (iVar4 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
      }
      local_64 = 0;
      local_70 = 0;
      local_68 = 0xffffffff;
      if (0x80 < local_6c) {
        local_6c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
      }
      if (local_78 != (void *)0x0) {
        FMemory::Free(local_78);
      }
      if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._0_8_);
      }
      return pFVar6;
    }
  } while( true );
}

// Save @ 142b192e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FAssetRegistryState::Save
          (FAssetRegistryState *this,FArchive *param_1,FAssetRegistrySerializationOptions *param_2)

{
  TMap<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  uint uVar4;
  code *pcVar5;
  FAssetRegistryState *pFVar6;
  FAssetRegistrySerializationOptions *pFVar7;
  TMap<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
  *pTVar8;
  undefined1 uVar9;
  FAssetRegistryWriterOptions *pFVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  code **ppcVar16;
  char cVar17;
  uint uVar18;
  TTuple<FName,FAssetPackageData_*> *pTVar19;
  int iVar20;
  ForAnyElementType FVar21;
  ulong64 uVar22;
  undefined1 *puVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ForElementType<unsigned_int> FVar26;
  undefined1 *puVar27;
  uint uVar28;
  bool bVar29;
  undefined1 auStackY_8e8 [32];
  FIdentityFunctor local_898;
  char local_897;
  undefined1 local_896;
  undefined1 local_895;
  undefined1 local_894 [4];
  uint local_890 [2];
  ForAnyElementType local_888;
  undefined8 local_880;
  undefined1 local_878 [4];
  uint local_874;
  uint local_870;
  uint local_86c;
  ulong64 local_868;
  Type local_860;
  bool local_85c [4];
  FDependsNode *local_858;
  int local_850;
  FName local_84c;
  FName local_844;
  uint local_838;
  uint uStack_834;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_830;
  undefined4 local_828;
  uint uStack_824;
  uint uStack_820;
  undefined4 uStack_81c;
  TArray<TTuple<FName,FAssetPackageData_*>,TSizedDefaultAllocator<32>_> local_818;
  undefined8 local_808;
  FAssetRegistryState *local_800;
  FAssetRegistrySerializationOptions *local_7f8;
  TArray<FAssetData_*,TSizedDefaultAllocator<32>_> local_7f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_7e0;
  int local_7c0;
  undefined4 local_7bc;
  int local_7b8;
  undefined1 local_7b4 [20];
  undefined8 local_7a0;
  FDependsNode *local_798;
  longlong *local_790;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_788;
  TMap<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
  *local_768;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_760;
  undefined8 uStack_740;
  FDependsNode **local_738;
  int *local_730;
  TMap<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
  *local_728;
  longlong lStack_720;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  int local_700;
  undefined4 uStack_6fc;
  FScopedBootTiming local_6f8;
  FAssetRegistryWriter local_6d8;
  undefined1 local_1f8 [32];
  ForElementType<unsigned_int> local_1d8;
  uint local_1d0;
  int local_1cc;
  int local_1c8;
  int local_1c4;
  FScriptContainerElement local_1c0 [8];
  ForAnyElementType local_1b8;
  uint local_1b0;
  FSaveScratch local_1a8;
  TSparseArray<TSparseSetElement<TTuple<FDependsNode_*,FDependsNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_168;
  void *local_128;
  undefined4 local_120;
  code *local_118 [2];
  code *local_108 [3];
  code **local_f0;
  FOptions local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_8e8;
  bVar29 = CpuChannel->Enabled < 0;
  local_800 = this;
  local_7f8 = param_2;
  local_7b4._4_8_ = param_1;
  if (bVar29) {
    local_897 = '\0';
  }
  else {
    local_897 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2231,"FAssetRegistryState::Save",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistryState.cpp"
               ,0x8b7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2231);
  }
  cVar17 = !bVar29;
  FScopedBootTiming::FScopedBootTiming(&local_6f8,"FAssetRegistryState::Save");
  if (((param_1->field_0x28 & 1) != 0) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("!OriginalAr.IsLoading()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistryState.cpp"
                          ,0x8b9,L""), bVar29)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  if ((*(int *)&(this->CachedAssets).Elements.field_0x8 -
       *(int *)&(this->CachedAssets).Elements.field_0x34 != this->NumAssets) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("CachedAssets.Num() == NumAssets",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistryState.cpp"
                          ,0x8be,L""), bVar29)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  local_85c[0] = (bool)((byte)param_1->field_0x2b >> 4 & 1);
  local_860 = LatestVersion;
  FAssetRegistryVersion::SerializeVersion(param_1,&local_860);
  if ((int)local_860 < 0x10) {
    if ((param_1->field_0x28 & 1) != 0) {
      local_85c[0] = false;
    }
  }
  else {
    ::operator<<(param_1,local_85c);
  }
  pFVar10 = FAssetRegistryWriterOptions::FAssetRegistryWriterOptions
                      ((FAssetRegistryWriterOptions *)&local_e8,param_2);
  FAssetRegistryWriter::FAssetRegistryWriter(&local_6d8,pFVar10,param_1);
  FixedTagPrivate::FOptions::~FOptions(&local_e8);
  local_874 = *(int *)&(this->CachedAssets).Elements.field_0x8 -
              *(int *)&(this->CachedAssets).Elements.field_0x34;
  if (*(uint **)(local_6d8._padding_ + 8) < *(uint **)local_6d8._padding_ + 1) {
    if ((local_6d8._padding_._2_1_ & 1) == 0) {
      (**(code **)(local_6d8._padding_ + 0x188))(&local_6d8,&local_874,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_6d8,&local_874);
    }
  }
  else {
    local_874 = **(uint **)local_6d8._padding_;
    *(longlong *)local_6d8._padding_ = *(longlong *)local_6d8._padding_ + 4;
  }
  GetMutableAssetsSortedByObjectPath(this,&local_7f0);
  iVar20 = local_7f0.ArrayNum;
  pFVar2 = local_7f0.AllocatorInstance.Data + (longlong)iVar20 * 8;
  FVar21.Data = local_7f0.AllocatorInstance.Data;
  while( true ) {
    if (local_7f0.ArrayNum != iVar20) {
      local_896 = 0;
      `TCheckedPointerIterator<FAssetData_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_896);
    }
    if (FVar21.Data == pFVar2) break;
    FAssetData::SerializeForCacheWithTagsAndBundles
              (*(FAssetData **)FVar21.Data,(FArchive *)&local_6d8,
               `FAssetData::SerializeForCache<FAssetRegistryWriter_&>'::__l2::<lambda_1>::
               <lambda_invoker_cdecl>);
    FVar21.Data = FVar21.Data + 8;
  }
  if (local_7f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7f0.AllocatorInstance.Data);
  }
  local_7a0 = (**(code **)(*(longlong *)local_6d8._padding_ + 0x28))();
  local_868 = 0;
  if (*(ulong64 **)(local_6d8._padding_ + 8) < *(ulong64 **)local_6d8._padding_ + 1) {
    if ((local_6d8._padding_._2_1_ & 1) == 0) {
      (**(code **)(local_6d8._padding_ + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_6d8,&local_868);
    }
  }
  else {
    local_868 = **(ulong64 **)local_6d8._padding_;
    *(longlong *)local_6d8._padding_ = *(longlong *)local_6d8._padding_ + 8;
  }
  lVar11 = (**(code **)(*(longlong *)local_6d8._padding_ + 0x28))();
  pFVar6 = local_800;
  local_7b4._12_8_ = lVar11;
  if (param_2->bSerializeDependencies == false) {
    local_870 = 0;
    if (*(uint **)(local_6d8._padding_ + 8) < *(uint **)local_6d8._padding_ + 1) {
      if ((local_6d8._padding_._2_1_ & 1) == 0) {
        (**(code **)(local_6d8._padding_ + 0x188))(&local_6d8,&local_870,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_6d8,&local_870);
      }
    }
    else {
      local_870 = **(uint **)local_6d8._padding_;
      *(longlong *)local_6d8._padding_ = *(longlong *)local_6d8._padding_ + 4;
    }
LAB_142b19ea0:
    lVar13 = (**(code **)(*(longlong *)local_6d8._padding_ + 0x28))();
    local_868 = lVar13 - lVar11;
    (**(code **)(*(longlong *)local_6d8._padding_ + 0x1b8))(local_6d8._padding_,local_7a0);
    if (*(ulong64 **)(local_6d8._padding_ + 8) < *(ulong64 **)local_6d8._padding_ + 1) {
      if ((local_6d8._padding_._2_1_ & 1) == 0) {
        (**(code **)(local_6d8._padding_ + 0x188))(&local_6d8,&local_868,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_6d8,&local_868);
      }
    }
    else {
      local_868 = **(ulong64 **)local_6d8._padding_;
      *(longlong *)local_6d8._padding_ = *(longlong *)local_6d8._padding_ + 8;
    }
    lVar14 = (**(code **)(*(longlong *)local_6d8._padding_ + 0x28))();
    if ((lVar14 != lVar11) &&
       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("Ar.Tell() == DependencySectionStart",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistryState.cpp"
                            ,0x920,L""), bVar29)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    (**(code **)(*(longlong *)local_6d8._padding_ + 0x1b8))(local_6d8._padding_,lVar13);
    local_890[0] = 0;
    if (param_2->bSerializePackageData == false) {
      if (*(uint **)(local_6d8._padding_ + 8) < *(uint **)local_6d8._padding_ + 1) {
        if ((local_6d8._padding_._2_1_ & 1) == 0) {
          (**(code **)(local_6d8._padding_ + 0x188))(&local_6d8,local_890,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)&local_6d8,local_890);
        }
      }
      else {
        local_890[0] = **(uint **)local_6d8._padding_;
        *(longlong *)local_6d8._padding_ = *(longlong *)local_6d8._padding_ + 4;
      }
    }
    else {
      local_890[0] = *(int *)&(this->CachedPackageData).field_0x8 -
                     *(int *)&(this->CachedPackageData).field_0x34;
      if (*(uint **)(local_6d8._padding_ + 8) < *(uint **)local_6d8._padding_ + 1) {
        if ((local_6d8._padding_._2_1_ & 1) == 0) {
          (**(code **)(local_6d8._padding_ + 0x188))(&local_6d8,local_890,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)&local_6d8,local_890);
        }
      }
      else {
        local_890[0] = **(uint **)local_6d8._padding_;
        *(longlong *)local_6d8._padding_ = *(longlong *)local_6d8._padding_ + 4;
      }
      TSet<TTuple<FName,FAssetPackageData_*>,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>,FDefaultSetAllocator>
      ::Array((TSet<TTuple<FName,FAssetPackageData_*>,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>,FDefaultSetAllocator>
               *)&this->CachedPackageData,&local_818);
      AlgoImpl::
      IntroSortInternal<TTuple<FName,FAssetPackageData_*>,int,FIdentityFunctor,_FAssetRegistryState::Save_::__l51::<lambda_3>_>
                ((TTuple<FName,FAssetPackageData_*> *)local_818.AllocatorInstance.Data,
                 local_818.ArrayNum,local_898,(<lambda_3>)local_898);
      iVar20 = local_818.ArrayNum;
      pTVar19 = (TTuple<FName,FAssetPackageData_*> *)
                (local_818.AllocatorInstance.Data + (longlong)local_818.ArrayNum * 0x10);
      FVar21.Data = local_818.AllocatorInstance.Data;
      while( true ) {
        if (local_818.ArrayNum != iVar20) {
          `TCheckedPointerIterator<TTuple<FName,FAssetPackageData_*>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_878);
        }
        if ((TTuple<FName,FAssetPackageData_*> *)FVar21.Data == pTVar19) break;
        (**(code **)(local_6d8._padding_ + 0x178))(&local_6d8,FVar21.Data);
        FAssetPackageData::SerializeForCache
                  (*(FAssetPackageData **)
                    &((TTuple<FName,FAssetPackageData_*> *)FVar21.Data)->field_0x8,
                   (FArchive *)&local_6d8);
        FVar21.Data = FVar21.Data + 0x10;
      }
      if ((TTuple<FName,FAssetPackageData_*> *)local_818.AllocatorInstance.Data !=
          (TTuple<FName,FAssetPackageData_*> *)0x0) {
        FMemory::Free(local_818.AllocatorInstance.Data);
      }
    }
    bVar3 = param_1->field_0x29;
    FAssetRegistryWriter::~FAssetRegistryWriter(&local_6d8);
    FScopedBootTiming::~FScopedBootTiming(&local_6f8);
    if (cVar17 != '\0') {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return (bool)(~(bVar3 >> 1) & 1);
  }
  pTVar1 = &this->CachedDependsNodes;
  puVar27 = &(this->CachedDependsNodes).field_0x10;
  local_168._0_8_ = 0;
  local_168._8_8_ = 0;
  local_168._32_8_ = 0;
  local_168._40_4_ = 0;
  local_168._44_4_ = 0x80;
  local_168._48_4_ = 0xffffffff;
  local_168._52_4_ = 0;
  local_128 = (void *)0x0;
  local_120 = 0;
  local_888.Data = (FScriptContainerElement *)0x0;
  local_880 = 0;
  local_7e0._padding_._0_4_ = 0;
  local_7e0._padding_._4_4_ = 1;
  local_7e0.UnvisitedBitMask = 0xffffffff;
  local_7e0.CurrentBitIndex = 0;
  local_7e0.BaseBitIndex = 0;
  local_7e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar27;
  if (*(int *)&(local_800->CachedDependsNodes).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_7e0);
  }
  TStack_760._padding_ = CONCAT44(local_7e0._padding_._4_4_,(undefined4)local_7e0._padding_);
  local_700 = *(int *)&(pFVar6->CachedDependsNodes).field_0x8 -
              *(int *)&(pFVar6->CachedDependsNodes).field_0x34;
  uVar18 = *(uint *)&(pFVar6->CachedDependsNodes).field_0x28;
  TStack_760.CurrentBitIndex = local_7e0.CurrentBitIndex;
  TStack_760.UnvisitedBitMask = local_7e0.UnvisitedBitMask;
  TStack_760._28_4_ = local_7e0._28_4_;
  TStack_760.BaseBitIndex = local_7e0.BaseBitIndex;
  pTStack_718 = local_7e0.Array;
  iVar20 = (int)uVar18 >> 5;
  uVar28 = uVar18 & 0xffffffe0;
  uStack_740 = CONCAT44(uStack_6fc,local_700);
  TStack_760.Array = local_7e0.Array;
  local_768 = pTVar1;
  local_728 = pTVar1;
  lStack_720 = TStack_760._padding_;
  uStack_710 = TStack_760._16_8_;
  uStack_708 = TStack_760._24_8_;
  if (((int)uVar18 < 0) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar29)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  pFVar7 = local_7f8;
  uVar4 = *(uint *)&(this->CachedDependsNodes).field_0x28;
  if (uVar18 != uVar4) {
    puVar23 = *(undefined1 **)&(this->CachedDependsNodes).field_0x20;
    if (puVar23 == (undefined1 *)0x0) {
      puVar23 = puVar27;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar20 * 4);
    while (uVar18 == 0) {
      lVar11 = (longlong)iVar20;
      uVar28 = uVar28 + 0x20;
      iVar20 = iVar20 + 1;
      uVar18 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_142b197a3;
      uVar18 = *(uint *)(puVar23 + lVar11 * 4 + 4);
    }
    uVar15 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_7c0 = (int)lVar11;
    uVar18 = local_7c0 + -1 + uVar28;
    if ((int)uVar4 < (int)uVar18) {
      uVar18 = uVar4;
    }
  }
LAB_142b197a3:
  pTVar8 = local_768;
  if (*(int *)&local_768->field_0x8 - *(int *)&local_768->field_0x34 != (int)uStack_740) {
    local_895 = 0;
    `TSparseArray<TSparseSetElement<TTuple<FAssetIdentifier,FDependsNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_895);
  }
  if (((TStack_760.CurrentBitIndex != uVar18) ||
      (TStack_760.Array != (TBitArray<FDefaultBitArrayAllocator> *)puVar27)) || (pTVar8 != pTVar1))
  {
    local_858 = *(FDependsNode **)
                 (*(longlong *)pTVar8 + 0x20 + (longlong)TStack_760.CurrentBitIndex * 0x30);
    if (((((local_858->Identifier).PackageName == (FName)0x0) ||
         ((local_858->Identifier).ObjectName != (FName)0x0)) ||
        ((local_858->Identifier).ValueName != (FName)0x0)) &&
       ((pFVar7->bSerializeSearchableNameDependencies == false ||
        ((local_858->Identifier).ValueName == (FName)0x0)))) {
      if (pFVar7->bSerializeManageDependencies != false) {
        local_84c = (local_858->Identifier).PrimaryAssetType.Name;
        if (local_84c == (FName)0x0) {
          local_84c.ComparisonIndex.Value = 0;
          local_84c.Number = 0;
          local_844.ComparisonIndex.Value = 0;
          local_844.Number = 0;
        }
        else {
          local_844 = (local_858->Identifier).ObjectName;
        }
        local_808 = 0;
        if ((local_84c != (FName)0x0) && (local_844 != (FName)0x0)) goto LAB_142b19866;
      }
    }
    else {
LAB_142b19866:
      if ((local_888.Data <= (FScriptContainerElement *)&local_858) &&
         (((FScriptContainerElement *)&local_858 < local_888.Data + (longlong)local_880._4_4_ * 8 &&
          (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar29)))) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      if ((uint)local_880 == local_880._4_4_) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_888,(int *)((longlong)&local_880 + 4));
        local_880 = CONCAT44(local_880._4_4_,iVar20);
      }
      lVar11 = (longlong)(int)(uint)local_880;
      local_880 = CONCAT44(local_880._4_4_,(uint)local_880 + 1);
      *(FDependsNode **)(local_888.Data + lVar11 * 8) = local_858;
    }
    TStack_760.UnvisitedBitMask = TStack_760.UnvisitedBitMask & ~TStack_760._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_760);
    goto LAB_142b197a3;
  }
  AlgoImpl::
  IntroSortInternal<FDependsNode_*,int,FIdentityFunctor,_FAssetRegistryState::Save_::__l26::<lambda_1>_>
            ((FDependsNode **)local_888.Data,(uint)local_880,local_898,(<lambda_1>)local_898);
  cVar17 = local_897;
  uVar18 = (uint)local_880;
  uVar22 = (ulong64)(int)(uint)local_880;
  uVar15 = 0;
  local_86c = (uint)local_880;
  local_1f8._0_8_ = (FScriptContainerElement *)0x0;
  local_1f8._8_8_ = 0;
  local_1d8 = (ForElementType<unsigned_int>)0x0;
  local_1d0 = 0;
  local_1cc = 0x80;
  local_1c8 = -1;
  local_1c4 = 0;
  local_1b8.Data = (FScriptContainerElement *)0x0;
  local_1b0 = 0;
  if ((uint)local_880 == 0) goto LAB_142b19c35;
  if ((int)(uint)local_880 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum(uVar22);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_1f8,(uint)local_880);
  if (uVar18 < 4) {
    uVar18 = 1;
  }
  else {
    uVar24 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_7bc = (undefined4)lVar11;
    uVar18 = 1 << ((byte)lVar11 & 0x1f);
  }
  if ((local_1b0 == 0) || ((int)local_1b0 < (int)uVar18)) {
    local_1b0 = uVar18;
    if (local_1b8.Data != (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1b8,0,0,4);
    }
    if (uVar18 != 0) {
      uVar28 = uVar18;
      if (uVar18 < 2) {
        if (local_1b8.Data != (FScriptContainerElement *)0x0) {
          uVar28 = 0;
          goto LAB_142b19a3b;
        }
      }
      else {
LAB_142b19a3b:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1b8,0,uVar28,4);
      }
      if (0 < (int)uVar18) {
        uVar25 = (ulonglong)uVar18;
        uVar24 = uVar15;
        do {
          FVar21.Data = local_1c0;
          if (local_1b8.Data != (FScriptContainerElement *)0x0) {
            FVar21.Data = local_1b8.Data;
          }
          uVar12 = uVar24 & (longlong)(int)uVar18 - 1U;
          uVar24 = uVar24 + 1;
          *(undefined4 *)(FVar21.Data + uVar12 * 4) = 0xffffffff;
          uVar25 = uVar25 - 1;
        } while (uVar25 != 0);
      }
    }
    if (local_1b0 != 0) {
      pTStack_830 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1f8 + 0x10);
      local_838 = 0;
      uStack_834 = 1;
      uStack_824 = 0;
      uStack_820 = 0;
      uVar24 = uVar15;
      if (local_1d0 != 0) {
        FVar26 = (ForElementType<unsigned_int>)((longlong)local_1f8 + 0x10);
        if (local_1d8 != (ForElementType<unsigned_int>)0x0) {
          FVar26 = local_1d8;
        }
        uVar18 = *(uint *)FVar26;
        uVar25 = uVar15;
        while (uVar18 == 0) {
          uStack_820 = (int)uVar25 + 0x20;
          uVar25 = (ulonglong)uStack_820;
          iVar20 = (int)uVar24;
          local_838 = iVar20 + 1;
          uVar24 = (ulonglong)local_838;
          if ((int)((local_1d0 - 1) + ((int)(local_1d0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_838)
          goto LAB_142b19b5d;
          uVar18 = ((uint *)((longlong)FVar26 + 4))[iVar20];
        }
        uStack_834 = -uVar18 & uVar18;
        uVar24 = (ulonglong)uStack_834 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar24 != 0) {
          for (; uVar24 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_7b8 = (int)lVar11;
        uStack_824 = local_7b8 + -1 + uStack_820;
        uVar24 = (ulonglong)uStack_824;
        if ((int)uStack_824 <= (int)local_1d0) goto LAB_142b19b64;
LAB_142b19b5d:
        uVar24 = (ulonglong)local_1d0;
        uStack_824 = local_1d0;
      }
LAB_142b19b64:
      local_828 = 0xffffffff;
      local_790 = (longlong *)local_1f8;
      local_788._padding_ = CONCAT44(uStack_834,local_838);
      local_788.CurrentBitIndex = uStack_824;
      local_788.UnvisitedBitMask = 0xffffffff;
      local_788._28_4_ = uStack_81c;
      local_788.BaseBitIndex = uStack_820;
      local_788.Array = pTStack_830;
      if ((int)uVar24 < (int)local_1d0) {
        do {
          iVar20 = (int)uVar24;
          lVar11 = *local_790 + (longlong)iVar20 * 0x18;
          uVar24 = *(ulonglong *)(*local_790 + (longlong)iVar20 * 0x18);
          uVar18 = ((uint)(uVar24 >> 0x14) & 0xffff ^ (uint)(uVar24 >> 4)) * -0x7a143595;
          uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
          uVar18 = (uVar18 >> 0x10 ^ uVar18) & local_1b0 - 1;
          *(uint *)(lVar11 + 0x14) = uVar18;
          FVar21.Data = local_1c0;
          if (local_1b8.Data != (FScriptContainerElement *)0x0) {
            FVar21.Data = local_1b8.Data;
          }
          uVar24 = (longlong)(int)local_1b0 - 1U & (longlong)(int)uVar18;
          *(undefined4 *)(lVar11 + 0x10) = *(undefined4 *)(FVar21.Data + uVar24 * 4);
          *(int *)(FVar21.Data + uVar24 * 4) = iVar20;
          local_788.UnvisitedBitMask = local_788.UnvisitedBitMask & ~local_788._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_788);
          uVar24 = (ulonglong)(uint)local_788.CurrentBitIndex;
        } while (local_788.CurrentBitIndex < (local_788.Array)->NumBits);
      }
    }
  }
  uVar22 = local_880 & 0xffffffff;
LAB_142b19c35:
  iVar20 = (int)uVar22;
  pFVar2 = local_888.Data + (longlong)iVar20 * 8;
  FVar21.Data = local_888.Data;
  while( true ) {
    if ((int)uVar22 != iVar20) {
      local_894[0] = 0;
      `TCheckedPointerIterator<FDependsNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_894);
    }
    if (FVar21.Data == pFVar2) break;
    local_798 = *(FDependsNode **)FVar21.Data;
    local_738 = &local_798;
    local_850 = (int)uVar15;
    local_730 = &local_850;
    uVar15 = (ulonglong)(local_850 + 1);
    TSet<TTuple<FDependsNode_*,int>,TDefaultMapHashableKeyFuncs<FDependsNode_*,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FDependsNode_*_const_&,int_&&>_>
              ((TSet<TTuple<FDependsNode_*,int>,TDefaultMapHashableKeyFuncs<FDependsNode_*,int,0>,FDefaultSetAllocator>
                *)local_1f8,(TPairInitializer<FDependsNode_*_const_&,int_&&> *)local_7b4,
               (bool *)&local_738);
    uVar22 = local_880 & 0xffffffff;
    FVar21.Data = FVar21.Data + 8;
  }
  local_118[0] = (code *)0x0;
  local_f0 = FMemory::Malloc(0x20,8);
  this = local_800;
  *local_f0 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FAssetRegistryState::Save'::`26'::<lambda_2>,1,1>::
                       _vftable_;
  local_f0[1] = (code *)local_800;
  local_f0[2] = (code *)&local_168;
  local_f0[3] = (code *)local_1f8;
  if (local_f0 + 1 != (code **)0x0) {
    local_118[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FAssetRegistryState::Save'::__l26::<lambda_2>,int,FDependsNode_*,bool>
                   ::Call;
  }
  local_1a8.OutFlagBits.MaxBits = 0x80;
  local_1a8.SortInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.SortInfos.ArrayNum = 0;
  local_1a8.SortInfos.ArrayMax = 0;
  local_1a8.OutDependencies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.OutDependencies.ArrayNum = 0;
  local_1a8.OutDependencies.ArrayMax = 0;
  local_1a8.OutFlagBits.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_1a8.OutFlagBits.NumBits = 0;
  if (*(uint **)(local_6d8._padding_ + 8) < *(uint **)local_6d8._padding_ + 1) {
    if ((local_6d8._padding_._2_1_ & 1) == 0) {
      (**(code **)(local_6d8._padding_ + 0x188))(&local_6d8,&local_86c,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_6d8,&local_86c);
    }
  }
  else {
    local_86c = **(uint **)local_6d8._padding_;
    *(longlong *)local_6d8._padding_ = *(longlong *)local_6d8._padding_ + 4;
  }
  param_2 = local_7f8;
  iVar20 = (uint)local_880;
  uVar15 = (ulonglong)(int)(uint)local_880;
  pFVar2 = local_888.Data + uVar15 * 8;
  FVar21.Data = local_888.Data;
  while( true ) {
    if ((int)uVar15 != iVar20) {
      local_898 = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<FDependsNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_898);
    }
    if (FVar21.Data == pFVar2) break;
    FDependsNode::SerializeSave
              (*(FDependsNode **)FVar21.Data,(FArchive *)&local_6d8,
               (TUniqueFunction<int___cdecl(FDependsNode_*,bool)> *)local_118,&local_1a8,param_2);
    uVar15 = local_880 & 0xffffffff;
    FVar21.Data = FVar21.Data + 8;
  }
  if (local_1a8.OutFlagBits.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_1a8.OutFlagBits.AllocatorInstance.SecondaryData);
  }
  if (local_1a8.OutDependencies.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.OutDependencies.AllocatorInstance.Data);
  }
  if (local_1a8.SortInfos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.SortInfos.AllocatorInstance.Data);
  }
  if (local_118[0] != (code *)0x0) {
    ppcVar16 = local_118 + 2;
    if (local_f0 != (code **)0x0) {
      ppcVar16 = local_f0;
    }
    (**(code **)(*ppcVar16 + 0x10))();
  }
  local_1b0 = 0;
  if (local_1b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FDependsNode_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FDependsNode_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FDependsNode_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_1f8);
  if (local_888.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_888.Data);
  }
  local_120 = 0;
  if (local_128 != (void *)0x0) {
    FMemory::Free(local_128);
  }
  TSparseArray<TSparseSetElement<TTuple<FDependsNode_*,FDependsNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FDependsNode_*,FDependsNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_168);
  lVar11 = local_7b4._12_8_;
  param_1 = (FArchive *)local_7b4._4_8_;
  goto LAB_142b19ea0;
}

// Serialize @ 142b1cf00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FAssetRegistryState::Serialize
          (FAssetRegistryState *this,FArchive *param_1,FAssetRegistrySerializationOptions *param_2)

{
  bool bVar1;
  FAssetRegistryLoadOptions local_res10 [3];
  
  if ((param_1->field_0x28 & 4) != 0) {
    bVar1 = Save(this,param_1,param_2);
    return bVar1;
  }
  local_res10[0].bLoadDependencies = param_2->bSerializeDependencies;
  local_res10[0].bLoadPackageData = param_2->bSerializePackageData;
  local_res10[0].ParallelWorkers = 0;
  bVar1 = Load(this,param_1,local_res10,(Type *)0x0);
  return bVar1;
}

// SetAssetDatas @ 142b1de90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAssetRegistryState::SetAssetDatas
          (FAssetRegistryState *this,TArrayView<FAssetData,int> *param_1,
          FAssetRegistryLoadOptions *param_2)

{
  char cVar1;
  <lambda_5> local_res8;
  <lambda_1> local_98;
  <lambda_1> local_88;
  FAssetRegistryState *local_78;
  TArrayView<FAssetData,int> *local_70;
  FAssetRegistryState *local_68;
  TArrayView<FAssetData,int> *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  TUniqueFunction<void___cdecl(void)> local_38;
  
  if (this->NumAssets != 0) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
  }
  this->NumAssets = param_1->ArrayNum;
  local_98.__this = this;
  local_98.AssetDatas = param_1;
  local_88.__this = this;
  local_88.AssetDatas = param_1;
  local_78 = this;
  local_70 = param_1;
  local_68 = this;
  local_60 = param_1;
  if (param_2->ParallelWorkers < 2) {
    `FAssetRegistryState::SetAssetDatas'::__l2::<lambda_1>::operator()(&local_98);
    `FAssetRegistryState::SetAssetDatas'::__l2::<lambda_2>::operator()(&local_88);
    `FAssetRegistryState::SetAssetDatas'::__l2::<lambda_3>::operator()(&local_78);
    `FAssetRegistryState::SetAssetDatas'::__l2::<lambda_4>::operator()(&local_68);
  }
  else {
    local_res8.SetObjectPathCache = &local_98;
    local_38._0_8_ = 0;
    local_38._40_8_ = 0;
    Async<_FAssetRegistryState::SetAssetDatas_::__l29::<lambda_5>_>
              ((TFuture<void> *)local_48,TaskGraph,&local_res8,&local_38);
    local_res8.SetObjectPathCache = &local_88;
    local_38._0_8_ = 0;
    local_38._40_8_ = 0;
    Async<_FAssetRegistryState::SetAssetDatas_::__l29::<lambda_6>_>
              ((TFuture<void> *)local_58,TaskGraph,(<lambda_6> *)&local_res8,&local_38);
    `FAssetRegistryState::SetAssetDatas'::__l2::<lambda_3>::operator()(&local_78);
    `FAssetRegistryState::SetAssetDatas'::__l2::<lambda_4>::operator()(&local_68);
    if (local_48._0_8_ != 0) {
      do {
        cVar1 = (**(code **)(**(longlong **)(local_48._0_8_ + 0x60) + 0x20))
                          (*(longlong **)(local_48._0_8_ + 0x60),0xffffffff,0);
      } while (cVar1 == '\0');
    }
    if (local_58._0_8_ != 0) {
      do {
        cVar1 = (**(code **)(**(longlong **)(local_58._0_8_ + 0x60) + 0x20))
                          (*(longlong **)(local_58._0_8_ + 0x60),0xffffffff,0);
      } while (cVar1 == '\0');
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_58._8_8_);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_48._8_8_);
  }
  return;
}

// SetDependencies @ 142b1e0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
FAssetRegistryState::SetDependencies
          (FAssetRegistryState *this,FAssetIdentifier *param_1,
          TArrayView<FAssetDependency_const_,int> *param_2,EDependencyCategory param_3)

{
  FAssetDependency *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  TArrayView<FAssetDependency_const_,int> *pTVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FDependsNode *pFVar8;
  FDependsNode *pFVar9;
  ulonglong uVar10;
  FAssetDependency *pFVar11;
  ForAnyElementType FVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined1 auStack_e8 [32];
  uint local_c8;
  uint local_c0;
  undefined1 local_b8 [8];
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> local_b0;
  TArrayView<FAssetDependency_const_,int> *local_a0;
  FDependencyQuery local_98;
  FDependencyQuery local_78;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pFVar11 = param_2->DataPtr;
  pFVar1 = pFVar11 + param_2->ArrayNum;
  local_a0 = param_2;
  if (pFVar11 != pFVar1) {
    do {
      if ((pFVar11->Category & ~param_3) != None) {
        local_c8 = (uint)pFVar11->Category;
        local_c0 = (uint)param_3;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(Dependency.Category & ~Category)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistryState.cpp"
                           ,0x807,
                           L"Input dependency has category %d which is outside of the requested categories %d."
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar11 = pFVar11 + 1;
    } while (pFVar11 != pFVar1);
  }
  uVar6 = ::GetTypeHash(param_1);
  iVar7 = TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FAssetIdentifier>
                    ((TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
                      *)&this->CachedDependsNodes,uVar6,param_1);
  if (iVar7 != -1) {
    lVar13 = (longlong)iVar7 * 0x30 + *(longlong *)&this->CachedDependsNodes;
    puVar14 = (undefined8 *)(lVar13 + 0x20);
    if (lVar13 == 0) {
      puVar14 = (undefined8 *)0x0;
    }
    if ((puVar14 != (undefined8 *)0x0) &&
       (pFVar8 = (FDependsNode *)*puVar14, pFVar8 != (FDependsNode *)0x0)) {
      local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b0.ArrayNum = 0;
      local_b0.ArrayMax = 0;
      local_98.RequiredUnions.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0;
      local_98.RequiredUnions.ArrayNum = 0;
      local_98.RequiredUnions.ArrayMax = 1;
      local_98.Required = None;
      local_98.Excluded = None;
      FDependsNode::GetDependencies(pFVar8,&local_b0,All,&local_98);
      if (local_98.RequiredUnions.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
        FMemory::Free((void *)local_98.RequiredUnions.AllocatorInstance.SecondaryData);
      }
      FDependsNode::ClearDependencies(pFVar8,param_3);
      iVar7 = local_b0.ArrayNum;
      uVar10 = (ulonglong)local_b0.ArrayNum;
      pFVar2 = local_b0.AllocatorInstance.Data + uVar10 * 8;
      FVar12.Data = local_b0.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar10 != iVar7) {
          `TCheckedPointerIterator<FDependsNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_b8);
        }
        if (FVar12.Data == pFVar2) break;
        pFVar9 = *(FDependsNode **)FVar12.Data;
        local_78.RequiredUnions.ArrayMax = 1;
        local_78.RequiredUnions.AllocatorInstance.SecondaryData =
             (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0;
        local_78.RequiredUnions.ArrayNum = 0;
        local_78.Required = None;
        local_78.Excluded = None;
        bVar5 = FDependsNode::ContainsDependency(pFVar8,pFVar9,All,&local_78);
        if (local_78.RequiredUnions.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
          FMemory::Free((void *)local_78.RequiredUnions.AllocatorInstance.SecondaryData);
        }
        if (!bVar5) {
          FDependsNode::RemoveReferencer(pFVar9,pFVar8);
        }
        uVar10 = local_b0._8_8_ & 0xffffffff;
        FVar12.Data = FVar12.Data + 8;
      }
      if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.AllocatorInstance.Data);
      }
    }
  }
  pTVar4 = local_a0;
  iVar7 = (int)*(undefined8 *)&local_a0->ArrayNum;
  if (iVar7 != 0) {
    pFVar8 = CreateOrFindDependsNode(this,param_1,(bool *)0x0);
    pFVar11 = pTVar4->DataPtr;
    pFVar1 = pFVar11 + iVar7;
    for (; pFVar11 != pFVar1; pFVar11 = pFVar11 + 1) {
      pFVar9 = CreateOrFindDependsNode(this,&pFVar11->AssetId,(bool *)0x0);
      FDependsNode::AddDependency(pFVar8,pFVar9,pFVar11->Category,pFVar11->Properties);
      FDependsNode::AddReferencer(pFVar9,pFVar8);
    }
  }
  return;
}

// SetDependencyNodeSorting @ 142b1e360

void __thiscall
FAssetRegistryState::SetDependencyNodeSorting(FAssetRegistryState *this,bool param_1,bool param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FDependsNode *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  bool local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar13 = 0;
  puVar1 = &(this->CachedDependsNodes).field_0x10;
  iVar3 = *(int *)&(this->CachedDependsNodes).field_0x28;
  uVar6 = 1;
  iVar11 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->CachedDependsNodes).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar13;
      iVar11 = iVar11 + 0x20;
      iVar13 = iVar13 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_142b1e40d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = iVar11 + -1 + (int)lVar8;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_142b1e40d:
  uVar10 = *(uint *)&(this->CachedDependsNodes).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar13);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar11;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->CachedDependsNodes).field_0x8 -
                       *(int *)&(this->CachedDependsNodes).field_0x34);
  local_res10 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar5 = local_res10;
  uVar6 = *(uint *)&(this->CachedDependsNodes).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->CachedDependsNodes).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar13 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar13;
      uVar9 = uVar9 + 0x20;
      iVar13 = iVar13 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_142b1e510;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_142b1e510:
  while( true ) {
    if (*(int *)&(this->CachedDependsNodes).field_0x8 -
        *(int *)&(this->CachedDependsNodes).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FAssetIdentifier,FDependsNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    this_00 = *(FDependsNode **)
               (*(longlong *)&this->CachedDependsNodes + 0x20 +
               (longlong)TStack_60.CurrentBitIndex * 0x30);
    uVar6 = *(uint *)&this_00->field_0xa0;
    this_00->bAllowShrinking = 1;
    FDependsNode::SetIsDependencyListSorted(this_00,All,bVar5);
    FDependsNode::SetIsReferencersSorted(this_00,param_2);
    *(uint *)&this_00->field_0xa0 =
         ((uVar6 >> 6 & 0xff) << 6 ^ *(uint *)&this_00->field_0xa0) & 0x40 ^
         *(uint *)&this_00->field_0xa0;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// SetReferencers @ 142b20300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
FAssetRegistryState::SetReferencers
          (FAssetRegistryState *this,FAssetIdentifier *param_1,
          TArrayView<FAssetDependency_const_,int> *param_2,EDependencyCategory param_3)

{
  FAssetDependency *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  TArrayView<FAssetDependency_const_,int> *pTVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FDependsNode *pFVar8;
  FDependsNode *pFVar9;
  ulonglong uVar10;
  FAssetDependency *pFVar11;
  ForAnyElementType FVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined1 auStack_f8 [32];
  uint local_d8;
  uint local_d0;
  undefined1 local_c8 [8];
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> local_c0;
  FAssetIdentifier *local_b0;
  FAssetRegistryState *local_a8;
  TArrayView<FAssetDependency_const_,int> *local_a0;
  FDependencyQuery local_98;
  FDependencyQuery local_78;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar11 = param_2->DataPtr;
  pFVar1 = pFVar11 + param_2->ArrayNum;
  local_b0 = param_1;
  local_a8 = this;
  local_a0 = param_2;
  if (pFVar11 != pFVar1) {
    do {
      if ((pFVar11->Category & ~param_3) != None) {
        local_d0 = (uint)param_3;
        local_d8 = (uint)pFVar11->Category;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(Referencer.Category & ~Category)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistryState.cpp"
                           ,0x83a,
                           L"Input referencer has category %d which is outside of the requested categories %d."
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar11 = pFVar11 + 1;
    } while (pFVar11 != pFVar1);
  }
  uVar6 = ::GetTypeHash(param_1);
  iVar7 = TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FAssetIdentifier>
                    ((TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
                      *)&this->CachedDependsNodes,uVar6,param_1);
  if (iVar7 != -1) {
    lVar13 = (longlong)iVar7 * 0x30 + *(longlong *)&this->CachedDependsNodes;
    puVar14 = (undefined8 *)(lVar13 + 0x20);
    if (lVar13 == 0) {
      puVar14 = (undefined8 *)0x0;
    }
    if ((puVar14 != (undefined8 *)0x0) &&
       (pFVar8 = (FDependsNode *)*puVar14, pFVar8 != (FDependsNode *)0x0)) {
      local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c0.ArrayNum = 0;
      local_c0.ArrayMax = 0;
      local_98.RequiredUnions.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0;
      local_98.RequiredUnions.ArrayNum = 0;
      local_98.RequiredUnions.ArrayMax = 1;
      local_98.Required = None;
      local_98.Excluded = None;
      FDependsNode::GetReferencers(pFVar8,&local_c0,param_3,&local_98);
      if (local_98.RequiredUnions.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
        FMemory::Free((void *)local_98.RequiredUnions.AllocatorInstance.SecondaryData);
      }
      iVar7 = local_c0.ArrayNum;
      uVar10 = (ulonglong)local_c0.ArrayNum;
      pFVar2 = local_c0.AllocatorInstance.Data + uVar10 * 8;
      FVar12.Data = local_c0.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar10 != iVar7) {
          `TCheckedPointerIterator<FDependsNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_c8);
        }
        this = local_a8;
        if (FVar12.Data == pFVar2) break;
        pFVar9 = *(FDependsNode **)FVar12.Data;
        FDependsNode::RemoveDependency(pFVar9,pFVar8,param_3);
        local_78.RequiredUnions.AllocatorInstance.SecondaryData =
             (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0;
        local_78.RequiredUnions.ArrayNum = 0;
        local_78.RequiredUnions.ArrayMax = 1;
        local_78.Required = None;
        local_78.Excluded = None;
        bVar5 = FDependsNode::ContainsDependency(pFVar9,pFVar8,All,&local_78);
        if (local_78.RequiredUnions.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
          FMemory::Free((void *)local_78.RequiredUnions.AllocatorInstance.SecondaryData);
        }
        if (!bVar5) {
          FDependsNode::RemoveReferencer(pFVar8,pFVar9);
        }
        uVar10 = local_c0._8_8_ & 0xffffffff;
        FVar12.Data = FVar12.Data + 8;
      }
      param_1 = local_b0;
      if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.AllocatorInstance.Data);
        param_1 = local_b0;
      }
    }
  }
  pTVar4 = local_a0;
  iVar7 = (int)*(undefined8 *)&local_a0->ArrayNum;
  if (iVar7 != 0) {
    pFVar8 = CreateOrFindDependsNode(this,param_1,(bool *)0x0);
    pFVar11 = pTVar4->DataPtr;
    pFVar1 = pFVar11 + iVar7;
    for (; pFVar11 != pFVar1; pFVar11 = pFVar11 + 1) {
      pFVar9 = CreateOrFindDependsNode(this,&pFVar11->AssetId,(bool *)0x0);
      FDependsNode::AddDependency(pFVar9,pFVar8,pFVar11->Category,pFVar11->Properties);
      FDependsNode::AddReferencer(pFVar8,pFVar9);
    }
  }
  return;
}

// SetTagsOnExistingAsset @ 142b20c00

void __thiscall
FAssetRegistryState::SetTagsOnExistingAsset
          (FAssetRegistryState *this,FAssetData *param_1,FAssetDataTagMap *param_2)

{
  FAssetDataTagMapSharedView *this_00;
  TMap<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>_>
  *this_01;
  undefined1 *puVar1;
  code *pcVar2;
  void *pvVar3;
  bool bVar4;
  uint uVar5;
  FNumberedPair *pFVar6;
  FValueId *pFVar7;
  FString *pFVar8;
  FAssetDataTagMapSharedView *pFVar9;
  FName *pFVar10;
  FName FVar11;
  undefined1 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  int local_res20 [2];
  FTopLevelAssetPath local_a8;
  TKeyInitializer<FName_const_&> local_98;
  FAssetDataTagMapSharedView local_90;
  FName local_88;
  FValueId local_80;
  FNumberedPair local_78;
  FAssetDataTagMap *local_68;
  undefined8 uStack_60;
  FSparseArrayAllocationInfo local_58;
  
  this_00 = &param_1->TagsAndValues;
  if ((*(byte *)&(param_1->TagsAndValues).field0_0x0 & 1) == 0) {
    if ((this_00->field0_0x0).Loose == (FAssetDataTagMap *)0x0) goto LAB_142b20cbc;
    uVar5 = (uint)((this_00->field0_0x0).Loose)->_padding_;
  }
  else {
    uVar5 = (uint)(param_1->TagsAndValues).field0_0x0.Fixed.Num;
  }
  uVar14 = 0;
  if (uVar5 != 0) {
    do {
      if (((this_00->field0_0x0).Loose == (FAssetDataTagMap *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("View.Bits != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\AssetRegistry\\AssetDataTagMap.h"
                             ,0x1a6,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((*(byte *)&this_00->field0_0x0 & 1) == 0) {
        FVar11 = *(FName *)(((this_00->field0_0x0).Loose)->_padding_ + uVar14 * 0x18);
      }
      else {
        pFVar6 = FixedTagPrivate::FMapHandle::At((FMapHandle *)this_00,&local_78,(uint)uVar14);
        FVar11 = pFVar6->Key;
        local_80 = pFVar6->Value;
        local_88 = FVar11;
      }
      TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::Find
                ((TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess> *)param_2,
                 FVar11);
      uVar13 = (uint)uVar14 + 1;
      uVar14 = (ulonglong)uVar13;
    } while (uVar13 != uVar5);
  }
LAB_142b20cbc:
  uStack_60 = (ulonglong)uStack_60._4_4_ << 0x20;
  lVar15 = uStack_60;
  uStack_60._0_4_ = 0;
  iVar16 = (int)uStack_60;
  local_68 = param_2;
  uStack_60 = lVar15;
  do {
    if ((iVar16 < 0) || ((int)param_2->_padding_ <= iVar16)) {
      pFVar9 = FAssetDataTagMapSharedView::FAssetDataTagMapSharedView(&local_90,param_2);
      FAssetDataTagMapSharedView::operator=(this_00,pFVar9);
      FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_90);
      return;
    }
    if ((iVar16 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_a8.AssetName = *(FName *)(param_2->_padding_ + (longlong)iVar16 * 0x18);
    if ((*(byte *)&this_00->field0_0x0 & 1) == 0) {
      pFVar8 = (FString *)0x0;
      if ((this_00->field0_0x0).Loose != (FAssetDataTagMap *)0x0) {
        pFVar8 = TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::Find
                           ((TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess> *)
                            (this_00->field0_0x0).Loose,local_a8.AssetName);
      }
    }
    else {
      pFVar7 = FixedTagPrivate::FMapHandle::FindValue((FMapHandle *)this_00,local_a8.AssetName);
      if (pFVar7 == (FValueId *)0x0) {
        pFVar8 = (FString *)0x0;
      }
      else {
        pFVar8 = (FString *)
                 (((ulonglong)*(ushort *)&this_00->field0_0x0 & 0xfffffffffffffffc |
                  0xfffffffe00000000) << 0x1e | (ulonglong)(uint)*pFVar7);
      }
    }
    FVar11 = local_a8.AssetName;
    if (pFVar8 == (FString *)0x0) {
      this_01 = &this->CachedClassesByTag;
      uVar5 = ::GetTypeHash(local_a8.AssetName.ComparisonIndex.Value);
      uVar5 = FVar11.Number + uVar5;
      if (*(int *)&(this->CachedClassesByTag).field_0x8 !=
          *(int *)&(this->CachedClassesByTag).field_0x34) {
        puVar1 = *(undefined1 **)&(this->CachedClassesByTag).field_0x40;
        puVar12 = &(this->CachedClassesByTag).field_0x38;
        if (puVar1 != (undefined1 *)0x0) {
          puVar12 = puVar1;
        }
        uVar13 = *(uint *)(puVar12 +
                          (ulonglong)(*(int *)&(this->CachedClassesByTag).field_0x48 - 1U & uVar5) *
                          4);
        if (uVar13 != 0xffffffff) {
          do {
            pFVar10 = (FName *)((longlong)(int)uVar13 * 0x60 + *(longlong *)&this_01->field_0x0);
            if (*pFVar10 == local_a8.AssetName) {
              if (pFVar10 != (FName *)0x0) goto LAB_142b20ed7;
              break;
            }
            uVar13 = pFVar10[0xb].ComparisonIndex.Value;
          } while (uVar13 != 0xffffffff);
        }
      }
      local_98.Key = &local_a8.AssetName;
      TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AddUninitialized((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)this_01,&local_58);
      pvVar3 = local_58.Pointer;
      if (local_58.Pointer !=
          (TSparseSetElement<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>_>
           *)0x0) {
        TKeyInitializer<FName_const_&>::
        operator<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>_TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>
                  (&local_98,local_58.Pointer);
        *(undefined4 *)((longlong)pvVar3 + 0x58) = 0xffffffff;
      }
      local_res20[0] = local_58.Index;
      bVar4 = TSet<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
              ::TryReplaceExisting
                        ((TSet<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                          *)this_01,uVar5,pvVar3,local_res20,(bool *)0x0);
      lVar15 = (longlong)local_res20[0];
      if (!bVar4) {
        TSet<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
        ::RehashOrLink((TSet<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                        *)this_01,uVar5,pvVar3,local_res20[0]);
      }
      pFVar10 = (FName *)(lVar15 * 0x60 + *(longlong *)&this_01->field_0x0);
LAB_142b20ed7:
      TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::
      Emplace<FTopLevelAssetPath_const_&>
                ((TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>
                  *)(pFVar10 + 1),&local_a8,(bool *)&param_1->AssetClassPath);
    }
    iVar16 = iVar16 + 1;
  } while( true );
}

// Shrink @ 142b21c10

void __thiscall FAssetRegistryState::Shrink(FAssetRegistryState *this)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Shrink((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *)this);
  uVar5 = *(int *)&(this->CachedAssets).Elements.field_0x8 -
          *(int *)&(this->CachedAssets).Elements.field_0x34;
  if (uVar5 < 4) {
    iVar4 = 1;
  }
  else {
    uVar2 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar4 = 1 << ((byte)lVar3 & 0x1f);
  }
  piVar1 = &(this->CachedAssets).HashSize;
  if (((0 < (int)uVar5) && (*piVar1 < iVar4)) || (iVar4 < *piVar1)) {
    *piVar1 = iVar4;
    TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>::Rehash
              (&this->CachedAssets);
  }
  TSet<TTuple<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
  ::Shrink((TSet<TTuple<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
            *)&this->CachedAssetsByPackageName);
  ShrinkMultimap<FName,FAssetData_*>(&this->CachedAssetsByPath);
  ShrinkMultimap<FTopLevelAssetPath,FAssetData_*>(&this->CachedAssetsByClass);
  TSet<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::Shrink((TSet<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
            *)&this->CachedClassesByTag);
  TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
  ::Shrink((TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
            *)&this->CachedDependsNodes);
  TSet<TTuple<FName,FAssetPackageData_*>,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>,FDefaultSetAllocator>
  ::Shrink((TSet<TTuple<FName,FAssetPackageData_*>,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>,FDefaultSetAllocator>
            *)&this->CachedPackageData);
  return;
}

// UpdateAssetData @ 142b2b710

void __thiscall
FAssetRegistryState::UpdateAssetData(FAssetRegistryState *this,FAssetData *param_1,bool param_2)

{
  FAssetData *pFVar1;
  FAssetData *pFVar2;
  FCachedAssetKey local_18;
  
  pFVar2 = (FAssetData *)0x0;
  local_18.OuterPath.ComparisonIndex.Value = 0;
  local_18.OuterPath.Number = 0;
  local_18.ObjectName.ComparisonIndex.Value = 0;
  local_18.ObjectName.Number = 0;
  if (param_1 != (FAssetData *)0x0) {
    local_18.OuterPath = param_1->PackageName;
    local_18.ObjectName = param_1->AssetName;
  }
  pFVar1 = GetMutableAssetByObjectPath(this,&local_18);
  if (pFVar1 == (FAssetData *)0x0) {
    if (param_2) {
      pFVar1 = ::operator_new(0x68);
      if (pFVar1 != (FAssetData *)0x0) {
        pFVar2 = FAssetData::FAssetData(pFVar1,param_1);
      }
      AddAssetData(this,pFVar2);
    }
  }
  else {
    UpdateAssetData(this,pFVar1,param_1,(bool *)0x0);
  }
  return;
}

// UpdateAssetData @ 142b2b7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAssetRegistryState::UpdateAssetData(FAssetRegistryState *this,FAssetData *param_1,bool param_2)

{
  FAssetData *pFVar1;
  FAssetData *pFVar2;
  undefined1 auStack_b8 [32];
  FCachedAssetKey local_98;
  FAssetData local_88;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pFVar2 = (FAssetData *)0x0;
  local_98.OuterPath.ComparisonIndex.Value = 0;
  local_98.OuterPath.Number = 0;
  local_98.ObjectName.ComparisonIndex.Value = 0;
  local_98.ObjectName.Number = 0;
  if (param_1 != (FAssetData *)0x0) {
    local_98.OuterPath = param_1->PackageName;
    local_98.ObjectName = param_1->AssetName;
  }
  pFVar1 = GetMutableAssetByObjectPath(this,&local_98);
  if (pFVar1 == (FAssetData *)0x0) {
    if (param_2) {
      pFVar1 = ::operator_new(0x68);
      if (pFVar1 != (FAssetData *)0x0) {
        pFVar2 = FAssetData::FAssetData(pFVar1,param_1);
      }
      AddAssetData(this,pFVar2);
    }
  }
  else {
    pFVar2 = FAssetData::FAssetData(&local_88,param_1);
    UpdateAssetData(this,pFVar1,pFVar2,(bool *)0x0);
    if (local_88.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_88.ChunkIDs.AllocatorInstance.SecondaryData);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
    FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_88.TagsAndValues);
  }
  return;
}

// UpdateAssetData @ 142b2b8d0

/* WARNING: Removing unreachable block (ram,0x000142b2c328) */
/* WARNING: Removing unreachable block (ram,0x000142b2c331) */
/* WARNING: Removing unreachable block (ram,0x000142b2c351) */
/* WARNING: Removing unreachable block (ram,0x000142b2c34c) */
/* WARNING: Removing unreachable block (ram,0x000142b2c354) */
/* WARNING: Removing unreachable block (ram,0x000142b2c368) */
/* WARNING: Removing unreachable block (ram,0x000142b2c36b) */
/* WARNING: Removing unreachable block (ram,0x000142b2c38d) */
/* WARNING: Removing unreachable block (ram,0x000142b2c392) */
/* WARNING: Removing unreachable block (ram,0x000142b2c39b) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAssetRegistryState::UpdateAssetData
          (FAssetRegistryState *this,FAssetData *param_1,FAssetData *param_2,bool *param_3)

{
  TMap<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>_>
  *this_00;
  FAssetDataTagMapSharedView *this_01;
  ForElementType<FAssetData_*> FVar1;
  FScriptContainerElement *pFVar2;
  FAssetDataTagMap *this_02;
  undefined1 *puVar3;
  code *pcVar4;
  bool *pbVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  TTuple<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
  *pTVar11;
  FName FVar12;
  ForElementType<FAssetData_*> FVar13;
  TTuple<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_> *pTVar14;
  TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *pTVar15;
  TTuple<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_> *pTVar16;
  FNumberedPair *pFVar17;
  FValueId *pFVar18;
  FString *pFVar19;
  FAssetBundleData *pFVar20;
  FAssetBundleData *pFVar21;
  FNameEntryId FVar22;
  ForElementType<FAssetData_*> FVar23;
  FName *pFVar24;
  FAssetData *pFVar25;
  undefined1 *puVar26;
  uint uVar27;
  FName FVar28;
  ulonglong uVar29;
  TSparseSetElement<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>_>
  *pTVar30;
  FAssetDataTagMapSharedView *pFVar31;
  FNameEntryId FVar32;
  ulonglong uVar33;
  longlong lVar34;
  uint uVar35;
  ulonglong uVar36;
  FAssetData *local_res10;
  FAssetData *local_res18;
  bool *local_res20;
  FAssetData *local_130;
  FName local_128;
  FName FStack_120;
  int local_118 [2];
  FName local_110;
  FName local_108;
  FAssetData **local_100;
  FName local_f8;
  FTopLevelAssetPath local_f0;
  FName local_d8;
  FValueId local_d0;
  FName local_c8;
  FValueId local_c0;
  FSparseArrayAllocationInfo local_b8;
  FCachedAssetKey local_a8;
  FString local_98 [3];
  FNumberedPair local_68;
  FNumberedPair local_5c [2];
  
  FVar12.ComparisonIndex.Value = 0;
  FVar12.Number = 0;
  bVar7 = false;
  local_128.ComparisonIndex.Value = 0;
  local_128.Number = 0;
  uVar8 = 0;
  FStack_120.ComparisonIndex.Value = 0;
  FStack_120.Number = 0;
  FVar22.Value = uVar8;
  FVar32.Value = 0;
  if (param_1 != (FAssetData *)0x0) {
    local_128 = param_1->PackageName;
    FStack_120 = param_1->AssetName;
    FVar22 = FStack_120.ComparisonIndex.Value;
    FVar32.Value = local_128.ComparisonIndex.Value;
  }
  local_110.ComparisonIndex.Value = 0;
  local_110.Number = 0;
  local_108.ComparisonIndex.Value = 0;
  local_108.Number = 0;
  if (param_2 != (FAssetData *)0x0) {
    local_110 = param_2->PackageName;
    local_108 = param_2->AssetName;
  }
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  local_130 = param_1;
  if ((local_128 != local_110) || (FStack_120 != local_108)) {
    local_a8.OuterPath = local_128;
    local_a8.ObjectName = FStack_120;
    bVar7 = true;
    if (*(int *)&(this->CachedAssets).Elements.field_0x8 ==
        *(int *)&(this->CachedAssets).Elements.field_0x34) {
LAB_142b2ba22:
      if (1 < (byte)LogAssetRegistry._0_1_) {
        FAssetData::GetObjectPathString(param_1,local_98);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        if (local_98[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      uVar8 = ::GetTypeHash(FVar22);
      uVar27 = FStack_120.Number;
      uVar9 = ::GetTypeHash(FVar32);
      uVar9 = local_128.Number + uVar9;
      uVar8 = TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
              ::RemoveImpl<UE::AssetRegistry::Private::FCachedAssetKey>
                        (&this->CachedAssets,
                         uVar9 * 0x40 + uVar27 + uVar8 + (uVar9 >> 2) + 0x9e3779b9 ^ uVar9,&local_a8
                        );
      if ((int)uVar8 < 2) {
        if (uVar8 == 0) goto LAB_142b2ba22;
      }
      else {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumRemoved <= 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistryState.cpp"
                           ,0xcaf,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    this->NumAssets = this->NumAssets - uVar8;
  }
  if (param_1->PackageName != param_2->PackageName) {
    bVar7 = true;
    pTVar11 = TSet<TTuple<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
                      *)&this->CachedAssetsByPackageName,param_1->PackageName);
    FVar28 = (FName)&pTVar11->field_0x8;
    if (pTVar11 ==
        (TTuple<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
         *)0x0) {
      FVar28 = FVar12;
    }
    pFVar25 = *(FAssetData **)((longlong)FVar28 + 8);
    FVar12 = FVar28;
    if (pFVar25 != (FAssetData *)0x0) {
      FVar12 = (FName)pFVar25;
    }
    local_100 = (FAssetData **)FVar28;
    if ((ulonglong)FVar12 <= &local_130) {
      FVar12 = FVar28;
      if (pFVar25 != (FAssetData *)0x0) {
        FVar12 = (FName)pFVar25;
      }
      if ((&local_130 <
           (FAssetData **)
           ((longlong)(&(((FAssetData *)FVar12)->ChunkIDs).AllocatorInstance + -5) +
           (longlong)*(int *)((longlong)FVar28 + 0x14) * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar29 = 0;
    uVar8 = (((FName *)((longlong)FVar28 + 0x10))->ComparisonIndex).Value;
    if (uVar8 != 0) {
      if (*(FName *)((longlong)FVar28 + 8) != (FName)0x0) {
        FVar28 = *(FName *)((longlong)FVar28 + 8);
      }
      bVar6 = *(FAssetData **)FVar28 != local_130;
      pFVar25 = local_130;
      uVar33 = uVar29;
      uVar36 = uVar29;
      do {
        uVar27 = (uint)uVar33;
        uVar9 = uVar27;
        do {
          uVar29 = uVar29 + 1;
          uVar9 = uVar9 + 1;
          uVar33 = (ulonglong)uVar9;
          if ((longlong)(int)uVar8 <= (longlong)uVar29) break;
        } while (bVar6 == (*(FAssetData **)((longlong)FVar28 + uVar29 * 8) != pFVar25));
        if (bVar6 != false) {
          uVar35 = (uint)uVar36;
          if (uVar35 != uVar27) {
            memmove((FAssetData **)((longlong)FVar28 + (longlong)(int)uVar35 * 8),
                    (FAssetData **)((longlong)FVar28 + (longlong)(int)uVar27 * 8),
                    (longlong)(int)(uVar9 - uVar27) << 3);
            pFVar25 = local_130;
          }
          uVar36 = (ulonglong)(uVar35 + (uVar9 - uVar27));
        }
        bVar6 = (bool)(bVar6 ^ 1);
      } while ((longlong)uVar29 < (longlong)(int)uVar8);
      *(int *)(local_100 + 2) = (int)uVar36;
      param_2 = local_res18;
    }
    FVar12 = param_2->PackageName;
    uVar8 = ::GetTypeHash(FVar12.ComparisonIndex.Value);
    FVar13 = (ForElementType<FAssetData_*>)
             TMapBase<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
             ::FindOrAddImpl<FName_const_&>
                       ((TMapBase<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
                         *)&this->CachedAssetsByPackageName,uVar8 + FVar12.Number,
                        &param_2->PackageName);
    FVar1 = *(ForElementType<FAssetData_*> *)((longlong)FVar13 + 8);
    FVar23 = FVar13;
    if (FVar1 != (ForElementType<FAssetData_*>)0x0) {
      FVar23 = FVar1;
    }
    if ((ulonglong)FVar23 <= &local_130) {
      FVar23 = FVar13;
      if (FVar1 != (ForElementType<FAssetData_*>)0x0) {
        FVar23 = FVar1;
      }
      if ((&local_130 <
           (FAssetData **)((longlong)FVar23 + (longlong)*(int *)((longlong)FVar13 + 0x14) * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar10 = *(int *)((longlong)FVar13 + 0x10);
    if (iVar10 == *(int *)((longlong)FVar13 + 0x14)) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FAssetData_*>_>
                         (0x808,(ForElementType<FAssetData_*> *)FVar13,
                          (int *)((longlong)FVar13 + 0x14));
    }
    *(int *)((longlong)FVar13 + 0x10) = iVar10 + 1;
    if (*(ForElementType<FAssetData_*> *)((longlong)FVar13 + 8) != (ForElementType<FAssetData_*>)0x0
       ) {
      FVar13 = *(ForElementType<FAssetData_*> *)((longlong)FVar13 + 8);
    }
    *(FAssetData **)((longlong)FVar13 + (longlong)iVar10 * 8) = local_130;
  }
  if (param_1->PackagePath != param_2->PackagePath) {
    bVar7 = true;
    pTVar14 = TSet<TTuple<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->CachedAssetsByPath,param_1->PackagePath);
    pTVar15 = (TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *)&pTVar14->field_0x8;
    if (pTVar14 == (TTuple<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_> *)0x0) {
      pTVar15 = (TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *)0x0;
    }
    TArray<FAssetData_*,TSizedDefaultAllocator<32>_>::Remove(pTVar15,&local_130);
    FVar12 = param_2->PackagePath;
    uVar8 = ::GetTypeHash(FVar12.ComparisonIndex.Value);
    pTVar15 = TMapBase<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>
              ::FindOrAddImpl<FName_const_&>
                        ((TMapBase<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->CachedAssetsByPath,uVar8 + FVar12.Number,&param_2->PackagePath);
    pFVar2 = (pTVar15->AllocatorInstance).Data;
    if (((pFVar2 <= (FScriptContainerElement *)&local_130) &&
        ((FScriptContainerElement *)&local_130 < pFVar2 + (longlong)pTVar15->ArrayMax * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar10 = pTVar15->ArrayNum;
    if (iVar10 == pTVar15->ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar15->AllocatorInstance,&pTVar15->ArrayMax);
    }
    pTVar15->ArrayNum = iVar10 + 1;
    *(FAssetData **)((pTVar15->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_130;
  }
  if (((param_1->AssetClassPath).PackageName != (param_2->AssetClassPath).PackageName) ||
     ((param_1->AssetClassPath).AssetName != (param_2->AssetClassPath).AssetName)) {
    bVar7 = true;
    pTVar16 = TSet<TTuple<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->CachedAssetsByClass,&param_1->AssetClassPath);
    pTVar15 = (TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *)&pTVar16->field_0x10;
    if (pTVar16 ==
        (TTuple<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_> *)0x0) {
      pTVar15 = (TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *)0x0;
    }
    TArray<FAssetData_*,TSizedDefaultAllocator<32>_>::Remove(pTVar15,&local_130);
    FVar12 = (param_2->AssetClassPath).AssetName;
    uVar8 = ::GetTypeHash(FVar12.ComparisonIndex.Value);
    FVar28 = (param_2->AssetClassPath).PackageName;
    uVar9 = ::GetTypeHash(FVar28.ComparisonIndex.Value);
    uVar9 = uVar9 + FVar28.Number;
    pTVar15 = TMapBase<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>
              ::FindOrAddImpl<FTopLevelAssetPath_const_&>
                        ((TMapBase<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->CachedAssetsByClass,
                         (uVar9 >> 2) + uVar9 * 0x40 + -0x61c88647 + uVar8 + FVar12.Number ^ uVar9,
                         &param_2->AssetClassPath);
    pFVar2 = (pTVar15->AllocatorInstance).Data;
    if (((pFVar2 <= (FScriptContainerElement *)&local_130) &&
        ((FScriptContainerElement *)&local_130 < pFVar2 + (longlong)pTVar15->ArrayMax * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar10 = pTVar15->ArrayNum;
    if (iVar10 == pTVar15->ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar15->AllocatorInstance,&pTVar15->ArrayMax);
    }
    pTVar15->ArrayNum = iVar10 + 1;
    *(FAssetData **)((pTVar15->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_130;
  }
  this_01 = &param_2->TagsAndValues;
  pFVar31 = &param_1->TagsAndValues;
  bVar6 = ::operator==(pFVar31,this_01);
  if (!bVar6) {
    bVar7 = true;
    if ((*(byte *)&pFVar31->field0_0x0 & 1) == 0) {
      if ((pFVar31->field0_0x0).Loose != (FAssetDataTagMap *)0x0) {
        uVar8 = (uint)((pFVar31->field0_0x0).Loose)->_padding_;
        goto LAB_142b2bf54;
      }
    }
    else {
      uVar8 = (uint)(param_1->TagsAndValues).field0_0x0.Fixed.Num;
LAB_142b2bf54:
      uVar9 = 0;
      if (uVar8 != 0) {
        do {
          if (((pFVar31->field0_0x0).Loose == (FAssetDataTagMap *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("View.Bits != 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\AssetRegistry\\AssetDataTagMap.h"
                                 ,0x1a6,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((*(byte *)&pFVar31->field0_0x0 & 1) == 0) {
            FVar12 = *(FName *)(((pFVar31->field0_0x0).Loose)->_padding_ + (ulonglong)uVar9 * 0x18);
          }
          else {
            pFVar17 = FixedTagPrivate::FMapHandle::At((FMapHandle *)pFVar31,&local_68,uVar9);
            FVar12 = pFVar17->Key;
            local_d0 = pFVar17->Value;
            local_d8 = FVar12;
          }
          if ((*(byte *)&this_01->field0_0x0 & 1) == 0) {
            if ((this_01->field0_0x0).Loose != (FAssetDataTagMap *)0x0) {
              TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::Find
                        ((TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess> *)
                         (this_01->field0_0x0).Loose,FVar12);
            }
          }
          else {
            FixedTagPrivate::FMapHandle::FindValue((FMapHandle *)this_01,FVar12);
          }
          uVar9 = uVar9 + 1;
          param_1 = local_res10;
        } while (uVar9 != uVar8);
      }
    }
    pFVar31 = &param_2->TagsAndValues;
    if ((*(byte *)&pFVar31->field0_0x0 & 1) == 0) {
      if ((pFVar31->field0_0x0).Loose == (FAssetDataTagMap *)0x0) goto LAB_142b2c248;
      uVar8 = (uint)((pFVar31->field0_0x0).Loose)->_padding_;
    }
    else {
      uVar8 = (uint)(param_2->TagsAndValues).field0_0x0.Fixed.Num;
    }
    uVar29 = 0;
    local_100 = (FAssetData **)CONCAT44(local_100._4_4_,uVar8);
    param_2 = local_res18;
    if (uVar8 != 0) {
      do {
        pFVar19 = (FString *)0x0;
        if (((pFVar31->field0_0x0).Loose == (FAssetDataTagMap *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("View.Bits != 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\AssetRegistry\\AssetDataTagMap.h"
                               ,0x1a6,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(byte *)&pFVar31->field0_0x0 & 1) == 0) {
          local_f8 = *(FName *)(((pFVar31->field0_0x0).Loose)->_padding_ + uVar29 * 0x18);
        }
        else {
          pFVar17 = FixedTagPrivate::FMapHandle::At((FMapHandle *)pFVar31,local_5c,(uint)uVar29);
          local_f8 = pFVar17->Key;
          local_c0 = pFVar17->Value;
          local_c8 = local_f8;
        }
        if ((*(byte *)&(param_1->TagsAndValues).field0_0x0 & 1) == 0) {
          this_02 = (param_1->TagsAndValues).field0_0x0.Loose;
          if (this_02 != (FAssetDataTagMap *)0x0) {
            pFVar19 = TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::Find
                                ((TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>
                                  *)this_02,local_f8);
          }
        }
        else {
          pFVar18 = FixedTagPrivate::FMapHandle::FindValue
                              ((FMapHandle *)&param_1->TagsAndValues,local_f8);
          if (pFVar18 != (FValueId *)0x0) {
            pFVar19 = (FString *)
                      (((ulonglong)*(ushort *)&(param_1->TagsAndValues).field0_0x0 &
                        0xfffffffffffffffc | 0xfffffffe00000000) << 0x1e | (ulonglong)(uint)*pFVar18
                      );
          }
        }
        FVar12 = local_f8;
        if (pFVar19 == (FString *)0x0) {
          this_00 = &this->CachedClassesByTag;
          uVar9 = ::GetTypeHash(local_f8.ComparisonIndex.Value);
          uVar9 = FVar12.Number + uVar9;
          if (*(int *)&(this->CachedClassesByTag).field_0x8 !=
              *(int *)&(this->CachedClassesByTag).field_0x34) {
            puVar3 = *(undefined1 **)&(this->CachedClassesByTag).field_0x40;
            puVar26 = &(this->CachedClassesByTag).field_0x38;
            if (puVar3 != (undefined1 *)0x0) {
              puVar26 = puVar3;
            }
            uVar27 = *(uint *)(puVar26 +
                              (ulonglong)
                              (*(int *)&(this->CachedClassesByTag).field_0x48 - 1U & uVar9) * 4);
            if (uVar27 != 0xffffffff) {
              do {
                pFVar24 = (FName *)((longlong)(int)uVar27 * 0x60 + *(longlong *)&this_00->field_0x0)
                ;
                if (*pFVar24 == local_f8) {
                  if (pFVar24 != (FName *)0x0) goto LAB_142b2c218;
                  break;
                }
                uVar27 = pFVar24[0xb].ComparisonIndex.Value;
              } while (uVar27 != 0xffffffff);
            }
          }
          local_f0.AssetName = (FName)&local_f8;
          TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::AddUninitialized((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              *)this_00,&local_b8);
          pTVar30 = local_b8.Pointer;
          if (local_b8.Pointer ==
              (TSparseSetElement<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>_>
               *)0x0) {
            pTVar30 = (TSparseSetElement<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>_>
                       *)0x0;
          }
          else {
            TKeyInitializer<FName_const_&>::
            operator<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>_TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>
                      ((TKeyInitializer<FName_const_&> *)&local_f0.AssetName,local_b8.Pointer);
            *(undefined4 *)((longlong)pTVar30 + 0x58) = 0xffffffff;
          }
          local_118[0] = local_b8.Index;
          bVar6 = TSet<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                  ::TryReplaceExisting
                            ((TSet<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                              *)this_00,uVar9,pTVar30,local_118,(bool *)0x0);
          lVar34 = (longlong)local_118[0];
          if (!bVar6) {
            TSet<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
            ::RehashOrLink((TSet<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                            *)this_00,uVar9,pTVar30,local_118[0]);
          }
          pFVar24 = (FName *)(lVar34 * 0x60 + *(longlong *)&this_00->field_0x0);
          uVar8 = (uint)local_100;
LAB_142b2c218:
          TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::
          Emplace<FTopLevelAssetPath_const_&>
                    ((TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>
                      *)(pFVar24 + 1),&local_f0,(bool *)&param_1->AssetClassPath);
        }
        uVar9 = (uint)uVar29 + 1;
        uVar29 = (ulonglong)uVar9;
        param_2 = local_res18;
      } while (uVar9 != uVar8);
    }
  }
LAB_142b2c248:
  pbVar5 = local_res20;
  if (local_res20 == (bool *)0x0) goto LAB_142b2c2de;
  if ((((bVar7) || (param_1->AssetName != param_2->AssetName)) ||
      (param_1->PackageFlags != param_2->PackageFlags)) ||
     (bVar7 = FAssetData::HasSameChunkIDs(param_1,param_2), !bVar7)) {
LAB_142b2c2da:
    bVar7 = true;
  }
  else {
    pFVar20 = (param_1->TaggedAssetBundles).Object;
    pFVar21 = (param_2->TaggedAssetBundles).Object;
    if ((pFVar20 != (FAssetBundleData *)0x0) != (pFVar21 != (FAssetBundleData *)0x0))
    goto LAB_142b2c2da;
    if ((pFVar20 != (FAssetBundleData *)0x0) && (pFVar20 != pFVar21)) {
      pFVar20 = TSharedPtr<FAssetBundleData,1>::operator*<FAssetBundleData>
                          (&param_1->TaggedAssetBundles);
      pFVar21 = TSharedPtr<FAssetBundleData,1>::operator*<FAssetBundleData>
                          (&param_2->TaggedAssetBundles);
      iVar10 = (pFVar20->Bundles).ArrayNum;
      if ((iVar10 != (pFVar21->Bundles).ArrayNum) ||
         (bVar7 = CompareItems<FAssetBundleEntry,int>
                            ((FAssetBundleEntry *)(pFVar20->Bundles).AllocatorInstance.Data,
                             (FAssetBundleEntry *)(pFVar21->Bundles).AllocatorInstance.Data,iVar10),
         !bVar7)) goto LAB_142b2c2da;
    }
    bVar7 = false;
  }
  *pbVar5 = bVar7;
LAB_142b2c2de:
  FAssetData::operator=(param_1,param_2);
  if ((local_128 != local_110) || (FStack_120 != local_108)) {
    TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>::
    Emplace<FAssetData_*_const_&>
              (&this->CachedAssets,(FAssetData **)&local_f0.PackageName.Number,(bool *)&local_res10)
    ;
    this->NumAssets = this->NumAssets + 1;
  }
  return;
}

// UpdateAssetData @ 142b2c3d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAssetRegistryState::UpdateAssetData
          (FAssetRegistryState *this,FAssetData *param_1,FAssetData *param_2,bool *param_3)

{
  FAssetData *pFVar1;
  undefined1 auStack_a8 [32];
  FAssetData local_88;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pFVar1 = FAssetData::FAssetData(&local_88,param_2);
  UpdateAssetData(this,param_1,pFVar1,param_3);
  if (local_88.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_88.ChunkIDs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_88.TagsAndValues);
  return;
}

// UpdateAssetDataPackageFlags @ 142b2c460

bool __thiscall
FAssetRegistryState::UpdateAssetDataPackageFlags
          (FAssetRegistryState *this,FName param_1,uint param_2)

{
  undefined1 local_res18 [16];
  undefined1 *local_28;
  uint local_20;
  code *local_18;
  undefined1 **local_10;
  
  local_28 = local_res18;
  local_10 = &local_28;
  local_res18[0] = 0;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FAssetRegistryState::UpdateAssetDataPackageFlags'::__l2::<lambda_1>,bool,FAssetData_*>
             ::Call;
  local_20 = param_2;
  EnumerateMutableAssetsByPackageName
            (this,param_1,(TFunctionRef<bool___cdecl(FAssetData_*)> *)&local_18);
  return (bool)local_res18[0];
}

// FAssetRegistryState @ 142b7a740

FAssetRegistryState * __thiscall
FAssetRegistryState::FAssetRegistryState(FAssetRegistryState *this,FAssetRegistryState *param_1)

{
  *(undefined8 *)&(this->CachedAssets).Elements = 0;
  *(undefined8 *)&(this->CachedAssets).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CachedAssets).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CachedAssets).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CachedAssets).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedAssets).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedAssets).Elements.field_0x34 = 0;
  (this->CachedAssets).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CachedAssets).HashSize = 0;
  *(undefined8 *)&this->CachedAssetsByPackageName = 0;
  *(undefined8 *)&(this->CachedAssetsByPackageName).field_0x8 = 0;
  *(undefined8 *)&(this->CachedAssetsByPackageName).field_0x20 = 0;
  *(undefined4 *)&(this->CachedAssetsByPackageName).field_0x28 = 0;
  *(undefined4 *)&(this->CachedAssetsByPackageName).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedAssetsByPackageName).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedAssetsByPackageName).field_0x34 = 0;
  *(undefined8 *)&(this->CachedAssetsByPackageName).field_0x40 = 0;
  *(undefined4 *)&(this->CachedAssetsByPackageName).field_0x48 = 0;
  *(undefined8 *)&this->CachedAssetsByPath = 0;
  *(undefined8 *)&(this->CachedAssetsByPath).field_0x8 = 0;
  *(undefined8 *)&(this->CachedAssetsByPath).field_0x20 = 0;
  *(undefined4 *)&(this->CachedAssetsByPath).field_0x28 = 0;
  *(undefined4 *)&(this->CachedAssetsByPath).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedAssetsByPath).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedAssetsByPath).field_0x34 = 0;
  *(undefined8 *)&(this->CachedAssetsByPath).field_0x40 = 0;
  *(undefined4 *)&(this->CachedAssetsByPath).field_0x48 = 0;
  *(undefined8 *)&this->CachedAssetsByClass = 0;
  *(undefined8 *)&(this->CachedAssetsByClass).field_0x8 = 0;
  *(undefined8 *)&(this->CachedAssetsByClass).field_0x20 = 0;
  *(undefined4 *)&(this->CachedAssetsByClass).field_0x28 = 0;
  *(undefined4 *)&(this->CachedAssetsByClass).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedAssetsByClass).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedAssetsByClass).field_0x34 = 0;
  *(undefined8 *)&(this->CachedAssetsByClass).field_0x40 = 0;
  *(undefined4 *)&(this->CachedAssetsByClass).field_0x48 = 0;
  *(undefined8 *)&this->CachedClassesByTag = 0;
  *(undefined8 *)&(this->CachedClassesByTag).field_0x8 = 0;
  *(undefined8 *)&(this->CachedClassesByTag).field_0x20 = 0;
  *(undefined4 *)&(this->CachedClassesByTag).field_0x28 = 0;
  *(undefined4 *)&(this->CachedClassesByTag).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedClassesByTag).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedClassesByTag).field_0x34 = 0;
  *(undefined8 *)&(this->CachedClassesByTag).field_0x40 = 0;
  *(undefined4 *)&(this->CachedClassesByTag).field_0x48 = 0;
  *(undefined8 *)&this->CachedDependsNodes = 0;
  *(undefined8 *)&(this->CachedDependsNodes).field_0x8 = 0;
  *(undefined8 *)&(this->CachedDependsNodes).field_0x20 = 0;
  *(undefined4 *)&(this->CachedDependsNodes).field_0x28 = 0;
  *(undefined4 *)&(this->CachedDependsNodes).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedDependsNodes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedDependsNodes).field_0x34 = 0;
  *(undefined8 *)&(this->CachedDependsNodes).field_0x40 = 0;
  *(undefined4 *)&(this->CachedDependsNodes).field_0x48 = 0;
  *(undefined8 *)&this->CachedPackageData = 0;
  *(undefined8 *)&(this->CachedPackageData).field_0x8 = 0;
  *(undefined8 *)&(this->CachedPackageData).field_0x20 = 0;
  *(undefined4 *)&(this->CachedPackageData).field_0x28 = 0;
  *(undefined4 *)&(this->CachedPackageData).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedPackageData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedPackageData).field_0x34 = 0;
  *(undefined8 *)&(this->CachedPackageData).field_0x40 = 0;
  *(undefined4 *)&(this->CachedPackageData).field_0x48 = 0;
  (this->PreallocatedAssetDataBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreallocatedAssetDataBuffers).ArrayNum = 0;
  (this->PreallocatedAssetDataBuffers).ArrayMax = 0;
  (this->PreallocatedDependsNodeDataBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->PreallocatedDependsNodeDataBuffers).ArrayNum = 0;
  (this->PreallocatedDependsNodeDataBuffers).ArrayMax = 0;
  (this->PreallocatedPackageDataBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreallocatedPackageDataBuffers).ArrayNum = 0;
  (this->PreallocatedPackageDataBuffers).ArrayMax = 0;
  this->NumAssets = 0;
  this->NumDependsNodes = 0;
  this->NumPackageData = 0;
  this->bCookedGlobalAssetRegistryState = false;
  operator=(this,param_1);
  return this;
}

// FAssetRegistryState @ 142b7a940

FAssetRegistryState * __thiscall FAssetRegistryState::FAssetRegistryState(FAssetRegistryState *this)

{
  *(undefined8 *)&(this->CachedAssets).Elements = 0;
  *(undefined8 *)&(this->CachedAssets).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CachedAssets).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CachedAssets).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CachedAssets).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedAssets).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->CachedAssets).Elements.field_0x30 = 0xffffffff;
  (this->CachedAssets).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CachedAssets).HashSize = 0;
  *(undefined8 *)&this->CachedAssetsByPackageName = 0;
  *(undefined8 *)&(this->CachedAssetsByPackageName).field_0x8 = 0;
  *(undefined8 *)&(this->CachedAssetsByPackageName).field_0x20 = 0;
  *(undefined4 *)&(this->CachedAssetsByPackageName).field_0x28 = 0;
  *(undefined4 *)&(this->CachedAssetsByPackageName).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedAssetsByPackageName).field_0x34 = 0;
  *(undefined4 *)&(this->CachedAssetsByPackageName).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CachedAssetsByPackageName).field_0x40 = 0;
  *(undefined4 *)&(this->CachedAssetsByPackageName).field_0x48 = 0;
  *(undefined8 *)&this->CachedAssetsByPath = 0;
  *(undefined8 *)&(this->CachedAssetsByPath).field_0x8 = 0;
  *(undefined8 *)&(this->CachedAssetsByPath).field_0x20 = 0;
  *(undefined4 *)&(this->CachedAssetsByPath).field_0x28 = 0;
  *(undefined4 *)&(this->CachedAssetsByPath).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedAssetsByPath).field_0x34 = 0;
  *(undefined4 *)&(this->CachedAssetsByPath).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CachedAssetsByPath).field_0x40 = 0;
  *(undefined4 *)&(this->CachedAssetsByPath).field_0x48 = 0;
  *(undefined8 *)&this->CachedAssetsByClass = 0;
  *(undefined8 *)&(this->CachedAssetsByClass).field_0x8 = 0;
  *(undefined8 *)&(this->CachedAssetsByClass).field_0x20 = 0;
  *(undefined4 *)&(this->CachedAssetsByClass).field_0x28 = 0;
  *(undefined4 *)&(this->CachedAssetsByClass).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedAssetsByClass).field_0x34 = 0;
  *(undefined4 *)&(this->CachedAssetsByClass).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CachedAssetsByClass).field_0x40 = 0;
  *(undefined4 *)&(this->CachedAssetsByClass).field_0x48 = 0;
  *(undefined8 *)&this->CachedClassesByTag = 0;
  *(undefined8 *)&(this->CachedClassesByTag).field_0x8 = 0;
  *(undefined8 *)&(this->CachedClassesByTag).field_0x20 = 0;
  *(undefined4 *)&(this->CachedClassesByTag).field_0x28 = 0;
  *(undefined4 *)&(this->CachedClassesByTag).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedClassesByTag).field_0x34 = 0;
  *(undefined4 *)&(this->CachedClassesByTag).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CachedClassesByTag).field_0x40 = 0;
  *(undefined4 *)&(this->CachedClassesByTag).field_0x48 = 0;
  *(undefined8 *)&this->CachedDependsNodes = 0;
  *(undefined8 *)&(this->CachedDependsNodes).field_0x8 = 0;
  *(undefined8 *)&(this->CachedDependsNodes).field_0x20 = 0;
  *(undefined4 *)&(this->CachedDependsNodes).field_0x28 = 0;
  *(undefined4 *)&(this->CachedDependsNodes).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedDependsNodes).field_0x34 = 0;
  *(undefined4 *)&(this->CachedDependsNodes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CachedDependsNodes).field_0x40 = 0;
  *(undefined4 *)&(this->CachedDependsNodes).field_0x48 = 0;
  *(undefined8 *)&this->CachedPackageData = 0;
  *(undefined8 *)&(this->CachedPackageData).field_0x8 = 0;
  *(undefined8 *)&(this->CachedPackageData).field_0x20 = 0;
  *(undefined4 *)&(this->CachedPackageData).field_0x28 = 0;
  *(undefined4 *)&(this->CachedPackageData).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedPackageData).field_0x34 = 0;
  *(undefined4 *)&(this->CachedPackageData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CachedPackageData).field_0x40 = 0;
  *(undefined4 *)&(this->CachedPackageData).field_0x48 = 0;
  (this->PreallocatedAssetDataBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreallocatedAssetDataBuffers).ArrayNum = 0;
  (this->PreallocatedAssetDataBuffers).ArrayMax = 0;
  (this->PreallocatedDependsNodeDataBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->PreallocatedDependsNodeDataBuffers).ArrayNum = 0;
  (this->PreallocatedDependsNodeDataBuffers).ArrayMax = 0;
  (this->PreallocatedPackageDataBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreallocatedPackageDataBuffers).ArrayNum = 0;
  (this->PreallocatedPackageDataBuffers).ArrayMax = 0;
  this->NumAssets = 0;
  this->NumDependsNodes = 0;
  this->NumPackageData = 0;
  this->bCookedGlobalAssetRegistryState = false;
  return this;
}

