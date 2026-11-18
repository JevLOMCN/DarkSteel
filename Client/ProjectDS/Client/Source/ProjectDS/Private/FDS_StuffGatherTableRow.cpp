// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticStruct @ 14b5a4990

UScriptStruct * __cdecl FDS_StuffGatherTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_StuffGatherTableRow.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_StuffGatherTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_StuffGatherTableRow,(UObject *)pUVar1,
                         L"DS_StuffGatherTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_StuffGatherTableRow.OuterSingleton;
}

// ~FDS_StuffGatherTableRow @ 14b5a9790

void __thiscall FDS_StuffGatherTableRow::~FDS_StuffGatherTableRow(FDS_StuffGatherTableRow *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PlayerSkillGrade).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PlayerSkillLevel).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PlayerSkillType).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CostItemValue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_CostItem).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// Get @ 14b983480

FDS_StuffGatherTableRow * __cdecl FDS_StuffGatherTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_StuffGatherTableRow *pFVar4;
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
                      (&bGEnsureHasExecuted<3569074272007618578>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_StuffGatherTableRow.cpp"
                       ,0x12,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_StuffGatherTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,StuffGather);
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
      pFVar4 = (FDS_StuffGatherTableRow *)
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
  return (FDS_StuffGatherTableRow *)0x0;
}

// GetAll @ 14b9860b0

TArray<FDS_StuffGatherTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_StuffGatherTableRow::GetAll
          (TArray<FDS_StuffGatherTableRow_const_*,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_StuffGatherTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<3569074272007618607>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_StuffGatherTableRow.cpp"
                       ,0x2f,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_StuffGatherTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,StuffGather);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_StuffGatherTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b988ab0

