// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// StaticStruct @ 14b58cfb0

UScriptStruct * __cdecl FDS_SkillActLevelTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_SkillActLevelTableRow.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_SkillActLevelTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_SkillActLevelTableRow,(UObject *)pUVar1,
                         L"DS_SkillActLevelTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_SkillActLevelTableRow.OuterSingleton;
}

// FDS_SkillActLevelTableRow @ 14b58d980

FDS_SkillActLevelTableRow * __thiscall
FDS_SkillActLevelTableRow::FDS_SkillActLevelTableRow(FDS_SkillActLevelTableRow *this)

{
  this->_padding_ = (longlong)&___7FDS_SkillActLevelTableRow__6B_;
  this->ID = 0;
  this->DataStage = 0;
  this->ID_SkillActLevelGroup = 0;
  this->SkillLevel = 0;
  this->EvolveLevel = 0;
  (this->ID_EffectDesc)._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  (this->ID_EffectDesc).ID = 0;
  this->CoolTime = 0.0;
  this->GlobalCoolTime = 0.0;
  (this->SkillCostType).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillCostType).ArrayNum = 0;
  (this->SkillCostType).ArrayMax = 0;
  (this->SkillCostValueType).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillCostValueType).ArrayNum = 0;
  (this->SkillCostValueType).ArrayMax = 0;
  (this->SkillCost).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillCost).ArrayNum = 0;
  (this->SkillCost).ArrayMax = 0;
  this->ID_SkillMode = 0;
  this->SkillTargetCheckType = Normal;
  (this->ID_AttackLink).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_AttackLink).ArrayNum = 0;
  (this->ID_AttackLink).ArrayMax = 0;
  (this->LinkStartTime).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LinkStartTime).ArrayNum = 0;
  (this->LinkStartTime).ArrayMax = 0;
  this->IsSkillAniAction = false;
  this->SkillStartAniIndex = 0;
  this->SkillLoopAniIndex = 0;
  this->ActionAniType = 0;
  this->AttackAniIndex = 0;
  this->AttackAniTime = 0.0;
  this->EndCutAniTime = 0.0;
  this->InputMoveTime = 0.0;
  this->SkillEndAniIndex = 0;
  this->IsSilenceUse = false;
  this->IsStateConUse = false;
  this->IsMoveConUse = false;
  this->StateConGrade = 0;
  this->MoveConGrade = 0;
  this->IsImmuneAbnormal = false;
  this->AbnormalImmuneDefPoint = 0;
  (this->ID_SmiteBuff).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_SmiteBuff).ArrayNum = 0;
  (this->ID_SmiteBuff).ArrayMax = 0;
  this->ID_HaveMySmiteBuff = 0;
  this->ID_HaveTargetSmiteBuff = 0;
  (this->ID_SkillUseBuff).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_SkillUseBuff).ArrayNum = 0;
  (this->ID_SkillUseBuff).ArrayMax = 0;
  (this->ID_UseSkillPassive).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_UseSkillPassive).ArrayNum = 0;
  (this->ID_UseSkillPassive).ArrayMax = 0;
  this->ID_RunePassive = 0;
  this->StackUseCount = 0;
  this->ID_NpcHeightSkillCondition = 0;
  this->IsCollideBlockCheck = false;
  this->CollideBlockAttackPoint = 0;
  this->IsSuicide = false;
  return this;
}

// ~FDS_SkillActLevelTableRow @ 14b58e1d0

void __thiscall
FDS_SkillActLevelTableRow::~FDS_SkillActLevelTableRow(FDS_SkillActLevelTableRow *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ID_UseSkillPassive).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_SkillUseBuff).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_SmiteBuff).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LinkStartTime).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_AttackLink).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SkillCost).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SkillCostValueType).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SkillCostType).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// Get @ 14b972530

FDS_SkillActLevelTableRow * __cdecl FDS_SkillActLevelTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_SkillActLevelTableRow *pFVar4;
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
                      (&bGEnsureHasExecuted<_5943173915101626348>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_SkillActLevelTableRow.cpp"
                       ,0x14,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_SkillActLevelTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,SkillActLevel);
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
      pFVar4 = (FDS_SkillActLevelTableRow *)
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
  return (FDS_SkillActLevelTableRow *)0x0;
}

// GetAll @ 14b974a50

