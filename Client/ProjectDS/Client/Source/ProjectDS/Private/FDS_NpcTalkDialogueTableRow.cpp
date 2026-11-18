// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticStruct @ 14b547e80

UScriptStruct * __cdecl FDS_NpcTalkDialogueTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_NpcTalkDialogueTableRow.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_NpcTalkDialogueTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_NpcTalkDialogueTableRow,(UObject *)pUVar1,
                         L"DS_NpcTalkDialogueTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_NpcTalkDialogueTableRow.OuterSingleton;
}

// FDS_NpcTalkDialogueTableRow @ 14b54a3b0

FDS_NpcTalkDialogueTableRow * __thiscall
FDS_NpcTalkDialogueTableRow::FDS_NpcTalkDialogueTableRow(FDS_NpcTalkDialogueTableRow *this)

{
  this->_padding_ = (longlong)&___7FDS_NpcTalkDialogueTableRow__6B_;
  this->ID = 0;
  this->DataStage = 0;
  ::FString::FString(&this->Version,L"");
  this->GroupId = 0;
  this->DialogueType = None;
  this->ID_TalkNpcId = 0;
  (this->ID_StringQuest).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_StringQuest).ArrayNum = 0;
  (this->ID_StringQuest).ArrayMax = 0;
  (this->PlayTime).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlayTime).ArrayNum = 0;
  (this->PlayTime).ArrayMax = 0;
  (this->ID_DialogueSound).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_DialogueSound).ArrayNum = 0;
  (this->ID_DialogueSound).ArrayMax = 0;
  (this->TalkNpcAnimation).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TalkNpcAnimation).ArrayNum = 0;
  (this->TalkNpcAnimation).ArrayMax = 0;
  (this->ID_NpcTalkCameraId).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_NpcTalkCameraId).ArrayNum = 0;
  (this->ID_NpcTalkCameraId).ArrayMax = 0;
  return this;
}

// ~FDS_NpcTalkDialogueTableRow @ 14b54b320

void __thiscall
FDS_NpcTalkDialogueTableRow::~FDS_NpcTalkDialogueTableRow(FDS_NpcTalkDialogueTableRow *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ID_NpcTalkCameraId).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TalkNpcAnimation).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_DialogueSound).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PlayTime).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_StringQuest).AllocatorInstance.Data;
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

// Get @ 14b94ff50

FDS_NpcTalkDialogueTableRow * __cdecl FDS_NpcTalkDialogueTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_NpcTalkDialogueTableRow *pFVar4;
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
                      (&bGEnsureHasExecuted<_8675858436413456365>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_NpcTalkDialogueTableRow.cpp"
                       ,0x13,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_NpcTalkDialogueTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,NpcTalkDialogue);
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
      pFVar4 = (FDS_NpcTalkDialogueTableRow *)
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
  return (FDS_NpcTalkDialogueTableRow *)0x0;
}

// GetAll @ 14b952410

TArray<FDS_NpcTalkDialogueTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_NpcTalkDialogueTableRow::GetAll
          (TArray<FDS_NpcTalkDialogueTableRow_const_*,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_NpcTalkDialogueTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<_8675858436413456336>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_NpcTalkDialogueTableRow.cpp"
                       ,0x30,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_NpcTalkDialogueTableRow_const_*,TSizedDefaultAllocator<32>_> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,NpcTalkDialogue);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_NpcTalkDialogueTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b9550a0

