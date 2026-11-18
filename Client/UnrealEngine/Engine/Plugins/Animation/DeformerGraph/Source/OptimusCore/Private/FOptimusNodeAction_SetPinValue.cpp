// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 4

// StaticStruct @ 14e10cfc0

UScriptStruct * __cdecl FOptimusNodeAction_SetPinValue::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusNodeAction_SetPinValue.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusNodeAction_SetPinValue.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinValue,(UObject *)pUVar1,
                         L"OptimusNodeAction_SetPinValue");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusNodeAction_SetPinValue.OuterSingleton;
}

// Do @ 14e10d070

bool __thiscall
FOptimusNodeAction_SetPinValue::Do
          (FOptimusNodeAction_SetPinValue *this,IOptimusPathResolver *param_1)

{
  bool bVar1;
  UOptimusNodePin *this_00;
  
  this_00 = (UOptimusNodePin *)(**(code **)((longlong)*param_1 + 0x28))(param_1,&this->PinPath);
  if (this_00 == (UOptimusNodePin *)0x0) {
    return false;
  }
  bVar1 = UOptimusNodePin::SetValueFromStringDirect(this_00,&this->NewValue);
  return bVar1;
}

// Undo @ 14e10d0c0

bool __thiscall
FOptimusNodeAction_SetPinValue::Undo
          (FOptimusNodeAction_SetPinValue *this,IOptimusPathResolver *param_1)

{
  bool bVar1;
  UOptimusNodePin *this_00;
  
  this_00 = (UOptimusNodePin *)(**(code **)((longlong)*param_1 + 0x28))(param_1,&this->PinPath);
  if (this_00 == (UOptimusNodePin *)0x0) {
    return false;
  }
  bVar1 = UOptimusNodePin::SetValueFromStringDirect(this_00,&this->OldValue);
  return bVar1;
}

// FOptimusNodeAction_SetPinValue @ 14e1537e0

FOptimusNodeAction_SetPinValue * __thiscall
FOptimusNodeAction_SetPinValue::FOptimusNodeAction_SetPinValue
          (FOptimusNodeAction_SetPinValue *this,UOptimusNodePin *param_1,FString *param_2)

{
  FString *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FOptimusNodeAction_SetPinValue *pFVar6;
  FString *pFVar7;
  FProperty *pFVar8;
  uchar *puVar9;
  UOptimusNode *pUVar10;
  FString *pFVar11;
  wchar_t *pwVar12;
  ForAnyElementType local_58;
  undefined8 local_50;
  FString local_48;
  FString local_38;
  
  pFVar11 = &this->PinPath;
  this->_padding_ = 0;
  pFVar1 = &this->OldValue;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOptimusNodeAction_SetPinValue__6B_;
  (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PinPath).Data.ArrayNum = 0;
  (this->PinPath).Data.ArrayMax = 0;
  (this->NewValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewValue).Data.ArrayNum = 0;
  (this->NewValue).Data.ArrayMax = 0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OldValue).Data.ArrayNum = 0;
  (this->OldValue).Data.ArrayMax = 0;
  if (param_1 == (UOptimusNodePin *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1440688917643788157>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusNodeActions.cpp"
                       ,0x83,"InPin");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FOptimusNodeAction_SetPinValue *)(*pcVar4)();
      return pFVar6;
    }
  }
  else {
    iVar2 = (param_1->SubPins).ArrayNum;
    if (iVar2 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FOptimusNodeAction_SetPinValue *)(*pcVar4)();
        return pFVar6;
      }
    }
    else if (iVar2 == 0) {
      pFVar7 = UOptimusNodePin::GetPinPath(param_1,&local_48);
      if (pFVar11 != pFVar7) {
        pFVar3 = (pFVar11->Data).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (pFVar11->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
        (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this->PinPath).Data.ArrayNum = (pFVar7->Data).ArrayNum;
        (this->PinPath).Data.ArrayMax = (pFVar7->Data).ArrayMax;
        (pFVar7->Data).ArrayNum = 0;
        (pFVar7->Data).ArrayMax = 0;
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      local_58.Data = (FScriptContainerElement *)0x0;
      local_50 = 0;
      pFVar8 = UOptimusNodePin::GetPropertyFromPin(param_1);
      puVar9 = UOptimusNodePin::GetPropertyValuePtr(param_1);
      if ((pFVar8 != (FProperty *)0x0) && (puVar9 != (uchar *)0x0)) {
        pUVar10 = UOptimusNodePin::GetOwningNode(param_1);
        (**(code **)(pFVar8->_padding_ + 0xe0))(pFVar8,&local_58,puVar9,0,0,pUVar10,0,0);
      }
      if (pFVar1 != (FString *)&local_58) {
        pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (pFVar1->Data).AllocatorInstance.Data = local_58.Data;
        (this->OldValue).Data.ArrayNum = (int)local_50;
        (this->OldValue).Data.ArrayMax = local_50._4_4_;
        local_50 = 0;
        local_58.Data = (FScriptContainerElement *)0x0;
      }
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
      ::FString::operator=(&this->NewValue,param_2);
      pFVar11 = UOptimusNodePin::GetPinPath(param_1,&local_38);
      if ((pFVar11->Data).ArrayNum == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
      FOptimusAction::SetTitlef<wchar_t_const_*>
                ((FOptimusAction *)this,
                 (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x152e05270,pwVar12);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  return this;
}

