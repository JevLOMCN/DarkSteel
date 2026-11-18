// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticStruct @ 14b789530

UScriptStruct * __cdecl FDS_ZoneBaseTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ZoneBaseTableRow.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ZoneBaseTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ZoneBaseTableRow,(UObject *)pUVar1,
                         L"DS_ZoneBaseTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ZoneBaseTableRow.OuterSingleton;
}

// Get @ 14b9ab960

FDS_ZoneBaseTableRow * __cdecl FDS_ZoneBaseTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_ZoneBaseTableRow *pFVar4;
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
                      (&bGEnsureHasExecuted<_1772886118090407912>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_ZoneBaseTableRow.cpp"
                       ,0x18,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_ZoneBaseTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,ZoneBase);
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
      pFVar4 = (FDS_ZoneBaseTableRow *)
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
  return (FDS_ZoneBaseTableRow *)0x0;
}

// GetAll @ 14b9acc80

TArray<FDS_ZoneBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_ZoneBaseTableRow::GetAll
          (TArray<FDS_ZoneBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_ZoneBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<_1772886118090407883>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_ZoneBaseTableRow.cpp"
                       ,0x35,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_ZoneBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,ZoneBase);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_ZoneBaseTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b9b1fb0

FDS_ZoneBaseTableRow * __cdecl FDS_ZoneBaseTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_ZoneBaseTableRow *pFVar4;
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
                        (&bGEnsureHasExecuted<_1772886118090407912>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_ZoneBaseTableRow.cpp"
                         ,0x18,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_ZoneBaseTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,ZoneBase);
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
        pFVar4 = (FDS_ZoneBaseTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_ZoneBaseTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// ID_DeathPenaltyTable @ 14b9b4e90

FDS_ZoneDeathPenaltyTableRow * __thiscall
FDS_ZoneBaseTableRow::ID_DeathPenaltyTable(FDS_ZoneBaseTableRow *this)

{
  FDS_ZoneDeathPenaltyTableRow *pFVar1;
  
  pFVar1 = FDS_ZoneDeathPenaltyTableRow::GetRef((longlong)this->ID_DeathPenalty,true);
  return pFVar1;
}

// ID_DropZoneGroupTables @ 14b9b5230

TArray<FDS_DropZoneTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_ZoneBaseTableRow::ID_DropZoneGroupTables
          (FDS_ZoneBaseTableRow *this,
          TArray<FDS_DropZoneTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  ForAnyElementType FVar5;
  undefined1 local_res10 [8];
  TArray<FDS_DropZoneTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  FDS_DropZoneTableRow::GetAll(&local_38);
  iVar3 = local_38.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar5.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FDS_DropZoneTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (FVar5.Data == pFVar1) break;
    lVar2 = *(longlong *)FVar5.Data;
    if (this->ID_DropZoneGroup == *(int *)(lVar2 + 0x10)) {
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == __return_storage_ptr__->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 8) = lVar2;
    }
    FVar5.Data = FVar5.Data + 8;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ID_FixedReturnWarpLocationTable @ 14b9b5310

FDS_WarpLocationTableRow * __thiscall
FDS_ZoneBaseTableRow::ID_FixedReturnWarpLocationTable(FDS_ZoneBaseTableRow *this)

{
  FDS_WarpLocationTableRow *pFVar1;
  
  pFVar1 = FDS_WarpLocationTableRow::GetRef((longlong)this->ID_FixedReturnWarpLocation,true);
  return pFVar1;
}

// ID_MapIndoorGroupTable @ 14b9b53d0

FDS_MapIndoorGroupTableRow * __thiscall
FDS_ZoneBaseTableRow::ID_MapIndoorGroupTable(FDS_ZoneBaseTableRow *this)

{
  FDS_MapIndoorGroupTableRow *pFVar1;
  
  pFVar1 = FDS_MapIndoorGroupTableRow::GetRef((longlong)this->ID_MapIndoorGroup,true);
  return pFVar1;
}

// ID_PropInfoTable @ 14b9b5430

FDS_ZonePropInfoTableRow * __thiscall
FDS_ZoneBaseTableRow::ID_PropInfoTable(FDS_ZoneBaseTableRow *this)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  UDS_TableManager *this_00;
  FDS_ZonePropInfoTableRow *pFVar5;
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
  
  iVar1 = this->ID_PropInfo;
  if ((longlong)iVar1 == 0) {
    return &FDS_ZonePropInfoTableRow::DefaultObject;
  }
  this_00 = UDS_TableManager::GetInst();
  if (this_00 == (UDS_TableManager *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3782805202004869137>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_ZonePropInfoTableRow.cpp"
                       ,0x11,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FDS_ZonePropInfoTableRow *)(*pcVar3)();
      return pFVar5;
    }
  }
  else {
    this_01 = UDS_TableManager::GetDataTable(this_00,ZonePropInfo);
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
      pUVar8 = FDS_ZonePropInfoTableRow::StaticStruct();
      pFVar5 = (FDS_ZonePropInfoTableRow *)
               UDataTable::FindRowInternal(this_01,pUVar8,FVar2,(wchar_t *)FVar10.Data,true);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (pFVar5 != (FDS_ZonePropInfoTableRow *)0x0) {
        return pFVar5;
      }
    }
  }
  return &FDS_ZonePropInfoTableRow::DefaultObject;
}

