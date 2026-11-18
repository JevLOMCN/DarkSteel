// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticStruct @ 14b44a270

UScriptStruct * __cdecl FDS_ChattingBaseTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ChattingBaseTableRow.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ChattingBaseTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ChattingBaseTableRow,(UObject *)pUVar1,
                         L"DS_ChattingBaseTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ChattingBaseTableRow.OuterSingleton;
}

// Get @ 14b9028c0

FDS_ChattingBaseTableRow * __cdecl FDS_ChattingBaseTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_ChattingBaseTableRow *pFVar4;
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
                      (&bGEnsureHasExecuted<_4639021466631798765>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_ChattingBaseTableRow.cpp"
                       ,0x13,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_ChattingBaseTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,ChattingBase);
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
      pFVar4 = (FDS_ChattingBaseTableRow *)
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
  return (FDS_ChattingBaseTableRow *)0x0;
}

// GetAll @ 14b9048b0

TArray<FDS_ChattingBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_ChattingBaseTableRow::GetAll
          (TArray<FDS_ChattingBaseTableRow_const_*,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_ChattingBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<_4639021466631798736>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_ChattingBaseTableRow.cpp"
                       ,0x30,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_ChattingBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,ChattingBase);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_ChattingBaseTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b908e00

FDS_ChattingBaseTableRow * __cdecl FDS_ChattingBaseTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_ChattingBaseTableRow *pFVar4;
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
                        (&bGEnsureHasExecuted<_4639021466631798765>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_ChattingBaseTableRow.cpp"
                         ,0x13,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_ChattingBaseTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,ChattingBase);
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
        pFVar4 = (FDS_ChattingBaseTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_ChattingBaseTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// ID_ChattingChannelNameTable @ 14b90a050

FDS_StringBaseTableRow * __thiscall
FDS_ChattingBaseTableRow::ID_ChattingChannelNameTable(FDS_ChattingBaseTableRow *this)

{
  FDS_StringBaseTableRow *pFVar1;
  
  pFVar1 = FDS_StringBaseTableRow::GetRef((this->ID_ChattingChannelName).ID,true);
  return pFVar1;
}

// ID_ChattingColorTable @ 14b90a070

FDS_ResourceColorTableRow * __thiscall
FDS_ChattingBaseTableRow::ID_ChattingColorTable(FDS_ChattingBaseTableRow *this)

{
  FDS_ResourceColorTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceColorTableRow::GetRef((longlong)this->ID_ChattingColor,true);
  return pFVar1;
}

// ID_ChattingCoolDownTable @ 14b90a090

FDS_TimeCoolDownTableRow * __thiscall
FDS_ChattingBaseTableRow::ID_ChattingCoolDownTable(FDS_ChattingBaseTableRow *this)

{
  FDS_TimeCoolDownTableRow *pFVar1;
  
  pFVar1 = FDS_TimeCoolDownTableRow::GetRef((longlong)(int)this->ID_ChattingCoolDown,true);
  return pFVar1;
}

// ID_SubjectImageTable @ 14b90b880

FDS_ResourceIconTableRow * __thiscall
FDS_ChattingBaseTableRow::ID_SubjectImageTable(FDS_ChattingBaseTableRow *this)

{
  FDS_ResourceIconTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceIconTableRow::GetRef((longlong)this->ID_SubjectImage,true);
  return pFVar1;
}

// IsValid @ 14b90bf20

bool __thiscall FDS_ChattingBaseTableRow::IsValid(FDS_ChattingBaseTableRow *this)

{
  return this != &DefaultObject;
}

