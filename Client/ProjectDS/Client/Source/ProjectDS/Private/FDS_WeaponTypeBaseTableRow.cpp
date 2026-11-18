// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticStruct @ 14b762240

UScriptStruct * __cdecl FDS_WeaponTypeBaseTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_WeaponTypeBaseTableRow.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_WeaponTypeBaseTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_WeaponTypeBaseTableRow,(UObject *)pUVar1,
                         L"DS_WeaponTypeBaseTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_WeaponTypeBaseTableRow.OuterSingleton;
}

// Get @ 14b9ab060

FDS_WeaponTypeBaseTableRow * __cdecl FDS_WeaponTypeBaseTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_WeaponTypeBaseTableRow *pFVar4;
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
                      (&bGEnsureHasExecuted<_1119231884216238065>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_WeaponTypeBaseTableRow.cpp"
                       ,0xf,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_WeaponTypeBaseTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,WeaponTypeBase);
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
      pFVar4 = (FDS_WeaponTypeBaseTableRow *)
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
  return (FDS_WeaponTypeBaseTableRow *)0x0;
}

// GetAll @ 14b9ac600

TArray<FDS_WeaponTypeBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_WeaponTypeBaseTableRow::GetAll
          (TArray<FDS_WeaponTypeBaseTableRow_const_*,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_WeaponTypeBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<_1119231884216238036>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_WeaponTypeBaseTableRow.cpp"
                       ,0x2c,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_WeaponTypeBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)()
      ;
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,WeaponTypeBase);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_WeaponTypeBaseTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b9b1630

FDS_WeaponTypeBaseTableRow * __cdecl FDS_WeaponTypeBaseTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_WeaponTypeBaseTableRow *pFVar4;
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
                        (&bGEnsureHasExecuted<_1119231884216238065>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_WeaponTypeBaseTableRow.cpp"
                         ,0xf,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_WeaponTypeBaseTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,WeaponTypeBase);
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
        pFVar4 = (FDS_WeaponTypeBaseTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_WeaponTypeBaseTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// GetRefByItemType @ 14b9b2a30

FDS_WeaponTypeBaseTableRow * __cdecl
FDS_WeaponTypeBaseTableRow::GetRefByItemType(EDS_ItemType param_1)

{
  FScriptContainerElement *pFVar1;
  EDS_WeaponType EVar2;
  int iVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  EDS_WeaponType *pEVar7;
  UDS_TableManager *this;
  FDS_WeaponTypeBaseTableRow *pFVar8;
  UDataTable *this_00;
  FString *pFVar9;
  FName *pFVar10;
  UScriptStruct *pUVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  ForAnyElementType FVar14;
  undefined1 local_res8 [8];
  TPairInitializer<EDS_ItemType_const_&,EDS_WeaponType_const_&> local_res10;
  FName local_res20;
  TArray<FDS_WeaponTypeBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  longlong local_48;
  longlong local_40;
  FString local_38;
  
  if (ItemTypeMap._8_4_ == ItemTypeMap._52_4_) {
    GetAll(&local_68);
    iVar3 = local_68.ArrayNum;
    pFVar1 = local_68.AllocatorInstance.Data + (longlong)local_68.ArrayNum * 8;
    FVar14.Data = local_68.AllocatorInstance.Data;
    while( true ) {
      if (local_68.ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FDS_WeaponTypeBaseTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (FVar14.Data == pFVar1) break;
      lVar12 = *(longlong *)FVar14.Data;
      if (lVar12 != 0) {
        local_48 = lVar12 + 0x10;
        local_40 = lVar12 + 8;
        TSet<TTuple<enum_EDS_ItemType,enum_EDS_WeaponType>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemType,enum_EDS_WeaponType,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<enum_EDS_ItemType_const_&,enum_EDS_WeaponType_const_&>_>
                  (&ItemTypeMap,&local_res10,(bool *)&local_48);
      }
      FVar14.Data = FVar14.Data + 8;
    }
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
  }
  if (ItemTypeMap._8_4_ != ItemTypeMap._52_4_) {
    lVar12 = 0x154cf6b58;
    if (ItemTypeMap._64_8_ != 0) {
      lVar12 = ItemTypeMap._64_8_;
    }
    for (iVar3 = *(int *)(lVar12 + (ulonglong)(ItemTypeMap._72_4_ + ~None & param_1) * 4);
        iVar3 != -1; iVar3 = *(int *)(ItemTypeMap._0_8_ + 8 + (longlong)iVar3 * 0x10)) {
      if (*(EDS_ItemType *)(ItemTypeMap._0_8_ + (longlong)iVar3 * 0x10) == param_1) {
        pEVar7 = TMapBase<enum_EDS_ItemType,enum_EDS_WeaponType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemType,enum_EDS_WeaponType,0>_>
                 ::FindChecked(&ItemTypeMap,param_1);
        EVar2 = *pEVar7;
        if ((ulonglong)EVar2 != 0) {
          this = UDS_TableManager::GetInst();
          if (this == (UDS_TableManager *)0x0) {
            bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_1119231884216238065>,true,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_WeaponTypeBaseTableRow.cpp"
                               ,0xf,"false");
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              pFVar8 = (FDS_WeaponTypeBaseTableRow *)(*pcVar5)();
              return pFVar8;
            }
          }
          else {
            this_00 = UDS_TableManager::GetDataTable(this,WeaponTypeBase);
            if (this_00 != (UDataTable *)0x0) {
              local_res10.Value = (EDS_WeaponType *)this_00->_padding_;
              ::FName::ToString((FName *)&local_res10.Value,&local_58);
              pFVar9 = DS_Util::FromInt64(&local_38,(ulonglong)EVar2);
              if ((pFVar9->Data).ArrayNum == 0) {
                pwVar13 = L"";
              }
              else {
                pwVar13 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
              }
              pFVar10 = ::FName::FName(&local_res20,pwVar13);
              FVar14.Data = (FScriptContainerElement *)L"";
              if (local_58.Data.ArrayNum != 0) {
                FVar14.Data = local_58.Data.AllocatorInstance.Data;
              }
              FVar4 = *pFVar10;
              pUVar11 = StaticStruct();
              pFVar8 = (FDS_WeaponTypeBaseTableRow *)
                       UDataTable::FindRowInternal
                                 (this_00,pUVar11,FVar4,(wchar_t *)FVar14.Data,true);
              if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_38.Data.AllocatorInstance.Data);
              }
              if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_58.Data.AllocatorInstance.Data);
              }
              if (pFVar8 != (FDS_WeaponTypeBaseTableRow *)0x0) {
                return pFVar8;
              }
            }
          }
        }
        return &DefaultObject;
      }
    }
  }
  return &DefaultObject;
}

// IsValid @ 14b9b7b90

bool __thiscall FDS_WeaponTypeBaseTableRow::IsValid(FDS_WeaponTypeBaseTableRow *this)

{
  return this != &DefaultObject;
}

