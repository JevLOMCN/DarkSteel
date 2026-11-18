// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticStruct @ 14b441200

UScriptStruct * __cdecl FDS_CharacterCreateTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_CharacterCreateTableRow.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_CharacterCreateTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_CharacterCreateTableRow,(UObject *)pUVar1,
                         L"DS_CharacterCreateTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_CharacterCreateTableRow.OuterSingleton;
}

// Get @ 14b902320

FDS_CharacterCreateTableRow * __cdecl FDS_CharacterCreateTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_CharacterCreateTableRow *pFVar4;
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
                      (&bGEnsureHasExecuted<8871703284344160276>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_CharacterCreateTableRow.cpp"
                       ,0x14,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_CharacterCreateTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,CharacterCreate);
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
      pFVar4 = (FDS_CharacterCreateTableRow *)
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
  return (FDS_CharacterCreateTableRow *)0x0;
}

// GetAll @ 14b9044a0

TArray<FDS_CharacterCreateTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_CharacterCreateTableRow::GetAll
          (TArray<FDS_CharacterCreateTableRow_const_*,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_CharacterCreateTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<8871703284344160305>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_CharacterCreateTableRow.cpp"
                       ,0x31,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_CharacterCreateTableRow_const_*,TSizedDefaultAllocator<32>_> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,CharacterCreate);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_CharacterCreateTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b908810

FDS_CharacterCreateTableRow * __cdecl
FDS_CharacterCreateTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_CharacterCreateTableRow *pFVar4;
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
                        (&bGEnsureHasExecuted<8871703284344160276>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_CharacterCreateTableRow.cpp"
                         ,0x14,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_CharacterCreateTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,CharacterCreate);
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
        pFVar4 = (FDS_CharacterCreateTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_CharacterCreateTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// ID_InItPlayerIconTable @ 14b90a6c0

FDS_PlayerIconTableRow * __thiscall
FDS_CharacterCreateTableRow::ID_InItPlayerIconTable(FDS_CharacterCreateTableRow *this)

{
  FDS_PlayerIconTableRow *pFVar1;
  
  pFVar1 = FDS_PlayerIconTableRow::GetRef((longlong)this->ID_InItPlayerIcon,true);
  return pFVar1;
}

// ID_InitChestTable @ 14b90a6e0

FDS_ItemBaseTableRow * __thiscall
FDS_CharacterCreateTableRow::ID_InitChestTable(FDS_CharacterCreateTableRow *this)

{
  FDS_ItemBaseTableRow *pFVar1;
  
  pFVar1 = FDS_ItemBaseTableRow::GetRef((longlong)this->ID_InitChest,true);
  return pFVar1;
}

// ID_InitPantsTable @ 14b90a700

FDS_ItemBaseTableRow * __thiscall
FDS_CharacterCreateTableRow::ID_InitPantsTable(FDS_CharacterCreateTableRow *this)

{
  FDS_ItemBaseTableRow *pFVar1;
  
  pFVar1 = FDS_ItemBaseTableRow::GetRef((longlong)this->ID_InitPants,true);
  return pFVar1;
}

// ID_InitQuestTable @ 14b90a740

FDS_QuestBaseTableRow * __thiscall
FDS_CharacterCreateTableRow::ID_InitQuestTable(FDS_CharacterCreateTableRow *this)

{
  FDS_QuestBaseTableRow *pFVar1;
  
  pFVar1 = FDS_QuestBaseTableRow::GetRef((longlong)this->ID_InitQuest,true);
  return pFVar1;
}

// ID_InitReturnHomeTable @ 14b90a760

FDS_ReturnHomeTableRow * __thiscall
FDS_CharacterCreateTableRow::ID_InitReturnHomeTable(FDS_CharacterCreateTableRow *this)

{
  FDS_ReturnHomeTableRow *pFVar1;
  
  pFVar1 = FDS_ReturnHomeTableRow::GetRef((longlong)this->ID_InitReturnHome,true);
  return pFVar1;
}

// ID_InitShoesTable @ 14b90a780

FDS_ItemBaseTableRow * __thiscall
FDS_CharacterCreateTableRow::ID_InitShoesTable(FDS_CharacterCreateTableRow *this)

{
  FDS_ItemBaseTableRow *pFVar1;
  
  pFVar1 = FDS_ItemBaseTableRow::GetRef((longlong)this->ID_InitShoes,true);
  return pFVar1;
}

// ID_InitStackableItemTables @ 14b90a8a0

TArray<FDS_ItemBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_CharacterCreateTableRow::ID_InitStackableItemTables
          (FDS_CharacterCreateTableRow *this,
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
      pFVar6 = (this->ID_InitStackableItem).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar7.Data;
      pFVar2 = pFVar6 + (longlong)(this->ID_InitStackableItem).ArrayNum * 4;
      if (pFVar6 != pFVar2) break;
LAB_14b90a95c:
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
        goto LAB_14b90a95c;
      }
      pFVar6 = pFVar6 + 4;
    } while (pFVar6 != pFVar2);
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// ID_InitWarpLocationTable @ 14b90a9c0

FDS_WarpLocationTableRow * __thiscall
FDS_CharacterCreateTableRow::ID_InitWarpLocationTable(FDS_CharacterCreateTableRow *this)

{
  FDS_WarpLocationTableRow *pFVar1;
  
  pFVar1 = FDS_WarpLocationTableRow::GetRef((longlong)this->ID_InitWarpLocation,true);
  return pFVar1;
}

// ID_InitWeaponTable @ 14b90a9e0

FDS_ItemBaseTableRow * __thiscall
FDS_CharacterCreateTableRow::ID_InitWeaponTable(FDS_CharacterCreateTableRow *this)

{
  FDS_ItemBaseTableRow *pFVar1;
  
  pFVar1 = FDS_ItemBaseTableRow::GetRef((longlong)this->ID_InitWeapon,true);
  return pFVar1;
}

// IsValid @ 14b90be80

bool __thiscall FDS_CharacterCreateTableRow::IsValid(FDS_CharacterCreateTableRow *this)

{
  return this != &DefaultObject;
}

