// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticStruct @ 14b5911b0

UScriptStruct * __cdecl FDS_SkillGrowLevelTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_SkillGrowLevelTableRow.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_SkillGrowLevelTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_SkillGrowLevelTableRow,(UObject *)pUVar1,
                         L"DS_SkillGrowLevelTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_SkillGrowLevelTableRow.OuterSingleton;
}

// FDS_SkillGrowLevelTableRow @ 14b593f00

FDS_SkillGrowLevelTableRow * __thiscall
FDS_SkillGrowLevelTableRow::FDS_SkillGrowLevelTableRow(FDS_SkillGrowLevelTableRow *this)

{
  this->_padding_ = (longlong)&___7FDS_SkillGrowLevelTableRow__6B_;
  this->ID = 0;
  this->DataStage = 0;
  this->ID_Skill = 0;
  this->SkillGrowLevelGroupID = 0;
  this->ID_EffectDesc = 0;
  (this->ID_ChildSkill).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_ChildSkill).ArrayNum = 0;
  (this->ID_ChildSkill).ArrayMax = 0;
  (this->ID_LevelUpChildSkill).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_LevelUpChildSkill).ArrayNum = 0;
  (this->ID_LevelUpChildSkill).ArrayMax = 0;
  this->PhysicalDamage = 0;
  this->MagicDamage = 0;
  (this->AbilityType).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AbilityType).ArrayNum = 0;
  (this->AbilityType).ArrayMax = 0;
  (this->AbilityValue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AbilityValue).ArrayNum = 0;
  (this->AbilityValue).ArrayMax = 0;
  (this->AbilityTime).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AbilityTime).ArrayNum = 0;
  (this->AbilityTime).ArrayMax = 0;
  this->SkillLevel = 0;
  this->IsAscendLevel = false;
  this->AscendProcessTime = 0.0;
  this->ReqCharLevel = 0;
  this->ID_ReqCheckQuest = 0;
  (this->SkillGrowMoneyType).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillGrowMoneyType).ArrayNum = 0;
  (this->SkillGrowMoneyType).ArrayMax = 0;
  (this->SkillGrowMoneyValue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillGrowMoneyValue).ArrayNum = 0;
  (this->SkillGrowMoneyValue).ArrayMax = 0;
  (this->ID_SkillGrowItem).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_SkillGrowItem).ArrayNum = 0;
  (this->ID_SkillGrowItem).ArrayMax = 0;
  (this->SkillGrowItemCount).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillGrowItemCount).ArrayNum = 0;
  (this->SkillGrowItemCount).ArrayMax = 0;
  this->ReqClassLevel = 0;
  this->SkillGrowGrade = 0;
  this->ReqSkillGrowExp = 0;
  this->IsSkillGrowUpUi = false;
  this->ID_SkillGrowIcon = 0;
  (this->ID_MoneyExchange).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_MoneyExchange).ArrayNum = 0;
  (this->ID_MoneyExchange).ArrayMax = 0;
  return this;
}

// ~FDS_SkillGrowLevelTableRow @ 14b594e90

void __thiscall
FDS_SkillGrowLevelTableRow::~FDS_SkillGrowLevelTableRow(FDS_SkillGrowLevelTableRow *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ID_MoneyExchange).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SkillGrowItemCount).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_SkillGrowItem).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SkillGrowMoneyValue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SkillGrowMoneyType).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AbilityTime).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AbilityValue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AbilityType).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_LevelUpChildSkill).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_ChildSkill).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// Get @ 14b972ad0

FDS_SkillGrowLevelTableRow * __cdecl FDS_SkillGrowLevelTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_SkillGrowLevelTableRow *pFVar4;
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
                      (&bGEnsureHasExecuted<1121009790223384595>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_SkillGrowLevelTableRow.cpp"
                       ,0x13,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_SkillGrowLevelTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,SkillGrowLevel);
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
      pFVar4 = (FDS_SkillGrowLevelTableRow *)
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
  return (FDS_SkillGrowLevelTableRow *)0x0;
}

// GetAll @ 14b974e60

TArray<FDS_SkillGrowLevelTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_SkillGrowLevelTableRow::GetAll
          (TArray<FDS_SkillGrowLevelTableRow_const_*,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_SkillGrowLevelTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<1121009790223384624>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_SkillGrowLevelTableRow.cpp"
                       ,0x30,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_SkillGrowLevelTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)()
      ;
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,SkillGrowLevel);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_SkillGrowLevelTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b9775e0

