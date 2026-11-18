// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 5

// StaticStruct @ 14e10d2d0

UScriptStruct * __cdecl FOptimusNodeAction_SetPinName::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusNodeAction_SetPinName.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusNodeAction_SetPinName.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinName,(UObject *)pUVar1,
                         L"OptimusNodeAction_SetPinName");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusNodeAction_SetPinName.OuterSingleton;
}

// Do @ 14e10d330

bool __thiscall
FOptimusNodeAction_SetPinName::Do(FOptimusNodeAction_SetPinName *this,IOptimusPathResolver *param_1)

{
  bool bVar1;
  
  bVar1 = SetPinName(this,param_1,this->NewPinName);
  return bVar1;
}

// Undo @ 14e10d340

bool __thiscall
FOptimusNodeAction_SetPinName::Undo
          (FOptimusNodeAction_SetPinName *this,IOptimusPathResolver *param_1)

{
  bool bVar1;
  
  bVar1 = SetPinName(this,param_1,this->OldPinName);
  return bVar1;
}

// FOptimusNodeAction_SetPinName @ 14e153570

FOptimusNodeAction_SetPinName * __thiscall
FOptimusNodeAction_SetPinName::FOptimusNodeAction_SetPinName
          (FOptimusNodeAction_SetPinName *this,UOptimusNodePin *param_1,FName param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  bool bVar5;
  FOptimusNodeAction_SetPinName *pFVar6;
  FString *pFVar7;
  FString local_28;
  
  pFVar1 = &this->PinPath;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOptimusNodeAction_SetPinName__6B_;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PinPath).Data.ArrayNum = 0;
  (this->PinPath).Data.ArrayMax = 0;
  (this->NewPinName).ComparisonIndex = 0;
  (this->NewPinName).Number = 0;
  (this->OldPinName).ComparisonIndex = 0;
  (this->OldPinName).Number = 0;
  if (param_1 == (UOptimusNodePin *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1440688917643788117>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusNodeActions.cpp"
                       ,0xab,"InPin");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FOptimusNodeAction_SetPinName *)(*pcVar3)();
      return pFVar6;
    }
  }
  else {
    pFVar7 = UOptimusNodePin::GetPinPath(param_1,&local_28);
    if (pFVar1 != pFVar7) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->PinPath).Data.ArrayNum = (pFVar7->Data).ArrayNum;
      (this->PinPath).Data.ArrayMax = (pFVar7->Data).ArrayMax;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    this->NewPinName = param_2;
    uVar4 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    (this->OldPinName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->_padding_;
    (this->OldPinName).Number = uVar4;
  }
  return this;
}

// SetPinName @ 14e2205d0

bool __thiscall
FOptimusNodeAction_SetPinName::SetPinName
          (FOptimusNodeAction_SetPinName *this,IOptimusPathResolver *param_1,FName param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  UOptimusNodePin *this_00;
  UOptimusNode *this_01;
  FString *pFVar4;
  FString local_18;
  
  pFVar1 = &this->PinPath;
  this_00 = (UOptimusNodePin *)(**(code **)((longlong)*param_1 + 0x28))(param_1,pFVar1);
  if (this_00 != (UOptimusNodePin *)0x0) {
    this_01 = UOptimusNodePin::GetOwningNode(this_00);
    bVar3 = UOptimusNode::SetPinNameDirect(this_01,this_00,param_2);
    if (bVar3) {
      pFVar4 = UOptimusNodePin::GetPinPath(this_00,&local_18);
      if (pFVar1 != pFVar4) {
        pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
        (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this->PinPath).Data.ArrayNum = (pFVar4->Data).ArrayNum;
        (this->PinPath).Data.ArrayMax = (pFVar4->Data).ArrayMax;
        (pFVar4->Data).ArrayNum = 0;
        (pFVar4->Data).ArrayMax = 0;
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      return true;
    }
  }
  return false;
}

