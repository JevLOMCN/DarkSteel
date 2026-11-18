// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticStruct @ 14e107dc0

UScriptStruct * __cdecl FOptimusResourceAction_SetDataDomain::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusResourceAction_SetDataDomain.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusResourceAction_SetDataDomain.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusResourceAction_SetDataDomain,
                         (UObject *)pUVar1,L"OptimusResourceAction_SetDataDomain");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusResourceAction_SetDataDomain.OuterSingleton;
}

// Do @ 14e107e00

bool __thiscall
FOptimusResourceAction_SetDataDomain::Do
          (FOptimusResourceAction_SetDataDomain *this,IOptimusPathResolver *param_1)

{
  bool bVar1;
  
  bVar1 = SetDataDomain(this,param_1,&this->NewDataDomain);
  return bVar1;
}

// Undo @ 14e107e10

bool __thiscall
FOptimusResourceAction_SetDataDomain::Undo
          (FOptimusResourceAction_SetDataDomain *this,IOptimusPathResolver *param_1)

{
  bool bVar1;
  
  bVar1 = SetDataDomain(this,param_1,&this->OldDataDomain);
  return bVar1;
}

// FOptimusResourceAction_SetDataDomain @ 14e156250

FOptimusResourceAction_SetDataDomain * __thiscall
FOptimusResourceAction_SetDataDomain::FOptimusResourceAction_SetDataDomain
          (FOptimusResourceAction_SetDataDomain *this,UOptimusResourceDescription *param_1,
          FOptimusDataDomain *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  FOptimusResourceAction_SetDataDomain *pFVar4;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOptimusResourceAction_SetDataDomain__6B_;
  (this->ResourceName).ComparisonIndex = 0;
  (this->ResourceName).Number = 0;
  FOptimusDataDomain::FOptimusDataDomain(&this->NewDataDomain);
  FOptimusDataDomain::FOptimusDataDomain(&this->OldDataDomain);
  if (param_1 == (UOptimusResourceDescription *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3523978412479742191>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusResourceActions.cpp"
                       ,0xef,"InResource");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FOptimusResourceAction_SetDataDomain *)(*pcVar1)();
      return pFVar4;
    }
  }
  else {
    uVar2 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    (this->ResourceName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->_padding_;
    (this->ResourceName).Number = uVar2;
    (this->NewDataDomain).Type = param_2->Type;
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              (&(this->NewDataDomain).DimensionNames,&param_2->DimensionNames);
    (this->NewDataDomain).Multiplier = param_2->Multiplier;
    ::FString::operator=(&(this->NewDataDomain).Expression,&param_2->Expression);
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              (&(this->NewDataDomain).LevelNames_DEPRECATED,&param_2->LevelNames_DEPRECATED);
    (this->OldDataDomain).Type = (param_1->DataDomain).Type;
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              (&(this->OldDataDomain).DimensionNames,&(param_1->DataDomain).DimensionNames);
    (this->OldDataDomain).Multiplier = (param_1->DataDomain).Multiplier;
    ::FString::operator=(&(this->OldDataDomain).Expression,&(param_1->DataDomain).Expression);
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              (&(this->OldDataDomain).LevelNames_DEPRECATED,
               &(param_1->DataDomain).LevelNames_DEPRECATED);
    FOptimusAction::SetTitlef<>
              ((FOptimusAction *)this,(TCheckedFormatStringPrivate<wchar_t>)0x152e08070);
  }
  return this;
}

// ~FOptimusResourceAction_SetDataDomain @ 14e161ad0

void __thiscall
FOptimusResourceAction_SetDataDomain::~FOptimusResourceAction_SetDataDomain
          (FOptimusResourceAction_SetDataDomain *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->OldDataDomain).LevelNames_DEPRECATED.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OldDataDomain).Expression.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OldDataDomain).DimensionNames.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NewDataDomain).LevelNames_DEPRECATED.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NewDataDomain).Expression.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NewDataDomain).DimensionNames.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FOptimusAction__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// SetDataDomain @ 14e21d420

bool __thiscall
FOptimusResourceAction_SetDataDomain::SetDataDomain
          (FOptimusResourceAction_SetDataDomain *this,IOptimusPathResolver *param_1,
          FOptimusDataDomain *param_2)

{
  TObjectPtr<UOptimusResourceContainer>_u_0 TVar1;
  longlong *plVar2;
  bool bVar3;
  UObject *pUVar4;
  UOptimusResourceContainer *pUVar5;
  UOptimusDeformer *this_00;
  longlong *plVar6;
  
  pUVar4 = (UObject *)(**(code **)((longlong)*param_1 + 0x30))(param_1,this->ResourceName);
  if (pUVar4 == (UObject *)0x0) {
    return false;
  }
  pUVar5 = CastChecked<UOptimusResourceContainer,UObject>(*(UObject **)&pUVar4->field_0x20);
  if ((pUVar5 != (UOptimusResourceContainer *)0x0) &&
     (this_00 = CastChecked<UOptimusDeformer,UObject>((UObject *)pUVar5->_padding_),
     this_00 != (UOptimusDeformer *)0x0)) {
    TVar1 = (this_00->Resources).field0_0x0;
    plVar2 = *(longlong **)((longlong)TVar1 + 0x28);
    for (plVar6 = plVar2; plVar6 != plVar2 + ((TVar1.DebugPtr)->Descriptions).ArrayNum;
        plVar6 = plVar6 + 1) {
      if (((UObject *)*plVar6 != (UObject *)0x0) && ((UObject *)*plVar6 == pUVar4)) {
        if ((int)((longlong)plVar6 - (longlong)plVar2 >> 3) == -1) {
          return false;
        }
        bVar3 = FOptimusDataDomain::operator==((FOptimusDataDomain *)&pUVar4[2].field_0x18,param_2);
        if (!bVar3) {
          *(EOptimusDataDomainType *)&pUVar4[2].field_0x18 = param_2->Type;
          TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<FName,TSizedDefaultAllocator<32>_> *)&pUVar4[2].field_0x20,
                     &param_2->DimensionNames);
          *(int *)&pUVar4[3].field_0x8 = param_2->Multiplier;
          ::FString::operator=((FString *)&pUVar4[3].field_0x10,&param_2->Expression);
          TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<FName,TSizedDefaultAllocator<32>_> *)&pUVar4[3].field_0x20,
                     &param_2->LevelNames_DEPRECATED);
          UOptimusDeformer::Notify(this_00,ResourceTypeChanged,pUVar4);
          UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this_00);
        }
        return true;
      }
    }
  }
  return false;
}

