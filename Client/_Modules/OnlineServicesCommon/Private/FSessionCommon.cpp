// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 6

// operator+= @ 14ee331a0

FSessionCommon * __thiscall
UE::Online::FSessionCommon::operator+=(FSessionCommon *this,FSessionUpdate *param_1)

{
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *pTVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FSessionCommon *pFVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if ((param_1->OwnerAccountId).bIsSet != false) {
    (this->OwnerAccountId).Value = (param_1->OwnerAccountId).TypedValue.Value;
  }
  if ((param_1->SessionSettingsChanges).bIsSet != false) {
    FSessionSettings::operator+=
              (&this->SessionSettings,&(param_1->SessionSettingsChanges).TypedValue);
  }
  iVar10 = 0;
  puVar3 = &(param_1->RemovedSessionMembers).Elements.field_0x10;
  iVar4 = *(int *)&(param_1->RemovedSessionMembers).Elements.field_0x28;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar4 != 0) {
    puVar17 = *(uint **)&(param_1->RemovedSessionMembers).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar3;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar10;
      iVar14 = iVar14 + 0x20;
      iVar10 = iVar10 + 1;
      iVar8 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14ee3326b;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar7 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res10 = (int)lVar11;
    iVar8 = iVar14 + -1 + local_res10;
    if (iVar4 < iVar8) {
      iVar8 = iVar4;
    }
  }
LAB_14ee3326b:
  uVar13 = *(uint *)&(param_1->RemovedSessionMembers).Elements.field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar10);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(param_1->RemovedSessionMembers).Elements.field_0x8 -
                       *(int *)&(param_1->RemovedSessionMembers).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FSessionCommon *)(*pcVar5)();
    return pFVar9;
  }
  uVar7 = *(uint *)&(param_1->RemovedSessionMembers).Elements.field_0x28;
  if (uVar13 != uVar7) {
    puVar15 = *(undefined1 **)&(param_1->RemovedSessionMembers).Elements.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar3;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar10 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar10;
      uVar12 = uVar12 + 0x20;
      iVar10 = iVar10 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14ee33371;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_14ee33371:
  while( true ) {
    if (*(int *)&(param_1->RemovedSessionMembers).Elements.field_0x8 -
        *(int *)&(param_1->RemovedSessionMembers).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) break;
    pTVar1 = (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)
             (*(longlong *)&(param_1->RemovedSessionMembers).Elements +
             (longlong)TStack_60.CurrentBitIndex * 0xc);
    if (*(int *)&(this->SessionMembers).Elements.field_0x8 !=
        *(int *)&(this->SessionMembers).Elements.field_0x34) {
      uVar7 = pTVar1->Value;
      uVar12 = uVar7 & 0xffffff;
      uVar18 = (uVar7 >> 0x18) - uVar12 ^ uVar12 >> 0xd;
      uVar16 = (-0x61c88647 - uVar18) - uVar12 ^ uVar18 << 8;
      uVar7 = (uVar12 - uVar16) - uVar18 ^ uVar16 >> 0xd;
      uVar18 = (uVar18 - uVar7) - uVar16 ^ uVar7 >> 0xc;
      uVar12 = (uVar16 - uVar18) - uVar7 ^ uVar18 << 0x10;
      uVar7 = (uVar7 - uVar12) - uVar18 ^ uVar12 >> 5;
      uVar16 = (uVar18 - uVar7) - uVar12 ^ uVar7 >> 3;
      uVar12 = (uVar12 - uVar16) - uVar7 ^ uVar16 << 10;
      TSet<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,DefaultKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
      ::RemoveImpl<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                (&this->SessionMembers,(uVar7 - uVar12) - uVar16 ^ uVar12 >> 0xf,pTVar1);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  TSet<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,DefaultKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
  ::Append<FDefaultSetAllocator>(&this->SessionMembers,&param_1->AddedSessionMembers);
  return this;
}

// DumpMemberData @ 14eebc980

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::Online::FSessionCommon::DumpMemberData(FSessionCommon *this)

{
  undefined1 *puVar1;
  TSet<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,DefaultKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TSet<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,DefaultKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
  *pTVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  FString local_a8;
  FString local_98;
  TSet<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,DefaultKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
  *local_88;
  int iStack_80;
  uint uStack_7c;
  undefined1 *local_78;
  undefined4 uStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSet<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,DefaultKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  if (4 < (byte)LogOnlineServices._0_1_) {
    Online::ToLogString(&local_a8,&this->OwnerAccountId);
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (4 < (byte)LogOnlineServices._0_1_) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    }
  }
  iStack_80 = 0;
  puVar1 = &(this->SessionMembers).Elements.field_0x10;
  iVar4 = *(int *)&(this->SessionMembers).Elements.field_0x28;
  pTVar2 = &this->SessionMembers;
  uStack_7c = 1;
  local_68 = 0;
  iStack_6c = 0;
  if (iVar4 != 0) {
    puVar14 = *(uint **)&(this->SessionMembers).Elements.field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar12 = *puVar14;
    while (uVar12 == 0) {
      lVar9 = (longlong)iStack_80;
      local_68 = local_68 + 0x20;
      iStack_80 = iStack_80 + 1;
      iStack_6c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_80) goto LAB_14eebca8d;
      uVar12 = puVar14[lVar9 + 1];
    }
    uStack_7c = -uVar12 & uVar12;
    uVar3 = (ulonglong)uStack_7c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iStack_6c = local_68 + -1 + local_res10;
    if (iVar4 < iStack_6c) {
      iStack_6c = iVar4;
    }
  }
LAB_14eebca8d:
  iStack_60 = *(int *)&(this->SessionMembers).Elements.field_0x8 -
              *(int *)&(this->SessionMembers).Elements.field_0x34;
  uVar12 = *(uint *)&(this->SessionMembers).Elements.field_0x28;
  uStack_70 = 0xffffffff;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uStack_7c,iStack_80);
  TStack_50.CurrentBitIndex = iStack_6c;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_50._28_4_ = iStack_6c;
  TStack_50.BaseBitIndex = local_68;
  uStack_30 = CONCAT44(uStack_5c,iStack_60);
  local_88 = pTVar2;
  local_78 = puVar1;
  iStack_64 = iStack_6c;
  local_58 = pTVar2;
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(this->SessionMembers).Elements.field_0x28;
  if (uVar12 != uVar5) {
    puVar13 = *(undefined1 **)&(this->SessionMembers).Elements.field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar10;
      uVar11 = uVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14eebcb90;
      uVar12 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar11;
    if ((int)uVar5 < (int)uVar12) {
      uVar12 = uVar5;
    }
  }