FDS_StuffGatherTableRow * __cdecl FDS_StuffGatherTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_StuffGatherTableRow *pFVar4;
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
                        (&bGEnsureHasExecuted<3569074272007618578>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_StuffGatherTableRow.cpp"
                         ,0x12,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_StuffGatherTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,StuffGather);
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
        pFVar4 = (FDS_StuffGatherTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_StuffGatherTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// ID_CastingMessageTable @ 14b98ac40

FDS_StringUiTableRow * __thiscall
FDS_StuffGatherTableRow::ID_CastingMessageTable(FDS_StuffGatherTableRow *this)

{
  FDS_StringUiTableRow *pFVar1;
  
  pFVar1 = FDS_StringUiTableRow::GetRef((this->ID_CastingMessage).ID,true);
  return pFVar1;
}

// ID_CostItemTables @ 14b98ac80

TArray<FDS_ItemBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_StuffGatherTableRow::ID_CostItemTables
          (FDS_StuffGatherTableRow *this,
          TArray<FDS_ItemBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  undefined1 local_res10 [8];
  TArray<FDS_ItemBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  FDS_ItemBaseTableRow::GetAll(&local_38);
  iVar4 = local_38.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar7.Data = local_38.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_38.ArrayNum != iVar4) {
        `TCheckedPointerIterator<FDS_ItemBaseTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      if (FVar7.Data == pFVar1) {
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pFVar6 = (this->ID_CostItem).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar7.Data;
      pFVar2 = pFVar6 + (longlong)(this->ID_CostItem).ArrayNum * 4;
      if (pFVar6 != pFVar2) break;
LAB_14b98ad3c:
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
        goto LAB_14b98ad3c;
      }
      pFVar6 = pFVar6 + 4;
    } while (pFVar6 != pFVar2);
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// ID_DropGroupTables @ 14b98ada0

TArray<FDS_DropBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_StuffGatherTableRow::ID_DropGroupTables
          (FDS_StuffGatherTableRow *this,
          TArray<FDS_DropBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  ForAnyElementType FVar5;
  undefined1 local_res10 [8];
  TArray<FDS_DropBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  FDS_DropBaseTableRow::GetAll(&local_38);
  iVar3 = local_38.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar5.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FDS_DropBaseTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (FVar5.Data == pFVar1) break;
    lVar2 = *(longlong *)FVar5.Data;
    if (this->ID_DropGroup == *(int *)(lVar2 + 0x10)) {
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

// IsValid @ 14b98c930

bool __thiscall FDS_StuffGatherTableRow::IsValid(FDS_StuffGatherTableRow *this)

{
  return this != &DefaultObject;
}

// GetByEntityID @ 14b9ad6c0

FDS_StuffGatherTableRow * __cdecl FDS_StuffGatherTableRow::GetByEntityID(ulong64 *param_1)

{
  bool bVar1;
  int iVar2;
  UDS_DataBase *this;
  FDS_StuffBaseTableRow *pFVar3;
  FDS_StuffGatherTableRow *pFVar4;
  FWeakObjectPtr local_res10 [3];
  
  UDS_StuffGatherData::GetData((ulong64)local_res10);
  bVar1 = TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr> *)local_res10,(void *)0x0);
  if (!bVar1) {
    this = (UDS_DataBase *)FWeakObjectPtr::Get(local_res10);
    iVar2 = UDS_DataBase::GetEntityTableID(this);
    pFVar3 = FDS_StuffBaseTableRow::Get((longlong)iVar2,true);
    if ((pFVar3 != (FDS_StuffBaseTableRow *)0x0) && (pFVar3->StuffType == StuffGather)) {
      pFVar4 = Get((longlong)pFVar3->ID_StuffValue,true);
      return pFVar4;
    }
  }
  return (FDS_StuffGatherTableRow *)0x0;
}

// GetByEntityTableID @ 14b9ad730

FDS_StuffGatherTableRow * __cdecl FDS_StuffGatherTableRow::GetByEntityTableID(int *param_1)

{
  FDS_StuffBaseTableRow *pFVar1;
  FDS_StuffGatherTableRow *pFVar2;
  
  pFVar1 = FDS_StuffBaseTableRow::Get((longlong)*param_1,true);
  if ((pFVar1 != (FDS_StuffBaseTableRow *)0x0) && (pFVar1->StuffType == StuffGather)) {
    pFVar2 = Get((longlong)pFVar1->ID_StuffValue,true);
    return pFVar2;
  }
  return (FDS_StuffGatherTableRow *)0x0;
}

// GetRefWithEntityID @ 14b9b31d0

FDS_StuffGatherTableRow * __cdecl FDS_StuffGatherTableRow::GetRefWithEntityID(ulong64 param_1)

{
  bool bVar1;
  int iVar2;
  UDS_DataBase *this;
  FDS_StuffBaseTableRow *pFVar3;
  FDS_StuffGatherTableRow *pFVar4;
  FWeakObjectPtr local_res10 [3];
  
  UDS_StuffGatherData::GetData((ulong64)local_res10);
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    this = (UDS_DataBase *)FWeakObjectPtr::Get(local_res10);
    iVar2 = UDS_DataBase::GetEntityTableID(this);
    pFVar3 = FDS_StuffBaseTableRow::GetRef((longlong)iVar2,true);
    if (pFVar3->StuffType == StuffGather) {
      pFVar4 = GetRef((longlong)pFVar3->ID_StuffValue,true);
      return pFVar4;
    }
  }
  return &DefaultObject;
}

// HasPlayerSkill @ 14b9b48d0

bool __thiscall FDS_StuffGatherTableRow::HasPlayerSkill(FDS_StuffGatherTableRow *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  
  lVar6 = (longlong)(this->PlayerSkillType).ArrayNum;
  uVar7 = 0;
  if (0 < lVar6) {
    lVar5 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->PlayerSkillType).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if ((uint)(byte)(this->PlayerSkillType).AllocatorInstance.Data[lVar5] == param_1) {
        return true;
      }
      uVar7 = uVar7 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < lVar6);
  }
  return false;
}

