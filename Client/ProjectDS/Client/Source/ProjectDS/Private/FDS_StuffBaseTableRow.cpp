// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 20

// StaticStruct @ 14b5a69e0

UScriptStruct * __cdecl FDS_StuffBaseTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_StuffBaseTableRow.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_StuffBaseTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_StuffBaseTableRow,(UObject *)pUVar1,
                         L"DS_StuffBaseTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_StuffBaseTableRow.OuterSingleton;
}

// FDS_StuffBaseTableRow @ 14b5a8fa0

FDS_StuffBaseTableRow * __thiscall
FDS_StuffBaseTableRow::FDS_StuffBaseTableRow(FDS_StuffBaseTableRow *this)

{
  this->_padding_ = (longlong)&___7FDS_StuffBaseTableRow__6B_;
  this->ID = 0;
  this->DataStage = 0;
  ::FString::FString(&this->Version,L"");
  this->StuffType = None;
  this->ID_StuffValue = 0;
  this->ID_GradeType = None;
  (this->ID_Name)._padding_ = (longlong)&___7FDS_StringWorldID__6B_;
  (this->ID_Name).ID = 0;
  (this->ID_Trigger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_Trigger).ArrayNum = 0;
  (this->ID_Trigger).ArrayMax = 0;
  this->ID_FunctionIcon = 0;
  this->ID_ResourcePreset = 0;
  this->ID_BpLink = 0;
  this->StuffScale = 0.0;
  this->ID_Effect = 0;
  this->InteractionRange = 0.0;
  this->InteractionTime = 0.0;
  (this->ID_InteractionPrompt)._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  (this->ID_InteractionPrompt).ID = 0;
  (this->ID_InteractionDesc)._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  (this->ID_InteractionDesc).ID = 0;
  this->IsCancelToDamage = false;
  this->EntitySpawnRange = None;
  this->IsCountIndication = false;
  (this->ID_GimmickEvent).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_GimmickEvent).ArrayNum = 0;
  (this->ID_GimmickEvent).ArrayMax = 0;
  this->TicketType = None;
  this->TicketCost = 0;
  this->ID_ConditionItem = 0;
  this->SpawnHideType = None;
  this->ShowConditionType = None;
  this->ShowConditionValue1 = 0;
  this->ShowConditionValue2 = 0;
  this->RoleType = None;
  (this->ID_SelectPromptName)._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  (this->ID_SelectPromptName).ID = 0;
  (this->ID_Interaction).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_Interaction).ArrayNum = 0;
  (this->ID_Interaction).ArrayMax = 0;
  return this;
}

// Get @ 14b983360

FDS_StuffBaseTableRow * __cdecl FDS_StuffBaseTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_StuffBaseTableRow *pFVar4;
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
                      (&bGEnsureHasExecuted<6466662894418264090>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_StuffBaseTableRow.cpp"
                       ,0x1a,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_StuffBaseTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,StuffBase);
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
      pFVar4 = (FDS_StuffBaseTableRow *)
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
  return (FDS_StuffBaseTableRow *)0x0;
}

// GetAll @ 14b985fe0

TArray<FDS_StuffBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_StuffBaseTableRow::GetAll
          (TArray<FDS_StuffBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__
          )

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_StuffBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<6466662894418264119>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_StuffBaseTableRow.cpp"
                       ,0x37,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_StuffBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,StuffBase);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_StuffBaseTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b988980

