// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIO
// Functions: 4

// StaticStruct @ 14d7646f0

UScriptStruct * __cdecl FOpenColorIODisplayConfiguration::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOpenColorIODisplayConfiguration.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OpenColorIO();
    Z_Registration_Info_UScriptStruct_FOpenColorIODisplayConfiguration.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration,
                         (UObject *)pUVar1,L"OpenColorIODisplayConfiguration");
  }
  return Z_Registration_Info_UScriptStruct_FOpenColorIODisplayConfiguration.OuterSingleton;
}

// FOpenColorIODisplayConfiguration @ 14d768c40

FOpenColorIODisplayConfiguration * __thiscall
FOpenColorIODisplayConfiguration::FOpenColorIODisplayConfiguration
          (FOpenColorIODisplayConfiguration *this,FOpenColorIODisplayConfiguration *param_1)

{
  UOpenColorIOConfiguration *pUVar1;
  
  this->bIsEnabled = param_1->bIsEnabled;
  pUVar1 = (param_1->ColorConfiguration).ConfigurationSource.field0_0x0.DebugPtr;
  (this->ColorConfiguration).ConfigurationSource.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UOpenColorIOConfiguration *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  ::FString::FString(&(this->ColorConfiguration).SourceColorSpace.ColorSpaceName,
                     &(param_1->ColorConfiguration).SourceColorSpace.ColorSpaceName);
  ::FString::FString(&(this->ColorConfiguration).SourceColorSpace.FamilyName,
                     &(param_1->ColorConfiguration).SourceColorSpace.FamilyName);
  ::FString::FString(&(this->ColorConfiguration).SourceColorSpace.Description,
                     &(param_1->ColorConfiguration).SourceColorSpace.Description);
  ::FString::FString(&(this->ColorConfiguration).DestinationColorSpace.ColorSpaceName,
                     &(param_1->ColorConfiguration).DestinationColorSpace.ColorSpaceName);
  ::FString::FString(&(this->ColorConfiguration).DestinationColorSpace.FamilyName,
                     &(param_1->ColorConfiguration).DestinationColorSpace.FamilyName);
  ::FString::FString(&(this->ColorConfiguration).DestinationColorSpace.Description,
                     &(param_1->ColorConfiguration).DestinationColorSpace.Description);
  ::FString::FString(&(this->ColorConfiguration).DestinationDisplayView.Display,
                     &(param_1->ColorConfiguration).DestinationDisplayView.Display);
  ::FString::FString(&(this->ColorConfiguration).DestinationDisplayView.View,
                     &(param_1->ColorConfiguration).DestinationDisplayView.View);
  ::FString::FString(&(this->ColorConfiguration).DestinationDisplayView.Description,
                     &(param_1->ColorConfiguration).DestinationDisplayView.Description);
  (this->ColorConfiguration).DisplayViewDirection =
       (param_1->ColorConfiguration).DisplayViewDirection;
  return this;
}

// PostSerialize @ 14d774550

void __thiscall
FOpenColorIODisplayConfiguration::PostSerialize
          (FOpenColorIODisplayConfiguration *this,FArchive *param_1)

{
  UOpenColorIOConfiguration *pUVar1;
  bool bVar2;
  int iVar3;
  
  if (((((param_1->field_0x28 & 1) != 0) &&
       (iVar3 = FArchiveState::CustomVer
                          ((FArchiveState *)param_1,&FUE5ReleaseStreamObjectVersion::GUID),
       iVar3 < 0x2f)) &&
      (pUVar1 = (this->ColorConfiguration).ConfigurationSource.field0_0x0.DebugPtr,
      pUVar1 != (UOpenColorIOConfiguration *)0x0)) && (((uint)pUVar1->_padding_ >> 0x1e & 1) == 0))
  {
    if (((this->ColorConfiguration).DestinationDisplayView.Display.Data.ArrayNum < 2) ||
       ((this->ColorConfiguration).DestinationDisplayView.View.Data.ArrayNum < 2)) {
      if ((this->ColorConfiguration).SourceColorSpace.ColorSpaceName.Data.ArrayNum < 2) {
        return;
      }
      if ((this->ColorConfiguration).DestinationColorSpace.ColorSpaceName.Data.ArrayNum < 2) {
        return;
      }
      bVar2 = UOpenColorIOConfiguration::HasTransform
                        ((this->ColorConfiguration).ConfigurationSource.field0_0x0.DebugPtr,
                         &(this->ColorConfiguration).SourceColorSpace.ColorSpaceName,
                         &(this->ColorConfiguration).DestinationColorSpace.ColorSpaceName);
    }
    else {
      if ((this->ColorConfiguration).SourceColorSpace.ColorSpaceName.Data.ArrayNum < 2) {
        return;
      }
      bVar2 = UOpenColorIOConfiguration::HasTransform
                        ((this->ColorConfiguration).ConfigurationSource.field0_0x0.DebugPtr,
                         &(this->ColorConfiguration).SourceColorSpace.ColorSpaceName,
                         &(this->ColorConfiguration).DestinationDisplayView.Display,
                         &(this->ColorConfiguration).DestinationDisplayView.View,
                         (this->ColorConfiguration).DisplayViewDirection);
    }
    if (bVar2 != false) {
      this->bIsEnabled = true;
    }
  }
  return;
}

// Serialize @ 14d776530

bool __thiscall
FOpenColorIODisplayConfiguration::Serialize
          (FOpenColorIODisplayConfiguration *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  return false;
}

