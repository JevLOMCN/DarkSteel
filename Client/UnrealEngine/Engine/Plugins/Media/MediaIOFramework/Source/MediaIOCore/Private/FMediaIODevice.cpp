// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 4

// StaticStruct @ 14d77d580

UScriptStruct * __cdecl FMediaIODevice::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMediaIODevice.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UScriptStruct_FMediaIODevice.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMediaIODevice,(UObject *)pUVar1,L"MediaIODevice"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FMediaIODevice.OuterSingleton;
}

// FMediaIODevice @ 14d78a720

FMediaIODevice * __thiscall FMediaIODevice::FMediaIODevice(FMediaIODevice *this)

{
  this->DeviceIdentifier = -1;
  (this->DeviceName).ComparisonIndex = 0;
  (this->DeviceName).Number = 0;
  return this;
}

// operator== @ 14d78dbd0

bool __thiscall FMediaIODevice::operator==(FMediaIODevice *this,FMediaIODevice *param_1)

{
  return param_1->DeviceIdentifier == this->DeviceIdentifier;
}

// IsValid @ 14d7b19d0

bool __thiscall FMediaIODevice::IsValid(FMediaIODevice *this)

{
  return this->DeviceIdentifier != -1;
}

