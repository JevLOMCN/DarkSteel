// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// FStaticConstructObjectParameters @ 1422586e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FStaticConstructObjectParameters * __thiscall
FStaticConstructObjectParameters::FStaticConstructObjectParameters
          (FStaticConstructObjectParameters *this,UClass *param_1)

{
  UPackage *pUVar1;
  
  this->Class = param_1;
  pUVar1 = GetTransientPackage();
  this->Outer = (UObject *)pUVar1;
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  this->SetFlags = RF_NoFlags;
  this->InternalSetFlags = Borrowed;
  this->bCopyTransientsFromClassDefaults = false;
  this->bAssumeTemplateIsArchetype = false;
  this->Template = (UObject *)0x0;
  this->InstanceGraph = (FObjectInstancingGraph *)0x0;
  this->ExternalPackage = (UPackage *)0x0;
  *(undefined8 *)&this->PropertyInitCallback = 0;
  *(undefined8 *)&(this->PropertyInitCallback).field_0x28 = 0;
  this->SerialNumber = 0;
  this->SubobjectOverrides = (FOverrides *)0x0;
  return this;
}

