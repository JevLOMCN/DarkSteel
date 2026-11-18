// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 42

// CalcCharCombatPower @ 14bbac570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

float __cdecl FDS_CharacterService::CalcCharCombatPower(int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  float fVar3;
  EDS_StatusType EVar4;
  EDS_StatusType EVar5;
  code *pcVar6;
  longlong *plVar7;
  bool bVar8;
  UObject *pUVar9;
  FDS_CharacterBaseTableRow *this;
  UDS_LogManager *pUVar10;
  UDS_CharStatusData *pUVar11;
  undefined8 uVar12;
  longlong lVar13;
  void *pvVar14;
  int iVar15;
  ForAnyElementType FVar16;
  ForElementType<unsigned_int> FVar17;
  EDS_StatusType *pEVar18;
  EDS_StatusType *pEVar19;
  uint uVar20;
  undefined1 *puVar21;
  uint uVar22;
  uint uVar23;
  EDS_StatusType *pEVar24;
  uint uVar25;
  EDS_StatusType *pEVar26;
  float fVar27;
  float fVar28;
  undefined1 auStackY_648 [32];
  undefined1 local_608;
  undefined1 local_607;
  undefined1 local_606 [6];
  FWeakObjectPtr local_600;
  TArray<FDS_CharacterLevelTableRow_const_*,TSizedDefaultAllocator<32>_> local_5f8;
  TArray<FDS_StatusTableRow_const_*,TSizedDefaultAllocator<32>_> local_5e8;
  TPairInitializer<EDS_StatusType_const_&,int_const_&> local_5d8;
  longlong *local_5c8;
  uint uStack_5c0;
  uint uStack_5bc;
  TBitArray<FDefaultBitArrayAllocator> *local_5b8;
  undefined4 uStack_5b0;
  uint uStack_5ac;
  uint local_5a8;
  undefined4 uStack_5a4;
  int iStack_5a0;
  undefined4 uStack_59c;
  longlong *local_598;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_590;
  undefined8 uStack_570;
  longlong local_568;
  longlong local_560;
  undefined4 local_53c;
  longlong local_538;
  undefined8 local_530;
  TBitArray<FDefaultBitArrayAllocator> local_528;
  undefined4 local_508;
  int local_504;
  undefined1 local_500 [8];
  undefined1 *local_4f8;
  int local_4f0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_2a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_188;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_648;
  UDS_CharStatusData::GetTempStatusData();
  bVar8 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)&local_600,(void *)0x0);
  if ((bVar8) || (bVar8 = FWeakObjectPtr::IsValid(&local_600), !bVar8)) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 == (UDS_LogManager *)0x0) {
      return 0.0;
    }
    pUVar10 = UDS_LogManager::GetInst();
    local_188._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_188,"FDS_CharacterService::CalcCharCombatPower",0x29,Yes);
    UDS_LogManager::PrintLog(pUVar10,1,Warning,local_188.Ptr,0x358,L"InCharStatusData is Invalid.");
    pvVar14 = (void *)local_188._padding_;
  }
  else {
    pUVar9 = FWeakObjectPtr::Get(&local_600);
    (**(code **)(*(longlong *)pUVar9 + 0x2c8))(pUVar9);
    pUVar9 = FWeakObjectPtr::Get(&local_600);
    (**(code **)(*(longlong *)pUVar9 + 0x2b0))(pUVar9);
    this = FDS_CharacterBaseTableRow::GetRef((longlong)param_1,true);
    bVar8 = FDS_CharacterBaseTableRow::IsValid(this);
    if (bVar8) {
      pEVar19 = (EDS_StatusType *)0x0;
      FDS_CharacterBaseTableRow::ID_LevelGroupTables(this,&local_5f8);
      iVar15 = local_5f8.ArrayNum;
      pFVar1 = local_5f8.AllocatorInstance.Data + (longlong)iVar15 * 8;
      uVar12 = local_5f8._8_8_;
      FVar16.Data = local_5f8.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar12 != iVar15) {
          local_608 = 0;
          `TCheckedPointerIterator<FDS_CharacterLevelTableRow_const_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_608);
          uVar12 = local_5f8._8_8_;
        }
        pEVar18 = pEVar19;
        if ((FVar16.Data == pFVar1) ||
           (pEVar18 = *(EDS_StatusType **)FVar16.Data, pEVar18[5] == param_2)) break;
        FVar16.Data = FVar16.Data + 8;
      }
      if (local_5f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5f8.AllocatorInstance.Data);
      }
      if (pEVar18 == (EDS_StatusType *)0x0) {
        pUVar10 = UDS_LogManager::GetInst();
        if (pUVar10 == (UDS_LogManager *)0x0) {
          return 0.0;
        }
        pUVar10 = UDS_LogManager::GetInst();
        local_3c8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_3c8,"FDS_CharacterService::CalcCharCombatPower",0x29,Yes);
        UDS_LogManager::PrintLog
                  (pUVar10,1,Warning,local_3c8.Ptr,0x372,
                   L"CharacterLevelTable Status Count is incorrect. CharID : %d, CharLevel : %d");
        pvVar14 = (void *)local_3c8._padding_;
      }
      else {
        if (pEVar18[0xc] == pEVar18[0x10]) {
          local_538 = 0;
          local_530 = 0;
          local_528.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
          local_528.NumBits = 0;
          uVar20 = 0;
          local_528.MaxBits = 0x80;
          local_508 = 0xffffffff;
          local_504 = 0;
          local_4f8 = (undefined1 *)0x0;
          local_4f0 = 0;
          EVar4 = pEVar18[0xc];
          pEVar26 = pEVar19;
          pEVar24 = pEVar19;
          local_530._0_4_ = 0;
          if (0 < (int)EVar4) {
            do {
              uVar25 = (uint)pEVar26;
              uVar22 = uVar20;
              if ((int)uVar25 < (int)pEVar18[0x10]) {
                uVar22 = ~uVar25 >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                fVar27 = (float)(*pcVar6)();
                return fVar27;
              }
              uVar12 = *(undefined8 *)(pEVar18 + 0xe);
              uVar22 = uVar20;
              if ((int)uVar25 < (int)pEVar18[0xc]) {
                uVar22 = ~uVar25 >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                fVar27 = (float)(*pcVar6)();
                return fVar27;
              }
              local_568 = *(undefined8 *)(pEVar18 + 10) + (longlong)pEVar24 * 4;
              local_560 = uVar12 + (longlong)pEVar24 * 4;
              TSet<TTuple<enum_EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<enum_EDS_StatusType_const_&,int_const_&>_>
                        (&local_538,&local_5d8,(bool *)&local_568);
              pEVar26 = (EDS_StatusType *)(ulonglong)(uVar25 + 1);
              pEVar24 = (EDS_StatusType *)((longlong)pEVar24 + 1);
            } while ((int)(uVar25 + 1) < (int)EVar4);
            pEVar26 = (EDS_StatusType *)(ulonglong)(uint)local_528.NumBits;
          }
          uStack_5bc = 1;
          uVar22 = (uint)pEVar26;
          uStack_5ac = uVar20;
          local_5a8 = uVar20;
          if (uVar22 != 0) {
            FVar17 = (ForElementType<unsigned_int>)&local_528;
            if (local_528.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FVar17 = local_528.AllocatorInstance.SecondaryData;
            }
            uVar25 = *(uint *)FVar17;
            pEVar18 = pEVar19;
            pEVar24 = pEVar19;
            local_5a8 = 0;
            uVar20 = 0;
            while (uVar25 == 0) {
              iVar15 = (int)pEVar18;
              local_5a8 = (int)pEVar24 + 0x20;
              pEVar24 = (EDS_StatusType *)(ulonglong)local_5a8;
              uVar20 = iVar15 + 1;
              pEVar18 = (EDS_StatusType *)(ulonglong)uVar20;
              uStack_5ac = uVar22;
              if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar20)
              goto LAB_14bbac9a2;
              uVar25 = *(uint *)((longlong)FVar17 + ((longlong)iVar15 + 1) * 4);
            }
            uStack_5bc = -uVar25 & uVar25;
            uVar2 = (ulonglong)uStack_5bc * 2 + 1;
            lVar13 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            local_5d8.Key._4_4_ = (int)lVar13;
            uStack_5ac = (local_5a8 - 1) + local_5d8.Key._4_4_;
            if ((int)uVar22 < (int)uStack_5ac) {
              uStack_5ac = uVar22;
            }
          }
LAB_14bbac9a2:
          iStack_5a0 = (int)local_530 - local_504;
          local_5c8 = &local_538;
          local_5b8 = &local_528;
          uStack_5b0 = 0xffffffff;
          TStack_590.CurrentBitIndex = uStack_5ac;
          TStack_590.UnvisitedBitMask = 0xffffffff;
          TStack_590._padding_ = CONCAT44(uStack_5bc,uVar20);
          uVar25 = uVar22 & 0xffffffe0;
          uStack_5a4 = local_53c;
          iVar15 = (int)uVar22 >> 5;
          TStack_590._28_4_ = local_53c;
          TStack_590.BaseBitIndex = local_5a8;
          uStack_570 = CONCAT44(uStack_59c,iStack_5a0);
          uVar23 = uVar22;
          uStack_5c0 = uVar20;
          local_598 = local_5c8;
          TStack_590.Array = local_5b8;
          if (((int)uVar22 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), uVar23 = local_528.NumBits, bVar8)) {
            pcVar6 = (code *)swi(3);
            fVar27 = (float)(*pcVar6)();
            return fVar27;
          }
          if (uVar22 != uVar23) {
            FVar17 = (ForElementType<unsigned_int>)&local_528;
            if (local_528.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FVar17 = local_528.AllocatorInstance.SecondaryData;
            }
            uVar20 = -1 << ((byte)pEVar26 & 0x1f) &
                     *(uint *)((longlong)FVar17 + (longlong)iVar15 * 4);
            while (uVar20 == 0) {
              lVar13 = (longlong)iVar15;
              uVar25 = uVar25 + 0x20;
              iVar15 = iVar15 + 1;
              if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) {
                pEVar26 = (EDS_StatusType *)(ulonglong)uVar23;
                goto LAB_14bbacab0;
              }
              uVar20 = *(uint *)((longlong)FVar17 + (lVar13 + 1) * 4);
            }
            uVar2 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
            lVar13 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            local_5d8.Value._0_4_ = (int)lVar13;
            uVar25 = (int)local_5d8.Value + -1 + uVar25;
            if ((int)uVar23 < (int)uVar25) {
              uVar25 = uVar23;
            }
            pEVar26 = (EDS_StatusType *)(ulonglong)uVar25;
          }
LAB_14bbacab0:
          do {
            plVar7 = local_598;
            if ((int)local_598[1] - *(int *)((longlong)local_598 + 0x34) != (int)uStack_570) {
              local_607 = 0;
              `TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_607);
            }
            if (((TStack_590.CurrentBitIndex == (int)pEVar26) && (TStack_590.Array == &local_528))
               && (plVar7 == &local_538)) {
              fVar27 = 0.0;
              FDS_StatusTableRow::GetAll(&local_5e8);
              iVar15 = local_5e8.ArrayNum;
              pFVar1 = local_5e8.AllocatorInstance.Data + (longlong)iVar15 * 8;
              FVar16.Data = local_5e8.AllocatorInstance.Data;
              while( true ) {
                if (local_5e8.ArrayNum != iVar15) {
                  `TCheckedPointerIterator<FDS_StatusTableRow_const_*,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(local_606);
                }
                if (FVar16.Data == pFVar1) break;
                lVar13 = *(longlong *)FVar16.Data;
                EVar4 = *(EDS_StatusType *)(lVar13 + 8);
                pUVar11 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_600);
                fVar3 = *(float *)(lVar13 + 0xbc);
                fVar28 = UDS_CharStatusData::GetMaxStatus(pUVar11,EVar4);
                FVar16.Data = FVar16.Data + 8;
                fVar27 = fVar27 + fVar28 * fVar3;
              }
              if (local_5e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_5e8.AllocatorInstance.Data);
              }
              local_4f0 = 0;
              if (local_4f8 != (undefined1 *)0x0) {
                FMemory::Free(local_4f8);
              }
              TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        (&local_538);
              return fVar27;
            }
            EVar4 = *(EDS_StatusType *)(*plVar7 + (longlong)TStack_590.CurrentBitIndex * 0x10);
            pUVar11 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_600);
            pEVar18 = pEVar19;
            if ((int)local_530 != local_504) {
              puVar21 = local_500;
              if (local_4f8 != (undefined1 *)0x0) {
                puVar21 = local_4f8;
              }
              EVar5 = *(EDS_StatusType *)(puVar21 + (ulonglong)(local_4f0 - Hp & EVar4) * 4);
              while (pEVar18 = pEVar19, EVar5 != ~None) {
                pEVar18 = (EDS_StatusType *)((longlong)(int)EVar5 * 0x10 + local_538);
                if (*pEVar18 == EVar4) {
                  if (pEVar18 != (EDS_StatusType *)0x0) goto LAB_14bbacb6f;
                  break;
                }
                EVar5 = pEVar18[2];
              }
            }
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x288,L"");
            if (bVar8) {
              pcVar6 = (code *)swi(3);
              fVar27 = (float)(*pcVar6)();
              return fVar27;
            }
LAB_14bbacb6f:
            UDS_CharStatusData::SetOriginStatus(pUVar11,EVar4,pEVar18[1],true);
            TStack_590.UnvisitedBitMask = TStack_590.UnvisitedBitMask & ~TStack_590._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_590);
          } while( true );
        }
        pUVar10 = UDS_LogManager::GetInst();
        if (pUVar10 == (UDS_LogManager *)0x0) {
          return 0.0;
        }
        pUVar10 = UDS_LogManager::GetInst();
        local_2a8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_2a8,"FDS_CharacterService::CalcCharCombatPower",0x29,Yes);
        UDS_LogManager::PrintLog
                  (pUVar10,1,Warning,local_2a8.Ptr,0x378,
                   L"CharacterLevelTable Status Count is incorrect. ID : %d");
        pvVar14 = (void *)local_2a8._padding_;
      }
    }
    else {
      pUVar10 = UDS_LogManager::GetInst();
      if (pUVar10 == (UDS_LogManager *)0x0) {
        return 0.0;
      }
      pUVar10 = UDS_LogManager::GetInst();
      local_4e8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_4e8,"FDS_CharacterService::CalcCharCombatPower",0x29,Yes);
      UDS_LogManager::PrintLog
                (pUVar10,1,Warning,local_4e8.Ptr,0x362,L"characterBaseTableRow is Invalid.");
      pvVar14 = (void *)local_4e8._padding_;
    }
  }
  if (pvVar14 != (void *)0x0) {
    FMemory::Free(pvVar14);
  }
  return 0.0;
}

// CalcCharStatus @ 14bbacd10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FDS_CharacterService::CalcCharStatus
          (TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> param_1,ulong64 param_2,int param_3,
          int param_4)

{
  EDS_StatusType EVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  UObject *pUVar12;
  FDS_CharacterBaseTableRow *this;
  UDS_LogManager *pUVar13;
  UDS_ItemDataSet *pUVar14;
  FDS_ItemBaseTableRow *pFVar15;
  FDS_ItemAbilityTableRow *pFVar16;
  FDS_ItemPrefixTableRow *pFVar17;
  FDS_ItemSetTableRow *this_00;
  undefined1 *puVar18;
  UDS_CharStatusData *this_01;
  byte bVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined4 *puVar23;
  uint uVar24;
  uint uVar26;
  uint uVar27;
  EDS_StatusType EVar28;
  FWeakObjectPtr *pFVar29;
  int iVar30;
  ForAnyElementType FVar31;
  ForElementType<unsigned_int> FVar32;
  longlong lVar33;
  uint uVar34;
  FScriptContainerElement *pFVar35;
  FWeakObjectPtr local_res8 [4];
  undefined1 auStackY_8f8 [32];
  EDS_StatusType local_8b8;
  undefined1 local_8b4;
  undefined1 local_8b3;
  undefined1 local_8b2;
  undefined1 local_8b1;
  undefined1 local_8b0;
  undefined1 local_8af [3];
  int local_8ac;
  FWeakObjectPtr *local_8a8;
  FWeakObjectPtr *local_8a0;
  longlong local_898;
  TArray<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_890;
  undefined4 local_880 [2];
  uint local_878 [2];
  uint local_870 [2];
  FWeakObjectPtr local_868;
  FWeakObjectPtr local_860;
  FWeakObjectPtr local_858;
  FWeakObjectPtr local_850;
  TSharedPtr<FDS_EquipmentItemCharacterData,1> local_848;
  TArray<FDS_CharacterLevelTableRow_const_*,TSizedDefaultAllocator<32>_> local_838;
  TArray<FDS_ItemBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_828;
  int local_818;
  int local_814;
  undefined1 local_810 [8];
  undefined1 local_808 [8];
  TPairInitializer<EDS_StatusType_const_&,int_const_&> local_800;
  int iStack_7f0;
  uint uStack_7ec;
  TBitArray<FDefaultBitArrayAllocator> *local_7e8;
  undefined4 uStack_7e0;
  uint uStack_7dc;
  uint local_7d8;
  undefined4 uStack_7d4;
  int iStack_7d0;
  undefined4 uStack_7cc;
  longlong *local_7c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_7c0;
  undefined8 uStack_7a0;
  FScriptContainerElement *local_798;
  undefined4 *local_790;
  FScriptContainerElement *local_788;
  FScriptContainerElement *local_780;
  FScriptContainerElement *local_778;
  FScriptContainerElement *local_770;
  uint *local_768;
  undefined8 *local_760;
  longlong local_758;
  longlong local_750;
  undefined4 local_72c;
  ForAnyElementType local_728;
  undefined8 local_720;
  TBitArray<FDefaultBitArrayAllocator> local_718;
  undefined4 local_6f8;
  int local_6f4;
  undefined1 local_6f0 [8];
  undefined1 *local_6e8;
  int local_6e0;
  longlong local_6d8;
  undefined8 local_6d0;
  TBitArray<FDefaultBitArrayAllocator> local_6c8;
  undefined4 local_6a8;
  int local_6a4;
  void *local_698;
  undefined4 local_690;
  longlong local_688;
  undefined8 local_680;
  undefined8 local_668;
  undefined4 local_660;
  undefined4 local_65c;
  undefined4 local_658;
  int local_654;
  undefined1 local_650 [8];
  undefined1 *local_648;
  int local_640;
  longlong local_638;
  undefined8 local_630;
  undefined8 local_618;
  undefined4 local_610;
  undefined4 local_60c;
  undefined4 local_608;
  int local_604;
  undefined1 local_600 [8];
  undefined1 *local_5f8;
  int local_5f0;
  longlong local_5e8;
  undefined8 local_5e0;
  undefined8 local_5c8;
  undefined4 local_5c0;
  undefined4 local_5bc;
  undefined4 local_5b8;
  int local_5b4;
  undefined1 local_5b0 [8];
  undefined1 *local_5a8;
  int local_5a0;
  undefined8 local_598;
  undefined8 local_590;
  undefined8 local_578;
  undefined4 local_570;
  undefined4 local_56c;
  int local_568;
  int local_564;
  void *local_558;
  undefined4 local_550;
  undefined4 local_548;
  TSet<TTuple<EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<EDS_StatusType,int,0>,FDefaultSetAllocator>
  local_540;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_2a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_188;
  ulonglong local_68;
  FScriptContainerElement *pFVar25;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_8f8;
  local_res8[0] = param_1.WeakPtr;
  pUVar12 = FWeakObjectPtr::Get(local_res8);
  if (pUVar12[4].field_0x8 != '\x01') {
    this = FDS_CharacterBaseTableRow::GetRef((longlong)param_3,true);
    bVar8 = FDS_CharacterBaseTableRow::IsValid(this);
    if (bVar8) {
      uVar24 = 0;
      pFVar25 = (FScriptContainerElement *)0x0;
      FDS_CharacterBaseTableRow::ID_LevelGroupTables(this,&local_838);
      iVar30 = local_838.ArrayNum;
      pFVar35 = local_838.AllocatorInstance.Data + (longlong)iVar30 * 8;
      uVar20 = local_838._8_8_;
      FVar31.Data = local_838.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar20 != iVar30) {
          local_8b4 = 0;
          `TCheckedPointerIterator<FDS_CharacterLevelTableRow_const_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_8b4);
          uVar20 = local_838._8_8_;
        }
        lVar33 = 0;
        if ((FVar31.Data == pFVar35) ||
           (lVar33 = *(longlong *)FVar31.Data, *(int *)(lVar33 + 0x14) == param_4)) break;
        FVar31.Data = FVar31.Data + 8;
      }
      if (local_838.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_838.AllocatorInstance.Data);
      }
      if (lVar33 == 0) {
        pUVar13 = UDS_LogManager::GetInst();
        if (pUVar13 != (UDS_LogManager *)0x0) {
          pUVar13 = UDS_LogManager::GetInst();
          local_3c8._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_3c8,"FDS_CharacterService::CalcCharStatus",0x24,Yes);
          UDS_LogManager::PrintLog
                    (pUVar13,1,Warning,local_3c8.Ptr,0x2a7,
                     L"CharacterLevelTable Status Count is incorrect. CharID : %d, CharLevel : %d");
          if ((void *)local_3c8._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_3c8._padding_);
          }
        }
      }
      else if (*(int *)(lVar33 + 0x30) == *(int *)(lVar33 + 0x40)) {
        TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)&local_868);
        bVar8 = FWeakObjectPtr::IsValid(&local_868);
        if (bVar8) {
          local_5e8 = 0;
          local_5e0 = 0;
          local_5c8 = 0;
          local_5c0 = 0;
          local_5bc = 0x80;
          local_5b8 = 0xffffffff;
          local_5b4 = 0;
          local_5a8 = (undefined1 *)0x0;
          local_5a0 = 0;
          iVar30 = *(int *)(lVar33 + 0x30);
          pFVar35 = pFVar25;
          uVar26 = uVar24;
          if (0 < iVar30) {
            do {
              uVar34 = uVar24;
              if ((int)uVar26 < *(int *)(lVar33 + 0x40)) {
                uVar34 = ~uVar26 >> 0x1f;
              }
              if ((uVar34 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              lVar2 = *(longlong *)(lVar33 + 0x38);
              uVar34 = uVar24;
              if ((int)uVar26 < *(int *)(lVar33 + 0x30)) {
                uVar34 = ~uVar26 >> 0x1f;
              }
              if ((uVar34 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              local_758 = *(longlong *)(lVar33 + 0x28) + (longlong)pFVar35 * 4;
              local_750 = lVar2 + (longlong)pFVar35 * 4;
              TSet<TTuple<enum_EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<enum_EDS_StatusType_const_&,int_const_&>_>
                        (&local_5e8,
                         (TPairInitializer<EDS_StatusType_const_&,int_const_&> *)(local_810 + 4),
                         (bool *)&local_758);
              uVar26 = uVar26 + 1;
              pFVar35 = pFVar35 + 1;
            } while ((int)uVar26 < iVar30);
          }
          pUVar14 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_868);
          UDS_ItemDataSet::GetEquippedItemDataList(pUVar14,&local_890);
          iVar30 = local_890.ArrayNum;
          uVar21 = (ulonglong)local_890.ArrayNum;
          local_638 = 0;
          local_630 = 0;
          local_618 = 0;
          pFVar29 = (FWeakObjectPtr *)(local_890.AllocatorInstance.Data + uVar21 * 8);
          local_610 = 0;
          local_60c = 0x80;
          local_608 = 0xffffffff;
          local_604 = 0;
          local_5f8 = (undefined1 *)0x0;
          local_5f0 = 0;
          FVar31.Data = local_890.AllocatorInstance.Data;
          local_8a8 = pFVar29;
          while( true ) {
            if (local_890.ArrayNum != (uint)uVar21) {
              local_8b3 = 0;
              `TCheckedPointerIterator<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,0>::
              operator!='::__l2::<lambda_1>::operator()(&local_8b3);
            }
            iVar10 = local_890.ArrayNum;
            if ((FWeakObjectPtr *)FVar31.Data == pFVar29) break;
            local_858 = *(FWeakObjectPtr *)FVar31.Data;
            bVar8 = FWeakObjectPtr::IsValid(&local_858);
            if (bVar8) {
              pUVar12 = FWeakObjectPtr::Get(&local_858);
              pFVar15 = FDS_ItemBaseTableRow::GetRef((longlong)*(int *)&pUVar12[8].field_0x10,true);
              pFVar16 = FDS_ItemAbilityTableRow::GetRef((longlong)pFVar15->ID_Ability,true);
              lVar33 = (longlong)(pFVar16->StatusType).ArrayNum;
              pFVar29 = local_8a8;
              pFVar35 = pFVar25;
              uVar26 = uVar24;
              if (0 < lVar33) {
                do {
                  uVar34 = uVar24;
                  if ((int)uVar26 < (pFVar16->StatusValue).ArrayNum) {
                    uVar34 = ~uVar26 >> 0x1f;
                  }
                  if ((uVar34 == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar8)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  local_880[0] = *(undefined4 *)
                                  ((pFVar16->StatusValue).AllocatorInstance.Data +
                                  (longlong)pFVar35 * 4);
                  uVar34 = uVar24;
                  if ((int)uVar26 < (pFVar16->StatusType).ArrayNum) {
                    uVar34 = ~uVar26 >> 0x1f;
                  }
                  if ((uVar34 == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar8)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  local_798 = (pFVar16->StatusType).AllocatorInstance.Data +
                              (longlong)(int)uVar26 * 4;
                  local_790 = local_880;
                  TSet<TTuple<enum_EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>,FDefaultSetAllocator>
                  ::Emplace<TPairInitializer<enum_EDS_StatusType_const_&,int_&>_>
                            (&local_638,(TPairInitializer<EDS_StatusType_const_&,int_&> *)local_808,
                             (bool *)&local_798);
                  uVar26 = uVar26 + 1;
                  pFVar35 = pFVar35 + 1;
                  pFVar29 = local_8a8;
                } while ((longlong)pFVar35 < lVar33);
              }
            }
            uVar21 = (ulonglong)(uint)iVar30;
            FVar31.Data = FVar31.Data + 8;
          }
          uVar21 = (ulonglong)local_890.ArrayNum;
          local_688 = 0;
          local_680 = 0;
          local_668 = 0;
          pFVar29 = (FWeakObjectPtr *)(local_890.AllocatorInstance.Data + uVar21 * 8);
          local_660 = 0;
          local_65c = 0x80;
          local_658 = 0xffffffff;
          local_654 = 0;
          local_648 = (undefined1 *)0x0;
          local_640 = 0;
          FVar31.Data = local_890.AllocatorInstance.Data;
          local_8a8 = pFVar29;
          while( true ) {
            local_8a0 = (FWeakObjectPtr *)FVar31.Data;
            if (local_890.ArrayNum != (uint)uVar21) {
              local_8b2 = 0;
              `TCheckedPointerIterator<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,0>::
              operator!='::__l2::<lambda_1>::operator()(&local_8b2);
            }
            iVar30 = local_890.ArrayNum;
            if ((FWeakObjectPtr *)FVar31.Data == pFVar29) break;
            local_850 = *(FWeakObjectPtr *)FVar31.Data;
            bVar8 = FWeakObjectPtr::IsValid(&local_850);
            if (bVar8) {
              pUVar12 = FWeakObjectPtr::Get(&local_850);
              pFVar17 = FDS_ItemPrefixTableRow::GetRef((longlong)*(int *)(pUVar12 + 0x11),true);
              iVar30 = (pFVar17->StatusType).ArrayNum;
              pFVar29 = local_8a8;
              pFVar35 = pFVar25;
              uVar26 = uVar24;
              if (0 < iVar30) {
                do {
                  uVar34 = uVar24;
                  if ((int)uVar26 < (pFVar17->StatusValue).ArrayNum) {
                    uVar34 = ~uVar26 >> 0x1f;
                  }
                  if ((uVar34 == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar8)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  pFVar3 = (pFVar17->StatusValue).AllocatorInstance.Data;
                  uVar34 = uVar24;
                  if ((int)uVar26 < (pFVar17->StatusType).ArrayNum) {
                    uVar34 = ~uVar26 >> 0x1f;
                  }
                  if ((uVar34 == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar8)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  local_788 = (pFVar17->StatusType).AllocatorInstance.Data + (longlong)pFVar35 * 4;
                  local_780 = pFVar3 + (longlong)pFVar35 * 4;
                  TSet<TTuple<enum_EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>,FDefaultSetAllocator>
                  ::Emplace<TPairInitializer<enum_EDS_StatusType_const_&,int_const_&>_>
                            (&local_688,
                             (TPairInitializer<EDS_StatusType_const_&,int_const_&> *)(local_808 + 4)
                             ,(bool *)&local_788);
                  uVar26 = uVar26 + 1;
                  pFVar29 = local_8a8;
                  FVar31.Data = (FScriptContainerElement *)local_8a0;
                  pFVar35 = pFVar35 + 1;
                } while ((int)uVar26 < iVar30);
              }
            }
            uVar21 = (ulonglong)(uint)iVar10;
            FVar31.Data = FVar31.Data + 8;
          }
          uVar21 = (ulonglong)local_890.ArrayNum;
          local_6d8 = 0;
          local_6d0 = 0;
          local_6c8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
          pFVar29 = (FWeakObjectPtr *)(local_890.AllocatorInstance.Data + uVar21 * 8);
          local_6c8.NumBits = 0;
          local_6c8.MaxBits = 0x80;
          local_6a8 = 0xffffffff;
          local_6a4 = 0;
          local_698 = (void *)0x0;
          local_690 = 0;
          FVar31.Data = local_890.AllocatorInstance.Data;
          local_8a8 = pFVar29;
          while( true ) {
            local_8a0 = (FWeakObjectPtr *)FVar31.Data;
            if (local_890.ArrayNum != (uint)uVar21) {
              local_8b1 = 0;
              `TCheckedPointerIterator<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,0>::
              operator!='::__l2::<lambda_1>::operator()(&local_8b1);
            }
            uVar5 = _UNK_150631d98;
            uVar20 = ___xmm_00000000ffffffff0000008000000000;
            if ((FWeakObjectPtr *)FVar31.Data == pFVar29) break;
            local_860 = *(FWeakObjectPtr *)FVar31.Data;
            bVar8 = FWeakObjectPtr::IsValid(&local_860);
            if (bVar8) {
              pUVar12 = FWeakObjectPtr::Get(&local_860);
              local_878[0] = *(uint *)&pUVar12[0x12].field_0x8;
              lVar33 = (longlong)(int)local_878[0];
              local_870[0] = local_878[0];
              iVar10 = TSet<TTuple<int,TMap<enum_EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>_>_>,TDefaultMapHashableKeyFuncs<int,TMap<enum_EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>_>,0>,FDefaultSetAllocator>
                       ::FindIndexByHash<int>(&local_6d8,local_878[0],(int *)local_878);
              pFVar29 = local_8a8;
              if (iVar10 == -1) {
                local_598 = 0;
                local_590 = 0;
                local_578 = 0;
                local_570 = 0;
                local_56c = 0x80;
                local_564 = 0;
                local_558 = (void *)0x0;
                local_550 = 0;
                local_568 = iVar10;
                this_00 = FDS_ItemSetTableRow::GetRef(lVar33,true);
                iVar10 = 0;
                FDS_ItemSetTableRow::ID_ItemTables(this_00,&local_828);
                iVar11 = local_828.ArrayNum;
                pFVar35 = local_828.AllocatorInstance.Data + (longlong)iVar11 * 8;
                FVar31.Data = local_828.AllocatorInstance.Data;
                while( true ) {
                  if (local_828.ArrayNum != iVar11) {
                    local_8b0 = 0;
                    `TCheckedPointerIterator<FDS_ItemBaseTableRow_const_*,int,0>::operator!='::__l2
                    ::<lambda_1>::operator()(&local_8b0);
                  }
                  if (FVar31.Data == pFVar35) break;
                  lVar33 = *(longlong *)FVar31.Data;
                  pUVar14 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_868);
                  UDS_ItemDataSet::GetEquipmentItemCharacterData(pUVar14,&local_848);
                  iVar7 = iVar10;
                  if (local_848.Object != (FDS_EquipmentItemCharacterData *)0x0) {
                    if ((local_848.Object == (FDS_EquipmentItemCharacterData *)0x0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("IsValid()",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                           ,0x458,L""), bVar8)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    bVar8 = FDS_EquipmentItemCharacterData::IsEquippedByTID
                                      (local_848.Object,*(int *)(lVar33 + 8));
                    iVar7 = iVar10 + 1;
                    if (!bVar8) {
                      iVar7 = iVar10;
                    }
                  }
                  iVar10 = iVar7;
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_848.SharedReferenceCount.ReferenceController)
                  ;
                  FVar31.Data = FVar31.Data + 8;
                }
                local_8ac = iVar10;
                if (local_828.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_828.AllocatorInstance.Data);
                }
                local_898 = (longlong)(this_00->StatusType).ArrayNum;
                pFVar35 = pFVar25;
                uVar26 = uVar24;
                if (0 < local_898) {
                  do {
                    uVar27 = ~uVar26 >> 0x1f;
                    uVar34 = uVar24;
                    if ((int)uVar26 < (this_00->SetEffectType).ArrayNum) {
                      uVar34 = uVar27;
                    }
                    if ((uVar34 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    if (*(int *)((this_00->SetEffectType).AllocatorInstance.Data +
                                (longlong)pFVar35 * 4) == 1) {
                      uVar34 = uVar24;
                      if ((int)uVar26 < (this_00->SetCount).ArrayNum) {
                        uVar34 = uVar27;
                      }
                      if ((uVar34 == 0) &&
                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar8)) {
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      if (*(int *)((this_00->SetCount).AllocatorInstance.Data +
                                  (longlong)pFVar35 * 4) <= iVar10) {
                        uVar34 = uVar24;
                        if ((int)uVar26 < (this_00->StatusValue).ArrayNum) {
                          uVar34 = uVar27;
                        }
                        if ((uVar34 == 0) &&
                           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar8)) {
                          pcVar4 = (code *)swi(3);
                          (*pcVar4)();
                          return;
                        }
                        pFVar3 = (this_00->StatusValue).AllocatorInstance.Data;
                        uVar34 = uVar24;
                        if ((int)uVar26 < (this_00->StatusType).ArrayNum) {
                          uVar34 = uVar27;
                        }
                        if ((uVar34 == 0) &&
                           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar8)) {
                          pcVar4 = (code *)swi(3);
                          (*pcVar4)();
                          return;
                        }
                        local_770 = pFVar3 + (longlong)(int)uVar26 * 4;
                        local_778 = (this_00->StatusType).AllocatorInstance.Data +
                                    (longlong)(int)uVar26 * 4;
                        TSet<TTuple<enum_EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>,FDefaultSetAllocator>
                        ::Emplace<TPairInitializer<enum_EDS_StatusType_const_&,int_const_&>_>
                                  (&local_598,&local_800,(bool *)&local_778);
                        iVar10 = local_8ac;
                      }
                    }
                    uVar26 = uVar26 + 1;
                    pFVar35 = pFVar35 + 1;
                  } while ((longlong)pFVar35 < local_898);
                }
                if (0 < (int)local_590 - local_564) {
                  local_768 = local_870;
                  local_760 = &local_598;
                  TSet<TTuple<int,TMap<enum_EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>_>_>,TDefaultMapHashableKeyFuncs<int,TMap<enum_EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>_>,0>,FDefaultSetAllocator>
                  ::
                  Emplace<TPairInitializer<int_&,TMap<enum_EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>_>_&>_>
                            (&local_6d8,
                             (TPairInitializer<int_&,TMap<EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,int,0>_>_&>
                              *)local_810,(bool *)&local_768);
                }
                local_550 = 0;
                if (local_558 != (void *)0x0) {
                  FMemory::Free(local_558);
                }
                TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          (&local_598);
                FVar31.Data = (FScriptContainerElement *)local_8a0;
                pFVar29 = local_8a8;
              }
            }
            uVar21 = (ulonglong)(uint)iVar30;
            FVar31.Data = FVar31.Data + 8;
          }
          uVar21 = 1;
LAB_14bbad923:
          bVar8 = false;
          local_8b8 = None;
          EVar28 = (EDS_StatusType)uVar21;
          if ((int)local_5e0 != local_5b4) {
            puVar18 = local_5b0;
            if (local_5a8 != (undefined1 *)0x0) {
              puVar18 = local_5a8;
            }
            uVar22 = local_5a0 - 1 & uVar21;
            for (iVar30 = *(int *)(puVar18 + uVar22 * 4); iVar30 != -1;
                iVar30 = *(int *)(local_5e8 + 8 + (longlong)iVar30 * 0x10)) {
              if (*(EDS_StatusType *)(local_5e8 + (longlong)iVar30 * 0x10) == EVar28) {
                puVar18 = local_5b0;
                if (local_5a8 != (undefined1 *)0x0) {
                  puVar18 = local_5a8;
                }
                EVar1 = *(EDS_StatusType *)(puVar18 + uVar22 * 4);
                goto joined_r0x00014bbad99a;
              }
            }
          }
          goto LAB_14bbad9ed;
        }
        pUVar13 = UDS_LogManager::GetInst();
        if (pUVar13 != (UDS_LogManager *)0x0) {
          pUVar13 = UDS_LogManager::GetInst();
          local_188._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_188,"FDS_CharacterService::CalcCharStatus",0x24,Yes);
          UDS_LogManager::PrintLog
                    (pUVar13,1,Warning,local_188.Ptr,0x2b4,
                     L"itemDataSet is Invalid. PlayerDataContainerKey : %llu");
          if ((void *)local_188._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_188._padding_);
          }
        }
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8213295088609002165>,true,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_CharacterService.cpp"
                           ,0x2b5,"false");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        pUVar13 = UDS_LogManager::GetInst();
        if (pUVar13 != (UDS_LogManager *)0x0) {
          pUVar13 = UDS_LogManager::GetInst();
          local_2a8._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_2a8,"FDS_CharacterService::CalcCharStatus",0x24,Yes);
          UDS_LogManager::PrintLog
                    (pUVar13,1,Warning,local_2a8.Ptr,0x2ad,
                     L"CharacterLevelTable Status Count is incorrect. ID : %d");
          if ((void *)local_2a8._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_2a8._padding_);
          }
        }
      }
    }
    else {
      pUVar13 = UDS_LogManager::GetInst();
      if (pUVar13 != (UDS_LogManager *)0x0) {
        pUVar13 = UDS_LogManager::GetInst();
        local_4e8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_4e8,"FDS_CharacterService::CalcCharStatus",0x24,Yes);
        UDS_LogManager::PrintLog
                  (pUVar13,1,Warning,local_4e8.Ptr,0x297,L"characterBaseTableRow is Invalid.");
        if ((void *)local_4e8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_4e8._padding_);
        }
      }
    }
  }
  return;
