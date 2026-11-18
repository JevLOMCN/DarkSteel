// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticStruct @ 14b5a7180

UScriptStruct * __cdecl FDS_StuffSpawnTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_StuffSpawnTableRow.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_StuffSpawnTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_StuffSpawnTableRow,(UObject *)pUVar1,
                         L"DS_StuffSpawnTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_StuffSpawnTableRow.OuterSingleton;
}

// FDS_StuffSpawnTableRow @ 14b5a9090

FDS_StuffSpawnTableRow * __thiscall
FDS_StuffSpawnTableRow::FDS_StuffSpawnTableRow(FDS_StuffSpawnTableRow *this)

{
  undefined8 uVar1;
  
  this->_padding_ = (longlong)&___7FDS_StuffSpawnTableRow__6B_;
  this->ID = 0;
  this->DataStage = 0;
  ::FString::FString(&this->DataStageString,L"");
  (this->ID_Stuff).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_Stuff).ArrayNum = 0;
  (this->ID_Stuff).ArrayMax = 0;
  (this->StuffSpawnChance).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StuffSpawnChance).ArrayNum = 0;
  (this->StuffSpawnChance).ArrayMax = 0;
  this->ID_Zone = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Location).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Location).field0_0x0._s_0.Y = (double)uVar1;
  (this->Location).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->RotateYaw = 0.0;
  this->SpawnRadius = 0.0;
  this->IsGroupSpawn = false;
  this->SpawnTriggerType = None;
  this->FirstSpawnDelayMin = 0.0;
  this->FirstSpawnDelayMax = 0.0;
  this->RespawnTimeMin = 0.0;
  this->RespawnTimeMax = 0.0;
  this->StuffSpawnType = Navi;
  return this;
}

// Get @ 14b983c60

FDS_StuffSpawnTableRow * __cdecl FDS_StuffSpawnTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_StuffSpawnTableRow *pFVar4;
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
                      (&bGEnsureHasExecuted<_8038780809206824943>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_StuffSpawnTableRow.cpp"
                       ,0x11,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_StuffSpawnTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,StuffSpawn);
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
      pFVar4 = (FDS_StuffSpawnTableRow *)
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
  return (FDS_StuffSpawnTableRow *)0x0;
}

// GetAll @ 14b986660

TArray<FDS_StuffSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_StuffSpawnTableRow::GetAll
          (TArray<FDS_StuffSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_StuffSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<_8038780809206824914>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_StuffSpawnTableRow.cpp"
                       ,0x2e,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_StuffSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,StuffSpawn);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_StuffSpawnTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b989300

