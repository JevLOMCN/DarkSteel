// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticStruct @ 14b58be80

UScriptStruct * __cdecl FDS_SkillAbnormalActionTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_SkillAbnormalActionTableRow.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_SkillAbnormalActionTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_SkillAbnormalActionTableRow,(UObject *)pUVar1
                         ,L"DS_SkillAbnormalActionTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_SkillAbnormalActionTableRow.OuterSingleton;
}

// FDS_SkillAbnormalActionTableRow @ 14b58d890

FDS_SkillAbnormalActionTableRow * __thiscall
FDS_SkillAbnormalActionTableRow::FDS_SkillAbnormalActionTableRow
          (FDS_SkillAbnormalActionTableRow *this)

{
  this->_padding_ = (longlong)&___7FDS_SkillAbnormalActionTableRow__6B_;
  this->ID = 0;
  this->DataStage = 0;
  this->AbnormalType = None;
  this->AtkAbnormalPoint = 0;
  this->AbnormalDirection = Radial;
  this->AbnormalAngle = 0;
  this->IsAbnormalRotation = false;
  this->AbnormalValue = 0.0;
  this->AbnormalHeight = 0.0;
  this->AbnormalWaitTime = 0.0;
  this->AbnormalMoveTime = 0.0;
  this->AbnormalTime = 0.0;
  this->AbnormalGetUpTime = 0.0;
  this->ID_AbnormalCollide = 0;
  (this->ID_AbnormalBuff).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_AbnormalBuff).ArrayNum = 0;
  (this->ID_AbnormalBuff).ArrayMax = 0;
  (this->ID_AbnormalMyBuff).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_AbnormalMyBuff).ArrayNum = 0;
  (this->ID_AbnormalMyBuff).ArrayMax = 0;
  this->AbnormalEffect = 0;
  ::FString::FString(&this->EffectSocket,L"");
  this->EffectHeight = 0;
  this->EffectScale = 0.0;
  this->CameraShake = 0;
  ::FString::FString(&this->AtkAttachSocket,L"");
  ::FString::FString(&this->DefAttachSocket,L"");
  (this->MaterialPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->MaterialPath).AssetPath.PackageName.Number = 0;
  (this->MaterialPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->MaterialPath).AssetPath.AssetName.Number = 0;
  (this->MaterialPath).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialPath).SubPathString.Data.ArrayNum = 0;
  (this->MaterialPath).SubPathString.Data.ArrayMax = 0;
  (this->ImmuneHeightType).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImmuneHeightType).ArrayNum = 0;
  (this->ImmuneHeightType).ArrayMax = 0;
  this->IsSkillUseUncancel = false;
  this->AbnormalImmuneAtkPoint = 0;
  this->ID_HeightCondition = 0;
  return this;
}

// ~FDS_SkillAbnormalActionTableRow @ 14b58e140

void __thiscall
FDS_SkillAbnormalActionTableRow::~FDS_SkillAbnormalActionTableRow
          (FDS_SkillAbnormalActionTableRow *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ImmuneHeightType).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialPath).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DefAttachSocket).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AtkAttachSocket).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EffectSocket).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_AbnormalMyBuff).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_AbnormalBuff).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// AbnormalTypeTable @ 14b970f90

FDS_SkillAbnormalTableRow * __thiscall
FDS_SkillAbnormalActionTableRow::AbnormalTypeTable(FDS_SkillAbnormalActionTableRow *this)

{
  EDS_AbnormalType EVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  UDS_TableManager *this_00;
  FDS_SkillAbnormalTableRow *pFVar5;
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
  
  EVar1 = this->AbnormalType;
  if ((ulonglong)EVar1 == 0) {
    return &FDS_SkillAbnormalTableRow::DefaultObject;
  }
  this_00 = UDS_TableManager::GetInst();
  if (this_00 == (UDS_TableManager *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8079308249460899856>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_SkillAbnormalTableRow.cpp"
                       ,0x10,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FDS_SkillAbnormalTableRow *)(*pcVar3)();
      return pFVar5;
    }
  }
  else {
    this_01 = UDS_TableManager::GetDataTable(this_00,SkillAbnormal);
    if (this_01 != (UDataTable *)0x0) {
      local_res8 = (FName)this_01->_padding_;
      ::FName::ToString(&local_res8,&local_28);
      pFVar6 = DS_Util::FromInt64(&local_18,(ulonglong)EVar1);
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
      pUVar8 = FDS_SkillAbnormalTableRow::StaticStruct();
      pFVar5 = (FDS_SkillAbnormalTableRow *)
               UDataTable::FindRowInternal(this_01,pUVar8,FVar2,(wchar_t *)FVar10.Data,true);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (pFVar5 != (FDS_SkillAbnormalTableRow *)0x0) {
        return pFVar5;
      }
    }
  }
  return &FDS_SkillAbnormalTableRow::DefaultObject;
}