TArray<FDS_SkillActLevelTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_SkillActLevelTableRow::GetAll
          (TArray<FDS_SkillActLevelTableRow_const_*,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_SkillActLevelTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<_5943173915101626319>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_SkillActLevelTableRow.cpp"
                       ,0x31,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_SkillActLevelTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,SkillActLevel);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_SkillActLevelTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b976ff0

FDS_SkillActLevelTableRow * __cdecl FDS_SkillActLevelTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_SkillActLevelTableRow *pFVar4;
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
                        (&bGEnsureHasExecuted<_5943173915101626348>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_SkillActLevelTableRow.cpp"
                         ,0x14,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_SkillActLevelTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,SkillActLevel);
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
        pFVar4 = (FDS_SkillActLevelTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_SkillActLevelTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// ID_AttackLinkTables @ 14b978a10

TArray<FDS_SkillAttackTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_SkillActLevelTableRow::ID_AttackLinkTables
          (FDS_SkillActLevelTableRow *this,
          TArray<FDS_SkillAttackTableRow_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  UDS_TableManager *this_00;
  TArray<FDS_SkillAttackTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar8;
  UDataTable *this_01;
  FScriptContainerElement *pFVar9;
  ForAnyElementType FVar10;
  undefined1 local_res10 [8];
  FName local_res18;
  TArray<FDS_SkillAttackTableRow_const_*,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  this_00 = UDS_TableManager::GetInst();
  if (this_00 == (UDS_TableManager *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8971091877000380366>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_SkillAttackTableRow.cpp"
                       ,0x32,"false");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TArray<FDS_SkillAttackTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar8;
    }
  }
  else {
    this_01 = UDS_TableManager::GetDataTable(this_00,SkillAttack);
    if (this_01 != (UDataTable *)0x0) {
      local_res18 = (FName)this_01->_padding_;
      ::FName::ToString(&local_res18,&local_38);
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar10.Data = local_38.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_SkillAttackTableRow_const_>
                (this_01,(wchar_t *)FVar10.Data,&local_48);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  iVar5 = local_48.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 8;
  FVar10.Data = local_48.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_48.ArrayNum != iVar5) {
        `TCheckedPointerIterator<FDS_SkillAttackTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (FVar10.Data == pFVar1) {
        if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pFVar9 = (this->ID_AttackLink).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar10.Data;
      pFVar2 = pFVar9 + (longlong)(this->ID_AttackLink).ArrayNum * 4;
      if (pFVar9 != pFVar2) break;
LAB_14b978b51:
      FVar10.Data = FVar10.Data + 8;
    }
    do {
      if (*(int *)pFVar9 == *(int *)(lVar3 + 8)) {
        iVar7 = __return_storage_ptr__->ArrayNum;
        if (iVar7 == __return_storage_ptr__->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar7 + 1;
        *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) =
             lVar3;
        goto LAB_14b978b51;
      }
      pFVar9 = pFVar9 + 4;
    } while (pFVar9 != pFVar2);
    FVar10.Data = FVar10.Data + 8;
  } while( true );
}

// ID_EffectDescTable @ 14b9792d0

FDS_StringBaseTableRow * __thiscall
FDS_SkillActLevelTableRow::ID_EffectDescTable(FDS_SkillActLevelTableRow *this)

{
  FDS_StringBaseTableRow *pFVar1;
  
  pFVar1 = FDS_StringBaseTableRow::GetRef((this->ID_EffectDesc).ID,true);
  return pFVar1;
}

// ID_HaveMySmiteBuffTable @ 14b979370

FDS_BuffBaseTableRow * __thiscall
FDS_SkillActLevelTableRow::ID_HaveMySmiteBuffTable(FDS_SkillActLevelTableRow *this)

{
  FDS_BuffBaseTableRow *pFVar1;
  
  pFVar1 = FDS_BuffBaseTableRow::GetRef((longlong)this->ID_HaveMySmiteBuff,true);
  return pFVar1;
}

// ID_HaveTargetSmiteBuffTable @ 14b979390

FDS_BuffBaseTableRow * __thiscall
FDS_SkillActLevelTableRow::ID_HaveTargetSmiteBuffTable(FDS_SkillActLevelTableRow *this)

{
  FDS_BuffBaseTableRow *pFVar1;
  
  pFVar1 = FDS_BuffBaseTableRow::GetRef((longlong)this->ID_HaveTargetSmiteBuff,true);
  return pFVar1;
}

// ID_NpcHeightSkillConditionTable @ 14b979910

FDS_HeightConditionTableRow * __thiscall
FDS_SkillActLevelTableRow::ID_NpcHeightSkillConditionTable(FDS_SkillActLevelTableRow *this)

{
  FDS_HeightConditionTableRow *pFVar1;
  
  pFVar1 = FDS_HeightConditionTableRow::GetRef((longlong)this->ID_NpcHeightSkillCondition,true);
  return pFVar1;
}

// ID_SkillModeTable @ 14b97a1c0

FDS_SkillModeTableRow * __thiscall
FDS_SkillActLevelTableRow::ID_SkillModeTable(FDS_SkillActLevelTableRow *this)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  UDS_TableManager *this_00;
  FDS_SkillModeTableRow *pFVar5;
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
  
  iVar1 = this->ID_SkillMode;
  if ((longlong)iVar1 == 0) {
    return &FDS_SkillModeTableRow::DefaultObject;
  }
  this_00 = UDS_TableManager::GetInst();
  if (this_00 == (UDS_TableManager *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2076686347690573809>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_SkillModeTableRow.cpp"
                       ,0xf,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FDS_SkillModeTableRow *)(*pcVar3)();
      return pFVar5;
    }
  }
  else {
    this_01 = UDS_TableManager::GetDataTable(this_00,SkillMode);
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
      pUVar8 = FDS_SkillModeTableRow::StaticStruct();
      pFVar5 = (FDS_SkillModeTableRow *)
               UDataTable::FindRowInternal(this_01,pUVar8,FVar2,(wchar_t *)FVar10.Data,true);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (pFVar5 != (FDS_SkillModeTableRow *)0x0) {
        return pFVar5;
      }
    }
  }
  return &FDS_SkillModeTableRow::DefaultObject;
}

// ID_SkillUseBuffTables @ 14b97a870

TArray<FDS_BuffBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_SkillActLevelTableRow::ID_SkillUseBuffTables
          (FDS_SkillActLevelTableRow *this,
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
      pFVar6 = (this->ID_SkillUseBuff).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar7.Data;
      pFVar2 = pFVar6 + (longlong)(this->ID_SkillUseBuff).ArrayNum * 4;
      if (pFVar6 != pFVar2) break;
LAB_14b97a92f:
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
        goto LAB_14b97a92f;
      }
      pFVar6 = pFVar6 + 4;
    } while (pFVar6 != pFVar2);
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// ID_SmiteBuffTables @ 14b97a9a0

TArray<FDS_BuffBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_SkillActLevelTableRow::ID_SmiteBuffTables
          (FDS_SkillActLevelTableRow *this,
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
      pFVar6 = (this->ID_SmiteBuff).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar7.Data;
      pFVar2 = pFVar6 + (longlong)(this->ID_SmiteBuff).ArrayNum * 4;
      if (pFVar6 != pFVar2) break;
LAB_14b97aa5f:
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
        goto LAB_14b97aa5f;
      }
      pFVar6 = pFVar6 + 4;
    } while (pFVar6 != pFVar2);
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// IsValid @ 14b97b090

bool __thiscall FDS_SkillActLevelTableRow::IsValid(FDS_SkillActLevelTableRow *this)

{
  return this != &DefaultObject;
}

// GetSkillActLevelByEvolveLevel @ 14bdc4200

FDS_SkillActLevelTableRow * __cdecl
FDS_SkillActLevelTableRow::GetSkillActLevelByEvolveLevel(int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FDS_SkillActLevelTableRow *pFVar2;
  ForAnyElementType FVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 local_res18 [8];
  TArray<FDS_SkillActLevelTableRow_const_*,TSizedDefaultAllocator<32>_> local_28;
  
  GetAll(&local_28);
  iVar4 = local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + (longlong)iVar4 * 8;
  FVar3.Data = local_28.AllocatorInstance.Data;
  uVar5 = local_28._8_8_;
  while( true ) {
    if ((int)uVar5 != iVar4) {
      `TCheckedPointerIterator<FDS_SkillActLevelTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
      uVar5 = local_28._8_8_;
    }
    if (FVar3.Data == pFVar1) break;
    pFVar2 = *(FDS_SkillActLevelTableRow **)FVar3.Data;
    if (((pFVar2 != (FDS_SkillActLevelTableRow *)0x0) && (pFVar2->ID_SkillActLevelGroup == param_1))
       && (pFVar2->EvolveLevel == param_2)) goto LAB_14bdc427d;
    FVar3.Data = FVar3.Data + 8;
  }
  pFVar2 = &DefaultObject;
LAB_14bdc427d:
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return pFVar2;
}