joined_r0x00014bbad99a:
  pFVar35 = pFVar25;
  if (EVar1 == ~None) goto LAB_14bbad9bd;
  pFVar35 = (FScriptContainerElement *)((longlong)(int)EVar1 * 0x10 + local_5e8);
  if (*(EDS_StatusType *)pFVar35 == EVar28) {
    if (pFVar35 != (FScriptContainerElement *)0x0) goto LAB_14bbad9e3;
    goto LAB_14bbad9bd;
  }
  EVar1 = *(EDS_StatusType *)(pFVar35 + 8);
  goto joined_r0x00014bbad99a;
LAB_14bbad9bd:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar8) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14bbad9e3:
  local_8b8 = *(EDS_StatusType *)(pFVar35 + 4);
  bVar8 = true;
LAB_14bbad9ed:
  local_8a8 = (FWeakObjectPtr *)((ulonglong)local_8a8 & 0xffffffff00000000);
  if ((int)local_630 != local_604) {
    puVar18 = local_600;
    if (local_5f8 != (undefined1 *)0x0) {
      puVar18 = local_5f8;
    }
    uVar22 = local_5f0 - 1 & uVar21;
    for (iVar30 = *(int *)(puVar18 + uVar22 * 4); iVar30 != -1;
        iVar30 = *(int *)(local_638 + 8 + (longlong)iVar30 * 0x10)) {
      if (*(EDS_StatusType *)(local_638 + (longlong)iVar30 * 0x10) == EVar28) {
        puVar18 = local_600;
        if (local_5f8 != (undefined1 *)0x0) {
          puVar18 = local_5f8;
        }
        EVar1 = *(EDS_StatusType *)(puVar18 + uVar22 * 4);
        goto joined_r0x00014bbada73;
      }
    }
  }
