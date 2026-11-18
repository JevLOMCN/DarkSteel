// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 3

// StaticStruct @ 14d4a0920

UScriptStruct * __cdecl FStateTreeBooleanOrPropertyFunction::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeBooleanOrPropertyFunction.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeBooleanOrPropertyFunction.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeBooleanOrPropertyFunction,
                         (UObject *)pUVar1,L"StateTreeBooleanOrPropertyFunction");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeBooleanOrPropertyFunction.OuterSingleton;
}

// GetInstanceDataType @ 14d4a0960

UStruct * __thiscall
FStateTreeBooleanOrPropertyFunction::GetInstanceDataType(FStateTreeBooleanOrPropertyFunction *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeBooleanOperationPropertyFunctionInstanceData.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeBooleanOperationPropertyFunctionInstanceData.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeBooleanOperationPropertyFunctionInstanceData
                         ,(UObject *)pUVar1,L"StateTreeBooleanOperationPropertyFunctionInstanceData"
                        );
  }
  return (UStruct *)
         Z_Registration_Info_UScriptStruct_FStateTreeBooleanOperationPropertyFunctionInstanceData.
         OuterSingleton;
}

// Execute @ 14d4a09a0

void __thiscall
FStateTreeBooleanOrPropertyFunction::Execute
          (FStateTreeBooleanOrPropertyFunction *this,FStateTreeExecutionContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  FStateTreeBooleanOperationPropertyFunctionInstanceData *pFVar3;
  
  if ((((param_1->CurrentNodeDataHandle).Source != this->field_0x18) ||
      ((param_1->CurrentNodeDataHandle).Index != *(ushort *)&this->field_0x1a)) ||
     ((param_1->CurrentNodeDataHandle).StateHandle.Index != *(ushort *)&this->field_0x1c)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentNodeDataHandle == Node.InstanceDataHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreeExecutionContext.h"
                       ,0x2b7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = FPropertyBindingDataView::
           GetMutable<FStateTreeBooleanOperationPropertyFunctionInstanceData>
                     ((FPropertyBindingDataView *)&param_1->CurrentNodeInstanceData);
  if ((pFVar3->bLeft == false) && (pFVar3->bRight == false)) {
    pFVar3->bResult = false;
    return;
  }
  pFVar3->bResult = true;
  return;
}

