// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesInterface
// Functions: 1

// operator+= @ 14ec24a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FSessionSettings * __thiscall
UE::Online::FSessionSettings::operator+=(FSessionSettings *this,FSessionSettingsChanges *param_1)

{
  TMap<FName,UE::Online::FCustomSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>_>
  *this_00;
  FName *pFVar1;
  ulonglong uVar2;
  byte bVar3;
  uint uVar4;
  FName FVar5;
  undefined1 *puVar6;
  code *pcVar7;
  longlong lVar8;
  TMap<FName,UE::Online::FCustomSessionSettingUpdate,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSettingUpdate,0>_>
  *pTVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  FSessionSettings *pFVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 *puVar16;
  int iVar17;
  FName *pFVar18;
  longlong *plVar19;
  uint uVar20;
  longlong *plVar21;
  uint *puVar22;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined1 local_e7 [7];
  TMap<FName,UE::Online::FCustomSessionSettingUpdate,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSettingUpdate,0>_>
  *local_e0;
  int iStack_d8;
  uint uStack_d4;
  undefined1 *local_d0;
  undefined4 uStack_c8;
  int iStack_c4;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  int local_b0;
  int local_ac;
  FName local_a8;
  FSessionSettings *local_a0;
  TBitArray<FDefaultBitArrayAllocator> *local_98;
  TMap<FName,UE::Online::FCustomSessionSettingUpdate,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSettingUpdate,0>_>
  *local_90;
  TMap<FName,UE::Online::FCustomSessionSettingUpdate,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSettingUpdate,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  longlong local_58;
  longlong lStack_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_108;
  if ((param_1->SchemaName).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
    this->SchemaName = (FName)(param_1->SchemaName).field0_0x0;
  }
  if ((param_1->NumMaxConnections).bIsSet != false) {
    this->NumMaxConnections = (param_1->NumMaxConnections).TypedValue;
  }
  if ((param_1->JoinPolicy).bIsSet != false) {
    this->JoinPolicy = (param_1->JoinPolicy).TypedValue;
  }
  if ((param_1->bAllowNewMembers).bIsSet != false) {
    this->bAllowNewMembers = (param_1->bAllowNewMembers).TypedValue;
  }
  pFVar18 = (FName *)(param_1->RemovedCustomSettings).AllocatorInstance.Data;
  this_00 = &this->CustomSettings;
  iVar12 = (param_1->RemovedCustomSettings).ArrayNum;
  pFVar1 = pFVar18 + iVar12;
  local_a0 = this;
  while( true ) {
    if ((param_1->RemovedCustomSettings).ArrayNum != iVar12) {
      local_e8 = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_e8);
    }
    if (pFVar18 == pFVar1) break;
    FVar5 = *pFVar18;
    local_a8 = FVar5;
    if (*(int *)&(this->CustomSettings).field_0x8 != *(int *)&(this->CustomSettings).field_0x34) {
      uVar11 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
      TSet<TTuple<FName,UE::Online::FCustomSessionSetting>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,UE::Online::FCustomSessionSetting>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>,FDefaultSetAllocator>
                           *)this_00,FVar5.Number + uVar11,&local_a8);
    }
    pFVar18 = pFVar18 + 1;
  }
  TMap<FName,UE::Online::FCustomSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>_>
  ::Append<FDefaultSetAllocator>(this_00,&param_1->AddedCustomSettings);
  puVar6 = &(param_1->ChangedCustomSettings).field_0x10;
  iVar12 = *(int *)&(param_1->ChangedCustomSettings).field_0x28;
  local_e0 = &param_1->ChangedCustomSettings;
  iStack_d8 = 0;
  uStack_d4 = 1;
  local_c0 = 0;
  iStack_c4 = 0;
  if (iVar12 != 0) {
    puVar22 = *(uint **)&(param_1->ChangedCustomSettings).field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)puVar6;
    }
    uVar11 = *puVar22;
    local_c0 = 0;
    while (uVar11 == 0) {
      lVar15 = (longlong)iStack_d8;
      local_c0 = local_c0 + 0x20;
      iStack_d8 = iStack_d8 + 1;
      iStack_c4 = iVar12;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d8) goto LAB_14ec24b8d;
      uVar11 = puVar22[lVar15 + 1];
    }
    uStack_d4 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_d4 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_b0 = (int)lVar15;
    iStack_c4 = local_c0 + -1 + local_b0;
    if (iVar12 < iStack_c4) {
      iStack_c4 = iVar12;
    }
  }
