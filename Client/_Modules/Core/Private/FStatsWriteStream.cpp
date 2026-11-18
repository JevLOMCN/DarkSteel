// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// WriteCondensedMessages @ 141a303d0

void __thiscall
FStatsWriteStream::WriteCondensedMessages(FStatsWriteStream *this,FArchive *param_1,long64 param_2)

{
  int iVar1;
  longlong *plVar2;
  FStatsThreadState *this_00;
  TArray<FStatMessage,TSizedDefaultAllocator<32>_> *pTVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  ulonglong local_res20;
  
  this_00 = FStatsThreadState::GetLocalState();
  pTVar3 = FStatsThreadState::GetCondensedHistory(this_00,param_2);
  iVar1 = pTVar3->ArrayNum;
  pFVar5 = (pTVar3->AllocatorInstance).Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
LAB_141a30415:
  do {
    while( true ) {
      if (pTVar3->ArrayNum != iVar1) {
        `TCheckedPointerIterator<FStatMessage_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res20);
      }
      if (pFVar5 == pFVar6) {
        return;
      }
      WriteFName(this,param_1,*(FStatNameAndInfo *)(pFVar5 + 8));
      uVar4 = *(int *)(pFVar5 + 0xc) >> 9 & 7;
      if (uVar4 != 2) break;
LAB_141a3045e:
      plVar2 = *(longlong **)&param_1->field_0x8;
      local_res20 = *(ulonglong *)pFVar5;
      if ((ulonglong *)plVar2[1] < (ulonglong *)*plVar2 + 1) {
LAB_141a30509:
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res20,8);
          pFVar5 = pFVar5 + 0x10;
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_res20);
LAB_141a3052f:
          pFVar5 = pFVar5 + 0x10;
        }
      }
      else {
        local_res20 = *(ulonglong *)*plVar2;
        *plVar2 = *plVar2 + 8;
        pFVar5 = pFVar5 + 0x10;
      }
    }
    if (uVar4 == 3) {
      plVar2 = *(longlong **)&param_1->field_0x8;
      local_res20 = *(ulonglong *)pFVar5;
      if ((ulonglong *)plVar2[1] < (ulonglong *)*plVar2 + 1) goto LAB_141a30509;
      local_res20 = *(ulonglong *)*plVar2;
      *plVar2 = *plVar2 + 8;
      pFVar5 = pFVar5 + 0x10;
      goto LAB_141a30415;
    }
    if (uVar4 != 4) {
      if (uVar4 == 5) goto LAB_141a3045e;
      goto LAB_141a3052f;
    }
    WriteFName(this,param_1,(FStatNameAndInfo)(*(ulonglong *)pFVar5 | 0x1000000000000));
    pFVar5 = pFVar5 + 0x10;
  } while( true );
}

// WriteFName @ 141a30680

void __thiscall
FStatsWriteStream::WriteFName(FStatsWriteStream *this,FArchive *param_1,FStatNameAndInfo param_2)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  ForElementType<FSetElementId> FVar4;
  FNameEntryId FVar5;
  int iVar6;
  uint local_res8 [2];
  uint local_res10 [2];
  FStatNameAndInfo local_res18;
  FNameEntryId local_res20 [2];
  FName local_48;
  FString local_40 [2];
  
  local_48.Number = param_2.Number & 0x1ff;
  FVar5 = param_2.Index.Value;
  local_res18 = param_2;
  local_48.ComparisonIndex.Value = FVar5.Value;
  uVar3 = ::GetTypeHash(FVar5);
  if (*(int *)&(this->FNamesSent).Elements.field_0x8 !=
      *(int *)&(this->FNamesSent).Elements.field_0x34) {
    FVar4 = (this->FNamesSent).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->FNamesSent).Hash;
    }
    iVar6 = *(int *)((longlong)FVar4 + (ulonglong)((this->FNamesSent).HashSize - 1U & uVar3) * 4);
    if (iVar6 != -1) {
      lVar1 = *(longlong *)&(this->FNamesSent).Elements;
      do {
        if (*(uint *)(lVar1 + (longlong)iVar6 * 0xc) == FVar5.Value) goto LAB_141a306fd;
        iVar6 = *(int *)(lVar1 + 4 + (longlong)iVar6 * 0xc);
      } while (iVar6 != -1);
    }
  }
  iVar6 = -1;
LAB_141a306fd:
  plVar2 = *(longlong **)&param_1->field_0x8;
  local_res10[0] = local_48.ComparisonIndex.Value;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  local_res8[0] = local_res18.Number;
  if (iVar6 == -1) {
    local_res18.Index.Value = local_48.ComparisonIndex.Value;
    TSet<FNameEntryId,DefaultKeyFuncs<FNameEntryId,0>,FDefaultSetAllocator>::Emplace<FNameEntryId>
              (&this->FNamesSent,local_res20,(bool *)&local_res18);
    local_res8[0] = local_res8[0] | 0x400000;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (iVar6 == -1) {
    ::FName::ToString(&local_48,local_40);
    ::operator<<(param_1,local_40);
    if (local_40[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40[0].Data.AllocatorInstance.Data);
    }
  }
  return;
}

// WriteMetadata @ 141a33130

void __thiscall FStatsWriteStream::WriteMetadata(FStatsWriteStream *this,FArchive *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>
  *pTVar7;
  TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>
  *pTVar8;
  bool bVar9;
  FStatsThreadState *pFVar10;
  longlong lVar11;
  ulong64 *puVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res18 [8];
  int local_res20;
  uint uStackX_24;
  ulong64 local_c8;
  ulong64 local_c0;
  ulong64 local_b8;
  int local_b0;
  uint uStack_ac;
  TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>
  *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>
  *local_78;
  TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  pFVar10 = FStatsThreadState::GetLocalState();
  iStack_a0 = 0;
  uStack_9c = 1;
  local_88 = 0;
  puVar1 = &(pFVar10->ShortNameToLongName).field_0x10;
  iVar3 = *(int *)&(pFVar10->ShortNameToLongName).field_0x28;
  local_a8 = &pFVar10->ShortNameToLongName;
  iStack_8c = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(pFVar10->ShortNameToLongName).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar11 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_141a331ee;
      uVar13 = puVar17[lVar11 + 1];
    }
    uStack_9c = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_9c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iStack_8c = local_res20 + -1 + local_88;
    if (iVar3 < iStack_8c) {
      iStack_8c = iVar3;
    }
  }
LAB_141a331ee:
  iStack_80 = *(int *)&(pFVar10->ShortNameToLongName).field_0x8 -
              *(int *)&(pFVar10->ShortNameToLongName).field_0x34;
  uVar13 = *(uint *)&(pFVar10->ShortNameToLongName).field_0x28;
  TStack_68._padding_ = CONCAT44(uStack_9c,iStack_a0);
  uStack_90 = 0xffffffff;
  uVar18 = uVar13 & 0xffffffe0;
  TStack_68.CurrentBitIndex = iStack_8c;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_68._28_4_ = iStack_8c;
  TStack_68.BaseBitIndex = local_88;
  uStack_48 = CONCAT44(uStack_7c,iStack_80);
  local_98 = puVar1;
  iStack_84 = iStack_8c;
  local_78 = local_a8;
  local_70 = local_a8;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar7 = local_78;
  uVar4 = *(uint *)&(pFVar10->ShortNameToLongName).field_0x28;
  if (uVar13 != uVar4) {
    puVar16 = *(undefined1 **)&(pFVar10->ShortNameToLongName).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar18 = uVar18 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_141a332f0;
      uVar13 = *(uint *)(puVar16 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar18;
    if ((int)uVar4 < (int)uVar13) {
      uVar13 = uVar4;
    }
  }
LAB_141a332f0:
  do {
    pTVar8 = local_70;
    if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FStatMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_68.CurrentBitIndex == uVar13) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar7))
    {
      return;
    }
    lVar11 = *(longlong *)pTVar8;
    lVar15 = (longlong)TStack_68.CurrentBitIndex * 0x20;
    WriteFName(this,param_1,*(FStatNameAndInfo *)(lVar15 + 0x10 + lVar11));
    uVar18 = *(int *)(lVar15 + 0x14 + lVar11) >> 9 & 7;
    if (uVar18 == 2) {
      plVar5 = *(longlong **)&param_1->field_0x8;
      local_b8 = *(ulong64 *)(lVar15 + 8 + lVar11);
      if ((ulong64 *)plVar5[1] < (ulong64 *)*plVar5 + 1) {
        puVar12 = &local_b8;
LAB_141a33425:
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar12,8);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,puVar12);
        }
      }
      else {
        local_b8 = *(ulong64 *)*plVar5;
        *plVar5 = *plVar5 + 8;
      }
    }
    else if (uVar18 == 3) {
      plVar5 = *(longlong **)&param_1->field_0x8;
      local_c0 = *(ulong64 *)(lVar15 + 8 + lVar11);
      if ((ulong64 *)plVar5[1] < (ulong64 *)*plVar5 + 1) {
        puVar12 = &local_c0;
        goto LAB_141a33425;
      }
      local_c0 = *(ulong64 *)*plVar5;
      *plVar5 = *plVar5 + 8;
    }
    else if (uVar18 == 4) {
      uVar2 = *(ulonglong *)(lVar15 + 8 + lVar11);
      local_res20 = (int)uVar2;
      uStackX_24 = (uint)(uVar2 >> 0x20);
      uStack_ac = uStackX_24 | 0x10000;
      local_b0 = local_res20;
      WriteFName(this,param_1,(FStatNameAndInfo)(uVar2 | 0x1000000000000));
    }
    else if (uVar18 == 5) {
      plVar5 = *(longlong **)&param_1->field_0x8;
      local_c8 = *(ulong64 *)(lVar15 + 8 + lVar11);
      if ((ulong64 *)plVar5[1] < (ulong64 *)*plVar5 + 1) {
        puVar12 = &local_c8;
        goto LAB_141a33425;
      }
      local_c8 = *(ulong64 *)*plVar5;
      *plVar5 = *plVar5 + 8;
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

