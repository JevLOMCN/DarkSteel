// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsDeformer
// Functions: 1

// ~TTupleBaseElement<UE::Groom::Private::FGroupElements,1,2> @ 14e26b270

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UE::Core::Private::Tuple::TTupleBaseElement<UE::Groom::Private::FGroupElements,1,2>::
~TTupleBaseElement<UE::Groom::Private::FGroupElements,1,2>
          (TTupleBaseElement<UE::Groom::Private::FGroupElements,1,2> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TRefCountPtr<FHairGroupInstance_const_>,int>
            ((TRefCountPtr<FHairGroupInstance_const_> *)
             (this->Value).GroupInstances.AllocatorInstance.Data,
             (this->Value).GroupInstances.ArrayNum);
  pFVar1 = (this->Value).GroupInstances.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Value).GroupOffsets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Value).GroupIndices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

