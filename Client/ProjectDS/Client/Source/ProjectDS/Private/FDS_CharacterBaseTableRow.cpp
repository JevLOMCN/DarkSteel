// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 30

// StaticStruct @ 14b440ea0

UScriptStruct * __cdecl FDS_CharacterBaseTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_CharacterBaseTableRow.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_CharacterBaseTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_CharacterBaseTableRow,(UObject *)pUVar1,
                         L"DS_CharacterBaseTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_CharacterBaseTableRow.OuterSingleton;
}

// FDS_CharacterBaseTableRow @ 14b443670

FDS_CharacterBaseTableRow * __thiscall
FDS_CharacterBaseTableRow::FDS_CharacterBaseTableRow(FDS_CharacterBaseTableRow *this)

{
  this->_padding_ = (longlong)&___7FDS_CharacterBaseTableRow__6B_;
  this->ID = 0;
  this->DataStage = 0;
  ::FString::FString(&this->Version,L"");
  this->UiOrder = 0;
  (this->ID_Name)._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  (this->ID_Name).ID = 0;
  (this->ID_Title)._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  (this->ID_Title).ID = 0;
  this->Grade = None;
  this->RaceType = None;
  this->GenderType = None;
  this->CharEquipType = None;
  this->ElementType = NormalType;
  this->DefaultHeightConditionType = Ground;
  this->ID_ResourcePreset = 0;
  this->ID_DefaultSkin = 0;
  (this->ID_ScenarioInfo)._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  (this->ID_ScenarioInfo).ID = 0;
  (this->Origin)._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  (this->Origin).ID = 0;
  (this->SummaryStatus).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SummaryStatus).ArrayNum = 0;
  (this->SummaryStatus).ArrayMax = 0;
  this->ID_AutoBattleBt = 0;
  this->ID_NormalSkill = 0;
  (this->ID_NormalAttack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_NormalAttack).ArrayNum = 0;
  (this->ID_NormalAttack).ArrayMax = 0;
  (this->ID_DefaultSkill).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_DefaultSkill).ArrayNum = 0;
  (this->ID_DefaultSkill).ArrayMax = 0;
  this->ID_TraitSkill = 0;
  this->ID_SpecialSkill = 0;
  this->ID_JumpSkill = 0;
  this->ID_AirDashSkill = 0;
  this->ID_SwitchingSkill = 0;
  (this->ID_SKillList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_SKillList).ArrayNum = 0;
  (this->ID_SKillList).ArrayMax = 0;
  this->ID_NotInputRoll = 0;
  this->ID_InputRoll = 0;
  this->ID_AirWalkGroup = 0;
  this->WalkSpeed = 0.0;
  this->RunSpeed = 0.0;
  this->BattleRunSpeed = 0.0;
  this->RollSpeed = 0.0;
  this->MaxAcceleration = 0.0;
  this->MaxDeceleration = 0.0;
  this->StateConGrade = 0;
  this->MoveConGrade = 0;
  this->MaxLevel = 0;
  this->ID_LevelGroup = 0;
  this->ID_AscendGroup = 0;
  this->MaxEvolution = 0;
  this->CharConvRewardItem = 0;
  this->CharConvRewardItemCnt = 0;
  this->ID_CameraPreset = 0;
  this->InteractionOffset = 0;
  this->HandlingGradeHold = 0;
  this->HandlingGradeLift = 0;
  this->HandlingGradeHeavyLift = 0;
  this->RealRaidus = 0;
  return this;
}

// ~FDS_CharacterBaseTableRow @ 14b444210

void __thiscall
FDS_CharacterBaseTableRow::~FDS_CharacterBaseTableRow(FDS_CharacterBaseTableRow *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ID_SKillList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_DefaultSkill).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_NormalAttack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SummaryStatus).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Version).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// CharConvRewardItemTable @ 14b8ffc30

FDS_ItemBaseTableRow * __thiscall
FDS_CharacterBaseTableRow::CharConvRewardItemTable(FDS_CharacterBaseTableRow *this)

{
  FDS_ItemBaseTableRow *pFVar1;
  
  pFVar1 = FDS_ItemBaseTableRow::GetRef((longlong)this->CharConvRewardItem,true);
  return pFVar1;
}

// Get @ 14b902200

