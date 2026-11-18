// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// StaticStruct @ 14b4d17b0

UScriptStruct * __cdecl FDS_ItemBaseTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ItemBaseTableRow.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ItemBaseTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ItemBaseTableRow,(UObject *)pUVar1,
                         L"DS_ItemBaseTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ItemBaseTableRow.OuterSingleton;
}

// FDS_ItemBaseTableRow @ 14b4d3260

FDS_ItemBaseTableRow * __thiscall
FDS_ItemBaseTableRow::FDS_ItemBaseTableRow(FDS_ItemBaseTableRow *this)

{
  this->_padding_ = (longlong)&___7FDS_ItemBaseTableRow__6B_;
  this->ID = 0;
  this->DataStage = 0;
  (this->ID_Name)._padding_ = (longlong)&___7FDS_StringItemID__6B_;
  (this->ID_Name).ID = 0;
  (this->ID_Explain)._padding_ = (longlong)&___7FDS_StringItemID__6B_;
  (this->ID_Explain).ID = 0;
  this->ID_Icon = 0;
  this->IsEquip = false;
  this->MainType = None;
  this->ItemType = None;
  this->OrderValue = 0;
  this->ID_GradeType = None;
  this->SeasonGroup = 0;
  (this->ID_Character).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_Character).ArrayNum = 0;
  (this->ID_Character).ArrayMax = 0;
  this->CharEquipType = None;
  this->RequireLevel = 0;
  this->ItemLevel = 0;
  this->IsLock = false;
  this->ID_ResourceParts = 0;
  this->StackCount = 0;
  this->MaxOwnedCount = 0;
  this->IsTradeTemper = false;
  this->IsSellAble = false;
  this->SellPrice = 0;
  this->Weight = 0;
  this->Durability = 0;
  this->ID_Repair = 0;
  this->ID_Restore = 0;
  this->ID_Dismantle = 0;
  this->ID_Ability = 0;
  this->ID_TemplateType = None;
  this->ID_Template = 0;
  this->ItemTypeValue = 0;
  this->IsEnchantAble = false;
  this->ID_ItemEnchant = 0;
  this->IsPrefixAble = false;
  this->ID_PrefixGroup = 0;
  this->PrefixProbability = 0;
  this->IsPassiveAble = false;
  this->ID_ItemPassiveGroup = 0;
  this->ItemPassiveProbability = 0;
  this->IsSetEffectAble = false;
  this->ID_SetEffectGroup = 0;
  this->SetEffectProbability = 0;
  this->ID_GemSocketList = 0;
  this->IsDestructionAble = false;
  this->IndividualCoolTime = 0.0;
  this->ID_CoolDown = None;
  this->IsRingCmdAble = false;
  this->ID_ItemAction = 0;
  this->ID_ItemCooking = 0;
  this->IsMountInventory = false;
  this->IsMountFoundAble = false;
  return this;
}

// Get @ 14b92c600

FDS_ItemBaseTableRow * __cdecl FDS_ItemBaseTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_ItemBaseTableRow *pFVar4;
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
                      (&bGEnsureHasExecuted<366824751500361753>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_ItemBaseTableRow.cpp"
                       ,0x19,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_ItemBaseTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,ItemBase);
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
      pFVar4 = (FDS_ItemBaseTableRow *)
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
  return (FDS_ItemBaseTableRow *)0x0;
}

// GetAll @ 14b930ab0

TArray<FDS_ItemBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_ItemBaseTableRow::GetAll
          (TArray<FDS_ItemBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_ItemBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<366824751500361782>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_ItemBaseTableRow.cpp"
                       ,0x36,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_ItemBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,ItemBase);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_ItemBaseTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b933910

