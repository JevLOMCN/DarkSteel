// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 2

// StaticStruct @ 14cfafb10

UScriptStruct * __cdecl FLiveLinkLightStaticData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkLightStaticData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkInterface();
    Z_Registration_Info_UScriptStruct_FLiveLinkLightStaticData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkLightStaticData,(UObject *)pUVar1,
                         L"LiveLinkLightStaticData");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkLightStaticData.OuterSingleton;
}

// operator= @ 14cfb6fe0

FLiveLinkLightStaticData * __thiscall
FLiveLinkLightStaticData::operator=
          (FLiveLinkLightStaticData *this,FLiveLinkLightStaticData *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)this,
             (TArray<FName,TSizedDefaultAllocator<32>_> *)param_1);
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 1) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 1);
  *(undefined1 *)((longlong)&this->_padding_ + 2) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 2);
  this->bIsTemperatureSupported = param_1->bIsTemperatureSupported;
  this->bIsIntensitySupported = param_1->bIsIntensitySupported;
  this->bIsLightColorSupported = param_1->bIsLightColorSupported;
  this->bIsInnerConeAngleSupported = param_1->bIsInnerConeAngleSupported;
  this->bIsOuterConeAngleSupported = param_1->bIsOuterConeAngleSupported;
  this->bIsAttenuationRadiusSupported = param_1->bIsAttenuationRadiusSupported;
  this->bIsSourceLenghtSupported = param_1->bIsSourceLenghtSupported;
  this->bIsSourceRadiusSupported = param_1->bIsSourceRadiusSupported;
  this->bIsSoftSourceRadiusSupported = param_1->bIsSoftSourceRadiusSupported;
  return this;
}

