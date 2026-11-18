// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticStruct @ 14b7611c0

UScriptStruct * __cdecl FDS_WindowBaseTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_WindowBaseTableRow.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_WindowBaseTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_WindowBaseTableRow,(UObject *)pUVar1,
                         L"DS_WindowBaseTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_WindowBaseTableRow.OuterSingleton;
}

// FDS_WindowBaseTableRow @ 14b764070

FDS_WindowBaseTableRow * __thiscall
FDS_WindowBaseTableRow::FDS_WindowBaseTableRow(FDS_WindowBaseTableRow *this)

{
  TVector2<double> TVar1;
  
  this->_padding_ = (longlong)&___7FDS_WindowBaseTableRow__6B_;
  this->ID = None;
  this->DataStage = 0;
  ::FString::FString(&this->Version,L"");
  this->WindowLayerGroupType = None;
  this->WindowInstanceType = None;
  this->IsUseUiScale = false;
  this->WindowAnchorType = None;
  (this->DefaultPosition).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->IsClose = false;
  this->Subordination = None;
  this->TestID = 0;
  (this->DefaultSize).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->WidgetPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->WidgetPath).AssetPath.PackageName.Number = 0;
  (this->WidgetPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->WidgetPath).AssetPath.AssetName.Number = 0;
  (this->WidgetPath).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WidgetPath).SubPathString.Data.ArrayNum = 0;
  (this->WidgetPath).SubPathString.Data.ArrayMax = 0;
  ::FString::FString(&this->WindowOverDelay,L"");
  ::FString::FString(&this->WindowHideDelay,L"");
  this->InputMappingType = None;
  return this;
}

// Get @ 14b9ab180

FDS_WindowBaseTableRow * __cdecl FDS_WindowBaseTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_WindowBaseTableRow *pFVar4;
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
                      (&bGEnsureHasExecuted<383309630551359503>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_WindowBaseTableRow.cpp"
                       ,0xf,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_WindowBaseTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,WindowBase);
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
      pFVar4 = (FDS_WindowBaseTableRow *)
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
  return (FDS_WindowBaseTableRow *)0x0;
}

// GetAll @ 14b9ac6d0

TArray<FDS_WindowBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_WindowBaseTableRow::GetAll
          (TArray<FDS_WindowBaseTableRow_const_*,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_WindowBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<383309630551359532>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_WindowBaseTableRow.cpp"
                       ,0x2c,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_WindowBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,WindowBase);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_WindowBaseTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b9b1760

FDS_WindowBaseTableRow * __cdecl FDS_WindowBaseTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_WindowBaseTableRow *pFVar4;
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
                        (&bGEnsureHasExecuted<383309630551359503>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_WindowBaseTableRow.cpp"
                         ,0xf,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_WindowBaseTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,WindowBase);
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
        pFVar4 = (FDS_WindowBaseTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_WindowBaseTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// IsValid @ 14b9b7bb0

bool __thiscall FDS_WindowBaseTableRow::IsValid(FDS_WindowBaseTableRow *this)

{
  return this != &DefaultObject;
}

// operator= @ 14bb4d9e0

FDS_WindowBaseTableRow * __thiscall
FDS_WindowBaseTableRow::operator=(FDS_WindowBaseTableRow *this,FDS_WindowBaseTableRow *param_1)

{
  double dVar1;
  
  this->ID = param_1->ID;
  this->DataStage = param_1->DataStage;
  ::FString::operator=(&this->Version,&param_1->Version);
  this->WindowLayerGroupType = param_1->WindowLayerGroupType;
  this->WindowInstanceType = param_1->WindowInstanceType;
  this->IsUseUiScale = param_1->IsUseUiScale;
  this->WindowAnchorType = param_1->WindowAnchorType;
  dVar1 = (param_1->DefaultPosition).field0_0x0._s_0.Y;
  (this->DefaultPosition).field0_0x0._s_0.X = (param_1->DefaultPosition).field0_0x0._s_0.X;
  (this->DefaultPosition).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->DefaultSize).field0_0x0._s_0.Y;
  (this->DefaultSize).field0_0x0._s_0.X = (param_1->DefaultSize).field0_0x0._s_0.X;
  (this->DefaultSize).field0_0x0._s_0.Y = dVar1;
  this->IsClose = param_1->IsClose;
  this->Subordination = param_1->Subordination;
  FSoftObjectPath::operator=(&this->WidgetPath,&param_1->WidgetPath);
  this->TestID = param_1->TestID;
  ::FString::operator=(&this->WindowOverDelay,&param_1->WindowOverDelay);
  ::FString::operator=(&this->WindowHideDelay,&param_1->WindowHideDelay);
  this->InputMappingType = param_1->InputMappingType;
  return this;
}

