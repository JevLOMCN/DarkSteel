// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticStruct @ 1488ef9c0

UScriptStruct * __cdecl FHardwareDeviceIdentifier::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FHardwareDeviceIdentifier.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FHardwareDeviceIdentifier.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHardwareDeviceIdentifier,(UObject *)pUVar1,
                         L"HardwareDeviceIdentifier");
  }
  return Z_Registration_Info_UScriptStruct_FHardwareDeviceIdentifier.OuterSingleton;
}

// FHardwareDeviceIdentifier @ 148907840

FHardwareDeviceIdentifier * __thiscall
FHardwareDeviceIdentifier::FHardwareDeviceIdentifier
          (FHardwareDeviceIdentifier *this,FName param_1,FName param_2,
          EHardwareDevicePrimaryType param_3,Type param_4)

{
  this->SupportedFeaturesMask = param_4;
  this->InputClassName = param_1;
  this->HardwareDeviceIdentifier = param_2;
  this->PrimaryDeviceType = param_3;
  return this;
}

// FHardwareDeviceIdentifier @ 148907860

FHardwareDeviceIdentifier * __thiscall
FHardwareDeviceIdentifier::FHardwareDeviceIdentifier(FHardwareDeviceIdentifier *this)

{
  this->InputClassName = Invalid.InputClassName;
  this->HardwareDeviceIdentifier = Invalid.HardwareDeviceIdentifier;
  this->PrimaryDeviceType = Unspecified;
  this->SupportedFeaturesMask = 0;
  return this;
}

// operator== @ 14890f6e0

bool __thiscall
FHardwareDeviceIdentifier::operator==
          (FHardwareDeviceIdentifier *this,FHardwareDeviceIdentifier *param_1)

{
  if ((((param_1->InputClassName == this->InputClassName) &&
       (param_1->HardwareDeviceIdentifier == this->HardwareDeviceIdentifier)) &&
      (param_1->SupportedFeaturesMask == this->SupportedFeaturesMask)) &&
     (param_1->PrimaryDeviceType == this->PrimaryDeviceType)) {
    return true;
  }
  return false;
}

// operator!= @ 14890f8f0

bool __thiscall
FHardwareDeviceIdentifier::operator!=
          (FHardwareDeviceIdentifier *this,FHardwareDeviceIdentifier *param_1)

{
  if ((((this->InputClassName == param_1->InputClassName) &&
       (this->HardwareDeviceIdentifier == param_1->HardwareDeviceIdentifier)) &&
      (this->SupportedFeaturesMask == param_1->SupportedFeaturesMask)) &&
     (this->PrimaryDeviceType == param_1->PrimaryDeviceType)) {
    return false;
  }
  return true;
}

// HasAllSupportedFeatures @ 148960770

bool __thiscall
FHardwareDeviceIdentifier::HasAllSupportedFeatures(FHardwareDeviceIdentifier *this,Type param_1)

{
  return (this->SupportedFeaturesMask & param_1) == param_1;
}

// HasAnySupportedFeatures @ 148960790

bool __thiscall
FHardwareDeviceIdentifier::HasAnySupportedFeatures(FHardwareDeviceIdentifier *this,Type param_1)

{
  return (this->SupportedFeaturesMask & param_1) != Unspecified;
}

// IsValid @ 148967c00

bool __thiscall FHardwareDeviceIdentifier::IsValid(FHardwareDeviceIdentifier *this)

{
  bool bVar1;
  
  bVar1 = ::FName::IsWithinBounds((FNameEntryId)(this->InputClassName).ComparisonIndex.Value);
  if (bVar1) {
    bVar1 = ::FName::IsWithinBounds
                      ((FNameEntryId)(this->HardwareDeviceIdentifier).ComparisonIndex.Value);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// ToString @ 1489842f0

FString * __thiscall
FHardwareDeviceIdentifier::ToString(FHardwareDeviceIdentifier *this,FString *__return_storage_ptr__)

{
  FString local_28;
  FString local_18;
  
  ::FName::ToString(&this->HardwareDeviceIdentifier,&local_18);
  ::FName::ToString(&this->InputClassName,&local_28);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s::%s");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

