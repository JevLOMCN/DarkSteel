// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// StaticStruct @ 14b58c250

UScriptStruct * __cdecl FDS_SkillConditionTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_SkillConditionTableRow.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_SkillConditionTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_SkillConditionTableRow,(UObject *)pUVar1,
                         L"DS_SkillConditionTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_SkillConditionTableRow.OuterSingleton;
}

// FDS_SkillConditionTableRow @ 14b58dca0

FDS_SkillConditionTableRow * __thiscall
FDS_SkillConditionTableRow::FDS_SkillConditionTableRow(FDS_SkillConditionTableRow *this)

{
  this->_padding_ = (longlong)&___7FDS_SkillConditionTableRow__6B_;
  this->ID = 0;
  this->DataStage = 0;
  this->SkillType = NormalAttack;
  this->SkillUseType = ActiveSkill;
  this->ToggleSkillType = None;
  this->IsToggleEnd = false;
  this->ToggleUnableTime = 0.0;
  this->ID_ToggleLoopEffect = 0;
  this->ID_ToggleHitEffect = 0;
  this->ID_ToggleEndEffect = 0;
  this->IsToggleSwimOff = false;
  this->GlobalCoolTime = 0.0;
  (this->SkillConditionCostType).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillConditionCostType).ArrayNum = 0;
  (this->SkillConditionCostType).ArrayMax = 0;
  (this->SkillConditionCost).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillConditionCost).ArrayNum = 0;
  (this->SkillConditionCost).ArrayMax = 0;
  this->ControlMoveType = 0;
  this->ControlMoveAni = 0;
  this->ControlMoveTime = 0.0;
  this->UseControlMoveTime = 0.0;
  this->ControlMoveSpeed = 0.0;
  this->CastingMaxCount = 0;
  this->CastingStartTime = 0.0;
  (this->ID_CastingSkill).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_CastingSkill).ArrayNum = 0;
  (this->ID_CastingSkill).ArrayMax = 0;
  (this->CastingTime).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CastingTime).ArrayNum = 0;
  (this->CastingTime).ArrayMax = 0;
  (this->CastingSkillUseTime).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CastingSkillUseTime).ArrayNum = 0;
  (this->CastingSkillUseTime).ArrayMax = 0;
  this->IsCastingEndSkillUseType = false;
  this->ChainMaxCount = 0;
  (this->ID_ChainSkill).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_ChainSkill).ArrayNum = 0;
  (this->ID_ChainSkill).ArrayMax = 0;
  (this->ChainSkillDelay).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChainSkillDelay).ArrayNum = 0;
  (this->ChainSkillDelay).ArrayMax = 0;
  (this->ChainSkillUseTime).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChainSkillUseTime).ArrayNum = 0;
  (this->ChainSkillUseTime).ArrayMax = 0;
  (this->ChainEndCoolTime).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChainEndCoolTime).ArrayNum = 0;
  (this->ChainEndCoolTime).ArrayMax = 0;
  (this->ChainAutoUseRate).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChainAutoUseRate).ArrayNum = 0;
  (this->ChainAutoUseRate).ArrayMax = 0;
  this->StackMaxCount = 0;
  (this->ID_NormalAttack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_NormalAttack).ArrayNum = 0;
  (this->ID_NormalAttack).ArrayMax = 0;
  this->AttackMoveCheck01 = 0.0;
  this->ID_AttackMoveSkill01 = 0;
  this->AttackMoveCheck02 = 0.0;
  this->ID_AttackMoveSkill02 = 0;
  this->AttackMoveCheck03 = 0.0;
  this->ID_AttackMoveSkill03 = 0;
  this->ConditionSkillType = None;
  this->PopupCheckTarget = None;
  this->PopupUseType = And;
  (this->PopupCheckType).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PopupCheckType).ArrayNum = 0;
  (this->PopupCheckType).ArrayMax = 0;
  (this->PopupCheckTypeValue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PopupCheckTypeValue).ArrayNum = 0;
  (this->PopupCheckTypeValue).ArrayMax = 0;
  this->ID_PopupSkill = 0;
  this->PopupSkillUseTime = 0;
  this->ID_ElsePopupSkill = 0;
  this->ElsePopupSkillUseTime = 0;
  this->IsAutoUseSkill = false;
  (this->AutoUseCheckTarget).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AutoUseCheckTarget).ArrayNum = 0;
  (this->AutoUseCheckTarget).ArrayMax = 0;
  this->AutoUseType = And;
  (this->AutoUseCheckType).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AutoUseCheckType).ArrayNum = 0;
  (this->AutoUseCheckType).ArrayMax = 0;
  (this->AutoUseCheckTypeValue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AutoUseCheckTypeValue).ArrayNum = 0;
  (this->AutoUseCheckTypeValue).ArrayMax = 0;
  (this->ID_AutoUseSkill).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_AutoUseSkill).ArrayNum = 0;
  (this->ID_AutoUseSkill).ArrayMax = 0;
  this->ID_ElseAutoUseSkill = 0;
  return this;
}

