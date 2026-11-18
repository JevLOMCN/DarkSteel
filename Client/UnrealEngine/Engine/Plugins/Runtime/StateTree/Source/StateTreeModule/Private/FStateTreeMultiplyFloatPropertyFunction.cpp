// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 3

// StaticStruct @ 14d4a3b90

UScriptStruct * __cdecl FStateTreeMultiplyFloatPropertyFunction::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeMultiplyFloatPropertyFunction.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeMultiplyFloatPropertyFunction.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeMultiplyFloatPropertyFunction,
                         (UObject *)pUVar1,L"StateTreeMultiplyFloatPropertyFunction");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeMultiplyFloatPropertyFunction.OuterSingleton;
}

// GetInstanceDataType @ 14d4a3bd0

UStruct * __thiscall
FStateTreeMultiplyFloatPropertyFunction::GetInstanceDataType
          (FStateTreeMultiplyFloatPropertyFunction *this)

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

// Execute @ 14d4a3c10

void __thiscall
FStateTreeMultiplyFloatPropertyFunction::Execute
          (FStateTreeMultiplyFloatPropertyFunction *this,FStateTreeExecutionContext *param_1)

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
  pFVar3->Result = pFVar3->Right * pFVar3->Left;
  return;
}

