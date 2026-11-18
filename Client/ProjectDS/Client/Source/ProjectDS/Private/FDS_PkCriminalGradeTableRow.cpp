// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticStruct @ 14b556290

UScriptStruct * __cdecl FDS_PkCriminalGradeTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_PkCriminalGradeTableRow.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_PkCriminalGradeTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_PkCriminalGradeTableRow,(UObject *)pUVar1,
                         L"DS_PkCriminalGradeTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_PkCriminalGradeTableRow.OuterSingleton;
}

// Get @ 14b95ff30

FDS_PkCriminalGradeTableRow * __cdecl FDS_PkCriminalGradeTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_PkCriminalGradeTableRow *pFVar4;
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
                      (&bGEnsureHasExecuted<_1428217165839859694>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_PkCriminalGradeTableRow.cpp"
                       ,0x12,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_PkCriminalGradeTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,PkCriminalGrade);
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
      pFVar4 = (FDS_PkCriminalGradeTableRow *)
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
  return (FDS_PkCriminalGradeTableRow *)0x0;
}

// GetAll @ 14b962f40

TArray<FDS_PkCriminalGradeTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_PkCriminalGradeTableRow::GetAll
          (TArray<FDS_PkCriminalGradeTableRow_const_*,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_PkCriminalGradeTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<_1428217165839859665>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_PkCriminalGradeTableRow.cpp"
                       ,0x2f,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_PkCriminalGradeTableRow_const_*,TSizedDefaultAllocator<32>_> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,PkCriminalGrade);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_PkCriminalGradeTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetGradeString @ 14b965160

