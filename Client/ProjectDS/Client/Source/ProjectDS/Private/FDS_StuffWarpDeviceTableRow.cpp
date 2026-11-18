// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticStruct @ 14b5a7ba0

UScriptStruct * __cdecl FDS_StuffWarpDeviceTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_StuffWarpDeviceTableRow.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_StuffWarpDeviceTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_StuffWarpDeviceTableRow,(UObject *)pUVar1,
                         L"DS_StuffWarpDeviceTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_StuffWarpDeviceTableRow.OuterSingleton;
}

// Get @ 14b983d80

FDS_StuffWarpDeviceTableRow * __cdecl FDS_StuffWarpDeviceTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_StuffWarpDeviceTableRow *pFVar4;
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
                      (&bGEnsureHasExecuted<_7199925725808295915>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_StuffWarpDeviceTableRow.cpp"
                       ,0x15,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_StuffWarpDeviceTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,StuffWarpDevice);
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
      pFVar4 = (FDS_StuffWarpDeviceTableRow *)
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
  return (FDS_StuffWarpDeviceTableRow *)0x0;
}

// GetAll @ 14b986730

TArray<FDS_StuffWarpDeviceTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_StuffWarpDeviceTableRow::GetAll
          (TArray<FDS_StuffWarpDeviceTableRow_const_*,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_StuffWarpDeviceTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<_7199925725808295886>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_StuffWarpDeviceTableRow.cpp"
                       ,0x32,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_StuffWarpDeviceTableRow_const_*,TSizedDefaultAllocator<32>_> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,StuffWarpDevice);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_StuffWarpDeviceTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b989430

FDS_StuffWarpDeviceTableRow * __cdecl
FDS_StuffWarpDeviceTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_StuffWarpDeviceTableRow *pFVar4;
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
                        (&bGEnsureHasExecuted<_7199925725808295915>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_StuffWarpDeviceTableRow.cpp"
                         ,0x15,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_StuffWarpDeviceTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,StuffWarpDevice);
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
        pFVar4 = (FDS_StuffWarpDeviceTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_StuffWarpDeviceTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// ID_MoneyExchangeTable @ 14b98b2c0

FDS_MoneyExchangeTableRow * __thiscall
FDS_StuffWarpDeviceTableRow::ID_MoneyExchangeTable(FDS_StuffWarpDeviceTableRow *this)

{
  FDS_MoneyExchangeTableRow *pFVar1;
  
  pFVar1 = FDS_MoneyExchangeTableRow::GetRef((longlong)this->ID_MoneyExchange,true);
  return pFVar1;
}

// ID_RequiredQuestTable @ 14b98b6c0

FDS_QuestBaseTableRow * __thiscall
FDS_StuffWarpDeviceTableRow::ID_RequiredQuestTable(FDS_StuffWarpDeviceTableRow *this)

{
  FDS_QuestBaseTableRow *pFVar1;
  
  pFVar1 = FDS_QuestBaseTableRow::GetRef((longlong)this->ID_RequiredQuest,true);
  return pFVar1;
}

// ID_StuffBaseTable @ 14b98bcf0

FDS_StuffBaseTableRow * __thiscall
FDS_StuffWarpDeviceTableRow::ID_StuffBaseTable(FDS_StuffWarpDeviceTableRow *this)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  UDS_TableManager *this_00;
  FDS_StuffBaseTableRow *pFVar5;
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
  
  iVar1 = this->ID_StuffBase;
  if ((longlong)iVar1 == 0) {
    return &FDS_StuffBaseTableRow::DefaultObject;
  }
  this_00 = UDS_TableManager::GetInst();
  if (this_00 == (UDS_TableManager *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6466662894418264090>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_StuffBaseTableRow.cpp"
                       ,0x1a,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FDS_StuffBaseTableRow *)(*pcVar3)();
      return pFVar5;
    }
  }
  else {
    this_01 = UDS_TableManager::GetDataTable(this_00,StuffBase);
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
      pUVar8 = FDS_StuffBaseTableRow::StaticStruct();
      pFVar5 = (FDS_StuffBaseTableRow *)
               UDataTable::FindRowInternal(this_01,pUVar8,FVar2,(wchar_t *)FVar10.Data,true);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (pFVar5 != (FDS_StuffBaseTableRow *)0x0) {
        return pFVar5;
      }
    }
  }
  return &FDS_StuffBaseTableRow::DefaultObject;
}

// ID_WarpLocationTable @ 14b98c550

FDS_WarpLocationTableRow * __thiscall
FDS_StuffWarpDeviceTableRow::ID_WarpLocationTable(FDS_StuffWarpDeviceTableRow *this)

{
  FDS_WarpLocationTableRow *pFVar1;
  
  pFVar1 = FDS_WarpLocationTableRow::GetRef((longlong)this->ID_WarpLocation,true);
  return pFVar1;
}

// ID_ZoneIslandTable @ 14b98c6b0

FDS_ZoneIslandTableRow * __thiscall
FDS_StuffWarpDeviceTableRow::ID_ZoneIslandTable(FDS_StuffWarpDeviceTableRow *this)

{
  FDS_ZoneIslandTableRow *pFVar1;
  
  pFVar1 = FDS_ZoneIslandTableRow::GetRef((longlong)this->ID_ZoneIsland,true);
  return pFVar1;
}

// ID_ZoneTable @ 14b98c6f0

FDS_ZoneBaseTableRow * __thiscall
FDS_StuffWarpDeviceTableRow::ID_ZoneTable(FDS_StuffWarpDeviceTableRow *this)

{
  FDS_ZoneBaseTableRow *pFVar1;
  
  pFVar1 = FDS_ZoneBaseTableRow::GetRef((longlong)this->ID_Zone,true);
  return pFVar1;
}

// IsValid @ 14b98ca30

bool __thiscall FDS_StuffWarpDeviceTableRow::IsValid(FDS_StuffWarpDeviceTableRow *this)

{
  return this != &DefaultObject;
}

