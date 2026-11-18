// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioCapture
// Functions: 2

// StaticStruct @ 14d0cd5a0

UScriptStruct * __cdecl FAudioInputDeviceInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAudioInputDeviceInfo.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_AudioCapture();
    Z_Registration_Info_UScriptStruct_FAudioInputDeviceInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAudioInputDeviceInfo,(UObject *)pUVar1,
                         L"AudioInputDeviceInfo");
  }
  return Z_Registration_Info_UScriptStruct_FAudioInputDeviceInfo.OuterSingleton;
}

// FAudioInputDeviceInfo @ 14d0ce640

FAudioInputDeviceInfo * __thiscall
FAudioInputDeviceInfo::FAudioInputDeviceInfo
          (FAudioInputDeviceInfo *this,FCaptureDeviceInfo *param_1)

{
  ::FString::FString(&this->DeviceName,&param_1->DeviceName);
  ::FString::FString(&this->DeviceId,&param_1->DeviceId);
  this->InputChannels = param_1->InputChannels;
  this->PreferredSampleRate = param_1->PreferredSampleRate;
  this->field_0x28 =
       this->field_0x28 ^ (this->bSupportsHardwareAEC ^ param_1->bSupportsHardwareAEC) & 1;
  return this;
}