LAB_14bbadacd:
  local_8a0 = (FWeakObjectPtr *)((ulonglong)local_8a0 & 0xffffffff00000000);
  if ((int)local_680 != local_654) {
    puVar18 = local_650;
    if (local_648 != (undefined1 *)0x0) {
      puVar18 = local_648;
    }
    uVar22 = local_640 - 1 & uVar21;
    for (iVar30 = *(int *)(puVar18 + uVar22 * 4); iVar30 != -1;
        iVar30 = *(int *)(local_688 + 8 + (longlong)iVar30 * 0x10)) {
      if (*(EDS_StatusType *)(local_688 + (longlong)iVar30 * 0x10) == EVar28) {
        puVar18 = local_650;
        if (local_648 != (undefined1 *)0x0) {
          puVar18 = local_648;
        }
        EVar1 = *(EDS_StatusType *)(puVar18 + uVar22 * 4);
        goto joined_r0x00014bbadb53;
      }
    }
  }
LAB_14bbadbad:
  iStack_7f0 = 0;
  uStack_7ec = 1;
  local_8ac = 0;
  uStack_7dc = uVar24;
  local_7d8 = uVar24;
  if (local_6c8.NumBits != 0) {
    FVar32 = (ForElementType<unsigned_int>)&local_6c8;
    if (local_6c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar32 = local_6c8.AllocatorInstance.SecondaryData;
    }
    uVar26 = *(uint *)FVar32;
    while (uVar26 == 0) {
      lVar33 = (longlong)iStack_7f0;
      local_7d8 = local_7d8 + 0x20;
      iStack_7f0 = iStack_7f0 + 1;
      uStack_7dc = local_6c8.NumBits;
      if ((int)((local_6c8.NumBits - 1U) + ((int)(local_6c8.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
          iStack_7f0) goto LAB_14bbadc33;
      uVar26 = *(uint *)((longlong)FVar32 + (lVar33 + 1) * 4);
    }
    uStack_7ec = -uVar26 & uVar26;
    uVar22 = (ulonglong)uStack_7ec * 2 + 1;
    lVar33 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar33 == 0; lVar33 = lVar33 + -1) {
      }
    }
    local_818 = (int)lVar33;
    uStack_7dc = local_818 + -1 + local_7d8;
    if (local_6c8.NumBits < (int)uStack_7dc) {
      uStack_7dc = local_6c8.NumBits;
    }
  }
LAB_14bbadc33:
  local_800.Value = (int *)&local_6d8;
  uStack_7d4 = local_72c;
  uVar26 = local_6c8.NumBits & 0xffffffe0;
  iStack_7d0 = (int)local_6d0 - local_6a4;
  local_7e8 = &local_6c8;
  TStack_7c0._padding_ = CONCAT44(uStack_7ec,iStack_7f0);
  uStack_7e0 = 0xffffffff;
  TStack_7c0.CurrentBitIndex = uStack_7dc;
  TStack_7c0.UnvisitedBitMask = 0xffffffff;
  iVar30 = local_6c8.NumBits >> 5;
  TStack_7c0._28_4_ = local_72c;
  TStack_7c0.BaseBitIndex = local_7d8;
  uStack_7a0 = CONCAT44(uStack_7cc,iStack_7d0);
  bVar19 = (byte)local_6c8.NumBits;
  local_898 = CONCAT44(local_898._4_4_,local_6c8.NumBits);
  uVar34 = local_6c8.NumBits;
  local_7c8 = (longlong *)local_800.Value;
  TStack_7c0.Array = local_7e8;
  if (local_6c8.NumBits < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar34 = (uint)local_898;
  }
  if (uVar34 == local_6c8.NumBits) {
    uVar34 = (uint)local_898;
  }
  else {
    FVar32 = (ForElementType<unsigned_int>)&local_6c8;
    if (local_6c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar32 = local_6c8.AllocatorInstance.SecondaryData;
    }
    uVar34 = -1 << (bVar19 & 0x1f) & *(uint *)((longlong)FVar32 + (longlong)iVar30 * 4);
    while (uVar34 == 0) {
      lVar33 = (longlong)iVar30;
      uVar26 = uVar26 + 0x20;
      iVar30 = iVar30 + 1;
      uVar34 = local_6c8.NumBits;
      if ((int)((local_6c8.NumBits - 1U) + ((int)(local_6c8.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
          iVar30) goto LAB_14bbadd82;
      uVar34 = *(uint *)((longlong)FVar32 + (lVar33 + 1) * 4);
    }
    uVar22 = (ulonglong)(-uVar34 & uVar34) * 2 + 1;
    lVar33 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar33 == 0; lVar33 = lVar33 + -1) {
      }
    }
    local_814 = (int)lVar33;
    uVar34 = local_814 + -1 + uVar26;
    if (local_6c8.NumBits < (int)uVar34) {
      uVar34 = local_6c8.NumBits;
    }
  }
LAB_14bbadd82:
LAB_14bbadd90:
  plVar6 = local_7c8;
  if ((int)local_7c8[1] - *(int *)((longlong)local_7c8 + 0x34) != (int)uStack_7a0) {
    local_8af[0] = 0;
    `TSparseArray<TSparseSetElement<TTuple<int,TMap<enum_EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_8af);
  }
  if (((TStack_7c0.CurrentBitIndex != uVar34) || (TStack_7c0.Array != &local_6c8)) ||
     (plVar6 != &local_6d8)) {
    puVar23 = (undefined4 *)((longlong)TStack_7c0.CurrentBitIndex * 0x60 + *plVar6);
    local_548 = *puVar23;
    local_540.Elements._0_8_ = 0;
    local_540.Elements._8_8_ = 0;
    local_540.Elements._32_8_ = 0;
    local_540.Elements._40_8_ = uVar20;
    local_540.Elements._48_8_ = uVar5;
    local_540.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_540.HashSize = 0;
    TSet<TTuple<enum_EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>,FDefaultSetAllocator>
    ::operator=(&local_540,
                (TSet<TTuple<EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<EDS_StatusType,int,0>,FDefaultSetAllocator>
                 *)(puVar23 + 2));
    local_728.Data = (FScriptContainerElement *)0x0;
    local_720 = 0;
    local_718.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_718.NumBits = 0;
    local_718.MaxBits = 0x80;
    local_6f8 = 0xffffffff;
    local_6f4 = 0;
    local_6e8 = (undefined1 *)0x0;
    local_6e0 = 0;
    TSet<TTuple<enum_EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>,FDefaultSetAllocator>
    ::operator=(&local_728,&local_540);
    if ((int)local_720 != local_6f4) {
      puVar18 = local_6f0;
      if (local_6e8 != (undefined1 *)0x0) {
        puVar18 = local_6e8;
      }
      lVar33 = (local_6e0 - 1 & uVar21) * 4;
      for (iVar30 = *(int *)(puVar18 + lVar33); iVar30 != -1;
          iVar30 = *(int *)(local_728.Data + (longlong)iVar30 * 0x10 + 8)) {
        if (*(EDS_StatusType *)(local_728.Data + (longlong)iVar30 * 0x10) == EVar28) {
          if (iVar30 != -1) {
            puVar18 = local_6f0;
            if (local_6e8 != (undefined1 *)0x0) {
              puVar18 = local_6e8;
            }
            EVar1 = *(EDS_StatusType *)(puVar18 + lVar33);
            goto joined_r0x00014bbadefa;
          }
          break;
        }
      }
    }
    goto LAB_14bbadf5c;
  }
  if (bVar8) {
    this_01 = (UDS_CharStatusData *)FWeakObjectPtr::Get(local_res8);
    UDS_CharStatusData::SetOriginStatus
              (this_01,EVar28,local_8ac + (int)local_8a0 + (int)local_8a8 + local_8b8,true);
  }
  uVar21 = (ulonglong)(EVar28 + Hp);
  if (0x250 < (int)(EVar28 + Hp)) {
    local_690 = 0;
    if (local_698 != (void *)0x0) {
      FMemory::Free(local_698);
    }
    TSparseArray<TSparseSetElement<TTuple<int,TMap<enum_EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,TMap<enum_EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_6d8);
    local_640 = 0;
    if (local_648 != (undefined1 *)0x0) {
      FMemory::Free(local_648);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_688);
    local_5f0 = 0;
    if (local_5f8 != (undefined1 *)0x0) {
      FMemory::Free(local_5f8);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_638);
    if (local_890.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_890.AllocatorInstance.Data);
    }
    local_5a0 = 0;
    if (local_5a8 != (undefined1 *)0x0) {
      FMemory::Free(local_5a8);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_5e8);
    return;
  }
  goto LAB_14bbad923;
joined_r0x00014bbada73:
  pFVar35 = pFVar25;
  if (EVar1 == ~None) goto LAB_14bbada9d;
  pFVar35 = (FScriptContainerElement *)((longlong)(int)EVar1 * 0x10 + local_638);
  if (*(EDS_StatusType *)pFVar35 == EVar28) {
    if (pFVar35 != (FScriptContainerElement *)0x0) goto LAB_14bbadac3;
    goto LAB_14bbada9d;
  }
  EVar1 = *(EDS_StatusType *)(pFVar35 + 8);
  goto joined_r0x00014bbada73;
LAB_14bbada9d:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar8) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14bbadac3:
  bVar8 = true;
  local_8a8 = (FWeakObjectPtr *)CONCAT44(local_8a8._4_4_,*(EDS_StatusType *)(pFVar35 + 4));
  goto LAB_14bbadacd;
joined_r0x00014bbadb53:
  pFVar35 = pFVar25;
  if (EVar1 == ~None) goto LAB_14bbadb7d;
  pFVar35 = (FScriptContainerElement *)((longlong)(int)EVar1 * 0x10 + local_688);
  if (*(EDS_StatusType *)pFVar35 == EVar28) {
    if (pFVar35 != (FScriptContainerElement *)0x0) goto LAB_14bbadba3;
    goto LAB_14bbadb7d;
  }
  EVar1 = *(EDS_StatusType *)(pFVar35 + 8);
  goto joined_r0x00014bbadb53;
LAB_14bbadb7d:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar8) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14bbadba3:
  bVar8 = true;
  local_8a0 = (FWeakObjectPtr *)CONCAT44(local_8a0._4_4_,*(EDS_StatusType *)(pFVar35 + 4));
  goto LAB_14bbadbad;
joined_r0x00014bbadefa:
  pFVar35 = pFVar25;
  if (EVar1 == ~None) goto LAB_14bbadf21;
  pFVar35 = local_728.Data + (longlong)(int)EVar1 * 0x10;
  if (*(EDS_StatusType *)pFVar35 == EVar28) {
    if (pFVar35 != (FScriptContainerElement *)0x0) goto LAB_14bbadf4e;
    goto LAB_14bbadf21;
  }
  EVar1 = *(EDS_StatusType *)(pFVar35 + 8);
  goto joined_r0x00014bbadefa;
LAB_14bbadf21:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar8) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14bbadf4e:
  bVar8 = true;
  local_8ac = local_8ac + *(EDS_StatusType *)(pFVar35 + 4);
LAB_14bbadf5c:
  local_6e0 = 0;
  if (local_6e8 != (undefined1 *)0x0) {
    FMemory::Free(local_6e8);
  }
  uVar22 = local_720 >> 0x20;
  local_720 = local_720 & 0xffffffff00000000;
  if ((int)uVar22 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&local_728,0,(int *)((longlong)&local_720 + 4));
  }
  local_6f8 = 0xffffffff;
  local_6f4 = 0;
  local_718.NumBits = 0;
  if (0x80 < (uint)local_718.MaxBits) {
    local_718.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_718,0);
  }
  if (local_718.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_718.AllocatorInstance.SecondaryData);
  }
  if (local_728.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_728.Data);
  }
  local_540.HashSize = 0;
  if (local_540.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_540.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_540);
  TStack_7c0.UnvisitedBitMask = TStack_7c0.UnvisitedBitMask & ~TStack_7c0._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_7c0);
  goto LAB_14bbadd90;
}

// CanAscendWithCost @ 14bbae3a0

bool __cdecl
FDS_CharacterService::CanAscendWithCost(TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UDS_CharInfoData *this;
  FWeakObjectPtr local_res8 [4];
  
  local_res8[0] = param_1.WeakPtr;
  bVar1 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)local_res8,(void *)0x0);
  if (!bVar1) {
    this = (UDS_CharInfoData *)FWeakObjectPtr::Get(local_res8);
    bVar1 = UDS_CharInfoData::CanAscend(this);
    if (bVar1) {
      bVar1 = OnCheckItemForAscend((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>)local_res8[0]);
      return bVar1;
    }
  }
  return false;
}

// CanEquipAbleForEmptySlot @ 14bbae3f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FDS_CharacterService::CanEquipAbleForEmptySlot
          (TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> param_1,EDS_EquipSlotType param_2)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UDS_ItemDataSet *pUVar6;
  FDS_SlotBaseTableRow *pFVar7;
  UDS_LogManager *pUVar8;
  UDS_ItemData *this;
  UObject *pUVar9;
  FDS_ItemBaseTableRow *pFVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  FWeakObjectPtr local_res8 [2];
  undefined1 auStackY_1e8 [32];
  undefined1 local_1a8 [8];
  FWeakObjectPtr local_1a0;
  ForAnyElementType local_198;
  int local_190;
  int local_18c;
  FWeakObjectPtr local_188;
  TArray<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_180;
  TSharedPtr<FDS_EquipmentItemCharacterData,1> local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_res8[0] = param_1.WeakPtr;
  bVar4 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)local_res8,(void *)0x0);
  if (!bVar4) {
    TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)&local_188);
    bVar4 = TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr> *)&local_188,(void *)0x0);
    if (!bVar4) {
      pUVar6 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_188);
      UDS_ItemDataSet::GetEquipmentItemCharacterData(pUVar6,&local_170);
      if ((local_170.Object == (FDS_EquipmentItemCharacterData *)0x0) ||
         (bVar4 = FDS_EquipmentItemCharacterData::IsEquippedItem(local_170.Object,param_2), !bVar4))
      {
        pFVar7 = FDS_SlotBaseTableRow::Get((longlong)(int)param_2,true);
        if (pFVar7 != (FDS_SlotBaseTableRow *)0x0) {
          local_198.Data = (FScriptContainerElement *)0x0;
          local_190 = (pFVar7->EquipItemType).ArrayNum;
          lVar13 = (longlong)local_190;
          _Src = (pFVar7->EquipItemType).AllocatorInstance.Data;
          if (local_190 == 0) {
            local_18c = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,local_190,0,&local_198,local_190,&local_18c);
            memcpy(local_198.Data,_Src,lVar13 << 2);
          }
          uVar15 = 0;
          if (0 < local_190) {
            lVar13 = 0;
            do {
              pUVar6 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_188);
              uVar11 = 0;
              if ((int)uVar15 < local_190) {
                uVar11 = ~uVar15 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
              UDS_ItemDataSet::GetDataListByItemType
                        (pUVar6,&local_180,*(EDS_ItemType *)(local_198.Data + lVar13));
              iVar12 = local_180.ArrayNum;
              if (iVar12 != 0) {
                pFVar1 = (FWeakObjectPtr *)(local_180.AllocatorInstance.Data + (longlong)iVar12 * 8)
                ;
                FVar14.Data = local_180.AllocatorInstance.Data;
                while( true ) {
                  if (local_180.ArrayNum != iVar12) {
                    local_1a8[0] = 0;
                    `TCheckedPointerIterator<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,0>::
                    operator!='::__l2::<lambda_1>::operator()(local_1a8);
                  }
                  if ((FWeakObjectPtr *)FVar14.Data == pFVar1) break;
                  local_1a0 = *(FWeakObjectPtr *)FVar14.Data;
                  bVar4 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                                    ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)&local_1a0,
                                     (void *)0x0);
                  if (!bVar4) {
                    this = (UDS_ItemData *)FWeakObjectPtr::Get(&local_1a0);
                    bVar4 = UDS_ItemData::IsEquipped(this);
                    if (!bVar4) {
                      pUVar9 = FWeakObjectPtr::Get(&local_1a0);
                      pFVar10 = FDS_ItemBaseTableRow::Get
                                          ((longlong)*(int *)&pUVar9[8].field_0x10,true);
                      if (pFVar10 != (FDS_ItemBaseTableRow *)0x0) {
                        if (pFVar10->CharEquipType != None) {
                          pUVar9 = FWeakObjectPtr::Get(&local_1a0);
                          iVar2 = *(int *)&pUVar9[8].field_0x10;
                          pUVar9 = FWeakObjectPtr::Get(local_res8);
                          bVar4 = DS_ItemDataUtil::IsCharacterEquippableCharacterEquipType
                                            (*(int *)&pUVar9[8].field_0x8,iVar2);
                          if (!bVar4) goto LAB_14bbae70a;
                        }
                        pUVar9 = FWeakObjectPtr::Get(&local_1a0);
                        iVar2 = *(int *)&pUVar9[0x14].field_0x1c;
                        pUVar9 = FWeakObjectPtr::Get(local_res8);
                        if (iVar2 <= *(int *)&pUVar9[8].field_0xc) {
                          if (local_180.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_180.AllocatorInstance.Data);
                          }
                          bVar4 = true;
                          goto LAB_14bbae73b;
                        }
                      }
                    }
                  }
LAB_14bbae70a:
                  FVar14.Data = FVar14.Data + 8;
                }
              }
              if (local_180.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_180.AllocatorInstance.Data);
              }
              uVar15 = uVar15 + 1;
              lVar13 = lVar13 + 4;
            } while ((int)uVar15 < local_190);
          }
          bVar4 = false;
LAB_14bbae73b:
          if (local_198.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_198.Data);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_170.SharedReferenceCount.ReferenceController);
          return bVar4;
        }
        pUVar8 = UDS_LogManager::GetInst();
        if (pUVar8 != (UDS_LogManager *)0x0) {
          pUVar8 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"FDS_CharacterService::CanEquipAbleForEmptySlot",0x2e,Yes);
          UDS_LogManager::PrintLog
                    (pUVar8,1,Warning,local_158.Ptr,0x487,L"slotBaseTableRow is nullptr.");
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_170.SharedReferenceCount.ReferenceController);
      return false;
    }
  }
  return false;
}

// CanSwitchCharacter @ 14bbae7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FDS_CharacterService::CanSwitchCharacter(ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  UDS_CharStateData *pUVar6;
  undefined1 auStackY_1b8 [32];
  FWeakObjectPtr local_188;
  FWeakObjectPtr local_180;
  EDS_CharDetailState local_178 [4];
  EDS_CharState local_168 [3];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  bVar2 = CheckCoolTime(param_1);
  if (bVar2) {
    UDS_PlayerData::GetData((ulong64)&local_180,UDS_PlayerData::MainPlayerEntityID,false);
    bVar2 = FWeakObjectPtr::IsValid(&local_180);
    if (bVar2) {
      pUVar5 = FWeakObjectPtr::Get(&local_180);
      if ((*(ulong64 *)&pUVar5[8].field_0x10 != param_1) &&
         (pUVar5 = FWeakObjectPtr::Get(&local_180), *(int *)&pUVar5[8].field_0x18 != 0)) {
        FWeakObjectPtr::Get(&local_180);
        UDS_CharStateData::GetData((ulong64)&local_188);
        bVar2 = FWeakObjectPtr::IsValid(&local_188);
        if (bVar2) {
          pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_188);
          local_168[0] = Mount;
          bVar2 = UDS_CharStateData::HasCharState(pUVar6,local_168);
          if (bVar2) {
            local_150._0_8_ = 0;
            local_150._8_8_ = 0;
            local_150._16_4_ = 0;
            UDS_UIMessageManager::OpenMsgByStringUi(0x55f06,Alert_None_01,&local_150);
          }
          else {
            pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_188);
            local_168[1] = 0x445801;
            bVar2 = UDS_CharStateData::HasCharState(pUVar6,local_168 + 1);
            if (!bVar2) {
              pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_188);
              local_168[2] = 0x10;
              bVar2 = UDS_CharStateData::HasCharState(pUVar6,local_168 + 2);
              if (bVar2) {
                pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_188);
                local_178[0] = AniCut_InputSkill;
                bVar2 = UDS_CharStateData::HasCharDetailState(pUVar6,local_178);
                if (!bVar2) {
                  return false;
                }
              }
              pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_188);
              local_178[1] = 0x22;
              bVar2 = UDS_CharStateData::HasCharDetailState(pUVar6,local_178 + 1);
              if (!bVar2) {
                pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_188);
                local_178[2] = 0x23;
                bVar2 = UDS_CharStateData::HasCharDetailState(pUVar6,local_178 + 2);
                return !bVar2;
              }
            }
          }
        }
        else {
          bVar2 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<8213295088609002036>,true,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_CharacterService.cpp"
                             ,0x234,"charState.IsValid()");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
        }
      }
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8213295088609002018>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_CharacterService.cpp"
                         ,0x222,"mainPlayerData.IsValid()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"FDS_CharacterService::CanSwitchCharacter",0x28,Yes);
        UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x224,L"mainPlayerData is invalid.")
        ;
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
  }
  return false;
}

