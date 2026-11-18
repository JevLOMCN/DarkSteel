// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 4

// StaticStruct @ 14d77d6c0

UScriptStruct * __cdecl FMediaIOInputConfiguration::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMediaIOInputConfiguration.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UScriptStruct_FMediaIOInputConfiguration.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMediaIOInputConfiguration,(UObject *)pUVar1,
                         L"MediaIOInputConfiguration");
  }
  return Z_Registration_Info_UScriptStruct_FMediaIOInputConfiguration.OuterSingleton;
}

// FMediaIOInputConfiguration @ 14d78a740

FMediaIOInputConfiguration * __thiscall
FMediaIOInputConfiguration::FMediaIOInputConfiguration(FMediaIOInputConfiguration *this)

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
  this->InputType = Fill;
  this->KeyPortIdentifier = -1;
  (this->MediaConfiguration).bIsInput = true;
  return this;
}

// operator== @ 14d78dbe0

bool __thiscall
FMediaIOInputConfiguration::operator==
          (FMediaIOInputConfiguration *this,FMediaIOInputConfiguration *param_1)

{
  EMediaIOTransportType EVar1;
  
  if ((((((this->InputType == param_1->InputType) &&
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
        ((this->MediaConfiguration).bIsInput == (param_1->MediaConfiguration).bIsInput)))))) &&
     ((this->InputType != FillAndKey || (this->KeyPortIdentifier == param_1->KeyPortIdentifier)))) {
    return true;
  }
  return false;
}

// IsValid @ 14d7b19e0

bool __thiscall FMediaIOInputConfiguration::IsValid(FMediaIOInputConfiguration *this)

{
  bool bVar1;
  
  if ((((this->MediaConfiguration).MediaConnection.Device.DeviceIdentifier == -1) ||
      ((this->MediaConfiguration).MediaConnection.PortIdentifier == -1)) ||
     ((this->MediaConfiguration).MediaMode.DeviceModeIdentifier == -1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    if (this->InputType == FillAndKey) {
      return this->KeyPortIdentifier != -1;
    }
  }
  return bVar1;
}

