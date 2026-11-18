// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// StaticStruct @ 14b55f2b0

UScriptStruct * __cdecl FDS_PlayerSkillNeedItemTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_PlayerSkillNeedItemTableRow.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_PlayerSkillNeedItemTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_PlayerSkillNeedItemTableRow,(UObject *)pUVar1
                         ,L"DS_PlayerSkillNeedItemTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_PlayerSkillNeedItemTableRow.OuterSingleton;
}

// FDS_PlayerSkillNeedItemTableRow @ 14b563b00

FDS_PlayerSkillNeedItemTableRow * __thiscall
FDS_PlayerSkillNeedItemTableRow::FDS_PlayerSkillNeedItemTableRow
          (FDS_PlayerSkillNeedItemTableRow *this)

{
  this->_padding_ = (longlong)&___7FDS_PlayerSkillNeedItemTableRow__6B_;
  this->ID = 0;
  this->DataStage = 0;
  ::FString::FString(&this->Version,L"");
  (this->PlayerSkillGrade).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlayerSkillGrade).ArrayNum = 0;
  (this->PlayerSkillGrade).ArrayMax = 0;
  (this->ReqTicketType).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReqTicketType).ArrayNum = 0;
  (this->ReqTicketType).ArrayMax = 0;
  (this->ReqTicketCnt).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReqTicketCnt).ArrayNum = 0;
  (this->ReqTicketCnt).ArrayMax = 0;
  (this->ID_ReqItem).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_ReqItem).ArrayNum = 0;
  (this->ID_ReqItem).ArrayMax = 0;
  (this->ReqItemCnt).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReqItemCnt).ArrayNum = 0;
  (this->ReqItemCnt).ArrayMax = 0;
  return this;
}

// ~FDS_PlayerSkillNeedItemTableRow @ 14b564d60

void __thiscall
FDS_PlayerSkillNeedItemTableRow::~FDS_PlayerSkillNeedItemTableRow
          (FDS_PlayerSkillNeedItemTableRow *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ReqItemCnt).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_ReqItem).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ReqTicketCnt).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ReqTicketType).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PlayerSkillGrade).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Version).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// Get @ 14b960a70

FDS_PlayerSkillNeedItemTableRow * __cdecl
FDS_PlayerSkillNeedItemTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_PlayerSkillNeedItemTableRow *pFVar4;
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
                      (&bGEnsureHasExecuted<2170988011146182672>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_PlayerSkillNeedItemTableRow.cpp"
                       ,0x10,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_PlayerSkillNeedItemTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,PlayerSkillNeedItem);
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
      pFVar4 = (FDS_PlayerSkillNeedItemTableRow *)
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
  return (FDS_PlayerSkillNeedItemTableRow *)0x0;
}

// GetAll @ 14b963760

TArray<FDS_PlayerSkillNeedItemTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_PlayerSkillNeedItemTableRow::GetAll
          (TArray<FDS_PlayerSkillNeedItemTableRow_const_*,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_PlayerSkillNeedItemTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<2170988011146182701>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_PlayerSkillNeedItemTableRow.cpp"
                       ,0x2d,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_PlayerSkillNeedItemTableRow_const_*,TSizedDefaultAllocator<32>_> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,PlayerSkillNeedItem);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_PlayerSkillNeedItemTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b966060

FDS_PlayerSkillNeedItemTableRow * __cdecl
FDS_PlayerSkillNeedItemTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_PlayerSkillNeedItemTableRow *pFVar4;
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
                        (&bGEnsureHasExecuted<2170988011146182672>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_PlayerSkillNeedItemTableRow.cpp"
                         ,0x10,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_PlayerSkillNeedItemTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,PlayerSkillNeedItem);
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
        pFVar4 = (FDS_PlayerSkillNeedItemTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_PlayerSkillNeedItemTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// ID_ReqItemTables @ 14b969fb0

TArray<FDS_ItemBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_PlayerSkillNeedItemTableRow::ID_ReqItemTables
          (FDS_PlayerSkillNeedItemTableRow *this,
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
      pFVar6 = (this->ID_ReqItem).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar7.Data;
      pFVar2 = pFVar6 + (longlong)(this->ID_ReqItem).ArrayNum * 4;
      if (pFVar6 != pFVar2) break;
LAB_14b96a06c:
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
        goto LAB_14b96a06c;
      }
      pFVar6 = pFVar6 + 4;
    } while (pFVar6 != pFVar2);
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// IsValid @ 14b96a8b0

