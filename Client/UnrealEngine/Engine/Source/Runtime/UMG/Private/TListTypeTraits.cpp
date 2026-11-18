// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 3

// AddReferencedObjects<ITableRow> @ 14696f410

void __cdecl
TListTypeTraits<UObject_*,void>::AddReferencedObjects<ITableRow>
          (FReferenceCollector *param_1,
          TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *param_2,
          TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
          *param_3,TMap<ITableRow_const_*,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TObjectPtr<UObject>,0>_>
                   *param_4)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *local_res18
  ;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar12 = 0;
  local_res18 = param_3;
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(param_2->AllocatorInstance).Data,param_2->ArrayNum,0,0);
  iVar3 = *(int *)&param_4->field_0x28;
  puVar1 = &param_4->field_0x10;
  uVar6 = 1;
  iVar9 = 0;
  iVar7 = iVar9;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&param_4->field_0x20;
    if (*(uint **)&param_4->field_0x20 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar11 = *puVar14;
    iVar9 = 0;
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar9;
      iVar12 = iVar12 + 0x20;
      iVar9 = iVar9 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14696f4cd;
      uVar11 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar12;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14696f4cd:
  uVar11 = *(uint *)&param_4->field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar9);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar12;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&param_4->field_0x8 - *(int *)&param_4->field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&param_4->field_0x28;
  if (uVar11 != uVar6) {
    puVar13 = *(undefined1 **)&param_4->field_0x20;
    if (*(undefined1 **)&param_4->field_0x20 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar9 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar9;
      uVar10 = uVar10 + 0x20;
      iVar9 = iVar9 + 1;
      uVar11 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14696f5d0;
      uVar11 = *(uint *)(puVar13 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar10;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_14696f5d0:
  while( true ) {
    if (*(int *)&param_4->field_0x8 - *(int *)&param_4->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<ITableRow_const_*,TObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    (**(code **)(param_1->_padding_ + 0x88))
              (param_1,*(longlong *)param_4 + ((longlong)TStack_60.CurrentBitIndex * 3 + 1) * 8);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  FReferenceCollector::AddReferencedObjects<UObject>
            (param_1,local_res18,(UObject *)0x0,(FProperty *)0x0);
  return;
}

// DebugDump @ 1469bdac0

FString * __cdecl
TListTypeTraits<UObject_*,void>::DebugDump(FString *__return_storage_ptr__,UObject *param_1)

{
  FString *pFVar1;
  bool bVar2;
  FName local_res8;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  bVar2 = param_1 == (UObject *)0x0;
  if (bVar2) {
    pFVar1 = ::FString::FString(&local_18,L"nullptr");
  }
  else {
    local_res8.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_res8.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_res8,&local_38);
    ::FString::PrintfImpl(&local_28,L"0x%08llx [%s]");
    pFVar1 = &local_28;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar1->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((!bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((!bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// DebugDump @ 1469bdbc0

FString * __cdecl
TListTypeTraits<FName,void>::DebugDump(FString *__return_storage_ptr__,FName param_1)

{
  FName local_res10 [3];
  
  local_res10[0] = param_1;
  ::FName::ToString(local_res10,__return_storage_ptr__);
  return __return_storage_ptr__;
}

