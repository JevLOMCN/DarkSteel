// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticStruct @ 14b4d6730

UScriptStruct * __cdecl FDS_ItemFilterTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ItemFilterTableRow.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ItemFilterTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ItemFilterTableRow,(UObject *)pUVar1,
                         L"DS_ItemFilterTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ItemFilterTableRow.OuterSingleton;
}

// FDS_ItemFilterTableRow @ 14b4d9510

FDS_ItemFilterTableRow * __thiscall
FDS_ItemFilterTableRow::FDS_ItemFilterTableRow(FDS_ItemFilterTableRow *this)

{
  this->ID = None;
  this->_padding_ = (longlong)&___7FDS_ItemFilterTableRow__6B_;
  this->DataStage = 0;
  (this->EquipInit).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EquipInit).ArrayNum = 0;
  (this->EquipInit).ArrayMax = 0;
  this->IsEquipCheckable = false;
  (this->LockInit).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LockInit).ArrayNum = 0;
  (this->LockInit).ArrayMax = 0;
  this->IsLockCheckable = false;
  (this->GradeInit).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GradeInit).ArrayNum = 0;
  (this->GradeInit).ArrayMax = 0;
  this->IsGradeCheckable = false;
  (this->ItemTypeInit).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ItemTypeInit).ArrayNum = 0;
  (this->ItemTypeInit).ArrayMax = 0;
  this->IsItemTypeCheckable = false;
  (this->EnhanceItemInit).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EnhanceItemInit).ArrayNum = 0;
  (this->EnhanceItemInit).ArrayMax = 0;
  this->IsEnhanceItemCheckable = false;
  (this->ItemDismantleInit).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ItemDismantleInit).ArrayNum = 0;
  (this->ItemDismantleInit).ArrayMax = 0;
  this->IsItemDismantleCheckable = false;
  (this->RingCmdInit).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RingCmdInit).ArrayNum = 0;
  (this->RingCmdInit).ArrayMax = 0;
  this->IsRingCmdCheckable = false;
  (this->CharIdInit).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharIdInit).ArrayNum = 0;
  (this->CharIdInit).ArrayMax = 0;
  this->IsCharIdCheckable = false;
  (this->CharEquipTypeInit).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharEquipTypeInit).ArrayNum = 0;
  (this->CharEquipTypeInit).ArrayMax = 0;
  this->IsCharEquipTypeCheckable = false;
  (this->SeasonGroupInit).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SeasonGroupInit).ArrayNum = 0;
  (this->SeasonGroupInit).ArrayMax = 0;
  this->IsSeasonGroupCheckable = false;
  this->IsShowAll = false;
  (this->ItemRepairInit).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ItemRepairInit).ArrayNum = 0;
  (this->ItemRepairInit).ArrayMax = 0;
  this->ItemRepairCheckable = false;
  (this->ItemDurabilityInit).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ItemDurabilityInit).ArrayNum = 0;
  (this->ItemDurabilityInit).ArrayMax = 0;
  this->ItemDurabilityCheckable = false;
  (this->ItemEnchantInit).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ItemEnchantInit).ArrayNum = 0;
  (this->ItemEnchantInit).ArrayMax = 0;
  this->IsItemEnchantCheckable = false;
  (this->ItemEnchantScrollInit).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ItemEnchantScrollInit).ArrayNum = 0;
  (this->ItemEnchantScrollInit).ArrayMax = 0;
  this->IsItemEnchantScrollCheckable = false;
  return this;
}

// ~FDS_ItemFilterTableRow @ 14b4d97b0

void __thiscall FDS_ItemFilterTableRow::~FDS_ItemFilterTableRow(FDS_ItemFilterTableRow *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ItemEnchantScrollInit).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ItemEnchantInit).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ItemDurabilityInit).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ItemRepairInit).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SeasonGroupInit).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CharEquipTypeInit).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CharIdInit).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RingCmdInit).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ItemDismantleInit).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EnhanceItemInit).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ItemTypeInit).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GradeInit).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LockInit).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EquipInit).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// operator= @ 14b4d9ae0

FDS_ItemFilterTableRow * __thiscall
FDS_ItemFilterTableRow::operator=(FDS_ItemFilterTableRow *this,FDS_ItemFilterTableRow *param_1)

