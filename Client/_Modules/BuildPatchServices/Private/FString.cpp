// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 2

// Join<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> @ 1431b4e00

FString * __cdecl
FString::Join<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
          (FString *__return_storage_ptr__,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1,wchar_t *param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FString *pFVar10;
  size_t sVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined1 *puVar17;
  int iVar18;
  uint *puVar19;
  undefined1 local_res8 [8];
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_res10;
  wchar_t *local_res18;
  int local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  puVar1 = &(param_1->Elements).field_0x10;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar16 = *(int *)&(param_1->Elements).field_0x28;
  bVar5 = true;
  iVar18 = 0;
  uVar8 = 1;
  iVar15 = 0;
  iVar9 = iVar18;
  if (iVar16 != 0) {
    puVar19 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar14 = *puVar19;
    iVar15 = 0;
    iVar18 = 0;
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar18;
      iVar15 = iVar15 + 0x20;
      iVar18 = iVar18 + 1;
      iVar9 = iVar16;
      if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_1431b4eae;
      uVar14 = puVar19[lVar12 + 1];
    }
    uVar8 = -uVar14 & uVar14;
    uVar3 = (ulonglong)uVar8 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res20 = (int)lVar12;
    iVar9 = iVar15 + -1 + local_res20;
    if (iVar16 < iVar9) {
      iVar9 = iVar16;
    }
  }
LAB_1431b4eae:
  uVar14 = *(uint *)&(param_1->Elements).field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar8,iVar18);
  TStack_70.CurrentBitIndex = iVar9;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar14 >> 5;
  TStack_70._28_4_ = iVar9;
  TStack_70.BaseBitIndex = iVar15;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  local_res10 = param_1;
  local_res18 = param_2;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar16 < (int)uVar14)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FString *)(*pcVar4)();
    return pFVar10;
  }
  pTVar6 = local_res10;
  uVar8 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar14 != uVar8) {
    puVar17 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar18 * 4);
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar18;
      uVar13 = uVar13 + 0x20;
      iVar18 = iVar18 + 1;
      uVar14 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_1431b4fb0;
      uVar14 = *(uint *)(puVar17 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar14 = (int)lVar12 + -1 + uVar13;
    if ((int)uVar8 < (int)uVar14) {
      uVar14 = uVar8;
    }
  }
LAB_1431b4fb0:
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_50) {
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar14) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (param_1 == pTVar6))
    break;
    puVar2 = (undefined8 *)
             (*(longlong *)&param_1->Elements + (longlong)TStack_70.CurrentBitIndex * 0x18);
    if (bVar5) {
      bVar5 = false;
    }
    else {
      sVar11 = wcslen(local_res18);
      AppendChars(__return_storage_ptr__,local_res18,(int)sVar11);
    }
    iVar15 = *(int *)(puVar2 + 1);
    iVar16 = iVar15 + -1;
    if (iVar15 == 0) {
      iVar16 = 0;
    }
    AppendChars(__return_storage_ptr__,(wchar_t *)*puVar2,iVar16);
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return __return_storage_ptr__;
}

// Join<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 14321c550

FString * __cdecl
FString::Join<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          wchar_t *param_2)

{
  int iVar1;
  bool bVar2;
  size_t sVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar1 = param_1->ArrayNum;
  bVar2 = true;
  pFVar4 = (param_1->AllocatorInstance).Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar5) break;
    if (bVar2) {
      bVar2 = false;
    }
    else {
      sVar3 = wcslen(param_2);
      AppendChars(__return_storage_ptr__,param_2,(int)sVar3);
    }
    iVar6 = *(int *)(pFVar4 + 8) + -1;
    if (*(int *)(pFVar4 + 8) == 0) {
      iVar6 = 0;
    }
    AppendChars(__return_storage_ptr__,*(wchar_t **)pFVar4,iVar6);
    pFVar4 = pFVar4 + 0x10;
  }
  return __return_storage_ptr__;
}