// ~FDS_SkillConditionTableRow @ 14b58e340

void __thiscall
FDS_SkillConditionTableRow::~FDS_SkillConditionTableRow(FDS_SkillConditionTableRow *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ID_AutoUseSkill).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AutoUseCheckTypeValue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AutoUseCheckType).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AutoUseCheckTarget).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PopupCheckTypeValue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PopupCheckType).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_NormalAttack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChainAutoUseRate).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChainEndCoolTime).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChainSkillUseTime).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChainSkillDelay).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_ChainSkill).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CastingSkillUseTime).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CastingTime).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_CastingSkill).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SkillConditionCost).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SkillConditionCostType).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// Get @ 14b972890

FDS_SkillConditionTableRow * __cdecl FDS_SkillConditionTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_SkillConditionTableRow *pFVar4;
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
                      (&bGEnsureHasExecuted<635517063724531729>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_SkillConditionTableRow.cpp"
                       ,0x11,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_SkillConditionTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,SkillCondition);
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
      pFVar4 = (FDS_SkillConditionTableRow *)
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
  return (FDS_SkillConditionTableRow *)0x0;
}

// GetAll @ 14b974cc0

TArray<FDS_SkillConditionTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_SkillConditionTableRow::GetAll
          (TArray<FDS_SkillConditionTableRow_const_*,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_SkillConditionTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<635517063724531758>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_SkillConditionTableRow.cpp"
                       ,0x2e,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_SkillConditionTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)()
      ;
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,SkillCondition);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_SkillConditionTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b977380

