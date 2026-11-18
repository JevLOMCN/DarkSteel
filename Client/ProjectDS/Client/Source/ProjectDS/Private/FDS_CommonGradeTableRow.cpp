// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 22

// StaticStruct @ 14b461120

UScriptStruct * __cdecl FDS_CommonGradeTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_CommonGradeTableRow.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_CommonGradeTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_CommonGradeTableRow,(UObject *)pUVar1,
                         L"DS_CommonGradeTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_CommonGradeTableRow.OuterSingleton;
}

// FDS_CommonGradeTableRow @ 14b465570

FDS_CommonGradeTableRow * __thiscall
FDS_CommonGradeTableRow::FDS_CommonGradeTableRow(FDS_CommonGradeTableRow *this)

{
  this->ID = None;
  this->DataStage = 0;
  this->_padding_ = (longlong)&___7FDS_CommonGradeTableRow__6B_;
  (this->ID_GradeName)._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  (this->ID_GradeName).ID = 0;
  this->ID_GradeColor = 0;
  this->ID_ItemSlotGradeBg = 0;
  this->ID_ItemEquipSlotGradeBg = 0;
  this->ID_ItemDetailGradeBgColor = 0;
  ::FString::FString(&this->ID_TagStyleS,L"");
  ::FString::FString(&this->ID_TagStyleM,L"");
  ::FString::FString(&this->ID_TagStyleL,L"");
  this->ID_ResourceStyleS = 0;
  this->ID_ResourceStyleM = 0;
  this->ID_ResourceStyleL = 0;
  (this->ID_RelationGradeName)._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  (this->ID_RelationGradeName).ID = 0;
  this->ID_ItemDetailGradeBg = 0;
  this->ID_ItemDetailGradeNameBg = 0;
  ::FString::FString(&this->ID_ItemNameGrade,L"");
  this->ID_DropGradeBg = 0;
  (this->ID_SkillGradeName).ID = 0;
  this->ID_SkillGradeColor = 0;
  this->ID_SkillLvGradeBg = 0;
  this->ID_SkillSlotGradeBg = 0;
  (this->ID_SkillGradeName)._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  return this;
}

// Get @ 14b914980

FDS_CommonGradeTableRow * __cdecl FDS_CommonGradeTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_CommonGradeTableRow *pFVar4;
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
                      (&bGEnsureHasExecuted<4464416937081831443>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_CommonGradeTableRow.cpp"
                       ,0x13,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_CommonGradeTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,CommonGrade);
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
      pFVar4 = (FDS_CommonGradeTableRow *)
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
  return (FDS_CommonGradeTableRow *)0x0;
}

// GetAll @ 14b916c20

TArray<FDS_CommonGradeTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_CommonGradeTableRow::GetAll
          (TArray<FDS_CommonGradeTableRow_const_*,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_CommonGradeTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<4464416937081831472>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_CommonGradeTableRow.cpp"
                       ,0x30,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_CommonGradeTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,CommonGrade);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_CommonGradeTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b918a90