FString * __thiscall
FDS_PkCriminalGradeTableRow::GetGradeString
          (FDS_PkCriminalGradeTableRow *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  ForAnyElementType _Src;
  bool bVar2;
  UDS_TableManager *pUVar3;
  FDS_StringBaseTableRow *pFVar4;
  FDS_StringBaseTableRow local_48;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  pUVar3 = UDS_TableManager::GetInst();
  if (pUVar3 == (UDS_TableManager *)0x0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    *piVar1 = 0;
  }
  else {
    pFVar4 = FDS_StringBaseTableRow::GetRef((this->ID_Name).ID,true);
    local_48._padding_ = (longlong)&___7FDS_StringBaseTableRow__6B_;
    local_48.ID = pFVar4->ID;
    local_48.DataStage = pFVar4->DataStage;
    ::FString::FString(&local_48.Version,&pFVar4->Version);
    ::FString::FString(&local_48.Text,&pFVar4->Text);
    bVar2 = FDS_StringBaseTableRow::IsValid(&local_48);
    _Src.Data = local_48.Text.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (bVar2) {
      (__return_storage_ptr__->Data).ArrayNum = local_48.Text.Data.ArrayNum;
      if (local_48.Text.Data.ArrayNum == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_48.Text.Data.ArrayNum,0,(ForAnyElementType *)__return_storage_ptr__,
                   local_48.Text.Data.ArrayNum,piVar1);
        memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,
               (longlong)local_48.Text.Data.ArrayNum * 2);
      }
      if (local_48.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Text.Data.AllocatorInstance.Data);
      }
    }
    else {
      (__return_storage_ptr__->Data).ArrayNum = 0;
      *piVar1 = 0;
      if (local_48.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Text.Data.AllocatorInstance.Data);
      }
    }
    if (local_48.Version.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Version.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b965480

FDS_PkCriminalGradeTableRow * __cdecl
FDS_PkCriminalGradeTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_PkCriminalGradeTableRow *pFVar4;
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
                        (&bGEnsureHasExecuted<_1428217165839859694>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_PkCriminalGradeTableRow.cpp"
                         ,0x12,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_PkCriminalGradeTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,PkCriminalGrade);
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
        pFVar4 = (FDS_PkCriminalGradeTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_PkCriminalGradeTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// GetRowByPointNullable @ 14b968660

FDS_PkCriminalGradeTableRow * __cdecl
FDS_PkCriminalGradeTableRow::GetRowByPointNullable(int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UDS_TableManager *this;
  FDS_PkCriminalGradeTableRow *pFVar4;
  UDataTable *this_00;
  int iVar5;
  ForAnyElementType FVar6;
  uint uVar7;
  FDS_PkCriminalGradeTableRow *pFVar9;
  FDS_PkCriminalGradeTableRow *pFVar10;
  FName local_res10;
  TArray<FDS_PkCriminalGradeTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  FString local_28;
  FDS_PkCriminalGradeTableRow *pFVar8;
  
  pFVar4 = (FDS_PkCriminalGradeTableRow *)0x0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  this = UDS_TableManager::GetInst();
  if (this == (UDS_TableManager *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1428217165839859665>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_PkCriminalGradeTableRow.cpp"
                       ,0x2f,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FDS_PkCriminalGradeTableRow *)(*pcVar1)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,PkCriminalGrade);
    if (this_00 != (UDataTable *)0x0) {
      local_res10 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res10,&local_28);
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar6.Data = local_28.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_PkCriminalGradeTableRow_const_>
                (this_00,(wchar_t *)FVar6.Data,&local_38);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  pFVar8 = pFVar4;
  pFVar9 = pFVar4;
  pFVar10 = pFVar4;
  iVar5 = local_38.ArrayNum;
  if (0 < local_38.ArrayNum) {
    do {
      uVar7 = (uint)pFVar8;
      uVar3 = 0;
      if ((int)uVar7 < iVar5) {
        uVar3 = ~uVar7 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FDS_PkCriminalGradeTableRow *)(*pcVar1)();
          return pFVar4;
        }
        iVar5 = local_38.ArrayNum;
      }
      pFVar10 = *(FDS_PkCriminalGradeTableRow **)
                 (local_38.AllocatorInstance.Data + (longlong)&pFVar9->_padding_);
      if (((pFVar10 != (FDS_PkCriminalGradeTableRow *)0x0) && (-1 < param_1)) &&
         (param_1 < pFVar10->CriminalPointMax)) break;
      pFVar8 = (FDS_PkCriminalGradeTableRow *)(ulonglong)(uVar7 + 1);
      pFVar9 = (FDS_PkCriminalGradeTableRow *)&pFVar9->ID;
      pFVar10 = pFVar4;
    } while ((int)(uVar7 + 1) < iVar5);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return pFVar10;
}

// ID_CharNameColorTable @ 14b968ba0

FDS_ResourceColorTableRow * __thiscall
FDS_PkCriminalGradeTableRow::ID_CharNameColorTable(FDS_PkCriminalGradeTableRow *this)

{
  FDS_ResourceColorTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceColorTableRow::GetRef((longlong)this->ID_CharNameColor,true);
  return pFVar1;
}

// ID_ColorTable @ 14b968e00

FDS_ResourceColorTableRow * __thiscall
FDS_PkCriminalGradeTableRow::ID_ColorTable(FDS_PkCriminalGradeTableRow *this)

{
  FDS_ResourceColorTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceColorTableRow::GetRef((longlong)this->ID_Color,true);
  return pFVar1;
}

// ID_NameTable @ 14b9696a0

FDS_StringBaseTableRow * __thiscall
FDS_PkCriminalGradeTableRow::ID_NameTable(FDS_PkCriminalGradeTableRow *this)

{
  FDS_StringBaseTableRow *pFVar1;
  
  pFVar1 = FDS_StringBaseTableRow::GetRef((this->ID_Name).ID,true);
  return pFVar1;
}

// ID_PenaltyBuffTable @ 14b969700

FDS_BuffBaseTableRow * __thiscall
FDS_PkCriminalGradeTableRow::ID_PenaltyBuffTable(FDS_PkCriminalGradeTableRow *this)

{
  FDS_BuffBaseTableRow *pFVar1;
  
  pFVar1 = FDS_BuffBaseTableRow::GetRef((longlong)this->ID_PenaltyBuff,true);
  return pFVar1;
}

// IsValid @ 14b96a770

bool __thiscall FDS_PkCriminalGradeTableRow::IsValid(FDS_PkCriminalGradeTableRow *this)

{
  return this != &DefaultObject;
}

