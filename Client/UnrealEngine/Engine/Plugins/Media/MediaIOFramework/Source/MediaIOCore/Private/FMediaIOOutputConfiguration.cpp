// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 4

// StaticStruct @ 14d77d700

UScriptStruct * __cdecl FMediaIOOutputConfiguration::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMediaIOOutputConfiguration.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UScriptStruct_FMediaIOOutputConfiguration.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMediaIOOutputConfiguration,(UObject *)pUVar1,
                         L"MediaIOOutputConfiguration");
  }
  return Z_Registration_Info_UScriptStruct_FMediaIOOutputConfiguration.OuterSingleton;
}

// FMediaIOOutputConfiguration @ 14d78a7e0

FMediaIOOutputConfiguration * __thiscall
FMediaIOOutputConfiguration::FMediaIOOutputConfiguration(FMediaIOOutputConfiguration *this)

{
  (this->MediaConfiguration).bIsInput = true;
  (this->MediaConfiguration).MediaConnection.Device.DeviceName.ComparisonIndex = 0;
  (this->MediaConfiguration).MediaConnection.Device.DeviceName.Number = 0;
  (this->MediaConfiguration).MediaConnection.Device.DeviceIdentifier = -1;
  (this->MediaConfiguration).MediaConnection.Protocol = MediaIOCoreDefinitions::NAME_Protocol;
  (this->MediaConfiguration).MediaConnection.TransportType = SingleLink;
  (this->MediaConfiguration).MediaConnection.QuadTransportType = SquareDivision;
  (this->MediaConfiguration).MediaConnection.PortIdentifier = -1;
  (this->MediaConfiguration).MediaMode.FrameRate.Numerator = 0x1e;
  (this->MediaConfiguration).MediaMode.FrameRate.Denominator = 1;
  (this->MediaConfiguration).MediaMode.Resolution.field0_0x0._s_0.X = 0x780;
  *(undefined8 *)((longlong)&(this->MediaConfiguration).MediaMode.Resolution.field0_0x0 + 4) = 0x438
  ;
  (this->MediaConfiguration).MediaMode.DeviceModeIdentifier = -1;
  this->OutputType = Fill;
  this->KeyPortIdentifier = -1;
  this->OutputReference = FreeRun;
  this->ReferencePortIdentifier = -1;
  (this->MediaConfiguration).bIsInput = false;
  return this;
}

// operator== @ 14d78dc50

bool __thiscall
FMediaIOOutputConfiguration::operator==
          (FMediaIOOutputConfiguration *this,FMediaIOOutputConfiguration *param_1)

{
  EMediaIOTransportType EVar1;
  
  if (((((((this->OutputType == param_1->OutputType) &&
          ((this->MediaConfiguration).MediaConnection.Device.DeviceIdentifier ==
           (param_1->MediaConfiguration).MediaConnection.Device.DeviceIdentifier)) &&
         (EVar1 = (param_1->MediaConfiguration).MediaConnection.TransportType,
         EVar1 == (this->MediaConfiguration).MediaConnection.TransportType)) &&
        ((param_1->MediaConfiguration).MediaConnection.PortIdentifier ==
         (this->MediaConfiguration).MediaConnection.PortIdentifier)) &&
       (((EVar1 != QuadLink ||
         ((param_1->MediaConfiguration).MediaConnection.QuadTransportType ==
          (this->MediaConfiguration).MediaConnection.QuadTransportType)) &&
        (((param_1->MediaConfiguration).MediaMode.DeviceModeIdentifier ==
          (this->MediaConfiguration).MediaMode.DeviceModeIdentifier &&
         (((this->MediaConfiguration).bIsInput == (param_1->MediaConfiguration).bIsInput &&
          (this->OutputReference == param_1->OutputReference)))))))) &&
      ((this->OutputType != FillAndKey || (this->KeyPortIdentifier == param_1->KeyPortIdentifier))))
     && ((this->OutputReference != Input ||
         (this->ReferencePortIdentifier == param_1->ReferencePortIdentifier)))) {
    return true;
  }
  return false;
}

// IsValid @ 14d7b1a20

bool __thiscall FMediaIOOutputConfiguration::IsValid(FMediaIOOutputConfiguration *this)

{
  bool bVar1;
  
  if ((((this->MediaConfiguration).MediaConnection.Device.DeviceIdentifier == -1) ||
      ((this->MediaConfiguration).MediaConnection.PortIdentifier == -1)) ||
     ((this->MediaConfiguration).MediaMode.DeviceModeIdentifier == -1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    if ((this->OutputType == FillAndKey) && (bVar1 = true, this->KeyPortIdentifier == -1)) {
      bVar1 = false;
    }
    if (this->OutputReference == Input) {
      if (this->ReferencePortIdentifier == -1) {
        bVar1 = false;
      }
      return bVar1;
    }
  }
  return bVar1;
}

