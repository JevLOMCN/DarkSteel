// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticStruct @ 14b400e20

UScriptStruct * __cdecl FDS_ActionBaseTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ActionBaseTableRow.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ActionBaseTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ActionBaseTableRow,(UObject *)pUVar1,
                         L"DS_ActionBaseTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ActionBaseTableRow.OuterSingleton;
}

// FDS_ActionBaseTableRow @ 14b406490

FDS_ActionBaseTableRow * __thiscall
FDS_ActionBaseTableRow::FDS_ActionBaseTableRow(FDS_ActionBaseTableRow *this)

{
  this->ID = None;
  this->_padding_ = (longlong)&___7FDS_ActionBaseTableRow__6B_;
  this->DataStage = 0;
  ::FString::FString(&this->Version,L"");
  this->ID_Icon = 0;
  (this->ID_Name)._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  (this->ID_Name).ID = 0;
  (this->ID_Description)._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  (this->ID_Description).ID = 0;
  this->ID_RequestQuest = 0;
  this->RequestPlayerLevel = 0;
  this->Order = 0;
  this->ID_TimeCoolDown = None;
  return this;
}

// Get @ 14b900a60

FDS_ActionBaseTableRow * __cdecl FDS_ActionBaseTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_ActionBaseTableRow *pFVar4;
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
                      (&bGEnsureHasExecuted<6321827620715495443>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_ActionBaseTableRow.cpp"
                       ,0x13,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_ActionBaseTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,ActionBase);
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
      pFVar4 = (FDS_ActionBaseTableRow *)
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
  return (FDS_ActionBaseTableRow *)0x0;
}

// GetAll @ 14b9032c0

TArray<FDS_ActionBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_ActionBaseTableRow::GetAll
          (TArray<FDS_ActionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_ActionBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<6321827620715495472>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_ActionBaseTableRow.cpp"
                       ,0x30,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_ActionBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,ActionBase);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_ActionBaseTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b906df0

FDS_ActionBaseTableRow * __cdecl FDS_ActionBaseTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_ActionBaseTableRow *pFVar4;
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
                        (&bGEnsureHasExecuted<6321827620715495443>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_ActionBaseTableRow.cpp"
                         ,0x13,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_ActionBaseTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,ActionBase);
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
        pFVar4 = (FDS_ActionBaseTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_ActionBaseTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// ID_DescriptionTable @ 14b90a360

FDS_StringBaseTableRow * __thiscall
FDS_ActionBaseTableRow::ID_DescriptionTable(FDS_ActionBaseTableRow *this)

{
  FDS_StringBaseTableRow *pFVar1;
  
  pFVar1 = FDS_StringBaseTableRow::GetRef((this->ID_Description).ID,true);
  return pFVar1;
}

// ID_IconTable @ 14b90a600

FDS_ResourceIconTableRow * __thiscall
FDS_ActionBaseTableRow::ID_IconTable(FDS_ActionBaseTableRow *this)

{
  FDS_ResourceIconTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceIconTableRow::GetRef((longlong)this->ID_Icon,true);
  return pFVar1;
}

// ID_NameTable @ 14b90af20

FDS_StringBaseTableRow * __thiscall
FDS_ActionBaseTableRow::ID_NameTable(FDS_ActionBaseTableRow *this)

{
  FDS_StringBaseTableRow *pFVar1;
  
  pFVar1 = FDS_StringBaseTableRow::GetRef((this->ID_Name).ID,true);
  return pFVar1;
}

// ID_RequestQuestTable @ 14b90b430

FDS_QuestBaseTableRow * __thiscall
FDS_ActionBaseTableRow::ID_RequestQuestTable(FDS_ActionBaseTableRow *this)

{
  FDS_QuestBaseTableRow *pFVar1;
  
  pFVar1 = FDS_QuestBaseTableRow::GetRef((longlong)this->ID_RequestQuest,true);
  return pFVar1;
}

// ID_TimeCoolDownTable @ 14b90b8c0

FDS_TimeCoolDownTableRow * __thiscall
FDS_ActionBaseTableRow::ID_TimeCoolDownTable(FDS_ActionBaseTableRow *this)

{
  FDS_TimeCoolDownTableRow *pFVar1;
  
  pFVar1 = FDS_TimeCoolDownTableRow::GetRef((longlong)(int)this->ID_TimeCoolDown,true);
  return pFVar1;
}

// IsValid @ 14b90bbc0

bool __thiscall FDS_ActionBaseTableRow::IsValid(FDS_ActionBaseTableRow *this)

{
  return this != &DefaultObject;
}

