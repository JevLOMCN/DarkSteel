// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticStruct @ 14b4ed880

UScriptStruct * __cdecl FDS_MapIndoorGroupTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_MapIndoorGroupTableRow.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_MapIndoorGroupTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_MapIndoorGroupTableRow,(UObject *)pUVar1,
                         L"DS_MapIndoorGroupTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_MapIndoorGroupTableRow.OuterSingleton;
}

// FDS_MapIndoorGroupTableRow @ 14b4f10f0

FDS_MapIndoorGroupTableRow * __thiscall
FDS_MapIndoorGroupTableRow::FDS_MapIndoorGroupTableRow(FDS_MapIndoorGroupTableRow *this)

{
  undefined8 uVar1;
  
  this->_padding_ = (longlong)&___7FDS_MapIndoorGroupTableRow__6B_;
  this->ID = 0;
  this->DataStage = 0;
  ::FString::FString(&this->Version,L"");
  (this->ID_IndoorName).ID = 0;
  (this->ID_IndoorName)._padding_ = (longlong)&___7FDS_StringWorldID__6B_;
  this->TextureOrthoWidth = 0;
  this->ID_MapIndoorFloor = 0;
  this->ID_ZoneIsland = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ZoneIslandPosition).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ZoneIslandPosition).field0_0x0._s_0.Y = (double)uVar1;
  (this->ZoneIslandPosition).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ID_Zones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_Zones).ArrayNum = 0;
  (this->ID_Zones).ArrayMax = 0;
  this->WheelMaxCount = 0;
  this->DefaultScaleMin = 0;
  this->DefaultScaleMax = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->ID_MapZoomStep = 0;
  (this->StartPosition).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartPosition).field0_0x0._s_0.Y = (double)uVar1;
  (this->StartPosition).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->EndPosition).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->EndPosition).field0_0x0._s_0.Y = (double)uVar1;
  (this->EndPosition).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  ::FString::FString(&this->MapResourcePath,L"");
  return this;
}

// Get @ 14b93f180

FDS_MapIndoorGroupTableRow * __cdecl FDS_MapIndoorGroupTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_MapIndoorGroupTableRow *pFVar4;
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
                      (&bGEnsureHasExecuted<_3980410526965432300>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_MapIndoorGroupTableRow.cpp"
                       ,0x14,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_MapIndoorGroupTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,MapIndoorGroup);
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
      pFVar4 = (FDS_MapIndoorGroupTableRow *)
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
  return (FDS_MapIndoorGroupTableRow *)0x0;
}

// GetAll @ 14b941660

TArray<FDS_MapIndoorGroupTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_MapIndoorGroupTableRow::GetAll
          (TArray<FDS_MapIndoorGroupTableRow_const_*,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_MapIndoorGroupTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<_3980410526965432271>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_MapIndoorGroupTableRow.cpp"
                       ,0x31,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_MapIndoorGroupTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)()
      ;
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,MapIndoorGroup);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_MapIndoorGroupTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b9440a0

FDS_MapIndoorGroupTableRow * __cdecl FDS_MapIndoorGroupTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_MapIndoorGroupTableRow *pFVar4;
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
                        (&bGEnsureHasExecuted<_3980410526965432300>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_MapIndoorGroupTableRow.cpp"
                         ,0x14,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_MapIndoorGroupTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,MapIndoorGroup);
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
        pFVar4 = (FDS_MapIndoorGroupTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_MapIndoorGroupTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// ID_IndoorNameTable @ 14b9456a0

FDS_StringWorldTableRow * __thiscall
FDS_MapIndoorGroupTableRow::ID_IndoorNameTable(FDS_MapIndoorGroupTableRow *this)

{
  FDS_StringWorldTableRow *pFVar1;
  
  pFVar1 = FDS_StringWorldTableRow::GetRef((this->ID_IndoorName).ID,true);
  return pFVar1;
}

// ID_MapIndoorFloorTable @ 14b945d20

FDS_MapIndoorFloorTableRow * __thiscall
FDS_MapIndoorGroupTableRow::ID_MapIndoorFloorTable(FDS_MapIndoorGroupTableRow *this)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  UDS_TableManager *this_00;
  FDS_MapIndoorFloorTableRow *pFVar5;
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
  
  iVar1 = this->ID_MapIndoorFloor;
  if ((longlong)iVar1 == 0) {
    return &FDS_MapIndoorFloorTableRow::DefaultObject;
  }
  this_00 = UDS_TableManager::GetInst();
  if (this_00 == (UDS_TableManager *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2875180764415131664>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_MapIndoorFloorTableRow.cpp"
                       ,0x10,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FDS_MapIndoorFloorTableRow *)(*pcVar3)();
      return pFVar5;
    }
  }
  else {
    this_01 = UDS_TableManager::GetDataTable(this_00,MapIndoorFloor);
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
      pUVar8 = FDS_MapIndoorFloorTableRow::StaticStruct();
      pFVar5 = (FDS_MapIndoorFloorTableRow *)
               UDataTable::FindRowInternal(this_01,pUVar8,FVar2,(wchar_t *)FVar10.Data,true);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (pFVar5 != (FDS_MapIndoorFloorTableRow *)0x0) {
        return pFVar5;
      }
    }
  }
  return &FDS_MapIndoorFloorTableRow::DefaultObject;
}

