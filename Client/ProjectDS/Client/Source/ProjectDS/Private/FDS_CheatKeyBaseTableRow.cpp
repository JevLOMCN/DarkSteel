// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticStruct @ 14b448710

UScriptStruct * __cdecl FDS_CheatKeyBaseTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_CheatKeyBaseTableRow.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_CheatKeyBaseTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_CheatKeyBaseTableRow,(UObject *)pUVar1,
                         L"DS_CheatKeyBaseTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_CheatKeyBaseTableRow.OuterSingleton;
}

// FDS_CheatKeyBaseTableRow @ 14b44c6c0

FDS_CheatKeyBaseTableRow * __thiscall
FDS_CheatKeyBaseTableRow::FDS_CheatKeyBaseTableRow(FDS_CheatKeyBaseTableRow *this)

{
  this->_padding_ = (longlong)&___7FDS_CheatKeyBaseTableRow__6B_;
  this->ID = 0;
  this->DataStage = 0;
  this->Tab = 0;
  ::FString::FString(&this->Name,L"");
  ::FString::FString(&this->Command,L"");
  this->IsEssential1 = false;
  this->ParameterType1 = None;
  (this->ParameterText1).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterText1).ArrayNum = 0;
  (this->ParameterText1).ArrayMax = 0;
  (this->ParameterValue1).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterValue1).ArrayNum = 0;
  (this->ParameterValue1).ArrayMax = 0;
  this->IsEssential2 = false;
  this->ParameterType2 = None;
  (this->ParameterText2).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterText2).ArrayNum = 0;
  (this->ParameterText2).ArrayMax = 0;
  (this->ParameterValue2).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterValue2).ArrayNum = 0;
  (this->ParameterValue2).ArrayMax = 0;
  this->IsEssential3 = false;
  this->ParameterType3 = None;
  (this->ParameterText3).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterText3).ArrayNum = 0;
  (this->ParameterText3).ArrayMax = 0;
  (this->ParameterValue3).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterValue3).ArrayNum = 0;
  (this->ParameterValue3).ArrayMax = 0;
  this->IsEssential4 = false;
  this->ParameterType4 = None;
  (this->ParameterText4).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterText4).ArrayNum = 0;
  (this->ParameterText4).ArrayMax = 0;
  (this->ParameterValue4).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterValue4).ArrayNum = 0;
  (this->ParameterValue4).ArrayMax = 0;
  return this;
}

// ~FDS_CheatKeyBaseTableRow @ 14b44f8a0

void __thiscall FDS_CheatKeyBaseTableRow::~FDS_CheatKeyBaseTableRow(FDS_CheatKeyBaseTableRow *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FString,int>
            ((FString *)(this->ParameterValue4).AllocatorInstance.Data,
             (this->ParameterValue4).ArrayNum);
  pFVar1 = (this->ParameterValue4).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->ParameterText4).AllocatorInstance.Data,
             (this->ParameterText4).ArrayNum);
  pFVar1 = (this->ParameterText4).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->ParameterValue3).AllocatorInstance.Data,
             (this->ParameterValue3).ArrayNum);
  pFVar1 = (this->ParameterValue3).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->ParameterText3).AllocatorInstance.Data,
             (this->ParameterText3).ArrayNum);
  pFVar1 = (this->ParameterText3).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->ParameterValue2).AllocatorInstance.Data,
             (this->ParameterValue2).ArrayNum);
  pFVar1 = (this->ParameterValue2).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->ParameterText2).AllocatorInstance.Data,
             (this->ParameterText2).ArrayNum);
  pFVar1 = (this->ParameterText2).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->ParameterValue1).AllocatorInstance.Data,
             (this->ParameterValue1).ArrayNum);
  pFVar1 = (this->ParameterValue1).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->ParameterText1).AllocatorInstance.Data,
             (this->ParameterText1).ArrayNum);
  pFVar1 = (this->ParameterText1).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Command).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// Get @ 14b9141a0

FDS_CheatKeyBaseTableRow * __cdecl FDS_CheatKeyBaseTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_CheatKeyBaseTableRow *pFVar4;
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
                      (&bGEnsureHasExecuted<_4518189279087689713>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_CheatKeyBaseTableRow.cpp"
                       ,0xf,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_CheatKeyBaseTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,CheatKeyBase);
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
      pFVar4 = (FDS_CheatKeyBaseTableRow *)
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
  return (FDS_CheatKeyBaseTableRow *)0x0;
}

// GetAll @ 14b916670

TArray<FDS_CheatKeyBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_CheatKeyBaseTableRow::GetAll
          (TArray<FDS_CheatKeyBaseTableRow_const_*,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_CheatKeyBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<_4518189279087689684>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_CheatKeyBaseTableRow.cpp"
                       ,0x2c,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_CheatKeyBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,CheatKeyBase);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_CheatKeyBaseTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b918240

FDS_CheatKeyBaseTableRow * __cdecl FDS_CheatKeyBaseTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_CheatKeyBaseTableRow *pFVar4;
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
                        (&bGEnsureHasExecuted<_4518189279087689713>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_CheatKeyBaseTableRow.cpp"
                         ,0xf,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_CheatKeyBaseTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,CheatKeyBase);
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
        pFVar4 = (FDS_CheatKeyBaseTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_CheatKeyBaseTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// IsValid @ 14b91d870

bool __thiscall FDS_CheatKeyBaseTableRow::IsValid(FDS_CheatKeyBaseTableRow *this)

{
  return this != &DefaultObject;
}

