// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 1

// ToDebugString @ 14ec15190

FString * __thiscall
FOnlineUserPresenceStatus::ToDebugString
          (FOnlineUserPresenceStatus *this,FString *__return_storage_ptr__)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  FOnlineKeyValuePairs<FString,FVariantData> *pFVar5;
  bool bVar6;
  FString *pFVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  FString *local_res10;
  int local_res18;
  FString local_c8;
  FOnlineKeyValuePairs<FString,FVariantData> *local_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  FString local_88;
  FOnlineKeyValuePairs<FString,FVariantData> *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  FString local_48;
  
  puVar1 = &(this->Properties).field_0x10;
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8 = &this->Properties;
  local_c8.Data.ArrayNum = 0;
  local_c8.Data.ArrayMax = 0;
  iVar11 = *(int *)&(this->Properties).field_0x28;
  iStack_b0 = 0;
  uStack_ac = 1;
  local_98 = 0;
  iStack_9c = iStack_b0;
  if (iVar11 != 0) {
    puVar13 = *(uint **)&(this->Properties).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar10 = *puVar13;
    local_98 = 0;
    iStack_b0 = 0;
    while (uVar10 == 0) {
      lVar8 = (longlong)iStack_b0;
      local_98 = local_98 + 0x20;
      iStack_b0 = iStack_b0 + 1;
      iStack_9c = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b0) goto LAB_14ec1523d;
      uVar10 = puVar13[lVar8 + 1];
    }
    uStack_ac = -uVar10 & uVar10;
    uVar2 = (ulonglong)uStack_ac * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    iStack_9c = local_98 + -1 + local_res18;
    if (iVar11 < iStack_9c) {
      iStack_9c = iVar11;
    }
  }
LAB_14ec1523d:
  uVar10 = *(uint *)&(this->Properties).field_0x28;
  uVar14 = uVar10 & 0xffffffe0;
  iStack_90 = *(int *)&(this->Properties).field_0x8 - *(int *)&(this->Properties).field_0x34;
  uStack_a0 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_ac,iStack_b0);
  TStack_70.CurrentBitIndex = iStack_9c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar10 >> 5;
  TStack_70._28_4_ = iStack_9c;
  TStack_70.BaseBitIndex = local_98;
  uStack_50 = CONCAT44(uStack_8c,iStack_90);
  local_res10 = __return_storage_ptr__;
  local_a8 = puVar1;
  iStack_94 = iStack_9c;
  local_78 = local_b8;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar11 < (int)uVar10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FString *)(*pcVar4)();
    return pFVar7;
  }
  uVar3 = *(uint *)&(this->Properties).field_0x28;
  if (uVar10 != uVar3) {
    puVar12 = *(undefined1 **)&(this->Properties).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar9 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar9;
      uVar14 = uVar14 + 0x20;
      iVar9 = iVar9 + 1;
      uVar10 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14ec1533b;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar14;
    if ((int)uVar3 < (int)uVar10) {
      uVar10 = uVar3;
    }
  }
LAB_14ec1533b:
  while( true ) {
    pFVar5 = local_78;
    if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar10) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pFVar5 == &this->Properties)) break;
    FVariantData::ToString
              ((FVariantData *)
               (*(longlong *)pFVar5 + (longlong)TStack_70.CurrentBitIndex * 0x38 + 0x10),&local_48);
    ::FString::PrintfImpl(&local_88,L"\n%s : %s");
    iVar11 = local_88.Data.ArrayNum + -1;
    if (local_88.Data.ArrayNum == 0) {
      iVar11 = 0;
    }
    ::FString::AppendChars(&local_c8,(wchar_t *)local_88.Data.AllocatorInstance.Data,iVar11);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  EOnlinePresenceState::ToString(this->State);
  pFVar7 = local_res10;
  ::FString::PrintfImpl
            (local_res10,L"FOnlineUserPresenceStatus {State: %s, Status: %s, Properties: %s}");
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  return pFVar7;
}

