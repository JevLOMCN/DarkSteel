// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 4

// StaticStruct @ 14d77d680

UScriptStruct * __cdecl FMediaIOConfiguration::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMediaIOConfiguration.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UScriptStruct_FMediaIOConfiguration.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMediaIOConfiguration,(UObject *)pUVar1,
                         L"MediaIOConfiguration");
  }
  return Z_Registration_Info_UScriptStruct_FMediaIOConfiguration.OuterSingleton;
}

// FMediaIOConfiguration @ 14d789e50

FMediaIOConfiguration * __thiscall
FMediaIOConfiguration::FMediaIOConfiguration(FMediaIOConfiguration *this)

{
  this->bIsInput = true;
  (this->MediaConnection).Device.DeviceName.ComparisonIndex = 0;
  (this->MediaConnection).Device.DeviceName.Number = 0;
  (this->MediaConnection).Device.DeviceIdentifier = -1;
  (this->MediaConnection).Protocol = MediaIOCoreDefinitions::NAME_Protocol;
  (this->MediaConnection).TransportType = SingleLink;
  (this->MediaConnection).QuadTransportType = SquareDivision;
  (this->MediaConnection).PortIdentifier = -1;
  (this->MediaMode).FrameRate.Numerator = 0x1e;
  (this->MediaMode).FrameRate.Denominator = 1;
  (this->MediaMode).Resolution.field0_0x0._s_0.X = 0x780;
  *(undefined8 *)((longlong)&(this->MediaMode).Resolution.field0_0x0 + 4) = 0x438;
  (this->MediaMode).DeviceModeIdentifier = -1;
  return this;
}

// operator== @ 14d78db40

bool __thiscall
FMediaIOConfiguration::operator==(FMediaIOConfiguration *this,FMediaIOConfiguration *param_1)

{
  EMediaIOTransportType EVar1;
  
  if (((((this->MediaConnection).Device.DeviceIdentifier ==
         (param_1->MediaConnection).Device.DeviceIdentifier) &&
       (EVar1 = (param_1->MediaConnection).TransportType,
       EVar1 == (this->MediaConnection).TransportType)) &&
      ((param_1->MediaConnection).PortIdentifier == (this->MediaConnection).PortIdentifier)) &&
     (((EVar1 != QuadLink ||
       ((param_1->MediaConnection).QuadTransportType == (this->MediaConnection).QuadTransportType))
      && (((param_1->MediaMode).DeviceModeIdentifier == (this->MediaMode).DeviceModeIdentifier &&
          (this->bIsInput == param_1->bIsInput)))))) {
    return true;
  }
  return false;
}

// IsValid @ 14d7b1990

bool __thiscall FMediaIOConfiguration::IsValid(FMediaIOConfiguration *this)

{
  if ((((this->MediaConnection).Device.DeviceIdentifier != -1) &&
      ((this->MediaConnection).PortIdentifier != -1)) &&
     ((this->MediaMode).DeviceModeIdentifier != -1)) {
    return true;
  }
  return false;
}