// ID_MapZoomStepTable @ 14b946120

FDS_MapZoomStepTableRow * __thiscall
FDS_MapIndoorGroupTableRow::ID_MapZoomStepTable(FDS_MapIndoorGroupTableRow *this)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  UDS_TableManager *this_00;
  FDS_MapZoomStepTableRow *pFVar5;
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
  
  iVar1 = this->ID_MapZoomStep;
  if ((longlong)iVar1 == 0) {
    return &FDS_MapZoomStepTableRow::DefaultObject;
  }
  this_00 = UDS_TableManager::GetInst();
  if (this_00 == (UDS_TableManager *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7385824086611460081>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_MapZoomStepTableRow.cpp"
                       ,0xf,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FDS_MapZoomStepTableRow *)(*pcVar3)();
      return pFVar5;
    }
  }
  else {
    this_01 = UDS_TableManager::GetDataTable(this_00,MapZoomStep);
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
      pUVar8 = FDS_MapZoomStepTableRow::StaticStruct();
      pFVar5 = (FDS_MapZoomStepTableRow *)
               UDataTable::FindRowInternal(this_01,pUVar8,FVar2,(wchar_t *)FVar10.Data,true);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (pFVar5 != (FDS_MapZoomStepTableRow *)0x0) {
        return pFVar5;
      }
    }
  }
  return &FDS_MapZoomStepTableRow::DefaultObject;
}

// ID_ZoneIslandTable @ 14b946970

FDS_ZoneIslandTableRow * __thiscall
FDS_MapIndoorGroupTableRow::ID_ZoneIslandTable(FDS_MapIndoorGroupTableRow *this)

{
  FDS_ZoneIslandTableRow *pFVar1;
  
  pFVar1 = FDS_ZoneIslandTableRow::GetRef((longlong)this->ID_ZoneIsland,true);
  return pFVar1;
}

// ID_ZonesTables @ 14b9469b0

TArray<FDS_ZoneBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_MapIndoorGroupTableRow::ID_ZonesTables
          (FDS_MapIndoorGroupTableRow *this,
          TArray<FDS_ZoneBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  undefined1 local_res10 [8];
  TArray<FDS_ZoneBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  FDS_ZoneBaseTableRow::GetAll(&local_38);
  iVar4 = local_38.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar7.Data = local_38.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_38.ArrayNum != iVar4) {
        `TCheckedPointerIterator<FDS_ZoneBaseTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      if (FVar7.Data == pFVar1) {
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pFVar6 = (this->ID_Zones).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar7.Data;
      pFVar2 = pFVar6 + (longlong)(this->ID_Zones).ArrayNum * 4;
      if (pFVar6 != pFVar2) break;
LAB_14b946a6c:
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
        goto LAB_14b946a6c;
      }
      pFVar6 = pFVar6 + 4;
    } while (pFVar6 != pFVar2);
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// IsValid @ 14b946df0

bool __thiscall FDS_MapIndoorGroupTableRow::IsValid(FDS_MapIndoorGroupTableRow *this)

{
  return this != &DefaultObject;
}

