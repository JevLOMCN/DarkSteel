// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FLatestInputDeviceData @ 147bb9210

FLatestInputDeviceData * __thiscall
UInputDeviceSubsystem::FLatestInputDeviceData::FLatestInputDeviceData
          (FLatestInputDeviceData *this,FLatestInputDeviceData *param_1)

{
  TMap<EHardwareDevicePrimaryType,FInputDeviceId,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EHardwareDevicePrimaryType,FInputDeviceId,0>_>
  *pTVar1;
  TMap<EHardwareDevicePrimaryType,FInputDeviceId,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EHardwareDevicePrimaryType,FInputDeviceId,0>_>
  *pTVar2;
  undefined1 *_Dst;
  undefined1 *_Src;
  void *pvVar3;
  
  pTVar1 = &this->LatestDevices;
  (this->LatestDeviceId).InternalId = (param_1->LatestDeviceId).InternalId;
  pTVar2 = &param_1->LatestDevices;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->LatestDevices).field_0x8 = 0;
  *(undefined8 *)&(this->LatestDevices).field_0x20 = 0;
  *(undefined4 *)&(this->LatestDevices).field_0x28 = 0;
  *(undefined4 *)&(this->LatestDevices).field_0x2c = 0x80;
  *(undefined4 *)&(this->LatestDevices).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LatestDevices).field_0x34 = 0;
  *(undefined8 *)&(this->LatestDevices).field_0x40 = 0;
  *(undefined4 *)&(this->LatestDevices).field_0x48 = 0;
  if (pTVar1 != pTVar2) {
    *(undefined8 *)pTVar1 = *(undefined8 *)pTVar2;
    *(undefined8 *)pTVar2 = 0;
    _Dst = &(this->LatestDevices).field_0x10;
    *(undefined4 *)&(this->LatestDevices).field_0x8 =
         *(undefined4 *)&(param_1->LatestDevices).field_0x8;
    _Src = &(param_1->LatestDevices).field_0x10;
    *(undefined4 *)&(this->LatestDevices).field_0xc =
         *(undefined4 *)&(param_1->LatestDevices).field_0xc;
    *(undefined8 *)&(param_1->LatestDevices).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->LatestDevices).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar3 = *(void **)&(this->LatestDevices).field_0x20;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      *(undefined8 *)&(this->LatestDevices).field_0x20 =
           *(undefined8 *)&(param_1->LatestDevices).field_0x20;
      *(undefined8 *)&(param_1->LatestDevices).field_0x20 = 0;
      *(undefined4 *)&(this->LatestDevices).field_0x28 =
           *(undefined4 *)&(param_1->LatestDevices).field_0x28;
      *(undefined4 *)&(this->LatestDevices).field_0x2c =
           *(undefined4 *)&(param_1->LatestDevices).field_0x2c;
      *(undefined8 *)&(param_1->LatestDevices).field_0x28 = 0;
    }
    *(undefined4 *)&(this->LatestDevices).field_0x30 =
         *(undefined4 *)&(param_1->LatestDevices).field_0x30;
    *(undefined4 *)&(this->LatestDevices).field_0x34 =
         *(undefined4 *)&(param_1->LatestDevices).field_0x34;
    *(undefined4 *)&(param_1->LatestDevices).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->LatestDevices).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->LatestDevices).field_0x40 == 0) {
    *(undefined4 *)&(this->LatestDevices).field_0x38 =
         *(undefined4 *)&(param_1->LatestDevices).field_0x38;
  }
  pvVar3 = *(void **)&(this->LatestDevices).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  *(undefined8 *)&(this->LatestDevices).field_0x40 =
       *(undefined8 *)&(param_1->LatestDevices).field_0x40;
  *(undefined8 *)&(param_1->LatestDevices).field_0x40 = 0;
  *(undefined4 *)&(this->LatestDevices).field_0x48 =
       *(undefined4 *)&(param_1->LatestDevices).field_0x48;
  *(undefined4 *)&(param_1->LatestDevices).field_0x48 = 0;
  return this;
}

