// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 2

// StaticStruct @ 14a6b33b0

UScriptStruct * __cdecl FPlayerMappableKeyQueryOptions::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPlayerMappableKeyQueryOptions.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_EnhancedInput();
    Z_Registration_Info_UScriptStruct_FPlayerMappableKeyQueryOptions.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPlayerMappableKeyQueryOptions,(UObject *)pUVar1,
                         L"PlayerMappableKeyQueryOptions");
  }
  return Z_Registration_Info_UScriptStruct_FPlayerMappableKeyQueryOptions.OuterSingleton;
}

// FPlayerMappableKeyQueryOptions @ 14a6cad90

FPlayerMappableKeyQueryOptions * __thiscall
FPlayerMappableKeyQueryOptions::FPlayerMappableKeyQueryOptions(FPlayerMappableKeyQueryOptions *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  
  (this->MappingName).ComparisonIndex = 0;
  (this->MappingName).Number = 0;
  (this->KeyToMatch).KeyName = EKeys::Invalid.KeyName;
  (this->KeyToMatch).KeyDetails.Object = EKeys::Invalid.KeyDetails.Object;
  FVar2 = EKeys::Invalid.KeyDetails.SharedReferenceCount;
  (this->KeyToMatch).KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  this->SlotToMatch = Unspecified;
  this->RequiredDeviceType = Unspecified;
  this->bMatchBasicKeyTypes = '\x01';
  this->bMatchKeyAxisType = '\0';
  this->RequiredDeviceFlags = 0;
  return this;
}