FDS_StuffBaseTableRow * __cdecl FDS_StuffBaseTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_StuffBaseTableRow *pFVar4;
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
                        (&bGEnsureHasExecuted<6466662894418264090>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_StuffBaseTableRow.cpp"
                         ,0x1a,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_StuffBaseTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,StuffBase);
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
        pFVar4 = (FDS_StuffBaseTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_StuffBaseTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// ID_BpLinkTable @ 14b98aae0

FDS_ResourceEtcTableRow * __thiscall
FDS_StuffBaseTableRow::ID_BpLinkTable(FDS_StuffBaseTableRow *this)

{
  FDS_ResourceEtcTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceEtcTableRow::GetRef((longlong)this->ID_BpLink,true);
  return pFVar1;
}

// ID_EffectTable @ 14b98ae80

FDS_ResourceEffectTableRow * __thiscall
FDS_StuffBaseTableRow::ID_EffectTable(FDS_StuffBaseTableRow *this)

{
  FDS_ResourceEffectTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceEffectTableRow::GetRef((longlong)this->ID_Effect,true);
  return pFVar1;
}

// ID_FunctionIconTable @ 14b98aec0

FDS_ResourceIconTableRow * __thiscall
FDS_StuffBaseTableRow::ID_FunctionIconTable(FDS_StuffBaseTableRow *this)

{
  FDS_ResourceIconTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceIconTableRow::GetRef((longlong)this->ID_FunctionIcon,true);
  return pFVar1;
}

// ID_GimmickEventTables @ 14b98aee0

TArray<FDS_NpcGimmickEventTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_StuffBaseTableRow::ID_GimmickEventTables
          (FDS_StuffBaseTableRow *this,
          TArray<FDS_NpcGimmickEventTableRow_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  undefined1 local_res10 [8];
  TArray<FDS_NpcGimmickEventTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  FDS_NpcGimmickEventTableRow::GetAll(&local_38);
  iVar4 = local_38.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar7.Data = local_38.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_38.ArrayNum != iVar4) {
        `TCheckedPointerIterator<FDS_NpcGimmickEventTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (FVar7.Data == pFVar1) {
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pFVar6 = (this->ID_GimmickEvent).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar7.Data;
      pFVar2 = pFVar6 + (longlong)(this->ID_GimmickEvent).ArrayNum * 4;
      if (pFVar6 != pFVar2) break;
LAB_14b98af9f:
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
        goto LAB_14b98af9f;
      }
      pFVar6 = pFVar6 + 4;
    } while (pFVar6 != pFVar2);
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// ID_GradeTypeTable @ 14b98aff0

FDS_CommonGradeTableRow * __thiscall
FDS_StuffBaseTableRow::ID_GradeTypeTable(FDS_StuffBaseTableRow *this)

{
  FDS_CommonGradeTableRow *pFVar1;
  
  pFVar1 = FDS_CommonGradeTableRow::GetRef((ulonglong)this->ID_GradeType,true);
  return pFVar1;
}

// ID_InteractionDescTable @ 14b98b070

FDS_StringBaseTableRow * __thiscall
FDS_StuffBaseTableRow::ID_InteractionDescTable(FDS_StuffBaseTableRow *this)

{
  FDS_StringBaseTableRow *pFVar1;
  
  pFVar1 = FDS_StringBaseTableRow::GetRef((this->ID_InteractionDesc).ID,true);
  return pFVar1;
}

// ID_InteractionPromptTable @ 14b98b090

FDS_StringBaseTableRow * __thiscall
FDS_StuffBaseTableRow::ID_InteractionPromptTable(FDS_StuffBaseTableRow *this)

{
  FDS_StringBaseTableRow *pFVar1;
  
  pFVar1 = FDS_StringBaseTableRow::GetRef((this->ID_InteractionPrompt).ID,true);
  return pFVar1;
}

// ID_InteractionTables @ 14b98b0b0

TArray<FDS_InteractionTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_StuffBaseTableRow::ID_InteractionTables
          (FDS_StuffBaseTableRow *this,
          TArray<FDS_InteractionTableRow_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  undefined1 local_res10 [8];
  TArray<FDS_InteractionTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  FDS_InteractionTableRow::GetAll(&local_38);
  iVar4 = local_38.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar7.Data = local_38.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_38.ArrayNum != iVar4) {
        `TCheckedPointerIterator<FDS_InteractionTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (FVar7.Data == pFVar1) {
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pFVar6 = (this->ID_Interaction).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar7.Data;
      pFVar2 = pFVar6 + (longlong)(this->ID_Interaction).ArrayNum * 4;
      if (pFVar6 != pFVar2) break;
LAB_14b98b16f:
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
        goto LAB_14b98b16f;
      }
      pFVar6 = pFVar6 + 4;
    } while (pFVar6 != pFVar2);
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// ID_NameTable @ 14b98b400

FDS_StringWorldTableRow * __thiscall
FDS_StuffBaseTableRow::ID_NameTable(FDS_StuffBaseTableRow *this)

{
  longlong lVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  UDS_TableManager *this_00;
  FDS_StringWorldTableRow *pFVar5;
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
  
  lVar1 = (this->ID_Name).ID;
  if (lVar1 == 0) {
    return &FDS_StringWorldTableRow::DefaultObject;
  }
  this_00 = UDS_TableManager::GetInst();
  if (this_00 == (UDS_TableManager *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7261282129655365617>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_StringWorldTableRow.cpp"
                       ,0xf,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FDS_StringWorldTableRow *)(*pcVar3)();
      return pFVar5;
    }
  }
  else {
    this_01 = UDS_TableManager::GetDataTable(this_00,StringWorld);
    if (this_01 != (UDataTable *)0x0) {
      local_res8 = (FName)this_01->_padding_;
      ::FName::ToString(&local_res8,&local_28);
      pFVar6 = DS_Util::FromInt64(&local_18,lVar1);
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
      pUVar8 = FDS_StringWorldTableRow::StaticStruct();
      pFVar5 = (FDS_StringWorldTableRow *)
               UDataTable::FindRowInternal(this_01,pUVar8,FVar2,(wchar_t *)FVar10.Data,true);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (pFVar5 != (FDS_StringWorldTableRow *)0x0) {
        return pFVar5;
      }
    }
  }
  return &FDS_StringWorldTableRow::DefaultObject;
}