// Get @ 14b9722f0

FDS_SkillAbnormalActionTableRow * __cdecl
FDS_SkillAbnormalActionTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_SkillAbnormalActionTableRow *pFVar4;
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
                      (&bGEnsureHasExecuted<5232594983550189587>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_SkillAbnormalActionTableRow.cpp"
                       ,0x13,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_SkillAbnormalActionTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,SkillAbnormalAction);
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
      pFVar4 = (FDS_SkillAbnormalActionTableRow *)
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
  return (FDS_SkillAbnormalActionTableRow *)0x0;
}

// GetAll @ 14b9748b0

TArray<FDS_SkillAbnormalActionTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_SkillAbnormalActionTableRow::GetAll
          (TArray<FDS_SkillAbnormalActionTableRow_const_*,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_SkillAbnormalActionTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<5232594983550189616>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_SkillAbnormalActionTableRow.cpp"
                       ,0x30,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_SkillAbnormalActionTableRow_const_*,TSizedDefaultAllocator<32>_> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,SkillAbnormalAction);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_SkillAbnormalActionTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b976d90

FDS_SkillAbnormalActionTableRow * __cdecl
FDS_SkillAbnormalActionTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_SkillAbnormalActionTableRow *pFVar4;
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
                        (&bGEnsureHasExecuted<5232594983550189587>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_SkillAbnormalActionTableRow.cpp"
                         ,0x13,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_SkillAbnormalActionTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,SkillAbnormalAction);
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
        pFVar4 = (FDS_SkillAbnormalActionTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_SkillAbnormalActionTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// ID_AbnormalBuffTables @ 14b9787d0

TArray<FDS_BuffBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_SkillAbnormalActionTableRow::ID_AbnormalBuffTables
          (FDS_SkillAbnormalActionTableRow *this,
          TArray<FDS_BuffBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  undefined1 local_res10 [8];
  TArray<FDS_BuffBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  FDS_BuffBaseTableRow::GetAll(&local_38);
  iVar4 = local_38.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar7.Data = local_38.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_38.ArrayNum != iVar4) {
        `TCheckedPointerIterator<FDS_BuffBaseTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      if (FVar7.Data == pFVar1) {
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pFVar6 = (this->ID_AbnormalBuff).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar7.Data;
      pFVar2 = pFVar6 + (longlong)(this->ID_AbnormalBuff).ArrayNum * 4;
      if (pFVar6 != pFVar2) break;
LAB_14b97888c:
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
        goto LAB_14b97888c;
      }
      pFVar6 = pFVar6 + 4;
    } while (pFVar6 != pFVar2);
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// ID_AbnormalCollideTable @ 14b9788d0

FDS_SkillAbnormalActionTableRow * __thiscall
FDS_SkillAbnormalActionTableRow::ID_AbnormalCollideTable(FDS_SkillAbnormalActionTableRow *this)

{
  FDS_SkillAbnormalActionTableRow *pFVar1;
  
  pFVar1 = GetRef((longlong)this->ID_AbnormalCollide,true);
  return pFVar1;
}

// ID_AbnormalMyBuffTables @ 14b9788f0

TArray<FDS_BuffBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_SkillAbnormalActionTableRow::ID_AbnormalMyBuffTables
          (FDS_SkillAbnormalActionTableRow *this,
          TArray<FDS_BuffBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  undefined1 local_res10 [8];
  TArray<FDS_BuffBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  FDS_BuffBaseTableRow::GetAll(&local_38);
  iVar4 = local_38.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar7.Data = local_38.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_38.ArrayNum != iVar4) {
        `TCheckedPointerIterator<FDS_BuffBaseTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      if (FVar7.Data == pFVar1) {
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pFVar6 = (this->ID_AbnormalMyBuff).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar7.Data;
      pFVar2 = pFVar6 + (longlong)(this->ID_AbnormalMyBuff).ArrayNum * 4;
      if (pFVar6 != pFVar2) break;
LAB_14b9789ac:
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
        goto LAB_14b9789ac;
      }
      pFVar6 = pFVar6 + 4;
    } while (pFVar6 != pFVar2);
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// ID_HeightConditionTable @ 14b9793b0

FDS_HeightConditionTableRow * __thiscall
FDS_SkillAbnormalActionTableRow::ID_HeightConditionTable(FDS_SkillAbnormalActionTableRow *this)

{
  FDS_HeightConditionTableRow *pFVar1;
  
  pFVar1 = FDS_HeightConditionTableRow::GetRef((longlong)this->ID_HeightCondition,true);
  return pFVar1;
}

// IsValid @ 14b97b050

bool __thiscall FDS_SkillAbnormalActionTableRow::IsValid(FDS_SkillAbnormalActionTableRow *this)

{
  return this != &DefaultObject;
}