// CanUseItemForLevelUp @ 14bbaea80

bool __cdecl
FDS_CharacterService::CanUseItemForLevelUp(TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> param_1)

{
  FWeakObjectPtr *pFVar1;
  bool bVar2;
  UDS_CharInfoData *pUVar3;
  UObject *pUVar4;
  UDS_ItemDataSet *this;
  FDS_CharacterLevelUpCostTableRow *pFVar5;
  int *piVar6;
  int *piVar7;
  long64 lVar8;
  int iVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  FWeakObjectPtr local_res8;
  EDS_InventoryType local_res10 [8];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  TArray<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_48;
  
  local_res8 = param_1.WeakPtr;
  bVar2 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)&local_res8,(void *)0x0);
  if (bVar2) {
    return false;
  }
  pUVar3 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&local_res8);
  bVar2 = UDS_CharInfoData::CanLevelup(pUVar3);
  if (!bVar2) {
    return false;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_res8);
  lVar11 = *(longlong *)&pUVar4[8].field_0x10;
  TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)&local_res20);
  bVar2 = TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar2) {
    return false;
  }
  this = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_res20);
  UDS_ItemDataSet::GetDataListByItemType(this,&local_48,EXPCharacter);
  iVar9 = local_48.ArrayNum;
  if (iVar9 != 0) {
    pFVar1 = (FWeakObjectPtr *)(local_48.AllocatorInstance.Data + (longlong)iVar9 * 8);
    FVar10.Data = local_48.AllocatorInstance.Data;
    while( true ) {
      if (local_48.ArrayNum != iVar9) {
        `TCheckedPointerIterator<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res10);
      }
      if ((FWeakObjectPtr *)FVar10.Data == pFVar1) break;
      local_res18 = *(FWeakObjectPtr *)FVar10.Data;
      bVar2 = FWeakObjectPtr::IsValid(&local_res18);
      if (bVar2) {
        pUVar4 = FWeakObjectPtr::Get(&local_res18);
        pFVar5 = FDS_CharacterLevelUpCostTableRow::GetRef
                           ((longlong)*(int *)&pUVar4[8].field_0x10,true);
        pUVar4 = FWeakObjectPtr::Get(&local_res18);
        if (pUVar4[0x13].field_0x1c != '\0') {
          lVar11 = lVar11 + pFVar5->RewardCharExp;
          goto LAB_14bbaec20;
        }
        pUVar4 = FWeakObjectPtr::Get(&local_res18);
        local_res10[0] = PlayerNormal;
        piVar6 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                 ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                           (&pUVar4[10].field_0x18,1,local_res10);
        piVar7 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                 ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                           (&pUVar4[8].field_0x18,(uint)local_res10[0],local_res10);
        lVar11 = lVar11 + (longlong)(*piVar7 + *piVar6) * pFVar5->RewardCharExp;
        FVar10.Data = FVar10.Data + 8;
      }
      else {
LAB_14bbaec20:
        FVar10.Data = FVar10.Data + 8;
      }
    }
    pUVar3 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&local_res8);
    lVar8 = UDS_CharInfoData::GetRequiredCharExp(pUVar3);
    if (lVar8 <= lVar11) {
      bVar2 = true;
      goto LAB_14bbaec64;
    }
  }
  bVar2 = false;
LAB_14bbaec64:
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return bVar2;
}

// CheckCoolTime @ 14bbaedd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FDS_CharacterService::CheckCoolTime(ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  UDS_LogManager *pUVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStackY_1c8 [32];
  FIdentityFunctor local_198 [8];
  ForAnyElementType local_190;
  undefined8 local_188;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  dVar6 = UDS_TimeCoolDownManager::GetCoolDownRemainTime(CharacterChangeCoolTime,param_1);
  dVar7 = UDS_TimeCoolDownManager::GetCoolDownRemainTime(ChangeCancelGlobalCoolTime,0);
  dVar8 = UDS_TimeCoolDownManager::GetCoolDownRemainTime(CharacterChangeGlobalCoolTime,0);
  local_190.Data = (FScriptContainerElement *)0x0;
  local_188 = 0;
  dVar9 = UDS_TimeCoolDown::GetCoolDownTime(CharacterChangeCoolTime);
  iVar4 = (int)local_188;
  if ((int)local_188 == local_188._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_190,(int *)((longlong)&local_188 + 4));
  }
  *(double *)(local_190.Data + (longlong)iVar4 * 0x10) = dVar6;
  *(double *)(local_190.Data + (longlong)iVar4 * 0x10 + 8) = dVar9;
  local_188._0_4_ = iVar4 + 1;
  dVar6 = UDS_TimeCoolDown::GetCoolDownTime(ChangeCancelGlobalCoolTime);
  if ((int)local_188 == local_188._4_4_) {
    local_188._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_190,(int *)((longlong)&local_188 + 4));
  }
  *(double *)(local_190.Data + (longlong)(int)local_188 * 0x10) = dVar7;
  *(double *)(local_190.Data + (longlong)(int)local_188 * 0x10 + 8) = dVar6;
  local_188._0_4_ = (int)local_188 + 1;
  dVar6 = UDS_TimeCoolDown::GetCoolDownTime(CharacterChangeGlobalCoolTime);
  iVar4 = (int)local_188;
  if ((int)local_188 == local_188._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_190,(int *)((longlong)&local_188 + 4));
  }
  local_188 = CONCAT44(local_188._4_4_,iVar4 + 1);
  *(double *)(local_190.Data + (longlong)iVar4 * 0x10) = dVar8;
  *(double *)(local_190.Data + (longlong)iVar4 * 0x10 + 8) = dVar6;
  AlgoImpl::
  IntroSortInternal<TTuple<double,double>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<double,double>,_FDS_CharacterService::GetCharSwitchCoolRemainTime_::__l2::<lambda_1>_>_>
            ((TTuple<double,double> *)local_190.Data,iVar4 + 1,local_198[0],(<lambda_1> *)local_198)
  ;
  if ((int)local_188 < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  dVar6 = *(double *)local_190.Data;
  if ((TTuple<double,double> *)local_190.Data != (TTuple<double,double> *)0x0) {
    FMemory::Free(local_190.Data);
  }
  if (dVar6 <= 0.0) {
    bVar2 = true;
  }
  else {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_178._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_178,"FDS_CharacterService::CheckCoolTime",0x23,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_178.Ptr,0x262,L"Not Enough Cooltime");
      if ((void *)local_178._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_178._padding_);
      }
    }
    bVar2 = false;
  }
  return bVar2;
}

// DoCharacterSwitch @ 14bbb2e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __cdecl
FDS_CharacterService::DoCharacterSwitch(ulong64 *param_1,ulong64 *param_2,ulong64 *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  UDS_LogManager *pUVar8;
  UDS_PlayerData *pUVar9;
  FDS_EntityBase *pFVar10;
  UDS_EntityManager *this;
  AActor *this_00;
  UWorld *pUVar11;
  FDS_EntityBase *this_01;
  FDS_CharacterBaseTableRow *pFVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auStackY_778 [32];
  FWeakObjectPtr local_738;
  FWeakObjectPtr local_730;
  FDestructionSentinel local_728;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_708;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_778;
  if (*param_2 != *param_3) {
    UDS_PlayerData::GetData((ulong64)&local_738,*param_1,false);
    bVar3 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_738,(void *)0x0);
    if (bVar3) {
      pUVar8 = UDS_LogManager::GetInst();
      if (pUVar8 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar8 = UDS_LogManager::GetInst();
      local_708._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_708,"FDS_CharacterService::DoCharacterSwitch",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_708.Ptr,0x5ff,L"playerData is nullptr. (%llu)");
      pFVar10 = (FDS_EntityBase *)local_708._padding_;
    }
    else {
      pUVar9 = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_738);
      UDS_PlayerData::PrepareCharacterSwitch(pUVar9);
      pFVar10 = FDS_EntityBase::GetEntityBase(param_2);
      if (pFVar10 == (FDS_EntityBase *)0x0) {
        pUVar8 = UDS_LogManager::GetInst();
        if (pUVar8 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar8 = UDS_LogManager::GetInst();
        local_5e8._padding_ = (longlong)pFVar10;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_5e8,"FDS_CharacterService::DoCharacterSwitch",0x27,Yes);
        UDS_LogManager::PrintLog
                  (pUVar8,1,Warning,local_5e8.Ptr,0x608,L"curCharEntity is nullptr. (%llu)");
        pFVar10 = (FDS_EntityBase *)local_5e8._padding_;
      }
      else {
        (**(code **)(pFVar10->_padding_ + 8))(pFVar10);
        pUVar9 = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_738);
        UDS_PlayerData::SetCurrentCharEntityID(pUVar9,*param_3);
        (**(code **)(pFVar10->_padding_ + 0x150))(pFVar10);
        bVar3 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_730,(void *)0x0);
        if (bVar3) {
          pUVar8 = UDS_LogManager::GetInst();
          if (pUVar8 == (UDS_LogManager *)0x0) {
            return false;
          }
          pUVar8 = UDS_LogManager::GetInst();
          local_4c8._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_4c8,"FDS_CharacterService::DoCharacterSwitch",0x27,Yes);
          UDS_LogManager::PrintLog
                    (pUVar8,1,Warning,local_4c8.Ptr,0x614,L"curCharEntityActor is nullptr. (%llu)");
          pFVar10 = (FDS_EntityBase *)local_4c8._padding_;
        }
        else {
          this = UDS_EntityManager::GetInst();
          if (this == (UDS_EntityManager *)0x0) {
            pUVar8 = UDS_LogManager::GetInst();
            if (pUVar8 == (UDS_LogManager *)0x0) {
              return false;
            }
            pUVar8 = UDS_LogManager::GetInst();
            local_3a8._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_3a8,"FDS_CharacterService::DoCharacterSwitch",0x27,Yes);
            UDS_LogManager::PrintLog(pUVar8,1,Warning,local_3a8.Ptr,0x61b,L"entityMng is nullptr.");
            pFVar10 = (FDS_EntityBase *)local_3a8._padding_;
          }
          else {
            this_00 = (AActor *)FWeakObjectPtr::Get(&local_730);
            pUVar11 = AActor::GetWorld(this_00);
            UDS_EntityManager::CreateMainCharacter(this,pUVar11);
            this_01 = FDS_EntityBase::GetEntityBase(param_3);
            if (this_01 == (FDS_EntityBase *)0x0) {
              pUVar8 = UDS_LogManager::GetInst();
              if (pUVar8 == (UDS_LogManager *)0x0) {
                return false;
              }
              pUVar8 = UDS_LogManager::GetInst();
              local_288._padding_ = (longlong)this_01;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_288,"FDS_CharacterService::DoCharacterSwitch",0x27,Yes);
              UDS_LogManager::PrintLog
                        (pUVar8,1,Warning,local_288.Ptr,0x623,L"nextCharEntity is nullptr. (%llu)");
              pFVar10 = (FDS_EntityBase *)local_288._padding_;
            }
            else {
              if (pFVar10->BattleState == true) {
                FDS_EntityBase::SetBattleState(this_01,true);
              }
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                         &ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,
                         (FWriteAccessScope *)&local_728);
              bVar3 = false;
              ADS_MainCharacter::MainCharacterSwitchCompleteDelegate._28_4_ =
                   ADS_MainCharacter::MainCharacterSwitchCompleteDelegate._28_4_ + 1;
              uVar13 = ADS_MainCharacter::MainCharacterSwitchCompleteDelegate._16_4_ - 1;
              if (-1 < (int)uVar13) {
                lVar14 = (longlong)(int)uVar13 << 4;
                bVar3 = false;
                do {
                  uVar7 = 0;
                  if ((int)uVar13 <
                      (int)ADS_MainCharacter::MainCharacterSwitchCompleteDelegate._16_4_) {
                    uVar7 = ~uVar13 >> 0x1f;
                  }
                  if ((uVar7 == 0) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar4)) {
                    pcVar2 = (code *)swi(3);
                    uVar5 = (*pcVar2)();
                    return (bool)uVar5;
                  }
                  if (((*(int *)(lVar14 + 8 +
                                ADS_MainCharacter::MainCharacterSwitchCompleteDelegate._8_8_) == 0)
                      || (plVar1 = *(longlong **)
                                    (lVar14 + ADS_MainCharacter::MainCharacterSwitchCompleteDelegate
                                              ._8_8_), plVar1 == (longlong *)0x0)) ||
                     (cVar6 = (**(code **)(*plVar1 + 0x68))(plVar1,pFVar10,this_01), cVar6 == '\0'))
                  {
                    bVar3 = true;
                  }
                  lVar14 = lVar14 + -0x10;
                  uVar13 = uVar13 - 1;
                } while (-1 < (int)uVar13);
              }
              ADS_MainCharacter::MainCharacterSwitchCompleteDelegate._28_4_ =
                   ADS_MainCharacter::MainCharacterSwitchCompleteDelegate._28_4_ + -1;
              if (bVar3) {
                TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                           &ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,false);
              }
              if (local_728.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_728.Accessor,&local_728);
              }
              pFVar12 = FDS_CharacterBaseTableRow::Get((longlong)(int)this_01->TableID,true);
              if (pFVar12 != (FDS_CharacterBaseTableRow *)0x0) {
                bVar3 = FDS_EntityBase::TryActivateSkillAbility(this_01,pFVar12->ID_SwitchingSkill);
                return bVar3;
              }
              pUVar8 = UDS_LogManager::GetInst();
              if (pUVar8 == (UDS_LogManager *)0x0) {
                return false;
              }
              pUVar8 = UDS_LogManager::GetInst();
              local_168._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_168,"FDS_CharacterService::DoCharacterSwitch",0x27,Yes);
              UDS_LogManager::PrintLog
                        (pUVar8,1,Warning,local_168.Ptr,0x635,L"characterBaseTable is nullptr. (%d)"
                        );
              pFVar10 = (FDS_EntityBase *)local_168._padding_;
            }
          }
        }
      }
    }
    if (pFVar10 != (FDS_EntityBase *)0x0) {
      FMemory::Free(pFVar10);
    }
  }
  return false;
}

// GetCharSwitchCoolRemainTime @ 14bbbb9b0

TTuple<double,double> * __cdecl
FDS_CharacterService::GetCharSwitchCoolRemainTime
          (TTuple<double,double> *__return_storage_ptr__,ulong64 param_1)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  TTuple<double,double> *pTVar9;
  FIdentityFunctor local_res8 [8];
  ForAnyElementType local_58;
  undefined8 local_50;
  
  dVar2 = UDS_TimeCoolDownManager::GetCoolDownRemainTime(CharacterChangeCoolTime,param_1);
  dVar3 = UDS_TimeCoolDownManager::GetCoolDownRemainTime(ChangeCancelGlobalCoolTime,0);
  dVar4 = UDS_TimeCoolDownManager::GetCoolDownRemainTime(CharacterChangeGlobalCoolTime,0);
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  dVar5 = UDS_TimeCoolDown::GetCoolDownTime(CharacterChangeCoolTime);
  iVar8 = (int)local_50;
  if ((int)local_50 == local_50._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_58,(int *)((longlong)&local_50 + 4));
  }
  *(double *)(local_58.Data + (longlong)iVar8 * 0x10) = dVar2;
  *(double *)(local_58.Data + (longlong)iVar8 * 0x10 + 8) = dVar5;
  local_50._0_4_ = iVar8 + 1;
  dVar2 = UDS_TimeCoolDown::GetCoolDownTime(ChangeCancelGlobalCoolTime);
  if ((int)local_50 == local_50._4_4_) {
    local_50._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_58,(int *)((longlong)&local_50 + 4));
  }
  *(double *)(local_58.Data + (longlong)(int)local_50 * 0x10) = dVar3;
  *(double *)(local_58.Data + (longlong)(int)local_50 * 0x10 + 8) = dVar2;
  local_50._0_4_ = (int)local_50 + 1;
  dVar2 = UDS_TimeCoolDown::GetCoolDownTime(CharacterChangeGlobalCoolTime);
  iVar8 = (int)local_50;
  if ((int)local_50 == local_50._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_58,(int *)((longlong)&local_50 + 4));
  }
  local_50 = CONCAT44(local_50._4_4_,iVar8 + 1);
  *(double *)(local_58.Data + (longlong)iVar8 * 0x10) = dVar4;
  *(double *)(local_58.Data + (longlong)iVar8 * 0x10 + 8) = dVar2;
  AlgoImpl::
  IntroSortInternal<TTuple<double,double>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<double,double>,_FDS_CharacterService::GetCharSwitchCoolRemainTime_::__l2::<lambda_1>_>_>
            ((TTuple<double,double> *)local_58.Data,iVar8 + 1,local_res8[0],(<lambda_1> *)local_res8
            );
  if ((int)local_50 < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      pTVar9 = (TTuple<double,double> *)(*pcVar1)();
      return pTVar9;
    }
  }
  uVar6 = *(undefined8 *)(local_58.Data + 8);
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)local_58.Data;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar6;
  if ((TTuple<double,double> *)local_58.Data != (TTuple<double,double> *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return __return_storage_ptr__;
}

// OnCheckCharacterCanEquipItem @ 14bbc7dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FDS_CharacterService::OnCheckCharacterCanEquipItem(void)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  bool bVar13;
  UDS_LogManager *pUVar14;
  ForAnyElementType FVar15;
  bool bVar16;
  bool bVar17;
  undefined1 auStackY_268 [32];
  uint uVar18;
  wchar_t *pwVar19;
  undefined1 local_227 [7];
  ForAnyElementType local_220;
  int local_218;
  int local_214;
  FWeakObjectPtr local_210;
  FWeakObjectPtr local_208 [12];
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_198;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_268;
  bVar16 = false;
  bVar17 = false;
  UDS_PlayerData::GetMainPlayerData();
  bVar13 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                     ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_210,(void *)0x0);
  if (bVar13) {
    pUVar14 = UDS_LogManager::GetInst();
    if (pUVar14 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar14 = UDS_LogManager::GetInst();
    local_198._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_198,"FDS_CharacterService::OnCheckCharacterCanEquipItem",0x32,Yes);
    pwVar19 = L"playerData is nullptr";
    uVar18 = 0x457;
  }
  else {
    FWeakObjectPtr::Get(&local_210);
    UDS_CharInfoData::GetData((ulong64)local_208);
    bVar13 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                       ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)local_208,(void *)0x0);
    uVar11 = _UNK_1527836b8;
    uVar10 = ___xmm_0000c739000052100000520f0000520e;
    uVar9 = _UNK_1527836a8;
    uVar8 = ___xmm_0000520d0000520c0000520b0000520a;
    uVar7 = _UNK_152783698;
    uVar6 = ___xmm_0000520900002b0200002b0100002b00;
    uVar5 = _UNK_152783688;
    uVar4 = ___xmm_00002aff00002afe00002afd00002afc;
    uVar3 = _UNK_152783678;
    uVar2 = ___xmm_00002afb00002afa00002af900000000;
    if (!bVar13) {
      local_1a8 = 0xc73a;
      uStack_1a4 = 0xc73b;
      local_220.Data = (FScriptContainerElement *)0x0;
      local_218 = 0x16;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0x16,0,&local_220,0x16,&local_214);
      iVar12 = local_218;
      *(undefined8 *)local_220.Data = uVar2;
      *(undefined8 *)(local_220.Data + 8) = uVar3;
      *(undefined8 *)(local_220.Data + 0x10) = uVar4;
      *(undefined8 *)(local_220.Data + 0x18) = uVar5;
      *(undefined8 *)(local_220.Data + 0x20) = uVar6;
      *(undefined8 *)(local_220.Data + 0x28) = uVar7;
      *(undefined8 *)(local_220.Data + 0x30) = uVar8;
      *(undefined8 *)(local_220.Data + 0x38) = uVar9;
      *(undefined8 *)(local_220.Data + 0x40) = uVar10;
      *(undefined8 *)(local_220.Data + 0x48) = uVar11;
      *(ulonglong *)(local_220.Data + 0x50) = CONCAT44(uStack_1a4,local_1a8);
      pFVar1 = local_220.Data + (longlong)local_218 * 4;
      FVar15.Data = local_220.Data;
      while( true ) {
        if (local_218 != iVar12) {
          `TCheckedPointerIterator<enum_EDS_EquipSlotType,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_227);
        }
        if (FVar15.Data == pFVar1) break;
        if ((*(EDS_EquipSlotType *)FVar15.Data != None) &&
           (bVar13 = CanEquipAbleForEmptySlot
                               ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>)local_208[0],
                                *(EDS_EquipSlotType *)FVar15.Data), bVar17 = bVar16, bVar13)) {
          bVar16 = true;
          bVar17 = true;
        }
        FVar15.Data = FVar15.Data + 4;
      }
      if (local_220.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_220.Data);
        return bVar17;
      }
      return bVar17;
    }
    pUVar14 = UDS_LogManager::GetInst();
    if (pUVar14 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar14 = UDS_LogManager::GetInst();
    local_198._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_198,"FDS_CharacterService::OnCheckCharacterCanEquipItem",0x32,Yes);
    pwVar19 = L"charInfo is nullptr";
    uVar18 = 0x45e;
  }
  UDS_LogManager::PrintLog(pUVar14,1,Warning,local_198.Ptr,uVar18,pwVar19);
  if ((void *)local_198._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_198._padding_);
  }
  return false;
}

