// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 2

// Execute @ 14d4a04a0

void __thiscall
FStateTreePropertyFunctionBase::Execute
          (FStateTreePropertyFunctionBase *this,FStateTreeExecutionContext *param_1)

{
  return;
}

// StaticStruct @ 14d52a090

UScriptStruct * __cdecl FStateTreePropertyFunctionBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreePropertyFunctionBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreePropertyFunctionBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreePropertyFunctionBase,(UObject *)pUVar1,
                         L"StateTreePropertyFunctionBase");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreePropertyFunctionBase.OuterSingleton;
}

