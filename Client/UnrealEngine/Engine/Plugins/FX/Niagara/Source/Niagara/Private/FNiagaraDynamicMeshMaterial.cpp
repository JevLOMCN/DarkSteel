// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// StaticStruct @ 148e8a9b0

UScriptStruct * __cdecl FNiagaraDynamicMeshMaterial::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDynamicMeshMaterial.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraDynamicMeshMaterial.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial,(UObject *)pUVar1,
                         L"NiagaraDynamicMeshMaterial");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraDynamicMeshMaterial.OuterSingleton;
}

// FNiagaraDynamicMeshMaterial @ 148ea36f0

FNiagaraDynamicMeshMaterial * __thiscall
FNiagaraDynamicMeshMaterial::FNiagaraDynamicMeshMaterial(FNiagaraDynamicMeshMaterial *this)

{
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  (this->Material).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  local_28.DebugPtr = (UObject *)Z_Construct_UClass_UMaterialInterface_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_28.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable(local_28.DebugPtr);
  }
  local_1e = 0;
  local_20 = 1;
  local_1c = 0xffffffffffffffff;
  local_14 = 0xffffffff;
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding
            (&this->MaterialUserParamBinding,(FNiagaraTypeDefinition *)&local_28.ObjectPtr);
  return this;
}

