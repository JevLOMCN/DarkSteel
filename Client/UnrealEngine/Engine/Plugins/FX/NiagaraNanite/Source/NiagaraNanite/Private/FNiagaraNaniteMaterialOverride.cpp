// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraNanite
// Functions: 2

// StaticStruct @ 14da3de10

UScriptStruct * __cdecl FNiagaraNaniteMaterialOverride::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraNaniteMaterialOverride.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NiagaraNanite();
    Z_Registration_Info_UScriptStruct_FNiagaraNaniteMaterialOverride.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraNaniteMaterialOverride,(UObject *)pUVar1,
                         L"NiagaraNaniteMaterialOverride");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraNaniteMaterialOverride.OuterSingleton;
}

// FNiagaraNaniteMaterialOverride @ 14da3fa80

FNiagaraNaniteMaterialOverride * __thiscall
FNiagaraNaniteMaterialOverride::FNiagaraNaniteMaterialOverride(FNiagaraNaniteMaterialOverride *this)

{
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  (this->ExplicitMat).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
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
            (&this->UserParamBinding,(FNiagaraTypeDefinition *)&local_28.ObjectPtr);
  return this;
}

