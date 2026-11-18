// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 3

// StaticStruct @ 14d4a7810

UScriptStruct * __cdecl FStateTreeAbsoluteIntPropertyFunction::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeAbsoluteIntPropertyFunction.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeAbsoluteIntPropertyFunction.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeAbsoluteIntPropertyFunction,
                         (UObject *)pUVar1,L"StateTreeAbsoluteIntPropertyFunction");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeAbsoluteIntPropertyFunction.OuterSingleton;
}

// GetInstanceDataType @ 14d4a7850

UStruct * __thiscall
FStateTreeAbsoluteIntPropertyFunction::GetInstanceDataType
          (FStateTreeAbsoluteIntPropertyFunction *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeSingleIntPropertyFunctionInstanceData.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeSingleIntPropertyFunctionInstanceData.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeSingleIntPropertyFunctionInstanceData
                           ,(UObject *)pUVar1,L"StateTreeSingleIntPropertyFunctionInstanceData");
  }
  return (UStruct *)
         Z_Registration_Info_UScriptStruct_FStateTreeSingleIntPropertyFunctionInstanceData.
         OuterSingleton;
}

// Execute @ 14d4a7890

void __thiscall
FStateTreeAbsoluteIntPropertyFunction::Execute
          (FStateTreeAbsoluteIntPropertyFunction *this,FStateTreeExecutionContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  FStateTreeSingleIntPropertyFunctionInstanceData *pFVar3;
  int iVar4;
  
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
  pFVar3 = FPropertyBindingDataView::GetMutable<FStateTreeSingleIntPropertyFunctionInstanceData>
                     ((FPropertyBindingDataView *)&param_1->CurrentNodeInstanceData);
  iVar4 = -pFVar3->Input;
  if (-pFVar3->Input < 0) {
    iVar4 = pFVar3->Input;
  }
  pFVar3->Result = iVar4;
  return;
}

