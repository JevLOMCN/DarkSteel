// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticStruct @ 14b47a880

UScriptStruct * __cdecl FDS_ContentsTabFrameTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ContentsTabFrameTableRow.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ContentsTabFrameTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ContentsTabFrameTableRow,(UObject *)pUVar1,
                         L"DS_ContentsTabFrameTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ContentsTabFrameTableRow.OuterSingleton;
}

// FDS_ContentsTabFrameTableRow @ 14b47d070

FDS_ContentsTabFrameTableRow * __thiscall
FDS_ContentsTabFrameTableRow::FDS_ContentsTabFrameTableRow(FDS_ContentsTabFrameTableRow *this)

{
  this->_padding_ = (longlong)&___7FDS_ContentsTabFrameTableRow__6B_;
  this->ID = None;
  this->DataStage = 0;
  ::FString::FString(&this->Version,L"");
  this->SubTabType = None;
  this->MenuOrder = 0;
  this->MainTab = 0;
  this->SubTab = 0;
  (this->ID_Name)._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  (this->ID_Name).ID = 0;
  this->ID_WindowBase = None;
  this->ID_ContentsBase = None;
  this->ActiveBackgroundEvent = false;
  this->HistoryGroup = 0;
  this->MoneyDisplayCount = 0;
  (this->DisplayMoney).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DisplayMoney).ArrayNum = 0;
  (this->DisplayMoney).ArrayMax = 0;
  this->ID_KeyMappingData = 0;
  this->IsPlayerInfo = false;
  return this;
}

// Get @ 14b914e00

FDS_ContentsTabFrameTableRow * __cdecl
FDS_ContentsTabFrameTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_ContentsTabFrameTableRow *pFVar4;
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
                      (&bGEnsureHasExecuted<2654998634625499155>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_ContentsTabFrameTableRow.cpp"
                       ,0x13,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_ContentsTabFrameTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,ContentsTabFrame);
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
      pFVar4 = (FDS_ContentsTabFrameTableRow *)
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
  return (FDS_ContentsTabFrameTableRow *)0x0;
}

// GetAll @ 14b916f60

TArray<FDS_ContentsTabFrameTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_ContentsTabFrameTableRow::GetAll
          (TArray<FDS_ContentsTabFrameTableRow_const_*,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_ContentsTabFrameTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<2654998634625499184>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_ContentsTabFrameTableRow.cpp"
                       ,0x30,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_ContentsTabFrameTableRow_const_*,TSizedDefaultAllocator<32>_> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,ContentsTabFrame);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_ContentsTabFrameTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetLeftTabFrameType @ 14b918070

