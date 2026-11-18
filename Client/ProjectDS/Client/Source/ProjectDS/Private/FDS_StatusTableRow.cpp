// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticStruct @ 14b5a0330

UScriptStruct * __cdecl FDS_StatusTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_StatusTableRow.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_StatusTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_StatusTableRow,(UObject *)pUVar1,
                         L"DS_StatusTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_StatusTableRow.OuterSingleton;
}

// ~FDS_StatusTableRow @ 14b5a2bd0

void __thiscall FDS_StatusTableRow::~FDS_StatusTableRow(FDS_StatusTableRow *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ID_StatusInfo).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_AddRateStatus).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_RateStatus).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_RateStatusValue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_AddStatus).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// Get @ 14b982830

FDS_StatusTableRow * __cdecl FDS_StatusTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_StatusTableRow *pFVar4;
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
                      (&bGEnsureHasExecuted<_5925846896043098094>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_StatusTableRow.cpp"
                       ,0x12,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_StatusTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,Status);
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
      pFVar4 = (FDS_StatusTableRow *)
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
  return (FDS_StatusTableRow *)0x0;
}

// GetAll @ 14b9857c0

TArray<FDS_StatusTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_StatusTableRow::GetAll
          (TArray<FDS_StatusTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_StatusTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<_5925846896043098065>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_StatusTableRow.cpp"
                       ,0x2f,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_StatusTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,Status);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_StatusTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b987dc0

