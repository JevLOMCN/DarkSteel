// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticStruct @ 14e10e490

UScriptStruct * __cdecl FOptimusNodeAction_SetPinDataDomain::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusNodeAction_SetPinDataDomain.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusNodeAction_SetPinDataDomain.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinDataDomain,
                         (UObject *)pUVar1,L"OptimusNodeAction_SetPinDataDomain");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusNodeAction_SetPinDataDomain.OuterSingleton;
}

// Do @ 14e10e640

bool __thiscall
FOptimusNodeAction_SetPinDataDomain::Do
          (FOptimusNodeAction_SetPinDataDomain *this,IOptimusPathResolver *param_1)

{
  bool bVar1;
  UOptimusNodePin *this_00;
  UOptimusNode *this_01;
  
  this_00 = (UOptimusNodePin *)(**(code **)((longlong)*param_1 + 0x28))(param_1,&this->PinPath);
  if (this_00 == (UOptimusNodePin *)0x0) {
    return false;
  }
  this_01 = UOptimusNodePin::GetOwningNode(this_00);
  bVar1 = UOptimusNode::SetPinDataDomainDirect(this_01,this_00,&this->NewDataDomain);
  return bVar1;
}

// Undo @ 14e10e6a0

bool __thiscall
FOptimusNodeAction_SetPinDataDomain::Undo
          (FOptimusNodeAction_SetPinDataDomain *this,IOptimusPathResolver *param_1)

{
  bool bVar1;
  UOptimusNodePin *this_00;
  UOptimusNode *this_01;
  
  this_00 = (UOptimusNodePin *)(**(code **)((longlong)*param_1 + 0x28))(param_1,&this->PinPath);
  if (this_00 == (UOptimusNodePin *)0x0) {
    return false;
  }
  this_01 = UOptimusNodePin::GetOwningNode(this_00);
  bVar1 = UOptimusNode::SetPinDataDomainDirect(this_01,this_00,&this->OldDataDomain);
  return bVar1;
}

// FOptimusNodeAction_SetPinDataDomain @ 14e1533f0

FOptimusNodeAction_SetPinDataDomain * __thiscall
FOptimusNodeAction_SetPinDataDomain::FOptimusNodeAction_SetPinDataDomain
          (FOptimusNodeAction_SetPinDataDomain *this,UOptimusNodePin *param_1,
          FOptimusDataDomain *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FOptimusNodeAction_SetPinDataDomain *pFVar5;
  FString *pFVar6;
  FString local_38;
  
  pFVar1 = &this->PinPath;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOptimusNodeAction_SetPinDataDomain__6B_;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PinPath).Data.ArrayNum = 0;
  (this->PinPath).Data.ArrayMax = 0;
  FOptimusDataDomain::FOptimusDataDomain(&this->NewDataDomain);
  FOptimusDataDomain::FOptimusDataDomain(&this->OldDataDomain);
  if (param_1 == (UOptimusNodePin *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1440688917643788025>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusNodeActions.cpp"
                       ,0x107,"InPin");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FOptimusNodeAction_SetPinDataDomain *)(*pcVar3)();
      return pFVar5;
    }
  }
  else {
    pFVar6 = UOptimusNodePin::GetPinPath(param_1,&local_38);
    if (pFVar1 != pFVar6) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->PinPath).Data.ArrayNum = (pFVar6->Data).ArrayNum;
      (this->PinPath).Data.ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
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
  }
  return this;
}

// ~FOptimusNodeAction_SetPinDataDomain @ 14e161560

void __thiscall
FOptimusNodeAction_SetPinDataDomain::~FOptimusNodeAction_SetPinDataDomain
          (FOptimusNodeAction_SetPinDataDomain *this)

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
  pFVar1 = (this->PinPath).Data.AllocatorInstance.Data;
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

// SetPinDataDomain @ 14e21f230

bool __thiscall
FOptimusNodeAction_SetPinDataDomain::SetPinDataDomain
          (FOptimusNodeAction_SetPinDataDomain *this,IOptimusPathResolver *param_1,
          FOptimusDataDomain *param_2)

{
  bool bVar1;
  UOptimusNodePin *this_00;
  UOptimusNode *this_01;
  
  this_00 = (UOptimusNodePin *)(**(code **)((longlong)*param_1 + 0x28))(param_1,&this->PinPath);
  if (this_00 == (UOptimusNodePin *)0x0) {
    return false;
  }
  this_01 = UOptimusNodePin::GetOwningNode(this_00);
  bVar1 = UOptimusNode::SetPinDataDomainDirect(this_01,this_00,param_2);
  return bVar1;
}

