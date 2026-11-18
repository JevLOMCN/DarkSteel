// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticStruct @ 14b428b70

UScriptStruct * __cdecl FDS_BreachBaseTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_BreachBaseTableRow.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_BreachBaseTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_BreachBaseTableRow,(UObject *)pUVar1,
                         L"DS_BreachBaseTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_BreachBaseTableRow.OuterSingleton;
}

// FDS_BreachBaseTableRow @ 14b42a800

FDS_BreachBaseTableRow * __thiscall
FDS_BreachBaseTableRow::FDS_BreachBaseTableRow(FDS_BreachBaseTableRow *this)

{
  undefined8 uVar1;
  
  this->_padding_ = (longlong)&___7FDS_BreachBaseTableRow__6B_;
  this->ID = 0;
  this->DataStage = 0;
  ::FString::FString(&this->Versionp,L"");
  (this->ID_Name).ID = 0;
  (this->ID_Name)._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  this->BreachContentsType = None;
  this->BreachDetailType = None;
  this->MapIndex = None;
  this->DaliyPlayLimitCount = 0;
  this->ID_DailyLimitCountResetTime = 0;
  this->ID_RewardFirst = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->ID_RewardRepeat = 0;
  (this->Location).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Location).field0_0x0._s_0.Y = (double)uVar1;
  (this->Location).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->ID_EffectActive = 0;
  this->ID_EffectDeactive = 0;
  return this;
}

// Get @ 14b901360

FDS_BreachBaseTableRow * __cdecl FDS_BreachBaseTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_BreachBaseTableRow *pFVar4;
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
                      (&bGEnsureHasExecuted<8279531056340664339>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_BreachBaseTableRow.cpp"
                       ,0x13,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_BreachBaseTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,BreachBase);
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
      pFVar4 = (FDS_BreachBaseTableRow *)
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
  return (FDS_BreachBaseTableRow *)0x0;
}

// GetAll @ 14b903940

TArray<FDS_BreachBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_BreachBaseTableRow::GetAll
          (TArray<FDS_BreachBaseTableRow_const_*,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_BreachBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<8279531056340664368>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_BreachBaseTableRow.cpp"
                       ,0x30,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_BreachBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,BreachBase);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_BreachBaseTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b907770

FDS_BreachBaseTableRow * __cdecl FDS_BreachBaseTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_BreachBaseTableRow *pFVar4;
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
                        (&bGEnsureHasExecuted<8279531056340664339>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_BreachBaseTableRow.cpp"
                         ,0x13,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_BreachBaseTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,BreachBase);
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
        pFVar4 = (FDS_BreachBaseTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_BreachBaseTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// ID_DailyLimitCountResetTimeTable @ 14b90a0f0

FDS_TimeSchedulerTableRow * __thiscall
FDS_BreachBaseTableRow::ID_DailyLimitCountResetTimeTable(FDS_BreachBaseTableRow *this)

{
  FDS_TimeSchedulerTableRow *pFVar1;
  
  pFVar1 = FDS_TimeSchedulerTableRow::GetRef((longlong)this->ID_DailyLimitCountResetTime,true);
  return pFVar1;
}

// ID_EffectActiveTable @ 14b90a380

FDS_ResourceEffectTableRow * __thiscall
FDS_BreachBaseTableRow::ID_EffectActiveTable(FDS_BreachBaseTableRow *this)

{
  FDS_ResourceEffectTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceEffectTableRow::GetRef((longlong)this->ID_EffectActive,true);
  return pFVar1;
}

// ID_EffectDeactiveTable @ 14b90a3a0

FDS_ResourceEffectTableRow * __thiscall
FDS_BreachBaseTableRow::ID_EffectDeactiveTable(FDS_BreachBaseTableRow *this)

{
  FDS_ResourceEffectTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceEffectTableRow::GetRef((longlong)this->ID_EffectDeactive,true);
  return pFVar1;
}

// ID_NameTable @ 14b90af40

FDS_StringBaseTableRow * __thiscall
FDS_BreachBaseTableRow::ID_NameTable(FDS_BreachBaseTableRow *this)

{
  FDS_StringBaseTableRow *pFVar1;
  
  pFVar1 = FDS_StringBaseTableRow::GetRef((this->ID_Name).ID,true);
  return pFVar1;
}

// ID_RewardFirstTable @ 14b90b4d0

FDS_BreachRewardTableRow * __thiscall
FDS_BreachBaseTableRow::ID_RewardFirstTable(FDS_BreachBaseTableRow *this)

{
  FDS_BreachRewardTableRow *pFVar1;
  
  pFVar1 = FDS_BreachRewardTableRow::GetRef((longlong)this->ID_RewardFirst,true);
  return pFVar1;
}

// ID_RewardRepeatTable @ 14b90b5f0

FDS_BreachRewardTableRow * __thiscall
FDS_BreachBaseTableRow::ID_RewardRepeatTable(FDS_BreachBaseTableRow *this)

{
  FDS_BreachRewardTableRow *pFVar1;
  
  pFVar1 = FDS_BreachRewardTableRow::GetRef((longlong)this->ID_RewardRepeat,true);
  return pFVar1;
}

// IsValid @ 14b90bcc0

bool __thiscall FDS_BreachBaseTableRow::IsValid(FDS_BreachBaseTableRow *this)

{
  return this != &DefaultObject;
}