FDS_ItemBaseTableRow * __cdecl FDS_ItemBaseTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_ItemBaseTableRow *pFVar4;
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
                        (&bGEnsureHasExecuted<366824751500361753>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_ItemBaseTableRow.cpp"
                         ,0x19,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_ItemBaseTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,ItemBase);
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
        pFVar4 = (FDS_ItemBaseTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_ItemBaseTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// ID_AbilityTable @ 14b934500

FDS_ItemAbilityTableRow * __thiscall
FDS_ItemBaseTableRow::ID_AbilityTable(FDS_ItemBaseTableRow *this)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  UDS_TableManager *this_00;
  FDS_ItemAbilityTableRow *pFVar5;
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
  
  iVar1 = this->ID_Ability;
  if ((longlong)iVar1 == 0) {
    return &FDS_ItemAbilityTableRow::DefaultObject;
  }
  this_00 = UDS_TableManager::GetInst();
  if (this_00 == (UDS_TableManager *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1350777531103444977>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_ItemAbilityTableRow.cpp"
                       ,0xf,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FDS_ItemAbilityTableRow *)(*pcVar3)();
      return pFVar5;
    }
  }
  else {
    this_01 = UDS_TableManager::GetDataTable(this_00,ItemAbility);
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
      pUVar8 = FDS_ItemAbilityTableRow::StaticStruct();
      pFVar5 = (FDS_ItemAbilityTableRow *)
               UDataTable::FindRowInternal(this_01,pUVar8,FVar2,(wchar_t *)FVar10.Data,true);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (pFVar5 != (FDS_ItemAbilityTableRow *)0x0) {
        return pFVar5;
      }
    }
  }
  return &FDS_ItemAbilityTableRow::DefaultObject;
}

// ID_CharacterTables @ 14b934a10

