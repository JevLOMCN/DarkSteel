// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticStruct @ 14b57b7c0

UScriptStruct * __cdecl FDS_ResourcePresetTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ResourcePresetTableRow.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ResourcePresetTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ResourcePresetTableRow,(UObject *)pUVar1,
                         L"DS_ResourcePresetTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ResourcePresetTableRow.OuterSingleton;
}

// FDS_ResourcePresetTableRow @ 14b57d9e0

FDS_ResourcePresetTableRow * __thiscall
FDS_ResourcePresetTableRow::FDS_ResourcePresetTableRow(FDS_ResourcePresetTableRow *this)

{
  this->_padding_ = (longlong)&___7FDS_ResourcePresetTableRow__6B_;
  this->ID = 0;
  this->DataStage = 0;
  ::FString::FString(&this->Version,L"");
  this->ID_ResourceMesh = 0;
  (this->WorkSpacePath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->WorkSpacePath).AssetPath.PackageName.Number = 0;
  (this->WorkSpacePath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->WorkSpacePath).AssetPath.AssetName.Number = 0;
  (this->WorkSpacePath).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkSpacePath).SubPathString.Data.ArrayNum = 0;
  (this->WorkSpacePath).SubPathString.Data.ArrayMax = 0;
  this->CharacterID = 0;
  this->PresetID = 0;
  this->CapsuleHalfHeight = 0.0;
  this->CapsuleRadius = 0.0;
  this->ID_AbpLink = 0;
  this->HitEffectZOffset = 0.0;
  (this->DestructionGCPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->DestructionGCPath).AssetPath.PackageName.Number = 0;
  (this->DestructionGCPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->DestructionGCPath).AssetPath.AssetName.Number = 0;
  (this->DestructionGCPath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DestructionGCPath).SubPathString.Data.ArrayNum = 0;
  (this->DestructionGCPath).SubPathString.Data.ArrayMax = 0;
  return this;
}

// Get @ 14b971450

FDS_ResourcePresetTableRow * __cdecl FDS_ResourcePresetTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_ResourcePresetTableRow *pFVar4;
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
                      (&bGEnsureHasExecuted<2602189275827011601>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_ResourcePresetTableRow.cpp"
                       ,0x11,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_ResourcePresetTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,ResourcePreset);
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
      pFVar4 = (FDS_ResourcePresetTableRow *)
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
  return (FDS_ResourcePresetTableRow *)0x0;
}

// GetAll @ 14b973e20

TArray<FDS_ResourcePresetTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_ResourcePresetTableRow::GetAll
          (TArray<FDS_ResourcePresetTableRow_const_*,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_ResourcePresetTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<2602189275827011630>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_ResourcePresetTableRow.cpp"
                       ,0x2e,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_ResourcePresetTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)()
      ;
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,ResourcePreset);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_ResourcePresetTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b975e20

FDS_ResourcePresetTableRow * __cdecl FDS_ResourcePresetTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_ResourcePresetTableRow *pFVar4;
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
                        (&bGEnsureHasExecuted<2602189275827011601>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_ResourcePresetTableRow.cpp"
                         ,0x11,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_ResourcePresetTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,ResourcePreset);
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
        pFVar4 = (FDS_ResourcePresetTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_ResourcePresetTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// ID_AbpLinkTable @ 14b9789f0

FDS_ResourceAbpTableRow * __thiscall
FDS_ResourcePresetTableRow::ID_AbpLinkTable(FDS_ResourcePresetTableRow *this)

{
  FDS_ResourceAbpTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceAbpTableRow::GetRef((longlong)this->ID_AbpLink,true);
  return pFVar1;
}

// ID_ResourceMeshTable @ 14b979a30

FDS_ResourceMeshTableRow * __thiscall
FDS_ResourcePresetTableRow::ID_ResourceMeshTable(FDS_ResourcePresetTableRow *this)

{
  FDS_ResourceMeshTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceMeshTableRow::GetRef((longlong)this->ID_ResourceMesh,true);
  return pFVar1;
}

// IsValid @ 14b97aeb0

bool __thiscall FDS_ResourcePresetTableRow::IsValid(FDS_ResourcePresetTableRow *this)

{
  return this != &DefaultObject;
}

