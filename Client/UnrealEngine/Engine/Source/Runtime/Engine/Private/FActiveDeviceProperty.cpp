// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 147b9bba0

UScriptStruct * __cdecl FActiveDeviceProperty::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FActiveDeviceProperty.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FActiveDeviceProperty.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FActiveDeviceProperty,(UObject *)pUVar1,
                         L"ActiveDeviceProperty");
  }
  return Z_Registration_Info_UScriptStruct_FActiveDeviceProperty.OuterSingleton;
}

// FActiveDeviceProperty @ 147bb8470

FActiveDeviceProperty * __thiscall
FActiveDeviceProperty::FActiveDeviceProperty(FActiveDeviceProperty *this)

{
  undefined1 *puVar1;
  FInputDevicePropertyHandle FVar2;
  undefined8 local_res8;
  
  (this->Property).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  this->EvaluatedDuration = 0.0;
  this->PlatformUser = -1;
  FVar2 = FInputDevicePropertyHandle::InvalidHandle;
  this->DeviceId = -1;
  this->bLooping = '\0';
  this->bHasBeenAppliedAtLeastOnce = '\0';
  this->bPlayWhilePaused = '\0';
  this->bIgnoreTimeDilation = '\0';
  (this->PropertyHandle).InternalId = FVar2.InternalId;
  return this;
}

// operator== @ 147bc0ad0

bool __thiscall
FActiveDeviceProperty::operator==(FActiveDeviceProperty *this,FActiveDeviceProperty *param_1)

{
  return (this->PropertyHandle).InternalId == (param_1->PropertyHandle).InternalId;
}

// operator!= @ 147bc12f0

bool __thiscall
FActiveDeviceProperty::operator!=(FActiveDeviceProperty *this,FActiveDeviceProperty *param_1)

{
  return (this->PropertyHandle).InternalId != (param_1->PropertyHandle).InternalId;
}