// OnCheckItemForAscend @ 14bbc80b0

bool __cdecl
FDS_CharacterService::OnCheckItemForAscend(TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  UDS_CharInfoData *this;
  UObject *pUVar9;
  long64 lVar10;
  FDS_CharacterAscendTableRow *pFVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  FWeakObjectPtr local_res8;
  EDS_InventoryType local_res10 [8];
  undefined1 local_res18 [8];
  FWeakObjectPtr local_res20;
  
  local_res8 = param_1.WeakPtr;
  bVar6 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)&local_res8,(void *)0x0);
  if (!bVar6) {
    this = (UDS_CharInfoData *)FWeakObjectPtr::Get(&local_res8);
    pUVar9 = FWeakObjectPtr::Get(&local_res8);
    lVar10 = UDS_CharInfoData::GetAscendTableRowID(this,*(int *)&pUVar9[0xd].field_0x10);
    pFVar11 = FDS_CharacterAscendTableRow::GetRef(lVar10,true);
    iVar2 = (pFVar11->ReqItem).ArrayNum;
    if (iVar2 == 0) {
      return true;
    }
    pFVar15 = (pFVar11->ReqItem).AllocatorInstance.Data;
    uVar14 = 0;
    lVar16 = 0;
    pFVar1 = pFVar15 + (longlong)iVar2 * 4;
    while( true ) {
      if ((pFVar11->ReqItem).ArrayNum != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar15 == pFVar1) {
        return true;
      }
      DS_ItemDataUtil::GetItemDataByTID((int)&local_res20);
      bVar6 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)&local_res20,(void *)0x0);
      if (bVar6) break;
      if ((-1 < (int)uVar14) && ((int)uVar14 < (pFVar11->ReqItemCnt).ArrayNum)) {
        pUVar9 = FWeakObjectPtr::Get(&local_res20);
        local_res10[0] = PlayerNormal;
        piVar12 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                  ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                            (&pUVar9[10].field_0x18,1,local_res10);
        piVar13 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                  ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                            (&pUVar9[8].field_0x18,(uint)local_res10[0],local_res10);
        iVar3 = *piVar12;
        iVar4 = *piVar13;
        uVar8 = 0;
        if ((int)uVar14 < (pFVar11->ReqItemCnt).ArrayNum) {
          uVar8 = ~uVar14 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        if (iVar3 + iVar4 < *(int *)((pFVar11->ReqItemCnt).AllocatorInstance.Data + lVar16)) {
          return false;
        }
      }
      uVar14 = uVar14 + 1;
      lVar16 = lVar16 + 4;
      pFVar15 = pFVar15 + 4;
    }
  }
  return false;
}

// OnCkeckMoneyForAscend @ 14bbc8260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FDS_CharacterService::OnCkeckMoneyForAscend(TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UDS_CharInfoData *this;
  UObject *pUVar4;
  long64 lVar5;
  FDS_CharacterAscendTableRow *this_00;
  UDS_MoneyDataSet *pUVar6;
  UDS_MoneyData *pUVar7;
  FDS_MoneyExchangeTableRow *pFVar8;
  UDS_LogManager *pUVar9;
  long64 lVar10;
  float fVar11;
  FWeakObjectPtr local_res8;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158;
  FWeakObjectPtr local_150;
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_res8 = param_1.WeakPtr;
  bVar2 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)&local_res8,(void *)0x0);
  if (!bVar2) {
    this = (UDS_CharInfoData *)FWeakObjectPtr::Get(&local_res8);
    pUVar4 = FWeakObjectPtr::Get(&local_res8);
    lVar5 = UDS_CharInfoData::GetAscendTableRowID(this,*(int *)&pUVar4[0xd].field_0x10);
    this_00 = FDS_CharacterAscendTableRow::GetRef(lVar5,true);
    if (this_00->ReqMoneyValue == 0) {
      return true;
    }
    TDS_DataSetGetter<UDS_MoneyDataSet>::Get((ulong64)&local_150);
    bVar2 = TWeakObjectPtr<UDS_MoneyDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MoneyDataSet,FWeakObjectPtr> *)&local_150,(void *)0x0);
    if (!bVar2) {
      pUVar6 = (UDS_MoneyDataSet *)FWeakObjectPtr::Get(&local_150);
      UDS_MoneyDataSet::GetMoneyData(pUVar6,(EDS_MoneyType)&local_158);
      bVar2 = TWeakObjectPtr<UDS_MoneyData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_MoneyData,FWeakObjectPtr> *)&local_158,(void *)0x0);
      if (!bVar2) {
        pUVar7 = (UDS_MoneyData *)FWeakObjectPtr::Get(&local_158);
        lVar5 = UDS_MoneyData::GetTotalQuantity(pUVar7);
        if (this_00->ReqMoneyValue <= lVar5) {
          return true;
        }
        pFVar8 = FDS_CharacterAscendTableRow::ID_MoneyExchangeTable(this_00);
        if (pFVar8->ExchangeRate == 0) {
          pUVar9 = UDS_LogManager::GetInst();
          if (pUVar9 != (UDS_LogManager *)0x0) {
            pUVar9 = UDS_LogManager::GetInst();
            local_138._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_138,"FDS_CharacterService::OnCkeckMoneyForAscend",0x2b,Yes);
            UDS_LogManager::PrintLog
                      (pUVar9,1,Warning,local_138.Ptr,0x43a,
                       L"moneyExchangeTableRow.ExchangeRate is 0.");
            if ((void *)local_138._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_138._padding_);
            }
          }
          bVar2 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<8213295088609002555>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_CharacterService.cpp"
                             ,0x43b,"false");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
        }
        else {
          pUVar7 = (UDS_MoneyData *)FWeakObjectPtr::Get(&local_158);
          lVar5 = this_00->ReqMoneyValue;
          lVar10 = UDS_MoneyData::GetTotalQuantity(pUVar7);
          fVar11 = __real_bf000000 -
                   (float)pFVar8->ExchangeRate * (float)((int)lVar5 - (int)lVar10) * __real_360637bd
          ;
          pUVar6 = (UDS_MoneyDataSet *)FWeakObjectPtr::Get(&local_150);
          UDS_MoneyDataSet::GetMoneyData(pUVar6,(EDS_MoneyType)local_148);
          bVar2 = TWeakObjectPtr<UDS_MoneyData,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_MoneyData,FWeakObjectPtr> *)local_148,(void *)0x0);
          if (!bVar2) {
            pUVar7 = (UDS_MoneyData *)FWeakObjectPtr::Get(local_148);
            lVar5 = UDS_MoneyData::GetTotalQuantity(pUVar7);
            return -((int)ROUND(fVar11) >> 1) <= lVar5;
          }
        }
      }
    }
  }
  return false;
}

// OnEquipWarningPopupCancleClicked @ 14bbc90b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FDS_CharacterService::OnEquipWarningPopupCancleClicked
          (TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  UDS_WindowManager *this;
  float local_res10 [2];
  uint local_res18 [4];
  
  this = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this == (UDS_WindowManager *)0x0) {
      return;
    }
  }
  else {
    if (this == (UDS_WindowManager *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_res10[0] = 0.0;
  local_res18[0] = 0;
  UDS_WindowManager::CloseWindow(this,PopupCommon,local_res18,local_res10);
  local_res10[0] = 0.0;
  local_res18[0] = 0;
  UDS_WindowManager::CloseWindow(this,ItemDetailInfo,local_res18,local_res10);
  return;
}

// OnEquipWarningPopupConfirmClicked @ 14bbc9140

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FDS_CharacterService::OnEquipWarningPopupConfirmClicked
          (TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1,long64 param_2,int param_3,
          int param_4)

{
  UDS_WindowManager *this;
  float local_18;
  float local_14 [3];
  
  RequestEquipItem(EquipBattle,param_4,param_2);
  this = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this == (UDS_WindowManager *)0x0) {
      return;
    }
  }
  else {
    if (this == (UDS_WindowManager *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_18 = 0.0;
  local_14[0] = 0.0;
  UDS_WindowManager::CloseWindow(this,PopupCommon,(uint *)local_14,&local_18);
  local_14[0] = 0.0;
  local_18 = 0.0;
  UDS_WindowManager::CloseWindow(this,ItemDetailInfo,(uint *)&local_18,local_14);
  return;
}

// OnOpenLevelUpResult @ 14bbcb2c0

void __cdecl
FDS_CharacterService::OnOpenLevelUpResult
          (UDS_UserWidget *param_1,int param_2,int param_3,int param_4,int param_5,bool param_6,
          TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *param_7)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  UScriptStruct *pUVar5;
  UDS_ViewModelContextManager *this;
  FWeakObjectPtr local_58;
  UDS_UserWidget *local_50;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  
  if (param_1 != (UDS_UserWidget *)0x0) {
    pFVar3 = ::operator_new(0x88);
    if (pFVar3 == (FDS_ViewModelContext *)0x0) {
      pFVar3 = (FDS_ViewModelContext *)0x0;
    }
    else {
      pFVar3->_padding_ = 0;
      pFVar3->DerivedStaticStruct = (UStruct *)0x0;
      (pFVar3->ViewModelName).ComparisonIndex = 0;
      (pFVar3->ViewModelName).Number = 0;
      *(undefined8 *)&pFVar3->ViewModelTemplateKey = 0;
      pFVar3[1]._padding_ = 0;
      pFVar3[1].DerivedStaticStruct = (UStruct *)0x0;
      pFVar3[1].ViewModelName.ComparisonIndex = 0;
      pFVar3[1].ViewModelName.Number = 0;
      *(undefined8 *)&pFVar3[1].ViewModelTemplateKey = 0;
      pFVar3[2]._padding_ = 0;
      pFVar3[2].DerivedStaticStruct = (UStruct *)0x0;
      pFVar3[2].ViewModelName.ComparisonIndex = 0;
      pFVar3[2].ViewModelName.Number = 0;
      *(undefined8 *)&pFVar3[2].ViewModelTemplateKey = 0;
      pFVar3[3]._padding_ = 0;
      pFVar3[3].DerivedStaticStruct = (UStruct *)0x0;
      pFVar3[3].ViewModelName.ComparisonIndex = 0;
      pFVar3[3].ViewModelName.Number = 0;
      *(undefined8 *)&pFVar3[3].ViewModelTemplateKey = 0;
      pFVar3[4]._padding_ = 0;
      pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_CharacterLevelUpResultInfo__6B_;
      *(undefined4 *)((longlong)&pFVar3[3]._padding_ + 4) = 0x80;
      *(undefined4 *)&pFVar3[3].DerivedStaticStruct = 0xffffffff;
    }
    pTVar4 = ::operator_new(0x20);
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      pTVar4 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar4->SharedReferenceCount = (atomic<int>)0x1;
      pTVar4[1]._padding_ = (longlong)ViewModelContextDeleter;
      pTVar4->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CharacterLevelUpResultInfo__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      pTVar4->WeakReferenceCount = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pTVar4[1].SharedReferenceCount = pFVar3;
    }
    if (pFVar3 == (FDS_ViewModelContext *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pUVar5 = FDS_ViewModelContext_CharacterLevelUpResultInfo::StaticStruct();
    pFVar3->DerivedStaticStruct = (UStruct *)pUVar5;
    this = UDS_ViewModelContextManager::GetInst();
    if (this != (UDS_ViewModelContextManager *)0x0) {
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48.Object = pFVar3;
      local_48.SharedReferenceCount.ReferenceController = pTVar4;
      UDS_ViewModelContextManager::RegisterContext(this,&local_48);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
    }
    pFVar3->ViewModelTemplateKey = W_CharacterLevelUp;
    *(int *)((longlong)&pFVar3[1]._padding_ + 4) = param_2;
    *(int *)&pFVar3[1].DerivedStaticStruct = param_3;
    *(int *)((longlong)&pFVar3[1].DerivedStaticStruct + 4) = param_4;
    *(bool *)&pFVar3[1]._padding_ = param_6;
    pFVar3[1].ViewModelName.ComparisonIndex.Value = param_5;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::operator=
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               &pFVar3[1].ViewModelTemplateKey,
               (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               param_7);
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38.Object = pFVar3;
    local_38.SharedReferenceCount.ReferenceController = pTVar4;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_58,&local_38,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  *(undefined4 *)&param_7->field_0x48 = 0;
  if (*(void **)&param_7->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&param_7->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)param_7);
  return;
}

// ProcessError @ 14bbce7b0

bool __cdecl FDS_CharacterService::ProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  return false;
}

// ProcessError_StatusDetailView @ 14bbce990

bool __cdecl
FDS_CharacterService::ProcessError_StatusDetailView
          (FDS_ErrorMessageInfo *param_1,Message *param_2,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_3)

{
  longlong *plVar1;
  void *pvVar2;
  FReadAccessScope local_28;
  
  if (param_1->ErrorCode == StatusDetailCharacterInterval) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_28);
    if ((*(int *)&param_3->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_3->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
    pvVar2 = *(void **)&param_3->field_0x8;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)param_3);
    return true;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  if (*(void **)&param_3->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_3);
  return false;
}

// ReceiveCombatPowerResponse @ 14bbd0b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_CharacterService::ReceiveCombatPowerResponse(ServerMessages *param_1)

{
  float fVar1;
  int iVar2;
  ulong64 uVar3;
  bool bVar4;
  int iVar5;
  CombatPowerResponseDefaultTypeInternal *pCVar6;
  ulong64 uVar7;
  UDS_LogManager *pUVar8;
  UDS_CharInfoData *this;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if ((param_1->_impl_)._oneof_case_[0] == 0x45) {
    pCVar6 = *(CombatPowerResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pCVar6 = &server_msg::_CombatPowerResponse_default_instance_;
  }
  iVar2 = *(int *)&((Message *)((longlong)pCVar6 + 0x20))->field_0x4;
  uVar3 = *(ulong64 *)&((Message *)((longlong)pCVar6 + 0x10))->field_0x8;
  fVar1 = *(float *)&((Message *)((longlong)pCVar6 + 0x20))->field_0x8;
  iVar5 = UDS_PlayerData::GetMainPlayerCurrentCharID();
  if ((iVar2 != iVar5) && (uVar7 = UDS_PlayerData::GetMainPlayerCurrentEntityID(), uVar3 != uVar7))
  {
    return;
  }
  UDS_CharInfoData::GetData((ulong64)local_158);
  bVar4 = FWeakObjectPtr::IsValid(local_158);
  if (bVar4) {
    this = (UDS_CharInfoData *)FWeakObjectPtr::Get(local_158);
    UDS_CharInfoData::SetCombatPower(this,(double)fVar1);
  }
  else {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"FDS_CharacterService::ReceiveCombatPowerResponse",0x30,Yes);
      UDS_LogManager::PrintLog(pUVar8,1,Warning,local_148.Ptr,0x88,L"charInfoData is Invalid.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  return;
}

// ReceiveCurrentStatusResponse @ 14bbd0ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_CharacterService::ReceiveCurrentStatusResponse(ServerMessages *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_CharStatusData *this;
  uint uVar3;
  ulonglong uVar4;
  CurrentStatusResponseDefaultTypeInternal *pCVar5;
  longlong *plVar6;
  undefined1 auStackY_1a8 [32];
  FWeakObjectPtr local_168 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_1->_impl_)._oneof_case_[0] == 0x39) {
    pCVar5 = *(CurrentStatusResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pCVar5 = &server_msg::_CurrentStatusResponse_default_instance_;
  }
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField
            ((MapFieldBase *)((longlong)pCVar5 + 0x10));
  uVar4 = (ulonglong)*(uint *)&((Message *)((longlong)pCVar5 + 0x20))->field_0x8;
  if ((*(uint *)&((Message *)((longlong)pCVar5 + 0x20))->field_0x8 !=
       *(uint *)&((Message *)((longlong)pCVar5 + 0x20))->field_0x4) &&
     (plVar6 = *(longlong **)(*(longlong *)((longlong)pCVar5 + 0x30) + uVar4 * 8),
     plVar6 != (longlong *)0x0)) {
    while( true ) {
      do {
        UDS_CharStatusData::GetData((ulong64)local_168);
        bVar1 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)local_168,
                           (void *)0x0);
        if (bVar1) {
          pUVar2 = UDS_LogManager::GetInst();
          if (pUVar2 != (UDS_LogManager *)0x0) {
            pUVar2 = UDS_LogManager::GetInst();
            local_158._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_158,"FDS_CharacterService::ReceiveCurrentStatusResponse",0x32,Yes);
            UDS_LogManager::PrintLog
                      (pUVar2,1,Warning,local_158.Ptr,0x212,L"charStatusData is nullptr. (%llu)");
            if ((void *)local_158._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_158._padding_);
            }
          }
        }
        else {
          this = (UDS_CharStatusData *)FWeakObjectPtr::Get(local_168);
          UDS_CharStatusData::SetCurrentStatusByStatusIntegers(this,(StatusIntegers *)(plVar6 + 2));
        }
        plVar6 = (longlong *)*plVar6;
      } while (plVar6 != (longlong *)0x0);
      uVar3 = (int)uVar4 + 1;
      if (*(uint *)&((Message *)((longlong)pCVar5 + 0x20))->field_0x4 <= uVar3) break;
      while( true ) {
        uVar4 = (ulonglong)uVar3;
        plVar6 = *(longlong **)(*(longlong *)((longlong)pCVar5 + 0x30) + uVar4 * 8);
        if (plVar6 != (longlong *)0x0) break;
        uVar3 = uVar3 + 1;
        if (*(uint *)&((Message *)((longlong)pCVar5 + 0x20))->field_0x4 <= uVar3) {
          return;
        }
      }
    }
  }
  return;
}

// ReceiveEquipItem @ 14bbd1b10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl FDS_CharacterService::ReceiveEquipItem(ServerMessages *param_1)