TArray<FDS_CharacterBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_ItemBaseTableRow::ID_CharacterTables
          (FDS_ItemBaseTableRow *this,
          TArray<FDS_CharacterBaseTableRow_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  undefined1 local_res10 [8];
  TArray<FDS_CharacterBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  FDS_CharacterBaseTableRow::GetAll(&local_38);
  iVar4 = local_38.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar7.Data = local_38.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_38.ArrayNum != iVar4) {
        `TCheckedPointerIterator<FDS_CharacterBaseTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (FVar7.Data == pFVar1) {
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pFVar6 = (this->ID_Character).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar7.Data;
      pFVar2 = pFVar6 + (longlong)(this->ID_Character).ArrayNum * 4;
      if (pFVar6 != pFVar2) break;
LAB_14b934acc:
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
        goto LAB_14b934acc;
      }
      pFVar6 = pFVar6 + 4;
    } while (pFVar6 != pFVar2);
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// ID_CoolDownTable @ 14b934b90

FDS_TimeCoolDownTableRow * __thiscall
FDS_ItemBaseTableRow::ID_CoolDownTable(FDS_ItemBaseTableRow *this)

{
  FDS_TimeCoolDownTableRow *pFVar1;
  
  pFVar1 = FDS_TimeCoolDownTableRow::GetRef((longlong)(int)this->ID_CoolDown,true);
  return pFVar1;
}

// ID_DismantleTables @ 14b935160

TArray<FDS_ItemDismantleTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_ItemBaseTableRow::ID_DismantleTables
          (FDS_ItemBaseTableRow *this,
          TArray<FDS_ItemDismantleTableRow_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  UDS_TableManager *this_00;
  TArray<FDS_ItemDismantleTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar7;
  UDataTable *this_01;
  ForAnyElementType FVar8;
  undefined1 local_res10 [8];
  FName local_res18;
  TArray<FDS_ItemDismantleTableRow_const_*,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  this_00 = UDS_TableManager::GetInst();
  if (this_00 == (UDS_TableManager *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_425521097417424851>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_ItemDismantleTableRow.cpp"
                       ,0x2d,"false");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArray<FDS_ItemDismantleTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar7;
    }
  }
  else {
    this_01 = UDS_TableManager::GetDataTable(this_00,ItemDismantle);
    if (this_01 != (UDataTable *)0x0) {
      local_res18 = (FName)this_01->_padding_;
      ::FName::ToString(&local_res18,&local_38);
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar8.Data = local_38.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_ItemDismantleTableRow_const_>
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
      `TCheckedPointerIterator<FDS_ItemDismantleTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (FVar8.Data == pFVar1) break;
    lVar2 = *(longlong *)FVar8.Data;
    if (this->ID_Dismantle == *(int *)(lVar2 + 0x20)) {
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

// ID_ExplainTable @ 14b9352e0

FDS_StringItemTableRow * __thiscall
FDS_ItemBaseTableRow::ID_ExplainTable(FDS_ItemBaseTableRow *this)

{
  FDS_StringItemTableRow *pFVar1;
  
  pFVar1 = FDS_StringItemTableRow::GetRef((this->ID_Explain).ID,true);
  return pFVar1;
}

// ID_GradeTypeTable @ 14b9354c0

FDS_CommonGradeTableRow * __thiscall
FDS_ItemBaseTableRow::ID_GradeTypeTable(FDS_ItemBaseTableRow *this)

{
  FDS_CommonGradeTableRow *pFVar1;
  
  pFVar1 = FDS_CommonGradeTableRow::GetRef((ulonglong)this->ID_GradeType,true);
  return pFVar1;
}

// ID_IconTable @ 14b935500

FDS_ResourceIconTableRow * __thiscall FDS_ItemBaseTableRow::ID_IconTable(FDS_ItemBaseTableRow *this)

{
  FDS_ResourceIconTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceIconTableRow::GetRef((longlong)this->ID_Icon,true);
  return pFVar1;
}

// ID_NameTable @ 14b935b50

FDS_StringItemTableRow * __thiscall FDS_ItemBaseTableRow::ID_NameTable(FDS_ItemBaseTableRow *this)

{
  FDS_StringItemTableRow *pFVar1;
  
  pFVar1 = FDS_StringItemTableRow::GetRef((this->ID_Name).ID,true);
  return pFVar1;
}

// ID_RepairTable @ 14b935cf0

FDS_ItemRepairTableRow * __thiscall FDS_ItemBaseTableRow::ID_RepairTable(FDS_ItemBaseTableRow *this)

{
  FDS_ItemRepairTableRow *pFVar1;
  
  pFVar1 = FDS_ItemRepairTableRow::GetRef((longlong)this->ID_Repair,true);
  return pFVar1;
}

// ID_ResourcePartsTable @ 14b935d50

FDS_ResourcePartsTableRow * __thiscall
FDS_ItemBaseTableRow::ID_ResourcePartsTable(FDS_ItemBaseTableRow *this)

{
  FDS_ResourcePartsTableRow *pFVar1;
  
  pFVar1 = FDS_ResourcePartsTableRow::GetRef((longlong)this->ID_ResourceParts,true);
  return pFVar1;
}

// ID_RestoreTable @ 14b935d90

FDS_ItemRestoreTableRow * __thiscall
FDS_ItemBaseTableRow::ID_RestoreTable(FDS_ItemBaseTableRow *this)

{
  FDS_ItemRestoreTableRow *pFVar1;
  
  pFVar1 = FDS_ItemRestoreTableRow::GetRef((longlong)this->ID_Restore,true);
  return pFVar1;
}

// IsValid @ 14b9367b0

bool __thiscall FDS_ItemBaseTableRow::IsValid(FDS_ItemBaseTableRow *this)

{
  return this != &DefaultObject;
}

// GetWeaponType @ 14b9b46e0

EDS_WeaponType __thiscall FDS_ItemBaseTableRow::GetWeaponType(FDS_ItemBaseTableRow *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 uVar3;
  EDS_WeaponType EVar4;
  ForAnyElementType FVar5;
  undefined1 local_res10 [8];
  TArray<FDS_WeaponTypeBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_18;
  
  FDS_WeaponTypeBaseTableRow::GetAll(&local_18);
  iVar2 = local_18.ArrayNum;
  pFVar1 = local_18.AllocatorInstance.Data + (longlong)iVar2 * 8;
  uVar3 = local_18._8_8_;
  FVar5.Data = local_18.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar3 != iVar2) {
      `TCheckedPointerIterator<FDS_WeaponTypeBaseTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
      uVar3 = local_18._8_8_;
    }
    if (FVar5.Data == pFVar1) break;
    if (*(EDS_ItemType *)(*(longlong *)FVar5.Data + 0x10) == this->ItemType) {
      EVar4 = *(EDS_WeaponType *)(*(longlong *)FVar5.Data + 8);
LAB_14b9b4743:
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      return EVar4;
    }
    FVar5.Data = FVar5.Data + 8;
  }
  EVar4 = None;
  goto LAB_14b9b4743;
}

