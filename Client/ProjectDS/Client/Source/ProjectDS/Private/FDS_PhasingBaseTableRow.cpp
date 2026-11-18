// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticStruct @ 14b556df0

UScriptStruct * __cdecl FDS_PhasingBaseTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_PhasingBaseTableRow.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_PhasingBaseTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_PhasingBaseTableRow,(UObject *)pUVar1,
                         L"DS_PhasingBaseTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_PhasingBaseTableRow.OuterSingleton;
}

// FDS_PhasingBaseTableRow @ 14b559e90

FDS_PhasingBaseTableRow * __thiscall
FDS_PhasingBaseTableRow::FDS_PhasingBaseTableRow(FDS_PhasingBaseTableRow *this)

{
  this->_padding_ = (longlong)&___7FDS_PhasingBaseTableRow__6B_;
  this->ID = 0;
  this->DataStage = 0;
  ::FString::FString(&this->Version,L"");
  ::FString::FString(&this->ScriptPath,L"");
  this->PhasingContentsType = None;
  this->ID_ResurrectionWarpLocation = 0;
  this->ID_StartWarpLocation = 0;
  this->ID_ClearWarpLocation = 0;
  this->ID_FailWarpLocation = 0;
  (this->ID_PhasingBuff).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_PhasingBuff).ArrayNum = 0;
  (this->ID_PhasingBuff).ArrayMax = 0;
  ::FString::FString(&this->PhasingJson,L"");
  this->ID_BreachBase = 0;
  this->ID_BreachFormationSpawn = 0;
  this->ID_ResurrectionWaiting = 0;
  this->ID_DeathPenalty = 0;
  (this->BlockingVolume).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlockingVolume).ArrayNum = 0;
  (this->BlockingVolume).ArrayMax = 0;
  return this;
}

// Get @ 14b950a90

FDS_PhasingBaseTableRow * __cdecl FDS_PhasingBaseTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_PhasingBaseTableRow *pFVar4;
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
                      (&bGEnsureHasExecuted<_6399252205886504941>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_PhasingBaseTableRow.cpp"
                       ,0x13,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_PhasingBaseTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,PhasingBase);
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
      pFVar4 = (FDS_PhasingBaseTableRow *)
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
  return (FDS_PhasingBaseTableRow *)0x0;
}

// GetAll @ 14b952c30

TArray<FDS_PhasingBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_PhasingBaseTableRow::GetAll
          (TArray<FDS_PhasingBaseTableRow_const_*,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_PhasingBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<_6399252205886504912>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_PhasingBaseTableRow.cpp"
                       ,0x30,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_PhasingBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,PhasingBase);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_PhasingBaseTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b955c80

FDS_PhasingBaseTableRow * __cdecl FDS_PhasingBaseTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_PhasingBaseTableRow *pFVar4;
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
                        (&bGEnsureHasExecuted<_6399252205886504941>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_PhasingBaseTableRow.cpp"
                         ,0x13,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_PhasingBaseTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,PhasingBase);
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
        pFVar4 = (FDS_PhasingBaseTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_PhasingBaseTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// ID_ClearWarpLocationTable @ 14b955df0

FDS_WarpLocationTableRow * __thiscall
FDS_PhasingBaseTableRow::ID_ClearWarpLocationTable(FDS_PhasingBaseTableRow *this)

{
  FDS_WarpLocationTableRow *pFVar1;
  
  pFVar1 = FDS_WarpLocationTableRow::GetRef((longlong)this->ID_ClearWarpLocation,true);
  return pFVar1;
}

// ID_DeathPenaltyTable @ 14b955e50

FDS_ZoneDeathPenaltyTableRow * __thiscall
FDS_PhasingBaseTableRow::ID_DeathPenaltyTable(FDS_PhasingBaseTableRow *this)

{
  FDS_ZoneDeathPenaltyTableRow *pFVar1;
  
  pFVar1 = FDS_ZoneDeathPenaltyTableRow::GetRef((longlong)this->ID_DeathPenalty,true);
  return pFVar1;
}

// ID_FailWarpLocationTable @ 14b956300

FDS_WarpLocationTableRow * __thiscall
FDS_PhasingBaseTableRow::ID_FailWarpLocationTable(FDS_PhasingBaseTableRow *this)

{
  FDS_WarpLocationTableRow *pFVar1;
  
  pFVar1 = FDS_WarpLocationTableRow::GetRef((longlong)this->ID_FailWarpLocation,true);
  return pFVar1;
}

// ID_PhasingBuffTables @ 14b957cc0

TArray<FDS_BuffBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_PhasingBaseTableRow::ID_PhasingBuffTables
          (FDS_PhasingBaseTableRow *this,
          TArray<FDS_BuffBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  undefined1 local_res10 [8];
  TArray<FDS_BuffBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  FDS_BuffBaseTableRow::GetAll(&local_38);
  iVar4 = local_38.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar7.Data = local_38.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_38.ArrayNum != iVar4) {
        `TCheckedPointerIterator<FDS_BuffBaseTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      if (FVar7.Data == pFVar1) {
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pFVar6 = (this->ID_PhasingBuff).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar7.Data;
      pFVar2 = pFVar6 + (longlong)(this->ID_PhasingBuff).ArrayNum * 4;
      if (pFVar6 != pFVar2) break;
LAB_14b957d7c:
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
        goto LAB_14b957d7c;
      }
      pFVar6 = pFVar6 + 4;
    } while (pFVar6 != pFVar2);
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// ID_ResurrectionWaitingTable @ 14b957f10

FDS_ResurrectionWaitingTableRow * __thiscall
FDS_PhasingBaseTableRow::ID_ResurrectionWaitingTable(FDS_PhasingBaseTableRow *this)

{
  FDS_ResurrectionWaitingTableRow *pFVar1;
  
  pFVar1 = FDS_ResurrectionWaitingTableRow::GetRef((longlong)this->ID_ResurrectionWaiting,true);
  return pFVar1;
}

// ID_ResurrectionWarpLocationTable @ 14b957f30

FDS_WarpLocationTableRow * __thiscall
FDS_PhasingBaseTableRow::ID_ResurrectionWarpLocationTable(FDS_PhasingBaseTableRow *this)

{
  FDS_WarpLocationTableRow *pFVar1;
  
  pFVar1 = FDS_WarpLocationTableRow::GetRef((longlong)this->ID_ResurrectionWarpLocation,true);
  return pFVar1;
}

// ID_StartWarpLocationTable @ 14b9582b0

FDS_WarpLocationTableRow * __thiscall
FDS_PhasingBaseTableRow::ID_StartWarpLocationTable(FDS_PhasingBaseTableRow *this)

{
  FDS_WarpLocationTableRow *pFVar1;
  
  pFVar1 = FDS_WarpLocationTableRow::GetRef((longlong)this->ID_StartWarpLocation,true);
  return pFVar1;
}

// IsValid @ 14b958c80

bool __thiscall FDS_PhasingBaseTableRow::IsValid(FDS_PhasingBaseTableRow *this)

{
  return this != &DefaultObject;
}