bool __thiscall FDS_PlayerSkillNeedItemTableRow::IsValid(FDS_PlayerSkillNeedItemTableRow *this)

{
  return this != &DefaultObject;
}

// GetRefByInteractionData @ 14b9b29d0

FDS_PlayerSkillNeedItemTableRow * __cdecl
FDS_PlayerSkillNeedItemTableRow::GetRefByInteractionData
          (EDS_PlayerSkillType param_1,long64 param_2,int param_3)

{
  bool bVar1;
  UObject *pUVar2;
  FDS_PlayerSkillNeedItemTableRow *pFVar3;
  FWeakObjectPtr local_res20;
  
  UDS_InteractionData::GetData((ulong64)&local_res20,param_2,SUB41(param_3,0));
  bVar1 = FWeakObjectPtr::IsValid(&local_res20);
  if (!bVar1) {
    return &DefaultObject;
  }
  pUVar2 = FWeakObjectPtr::Get(&local_res20);
  pFVar3 = GetRef((ulonglong)param_1 * 1000 + (longlong)*(int *)&pUVar2[3].field_0x4,false);
  return pFVar3;
}

// GetRefByNpcLingData @ 14b9b2d90

FDS_PlayerSkillNeedItemTableRow * __cdecl
FDS_PlayerSkillNeedItemTableRow::GetRefByNpcLingData(long64 param_1)

{
  bool bVar1;
  int iVar2;
  UDS_NPCLingData *this;
  FDS_PlayerSkillNeedItemTableRow *pFVar3;
  FWeakObjectPtr local_res10 [3];
  
  UDS_NPCLingData::GetData((ulong64)local_res10);
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (!bVar1) {
    return &DefaultObject;
  }
  this = (UDS_NPCLingData *)FWeakObjectPtr::Get(local_res10);
  iVar2 = UDS_NPCLingData::GetPlayerSkillLevel(this);
  pFVar3 = GetRef((longlong)iVar2 + 6000,false);
  return pFVar3;
}

// GetRefByStuffGatherData @ 14b9b2df0

FDS_PlayerSkillNeedItemTableRow * __cdecl
FDS_PlayerSkillNeedItemTableRow::GetRefByStuffGatherData(long64 param_1,EDS_PlayerSkillType param_2)

{
  bool bVar1;
  int iVar2;
  UDS_StuffGatherData *this;
  FDS_PlayerSkillNeedItemTableRow *pFVar3;
  EDS_PlayerSkillType local_res10 [8];
  FWeakObjectPtr local_res18 [2];
  
  local_res10[0] = param_2;
  UDS_StuffGatherData::GetData((ulong64)local_res18);
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if (!bVar1) {
    return &DefaultObject;
  }
  this = (UDS_StuffGatherData *)FWeakObjectPtr::Get(local_res18);
  iVar2 = UDS_StuffGatherData::GetPlayerSkillLevel(this,local_res10);
  pFVar3 = GetRef((ulonglong)local_res10[0] * 1000 + (longlong)iVar2,false);
  return pFVar3;
}

// GetRefByTypeAndLevel @ 14b9b2f70

FDS_PlayerSkillNeedItemTableRow * __cdecl
FDS_PlayerSkillNeedItemTableRow::GetRefByTypeAndLevel(EDS_PlayerSkillType param_1,int param_2)

{
  FDS_PlayerSkillNeedItemTableRow *pFVar1;
  
  pFVar1 = GetRef((ulonglong)param_1 * 1000 + (longlong)param_2,false);
  return pFVar1;
}

// GetReqItemCount @ 14b9b3240

int __cdecl
FDS_PlayerSkillNeedItemTableRow::GetReqItemCount
          (EDS_PlayerSkillType param_1,int param_2,EDS_GradeType param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FDS_PlayerSkillNeedItemTableRow *this;
  uint uVar5;
  longlong lVar6;
  
  this = GetRef((ulonglong)param_1 * 1000 + (longlong)param_2,false);
  bVar2 = IsValid(this);
  if ((bVar2) && (uVar5 = 0, 0 < (this->PlayerSkillGrade).ArrayNum)) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->PlayerSkillGrade).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if ((((this->PlayerSkillGrade).AllocatorInstance.Data[lVar6] ==
            (FScriptContainerElement)param_3) && (-1 < (int)uVar5)) &&
         ((int)uVar5 < (this->ReqItemCnt).ArrayNum)) {
        uVar3 = 0;
        if ((int)uVar5 < (this->ReqItemCnt).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
        return *(int *)((this->ReqItemCnt).AllocatorInstance.Data + (longlong)(int)uVar5 * 4);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 1;
    } while ((int)uVar5 < (this->PlayerSkillGrade).ArrayNum);
  }
  return 0;
}

