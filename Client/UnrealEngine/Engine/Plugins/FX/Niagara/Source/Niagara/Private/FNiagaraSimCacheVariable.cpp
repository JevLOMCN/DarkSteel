// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// StaticStruct @ 1493779b0

UScriptStruct * __cdecl FNiagaraSimCacheVariable::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraSimCacheVariable.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraSimCacheVariable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSimCacheVariable,(UObject *)pUVar1,
                         L"NiagaraSimCacheVariable");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraSimCacheVariable.OuterSingleton;
}

// operator== @ 14938c360

bool __thiscall
FNiagaraSimCacheVariable::operator==
          (FNiagaraSimCacheVariable *this,FNiagaraSimCacheVariable *param_1)

{
  if ((((((this->Variable).Name == (param_1->Variable).Name) &&
        ((this->Variable).TypeDefHandle.RegisteredTypeIndex ==
         (param_1->Variable).TypeDefHandle.RegisteredTypeIndex)) &&
       (this->FloatOffset == param_1->FloatOffset)) &&
      ((this->FloatCount == param_1->FloatCount && (this->HalfOffset == param_1->HalfOffset)))) &&
     ((this->HalfCount == param_1->HalfCount &&
      ((this->Int32Offset == param_1->Int32Offset && (this->Int32Count == param_1->Int32Count))))))
  {
    return true;
  }
  return false;
}