EDS_ContentsTabFrameType __thiscall
FDS_ContentsTabFrameTableRow::GetLeftTabFrameType(FDS_ContentsTabFrameTableRow *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  EDS_ContentsTabFrameType EVar6;
  ForAnyElementType FVar7;
  undefined1 local_res8 [8];
  TArray<FDS_ContentsTabFrameTableRow_const_*,TSizedDefaultAllocator<32>_> local_28;
  
  iVar2 = this->MainTab;
  GetAll(&local_28);
  iVar4 = local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + (longlong)iVar4 * 8;
  uVar5 = local_28._8_8_;
  FVar7.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar5 != iVar4) {
      `TCheckedPointerIterator<FDS_ContentsTabFrameTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
      uVar5 = local_28._8_8_;
    }
    if (FVar7.Data == pFVar1) break;
    lVar3 = *(longlong *)FVar7.Data;
    if (((*(int *)(lVar3 + 0x24) == this->MenuOrder) && (iVar2 + -1 == *(int *)(lVar3 + 0x28))) &&
       (*(int *)(lVar3 + 0x2c) == 0)) {
      EVar6 = *(EDS_ContentsTabFrameType *)(lVar3 + 8);
LAB_14b9180e1:
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      return EVar6;
    }
    FVar7.Data = FVar7.Data + 8;
  }
  EVar6 = this->ID;
  goto LAB_14b9180e1;
}

// GetRef @ 14b918f50

FDS_ContentsTabFrameTableRow * __cdecl
FDS_ContentsTabFrameTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_ContentsTabFrameTableRow *pFVar4;
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
                        (&bGEnsureHasExecuted<2654998634625499155>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_ContentsTabFrameTableRow.cpp"
                         ,0x13,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_ContentsTabFrameTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,ContentsTabFrame);
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
        pFVar4 = (FDS_ContentsTabFrameTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_ContentsTabFrameTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// GetRightTabFrameType @ 14b91a840

EDS_ContentsTabFrameType __thiscall
FDS_ContentsTabFrameTableRow::GetRightTabFrameType(FDS_ContentsTabFrameTableRow *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  EDS_ContentsTabFrameType EVar6;
  ForAnyElementType FVar7;
  undefined1 local_res8 [8];
  TArray<FDS_ContentsTabFrameTableRow_const_*,TSizedDefaultAllocator<32>_> local_28;
  
  iVar2 = this->MainTab;
  GetAll(&local_28);
  iVar4 = local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + (longlong)iVar4 * 8;
  uVar5 = local_28._8_8_;
  FVar7.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar5 != iVar4) {
      `TCheckedPointerIterator<FDS_ContentsTabFrameTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
      uVar5 = local_28._8_8_;
    }
    if (FVar7.Data == pFVar1) break;
    lVar3 = *(longlong *)FVar7.Data;
    if (((*(int *)(lVar3 + 0x24) == this->MenuOrder) && (iVar2 + 1 == *(int *)(lVar3 + 0x28))) &&
       (*(int *)(lVar3 + 0x2c) == 0)) {
      EVar6 = *(EDS_ContentsTabFrameType *)(lVar3 + 8);
LAB_14b91a8b1:
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      return EVar6;
    }
    FVar7.Data = FVar7.Data + 8;
  }
  EVar6 = this->ID;
  goto LAB_14b91a8b1;
}

// ID_ContentsBaseTable @ 14b91b0e0

FDS_ContentsBaseTableRow * __thiscall
FDS_ContentsTabFrameTableRow::ID_ContentsBaseTable(FDS_ContentsTabFrameTableRow *this)

{
  FDS_ContentsBaseTableRow *pFVar1;
  
  pFVar1 = FDS_ContentsBaseTableRow::GetRef((longlong)(int)this->ID_ContentsBase,true);
  return pFVar1;
}

// ID_KeyMappingDataTable @ 14b91c000

FDS_KeyMappingDataTableRow * __thiscall
FDS_ContentsTabFrameTableRow::ID_KeyMappingDataTable(FDS_ContentsTabFrameTableRow *this)

{
  FDS_KeyMappingDataTableRow *pFVar1;
  
  pFVar1 = FDS_KeyMappingDataTableRow::GetRef((longlong)this->ID_KeyMappingData,true);
  return pFVar1;
}

// ID_NameTable @ 14b91c100

FDS_StringBaseTableRow * __thiscall
FDS_ContentsTabFrameTableRow::ID_NameTable(FDS_ContentsTabFrameTableRow *this)

{
  FDS_StringBaseTableRow *pFVar1;
  
  pFVar1 = FDS_StringBaseTableRow::GetRef((this->ID_Name).ID,true);
  return pFVar1;
}

// ID_WindowBaseTable @ 14b91c660

FDS_WindowBaseTableRow * __thiscall
FDS_ContentsTabFrameTableRow::ID_WindowBaseTable(FDS_ContentsTabFrameTableRow *this)

{
  FDS_WindowBaseTableRow *pFVar1;
  
  pFVar1 = FDS_WindowBaseTableRow::GetRef((longlong)(int)this->ID_WindowBase,true);
  return pFVar1;
}

// IsValid @ 14b91d9d0

bool __thiscall FDS_ContentsTabFrameTableRow::IsValid(FDS_ContentsTabFrameTableRow *this)

{
  return this != &DefaultObject;
}

