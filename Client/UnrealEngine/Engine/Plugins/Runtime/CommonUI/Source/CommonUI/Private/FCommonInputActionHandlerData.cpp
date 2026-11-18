// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 2

// StaticStruct @ 14a780da0

UScriptStruct * __cdecl FCommonInputActionHandlerData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCommonInputActionHandlerData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CommonUI();
    Z_Registration_Info_UScriptStruct_FCommonInputActionHandlerData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCommonInputActionHandlerData,(UObject *)pUVar1,
                         L"CommonInputActionHandlerData");
  }
  return Z_Registration_Info_UScriptStruct_FCommonInputActionHandlerData.OuterSingleton;
}

// GetState @ 14a7e87e0

EInputActionState __thiscall
FCommonInputActionHandlerData::GetState
          (FCommonInputActionHandlerData *this,ECommonInputType param_1,FName *param_2)

{
  FCommonInputActionDataBase *pFVar1;
  longlong lVar2;
  
  pFVar1 = FDataTableRowHandle::GetRow<FCommonInputActionDataBase>
                     (&this->InputActionRow,
                      L"CommonUIUtils::GetInputActionData couldn\'t find the row passed in, check data table if its missing."
                     );
  if (pFVar1 != (FCommonInputActionDataBase *)0x0) {
    lVar2 = (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,param_1,param_2);
    if (*(EInputActionState *)(lVar2 + 0x18) != Enabled) {
      return *(EInputActionState *)(lVar2 + 0x18);
    }
  }
  return this->State;
}