// GetReqItemTID @ 14b9b3370

int __cdecl
FDS_PlayerSkillNeedItemTableRow::GetReqItemTID
          (EDS_PlayerSkillType param_1,int param_2,EDS_GradeType param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FDS_PlayerSkillNeedItemTableRow *this;
  uint uVar5;
  longlong lVar6;
  
  this = GetRef((ulonglong)param_1 * 1000 + (longlong)param_2,false);
  bVar2 = IsValid(this);
  if ((bVar2) && (uVar5 = 0, 0 < (this->PlayerSkillGrade).ArrayNum)) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->PlayerSkillGrade).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if ((((this->PlayerSkillGrade).AllocatorInstance.Data[lVar6] ==
            (FScriptContainerElement)param_3) && (-1 < (int)uVar5)) &&
         ((int)uVar5 < (this->ID_ReqItem).ArrayNum)) {
        uVar3 = 0;
        if ((int)uVar5 < (this->ID_ReqItem).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
        return *(int *)((this->ID_ReqItem).AllocatorInstance.Data + (longlong)(int)uVar5 * 4);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 1;
    } while ((int)uVar5 < (this->PlayerSkillGrade).ArrayNum);
  }
  return 0;
}

// GetReqTicketCount @ 14b9b34a0

int __cdecl
FDS_PlayerSkillNeedItemTableRow::GetReqTicketCount
          (EDS_PlayerSkillType param_1,int param_2,EDS_GradeType param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FDS_PlayerSkillNeedItemTableRow *this;
  uint uVar5;
  longlong lVar6;
  
  this = GetRef((ulonglong)param_1 * 1000 + (longlong)param_2,false);
  bVar2 = IsValid(this);
  if ((bVar2) && (uVar5 = 0, 0 < (this->PlayerSkillGrade).ArrayNum)) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->PlayerSkillGrade).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if ((((this->PlayerSkillGrade).AllocatorInstance.Data[lVar6] ==
            (FScriptContainerElement)param_3) && (-1 < (int)uVar5)) &&
         ((int)uVar5 < (this->ReqTicketCnt).ArrayNum)) {
        uVar3 = 0;
        if ((int)uVar5 < (this->ReqTicketCnt).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
        return *(int *)((this->ReqTicketCnt).AllocatorInstance.Data + (longlong)(int)uVar5 * 4);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 1;
    } while ((int)uVar5 < (this->PlayerSkillGrade).ArrayNum);
  }
  return 0;
}

// GetReqTicketType @ 14b9b35d0

EDS_TicketType __cdecl
FDS_PlayerSkillNeedItemTableRow::GetReqTicketType
          (EDS_PlayerSkillType param_1,int param_2,EDS_GradeType param_3)

{
  code *pcVar1;
  bool bVar2;
  EDS_TicketType EVar3;
  uint uVar4;
  FDS_PlayerSkillNeedItemTableRow *this;
  uint uVar5;
  longlong lVar6;
  
  this = GetRef((ulonglong)param_1 * 1000 + (longlong)param_2,false);
  bVar2 = IsValid(this);
  if ((bVar2) && (uVar5 = 0, 0 < (this->PlayerSkillGrade).ArrayNum)) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->PlayerSkillGrade).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        EVar3 = (*pcVar1)();
        return EVar3;
      }
      if ((((this->PlayerSkillGrade).AllocatorInstance.Data[lVar6] ==
            (FScriptContainerElement)param_3) && (-1 < (int)uVar5)) &&
         ((int)uVar5 < (this->ReqTicketType).ArrayNum)) {
        uVar4 = 0;
        if ((int)uVar5 < (this->ReqTicketType).ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          EVar3 = (*pcVar1)();
          return EVar3;
        }
        return (EDS_TicketType)(this->ReqTicketType).AllocatorInstance.Data[(int)uVar5];
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 1;
    } while ((int)uVar5 < (this->PlayerSkillGrade).ArrayNum);
  }
  return None;
}

