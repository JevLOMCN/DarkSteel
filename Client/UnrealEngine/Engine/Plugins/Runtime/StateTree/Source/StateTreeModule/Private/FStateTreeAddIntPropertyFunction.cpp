// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 3

// StaticStruct @ 14d4a6bd0

UScriptStruct * __cdecl FStateTreeAddIntPropertyFunction::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeAddIntPropertyFunction.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeAddIntPropertyFunction.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeAddIntPropertyFunction,
                         (UObject *)pUVar1,L"StateTreeAddIntPropertyFunction");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeAddIntPropertyFunction.OuterSingleton;
}

// GetInstanceDataType @ 14d4a6c10

UStruct * __thiscall
FStateTreeAddIntPropertyFunction::GetInstanceDataType(FStateTreeAddIntPropertyFunction *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeIntCombinaisonPropertyFunctionInstanceData.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeIntCombinaisonPropertyFunctionInstanceData.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeIntCombinaisonPropertyFunctionInstanceData
                         ,(UObject *)pUVar1,L"StateTreeIntCombinaisonPropertyFunctionInstanceData");
  }
  return (UStruct *)
         Z_Registration_Info_UScriptStruct_FStateTreeIntCombinaisonPropertyFunctionInstanceData.
         OuterSingleton;
}

// Execute @ 14d4a6c50

void __thiscall
FStateTreeAddIntPropertyFunction::Execute
          (FStateTreeAddIntPropertyFunction *this,FStateTreeExecutionContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  FStateTreeIntCombinaisonPropertyFunctionInstanceData *pFVar3;
  
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
           GetMutable<FStateTreeIntCombinaisonPropertyFunctionInstanceData>
                     ((FPropertyBindingDataView *)&param_1->CurrentNodeInstanceData);
  pFVar3->Result = pFVar3->Right + pFVar3->Left;
  return;
}