LAB_14eebcb90:
  while( true ) {
    pTVar7 = local_58;
    if (*(int *)&(local_58->Elements).field_0x8 - *(int *)&(local_58->Elements).field_0x34 !=
        (int)uStack_30) {
      `TSparseArray<TSparseSetElement<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_50.CurrentBitIndex == uVar12) &&
        (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    break;
    if (4 < (byte)LogOnlineServices._0_1_) {
      Online::ToLogString(&local_98,
                          (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)
                          (*(longlong *)&pTVar7->Elements +
                          (longlong)TStack_50.CurrentBitIndex * 0xc));
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// DumpSessionInfo @ 14eebcc50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::Online::FSessionCommon::DumpSessionInfo(FSessionCommon *this)

{
  FString local_18;
  
  if (4 < (byte)LogOnlineServices._0_1_) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  if (4 < (byte)LogOnlineServices._0_1_) {
    Online::ToLogString(&local_18,&(this->SessionInfo).SessionId);
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if ((((4 < (byte)LogOnlineServices._0_1_) &&
         (Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices),
         4 < (byte)LogOnlineServices._0_1_)) &&
        (Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices),
        4 < (byte)LogOnlineServices._0_1_)) &&
       ((Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices),
        4 < (byte)LogOnlineServices._0_1_ &&
        (Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices),
        4 < (byte)LogOnlineServices._0_1_)))) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    }
  }
  return;
}

// DumpSessionSettings @ 14eebcda0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::Online::FSessionCommon::DumpSessionSettings(FSessionCommon *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  FName *this_00;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  FLexToStringAdaptor<UE::Online::FSchemaVariant> local_res18 [2];
  undefined4 uStack_9c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  FString local_68;
  FString local_58;
  FString local_48;
  
  if (((4 < (byte)LogOnlineServices._0_1_) &&
      (Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices),
      4 < (byte)LogOnlineServices._0_1_)) &&
     (Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices),
     4 < (byte)LogOnlineServices._0_1_)) {
    Online::LexToString((this->SessionSettings).JoinPolicy);
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    if ((4 < (byte)LogOnlineServices._0_1_) &&
       (Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices),
       4 < (byte)LogOnlineServices._0_1_)) {
      ::FName::ToString(&(this->SessionSettings).SchemaName,&local_68);
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (4 < (byte)LogOnlineServices._0_1_) {
        Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
      }
    }
  }
  iVar3 = *(int *)&(this->SessionSettings).CustomSettings.field_0x28;
  puVar1 = &(this->SessionSettings).CustomSettings.field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->SessionSettings).CustomSettings.field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14eebcf2f;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = iVar13 + -1 + local_res10;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14eebcf2f:
  uVar10 = *(uint *)&(this->SessionSettings).CustomSettings.field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_90._padding_ = CONCAT44(uVar6,iVar11);
  TStack_90.CurrentBitIndex = iVar7;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_90._28_4_ = iVar7;
  TStack_90.BaseBitIndex = iVar13;
  uStack_70 = CONCAT44(uStack_9c,
                       *(int *)&(this->SessionSettings).CustomSettings.field_0x8 -
                       *(int *)&(this->SessionSettings).CustomSettings.field_0x34);
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->SessionSettings).CustomSettings.field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->SessionSettings).CustomSettings.field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14eebd030;
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
LAB_14eebd030:
  while( true ) {
    if (*(int *)&(this->SessionSettings).CustomSettings.field_0x8 -
        *(int *)&(this->SessionSettings).CustomSettings.field_0x34 != (int)uStack_70) {
      `TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FCustomSessionSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_90.CurrentBitIndex == uVar10) &&
       (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    this_00 = (FName *)((longlong)TStack_90.CurrentBitIndex * 0x38 +
                       *(longlong *)&(this->SessionSettings).CustomSettings);
    if (4 < (byte)LogOnlineServices._0_1_) {
      ::FName::ToString(this_00,&local_58);
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (4 < (byte)LogOnlineServices._0_1_) {
        Online::LexToString((ESchemaAttributeVisibility)this_00[5].ComparisonIndex.Value);
        Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)&PTR_u___Value__Visibi_1530a1ce0,
                   (FLogCategoryBase *)&LogOnlineServices);
        if ((4 < (byte)LogOnlineServices._0_1_) &&
           (Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices),
           4 < (byte)LogOnlineServices._0_1_)) {
          local_res18[0].SchemaVariant = (FSchemaVariant *)(this_00 + 1);
          Online::LexToString(&local_48,local_res18);
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
      }
    }
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  return;
}

