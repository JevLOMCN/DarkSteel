// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 1

// ToLogString @ 14ec16770

FString * __thiscall
FOnlineStatsRow::ToLogString(FOnlineStatsRow *this,FString *__return_storage_ptr__)

{
  undefined1 *puVar1;
  FStatsColumnArray *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  code *pcVar5;
  FStatsColumnArray *pFVar6;
  bool bVar7;
  FString *pFVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  FString local_b8;
  FString local_a8;
  FStatsColumnArray *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  FStatsColumnArray *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  ::FString::PrintfImpl(__return_storage_ptr__,L"%d : %s");
  iVar13 = *(int *)&(this->Columns).field_0x28;
  puVar1 = &(this->Columns).field_0x10;
  pFVar2 = &this->Columns;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar13 != 0) {
    puVar15 = *(uint **)&(this->Columns).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar12 = *puVar15;
    local_78 = 0;
    while (uVar12 == 0) {
      lVar9 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar13;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14ec1683d;
      uVar12 = puVar15[lVar9 + 1];
    }
    uStack_8c = -uVar12 & uVar12;
    uVar3 = (ulonglong)uStack_8c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iStack_7c = local_78 + -1 + local_res10;
    if (iVar13 < iStack_7c) {
      iStack_7c = iVar13;
    }
  }
LAB_14ec1683d:
  iStack_70 = *(int *)&(this->Columns).field_0x8 - *(int *)&(this->Columns).field_0x34;
  uVar12 = *(uint *)&(this->Columns).field_0x28;
  uStack_80 = 0xffffffff;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = pFVar2;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = pFVar2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar13 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FString *)(*pcVar5)();
    return pFVar8;
  }
  uVar4 = *(uint *)&(this->Columns).field_0x28;
  if (uVar12 != uVar4) {
    puVar14 = *(undefined1 **)&(this->Columns).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar10;
      uVar11 = uVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14ec16940;
      uVar12 = *(uint *)(puVar14 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar11;
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
  }
LAB_14ec16940:
  while( true ) {
    pFVar6 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar12) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar6 == pFVar2))
    break;
    FVariantData::ToString
              ((FVariantData *)
               (*(longlong *)pFVar6 + (longlong)TStack_60.CurrentBitIndex * 0x38 + 0x10),&local_a8);
    ::FString::PrintfImpl(&local_b8,L"\t\t%s : %s");
    iVar13 = local_b8.Data.ArrayNum + -1;
    if (local_b8.Data.ArrayNum == 0) {
      iVar13 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_b8.Data.AllocatorInstance.Data,iVar13);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return __return_storage_ptr__;
}

