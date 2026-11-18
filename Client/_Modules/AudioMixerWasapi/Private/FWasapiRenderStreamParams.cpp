// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerWasapi
// Functions: 1

// FWasapiRenderStreamParams @ 148d42d90

FWasapiRenderStreamParams * __thiscall
Audio::FWasapiRenderStreamParams::FWasapiRenderStreamParams
          (FWasapiRenderStreamParams *this,FWasapiRenderStreamParams *param_1)

{
  undefined1 *puVar1;
  Type TVar2;
  
  (this->MMDevice).RawPointer = (param_1->MMDevice).RawPointer;
  (param_1->MMDevice).RawPointer = (IMMDevice *)0x0;
  (this->HardwareDeviceInfo).Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HardwareDeviceInfo).Name.Data.AllocatorInstance.Data =
       (param_1->HardwareDeviceInfo).Name.Data.AllocatorInstance.Data;
  (param_1->HardwareDeviceInfo).Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HardwareDeviceInfo).Name.Data.ArrayNum = (param_1->HardwareDeviceInfo).Name.Data.ArrayNum;
  (this->HardwareDeviceInfo).Name.Data.ArrayMax = (param_1->HardwareDeviceInfo).Name.Data.ArrayMax;
  (param_1->HardwareDeviceInfo).Name.Data.ArrayNum = 0;
  (param_1->HardwareDeviceInfo).Name.Data.ArrayMax = 0;
  (this->HardwareDeviceInfo).DeviceId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HardwareDeviceInfo).DeviceId.Data.AllocatorInstance.Data =
       (param_1->HardwareDeviceInfo).DeviceId.Data.AllocatorInstance.Data;
  (param_1->HardwareDeviceInfo).DeviceId.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->HardwareDeviceInfo).DeviceId.Data.ArrayNum =
       (param_1->HardwareDeviceInfo).DeviceId.Data.ArrayNum;
  (this->HardwareDeviceInfo).DeviceId.Data.ArrayMax =
       (param_1->HardwareDeviceInfo).DeviceId.Data.ArrayMax;
  (param_1->HardwareDeviceInfo).DeviceId.Data.ArrayNum = 0;
  (param_1->HardwareDeviceInfo).DeviceId.Data.ArrayMax = 0;
  (this->HardwareDeviceInfo).NumChannels = (param_1->HardwareDeviceInfo).NumChannels;
  (this->HardwareDeviceInfo).NumDirectOutChannels =
       (param_1->HardwareDeviceInfo).NumDirectOutChannels;
  (this->HardwareDeviceInfo).SampleRate = (param_1->HardwareDeviceInfo).SampleRate;
  TVar2 = (param_1->HardwareDeviceInfo).Format;
  (this->HardwareDeviceInfo).OutputChannelArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->HardwareDeviceInfo).Format = TVar2;
  (this->HardwareDeviceInfo).OutputChannelArray.AllocatorInstance.Data =
       (param_1->HardwareDeviceInfo).OutputChannelArray.AllocatorInstance.Data;
  (param_1->HardwareDeviceInfo).OutputChannelArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->HardwareDeviceInfo).OutputChannelArray.ArrayNum =
       (param_1->HardwareDeviceInfo).OutputChannelArray.ArrayNum;
  (this->HardwareDeviceInfo).OutputChannelArray.ArrayMax =
       (param_1->HardwareDeviceInfo).OutputChannelArray.ArrayMax;
  (param_1->HardwareDeviceInfo).OutputChannelArray.ArrayNum = 0;
  (param_1->HardwareDeviceInfo).OutputChannelArray.ArrayMax = 0;
  puVar1 = &(this->HardwareDeviceInfo).field_0x40;
  *puVar1 = *puVar1 ^ ((this->HardwareDeviceInfo).bIsSystemDefault ^
                      (param_1->HardwareDeviceInfo).bIsSystemDefault) & 1;
  this->NumFrames = param_1->NumFrames;
  this->NumBuffers = param_1->NumBuffers;
  this->SampleRate = param_1->SampleRate;
  return this;
}