FDS_StatusTableRow * __cdecl FDS_StatusTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_StatusTableRow *pFVar4;
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
                        (&bGEnsureHasExecuted<_5925846896043098094>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_StatusTableRow.cpp"
                         ,0x12,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_StatusTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,Status);
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
        pFVar4 = (FDS_StatusTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_StatusTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// ID_StatusDescTable @ 14b98bae0

FDS_StringBaseTableRow * __thiscall FDS_StatusTableRow::ID_StatusDescTable(FDS_StatusTableRow *this)

{
  FDS_StringBaseTableRow *pFVar1;
  
  pFVar1 = FDS_StringBaseTableRow::GetRef((this->ID_StatusDesc).ID,true);
  return pFVar1;
}

// ID_StatusIconTable @ 14b98bb00

FDS_ResourceIconTableRow * __thiscall
FDS_StatusTableRow::ID_StatusIconTable(FDS_StatusTableRow *this)

{
  FDS_ResourceIconTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceIconTableRow::GetRef((longlong)this->ID_StatusIcon,true);
  return pFVar1;
}

// ID_StatusInfoTables @ 14b98bb20

TArray<FDS_StatusInfoTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_StatusTableRow::ID_StatusInfoTables
          (FDS_StatusTableRow *this,
          TArray<FDS_StatusInfoTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__
          )

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  UDS_TableManager *this_00;
  TArray<FDS_StatusInfoTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar8;
  UDataTable *this_01;
  FScriptContainerElement *pFVar9;
  ForAnyElementType FVar10;
  undefined1 local_res10 [8];
  FName local_res18;
  TArray<FDS_StatusInfoTableRow_const_*,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  this_00 = UDS_TableManager::GetInst();
  if (this_00 == (UDS_TableManager *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7385268768814923821>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_StatusInfoTableRow.cpp"
                       ,0x2d,"false");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TArray<FDS_StatusInfoTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar8;
    }
  }
  else {
    this_01 = UDS_TableManager::GetDataTable(this_00,StatusInfo);
    if (this_01 != (UDataTable *)0x0) {
      local_res18 = (FName)this_01->_padding_;
      ::FName::ToString(&local_res18,&local_38);
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar10.Data = local_38.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_StatusInfoTableRow_const_>
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
        `TCheckedPointerIterator<FDS_StatusInfoTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (FVar10.Data == pFVar1) {
        if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pFVar9 = (this->ID_StatusInfo).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar10.Data;
      pFVar2 = pFVar9 + (longlong)(this->ID_StatusInfo).ArrayNum * 4;
      if (pFVar9 != pFVar2) break;
LAB_14b98bc6c:
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
        goto LAB_14b98bc6c;
      }
      pFVar9 = pFVar9 + 4;
    } while (pFVar9 != pFVar2);
    FVar10.Data = FVar10.Data + 8;
  } while( true );
}

// ID_StatusNameTable @ 14b98bcb0

FDS_StringBaseTableRow * __thiscall FDS_StatusTableRow::ID_StatusNameTable(FDS_StatusTableRow *this)

{
  FDS_StringBaseTableRow *pFVar1;
  
  pFVar1 = FDS_StringBaseTableRow::GetRef((this->ID_StatusName).ID,true);
  return pFVar1;
}

// IsValid @ 14b98c7d0

bool __thiscall FDS_StatusTableRow::IsValid(FDS_StatusTableRow *this)

{
  return this != &DefaultObject;
}

// GetCharViewDetailStatusCategoryMap @ 14be20820

TMap<EDS_StatusCategoryType,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusCategoryType,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>,0>_>
* __cdecl FDS_StatusTableRow::GetCharViewDetailStatusCategoryMap
                    (TMap<EDS_StatusCategoryType,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusCategoryType,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>,0>_>
                     *__return_storage_ptr__)

{
  EDS_StatusCategoryType *pEVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  void *_Src;
  code *pcVar5;
  FIdentityFunctor FVar6;
  bool bVar7;
  int iVar8;
  TArray<EDS_StatusType,TSizedDefaultAllocator<32>_> *pTVar9;
  TMap<EDS_StatusCategoryType,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusCategoryType,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar10;
  longlong lVar11;
  undefined1 *puVar12;
  int iVar13;
  uint uVar14;
  ForAnyElementType FVar15;
  int iVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  longlong lVar20;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  TPairInitializer<EDS_StatusCategoryType_const_&,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>_&&>
  local_res18;
  ForAnyElementType local_f0;
  int local_e8;
  int local_e4;
  void *local_e0;
  undefined8 local_d8;
  TArray<FDS_StatusTableRow_const_*,TSizedDefaultAllocator<32>_> local_d0;
  TMap<EDS_StatusCategoryType,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusCategoryType,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>,0>_>
  *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  TMap<EDS_StatusCategoryType,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusCategoryType,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  EDS_StatusCategoryType *local_60;
  void **local_58;
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  iVar16 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  GetAll(&local_d0);
  iVar13 = local_d0.ArrayNum;
  pFVar2 = local_d0.AllocatorInstance.Data + (longlong)local_d0.ArrayNum * 8;
  FVar15.Data = local_d0.AllocatorInstance.Data;
  while( true ) {
    if (local_d0.ArrayNum != iVar13) {
      local_res8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<FDS_StatusTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar15.Data == pFVar2) break;
    lVar11 = *(longlong *)FVar15.Data;
    if (0 < *(int *)(lVar11 + 0x94)) {
      pEVar1 = (EDS_StatusCategoryType *)(lVar11 + 0x90);
      if (*(int *)&__return_storage_ptr__->field_0x8 != *(int *)&__return_storage_ptr__->field_0x34)
      {
        puVar12 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar12 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        iVar8 = *(int *)(puVar12 +
                        ((ulonglong)(*(int *)&__return_storage_ptr__->field_0x48 - 1) &
                        (ulonglong)*pEVar1) * 4);
        if (iVar8 != -1) {
          do {
            if (*(EDS_StatusCategoryType *)
                 ((longlong)iVar8 * 0x20 + *(longlong *)__return_storage_ptr__) == *pEVar1)
            goto LAB_14be2092f;
            iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + *(longlong *)__return_storage_ptr__);
          } while (iVar8 != -1);
        }
      }
      local_58 = &local_e0;
      local_e0 = (void *)0x0;
      local_d8 = 0;
      local_60 = pEVar1;
      TSet<TTuple<enum_EDS_StatusCategoryType,TArray<enum_EDS_StatusType,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusCategoryType,TArray<enum_EDS_StatusType,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_StatusCategoryType_const_&,TArray<enum_EDS_StatusType,TSizedDefaultAllocator<32>_>_&&>_>
                (__return_storage_ptr__,&local_res18,(bool *)&local_60);
      if (local_e0 != (void *)0x0) {
        FMemory::Free(local_e0);
      }
LAB_14be2092f:
      pTVar9 = TMapBase<enum_EDS_StatusCategoryType,TArray<enum_EDS_StatusType,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusCategoryType,TArray<enum_EDS_StatusType,TSizedDefaultAllocator<32>_>,0>_>
               ::FindChecked(__return_storage_ptr__,*pEVar1);
      iVar8 = pTVar9->ArrayNum;
      if (iVar8 == pTVar9->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar9->AllocatorInstance,&pTVar9->ArrayMax);
      }
      pTVar9->ArrayNum = iVar8 + 1;
      *(undefined4 *)((pTVar9->AllocatorInstance).Data + (longlong)iVar8 * 4) =
           *(undefined4 *)(lVar11 + 8);
    }
    FVar15.Data = FVar15.Data + 8;
  }
  iVar13 = *(int *)&__return_storage_ptr__->field_0x28;
  puVar12 = &__return_storage_ptr__->field_0x10;
  local_a0 = 0;
  uStack_b4 = 1;
  iStack_a4 = 0;
  if (iVar13 != 0) {
    puVar18 = *(uint **)&__return_storage_ptr__->field_0x20;
    if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
      puVar18 = (uint *)puVar12;
    }
    uVar14 = *puVar18;
    iVar16 = 0;
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar16;
      local_a0 = local_a0 + 0x20;
      iVar16 = iVar16 + 1;
      iStack_a4 = iVar13;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14be209ed;
      uVar14 = puVar18[lVar11 + 1];
    }
    uStack_b4 = -uVar14 & uVar14;
    uVar3 = (ulonglong)uStack_b4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18.Value._0_4_ = (int)lVar11;
    iStack_a4 = (int)local_res18.Value + -1 + local_a0;
    if (iVar13 < iStack_a4) {
      iStack_a4 = iVar13;
    }
  }
LAB_14be209ed:
  uVar14 = *(uint *)&__return_storage_ptr__->field_0x28;
  uVar19 = uVar14 & 0xffffffe0;
  iStack_98 = *(int *)&__return_storage_ptr__->field_0x8 -
              *(int *)&__return_storage_ptr__->field_0x34;
  uStack_a8 = 0xffffffff;
  TStack_88._padding_ = CONCAT44(uStack_b4,iVar16);
  TStack_88.CurrentBitIndex = iStack_a4;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar14 >> 5;
  TStack_88._28_4_ = iStack_a4;
  TStack_88.BaseBitIndex = local_a0;
  uStack_68 = CONCAT44(uStack_94,iStack_98);
  local_c0 = __return_storage_ptr__;
  iStack_b8 = iVar16;
  local_b0 = puVar12;
  iStack_9c = iStack_a4;
  local_90 = __return_storage_ptr__;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar12;
  if (((int)uVar14 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TMap<EDS_StatusCategoryType,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusCategoryType,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>,0>_>
               *)(*pcVar5)();
    return pTVar10;
  }
  FVar6 = local_res8[0];
  uVar4 = *(uint *)&__return_storage_ptr__->field_0x28;
  if (uVar14 != uVar4) {
    puVar17 = *(undefined1 **)&__return_storage_ptr__->field_0x20;
    if (*(undefined1 **)&__return_storage_ptr__->field_0x20 == (undefined1 *)0x0) {
      puVar17 = puVar12;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar13 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar13;
      uVar19 = uVar19 + 0x20;
      iVar13 = iVar13 + 1;
      uVar14 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14be20af0;
      uVar14 = *(uint *)(puVar17 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar14 = (int)lVar11 + -1 + uVar19;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_14be20af0:
  while( true ) {
    pTVar10 = local_90;
    if (*(int *)&local_90->field_0x8 - *(int *)&local_90->field_0x34 != (int)uStack_68) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusCategoryType,TArray<enum_EDS_StatusType,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_88.CurrentBitIndex == uVar14) &&
        (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar12)) &&
       (pTVar10 == __return_storage_ptr__)) break;
    lVar11 = (longlong)TStack_88.CurrentBitIndex * 0x20 + *(longlong *)pTVar10;
    local_f0.Data = (FScriptContainerElement *)0x0;
    local_e8 = *(int *)(lVar11 + 0x10);
    lVar20 = (longlong)local_e8;
    _Src = *(void **)(lVar11 + 8);
    if (local_e8 == 0) {
      local_e4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_e8,0,&local_f0,local_e8,&local_e4);
      memcpy(local_f0.Data,_Src,lVar20 << 2);
    }
    AlgoImpl::
    IntroSortInternal<enum_EDS_StatusType,int,FIdentityFunctor,_FDS_StatusTableRow::GetCharViewDetailStatusCategoryMap_::__l16::<lambda_1>_>
              ((EDS_StatusType *)local_f0.Data,local_e8,FVar6,(<lambda_1>)FVar6);
    if (local_f0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data);
    }
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
  if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPlayerViewDetailStatusCategoryMap @ 14be21d60

TMap<EDS_StatusCategoryType,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusCategoryType,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>,0>_>
* __cdecl FDS_StatusTableRow::GetPlayerViewDetailStatusCategoryMap
                    (TMap<EDS_StatusCategoryType,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusCategoryType,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>,0>_>
                     *__return_storage_ptr__)

{
  EDS_StatusCategoryType *pEVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  void *_Src;
  code *pcVar5;
  FIdentityFunctor FVar6;
  bool bVar7;
  int iVar8;
  TArray<EDS_StatusType,TSizedDefaultAllocator<32>_> *pTVar9;
  TMap<EDS_StatusCategoryType,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusCategoryType,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar10;
  longlong lVar11;
  undefined1 *puVar12;
  int iVar13;
  uint uVar14;
  ForAnyElementType FVar15;
  int iVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  longlong lVar20;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  TPairInitializer<EDS_StatusCategoryType_const_&,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>_&&>
  local_res18;
  ForAnyElementType local_f0;
  int local_e8;
  int local_e4;
  void *local_e0;
  undefined8 local_d8;
  TArray<FDS_StatusTableRow_const_*,TSizedDefaultAllocator<32>_> local_d0;
  TMap<EDS_StatusCategoryType,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusCategoryType,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>,0>_>
  *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  TMap<EDS_StatusCategoryType,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusCategoryType,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  EDS_StatusCategoryType *local_60;
  void **local_58;
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  iVar16 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  GetAll(&local_d0);
  iVar13 = local_d0.ArrayNum;
  pFVar2 = local_d0.AllocatorInstance.Data + (longlong)local_d0.ArrayNum * 8;
  FVar15.Data = local_d0.AllocatorInstance.Data;
  while( true ) {
    if (local_d0.ArrayNum != iVar13) {
      local_res8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<FDS_StatusTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar15.Data == pFVar2) break;
    lVar11 = *(longlong *)FVar15.Data;
    if (0 < *(int *)(lVar11 + 0x98)) {
      pEVar1 = (EDS_StatusCategoryType *)(lVar11 + 0x90);
      if (*(int *)&__return_storage_ptr__->field_0x8 != *(int *)&__return_storage_ptr__->field_0x34)
      {
        puVar12 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar12 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        iVar8 = *(int *)(puVar12 +
                        ((ulonglong)(*(int *)&__return_storage_ptr__->field_0x48 - 1) &
                        (ulonglong)*pEVar1) * 4);
        if (iVar8 != -1) {
          do {
            if (*(EDS_StatusCategoryType *)
                 ((longlong)iVar8 * 0x20 + *(longlong *)__return_storage_ptr__) == *pEVar1)
            goto LAB_14be21e6f;
            iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + *(longlong *)__return_storage_ptr__);
          } while (iVar8 != -1);
        }
      }
      local_58 = &local_e0;
      local_e0 = (void *)0x0;
      local_d8 = 0;
      local_60 = pEVar1;
      TSet<TTuple<enum_EDS_StatusCategoryType,TArray<enum_EDS_StatusType,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusCategoryType,TArray<enum_EDS_StatusType,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_StatusCategoryType_const_&,TArray<enum_EDS_StatusType,TSizedDefaultAllocator<32>_>_&&>_>
                (__return_storage_ptr__,&local_res18,(bool *)&local_60);
      if (local_e0 != (void *)0x0) {
        FMemory::Free(local_e0);
      }
LAB_14be21e6f:
      pTVar9 = TMapBase<enum_EDS_StatusCategoryType,TArray<enum_EDS_StatusType,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusCategoryType,TArray<enum_EDS_StatusType,TSizedDefaultAllocator<32>_>,0>_>
               ::FindChecked(__return_storage_ptr__,*pEVar1);
      iVar8 = pTVar9->ArrayNum;
      if (iVar8 == pTVar9->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar9->AllocatorInstance,&pTVar9->ArrayMax);
      }
      pTVar9->ArrayNum = iVar8 + 1;
      *(undefined4 *)((pTVar9->AllocatorInstance).Data + (longlong)iVar8 * 4) =
           *(undefined4 *)(lVar11 + 8);
    }
    FVar15.Data = FVar15.Data + 8;
  }
  iVar13 = *(int *)&__return_storage_ptr__->field_0x28;
  puVar12 = &__return_storage_ptr__->field_0x10;
  local_a0 = 0;
  uStack_b4 = 1;
  iStack_a4 = 0;
  if (iVar13 != 0) {
    puVar18 = *(uint **)&__return_storage_ptr__->field_0x20;
    if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
      puVar18 = (uint *)puVar12;
    }
    uVar14 = *puVar18;
    iVar16 = 0;
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar16;
      local_a0 = local_a0 + 0x20;
      iVar16 = iVar16 + 1;
      iStack_a4 = iVar13;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14be21f2d;
      uVar14 = puVar18[lVar11 + 1];
    }
    uStack_b4 = -uVar14 & uVar14;
    uVar3 = (ulonglong)uStack_b4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18.Value._0_4_ = (int)lVar11;
    iStack_a4 = (int)local_res18.Value + -1 + local_a0;
    if (iVar13 < iStack_a4) {
      iStack_a4 = iVar13;
    }
  }
LAB_14be21f2d:
  uVar14 = *(uint *)&__return_storage_ptr__->field_0x28;
  uVar19 = uVar14 & 0xffffffe0;
  iStack_98 = *(int *)&__return_storage_ptr__->field_0x8 -
              *(int *)&__return_storage_ptr__->field_0x34;
  uStack_a8 = 0xffffffff;
  TStack_88._padding_ = CONCAT44(uStack_b4,iVar16);
  TStack_88.CurrentBitIndex = iStack_a4;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar14 >> 5;
  TStack_88._28_4_ = iStack_a4;
  TStack_88.BaseBitIndex = local_a0;
  uStack_68 = CONCAT44(uStack_94,iStack_98);
  local_c0 = __return_storage_ptr__;
  iStack_b8 = iVar16;
  local_b0 = puVar12;
  iStack_9c = iStack_a4;
  local_90 = __return_storage_ptr__;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar12;
  if (((int)uVar14 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TMap<EDS_StatusCategoryType,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusCategoryType,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>,0>_>
               *)(*pcVar5)();
    return pTVar10;
  }
  FVar6 = local_res8[0];
  uVar4 = *(uint *)&__return_storage_ptr__->field_0x28;
  if (uVar14 != uVar4) {
    puVar17 = *(undefined1 **)&__return_storage_ptr__->field_0x20;
    if (*(undefined1 **)&__return_storage_ptr__->field_0x20 == (undefined1 *)0x0) {
      puVar17 = puVar12;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar13 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar13;
      uVar19 = uVar19 + 0x20;
      iVar13 = iVar13 + 1;
      uVar14 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14be22030;
      uVar14 = *(uint *)(puVar17 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar14 = (int)lVar11 + -1 + uVar19;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_14be22030:
  while( true ) {
    pTVar10 = local_90;
    if (*(int *)&local_90->field_0x8 - *(int *)&local_90->field_0x34 != (int)uStack_68) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusCategoryType,TArray<enum_EDS_StatusType,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_88.CurrentBitIndex == uVar14) &&
        (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar12)) &&
       (pTVar10 == __return_storage_ptr__)) break;
    lVar11 = (longlong)TStack_88.CurrentBitIndex * 0x20 + *(longlong *)pTVar10;
    local_f0.Data = (FScriptContainerElement *)0x0;
    local_e8 = *(int *)(lVar11 + 0x10);
    lVar20 = (longlong)local_e8;
    _Src = *(void **)(lVar11 + 8);
    if (local_e8 == 0) {
      local_e4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_e8,0,&local_f0,local_e8,&local_e4);
      memcpy(local_f0.Data,_Src,lVar20 << 2);
    }
    AlgoImpl::
    IntroSortInternal<enum_EDS_StatusType,int,FIdentityFunctor,_FDS_StatusTableRow::GetPlayerViewDetailStatusCategoryMap_::__l16::<lambda_1>_>
              ((EDS_StatusType *)local_f0.Data,local_e8,FVar6,(<lambda_1>)FVar6);
    if (local_f0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data);
    }
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
  if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

