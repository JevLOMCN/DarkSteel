// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 2

// StaticStruct @ 14a6bbdb0

UScriptStruct * __cdecl FMapPlayerKeyArgs::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMapPlayerKeyArgs.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_EnhancedInput();
    Z_Registration_Info_UScriptStruct_FMapPlayerKeyArgs.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMapPlayerKeyArgs,(UObject *)pUVar1,
                         L"MapPlayerKeyArgs");
  }
  return Z_Registration_Info_UScriptStruct_FMapPlayerKeyArgs.OuterSingleton;
}

// FMapPlayerKeyArgs @ 14a6ca720

FMapPlayerKeyArgs * __thiscall FMapPlayerKeyArgs::FMapPlayerKeyArgs(FMapPlayerKeyArgs *this)

{
  atomic<int> *paVar1;
  byte bVar2;
  FSharedReferencer<1> FVar3;
  
  (this->MappingName).ComparisonIndex = 0;
  (this->MappingName).Number = 0;
  this->Slot = Unspecified;
  (this->NewKey).KeyName = EKeys::Invalid.KeyName;
  (this->NewKey).KeyDetails.Object = EKeys::Invalid.KeyDetails.Object;
  FVar3 = EKeys::Invalid.KeyDetails.SharedReferenceCount;
  (this->NewKey).KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar3.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  (this->HardwareDeviceId).ComparisonIndex = 0;
  (this->HardwareDeviceId).Number = 0;
  (this->ProfileId).TagName = (FName)0x0;
  (this->ProfileIdString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->bCreateMatchingSlotIfNeeded = '\x01';
  this->bDeferOnSettingsChangedBroadcast = '\0';
  (this->ProfileIdString).Data.ArrayNum = 0;
  (this->ProfileIdString).Data.ArrayMax = 0;
  return this;
}