// DumpState @ 14eebd180

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::Online::FSessionCommon::DumpState(FSessionCommon *this)

{
  FString local_18;
  
  if (4 < (byte)LogOnlineServices._0_1_) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  DumpMemberData(this);
  if (4 < (byte)LogOnlineServices._0_1_) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  if (4 < (byte)LogOnlineServices._0_1_) {
    Online::ToLogString(&local_18,&(this->SessionInfo).SessionId);
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if ((((4 < (byte)LogOnlineServices._0_1_) &&
         (Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices),
         4 < (byte)LogOnlineServices._0_1_)) &&
        (Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices),
        4 < (byte)LogOnlineServices._0_1_)) &&
       ((Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices),
        4 < (byte)LogOnlineServices._0_1_ &&
        (Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices),
        4 < (byte)LogOnlineServices._0_1_)))) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    }
  }
  DumpSessionSettings(this);
  return;
}

// ToLogString @ 14ef15690

FString * __thiscall
UE::Online::FSessionCommon::ToLogString(FSessionCommon *this,FString *__return_storage_ptr__)

{
  FString local_18;
  
  Online::ToLogString(&local_18,&(this->SessionInfo).SessionId);
  ::FString::PrintfImpl(__return_storage_ptr__,L"ISession: SessionId [%s]");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