{
  TArray<EDS_FilterStateEquip,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<EDS_FilterStateLock,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<EDS_FilterStateGrade,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<EDS_FilterStateEnhanceMaterials,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<EDS_FilterStateDismantle,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<EDS_FilterStateRingCmd,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<EDS_FilterStateCharId,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<EDS_FilterStateCharEquipType,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<EDS_FilterStateSeasonGroup,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<EDS_FilterStateRepair,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<EDS_FilterStateDurability,TSizedDefaultAllocator<32>_> *pTVar12;
  TArray<EDS_FilterStateEnchant,TSizedDefaultAllocator<32>_> *pTVar13;
  TArray<EDS_FilterStateEnchantScroll,TSizedDefaultAllocator<32>_> *pTVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  
  this->ID = param_1->ID;
  this->DataStage = param_1->DataStage;
  pTVar1 = &this->EquipInit;
  if (pTVar1 != &param_1->EquipInit) {
    iVar15 = (param_1->EquipInit).ArrayNum;
    piVar2 = &(this->EquipInit).ArrayMax;
    pFVar16 = (param_1->EquipInit).AllocatorInstance.Data;
    (this->EquipInit).ArrayNum = iVar15;
    if ((iVar15 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar15,*piVar2,&pTVar1->AllocatorInstance,iVar15,piVar2);
      if (iVar15 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,pFVar16,(longlong)iVar15);
      }
    }
  }
  pTVar3 = &this->LockInit;
  this->IsEquipCheckable = param_1->IsEquipCheckable;
  if (pTVar3 != &param_1->LockInit) {
    iVar15 = (param_1->LockInit).ArrayNum;
    piVar2 = &(this->LockInit).ArrayMax;
    pFVar16 = (param_1->LockInit).AllocatorInstance.Data;
    (this->LockInit).ArrayNum = iVar15;
    if ((iVar15 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar15,*piVar2,&pTVar3->AllocatorInstance,iVar15,piVar2);
      if (iVar15 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar16,(longlong)iVar15);
      }
    }
  }
  pTVar4 = &this->GradeInit;
  this->IsLockCheckable = param_1->IsLockCheckable;
  if (pTVar4 != &param_1->GradeInit) {
    iVar15 = (param_1->GradeInit).ArrayNum;
    piVar2 = &(this->GradeInit).ArrayMax;
    pFVar16 = (param_1->GradeInit).AllocatorInstance.Data;
    (this->GradeInit).ArrayNum = iVar15;
    if ((iVar15 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar15,*piVar2,&pTVar4->AllocatorInstance,iVar15,piVar2);
      if (iVar15 != 0) {
        memcpy((pTVar4->AllocatorInstance).Data,pFVar16,(longlong)iVar15);
      }
    }
  }
  this->IsGradeCheckable = param_1->IsGradeCheckable;
  TArray<enum_EDS_ItemType,TSizedDefaultAllocator<32>_>::operator=
            (&this->ItemTypeInit,&param_1->ItemTypeInit);
  pTVar5 = &this->EnhanceItemInit;
  this->IsItemTypeCheckable = param_1->IsItemTypeCheckable;
  if (pTVar5 != &param_1->EnhanceItemInit) {
    iVar15 = (param_1->EnhanceItemInit).ArrayNum;
    piVar2 = &(this->EnhanceItemInit).ArrayMax;
    pFVar16 = (param_1->EnhanceItemInit).AllocatorInstance.Data;
    (this->EnhanceItemInit).ArrayNum = iVar15;
    if ((iVar15 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar15,*piVar2,&pTVar5->AllocatorInstance,iVar15,piVar2);
      if (iVar15 != 0) {
        memcpy((pTVar5->AllocatorInstance).Data,pFVar16,(longlong)iVar15);
      }
    }
  }
  pTVar6 = &this->ItemDismantleInit;
  this->IsEnhanceItemCheckable = param_1->IsEnhanceItemCheckable;
  if (pTVar6 != &param_1->ItemDismantleInit) {
    iVar15 = (param_1->ItemDismantleInit).ArrayNum;
    piVar2 = &(this->ItemDismantleInit).ArrayMax;
    pFVar16 = (param_1->ItemDismantleInit).AllocatorInstance.Data;
    (this->ItemDismantleInit).ArrayNum = iVar15;
    if ((iVar15 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar15,*piVar2,&pTVar6->AllocatorInstance,iVar15,piVar2);
      if (iVar15 != 0) {
        memcpy((pTVar6->AllocatorInstance).Data,pFVar16,(longlong)iVar15);
      }
    }
  }
  pTVar7 = &this->RingCmdInit;
  this->IsItemDismantleCheckable = param_1->IsItemDismantleCheckable;
  if (pTVar7 != &param_1->RingCmdInit) {
    iVar15 = (param_1->RingCmdInit).ArrayNum;
    piVar2 = &(this->RingCmdInit).ArrayMax;
    pFVar16 = (param_1->RingCmdInit).AllocatorInstance.Data;
    (this->RingCmdInit).ArrayNum = iVar15;
    if ((iVar15 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar15,*piVar2,&pTVar7->AllocatorInstance,iVar15,piVar2);
      if (iVar15 != 0) {
        memcpy((pTVar7->AllocatorInstance).Data,pFVar16,(longlong)iVar15);
      }
    }
  }
  pTVar8 = &this->CharIdInit;
  this->IsRingCmdCheckable = param_1->IsRingCmdCheckable;
  if (pTVar8 != &param_1->CharIdInit) {
    iVar15 = (param_1->CharIdInit).ArrayNum;
    piVar2 = &(this->CharIdInit).ArrayMax;
    pFVar16 = (param_1->CharIdInit).AllocatorInstance.Data;
    (this->CharIdInit).ArrayNum = iVar15;
    if ((iVar15 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar15,*piVar2,&pTVar8->AllocatorInstance,iVar15,piVar2);
      if (iVar15 != 0) {
        memcpy((pTVar8->AllocatorInstance).Data,pFVar16,(longlong)iVar15);
      }
    }
  }
  pTVar9 = &this->CharEquipTypeInit;
  this->IsCharIdCheckable = param_1->IsCharIdCheckable;
  if (pTVar9 != &param_1->CharEquipTypeInit) {
    iVar15 = (param_1->CharEquipTypeInit).ArrayNum;
    piVar2 = &(this->CharEquipTypeInit).ArrayMax;
    pFVar16 = (param_1->CharEquipTypeInit).AllocatorInstance.Data;
    (this->CharEquipTypeInit).ArrayNum = iVar15;
    if ((iVar15 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar15,*piVar2,&pTVar9->AllocatorInstance,iVar15,piVar2);
      if (iVar15 != 0) {
        memcpy((pTVar9->AllocatorInstance).Data,pFVar16,(longlong)iVar15);
      }
    }
  }
  pTVar10 = &this->SeasonGroupInit;
  this->IsCharEquipTypeCheckable = param_1->IsCharEquipTypeCheckable;
  if (pTVar10 != &param_1->SeasonGroupInit) {
    iVar15 = (param_1->SeasonGroupInit).ArrayNum;
    piVar2 = &(this->SeasonGroupInit).ArrayMax;
    pFVar16 = (param_1->SeasonGroupInit).AllocatorInstance.Data;
    (this->SeasonGroupInit).ArrayNum = iVar15;
    if ((iVar15 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar15,*piVar2,&pTVar10->AllocatorInstance,iVar15,piVar2);
      if (iVar15 != 0) {
        memcpy((pTVar10->AllocatorInstance).Data,pFVar16,(longlong)iVar15);
      }
    }
  }
  this->IsSeasonGroupCheckable = param_1->IsSeasonGroupCheckable;
  pTVar11 = &this->ItemRepairInit;
  this->IsShowAll = param_1->IsShowAll;
  if (pTVar11 != &param_1->ItemRepairInit) {
    iVar15 = (param_1->ItemRepairInit).ArrayNum;
    piVar2 = &(this->ItemRepairInit).ArrayMax;
    pFVar16 = (param_1->ItemRepairInit).AllocatorInstance.Data;
    (this->ItemRepairInit).ArrayNum = iVar15;
    if ((iVar15 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar15,*piVar2,&pTVar11->AllocatorInstance,iVar15,piVar2);
      if (iVar15 != 0) {
        memcpy((pTVar11->AllocatorInstance).Data,pFVar16,(longlong)iVar15);
      }
    }
  }
  pTVar12 = &this->ItemDurabilityInit;
  this->ItemRepairCheckable = param_1->ItemRepairCheckable;
  if (pTVar12 != &param_1->ItemDurabilityInit) {
    iVar15 = (param_1->ItemDurabilityInit).ArrayNum;
    piVar2 = &(this->ItemDurabilityInit).ArrayMax;
    pFVar16 = (param_1->ItemDurabilityInit).AllocatorInstance.Data;
    (this->ItemDurabilityInit).ArrayNum = iVar15;
    if ((iVar15 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar15,*piVar2,&pTVar12->AllocatorInstance,iVar15,piVar2);
      if (iVar15 != 0) {
        memcpy((pTVar12->AllocatorInstance).Data,pFVar16,(longlong)iVar15);
      }
    }
  }
  pTVar13 = &this->ItemEnchantInit;
  this->ItemDurabilityCheckable = param_1->ItemDurabilityCheckable;
  if (pTVar13 != &param_1->ItemEnchantInit) {
    iVar15 = (param_1->ItemEnchantInit).ArrayNum;
    piVar2 = &(this->ItemEnchantInit).ArrayMax;
    pFVar16 = (param_1->ItemEnchantInit).AllocatorInstance.Data;
    (this->ItemEnchantInit).ArrayNum = iVar15;
    if ((iVar15 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar15,*piVar2,&pTVar13->AllocatorInstance,iVar15,piVar2);
      if (iVar15 != 0) {
        memcpy((pTVar13->AllocatorInstance).Data,pFVar16,(longlong)iVar15);
      }
    }
  }
  pTVar14 = &this->ItemEnchantScrollInit;
  this->IsItemEnchantCheckable = param_1->IsItemEnchantCheckable;
  if (pTVar14 != &param_1->ItemEnchantScrollInit) {
    iVar15 = (param_1->ItemEnchantScrollInit).ArrayNum;
    piVar2 = &(this->ItemEnchantScrollInit).ArrayMax;
    pFVar16 = (param_1->ItemEnchantScrollInit).AllocatorInstance.Data;
    (this->ItemEnchantScrollInit).ArrayNum = iVar15;
    if ((iVar15 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar15,*piVar2,&pTVar14->AllocatorInstance,iVar15,piVar2);
      if (iVar15 != 0) {
        memcpy((pTVar14->AllocatorInstance).Data,pFVar16,(longlong)iVar15);
      }
    }
  }
  this->IsItemEnchantScrollCheckable = param_1->IsItemEnchantScrollCheckable;
  return this;
}

