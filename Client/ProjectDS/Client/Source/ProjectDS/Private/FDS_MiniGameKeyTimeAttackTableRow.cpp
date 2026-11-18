// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticStruct @ 14b4ede50

UScriptStruct * __cdecl FDS_MiniGameKeyTimeAttackTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_MiniGameKeyTimeAttackTableRow.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_MiniGameKeyTimeAttackTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_MiniGameKeyTimeAttackTableRow,
                         (UObject *)pUVar1,L"DS_MiniGameKeyTimeAttackTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_MiniGameKeyTimeAttackTableRow.OuterSingleton;
}

// Get @ 14b93f840

FDS_MiniGameKeyTimeAttackTableRow * __cdecl
FDS_MiniGameKeyTimeAttackTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_MiniGameKeyTimeAttackTableRow *pFVar4;
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
                      (&bGEnsureHasExecuted<_2580955009055195120>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_MiniGameKeyTimeAttackTableRow.cpp"
                       ,0x10,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_MiniGameKeyTimeAttackTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,MiniGameKeyTimeAttack);
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
      pFVar4 = (FDS_MiniGameKeyTimeAttackTableRow *)
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
  return (FDS_MiniGameKeyTimeAttackTableRow *)0x0;
}

// GetAll @ 14b941b40

TArray<FDS_MiniGameKeyTimeAttackTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_MiniGameKeyTimeAttackTableRow::GetAll
          (TArray<FDS_MiniGameKeyTimeAttackTableRow_const_*,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_MiniGameKeyTimeAttackTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<_2580955009055195091>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_MiniGameKeyTimeAttackTableRow.cpp"
                       ,0x2d,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_MiniGameKeyTimeAttackTableRow_const_*,TSizedDefaultAllocator<32>_> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,MiniGameKeyTimeAttack);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_MiniGameKeyTimeAttackTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b9447c0

FDS_MiniGameKeyTimeAttackTableRow * __cdecl
FDS_MiniGameKeyTimeAttackTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_MiniGameKeyTimeAttackTableRow *pFVar4;
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
                        (&bGEnsureHasExecuted<_2580955009055195120>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_MiniGameKeyTimeAttackTableRow.cpp"
                         ,0x10,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_MiniGameKeyTimeAttackTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,MiniGameKeyTimeAttack);
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
        pFVar4 = (FDS_MiniGameKeyTimeAttackTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_MiniGameKeyTimeAttackTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// ID_ResourceSoundTable @ 14b9467c0

FDS_ResourceSoundTableRow * __thiscall
FDS_MiniGameKeyTimeAttackTableRow::ID_ResourceSoundTable(FDS_MiniGameKeyTimeAttackTableRow *this)

{
  FDS_ResourceSoundTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceSoundTableRow::GetRef((longlong)this->ID_ResourceSound,true);
  return pFVar1;
}

// IsValid @ 14b946eb0

bool __thiscall FDS_MiniGameKeyTimeAttackTableRow::IsValid(FDS_MiniGameKeyTimeAttackTableRow *this)

{
  return this != &DefaultObject;
}

// GetCommandListArray @ 14beedc00

TArray<TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *
__thiscall
FDS_MiniGameKeyTimeAttackTableRow::GetCommandListArray
          (FDS_MiniGameKeyTimeAttackTableRow *this,
          TArray<TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((this->CommandList1).ArrayNum != 0) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar2 * 0x10;
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    *(undefined8 *)&pFVar3->field_0x0 = 0;
    iVar2 = (this->CommandList1).ArrayNum;
    pFVar1 = (this->CommandList1).AllocatorInstance.Data;
    *(int *)&pFVar3[8].field_0x0 = iVar2;
    if (iVar2 == 0) {
      *(int *)(pFVar3 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar2,0,(ForAnyElementType *)pFVar3,iVar2,(int *)(pFVar3 + 0xc));
      memcpy(*(void **)&pFVar3->field_0x0,pFVar1,(longlong)iVar2 << 2);
    }
  }
  if ((this->CommandList2).ArrayNum != 0) {
    iVar2 = __return_storage_ptr__->ArrayNum;
    if (iVar2 == __return_storage_ptr__->ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar2 * 0x10;
    *(undefined8 *)&pFVar3->field_0x0 = 0;
    iVar2 = (this->CommandList2).ArrayNum;
    pFVar1 = (this->CommandList2).AllocatorInstance.Data;
    *(int *)&pFVar3[8].field_0x0 = iVar2;
    if (iVar2 == 0) {
      *(int *)(pFVar3 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar2,0,(ForAnyElementType *)pFVar3,iVar2,(int *)(pFVar3 + 0xc));
      memcpy(*(void **)&pFVar3->field_0x0,pFVar1,(longlong)iVar2 << 2);
    }
  }
  if ((this->CommandList3).ArrayNum != 0) {
    iVar2 = __return_storage_ptr__->ArrayNum;
    if (iVar2 == __return_storage_ptr__->ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar2 * 0x10;
    *(undefined8 *)&pFVar3->field_0x0 = 0;
    iVar2 = (this->CommandList3).ArrayNum;
    pFVar1 = (this->CommandList3).AllocatorInstance.Data;
    *(int *)&pFVar3[8].field_0x0 = iVar2;
    if (iVar2 == 0) {
      *(int *)(pFVar3 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar2,0,(ForAnyElementType *)pFVar3,iVar2,(int *)(pFVar3 + 0xc));
      memcpy(*(void **)&pFVar3->field_0x0,pFVar1,(longlong)iVar2 << 2);
    }
  }
  return __return_storage_ptr__;
}

// GetLimitTimeArray @ 14beee4e0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
FDS_MiniGameKeyTimeAttackTableRow::GetLimitTimeArray
          (FDS_MiniGameKeyTimeAttackTableRow *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (this->LimitTime1 != 0.0) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    *(int *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar2 * 4) =
         (int)this->LimitTime1;
  }
  if (this->LimitTime2 != 0.0) {
    iVar2 = __return_storage_ptr__->ArrayNum;
    if (iVar2 == __return_storage_ptr__->ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    *(int *)(pFVar1 + (longlong)iVar2 * 4) = (int)this->LimitTime2;
  }
  if (this->LimitTime3 != 0.0) {
    iVar2 = __return_storage_ptr__->ArrayNum;
    if (iVar2 == __return_storage_ptr__->ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    *(int *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar2 * 4) =
         (int)this->LimitTime3;
  }
  return __return_storage_ptr__;
}

