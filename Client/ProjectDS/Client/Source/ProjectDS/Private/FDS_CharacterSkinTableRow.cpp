// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticStruct @ 14b440d10

UScriptStruct * __cdecl FDS_CharacterSkinTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_CharacterSkinTableRow.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_CharacterSkinTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_CharacterSkinTableRow,(UObject *)pUVar1,
                         L"DS_CharacterSkinTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_CharacterSkinTableRow.OuterSingleton;
}

// FDS_CharacterSkinTableRow @ 14b4437a0

FDS_CharacterSkinTableRow * __thiscall
FDS_CharacterSkinTableRow::FDS_CharacterSkinTableRow(FDS_CharacterSkinTableRow *this)

{
  this->_padding_ = (longlong)&___7FDS_CharacterSkinTableRow__6B_;
  this->ID = 0;
  this->DataStage = 0;
  ::FString::FString(&this->Version,L"");
  this->UIOrder = 0;
  this->ID_ReqChar = 0;
  (this->ID_SkinTitle)._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  (this->ID_SkinTitle).ID = 0;
  this->ID_Portrait = 0;
  this->ID_CardImg = 0;
  this->ID_ResourcePreset = 0;
  this->ID_OutGameResourcePreset = 0;
  this->ID_ResourceSequence = 0;
  this->ReqTemplateType = None;
  this->ReqTemplateValue = 0;
  this->ReqItem = 0;
  this->ReqItemCnt = 0;
  this->ReqMoneyType = None;
  this->ReqMoneyCnt = 0;
  this->ID_MoneyExchange = 0;
  return this;
}

// Get @ 14b9027a0

FDS_CharacterSkinTableRow * __cdecl FDS_CharacterSkinTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_CharacterSkinTableRow *pFVar4;
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
                      (&bGEnsureHasExecuted<_3259721972543651819>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_CharacterSkinTableRow.cpp"
                       ,0x15,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_CharacterSkinTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,CharacterSkin);
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
      pFVar4 = (FDS_CharacterSkinTableRow *)
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
  return (FDS_CharacterSkinTableRow *)0x0;
}

// GetAll @ 14b9047e0

TArray<FDS_CharacterSkinTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_CharacterSkinTableRow::GetAll
          (TArray<FDS_CharacterSkinTableRow_const_*,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_CharacterSkinTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<_3259721972543651790>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_CharacterSkinTableRow.cpp"
                       ,0x32,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_CharacterSkinTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,CharacterSkin);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_CharacterSkinTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b908cd0

FDS_CharacterSkinTableRow * __cdecl FDS_CharacterSkinTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_CharacterSkinTableRow *pFVar4;
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
                        (&bGEnsureHasExecuted<_3259721972543651819>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_CharacterSkinTableRow.cpp"
                         ,0x15,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_CharacterSkinTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,CharacterSkin);
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
        pFVar4 = (FDS_CharacterSkinTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_CharacterSkinTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// ID_CardImgTable @ 14b90a010

FDS_ResourceIconTableRow * __thiscall
FDS_CharacterSkinTableRow::ID_CardImgTable(FDS_CharacterSkinTableRow *this)

{
  FDS_ResourceIconTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceIconTableRow::GetRef((longlong)this->ID_CardImg,true);
  return pFVar1;
}

// ID_MoneyExchangeTable @ 14b90af00

FDS_MoneyExchangeTableRow * __thiscall
FDS_CharacterSkinTableRow::ID_MoneyExchangeTable(FDS_CharacterSkinTableRow *this)

{
  FDS_MoneyExchangeTableRow *pFVar1;
  
  pFVar1 = FDS_MoneyExchangeTableRow::GetRef((longlong)this->ID_MoneyExchange,true);
  return pFVar1;
}

// ID_OutGameResourcePresetTable @ 14b90b150

FDS_ResourcePresetTableRow * __thiscall
FDS_CharacterSkinTableRow::ID_OutGameResourcePresetTable(FDS_CharacterSkinTableRow *this)

{
  FDS_ResourcePresetTableRow *pFVar1;
  
  pFVar1 = FDS_ResourcePresetTableRow::GetRef((longlong)this->ID_OutGameResourcePreset,true);
  return pFVar1;
}

// ID_PortraitTable @ 14b90b290

FDS_ResourceIconTableRow * __thiscall
FDS_CharacterSkinTableRow::ID_PortraitTable(FDS_CharacterSkinTableRow *this)

{
  FDS_ResourceIconTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceIconTableRow::GetRef((longlong)this->ID_Portrait,true);
  return pFVar1;
}

// ID_ReqCharTable @ 14b90b2b0

FDS_CharacterBaseTableRow * __thiscall
FDS_CharacterSkinTableRow::ID_ReqCharTable(FDS_CharacterSkinTableRow *this)

{
  FDS_CharacterBaseTableRow *pFVar1;
  
  pFVar1 = FDS_CharacterBaseTableRow::GetRef((longlong)this->ID_ReqChar,true);
  return pFVar1;
}

// ID_ResourcePresetTable @ 14b90b490

FDS_ResourcePresetTableRow * __thiscall
FDS_CharacterSkinTableRow::ID_ResourcePresetTable(FDS_CharacterSkinTableRow *this)

{
  FDS_ResourcePresetTableRow *pFVar1;
  
  pFVar1 = FDS_ResourcePresetTableRow::GetRef((longlong)this->ID_ResourcePreset,true);
  return pFVar1;
}

// ID_ResourceSequenceTable @ 14b90b4b0

FDS_ResourceSequenceTableRow * __thiscall
FDS_CharacterSkinTableRow::ID_ResourceSequenceTable(FDS_CharacterSkinTableRow *this)

{
  FDS_ResourceSequenceTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceSequenceTableRow::GetRef((longlong)this->ID_ResourceSequence,true);
  return pFVar1;
}

// ID_SkinTitleTable @ 14b90b740

FDS_StringBaseTableRow * __thiscall
FDS_CharacterSkinTableRow::ID_SkinTitleTable(FDS_CharacterSkinTableRow *this)

{
  FDS_StringBaseTableRow *pFVar1;
  
  pFVar1 = FDS_StringBaseTableRow::GetRef((this->ID_SkinTitle).ID,true);
  return pFVar1;
}

// IsValid @ 14b90bf00

bool __thiscall FDS_CharacterSkinTableRow::IsValid(FDS_CharacterSkinTableRow *this)

{
  return this != &DefaultObject;
}

