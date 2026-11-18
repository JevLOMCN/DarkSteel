// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 5

// StaticStruct @ 14d77d5c0

UScriptStruct * __cdecl FMediaIOConnection::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMediaIOConnection.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UScriptStruct_FMediaIOConnection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMediaIOConnection,(UObject *)pUVar1,
                         L"MediaIOConnection");
  }
  return Z_Registration_Info_UScriptStruct_FMediaIOConnection.OuterSingleton;
}

// FMediaIOConnection @ 14d789eb0

FMediaIOConnection * __thiscall FMediaIOConnection::FMediaIOConnection(FMediaIOConnection *this)

{
  (this->Device).DeviceIdentifier = -1;
  (this->Device).DeviceName.ComparisonIndex = 0;
  (this->Device).DeviceName.Number = 0;
  this->Protocol = MediaIOCoreDefinitions::NAME_Protocol;
  this->TransportType = SingleLink;
  this->QuadTransportType = SquareDivision;
  this->PortIdentifier = -1;
  return this;
}

// operator== @ 14d78db90

bool __thiscall FMediaIOConnection::operator==(FMediaIOConnection *this,FMediaIOConnection *param_1)

{
  if (((((this->Device).DeviceIdentifier == (param_1->Device).DeviceIdentifier) &&
       (param_1->TransportType == this->TransportType)) &&
      (param_1->PortIdentifier == this->PortIdentifier)) &&
     ((param_1->TransportType != QuadLink || (param_1->QuadTransportType == this->QuadTransportType)
      ))) {
    return true;
  }
  return false;
}

// IsValid @ 14d7b19b0

bool __thiscall FMediaIOConnection::IsValid(FMediaIOConnection *this)

{
  if (((this->Device).DeviceIdentifier != -1) && (this->PortIdentifier != -1)) {
    return true;
  }
  return false;
}

// ToUrl @ 14d7c12a0

FString * __thiscall
FMediaIOConnection::ToUrl(FMediaIOConnection *this,FString *__return_storage_ptr__)

{
  FString local_18;
  
  if (((this->Device).DeviceIdentifier == -1) || (this->PortIdentifier == -1)) {
    ::FName::ToString(&this->Protocol,__return_storage_ptr__);
  }
  else {
    ::FName::ToString(&this->Protocol,&local_18);
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s://%s%d/%s%d");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

