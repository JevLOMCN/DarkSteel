// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// StaticStruct @ 14b427df0

UScriptStruct * __cdecl FDS_BuffBaseTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_BuffBaseTableRow.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_BuffBaseTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_BuffBaseTableRow,(UObject *)pUVar1,
                         L"DS_BuffBaseTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_BuffBaseTableRow.OuterSingleton;
}

// FDS_BuffBaseTableRow @ 14b42a9f0

FDS_BuffBaseTableRow * __thiscall
FDS_BuffBaseTableRow::FDS_BuffBaseTableRow(FDS_BuffBaseTableRow *this)

{
  this->_padding_ = (longlong)&___7FDS_BuffBaseTableRow__6B_;
  this->ID = 0;
  this->DataStage = 0;
  (this->ID_Name)._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  (this->ID_Name).ID = 0;
  (this->ID_EffectDesc)._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  (this->ID_EffectDesc).ID = 0;
  this->ID_Icon = 0;
  this->ID_BuffGroup = 0;
  (this->ID_BuffGroupName)._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  (this->ID_BuffGroupName).ID = 0;
  this->ID_BuffGroupIcon = 0;
  this->ShowDamageFont = false;
  this->BuffUseType = None;
  this->BuffApplyType = Buff;
  this->IsBuffTarget = false;
  this->IsPlayerBuff = false;
  this->BuffTargetType = All;
  this->IsUpdateRule = false;
  this->IsKeepTypeDie = false;
  this->IsKeepTypeStageOut = false;
  this->IsKeepTypeLogOut = false;
  this->IsTimeType = false;
  this->BuffArmorType = None;
  this->BuffProbability = 0;
  this->BuffOverlapMaxCount = 0;
  this->ID_OverlapMaxBuff = 0;
  this->OverLapCallGroupID = 0;
  this->ID_BuffAttack = 0;
  this->BuffType = Once;
  this->BuffKeepType = Duration;
  this->ID_BuffAura = 0;
  this->IsHideRemainTime = false;
  this->Period = 0.0;
  this->ID_AfterApply = 0;
  this->BuffTime = 0.0;
  this->LevelUpBuffTime = 0.0;
  (this->EmissiveDcolor).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmissiveDcolor).ArrayNum = 0;
  (this->EmissiveDcolor).ArrayMax = 0;
  this->FresnelExponent = 0.0;
  this->FresnelBaseReflect = 0.0;
  (this->ID_Passive).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_Passive).ArrayNum = 0;
  (this->ID_Passive).ArrayMax = 0;
  (this->ID_DetachBuff).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_DetachBuff).ArrayNum = 0;
  (this->ID_DetachBuff).ArrayMax = 0;
  this->IsAppearBuff = false;
  this->ID_ActEffect = 0;
  this->ID_BuffEffect = 0;
  ::FString::FString(&this->EffectSocket,L"");
  this->ID_ExtinctionEffect = 0;
  ::FString::FString(&this->ExtinctionEffectSocket,L"");
  this->BuffEffectScale = 0.0;
  this->EffectHeight = 0;
  (this->BuffIndexType).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BuffIndexType).ArrayNum = 0;
  (this->BuffIndexType).ArrayMax = 0;
  (this->BuffIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BuffIndex).ArrayNum = 0;
  (this->BuffIndex).ArrayMax = 0;
  (this->BuffValue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BuffValue).ArrayNum = 0;
  (this->BuffValue).ArrayMax = 0;
  (this->LevelUpBuffValue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LevelUpBuffValue).ArrayNum = 0;
  (this->LevelUpBuffValue).ArrayMax = 0;
  (this->BuffValueEx).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BuffValueEx).ArrayNum = 0;
  (this->BuffValueEx).ArrayMax = 0;
  return this;
}

// ~FDS_BuffBaseTableRow @ 14b42b540

void __thiscall FDS_BuffBaseTableRow::~FDS_BuffBaseTableRow(FDS_BuffBaseTableRow *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->BuffValueEx).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LevelUpBuffValue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BuffValue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BuffIndex).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BuffIndexType).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExtinctionEffectSocket).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EffectSocket).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_DetachBuff).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_Passive).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EmissiveDcolor).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// Get @ 14b901a20

FDS_BuffBaseTableRow * __cdecl FDS_BuffBaseTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_BuffBaseTableRow *pFVar4;
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
                      (&bGEnsureHasExecuted<792720254101880852>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_BuffBaseTableRow.cpp"
                       ,0x14,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_BuffBaseTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,BuffBase);
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
      pFVar4 = (FDS_BuffBaseTableRow *)
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
  return (FDS_BuffBaseTableRow *)0x0;
}

// GetAll @ 14b903e20

TArray<FDS_BuffBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_BuffBaseTableRow::GetAll
          (TArray<FDS_BuffBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_BuffBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<792720254101880881>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_BuffBaseTableRow.cpp"
                       ,0x31,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_BuffBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,BuffBase);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_BuffBaseTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b907e90