FDS_CommonGradeTableRow * __cdecl FDS_CommonGradeTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_CommonGradeTableRow *pFVar4;
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
                        (&bGEnsureHasExecuted<4464416937081831443>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_CommonGradeTableRow.cpp"
                         ,0x13,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_CommonGradeTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,CommonGrade);
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
        pFVar4 = (FDS_CommonGradeTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_CommonGradeTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// ID_DropGradeBgTable @ 14b91b760

FDS_ResourceIconTableRow * __thiscall
FDS_CommonGradeTableRow::ID_DropGradeBgTable(FDS_CommonGradeTableRow *this)

{
  FDS_ResourceIconTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceIconTableRow::GetRef((longlong)this->ID_DropGradeBg,true);
  return pFVar1;
}

// ID_GradeColorTable @ 14b91be80

FDS_ResourceColorTableRow * __thiscall
FDS_CommonGradeTableRow::ID_GradeColorTable(FDS_CommonGradeTableRow *this)

{
  FDS_ResourceColorTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceColorTableRow::GetRef((longlong)this->ID_GradeColor,true);
  return pFVar1;
}

// ID_GradeNameTable @ 14b91bea0

FDS_StringBaseTableRow * __thiscall
FDS_CommonGradeTableRow::ID_GradeNameTable(FDS_CommonGradeTableRow *this)

{
  FDS_StringBaseTableRow *pFVar1;
  
  pFVar1 = FDS_StringBaseTableRow::GetRef((this->ID_GradeName).ID,true);
  return pFVar1;
}

// ID_ItemDetailGradeBgColorTable @ 14b91bf60

FDS_ResourceColorTableRow * __thiscall
FDS_CommonGradeTableRow::ID_ItemDetailGradeBgColorTable(FDS_CommonGradeTableRow *this)

{
  FDS_ResourceColorTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceColorTableRow::GetRef((longlong)this->ID_ItemDetailGradeBgColor,true);
  return pFVar1;
}

// ID_ItemDetailGradeBgTable @ 14b91bf80

FDS_ResourceIconTableRow * __thiscall
FDS_CommonGradeTableRow::ID_ItemDetailGradeBgTable(FDS_CommonGradeTableRow *this)

{
  FDS_ResourceIconTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceIconTableRow::GetRef((longlong)this->ID_ItemDetailGradeBg,true);
  return pFVar1;
}

// ID_ItemDetailGradeNameBgTable @ 14b91bfa0

FDS_ResourceIconTableRow * __thiscall
FDS_CommonGradeTableRow::ID_ItemDetailGradeNameBgTable(FDS_CommonGradeTableRow *this)

{
  FDS_ResourceIconTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceIconTableRow::GetRef((longlong)this->ID_ItemDetailGradeNameBg,true);
  return pFVar1;
}

// ID_ItemEquipSlotGradeBgTable @ 14b91bfc0

FDS_ResourceIconTableRow * __thiscall
FDS_CommonGradeTableRow::ID_ItemEquipSlotGradeBgTable(FDS_CommonGradeTableRow *this)

{
  FDS_ResourceIconTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceIconTableRow::GetRef((longlong)this->ID_ItemEquipSlotGradeBg,true);
  return pFVar1;
}

// ID_ItemSlotGradeBgTable @ 14b91bfe0

FDS_ResourceIconTableRow * __thiscall
FDS_CommonGradeTableRow::ID_ItemSlotGradeBgTable(FDS_CommonGradeTableRow *this)

{
  FDS_ResourceIconTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceIconTableRow::GetRef((longlong)this->ID_ItemSlotGradeBg,true);
  return pFVar1;
}

// ID_RelationGradeNameTable @ 14b91c1c0

FDS_StringBaseTableRow * __thiscall
FDS_CommonGradeTableRow::ID_RelationGradeNameTable(FDS_CommonGradeTableRow *this)

{
  FDS_StringBaseTableRow *pFVar1;
  
  pFVar1 = FDS_StringBaseTableRow::GetRef((this->ID_RelationGradeName).ID,true);
  return pFVar1;
}

// ID_ResourceStyleLTable @ 14b91c200

FDS_ResourceStyleTableRow * __thiscall
FDS_CommonGradeTableRow::ID_ResourceStyleLTable(FDS_CommonGradeTableRow *this)

{
  FDS_ResourceStyleTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceStyleTableRow::GetRef((longlong)this->ID_ResourceStyleL,true);
  return pFVar1;
}

// ID_ResourceStyleMTable @ 14b91c220

FDS_ResourceStyleTableRow * __thiscall
FDS_CommonGradeTableRow::ID_ResourceStyleMTable(FDS_CommonGradeTableRow *this)

{
  FDS_ResourceStyleTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceStyleTableRow::GetRef((longlong)this->ID_ResourceStyleM,true);
  return pFVar1;
}

// ID_ResourceStyleSTable @ 14b91c240

FDS_ResourceStyleTableRow * __thiscall
FDS_CommonGradeTableRow::ID_ResourceStyleSTable(FDS_CommonGradeTableRow *this)

{
  FDS_ResourceStyleTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceStyleTableRow::GetRef((longlong)this->ID_ResourceStyleS,true);
  return pFVar1;
}

// ID_SkillGradeColorTable @ 14b91c280

FDS_ResourceColorTableRow * __thiscall
FDS_CommonGradeTableRow::ID_SkillGradeColorTable(FDS_CommonGradeTableRow *this)

{
  FDS_ResourceColorTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceColorTableRow::GetRef((longlong)this->ID_SkillGradeColor,true);
  return pFVar1;
}

// ID_SkillGradeNameTable @ 14b91c2a0

FDS_StringBaseTableRow * __thiscall
FDS_CommonGradeTableRow::ID_SkillGradeNameTable(FDS_CommonGradeTableRow *this)

{
  FDS_StringBaseTableRow *pFVar1;
  
  pFVar1 = FDS_StringBaseTableRow::GetRef((this->ID_SkillGradeName).ID,true);
  return pFVar1;
}

// ID_SkillLvGradeBgTable @ 14b91c2c0

FDS_ResourceIconTableRow * __thiscall
FDS_CommonGradeTableRow::ID_SkillLvGradeBgTable(FDS_CommonGradeTableRow *this)

{
  FDS_ResourceIconTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceIconTableRow::GetRef((longlong)this->ID_SkillLvGradeBg,true);
  return pFVar1;
}

// ID_SkillSlotGradeBgTable @ 14b91c2e0

FDS_ResourceIconTableRow * __thiscall
FDS_CommonGradeTableRow::ID_SkillSlotGradeBgTable(FDS_CommonGradeTableRow *this)

{
  FDS_ResourceIconTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceIconTableRow::GetRef((longlong)this->ID_SkillSlotGradeBg,true);
  return pFVar1;
}

// IsValid @ 14b91d950

bool __thiscall FDS_CommonGradeTableRow::IsValid(FDS_CommonGradeTableRow *this)

{
  return this != &DefaultObject;
}

