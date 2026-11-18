// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// FNiagaraTypeDefinitionHandle @ 1492d1640

FNiagaraTypeDefinitionHandle * __thiscall
FNiagaraTypeDefinitionHandle::FNiagaraTypeDefinitionHandle
          (FNiagaraTypeDefinitionHandle *this,FNiagaraTypeDefinition *param_1)

{
  int iVar1;
  FNiagaraTypeRegistry *this_00;
  
  if ((param_1->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) {
    this->RegisteredTypeIndex = -1;
    return this;
  }
  this_00 = FNiagaraTypeRegistry::Get();
  iVar1 = FNiagaraTypeRegistry::RegisterTypeInternal(this_00,param_1);
  this->RegisteredTypeIndex = iVar1;
  return this;
}

// Register @ 149302520

int __thiscall
FNiagaraTypeDefinitionHandle::Register
          (FNiagaraTypeDefinitionHandle *this,FNiagaraTypeDefinition *param_1)

{
  int iVar1;
  FNiagaraTypeRegistry *this_00;
  
  if ((param_1->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) {
    return -1;
  }
  this_00 = FNiagaraTypeRegistry::Get();
  iVar1 = FNiagaraTypeRegistry::RegisterTypeInternal(this_00,param_1);
  return iVar1;
}

// Resolve @ 149304cd0

FNiagaraTypeDefinition * __thiscall
FNiagaraTypeDefinitionHandle::Resolve(FNiagaraTypeDefinitionHandle *this)

{
  FNiagaraTypeRegistry *this_00;
  FNiagaraTypeDefinition *pFVar1;
  
  this_00 = FNiagaraTypeRegistry::Get();
  pFVar1 = FNiagaraTypeRegistry::GetRegisteredType(this_00,this->RegisteredTypeIndex);
  return pFVar1;
}

// StaticStruct @ 14940f400

UScriptStruct * __cdecl FNiagaraTypeDefinitionHandle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraTypeDefinitionHandle.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraTypeDefinitionHandle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle,(UObject *)pUVar1,
                         L"NiagaraTypeDefinitionHandle");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraTypeDefinitionHandle.OuterSingleton;
}

