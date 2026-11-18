// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticStruct @ 14b427aa0

UScriptStruct * __cdecl FDS_BubbleTalkBaseTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_BubbleTalkBaseTableRow.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_BubbleTalkBaseTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_BubbleTalkBaseTableRow,(UObject *)pUVar1,
                         L"DS_BubbleTalkBaseTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_BubbleTalkBaseTableRow.OuterSingleton;
}

// FDS_BubbleTalkBaseTableRow @ 14b42a970

FDS_BubbleTalkBaseTableRow * __thiscall
FDS_BubbleTalkBaseTableRow::FDS_BubbleTalkBaseTableRow(FDS_BubbleTalkBaseTableRow *this)

{
  this->_padding_ = (longlong)&___7FDS_BubbleTalkBaseTableRow__6B_;
  this->ID = 0;
  this->DataStage = 0;
  ::FString::FString(&this->Version,L"");
  this->BubbleTalkGroupID = 0;
  this->BubbleTalkGroupCooltime = 0.0;
  (this->BubbleTalkConditionType).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BubbleTalkConditionType).ArrayNum = 0;
  (this->BubbleTalkConditionType).ArrayMax = 0;
  (this->BubbleTalkConditionValue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BubbleTalkConditionValue).ArrayNum = 0;
  (this->BubbleTalkConditionValue).ArrayMax = 0;
  this->BubbleTalkType = None;
  (this->ID_StringDialogue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_StringDialogue).ArrayNum = 0;
  (this->ID_StringDialogue).ArrayMax = 0;
  (this->BubbleTalkAnimation).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BubbleTalkAnimation).ArrayNum = 0;
  (this->BubbleTalkAnimation).ArrayMax = 0;
  (this->BubbleTalkKeepTime).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BubbleTalkKeepTime).ArrayNum = 0;
  (this->BubbleTalkKeepTime).ArrayMax = 0;
  (this->BubbleTalkRate).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BubbleTalkRate).ArrayNum = 0;
  (this->BubbleTalkRate).ArrayMax = 0;
  return this;
}

// ~FDS_BubbleTalkBaseTableRow @ 14b42b4b0

void __thiscall
FDS_BubbleTalkBaseTableRow::~FDS_BubbleTalkBaseTableRow(FDS_BubbleTalkBaseTableRow *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->BubbleTalkRate).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BubbleTalkKeepTime).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BubbleTalkAnimation).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_StringDialogue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BubbleTalkConditionValue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BubbleTalkConditionType).AllocatorInstance.Data;
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

// Get @ 14b9017e0

FDS_BubbleTalkBaseTableRow * __cdecl FDS_BubbleTalkBaseTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_BubbleTalkBaseTableRow *pFVar4;
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
                      (&bGEnsureHasExecuted<_6706292829397712880>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_BubbleTalkBaseTableRow.cpp"
                       ,0x10,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_BubbleTalkBaseTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,BubbleTalkBase);
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
      pFVar4 = (FDS_BubbleTalkBaseTableRow *)
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
  return (FDS_BubbleTalkBaseTableRow *)0x0;
}

// GetAll @ 14b903c80

TArray<FDS_BubbleTalkBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_BubbleTalkBaseTableRow::GetAll
          (TArray<FDS_BubbleTalkBaseTableRow_const_*,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_BubbleTalkBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<_6706292829397712851>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_BubbleTalkBaseTableRow.cpp"
                       ,0x2d,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_BubbleTalkBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)()
      ;
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,BubbleTalkBase);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_BubbleTalkBaseTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b907c30

FDS_BubbleTalkBaseTableRow * __cdecl FDS_BubbleTalkBaseTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_BubbleTalkBaseTableRow *pFVar4;
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
                        (&bGEnsureHasExecuted<_6706292829397712880>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_BubbleTalkBaseTableRow.cpp"
                         ,0x10,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_BubbleTalkBaseTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,BubbleTalkBase);
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
        pFVar4 = (FDS_BubbleTalkBaseTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_BubbleTalkBaseTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// ID_StringDialogueTables @ 14b90b780

TArray<FDS_StringDialogueTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_BubbleTalkBaseTableRow::ID_StringDialogueTables
          (FDS_BubbleTalkBaseTableRow *this,
          TArray<FDS_StringDialogueTableRow_const_*,TSizedDefaultAllocator<32>_>
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
  TArray<FDS_StringDialogueTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  FDS_StringDialogueTableRow::GetAll(&local_38);
  iVar4 = local_38.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar7.Data = local_38.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_38.ArrayNum != iVar4) {
        `TCheckedPointerIterator<FDS_StringDialogueTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (FVar7.Data == pFVar1) {
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pFVar6 = (this->ID_StringDialogue).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar7.Data;
      pFVar2 = pFVar6 + (longlong)(this->ID_StringDialogue).ArrayNum * 8;
      if (pFVar6 != pFVar2) break;
LAB_14b90b83d:
      FVar7.Data = FVar7.Data + 8;
    }
    do {
      if (*(longlong *)pFVar6 == *(longlong *)(lVar3 + 8)) {
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
        goto LAB_14b90b83d;
      }
      pFVar6 = pFVar6 + 8;
    } while (pFVar6 != pFVar2);
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// IsValid @ 14b90bd40

bool __thiscall FDS_BubbleTalkBaseTableRow::IsValid(FDS_BubbleTalkBaseTableRow *this)

{
  return this != &DefaultObject;
}

