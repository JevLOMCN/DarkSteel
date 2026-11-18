// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticStruct @ 14b789790

UScriptStruct * __cdecl FDS_ZoneDeathPenaltyTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ZoneDeathPenaltyTableRow.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ZoneDeathPenaltyTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ZoneDeathPenaltyTableRow,(UObject *)pUVar1,
                         L"DS_ZoneDeathPenaltyTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ZoneDeathPenaltyTableRow.OuterSingleton;
}

// FDS_ZoneDeathPenaltyTableRow @ 14b78c310

FDS_ZoneDeathPenaltyTableRow * __thiscall
FDS_ZoneDeathPenaltyTableRow::FDS_ZoneDeathPenaltyTableRow(FDS_ZoneDeathPenaltyTableRow *this)

{
  this->_padding_ = (longlong)&___7FDS_ZoneDeathPenaltyTableRow__6B_;
  this->ID = 0;
  this->DataStage = 0;
  this->ID_ZonePenaltyInfoIcon = 0;
  this->IsPKCriminalPoint = false;
  (this->DeathPenaltyEXP).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeathPenaltyEXP).ArrayNum = 0;
  (this->DeathPenaltyEXP).ArrayMax = 0;
  (this->DeathPenaltyInjure).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeathPenaltyInjure).ArrayNum = 0;
  (this->DeathPenaltyInjure).ArrayMax = 0;
  (this->DeathPenaltyItemDurability).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeathPenaltyItemDurability).ArrayNum = 0;
  (this->DeathPenaltyItemDurability).ArrayMax = 0;
  (this->DeathPenaltyMountLostItem).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeathPenaltyMountLostItem).ArrayNum = 0;
  (this->DeathPenaltyMountLostItem).ArrayMax = 0;
  ::FString::FString(&this->ZoneNotiCenterResourcePath,L"");
  this->ID_ZoneNameMiniMapTitleColor = 0;
  this->ID_ZoneNameMsgBg = 0;
  this->ID_FontStyle = 0;
  return this;
}

// Get @ 14b9aba80

FDS_ZoneDeathPenaltyTableRow * __cdecl
FDS_ZoneDeathPenaltyTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_ZoneDeathPenaltyTableRow *pFVar4;
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
                      (&bGEnsureHasExecuted<_2644420847434989549>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_ZoneDeathPenaltyTableRow.cpp"
                       ,0x13,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_ZoneDeathPenaltyTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,ZoneDeathPenalty);
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
      pFVar4 = (FDS_ZoneDeathPenaltyTableRow *)
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
  return (FDS_ZoneDeathPenaltyTableRow *)0x0;
}

// GetAll @ 14b9acd50

TArray<FDS_ZoneDeathPenaltyTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_ZoneDeathPenaltyTableRow::GetAll
          (TArray<FDS_ZoneDeathPenaltyTableRow_const_*,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_ZoneDeathPenaltyTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<_2644420847434989520>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_ZoneDeathPenaltyTableRow.cpp"
                       ,0x30,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_ZoneDeathPenaltyTableRow_const_*,TSizedDefaultAllocator<32>_> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,ZoneDeathPenalty);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_ZoneDeathPenaltyTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b9b20e0

FDS_ZoneDeathPenaltyTableRow * __cdecl
FDS_ZoneDeathPenaltyTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_ZoneDeathPenaltyTableRow *pFVar4;
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
                        (&bGEnsureHasExecuted<_2644420847434989549>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_ZoneDeathPenaltyTableRow.cpp"
                         ,0x13,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_ZoneDeathPenaltyTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,ZoneDeathPenalty);
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
        pFVar4 = (FDS_ZoneDeathPenaltyTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_ZoneDeathPenaltyTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// ID_FontStyleTable @ 14b9b5350

FDS_ResourceStyleTableRow * __thiscall
FDS_ZoneDeathPenaltyTableRow::ID_FontStyleTable(FDS_ZoneDeathPenaltyTableRow *this)

{
  FDS_ResourceStyleTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceStyleTableRow::GetRef((longlong)this->ID_FontStyle,true);
  return pFVar1;
}

// ID_ZoneNameMiniMapTitleColorTable @ 14b9b5a30

FDS_ResourceColorTableRow * __thiscall
FDS_ZoneDeathPenaltyTableRow::ID_ZoneNameMiniMapTitleColorTable(FDS_ZoneDeathPenaltyTableRow *this)

{
  FDS_ResourceColorTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceColorTableRow::GetRef((longlong)this->ID_ZoneNameMiniMapTitleColor,true);
  return pFVar1;
}

// ID_ZoneNameMsgBgTable @ 14b9b5a50

FDS_ResourceImageTableRow * __thiscall
FDS_ZoneDeathPenaltyTableRow::ID_ZoneNameMsgBgTable(FDS_ZoneDeathPenaltyTableRow *this)

{
  FDS_ResourceImageTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceImageTableRow::GetRef(this->ID_ZoneNameMsgBg,true);
  return pFVar1;
}

// ID_ZonePenaltyInfoIconTable @ 14b9b5a90

FDS_ResourceTextIconTableRow * __thiscall
FDS_ZoneDeathPenaltyTableRow::ID_ZonePenaltyInfoIconTable(FDS_ZoneDeathPenaltyTableRow *this)

{
  FDS_ResourceTextIconTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceTextIconTableRow::GetRef((longlong)this->ID_ZonePenaltyInfoIcon,true);
  return pFVar1;
}

// IsValid @ 14b9b7cb0

bool __thiscall FDS_ZoneDeathPenaltyTableRow::IsValid(FDS_ZoneDeathPenaltyTableRow *this)

{
  return this != &DefaultObject;
}