LAB_14ec24b8d:
  iStack_b8 = *(int *)&(param_1->ChangedCustomSettings).field_0x8 -
              *(int *)&(param_1->ChangedCustomSettings).field_0x34;
  uVar11 = *(uint *)&(param_1->ChangedCustomSettings).field_0x28;
  uStack_c8 = 0xffffffff;
  uVar20 = uVar11 & 0xffffffe0;
  TStack_80._padding_ = CONCAT44(uStack_d4,iStack_d8);
  TStack_80.CurrentBitIndex = iStack_c4;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar11 >> 5;
  TStack_80._28_4_ = iStack_c4;
  TStack_80.BaseBitIndex = local_c0;
  uStack_60 = CONCAT44(uStack_b4,iStack_b8);
  local_d0 = puVar6;
  iStack_bc = iStack_c4;
  local_98 = (TBitArray<FDefaultBitArrayAllocator> *)puVar6;
  local_90 = local_e0;
  local_88 = local_e0;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar6;
  if ((((int)uVar11 < 0) || (iVar12 < (int)uVar11)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    pFVar13 = (FSessionSettings *)(*pcVar7)();
    return pFVar13;
  }
  pFVar13 = local_a0;
  uVar4 = *(uint *)&(param_1->ChangedCustomSettings).field_0x28;
  if (uVar11 != uVar4) {
    puVar16 = *(undefined1 **)&(param_1->ChangedCustomSettings).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar6;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar17 * 4);
    while (uVar11 == 0) {
      lVar15 = (longlong)iVar17;
      uVar20 = uVar20 + 0x20;
      iVar17 = iVar17 + 1;
      uVar11 = uVar4;
      if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar17) goto LAB_14ec24ca0;
      uVar11 = *(uint *)(puVar16 + lVar15 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_ac = (int)lVar15;
    uVar11 = local_ac + -1 + uVar20;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_14ec24ca0:
  do {
    pTVar9 = local_88;
    if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
      local_e7[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FCustomSessionSettingUpdate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_e7);
    }
    if (((TStack_80.CurrentBitIndex == uVar11) && (TStack_80.Array == local_98)) &&
       (pTVar9 == local_90)) {
      return pFVar13;
    }
    plVar21 = (longlong *)((longlong)TStack_80.CurrentBitIndex * 0x60 + *(longlong *)pTVar9);
    lVar15 = *plVar21;
    uVar20 = ::GetTypeHash((FNameEntryId)(uint)lVar15);
    if (*(int *)&(pFVar13->CustomSettings).field_0x8 != *(int *)&(this->CustomSettings).field_0x34)
    {
      puVar6 = *(undefined1 **)&(this->CustomSettings).field_0x40;
      puVar16 = &(this->CustomSettings).field_0x38;
      if (puVar6 != (undefined1 *)0x0) {
        puVar16 = puVar6;
      }
      iVar12 = *(int *)(puVar16 +
                       (ulonglong)
                       (*(int *)&(this->CustomSettings).field_0x48 - 1U &
                       uVar20 + (int)((ulonglong)lVar15 >> 0x20)) * 4);
      if (iVar12 != -1) {
        do {
          plVar14 = (longlong *)((longlong)iVar12 * 0x38 + *(longlong *)&this_00->field_0x0);
          if (*plVar14 == lVar15) {
            plVar19 = plVar14 + 1;
            if (plVar14 == (longlong *)0x0) {
              plVar19 = (longlong *)0x0;
            }
            if (plVar19 != (longlong *)0x0) {
              if (plVar21 + 6 != plVar19) {
                bVar3 = *(byte *)(plVar21 + 8);
                local_48 = CONCAT71(local_48._1_7_,bVar3);
                if ((3 < bVar3) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)"
                                        ,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                        ,0xec,L""), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  pFVar13 = (FSessionSettings *)(*pcVar7)();
                  return pFVar13;
                }
                (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<FString,__int64,double,bool>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                            ::__l2::CopyConstructors)[bVar3])(&local_58,plVar21 + 6);
                uVar2 = plVar19[2];
                lVar15 = *plVar19;
                lVar8 = plVar19[1];
                *plVar19 = local_58;
                plVar19[1] = lStack_50;
                plVar19[2] = local_48;
                local_58 = lVar15;
                lStack_50 = lVar8;
                local_48 = uVar2;
                if ((3 < (uVar2 & 0xff)) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                        ,0xd4,L""), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  pFVar13 = (FSessionSettings *)(*pcVar7)();
                  return pFVar13;
                }
                (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,__int64,double,bool>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar2 & 0xff])(&local_58);
              }
              *(char *)(plVar19 + 3) = (char)plVar21[9];
              *(char *)(plVar19 + 4) = (char)plVar21[10];
              *(undefined4 *)((longlong)plVar19 + 0x24) = *(undefined4 *)((longlong)plVar21 + 0x54);
            }
            break;
          }
          iVar12 = (int)plVar14[6];
        } while (iVar12 != -1);
      }
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  } while( true );
}