// ID_ResourcePresetTable @ 14b98b7e0

FDS_ResourcePresetTableRow * __thiscall
FDS_StuffBaseTableRow::ID_ResourcePresetTable(FDS_StuffBaseTableRow *this)

{
  FDS_ResourcePresetTableRow *pFVar1;
  
  pFVar1 = FDS_ResourcePresetTableRow::GetRef((longlong)this->ID_ResourcePreset,true);
  return pFVar1;
}

// ID_SelectPromptNameTable @ 14b98b940

FDS_StringBaseTableRow * __thiscall
FDS_StuffBaseTableRow::ID_SelectPromptNameTable(FDS_StuffBaseTableRow *this)

{
  FDS_StringBaseTableRow *pFVar1;
  
  pFVar1 = FDS_StringBaseTableRow::GetRef((this->ID_SelectPromptName).ID,true);
  return pFVar1;
}

// ID_TriggerTables @ 14b98c3d0

TArray<FDS_TriggerBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_StuffBaseTableRow::ID_TriggerTables
          (FDS_StuffBaseTableRow *this,
          TArray<FDS_TriggerBaseTableRow_const_*,TSizedDefaultAllocator<32>_>
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
  TArray<FDS_TriggerBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar8;
  UDataTable *this_01;
  FScriptContainerElement *pFVar9;
  ForAnyElementType FVar10;
  undefined1 local_res10 [8];
  FName local_res18;
  TArray<FDS_TriggerBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  this_00 = UDS_TableManager::GetInst();
  if (this_00 == (UDS_TableManager *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4020292592548708308>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_TriggerBaseTableRow.cpp"
                       ,0x2c,"false");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TArray<FDS_TriggerBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar8;
    }
  }
  else {
    this_01 = UDS_TableManager::GetDataTable(this_00,TriggerBase);
    if (this_01 != (UDataTable *)0x0) {
      local_res18 = (FName)this_01->_padding_;
      ::FName::ToString(&local_res18,&local_38);
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar10.Data = local_38.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_TriggerBaseTableRow_const_>
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
        `TCheckedPointerIterator<FDS_TriggerBaseTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (FVar10.Data == pFVar1) {
        if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pFVar9 = (this->ID_Trigger).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar10.Data;
      pFVar2 = pFVar9 + (longlong)(this->ID_Trigger).ArrayNum * 4;
      if (pFVar9 != pFVar2) break;
LAB_14b98c511:
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
        goto LAB_14b98c511;
      }
      pFVar9 = pFVar9 + 4;
    } while (pFVar9 != pFVar2);
    FVar10.Data = FVar10.Data + 8;
  } while( true );
}

// IsValid @ 14b98c910

bool __thiscall FDS_StuffBaseTableRow::IsValid(FDS_StuffBaseTableRow *this)

{
  return this != &DefaultObject;
}

// RoleTypeTable @ 14b98cda0

FDS_NpcRoleTypeTableRow * __thiscall
FDS_StuffBaseTableRow::RoleTypeTable(FDS_StuffBaseTableRow *this)

{
  FDS_NpcRoleTypeTableRow *pFVar1;
  
  pFVar1 = FDS_NpcRoleTypeTableRow::GetRef((ulonglong)this->RoleType,true);
  return pFVar1;
}

// GetRefWithEntityID @ 14b9b3170

FDS_StuffBaseTableRow * __cdecl FDS_StuffBaseTableRow::GetRefWithEntityID(ulong64 param_1)

{
  bool bVar1;
  int iVar2;
  UDS_DataBase *this;
  FDS_StuffBaseTableRow *pFVar3;
  FWeakObjectPtr local_res10 [3];
  
  UDS_StuffData::GetData((ulong64)local_res10,param_1,false);
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (!bVar1) {
    return &DefaultObject;
  }
  this = (UDS_DataBase *)FWeakObjectPtr::Get(local_res10);
  iVar2 = UDS_DataBase::GetEntityTableID(this);
  pFVar3 = GetRef((longlong)iVar2,true);
  return pFVar3;
}

