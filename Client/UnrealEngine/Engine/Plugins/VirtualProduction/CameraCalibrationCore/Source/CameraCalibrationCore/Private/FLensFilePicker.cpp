// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 2

// StaticStruct @ 14d67edf0

UScriptStruct * __cdecl FLensFilePicker::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLensFilePicker.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CameraCalibrationCore();
    Z_Registration_Info_UScriptStruct_FLensFilePicker.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLensFilePicker,(UObject *)pUVar1,
                         L"LensFilePicker");
  }
  return Z_Registration_Info_UScriptStruct_FLensFilePicker.OuterSingleton;
}

// GetLensFile @ 14d6d52a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULensFile * __thiscall FLensFilePicker::GetLensFile(FLensFilePicker *this)

{
  UCameraCalibrationSubsystem *pUVar1;
  
  if (this->bUseDefaultLensFile != false) {
    pUVar1 = UEngine::GetEngineSubsystem<UCameraCalibrationSubsystem>(GEngine);
    return (pUVar1->DefaultLensFile).field0_0x0.DebugPtr;
  }
  return (this->LensFile).field0_0x0.DebugPtr;
}

