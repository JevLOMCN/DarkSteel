// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 5

// StaticStruct @ 14e1102d0

UScriptStruct * __cdecl FOptimusNodeAction_MovePin::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusNodeAction_MovePin.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusNodeAction_MovePin.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeAction_MovePin,(UObject *)pUVar1,
                         L"OptimusNodeAction_MovePin");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusNodeAction_MovePin.OuterSingleton;
}

// Do @ 14e110310

bool __thiscall
FOptimusNodeAction_MovePin::Do(FOptimusNodeAction_MovePin *this,IOptimusPathResolver *param_1)

{
  bool bVar1;
  
  bVar1 = MovePin(this,param_1,&this->NewBeforePinPath);
  return bVar1;
}

// Undo @ 14e110320

bool __thiscall
FOptimusNodeAction_MovePin::Undo(FOptimusNodeAction_MovePin *this,IOptimusPathResolver *param_1)

{
  bool bVar1;
  
  bVar1 = MovePin(this,param_1,&this->OldBeforePinPath);
  return bVar1;
}

// FOptimusNodeAction_MovePin @ 14e153050

FOptimusNodeAction_MovePin * __thiscall
FOptimusNodeAction_MovePin::FOptimusNodeAction_MovePin
          (FOptimusNodeAction_MovePin *this,UOptimusNodePin *param_1,UOptimusNodePin *param_2)

{
  FString *pFVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FOptimusNodeAction_MovePin *pFVar6;
  FString *pFVar7;
  UOptimusNodePin *this_00;
  FString *pFVar8;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pFVar8 = &this->PinPath;
  this->_padding_ = 0;
  pFVar1 = &this->OldBeforePinPath;
  this->_padding_ = 0;
  pFVar2 = &this->NewBeforePinPath;
  this->_padding_ = (longlong)&___7FOptimusNodeAction_MovePin__6B_;
  (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PinPath).Data.ArrayNum = 0;
  (this->PinPath).Data.ArrayMax = 0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OldBeforePinPath).Data.ArrayNum = 0;
  (this->OldBeforePinPath).Data.ArrayMax = 0;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewBeforePinPath).Data.ArrayNum = 0;
  (this->NewBeforePinPath).Data.ArrayMax = 0;
  if (param_1 == (UOptimusNodePin *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1440688917643787795>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusNodeActions.cpp"
                       ,0x1ed,"InPinToMove");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FOptimusNodeAction_MovePin *)(*pcVar4)();
      return pFVar6;
    }
  }
  else {
    pFVar7 = UOptimusNodePin::GetPinPath(param_1,&local_58);
    if (pFVar8 != pFVar7) {
      pFVar3 = (pFVar8->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar8->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->PinPath).Data.ArrayNum = (pFVar7->Data).ArrayNum;
      (this->PinPath).Data.ArrayMax = (pFVar7->Data).ArrayMax;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    this_00 = UOptimusNodePin::GetNextPin(param_1);
    if (this_00 != (UOptimusNodePin *)0x0) {
      pFVar8 = UOptimusNodePin::GetPinPath(this_00,&local_48);
      if (pFVar1 != pFVar8) {
        pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (pFVar1->Data).AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
        (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this->OldBeforePinPath).Data.ArrayNum = (pFVar8->Data).ArrayNum;
        (this->OldBeforePinPath).Data.ArrayMax = (pFVar8->Data).ArrayMax;
        (pFVar8->Data).ArrayNum = 0;
        (pFVar8->Data).ArrayMax = 0;
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    if (param_2 != (UOptimusNodePin *)0x0) {
      pFVar8 = UOptimusNodePin::GetPinPath(param_2,&local_38);
      if (pFVar2 != pFVar8) {
        pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (pFVar2->Data).AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
        (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this->NewBeforePinPath).Data.ArrayNum = (pFVar8->Data).ArrayNum;
        (this->NewBeforePinPath).Data.ArrayMax = (pFVar8->Data).ArrayMax;
        (pFVar8->Data).ArrayNum = 0;
        (pFVar8->Data).ArrayMax = 0;
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  return this;
}

// MovePin @ 14e1f2090

bool __thiscall
FOptimusNodeAction_MovePin::MovePin
          (FOptimusNodeAction_MovePin *this,IOptimusPathResolver *param_1,FString *param_2)

{
  bool bVar1;
  UOptimusNodePin *this_00;
  UOptimusNodePin *pUVar2;
  UOptimusNode *this_01;
  
  this_00 = (UOptimusNodePin *)(**(code **)((longlong)*param_1 + 0x28))(param_1,&this->PinPath);
  if (this_00 == (UOptimusNodePin *)0x0) {
LAB_14e1f20f7:
    bVar1 = false;
  }
  else {
    pUVar2 = (UOptimusNodePin *)0x0;
    if (1 < (param_2->Data).ArrayNum) {
      pUVar2 = (UOptimusNodePin *)(**(code **)((longlong)*param_1 + 0x28))(param_1,param_2);
      if (pUVar2 == (UOptimusNodePin *)0x0) goto LAB_14e1f20f7;
    }
    this_01 = UOptimusNodePin::GetOwningNode(this_00);
    bVar1 = UOptimusNode::MovePinDirect(this_01,this_00,pUVar2);
  }
  return bVar1;
}