{
  bool bVar1;
  EDS_EquipSlotType EVar2;
  FDS_EntityBase *pFVar3;
  FDS_ItemBaseTableRow *pFVar4;
  FDS_WeaponTypeBaseTableRow *pFVar5;
  UDS_SkillDataSet *this;
  UDS_CharInfoData *this_00;
  UDS_NormalAttackAbilityData *this_01;
  UDS_ItemDataSet *this_02;
  EquipResponseDefaultTypeInternal *pEVar6;
  FWeakObjectPtr local_res8;
  ulong64 local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_28 [2];
  
  if ((param_1->_impl_)._oneof_case_[0] == 700) {
    pEVar6 = *(EquipResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pEVar6 = &server_msg::_EquipResponse_default_instance_;
  }
  local_res10 = *(ulong64 *)&((Message *)((longlong)pEVar6 + 0x10))->field_0x8;
  pFVar3 = FDS_EntityBase::GetEntityBase(&local_res10);
  if ((pFVar3 != (FDS_EntityBase *)0x0) && (pFVar3->EntityType != MainCharacter)) {
    EVar2 = FDS_EquipmentItemCharacterData::GetEquipSlotType
                      (*(int *)((longlong)pEVar6 + 0x30),
                       ((Message *)((longlong)pEVar6 + 0x20))->field_0x4);
    if (EVar2 == Weapon) {
      pFVar4 = FDS_ItemBaseTableRow::GetRef
                         ((longlong)*(int *)&((Message *)((longlong)pEVar6 + 0x30))->field_0x4,true)
      ;
      pFVar5 = FDS_WeaponTypeBaseTableRow::GetRefByItemType(pFVar4->ItemType);
      TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_res18);
      bVar1 = FWeakObjectPtr::IsValid(&local_res18);
      if (bVar1) {
        this = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_res18);
        UDS_SkillDataSet::InitSkillDataByWeaponType(this,pFVar5->ID);
      }
      UDS_CharInfoData::GetData((ulong64)&local_res20);
      bVar1 = FWeakObjectPtr::IsValid(&local_res20);
      if (bVar1) {
        this_00 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&local_res20);
        UDS_CharInfoData::SetWeaponType(this_00,pFVar5->ID);
      }
      local_res8.ObjectIndex._0_1_ = 0xe;
      UDS_AbilityDataSet::GetAbilityData<UDS_NormalAttackAbilityData>
                ((ulong64 *)local_28,(EDS_AbilityTagType *)&local_res10);
      bVar1 = FWeakObjectPtr::IsValid(local_28);
      if (bVar1) {
        this_01 = (UDS_NormalAttackAbilityData *)FWeakObjectPtr::Get(local_28);
        UDS_NormalAttackAbilityData::InitNormalAttackData(this_01);
      }
    }
    if (pFVar3->EntityType == NetCharacter) {
      TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)&local_res8);
      bVar1 = FWeakObjectPtr::IsValid(&local_res8);
      if (bVar1) {
        this_02 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_res8);
        UDS_ItemDataSet::UpdateEquipmentData(this_02,&pEVar6->_instance);
      }
    }
  }
  return;
}

// ReceiveOriginStatusResponse @ 14bbd4c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_CharacterService::ReceiveOriginStatusResponse(ServerMessages *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_CharStatusData *this;
  uint uVar3;
  ulonglong uVar4;
  OriginStatusResponseDefaultTypeInternal *pOVar5;
  longlong *plVar6;
  undefined1 auStackY_1a8 [32];
  FWeakObjectPtr local_168 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_1->_impl_)._oneof_case_[0] == 0x3b) {
    pOVar5 = *(OriginStatusResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pOVar5 = &server_msg::_OriginStatusResponse_default_instance_;
  }
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField
            ((MapFieldBase *)((longlong)pOVar5 + 0x10));
  uVar4 = (ulonglong)*(uint *)&((Message *)((longlong)pOVar5 + 0x20))->field_0x8;
  if ((*(uint *)&((Message *)((longlong)pOVar5 + 0x20))->field_0x8 !=
       *(uint *)&((Message *)((longlong)pOVar5 + 0x20))->field_0x4) &&
     (plVar6 = *(longlong **)(*(longlong *)((longlong)pOVar5 + 0x30) + uVar4 * 8),
     plVar6 != (longlong *)0x0)) {
    while( true ) {
      do {
        UDS_CharStatusData::GetData((ulong64)local_168);
        bVar1 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)local_168,
                           (void *)0x0);
        if (bVar1) {
          pUVar2 = UDS_LogManager::GetInst();
          if (pUVar2 != (UDS_LogManager *)0x0) {
            pUVar2 = UDS_LogManager::GetInst();
            local_158._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_158,"FDS_CharacterService::ReceiveOriginStatusResponse",0x31,Yes);
            UDS_LogManager::PrintLog
                      (pUVar2,1,Warning,local_158.Ptr,0x202,L"charStatusData is nullptr. (%llu)");
            if ((void *)local_158._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_158._padding_);
            }
          }
        }
        else {
          this = (UDS_CharStatusData *)FWeakObjectPtr::Get(local_168);
          UDS_CharStatusData::SetOriginStatusByStatusIntegers(this,(StatusIntegers *)(plVar6 + 2));
        }
        plVar6 = (longlong *)*plVar6;
      } while (plVar6 != (longlong *)0x0);
      uVar3 = (int)uVar4 + 1;
      if (*(uint *)&((Message *)((longlong)pOVar5 + 0x20))->field_0x4 <= uVar3) break;
      while( true ) {
        uVar4 = (ulonglong)uVar3;
        plVar6 = *(longlong **)(*(longlong *)((longlong)pOVar5 + 0x30) + uVar4 * 8);
        if (plVar6 != (longlong *)0x0) break;
        uVar3 = uVar3 + 1;
        if (*(uint *)&((Message *)((longlong)pOVar5 + 0x20))->field_0x4 <= uVar3) {
          return;
        }
      }
    }
  }
  return;
}

// ReesponseSkillAscendComplete @ 14bbd7530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FDS_CharacterService::ReesponseSkillAscendComplete
          (ServerMessagesTwoway *param_1,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2)

{
  longlong *plVar1;
  void *pvVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_188 [32];
  FReadAccessScope local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_158);
  if ((*(int *)&param_2->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&param_2->field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_158);
  pUVar3 = UDS_LogManager::GetInst();
  if (pUVar3 != (UDS_LogManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_CharacterService::ReesponseSkillAscendComplete",0x32,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Display,local_138.Ptr,0x17a,L"SuccessSkillAscend");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  pvVar2 = *(void **)&param_2->field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// RequestCharacterAscend @ 14bbda3f0

void __cdecl
FDS_CharacterService::RequestCharacterAscend
          (int param_1,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2)

{
  code *pcVar1;
  FDS_ClientMessage_Twoway *pFVar2;
  bool bVar3;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar4;
  Message *pMVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  UDS_NetworkManager *this;
  Arena *pAVar8;
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_68;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  pTVar4 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_58);
  local_68.Object = pTVar4->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (pTVar4->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar2 = local_68.Object;
  if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x4e21) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_68.Object)->clientMsg);
    (pFVar2->clientMsg)._impl_._oneof_case_[0] = 0x4e21;
    pAVar8 = (Arena *)((pFVar2->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar2->clientMsg)._padding_ & 1) != 0) {
      pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
    }
    pMVar5 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::CharacterAscendRequest>
                       (pAVar8);
    (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar5;
  }
  pMVar5 = (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
  if (pMVar5 != (Message *)0x0) {
    *(int *)&pMVar5[1].field_0x8 = param_1;
    *(uint *)(pMVar5 + 1) = *(uint *)(pMVar5 + 1) | 1;
    if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar2 = local_68.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_68.Object)->SuccessDel,(FWriteAccessScope *)&local_48);
    local_30 = &(pFVar2->SuccessDel).field_0x8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
      ;
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar6 + 1),param_2);
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[4] = uVar7;
      *puVar6 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
      ;
      puVar6[5] = ResponseCharacterAscendResponse;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar2 = local_68.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(local_68.Object)->FailDel
               ,(FWriteAccessScope *)&local_28);
    local_10 = &(pFVar2->FailDel).field_0x8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar6[3] = ProcessError;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    this = UDS_NetworkManager::GetInst();
    UDS_NetworkManager::SendTwoWayPacket(this,&local_68);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// RequestCharacterEvolve @ 14bbda650

void __cdecl
FDS_CharacterService::RequestCharacterEvolve
          (int param_1,TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy> *param_2)

{
  code *pcVar1;
  FDS_ClientMessage_Twoway *pFVar2;
  bool bVar3;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar4;
  Message *pMVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  UDS_NetworkManager *this;
  Arena *pAVar8;
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_68;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  pTVar4 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_58);
  local_68.Object = pTVar4->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (pTVar4->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar2 = local_68.Object;
  if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x4e22) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_68.Object)->clientMsg);
    (pFVar2->clientMsg)._impl_._oneof_case_[0] = 0x4e22;
    pAVar8 = (Arena *)((pFVar2->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar2->clientMsg)._padding_ & 1) != 0) {
      pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
    }
    pMVar5 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::CharacterEvolveRequest>
                       (pAVar8);
    (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar5;
  }
  pMVar5 = (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
  if (pMVar5 != (Message *)0x0) {
    *(int *)&pMVar5[1].field_0x8 = param_1;
    *(uint *)(pMVar5 + 1) = *(uint *)(pMVar5 + 1) | 1;
    if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar2 = local_68.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_68.Object)->SuccessDel,(FWriteAccessScope *)&local_48);
    local_30 = &(pFVar2->SuccessDel).field_0x8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AX_J_ZUFDefaultDelegateUserPolicy______6B_
      ;
      TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
      TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)(puVar6 + 1),param_2
                );
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[4] = uVar7;
      *puVar6 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AX_J_ZUFDefaultDelegateUserPolicy______6B_
      ;
      puVar6[5] = ResponseCharacterEvolve;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar2 = local_68.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(local_68.Object)->FailDel
               ,(FWriteAccessScope *)&local_28);
    local_10 = &(pFVar2->FailDel).field_0x8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar6[3] = ProcessError;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    this = UDS_NetworkManager::GetInst();
    UDS_NetworkManager::SendTwoWayPacket(this,&local_68);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// RequestCharacterEvolveComplete @ 14bbda8b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FDS_CharacterService::RequestCharacterEvolveComplete
          (int param_1,int param_2,TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *param_3)

{
  code *pcVar1;
  FDS_ClientMessage_Twoway *pFVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UDS_WaitCompleteDataSet *this;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar5;
  Message *pMVar6;
  UObject *pUVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  UDS_NetworkManager *this_00;
  Arena *pAVar10;
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *pTVar11;
  undefined1 auStackY_308 [32];
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_2d8;
  FWeakObjectPtr local_2c8;
  FWeakObjectPtr local_2c0;
  FDestructionSentinel local_2b8;
  undefined1 *local_2a0;
  FDestructionSentinel local_298;
  undefined1 *local_280;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_308;
  pTVar11 = param_3;
  TDS_DataSetGetter<UDS_WaitCompleteDataSet>::Get((ulong64)&local_2c8);
  bVar3 = FWeakObjectPtr::IsValid(&local_2c8);
  if (bVar3) {
    this = (UDS_WaitCompleteDataSet *)FWeakObjectPtr::Get(&local_2c8);
    UDS_WaitCompleteDataSet::GetWaitCompleteDataByTwoParam
              (this,(EDS_WaitCompleteType)&local_2c0,CONCAT71((int7)((ulonglong)pTVar11 >> 8),5),
               (longlong)param_1);
    bVar3 = FWeakObjectPtr::IsValid(&local_2c0);
    if (bVar3) {
      pTVar5 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_278);
      local_2d8.Object = pTVar5->Object;
      local_2d8.SharedReferenceCount.ReferenceController =
           (pTVar5->SharedReferenceCount).ReferenceController;
      if (local_2d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_2d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_2d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_278.SharedReferenceCount.ReferenceController);
      if (local_2d8.Object == (FDS_ClientMessage_Twoway *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pFVar2 = local_2d8.Object;
      if (((local_2d8.Object)->clientMsg)._impl_._oneof_case_[0] != 0x4e23) {
        client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
                  (&(local_2d8.Object)->clientMsg);
        (pFVar2->clientMsg)._impl_._oneof_case_[0] = 0x4e23;
        pAVar10 = (Arena *)((pFVar2->clientMsg)._padding_ & 0xfffffffffffffffe);
        if (((pFVar2->clientMsg)._padding_ & 1) != 0) {
          pAVar10 = (Arena *)(pAVar10->impl_).tag_and_id_;
        }
        pMVar6 = google::protobuf::Arena::
                 DefaultConstruct<client_msg_twoway::CharacterEvolveCompleteRequest>(pAVar10);
        (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar6;
      }
      pMVar6 = (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
      if (pMVar6 != (Message *)0x0) {
        *(int *)(pMVar6 + 2) = param_1;
        *(uint *)(pMVar6 + 1) = *(uint *)(pMVar6 + 1) | 2;
        pUVar7 = FWeakObjectPtr::Get(&local_2c0);
        *(undefined8 *)&pMVar6[1].field_0x8 = *(undefined8 *)&pUVar7[2].field_0x10;
        *(uint *)(pMVar6 + 1) = *(uint *)(pMVar6 + 1) | 1;
        if (local_2d8.Object == (FDS_ClientMessage_Twoway *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        pFVar2 = local_2d8.Object;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &(local_2d8.Object)->SuccessDel,(FWriteAccessScope *)&local_2b8);
        local_2a0 = &(pFVar2->SuccessDel).field_0x8;
        puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_2a0);
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = &
                    ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXH_ZUFDefaultDelegateUserPolicy______6B_
          ;
          TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::
          TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>
                    ((TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)(puVar8 + 1),param_3
                    );
          uVar9 = FDelegateHandle::GenerateNewID();
          puVar8[4] = uVar9;
          *puVar8 = &
                    ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXH_ZUFDefaultDelegateUserPolicy______6B_
          ;
          puVar8[5] = ResponseCharacterEvolveComplete;
        }
        if (local_2b8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2b8.Accessor,&local_2b8);
        }
        if (local_2d8.Object == (FDS_ClientMessage_Twoway *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        pFVar2 = local_2d8.Object;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &(local_2d8.Object)->FailDel,(FWriteAccessScope *)&local_298);
        local_280 = &(pFVar2->FailDel).field_0x8;
        puVar8 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_280);
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = &
                    ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar9 = FDelegateHandle::GenerateNewID();
          puVar8[2] = uVar9;
          *puVar8 = &
                    ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          puVar8[3] = ProcessError;
        }
        if (local_298.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_298.Accessor,&local_298);
        }
        this_00 = UDS_NetworkManager::GetInst();
        UDS_NetworkManager::SendTwoWayPacket(this_00,&local_2d8);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2d8.SharedReferenceCount.ReferenceController);
    }
    else {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"FDS_CharacterService::RequestCharacterEvolveComplete",0x34,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_148.Ptr,0x129,L"waitCompleteData is Invalid.");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_268._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_268,"FDS_CharacterService::RequestCharacterEvolveComplete",0x34,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_268.Ptr,0x122,L"MainPlayer waitCompleteDataSet is Invalid.")
      ;
      if ((void *)local_268._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_268._padding_);
      }
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  if (*(void **)&param_3->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_3);
  return;
}

// RequestCharacterExpUp @ 14bbdacb0

void __cdecl
FDS_CharacterService::RequestCharacterExpUp
          (int param_1,
          TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *param_2,
          TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy> *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  undefined8 uVar3;
  code *pcVar4;
  FDS_ClientMessage_Twoway *pFVar5;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar6;
  bool bVar7;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar8;
  Message *pMVar9;
  Node *pNVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  UDS_NetworkManager *this;
  Arena *pAVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint *puVar19;
  undefined1 local_res20 [8];
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_168;
  undefined8 local_158;
  UntypedMapBase local_150;
  int local_130;
  int local_12c;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_128;
  int iStack_120;
  uint uStack_11c;
  undefined1 *local_118;
  undefined4 uStack_110;
  int iStack_10c;
  int local_108;
  undefined4 uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  FDestructionSentinel local_c8;
  undefined1 *local_b0;
  FDestructionSentinel local_a8;
  undefined1 *local_90;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_88 [2];
  undefined4 local_5c;
  pair<google::protobuf::Map<int,int>::iterator,bool> local_58;
  
  pTVar8 = MakeShared<FDS_ClientMessage_Twoway,1>(local_88);
  local_168.Object = pTVar8->Object;
  local_168.SharedReferenceCount.ReferenceController =
       (pTVar8->SharedReferenceCount).ReferenceController;
  if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88[0].SharedReferenceCount.ReferenceController);
  if ((local_168.Object == (FDS_ClientMessage_Twoway *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar5 = local_168.Object;
  if (((local_168.Object)->clientMsg)._impl_._oneof_case_[0] != 20000) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_168.Object)->clientMsg);
    (pFVar5->clientMsg)._impl_._oneof_case_[0] = 20000;
    pAVar13 = (Arena *)((pFVar5->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar5->clientMsg)._padding_ & 1) != 0) {
      pAVar13 = (Arena *)(pAVar13->impl_).tag_and_id_;
    }
    pMVar9 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::CharacterExpUpRequest>
                       (pAVar13);
    (pFVar5->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar9;
  }
  pMVar9 = (pFVar5->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
  if (pMVar9 != (Message *)0x0) {
    *(int *)&pMVar9[4].field_0x8 = param_1;
    *(uint *)(pMVar9 + 1) = *(uint *)(pMVar9 + 1) | 1;
    google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField
              ((MapFieldBase *)&pMVar9[1].field_0x8);
    uStack_11c = 1;
    iStack_120 = 0;
    local_150.num_elements_ = 0;
    local_150.num_buckets_ = 1;
    local_150.table_ = google::protobuf::internal::kGlobalEmptyTable;
    local_150.index_of_first_non_null_ = 1;
    local_150.type_info_.node_size = 0x10;
    local_150.type_info_.value_offset = '\f';
    local_150.type_info_._3_1_ = 0x11;
    local_150.arena_ = (Arena *)0x0;
    uVar17 = *(uint *)&pMVar9[2].field_0x8;
    if (uVar17 != 0) {
      pNVar10 = google::protobuf::Map<int,int>::CloneFromOther
                          ((Map<int,int> *)&local_150,(Map<int,int> *)&pMVar9[2].field_0x8);
      google::protobuf::internal::KeyMapBase<unsigned_int>::MergeIntoEmpty
                ((KeyMapBase<unsigned_int> *)&local_150,(NodeBase *)pNVar10,(ulonglong)uVar17);
    }
    iVar15 = *(int *)&param_2->field_0x28;
    local_118 = &param_2->field_0x10;
    local_108 = 0;
    iStack_10c = local_108;
    if (iVar15 != 0) {
      puVar19 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar19 = (uint *)local_118;
      }
      uVar17 = *puVar19;
      local_108 = 0;
      iStack_120 = 0;
      while (uVar17 == 0) {
        lVar14 = (longlong)iStack_120;
        local_108 = local_108 + 0x20;
        iStack_120 = iStack_120 + 1;
        if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_120)
        goto LAB_14bbdae63;
        uVar17 = puVar19[lVar14 + 1];
      }
      uStack_11c = -uVar17 & uVar17;
      uVar1 = (ulonglong)uStack_11c * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_130 = (int)lVar14;
      iStack_10c = local_108 + -1 + local_130;
      if (iVar15 < iStack_10c) {
LAB_14bbdae63:
        iStack_10c = iVar15;
      }
    }
    uVar17 = *(uint *)&param_2->field_0x28;
    uStack_104 = local_5c;
    iStack_100 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
    uVar16 = uVar17 & 0xffffffe0;
    uStack_110 = 0xffffffff;
    TStack_f0.CurrentBitIndex = iStack_10c;
    TStack_f0.UnvisitedBitMask = 0xffffffff;
    TStack_f0._padding_ = CONCAT44(uStack_11c,iStack_120);
    iVar15 = (int)uVar17 >> 5;
    TStack_f0._28_4_ = local_5c;
    TStack_f0.BaseBitIndex = local_108;
    uStack_d0 = CONCAT44(uStack_fc,iStack_100);
    local_128 = param_2;
    local_f8 = param_2;
    TStack_f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_118;
    if (((int)uVar17 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar2 = *(uint *)&param_2->field_0x28;
    if (uVar17 != uVar2) {
      puVar18 = &param_2->field_0x10;
      if (*(undefined1 **)&param_2->field_0x20 != (undefined1 *)0x0) {
        puVar18 = *(undefined1 **)&param_2->field_0x20;
      }
      uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar15 * 4);
      while (uVar17 == 0) {
        lVar14 = (longlong)iVar15;
        uVar16 = uVar16 + 0x20;
        iVar15 = iVar15 + 1;
        uVar17 = uVar2;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_14bbdaf70;
        uVar17 = *(uint *)(puVar18 + lVar14 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_12c = (int)lVar14;
      uVar17 = local_12c + -1 + uVar16;
      if ((int)uVar2 < (int)uVar17) {
        uVar17 = uVar2;
      }
    }
LAB_14bbdaf70:
    while( true ) {
      pTVar6 = local_f8;
      if (*(int *)&local_f8->field_0x8 - *(int *)&local_f8->field_0x34 != (int)uStack_d0) {
        local_res20[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (((TStack_f0.CurrentBitIndex == uVar17) &&
          (TStack_f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10)) &&
         (pTVar6 == param_2)) break;
      uVar3 = *(undefined8 *)(*(longlong *)pTVar6 + (longlong)TStack_f0.CurrentBitIndex * 0x10);
      google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField
                ((MapFieldBase *)&pMVar9[1].field_0x8);
      uVar1 = *(ulonglong *)&pMVar9[1].field_0x8;
      if (((uVar1 & 1) != 0) && (uVar1 != 1)) {
        *(undefined4 *)(uVar1 + 0x1f) = 0;
      }
      local_158 = uVar3;
      google::protobuf::Map<int,int>::TryEmplaceInternal<int_const_,int>
                ((Map<int,int> *)&pMVar9[2].field_0x8,&local_58,(int *)&local_158,
                 (int *)((longlong)&local_158 + 4));
      TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
    }
    if ((local_168.Object == (FDS_ClientMessage_Twoway *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar5 = local_168.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_168.Object)->SuccessDel,(FWriteAccessScope *)&local_c8);
    local_b0 = &(pFVar5->SuccessDel).field_0x8;
    puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_b0);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXH_N_ZUFDefaultDelegateUserPolicy______6B_
      ;
      TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>::
      TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy> *)(puVar11 + 1),
                 param_3);
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[4] = uVar12;
      *puVar11 = &
                 ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXH_N_ZUFDefaultDelegateUserPolicy______6B_
      ;
      puVar11[5] = ResponseCharacterExpUpResopnse;
    }
    if (local_c8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
    }
    if ((local_168.Object == (FDS_ClientMessage_Twoway *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar5 = local_168.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_168.Object)->FailDel,(FWriteAccessScope *)&local_a8);
    local_90 = &(pFVar5->FailDel).field_0x8;
    puVar11 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_90);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar11[3] = ProcessError;
    }
    if (local_a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
    }
    this = UDS_NetworkManager::GetInst();
    UDS_NetworkManager::SendTwoWayPacket(this,&local_168);
    if (local_150.num_buckets_ != 1) {
      google::protobuf::internal::UntypedMapBase::ClearTableImpl(&local_150,false);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_168.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  if (*(void **)&param_3->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_3);
  return;
}

// RequestEquipItem @ 14bbdb1c0

void __cdecl FDS_CharacterService::RequestEquipItem(EDS_SlotType param_1,int param_2,long64 param_3)

{
  uint uVar1;
  UDS_NetworkManager *this;
  ClientMessages local_28;
  
  client_msg::ClientMessages::ClientMessages(&local_28,(Arena *)0x0);
  local_28._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_28._impl_._oneof_case_[0] != 700) {
    client_msg::ClientMessages::clear_ClientMessage(&local_28);
    local_28._impl_._oneof_case_[0] = 700;
    if (((byte)local_28._padding_ & 1) == 0) {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::EquipRequest>
                     ((Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::EquipRequest>
                     (*(Arena **)
                       (CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                       0xfffffffffffffffe));
    }
  }
  if (local_28._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
    *(uint *)&local_28._impl_.ClientMessage_.joincontinentreq_[1].field_0x8 = (uint)param_1;
    uVar1 = *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1);
    *(int *)&local_28._impl_.ClientMessage_.joincontinentreq_[1].field_0xc = param_2;
    *(long64 *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 2) = param_3;
    *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) = uVar1 | 7;
    this = UDS_NetworkManager::GetInst();
    if (this != (UDS_NetworkManager *)0x0) {
      UDS_NetworkManager::SendPacket(this,&local_28);
    }
  }
  client_msg::ClientMessages::~ClientMessages(&local_28);
  return;
}