FDS_BuffBaseTableRow * __cdecl FDS_BuffBaseTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_BuffBaseTableRow *pFVar4;
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
                        (&bGEnsureHasExecuted<792720254101880852>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_BuffBaseTableRow.cpp"
                         ,0x14,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_BuffBaseTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,BuffBase);
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
        pFVar4 = (FDS_BuffBaseTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_BuffBaseTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// ID_ActEffectTable @ 14b9096c0

FDS_ResourceEffectTableRow * __thiscall
FDS_BuffBaseTableRow::ID_ActEffectTable(FDS_BuffBaseTableRow *this)

{
  FDS_ResourceEffectTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceEffectTableRow::GetRef((longlong)this->ID_ActEffect,true);
  return pFVar1;
}

// ID_AfterApplyTable @ 14b9098e0

FDS_BuffBaseTableRow * __thiscall
FDS_BuffBaseTableRow::ID_AfterApplyTable(FDS_BuffBaseTableRow *this)

{
  FDS_BuffBaseTableRow *pFVar1;
  
  pFVar1 = GetRef((longlong)this->ID_AfterApply,true);
  return pFVar1;
}

// ID_BuffAuraTable @ 14b909bf0

FDS_BuffAuraTableRow * __thiscall FDS_BuffBaseTableRow::ID_BuffAuraTable(FDS_BuffBaseTableRow *this)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  UDS_TableManager *this_00;
  FDS_BuffAuraTableRow *pFVar5;
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
  
  iVar1 = this->ID_BuffAura;
  if ((longlong)iVar1 == 0) {
    return &FDS_BuffAuraTableRow::DefaultObject;
  }
  this_00 = UDS_TableManager::GetInst();
  if (this_00 == (UDS_TableManager *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5162071221117911056>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_BuffAuraTableRow.cpp"
                       ,0x10,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FDS_BuffAuraTableRow *)(*pcVar3)();
      return pFVar5;
    }
  }
  else {
    this_01 = UDS_TableManager::GetDataTable(this_00,BuffAura);
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
      pUVar8 = FDS_BuffAuraTableRow::StaticStruct();
      pFVar5 = (FDS_BuffAuraTableRow *)
               UDataTable::FindRowInternal(this_01,pUVar8,FVar2,(wchar_t *)FVar10.Data,true);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (pFVar5 != (FDS_BuffAuraTableRow *)0x0) {
        return pFVar5;
      }
    }
  }
  return &FDS_BuffAuraTableRow::DefaultObject;
}

// ID_BuffEffectTable @ 14b909e30

FDS_ResourceEffectTableRow * __thiscall
FDS_BuffBaseTableRow::ID_BuffEffectTable(FDS_BuffBaseTableRow *this)

{
  FDS_ResourceEffectTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceEffectTableRow::GetRef((longlong)this->ID_BuffEffect,true);
  return pFVar1;
}

// ID_BuffGroupIconTable @ 14b909e50

FDS_ResourceIconTableRow * __thiscall
FDS_BuffBaseTableRow::ID_BuffGroupIconTable(FDS_BuffBaseTableRow *this)

{
  FDS_ResourceIconTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceIconTableRow::GetRef((longlong)this->ID_BuffGroupIcon,true);
  return pFVar1;
}

// ID_BuffGroupNameTable @ 14b909e70

FDS_StringBaseTableRow * __thiscall
FDS_BuffBaseTableRow::ID_BuffGroupNameTable(FDS_BuffBaseTableRow *this)

{
  FDS_StringBaseTableRow *pFVar1;
  
  pFVar1 = FDS_StringBaseTableRow::GetRef((this->ID_BuffGroupName).ID,true);
  return pFVar1;
}

// ID_EffectDescTable @ 14b90a3c0

FDS_StringBaseTableRow * __thiscall
FDS_BuffBaseTableRow::ID_EffectDescTable(FDS_BuffBaseTableRow *this)

{
  FDS_StringBaseTableRow *pFVar1;
  
  pFVar1 = FDS_StringBaseTableRow::GetRef((this->ID_EffectDesc).ID,true);
  return pFVar1;
}

// ID_ExtinctionEffectTable @ 14b90a400

FDS_ResourceEffectTableRow * __thiscall
FDS_BuffBaseTableRow::ID_ExtinctionEffectTable(FDS_BuffBaseTableRow *this)

{
  FDS_ResourceEffectTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceEffectTableRow::GetRef((longlong)this->ID_ExtinctionEffect,true);
  return pFVar1;
}

// ID_IconTable @ 14b90a620

FDS_ResourceIconTableRow * __thiscall FDS_BuffBaseTableRow::ID_IconTable(FDS_BuffBaseTableRow *this)

{
  FDS_ResourceIconTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceIconTableRow::GetRef((longlong)this->ID_Icon,true);
  return pFVar1;
}

// ID_NameTable @ 14b90af60

FDS_StringBaseTableRow * __thiscall FDS_BuffBaseTableRow::ID_NameTable(FDS_BuffBaseTableRow *this)

{
  FDS_StringBaseTableRow *pFVar1;
  
  pFVar1 = FDS_StringBaseTableRow::GetRef((this->ID_Name).ID,true);
  return pFVar1;
}

// ID_OverlapMaxBuffTable @ 14b90b170

FDS_BuffBaseTableRow * __thiscall
FDS_BuffBaseTableRow::ID_OverlapMaxBuffTable(FDS_BuffBaseTableRow *this)

{
  FDS_BuffBaseTableRow *pFVar1;
  
  pFVar1 = GetRef((longlong)this->ID_OverlapMaxBuff,true);
  return pFVar1;
}

// IsValid @ 14b90bd80

bool __thiscall FDS_BuffBaseTableRow::IsValid(FDS_BuffBaseTableRow *this)

{
  return this != &DefaultObject;
}

