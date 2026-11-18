// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticStruct @ 14b545980

UScriptStruct * __cdecl FDS_NpcRelationPointTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_NpcRelationPointTableRow.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_NpcRelationPointTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_NpcRelationPointTableRow,(UObject *)pUVar1,
                         L"DS_NpcRelationPointTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_NpcRelationPointTableRow.OuterSingleton;
}

// Get @ 14b94f410

FDS_NpcRelationPointTableRow * __cdecl
FDS_NpcRelationPointTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_NpcRelationPointTableRow *pFVar4;
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
                      (&bGEnsureHasExecuted<6433275287537975311>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_NpcRelationPointTableRow.cpp"
                       ,0xf,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_NpcRelationPointTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,NpcRelationPoint);
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
      pFVar4 = (FDS_NpcRelationPointTableRow *)
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
  return (FDS_NpcRelationPointTableRow *)0x0;
}

// GetAll @ 14b951bf0

TArray<FDS_NpcRelationPointTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_NpcRelationPointTableRow::GetAll
          (TArray<FDS_NpcRelationPointTableRow_const_*,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_NpcRelationPointTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<6433275287537975340>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_NpcRelationPointTableRow.cpp"
                       ,0x2c,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_NpcRelationPointTableRow_const_*,TSizedDefaultAllocator<32>_> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,NpcRelationPoint);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_NpcRelationPointTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b9544c0

FDS_NpcRelationPointTableRow * __cdecl
FDS_NpcRelationPointTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_NpcRelationPointTableRow *pFVar4;
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
                        (&bGEnsureHasExecuted<6433275287537975311>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_NpcRelationPointTableRow.cpp"
                         ,0xf,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_NpcRelationPointTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,NpcRelationPoint);
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
        pFVar4 = (FDS_NpcRelationPointTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_NpcRelationPointTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// IsValid @ 14b958a00

bool __thiscall FDS_NpcRelationPointTableRow::IsValid(FDS_NpcRelationPointTableRow *this)

{
  return this != &DefaultObject;
}

// GetRewardItemPoint @ 14bef0330

int __cdecl
FDS_NpcRelationPointTableRow::GetRewardItemPoint(EDS_FavorType param_1,EDS_GradeType param_2)

{
  EDS_GradeType *pEVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  EDS_GradeType *pEVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  longlong lVar13;
  undefined1 local_res18 [8];
  uint local_res20;
  TArray<FDS_NpcRelationPointTableRow_const_*,TSizedDefaultAllocator<32>_> local_50;
  
  GetAll(&local_50);
  uVar8 = (ulonglong)local_50.ArrayNum;
  local_res20 = local_50.ArrayNum;
  pFVar9 = local_50.AllocatorInstance.Data + uVar8 * 8;
  iVar6 = 0;
  FVar12.Data = local_50.AllocatorInstance.Data;
LAB_14bef0380:
  do {
    if (local_50.ArrayNum != (uint)uVar8) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FDS_NpcRelationPointTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (FVar12.Data == pFVar9) {
LAB_14bef04cb:
      if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.AllocatorInstance.Data);
      }
      return iVar6;
    }
    lVar2 = *(longlong *)FVar12.Data;
    if ((lVar2 == 0) || (*(EDS_FavorType *)(lVar2 + 0x24) != param_1)) goto LAB_14bef046e;
    pEVar7 = *(EDS_GradeType **)(lVar2 + 0x28);
    lVar13 = (longlong)*(int *)(lVar2 + 0x30);
    pEVar1 = pEVar7 + lVar13;
    if (pEVar7 == pEVar1) goto LAB_14bef046e;
    do {
      if (*pEVar7 == param_2) {
        uVar8 = 0;
        uVar11 = 0;
        if (0 < lVar13) goto LAB_14bef0400;
        goto LAB_14bef046e;
      }
      pEVar7 = pEVar7 + 1;
    } while (pEVar7 != pEVar1);
    uVar8 = (ulonglong)local_res20;
    FVar12.Data = FVar12.Data + 8;
  } while( true );
  while( true ) {
    uVar8 = uVar8 + 1;
    uVar11 = (ulonglong)(uVar10 + 1);
    if (lVar13 <= (longlong)uVar8) break;
LAB_14bef0400:
    uVar10 = (uint)uVar11;
    uVar5 = 0;
    if ((int)uVar10 < *(int *)(lVar2 + 0x30)) {
      uVar5 = ~uVar10 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
    if (*(EDS_GradeType *)(uVar8 + *(longlong *)(lVar2 + 0x28)) == param_2) {
      uVar5 = 0;
      if ((int)uVar10 < *(int *)(lVar2 + 0x40)) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      iVar6 = *(int *)(*(longlong *)(lVar2 + 0x38) + (longlong)(int)uVar10 * 4);
      goto LAB_14bef04cb;
    }
  }
LAB_14bef046e:
  uVar8 = (ulonglong)local_res20;
  FVar12.Data = FVar12.Data + 8;
  goto LAB_14bef0380;
}