// RequestSkillAscendComplete @ 14bbdba30

void __cdecl
FDS_CharacterService::RequestSkillAscendComplete
          (long64 param_1,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2)

{
  code *pcVar1;
  FDS_ClientMessage_Twoway *pFVar2;
  bool bVar3;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar4;
  Message *pMVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  UDS_NetworkManager *this;
  Arena *pAVar8;
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_68;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  pTVar4 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_58);
  local_68.Object = pTVar4->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (pTVar4->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar2 = local_68.Object;
  if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x520a) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_68.Object)->clientMsg);
    (pFVar2->clientMsg)._impl_._oneof_case_[0] = 0x520a;
    pAVar8 = (Arena *)((pFVar2->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar2->clientMsg)._padding_ & 1) != 0) {
      pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
    }
    pMVar5 = google::protobuf::Arena::
             DefaultConstruct<client_msg_twoway::SkillAscendCompleteRequest>(pAVar8);
    (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar5;
  }
  pMVar5 = (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
  if (pMVar5 != (Message *)0x0) {
    *(long64 *)&pMVar5[1].field_0x8 = param_1;
    *(uint *)(pMVar5 + 1) = *(uint *)(pMVar5 + 1) | 1;
    if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar2 = local_68.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_68.Object)->SuccessDel,(FWriteAccessScope *)&local_48);
    local_30 = &(pFVar2->SuccessDel).field_0x8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
      ;
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar6 + 1),param_2);
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[4] = uVar7;
      *puVar6 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
      ;
      puVar6[5] = ReesponseSkillAscendComplete;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar2 = local_68.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(local_68.Object)->FailDel
               ,(FWriteAccessScope *)&local_28);
    local_10 = &(pFVar2->FailDel).field_0x8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar6[3] = ProcessError;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    this = UDS_NetworkManager::GetInst();
    UDS_NetworkManager::SendTwoWayPacket(this,&local_68);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// RequestSkillUp @ 14bbdbc90

void __cdecl
FDS_CharacterService::RequestSkillUp
          (int param_1,int param_2,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_3
          )

{
  uint uVar1;
  code *pcVar2;
  FDS_ClientMessage_Twoway *pFVar3;
  bool bVar4;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar5;
  Message *pMVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  UDS_NetworkManager *this;
  Arena *pAVar9;
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_68;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  pTVar5 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_58);
  local_68.Object = pTVar5->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (pTVar5->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar3 = local_68.Object;
  if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x5209) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_68.Object)->clientMsg);
    (pFVar3->clientMsg)._impl_._oneof_case_[0] = 0x5209;
    pAVar9 = (Arena *)((pFVar3->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar3->clientMsg)._padding_ & 1) != 0) {
      pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
    }
    pMVar6 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::SkillLevelUpRequest>
                       (pAVar9);
    (pFVar3->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar6;
  }
  pMVar6 = (pFVar3->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
  if (pMVar6 == (Message *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8213295088609001804>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_CharacterService.cpp"
                       ,0x14c,"false");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    *(int *)&pMVar6[1].field_0x8 = param_1;
    uVar1 = *(uint *)(pMVar6 + 1);
    *(int *)&pMVar6[1].field_0xc = param_2;
    *(uint *)(pMVar6 + 1) = uVar1 | 3;
    if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar3 = local_68.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_68.Object)->SuccessDel,(FWriteAccessScope *)&local_48);
    local_30 = &(pFVar3->SuccessDel).field_0x8;
    puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
      ;
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar7 + 1),param_3);
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[4] = uVar8;
      *puVar7 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
      ;
      puVar7[5] = ResponseSkillLevelUp;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar3 = local_68.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(local_68.Object)->FailDel
               ,(FWriteAccessScope *)&local_28);
    local_10 = &(pFVar3->FailDel).field_0x8;
    puVar7 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar7[3] = ProcessError;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    this = UDS_NetworkManager::GetInst();
    UDS_NetworkManager::SendTwoWayPacket(this,&local_68);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  if (*(void **)&param_3->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_3);
  return;
}

// RequestStatusDetailView @ 14bbdbf40

void __cdecl
FDS_CharacterService::RequestStatusDetailView
          (int param_1,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2)

{
  code *pcVar1;
  FDS_ClientMessage_Twoway *pFVar2;
  bool bVar3;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar4;
  Message *pMVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  UDS_NetworkManager *this;
  Arena *pAVar8;
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_68;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  pTVar4 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_58);
  local_68.Object = pTVar4->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (pTVar4->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar2 = local_68.Object;
  if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x5528) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_68.Object)->clientMsg);
    (pFVar2->clientMsg)._impl_._oneof_case_[0] = 0x5528;
    pAVar8 = (Arena *)((pFVar2->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar2->clientMsg)._padding_ & 1) != 0) {
      pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
    }
    pMVar5 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::StatusDetailViewRequest>
                       (pAVar8);
    (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar5;
  }
  pMVar5 = (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
  if (pMVar5 != (Message *)0x0) {
    *(int *)&pMVar5[1].field_0x8 = param_1;
    *(uint *)(pMVar5 + 1) = *(uint *)(pMVar5 + 1) | 1;
    if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar2 = local_68.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_68.Object)->SuccessDel,(FWriteAccessScope *)&local_48);
    local_30 = &(pFVar2->SuccessDel).field_0x8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
      ;
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar6 + 1),param_2);
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[4] = uVar7;
      *puVar6 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
      ;
      puVar6[5] = ResponseStatusDetailView;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar2 = local_68.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(local_68.Object)->FailDel
               ,(FWriteAccessScope *)&local_28);
    local_10 = &(pFVar2->FailDel).field_0x8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
      ;
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar6 + 1),param_2);
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[4] = uVar7;
      *puVar6 = &
                ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
      ;
      puVar6[5] = ProcessError_StatusDetailView;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    this = UDS_NetworkManager::GetInst();
    UDS_NetworkManager::SendTwoWayPacket(this,&local_68);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// ResponseCharacterAscendResponse @ 14bbdcc20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
FDS_CharacterService::ResponseCharacterAscendResponse
          (ServerMessagesTwoway *param_1,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  UDS_CharInfoData *this;
  UDS_WindowManager *this_00;
  undefined8 *puVar7;
  ulong64 uVar8;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar9;
  CharacterAscendResponseDefaultTypeInternal *pCVar10;
  undefined1 auStackY_248 [32];
  undefined1 local_208 [8];
  FDelegateAllocation local_200;
  int local_1f0;
  FWeakObjectPtr local_1e8;
  FDestructionSentinel local_1e0;
  FDelegateAllocation *local_1c8;
  FWeakObjectPtr local_1c0;
  undefined1 local_1b8 [32];
  void *local_198;
  undefined4 local_190;
  uint local_18c;
  undefined4 local_188;
  undefined4 local_184;
  ForElementType<FSetElementId> local_178;
  int local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  if ((param_1->_impl_)._oneof_case_[0] == 0x4e21) {
    pCVar10 = (CharacterAscendResponseDefaultTypeInternal *)
              (param_1->_impl_).ServerMessageTwoway_.pongres_;
  }
  else {
    pCVar10 = &server_msg_twoway::_CharacterAscendResponse_default_instance_;
  }
  iVar1 = (pCVar10->_instance)._impl_.char_id_;
  UDS_PlayerData::GetMainPlayerCurrentEntityID();
  UDS_CharInfoData::GetData((ulong64)&local_1e8);
  bVar5 = FWeakObjectPtr::IsValid(&local_1e8);
  if (!bVar5) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"FDS_CharacterService::ResponseCharacterAscendResponse",0x35,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_168.Ptr,0xe5,L"charInfoData is Invalid. CharID : %d");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
    goto LAB_14bbdd015;
  }
  this = (UDS_CharInfoData *)FWeakObjectPtr::Get(&local_1e8);
  UDS_CharInfoData::SetDataByCharacterAscendResponse(this,&pCVar10->_instance);
  local_1f0 = (int)(pCVar10->_instance)._impl_.prev_combat_power_;
  iVar2 = (pCVar10->_instance)._impl_.cur_level_;
  iVar3 = (pCVar10->_instance)._impl_.prev_level_;
  if (iVar3 < iVar2) {
    local_18c = 0x80;
    local_1b8._0_8_ = (FScriptContainerElement *)0x0;
    local_1b8._8_8_ = 0;
    local_198 = (void *)0x0;
    local_190 = 0;
    local_184 = 0;
    local_178 = (ForElementType<FSetElementId>)0x0;
    local_170 = 0;
    local_188 = 0xffffffff;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)local_1b8);
    iVar4 = SUB84(local_1b8._8_8_,4);
    local_1b8._8_8_ = local_1b8._8_8_ & 0xffffffff00000000;
    if (iVar4 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)local_1b8,0,(int *)(local_1b8 + 0xc));
    }
    local_188 = 0xffffffff;
    local_184 = 0;
    local_190 = 0;
    if (0x80 < local_18c) {
      local_18c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_1b8 + 0x10),0);
    }
    this_00 = UDS_WindowManager::GetInst();
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_00 == (UDS_WindowManager *)0x0) goto LAB_14bbdd070;
    }
    else {
      if (this_00 == (UDS_WindowManager *)0x0) {
LAB_14bbdd070:
        local_170 = 0;
        if (local_178 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_178);
        }
        iVar1 = SUB84(local_1b8._8_8_,4);
        local_1b8._8_8_ = local_1b8._8_8_ & 0xffffffff00000000;
        if (iVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,0,(ForAnyElementType *)local_1b8,0,(int *)(local_1b8 + 0xc));
        }
        local_188 = 0xffffffff;
        local_184 = 0;
        local_190 = 0;
        if (0x80 < local_18c) {
          local_18c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_1b8 + 0x10),0);
        }
        if (local_198 != (void *)0x0) {
          FMemory::Free(local_198);
        }
        if ((FScriptContainerElement *)local_1b8._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_1b8._0_8_);
        }
        goto LAB_14bbdd015;
      }
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    UDS_WindowManager::GetWindowInfo(this_00,(EDS_WindowWidget)&local_1c0);
    bVar5 = FWeakObjectPtr::IsValid(&local_1c0);
    if (bVar5) {
      local_208 = (undefined1  [8])0x0;
      local_200.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_200.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_208,
                 (FWriteAccessScope *)&local_1e0);
      local_1c8 = &local_200;
      puVar7 = UE::Core::Private::DelegateAllocate(0x80,&local_200);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__HHHH_NV__TMap_HHVFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_HH_0A_______6B_
        ;
        *(int *)(puVar7 + 2) = local_1f0;
        *(int *)(puVar7 + 1) = iVar2;
        *(int *)((longlong)puVar7 + 0xc) = iVar3;
        *(int *)((longlong)puVar7 + 0x14) = iVar1;
        *(undefined1 *)(puVar7 + 3) = 1;
        *(undefined8 *)
         &((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
          (puVar7 + 4))->Elements = 0;
        puVar7[5] = 0;
        puVar7[8] = 0;
        *(undefined4 *)(puVar7 + 9) = 0;
        *(undefined4 *)((longlong)puVar7 + 0x4c) = 0x80;
        *(undefined4 *)(puVar7 + 10) = 0xffffffff;
        *(undefined4 *)((longlong)puVar7 + 0x54) = 0;
        puVar7[0xc] = 0;
        *(undefined4 *)(puVar7 + 0xd) = 0;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::operator=
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)(puVar7 + 4),
                   (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)local_1b8);
        uVar8 = FDelegateHandle::GenerateNewID();
        puVar7[0xe] = uVar8;
        *puVar7 = &
                  ___7__TBaseStaticDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__HHHH_NV__TMap_HHVFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_HH_0A_______6B_
        ;
        puVar7[0xf] = OnOpenLevelUpResult;
      }
      if (local_1e0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e0.Accessor,&local_1e0);
      }
      pTVar9 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
               TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                         ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                          &local_1e0,
                          (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                          local_208);
      UDS_WindowManager::OpenWindow(this_00,CharacterLevelResultPopup,pTVar9);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_208,
                 (FWriteAccessScope *)&local_1e0);
      if ((local_200.DelegateSize != 0) &&
         (local_200.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_200.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_200,0,0,0x10);
        local_200.DelegateSize = 0;
      }
      if (local_1e0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e0.Accessor,&local_1e0);
      }
      if (local_200.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_200.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_208);
    }
    local_170 = 0;
    if (local_178 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_178);
    }
    iVar1 = SUB84(local_1b8._8_8_,4);
    local_1b8._8_8_ = local_1b8._8_8_ & 0xffffffff00000000;
    if (iVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)local_1b8,0,(int *)(local_1b8 + 0xc));
    }
    local_188 = 0xffffffff;
    local_184 = 0;
    local_190 = 0;
    if (0x80 < local_18c) {
      local_18c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_1b8 + 0x10),0);
    }
    if (local_198 != (void *)0x0) {
      FMemory::Free(local_198);
    }
    if ((FScriptContainerElement *)local_1b8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_1b8._0_8_);
    }
  }
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound(param_2);
LAB_14bbdd015:
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// ResponseCharacterEvolve @ 14bbdd100

void __cdecl
FDS_CharacterService::ResponseCharacterEvolve
          (ServerMessagesTwoway *param_1,
          TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy> *param_2)