// Get @ 14b93d680

FDS_ItemFilterTableRow * __cdecl FDS_ItemFilterTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_ItemFilterTableRow *pFVar4;
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
                      (&bGEnsureHasExecuted<405690473202581519>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_ItemFilterTableRow.cpp"
                       ,0xf,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_ItemFilterTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,ItemFilter);
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
      pFVar4 = (FDS_ItemFilterTableRow *)
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
  return (FDS_ItemFilterTableRow *)0x0;
}

// GetAll @ 14b9402e0

TArray<FDS_ItemFilterTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_ItemFilterTableRow::GetAll
          (TArray<FDS_ItemFilterTableRow_const_*,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_ItemFilterTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<405690473202581548>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_ItemFilterTableRow.cpp"
                       ,0x2c,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_ItemFilterTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,ItemFilter);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_ItemFilterTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b942420

FDS_ItemFilterTableRow * __cdecl FDS_ItemFilterTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_ItemFilterTableRow *pFVar4;
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
                        (&bGEnsureHasExecuted<405690473202581519>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_ItemFilterTableRow.cpp"
                         ,0xf,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_ItemFilterTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,ItemFilter);
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
        pFVar4 = (FDS_ItemFilterTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_ItemFilterTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// IsValid @ 14b946af0

bool __thiscall FDS_ItemFilterTableRow::IsValid(FDS_ItemFilterTableRow *this)

{
  return this != &DefaultObject;
}