FDS_NpcTalkDialogueTableRow * __cdecl
FDS_NpcTalkDialogueTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_NpcTalkDialogueTableRow *pFVar4;
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
                        (&bGEnsureHasExecuted<_8675858436413456365>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_NpcTalkDialogueTableRow.cpp"
                         ,0x13,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_NpcTalkDialogueTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,NpcTalkDialogue);
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
        pFVar4 = (FDS_NpcTalkDialogueTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_NpcTalkDialogueTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// ID_DialogueSoundTables @ 14b955fd0

TArray<FDS_ResourceSoundTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_NpcTalkDialogueTableRow::ID_DialogueSoundTables
          (FDS_NpcTalkDialogueTableRow *this,
          TArray<FDS_ResourceSoundTableRow_const_*,TSizedDefaultAllocator<32>_>
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
  TArray<FDS_ResourceSoundTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  FDS_ResourceSoundTableRow::GetAll(&local_38);
  iVar4 = local_38.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar7.Data = local_38.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_38.ArrayNum != iVar4) {
        `TCheckedPointerIterator<FDS_ResourceSoundTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (FVar7.Data == pFVar1) {
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pFVar6 = (this->ID_DialogueSound).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar7.Data;
      pFVar2 = pFVar6 + (longlong)(this->ID_DialogueSound).ArrayNum * 4;
      if (pFVar6 != pFVar2) break;
LAB_14b95608c:
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
        goto LAB_14b95608c;
      }
      pFVar6 = pFVar6 + 4;
    } while (pFVar6 != pFVar2);
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// ID_NpcTalkCameraIdTables @ 14b957a70

TArray<FDS_NpcCameraTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_NpcTalkDialogueTableRow::ID_NpcTalkCameraIdTables
          (FDS_NpcTalkDialogueTableRow *this,
          TArray<FDS_NpcCameraTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  undefined1 local_res10 [8];
  TArray<FDS_NpcCameraTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  FDS_NpcCameraTableRow::GetAll(&local_38);
  iVar4 = local_38.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar7.Data = local_38.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_38.ArrayNum != iVar4) {
        `TCheckedPointerIterator<FDS_NpcCameraTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      if (FVar7.Data == pFVar1) {
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pFVar6 = (this->ID_NpcTalkCameraId).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar7.Data;
      pFVar2 = pFVar6 + (longlong)(this->ID_NpcTalkCameraId).ArrayNum * 4;
      if (pFVar6 != pFVar2) break;
LAB_14b957b2c:
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
        goto LAB_14b957b2c;
      }
      pFVar6 = pFVar6 + 4;
    } while (pFVar6 != pFVar2);
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// ID_StringQuestTables @ 14b9582d0

TArray<FDS_StringQuestTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_NpcTalkDialogueTableRow::ID_StringQuestTables
          (FDS_NpcTalkDialogueTableRow *this,
          TArray<FDS_StringQuestTableRow_const_*,TSizedDefaultAllocator<32>_>
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
  TArray<FDS_StringQuestTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  FDS_StringQuestTableRow::GetAll(&local_38);
  iVar4 = local_38.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar7.Data = local_38.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_38.ArrayNum != iVar4) {
        `TCheckedPointerIterator<FDS_StringQuestTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (FVar7.Data == pFVar1) {
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pFVar6 = (this->ID_StringQuest).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar7.Data;
      pFVar2 = pFVar6 + (longlong)(this->ID_StringQuest).ArrayNum * 8;
      if (pFVar6 != pFVar2) break;
LAB_14b95838d:
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
        goto LAB_14b95838d;
      }
      pFVar6 = pFVar6 + 8;
    } while (pFVar6 != pFVar2);
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// ID_TalkNpcIdTable @ 14b9583f0

FDS_NpcBaseTableRow * __thiscall
FDS_NpcTalkDialogueTableRow::ID_TalkNpcIdTable(FDS_NpcTalkDialogueTableRow *this)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  UDS_TableManager *this_00;
  FDS_NpcBaseTableRow *pFVar5;
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
  
  iVar1 = this->ID_TalkNpcId;
  if ((longlong)iVar1 == 0) {
    return &FDS_NpcBaseTableRow::DefaultObject;
  }
  this_00 = UDS_TableManager::GetInst();
  if (this_00 == (UDS_TableManager *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5245171004275163166>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_NpcBaseTableRow.cpp"
                       ,0x1e,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FDS_NpcBaseTableRow *)(*pcVar3)();
      return pFVar5;
    }
  }
  else {
    this_01 = UDS_TableManager::GetDataTable(this_00,NpcBase);
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
      pUVar8 = FDS_NpcBaseTableRow::StaticStruct();
      pFVar5 = (FDS_NpcBaseTableRow *)
               UDataTable::FindRowInternal(this_01,pUVar8,FVar2,(wchar_t *)FVar10.Data,true);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (pFVar5 != (FDS_NpcBaseTableRow *)0x0) {
        return pFVar5;
      }
    }
  }
  return &FDS_NpcBaseTableRow::DefaultObject;
}

// IsValid @ 14b958b40

bool __thiscall FDS_NpcTalkDialogueTableRow::IsValid(FDS_NpcTalkDialogueTableRow *this)

{
  return this != &DefaultObject;
}

