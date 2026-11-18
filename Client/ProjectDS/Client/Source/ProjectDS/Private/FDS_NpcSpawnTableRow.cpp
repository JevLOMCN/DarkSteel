// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticStruct @ 14b545fd0

UScriptStruct * __cdecl FDS_NpcSpawnTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_NpcSpawnTableRow.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_NpcSpawnTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_NpcSpawnTableRow,(UObject *)pUVar1,
                         L"DS_NpcSpawnTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_NpcSpawnTableRow.OuterSingleton;
}

// FDS_NpcSpawnTableRow @ 14b54a2d0

FDS_NpcSpawnTableRow * __thiscall
FDS_NpcSpawnTableRow::FDS_NpcSpawnTableRow(FDS_NpcSpawnTableRow *this)

{
  undefined8 uVar1;
  
  this->_padding_ = (longlong)&___7FDS_NpcSpawnTableRow__6B_;
  this->ID = 0;
  this->DataStage = 0;
  ::FString::FString(&this->DataStageString,L"");
  (this->ID_NpcBase).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_NpcBase).ArrayNum = 0;
  (this->ID_NpcBase).ArrayMax = 0;
  (this->NpcSpawnChance).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NpcSpawnChance).ArrayNum = 0;
  (this->NpcSpawnChance).ArrayMax = 0;
  this->ID_Zone = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Location).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Location).field0_0x0._s_0.Y = (double)uVar1;
  (this->Location).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->RotateYaw = 0.0;
  this->SpawnTriggerType = None;
  this->SpawnRadius = 0.0;
  this->FirstSpawnDelayMin = 0.0;
  this->FirstSpawnDelayMax = 0.0;
  this->RespawnTimeMin = 0.0;
  this->RespawnTimeMax = 0.0;
  this->IsWandering = false;
  this->WanderingRadius = 0.0;
  this->WanderingMinRadius = 0.0;
  this->WanderingMaxRadius = 0.0;
  this->WanderingWaitTimeMin = 0.0;
  this->WanderingWaitTimeMax = 0.0;
  this->WanderingMaxTime = 0.0;
  this->LinkGroupID = 0;
  this->LinkGroupRadius = 0.0;
  this->IsInitPatrol = false;
  this->ID_Patrol = 0;
  this->PatrolFormationIndex = 0;
  this->IsShowMapIndex = false;
  this->GimmickConditionGroup = 0;
  this->GimmickActionGroup = 0;
  this->NpcSpawnType = Navi;
  return this;
}

// Get @ 14b94fbf0

FDS_NpcSpawnTableRow * __cdecl FDS_NpcSpawnTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_NpcSpawnTableRow *pFVar4;
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
                      (&bGEnsureHasExecuted<6992219037199499281>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_NpcSpawnTableRow.cpp"
                       ,0x11,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_NpcSpawnTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,NpcSpawn);
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
      pFVar4 = (FDS_NpcSpawnTableRow *)
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
  return (FDS_NpcSpawnTableRow *)0x0;
}

// GetAll @ 14b9521a0

TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_NpcSpawnTableRow::GetAll
          (TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<6992219037199499310>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_NpcSpawnTableRow.cpp"
                       ,0x2e,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,NpcSpawn);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_NpcSpawnTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b954d10

FDS_NpcSpawnTableRow * __cdecl FDS_NpcSpawnTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_NpcSpawnTableRow *pFVar4;
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
                        (&bGEnsureHasExecuted<6992219037199499281>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_NpcSpawnTableRow.cpp"
                         ,0x11,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_NpcSpawnTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,NpcSpawn);
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
        pFVar4 = (FDS_NpcSpawnTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_NpcSpawnTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// ID_NpcBaseTables @ 14b956860

TArray<FDS_NpcBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_NpcSpawnTableRow::ID_NpcBaseTables
          (FDS_NpcSpawnTableRow *this,
          TArray<FDS_NpcBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  undefined1 local_res10 [8];
  TArray<FDS_NpcBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  FDS_NpcBaseTableRow::GetAll(&local_38);
  iVar4 = local_38.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar7.Data = local_38.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_38.ArrayNum != iVar4) {
        `TCheckedPointerIterator<FDS_NpcBaseTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (FVar7.Data == pFVar1) {
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pFVar6 = (this->ID_NpcBase).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar7.Data;
      pFVar2 = pFVar6 + (longlong)(this->ID_NpcBase).ArrayNum * 4;
      if (pFVar6 != pFVar2) break;
LAB_14b95691c:
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
        goto LAB_14b95691c;
      }
      pFVar6 = pFVar6 + 4;
    } while (pFVar6 != pFVar2);
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// ID_ZoneTable @ 14b958760

FDS_ZoneBaseTableRow * __thiscall FDS_NpcSpawnTableRow::ID_ZoneTable(FDS_NpcSpawnTableRow *this)

{
  FDS_ZoneBaseTableRow *pFVar1;
  
  pFVar1 = FDS_ZoneBaseTableRow::GetRef((longlong)this->ID_Zone,true);
  return pFVar1;
}

// IsValid @ 14b958ae0

bool __thiscall FDS_NpcSpawnTableRow::IsValid(FDS_NpcSpawnTableRow *this)

{
  return this != &DefaultObject;
}

// GetByDungeonZoneID @ 14b9ad490

TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_NpcSpawnTableRow::GetByDungeonZoneID
          (TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
  ::FString::FormatImpl(&local_98,L"/Game/Datas/Common/NpcSpawn/Dungeon/{0}.{0}",&local_a8);
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
                      (&bGEnsureHasExecuted<_4373904925134946252>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Public\\DS_NpcSpawnTableRow.hpp.cpp"
                       ,0x34,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  else {
    this_00 = UDS_WorldMapManager::GetInst();
    if (this_00 != (UDS_WorldMapManager *)0x0) {
      iVar5 = (int)param_1 + 2000000;
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
        UDataTable::GetAllRows<FDS_NpcSpawnTableRow_const_>
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

// GetByIsland @ 14b9ad840

TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_NpcSpawnTableRow::GetByIsland
          (TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
  ::FString::FormatImpl(&local_98,L"/Game/Datas/Common/NpcSpawn/Island/{0}.{0}",&local_a8);
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
                      (&bGEnsureHasExecuted<_4373904925134946292>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Public\\DS_NpcSpawnTableRow.hpp.cpp"
                       ,0xc,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  else {
    this_00 = UDS_WorldMapManager::GetInst();
    if (this_00 != (UDS_WorldMapManager *)0x0) {
      iVar5 = (int)param_1 + 2000000;
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
        UDataTable::GetAllRows<FDS_NpcSpawnTableRow_const_>
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

// GetByPhasingBaseID @ 14b9adca0

TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_NpcSpawnTableRow::GetByPhasingBaseID
          (TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
  ::FString::FormatImpl(&local_98,L"/Game/Datas/Common/NpcSpawn/Phasing/{0}.{0}",&local_a8);
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
                      (&bGEnsureHasExecuted<_4373904925134946212>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Public\\DS_NpcSpawnTableRow.hpp.cpp"
                       ,0x5c,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  else {
    this_00 = UDS_WorldMapManager::GetInst();
    if (this_00 != (UDS_WorldMapManager *)0x0) {
      iVar5 = (int)param_1 + 4000000;
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
        UDataTable::GetAllRows<FDS_NpcSpawnTableRow_const_>
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