FDS_StuffSpawnTableRow * __cdecl FDS_StuffSpawnTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_StuffSpawnTableRow *pFVar4;
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
                        (&bGEnsureHasExecuted<_8038780809206824943>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_StuffSpawnTableRow.cpp"
                         ,0x11,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_StuffSpawnTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,StuffSpawn);
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
        pFVar4 = (FDS_StuffSpawnTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_StuffSpawnTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// ID_StuffTables @ 14b98be30

TArray<FDS_StuffBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_StuffSpawnTableRow::ID_StuffTables
          (FDS_StuffSpawnTableRow *this,
          TArray<FDS_StuffBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  UDS_TableManager *this_00;
  TArray<FDS_StuffBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar8;
  UDataTable *this_01;
  FScriptContainerElement *pFVar9;
  ForAnyElementType FVar10;
  undefined1 local_res10 [8];
  FName local_res18;
  TArray<FDS_StuffBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  this_00 = UDS_TableManager::GetInst();
  if (this_00 == (UDS_TableManager *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6466662894418264119>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_StuffBaseTableRow.cpp"
                       ,0x37,"false");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TArray<FDS_StuffBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar8;
    }
  }
  else {
    this_01 = UDS_TableManager::GetDataTable(this_00,StuffBase);
    if (this_01 != (UDataTable *)0x0) {
      local_res18 = (FName)this_01->_padding_;
      ::FName::ToString(&local_res18,&local_38);
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar10.Data = local_38.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_StuffBaseTableRow_const_>(this_01,(wchar_t *)FVar10.Data,&local_48)
      ;
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
        `TCheckedPointerIterator<FDS_StuffBaseTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      if (FVar10.Data == pFVar1) {
        if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pFVar9 = (this->ID_Stuff).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar10.Data;
      pFVar2 = pFVar9 + (longlong)(this->ID_Stuff).ArrayNum * 4;
      if (pFVar9 != pFVar2) break;
LAB_14b98bf71:
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
        goto LAB_14b98bf71;
      }
      pFVar9 = pFVar9 + 4;
    } while (pFVar9 != pFVar2);
    FVar10.Data = FVar10.Data + 8;
  } while( true );
}

// ID_ZoneTable @ 14b98c6d0

FDS_ZoneBaseTableRow * __thiscall FDS_StuffSpawnTableRow::ID_ZoneTable(FDS_StuffSpawnTableRow *this)

{
  FDS_ZoneBaseTableRow *pFVar1;
  
  pFVar1 = FDS_ZoneBaseTableRow::GetRef((longlong)this->ID_Zone,true);
  return pFVar1;
}

// IsValid @ 14b98ca10

bool __thiscall FDS_StuffSpawnTableRow::IsValid(FDS_StuffSpawnTableRow *this)

{
  return this != &DefaultObject;
}

// GetByIsland @ 14b9ada70

TArray<FDS_StuffSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_StuffSpawnTableRow::GetByIsland
          (TArray<FDS_StuffSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_StuffSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
  UDS_WorldMapManager *this_00;
  UDataTable *this_01;
  ForAnyElementType FVar4;
  int iVar5;
  FName local_res8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_a8;
  FString local_98;
  FSoftObjectPath local_88;
  FString local_68;
  FScriptContainerElement *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  FStringFormatArg local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  FStringFormatArg::FStringFormatArg(&local_38,param_1);
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_a8.AllocatorInstance,1,&local_a8.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_a8.AllocatorInstance.Data,&local_38,1)
  ;
  ::FString::FormatImpl(&local_98,L"/Game/Datas/Common/StuffSpawn/Island/{0}.{0}",&local_a8);
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
  if ((FStringFormatArg *)local_a8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  if (local_38.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.StringValue.Data.AllocatorInstance.Data);
  }
  this = UDS_TableManager::GetInst();
  if (this == (UDS_TableManager *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_472813725343023092>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Public\\DS_StuffSpawnTableRow.hpp.cpp"
                       ,0xc,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_StuffSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  else {
    this_00 = UDS_WorldMapManager::GetInst();
    if (this_00 != (UDS_WorldMapManager *)0x0) {
      iVar5 = (int)param_1 + 1000000;
      bVar2 = UDS_WorldMapManager::IsContainsGCDataTableMap(this_00,iVar5);
      if (bVar2) {
        this_01 = UDS_WorldMapManager::GetDataTableGC(this_00,iVar5);
      }
      else {
        local_58 = local_98.Data.AllocatorInstance.Data;
        local_88.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_88.AssetPath.PackageName.Number = 0;
        local_88.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_88.AssetPath.AssetName.Number = 0;
        local_88.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.SubPathString.Data.ArrayNum = 0;
        local_88.SubPathString.Data.ArrayMax = 0;
        iStack_50 = local_98.Data.ArrayNum + -1;
        if (local_98.Data.ArrayNum == 0) {
          iStack_50 = 0;
        }
        local_48._12_4_ = uStack_4c;
        local_48.Size = iStack_50;
        local_48.DataPtr = (wchar_t *)local_98.Data.AllocatorInstance.Data;
        FSoftObjectPath::SetPath(&local_88,&local_48);
        this_01 = UDS_TableManager::RequestSyncLoadTable(this,&local_88);
        UDS_WorldMapManager::SetDataTableGCMap(this_00,iVar5,this_01);
      }
      if (this_01 != (UDataTable *)0x0) {
        local_res8 = (FName)this_01->_padding_;
        ::FName::ToString(&local_res8,&local_68);
        FVar4.Data = (FScriptContainerElement *)L"";
        if (local_68.Data.ArrayNum != 0) {
          FVar4.Data = local_68.Data.AllocatorInstance.Data;
        }
        UDataTable::GetAllRows<FDS_StuffSpawnTableRow_const_>
                  (this_01,(wchar_t *)FVar4.Data,__return_storage_ptr__);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