FDS_CharacterBaseTableRow * __cdecl FDS_CharacterBaseTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_CharacterBaseTableRow *pFVar4;
  UDataTable *this_00;
  FString *pFVar5;
  FName *pFVar6;
  UScriptStruct *pUVar7;
  wchar_t *pwVar8;
  ForAnyElementType FVar9;
  FName local_res18;
  FName local_res20;
  FString local_38;
  FString local_28;
  
  this = UDS_TableManager::GetInst();
  if (this == (UDS_TableManager *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2926285777111351320>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_CharacterBaseTableRow.cpp"
                       ,0x18,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_CharacterBaseTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,CharacterBase);
    if (this_00 != (UDataTable *)0x0) {
      local_res18 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res18,&local_38);
      pFVar5 = DS_Util::FromInt64(&local_28,param_1);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_res20,pwVar8);
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar9.Data = local_38.Data.AllocatorInstance.Data;
      }
      FVar1 = *pFVar6;
      pUVar7 = StaticStruct();
      pFVar4 = (FDS_CharacterBaseTableRow *)
               UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      return pFVar4;
    }
  }
  return (FDS_CharacterBaseTableRow *)0x0;
}

// GetAll @ 14b9043d0

TArray<FDS_CharacterBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_CharacterBaseTableRow::GetAll
          (TArray<FDS_CharacterBaseTableRow_const_*,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_CharacterBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
  UDataTable *this_00;
  ForAnyElementType FVar4;
  FName local_res8;
  FString local_18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this = UDS_TableManager::GetInst();
  if (this == (UDS_TableManager *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2926285777111351349>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_CharacterBaseTableRow.cpp"
                       ,0x35,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_CharacterBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,CharacterBase);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_CharacterBaseTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b9086e0

FDS_CharacterBaseTableRow * __cdecl FDS_CharacterBaseTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_CharacterBaseTableRow *pFVar4;
  UDataTable *this_00;
  FString *pFVar5;
  FName *pFVar6;
  UScriptStruct *pUVar7;
  wchar_t *pwVar8;
  ForAnyElementType FVar9;
  FName local_res8;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  if (param_1 != 0) {
    this = UDS_TableManager::GetInst();
    if (this == (UDS_TableManager *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2926285777111351320>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_CharacterBaseTableRow.cpp"
                         ,0x18,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_CharacterBaseTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,CharacterBase);
      if (this_00 != (UDataTable *)0x0) {
        local_res8 = (FName)this_00->_padding_;
        ::FName::ToString(&local_res8,&local_38);
        pFVar5 = DS_Util::FromInt64(&local_28,param_1);
        if ((pFVar5->Data).ArrayNum == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
        }
        pFVar6 = ::FName::FName(local_res18,pwVar8);
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_38.Data.ArrayNum != 0) {
          FVar9.Data = local_38.Data.AllocatorInstance.Data;
        }
        FVar1 = *pFVar6;
        pUVar7 = StaticStruct();
        pFVar4 = (FDS_CharacterBaseTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_CharacterBaseTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// ID_AirDashSkillTable @ 14b909900

FDS_SkillTableRow * __thiscall
FDS_CharacterBaseTableRow::ID_AirDashSkillTable(FDS_CharacterBaseTableRow *this)

{
  FDS_SkillTableRow *pFVar1;
  
  pFVar1 = FDS_SkillTableRow::GetRef((longlong)this->ID_AirDashSkill,true);
  return pFVar1;
}

// ID_AirWalkGroupTable @ 14b909920

FDS_ActionAirWalkTableRow * __thiscall
FDS_CharacterBaseTableRow::ID_AirWalkGroupTable(FDS_CharacterBaseTableRow *this)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  UDS_TableManager *this_00;
  FDS_ActionAirWalkTableRow *pFVar5;
  UDataTable *this_01;
  FString *pFVar6;
  FName *pFVar7;
  UScriptStruct *pUVar8;
  wchar_t *pwVar9;
  ForAnyElementType FVar10;
  FName local_res8;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  iVar1 = this->ID_AirWalkGroup;
  if ((longlong)iVar1 == 0) {
    return &FDS_ActionAirWalkTableRow::DefaultObject;
  }
  this_00 = UDS_TableManager::GetInst();
  if (this_00 == (UDS_TableManager *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8586097803225202673>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_ActionAirWalkTableRow.cpp"
                       ,0xf,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FDS_ActionAirWalkTableRow *)(*pcVar3)();
      return pFVar5;
    }
  }
  else {
    this_01 = UDS_TableManager::GetDataTable(this_00,ActionAirWalk);
    if (this_01 != (UDataTable *)0x0) {
      local_res8 = (FName)this_01->_padding_;
      ::FName::ToString(&local_res8,&local_28);
      pFVar6 = DS_Util::FromInt64(&local_18,(longlong)iVar1);
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      pFVar7 = ::FName::FName(&local_res10,pwVar9);
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar10.Data = local_28.Data.AllocatorInstance.Data;
      }
      FVar2 = *pFVar7;
      pUVar8 = FDS_ActionAirWalkTableRow::StaticStruct();
      pFVar5 = (FDS_ActionAirWalkTableRow *)
               UDataTable::FindRowInternal(this_01,pUVar8,FVar2,(wchar_t *)FVar10.Data,true);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (pFVar5 != (FDS_ActionAirWalkTableRow *)0x0) {
        return pFVar5;
      }
    }
  }
  return &FDS_ActionAirWalkTableRow::DefaultObject;
}

// ID_AscendGroupTables @ 14b909a70

TArray<FDS_CharacterAscendTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_CharacterBaseTableRow::ID_AscendGroupTables
          (FDS_CharacterBaseTableRow *this,
          TArray<FDS_CharacterAscendTableRow_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  UDS_TableManager *this_00;
  TArray<FDS_CharacterAscendTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar7;
  UDataTable *this_01;
  ForAnyElementType FVar8;
  undefined1 local_res10 [8];
  FName local_res18;
  TArray<FDS_CharacterAscendTableRow_const_*,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  this_00 = UDS_TableManager::GetInst();
  if (this_00 == (UDS_TableManager *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_891918489512574930>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_CharacterAscendTableRow.cpp"
                       ,0x2e,"false");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArray<FDS_CharacterAscendTableRow_const_*,TSizedDefaultAllocator<32>_> *)
               (*pcVar3)();
      return pTVar7;
    }
  }
  else {
    this_01 = UDS_TableManager::GetDataTable(this_00,CharacterAscend);
    if (this_01 != (UDataTable *)0x0) {
      local_res18 = (FName)this_01->_padding_;
      ::FName::ToString(&local_res18,&local_38);
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar8.Data = local_38.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_CharacterAscendTableRow_const_>
                (this_01,(wchar_t *)FVar8.Data,&local_48);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  iVar4 = local_48.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 8;
  FVar8.Data = local_48.AllocatorInstance.Data;
  while( true ) {
    if (local_48.ArrayNum != iVar4) {
      `TCheckedPointerIterator<FDS_CharacterAscendTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (FVar8.Data == pFVar1) break;
    lVar2 = *(longlong *)FVar8.Data;
    if (this->ID_AscendGroup == *(int *)(lVar2 + 0x10)) {
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) = lVar2;
    }
    FVar8.Data = FVar8.Data + 8;
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ID_AutoBattleBtTable @ 14b909bd0

FDS_ResourceEtcTableRow * __thiscall
FDS_CharacterBaseTableRow::ID_AutoBattleBtTable(FDS_CharacterBaseTableRow *this)

{
  FDS_ResourceEtcTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceEtcTableRow::GetRef((longlong)this->ID_AutoBattleBt,true);
  return pFVar1;
}

// ID_DefaultSkillTables @ 14b90a110

TArray<FDS_SkillTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_CharacterBaseTableRow::ID_DefaultSkillTables
          (FDS_CharacterBaseTableRow *this,
          TArray<FDS_SkillTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  undefined1 local_res10 [8];
  TArray<FDS_SkillTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  FDS_SkillTableRow::GetAll(&local_38);
  iVar4 = local_38.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar7.Data = local_38.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_38.ArrayNum != iVar4) {
        `TCheckedPointerIterator<FDS_SkillTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (FVar7.Data == pFVar1) {
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pFVar6 = (this->ID_DefaultSkill).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar7.Data;
      pFVar2 = pFVar6 + (longlong)(this->ID_DefaultSkill).ArrayNum * 4;
      if (pFVar6 != pFVar2) break;
LAB_14b90a1cf:
      FVar7.Data = FVar7.Data + 8;
    }
    do {
      if (*(int *)pFVar6 == *(int *)(lVar3 + 8)) {
        iVar5 = __return_storage_ptr__->ArrayNum;
        if (iVar5 == __return_storage_ptr__->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar5 + 1;
        *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) =
             lVar3;
        goto LAB_14b90a1cf;
      }
      pFVar6 = pFVar6 + 4;
    } while (pFVar6 != pFVar2);
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// ID_DefaultSkinTable @ 14b90a220

FDS_CharacterSkinTableRow * __thiscall
FDS_CharacterBaseTableRow::ID_DefaultSkinTable(FDS_CharacterBaseTableRow *this)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  UDS_TableManager *this_00;
  FDS_CharacterSkinTableRow *pFVar5;
  UDataTable *this_01;
  FString *pFVar6;
  FName *pFVar7;
  UScriptStruct *pUVar8;
  wchar_t *pwVar9;
  ForAnyElementType FVar10;
  FName local_res8;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  iVar1 = this->ID_DefaultSkin;
  if ((longlong)iVar1 == 0) {
    return &FDS_CharacterSkinTableRow::DefaultObject;
  }
  this_00 = UDS_TableManager::GetInst();
  if (this_00 == (UDS_TableManager *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3259721972543651819>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_CharacterSkinTableRow.cpp"
                       ,0x15,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FDS_CharacterSkinTableRow *)(*pcVar3)();
      return pFVar5;
    }
  }
  else {
    this_01 = UDS_TableManager::GetDataTable(this_00,CharacterSkin);
    if (this_01 != (UDataTable *)0x0) {
      local_res8 = (FName)this_01->_padding_;
      ::FName::ToString(&local_res8,&local_28);
      pFVar6 = DS_Util::FromInt64(&local_18,(longlong)iVar1);
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      pFVar7 = ::FName::FName(&local_res10,pwVar9);
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar10.Data = local_28.Data.AllocatorInstance.Data;
      }
      FVar2 = *pFVar7;
      pUVar8 = FDS_CharacterSkinTableRow::StaticStruct();
      pFVar5 = (FDS_CharacterSkinTableRow *)
               UDataTable::FindRowInternal(this_01,pUVar8,FVar2,(wchar_t *)FVar10.Data,true);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (pFVar5 != (FDS_CharacterSkinTableRow *)0x0) {
        return pFVar5;
      }
    }
  }
  return &FDS_CharacterSkinTableRow::DefaultObject;
}

// ID_InputRollTable @ 14b90aa00

FDS_SkillTableRow * __thiscall
FDS_CharacterBaseTableRow::ID_InputRollTable(FDS_CharacterBaseTableRow *this)

{
  FDS_SkillTableRow *pFVar1;
  
  pFVar1 = FDS_SkillTableRow::GetRef((longlong)this->ID_InputRoll,true);
  return pFVar1;
}

// ID_JumpSkillTable @ 14b90ad60

FDS_SkillTableRow * __thiscall
FDS_CharacterBaseTableRow::ID_JumpSkillTable(FDS_CharacterBaseTableRow *this)

{
  FDS_SkillTableRow *pFVar1;
  
  pFVar1 = FDS_SkillTableRow::GetRef((longlong)this->ID_JumpSkill,true);
  return pFVar1;
}

// ID_LevelGroupTables @ 14b90ad80

TArray<FDS_CharacterLevelTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_CharacterBaseTableRow::ID_LevelGroupTables
          (FDS_CharacterBaseTableRow *this,
          TArray<FDS_CharacterLevelTableRow_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  UDS_TableManager *this_00;
  TArray<FDS_CharacterLevelTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar7;
  UDataTable *this_01;
  ForAnyElementType FVar8;
  undefined1 local_res10 [8];
  FName local_res18;
  TArray<FDS_CharacterLevelTableRow_const_*,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  this_00 = UDS_TableManager::GetInst();
  if (this_00 == (UDS_TableManager *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5506877212889972780>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_CharacterLevelTableRow.cpp"
                       ,0x2c,"false");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArray<FDS_CharacterLevelTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)()
      ;
      return pTVar7;
    }
  }
  else {
    this_01 = UDS_TableManager::GetDataTable(this_00,CharacterLevel);
    if (this_01 != (UDataTable *)0x0) {
      local_res18 = (FName)this_01->_padding_;
      ::FName::ToString(&local_res18,&local_38);
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar8.Data = local_38.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_CharacterLevelTableRow_const_>
                (this_01,(wchar_t *)FVar8.Data,&local_48);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  iVar4 = local_48.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 8;
  FVar8.Data = local_48.AllocatorInstance.Data;
  while( true ) {
    if (local_48.ArrayNum != iVar4) {
      `TCheckedPointerIterator<FDS_CharacterLevelTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (FVar8.Data == pFVar1) break;
    lVar2 = *(longlong *)FVar8.Data;
    if (this->ID_LevelGroup == *(int *)(lVar2 + 0x10)) {
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) = lVar2;
    }
    FVar8.Data = FVar8.Data + 8;
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ID_NameTable @ 14b90af80

FDS_StringBaseTableRow * __thiscall
FDS_CharacterBaseTableRow::ID_NameTable(FDS_CharacterBaseTableRow *this)

{
  FDS_StringBaseTableRow *pFVar1;
  
  pFVar1 = FDS_StringBaseTableRow::GetRef((this->ID_Name).ID,true);
  return pFVar1;
}

// ID_NormalAttackTables @ 14b90afe0

TArray<FDS_SkillTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_CharacterBaseTableRow::ID_NormalAttackTables
          (FDS_CharacterBaseTableRow *this,
          TArray<FDS_SkillTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  undefined1 local_res10 [8];
  TArray<FDS_SkillTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  FDS_SkillTableRow::GetAll(&local_38);
  iVar4 = local_38.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar7.Data = local_38.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_38.ArrayNum != iVar4) {
        `TCheckedPointerIterator<FDS_SkillTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (FVar7.Data == pFVar1) {
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pFVar6 = (this->ID_NormalAttack).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar7.Data;
      pFVar2 = pFVar6 + (longlong)(this->ID_NormalAttack).ArrayNum * 4;
      if (pFVar6 != pFVar2) break;
LAB_14b90b09f:
      FVar7.Data = FVar7.Data + 8;
    }
    do {
      if (*(int *)pFVar6 == *(int *)(lVar3 + 8)) {
        iVar5 = __return_storage_ptr__->ArrayNum;
        if (iVar5 == __return_storage_ptr__->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar5 + 1;
        *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) =
             lVar3;
        goto LAB_14b90b09f;
      }
      pFVar6 = pFVar6 + 4;
    } while (pFVar6 != pFVar2);
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// ID_NormalSkillTable @ 14b90b0f0

FDS_SkillTableRow * __thiscall
FDS_CharacterBaseTableRow::ID_NormalSkillTable(FDS_CharacterBaseTableRow *this)

{
  FDS_SkillTableRow *pFVar1;
  
  pFVar1 = FDS_SkillTableRow::GetRef((longlong)this->ID_NormalSkill,true);
  return pFVar1;
}

// ID_NotInputRollTable @ 14b90b110

FDS_SkillTableRow * __thiscall
FDS_CharacterBaseTableRow::ID_NotInputRollTable(FDS_CharacterBaseTableRow *this)

{
  FDS_SkillTableRow *pFVar1;
  
  pFVar1 = FDS_SkillTableRow::GetRef((longlong)this->ID_NotInputRoll,true);
  return pFVar1;
}

// ID_ResourcePresetTable @ 14b90b470

FDS_ResourcePresetTableRow * __thiscall
FDS_CharacterBaseTableRow::ID_ResourcePresetTable(FDS_CharacterBaseTableRow *this)

{
  FDS_ResourcePresetTableRow *pFVar1;
  
  pFVar1 = FDS_ResourcePresetTableRow::GetRef((longlong)this->ID_ResourcePreset,true);
  return pFVar1;
}

// ID_SKillListTables @ 14b90b610

TArray<FDS_SkillTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_CharacterBaseTableRow::ID_SKillListTables
          (FDS_CharacterBaseTableRow *this,
          TArray<FDS_SkillTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  undefined1 local_res10 [8];
  TArray<FDS_SkillTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  FDS_SkillTableRow::GetAll(&local_38);
  iVar4 = local_38.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar7.Data = local_38.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_38.ArrayNum != iVar4) {
        `TCheckedPointerIterator<FDS_SkillTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (FVar7.Data == pFVar1) {
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pFVar6 = (this->ID_SKillList).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar7.Data;
      pFVar2 = pFVar6 + (longlong)(this->ID_SKillList).ArrayNum * 4;
      if (pFVar6 != pFVar2) break;
LAB_14b90b6cf:
      FVar7.Data = FVar7.Data + 8;
    }
    do {
      if (*(int *)pFVar6 == *(int *)(lVar3 + 8)) {
        iVar5 = __return_storage_ptr__->ArrayNum;
        if (iVar5 == __return_storage_ptr__->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar5 + 1;
        *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) =
             lVar3;
        goto LAB_14b90b6cf;
      }
      pFVar6 = pFVar6 + 4;
    } while (pFVar6 != pFVar2);
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// ID_ScenarioInfoTable @ 14b90b720

FDS_StringBaseTableRow * __thiscall
FDS_CharacterBaseTableRow::ID_ScenarioInfoTable(FDS_CharacterBaseTableRow *this)

{
  FDS_StringBaseTableRow *pFVar1;
  
  pFVar1 = FDS_StringBaseTableRow::GetRef((this->ID_ScenarioInfo).ID,true);
  return pFVar1;
}

// ID_SpecialSkillTable @ 14b90b760

FDS_SkillTableRow * __thiscall
FDS_CharacterBaseTableRow::ID_SpecialSkillTable(FDS_CharacterBaseTableRow *this)

{
  FDS_SkillTableRow *pFVar1;
  
  pFVar1 = FDS_SkillTableRow::GetRef((longlong)this->ID_SpecialSkill,true);
  return pFVar1;
}

// ID_SwitchingSkillTable @ 14b90b8a0

FDS_SkillTableRow * __thiscall
FDS_CharacterBaseTableRow::ID_SwitchingSkillTable(FDS_CharacterBaseTableRow *this)

{
  FDS_SkillTableRow *pFVar1;
  
  pFVar1 = FDS_SkillTableRow::GetRef((longlong)this->ID_SwitchingSkill,true);
  return pFVar1;
}

// ID_TitleTable @ 14b90b900

FDS_StringBaseTableRow * __thiscall
FDS_CharacterBaseTableRow::ID_TitleTable(FDS_CharacterBaseTableRow *this)

{
  FDS_StringBaseTableRow *pFVar1;
  
  pFVar1 = FDS_StringBaseTableRow::GetRef((this->ID_Title).ID,true);
  return pFVar1;
}

// ID_TraitSkillTable @ 14b90b920

FDS_SkillTableRow * __thiscall
FDS_CharacterBaseTableRow::ID_TraitSkillTable(FDS_CharacterBaseTableRow *this)

{
  FDS_SkillTableRow *pFVar1;
  
  pFVar1 = FDS_SkillTableRow::GetRef((longlong)this->ID_TraitSkill,true);
  return pFVar1;
}

// IsValid @ 14b90be60

bool __thiscall FDS_CharacterBaseTableRow::IsValid(FDS_CharacterBaseTableRow *this)

{
  return this != &DefaultObject;
}

// OriginTable @ 14b90bff0

FDS_StringBaseTableRow * __thiscall
FDS_CharacterBaseTableRow::OriginTable(FDS_CharacterBaseTableRow *this)

{
  FDS_StringBaseTableRow *pFVar1;
  
  pFVar1 = FDS_StringBaseTableRow::GetRef((this->Origin).ID,true);
  return pFVar1;
}

// GetRefByGender @ 14b9b2990

FDS_CharacterBaseTableRow * __cdecl
FDS_CharacterBaseTableRow::GetRefByGender(EDS_GenderType param_1)

{
  FDS_CharacterBaseTableRow *pFVar1;
  
  if (param_1 == Male) {
    pFVar1 = GetRef(1,true);
    return pFVar1;
  }
  if (param_1 == Female) {
    pFVar1 = GetRef(2,true);
    return pFVar1;
  }
  return &DefaultObject;
}

