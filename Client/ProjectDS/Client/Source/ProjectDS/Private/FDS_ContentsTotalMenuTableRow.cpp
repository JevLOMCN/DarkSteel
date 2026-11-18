// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticStruct @ 14b47b920

UScriptStruct * __cdecl FDS_ContentsTotalMenuTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ContentsTotalMenuTableRow.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ContentsTotalMenuTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ContentsTotalMenuTableRow,(UObject *)pUVar1,
                         L"DS_ContentsTotalMenuTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ContentsTotalMenuTableRow.OuterSingleton;
}

// FDS_ContentsTotalMenuTableRow @ 14b47d0f0

FDS_ContentsTotalMenuTableRow * __thiscall
FDS_ContentsTotalMenuTableRow::FDS_ContentsTotalMenuTableRow(FDS_ContentsTotalMenuTableRow *this)

{
  this->_padding_ = (longlong)&___7FDS_ContentsTotalMenuTableRow__6B_;
  this->ID = None;
  this->DataStage = 0;
  ::FString::FString(&this->Version,L"");
  this->Type = None;
  this->Order = 0;
  this->ID_Group = None;
  this->ID_Icon = 0;
  (this->ID_Name)._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  (this->ID_Name).ID = 0;
  this->IsActivate = false;
  (this->ID_DisabledMessage)._padding_ = (longlong)&___7FDS_StringUiID__6B_;
  (this->ID_DisabledMessage).ID = 0;
  this->ID_ContentsBase = None;
  this->ID_ContentsTabFrame = None;
  this->IsRingCmdAble = false;
  return this;
}

// Get @ 14b914f20

FDS_ContentsTotalMenuTableRow * __cdecl
FDS_ContentsTotalMenuTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_ContentsTotalMenuTableRow *pFVar4;
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
                      (&bGEnsureHasExecuted<1076942536708194324>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_ContentsTotalMenuTableRow.cpp"
                       ,0x14,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_ContentsTotalMenuTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,ContentsTotalMenu);
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
      pFVar4 = (FDS_ContentsTotalMenuTableRow *)
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
  return (FDS_ContentsTotalMenuTableRow *)0x0;
}

// GetAll @ 14b917030

TArray<FDS_ContentsTotalMenuTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_ContentsTotalMenuTableRow::GetAll
          (TArray<FDS_ContentsTotalMenuTableRow_const_*,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_ContentsTotalMenuTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<1076942536708194353>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_ContentsTotalMenuTableRow.cpp"
                       ,0x31,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_ContentsTotalMenuTableRow_const_*,TSizedDefaultAllocator<32>_> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,ContentsTotalMenu);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_ContentsTotalMenuTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b919080

FDS_ContentsTotalMenuTableRow * __cdecl
FDS_ContentsTotalMenuTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_ContentsTotalMenuTableRow *pFVar4;
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
                        (&bGEnsureHasExecuted<1076942536708194324>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_ContentsTotalMenuTableRow.cpp"
                         ,0x14,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_ContentsTotalMenuTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,ContentsTotalMenu);
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
        pFVar4 = (FDS_ContentsTotalMenuTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_ContentsTotalMenuTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// ID_ContentsBaseTable @ 14b91b100

FDS_ContentsBaseTableRow * __thiscall
FDS_ContentsTotalMenuTableRow::ID_ContentsBaseTable(FDS_ContentsTotalMenuTableRow *this)

{
  FDS_ContentsBaseTableRow *pFVar1;
  
  pFVar1 = FDS_ContentsBaseTableRow::GetRef((longlong)(int)this->ID_ContentsBase,true);
  return pFVar1;
}

// ID_ContentsTabFrameTable @ 14b91b140

FDS_ContentsTabFrameTableRow * __thiscall
FDS_ContentsTotalMenuTableRow::ID_ContentsTabFrameTable(FDS_ContentsTotalMenuTableRow *this)

{
  EDS_ContentsTabFrameType EVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  UDS_TableManager *this_00;
  FDS_ContentsTabFrameTableRow *pFVar5;
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
  
  EVar1 = this->ID_ContentsTabFrame;
  if ((longlong)(int)EVar1 == 0) {
    return &FDS_ContentsTabFrameTableRow::DefaultObject;
  }
  this_00 = UDS_TableManager::GetInst();
  if (this_00 == (UDS_TableManager *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2654998634625499155>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_ContentsTabFrameTableRow.cpp"
                       ,0x13,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FDS_ContentsTabFrameTableRow *)(*pcVar3)();
      return pFVar5;
    }
  }
  else {
    this_01 = UDS_TableManager::GetDataTable(this_00,ContentsTabFrame);
    if (this_01 != (UDataTable *)0x0) {
      local_res8 = (FName)this_01->_padding_;
      ::FName::ToString(&local_res8,&local_28);
      pFVar6 = DS_Util::FromInt64(&local_18,(longlong)(int)EVar1);
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
      pUVar8 = FDS_ContentsTabFrameTableRow::StaticStruct();
      pFVar5 = (FDS_ContentsTabFrameTableRow *)
               UDataTable::FindRowInternal(this_01,pUVar8,FVar2,(wchar_t *)FVar10.Data,true);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (pFVar5 != (FDS_ContentsTabFrameTableRow *)0x0) {
        return pFVar5;
      }
    }
  }
  return &FDS_ContentsTabFrameTableRow::DefaultObject;
}

// ID_DisabledMessageTable @ 14b91b720

FDS_StringUiTableRow * __thiscall
FDS_ContentsTotalMenuTableRow::ID_DisabledMessageTable(FDS_ContentsTotalMenuTableRow *this)

{
  FDS_StringUiTableRow *pFVar1;
  
  pFVar1 = FDS_StringUiTableRow::GetRef((this->ID_DisabledMessage).ID,true);
  return pFVar1;
}

// ID_IconTable @ 14b91bf20

FDS_ResourceIconTableRow * __thiscall
FDS_ContentsTotalMenuTableRow::ID_IconTable(FDS_ContentsTotalMenuTableRow *this)

{
  FDS_ResourceIconTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceIconTableRow::GetRef((longlong)this->ID_Icon,true);
  return pFVar1;
}

// ID_NameTable @ 14b91c120

FDS_StringBaseTableRow * __thiscall
FDS_ContentsTotalMenuTableRow::ID_NameTable(FDS_ContentsTotalMenuTableRow *this)

{
  FDS_StringBaseTableRow *pFVar1;
  
  pFVar1 = FDS_StringBaseTableRow::GetRef((this->ID_Name).ID,true);
  return pFVar1;
}

// IsValid @ 14b91d9f0

bool __thiscall FDS_ContentsTotalMenuTableRow::IsValid(FDS_ContentsTotalMenuTableRow *this)

{
  return this != &DefaultObject;
}

