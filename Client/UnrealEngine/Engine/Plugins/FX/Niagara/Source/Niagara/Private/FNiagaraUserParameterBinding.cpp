// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// StaticStruct @ 148fe44d0

UScriptStruct * __cdecl FNiagaraUserParameterBinding::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraUserParameterBinding.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraUserParameterBinding.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraUserParameterBinding,(UObject *)pUVar1,
                         L"NiagaraUserParameterBinding");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraUserParameterBinding.OuterSingleton;
}

// FNiagaraUserParameterBinding @ 149022de0

FNiagaraUserParameterBinding * __thiscall
FNiagaraUserParameterBinding::FNiagaraUserParameterBinding
          (FNiagaraUserParameterBinding *this,FNiagaraTypeDefinition *param_1)

{
  int iVar1;
  
  (this->Parameter)._padding_ = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&(this->Parameter)._padding_,param_1);
  *(int *)&(this->Parameter)._padding_ = iVar1;
  (this->Parameter).VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Parameter).VarData.ArrayNum = 0;
  (this->Parameter).VarData.ArrayMax = 0;
  return this;
}

// FNiagaraUserParameterBinding @ 149022e30

FNiagaraUserParameterBinding * __thiscall
FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(FNiagaraUserParameterBinding *this)

{
  int iVar1;
  
  (this->Parameter)._padding_ = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&(this->Parameter)._padding_,
                     &FNiagaraTypeDefinition::UObjectDef);
  *(int *)&(this->Parameter)._padding_ = iVar1;
  (this->Parameter).VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Parameter).VarData.ArrayNum = 0;
  (this->Parameter).VarData.ArrayMax = 0;
  return this;
}

