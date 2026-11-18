// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147ba4600

UScriptStruct * __cdecl FComponentReference::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FComponentReference.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FComponentReference.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FComponentReference,(UObject *)pUVar1,
                         L"ComponentReference");
  }
  return Z_Registration_Info_UScriptStruct_FComponentReference.OuterSingleton;
}

// GetComponent @ 147bdf250

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UActorComponent * __thiscall
FComponentReference::GetComponent(FComponentReference *this,AActor *param_1)

{
  bool bVar1;
  UActorComponent *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->OtherActor).WeakPtr);
  if (bVar1) {
    param_1 = (AActor *)FWeakObjectPtr::Get(&(this->OtherActor).WeakPtr);
  }
  pUVar2 = FBaseComponentReference::ExtractComponent((FBaseComponentReference *)this,param_1);
  return pUVar2;
}