FDS_SkillGrowLevelTableRow * __cdecl FDS_SkillGrowLevelTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_SkillGrowLevelTableRow *pFVar4;
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
                        (&bGEnsureHasExecuted<1121009790223384595>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_SkillGrowLevelTableRow.cpp"
                         ,0x13,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_SkillGrowLevelTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,SkillGrowLevel);
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
        pFVar4 = (FDS_SkillGrowLevelTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_SkillGrowLevelTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// ID_ChildSkillTables @ 14b9790a0

TArray<FDS_SkillGrowLevelTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_SkillGrowLevelTableRow::ID_ChildSkillTables
          (FDS_SkillGrowLevelTableRow *this,
          TArray<FDS_SkillGrowLevelTableRow_const_*,TSizedDefaultAllocator<32>_>
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
  TArray<FDS_SkillGrowLevelTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  GetAll(&local_38);
  iVar4 = local_38.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar7.Data = local_38.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_38.ArrayNum != iVar4) {
        `TCheckedPointerIterator<FDS_SkillGrowLevelTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (FVar7.Data == pFVar1) {
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pFVar6 = (this->ID_ChildSkill).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar7.Data;
      pFVar2 = pFVar6 + (longlong)(this->ID_ChildSkill).ArrayNum * 4;
      if (pFVar6 != pFVar2) break;
LAB_14b97915c:
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
        goto LAB_14b97915c;
      }
      pFVar6 = pFVar6 + 4;
    } while (pFVar6 != pFVar2);
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// ID_LevelUpChildSkillTables @ 14b979450

TArray<FDS_SkillTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_SkillGrowLevelTableRow::ID_LevelUpChildSkillTables
          (FDS_SkillGrowLevelTableRow *this,
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
      pFVar6 = (this->ID_LevelUpChildSkill).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar7.Data;
      pFVar2 = pFVar6 + (longlong)(this->ID_LevelUpChildSkill).ArrayNum * 4;
      if (pFVar6 != pFVar2) break;
LAB_14b97950c:
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
        goto LAB_14b97950c;
      }
      pFVar6 = pFVar6 + 4;
    } while (pFVar6 != pFVar2);
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// ID_MoneyExchangeTables @ 14b979690

TArray<FDS_MoneyExchangeTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_SkillGrowLevelTableRow::ID_MoneyExchangeTables
          (FDS_SkillGrowLevelTableRow *this,
          TArray<FDS_MoneyExchangeTableRow_const_*,TSizedDefaultAllocator<32>_>
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
  TArray<FDS_MoneyExchangeTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  FDS_MoneyExchangeTableRow::GetAll(&local_38);
  iVar4 = local_38.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar7.Data = local_38.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_38.ArrayNum != iVar4) {
        `TCheckedPointerIterator<FDS_MoneyExchangeTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (FVar7.Data == pFVar1) {
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pFVar6 = (this->ID_MoneyExchange).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar7.Data;
      pFVar2 = pFVar6 + (longlong)(this->ID_MoneyExchange).ArrayNum * 4;
      if (pFVar6 != pFVar2) break;
LAB_14b97974f:
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
        goto LAB_14b97974f;
      }
      pFVar6 = pFVar6 + 4;
    } while (pFVar6 != pFVar2);
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// ID_SkillGrowItemTables @ 14b979e90

TArray<FDS_ItemBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_SkillGrowLevelTableRow::ID_SkillGrowItemTables
          (FDS_SkillGrowLevelTableRow *this,
          TArray<FDS_ItemBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  undefined1 local_res10 [8];
  TArray<FDS_ItemBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  FDS_ItemBaseTableRow::GetAll(&local_38);
  iVar4 = local_38.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar7.Data = local_38.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_38.ArrayNum != iVar4) {
        `TCheckedPointerIterator<FDS_ItemBaseTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      if (FVar7.Data == pFVar1) {
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pFVar6 = (this->ID_SkillGrowItem).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar7.Data;
      pFVar2 = pFVar6 + (longlong)(this->ID_SkillGrowItem).ArrayNum * 4;
      if (pFVar6 != pFVar2) break;
LAB_14b979f4f:
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
        goto LAB_14b979f4f;
      }
      pFVar6 = pFVar6 + 4;
    } while (pFVar6 != pFVar2);
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// IsValid @ 14b97b130

bool __thiscall FDS_SkillGrowLevelTableRow::IsValid(FDS_SkillGrowLevelTableRow *this)

{
  return this != &DefaultObject;
}

