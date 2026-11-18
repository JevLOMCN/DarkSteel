// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 3

// StaticStruct @ 14d4a40d0

UScriptStruct * __cdecl FStateTreeAbsoluteFloatPropertyFunction::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeAbsoluteFloatPropertyFunction.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeAbsoluteFloatPropertyFunction.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeAbsoluteFloatPropertyFunction,
                         (UObject *)pUVar1,L"StateTreeAbsoluteFloatPropertyFunction");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeAbsoluteFloatPropertyFunction.OuterSingleton;
}

// GetInstanceDataType @ 14d4a4150

UStruct * __thiscall
FStateTreeAbsoluteFloatPropertyFunction::GetInstanceDataType
          (FStateTreeAbsoluteFloatPropertyFunction *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeSingleFloatPropertyFunctionInstanceData.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeSingleFloatPropertyFunctionInstanceData.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeSingleFloatPropertyFunctionInstanceData
                         ,(UObject *)pUVar1,L"StateTreeSingleFloatPropertyFunctionInstanceData");
  }
  return (UStruct *)
         Z_Registration_Info_UScriptStruct_FStateTreeSingleFloatPropertyFunctionInstanceData.
         OuterSingleton;
}

// Execute @ 14d4a4190

void __thiscall
FStateTreeAbsoluteFloatPropertyFunction::Execute
          (FStateTreeAbsoluteFloatPropertyFunction *this,FStateTreeExecutionContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  FStateTreeSingleFloatPropertyFunctionInstanceData *pFVar3;
  
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
  pFVar3 = FPropertyBindingDataView::GetMutable<FStateTreeSingleFloatPropertyFunctionInstanceData>
                     ((FPropertyBindingDataView *)&param_1->CurrentNodeInstanceData);
  pFVar3->Result = (float)((uint)pFVar3->Input & __xmm_7fffffff7fffffff7fffffff7fffffff);
  return;
}