FDS_SkillConditionTableRow * __cdecl FDS_SkillConditionTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_SkillConditionTableRow *pFVar4;
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
                        (&bGEnsureHasExecuted<635517063724531729>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_SkillConditionTableRow.cpp"
                         ,0x11,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_SkillConditionTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,SkillCondition);
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
        pFVar4 = (FDS_SkillConditionTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_SkillConditionTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// ID_AttackMoveSkill01Table @ 14b978b90

FDS_SkillTableRow * __thiscall
FDS_SkillConditionTableRow::ID_AttackMoveSkill01Table(FDS_SkillConditionTableRow *this)

{
  FDS_SkillTableRow *pFVar1;
  
  pFVar1 = FDS_SkillTableRow::GetRef((longlong)this->ID_AttackMoveSkill01,true);
  return pFVar1;
}

// ID_AttackMoveSkill02Table @ 14b978bb0

FDS_SkillTableRow * __thiscall
FDS_SkillConditionTableRow::ID_AttackMoveSkill02Table(FDS_SkillConditionTableRow *this)

{
  FDS_SkillTableRow *pFVar1;
  
  pFVar1 = FDS_SkillTableRow::GetRef((longlong)this->ID_AttackMoveSkill02,true);
  return pFVar1;
}

// ID_AttackMoveSkill03Table @ 14b978bd0

FDS_SkillTableRow * __thiscall
FDS_SkillConditionTableRow::ID_AttackMoveSkill03Table(FDS_SkillConditionTableRow *this)

{
  FDS_SkillTableRow *pFVar1;
  
  pFVar1 = FDS_SkillTableRow::GetRef((longlong)this->ID_AttackMoveSkill03,true);
  return pFVar1;
}

// ID_AutoUseSkillTables @ 14b978bf0

TArray<FDS_SkillTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_SkillConditionTableRow::ID_AutoUseSkillTables
          (FDS_SkillConditionTableRow *this,
          TArray<FDS_SkillTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  undefined1 local_res10 [8];
  TArray<FDS_SkillTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  FDS_SkillTableRow::GetAll(&local_38);
  iVar4 = local_38.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar7.Data = local_38.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_38.ArrayNum != iVar4) {
        `TCheckedPointerIterator<FDS_SkillTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (FVar7.Data == pFVar1) {
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pFVar6 = (this->ID_AutoUseSkill).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar7.Data;
      pFVar2 = pFVar6 + (longlong)(this->ID_AutoUseSkill).ArrayNum * 4;
      if (pFVar6 != pFVar2) break;
LAB_14b978caf:
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
        goto LAB_14b978caf;
      }
      pFVar6 = pFVar6 + 4;
    } while (pFVar6 != pFVar2);
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// ID_CastingSkillTables @ 14b978e70

TArray<FDS_SkillTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_SkillConditionTableRow::ID_CastingSkillTables
          (FDS_SkillConditionTableRow *this,
          TArray<FDS_SkillTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  undefined1 local_res10 [8];
  TArray<FDS_SkillTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  FDS_SkillTableRow::GetAll(&local_38);
  iVar4 = local_38.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar7.Data = local_38.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_38.ArrayNum != iVar4) {
        `TCheckedPointerIterator<FDS_SkillTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (FVar7.Data == pFVar1) {
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pFVar6 = (this->ID_CastingSkill).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar7.Data;
      pFVar2 = pFVar6 + (longlong)(this->ID_CastingSkill).ArrayNum * 4;
      if (pFVar6 != pFVar2) break;
LAB_14b978f2c:
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
        goto LAB_14b978f2c;
      }
      pFVar6 = pFVar6 + 4;
    } while (pFVar6 != pFVar2);
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// ID_ChainSkillTables @ 14b978f70

TArray<FDS_SkillTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_SkillConditionTableRow::ID_ChainSkillTables
          (FDS_SkillConditionTableRow *this,
          TArray<FDS_SkillTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  undefined1 local_res10 [8];
  TArray<FDS_SkillTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  FDS_SkillTableRow::GetAll(&local_38);
  iVar4 = local_38.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar7.Data = local_38.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_38.ArrayNum != iVar4) {
        `TCheckedPointerIterator<FDS_SkillTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (FVar7.Data == pFVar1) {
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pFVar6 = (this->ID_ChainSkill).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar7.Data;
      pFVar2 = pFVar6 + (longlong)(this->ID_ChainSkill).ArrayNum * 4;
      if (pFVar6 != pFVar2) break;
LAB_14b97902f:
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
        goto LAB_14b97902f;
      }
      pFVar6 = pFVar6 + 4;
    } while (pFVar6 != pFVar2);
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// ID_NormalAttackTables @ 14b979800

TArray<FDS_SkillTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_SkillConditionTableRow::ID_NormalAttackTables
          (FDS_SkillConditionTableRow *this,
          TArray<FDS_SkillTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  undefined1 local_res10 [8];
  TArray<FDS_SkillTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  FDS_SkillTableRow::GetAll(&local_38);
  iVar4 = local_38.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar7.Data = local_38.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_38.ArrayNum != iVar4) {
        `TCheckedPointerIterator<FDS_SkillTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (FVar7.Data == pFVar1) {
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pFVar6 = (this->ID_NormalAttack).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar7.Data;
      pFVar2 = pFVar6 + (longlong)(this->ID_NormalAttack).ArrayNum * 4;
      if (pFVar6 != pFVar2) break;
LAB_14b9798bf:
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
        goto LAB_14b9798bf;
      }
      pFVar6 = pFVar6 + 4;
    } while (pFVar6 != pFVar2);
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// ID_ToggleEndEffectTable @ 14b97abb0

FDS_ResourceEffectTableRow * __thiscall
FDS_SkillConditionTableRow::ID_ToggleEndEffectTable(FDS_SkillConditionTableRow *this)

{
  FDS_ResourceEffectTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceEffectTableRow::GetRef((longlong)this->ID_ToggleEndEffect,true);
  return pFVar1;
}

// ID_ToggleHitEffectTable @ 14b97abd0

FDS_ResourceEffectTableRow * __thiscall
FDS_SkillConditionTableRow::ID_ToggleHitEffectTable(FDS_SkillConditionTableRow *this)

{
  FDS_ResourceEffectTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceEffectTableRow::GetRef((longlong)this->ID_ToggleHitEffect,true);
  return pFVar1;
}

// ID_ToggleLoopEffectTable @ 14b97abf0

FDS_ResourceEffectTableRow * __thiscall
FDS_SkillConditionTableRow::ID_ToggleLoopEffectTable(FDS_SkillConditionTableRow *this)

{
  FDS_ResourceEffectTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceEffectTableRow::GetRef((longlong)this->ID_ToggleLoopEffect,true);
  return pFVar1;
}

// IsValid @ 14b97b0f0

bool __thiscall FDS_SkillConditionTableRow::IsValid(FDS_SkillConditionTableRow *this)

{
  return this != &DefaultObject;
}

