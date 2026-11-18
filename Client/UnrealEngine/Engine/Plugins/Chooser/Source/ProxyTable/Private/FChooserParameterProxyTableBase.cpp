// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProxyTable
// Functions: 2

// StaticStruct @ 14cf25060

UScriptStruct * __cdecl FChooserParameterProxyTableBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChooserParameterProxyTableBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProxyTable();
    Z_Registration_Info_UScriptStruct_FChooserParameterProxyTableBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChooserParameterProxyTableBase,(UObject *)pUVar1
                         ,L"ChooserParameterProxyTableBase");
  }
  return Z_Registration_Info_UScriptStruct_FChooserParameterProxyTableBase.OuterSingleton;
}

// GetValue @ 14cf250c0

bool __thiscall
FChooserParameterProxyTableBase::GetValue
          (FChooserParameterProxyTableBase *this,FChooserEvaluationContext *param_1,
          UProxyTable **param_2)

{
  return false;
}