{
  long64 lVar1;
  longlong *plVar2;
  void *pvVar3;
  CharacterEvolveResponseDefaultTypeInternal *pCVar4;
  FReadAccessScope local_28;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x4e22) {
    pCVar4 = (CharacterEvolveResponseDefaultTypeInternal *)
             (param_1->_impl_).ServerMessageTwoway_.pongres_;
  }
  else {
    pCVar4 = &server_msg_twoway::_CharacterEvolveResponse_default_instance_;
  }
  lVar1 = *(long64 *)&((Message *)((longlong)pCVar4 + 0x10))->field_0x8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_28);
  if ((*(int *)&param_2->field_0x10 != 0) &&
     (plVar2 = *(longlong **)&param_2->field_0x8, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,lVar1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  pvVar3 = *(void **)&param_2->field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// ResponseCharacterEvolveComplete @ 14bbdd190

void __cdecl
FDS_CharacterService::ResponseCharacterEvolveComplete
          (ServerMessagesTwoway *param_1,
          TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *param_2)

{
  int iVar1;
  longlong *plVar2;
  void *pvVar3;
  CharacterEvolveCompleteResponseDefaultTypeInternal *pCVar4;
  FReadAccessScope local_28;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x4e23) {
    pCVar4 = (CharacterEvolveCompleteResponseDefaultTypeInternal *)
             (param_1->_impl_).ServerMessageTwoway_.pongres_;
  }
  else {
    pCVar4 = &server_msg_twoway::_CharacterEvolveCompleteResponse_default_instance_;
  }
  iVar1 = *(int *)&((Message *)((longlong)pCVar4 + 0x10))->field_0xc;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_28);
  if ((*(int *)&param_2->field_0x10 != 0) &&
     (plVar2 = *(longlong **)&param_2->field_0x8, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,iVar1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  pvVar3 = *(void **)&param_2->field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// ResponseCharacterExpUpResopnse @ 14bbdd220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FDS_CharacterService::ResponseCharacterExpUpResopnse
          (ServerMessagesTwoway *param_1,
          TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy> *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  bool bVar5;
  Node *pNVar6;
  UDS_WindowManager *this;
  undefined8 *puVar7;
  ulong64 uVar8;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar9;
  void *pvVar10;
  uint uVar11;
  ulonglong uVar12;
  NodeBase *pNVar13;
  CharacterExpUpResponseDefaultTypeInternal *pCVar14;
  undefined1 auStack_128 [32];
  undefined1 local_108 [8];
  FDelegateAllocation local_100;
  UntypedMapBase local_f0;
  int local_d0;
  FDestructionSentinel local_c8;
  FDelegateAllocation *local_b0;
  TPairInitializer<int_const_&,int_const_&> local_a8;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  if ((param_1->_impl_)._oneof_case_[0] == 20000) {
    pCVar14 = (CharacterExpUpResponseDefaultTypeInternal *)
              (param_1->_impl_).ServerMessageTwoway_.pongres_;
  }
  else {
    pCVar14 = &server_msg_twoway::_CharacterExpUpResponse_default_instance_;
  }
  local_d0 = (int)*(float *)((longlong)pCVar14 + 0x50);
  iVar1 = *(int *)&((Message *)((longlong)pCVar14 + 0x40))->field_0x8;
  iVar2 = *(int *)&((Message *)((longlong)pCVar14 + 0x40))->field_0xc;
  if (iVar2 < iVar1) {
    google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField
              ((MapFieldBase *)&((Message *)((longlong)pCVar14 + 0x10))->field_0x8);
    uVar11 = *(uint *)&((Message *)((longlong)pCVar14 + 0x20))->field_0x8;
    local_f0.type_info_.node_size = 0x10;
    local_f0.type_info_.value_offset = '\f';
    local_f0.type_info_._3_1_ = 0x11;
    local_f0.num_elements_ = 0;
    local_f0.num_buckets_ = 1;
    local_f0.index_of_first_non_null_ = 1;
    uVar12 = 1;
    local_f0.table_ = google::protobuf::internal::kGlobalEmptyTable;
    local_f0.arena_ = (Arena *)0x0;
    if ((ulonglong)uVar11 != 0) {
      pNVar6 = google::protobuf::Map<int,int>::CloneFromOther
                         ((Map<int,int> *)&local_f0,
                          (Map<int,int> *)&((Message *)((longlong)pCVar14 + 0x20))->field_0x8);
      google::protobuf::internal::KeyMapBase<unsigned_int>::MergeIntoEmpty
                ((KeyMapBase<unsigned_int> *)&local_f0,(NodeBase *)pNVar6,(ulonglong)uVar11);
      uVar12 = (ulonglong)local_f0.index_of_first_non_null_;
    }
    local_98.Elements._44_4_ = 0x80;
    local_98.Elements._0_8_ = 0;
    local_98.Elements._8_8_ = 0;
    local_98.Elements._32_8_ = 0;
    local_98.Elements._40_4_ = 0;
    local_98.Elements._48_4_ = 0xffffffff;
    local_98.Elements._52_4_ = 0;
    local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_98.HashSize = 0;
    if (((uint)uVar12 != local_f0.num_buckets_) &&
       (pNVar13 = local_f0.table_[uVar12], pNVar13 != (NodeBase *)0x0)) {
      do {
        do {
          local_108 = (undefined1  [8])(pNVar13 + 1);
          local_100.DelegateAllocator =
               (ForElementType<TAlignedBytes<16,16>_>)((longlong)&pNVar13[1].next + 4);
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_const_&>_>(&local_98,&local_a8,(bool *)local_108)
          ;
          pNVar13 = pNVar13->next;
        } while (pNVar13 != (NodeBase *)0x0);
        uVar11 = (uint)uVar12;
        do {
          uVar11 = uVar11 + 1;
          if (local_f0.num_buckets_ <= uVar11) goto LAB_14bbdd384;
          uVar12 = (ulonglong)uVar11;
          pNVar13 = local_f0.table_[uVar12];
        } while (pNVar13 == (NodeBase *)0x0);
      } while( true );
    }
LAB_14bbdd384:
    this = UDS_WindowManager::GetInst();
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this == (UDS_WindowManager *)0x0) goto LAB_14bbdd495;
    }
    else {
      if (this == (UDS_WindowManager *)0x0) {
LAB_14bbdd495:
        local_98.HashSize = 0;
        if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_98.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_98.Elements);
        if (local_f0.num_buckets_ != 1) {
          google::protobuf::internal::UntypedMapBase::ClearTableImpl(&local_f0,false);
        }
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
        pvVar10 = *(void **)&param_2->field_0x8;
        goto LAB_14bbdd5ed;
      }
      UE::GC::MarkAsReachable((UObject *)this);
    }
    UDS_WindowManager::GetWindowInfo(this,(int)&local_a8 + 8);
    bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_a8.Value);
    if (bVar5) {
      uVar3 = *(undefined4 *)&((Message *)((longlong)pCVar14 + 0x50))->field_0x4;
      local_108 = (undefined1  [8])0x0;
      local_100.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_100.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_108,
                 (FWriteAccessScope *)&local_c8);
      local_b0 = &local_100;
      puVar7 = UE::Core::Private::DelegateAllocate(0x80,&local_100);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__HHHH_NV__TMap_HHVFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_HH_0A_______6B_
        ;
        *(undefined4 *)((longlong)puVar7 + 0x14) = uVar3;
        *(undefined8 *)
         &((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
          (puVar7 + 4))->Elements = 0;
        puVar7[5] = 0;
        puVar7[8] = 0;
        *(int *)(puVar7 + 1) = iVar1;
        *(int *)((longlong)puVar7 + 0xc) = iVar2;
        *(int *)(puVar7 + 2) = local_d0;
        *(undefined1 *)(puVar7 + 3) = 0;
        *(undefined4 *)(puVar7 + 9) = 0;
        *(undefined4 *)((longlong)puVar7 + 0x4c) = 0x80;
        *(undefined4 *)(puVar7 + 10) = 0xffffffff;
        *(undefined4 *)((longlong)puVar7 + 0x54) = 0;
        puVar7[0xc] = 0;
        *(undefined4 *)(puVar7 + 0xd) = 0;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::operator=
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)(puVar7 + 4),&local_98);
        uVar8 = FDelegateHandle::GenerateNewID();
        puVar7[0xe] = uVar8;
        *puVar7 = &
                  ___7__TBaseStaticDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__HHHH_NV__TMap_HHVFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_HH_0A_______6B_
        ;
        puVar7[0xf] = OnOpenLevelUpResult;
      }
      if (local_c8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
      }
      pTVar9 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
               TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                         ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                          &local_c8,
                          (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                          local_108);
      UDS_WindowManager::OpenWindow(this,CharacterLevelResultPopup,pTVar9);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_108,
                 (FWriteAccessScope *)&local_c8);
      if ((local_100.DelegateSize != 0) &&
         (local_100.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_100.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_100,0,0,0x10);
        local_100.DelegateSize = 0;
      }
      if (local_c8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
      }
      if (local_100.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_100.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_108);
    }
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98.Elements);
    if (local_f0.num_buckets_ != 1) {
      google::protobuf::internal::UntypedMapBase::ClearTableImpl(&local_f0,false);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
             (FReadAccessScope *)&local_c8);
  if ((*(int *)&param_2->field_0x10 != 0) &&
     (plVar4 = *(longlong **)&param_2->field_0x8, plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x68))(plVar4,iVar1,iVar2 < iVar1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_c8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  pvVar10 = *(void **)&param_2->field_0x8;
LAB_14bbdd5ed:
  if (pvVar10 != (void *)0x0) {
    FMemory::Free(pvVar10);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// ResponseMainCharacterSwitch @ 14bbdd770

void __cdecl FDS_CharacterService::ResponseMainCharacterSwitch(ServerMessagesTwoway *param_1)

{
  bool local_res10 [8];
  ulong64 local_res18 [2];
  
  local_res10[0] = false;
  local_res18[0] = FDS_EntityBase::GetMainPlayerEntityID(true);
  UDS_CharacterSwitchAbility::TryActivate(local_res18,local_res10);
  return;
}

// ResponseSkillLevelUp @ 14bbdd960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FDS_CharacterService::ResponseSkillLevelUp
          (ServerMessagesTwoway *param_1,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2)

{
  longlong *plVar1;
  void *pvVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_188 [32];
  FReadAccessScope local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pUVar3 = UDS_LogManager::GetInst();
  if (pUVar3 != (UDS_LogManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_CharacterService::ResponseSkillLevelUp",0x2a,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Display,local_138.Ptr,0x15d,L"SuccessSkillLevelUp");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_158);
  if ((*(int *)&param_2->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&param_2->field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_158);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  pvVar2 = *(void **)&param_2->field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// ResponseStatusDetailView @ 14bbdda80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FDS_CharacterService::ResponseStatusDetailView
          (ServerMessagesTwoway *param_1,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2)

{
  longlong *plVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_CharStatusData *this;
  void *pvVar4;
  StatusDetailViewResponseDefaultTypeInternal *pSVar5;
  undefined1 auStackY_198 [32];
  FWeakObjectPtr local_158;
  FReadAccessScope local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((param_1->_impl_)._oneof_case_[0] == 0x5528) {
    pSVar5 = (StatusDetailViewResponseDefaultTypeInternal *)
             (param_1->_impl_).ServerMessageTwoway_.pongres_;
  }
  else {
    pSVar5 = &server_msg_twoway::_StatusDetailViewResponse_default_instance_;
  }
  UDS_PlayerData::GetMainPlayerCurrentEntityID();
  UDS_CharStatusData::GetData((ulong64)&local_158);
  bVar2 = FWeakObjectPtr::IsValid(&local_158);
  if (bVar2) {
    this = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_158);
    UDS_CharStatusData::SetContentsStatusMapByStatusDetailViewResponse(this,&pSVar5->_instance);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_150);
    if ((*(int *)&param_2->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_2->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_150);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
    pvVar4 = *(void **)&param_2->field_0x8;
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      UDS_PlayerData::GetMainPlayerCurrentEntityID();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_CharacterService::ResponseStatusDetailView",0x2e,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x196,
                 L"statusData is Invalid. CharEntityID : %llu, CharID : %d");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
    pvVar4 = *(void **)&param_2->field_0x8;
  }
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// SendCombatPowerByCharID @ 14bbde3a0

void __cdecl FDS_CharacterService::SendCombatPowerByCharID(int param_1)

{
  uint uVar1;
  UDS_NetworkManager *this;
  ClientMessages local_28;
  
  client_msg::ClientMessages::ClientMessages(&local_28,(Arena *)0x0);
  local_28._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_28._impl_._oneof_case_[0] != 0x1e) {
    client_msg::ClientMessages::clear_ClientMessage(&local_28);
    local_28._impl_._oneof_case_[0] = 0x1e;
    if (((byte)local_28._padding_ & 1) == 0) {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::CombatPowerRequest>
                     ((Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::CombatPowerRequest>
                     (*(Arena **)
                       (CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                       0xfffffffffffffffe));
    }
  }
  if (local_28._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
    *(int *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 2) = param_1;
    uVar1 = *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1);
    *(undefined8 *)&local_28._impl_.ClientMessage_.joincontinentreq_[1].field_0x8 = 0;
    *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) = uVar1 & 0xfffffffe | 2;
    this = UDS_NetworkManager::GetInst();
    if (this != (UDS_NetworkManager *)0x0) {
      UDS_NetworkManager::SendPacket(this,&local_28);
    }
  }
  client_msg::ClientMessages::~ClientMessages(&local_28);
  return;
}

// SendCombatPowerByEntityID @ 14bbde470

void __cdecl FDS_CharacterService::SendCombatPowerByEntityID(ulong64 param_1)

{
  uint uVar1;
  UDS_NetworkManager *this;
  ClientMessages local_28;
  
  client_msg::ClientMessages::ClientMessages(&local_28,(Arena *)0x0);
  local_28._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_28._impl_._oneof_case_[0] != 0x1e) {
    client_msg::ClientMessages::clear_ClientMessage(&local_28);
    local_28._impl_._oneof_case_[0] = 0x1e;
    if (((byte)local_28._padding_ & 1) == 0) {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::CombatPowerRequest>
                     ((Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::CombatPowerRequest>
                     (*(Arena **)
                       (CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                       0xfffffffffffffffe));
    }
  }
  if (local_28._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
    *(undefined4 *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 2) = 0;
    uVar1 = *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1);
    *(ulong64 *)&local_28._impl_.ClientMessage_.joincontinentreq_[1].field_0x8 = param_1;
    *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) = uVar1 & 0xfffffffd | 1;
    this = UDS_NetworkManager::GetInst();
    if (this != (UDS_NetworkManager *)0x0) {
      UDS_NetworkManager::SendPacket(this,&local_28);
    }
  }
  client_msg::ClientMessages::~ClientMessages(&local_28);
  return;
}

// TryEquipItemToCharacter @ 14bbe26f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FDS_CharacterService::TryEquipItemToCharacter
          (int param_1,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_2)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  UObject *pUVar7;
  int *piVar8;
  ForAnyElementType FVar9;
  int iVar10;
  undefined8 uVar11;
  EDS_EquipSlotType EVar12;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_1a8 [32];
  undefined1 local_178 [8];
  TArray<FDS_SlotBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_res10 = param_2.WeakPtr;
  bVar5 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar5) {
    pUVar7 = FWeakObjectPtr::Get(&local_res10);
    EVar12 = None;
    iVar3 = *(int *)&pUVar7[0x13].field_0x20;
    FDS_SlotBaseTableRow::GetAll(&local_170);
    iVar10 = local_170.ArrayNum;
    pFVar1 = local_170.AllocatorInstance.Data + (longlong)iVar10 * 8;
    FVar9.Data = local_170.AllocatorInstance.Data;
    uVar11 = local_170._8_8_;
    while( true ) {
      if ((int)uVar11 != iVar10) {
        `TCheckedPointerIterator<FDS_SlotBaseTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_178);
        uVar11 = local_170._8_8_;
      }
      if (FVar9.Data == pFVar1) break;
      lVar4 = *(longlong *)FVar9.Data;
      if (lVar4 != 0) {
        piVar8 = *(int **)(lVar4 + 0x20);
        piVar2 = piVar8 + *(int *)(lVar4 + 0x28);
        for (; piVar8 != piVar2; piVar8 = piVar8 + 1) {
          if (*piVar8 == iVar3) {
            EVar12 = *(EDS_EquipSlotType *)(lVar4 + 8);
            goto LAB_14bbe2849;
          }
        }
      }
      FVar9.Data = FVar9.Data + 8;
    }
LAB_14bbe2849:
    if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.AllocatorInstance.Data);
    }
    TryEquipItemToCharacter(param_1,EVar12,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_res10)
    ;
  }
  else {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"FDS_CharacterService::TryEquipItemToCharacter",0x2d,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_158.Ptr,0x4ed,L"Invalid ItemData.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  return;
}

// TryEquipItemToCharacter @ 14bbe28b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FDS_CharacterService::TryEquipItemToCharacter
          (int param_1,EDS_EquipSlotType param_2,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_3
          )

{
  int iVar1;
  bool bVar2;
  EDS_SlotType EVar3;
  UDS_LogManager *pUVar4;
  UDS_ItemData *pUVar5;
  UObject *pUVar6;
  FDS_SlotBaseTableRow *this;
  ulong64 uVar7;
  int iVar8;
  long64 lVar9;
  FWeakObjectPtr local_res18;
  undefined1 auStackY_1b8 [32];
  uint uVar10;
  wchar_t *pwVar11;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_178;
  FWeakObjectPtr local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_res18 = param_3.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar2) {
    pUVar5 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res18);
    EVar3 = UDS_ItemData::GetSlotType(pUVar5);
    if (EVar3 == EquipBattle) {
      if (-1 < param_1) {
        pUVar6 = FWeakObjectPtr::Get(&local_res18);
        lVar9 = *(long64 *)&pUVar6[8].field_0x8;
        pUVar6 = FWeakObjectPtr::Get(&local_res18);
        iVar1 = *(int *)&pUVar6[8].field_0x10;
        this = FDS_SlotBaseTableRow::GetRef((longlong)(int)param_2,true);
        bVar2 = FDS_SlotBaseTableRow::IsValid(this);
        iVar8 = 0;
        if (bVar2) {
          iVar8 = this->SlotNumber;
        }
        if (param_1 == 0) {
          UDS_PlayerData::GetMainPlayerData();
          bVar2 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_160,(void *)0x0
                            );
          if (bVar2) {
            pUVar4 = UDS_LogManager::GetInst();
            if (pUVar4 == (UDS_LogManager *)0x0) {
              return;
            }
            pUVar4 = UDS_LogManager::GetInst();
            local_158._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_158,"FDS_CharacterService::TryEquipItemToCharacter",0x2d,Yes);
            UDS_LogManager::PrintLog
                      (pUVar4,1,Warning,local_158.Ptr,0x515,L"mainPlayerData is nullptr");
            if ((void *)local_158._padding_ == (void *)0x0) {
              return;
            }
            FMemory::Free((void *)local_158._padding_);
            return;
          }
          pUVar6 = FWeakObjectPtr::Get(&local_160);
          param_1 = *(int *)&pUVar6[8].field_0x18;
        }
        pUVar5 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res18);
        bVar2 = UDS_ItemData::IsEquipped(pUVar5);
        if (bVar2) {
          lVar9 = 0;
        }
        else {
          bVar2 = DS_ItemDataUtil::IsCharacterEquippableByCharacterExclusive(param_1,iVar1);
          if ((!bVar2) ||
             (bVar2 = DS_ItemDataUtil::IsCharacterEquippableCharacterEquipType(param_1,iVar1),
             !bVar2)) {
            local_178._0_8_ = 0;
            local_178._8_8_ = 0;
            local_178._16_4_ = 0;
            UDS_UIMessageManager::OpenMsgByStringUi(0x9c82,Alert_None_01,&local_178);
            return;
          }
          uVar7 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
          bVar2 = DS_ItemDataUtil::IsCharacterEquippableByCharacterLevel(uVar7,lVar9);
          if (!bVar2) {
            local_178._0_8_ = 0;
            local_178._8_8_ = 0;
            local_178._16_4_ = 0;
            UDS_UIMessageManager::OpenMsgByStringUi(0x9c81,Alert_None_01,&local_178);
            return;
          }
        }
        RequestEquipItem(EquipBattle,iVar8,lVar9);
        return;
      }
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar4 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"FDS_CharacterService::TryEquipItemToCharacter",0x2d,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_158.Ptr,0x505,L"Invalid Item CharID : %d.");
      goto LAB_14bbe2952;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"FDS_CharacterService::TryEquipItemToCharacter",0x2d,Yes);
    pwVar11 = L"Invalid Item SlotType.";
    uVar10 = 0x4ff;
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"FDS_CharacterService::TryEquipItemToCharacter",0x2d,Yes);
    pwVar11 = L"Invalid ItemData.";
    uVar10 = 0x4f9;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_158.Ptr,uVar10,pwVar11);
LAB_14bbe2952:
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  return;
}

// UpdateCharByJoinMapResponse @ 14bbe3a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FDS_CharacterService::UpdateCharByJoinMapResponse(JoinMapResponse *param_1,ulong64 param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  UDS_LogManager *pUVar7;
  CharacterEntityTypeDefaultTypeInternal *pCVar8;
  RepeatedPtrField<server_msg::CharacterEntityPair> *pRVar9;
  undefined1 auStackY_188 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  uVar3 = *(ulonglong *)&(param_1->_impl_).entity_pair_;
  if ((uVar3 & 1) == 0) {
    pRVar9 = &(param_1->_impl_).entity_pair_;
  }
  else {
    pRVar9 = (RepeatedPtrField<server_msg::CharacterEntityPair> *)(uVar3 + 7);
  }
  iVar1 = *(int *)&(param_1->_impl_).entity_pair_.field_0x8;
  plVar5 = (longlong *)&pRVar9->field_0x0;
  do {
    if (pRVar9 == (RepeatedPtrField<server_msg::CharacterEntityPair> *)(plVar5 + iVar1)) {
      return;
    }
    pCVar8 = &messages::_CharacterEntityType_default_instance_;
    if (*(CharacterEntityTypeDefaultTypeInternal **)(*(longlong *)pRVar9 + 0x18) !=
        (CharacterEntityTypeDefaultTypeInternal *)0x0) {
      pCVar8 = *(CharacterEntityTypeDefaultTypeInternal **)(*(longlong *)pRVar9 + 0x18);
    }
    uVar2 = (pCVar8->_instance)._impl_._oneof_case_[0];
    if ((uVar2 != 1) && (uVar2 != 2)) {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"FDS_CharacterService::UpdateCharByJoinMapResponse",0x31,Yes);
        UDS_LogManager::PrintLog
                  (pUVar7,1,Warning,local_148.Ptr,0x3b3,L"entity_type.entity_case() is invalid.");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_CharacterService.cpp"
                         ,0x3b4,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pRVar9 = (RepeatedPtrField<server_msg::CharacterEntityPair> *)&pRVar9->field_0x8;
  } while( true );
}