// ID_RestartWarpLocationTable @ 14b9b5570

FDS_WarpLocationTableRow * __thiscall
FDS_ZoneBaseTableRow::ID_RestartWarpLocationTable(FDS_ZoneBaseTableRow *this)

{
  FDS_WarpLocationTableRow *pFVar1;
  
  pFVar1 = FDS_WarpLocationTableRow::GetRef((longlong)this->ID_RestartWarpLocation,true);
  return pFVar1;
}

// ID_ResurrectionWaitingTable @ 14b9b5590

FDS_ResurrectionWaitingTableRow * __thiscall
FDS_ZoneBaseTableRow::ID_ResurrectionWaitingTable(FDS_ZoneBaseTableRow *this)

{
  FDS_ResurrectionWaitingTableRow *pFVar1;
  
  pFVar1 = FDS_ResurrectionWaitingTableRow::GetRef((longlong)this->ID_ResurrectionWaiting,true);
  return pFVar1;
}

// ID_ResurrectionZoneTable @ 14b9b55b0

FDS_ZoneBaseTableRow * __thiscall
FDS_ZoneBaseTableRow::ID_ResurrectionZoneTable(FDS_ZoneBaseTableRow *this)

{
  FDS_ZoneBaseTableRow *pFVar1;
  
  pFVar1 = GetRef((longlong)this->ID_ResurrectionZone,true);
  return pFVar1;
}

// ID_ZoneGroupTable @ 14b9b58b0

FDS_ZoneGroupTableRow * __thiscall
FDS_ZoneBaseTableRow::ID_ZoneGroupTable(FDS_ZoneBaseTableRow *this)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this_00;
  FDS_ZoneGroupTableRow *pFVar4;
  UDataTable *this_01;
  FString *pFVar5;
  FName *pFVar6;
  UScriptStruct *pUVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  ForAnyElementType FVar10;
  FName local_res8;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  lVar9 = (longlong)*(int *)((longlong)&this->_padding_ + 4);
  if (lVar9 == 0) {
    return &FDS_ZoneGroupTableRow::DefaultObject;
  }
  this_00 = UDS_TableManager::GetInst();
  if (this_00 == (UDS_TableManager *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2258783679616647185>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_ZoneGroupTableRow.cpp"
                       ,0x11,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_ZoneGroupTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_01 = UDS_TableManager::GetDataTable(this_00,ZoneGroup);
    if (this_01 != (UDataTable *)0x0) {
      local_res8 = (FName)this_01->_padding_;
      ::FName::ToString(&local_res8,&local_28);
      pFVar5 = DS_Util::FromInt64(&local_18,lVar9);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_res10,pwVar8);
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar10.Data = local_28.Data.AllocatorInstance.Data;
      }
      FVar1 = *pFVar6;
      pUVar7 = FDS_ZoneGroupTableRow::StaticStruct();
      pFVar4 = (FDS_ZoneGroupTableRow *)
               UDataTable::FindRowInternal(this_01,pUVar7,FVar1,(wchar_t *)FVar10.Data,true);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (pFVar4 != (FDS_ZoneGroupTableRow *)0x0) {
        return pFVar4;
      }
    }
  }
  return &FDS_ZoneGroupTableRow::DefaultObject;
}

// ID_ZoneNameTable @ 14b9b5a70

FDS_StringWorldTableRow * __thiscall
FDS_ZoneBaseTableRow::ID_ZoneNameTable(FDS_ZoneBaseTableRow *this)

{
  FDS_StringWorldTableRow *pFVar1;
  
  pFVar1 = FDS_StringWorldTableRow::GetRef(this->_padding_,true);
  return pFVar1;
}

// IsValid @ 14b9b7c90

bool __thiscall FDS_ZoneBaseTableRow::IsValid(FDS_ZoneBaseTableRow *this)

{
  return this != &DefaultObject;
}

