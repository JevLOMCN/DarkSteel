// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 3

// StaticStruct @ 14d4a35c0

UScriptStruct * __cdecl FStateTreeAddFloatPropertyFunction::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeAddFloatPropertyFunction.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeAddFloatPropertyFunction.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeAddFloatPropertyFunction,
                         (UObject *)pUVar1,L"StateTreeAddFloatPropertyFunction");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeAddFloatPropertyFunction.OuterSingleton;
}

// GetInstanceDataType @ 14d4a3600

UStruct * __thiscall
FStateTreeAddFloatPropertyFunction::GetInstanceDataType(FStateTreeAddFloatPropertyFunction *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeFloatCombinaisonPropertyFunctionInstanceData.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeFloatCombinaisonPropertyFunctionInstanceData.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeFloatCombinaisonPropertyFunctionInstanceData
                         ,(UObject *)pUVar1,L"StateTreeFloatCombinaisonPropertyFunctionInstanceData"
                        );
  }
  return (UStruct *)
         Z_Registration_Info_UScriptStruct_FStateTreeFloatCombinaisonPropertyFunctionInstanceData.
         OuterSingleton;
}

// Execute @ 14d4a3640

void __thiscall
FStateTreeAddFloatPropertyFunction::Execute
          (FStateTreeAddFloatPropertyFunction *this,FStateTreeExecutionContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  FStateTreeFloatCombinaisonPropertyFunctionInstanceData *pFVar3;
  
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
           GetMutable<FStateTreeFloatCombinaisonPropertyFunctionInstanceData>
                     ((FPropertyBindingDataView *)&param_1->CurrentNodeInstanceData);
  pFVar3->Result = pFVar3->Right + pFVar3->Left;
  return;
}

