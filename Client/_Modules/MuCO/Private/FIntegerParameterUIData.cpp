// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 2

// StaticStruct @ 14ab993d0

UScriptStruct * __cdecl FIntegerParameterUIData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIntegerParameterUIData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CustomizableObject();
    Z_Registration_Info_UScriptStruct_FIntegerParameterUIData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIntegerParameterUIData,(UObject *)pUVar1,
                         L"IntegerParameterUIData");
  }
  return Z_Registration_Info_UScriptStruct_FIntegerParameterUIData.OuterSingleton;
}

// FIntegerParameterUIData @ 14abbc5d0

FIntegerParameterUIData * __thiscall
FIntegerParameterUIData::FIntegerParameterUIData
          (FIntegerParameterUIData *this,FMutableParamUIMetadata *param_1)

{
  FMutableUIMetadata::FMutableUIMetadata((FMutableUIMetadata *)this);
  (this->ParamUIMetadata).MaximumValue = 1.0;
  (this->ParamUIMetadata).MinimumValue = 0.0;
  (this->ParamUIMetadata).GameplayTags.GameplayTags.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ParamUIMetadata).GameplayTags.GameplayTags.ArrayNum = 0;
  (this->ParamUIMetadata).GameplayTags.GameplayTags.ArrayMax = 0;
  (this->ParamUIMetadata).GameplayTags.ParentTags.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ParamUIMetadata).GameplayTags.ParentTags.ArrayNum = 0;
  (this->ParamUIMetadata).GameplayTags.ParentTags.ArrayMax = 0;
  FMutableParamUIMetadata::operator=(&this->ParamUIMetadata,param_1);
  return this;
}

